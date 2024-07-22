#include "global.h"
#include "battle.h"
#include "event_data.h"
#include "field_player_avatar.h"
#include "overworld.h"
#include "main.h"
#include "pokeblock.h"
#include "safari_zone.h"
#include "script.h"
#include "string_util.h"
#include "tv.h"
#include "constants/game_stat.h"
#include "field_screen_effect.h"

struct PokeblockFeeder
{
    /*0x00*/ s16 x;
    /*0x02*/ s16 y;
    /*0x04*/ s8 mapNum;
    /*0x05*/ u8 stepCounter;
    /*0x08*/ struct Pokeblock pokeblock;
};

#define NUM_POKEBLOCK_FEEDERS 10

extern const u8 SafariZone_EventScript_TimesUp[];
extern const u8 SafariZone_EventScript_RetirePrompt[];
extern const u8 SafariZone_EventScript_OutOfBallsMidBattle[];
extern const u8 SafariZone_EventScript_OutOfBalls[];

EWRAM_DATA u8 gNumSafariBalls = 0;
EWRAM_DATA static u16 sSafariZoneStepCounter = 0;
EWRAM_DATA static u8 sSafariZoneCaughtMons = 0;
EWRAM_DATA static u8 sSafariZonePkblkUses = 0;
EWRAM_DATA static struct PokeblockFeeder sPokeblockFeeders[NUM_POKEBLOCK_FEEDERS] = {0};

static void ClearAllPokeblockFeeders(void);
static void DecrementFeederStepCounters(void);

bool32 GetSafariZoneFlag(void)
{
    return FlagGet(FLAG_SYS_SAFARI_MODE);
}

void SetSafariZoneFlag(void)
{
    FlagSet(FLAG_SYS_SAFARI_MODE);
}

void ResetSafariZoneFlag(void)
{
    FlagClear(FLAG_SYS_SAFARI_MODE);
}

void EnterSafariMode(void)
{
    IncrementGameStat(GAME_STAT_ENTERED_SAFARI_ZONE);
    SetSafariZoneFlag();
    ClearAllPokeblockFeeders();
    gNumSafariBalls = 30;
    sSafariZoneStepCounter = 500;
    sSafariZoneCaughtMons = 0;
    sSafariZonePkblkUses = 0;
}

void ExitSafariMode(void)
{
    TryPutSafariFanClubOnAir(sSafariZoneCaughtMons, sSafariZonePkblkUses);
    ResetSafariZoneFlag();
    ClearAllPokeblockFeeders();
    gNumSafariBalls = 0;
    sSafariZoneStepCounter = 0;
}

bool8 SafariZoneTakeStep(void)
{
    if (GetSafariZoneFlag() == FALSE)
    {
        return FALSE;
    }

    DecrementFeederStepCounters();
    sSafariZoneStepCounter--;
    if (sSafariZoneStepCounter == 0)
    {
        ScriptContext_SetupScript(SafariZone_EventScript_TimesUp);
        return TRUE;
    }
    return FALSE;
}

void SafariZoneRetirePrompt(void)
{
    ScriptContext_SetupScript(SafariZone_EventScript_RetirePrompt);
}

void CB2_EndSafariBattle(void)
{
    sSafariZonePkblkUses += gBattleResults.pokeblockThrows;
    if (gBattleOutcome == B_OUTCOME_CAUGHT)
        sSafariZoneCaughtMons++;
    if (gNumSafariBalls != 0)
    {
        SetMainCallback2(CB2_ReturnToField);
    }
    else if (gBattleOutcome == B_OUTCOME_NO_SAFARI_BALLS)
    {
        RunScriptImmediately(SafariZone_EventScript_OutOfBallsMidBattle);
        WarpIntoMap();
        gFieldCallback = FieldCB_ReturnToFieldNoScriptCheckMusic;
        SetMainCallback2(CB2_LoadMap);
    }
    else if (gBattleOutcome == B_OUTCOME_CAUGHT)
    {
        ScriptContext_SetupScript(SafariZone_EventScript_OutOfBalls);
        ScriptContext_Stop();
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
    }
}

static void ClearPokeblockFeeder(u8 index)
{
    memset(&sPokeblockFeeders[index], 0, sizeof(struct PokeblockFeeder));
}

static void ClearAllPokeblockFeeders(void)
{
    memset(sPokeblockFeeders, 0, sizeof(sPokeblockFeeders));
}

void GetPokeblockFeederInFront(void)
{
    s16 x, y;
    u16 i;

    GetXYCoordsOneStepInFrontOfPlayer(&x, &y);

    for (i = 0; i < NUM_POKEBLOCK_FEEDERS; i++)
    {
        if (gSaveBlock1Ptr->location.mapNum == sPokeblockFeeders[i].mapNum
         && sPokeblockFeeders[i].x == x
         && sPokeblockFeeders[i].y == y)
        {
            gSpecialVar_Result = i;
            StringCopy(gStringVar1, gPokeblockNames[sPokeblockFeeders[i].pokeblock.color]);
            return;
        }
    }

    gSpecialVar_Result = -1;
}

void GetPokeblockFeederWithinRange(void)
{
    s16 x, y;
    u16 i;

    PlayerGetDestCoords(&x, &y);

    for (i = 0; i < NUM_POKEBLOCK_FEEDERS; i++)
    {
        if (gSaveBlock1Ptr->location.mapNum == sPokeblockFeeders[i].mapNum)
        {
            // Get absolute value of x and y distance from Pokeblock feeder on current map.
            x -= sPokeblockFeeders[i].x;
            y -= sPokeblockFeeders[i].y;
            if (x < 0)
                x *= -1;
            if (y < 0)
                y *= -1;
            if ((x + y) <= 5)
            {
                gSpecialVar_Result = i;
                return;
            }
        }
    }

    gSpecialVar_Result = -1;
}

// unused
struct Pokeblock *SafariZoneGetPokeblockInFront(void)
{
    GetPokeblockFeederInFront();

    if (gSpecialVar_Result == 0xFFFF)
        return NULL;
    else
        return &sPokeblockFeeders[gSpecialVar_Result].pokeblock;
}

struct Pokeblock *SafariZoneGetActivePokeblock(void)
{
    GetPokeblockFeederWithinRange();

    if (gSpecialVar_Result == 0xFFFF)
        return NULL;
    else
        return &sPokeblockFeeders[gSpecialVar_Result].pokeblock;
}

void SafariZoneActivatePokeblockFeeder(u8 pkblId)
{
    s16 x, y;
    u8 i;

    for (i = 0; i < NUM_POKEBLOCK_FEEDERS; i++)
    {
        // Find free entry in sPokeblockFeeders
        if (sPokeblockFeeders[i].mapNum == 0
         && sPokeblockFeeders[i].x == 0
         && sPokeblockFeeders[i].y == 0)
        {
            // Initialize Pokeblock feeder
            GetXYCoordsOneStepInFrontOfPlayer(&x, &y);
            sPokeblockFeeders[i].mapNum = gSaveBlock1Ptr->location.mapNum;
            sPokeblockFeeders[i].pokeblock = gSaveBlock1Ptr->pokeblocks[pkblId];
            sPokeblockFeeders[i].stepCounter = 100;
            sPokeblockFeeders[i].x = x;
            sPokeblockFeeders[i].y = y;
            break;
        }
    }
}

static void DecrementFeederStepCounters(void)
{
    u8 i;

    for (i = 0; i < NUM_POKEBLOCK_FEEDERS; i++)
    {
        if (sPokeblockFeeders[i].stepCounter != 0)
        {
            sPokeblockFeeders[i].stepCounter--;
            if (sPokeblockFeeders[i].stepCounter == 0)
                ClearPokeblockFeeder(i);
        }
    }
}

// unused
bool8 GetInFrontFeederPokeblockAndSteps(void)
{
    GetPokeblockFeederInFront();

    if (gSpecialVar_Result == 0xFFFF)
    {
        return FALSE;
    }

    ConvertIntToDecimalStringN(gStringVar2,
        sPokeblockFeeders[gSpecialVar_Result].stepCounter,
        STR_CONV_MODE_LEADING_ZEROS, 3);

    return TRUE;
}

// -------------------------------------------------------------------------------------------------
// Everything below this is code for the Pacifidlog Diving Minigame, which functions similarly to the Safari game!
// -------------------------------------------------------------------------------------------------

EWRAM_DATA static u8 sDivingMinigameSeenMons = 0;
extern const u8 DivingMinigame_EventScript_TimesUp[];
extern const u8 DivingMinigame_EventScript_AllPokemonFainted[];

void EnterDivingMinigame(void)
{
    FlagSet(FLAG_DOING_DIVING_MINIGAME);
    FlagSet(FLAG_HIDE_MAP_NAME_POPUP);
    VarSet(VAR_DIVING_MINIGAME_STEP_COUNT, 201); // set maximum number of steps before time up (+1, for code reasons)
    VarSet(VAR_DIVING_MINIGAME_SCORE, 0);
    VarSet(VAR_DIVING_MINIGAME_C1_SCORE, 0);
    VarSet(VAR_DIVING_MINIGAME_C2_SCORE, 0);
    VarSet(VAR_DIVING_MINIGAME_PLAYER_SPECIES, 0);
    VarSet(VAR_DIVING_MINIGAME_C1_SPECIES, 0);
    VarSet(VAR_DIVING_MINIGAME_C2_SPECIES, 0);
    sDivingMinigameSeenMons = 0;

    PlayerFreeze();
    ResetScubaSafariTreasureFlags();
    RandomizeScubaSafariTreasureFlags();
}

void ExitDivingMinigame(void)
{
    // called as minigame ends, either with player running out of steps/encounters or by fainting
    FlagClear(FLAG_DOING_DIVING_MINIGAME);
    VarSet(VAR_DIVING_MINIGAME_STEP_COUNT, 0);
    FlagSet(FLAG_HIDE_MAP_NAME_POPUP);

    ResetScubaSafariTreasureFlags();

    ScubaSafari_GenerateCompetitorPokemon();
}

void CB2_EndDivingMinigameBattle(void)
{
    sDivingMinigameSeenMons++;

    if (gBattleOutcome == B_OUTCOME_CAUGHT)
    {
        // SCORE CALCULATION
        // First, set base score based on species (Rarity Factor)
        VarSet(VAR_DIVING_MINIGAME_SCORE, PokemonRarityScore(GetMonData(&gEnemyParty[gBattlerPartyIndexes[GetCatchingBattler()]], MON_DATA_SPECIES)));

        // Next, add the Pokémon's LEVEL * 3 to the score
        VarSet(VAR_DIVING_MINIGAME_SCORE, (VarGet(VAR_DIVING_MINIGAME_SCORE) + (GetMonData(&gEnemyParty[gBattlerPartyIndexes[GetCatchingBattler()]], MON_DATA_LEVEL) * 3)));

        // Next, add each of the Pokémon's IVs to the score (+0-31 per stat, up to +186 if perfect IVs)
        VarSet(VAR_DIVING_MINIGAME_SCORE, (VarGet(VAR_DIVING_MINIGAME_SCORE) + (GetMonData(&gEnemyParty[gBattlerPartyIndexes[GetCatchingBattler()]], MON_DATA_HP_IV))));
        VarSet(VAR_DIVING_MINIGAME_SCORE, (VarGet(VAR_DIVING_MINIGAME_SCORE) + (GetMonData(&gEnemyParty[gBattlerPartyIndexes[GetCatchingBattler()]], MON_DATA_ATK_IV))));
        VarSet(VAR_DIVING_MINIGAME_SCORE, (VarGet(VAR_DIVING_MINIGAME_SCORE) + (GetMonData(&gEnemyParty[gBattlerPartyIndexes[GetCatchingBattler()]], MON_DATA_DEF_IV))));
        VarSet(VAR_DIVING_MINIGAME_SCORE, (VarGet(VAR_DIVING_MINIGAME_SCORE) + (GetMonData(&gEnemyParty[gBattlerPartyIndexes[GetCatchingBattler()]], MON_DATA_SPATK_IV))));
        VarSet(VAR_DIVING_MINIGAME_SCORE, (VarGet(VAR_DIVING_MINIGAME_SCORE) + (GetMonData(&gEnemyParty[gBattlerPartyIndexes[GetCatchingBattler()]], MON_DATA_SPDEF_IV))));
        VarSet(VAR_DIVING_MINIGAME_SCORE, (VarGet(VAR_DIVING_MINIGAME_SCORE) + (GetMonData(&gEnemyParty[gBattlerPartyIndexes[GetCatchingBattler()]], MON_DATA_SPEED_IV))));

        // Finally, add remaining HP to score (higher HP mons = higher score!)
        VarSet(VAR_DIVING_MINIGAME_SCORE, (VarGet(VAR_DIVING_MINIGAME_SCORE) + GetMonData(&gEnemyParty[gBattlerPartyIndexes[GetCatchingBattler()]], MON_DATA_HP)));

        if(GetMonData(&gEnemyParty[gBattlerPartyIndexes[GetCatchingBattler()]], MON_DATA_IS_SHINY))
            VarSet(VAR_DIVING_MINIGAME_SCORE, (VarGet(VAR_DIVING_MINIGAME_SCORE) + 1000));

        // Update high score
        if(VarGet(VAR_DIVING_MINIGAME_HIGH_SCORE) < VarGet(VAR_DIVING_MINIGAME_SCORE)) // new high score!
        {
            VarSet(VAR_DIVING_MINIGAME_HIGH_SCORE, VAR_DIVING_MINIGAME_SCORE);
            FlagSet(FLAG_NEW_DIVING_GAME_HIGH_SCORE);
        }

        VarSet(VAR_DIVING_MINIGAME_PLAYER_SPECIES, GetMonData(&gEnemyParty[gBattlerPartyIndexes[GetCatchingBattler()]], MON_DATA_SPECIES));
    }
    else if(gBattleOutcome == B_OUTCOME_LOST)
    {
        // just straight up ends your game lol, no reward cause you kinda suck
        FlagClear(FLAG_DOING_DIVING_MINIGAME);
        VarSet(VAR_DIVING_MINIGAME_STEP_COUNT, 0);
        FlagClear(FLAG_NEW_DIVING_GAME_HIGH_SCORE);
        VarSet(VAR_PACIFIDLOG_TOWN_STATE, 2); // town state 2 means you lost

        ScriptContext_SetupScript(DivingMinigame_EventScript_AllPokemonFainted);
    }

    // Maximum number of encounters before ending minigame
    if(sDivingMinigameSeenMons >= 5)
    {
        ScriptContext_SetupScript(DivingMinigame_EventScript_TimesUp);
    }

    SetMainCallback2(CB2_ReturnToField);
}

bool8 DivingMinigameTakeStep(void)
{
    if(FlagGet(FLAG_DOING_DIVING_MINIGAME) == FALSE)
    {
        return FALSE;
    }

    VarSet(VAR_DIVING_MINIGAME_STEP_COUNT, (VarGet(VAR_DIVING_MINIGAME_STEP_COUNT) - 1));
    if (VarGet(VAR_DIVING_MINIGAME_STEP_COUNT) <= 0)
    {
        ScriptContext_SetupScript(DivingMinigame_EventScript_TimesUp);
        return TRUE;
    }
    return FALSE;
}

u16 PokemonRarityScore(u16 species)
{
    switch(species)
    {
        case SPECIES_TENTACOOL:
        case SPECIES_HORSEA:
        case SPECIES_LOTAD:
            return 50;
            break;
        case SPECIES_KRABBY:
        case SPECIES_REMORAID:
        case SPECIES_WOOPER:
        case SPECIES_POLIWAG:
            return 60;
            break;
        case SPECIES_SEEL:
        case SPECIES_BARBOACH:
        case SPECIES_CHINCHOU:
        case SPECIES_PSYDUCK:
        case SPECIES_GOLDEEN:
            return 70;
            break;
        case SPECIES_SPHEAL:
        case SPECIES_CORPHISH:
        case SPECIES_QWILFISH:
            return 80;
            break; 
        case SPECIES_CORSOLA:
        case SPECIES_SLOWPOKE:
        case SPECIES_MARILL:
            return 100;
            break;
        case SPECIES_MANTYKE:
        case SPECIES_SHELLDER:
        case SPECIES_WAILMER:
        case SPECIES_CLAMPERL:
            return 130;
            break;
        case SPECIES_OMANYTE:
        case SPECIES_KABUTO:
        case SPECIES_ANORITH:
        case SPECIES_LILEEP:
            return 150;
            break;
        case SPECIES_WHISCASH:
        case SPECIES_QUAGSIRE:
            return 180;
            break;
        case SPECIES_GOREBYSS:
        case SPECIES_HUNTAIL:
            return 210;
            break;
        case SPECIES_DEWGONG:
        case SPECIES_GYARADOS:
            return 250;
            break;
        case SPECIES_LUVDISC:
        case SPECIES_LAPRAS:
            return 300;
            break;
        case SPECIES_NOSEPASS:
            return 400;
            break;
        case SPECIES_RELICANTH:
            return 500;
            break;
        default:
            return 80;
            break;
    }
}

// function that generates and scores Pokémon for the competitors in Scuba Safari
void ScubaSafari_GenerateCompetitorPokemon(void)
{

    // variables for generating random levels
    u8 min;
    u8 max;
    u8 range;
    u8 rand;

    // SET COMPETITOR 1 POKEMON STUFF
    struct Pokemon competitor1Mon;
    u16 competitor1Species;
    struct Pokemon competitor2Mon;
    u16 competitor2Species;

    // random level generation
    min = 8;
    max = 30;
    range = max - min + 1;
    rand = Random() % range;

    // COMPETITOR ONE STUFF
    // random species generation for Competitor 1
    competitor1Species = CreateRandomScubaSafariSpecies();
    VarSet(VAR_DIVING_MINIGAME_C1_SPECIES, competitor1Species);
    CreateMon(&competitor1Mon, competitor1Species, (min + rand), USE_RANDOM_IVS, 0, 0, OT_ID_PLAYER_ID, 0);

    // Calculate and set scores
    // First, set base score based on species (Rarity Factor)
    VarSet(VAR_DIVING_MINIGAME_C1_SCORE, PokemonRarityScore(GetMonData(&competitor1Mon, MON_DATA_SPECIES)));

    // Next, add the Pokémon's LEVEL * 3 to the score
    VarSet(VAR_DIVING_MINIGAME_C1_SCORE, (VarGet(VAR_DIVING_MINIGAME_C1_SCORE) + (GetMonData(&competitor1Mon, MON_DATA_LEVEL) * 3)));

    // Next, add each of the Pokémon's IVs to the score (+0-31 per stat, up to +186 if perfect IVs)
    VarSet(VAR_DIVING_MINIGAME_C1_SCORE, (VarGet(VAR_DIVING_MINIGAME_C1_SCORE) + (GetMonData(&competitor1Mon, MON_DATA_HP_IV))));
    VarSet(VAR_DIVING_MINIGAME_C1_SCORE, (VarGet(VAR_DIVING_MINIGAME_C1_SCORE) + (GetMonData(&competitor1Mon, MON_DATA_ATK_IV))));
    VarSet(VAR_DIVING_MINIGAME_C1_SCORE, (VarGet(VAR_DIVING_MINIGAME_C1_SCORE) + (GetMonData(&competitor1Mon, MON_DATA_DEF_IV))));
    VarSet(VAR_DIVING_MINIGAME_C1_SCORE, (VarGet(VAR_DIVING_MINIGAME_C1_SCORE) + (GetMonData(&competitor1Mon, MON_DATA_SPATK_IV))));
    VarSet(VAR_DIVING_MINIGAME_C1_SCORE, (VarGet(VAR_DIVING_MINIGAME_C1_SCORE) + (GetMonData(&competitor1Mon, MON_DATA_SPDEF_IV))));
    VarSet(VAR_DIVING_MINIGAME_C1_SCORE, (VarGet(VAR_DIVING_MINIGAME_C1_SCORE) + (GetMonData(&competitor1Mon, MON_DATA_SPEED_IV))));

    // Finally, add remaining HP to score (higher HP mons = higher score!)
    VarSet(VAR_DIVING_MINIGAME_C1_SCORE, (VarGet(VAR_DIVING_MINIGAME_C1_SCORE) + GetMonData(&competitor1Mon, MON_DATA_HP)));


    // COMPETITOR TWO STUFF
    // random species generation
    competitor2Species = CreateRandomScubaSafariSpecies();
    VarSet(VAR_DIVING_MINIGAME_C2_SPECIES, competitor2Species);
    CreateMon(&competitor2Mon, competitor2Species, (min + rand), USE_RANDOM_IVS, 0, 0, OT_ID_PLAYER_ID, 0);

    // Calculate and set scores
    // First, set base score based on species (Rarity Factor)
    VarSet(VAR_DIVING_MINIGAME_C2_SCORE, PokemonRarityScore(GetMonData(&competitor2Mon, MON_DATA_SPECIES)));

    // Next, add the Pokémon's LEVEL * 3 to the score
    VarSet(VAR_DIVING_MINIGAME_C2_SCORE, (VarGet(VAR_DIVING_MINIGAME_C2_SCORE) + (GetMonData(&competitor2Mon, MON_DATA_LEVEL) * 3)));

    // Next, add each of the Pokémon's IVs to the score (+0-31 per stat, up to +186 if perfect IVs)
    VarSet(VAR_DIVING_MINIGAME_C2_SCORE, (VarGet(VAR_DIVING_MINIGAME_C2_SCORE) + (GetMonData(&competitor2Mon, MON_DATA_HP_IV))));
    VarSet(VAR_DIVING_MINIGAME_C2_SCORE, (VarGet(VAR_DIVING_MINIGAME_C2_SCORE) + (GetMonData(&competitor2Mon, MON_DATA_ATK_IV))));
    VarSet(VAR_DIVING_MINIGAME_C2_SCORE, (VarGet(VAR_DIVING_MINIGAME_C2_SCORE) + (GetMonData(&competitor2Mon, MON_DATA_DEF_IV))));
    VarSet(VAR_DIVING_MINIGAME_C2_SCORE, (VarGet(VAR_DIVING_MINIGAME_C2_SCORE) + (GetMonData(&competitor2Mon, MON_DATA_SPATK_IV))));
    VarSet(VAR_DIVING_MINIGAME_C2_SCORE, (VarGet(VAR_DIVING_MINIGAME_C2_SCORE) + (GetMonData(&competitor2Mon, MON_DATA_SPDEF_IV))));
    VarSet(VAR_DIVING_MINIGAME_C2_SCORE, (VarGet(VAR_DIVING_MINIGAME_C2_SCORE) + (GetMonData(&competitor2Mon, MON_DATA_SPEED_IV))));

    // Finally, add remaining HP to score (higher HP mons = higher score!)
    VarSet(VAR_DIVING_MINIGAME_C2_SCORE, (VarGet(VAR_DIVING_MINIGAME_C2_SCORE) + GetMonData(&competitor2Mon, MON_DATA_HP)));

}

u16 CreateRandomScubaSafariSpecies(void)
{

    u8 randomLocationValue = Random() % 8; // generates random number 1-8
    u8 randomEncounterValue = Random() % 100; // generates random number 1-100

    if(randomLocationValue == 1) // Central area
    {
        // Returns random Pokémon
        if(randomEncounterValue < 60)
            return SPECIES_TENTACOOL;
        else if (randomEncounterValue >= 60 && randomEncounterValue < 90)
            return SPECIES_KRABBY;
        else if(randomEncounterValue >= 90 && randomEncounterValue < 95)
            return SPECIES_CORSOLA;
        else if(randomEncounterValue >= 95)
            return SPECIES_MANTYKE;
        else
            return SPECIES_LUVDISC;
    }
    else if(randomLocationValue == 2) // North area
    {
        // Returns random Pokémon
        if(randomEncounterValue < 60)
            return SPECIES_SEEL;
        else if (randomEncounterValue >= 60 && randomEncounterValue < 90)
            return SPECIES_SPHEAL;
        else if(randomEncounterValue >= 90 && randomEncounterValue < 95)
            return SPECIES_SHELLDER;
        else if(randomEncounterValue >= 95)
            return SPECIES_WAILMER;
        else
            return SPECIES_DEWGONG;
    }
    else if(randomLocationValue == 3) // East area 1
    {
        // Returns random Pokémon
        if(randomEncounterValue < 60)
            return SPECIES_BARBOACH;
        else if (randomEncounterValue >= 60 && randomEncounterValue < 90)
            return SPECIES_CORPHISH;
        else if(randomEncounterValue >= 90 && randomEncounterValue < 95)
            return SPECIES_WOOPER;
        else if(randomEncounterValue >= 95)
            return SPECIES_QUAGSIRE;
        else
            return SPECIES_NOSEPASS;
    }
    else if(randomLocationValue == 4) // East area 2
    {
        // Returns random Pokémon
        if(randomEncounterValue < 60)
            return SPECIES_REMORAID;
        else if (randomEncounterValue >= 60 && randomEncounterValue < 90)
            return SPECIES_WAILMER;
        else if(randomEncounterValue >= 90 && randomEncounterValue < 95)
            return SPECIES_SLOWPOKE;
        else if(randomEncounterValue >= 95)
            return SPECIES_SLOWPOKE;
        else
            return SPECIES_WHISCASH;
    }
    else if(randomLocationValue == 5) // South area 1
    {
        // Returns random Pokémon
        if(randomEncounterValue < 60)
            return SPECIES_HORSEA;
        else if (randomEncounterValue >= 60 && randomEncounterValue < 90)
            return SPECIES_CHINCHOU;
        else if(randomEncounterValue >= 90 && randomEncounterValue < 95)
            return SPECIES_OMANYTE;
        else if(randomEncounterValue >= 95)
            return SPECIES_KABUTO;
        else
            return SPECIES_KABUTO;
    }
    else if(randomLocationValue == 6) // South area 2
    {
        // Returns random Pokémon
        if(randomEncounterValue < 60)
            return SPECIES_TENTACOOL;
        else if (randomEncounterValue >= 60 && randomEncounterValue < 90)
            return SPECIES_QWILFISH;
        else if(randomEncounterValue >= 90 && randomEncounterValue < 95)
            return SPECIES_HUNTAIL;
        else if(randomEncounterValue >= 95)
            return SPECIES_GOREBYSS;
        else
            return SPECIES_RELICANTH;
    }
    else if(randomLocationValue == 7) // West area 1
    {
        // Returns random Pokémon
        if(randomEncounterValue < 60)
            return SPECIES_POLIWAG;
        else if (randomEncounterValue >= 60 && randomEncounterValue < 90)
            return SPECIES_GOLDEEN;
        else if(randomEncounterValue >= 90 && randomEncounterValue < 95)
            return SPECIES_CLAMPERL;
        else if(randomEncounterValue >= 95)
            return SPECIES_LILEEP;
        else
            return SPECIES_LAPRAS;
    }
    else // West area 2
    {
        // Returns random Pokémon
        if(randomEncounterValue < 60)
            return SPECIES_LOTAD;
        else if (randomEncounterValue >= 60 && randomEncounterValue < 90)
            return SPECIES_PSYDUCK;
        else if(randomEncounterValue >= 90 && randomEncounterValue < 95)
            return SPECIES_MARILL;
        else if(randomEncounterValue >= 95)
            return SPECIES_ANORITH;
        else
            return SPECIES_GYARADOS;
    }

    // failsafe
    return SPECIES_TENTACOOL;

}

void RandomizeScubaSafariTreasureFlags(void)
{

    // look. i know theres a better way to do this. but i do not know it. LMFAO
    if((Random() % 4) == 1)
        FlagClear(FLAG_HIDE_SCUBA_SAFARI_TREASURE_01);
    if((Random() % 4) == 1)
        FlagClear(FLAG_HIDE_SCUBA_SAFARI_TREASURE_02);
    if((Random() % 4) == 1)
        FlagClear(FLAG_HIDE_SCUBA_SAFARI_TREASURE_03);
    if((Random() % 4) == 1)
        FlagClear(FLAG_HIDE_SCUBA_SAFARI_TREASURE_04);
    if((Random() % 4) == 1)
        FlagClear(FLAG_HIDE_SCUBA_SAFARI_TREASURE_05);
    if((Random() % 4) == 1)
        FlagClear(FLAG_HIDE_SCUBA_SAFARI_TREASURE_06);
    if((Random() % 4) == 1)
        FlagClear(FLAG_HIDE_SCUBA_SAFARI_TREASURE_07);
    if((Random() % 4) == 1)
        FlagClear(FLAG_HIDE_SCUBA_SAFARI_TREASURE_08);
    if((Random() % 4) == 1)
        FlagClear(FLAG_HIDE_SCUBA_SAFARI_TREASURE_09);
    if((Random() % 4) == 1)
        FlagClear(FLAG_HIDE_SCUBA_SAFARI_TREASURE_10);
    if((Random() % 4) == 1)
        FlagClear(FLAG_HIDE_SCUBA_SAFARI_TREASURE_11);
    if((Random() % 4) == 1)
        FlagClear(FLAG_HIDE_SCUBA_SAFARI_TREASURE_12);
    if((Random() % 4) == 1)
        FlagClear(FLAG_HIDE_SCUBA_SAFARI_TREASURE_13);
    if((Random() % 4) == 1)
        FlagClear(FLAG_HIDE_SCUBA_SAFARI_TREASURE_14);
    if((Random() % 4) == 1)
        FlagClear(FLAG_HIDE_SCUBA_SAFARI_TREASURE_15);

}

void ResetScubaSafariTreasureFlags(void)
{
    FlagSet(FLAG_HIDE_SCUBA_SAFARI_TREASURE_01);
    FlagSet(FLAG_HIDE_SCUBA_SAFARI_TREASURE_02);
    FlagSet(FLAG_HIDE_SCUBA_SAFARI_TREASURE_03);
    FlagSet(FLAG_HIDE_SCUBA_SAFARI_TREASURE_04);
    FlagSet(FLAG_HIDE_SCUBA_SAFARI_TREASURE_05);
    FlagSet(FLAG_HIDE_SCUBA_SAFARI_TREASURE_06);
    FlagSet(FLAG_HIDE_SCUBA_SAFARI_TREASURE_07);
    FlagSet(FLAG_HIDE_SCUBA_SAFARI_TREASURE_08);
    FlagSet(FLAG_HIDE_SCUBA_SAFARI_TREASURE_09);
    FlagSet(FLAG_HIDE_SCUBA_SAFARI_TREASURE_10);
    FlagSet(FLAG_HIDE_SCUBA_SAFARI_TREASURE_11);
    FlagSet(FLAG_HIDE_SCUBA_SAFARI_TREASURE_12);
    FlagSet(FLAG_HIDE_SCUBA_SAFARI_TREASURE_13);
    FlagSet(FLAG_HIDE_SCUBA_SAFARI_TREASURE_14);
    FlagSet(FLAG_HIDE_SCUBA_SAFARI_TREASURE_15);
}

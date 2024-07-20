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
    VarSet(VAR_DIVING_MINIGAME_STEP_COUNT, 200); // set maximum number of steps before time up
    VarSet(VAR_DIVING_MINIGAME_SCORE, 0);
    sDivingMinigameSeenMons = 0;
}

void ExitDivingMinigame(void)
{
    FlagClear(FLAG_DOING_DIVING_MINIGAME);
    VarSet(VAR_DIVING_MINIGAME_STEP_COUNT, 0);
    FlagSet(FLAG_HIDE_MAP_NAME_POPUP);
}

void CB2_EndDivingMinigameBattle(void)
{
    sDivingMinigameSeenMons++;

    if (gBattleOutcome == B_OUTCOME_CAUGHT)
    {
        // SCORE CALCULATION
        // First, set base score based on species (Rarity Factor)
        if(GetMonData(&gEnemyParty[gBattlerPartyIndexes[GetCatchingBattler()]], MON_DATA_SPECIES) == 72) // if tentacool
            VarSet(VAR_DIVING_MINIGAME_SCORE, 100);
        else
            VarSet(VAR_DIVING_MINIGAME_SCORE, 150);

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

        // Update high score
        if(VarGet(VAR_DIVING_MINIGAME_HIGH_SCORE) < VarGet(VAR_DIVING_MINIGAME_SCORE)) // new high score!
        {
            VarSet(VAR_DIVING_MINIGAME_HIGH_SCORE, VAR_DIVING_MINIGAME_SCORE);
            FlagSet(FLAG_NEW_DIVING_GAME_HIGH_SCORE);
        }
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

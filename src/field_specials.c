#include "global.h"
#include "debug.h"
#include "malloc.h"
#include "battle.h"
#include "battle_tower.h"
#include "cable_club.h"
#include "data.h"
#include "decoration.h"
#include "diploma.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "fieldmap.h"
#include "field_camera.h"
#include "field_effect.h"
#include "field_message_box.h"
#include "field_player_avatar.h"
#include "field_screen_effect.h"
#include "field_specials.h"
#include "field_weather.h"
#include "graphics.h"
#include "international_string_util.h"
#include "item_icon.h"
#include "link.h"
#include "load_save.h"
#include "list_menu.h"
#include "main.h"
#include "mystery_gift.h"
#include "match_call.h"
#include "menu.h"
#include "naming_screen.h"
#include "outfit_menu.h"
#include "overworld.h"
#include "party_menu.h"
#include "pokeblock.h"
#include "pokemon.h"
#include "pokemon_storage_system.h"
#include "random.h"
#include "rayquaza_scene.h"
#include "region_map.h"
#include "rtc.h"
#include "script.h"
#include "script_menu.h"
#include "sound.h"
#include "starter_choose.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "tilesets.h"
#include "trainer_pokemon_sprites.h"
#include "tv.h"
#include "wallclock.h"
#include "window.h"
#include "constants/battle_frontier.h"
#include "constants/battle_pyramid.h"
#include "constants/battle_tower.h"
#include "constants/decorations.h"
#include "constants/event_objects.h"
#include "constants/event_object_movement.h"
#include "constants/field_effects.h"
#include "constants/field_specials.h"
#include "constants/items.h"
#include "constants/heal_locations.h"
#include "constants/map_types.h"
#include "constants/mystery_gift.h"
#include "constants/slot_machine.h"
#include "constants/songs.h"
#include "constants/moves.h"
#include "constants/party_menu.h"
#include "constants/battle_frontier.h"
#include "constants/weather.h"
#include "constants/metatile_labels.h"
#include "constants/rgb.h"
#include "palette.h"
#include "battle_util.h"
#include "pokedex.h"
#include "item.h"
#include "item_menu.h"

#define TAG_ITEM_ICON 5500

#define GFXTAG_MULTICHOICE_SCROLL_ARROWS 2000
#define PALTAG_MULTICHOICE_SCROLL_ARROWS 100

#define ELEVATOR_WINDOW_WIDTH  3
#define ELEVATOR_WINDOW_HEIGHT 3
#define ELEVATOR_LIGHT_STAGES  3

EWRAM_DATA bool8 gBikeCyclingChallenge = FALSE;
EWRAM_DATA u8 gBikeCollisions = 0;
static EWRAM_DATA u32 sBikeCyclingTimer = 0;
static EWRAM_DATA u8 sSlidingDoorNextFrameCounter = 0;
static EWRAM_DATA u8 sSlidingDoorFrame = 0;
static EWRAM_DATA u8 sTutorMoveAndElevatorWindowId = 0;
static EWRAM_DATA u16 sLilycoveDeptStore_NeverRead = 0;
static EWRAM_DATA u16 sLilycoveDeptStore_DefaultFloorChoice = 0;
static EWRAM_DATA struct ListMenuItem *sScrollableMultichoice_ListMenuItem = NULL;

static EWRAM_DATA u16 sFrontierExchangeCorner_NeverRead = 0;
static EWRAM_DATA u8 sScrollableMultichoice_ItemSpriteId = 0;
static EWRAM_DATA u8 sBattlePointsWindowId = 0;
static EWRAM_DATA u8 sFrontierExchangeCorner_ItemIconWindowId = 0;
static EWRAM_DATA u8 sPCBoxToSendMon = 0;
static EWRAM_DATA u32 sBattleTowerMultiBattleTypeFlags = 0;

struct ListMenuTemplate gScrollableMultichoice_ListMenuTemplate;
EWRAM_DATA u16 gScrollableMultichoice_ScrollOffset = 0;

void TryLoseFansFromPlayTime(void);
void SetPlayerGotFirstFans(void);
u16 GetNumFansOfPlayerInTrainerFanClub(void);

static void RecordCyclingRoadResults(u32, u8);
static void LoadLinkPartnerObjectEventSpritePalette(u16, u8, u8);
static void Task_PetalburgGymSlideOpenRoomDoors(u8);
static void PetalburgGymSetDoorMetatiles(u8, u16);
static void Task_PCTurnOnEffect(u8);
static void PCTurnOnEffect(struct Task *);
static void PCTurnOnEffect_SetMetatile(s16, s8, s8);
static void PCTurnOffEffect(void);
static void Task_LotteryCornerComputerEffect(u8);
static void LotteryCornerComputerEffect(struct Task *);
static void Task_ShakeCamera(u8);
static void StopCameraShake(u8);
static void Task_MoveElevator(u8);
static void MoveElevatorWindowLights(u16, bool8);
static void Task_MoveElevatorWindowLights(u8);
static void Task_ShowScrollableMultichoice(u8);
static void FillFrontierExchangeCornerWindowAndItemIcon(u16, u16);
static void ShowBattleFrontierTutorWindow(u8, u16);
static void InitScrollableMultichoice(void);
static void ScrollableMultichoice_ProcessInput(u8);
static void ScrollableMultichoice_UpdateScrollArrows(u8);
static void ScrollableMultichoice_MoveCursor(s32, bool8, struct ListMenu *);
static void HideFrontierExchangeCornerItemIcon(u16, u16);
static void ShowBattleFrontierTutorMoveDescription(u8, u16);
static void CloseScrollableMultichoice(u8);
static void ScrollableMultichoice_RemoveScrollArrows(u8);
static void Task_ScrollableMultichoice_WaitReturnToList(u8);
static void Task_ScrollableMultichoice_ReturnToList(u8);
static void ShowFrontierExchangeCornerItemIcon(u16);
static void Task_DeoxysRockInteraction(u8);
static void ChangeDeoxysRockLevel(u8);
static void WaitForDeoxysRockMovement(u8);
static void Task_LinkRetireStatusWithBattleTowerPartner(u8);
static void Task_LoopWingFlapSE(u8);
static void Task_CloseBattlePikeCurtain(u8);
static u8 DidPlayerGetFirstFans(void);
static void SetInitialFansOfPlayer(void);
static u16 PlayerGainRandomTrainerFan(void);
#if FREE_LINK_BATTLE_RECORDS == FALSE
static void BufferFanClubTrainerName_(struct LinkBattleRecords *, u8, u8);
#else
static void BufferFanClubTrainerName_(u8 whichLinkTrainer, u8 whichNPCTrainer);
#endif //FREE_LINK_BATTLE_RECORDS

u8 CheckZooDonationValidity(u16);

void Special_ShowDiploma(void)
{
    SetMainCallback2(CB2_ShowDiploma);
    LockPlayerFieldControls();
}

void Special_ViewWallClock(void)
{
    gMain.savedCallback = CB2_ReturnToField;
    SetMainCallback2(CB2_ViewWallClock);
    LockPlayerFieldControls();
}

void ResetCyclingRoadChallengeData(void)
{
    gBikeCyclingChallenge = FALSE;
    gBikeCollisions = 0;
    sBikeCyclingTimer = 0;
}

void Special_BeginCyclingRoadChallenge(void)
{
    gBikeCyclingChallenge = TRUE;
    gBikeCollisions = 0;
    sBikeCyclingTimer = gMain.vblankCounter1;
}

u16 GetPlayerAvatarBike(void)
{
    if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_BIKE))
    {
        if (gSaveBlock2Ptr->playerBike != MACH_BIKE)
            return 1;
        else
            return 2;
    }
    return 0;
}

static void DetermineCyclingRoadResults(u32 numFrames, u8 numBikeCollisions)
{
    u8 result;

    if (numBikeCollisions < 100)
    {
        ConvertIntToDecimalStringN(gStringVar1, numBikeCollisions, STR_CONV_MODE_LEFT_ALIGN, 2);
        StringAppend(gStringVar1, gText_SpaceTimes);
    }
    else
    {
        StringCopy(gStringVar1, gText_99TimesPlus);
    }

    if (numFrames < 3600)
    {
        ConvertIntToDecimalStringN(gStringVar2, numFrames / 60, STR_CONV_MODE_RIGHT_ALIGN, 2);
        gStringVar2[2] = CHAR_DEC_SEPARATOR;
        ConvertIntToDecimalStringN(&gStringVar2[3], ((numFrames % 60) * 100) / 60, STR_CONV_MODE_LEADING_ZEROS, 2);
        StringAppend(gStringVar2, gText_SpaceSeconds);
    }
    else
    {
        StringCopy(gStringVar2, gText_1MinutePlus);
    }

    result = 0;
    if (numBikeCollisions == 0)
        result = 5;
    else if (numBikeCollisions < 4)
        result = 4;
    else if (numBikeCollisions < 10)
        result = 3;
    else if (numBikeCollisions < 20)
        result = 2;
    else if (numBikeCollisions < 100)
        result = 1;

    if (numFrames / 60 <= 10)
        result += 5;
    else if (numFrames / 60 <= 15)
        result += 4;
    else if (numFrames / 60 <= 20)
        result += 3;
    else if (numFrames / 60 <= 40)
        result += 2;
    else if (numFrames / 60 < 60)
        result += 1;

    gSpecialVar_Result = result;
}

void FinishCyclingRoadChallenge(void)
{
    const u32 numFrames = gMain.vblankCounter1 - sBikeCyclingTimer;

    DetermineCyclingRoadResults(numFrames, gBikeCollisions);
    RecordCyclingRoadResults(numFrames, gBikeCollisions);
}

static void RecordCyclingRoadResults(u32 numFrames, u8 numBikeCollisions)
{
    u16 low = VarGet(VAR_CYCLING_ROAD_RECORD_TIME_L);
    u16 high = VarGet(VAR_CYCLING_ROAD_RECORD_TIME_H);
    u32 framesRecord = low + (high << 16);

    if (framesRecord > numFrames || framesRecord == 0)
    {
        VarSet(VAR_CYCLING_ROAD_RECORD_TIME_L, numFrames);
        VarSet(VAR_CYCLING_ROAD_RECORD_TIME_H, numFrames >> 16);
        VarSet(VAR_CYCLING_ROAD_RECORD_COLLISIONS, numBikeCollisions);
    }
}

u16 GetRecordedCyclingRoadResults(void)
{
    u16 low = VarGet(VAR_CYCLING_ROAD_RECORD_TIME_L);
    u16 high = VarGet(VAR_CYCLING_ROAD_RECORD_TIME_H);
    u32 framesRecord = low + (high << 16);

    if (framesRecord == 0)
        return FALSE;

    DetermineCyclingRoadResults(framesRecord, VarGet(VAR_CYCLING_ROAD_RECORD_COLLISIONS));
    return TRUE;
}

void UpdateCyclingRoadState(void)
{
    if (gLastUsedWarp.mapNum == MAP_NUM(ROUTE110_SEASIDE_CYCLING_ROAD_SOUTH_ENTRANCE) && gLastUsedWarp.mapGroup == MAP_GROUP(ROUTE110_SEASIDE_CYCLING_ROAD_SOUTH_ENTRANCE))
        return;

    if (VarGet(VAR_CYCLING_CHALLENGE_STATE) == 2 || VarGet(VAR_CYCLING_CHALLENGE_STATE) == 3)
    {
        VarSet(VAR_CYCLING_CHALLENGE_STATE, 0);
        Overworld_SetSavedMusic(MUS_DUMMY);
    }
}

void SetSSTidalFlag(void)
{
    FlagSet(FLAG_SYS_CRUISE_MODE);
    *GetVarPointer(VAR_CRUISE_STEP_COUNT) = 0;
}

void ResetSSTidalFlag(void)
{
    FlagClear(FLAG_SYS_CRUISE_MODE);
}

// Returns TRUE if the Cruise is over
bool32 CountSSTidalStep(u16 delta)
{
    if (!FlagGet(FLAG_SYS_CRUISE_MODE) || (*GetVarPointer(VAR_CRUISE_STEP_COUNT) += delta) < SS_TIDAL_MAX_STEPS)
        return FALSE;

    return TRUE;
}

u8 GetSSTidalLocation(s8 *mapGroup, s8 *mapNum, s16 *x, s16 *y)
{
    u16 *varCruiseStepCount = GetVarPointer(VAR_CRUISE_STEP_COUNT);
    switch (*GetVarPointer(VAR_SS_TIDAL_STATE))
    {
    case SS_TIDAL_BOARD_SLATEPORT:
    case SS_TIDAL_LAND_SLATEPORT:
        return SS_TIDAL_LOCATION_SLATEPORT;
    case SS_TIDAL_HALFWAY_LILYCOVE:
    case SS_TIDAL_EXIT_CURRENTS_RIGHT:
        return SS_TIDAL_LOCATION_ROUTE131;
    case SS_TIDAL_LAND_LILYCOVE:
    case SS_TIDAL_BOARD_LILYCOVE:
        return SS_TIDAL_LOCATION_LILYCOVE;
    case SS_TIDAL_DEPART_LILYCOVE:
    case SS_TIDAL_EXIT_CURRENTS_LEFT:
        return SS_TIDAL_LOCATION_ROUTE124;
    case SS_TIDAL_DEPART_SLATEPORT:
        if (*varCruiseStepCount < 60)
        {
            *mapNum = MAP_NUM(ROUTE134);
            *x = *varCruiseStepCount + 19;
        }
        else if (*varCruiseStepCount < 140)
        {
            *mapNum = MAP_NUM(ROUTE133);
            *x = *varCruiseStepCount - 60;
        }
        else
        {
            *mapNum = MAP_NUM(ROUTE132);
            *x = *varCruiseStepCount - 140;
        }
        break;
    case SS_TIDAL_HALFWAY_SLATEPORT:
        if (*varCruiseStepCount < 66)
        {
            *mapNum = MAP_NUM(ROUTE132);
            *x = 65 - *varCruiseStepCount;
        }
        else if (*varCruiseStepCount < 146)
        {
            *mapNum = MAP_NUM(ROUTE133);
            *x = 145 - *varCruiseStepCount;
        }
        else
        {
            *mapNum = MAP_NUM(ROUTE134);
            *x = 224 - *varCruiseStepCount;
        }
        break;
    }
    *mapGroup = MAP_GROUP(ROUTE132);
    *y = 20;
    return SS_TIDAL_LOCATION_CURRENTS;
}

bool32 ShouldDoWallyCall(void)
{
    if (FlagGet(FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL))
    {
        switch (gMapHeader.mapType)
        {
        case MAP_TYPE_TOWN:
        case MAP_TYPE_CITY:
        case MAP_TYPE_ROUTE:
        case MAP_TYPE_OCEAN_ROUTE:
            if (++(*GetVarPointer(VAR_WALLY_CALL_STEP_COUNTER)) < 250)
                return FALSE;
            break;
        default:
            return FALSE;
        }
    }
    else
    {
        return FALSE;
    }

    return TRUE;
}

bool32 ShouldDoScottFortreeCall(void)
{
    if (FlagGet(FLAG_SCOTT_CALL_FORTREE_GYM))
    {
        switch (gMapHeader.mapType)
        {
        case MAP_TYPE_TOWN:
        case MAP_TYPE_CITY:
        case MAP_TYPE_ROUTE:
        case MAP_TYPE_OCEAN_ROUTE:
            if (++(*GetVarPointer(VAR_SCOTT_FORTREE_CALL_STEP_COUNTER)) < 10)
                return FALSE;
            break;
        default:
            return FALSE;
        }
    }
    else
    {
        return FALSE;
    }

    return TRUE;
}

bool32 ShouldDoScottBattleFrontierCall(void)
{
    if (FlagGet(FLAG_SCOTT_CALL_BATTLE_FRONTIER))
    {
        switch (gMapHeader.mapType)
        {
        case MAP_TYPE_TOWN:
        case MAP_TYPE_CITY:
        case MAP_TYPE_ROUTE:
        case MAP_TYPE_OCEAN_ROUTE:
            if (++(*GetVarPointer(VAR_SCOTT_BF_CALL_STEP_COUNTER)) < 10)
                return FALSE;
            break;
        default:
            return FALSE;
        }
    }
    else
    {
        return FALSE;
    }

    return TRUE;
}

bool32 ShouldDoRoxanneCall(void)
{
    if (FlagGet(FLAG_ENABLE_ROXANNE_FIRST_CALL))
    {
        switch (gMapHeader.mapType)
        {
        case MAP_TYPE_TOWN:
        case MAP_TYPE_CITY:
        case MAP_TYPE_ROUTE:
        case MAP_TYPE_OCEAN_ROUTE:
            if (++(*GetVarPointer(VAR_ROXANNE_CALL_STEP_COUNTER)) < 250)
                return FALSE;
            break;
        default:
            return FALSE;
        }
    }
    else
    {
        return FALSE;
    }

    return TRUE;
}

bool32 ShouldDoRivalRayquazaCall(void)
{
    if (FlagGet(FLAG_DEFEATED_MAGMA_SPACE_CENTER))
    {
        switch (gMapHeader.mapType)
        {
        case MAP_TYPE_TOWN:
        case MAP_TYPE_CITY:
        case MAP_TYPE_ROUTE:
        case MAP_TYPE_OCEAN_ROUTE:
            if (++(*GetVarPointer(VAR_RIVAL_RAYQUAZA_CALL_STEP_COUNTER)) < 250)
                return FALSE;
            break;
        default:
            return FALSE;
        }
    }
    else
    {
        return FALSE;
    }

    return TRUE;
}

u8 GetLinkPartnerNames(void)
{
    u8 i;
    u8 j = 0;
    u8 myLinkPlayerNumber = GetMultiplayerId();
    u8 nLinkPlayers = GetLinkPlayerCount();
    for (i = 0; i < nLinkPlayers; i++)
    {
        if (myLinkPlayerNumber != i)
        {
            StringCopy(gTVStringVarPtrs[j], gLinkPlayers[i].name);
            j++;
        }
    }
    return nLinkPlayers;
}

void SpawnLinkPartnerObjectEvent(void)
{
    u8 j = 0;
    s16 x = 0;
    s16 y = 0;
    u8 movementTypes[] = {
        MOVEMENT_TYPE_FACE_UP,
        MOVEMENT_TYPE_FACE_LEFT,
        MOVEMENT_TYPE_FACE_DOWN,
        MOVEMENT_TYPE_FACE_RIGHT
    };
    s8 coordOffsets[][2] = {
        { 0,  1},
        { 1,  0},
        { 0, -1},
        {-1,  0}
    };
    u8 myLinkPlayerNumber;
    u8 playerFacingDirection;
    u8 linkSpriteId;
    u8 i;

    myLinkPlayerNumber = GetMultiplayerId();
    playerFacingDirection = GetPlayerFacingDirection();
    switch (playerFacingDirection)
    {
    case DIR_WEST:
        j = 2;
        x = gSaveBlock1Ptr->pos.x - 1;
        y = gSaveBlock1Ptr->pos.y;
        break;
    case DIR_NORTH:
        j = 1;
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y - 1;
        break;
    case DIR_EAST:
        x = gSaveBlock1Ptr->pos.x + 1;
        y = gSaveBlock1Ptr->pos.y;
        break;
    case DIR_SOUTH:
        j = 3;
        x = gSaveBlock1Ptr->pos.x;
        y = gSaveBlock1Ptr->pos.y + 1;
    }
    for (i = 0; i < gSpecialVar_0x8004; i++)
    {
        if (myLinkPlayerNumber != i)
        {
            switch ((u8)gLinkPlayers[i].version)
            {
            case VERSION_RUBY:
            case VERSION_SAPPHIRE:
                if (gLinkPlayers[i].gender == 0)
                    linkSpriteId = OBJ_EVENT_GFX_LINK_RS_BRENDAN;
                else
                    linkSpriteId = OBJ_EVENT_GFX_LINK_RS_MAY;
                break;
            case VERSION_EMERALD:
                if (gLinkPlayers[i].gender == 0)
                    linkSpriteId = OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL;
                else
                    linkSpriteId = OBJ_EVENT_GFX_RIVAL_MAY_NORMAL;
                break;
            default:
                if (gLinkPlayers[i].gender == 0)
                    linkSpriteId = OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL;
                else
                    linkSpriteId = OBJ_EVENT_GFX_RIVAL_MAY_NORMAL;
                break;
            }
            SpawnSpecialObjectEventParameterized(linkSpriteId, movementTypes[j], 240 - i, coordOffsets[j][0] + x + MAP_OFFSET, coordOffsets[j][1] + y + MAP_OFFSET, 0);
            LoadLinkPartnerObjectEventSpritePalette(linkSpriteId, 240 - i, i);
            j++;
            if (j == MAX_LINK_PLAYERS)
                j = 0;
        }
    }
}

static void LoadLinkPartnerObjectEventSpritePalette(u16 graphicsId, u8 localEventId, u8 paletteNum)
{
    u8 adjustedPaletteNum;
    // Note: This temp var is necessary; paletteNum += 6 doesn't match.
    adjustedPaletteNum = paletteNum + 6;
    if (graphicsId == OBJ_EVENT_GFX_LINK_RS_BRENDAN ||
        graphicsId == OBJ_EVENT_GFX_LINK_RS_MAY ||
        graphicsId == OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL ||
        graphicsId == OBJ_EVENT_GFX_RIVAL_MAY_NORMAL)
    {
        u8 obj = GetObjectEventIdByLocalIdAndMap(localEventId, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);
        if (obj != OBJECT_EVENTS_COUNT)
        {
            u8 spriteId = gObjectEvents[obj].spriteId;
            struct Sprite *sprite = &gSprites[spriteId];
            sprite->oam.paletteNum = adjustedPaletteNum;

            switch (graphicsId)
            {
            case OBJ_EVENT_GFX_LINK_RS_BRENDAN:
                LoadPalette(gObjectEventPal_RubySapphireBrendan, OBJ_PLTT_ID(adjustedPaletteNum), PLTT_SIZE_4BPP);
                break;
            case OBJ_EVENT_GFX_LINK_RS_MAY:
                LoadPalette(gObjectEventPal_RubySapphireMay, OBJ_PLTT_ID(adjustedPaletteNum), PLTT_SIZE_4BPP);
                break;
            case OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL:
                LoadPalette(gObjectEventPal_Brendan, OBJ_PLTT_ID(adjustedPaletteNum), PLTT_SIZE_4BPP);
                break;
            case OBJ_EVENT_GFX_RIVAL_MAY_NORMAL:
                LoadPalette(gObjectEventPal_May, OBJ_PLTT_ID(adjustedPaletteNum), PLTT_SIZE_4BPP);
                break;
            }
        }
    }
}

static const struct UCoords8 sMauvilleGymSwitchCoords[] =
{
    { 0 + MAP_OFFSET, 15 + MAP_OFFSET},
    { 4 + MAP_OFFSET, 12 + MAP_OFFSET},
    { 3 + MAP_OFFSET,  9 + MAP_OFFSET},
    { 8 + MAP_OFFSET,  9 + MAP_OFFSET}
};

// Presses the stepped-on switch and raises the rest
void MauvilleGymPressSwitch(void)
{
    u8 i;
    for (i = 0; i < ARRAY_COUNT(sMauvilleGymSwitchCoords); i++)
    {
        if (i == gSpecialVar_0x8004)
            MapGridSetMetatileIdAt(sMauvilleGymSwitchCoords[i].x, sMauvilleGymSwitchCoords[i].y, METATILE_MauvilleGym_PressedSwitch);
        else
            MapGridSetMetatileIdAt(sMauvilleGymSwitchCoords[i].x, sMauvilleGymSwitchCoords[i].y, METATILE_MauvilleGym_RaisedSwitch);
    }
}

// Sets the gym barriers back to the default state; their alt state is handled by MauvilleCity_Gym_EventScript_SetAltBarriers
void MauvilleGymSetDefaultBarriers(void)
{
    int x, y;
    // All switches/barriers are within these coord ranges
    for (y = 5 + MAP_OFFSET; y < 17 + MAP_OFFSET; y++)
    {
        for (x = 0 + MAP_OFFSET; x < 9 + MAP_OFFSET; x++)
        {
            switch (MapGridGetMetatileIdAt(x, y))
            {
            case METATILE_MauvilleGym_GreenBeamH1_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_GreenBeamH1_Off);
                break;
            case METATILE_MauvilleGym_GreenBeamH2_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_GreenBeamH2_Off);
                break;
            case METATILE_MauvilleGym_GreenBeamH3_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_GreenBeamH3_Off);
                break;
            case METATILE_MauvilleGym_GreenBeamH4_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_GreenBeamH4_Off);
                break;
            case METATILE_MauvilleGym_GreenBeamH1_Off:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_GreenBeamH1_On);
                break;
            case METATILE_MauvilleGym_GreenBeamH2_Off:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_GreenBeamH2_On);
                break;
            case METATILE_MauvilleGym_GreenBeamH3_Off:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_GreenBeamH3_On | MAPGRID_COLLISION_MASK);
                break;
            case METATILE_MauvilleGym_GreenBeamH4_Off:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_GreenBeamH4_On | MAPGRID_COLLISION_MASK);
                break;
            case METATILE_MauvilleGym_RedBeamH1_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_RedBeamH1_Off);
                break;
            case METATILE_MauvilleGym_RedBeamH2_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_RedBeamH2_Off);
                break;
            case METATILE_MauvilleGym_RedBeamH3_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_RedBeamH3_Off);
                break;
            case METATILE_MauvilleGym_RedBeamH4_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_RedBeamH4_Off);
                break;
            case METATILE_MauvilleGym_RedBeamH1_Off:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_RedBeamH1_On);
                break;
            case METATILE_MauvilleGym_RedBeamH2_Off:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_RedBeamH2_On);
                break;
            case METATILE_MauvilleGym_RedBeamH3_Off:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_RedBeamH3_On | MAPGRID_COLLISION_MASK);
                break;
            case METATILE_MauvilleGym_RedBeamH4_Off:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_RedBeamH4_On | MAPGRID_COLLISION_MASK);
                break;
            case METATILE_MauvilleGym_GreenBeamV1_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_PoleBottom_On | MAPGRID_COLLISION_MASK);
                break;
            case METATILE_MauvilleGym_GreenBeamV2_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_FloorTile);
                break;
            case METATILE_MauvilleGym_RedBeamV1_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_PoleBottom_Off | MAPGRID_COLLISION_MASK);
                break;
            case METATILE_MauvilleGym_RedBeamV2_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_FloorTile);
                break;
            case METATILE_MauvilleGym_PoleBottom_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_GreenBeamV1_On | MAPGRID_COLLISION_MASK);
                break;
            case METATILE_MauvilleGym_FloorTile:
                if (MapGridGetMetatileIdAt(x, y - 1) == METATILE_MauvilleGym_GreenBeamV1_On)
                    MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_GreenBeamV2_On | MAPGRID_COLLISION_MASK);
                else
                    MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_RedBeamV2_On | MAPGRID_COLLISION_MASK);
                break;
            case METATILE_MauvilleGym_PoleBottom_Off:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_RedBeamV1_On | MAPGRID_COLLISION_MASK);
                break;
            case METATILE_MauvilleGym_PoleTop_Off:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_PoleTop_On | MAPGRID_COLLISION_MASK);
                break;
            case METATILE_MauvilleGym_PoleTop_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_PoleTop_Off);
                break;
            }
        }
    }
}

// Presses all switches and deactivates all beams.
void MauvilleGymDeactivatePuzzle(void)
{
    int i, x, y;
    const struct UCoords8 *switchCoords = sMauvilleGymSwitchCoords;
    for (i = ARRAY_COUNT(sMauvilleGymSwitchCoords) - 1; i >= 0; i--)
    {
        MapGridSetMetatileIdAt(switchCoords->x, switchCoords->y, METATILE_MauvilleGym_PressedSwitch);
        switchCoords++;
    }
    for (y = 5 + MAP_OFFSET; y < 17 + MAP_OFFSET; y++)
    {
        for (x = 0 + MAP_OFFSET; x < 9 + MAP_OFFSET; x++)
        {
            switch (MapGridGetMetatileIdAt(x, y))
            {
            case METATILE_MauvilleGym_GreenBeamH1_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_GreenBeamH1_Off);
                break;
            case METATILE_MauvilleGym_GreenBeamH2_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_GreenBeamH2_Off);
                break;
            case METATILE_MauvilleGym_GreenBeamH3_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_GreenBeamH3_Off);
                break;
            case METATILE_MauvilleGym_GreenBeamH4_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_GreenBeamH4_Off);
                break;
            case METATILE_MauvilleGym_RedBeamH1_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_RedBeamH1_Off);
                break;
            case METATILE_MauvilleGym_RedBeamH2_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_RedBeamH2_Off);
                break;
            case METATILE_MauvilleGym_RedBeamH3_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_RedBeamH3_Off);
                break;
            case METATILE_MauvilleGym_RedBeamH4_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_RedBeamH4_Off);
                break;
            case METATILE_MauvilleGym_GreenBeamV1_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_PoleBottom_On | MAPGRID_COLLISION_MASK);
                break;
            case METATILE_MauvilleGym_RedBeamV1_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_PoleBottom_Off | MAPGRID_COLLISION_MASK);
                break;
            case METATILE_MauvilleGym_GreenBeamV2_On:
            case METATILE_MauvilleGym_RedBeamV2_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_FloorTile);
                break;
            case METATILE_MauvilleGym_PoleTop_On:
                MapGridSetMetatileIdAt(x, y, METATILE_MauvilleGym_PoleTop_Off);
                break;
            }
        }
    }
}

static const bool8 sSlidingDoorNextFrameDelay[] = {0, 1, 1, 1, 1};

static const u16 sPetalburgGymSlidingDoorMetatiles[] = {
    METATILE_PetalburgGym_SlidingDoor_Frame0,
    METATILE_PetalburgGym_SlidingDoor_Frame1,
    METATILE_PetalburgGym_SlidingDoor_Frame2,
    METATILE_PetalburgGym_SlidingDoor_Frame3,
    METATILE_PetalburgGym_SlidingDoor_Frame4,
};

void PetalburgGymSlideOpenRoomDoors(void)
{
    sSlidingDoorNextFrameCounter = 0;
    sSlidingDoorFrame = 0;
    PlaySE(SE_UNLOCK);
    CreateTask(Task_PetalburgGymSlideOpenRoomDoors, 8);
}

static void Task_PetalburgGymSlideOpenRoomDoors(u8 taskId)
{
    if (sSlidingDoorNextFrameDelay[sSlidingDoorFrame] == sSlidingDoorNextFrameCounter)
    {
        PetalburgGymSetDoorMetatiles(gSpecialVar_0x8004, sPetalburgGymSlidingDoorMetatiles[sSlidingDoorFrame]);
        sSlidingDoorNextFrameCounter = 0;
        if ((++sSlidingDoorFrame) == ARRAY_COUNT(sPetalburgGymSlidingDoorMetatiles))
        {
            DestroyTask(taskId);
            ScriptContext_Enable();
        }
    }
    else
    {
        sSlidingDoorNextFrameCounter++;
    }
}

static void PetalburgGymSetDoorMetatiles(u8 roomNumber, u16 metatileId)
{
    u16 doorCoordsX[4];
    u16 doorCoordsY[4];
    u8 i;
    u8 nDoors = 0;
    switch (roomNumber)
    {
    case 1:
        nDoors = 2;
        doorCoordsX[0] = 1;
        doorCoordsX[1] = 7;
        doorCoordsY[0] = 104;
        doorCoordsY[1] = 104;
        break;
    case 2:
        nDoors = 2;
        doorCoordsX[0] = 1;
        doorCoordsX[1] = 7;
        doorCoordsY[0] = 78;
        doorCoordsY[1] = 78;
        break;
    case 3:
        nDoors = 2;
        doorCoordsX[0] = 1;
        doorCoordsX[1] = 7;
        doorCoordsY[0] = 91;
        doorCoordsY[1] = 91;
        break;
    case 4:
        nDoors = 1;
        doorCoordsX[0] = 7;
        doorCoordsY[0] = 39;
        break;
    case 5:
        nDoors = 2;
        doorCoordsX[0] = 1;
        doorCoordsX[1] = 7;
        doorCoordsY[0] = 52;
        doorCoordsY[1] = 52;
        break;
    case 6:
        nDoors = 1;
        doorCoordsX[0] = 1;
        doorCoordsY[0] = 65;
        break;
    case 7:
        nDoors = 1;
        doorCoordsX[0] = 7;
        doorCoordsY[0] = 13;
        break;
    case 8:
        nDoors = 1;
        doorCoordsX[0] = 1;
        doorCoordsY[0] = 26;
        break;
    }
    for (i = 0; i < nDoors; i++)
    {
        MapGridSetMetatileIdAt(doorCoordsX[i] + MAP_OFFSET, doorCoordsY[i] + MAP_OFFSET, metatileId | MAPGRID_COLLISION_MASK);
        MapGridSetMetatileIdAt(doorCoordsX[i] + MAP_OFFSET, doorCoordsY[i] + MAP_OFFSET + 1, (metatileId + METATILE_ROW_WIDTH) | MAPGRID_COLLISION_MASK);
    }
    DrawWholeMapView();
}

void PetalburgGymUnlockRoomDoors(void)
{
    PetalburgGymSetDoorMetatiles(gSpecialVar_0x8004, sPetalburgGymSlidingDoorMetatiles[4]);
}

void ShowFieldMessageStringVar4(void)
{
    ShowFieldMessage(gStringVar4);
}

void StorePlayerCoordsInVars(void)
{
    gSpecialVar_0x8004 = gSaveBlock1Ptr->pos.x;
    gSpecialVar_0x8005 = gSaveBlock1Ptr->pos.y;
}

u8 GetPlayerTrainerIdOnesDigit(void)
{
    return (u16)((gSaveBlock2Ptr->playerTrainerId[1] << 8) | gSaveBlock2Ptr->playerTrainerId[0]) % 10;
}

void GetPlayerBigGuyGirlString(void)
{
    if (gSaveBlock2Ptr->playerGender == MALE)
        StringCopy(gStringVar1, gText_BigGuy);
    else
        StringCopy(gStringVar1, gText_BigGirl);
}

void GetRivalSonDaughterString(void)
{
    if (gSaveBlock2Ptr->playerGender == MALE)
        StringCopy(gStringVar1, gText_Daughter);
    else
        StringCopy(gStringVar1, gText_Son);
}

u8 GetBattleOutcome(void)
{
    return gBattleOutcome;
}

void CableCarWarp(void)
{
    if (gSpecialVar_0x8004 != 0)
        SetWarpDestination(MAP_GROUP(ROUTE112_CABLE_CAR_STATION), MAP_NUM(ROUTE112_CABLE_CAR_STATION), WARP_ID_NONE, 6, 4);
    else
        SetWarpDestination(MAP_GROUP(MT_CHIMNEY_CABLE_CAR_STATION), MAP_NUM(MT_CHIMNEY_CABLE_CAR_STATION), WARP_ID_NONE, 6, 4);
}

void SetHiddenItemFlag(void)
{
    FlagSet(gSpecialVar_0x8004);
}

u16 GetWeekCount(void)
{
    u16 weekCount = gLocalTime.days / 7;
    if (weekCount > 9999)
        weekCount = 9999;

    return weekCount;
}

u8 GetLeadMonFriendshipScore(void)
{
    return GetMonFriendshipScore(&gPlayerParty[GetLeadMonIndex()]);
}

void CB2_FieldShowRegionMap(void)
{
    FieldInitRegionMap(CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

void FieldShowRegionMap(void)
{
    SetMainCallback2(CB2_FieldShowRegionMap);
}

static bool32 IsBuildingPCTile(u32 tileId)
{
    return gMapHeader.mapLayout->primaryTileset == &gTileset_Building && (tileId == METATILE_Building_PC_On || tileId == METATILE_Building_PC_Off);
}

static bool32 IsPlayerHousePCTile(u32 tileId)
{
    return gMapHeader.mapLayout->secondaryTileset == &gTileset_BrendansMaysHouse
        && (tileId == METATILE_BrendansMaysHouse_BrendanPC_On
            || tileId == METATILE_BrendansMaysHouse_BrendanPC_Off
            || tileId == METATILE_BrendansMaysHouse_MayPC_On
            || tileId == METATILE_BrendansMaysHouse_MayPC_Off);
}

static bool8 IsPlayerInFrontOfPC(void)
{
    s16 x, y;
    u32 tileInFront;

    GetXYCoordsOneStepInFrontOfPlayer(&x, &y);
    tileInFront = MapGridGetMetatileIdAt(x, y);

    return IsBuildingPCTile(tileInFront) || IsPlayerHousePCTile(tileInFront);
}

// Task data for Task_PCTurnOnEffect and Task_LotteryCornerComputerEffect
#define tPaused       data[0] // Never set
#define tTaskId       data[1]
#define tFlickerCount data[2]
#define tTimer        data[3]
#define tIsScreenOn   data[4]

// For this special, gSpecialVar_0x8004 is expected to be some PC_LOCATION_* value.
void DoPCTurnOnEffect(void)
{
    // commented out to make new GBC PC sprite work
    // if (FuncIsActiveTask(Task_PCTurnOnEffect) != TRUE && IsPlayerInFrontOfPC() == TRUE)
    // {
    //     u8 taskId = CreateTask(Task_PCTurnOnEffect, 8);
    //     gTasks[taskId].tPaused = FALSE;
    //     gTasks[taskId].tTaskId = taskId;
    //     gTasks[taskId].tFlickerCount = 0;
    //     gTasks[taskId].tTimer = 0;
    //     gTasks[taskId].tIsScreenOn = FALSE;
    // }
}

static void Task_PCTurnOnEffect(u8 taskId)
{
    struct Task *task = &gTasks[taskId];
    if (!task->tPaused)
        PCTurnOnEffect(task);
}

static void PCTurnOnEffect(struct Task *task)
{
    u8 playerDirection;
    s8 dx = 0;
    s8 dy = 0;
    if (task->tTimer == 6)
    {
        task->tTimer = 0;

        // Get where the PC should be, depending on where the player is looking.
        playerDirection = GetPlayerFacingDirection();
        switch (playerDirection)
        {
        case DIR_NORTH:
            dx = 0;
            dy = -1;
            break;
        case DIR_WEST:
            dx = -1;
            dy = -1;
            break;
        case DIR_EAST:
            dx = 1;
            dy = -1;
            break;
        }

        // Update map
        PCTurnOnEffect_SetMetatile(task->tIsScreenOn, dx, dy);
        DrawWholeMapView();

        // Screen flickers 5 times. Odd number and starting with the
        // screen off means the animation ends with the screen on.
        task->tIsScreenOn ^= 1;
        if (++task->tFlickerCount == 5)
            DestroyTask(task->tTaskId);
    }
    task->tTimer++;
}

static void PCTurnOnEffect_SetMetatile(s16 isScreenOn, s8 dx, s8 dy)
{
    u16 metatileId = 0;
    if (isScreenOn)
    {
        // Screen is on, set it off
        if (gSpecialVar_0x8004 == PC_LOCATION_OTHER)
            metatileId = METATILE_Building_PC_Off;
        else if (gSpecialVar_0x8004 == PC_LOCATION_BRENDANS_HOUSE)
            metatileId = METATILE_BrendansMaysHouse_BrendanPC_Off;
        else if (gSpecialVar_0x8004 == PC_LOCATION_MAYS_HOUSE)
            metatileId = METATILE_BrendansMaysHouse_MayPC_Off;
    }
    else
    {
        // Screen is off, set it on
        if (gSpecialVar_0x8004 == PC_LOCATION_OTHER)
            metatileId = METATILE_Building_PC_On;
        else if (gSpecialVar_0x8004 == PC_LOCATION_BRENDANS_HOUSE)
            metatileId = METATILE_BrendansMaysHouse_BrendanPC_On;
        else if (gSpecialVar_0x8004 == PC_LOCATION_MAYS_HOUSE)
            metatileId = METATILE_BrendansMaysHouse_MayPC_On;
    }
    MapGridSetMetatileIdAt(gSaveBlock1Ptr->pos.x + dx + MAP_OFFSET, gSaveBlock1Ptr->pos.y + dy + MAP_OFFSET, metatileId | MAPGRID_COLLISION_MASK);
}

// For this special, gSpecialVar_0x8004 is expected to be some PC_LOCATION_* value.
void DoPCTurnOffEffect(void)
{
    PCTurnOffEffect();
}

static void PCTurnOffEffect(void)
{
    s8 dx = 0;
    s8 dy = 0;
    u16 metatileId = 0;

    // Get where the PC should be, depending on where the player is looking.
    u8 playerDirection = GetPlayerFacingDirection();

    if (IsPlayerInFrontOfPC() == FALSE)
        return;
    switch (playerDirection)
    {
    case DIR_NORTH:
        dx = 0;
        dy = -1;
        break;
    case DIR_WEST:
        dx = -1;
        dy = -1;
        break;
    case DIR_EAST:
        dx = 1;
        dy = -1;
        break;
    }

    if (gSpecialVar_0x8004 == PC_LOCATION_OTHER)
        metatileId = METATILE_Building_PC_Off;
    else if (gSpecialVar_0x8004 == PC_LOCATION_BRENDANS_HOUSE)
        metatileId = METATILE_BrendansMaysHouse_BrendanPC_Off;
    else if (gSpecialVar_0x8004 == PC_LOCATION_MAYS_HOUSE)
        metatileId = METATILE_BrendansMaysHouse_MayPC_Off;

    MapGridSetMetatileIdAt(gSaveBlock1Ptr->pos.x + dx + MAP_OFFSET, gSaveBlock1Ptr->pos.y + dy + MAP_OFFSET, metatileId | MAPGRID_COLLISION_MASK);
    DrawWholeMapView();
}

void DoLotteryCornerComputerEffect(void)
{
    if (FuncIsActiveTask(Task_LotteryCornerComputerEffect) != TRUE)
    {
        u8 taskId = CreateTask(Task_LotteryCornerComputerEffect, 8);
        gTasks[taskId].tPaused = FALSE;
        gTasks[taskId].tTaskId = taskId;
        gTasks[taskId].tFlickerCount = 0;
        gTasks[taskId].tTimer = 0;
        gTasks[taskId].tIsScreenOn = FALSE;
    }
}

static void Task_LotteryCornerComputerEffect(u8 taskId)
{
    struct Task *task = &gTasks[taskId];
    if (!task->tPaused)
        LotteryCornerComputerEffect(task);
}

static void LotteryCornerComputerEffect(struct Task *task)
{
    if (task->tTimer == 6)
    {
        task->tTimer = 0;
        if (task->tIsScreenOn)
        {
            // Screen is on, set it off
            MapGridSetMetatileIdAt(11 + MAP_OFFSET, 1 + MAP_OFFSET, METATILE_Shop_Laptop1_Normal | MAPGRID_COLLISION_MASK);
            MapGridSetMetatileIdAt(11 + MAP_OFFSET, 2 + MAP_OFFSET, METATILE_Shop_Laptop2_Normal | MAPGRID_COLLISION_MASK);
        }
        else
        {
            // Screen is off, set it on
            MapGridSetMetatileIdAt(11 + MAP_OFFSET, 1 + MAP_OFFSET, METATILE_Shop_Laptop1_Flash | MAPGRID_COLLISION_MASK);
            MapGridSetMetatileIdAt(11 + MAP_OFFSET, 2 + MAP_OFFSET, METATILE_Shop_Laptop2_Flash | MAPGRID_COLLISION_MASK);
        }
        DrawWholeMapView();

        // Screen flickers 5 times. Odd number and starting with the
        // screen off means the animation ends with the screen on.
        task->tIsScreenOn ^= 1;
        if (++task->tFlickerCount == 5)
            DestroyTask(task->tTaskId);
    }
    task->tTimer++;
}

void EndLotteryCornerComputerEffect(void)
{
    MapGridSetMetatileIdAt(11 + MAP_OFFSET, 1 + MAP_OFFSET, METATILE_Shop_Laptop1_Normal | MAPGRID_COLLISION_MASK);
    MapGridSetMetatileIdAt(11 + MAP_OFFSET, 2 + MAP_OFFSET, METATILE_Shop_Laptop2_Normal | MAPGRID_COLLISION_MASK);
    DrawWholeMapView();
}

#undef tPaused
#undef tTaskId
#undef tFlickerCount
#undef tTimer
#undef tIsScreenOn

void SetTrickHouseNuggetFlag(void)
{
    u16 *specVar = &gSpecialVar_0x8004;
    u16 flag = FLAG_HIDDEN_ITEM_BRONZE_PASS_NORTH_ULTRA_BALL;
    *specVar = flag;
    FlagSet(flag);
}

void ResetTrickHouseNuggetFlag(void)
{
    u16 *specVar = &gSpecialVar_0x8004;
    u16 flag = FLAG_HIDDEN_ITEM_BRONZE_PASS_NORTH_ULTRA_BALL;
    *specVar = flag;
    FlagClear(flag);
}

bool8 CheckLeadMonCool(void)
{
    if (GetMonData(&gPlayerParty[GetLeadMonIndex()], MON_DATA_COOL) < 200)
        return FALSE;

    return TRUE;
}

bool8 CheckLeadMonBeauty(void)
{
    if (GetMonData(&gPlayerParty[GetLeadMonIndex()], MON_DATA_BEAUTY) < 200)
        return FALSE;

    return TRUE;
}

bool8 CheckLeadMonCute(void)
{
    if (GetMonData(&gPlayerParty[GetLeadMonIndex()], MON_DATA_CUTE) < 200)
        return FALSE;

    return TRUE;
}

bool8 CheckLeadMonSmart(void)
{
    if (GetMonData(&gPlayerParty[GetLeadMonIndex()], MON_DATA_SMART) < 200)
        return FALSE;

    return TRUE;
}

bool8 CheckLeadMonTough(void)
{
    if (GetMonData(&gPlayerParty[GetLeadMonIndex()], MON_DATA_TOUGH) < 200)
        return FALSE;

    return TRUE;
}

void IsGrassTypeInParty(void)
{
    u8 i;
    u16 species;
    struct Pokemon *pokemon;
    for (i = 0; i < PARTY_SIZE; i++)
    {
        pokemon = &gPlayerParty[i];
        if (GetMonData(pokemon, MON_DATA_SANITY_HAS_SPECIES) && !GetMonData(pokemon, MON_DATA_IS_EGG))
        {
            species = GetMonData(pokemon, MON_DATA_SPECIES);
            if (gSpeciesInfo[species].types[0] == TYPE_GRASS || gSpeciesInfo[species].types[1] == TYPE_GRASS)
            {
                gSpecialVar_Result = TRUE;
                return;
            }
        }
    }
    gSpecialVar_Result = FALSE;
}

void SpawnCameraObject(void)
{
    u8 obj = SpawnSpecialObjectEventParameterized(OBJ_EVENT_GFX_BOY_1,
                                                  MOVEMENT_TYPE_FACE_DOWN,
                                                  OBJ_EVENT_ID_CAMERA,
                                                  gSaveBlock1Ptr->pos.x + MAP_OFFSET,
                                                  gSaveBlock1Ptr->pos.y + MAP_OFFSET,
                                                  3); // elevation
    gObjectEvents[obj].invisible = TRUE;
    CameraObjectSetFollowedSpriteId(gObjectEvents[obj].spriteId);
}

void RemoveCameraObject(void)
{
    CameraObjectSetFollowedSpriteId(GetPlayerAvatarSpriteId());
    RemoveObjectEventByLocalIdAndMap(OBJ_EVENT_ID_CAMERA, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);
}

u8 GetPokeblockNameByMonNature(void)
{
    return CopyMonFavoritePokeblockName(GetNature(&gPlayerParty[GetLeadMonIndex()]), gStringVar1);
}

void GetSecretBaseNearbyMapName(void)
{
    GetMapName(gStringVar1, VarGet(VAR_SECRET_BASE_MAP), 0);
}

u16 GetBattleTowerSinglesStreak(void)
{
    return GetGameStat(GAME_STAT_BATTLE_TOWER_SINGLES_STREAK);
}

void BufferEReaderTrainerName(void)
{
    GetEreaderTrainerName(gStringVar1);
}

u16 GetSlotMachineId(void)
{
    static const u8 sSlotMachineRandomSeeds[SLOT_MACHINE_COUNT] = {12, 2, 4, 5, 1, 8, 7, 11, 3, 10, 9, 6};
    static const u8 sSlotMachineIds[SLOT_MACHINE_COUNT] = {
        SLOT_MACHINE_UNLUCKIEST,
        SLOT_MACHINE_UNLUCKIER,
        SLOT_MACHINE_UNLUCKIER,
        SLOT_MACHINE_UNLUCKY,
        SLOT_MACHINE_UNLUCKY,
        SLOT_MACHINE_UNLUCKY,
        SLOT_MACHINE_LUCKY,
        SLOT_MACHINE_LUCKY,
        SLOT_MACHINE_LUCKY,
        SLOT_MACHINE_LUCKIER,
        SLOT_MACHINE_LUCKIER,
        SLOT_MACHINE_LUCKIEST
    };
    static const u8 sSlotMachineServiceDayIds[SLOT_MACHINE_COUNT] = {
        SLOT_MACHINE_LUCKY,
        SLOT_MACHINE_LUCKY,
        SLOT_MACHINE_LUCKY,
        SLOT_MACHINE_LUCKY,
        SLOT_MACHINE_LUCKY,
        SLOT_MACHINE_LUCKY,
        SLOT_MACHINE_LUCKIER,
        SLOT_MACHINE_LUCKIER,
        SLOT_MACHINE_LUCKIER,
        SLOT_MACHINE_LUCKIER,
        SLOT_MACHINE_LUCKIEST,
        SLOT_MACHINE_LUCKIEST
    };

    u32 rnd = gSaveBlock1Ptr->dewfordTrends[0].trendiness + gSaveBlock1Ptr->dewfordTrends[0].rand + sSlotMachineRandomSeeds[gSpecialVar_0x8004];
    if (IsPokeNewsActive(POKENEWS_GAME_CORNER))
        return sSlotMachineServiceDayIds[rnd % SLOT_MACHINE_COUNT];

    return sSlotMachineIds[rnd % SLOT_MACHINE_COUNT];
}

bool8 FoundAbandonedShipRoom1Key(void)
{
    u16 *specVar = &gSpecialVar_0x8004;
    u16 flag = FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_1_KEY;
    *specVar = flag;
    if (!FlagGet(flag))
        return FALSE;

    return TRUE;
}

bool8 FoundAbandonedShipRoom2Key(void)
{
    u16 *specVar = &gSpecialVar_0x8004;
    u16 flag = FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_2_KEY;
    *specVar = flag;
    if (!FlagGet(flag))
        return FALSE;

    return TRUE;
}

bool8 FoundAbandonedShipRoom4Key(void)
{
    u16 *specVar = &gSpecialVar_0x8004;
    u16 flag = FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_4_KEY;
    *specVar = flag;
    if (!FlagGet(flag))
        return FALSE;

    return TRUE;
}

bool8 FoundAbandonedShipRoom6Key(void)
{
    u16 *specVar = &gSpecialVar_0x8004;
    u16 flag = FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_6_KEY;
    *specVar = flag;
    if (!FlagGet(flag))
        return FALSE;

    return TRUE;
}

bool8 LeadMonHasEffortRibbon(void)
{
    return GetMonData(&gPlayerParty[GetLeadMonIndex()], MON_DATA_EFFORT_RIBBON, NULL);
}

void GiveLeadMonEffortRibbon(void)
{
    bool8 ribbonSet;
    struct Pokemon *leadMon;
    IncrementGameStat(GAME_STAT_RECEIVED_RIBBONS);
    FlagSet(FLAG_SYS_RIBBON_GET);
    ribbonSet = TRUE;
    leadMon = &gPlayerParty[GetLeadMonIndex()];
    SetMonData(leadMon, MON_DATA_EFFORT_RIBBON, &ribbonSet);
    if (GetRibbonCount(leadMon) > NUM_CUTIES_RIBBONS)
        TryPutSpotTheCutiesOnAir(leadMon, MON_DATA_EFFORT_RIBBON);
}

bool8 Special_AreLeadMonEVsMaxedOut(void)
{
    if (GetMonEVCount(&gPlayerParty[GetLeadMonIndex()]) >= MAX_TOTAL_EVS)
        return TRUE;

    return FALSE;
}

u8 TryUpdateRusturfTunnelState(void)
{
    if (!FlagGet(FLAG_RUSTURF_TUNNEL_OPENED)
        && gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(RUSTURF_TUNNEL)
        && gSaveBlock1Ptr->location.mapNum == MAP_NUM(RUSTURF_TUNNEL))
    {
        if (FlagGet(FLAG_HIDE_RUSTURF_TUNNEL_ROCK_1))
        {
            VarSet(VAR_RUSTURF_TUNNEL_STATE, 4);
            return TRUE;
        }
        else if (FlagGet(FLAG_HIDE_RUSTURF_TUNNEL_ROCK_2))
        {
            VarSet(VAR_RUSTURF_TUNNEL_STATE, 5);
            return TRUE;
        }
    }
    return FALSE;
}

void SetShoalItemFlag(u16 unused)
{
    FlagSet(FLAG_SYS_SHOAL_ITEM);
}

void LoadWallyZigzagoon(void)
{
    u16 monData;
    CreateMon(&gPlayerParty[0], SPECIES_ZIGZAGOON, 7, USE_RANDOM_IVS, FALSE, 0, OT_ID_PLAYER_ID, 0);
    monData = TRUE;
    SetMonData(&gPlayerParty[0], MON_DATA_ABILITY_NUM, &monData);
    monData = MOVE_TACKLE;
    SetMonData(&gPlayerParty[0], MON_DATA_MOVE1, &monData);
    monData = MOVE_NONE;
    SetMonData(&gPlayerParty[0], MON_DATA_MOVE2, &monData);
    SetMonData(&gPlayerParty[0], MON_DATA_MOVE3, &monData);
    SetMonData(&gPlayerParty[0], MON_DATA_MOVE4, &monData);
}

bool8 IsStarterInParty(void)
{
    u8 i;
    u16 starter = GetStarterPokemon(VarGet(VAR_STARTER_MON));
    u8 partyCount = CalculatePlayerPartyCount();
    for (i = 0; i < partyCount; i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG, NULL) == starter)
            return TRUE;
    }
    return FALSE;
}

bool8 ScriptCheckFreePokemonStorageSpace(void)
{
    return CheckFreePokemonStorageSpace();
}

bool8 IsPokerusInParty(void)
{
    if (!CheckPartyPokerus(gPlayerParty, (1 << PARTY_SIZE) - 1))
        return FALSE;

    return TRUE;
}

// Task data for Task_ShakeCamera
#define tHorizontalPan  data[0]
#define tDelayCounter   data[1]
#define tNumShakes      data[2]
#define tDelay          data[3]
#define tVerticalPan    data[4]

void ShakeCamera(void)
{
    u8 taskId = CreateTask(Task_ShakeCamera, 9);
    gTasks[taskId].tHorizontalPan = gSpecialVar_0x8005;
    gTasks[taskId].tDelayCounter = 0;
    gTasks[taskId].tNumShakes = gSpecialVar_0x8006;
    gTasks[taskId].tDelay = gSpecialVar_0x8007;
    gTasks[taskId].tVerticalPan = gSpecialVar_0x8004;
    SetCameraPanningCallback(NULL);
    PlaySE(SE_M_STRENGTH);
}

static void Task_ShakeCamera(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    tDelayCounter++;
    if (tDelayCounter % tDelay == 0)
    {
        tDelayCounter = 0;
        tNumShakes--;
        tHorizontalPan = -tHorizontalPan;
        tVerticalPan = -tVerticalPan;
        SetCameraPanning(tHorizontalPan, tVerticalPan);
        if (tNumShakes == 0)
        {
            StopCameraShake(taskId);
            InstallCameraPanAheadCallback();
        }
    }
}

static void StopCameraShake(u8 taskId)
{
    DestroyTask(taskId);
    ScriptContext_Enable();
}

#undef tHorizontalPan
#undef tDelayCounter
#undef tNumShakes
#undef tDelay
#undef tVerticalPan

bool8 FoundBlackGlasses(void)
{
    return FlagGet(FLAG_HIDDEN_ITEM_ROUTE_116_BLACK_GLASSES);
}

void SetRoute119Weather(void)
{
    if (IsMapTypeOutdoors(GetLastUsedWarpMapType()) != TRUE)
        SetSavedWeather(WEATHER_ROUTE119_CYCLE);
}

void SetRoute123Weather(void)
{
    if (IsMapTypeOutdoors(GetLastUsedWarpMapType()) != TRUE)
        SetSavedWeather(WEATHER_ROUTE123_CYCLE);
}

u8 GetLeadMonIndex(void)
{
    u8 i;
    u8 partyCount = CalculatePlayerPartyCount();
    for (i = 0; i < partyCount; i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG, NULL) != SPECIES_EGG
         && GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG, NULL) != SPECIES_NONE)
            return i;
    }
    return 0;
}

u16 ScriptGetPartyMonSpecies(void)
{
    return GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_SPECIES, NULL);
}

// Removed for Emerald
void TryInitBattleTowerAwardManObjectEvent(void)
{
    //TryInitLocalObjectEvent(6);
}

u16 GetDaysUntilPacifidlogTMAvailable(void)
{
    u16 tmReceivedDay = VarGet(VAR_PACIFIDLOG_TM_RECEIVED_DAY);
    if (gLocalTime.days - tmReceivedDay >= 7)
        return 0;
    else if (gLocalTime.days < 0)
        return 8;

    return 7 - (gLocalTime.days - tmReceivedDay);
}

u16 SetPacifidlogTMReceivedDay(void)
{
    VarSet(VAR_PACIFIDLOG_TM_RECEIVED_DAY, gLocalTime.days);
    return gLocalTime.days;
}

bool8 MonOTNameNotPlayer(void)
{
    if (GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_LANGUAGE) != GAME_LANGUAGE)
        return TRUE;

    GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_OT_NAME, gStringVar1);

    if (!StringCompare(gSaveBlock2Ptr->playerName, gStringVar1))
        return FALSE;

    return TRUE;
}

void BufferLottoTicketNumber(void)
{
    if (gSpecialVar_Result >= 10000)
    {
        ConvertIntToDecimalString(0, gSpecialVar_Result);
    }
    else if (gSpecialVar_Result >= 1000)
    {
        gStringVar1[0] = CHAR_0;
        ConvertIntToDecimalStringN(gStringVar1 + 1, gSpecialVar_Result, STR_CONV_MODE_LEFT_ALIGN, CountDigits(gSpecialVar_Result));
    }
    else if (gSpecialVar_Result >= 100)
    {
        gStringVar1[0] = CHAR_0;
        gStringVar1[1] = CHAR_0;
        ConvertIntToDecimalStringN(gStringVar1 + 2, gSpecialVar_Result, STR_CONV_MODE_LEFT_ALIGN, CountDigits(gSpecialVar_Result));
    }
    else if (gSpecialVar_Result >= 10)
    {
        gStringVar1[0] = CHAR_0;
        gStringVar1[1] = CHAR_0;
        gStringVar1[2] = CHAR_0;
        ConvertIntToDecimalStringN(gStringVar1 + 3, gSpecialVar_Result, STR_CONV_MODE_LEFT_ALIGN, CountDigits(gSpecialVar_Result));
    }
    else
    {
        gStringVar1[0] = CHAR_0;
        gStringVar1[1] = CHAR_0;
        gStringVar1[2] = CHAR_0;
        gStringVar1[3] = CHAR_0;
        ConvertIntToDecimalStringN(gStringVar1 + 4, gSpecialVar_Result, STR_CONV_MODE_LEFT_ALIGN, CountDigits(gSpecialVar_Result));
    }
}

u16 GetMysteryGiftCardStat(void)
{
    switch (gSpecialVar_Result)
    {
    case GET_NUM_STAMPS:
        return MysteryGift_GetCardStat(CARD_STAT_NUM_STAMPS);
    case GET_MAX_STAMPS:
        return MysteryGift_GetCardStat(CARD_STAT_MAX_STAMPS);
    case GET_CARD_BATTLES_WON:
        return MysteryGift_GetCardStat(CARD_STAT_BATTLES_WON);
    case GET_CARD_BATTLES_LOST: // Never occurs
        return MysteryGift_GetCardStat(CARD_STAT_BATTLES_LOST);
    case GET_CARD_NUM_TRADES: // Never occurs
        return MysteryGift_GetCardStat(CARD_STAT_NUM_TRADES);
    default:
        return 0;
    }
}

bool8 BufferTMHMMoveName(void)
{
    if (gSpecialVar_0x8004 >= ITEM_TM01 && gSpecialVar_0x8004 <= ITEM_HM08)
    {
        StringCopy(gStringVar2, GetMoveName(ItemIdToBattleMoveId(gSpecialVar_0x8004)));
        return TRUE;
    }

    return FALSE;
}

bool8 IsBadEggInParty(void)
{
    u8 partyCount = CalculatePlayerPartyCount();
    u8 i;

    for (i = 0; i < partyCount; i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_SANITY_IS_BAD_EGG) == TRUE)
            return TRUE;
    }

    return FALSE;
}

bool8 InMultiPartnerRoom(void)
{
    if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(BATTLE_FRONTIER_BATTLE_TOWER_MULTI_PARTNER_ROOM)
        && gSaveBlock1Ptr->location.mapNum == MAP_NUM(BATTLE_FRONTIER_BATTLE_TOWER_MULTI_PARTNER_ROOM) &&
        VarGet(VAR_FRONTIER_BATTLE_MODE) == FRONTIER_MODE_MULTIS)
        return TRUE;
    return FALSE;
}

void OffsetCameraForBattle(void)
{
    SetCameraPanningCallback(NULL);
    SetCameraPanning(8, 0);
}

static const struct WindowTemplate sWindowTemplate_ElevatorFloor =
{
    .bg = 0,
    .tilemapLeft = 21,
    .tilemapTop = 1,
    .width = 8,
    .height = 4,
    .paletteNum = 15,
    .baseBlock = 8,
};

static const u8 *const sDeptStoreFloorNames[] =
{
    [DEPT_STORE_FLOORNUM_B4F] = gText_B4F,
    [DEPT_STORE_FLOORNUM_B3F] = gText_B3F,
    [DEPT_STORE_FLOORNUM_B2F] = gText_B2F,
    [DEPT_STORE_FLOORNUM_B1F] = gText_B1F,
    [DEPT_STORE_FLOORNUM_1F] = gText_1F,
    [DEPT_STORE_FLOORNUM_2F] = gText_2F,
    [DEPT_STORE_FLOORNUM_3F] = gText_3F,
    [DEPT_STORE_FLOORNUM_4F] = gText_4F,
    [DEPT_STORE_FLOORNUM_5F] = gText_5F,
    [DEPT_STORE_FLOORNUM_6F] = gText_6F,
    [DEPT_STORE_FLOORNUM_7F] = gText_7F,
    [DEPT_STORE_FLOORNUM_8F] = gText_8F,
    [DEPT_STORE_FLOORNUM_9F] = gText_9F,
    [DEPT_STORE_FLOORNUM_10F] = gText_10F,
    [DEPT_STORE_FLOORNUM_11F] = gText_11F,
    [DEPT_STORE_FLOORNUM_ROOFTOP] = gText_Rooftop
};

static const u16 sElevatorWindowTiles_Ascending[ELEVATOR_WINDOW_HEIGHT][ELEVATOR_LIGHT_STAGES] =
{
    {
        METATILE_BattleFrontier_Elevator_Top0,
        METATILE_BattleFrontier_Elevator_Top1,
        METATILE_BattleFrontier_Elevator_Top2
    },
    {
        METATILE_BattleFrontier_Elevator_Mid0,
        METATILE_BattleFrontier_Elevator_Mid1,
        METATILE_BattleFrontier_Elevator_Mid2
    },
    {
        METATILE_BattleFrontier_Elevator_Bottom0,
        METATILE_BattleFrontier_Elevator_Bottom1,
        METATILE_BattleFrontier_Elevator_Bottom2
    },
};

static const u16 sElevatorWindowTiles_Descending[ELEVATOR_WINDOW_HEIGHT][ELEVATOR_LIGHT_STAGES] =
{
    {
        METATILE_BattleFrontier_Elevator_Top0,
        METATILE_BattleFrontier_Elevator_Top2,
        METATILE_BattleFrontier_Elevator_Top1
    },
    {
        METATILE_BattleFrontier_Elevator_Mid0,
        METATILE_BattleFrontier_Elevator_Mid2,
        METATILE_BattleFrontier_Elevator_Mid1
    },
    {
        METATILE_BattleFrontier_Elevator_Bottom0,
        METATILE_BattleFrontier_Elevator_Bottom2,
        METATILE_BattleFrontier_Elevator_Bottom1
    },
};

void SetDeptStoreFloor(void)
{
    u8 deptStoreFloor;
    switch (gSaveBlock1Ptr->dynamicWarp.mapNum)
    {
    case MAP_NUM(LILYCOVE_CITY_DEPARTMENT_STORE_1F):
        deptStoreFloor = DEPT_STORE_FLOORNUM_1F;
        break;
    case MAP_NUM(LILYCOVE_CITY_DEPARTMENT_STORE_2F):
        deptStoreFloor = DEPT_STORE_FLOORNUM_2F;
        break;
    case MAP_NUM(LILYCOVE_CITY_DEPARTMENT_STORE_3F):
        deptStoreFloor = DEPT_STORE_FLOORNUM_3F;
        break;
    case MAP_NUM(LILYCOVE_CITY_DEPARTMENT_STORE_4F):
        deptStoreFloor = DEPT_STORE_FLOORNUM_4F;
        break;
    case MAP_NUM(LILYCOVE_CITY_DEPARTMENT_STORE_5F):
        deptStoreFloor = DEPT_STORE_FLOORNUM_5F;
        break;
    case MAP_NUM(LILYCOVE_CITY_DEPARTMENT_STORE_ROOFTOP):
        deptStoreFloor = DEPT_STORE_FLOORNUM_ROOFTOP;
        break;
    default:
        deptStoreFloor = DEPT_STORE_FLOORNUM_1F;
        break;
    }
    VarSet(VAR_DEPT_STORE_FLOOR, deptStoreFloor);
}

u16 GetDeptStoreDefaultFloorChoice(void)
{
    sLilycoveDeptStore_NeverRead = 0;
    sLilycoveDeptStore_DefaultFloorChoice = 0;

    if (gSaveBlock1Ptr->dynamicWarp.mapGroup == MAP_GROUP(LILYCOVE_CITY_DEPARTMENT_STORE_1F))
    {
        switch (gSaveBlock1Ptr->dynamicWarp.mapNum)
        {
        case MAP_NUM(LILYCOVE_CITY_DEPARTMENT_STORE_5F):
            sLilycoveDeptStore_NeverRead = 0;
            sLilycoveDeptStore_DefaultFloorChoice = 0;
            break;
        case MAP_NUM(LILYCOVE_CITY_DEPARTMENT_STORE_4F):
            sLilycoveDeptStore_NeverRead = 0;
            sLilycoveDeptStore_DefaultFloorChoice = 1;
            break;
        case MAP_NUM(LILYCOVE_CITY_DEPARTMENT_STORE_3F):
            sLilycoveDeptStore_NeverRead = 0;
            sLilycoveDeptStore_DefaultFloorChoice = 2;
            break;
        case MAP_NUM(LILYCOVE_CITY_DEPARTMENT_STORE_2F):
            sLilycoveDeptStore_NeverRead = 0;
            sLilycoveDeptStore_DefaultFloorChoice = 3;
            break;
        case MAP_NUM(LILYCOVE_CITY_DEPARTMENT_STORE_1F):
            sLilycoveDeptStore_NeverRead = 0;
            sLilycoveDeptStore_DefaultFloorChoice = 4;
            break;
        }
    }

    return sLilycoveDeptStore_DefaultFloorChoice;
}

// Task data for Task_MoveElevator
#define tTimer       data[1]
#define tMoveCounter data[2]
#define tVerticalPan data[4]
#define tTotalMoves  data[5]
#define tDescending  data[6]

// The maximum considered difference between floors.
// Elevator trips with a larger difference are treated the same
// (i.e. traveling 9 floors and 200 floors would take the same amount of time).
#define MAX_ELEVATOR_TRIP 9

// gSpecialVar_0x8005 here is expected to be the current floor number, and
// gSpecialVar_0x8006 is expected to be the destination floor number.
void MoveElevator(void)
{
    static const u8 sElevatorTripLength[MAX_ELEVATOR_TRIP] = { 8, 16, 24, 32, 38, 46, 52, 56, 57 };

    s16 *data = gTasks[CreateTask(Task_MoveElevator, 9)].data;
    u16 floorDelta;

    tTimer = 0;
    tMoveCounter = 0;
    tVerticalPan = 1;

    if (gSpecialVar_0x8005 > gSpecialVar_0x8006)
    {
        floorDelta = gSpecialVar_0x8005 - gSpecialVar_0x8006;
        tDescending = TRUE;
    }
    else
    {
        floorDelta = gSpecialVar_0x8006 - gSpecialVar_0x8005;
        tDescending = FALSE;
    }

    if (floorDelta > MAX_ELEVATOR_TRIP - 1)
        floorDelta = MAX_ELEVATOR_TRIP - 1;

    tTotalMoves = sElevatorTripLength[floorDelta];

    SetCameraPanningCallback(NULL);
    MoveElevatorWindowLights(floorDelta, tDescending);
    PlaySE(SE_ELEVATOR);
}

static void Task_MoveElevator(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    tTimer++;
    if (tTimer % 3 == 0)
    {
        tTimer = 0;
        tMoveCounter++;
        tVerticalPan = -tVerticalPan;
        SetCameraPanning(0, tVerticalPan);

        if (tMoveCounter == tTotalMoves)
        {
            // Arrived at floor
            PlaySE(SE_DING_DONG);
            DestroyTask(taskId);
            ScriptContext_Enable();
            InstallCameraPanAheadCallback();
        }
    }
}

#undef tTimer
#undef tMoveCounter
#undef tVerticalPan
#undef tTotalMoves
#undef tDescending

void ShowDeptStoreElevatorFloorSelect(void)
{
    int xPos;

    sTutorMoveAndElevatorWindowId = AddWindow(&sWindowTemplate_ElevatorFloor);
    SetStandardWindowBorderStyle(sTutorMoveAndElevatorWindowId, FALSE);

    xPos = GetStringCenterAlignXOffset(FONT_NORMAL, gText_ElevatorNowOn, 64);
    AddTextPrinterParameterized(sTutorMoveAndElevatorWindowId, FONT_NORMAL, gText_ElevatorNowOn, xPos, 1, TEXT_SKIP_DRAW, NULL);

    xPos = GetStringCenterAlignXOffset(FONT_NORMAL, sDeptStoreFloorNames[gSpecialVar_0x8005], 64);
    AddTextPrinterParameterized(sTutorMoveAndElevatorWindowId, FONT_NORMAL, sDeptStoreFloorNames[gSpecialVar_0x8005], xPos, 17, TEXT_SKIP_DRAW, NULL);

    PutWindowTilemap(sTutorMoveAndElevatorWindowId);
    CopyWindowToVram(sTutorMoveAndElevatorWindowId, COPYWIN_FULL);
}

void CloseDeptStoreElevatorWindow(void)
{
    ClearStdWindowAndFrameToTransparent(sTutorMoveAndElevatorWindowId, TRUE);
    RemoveWindow(sTutorMoveAndElevatorWindowId);
}

// Task data for Task_MoveElevatorWindowLights
#define tMoveCounter data[0]
#define tTimer       data[1]
#define tDescending  data[2]
#define tTotalMoves  data[3]

static void MoveElevatorWindowLights(u16 floorDelta, bool8 descending)
{
    static const u8 sElevatorLightCycles[MAX_ELEVATOR_TRIP] = { 3, 6, 9, 12, 15, 18, 21, 24, 27 };

    if (FuncIsActiveTask(Task_MoveElevatorWindowLights) != TRUE)
    {
        u8 taskId = CreateTask(Task_MoveElevatorWindowLights, 8);
        gTasks[taskId].tMoveCounter = 0;
        gTasks[taskId].tTimer = 0;
        gTasks[taskId].tDescending = descending;
        gTasks[taskId].tTotalMoves = sElevatorLightCycles[floorDelta];
    }
}

static void Task_MoveElevatorWindowLights(u8 taskId)
{
    u8 x, y;
    s16 *data = gTasks[taskId].data;

    if (tTimer == 6)
    {
        tMoveCounter++;

        if (!tDescending)
        {
            // Ascending
            for (y = 0; y < ELEVATOR_WINDOW_HEIGHT; y++)
            {
                for (x = 0; x < ELEVATOR_WINDOW_WIDTH; x++)
                    MapGridSetMetatileIdAt(x + MAP_OFFSET + 1, y + MAP_OFFSET, sElevatorWindowTiles_Ascending[y][tMoveCounter % ELEVATOR_LIGHT_STAGES] | MAPGRID_COLLISION_MASK);
            }
        }
        else
        {
            // Descending
            for (y = 0; y < ELEVATOR_WINDOW_HEIGHT; y++)
            {
                for (x = 0; x < ELEVATOR_WINDOW_WIDTH; x++)
                    MapGridSetMetatileIdAt(x + MAP_OFFSET + 1, y + MAP_OFFSET, sElevatorWindowTiles_Descending[y][tMoveCounter % ELEVATOR_LIGHT_STAGES] | MAPGRID_COLLISION_MASK);
            }
        }
        DrawWholeMapView();
        tTimer = 0;
        if (tMoveCounter == tTotalMoves)
            DestroyTask(taskId);
    }
    tTimer++;
}

#undef tMoveCounter
#undef tTimer
#undef tDescending
#undef tTotalMoves

void BufferVarsForIVRater(void)
{
    u8 i;
    u32 ivStorage[NUM_STATS];

    ivStorage[STAT_HP] = GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_HP_IV);
    ivStorage[STAT_ATK] = GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_ATK_IV);
    ivStorage[STAT_DEF] = GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_DEF_IV);
    ivStorage[STAT_SPEED] = GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_SPEED_IV);
    ivStorage[STAT_SPATK] = GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_SPATK_IV);
    ivStorage[STAT_SPDEF] = GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_SPDEF_IV);

    gSpecialVar_0x8005 = 0;

    for (i = 0; i < NUM_STATS; i++)
        gSpecialVar_0x8005 += ivStorage[i];

    gSpecialVar_0x8006 = 0;
    gSpecialVar_0x8007 = ivStorage[STAT_HP];

    for (i = 1; i < NUM_STATS; i++)
    {
        if (ivStorage[gSpecialVar_0x8006] < ivStorage[i])
        {
            gSpecialVar_0x8006 = i;
            gSpecialVar_0x8007 = ivStorage[i];
        }
        else if (ivStorage[gSpecialVar_0x8006] == ivStorage[i])
        {
            u16 randomNumber = Random();
            if (randomNumber & 1)
            {
                gSpecialVar_0x8006 = i;
                gSpecialVar_0x8007 = ivStorage[i];
            }
        }
    }
}

bool8 UsedPokemonCenterWarp(void)
{
    static const u16 sPokemonCenters[] =
    {
        MAP_OLDALE_TOWN_POKEMON_CENTER_1F,
        MAP_DEWFORD_TOWN_POKEMON_CENTER_1F,
        MAP_LAVARIDGE_TOWN_POKEMON_CENTER_1F,
        MAP_FALLARBOR_TOWN_POKEMON_CENTER_1F,
        MAP_VERDANTURF_TOWN_POKEMON_CENTER_1F,
        MAP_PACIFIDLOG_TOWN_POKEMON_CENTER_1F,
        MAP_PETALBURG_CITY_POKEMON_CENTER_1F,
        MAP_SLATEPORT_CITY_POKEMON_CENTER_1F,
        MAP_MAUVILLE_CITY_POKEMON_CENTER_1F,
        MAP_RUSTBORO_CITY_POKEMON_CENTER_1F,
        MAP_FORTREE_CITY_POKEMON_CENTER_1F,
        MAP_LILYCOVE_CITY_POKEMON_CENTER_1F,
        MAP_MOSSDEEP_CITY_POKEMON_CENTER_1F,
        MAP_SOOTOPOLIS_CITY_POKEMON_CENTER_1F,
        MAP_EVER_GRANDE_CITY_POKEMON_CENTER_1F,
        MAP_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F,
        MAP_BATTLE_FRONTIER_POKEMON_CENTER_1F,
        MAP_UNION_ROOM,
        MAP_UNDEFINED
    };

    int i;
    u16 map = (gLastUsedWarp.mapGroup << 8) + gLastUsedWarp.mapNum;

    for (i = 0; sPokemonCenters[i] != MAP_UNDEFINED; i++)
    {
        if (sPokemonCenters[i] == map)
            return TRUE;
    }

    return FALSE;
}

bool32 PlayerNotAtTrainerHillEntrance(void)
{
    if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(TRAINER_HILL_ENTRANCE) && gSaveBlock1Ptr->location.mapNum == MAP_NUM(TRAINER_HILL_ENTRANCE))
        return FALSE;

    return TRUE;
}

void UpdateFrontierManiac(u16 daysSince)
{
    u16 *var = GetVarPointer(VAR_FRONTIER_MANIAC_FACILITY);
    *var += daysSince;
    *var %= FRONTIER_MANIAC_FACILITY_COUNT;
}

void ShowFrontierManiacMessage(void)
{
    static const u8 *const sFrontierManiacMessages[][FRONTIER_MANIAC_MESSAGE_COUNT] =
    {
        [FRONTIER_MANIAC_TOWER_SINGLES] =
        {
            BattleFrontier_Lounge2_Text_SalonMaidenIsThere,
            BattleFrontier_Lounge2_Text_SalonMaidenSilverMons,
            BattleFrontier_Lounge2_Text_SalonMaidenGoldMons
        },
        [FRONTIER_MANIAC_TOWER_DOUBLES] =
        {
            BattleFrontier_Lounge2_Text_DoubleBattleAdvice1,
            BattleFrontier_Lounge2_Text_DoubleBattleAdvice2,
            BattleFrontier_Lounge2_Text_DoubleBattleAdvice3
        },
        [FRONTIER_MANIAC_TOWER_MULTIS] =
        {
            BattleFrontier_Lounge2_Text_MultiBattleAdvice,
            BattleFrontier_Lounge2_Text_MultiBattleAdvice,
            BattleFrontier_Lounge2_Text_MultiBattleAdvice
        },
        [FRONTIER_MANIAC_TOWER_LINK] =
        {
            BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice,
            BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice,
            BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice
        },
        [FRONTIER_MANIAC_DOME] =
        {
            BattleFrontier_Lounge2_Text_DomeAceIsThere,
            BattleFrontier_Lounge2_Text_DomeAceSilverMons,
            BattleFrontier_Lounge2_Text_DomeAceGoldMons
        },
        [FRONTIER_MANIAC_FACTORY] =
        {
            BattleFrontier_Lounge2_Text_FactoryHeadIsThere,
            BattleFrontier_Lounge2_Text_FactoryHeadSilverMons,
            BattleFrontier_Lounge2_Text_FactoryHeadGoldMons
        },
        [FRONTIER_MANIAC_PALACE] =
        {
            BattleFrontier_Lounge2_Text_PalaceMavenIsThere,
            BattleFrontier_Lounge2_Text_PalaceMavenSilverMons,
            BattleFrontier_Lounge2_Text_PalaceMavenGoldMons
        },
        [FRONTIER_MANIAC_ARENA] =
        {
            BattleFrontier_Lounge2_Text_ArenaTycoonIsThere,
            BattleFrontier_Lounge2_Text_ArenaTycoonSilverMons,
            BattleFrontier_Lounge2_Text_ArenaTycoonGoldMons
        },
        [FRONTIER_MANIAC_PIKE] =
        {
            BattleFrontier_Lounge2_Text_PikeQueenIsThere,
            BattleFrontier_Lounge2_Text_PikeQueenSilverMons,
            BattleFrontier_Lounge2_Text_PikeQueenGoldMons
        },
        [FRONTIER_MANIAC_PYRAMID] =
        {
            BattleFrontier_Lounge2_Text_PyramidKingIsThere,
            BattleFrontier_Lounge2_Text_PyramidKingSilverMons,
            BattleFrontier_Lounge2_Text_PyramidKingGoldMons
        },
    };

    static const u8 sFrontierManiacStreakThresholds[][FRONTIER_MANIAC_MESSAGE_COUNT - 1] =
    {
        [FRONTIER_MANIAC_TOWER_SINGLES] = { 21, 56 },
        [FRONTIER_MANIAC_TOWER_DOUBLES] = { 21, 35 },
        [FRONTIER_MANIAC_TOWER_MULTIS]  = { 255, 255 },
        [FRONTIER_MANIAC_TOWER_LINK]    = { 255, 255 },
        [FRONTIER_MANIAC_DOME]          = { 2, 4 },
        [FRONTIER_MANIAC_FACTORY]       = { 7, 21 },
        [FRONTIER_MANIAC_PALACE]        = { 7, 21 },
        [FRONTIER_MANIAC_ARENA]         = { 14, 28 },
        [FRONTIER_MANIAC_PIKE]          = { 13, 112 }, //BUG: 112 (0x70) is probably a mistake; the Pike Queen is battled twice well before that
        [FRONTIER_MANIAC_PYRAMID]       = { 7, 56 }
    };

    u8 i;
    u16 winStreak = 0;
    u16 facility = VarGet(VAR_FRONTIER_MANIAC_FACILITY);

    switch (facility)
    {
    case FRONTIER_MANIAC_TOWER_SINGLES:
    case FRONTIER_MANIAC_TOWER_DOUBLES:
    case FRONTIER_MANIAC_TOWER_MULTIS:
    case FRONTIER_MANIAC_TOWER_LINK:
        if (gSaveBlock2Ptr->frontier.towerWinStreaks[facility][FRONTIER_LVL_50]
            >= gSaveBlock2Ptr->frontier.towerWinStreaks[facility][FRONTIER_LVL_OPEN])
            winStreak = gSaveBlock2Ptr->frontier.towerWinStreaks[facility][FRONTIER_LVL_50];
        else
            winStreak = gSaveBlock2Ptr->frontier.towerWinStreaks[facility][FRONTIER_LVL_OPEN];
        break;
    case FRONTIER_MANIAC_DOME:
        if (gSaveBlock2Ptr->frontier.domeWinStreaks[FRONTIER_MODE_SINGLES][FRONTIER_LVL_50]
            >= gSaveBlock2Ptr->frontier.domeWinStreaks[FRONTIER_MODE_SINGLES][FRONTIER_LVL_OPEN])
            winStreak = gSaveBlock2Ptr->frontier.domeWinStreaks[FRONTIER_MODE_SINGLES][FRONTIER_LVL_50];
        else
            winStreak = gSaveBlock2Ptr->frontier.domeWinStreaks[FRONTIER_MODE_SINGLES][FRONTIER_LVL_OPEN];
        break;
    case FRONTIER_MANIAC_FACTORY:
        if (gSaveBlock2Ptr->frontier.factoryWinStreaks[FRONTIER_MODE_SINGLES][FRONTIER_LVL_50]
            >= gSaveBlock2Ptr->frontier.factoryWinStreaks[FRONTIER_MODE_SINGLES][FRONTIER_LVL_OPEN])
            winStreak = gSaveBlock2Ptr->frontier.factoryWinStreaks[FRONTIER_MODE_SINGLES][FRONTIER_LVL_50];
        else
            winStreak = gSaveBlock2Ptr->frontier.factoryWinStreaks[FRONTIER_MODE_SINGLES][FRONTIER_LVL_OPEN];
        break;
    case FRONTIER_MANIAC_PALACE:
        if (gSaveBlock2Ptr->frontier.palaceWinStreaks[FRONTIER_MODE_SINGLES][FRONTIER_LVL_50]
            >= gSaveBlock2Ptr->frontier.palaceWinStreaks[FRONTIER_MODE_SINGLES][FRONTIER_LVL_OPEN])
            winStreak = gSaveBlock2Ptr->frontier.palaceWinStreaks[FRONTIER_MODE_SINGLES][FRONTIER_LVL_50];
        else
            winStreak = gSaveBlock2Ptr->frontier.palaceWinStreaks[FRONTIER_MODE_SINGLES][FRONTIER_LVL_OPEN];
        break;
    case FRONTIER_MANIAC_ARENA:
        if (gSaveBlock2Ptr->frontier.arenaWinStreaks[FRONTIER_LVL_50]
            >= gSaveBlock2Ptr->frontier.arenaWinStreaks[FRONTIER_LVL_OPEN])
            winStreak = gSaveBlock2Ptr->frontier.arenaWinStreaks[FRONTIER_LVL_50];
        else
            winStreak = gSaveBlock2Ptr->frontier.arenaWinStreaks[FRONTIER_LVL_OPEN];
        break;
    case FRONTIER_MANIAC_PIKE:
        if (gSaveBlock2Ptr->frontier.pikeWinStreaks[FRONTIER_LVL_50]
            >= gSaveBlock2Ptr->frontier.pikeWinStreaks[FRONTIER_LVL_OPEN])
            winStreak = gSaveBlock2Ptr->frontier.pikeWinStreaks[FRONTIER_LVL_50];
        else
            winStreak = gSaveBlock2Ptr->frontier.pikeWinStreaks[FRONTIER_LVL_OPEN];
        break;
    case FRONTIER_MANIAC_PYRAMID:
        if (gSaveBlock2Ptr->frontier.pyramidWinStreaks[FRONTIER_LVL_50]
            >= gSaveBlock2Ptr->frontier.pyramidWinStreaks[FRONTIER_LVL_OPEN])
            winStreak = gSaveBlock2Ptr->frontier.pyramidWinStreaks[FRONTIER_LVL_50];
        else
            winStreak = gSaveBlock2Ptr->frontier.pyramidWinStreaks[FRONTIER_LVL_OPEN];
        break;
    default:
        return;
    }

    for (i = 0; i < FRONTIER_MANIAC_MESSAGE_COUNT - 1 && sFrontierManiacStreakThresholds[facility][i] < winStreak; i++);

    ShowFieldMessage(sFrontierManiacMessages[facility][i]);
}

// gSpecialVar_0x8005 and 0x8006 here are used by MoveElevator
void BufferBattleTowerElevatorFloors(void)
{
    static const u16 sBattleTowerStreakThresholds[] = {
        7, 14, 21, 28, 35, 49, 63, 77, 91, 0
    };

    u8 i;
    u16 battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);
    u8 lvlMode = gSaveBlock2Ptr->frontier.lvlMode;

    if (battleMode == FRONTIER_MODE_MULTIS && !FlagGet(FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER))
    {
        gSpecialVar_0x8005 = 5;
        gSpecialVar_0x8006 = 4;
        return;
    }

    for (i = 0; i < ARRAY_COUNT(sBattleTowerStreakThresholds) - 1; i++)
    {
        if (sBattleTowerStreakThresholds[i] > gSaveBlock2Ptr->frontier.towerWinStreaks[battleMode][lvlMode])
        {
            gSpecialVar_0x8005 = 4;
            gSpecialVar_0x8006 = i + 5;
            return;
        }
    }

    gSpecialVar_0x8005 = 4;
    gSpecialVar_0x8006 = 12;
}

// Scrollable Multichoice task data defines
#define tMaxItemsOnScreen    data[0]
#define tNumItems            data[1]
#define tLeft                data[2]
#define tTop                 data[3]
#define tWidth               data[4]
#define tHeight              data[5]
#define tKeepOpenAfterSelect data[6]
#define tScrollOffset        data[7]
#define tSelectedRow         data[8]
#define tScrollMultiId       data[11]
#define tScrollArrowId       data[12]
#define tWindowId            data[13]
#define tListTaskId          data[14]
#define tTaskId              data[15]
// data[9] and [10] unused

void ShowScrollableMultichoice(void)
{
    u8 taskId = CreateTask(Task_ShowScrollableMultichoice, 8);
    struct Task *task = &gTasks[taskId];
    task->tScrollMultiId = gSpecialVar_0x8004;

    switch (gSpecialVar_0x8004)
    {
    case SCROLL_MULTI_NONE:
        task->tMaxItemsOnScreen = 1;
        task->tNumItems = 1;
        task->tLeft = 1;
        task->tTop = 1;
        task->tWidth = 1;
        task->tHeight = 1;
        task->tKeepOpenAfterSelect = FALSE;
        task->tTaskId = taskId;
        break;
    case SCROLL_MULTI_GLASS_WORKSHOP_VENDOR:
        task->tMaxItemsOnScreen = MAX_SCROLL_MULTI_ON_SCREEN - 1;
        task->tNumItems = 8;
        task->tLeft = 1;
        task->tTop = 1;
        task->tWidth = 9;
        task->tHeight = 10;
        task->tKeepOpenAfterSelect = FALSE;
        task->tTaskId = taskId;
        break;
    case SCROLL_MULTI_POKEMON_FAN_CLUB_RATER:
        task->tMaxItemsOnScreen = MAX_SCROLL_MULTI_ON_SCREEN;
        task->tNumItems = 12;
        task->tLeft = 1;
        task->tTop = 1;
        task->tWidth = 7;
        task->tHeight = 12;
        task->tKeepOpenAfterSelect = FALSE;
        task->tTaskId = taskId;
        break;
    case SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_1:
        task->tMaxItemsOnScreen = MAX_SCROLL_MULTI_ON_SCREEN;
        task->tNumItems = 11;
        task->tLeft = 14;
        task->tTop = 1;
        task->tWidth = 15;
        task->tHeight = 12;
        task->tKeepOpenAfterSelect = FALSE;
        task->tTaskId = taskId;
        break;
    case SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_2:
        task->tMaxItemsOnScreen = MAX_SCROLL_MULTI_ON_SCREEN;
        task->tNumItems = 6;
        task->tLeft = 14;
        task->tTop = 1;
        task->tWidth = 15;
        task->tHeight = 12;
        task->tKeepOpenAfterSelect = FALSE;
        task->tTaskId = taskId;
        break;
    case SCROLL_MULTI_BF_EXCHANGE_CORNER_VITAMIN_VENDOR:
        task->tMaxItemsOnScreen = MAX_SCROLL_MULTI_ON_SCREEN;
        task->tNumItems = 7;
        task->tLeft = 14;
        task->tTop = 1;
        task->tWidth = 15;
        task->tHeight = 12;
        task->tKeepOpenAfterSelect = FALSE;
        task->tTaskId = taskId;
        break;
    case SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR:
        task->tMaxItemsOnScreen = MAX_SCROLL_MULTI_ON_SCREEN;
        task->tNumItems = 10;
        task->tLeft = 14;
        task->tTop = 1;
        task->tWidth = 15;
        task->tHeight = 12;
        task->tKeepOpenAfterSelect = FALSE;
        task->tTaskId = taskId;
        break;
    case SCROLL_MULTI_BERRY_POWDER_VENDOR:
        task->tMaxItemsOnScreen = MAX_SCROLL_MULTI_ON_SCREEN;
        task->tNumItems = 12;
        task->tLeft = 15;
        task->tTop = 1;
        task->tWidth = 14;
        task->tHeight = 12;
        task->tKeepOpenAfterSelect = FALSE;
        task->tTaskId = taskId;
        break;
    case SCROLL_MULTI_BF_RECEPTIONIST:
        task->tMaxItemsOnScreen = MAX_SCROLL_MULTI_ON_SCREEN;
        task->tNumItems = 10;
        task->tLeft = 17;
        task->tTop = 1;
        task->tWidth = 11;
        task->tHeight = 12;
        task->tKeepOpenAfterSelect = FALSE;
        task->tTaskId = taskId;
        break;
    case SCROLL_MULTI_BF_MOVE_TUTOR_1:
    case SCROLL_MULTI_BF_MOVE_TUTOR_2:
        task->tMaxItemsOnScreen = MAX_SCROLL_MULTI_ON_SCREEN;
        task->tNumItems = 11;
        task->tLeft = 15;
        task->tTop = 1;
        task->tWidth = 14;
        task->tHeight = 12;
        task->tKeepOpenAfterSelect = FALSE;
        task->tTaskId = taskId;
        break;
    case SCROLL_MULTI_SS_TIDAL_DESTINATION:
        task->tMaxItemsOnScreen = MAX_SCROLL_MULTI_ON_SCREEN;
        task->tNumItems = 7;
        task->tLeft = 19;
        task->tTop = 1;
        task->tWidth = 10;
        task->tHeight = 12;
        task->tKeepOpenAfterSelect = FALSE;
        task->tTaskId = taskId;
        break;
    case SCROLL_MULTI_BATTLE_TENT_RULES:
        task->tMaxItemsOnScreen = MAX_SCROLL_MULTI_ON_SCREEN;
        task->tNumItems = 7;
        task->tLeft = 17;
        task->tTop = 1;
        task->tWidth = 12;
        task->tHeight = 12;
        task->tKeepOpenAfterSelect = FALSE;
        task->tTaskId = taskId;
        break;
    default:
        gSpecialVar_Result = MULTI_B_PRESSED;
        DestroyTask(taskId);
        break;
    }
}

static const u8 *const sScrollableMultichoiceOptions[][MAX_SCROLL_MULTI_LENGTH] =
{
    [SCROLL_MULTI_NONE] =
    {
        gText_Exit
    },
    [SCROLL_MULTI_GLASS_WORKSHOP_VENDOR] =
    {
        gText_BlueFlute,
        gText_YellowFlute,
        gText_RedFlute,
        gText_WhiteFlute,
        gText_BlackFlute,
        gText_PrettyChair,
        gText_PrettyDesk,
        gText_Exit
    },
    [SCROLL_MULTI_POKEMON_FAN_CLUB_RATER] =
    {
        gText_0Pts,
        gText_10Pts,
        gText_20Pts,
        gText_30Pts,
        gText_40Pts,
        gText_50Pts,
        gText_60Pts,
        gText_70Pts,
        gText_80Pts,
        gText_90Pts,
        gText_100Pts,
        gText_QuestionMark
    },
    [SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_1] =
    {
        gText_KissPoster16BP,
        gText_KissCushion32BP,
        gText_SmoochumDoll32BP,
        gText_TogepiDoll48BP,
        gText_MeowthDoll48BP,
        gText_ClefairyDoll48BP,
        gText_DittoDoll48BP,
        gText_CyndaquilDoll80BP,
        gText_ChikoritaDoll80BP,
        gText_TotodileDoll80BP,
        gText_Exit
    },
    [SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_2] =
    {
        gText_LaprasDoll128BP,
        gText_ArcanineDoll128BP,
        gText_RaikouDoll256BP,
        gText_EnteiDoll256BP,
        gText_SuicuneDoll256BP,
        gText_Exit
    },
    [SCROLL_MULTI_BF_EXCHANGE_CORNER_VITAMIN_VENDOR] =
    {
        gText_Protein1BP,
        gText_Calcium1BP,
        gText_Iron1BP,
        gText_Zinc1BP,
        gText_Carbos1BP,
        gText_HpUp1BP,
        gText_Exit
    },
    [SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR] =
    {
        gText_Leftovers48BP,
        gText_WhiteHerb48BP,
        gText_QuickClaw48BP,
        gText_MentalHerb48BP,
        gText_BrightPowder64BP,
        gText_ChoiceBand64BP,
        gText_KingsRock64BP,
        gText_FocusBand64BP,
        gText_ScopeLens64BP,
        gText_Exit
    },
    [SCROLL_MULTI_BERRY_POWDER_VENDOR] =
    {
        gText_EnergyPowder50,
        gText_EnergyRoot80,
        gText_HealPowder50,
        gText_RevivalHerb300,
        gText_Protein1000,
        gText_Iron1000,
        gText_Carbos1000,
        gText_Calcium1000,
        gText_Zinc1000,
        gText_HPUp1000,
        gText_PPUp3000,
        gText_Exit
    },
    [SCROLL_MULTI_BF_RECEPTIONIST] =
    {
        gText_BattleTower2,
        gText_BattleDome,
        gText_BattlePalace,
        gText_BattleArena,
        gText_BattleFactory,
        gText_BattlePike,
        gText_BattlePyramid,
        gText_RankingHall,
        gText_ExchangeService,
        gText_Exit
    },
    [SCROLL_MULTI_BF_MOVE_TUTOR_1] =
    {
        gText_Softboiled16BP,
        gText_SeismicToss24BP,
        gText_DreamEater24BP,
        gText_MegaPunch24BP,
        gText_MegaKick48BP,
        gText_BodySlam48BP,
        gText_RockSlide48BP,
        gText_Counter48BP,
        gText_ThunderWave48BP,
        gText_SwordsDance48BP,
        gText_Exit
    },
    [SCROLL_MULTI_BF_MOVE_TUTOR_2] =
    {
        gText_DefenseCurl16BP,
        gText_Snore24BP,
        gText_MudSlap24BP,
        gText_Swift24BP,
        gText_IcyWind24BP,
        gText_Endure48BP,
        gText_PsychUp48BP,
        gText_IcePunch48BP,
        gText_ThunderPunch48BP,
        gText_FirePunch48BP,
        gText_Exit
    },
    [SCROLL_MULTI_SS_TIDAL_DESTINATION] =
    {
        gText_SlateportCity,
        gText_BattleFrontier,
        gText_SouthernIsland,
        gText_NavelRock,
        gText_BirthIsland,
        gText_FarawayIsland,
        gText_Exit
    },
    [SCROLL_MULTI_BATTLE_TENT_RULES] =
    {
        gText_BattleTrainers,
        gText_BattleBasics,
        gText_PokemonNature,
        gText_PokemonMoves,
        gText_Underpowered,
        gText_WhenInDanger,
        gText_Exit
    }
};

static void Task_ShowScrollableMultichoice(u8 taskId)
{
    u32 width;
    u8 i, windowId;
    struct WindowTemplate template;
    struct Task *task = &gTasks[taskId];

    LockPlayerFieldControls();
    gScrollableMultichoice_ScrollOffset = 0;
    sScrollableMultichoice_ItemSpriteId = MAX_SPRITES;
    FillFrontierExchangeCornerWindowAndItemIcon(task->tScrollMultiId, 0);
    ShowBattleFrontierTutorWindow(task->tScrollMultiId, 0);
    sScrollableMultichoice_ListMenuItem = AllocZeroed(task->tNumItems * 8);
    sFrontierExchangeCorner_NeverRead = 0;
    InitScrollableMultichoice();

    for (width = 0, i = 0; i < task->tNumItems; i++)
    {
        const u8 *text = sScrollableMultichoiceOptions[gSpecialVar_0x8004][i];
        sScrollableMultichoice_ListMenuItem[i].name = text;
        sScrollableMultichoice_ListMenuItem[i].id = i;
        width = DisplayTextAndGetWidth(text, width);
    }

    task->tWidth = ConvertPixelWidthToTileWidth(width);

    if (task->tLeft + task->tWidth > MAX_MULTICHOICE_WIDTH + 1)
    {
        int adjustedLeft = MAX_MULTICHOICE_WIDTH + 1 - task->tWidth;
        if (adjustedLeft < 0)
            task->tLeft = 0;
        else
            task->tLeft = adjustedLeft;
    }

    template = CreateWindowTemplate(0, task->tLeft, task->tTop, task->tWidth, task->tHeight, 0xF, 0x64);
    windowId = AddWindow(&template);
    task->tWindowId = windowId;
    SetStandardWindowBorderStyle(windowId, FALSE);

    gScrollableMultichoice_ListMenuTemplate.totalItems = task->tNumItems;
    gScrollableMultichoice_ListMenuTemplate.maxShowed = task->tMaxItemsOnScreen;
    gScrollableMultichoice_ListMenuTemplate.windowId = task->tWindowId;

    ScrollableMultichoice_UpdateScrollArrows(taskId);
    task->tListTaskId = ListMenuInit(&gScrollableMultichoice_ListMenuTemplate, task->tScrollOffset, task->tSelectedRow);
    ScheduleBgCopyTilemapToVram(0);
    gTasks[taskId].func = ScrollableMultichoice_ProcessInput;
}

static void InitScrollableMultichoice(void)
{
    gScrollableMultichoice_ListMenuTemplate.items = sScrollableMultichoice_ListMenuItem;
    gScrollableMultichoice_ListMenuTemplate.moveCursorFunc = ScrollableMultichoice_MoveCursor;
    gScrollableMultichoice_ListMenuTemplate.itemPrintFunc = NULL;
    gScrollableMultichoice_ListMenuTemplate.totalItems = 1;
    gScrollableMultichoice_ListMenuTemplate.maxShowed = 1;
    gScrollableMultichoice_ListMenuTemplate.windowId = 0;
    gScrollableMultichoice_ListMenuTemplate.header_X = 0;
    gScrollableMultichoice_ListMenuTemplate.item_X = 8;
    gScrollableMultichoice_ListMenuTemplate.cursor_X = 0;
    gScrollableMultichoice_ListMenuTemplate.upText_Y = 1;
    gScrollableMultichoice_ListMenuTemplate.cursorPal = 2;
    gScrollableMultichoice_ListMenuTemplate.fillValue = 1;
    gScrollableMultichoice_ListMenuTemplate.cursorShadowPal = 3;
    gScrollableMultichoice_ListMenuTemplate.lettersSpacing = 0;
    gScrollableMultichoice_ListMenuTemplate.itemVerticalPadding = 0;
    gScrollableMultichoice_ListMenuTemplate.scrollMultiple = LIST_NO_MULTIPLE_SCROLL;
    gScrollableMultichoice_ListMenuTemplate.fontId = FONT_NORMAL;
    gScrollableMultichoice_ListMenuTemplate.cursorKind = CURSOR_BLACK_ARROW;
}

static void ScrollableMultichoice_MoveCursor(s32 itemIndex, bool8 onInit, struct ListMenu *list)
{
    u8 taskId;
    PlaySE(SE_SELECT);
    taskId = FindTaskIdByFunc(ScrollableMultichoice_ProcessInput);
    if (taskId != TASK_NONE)
    {
        u16 selection;
        struct Task *task = &gTasks[taskId];
        ListMenuGetScrollAndRow(task->tListTaskId, &selection, NULL);
        gScrollableMultichoice_ScrollOffset = selection;
        ListMenuGetCurrentItemArrayId(task->tListTaskId, &selection);
        HideFrontierExchangeCornerItemIcon(task->tScrollMultiId, sFrontierExchangeCorner_NeverRead);
        FillFrontierExchangeCornerWindowAndItemIcon(task->tScrollMultiId, selection);
        ShowBattleFrontierTutorMoveDescription(task->tScrollMultiId, selection);
        sFrontierExchangeCorner_NeverRead = selection;
    }
}

static void ScrollableMultichoice_ProcessInput(u8 taskId)
{
    struct Task *task = &gTasks[taskId];
    s32 input = ListMenu_ProcessInput(task->tListTaskId);

    switch (input)
    {
    case LIST_NOTHING_CHOSEN:
        break;
    case LIST_CANCEL:
        gSpecialVar_Result = MULTI_B_PRESSED;
        PlaySE(SE_SELECT);
        CloseScrollableMultichoice(taskId);
        break;
    default:
        gSpecialVar_Result = input;
        PlaySE(SE_SELECT);
        if (!task->tKeepOpenAfterSelect)
        {
            CloseScrollableMultichoice(taskId);
        }
        else if (input == task->tNumItems - 1)
        {
            // Selected option was the last one (Exit)
            CloseScrollableMultichoice(taskId);
        }
        else
        {
            // Handle selection while keeping the menu open
            ScrollableMultichoice_RemoveScrollArrows(taskId);
            task->func = Task_ScrollableMultichoice_WaitReturnToList;
            ScriptContext_Enable();
        }
        break;
    }
}

static void CloseScrollableMultichoice(u8 taskId)
{
    u16 selection;
    struct Task *task = &gTasks[taskId];
    ListMenuGetCurrentItemArrayId(task->tListTaskId, &selection);
    HideFrontierExchangeCornerItemIcon(task->tScrollMultiId, selection);
    ScrollableMultichoice_RemoveScrollArrows(taskId);
    DestroyListMenuTask(task->tListTaskId, NULL, NULL);
    Free(sScrollableMultichoice_ListMenuItem);
    ClearStdWindowAndFrameToTransparent(task->tWindowId, TRUE);
    FillWindowPixelBuffer(task->tWindowId, PIXEL_FILL(0));
    CopyWindowToVram(task->tWindowId, COPYWIN_GFX);
    RemoveWindow(task->tWindowId);
    DestroyTask(taskId);
    ScriptContext_Enable();
}

// Never run, tKeepOpenAfterSelect is FALSE for all scrollable multichoices.
static void Task_ScrollableMultichoice_WaitReturnToList(u8 taskId)
{
    switch (gTasks[taskId].tKeepOpenAfterSelect)
    {
    case 1:
    default:
        break;
    case 2:
        gTasks[taskId].tKeepOpenAfterSelect = 1;
        gTasks[taskId].func = Task_ScrollableMultichoice_ReturnToList;
        break;
    }
}

// Never called
void ScrollableMultichoice_TryReturnToList(void)
{
    u8 taskId = FindTaskIdByFunc(Task_ScrollableMultichoice_WaitReturnToList);
    if (taskId == TASK_NONE)
        ScriptContext_Enable();
    else
        gTasks[taskId].tKeepOpenAfterSelect++; // Return to list
}

static void Task_ScrollableMultichoice_ReturnToList(u8 taskId)
{
    LockPlayerFieldControls();
    ScrollableMultichoice_UpdateScrollArrows(taskId);
    gTasks[taskId].func = ScrollableMultichoice_ProcessInput;
}

static void ScrollableMultichoice_UpdateScrollArrows(u8 taskId)
{
    static const struct ScrollArrowsTemplate sScrollableMultichoice_ScrollArrowsTemplate = {
        .firstArrowType = SCROLL_ARROW_UP,
        .firstX = 0,
        .firstY = 0,
        .secondArrowType = SCROLL_ARROW_DOWN,
        .secondX = 0,
        .secondY = 0,
        .fullyUpThreshold = 0,
        .fullyDownThreshold = 0,
        .tileTag = GFXTAG_MULTICHOICE_SCROLL_ARROWS,
        .palTag = PALTAG_MULTICHOICE_SCROLL_ARROWS,
        .palNum = 0
    };

    struct Task *task = &gTasks[taskId];
    struct ScrollArrowsTemplate template = sScrollableMultichoice_ScrollArrowsTemplate;
    if (task->tMaxItemsOnScreen != task->tNumItems)
    {
        template.firstX = (task->tWidth / 2) * 8 + 12 + (task->tLeft - 1) * 8;
        template.firstY = 8;
        template.secondX = (task->tWidth / 2) * 8 + 12 + (task->tLeft - 1) * 8;
        template.secondY = task->tHeight * 8 + 10;
        template.fullyUpThreshold = 0;
        template.fullyDownThreshold = task->tNumItems - task->tMaxItemsOnScreen;
        task->tScrollArrowId = AddScrollIndicatorArrowPair(&template, &gScrollableMultichoice_ScrollOffset);
    }
}

static void ScrollableMultichoice_RemoveScrollArrows(u8 taskId)
{
    struct Task *task = &gTasks[taskId];
    if (task->tMaxItemsOnScreen != task->tNumItems)
        RemoveScrollIndicatorArrowPair(task->tScrollArrowId);
}

// Removed for Emerald (replaced by ShowScrollableMultichoice)
void ShowGlassWorkshopMenu(void)
{

}

void SetBattleTowerLinkPlayerGfx(void)
{
    u8 i;
    for (i = 0; i < 2; i++)
    {
        if (gLinkPlayers[i].gender == MALE)
            VarSet(VAR_OBJ_GFX_ID_F - i, OBJ_EVENT_GFX_BRENDAN_NORMAL);
        else
            VarSet(VAR_OBJ_GFX_ID_F - i, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL);
    }
}

void ShowNatureGirlMessage(void)
{
    u8 nature;

    if (gSpecialVar_0x8004 >= PARTY_SIZE)
        gSpecialVar_0x8004 = 0;

    nature = GetNature(&gPlayerParty[gSpecialVar_0x8004]);
    ShowFieldMessage(gNaturesInfo[nature].natureGirlMessage);
}

void UpdateFrontierGambler(u16 daysSince)
{
    u16 *var = GetVarPointer(VAR_FRONTIER_GAMBLER_CHALLENGE);
    *var += daysSince;
    *var %= FRONTIER_GAMBLER_CHALLENGE_COUNT;
}

void ShowFrontierGamblerLookingMessage(void)
{
    static const u8 *const sFrontierGamblerLookingMessages[] =
    {
        BattleFrontier_Lounge3_Text_ChallengeBattleTowerSingle,
        BattleFrontier_Lounge3_Text_ChallengeBattleTowerDouble,
        BattleFrontier_Lounge3_Text_ChallengeBattleTowerMulti,
        BattleFrontier_Lounge3_Text_ChallengeBattleDomeSingle,
        BattleFrontier_Lounge3_Text_ChallengeBattleDomeDouble,
        BattleFrontier_Lounge3_Text_ChallengeBattleFactorySingle,
        BattleFrontier_Lounge3_Text_ChallengeBattleFactoryDouble,
        BattleFrontier_Lounge3_Text_ChallengeBattlePalaceSingle,
        BattleFrontier_Lounge3_Text_ChallengeBattlePalaceDouble,
        BattleFrontier_Lounge3_Text_ChallengeBattleArena,
        BattleFrontier_Lounge3_Text_ChallengeBattlePike,
        BattleFrontier_Lounge3_Text_ChallengeBattlePyramid,
    };

    u16 challenge = VarGet(VAR_FRONTIER_GAMBLER_CHALLENGE);
    ShowFieldMessage(sFrontierGamblerLookingMessages[challenge]);
    VarSet(VAR_FRONTIER_GAMBLER_SET_CHALLENGE, challenge);
}

void ShowFrontierGamblerGoMessage(void)
{
    static const u8 *const sFrontierGamblerGoMessages[] =
    {
        BattleFrontier_Lounge3_Text_GetToBattleTowerSingle,
        BattleFrontier_Lounge3_Text_GetToBattleTowerDouble,
        BattleFrontier_Lounge3_Text_GetToBattleTowerMulti,
        BattleFrontier_Lounge3_Text_GetToBattleDomeSingle,
        BattleFrontier_Lounge3_Text_GetToBattleDomeDouble,
        BattleFrontier_Lounge3_Text_GetToBattleFactorySingle,
        BattleFrontier_Lounge3_Text_GetToBattleFactoryDouble,
        BattleFrontier_Lounge3_Text_GetToBattlePalaceSingle,
        BattleFrontier_Lounge3_Text_GetToBattlePalaceDouble,
        BattleFrontier_Lounge3_Text_GetToBattleArena,
        BattleFrontier_Lounge3_Text_GetToBattlePike,
        BattleFrontier_Lounge3_Text_GetToBattlePyramid,
    };

    ShowFieldMessage(sFrontierGamblerGoMessages[VarGet(VAR_FRONTIER_GAMBLER_SET_CHALLENGE)]);
}

void FrontierGamblerSetWonOrLost(bool8 won)
{
    static const u16 sFrontierChallenges[] =
    {
        FRONTIER_CHALLENGE(FRONTIER_FACILITY_TOWER,   FRONTIER_MODE_SINGLES),
        FRONTIER_CHALLENGE(FRONTIER_FACILITY_TOWER,   FRONTIER_MODE_DOUBLES),
        FRONTIER_CHALLENGE(FRONTIER_FACILITY_TOWER,   FRONTIER_MODE_MULTIS),
        FRONTIER_CHALLENGE(FRONTIER_FACILITY_DOME,    FRONTIER_MODE_SINGLES),
        FRONTIER_CHALLENGE(FRONTIER_FACILITY_DOME,    FRONTIER_MODE_DOUBLES),
        FRONTIER_CHALLENGE(FRONTIER_FACILITY_FACTORY, FRONTIER_MODE_SINGLES),
        FRONTIER_CHALLENGE(FRONTIER_FACILITY_FACTORY, FRONTIER_MODE_DOUBLES),
        FRONTIER_CHALLENGE(FRONTIER_FACILITY_PALACE,  FRONTIER_MODE_SINGLES),
        FRONTIER_CHALLENGE(FRONTIER_FACILITY_PALACE,  FRONTIER_MODE_DOUBLES),
        FRONTIER_CHALLENGE(FRONTIER_FACILITY_ARENA,   FRONTIER_MODE_SINGLES),
        FRONTIER_CHALLENGE(FRONTIER_FACILITY_PIKE,    FRONTIER_MODE_SINGLES),
        FRONTIER_CHALLENGE(FRONTIER_FACILITY_PYRAMID, FRONTIER_MODE_SINGLES)
    };

    u16 battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);
    u16 challenge = VarGet(VAR_FRONTIER_GAMBLER_SET_CHALLENGE);
    u16 frontierFacilityId = VarGet(VAR_FRONTIER_FACILITY);

    if (VarGet(VAR_FRONTIER_GAMBLER_STATE) == FRONTIER_GAMBLER_PLACED_BET)
    {
        if (sFrontierChallenges[challenge] ==  FRONTIER_CHALLENGE(frontierFacilityId, battleMode))
        {
            if (won)
                VarSet(VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WON);
            else
                VarSet(VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_LOST);
        }
    }
}

void UpdateBattlePointsWindow(void)
{
    u8 string[32];
    u32 x;
    StringCopy(ConvertIntToDecimalStringN(string, gSaveBlock2Ptr->frontier.battlePoints, STR_CONV_MODE_RIGHT_ALIGN, 4), gText_BP);
    x = GetStringRightAlignXOffset(FONT_NORMAL, string, 48);
    AddTextPrinterParameterized(sBattlePointsWindowId, FONT_NORMAL, string, x, 1, 0, NULL);
}

void ShowBattlePointsWindow(void)
{
    static const struct WindowTemplate sBattlePoints_WindowTemplate =
    {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 1,
        .width = 6,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 8,
    };

    sBattlePointsWindowId = AddWindow(&sBattlePoints_WindowTemplate);
    SetStandardWindowBorderStyle(sBattlePointsWindowId, FALSE);
    UpdateBattlePointsWindow();
    CopyWindowToVram(sBattlePointsWindowId, COPYWIN_GFX);
}

void CloseBattlePointsWindow(void)
{
    ClearStdWindowAndFrameToTransparent(sBattlePointsWindowId, TRUE);
    RemoveWindow(sBattlePointsWindowId);
}

void TakeFrontierBattlePoints(void)
{
    if (gSaveBlock2Ptr->frontier.battlePoints < gSpecialVar_0x8004)
        gSaveBlock2Ptr->frontier.battlePoints = 0;
    else
        gSaveBlock2Ptr->frontier.battlePoints -= gSpecialVar_0x8004;
}

void GiveFrontierBattlePoints(void)
{
    if (gSaveBlock2Ptr->frontier.battlePoints + gSpecialVar_0x8004 > MAX_BATTLE_FRONTIER_POINTS)
        gSaveBlock2Ptr->frontier.battlePoints = MAX_BATTLE_FRONTIER_POINTS;
    else
        gSaveBlock2Ptr->frontier.battlePoints = gSaveBlock2Ptr->frontier.battlePoints + gSpecialVar_0x8004;
}

u16 GetFrontierBattlePoints(void)
{
    return gSaveBlock2Ptr->frontier.battlePoints;
}

void ShowFrontierExchangeCornerItemIconWindow(void)
{
    static const struct WindowTemplate sFrontierExchangeCorner_ItemIconWindowTemplate =
    {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 9,
        .width = 4,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 20,
    };

    sFrontierExchangeCorner_ItemIconWindowId = AddWindow(&sFrontierExchangeCorner_ItemIconWindowTemplate);
    SetStandardWindowBorderStyle(sFrontierExchangeCorner_ItemIconWindowId, FALSE);
    CopyWindowToVram(sFrontierExchangeCorner_ItemIconWindowId, COPYWIN_GFX);
}

void CloseFrontierExchangeCornerItemIconWindow(void)
{
    ClearStdWindowAndFrameToTransparent(sFrontierExchangeCorner_ItemIconWindowId, TRUE);
    RemoveWindow(sFrontierExchangeCorner_ItemIconWindowId);
}

static void FillFrontierExchangeCornerWindowAndItemIcon(u16 menu, u16 selection)
{
    #include "data/battle_frontier/battle_frontier_exchange_corner.h"

    if (menu >= SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_1 && menu <= SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR)
    {
        FillWindowPixelRect(0, PIXEL_FILL(1), 0, 0, 216, 32);
        switch (menu)
        {
        case SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_1:
            AddTextPrinterParameterized2(0, FONT_NORMAL, sFrontierExchangeCorner_Decor1Descriptions[selection], 0, NULL, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_WHITE, TEXT_COLOR_LIGHT_GRAY);
            if (sFrontierExchangeCorner_Decor1[selection] == ITEM_LIST_END)
            {
                ShowFrontierExchangeCornerItemIcon(sFrontierExchangeCorner_Decor1[selection]);
            }
            else
            {
                FreeSpriteTilesByTag(TAG_ITEM_ICON);
                FreeSpritePaletteByTag(TAG_ITEM_ICON);
                sScrollableMultichoice_ItemSpriteId = AddDecorationIconObject(sFrontierExchangeCorner_Decor1[selection], 33, 88, 0, TAG_ITEM_ICON, TAG_ITEM_ICON);
            }
            break;
        case SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_2:
            AddTextPrinterParameterized2(0, FONT_NORMAL, sFrontierExchangeCorner_Decor2Descriptions[selection], 0, NULL, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_WHITE, TEXT_COLOR_LIGHT_GRAY);
            if (sFrontierExchangeCorner_Decor2[selection] == ITEM_LIST_END)
            {
                ShowFrontierExchangeCornerItemIcon(sFrontierExchangeCorner_Decor2[selection]);
            }
            else
            {
                FreeSpriteTilesByTag(TAG_ITEM_ICON);
                FreeSpritePaletteByTag(TAG_ITEM_ICON);
                sScrollableMultichoice_ItemSpriteId = AddDecorationIconObject(sFrontierExchangeCorner_Decor2[selection], 33, 88, 0, TAG_ITEM_ICON, TAG_ITEM_ICON);
            }
            break;
        case SCROLL_MULTI_BF_EXCHANGE_CORNER_VITAMIN_VENDOR:
            AddTextPrinterParameterized2(0, FONT_NORMAL, sFrontierExchangeCorner_VitaminsDescriptions[selection], 0, NULL, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_WHITE, TEXT_COLOR_LIGHT_GRAY);
            ShowFrontierExchangeCornerItemIcon(sFrontierExchangeCorner_Vitamins[selection]);
            break;
        case SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR:
            AddTextPrinterParameterized2(0, FONT_NORMAL, sFrontierExchangeCorner_HoldItemsDescriptions[selection], 0, NULL, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_WHITE, TEXT_COLOR_LIGHT_GRAY);
            ShowFrontierExchangeCornerItemIcon(sFrontierExchangeCorner_HoldItems[selection]);
            break;
        }
    }
}

static void ShowFrontierExchangeCornerItemIcon(u16 item)
{
    FreeSpriteTilesByTag(TAG_ITEM_ICON);
    FreeSpritePaletteByTag(TAG_ITEM_ICON);
    sScrollableMultichoice_ItemSpriteId = AddItemIconSprite(TAG_ITEM_ICON, TAG_ITEM_ICON, item);

    if (sScrollableMultichoice_ItemSpriteId != MAX_SPRITES)
    {
        gSprites[sScrollableMultichoice_ItemSpriteId].oam.priority = 0;
        gSprites[sScrollableMultichoice_ItemSpriteId].x = 36;
        gSprites[sScrollableMultichoice_ItemSpriteId].y = 92;
    }
}

static void HideFrontierExchangeCornerItemIcon(u16 menu, u16 unused)
{
    if (sScrollableMultichoice_ItemSpriteId != MAX_SPRITES)
    {
        switch (menu)
        {
        case SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_1:
        case SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_2:
        case SCROLL_MULTI_BF_EXCHANGE_CORNER_VITAMIN_VENDOR:
        case SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR:
            // This makes sure deleting the icon will not clear palettes in use by object events
            FieldEffectFreeGraphicsResources(&gSprites[sScrollableMultichoice_ItemSpriteId]);
            break;
        }
        sScrollableMultichoice_ItemSpriteId = MAX_SPRITES;
    }
}

void BufferBattleFrontierTutorMoveName(void)
{
    StringCopy(gStringVar1, GetMoveName(gSpecialVar_0x8005));
}

static void ShowBattleFrontierTutorWindow(u8 menu, u16 selection)
{
    static const struct WindowTemplate sBattleFrontierTutor_WindowTemplate =
    {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 7,
        .width = 12,
        .height = 6,
        .paletteNum = 15,
        .baseBlock = 28,
    };

    if (menu == SCROLL_MULTI_BF_MOVE_TUTOR_1 || menu == SCROLL_MULTI_BF_MOVE_TUTOR_2)
    {
        if (gSpecialVar_0x8006 == 0)
        {
            sTutorMoveAndElevatorWindowId = AddWindow(&sBattleFrontierTutor_WindowTemplate);
            SetStandardWindowBorderStyle(sTutorMoveAndElevatorWindowId, FALSE);
        }
        ShowBattleFrontierTutorMoveDescription(menu, selection);
    }
}

static void ShowBattleFrontierTutorMoveDescription(u8 menu, u16 selection)
{
    static const u8 *const sBattleFrontier_TutorMoveDescriptions1[] =
    {
        BattleFrontier_Lounge7_Text_SoftboiledDesc,
        BattleFrontier_Lounge7_Text_SeismicTossDesc,
        BattleFrontier_Lounge7_Text_DreamEaterDesc,
        BattleFrontier_Lounge7_Text_MegaPunchDesc,
        BattleFrontier_Lounge7_Text_MegaKickDesc,
        BattleFrontier_Lounge7_Text_BodySlamDesc,
        BattleFrontier_Lounge7_Text_RockSlideDesc,
        BattleFrontier_Lounge7_Text_CounterDesc,
        BattleFrontier_Lounge7_Text_ThunderWaveDesc,
        BattleFrontier_Lounge7_Text_SwordsDanceDesc,
        gText_Exit,
    };

    static const u8 *const sBattleFrontier_TutorMoveDescriptions2[] =
    {
        BattleFrontier_Lounge7_Text_DefenseCurlDesc,
        BattleFrontier_Lounge7_Text_SnoreDesc,
        BattleFrontier_Lounge7_Text_MudSlapDesc,
        BattleFrontier_Lounge7_Text_SwiftDesc,
        BattleFrontier_Lounge7_Text_IcyWindDesc,
        BattleFrontier_Lounge7_Text_EndureDesc,
        BattleFrontier_Lounge7_Text_PsychUpDesc,
        BattleFrontier_Lounge7_Text_IcePunchDesc,
        BattleFrontier_Lounge7_Text_ThunderPunchDesc,
        BattleFrontier_Lounge7_Text_FirePunchDesc,
        gText_Exit,
    };

    if (menu == SCROLL_MULTI_BF_MOVE_TUTOR_1 || menu == SCROLL_MULTI_BF_MOVE_TUTOR_2)
    {
        FillWindowPixelRect(sTutorMoveAndElevatorWindowId, PIXEL_FILL(1), 0, 0, 96, 48);
        if (menu == SCROLL_MULTI_BF_MOVE_TUTOR_2)
            AddTextPrinterParameterized(sTutorMoveAndElevatorWindowId, FONT_NORMAL, sBattleFrontier_TutorMoveDescriptions2[selection], 0, 1, 0, NULL);
        else
            AddTextPrinterParameterized(sTutorMoveAndElevatorWindowId, FONT_NORMAL, sBattleFrontier_TutorMoveDescriptions1[selection], 0, 1, 0, NULL);
    }
}

void CloseBattleFrontierTutorWindow(void)
{
    ClearStdWindowAndFrameToTransparent(sTutorMoveAndElevatorWindowId, TRUE);
    RemoveWindow(sTutorMoveAndElevatorWindowId);
}

// Never called
void ScrollableMultichoice_RedrawPersistentMenu(void)
{
    u16 scrollOffset, selectedRow;
    u8 i;
    u8 taskId = FindTaskIdByFunc(Task_ScrollableMultichoice_WaitReturnToList);
    if (taskId != TASK_NONE)
    {
        struct Task *task = &gTasks[taskId];
        ListMenuGetScrollAndRow(task->tListTaskId, &scrollOffset, &selectedRow);
        SetStandardWindowBorderStyle(task->tWindowId, FALSE);

        for (i = 0; i < MAX_SCROLL_MULTI_ON_SCREEN; i++)
            AddTextPrinterParameterized5(task->tWindowId, FONT_NORMAL, sScrollableMultichoiceOptions[gSpecialVar_0x8004][scrollOffset + i], 10, i * 16, TEXT_SKIP_DRAW, NULL, 0, 0);

        AddTextPrinterParameterized(task->tWindowId, FONT_NORMAL, gText_SelectorArrow, 0, selectedRow * 16, TEXT_SKIP_DRAW, NULL);
        PutWindowTilemap(task->tWindowId);
        CopyWindowToVram(task->tWindowId, COPYWIN_FULL);
    }
}

// Never called
// Close a scrollable multichoice that stays open after selection
void ScrollableMultichoice_ClosePersistentMenu(void)
{
    u8 taskId = FindTaskIdByFunc(Task_ScrollableMultichoice_WaitReturnToList);
    if (taskId != TASK_NONE)
    {
        struct Task *task = &gTasks[taskId];
        DestroyListMenuTask(task->tListTaskId, NULL, NULL);
        Free(sScrollableMultichoice_ListMenuItem);
        ClearStdWindowAndFrameToTransparent(task->tWindowId, TRUE);
        FillWindowPixelBuffer(task->tWindowId, PIXEL_FILL(0));
        ClearWindowTilemap(task->tWindowId);
        CopyWindowToVram(task->tWindowId, COPYWIN_GFX);
        RemoveWindow(task->tWindowId);
        DestroyTask(taskId);
    }
}

// Undefine Scrollable Multichoice task data macros
#undef tMaxItemsOnScreen
#undef tNumItems
#undef tLeft
#undef tTop
#undef tWidth
#undef tHeight
#undef tKeepOpenAfterSelect
#undef tScrollOffset
#undef tSelectedRow
#undef tScrollMultiId
#undef tScrollArrowId
#undef tWindowId
#undef tListTaskId
#undef tTaskId

#define DEOXYS_ROCK_LEVELS 11

void DoDeoxysRockInteraction(void)
{
    CreateTask(Task_DeoxysRockInteraction, 8);
}

static const u16 sDeoxysRockPalettes[DEOXYS_ROCK_LEVELS][16] = {
    INCBIN_U16("graphics/field_effects/palettes/deoxys_rock_1.gbapal"),
    INCBIN_U16("graphics/field_effects/palettes/deoxys_rock_2.gbapal"),
    INCBIN_U16("graphics/field_effects/palettes/deoxys_rock_3.gbapal"),
    INCBIN_U16("graphics/field_effects/palettes/deoxys_rock_4.gbapal"),
    INCBIN_U16("graphics/field_effects/palettes/deoxys_rock_5.gbapal"),
    INCBIN_U16("graphics/field_effects/palettes/deoxys_rock_6.gbapal"),
    INCBIN_U16("graphics/field_effects/palettes/deoxys_rock_7.gbapal"),
    INCBIN_U16("graphics/field_effects/palettes/deoxys_rock_8.gbapal"),
    INCBIN_U16("graphics/field_effects/palettes/deoxys_rock_9.gbapal"),
    INCBIN_U16("graphics/field_effects/palettes/deoxys_rock_10.gbapal"),
    INCBIN_U16("graphics/field_effects/palettes/deoxys_rock_11.gbapal"),
};

static const u8 sDeoxysRockCoords[DEOXYS_ROCK_LEVELS][2] = {
    { 15, 12 },
    { 11, 14 },
    { 15,  8 },
    { 19, 14 },
    { 12, 11 },
    { 18, 11 },
    { 15, 14 },
    { 11, 14 },
    { 19, 14 },
    { 15, 15 },
    { 15, 10 },
};

static void Task_DeoxysRockInteraction(u8 taskId)
{
    static const u8 sStoneMaxStepCounts[DEOXYS_ROCK_LEVELS - 1] = { 4, 8, 8, 8, 4, 4, 4, 6, 3, 3 };

    if (FlagGet(FLAG_DEOXYS_ROCK_COMPLETE) == TRUE)
    {
        gSpecialVar_Result = DEOXYS_ROCK_COMPLETE;
        ScriptContext_Enable();
        DestroyTask(taskId);
    }
    else
    {
        u16 rockLevel = VarGet(VAR_DEOXYS_ROCK_LEVEL);
        u16 stepCount = VarGet(VAR_DEOXYS_ROCK_STEP_COUNT);

        VarSet(VAR_DEOXYS_ROCK_STEP_COUNT, 0);
        if (rockLevel != 0 && sStoneMaxStepCounts[rockLevel - 1] < stepCount)
        {
            // Player failed to take the shortest path to the stone, so it resets.
            ChangeDeoxysRockLevel(0);
            VarSet(VAR_DEOXYS_ROCK_LEVEL, 0);
            gSpecialVar_Result = DEOXYS_ROCK_FAILED;
            DestroyTask(taskId);
        }
        else if (rockLevel == DEOXYS_ROCK_LEVELS - 1)
        {
            FlagSet(FLAG_DEOXYS_ROCK_COMPLETE);
            gSpecialVar_Result = DEOXYS_ROCK_SOLVED;
            ScriptContext_Enable();
            DestroyTask(taskId);
        }
        else
        {
            rockLevel++;
            ChangeDeoxysRockLevel(rockLevel);
            VarSet(VAR_DEOXYS_ROCK_LEVEL, rockLevel);
            gSpecialVar_Result = DEOXYS_ROCK_PROGRESSED;
            DestroyTask(taskId);
        }
    }
}

static void ChangeDeoxysRockLevel(u8 rockLevel)
{
    u8 paletteNum = IndexOfSpritePaletteTag(OBJ_EVENT_PAL_TAG_BIRTH_ISLAND_STONE);
    LoadPalette(&sDeoxysRockPalettes[rockLevel], OBJ_PLTT_ID(paletteNum), PLTT_SIZEOF(4));
    UpdateSpritePaletteWithWeather(paletteNum, FALSE);

    if (rockLevel == 0)
        PlaySE(SE_M_CONFUSE_RAY); // Failure sound
    else
        PlaySE(SE_RG_DEOXYS_MOVE); // Success sound

    CreateTask(WaitForDeoxysRockMovement, 8);
    gFieldEffectArguments[0] = LOCALID_BIRTH_ISLAND_EXTERIOR_ROCK;
    gFieldEffectArguments[1] = MAP_NUM(BIRTH_ISLAND_EXTERIOR);
    gFieldEffectArguments[2] = MAP_GROUP(BIRTH_ISLAND_EXTERIOR);
    gFieldEffectArguments[3] = sDeoxysRockCoords[rockLevel][0];
    gFieldEffectArguments[4] = sDeoxysRockCoords[rockLevel][1];

    // Set number of movement steps.
    // Resetting for failure is slow, successful movement is fast.
    if (rockLevel == 0)
        gFieldEffectArguments[5] = 60;
    else
        gFieldEffectArguments[5] = 5;

    FieldEffectStart(FLDEFF_MOVE_DEOXYS_ROCK);
    SetObjEventTemplateCoords(LOCALID_BIRTH_ISLAND_EXTERIOR_ROCK, sDeoxysRockCoords[rockLevel][0], sDeoxysRockCoords[rockLevel][1]);
}

static void WaitForDeoxysRockMovement(u8 taskId)
{
    if (FieldEffectActiveListContains(FLDEFF_MOVE_DEOXYS_ROCK) == FALSE)
    {
        ScriptContext_Enable();
        DestroyTask(taskId);
    }
}

void IncrementBirthIslandRockStepCount(void)
{
    u16 stepCount = VarGet(VAR_DEOXYS_ROCK_STEP_COUNT);
    if (gSaveBlock1Ptr->location.mapNum == MAP_NUM(BIRTH_ISLAND_EXTERIOR) && gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(BIRTH_ISLAND_EXTERIOR))
    {
        if (++stepCount > 99)
            VarSet(VAR_DEOXYS_ROCK_STEP_COUNT, 0);
        else
            VarSet(VAR_DEOXYS_ROCK_STEP_COUNT, stepCount);
    }
}

// called before fade-in
void SetDeoxysRockPalette(void)
{
    u32 paletteNum = IndexOfSpritePaletteTag(OBJ_EVENT_PAL_TAG_BIRTH_ISLAND_STONE);
    LoadPalette(&sDeoxysRockPalettes[(u8)VarGet(VAR_DEOXYS_ROCK_LEVEL)], OBJ_PLTT_ID(paletteNum), PLTT_SIZEOF(4));
    // Set faded to all black, weather blending handled during fade-in
    CpuFill16(RGB_BLACK, &gPlttBufferFaded[OBJ_PLTT_ID(paletteNum)], PLTT_SIZE_4BPP);
}

void SetPCBoxToSendMon(u8 boxId)
{
    sPCBoxToSendMon = boxId;
}

u16 GetPCBoxToSendMon(void)
{
    return sPCBoxToSendMon;
}

bool8 ShouldShowBoxWasFullMessage(void)
{
    if (!FlagGet(FLAG_SHOWN_BOX_WAS_FULL_MESSAGE))
    {
        if (StorageGetCurrentBox() != VarGet(VAR_PC_BOX_TO_SEND_MON))
        {
            FlagSet(FLAG_SHOWN_BOX_WAS_FULL_MESSAGE);
            return TRUE;
        }
    }
    return FALSE;
}

bool8 IsDestinationBoxFull(void)
{
    int box;
    int i;
    SetPCBoxToSendMon(VarGet(VAR_PC_BOX_TO_SEND_MON));
    box = StorageGetCurrentBox();
    do
    {
        for (i = 0; i < IN_BOX_COUNT; i++)
        {
            if (GetBoxMonData(GetBoxedMonPtr(box, i), MON_DATA_SPECIES, 0) == SPECIES_NONE)
            {
                if (GetPCBoxToSendMon() != box)
                    FlagClear(FLAG_SHOWN_BOX_WAS_FULL_MESSAGE);
                VarSet(VAR_PC_BOX_TO_SEND_MON, box);
                return ShouldShowBoxWasFullMessage();
            }
        }

        if (++box == TOTAL_BOXES_COUNT)
            box = 0;
    } while (box != StorageGetCurrentBox());
    return FALSE;
}

void CreateAbnormalWeatherEvent(void)
{
    u16 randomValue = Random();
    VarSet(VAR_ABNORMAL_WEATHER_STEP_COUNTER, 0);

    if (FlagGet(FLAG_DEFEATED_KYOGRE) == TRUE)
    {
        VarSet(VAR_ABNORMAL_WEATHER_LOCATION, (randomValue % TERRA_CAVE_LOCATIONS) + TERRA_CAVE_LOCATIONS_START);
    }
    else if (FlagGet(FLAG_DEFEATED_GROUDON) == TRUE)
    {
        VarSet(VAR_ABNORMAL_WEATHER_LOCATION, (randomValue % MARINE_CAVE_LOCATIONS) + MARINE_CAVE_LOCATIONS_START);
    }
    else if ((randomValue & 1) == 0)
    {
        randomValue = Random();
        VarSet(VAR_ABNORMAL_WEATHER_LOCATION, (randomValue % TERRA_CAVE_LOCATIONS) + TERRA_CAVE_LOCATIONS_START);
    }
    else
    {
        randomValue = Random();
        VarSet(VAR_ABNORMAL_WEATHER_LOCATION, (randomValue % MARINE_CAVE_LOCATIONS) + MARINE_CAVE_LOCATIONS_START);
    }
}

// Saves the map name for the current abnormal weather location in gStringVar1, then
// returns TRUE if the weather is for Kyogre, and FALSE if it's for Groudon.
bool32 GetAbnormalWeatherMapNameAndType(void)
{
    static const u8 sAbnormalWeatherMapNumbers[] = {
        MAP_NUM(ROUTE114),
        MAP_NUM(ROUTE114),
        MAP_NUM(ROUTE115),
        MAP_NUM(ROUTE115),
        MAP_NUM(ROUTE116),
        MAP_NUM(ROUTE116),
        MAP_NUM(ROUTE118),
        MAP_NUM(ROUTE118),
        MAP_NUM(ROUTE105),
        MAP_NUM(ROUTE105),
        MAP_NUM(ROUTE125),
        MAP_NUM(ROUTE125),
        MAP_NUM(ROUTE127),
        MAP_NUM(ROUTE127),
        MAP_NUM(ROUTE129),
        MAP_NUM(ROUTE129)
    };

    u16 abnormalWeather = VarGet(VAR_ABNORMAL_WEATHER_LOCATION);

    GetMapName(gStringVar1, sAbnormalWeatherMapNumbers[abnormalWeather - 1], 0);

    if (abnormalWeather < MARINE_CAVE_LOCATIONS_START)
        return FALSE;
    else
        return TRUE;
}

bool8 AbnormalWeatherHasExpired(void)
{
    // Duplicate array.
    static const u8 sAbnormalWeatherMapNumbers[] =
    {
        MAP_NUM(ROUTE114),
        MAP_NUM(ROUTE114),
        MAP_NUM(ROUTE115),
        MAP_NUM(ROUTE115),
        MAP_NUM(ROUTE116),
        MAP_NUM(ROUTE116),
        MAP_NUM(ROUTE118),
        MAP_NUM(ROUTE118),
        MAP_NUM(ROUTE105),
        MAP_NUM(ROUTE105),
        MAP_NUM(ROUTE125),
        MAP_NUM(ROUTE125),
        MAP_NUM(ROUTE127),
        MAP_NUM(ROUTE127),
        MAP_NUM(ROUTE129),
        MAP_NUM(ROUTE129)
    };

    u16 steps = VarGet(VAR_ABNORMAL_WEATHER_STEP_COUNTER);
    u16 abnormalWeather = VarGet(VAR_ABNORMAL_WEATHER_LOCATION);

    if (abnormalWeather == ABNORMAL_WEATHER_NONE)
        return FALSE;

    if (++steps > 999)
    {
        VarSet(VAR_ABNORMAL_WEATHER_STEP_COUNTER, 0);
        if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(UNDERWATER_MARINE_CAVE))
        {
            switch (gSaveBlock1Ptr->location.mapNum)
            {
            case MAP_NUM(UNDERWATER_MARINE_CAVE):
            case MAP_NUM(MARINE_CAVE_ENTRANCE):
            case MAP_NUM(MARINE_CAVE_END):
            case MAP_NUM(TERRA_CAVE_ENTRANCE):
            case MAP_NUM(TERRA_CAVE_END):
                VarSet(VAR_SHOULD_END_ABNORMAL_WEATHER, 1);
                return FALSE;
            default:
                break;
            }
        }

        if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(UNDERWATER_ROUTE127))
        {
            switch (gSaveBlock1Ptr->location.mapNum)
            {
            case MAP_NUM(UNDERWATER_ROUTE127):
            case MAP_NUM(UNDERWATER_ROUTE129):
            case MAP_NUM(UNDERWATER_ROUTE105):
            case MAP_NUM(UNDERWATER_ROUTE125):
                VarSet(VAR_SHOULD_END_ABNORMAL_WEATHER, 1);
                return FALSE;
            default:
                break;
            }
        }

        if (gSaveBlock1Ptr->location.mapNum == sAbnormalWeatherMapNumbers[abnormalWeather - 1] &&
            gSaveBlock1Ptr->location.mapGroup == 0)
        {
            return TRUE;
        }
        else
        {
            VarSet(VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_NONE);
            return FALSE;
        }
    }
    else
    {
        VarSet(VAR_ABNORMAL_WEATHER_STEP_COUNTER, steps);
        return FALSE;
    }
}

void Unused_SetWeatherSunny(void)
{
    SetCurrentAndNextWeather(WEATHER_SUNNY);
}

// All mart employees have a local id of 1, so function always returns 1
u32 GetMartEmployeeObjectEventId(void)
{
    static const u8 sPokeMarts[][3] =
    {
        { MAP_GROUP(OLDALE_TOWN_MART),     MAP_NUM(OLDALE_TOWN_MART),     LOCALID_OLDALE_MART_CLERK },
        { MAP_GROUP(LAVARIDGE_TOWN_MART),  MAP_NUM(LAVARIDGE_TOWN_MART),  LOCALID_LAVARIDGE_MART_CLERK },
        { MAP_GROUP(FALLARBOR_TOWN_MART),  MAP_NUM(FALLARBOR_TOWN_MART),  LOCALID_FALLARBOR_MART_CLERK },
        { MAP_GROUP(VERDANTURF_TOWN_MART), MAP_NUM(VERDANTURF_TOWN_MART), LOCALID_VERDANTURF_MART_CLERK },
        { MAP_GROUP(PETALBURG_CITY_MART),  MAP_NUM(PETALBURG_CITY_MART),  LOCALID_PETALBURG_MART_CLERK },
        { MAP_GROUP(SLATEPORT_CITY_MART),  MAP_NUM(SLATEPORT_CITY_MART),  LOCALID_SLATEPORT_MART_CLERK },
        { MAP_GROUP(MAUVILLE_CITY_MART),   MAP_NUM(MAUVILLE_CITY_MART),   LOCALID_MAUVILLE_MART_CLERK },
        { MAP_GROUP(RUSTBORO_CITY_MART),   MAP_NUM(RUSTBORO_CITY_MART),   LOCALID_RUSTBORO_MART_CLERK },
        { MAP_GROUP(FORTREE_CITY_MART),    MAP_NUM(FORTREE_CITY_MART),    LOCALID_FORTREE_MART_CLERK },
        { MAP_GROUP(MOSSDEEP_CITY_MART),   MAP_NUM(MOSSDEEP_CITY_MART),   LOCALID_MOSSDEEP_MART_CLERK },
        { MAP_GROUP(SOOTOPOLIS_CITY_MART), MAP_NUM(SOOTOPOLIS_CITY_MART), LOCALID_SOOTOPOLIS_MART_CLERK },
        { MAP_GROUP(BATTLE_FRONTIER_MART), MAP_NUM(BATTLE_FRONTIER_MART), LOCALID_BATTLE_FRONTIER_MART_CLERK }
    };

    u8 i;
    for (i = 0; i < ARRAY_COUNT(sPokeMarts); i++)
    {
        if (gSaveBlock1Ptr->location.mapGroup == sPokeMarts[i][0])
        {
            if (gSaveBlock1Ptr->location.mapNum == sPokeMarts[i][1])
                return sPokeMarts[i][2];
        }
    }
    return 1;
}

bool32 IsTrainerRegistered(void)
{
    int index = GetRematchIdxByTrainerIdx(gSpecialVar_0x8004);
    if (index >= 0)
    {
        if (FlagGet(FLAG_MATCH_CALL_REGISTERED + index) == TRUE)
            return TRUE;
    }
    return FALSE;
}

// Always returns FALSE
bool32 ShouldDistributeEonTicket(void)
{
    if (!VarGet(VAR_DISTRIBUTE_EON_TICKET))
        return FALSE;

    return TRUE;
}

#define tState data[0]

void BattleTowerReconnectLink(void)
{
    // Save battle type, restored at end
    // of Task_LinkRetireStatusWithBattleTowerPartner
    sBattleTowerMultiBattleTypeFlags = gBattleTypeFlags;
    gBattleTypeFlags = 0;

    if (!gReceivedRemoteLinkPlayers)
        CreateTask(Task_ReconnectWithLinkPlayers, 5);
}

void LinkRetireStatusWithBattleTowerPartner(void)
{
    CreateTask(Task_LinkRetireStatusWithBattleTowerPartner, 5);
}

// Communicate with a Battle Tower link partner to tell them
// whether or not the player chose to continue or retire,
// and determine what the partner chose to do
// gSpecialVar_0x8004: Player's choice
// gSpecialVar_0x8005: Partner's choice (read from gBlockRecvBuffer[1][0])
static void Task_LinkRetireStatusWithBattleTowerPartner(u8 taskId)
{
    switch (gTasks[taskId].tState)
    {
    case 0:
        if (!FuncIsActiveTask(Task_ReconnectWithLinkPlayers))
            gTasks[taskId].tState++;
        break;
    case 1:
        if (IsLinkTaskFinished() == TRUE)
        {
            if (GetMultiplayerId() == 0)
            {
                // Player is link leader, skip sending data
                gTasks[taskId].tState++;
            }
            else
            {
                // Send value of gSpecialVar_0x8004 to leader
                // Will either be BATTLE_TOWER_LINK_CONTINUE or BATTLE_TOWER_LINK_RETIRE
                SendBlock(BitmaskAllOtherLinkPlayers(), &gSpecialVar_0x8004, sizeof(gSpecialVar_0x8004));
                gTasks[taskId].tState++;
            }
        }
        break;
    case 2:
        if (GetBlockReceivedStatus() & 2)
        {
            if (GetMultiplayerId() == 0)
            {
                // Player is leader, read partner's choice
                // and determine if play should continue
                gSpecialVar_0x8005 = gBlockRecvBuffer[1][0];
                ResetBlockReceivedFlag(1);

                if (gSpecialVar_0x8004 == BATTLE_TOWER_LINK_RETIRE
                 && gSpecialVar_0x8005 == BATTLE_TOWER_LINK_RETIRE)
                    gSpecialVar_Result = BATTLE_TOWER_LINKSTAT_BOTH_RETIRE;
                else if (gSpecialVar_0x8004 == BATTLE_TOWER_LINK_CONTINUE
                      && gSpecialVar_0x8005 == BATTLE_TOWER_LINK_RETIRE)
                    gSpecialVar_Result = BATTLE_TOWER_LINKSTAT_MEMBER_RETIRE;
                else if (gSpecialVar_0x8004 == BATTLE_TOWER_LINK_RETIRE
                      && gSpecialVar_0x8005 == BATTLE_TOWER_LINK_CONTINUE)
                    gSpecialVar_Result = BATTLE_TOWER_LINKSTAT_LEADER_RETIRE;
                else
                    gSpecialVar_Result = BATTLE_TOWER_LINKSTAT_CONTINUE;
            }
            gTasks[taskId].tState++;
        }
        break;
    case 3:
        if (IsLinkTaskFinished() == TRUE)
        {
            if (GetMultiplayerId() != 0)
            {
                // Player is not link leader, wait for leader's response
                gTasks[taskId].tState++;
            }
            else
            {
                // Send whether or not play should continue
                SendBlock(BitmaskAllOtherLinkPlayers(), &gSpecialVar_Result, sizeof(gSpecialVar_Result));
                gTasks[taskId].tState++;
            }
        }
        break;
    case 4:
        if (GetBlockReceivedStatus() & 1)
        {
            if (GetMultiplayerId() != 0)
            {
                // Player is not link leader, read leader's response
                gSpecialVar_Result = gBlockRecvBuffer[0][0];
                ResetBlockReceivedFlag(0);
                gTasks[taskId].tState++;
            }
            else
            {
                gTasks[taskId].tState++;
            }
        }
        break;
    case 5:
        // Print message if partner chose to retire (and player didn't)
        if (GetMultiplayerId() == 0)
        {
            if (gSpecialVar_Result == BATTLE_TOWER_LINKSTAT_MEMBER_RETIRE)
                ShowFieldAutoScrollMessage(gText_YourPartnerHasRetired);
        }
        else
        {
            if (gSpecialVar_Result == BATTLE_TOWER_LINKSTAT_LEADER_RETIRE)
                ShowFieldAutoScrollMessage(gText_YourPartnerHasRetired);
        }
        gTasks[taskId].tState++;
        break;
    case 6:
        if (!IsTextPrinterActive(0))
            gTasks[taskId].tState++;
        break;
    case 7:
        if (IsLinkTaskFinished() == TRUE)
        {
            SetLinkStandbyCallback();
            gTasks[taskId].tState++;
        }
        break;
    case 8:
        if (IsLinkTaskFinished() == TRUE)
            gTasks[taskId].tState++;
        break;
    case 9:
        if (gWirelessCommType == 0)
            SetCloseLinkCallback();

        gBattleTypeFlags = sBattleTowerMultiBattleTypeFlags;
        ScriptContext_Enable();
        DestroyTask(taskId);
        break;
    }
}

#undef tState

void Script_DoRayquazaScene(void)
{
    if (!gSpecialVar_0x8004)
    {
        // Groudon/Kyogre fight scene
        DoRayquazaScene(0, TRUE, CB2_ReturnToFieldContinueScriptPlayMapMusic);
    }
    else
    {
        // Rayquaza arrives scene
        DoRayquazaScene(1, FALSE, CB2_ReturnToFieldContinueScriptPlayMapMusic);
    }
}

#define playCount data[0]
#define delay     data[1]

void LoopWingFlapSE(void)
{
    CreateTask(Task_LoopWingFlapSE, 8);
    PlaySE(SE_M_WING_ATTACK);
}

static void Task_LoopWingFlapSE(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    delay++;
    if (delay == gSpecialVar_0x8005)
    {
        playCount++;
        delay = 0;
        PlaySE(SE_M_WING_ATTACK);
    }

    if (playCount == gSpecialVar_0x8004 - 1)
        DestroyTask(taskId);
}

#undef playCount
#undef delay

#define CURTAIN_HEIGHT 4
#define CURTAIN_WIDTH 3
#define tFrameTimer   data
#define tCurrentFrame data[3]

void CloseBattlePikeCurtain(void)
{
    u8 taskId = CreateTask(Task_CloseBattlePikeCurtain, 8);
    gTasks[taskId].tFrameTimer[0] = 4;
    gTasks[taskId].tFrameTimer[1] = 4;
    gTasks[taskId].tFrameTimer[2] = 4;
    gTasks[taskId].tCurrentFrame = 0;
}

static void Task_CloseBattlePikeCurtain(u8 taskId)
{
    u8 x, y;
    s16 *data = gTasks[taskId].data;

    tFrameTimer[tCurrentFrame]--;
    if (tFrameTimer[tCurrentFrame] == 0)
    {
        for (y = 0; y < CURTAIN_HEIGHT; y++)
        {
            for (x = 0; x < CURTAIN_WIDTH; x++)
            {
                MapGridSetMetatileIdAt(gSaveBlock1Ptr->pos.x + x + MAP_OFFSET - 1,
                                       gSaveBlock1Ptr->pos.y + y + MAP_OFFSET - 3,
                                       (x + METATILE_BattlePike_CurtainFrames_Start) + (y * METATILE_ROW_WIDTH) + (tCurrentFrame * CURTAIN_HEIGHT * METATILE_ROW_WIDTH));
            }
        }
        DrawWholeMapView();
        tCurrentFrame++;
        if (tCurrentFrame == 3)
        {
            DestroyTask(taskId);
            ScriptContext_Enable();
        }
    }
}

#undef CURTAIN_HEIGHT
#undef CURTAIN_WIDTH
#undef tFrameTimer
#undef tCurrentFrame

void GetBattlePyramidHint(void)
{
    // gSpecialVar_0x8004 here is expected to be the current Battle Pyramid win streak.
    gSpecialVar_Result = gSpecialVar_0x8004 / FRONTIER_STAGES_PER_CHALLENGE;
    gSpecialVar_Result -= (gSpecialVar_Result / TOTAL_PYRAMID_ROUNDS) * TOTAL_PYRAMID_ROUNDS;
}

// Used to avoid a potential softlock if the player respawns on Dewford with no way off
void ResetHealLocationFromDewford(void)
{
    if (gSaveBlock1Ptr->lastHealLocation.mapGroup == MAP_GROUP(DEWFORD_TOWN) && gSaveBlock1Ptr->lastHealLocation.mapNum == MAP_NUM(DEWFORD_TOWN))
        SetLastHealLocationWarp(HEAL_LOCATION_PETALBURG_CITY);
}

bool8 InPokemonCenter(void)
{
    static const u16 sPokemonCenters[] =
    {
        MAP_OLDALE_TOWN_POKEMON_CENTER_1F,
        MAP_DEWFORD_TOWN_POKEMON_CENTER_1F,
        MAP_LAVARIDGE_TOWN_POKEMON_CENTER_1F,
        MAP_FALLARBOR_TOWN_POKEMON_CENTER_1F,
        MAP_VERDANTURF_TOWN_POKEMON_CENTER_1F,
        MAP_PACIFIDLOG_TOWN_POKEMON_CENTER_1F,
        MAP_PETALBURG_CITY_POKEMON_CENTER_1F,
        MAP_SLATEPORT_CITY_POKEMON_CENTER_1F,
        MAP_MAUVILLE_CITY_POKEMON_CENTER_1F,
        MAP_RUSTBORO_CITY_POKEMON_CENTER_1F,
        MAP_FORTREE_CITY_POKEMON_CENTER_1F,
        MAP_LILYCOVE_CITY_POKEMON_CENTER_1F,
        MAP_MOSSDEEP_CITY_POKEMON_CENTER_1F,
        MAP_SOOTOPOLIS_CITY_POKEMON_CENTER_1F,
        MAP_EVER_GRANDE_CITY_POKEMON_CENTER_1F,
        MAP_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F,
        MAP_BATTLE_FRONTIER_POKEMON_CENTER_1F,
        MAP_BATTLE_COLOSSEUM_2P,
        MAP_TRADE_CENTER,
        MAP_RECORD_CORNER,
        MAP_BATTLE_COLOSSEUM_4P,
        MAP_UNDEFINED
    };

    int i;
    u16 map = (gSaveBlock1Ptr->location.mapGroup << 8) + gSaveBlock1Ptr->location.mapNum;

    for (i = 0; sPokemonCenters[i] != MAP_UNDEFINED; i++)
    {
        if (sPokemonCenters[i] == map)
            return TRUE;
    }
    return FALSE;
}

/*  Summary of the Lilycove Trainer Fan Club, because it's a little messy

    ## The Fan Club room itself
    There are initially 4 members of the Fan Club (+ an interviewer), none of whom are fans of the player
    After becoming the champion there will be 8 members of the Fan Club, 3 of whom are automatically fans of the player
    After this point, if a club member is a fan of the player they will sit at the front table and comment on the player
    If they are not fans of the player, they will sit at the far table and can make comments about a different trainer (see BufferFanClubTrainerName)

    ## Gaining/losing fans
    After every link battle the player will gain a fan if they won, or lose a fan if they lost
    If the player has at least 3 fans, this is the only way to gain fans
    If the player has fewer than 3 fans, they may also gain fans by completing certain tasks enough times (see TryGainNewFanFromCounter)
    If the player has at least 5 fans, they can lose a fan every 12 real-time hours, or more often if the timer variable is reset (see TryLoseFansFromPlayTime)
    If the player has only 1 fan left it cannot be lost

    ## Variables
    VAR_FANCLUB_FAN_COUNTER, a bitfield for tracking the fans
      Bits  1-7: Counter for when to add new fans
      Bit     8: Flag set after receiving the initial 3 fans
      Bits 9-16: Flags for each of the 8 club members, set to 1 when theyre a fan of the player and 0 when theyre not

    VAR_FANCLUB_LOSE_FAN_TIMER, a timer for when to lose fans
      Compared against playTimeHours. When theyre equal, a fan is ready to be lost
      For every fan thats lost this way 12 hours are added to the timer

    VAR_LILYCOVE_FAN_CLUB_STATE
      0: Player is not the champion yet
      1: Player is the champion, ready to meet their initial fans
      2: Player has met their initial fans
*/

#define FANCLUB_BITFIELD (gSaveBlock1Ptr->vars[VAR_FANCLUB_FAN_COUNTER - VARS_START])
#define FANCLUB_COUNTER    0x007F

#define GET_TRAINER_FAN_CLUB_FLAG(flag) (FANCLUB_BITFIELD >> (flag) & 1)
#define SET_TRAINER_FAN_CLUB_FLAG(flag) (FANCLUB_BITFIELD |= 1 << (flag))
#define FLIP_TRAINER_FAN_CLUB_FLAG(flag)(FANCLUB_BITFIELD ^= 1 << (flag))

#define GET_TRAINER_FAN_CLUB_COUNTER        (FANCLUB_BITFIELD & FANCLUB_COUNTER)
#define SET_TRAINER_FAN_CLUB_COUNTER(count) (FANCLUB_BITFIELD = (FANCLUB_BITFIELD & ~FANCLUB_COUNTER) | (count))
#define INCR_TRAINER_FAN_CLUB_COUNTER(count)(FANCLUB_BITFIELD += (count))
#define CLEAR_TRAINER_FAN_CLUB_COUNTER      (FANCLUB_BITFIELD &= ~FANCLUB_COUNTER)

void ResetFanClub(void)
{
    gSaveBlock1Ptr->vars[VAR_FANCLUB_FAN_COUNTER - VARS_START] = 0;
    gSaveBlock1Ptr->vars[VAR_FANCLUB_LOSE_FAN_TIMER - VARS_START] = 0;
}

void TryLoseFansFromPlayTimeAfterLinkBattle(void)
{
    if (DidPlayerGetFirstFans())
    {
        TryLoseFansFromPlayTime();
        gSaveBlock1Ptr->vars[VAR_FANCLUB_LOSE_FAN_TIMER - VARS_START] = gSaveBlock2Ptr->playTimeHours;
    }
}

void UpdateTrainerFanClubGameClear(void)
{
    if (!GET_TRAINER_FAN_CLUB_FLAG(FANCLUB_GOT_FIRST_FANS))
    {
        SetPlayerGotFirstFans();
        SetInitialFansOfPlayer();
        gSaveBlock1Ptr->vars[VAR_FANCLUB_LOSE_FAN_TIMER - VARS_START] = gSaveBlock2Ptr->playTimeHours;
        FlagClear(FLAG_HIDE_FANCLUB_OLD_LADY);
        FlagClear(FLAG_HIDE_FANCLUB_BOY);
        FlagClear(FLAG_HIDE_FANCLUB_LITTLE_BOY);
        FlagClear(FLAG_HIDE_FANCLUB_LADY);
        FlagClear(FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER);
        VarSet(VAR_LILYCOVE_FAN_CLUB_STATE, 1);
    }
}

// If the player has < 3 fans, gain a new fan whenever the counter reaches 20+
// Defeating Drake or participating in a Contest increments the counter by 2
// Participating at Battle Tower or in a Secret Base battle increments the counter by 1
u8 TryGainNewFanFromCounter(u8 incrementId)
{
    static const u8 sCounterIncrements[] =
    {
        [FANCOUNTER_DEFEATED_DRAKE]    = 2,
        [FANCOUNTER_BATTLED_AT_BASE]   = 1,
        [FANCOUNTER_FINISHED_CONTEST]  = 2,
        [FANCOUNTER_USED_BATTLE_TOWER] = 1
    };

    if (VarGet(VAR_LILYCOVE_FAN_CLUB_STATE) == 2)
    {
        if (GET_TRAINER_FAN_CLUB_COUNTER + sCounterIncrements[incrementId] > 19)
        {
            if (GetNumFansOfPlayerInTrainerFanClub() < 3)
            {
                PlayerGainRandomTrainerFan();
                CLEAR_TRAINER_FAN_CLUB_COUNTER;
            }
            else
            {
                SET_TRAINER_FAN_CLUB_COUNTER(20);
            }
        }
        else
        {
            INCR_TRAINER_FAN_CLUB_COUNTER(sCounterIncrements[incrementId]);
        }
    }

    return GET_TRAINER_FAN_CLUB_COUNTER;
}


// Loop through the fan club members, and if theyre not a fan of the player there is a 50% chance for them to become a fan
// Stops when a fan is gained
// If no new fan was gained while looping, the last non-fan in the list becomes a fan
// If all the members are already fans of the player then this redundantly sets the first fan in the list to be a fan
static u16 PlayerGainRandomTrainerFan(void)
{
    static const u8 sFanClubMemberIds[NUM_TRAINER_FAN_CLUB_MEMBERS] =
    {
        FANCLUB_MEMBER1,
        FANCLUB_MEMBER2,
        FANCLUB_MEMBER3,
        FANCLUB_MEMBER4,
        FANCLUB_MEMBER5,
        FANCLUB_MEMBER6,
        FANCLUB_MEMBER7,
        FANCLUB_MEMBER8
    };

    u8 i;
    u8 idx = 0;

    for (i = 0; i < ARRAY_COUNT(sFanClubMemberIds); i++)
    {
        if (!GET_TRAINER_FAN_CLUB_FLAG(sFanClubMemberIds[i]))
        {
            idx = i;
            if (Random() & 1)
            {
                SET_TRAINER_FAN_CLUB_FLAG(sFanClubMemberIds[idx]);
                return idx;
            }
        }
    }
    SET_TRAINER_FAN_CLUB_FLAG(sFanClubMemberIds[idx]);
    return idx;
}

// Loops through the fan club members, and if theyre a fan of the player there is a 50% chance for them to stop being a fan
// Stops if a fan is removed, or if the player has only one fan left
// If no fan was lost while looping, the last current fan in the list will stop being a fan
static u16 PlayerLoseRandomTrainerFan(void)
{
    static const u8 sFanClubMemberIds[NUM_TRAINER_FAN_CLUB_MEMBERS] =
    {
        FANCLUB_MEMBER1,
        FANCLUB_MEMBER6,
        FANCLUB_MEMBER7,
        FANCLUB_MEMBER4,
        FANCLUB_MEMBER3,
        FANCLUB_MEMBER5,
        FANCLUB_MEMBER8,
        FANCLUB_MEMBER2
    };

    u8 i;
    u8 idx = 0;

    if (GetNumFansOfPlayerInTrainerFanClub() == 1)
        return 0;

    for (i = 0; i < ARRAY_COUNT(sFanClubMemberIds); i++)
    {
        if (GET_TRAINER_FAN_CLUB_FLAG(sFanClubMemberIds[i]))
        {
            idx = i;
            if (Random() & 1)
            {
                FLIP_TRAINER_FAN_CLUB_FLAG(sFanClubMemberIds[idx]);
                return idx;
            }
        }
    }

    if (GET_TRAINER_FAN_CLUB_FLAG(sFanClubMemberIds[idx]))
        FLIP_TRAINER_FAN_CLUB_FLAG(sFanClubMemberIds[idx]);

    return idx;
}

u16 GetNumFansOfPlayerInTrainerFanClub(void)
{
    u8 i;
    u8 numFans = 0;

    for (i = 0; i < NUM_TRAINER_FAN_CLUB_MEMBERS; i++)
    {
        if (GET_TRAINER_FAN_CLUB_FLAG(i + FANCLUB_MEMBER1))
            numFans++;
    }

    return numFans;
}

// If the player has > 5 fans in the Trainer Fan Club, then lose 1 fan for every 12 hours since the last fan loss / timer reset
void TryLoseFansFromPlayTime(void)
{
    u8 i = 0;
    if (gSaveBlock2Ptr->playTimeHours < 999)
    {
        while (TRUE)
        {
            if (GetNumFansOfPlayerInTrainerFanClub() < 5)
            {
                gSaveBlock1Ptr->vars[VAR_FANCLUB_LOSE_FAN_TIMER - VARS_START] = gSaveBlock2Ptr->playTimeHours;
                break;
            }
            else if (i == NUM_TRAINER_FAN_CLUB_MEMBERS)
            {
                break;
            }
            else if (gSaveBlock2Ptr->playTimeHours - gSaveBlock1Ptr->vars[VAR_FANCLUB_LOSE_FAN_TIMER - VARS_START] < 12)
            {
                return;
            }
            PlayerLoseRandomTrainerFan();
            gSaveBlock1Ptr->vars[VAR_FANCLUB_LOSE_FAN_TIMER - VARS_START] += 12;
            i++;
        }
    }
}

bool8 IsFanClubMemberFanOfPlayer(void)
{
    return GET_TRAINER_FAN_CLUB_FLAG(gSpecialVar_0x8004);
}

static void SetInitialFansOfPlayer(void)
{
    SET_TRAINER_FAN_CLUB_FLAG(FANCLUB_MEMBER6);
    SET_TRAINER_FAN_CLUB_FLAG(FANCLUB_MEMBER1);
    SET_TRAINER_FAN_CLUB_FLAG(FANCLUB_MEMBER3);
}

void BufferFanClubTrainerName(void)
{
    u8 whichLinkTrainer = 0;
    u8 whichNPCTrainer = 0;
    switch (gSpecialVar_0x8004)
    {
    case FANCLUB_MEMBER1:
        break;
    case FANCLUB_MEMBER2:
        break;
    case FANCLUB_MEMBER3:
        whichLinkTrainer = 0;
        whichNPCTrainer = 3;
        break;
    case FANCLUB_MEMBER4:
        whichLinkTrainer = 0;
        whichNPCTrainer = 1;
        break;
    case FANCLUB_MEMBER5:
        whichLinkTrainer = 1;
        whichNPCTrainer = 0;
        break;
    case FANCLUB_MEMBER6:
        whichLinkTrainer = 0;
        whichNPCTrainer = 4;
        break;
    case FANCLUB_MEMBER7:
        whichLinkTrainer = 1;
        whichNPCTrainer = 5;
        break;
    case FANCLUB_MEMBER8:
        break;
    }
#if FREE_LINK_BATTLE_RECORDS == FALSE
    BufferFanClubTrainerName_(&gSaveBlock1Ptr->linkBattleRecords, whichLinkTrainer, whichNPCTrainer);
#else
    BufferFanClubTrainerName_(whichLinkTrainer, whichNPCTrainer);
#endif //FREE_LINK_BATTLE_RECORDS
}

#if FREE_LINK_BATTLE_RECORDS == FALSE
static void BufferFanClubTrainerName_(struct LinkBattleRecords *linkRecords, u8 whichLinkTrainer, u8 whichNPCTrainer)
{
    struct LinkBattleRecord *record = &linkRecords->entries[whichLinkTrainer];
    if (record->name[0] == EOS)
    {
        switch (whichNPCTrainer)
        {
        case 0:
            StringCopy(gStringVar1, gText_Wallace);
            break;
        case 1:
            StringCopy(gStringVar1, gText_Steven);
            break;
        case 2:
            StringCopy(gStringVar1, gText_Brawly);
            break;
        case 3:
            StringCopy(gStringVar1, gText_Winona);
            break;
        case 4:
            StringCopy(gStringVar1, gText_Phoebe);
            break;
        case 5:
            StringCopy(gStringVar1, gText_Glacia);
            break;
        default:
            StringCopy(gStringVar1, gText_Wallace);
            break;
        }
    }
    else
    {
        StringCopyN(gStringVar1, record->name, PLAYER_NAME_LENGTH);
        gStringVar1[PLAYER_NAME_LENGTH] = EOS;
        ConvertInternationalString(gStringVar1, linkRecords->languages[whichLinkTrainer]);
    }
}
#else
static void BufferFanClubTrainerName_(u8 whichLinkTrainer, u8 whichNPCTrainer)
{
    switch (whichNPCTrainer)
    {
        case 0:
            StringCopy(gStringVar1, gText_Wallace);
            break;
        case 1:
            StringCopy(gStringVar1, gText_Steven);
            break;
        case 2:
            StringCopy(gStringVar1, gText_Brawly);
            break;
        case 3:
            StringCopy(gStringVar1, gText_Winona);
            break;
        case 4:
            StringCopy(gStringVar1, gText_Phoebe);
            break;
        case 5:
            StringCopy(gStringVar1, gText_Glacia);
            break;
        default:
            StringCopy(gStringVar1, gText_Wallace);
            break;
    }
}
#endif //FREE_LINK_BATTLE_RECORDS

void UpdateTrainerFansAfterLinkBattle(void)
{
    if (VarGet(VAR_LILYCOVE_FAN_CLUB_STATE) == 2)
    {
        TryLoseFansFromPlayTimeAfterLinkBattle();
        if (gBattleOutcome == B_OUTCOME_WON)
            PlayerGainRandomTrainerFan();
        else
            PlayerLoseRandomTrainerFan();
    }
}

static bool8 DidPlayerGetFirstFans(void)
{
    return GET_TRAINER_FAN_CLUB_FLAG(FANCLUB_GOT_FIRST_FANS);
}

void SetPlayerGotFirstFans(void)
{
    SET_TRAINER_FAN_CLUB_FLAG(FANCLUB_GOT_FIRST_FANS);
}

// return value is always ignored
u8 Script_TryGainNewFanFromCounter(void)
{
    return TryGainNewFanFromCounter(gSpecialVar_0x8004);
}

void TrySkyBattle(void)
{
    int i;

    if (B_VAR_SKY_BATTLE == 0 || B_FLAG_SKY_BATTLE == 0)
    {
        LockPlayerFieldControls();
        ScriptContext_SetupScript(Debug_FlagsAndVarNotSetBattleConfigMessage);
        return;
    }
    for (i = 0; i < CalculatePlayerPartyCount(); i++)
    {
        struct Pokemon* pokemon = &gPlayerParty[i];
        if (CanMonParticipateInSkyBattle(pokemon) && GetMonData(pokemon, MON_DATA_HP, NULL) > 0)
        {
            PreparePartyForSkyBattle();
            gSpecialVar_Result = TRUE;
            return;
        }
    }
    gSpecialVar_Result = FALSE;
}

void PreparePartyForSkyBattle(void)
{
    int i, participatingPokemonSlot = 0;
    u8 partyCount = CalculatePlayerPartyCount();

    FlagSet(B_FLAG_SKY_BATTLE);
    SavePlayerParty();

    for (i = 0; i < partyCount; i++)
    {
        struct Pokemon* pokemon = &gPlayerParty[i];

        if (CanMonParticipateInSkyBattle(pokemon))
            participatingPokemonSlot += 1 << i;
        else
            ZeroMonData(pokemon);
    }
    VarSet(B_VAR_SKY_BATTLE,participatingPokemonSlot);
    CompactPartySlots();
}

void EnterMysteryGiftCode(void)
{
    DoNamingScreen(NAMING_SCREEN_MYSTERY_GIFT, gStringVar2, 0, 0, 0, CB2_ReturnToFieldContinueScript);
}

void GetMysteryGiftFeedback(void)
{
    // The codes.
    static const u8 sText_CodeRareCandies[]    = _("9RARECANDY");
    static const u8 sText_CodePerfectCatchRate[]   = _("JUSTCATCH!");
    static const u8 sText_CodeWorldChamp[]   = _("WORLDCHAMP");
    static const u8 sText_CodeGirlypop[]   = _("WATCHPHAUN"); // girlypop code, only stage 1's though
    static const u8 sText_CodeAlolaStarters[]   = _("ILOVEALOLA");
    static const u8 sText_CodeKalosStarters[]  = _("ILOVEKALOS");
    static const u8 sText_CodeUnovaStarters[]     = _("IWANTMONKE");
    static const u8 sText_CodePaldeaStarters[] = _("ILOVPALDEA");
    static const u8 sText_CodeNemosFavs[] = _("NEMOS FAVE");
    static const u8 sText_CodeJustShowMe[] = _("JUSTSHOWME");
    static const u8 sText_CodeWishingStars[] = _("WISHINGSTR");
    static const u8 sText_CodeNuggets[] = _("GIMMENUGS!");
    
    static const u8 sText_CodeMonotype_Bug[] = _("MONO BUG");
    static const u8 sText_CodeMonotype_Dark[] = _("MONO DARK");
    static const u8 sText_CodeMonotype_Dragon[] = _("MONO DRAGN");
    static const u8 sText_CodeMonotype_Electric[] = _("MONO ELECT");
    static const u8 sText_CodeMonotype_Fairy[] = _("MONO FAIRY");
    static const u8 sText_CodeMonotype_Fighting[] = _("MONO FIGHT");
    static const u8 sText_CodeMonotype_Fire[] = _("MONO FIRE");
    static const u8 sText_CodeMonotype_Flying[] = _("MONO FLYIN");
    static const u8 sText_CodeMonotype_Ghost[] = _("MONO GHOST");
    static const u8 sText_CodeMonotype_Grass[] = _("MONO GRASS");
    static const u8 sText_CodeMonotype_Ground[] = _("MONO GROUN");
    static const u8 sText_CodeMonotype_Ice[] = _("MONO ICE");
    static const u8 sText_CodeMonotype_Normal[] = _("MONO NORML");
    static const u8 sText_CodeMonotype_Poison[] = _("MONO POISN");
    static const u8 sText_CodeMonotype_Psychic[] = _("MONO PSYCH");
    static const u8 sText_CodeMonotype_Rock[] = _("MONO ROCK");
    static const u8 sText_CodeMonotype_Steel[] = _("MONO STEEL");
    static const u8 sText_CodeMonotype_Water[] = _("MONO WATER");

    static const u8 sText_CodeIMissJohto[] = _("IMISSJOHTO");
    static const u8 sText_CodeOgerpon[] = _("MASKEDOGRE");
    static const u8 sText_CodeFloette[] = _("LEGENDS ZA");
    static const u8 sText_CodeRockruff[] = _("HOUSESTARK");

    static const u8 sText_CodeOutfits[] = _("DRESS UP");
    static const u8 sText_CodeHylianOutfit[] = _("HYLIAN FIT");
    static const u8 sText_CodeShowWildNatures[] = _("WILDNATURE");
    static const u8 sText_CodePortablePC[] = _("PORTABLEPC");
    static const u8 sText_CodeMosey[] = _("MOSEY");
    static const u8 sText_CodeBattlePass[] = _("BATTLEPASS");

    // Code 1
    if (!StringCompare(gStringVar2, sText_CodeRareCandies))
        gSpecialVar_Result = 1;
    // Code 2
    else if (!StringCompare(gStringVar2, sText_CodePerfectCatchRate))
        gSpecialVar_Result = 2;
    // Code 3
    else if (!StringCompare(gStringVar2, sText_CodeWorldChamp))
        gSpecialVar_Result = 3;
    // Code 4
    else if (!StringCompare(gStringVar2, sText_CodeGirlypop))
        gSpecialVar_Result = 4;
    // Code 5
    else if (!StringCompare(gStringVar2, sText_CodeAlolaStarters))
        gSpecialVar_Result = 5;
    // Code 6
    else if (!StringCompare(gStringVar2, sText_CodeKalosStarters))
        gSpecialVar_Result = 6;
    // Code 7
    else if (!StringCompare(gStringVar2, sText_CodeUnovaStarters))
        gSpecialVar_Result = 7;
    // Code 8
    else if (!StringCompare(gStringVar2, sText_CodePaldeaStarters))
        gSpecialVar_Result = 8;
    // Code 9
    else if (!StringCompare(gStringVar2, sText_CodeNemosFavs))
        gSpecialVar_Result = 9;
    // Code 10
    else if (!StringCompare(gStringVar2, sText_CodeJustShowMe))
        gSpecialVar_Result = 10;
    // Code 11
    else if (!StringCompare(gStringVar2, sText_CodeWishingStars))
        gSpecialVar_Result = 11;
    // Code 12
    else if (!StringCompare(gStringVar2, sText_CodeNuggets))
        gSpecialVar_Result = 12;
    
    // Code 13
    else if (!StringCompare(gStringVar2, sText_CodeMonotype_Bug))
        gSpecialVar_Result = 13;
    // Code 14
    else if (!StringCompare(gStringVar2, sText_CodeMonotype_Dark))
        gSpecialVar_Result = 14;
    // Code 15
    else if (!StringCompare(gStringVar2, sText_CodeMonotype_Dragon))
        gSpecialVar_Result = 15;
    // Code 16
    else if (!StringCompare(gStringVar2, sText_CodeMonotype_Electric))
        gSpecialVar_Result = 16;
    // Code 17
    else if (!StringCompare(gStringVar2, sText_CodeMonotype_Fairy))
        gSpecialVar_Result = 17;
    // Code 18
    else if (!StringCompare(gStringVar2, sText_CodeMonotype_Fighting))
        gSpecialVar_Result = 18;
    // Code 19
    else if (!StringCompare(gStringVar2, sText_CodeMonotype_Fire))
        gSpecialVar_Result = 19;
    // Code 20
    else if (!StringCompare(gStringVar2, sText_CodeMonotype_Flying))
        gSpecialVar_Result = 20;
    // Code 21
    else if (!StringCompare(gStringVar2, sText_CodeMonotype_Ghost))
        gSpecialVar_Result = 21;
    // Code 22
    else if (!StringCompare(gStringVar2, sText_CodeMonotype_Grass))
        gSpecialVar_Result = 22;
    // Code 23
    else if (!StringCompare(gStringVar2, sText_CodeMonotype_Ground))
        gSpecialVar_Result = 23;
    // Code 24
    else if (!StringCompare(gStringVar2, sText_CodeMonotype_Ice))
        gSpecialVar_Result = 24;
    // Code 25
    else if (!StringCompare(gStringVar2, sText_CodeMonotype_Normal))
        gSpecialVar_Result = 25;
    // Code 26
    else if (!StringCompare(gStringVar2, sText_CodeMonotype_Poison))
        gSpecialVar_Result = 26;
    // Code 27
    else if (!StringCompare(gStringVar2, sText_CodeMonotype_Psychic))
        gSpecialVar_Result = 27;
    // Code 28
    else if (!StringCompare(gStringVar2, sText_CodeMonotype_Rock))
        gSpecialVar_Result = 28;
    // Code 29
    else if (!StringCompare(gStringVar2, sText_CodeMonotype_Steel))
        gSpecialVar_Result = 29;
    // Code 30
    else if (!StringCompare(gStringVar2, sText_CodeMonotype_Water))
        gSpecialVar_Result = 30;
    // Code 31
    else if (!StringCompare(gStringVar2, sText_CodeIMissJohto))
        gSpecialVar_Result = 31;
    // Code 32
    else if (!StringCompare(gStringVar2, sText_CodeOgerpon))
        gSpecialVar_Result = 32;
    // Code 33
    else if (!StringCompare(gStringVar2, sText_CodeFloette))
        gSpecialVar_Result = 33;
    // Code 34
    else if (!StringCompare(gStringVar2, sText_CodeRockruff))
        gSpecialVar_Result = 34;
    // Code 35
    else if (!StringCompare(gStringVar2, sText_CodeOutfits))
        gSpecialVar_Result = 35;
    // Code 36
    else if (!StringCompare(gStringVar2, sText_CodeHylianOutfit))
        gSpecialVar_Result = 36;
    // Code 37
    else if (!StringCompare(gStringVar2, sText_CodeShowWildNatures))
        gSpecialVar_Result = 37;
    // Code 38
    else if (!StringCompare(gStringVar2, sText_CodePortablePC))
        gSpecialVar_Result = 38;
    // Code 39
    else if (!StringCompare(gStringVar2, sText_CodeMosey))
        gSpecialVar_Result = 39;
    // Code 40
    else if (!StringCompare(gStringVar2, sText_CodeBattlePass))
        gSpecialVar_Result = 40;

    // Invalid cheat code
    else
        gSpecialVar_Result = 0;
}

bool8 GetSeenMon(void)
{
    return GetSetPokedexFlag(SpeciesToNationalPokedexNum(VarGet(VAR_TEMP_1)), FLAG_GET_SEEN);
}

bool8 GetCaughtMon(void)
{
    return GetSetPokedexFlag(SpeciesToNationalPokedexNum(VarGet(VAR_TEMP_1)), FLAG_GET_CAUGHT);
}

void SetSeenMon(void)
{
    GetSetPokedexFlag(SpeciesToNationalPokedexNum(VarGet(VAR_TEMP_1)), FLAG_SET_SEEN);
}

void SetCaughtMon(void)
{
    GetSetPokedexFlag(SpeciesToNationalPokedexNum(VarGet(VAR_TEMP_1)), FLAG_SET_SEEN);
    GetSetPokedexFlag(SpeciesToNationalPokedexNum(VarGet(VAR_TEMP_1)), FLAG_SET_CAUGHT);
}

bool8 CheckPartyForMon(void)
{
    int i;
    for (i = 0; i < CalculatePlayerPartyCount(); i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES) == VarGet(VAR_TEMP_1))
            return TRUE;
    }
    return FALSE;
}

void ChooseItemFromBag(void)
{
    switch (VarGet(VAR_TEMP_1))
    {
    case ITEMS_POCKET:
    case BALLS_POCKET:
    case TMHM_POCKET:
    case BERRIES_POCKET:
    case KEYITEMS_POCKET:
        GoToBagMenu(ITEMMENULOCATION_CHOOSE_ITEM, VarGet(VAR_TEMP_1), CB2_ReturnToFieldContinueScript);
    default:
        break;
    }
}

void CheckIfAnyMonsHaveRibbons(void) // used for Quests to reward player for earning any ribbons
{
    int i, j;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (GetMonData(&gPlayerParty[i],  MON_DATA_SANITY_HAS_SPECIES)
            && !GetMonData(&gPlayerParty[i], MON_DATA_SANITY_IS_EGG)
            && GetMonData(&gPlayerParty[i], MON_DATA_RIBBON_COUNT) != 0)
        {
            gSpecialVar_0x8004 = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES);
            gSpecialVar_Result = TRUE;
            return;
        }
    }

    for (j = 0; j < TOTAL_BOXES_COUNT; j++)
    {
        for (i = 0; i < IN_BOX_COUNT; i++)
        {
            if (CheckBoxMonSanityAt(j, i)
                && GetBoxMonDataAt(j, i, MON_DATA_RIBBON_COUNT) != 0)
            {
                gSpecialVar_0x8004 = GetBoxMonDataAt(j, i, MON_DATA_SPECIES);
                gSpecialVar_Result = TRUE;
                return;
            }
        }
    }

    gSpecialVar_Result = FALSE;
    return;
}

void SetPalatiGymTorch1(void)
{
    MapGridSetMetatileIdAt(1, 9, METATILE_PalatiGym_PalatiGym_TorchOn_2);
}

void SetPalatiGymTorch2(void)
{
    MapGridSetMetatileIdAt(10, 3, METATILE_PalatiGym_PalatiGym_TorchOn_1);
}

void SetPalatiGymTorch3(void)
{
    MapGridSetMetatileIdAt(26, 24, METATILE_PalatiGym_PalatiGym_TorchOn_2);
}

// -------------------------------------------------------------------------------------------
//                             UNIVERSITY STUDENT ROUTE PROGRESS SPECIAL
// -------------------------------------------------------------------------------------------

// This special is used to check if the player has caught all the Pokémon in a given area
// Genuinely probably the least efficient way I could possibly do this but I don't care
// ...alright i do care but im bored at work so im gonna do this instead of anything productive lmfao
void CheckRouteCaptureProgress(void)
{

    u8 mapId;
    mapId = GetCurrentRegionMapSectionId(); // gets current mapSec

    u32 wildSpeciesArray[32];

    // Pack a Wild Species Array with whatever mons are being tested for
    // Note: Some maps just have the land encounters (ex: Acrisia City), while others consider entire encounter table
    switch(mapId)
    {
        default: // adding this as default just in case lol
        case MAPSEC_ACRISIA_CITY:
        {
            u32 localArray[32] = {SPECIES_PIKIPEK, SPECIES_SANDSHREW, SPECIES_POLIWAG, SPECIES_SHROOMISH, SPECIES_DUCKLETT, SPECIES_PHANPY, SPECIES_GRIMER, SPECIES_PANSAGE, SPECIES_PANSEAR, SPECIES_PANPOUR, SPECIES_HOOTHOOT, SPECIES_MUNNA, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_BRONZE_PASS:
        {
            u32 localArray[32] = {SPECIES_MAREEP, SPECIES_LILLIPUP, SPECIES_HOPPIP, SPECIES_CUTIEFLY, SPECIES_FOMANTIS, SPECIES_NINCADA, SPECIES_MUDBRAY, SPECIES_COMFEY, SPECIES_GRUBBIN, SPECIES_CUBONE, SPECIES_MURKROW, SPECIES_VULLABY, SPECIES_YAMPER, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_JUSMAIL_TOWN:
        {
            u32 localArray[32] = {SPECIES_WURMPLE, SPECIES_PIKIPEK, SPECIES_CUTIEFLY, SPECIES_BOUNSWEET, SPECIES_EEVEE, SPECIES_SKIDDO, SPECIES_GROWLITHE, SPECIES_ORICORIO, SPECIES_WOOBAT, SPECIES_VOLTORB, SPECIES_RALTS, SPECIES_VULPIX, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_ACRISIA_MOUNTAINS:
        {
            u32 localArray[32] = {SPECIES_SANDSHREW, SPECIES_ROCKRUFF, SPECIES_NOSEPASS, SPECIES_VULLABY, SPECIES_WOOBAT, SPECIES_TIMBURR, SPECIES_ARON, SPECIES_MANKEY, SPECIES_MAWILE, SPECIES_KLAWF, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_RIVERWALK_TRAIL:
        {
            u32 localArray[32] = {SPECIES_ARON, SPECIES_PONYTA, SPECIES_MEDITITE, SPECIES_LITLEO, SPECIES_CUTIEFLY, SPECIES_MUDBRAY, SPECIES_YAMPER, SPECIES_SANDILE, SPECIES_GLIGAR, SPECIES_JANGMO_O, SPECIES_YANMA, SPECIES_CUBCHOO, SPECIES_BUIZEL, SPECIES_WURMPLE, SPECIES_WOOPER, SPECIES_ZIGZAGOON, SPECIES_EKANS, SPECIES_BOUNSWEET, SPECIES_SILCOON, SPECIES_CUFANT, SPECIES_TROPIUS, SPECIES_PUMPKABOO, SPECIES_CASCOON, SPECIES_DREEPY, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_KALAMI_CITY:
        {
            u32 localArray[32] = {SPECIES_BUIZEL, SPECIES_WINGULL, SPECIES_WIMPOD, SPECIES_TOEDSCOOL, SPECIES_LILLIPUP, SPECIES_APPLIN, SPECIES_SHROODLE, SPECIES_MEOWTH, SPECIES_TOTODILE, SPECIES_PASSIMIAN, SPECIES_MURKROW, SPECIES_ORANGURU, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_WANDERERS_WOODS:
        {
            u32 localArray[32] = {SPECIES_SHROOMISH, SPECIES_AIPOM, SPECIES_TOEDSCOOL, SPECIES_WOOPER, SPECIES_PUMPKABOO, SPECIES_APPLIN, SPECIES_POLIWAG, SPECIES_HERACROSS, SPECIES_PICHU, SPECIES_CHIKORITA, SPECIES_BLITZLE, SPECIES_IMPIDIMP, SPECIES_NATU, SPECIES_SHUPPET, SPECIES_TOGEDEMARU, SPECIES_PARAS, SPECIES_MUNNA, SPECIES_RALTS, SPECIES_GOOMY, SPECIES_LILEEP, SPECIES_SCYTHER, SPECIES_DUSKULL, SPECIES_ORICORIO, SPECIES_ANORITH, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_PYTHIOS_TOWN:
        {
            u32 localArray[32] = {SPECIES_RUFFLET, SPECIES_DWEBBLE, SPECIES_MIENFOO, SPECIES_DODUO, SPECIES_DROWZEE, SPECIES_FLITTLE, SPECIES_MEOWTH, SPECIES_WINGULL, SPECIES_HONEDGE, SPECIES_VULLABY, SPECIES_HOOTHOOT, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_ERINYS_PATH:
        {
            u32 localArray[32] = {SPECIES_SANDILE, SPECIES_SOLOSIS, SPECIES_KOMALA, SPECIES_BALTOY, SPECIES_OMANYTE, SPECIES_ZIGZAGOON, SPECIES_ZORUA, SPECIES_MINIOR, SPECIES_TOGEPI, SPECIES_GOTHITA, SPECIES_STANTLER, SPECIES_GASTLY, SPECIES_CHERUBI, SPECIES_FALINKS, SPECIES_ONIX, SPECIES_KABUTO, SPECIES_SPINARAK, SPECIES_HOUNDOUR, SPECIES_MIMIKYU, SPECIES_FOMANTIS, SPECIES_SKORUPI, SPECIES_SALANDIT, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_ASFAL_HILLS:
        {
            u32 localArray[32] = {SPECIES_TAUROS, SPECIES_PAWMI, SPECIES_MEOWTH, SPECIES_PACHIRISU, SPECIES_YAMPER, SPECIES_BUIZEL, SPECIES_CHATOT, SPECIES_DEDENNE, SPECIES_SHROODLE, SPECIES_STUNKY, SPECIES_HAWLUCHA, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_SOFOS_CITY:
        {
            u32 localArray[32] = {SPECIES_WINGULL, SPECIES_SWABLU, SPECIES_CRABRAWLER, SPECIES_HELIOPTILE, SPECIES_COMFEY, SPECIES_PONYTA, SPECIES_CORPHISH, SPECIES_GIRAFARIG, SPECIES_HONEDGE, SPECIES_NOCTOWL, SPECIES_BALTOY, SPECIES_KIRLIA, SPECIES_NATU, SPECIES_MAGIKARP, SPECIES_TENTACOOL, SPECIES_PSYDUCK, SPECIES_CLAUNCHER, SPECIES_FINNEON, SPECIES_WAILMER, SPECIES_CORSOLA, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_KIPOS_TOWN:
        {
            u32 localArray[32] = {SPECIES_MAGNEMITE, SPECIES_EEVEE, SPECIES_IGGLYBUFF, SPECIES_TIMBURR, SPECIES_PIKACHU, SPECIES_STEENEE, SPECIES_DODUO, SPECIES_STANTLER, SPECIES_BEAUTIFLY, SPECIES_STUNKY, SPECIES_PUMPKABOO, SPECIES_DUSTOX, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_SEA_OF_ASTERI:
        {
            u32 localArray[32] = {SPECIES_STUFFUL, SPECIES_FOMANTIS, SPECIES_CRABRAWLER, SPECIES_WATTREL, SPECIES_BELLSPROUT, SPECIES_CHATOT, SPECIES_SCYTHER, SPECIES_DREEPY, SPECIES_EKANS, SPECIES_CUFANT, SPECIES_LINOONE, SPECIES_HERACROSS, SPECIES_RUFFLET, SPECIES_TRUMBEAK, SPECIES_CHARJABUG, SPECIES_NINJASK, SPECIES_CHARCADET, SPECIES_JANGMO_O, SPECIES_VULLABY, SPECIES_SHEDINJA, SPECIES_TOGEPI, SPECIES_CHESPIN, SPECIES_FENNEKIN, SPECIES_FROAKIE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_MARMARO_ISLAND:
        {
            u32 localArray[32] = {SPECIES_DWEBBLE, SPECIES_SWABLU, SPECIES_TINKATINK, SPECIES_MEDITITE, SPECIES_GROWLITHE, SPECIES_SIZZLIPEDE, SPECIES_DEDENNE, SPECIES_LILEEP, SPECIES_ANORITH, SPECIES_ARON, SPECIES_TOGEDEMARU, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_MYRRINI_ISLAND:
        {
            u32 localArray[32] = {SPECIES_MEDITITE, SPECIES_STEENEE, SPECIES_JIGGLYPUFF, SPECIES_PANCHAM, SPECIES_CHERUBI, SPECIES_HAWLUCHA, SPECIES_ORICORIO, SPECIES_DROWZEE, SPECIES_FLOETTE, SPECIES_GOOMY, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_SEA_OF_VULCAI:
        {
            u32 localArray[32] = {SPECIES_FINNEON, SPECIES_REMORAID, SPECIES_WAILMER, SPECIES_SKRELP, SPECIES_CHINCHOU, SPECIES_CORSOLA, SPECIES_CLAMPERL, SPECIES_OCTILLERY, SPECIES_RELICANTH, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_FRESCO_ISLAND:
        {
            u32 localArray[32] = {SPECIES_TRAPINCH, SPECIES_SCRAGGY, SPECIES_GLIGAR, SPECIES_NUMEL, SPECIES_TINKATUFF, SPECIES_DODUO, SPECIES_HELIOPTILE, SPECIES_KROKOROK, SPECIES_SKORUPI, SPECIES_CYCLIZAR, SPECIES_LITLEO, SPECIES_SALANDIT, SPECIES_DREEPY, SPECIES_WOOPER, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_PALATI_CITY:
        {
            u32 localArray[32] = {SPECIES_KLAWF, SPECIES_BALTOY, SPECIES_QUAGSIRE, SPECIES_GIRAFARIG, SPECIES_ARCHEN, SPECIES_PAWMO, SPECIES_TOEDSCOOL, SPECIES_TIMBURR, SPECIES_GURDURR, SPECIES_LYCANROC, SPECIES_CLODSIRE, SPECIES_GRAFAIAI, SPECIES_MUNNA, SPECIES_TOEDSCRUEL, SPECIES_MAGIKARP, SPECIES_TENTACOOL, SPECIES_TIRTOUGA, SPECIES_CLAMPERL, SPECIES_SHELLDER, SPECIES_WAILMER, SPECIES_DHELMISE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_PENTEPETAL_CITY:
        {
            u32 localArray[32] = {SPECIES_FLOETTE, SPECIES_BEAUTIFLY, SPECIES_GRIMER, SPECIES_KIRLIA, SPECIES_COMFEY, SPECIES_MAWILE, SPECIES_LINOONE, SPECIES_DUSTOX, SPECIES_PAWMO, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_KAPTARA_ISLAND:
        {
            u32 localArray[32] = {SPECIES_FOMANTIS, SPECIES_TRUMBEAK, SPECIES_ORANGURU, SPECIES_PASSIMIAN, SPECIES_MORGREM, SPECIES_YANMA, SPECIES_DUOSION, SPECIES_LURANTIS, SPECIES_ALTARIA, SPECIES_REUNICLUS, SPECIES_GOLDUCK, SPECIES_CLAYDOL, SPECIES_ESPATHRA, SPECIES_GOTHORITA, SPECIES_GOTHITELLE, SPECIES_CHARJABUG, SPECIES_SKIPLOOM, SPECIES_WEEPINBELL, SPECIES_TAUROS, SPECIES_GOOMY, SPECIES_PERRSERKER, SPECIES_SLIGGOO, SPECIES_DEDENNE, SPECIES_CHERRIM, SPECIES_DOUBLADE, SPECIES_ARBOK, SPECIES_TOGEDEMARU, SPECIES_SKUNTANK, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_LASTLIGHT_ROAD:
        {
            u32 localArray[32] = {SPECIES_LAMPENT, SPECIES_LITLEO, SPECIES_PONYTA, SPECIES_CHERRIM, SPECIES_HELIOPTILE, SPECIES_MUDBRAY, SPECIES_CYCLIZAR, SPECIES_BRELOOM, SPECIES_PYROAR, SPECIES_PYROAR_F, SPECIES_ARMAROUGE, SPECIES_FLAAFFY, SPECIES_APPLIN, SPECIES_CERULEDGE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_TOWER_OF_DIOXIPPUS:
        {
            u32 localArray[32] = {SPECIES_SWABLU, SPECIES_APPLIN, SPECIES_YANMA, SPECIES_GOOMY, SPECIES_STEENEE, SPECIES_KECLEON, SPECIES_GOGOAT, SPECIES_ALTARIA, SPECIES_FLAPPLE, SPECIES_APPLETUN, SPECIES_DIPPLIN, SPECIES_DREEPY, SPECIES_MAWILE, SPECIES_DRAKLOAK, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_CORRIN_CROSSING:
        {
            u32 localArray[32] = {SPECIES_MAGNEMITE, SPECIES_WEEPINBELL, SPECIES_YANMA, SPECIES_AERODACTYL, SPECIES_BRAVIARY, SPECIES_GOLDUCK, SPECIES_KIRLIA, SPECIES_VICTREEBEL, SPECIES_YANMEGA, SPECIES_TORKOAL, SPECIES_MUNNA, SPECIES_GIRAFARIG, SPECIES_MUSHARNA, SPECIES_FARIGIRAF, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_PORT_PELLO:
        {
            u32 localArray[32] = {SPECIES_TOGETIC, SPECIES_JIGGLYPUFF, SPECIES_LINOONE, SPECIES_PACHIRISU, SPECIES_RIBOMBEE, SPECIES_TROPIUS, SPECIES_RAICHU, SPECIES_CHERRIM, SPECIES_WIGGLYTUFF, SPECIES_RAPIDASH, SPECIES_MORGREM, SPECIES_FLOETTE, SPECIES_MIMIKYU, SPECIES_GRIMMSNARL, SPECIES_FLORGES, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_POLLEN_ROAD:
        {
            u32 localArray[32] = {SPECIES_FLOETTE, SPECIES_SKIPLOOM, SPECIES_ELECTRODE, SPECIES_COMFEY, SPECIES_PACHIRISU, SPECIES_PIKACHU, SPECIES_HAWLUCHA, SPECIES_BRAVIARY, SPECIES_DODRIO, SPECIES_YANMEGA, SPECIES_CHARJABUG, SPECIES_DEDENNE, SPECIES_TOGEDEMARU, SPECIES_ESPATHRA, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
        case MAPSEC_DAVOSI_STRAITS:
        {
            u32 localArray[32] = {SPECIES_MAGIKARP, SPECIES_REMORAID, SPECIES_SHELLDER, SPECIES_FINNEON, SPECIES_OCTILLERY, SPECIES_GOLDUCK, SPECIES_CLOYSTER, SPECIES_GOREBYSS, SPECIES_FINIZEN, SPECIES_SWANNA, SPECIES_DRAGONAIR, SPECIES_DHELMISE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE, SPECIES_NONE};
            for(u8 i=0; i<32; i++) { wildSpeciesArray[i] = localArray[i]; }
            break;
        }
    }

    // Now that the Wild Species Array is filled, we can cycle through it and check if each Pokémon is caught
    // If caught, we simply continue the for loop. If NOT caught, we can stop the for loop right there, set VAR_RESULT
    // to FALSE, and end the function.
    bool8 didCatchMon;
    for (u8 i = 0; i < 32; i++)
    {
        if(wildSpeciesArray[i] == SPECIES_NONE) // skip over the placeholders
        {
            didCatchMon = TRUE;
            continue;
        }
        
        didCatchMon = GetSetPokedexFlag(SpeciesToNationalPokedexNum(wildSpeciesArray[i]), FLAG_GET_CAUGHT);
        if(didCatchMon == FALSE)
        {
            gSpecialVar_Result = FALSE;
            return;
        }
    }

    gSpecialVar_Result = TRUE;

}

// -------------------------------------------------------------------------------------------
//                                     KIPOS TOWN ZOO SPECIALS
// -------------------------------------------------------------------------------------------

void DonateMonToZoo(void)
{
    u16 item = GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_HELD_ITEM); // used to preserve held item and return it to bag
    if (gSaveBlock3Ptr->followerIndex == gSpecialVar_0x8004)
    {
        gSaveBlock3Ptr->followerIndex = OW_FOLLOWER_NOT_SET;
        gFollowerSteps = 0;
    }

    u8 exhibitCompatibility = CheckZooDonationValidity(GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_SPECIES));

    // one last failsafe - cannot donate last Pokémon in party!
    if(CountPartyAliveNonEggMonsExcept(gSpecialVar_0x8004) == 0 || exhibitCompatibility == 0)
    {
        VarSet(VAR_0x8004, PARTY_SIZE); // will check in donation code to see if this happened
        // If VAR_0x8004 is set to PARTY_SIZE, the donation will not be able to go through
    }
    else
    {
        // "Releases" the Pokémon by zeroing all the data associated with it
        ZeroMonData(&gPlayerParty[gSpecialVar_0x8004]);
        CompactPartySlots();
        CalculatePlayerPartyCount();
        UpdateFollowingPokemon();

        // adds old held item to bag
        if (item != ITEM_NONE)
            AddBagItem(item, 1);
    }
}

EWRAM_DATA static u8 sDexHeaderBoxWindowId = 0;
EWRAM_DATA static u8 monSpriteId;

void ShowSpeciesZooInfoWindow(void)
{

    // define bits of strings to add
    static const u8 sTextTheBlank[] = _("The ");
    static const u8 sTextBlankPokemon[] = _(" Pokémon");
    StringCopy(gStringVar2, sTextTheBlank);

    u16 species = VarGet(VAR_0x8003);

    // eff it i wanna draw the pokemon sprite too
    // u8 monSpriteId = 0;
    u8 monSpriteXPosition = 52;
    u8 monSpriteYPosition = 45;
    monSpriteId = CreateMonPicSprite(species, FALSE, 0xFF, TRUE, monSpriteXPosition, monSpriteYPosition, 0, TAG_NONE);
    gSprites[monSpriteId].oam.priority = 0;
    gSprites[monSpriteId].invisible = FALSE;

    // Load information into STR_VAR_1 through 3
    StringCopy(gStringVar1, GetSpeciesName(species));
    StringAppend(gStringVar2, GetSpeciesCategory(species));
    StringAppend(gStringVar2, sTextBlankPokemon);
    StringCopy(gStringVar3, GetSpeciesPokedexDescription(species));

    // Draw window
    struct WindowTemplate template;
    SetWindowTemplateFields(&template, 0, 1, 2, 28, 16, 15, 8);
    sDexHeaderBoxWindowId = AddWindow(&template);
    FillWindowPixelBuffer(sDexHeaderBoxWindowId, PIXEL_FILL(0));
    PutWindowTilemap(sDexHeaderBoxWindowId);
    CopyWindowToVram(sDexHeaderBoxWindowId, 3);
    SetStandardWindowBorderStyle(sDexHeaderBoxWindowId, FALSE);
    DrawStdFrameWithCustomTileAndPalette(sDexHeaderBoxWindowId, FALSE, 0x214, 14);

    // Add text to the window!
    int xPos;
    // Add Species Name
    xPos = GetStringCenterAlignXOffset(FONT_NORMAL, gStringVar1, 290);
    AddTextPrinterParameterized(sDexHeaderBoxWindowId, FONT_NORMAL, gStringVar1, xPos, 12, 0, NULL); // writes species name
    // Add species category
    xPos = GetStringCenterAlignXOffset(FONT_SHORT_NARROW, gStringVar2, 290);
    AddTextPrinterParameterized(sDexHeaderBoxWindowId, FONT_SHORT_NARROW, gStringVar2, xPos, 30, 0, NULL); // writes species category
    // Add species description
    xPos = GetStringCenterAlignXOffsetWithLetterSpacing(FONT_SHORT_NARROW, gStringVar3, 220, 2);
    AddTextPrinterParameterized(sDexHeaderBoxWindowId, FONT_SHORT_NARROW, gStringVar3, xPos, 64, 0, NULL); // writes species pokedex description
}
void CloseSpeciesZooInfoWindow(void)
{
    FreeAndDestroyMonPicSprite(monSpriteId);

    ClearStdWindowAndFrameToTransparent(sDexHeaderBoxWindowId, FALSE);
    CopyWindowToVram(sDexHeaderBoxWindowId, 3);
    RemoveWindow(sDexHeaderBoxWindowId);
}

void GetZooDonationValidity(void)
{
    u8 exhibitCompatibility = CheckZooDonationValidity(GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_SPECIES));
    VarSet(VAR_0x8002, exhibitCompatibility);
}

u8 CheckZooDonationValidity(u16 species)
{
    // Remember, VAR_TEMP_0 is dynamically set in the sign scripts to align with which var should be
    // set (ex: when setting VAR_ZOO_POKEMON_ENCLOSURE_01_1, VAR_TEMP_0 is equal to 1. Based on this,
    // we know that the enclosure is the Forest exhibit, so check if that species works.)

    u16 donationSlotId = VarGet(VAR_TEMP_0);

    // donationSlotId Definitions:
    // 1, 2, 3, 4: Exhibit #1 - Forest
    // 5: Exhibit #2 - Nest
    // 6, 7, 8: Exhibit #3 - Rainforest
    // 9, 10, 11: Exhibit #4 - Suburbs
    // 12, 13: Exhibit #5 - Fungal Swamp
    // 14, 15: Exhibit #6 - Wetlands
    // 16, 17: Exhibit #7 - Beach
    // 18, 19: Exhibit #8 - Desert
    // 20: Exhibit #9 - Lazarus Taxa
    // 21, 22, 23: Exhibit #10 - Mountains
    // 24, 25: Exhibit #11 - Volcano
    // 26, 27: Exhibit #12 - Tundra
    // 28, 29: Exhibit #13 - Ruins
    // 30, 31: Exhibit #14 - Shallows
    // 32, 33, 34: Indoors Exhibit #1 - Warm Water
    // 35, 36: Indoors Exhibit #2 - Gymnasium
    // 37, 38: Indoors Exhibit #3 - Spirit Center
    // 39, 40: Herp. Exhibit #1 - Badlands
    // 41, 42: Herp. Exhibit #2 - Jungle
    // 43, 44: Herp. Exhibit #3 - Mangrove Swamp
    // 45, 46: Herp. Exhibit #4 - Special Bird Encounter!

    u16 sanitizedSpeciesId = SanitizeSpeciesId(species);

    switch(sanitizedSpeciesId)
    {
        case SPECIES_ROWLET:
        case SPECIES_DARTRIX:
        case SPECIES_DECIDUEYE:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 28:
                case 29:
                case 37:
                case 38:
                case 45:
                case 46:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_DECIDUEYE_HISUIAN:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 26:
                case 27:
                case 35:
                case 36:
                case 45:
                case 46:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_LITTEN:
        case SPECIES_TORRACAT:
        case SPECIES_INCINEROAR:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 24:
                case 25:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_POPPLIO:
        case SPECIES_BRIONNE:
        case SPECIES_PRIMARINA:
            switch(donationSlotId)
            {
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_CHESPIN:
        case SPECIES_QUILLADIN:
        case SPECIES_CHESNAUGHT:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 21:
                case 22:
                case 23:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_FENNEKIN:
        case SPECIES_BRAIXEN:
        case SPECIES_DELPHOX:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 18:
                case 19:
                case 24:
                case 25:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_FROAKIE:
        case SPECIES_FROGADIER:
        case SPECIES_GRENINJA:
            switch(donationSlotId)
            {
                case 14:
                case 15:
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 43:
                case 44:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SPRIGATITO:
        case SPECIES_FLORAGATO:
        case SPECIES_MEOWSCARADA:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_FUECOCO:
        case SPECIES_CROCALOR:
        case SPECIES_SKELEDIRGE:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                case 28:
                case 29:
                case 37:
                case 38:
                case 39:
                case 40:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_QUAXLY:
        case SPECIES_QUAXWELL:
        case SPECIES_QUAQUAVAL:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 14:
                case 15:
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 35:
                case 36:
                case 45:
                case 46:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_PANSAGE:
        case SPECIES_SIMISAGE:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_PANSEAR:
        case SPECIES_SIMISEAR:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 18:
                case 19:
                case 24:
                case 25:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_PANPOUR:
        case SPECIES_SIMIPOUR:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 14:
                case 15:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_LILLIPUP:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 9:
                case 10:
                case 11:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_HERDIER:
        case SPECIES_STOUTLAND:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 9:
                case 10:
                case 11:
                case 21:
                case 22:
                case 23:
                case 26:
                case 27:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_PIKIPEK:
        case SPECIES_TRUMBEAK:
        case SPECIES_TOUCANNON:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 16:
                case 17:
                case 45:
                case 46:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_DUCKLETT:
        case SPECIES_SWANNA:
            switch(donationSlotId)
            {
                case 9:
                case 10:
                case 11:
                case 14:
                case 15:
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 45:
                case 46:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_HOPPIP:
        case SPECIES_SKIPLOOM:
        case SPECIES_JUMPLUFF:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 9:
                case 10:
                case 11:
                case 21:
                case 22:
                case 23:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_NINCADA:
        case SPECIES_NINJASK:
        case SPECIES_SHEDINJA:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 12:
                case 13:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_GRUBBIN:
        case SPECIES_CHARJABUG:
        case SPECIES_VIKAVOLT:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 12:
                case 13:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_PARAS:
        case SPECIES_PARASECT:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 12:
                case 13:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_PHANPY:
        case SPECIES_DONPHAN:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SNOM:
        case SPECIES_FROSMOTH:
            switch(donationSlotId)
            {
                case 12:
                case 13:
                case 26:
                case 27:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_CUBONE:
        case SPECIES_MAROWAK:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_MAROWAK_ALOLAN:
            switch(donationSlotId)
            {
                case 6:
                case 7:
                case 8:
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_MUDBRAY:
        case SPECIES_MUDSDALE:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 9:
                case 10:
                case 11:
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_MAREEP:
        case SPECIES_FLAAFFY:
        case SPECIES_AMPHAROS:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 9:
                case 10:
                case 11:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_APPLIN:
        case SPECIES_FLAPPLE:
        case SPECIES_APPLETUN:
        case SPECIES_DIPPLIN:
        case SPECIES_HYDRAPPLE:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 41:
                case 42:
                case 43:
                case 44:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_CUTIEFLY:
        case SPECIES_RIBOMBEE:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 12:
                case 13:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_GRIMER:
        case SPECIES_GRIMER_ALOLAN:
        case SPECIES_MUK:
        case SPECIES_MUK_ALOLAN:
            switch(donationSlotId)
            {
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 24:
                case 25:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_WURMPLE:
        case SPECIES_SILCOON:
        case SPECIES_BEAUTIFLY:
        case SPECIES_CASCOON:
        case SPECIES_DUSTOX:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_TROPIUS:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 41:
                case 42:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_RALTS:
        case SPECIES_KIRLIA:
        case SPECIES_GARDEVOIR:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 9:
                case 10:
                case 11:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_GALLADE:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 9:
                case 10:
                case 11:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
        case SPECIES_EEVEE:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 9:
                case 10:
                case 11:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_VAPOREON:
            switch(donationSlotId)
            {
                case 9:
                case 10:
                case 11:
                case 14:
                case 15:
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_JOLTEON:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 9:
                case 10:
                case 11:
                case 18:
                case 19:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_FLAREON:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 9:
                case 10:
                case 11:
                case 24:
                case 25:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_ESPEON:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 9:
                case 10:
                case 11:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_UMBREON:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_LEAFEON:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_GLACEON:
            switch(donationSlotId)
            {
                case 9:
                case 10:
                case 11:
                case 26:
                case 27:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SYLVEON:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 9:
                case 10:
                case 11:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SKIDDO:
        case SPECIES_GOGOAT:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 9:
                case 10:
                case 11:
                case 21:
                case 22:
                case 23:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_MURKROW:
        case SPECIES_HONCHKROW:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 28:
                case 29:
                case 37:
                case 38:
                case 45:
                case 46:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_ORICORIO:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 16:
                case 17:
                case 45:
                case 46:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_ORICORIO_POM_POM:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 16:
                case 17:
                case 45:
                case 46:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_ORICORIO_PAU:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 16:
                case 17:
                case 28:
                case 29:
                case 37:
                case 38:
                case 45:
                case 46:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_ORICORIO_SENSU:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 16:
                case 17:
                case 28:
                case 29:
                case 37:
                case 38:
                case 45:
                case 46:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SANDSHREW:
        case SPECIES_SANDSLASH:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SANDSHREW_ALOLAN:
        case SPECIES_SANDSLASH_ALOLAN:
            switch(donationSlotId)
            {
                case 21:
                case 22:
                case 23:
                case 26:
                case 27:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SANDILE:
        case SPECIES_KROKOROK:
        case SPECIES_KROOKODILE:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                case 35:
                case 36:
                case 39:
                case 40:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_NOSEPASS:
        case SPECIES_PROBOPASS:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_MAWILE:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_ROCKRUFF:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 9:
                case 10:
                case 11:
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_LYCANROC:
        case SPECIES_LYCANROC_MIDNIGHT:
        case SPECIES_LYCANROC_DUSK:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_VULLABY:
        case SPECIES_MANDIBUZZ:
            switch(donationSlotId)
            {
                case 5:
                case 12:
                case 13:
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 28:
                case 29:
                case 37:
                case 38:
                case 45:
                case 46:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_WOOBAT:
        case SPECIES_SWOOBAT:
            switch(donationSlotId)
            {
                case 12:
                case 13:
                case 21:
                case 22:
                case 23:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_ARON:
        case SPECIES_LAIRON:
        case SPECIES_AGGRON:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_TIMBURR:
        case SPECIES_GURDURR:
        case SPECIES_CONKELDURR:
            switch(donationSlotId)
            {
                case 9:
                case 10:
                case 11:
                case 21:
                case 22:
                case 23:
                case 26:
                case 27:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_KLAWF:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_POLIWAG:
        case SPECIES_POLIWHIRL:
        case SPECIES_POLIWRATH:
        case SPECIES_POLITOED:
            switch(donationSlotId)
            {
                case 14:
                case 15:
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 43:
                case 44:
                    return 1;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_PUMPKABOO:
        case SPECIES_PUMPKABOO_SMALL:
        case SPECIES_PUMPKABOO_LARGE:
        case SPECIES_PUMPKABOO_SUPER:
        case SPECIES_GOURGEIST:
        case SPECIES_GOURGEIST_SMALL:
        case SPECIES_GOURGEIST_LARGE:
        case SPECIES_GOURGEIST_SUPER:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 12:
                case 13:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SHROOMISH:
        case SPECIES_BRELOOM:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 12:
                case 13:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_HERACROSS:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 21:
                case 22:
                case 23:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SHUPPET:
        case SPECIES_BANETTE:
            switch(donationSlotId)
            {
                case 9:
                case 10:
                case 11:
                case 26:
                case 27:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_AIPOM:
        case SPECIES_AMBIPOM:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_BOUNSWEET:
        case SPECIES_STEENEE:
        case SPECIES_TSAREENA:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_WOOPER:
        case SPECIES_QUAGSIRE:
            switch(donationSlotId)
            {
                case 14:
                case 15:
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 43:
                case 44:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_WOOPER_PALDEAN:
        case SPECIES_CLODSIRE:
            switch(donationSlotId)
            {
                case 12:
                case 13:
                case 14:
                case 15:
                case 16:
                case 17:
                case 43:
                case 44:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_TOEDSCOOL:
        case SPECIES_TOEDSCRUEL:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 12:
                case 13:
                case 14:
                case 15:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_BLITZLE:
        case SPECIES_ZEBSTRIKA:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 18:
                case 19:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_HOOTHOOT:
        case SPECIES_NOCTOWL:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 21:
                case 22:
                case 23:
                case 26:
                case 27:
                case 28:
                case 29:
                case 37:
                case 38:
                case 45:
                case 46:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_MIENFOO:
        case SPECIES_MIENSHAO:
            switch(donationSlotId)
            {
                case 9:
                case 10:
                case 11:
                case 21:
                case 22:
                case 23:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_FLITTLE:
        case SPECIES_ESPATHRA:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 9:
                case 10:
                case 11:
                case 18:
                case 19:
                case 28:
                case 29:
                case 37:
                case 38:
                case 45:
                case 46:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_VULPIX:
        case SPECIES_NINETALES:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 24:
                case 25:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_VULPIX_ALOLAN:
        case SPECIES_NINETALES_ALOLAN:
            switch(donationSlotId)
            {
                case 5:
                case 26:
                case 27:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_HONEDGE:
        case SPECIES_DOUBLADE:
        case SPECIES_AEGISLASH:
            switch(donationSlotId)
            {
                case 21:
                case 22:
                case 23:
                case 28:
                case 29:
                case 35:
                case 36:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_DWEBBLE:
        case SPECIES_CRUSTLE:
            switch(donationSlotId)
            {
                case 12:
                case 13:
                case 16:
                case 17:
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_MINIOR_ORANGE:
        case SPECIES_MINIOR_YELLOW:
        case SPECIES_MINIOR_GREEN:
        case SPECIES_MINIOR_BLUE:
        case SPECIES_MINIOR_INDIGO:
        case SPECIES_MINIOR_VIOLET:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_GASTLY:
        case SPECIES_HAUNTER:
        case SPECIES_GENGAR:
            switch(donationSlotId)
            {
                case 12:
                case 13:
                case 24:
                case 25:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_BALTOY:
        case SPECIES_CLAYDOL:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SALANDIT:
        case SPECIES_SALAZZLE:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 24:
                case 25:
                case 39:
                case 40:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_FINIZEN:
        case SPECIES_PALAFIN:
            switch(donationSlotId)
            {
                case 14:
                case 15:
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_TOGEPI:
        case SPECIES_TOGETIC:
        case SPECIES_TOGEKISS:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 9:
                case 10:
                case 11:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_CHERUBI:
        case SPECIES_CHERRIM:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_HOUNDOUR:
        case SPECIES_HOUNDOOM:
            switch(donationSlotId)
            {
                case 9:
                case 10:
                case 11:
                case 18:
                case 19:
                case 24:
                case 25:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_OMANYTE:
        case SPECIES_OMASTAR:
            switch(donationSlotId)
            {
                case 14:
                case 15:
                case 16:
                case 17:
                case 20:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_KABUTO:
        case SPECIES_KABUTOPS:
            switch(donationSlotId)
            {
                case 14:
                case 15:
                case 16:
                case 17:
                case 20:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SKORUPI:
        case SPECIES_DRAPION:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 12:
                case 13:
                case 14:
                case 15:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SPINARAK:
        case SPECIES_ARIADOS:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 12:
                case 13:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_ONIX:
        case SPECIES_STEELIX:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                case 39:
                case 40:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_KOMALA:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_WINGULL:
        case SPECIES_PELIPPER:
            switch(donationSlotId)
            {
                case 9:
                case 10:
                case 11:
                case 14:
                case 15:
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 45:
                case 46:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_STANTLER:
        case SPECIES_WYRDEER:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 21:
                case 22:
                case 23:
                case 26:
                case 27:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SNORUNT:
        case SPECIES_GLALIE:
        case SPECIES_FROSLASS:
            switch(donationSlotId)
            {
                case 26:
                case 27:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SPHEAL:
        case SPECIES_SEALEO:
        case SPECIES_WALREIN:
            switch(donationSlotId)
            {
                case 16:
                case 17:
                case 26:
                case 27:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SEEL:
        case SPECIES_DEWGONG:
            switch(donationSlotId)
            {
                case 16:
                case 17:
                case 26:
                case 27:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_BRONZOR:
        case SPECIES_BRONZONG:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_CUFANT:
        case SPECIES_COPPERAJAH:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 21:
                case 22:
                case 23:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_ZORUA:
        case SPECIES_ZOROARK:
            switch(donationSlotId)
            {
                case 12:
                case 13:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_ZORUA_HISUIAN:
        case SPECIES_ZOROARK_HISUIAN:
            switch(donationSlotId)
            {
                case 12:
                case 13:
                case 26:
                case 27:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SNEASEL:
        case SPECIES_WEAVILE:
            switch(donationSlotId)
            {
                case 26:
                case 27:
                case 28:
                case 29:
                case 35:
                case 36:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SNEASEL_HISUIAN:
        case SPECIES_SNEASLER:
            switch(donationSlotId)
            {
                case 12:
                case 13:
                case 21:
                case 22:
                case 23:
                case 26:
                case 27:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_TYRUNT:
        case SPECIES_TYRANTRUM:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 20:
                case 21:
                case 22:
                case 23:
                case 39:
                case 40:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_AMAURA:
        case SPECIES_AURORUS:
            switch(donationSlotId)
            {
                case 20:
                case 26:
                case 27:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_MEOWTH:
        case SPECIES_PERSIAN:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 9:
                case 10:
                case 11:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_MEOWTH_ALOLAN:
        case SPECIES_PERSIAN_ALOLAN:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 9:
                case 10:
                case 11:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_MEOWTH_GALARIAN:
        case SPECIES_PERRSERKER:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 21:
                case 22:
                case 23:
                case 26:
                case 27:
                case 30:
                case 31:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_PACHIRISU:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 9:
                case 10:
                case 11:
                case 26:
                case 27:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_CHIKORITA:
        case SPECIES_BAYLEEF:
        case SPECIES_MEGANIUM:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 41:
                case 42:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_CYNDAQUIL:
        case SPECIES_QUILAVA:
        case SPECIES_TYPHLOSION:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_TYPHLOSION_HISUIAN:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_TOTODILE:
        case SPECIES_CROCONAW:
        case SPECIES_FERALIGATR:
            switch(donationSlotId)
            {
                case 14:
                case 15:
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 43:
                case 44:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_JANGMO_O:
        case SPECIES_HAKAMO_O:
        case SPECIES_KOMMO_O:
            switch(donationSlotId)
            {
                case 6:
                case 7:
                case 8:
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 35:
                case 36:
                case 39:
                case 40:
                case 41:
                case 42:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_HAWLUCHA:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 9:
                case 10:
                case 11:
                case 21:
                case 22:
                case 23:
                case 35:
                case 36:
                case 45:
                case 46:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SIZZLIPEDE:
        case SPECIES_CENTISKORCH:
            switch(donationSlotId)
            {
                case 12:
                case 13:
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_CRANIDOS:
        case SPECIES_RAMPARDOS:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 20:
                case 21:
                case 22:
                case 23:
                case 41:
                case 42:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SHIELDON:
        case SPECIES_BASTIODON:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 20:
                case 21:
                case 22:
                case 23:
                case 41:
                case 42:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SPIRITOMB:
            switch(donationSlotId)
            {
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_YAMPER:
        case SPECIES_BOLTUND:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 9:
                case 10:
                case 11:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_PAWMI:
        case SPECIES_PAWMO:
        case SPECIES_PAWMOT:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 21:
                case 22:
                case 23:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SHROODLE:
        case SPECIES_GRAFAIAI:
            switch(donationSlotId)
            {
                case 5:
                case 6:
                case 7:
                case 8:
                case 12:
                case 13:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_BUIZEL:
        case SPECIES_FLOATZEL:
            switch(donationSlotId)
            {
                case 5:
                case 14:
                case 15:
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_STUNKY:
        case SPECIES_SKUNTANK:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 12:
                case 13:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_CORSOLA:
            switch(donationSlotId)
            {
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_CORSOLA_GALARIAN:
        case SPECIES_CURSOLA:
            switch(donationSlotId)
            {
                case 16:
                case 17:
                case 28:
                case 29:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_FINNEON:
        case SPECIES_LUMINEON:
            switch(donationSlotId)
            {
                case 14:
                case 15:
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_WAILMER:
        case SPECIES_WAILORD:
            switch(donationSlotId)
            {
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_WATTREL:
        case SPECIES_KILOWATTREL:
            switch(donationSlotId)
            {
                case 5:
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 45:
                case 46:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_TAUROS:
        case SPECIES_TAUROS_PALDEA_AQUA:
        case SPECIES_TAUROS_PALDEA_BLAZE:
        case SPECIES_TAUROS_PALDEA_COMBAT:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 21:
                case 22:
                case 23:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_CYCLIZAR:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 9:
                case 10:
                case 11:
                case 41:
                case 42:
                case 43:
                case 44:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_WIMPOD:
        case SPECIES_GOLISOPOD:
            switch(donationSlotId)
            {
                case 14:
                case 15:
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_PICHU:
        case SPECIES_PIKACHU:
        case SPECIES_RAICHU:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 9:
                case 10:
                case 11:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_RAICHU_ALOLAN:
            switch(donationSlotId)
            {
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 14:
                case 15:
                case 16:
                case 17:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
        case SPECIES_MIMIKYU:
            switch(donationSlotId)
            {
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_PONYTA:
        case SPECIES_RAPIDASH:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 9:
                case 10:
                case 11:
                case 24:
                case 25:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_PONYTA_GALARIAN:
        case SPECIES_RAPIDASH_GALARIAN:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 9:
                case 10:
                case 11:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_TENTACOOL:
        case SPECIES_TENTACRUEL:
            switch(donationSlotId)
            {
                case 14:
                case 15:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_CLAUNCHER:
        case SPECIES_CLAWITZER:
            switch(donationSlotId)
            {
                case 14:
                case 15:
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SCYTHER:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 12:
                case 13:
                case 21:
                case 22:
                case 23:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SCIZOR:
        case SPECIES_KLEAVOR:
            switch(donationSlotId)
            {
                case 6:
                case 7:
                case 8:
                case 12:
                case 13:
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_STUFFUL:
        case SPECIES_BEWEAR:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_DREEPY:
        case SPECIES_DRAKLOAK:
        case SPECIES_DRAGAPULT:
            switch(donationSlotId)
            {
                case 5:
                case 12:
                case 13:
                case 14:
                case 15:
                case 16:
                case 17:
                case 28:
                case 29:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 37:
                case 38:
                case 43:
                case 44:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_TOGEDEMARU:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 21:
                case 22:
                case 23:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_CRABRAWLER:
            switch(donationSlotId)
            {
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_CRABOMINABLE:
            switch(donationSlotId)
            {
                case 16:
                case 17:
                case 21:
                case 22:
                case 23:
                case 26:
                case 27:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_LILEEP:
        case SPECIES_CRADILY:
            switch(donationSlotId)
            {
                case 6:
                case 7:
                case 8:
                case 12:
                case 13:
                case 14:
                case 15:
                case 20:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_ANORITH:
        case SPECIES_ARMALDO:
            switch(donationSlotId)
            {
                case 6:
                case 7:
                case 8:
                case 12:
                case 13:
                case 14:
                case 15:
                case 20:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_DEDENNE:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 9:
                case 10:
                case 11:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_CHATOT:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 16:
                case 17:
                case 45:
                case 46:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_MEDITITE:
        case SPECIES_MEDICHAM:
            switch(donationSlotId)
            {
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 21:
                case 22:
                case 23:
                case 28:
                case 29:
                case 35:
                case 36:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_DROWZEE:
        case SPECIES_HYPNO:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_EKANS:
        case SPECIES_ARBOK:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 12:
                case 13:
                case 41:
                case 42:
                case 43:
                case 44:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_BASCULIN:
        case SPECIES_BASCULIN_BLUE_STRIPED:
        case SPECIES_BASCULIN_WHITE_STRIPED:
        case SPECIES_BASCULEGION:
        case SPECIES_BASCULEGION_FEMALE:
            switch(donationSlotId)
            {
                case 14:
                case 15:
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_PANCHAM:
        case SPECIES_PANGORO:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 21:
                case 22:
                case 23:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_GOTHITA:
        case SPECIES_GOTHORITA:
        case SPECIES_GOTHITELLE:
            switch(donationSlotId)
            {
                case 9:
                case 10:
                case 11:
                case 26:
                case 27:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SOLOSIS:
        case SPECIES_DUOSION:
        case SPECIES_REUNICLUS:
            switch(donationSlotId)
            {
                case 9:
                case 10:
                case 11:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_LITWICK:
        case SPECIES_LAMPENT:
        case SPECIES_CHANDELURE:
            switch(donationSlotId)
            {
                case 24:
                case 25:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_CHARCADET:
        case SPECIES_ARMAROUGE:
        case SPECIES_CERULEDGE:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                case 28:
                case 29:
                case 35:
                case 36:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SKRELP:
        case SPECIES_DRAGALGE:
            switch(donationSlotId)
            {
                case 14:
                case 15:
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_CHINCHOU:
        case SPECIES_LANTURN:
            switch(donationSlotId)
            {
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SHELLDER:
        case SPECIES_CLOYSTER:
            switch(donationSlotId)
            {
                case 16:
                case 17:
                case 26:
                case 27:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_CLAMPERL:
        case SPECIES_HUNTAIL:
        case SPECIES_GOREBYSS:
            switch(donationSlotId)
            {
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_FLABEBE:
        case SPECIES_FLABEBE_YELLOW_FLOWER:
        case SPECIES_FLABEBE_ORANGE_FLOWER:
        case SPECIES_FLABEBE_BLUE_FLOWER:
        case SPECIES_FLABEBE_WHITE_FLOWER:
        case SPECIES_FLOETTE:
        case SPECIES_FLOETTE_YELLOW_FLOWER:
        case SPECIES_FLOETTE_ORANGE_FLOWER:
        case SPECIES_FLOETTE_BLUE_FLOWER:
        case SPECIES_FLOETTE_WHITE_FLOWER:
        case SPECIES_FLORGES:
        case SPECIES_FLORGES_YELLOW_FLOWER:
        case SPECIES_FLORGES_ORANGE_FLOWER:
        case SPECIES_FLORGES_BLUE_FLOWER:
        case SPECIES_FLORGES_WHITE_FLOWER:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 9:
                case 10:
                case 11:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_IGGLYBUFF:
        case SPECIES_JIGGLYPUFF:
        case SPECIES_WIGGLYTUFF:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_HELIOPTILE:
        case SPECIES_HELIOLISK:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 39:
                case 40:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_FALINKS:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_TRAPINCH:
        case SPECIES_VIBRAVA:
        case SPECIES_FLYGON:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_DODUO:
        case SPECIES_DODRIO:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 16:
                case 17:
                case 18:
                case 19:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_TINKATINK:
        case SPECIES_TINKATUFF:
        case SPECIES_TINKATON:
            switch(donationSlotId)
            {
                case 9:
                case 10:
                case 11:
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SCRAGGY:
        case SPECIES_SCRAFTY:
            switch(donationSlotId)
            {
                case 9:
                case 10:
                case 11:
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 35:
                case 36:
                case 39:
                case 40:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_GLIGAR:
        case SPECIES_GLISCOR:
            switch(donationSlotId)
            {
                case 12:
                case 13:
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_TORKOAL:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                case 39:
                case 40:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_NUMEL:
        case SPECIES_CAMERUPT:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_RELICANTH:
            switch(donationSlotId)
            {
                case 20:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_BARBOACH:
        case SPECIES_WHISCASH:
            switch(donationSlotId)
            {
                case 14:
                case 15:
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_MUNNA:
        case SPECIES_MUSHARNA:
            switch(donationSlotId)
            {
                case 9:
                case 10:
                case 11:
                case 21:
                case 22:
                case 23:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_KECLEON:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 41:
                case 42:
                case 43:
                case 44:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_MAGIKARP:
        case SPECIES_GYARADOS:
            switch(donationSlotId)
            {
                case 14:
                case 15:
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_FOMANTIS:
        case SPECIES_LURANTIS:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 14:
                case 15:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_ORANGURU:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_PASSIMIAN:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_ZIGZAGOON:
        case SPECIES_LINOONE:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 9:
                case 10:
                case 11:
                case 21:
                case 22:
                case 23:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_ZIGZAGOON_GALARIAN:
        case SPECIES_LINOONE_GALARIAN:
        case SPECIES_OBSTAGOON:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 12:
                case 13:
                case 21:
                case 22:
                case 23:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_GOOMY:
        case SPECIES_SLIGGOO:
        case SPECIES_GOODRA:
        case SPECIES_SLIGGOO_HISUIAN:
        case SPECIES_GOODRA_HISUIAN:
            switch(donationSlotId)
            {
                case 6:
                case 7:
                case 8:
                case 12:
                case 13:
                case 14:
                case 15:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_BRUXISH:
            switch(donationSlotId)
            {
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_IMPIDIMP:
        case SPECIES_MORGREM:
        case SPECIES_GRIMMSNARL:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 12:
                case 13:
                case 28:
                case 29:
                case 35:
                case 36:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SWABLU:
        case SPECIES_ALTARIA:
            switch(donationSlotId)
            {
                case 5:
                case 9:
                case 10:
                case 11:
                case 21:
                case 22:
                case 23:
                case 45:
                case 46:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_MANKEY:
        case SPECIES_PRIMEAPE:
        case SPECIES_ANNIHILAPE:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 21:
                case 22:
                case 23:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_VOLTORB:
        case SPECIES_ELECTRODE:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_VOLTORB_HISUIAN:
        case SPECIES_ELECTRODE_HISUIAN:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 21:
                case 22:
                case 23:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_LAPRAS:
            switch(donationSlotId)
            {
                case 26:
                case 27:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_GIRAFARIG:
        case SPECIES_FARIGIRAF:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 21:
                case 22:
                case 23:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_BELLSPROUT:
        case SPECIES_WEEPINBELL:
        case SPECIES_VICTREEBEL:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 12:
                case 13:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_MAGNEMITE:
        case SPECIES_MAGNETON:
        case SPECIES_MAGNEZONE:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_CUBCHOO:
        case SPECIES_BEARTIC:
            switch(donationSlotId)
            {
                case 21:
                case 22:
                case 23:
                case 26:
                case 27:
                case 35:
                case 36:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_GROWLITHE:
        case SPECIES_ARCANINE:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 9:
                case 10:
                case 11:
                case 24:
                case 25:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_GROWLITHE_HISUIAN:
        case SPECIES_ARCANINE_HISUIAN:
            switch(donationSlotId)
            {
                case 5:
                case 9:
                case 10:
                case 11:
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_PSYDUCK:
        case SPECIES_GOLDUCK:
            switch(donationSlotId)
            {
                case 5:
                case 14:
                case 15:
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_YANMA:
        case SPECIES_YANMEGA:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 12:
                case 13:
                case 14:
                case 15:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_AERODACTYL:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 20:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                case 39:
                case 40:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_REMORAID:
        case SPECIES_OCTILLERY:
            switch(donationSlotId)
            {
                case 14:
                case 15:
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_RUFFLET:
        case SPECIES_BRAVIARY:
        case SPECIES_BRAVIARY_HISUIAN:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 14:
                case 15:
                case 21:
                case 22:
                case 23:
                case 26:
                case 27:
                case 45:
                case 46:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_LITLEO:
        case SPECIES_PYROAR:
        case SPECIES_PYROAR_F:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 18:
                case 19:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_NATU:
        case SPECIES_XATU:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 18:
                case 19:
                case 28:
                case 29:
                case 37:
                case 38:
                case 45:
                case 46:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SNOVER:
        case SPECIES_ABOMASNOW:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 26:
                case 27:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_DUSKULL:
        case SPECIES_DUSCLOPS:
        case SPECIES_DUSKNOIR:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_SWINUB:
        case SPECIES_PILOSWINE:
        case SPECIES_MAMOSWINE:
            switch(donationSlotId)
            {
                case 5:
                case 21:
                case 22:
                case 23:
                case 26:
                case 27:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_CORPHISH:
        case SPECIES_CRAWDAUNT:
            switch(donationSlotId)
            {
                case 14:
                case 15:
                case 16:
                case 17:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_COMFEY:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 16:
                case 17:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_UNOWN:
        case SPECIES_UNOWN_B:
        case SPECIES_UNOWN_C:
        case SPECIES_UNOWN_D:
        case SPECIES_UNOWN_E:
        case SPECIES_UNOWN_F:
        case SPECIES_UNOWN_G:
        case SPECIES_UNOWN_H:
        case SPECIES_UNOWN_I:
        case SPECIES_UNOWN_J:
        case SPECIES_UNOWN_K:
        case SPECIES_UNOWN_L:
        case SPECIES_UNOWN_M:
        case SPECIES_UNOWN_N:
        case SPECIES_UNOWN_O:
        case SPECIES_UNOWN_P:
        case SPECIES_UNOWN_Q:
        case SPECIES_UNOWN_R:
        case SPECIES_UNOWN_S:
        case SPECIES_UNOWN_T:
        case SPECIES_UNOWN_U:
        case SPECIES_UNOWN_V:
        case SPECIES_UNOWN_W:
        case SPECIES_UNOWN_X:
        case SPECIES_UNOWN_Y:
        case SPECIES_UNOWN_Z:
        case SPECIES_UNOWN_EMARK:
        case SPECIES_UNOWN_QMARK:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 28:
                case 29:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_TIRTOUGA:
        case SPECIES_CARRACOSTA:
            switch(donationSlotId)
            {
                case 14:
                case 15:
                case 16:
                case 17:
                case 20:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 43:
                case 44:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_ARCHEN:
        case SPECIES_ARCHEOPS:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 20:
                case 41:
                case 42:
                case 45:
                case 46:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_DRACOZOLT:
            switch(donationSlotId)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 20:
                case 41:
                case 42:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_ARCTOZOLT:
            switch(donationSlotId)
            {
                case 20:
                case 26:
                case 27:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_DRACOVISH:
            switch(donationSlotId)
            {
                case 14:
                case 15:
                case 20:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 43:
                case 44:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_ARCTOVISH:
            switch(donationSlotId)
            {
                case 14:
                case 15:
                case 20:
                case 30:
                case 31:
                case 43:
                case 44:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_LARVITAR:
        case SPECIES_PUPITAR:
        case SPECIES_TYRANITAR:
            switch(donationSlotId)
            {
                case 18:
                case 19:
                case 21:
                case 22:
                case 23:
                case 39:
                case 40:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_DHELMISE:
            switch(donationSlotId)
            {
                case 16:
                case 17:
                case 28:
                case 29:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 37:
                case 38:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        case SPECIES_DRATINI:
        case SPECIES_DRAGONAIR:
        case SPECIES_DRAGONITE:
            switch(donationSlotId)
            {
                case 5:
                case 14:
                case 15:
                case 21:
                case 22:
                case 23:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 43:
                case 44:
                    return 1;
                    break;
                default:
                    return 0;
                    break;
            }
            break;
        default:
            return 0; // failsafe: couldn't find info on species, so reject donation
            break;
    }
    return 0;
}

// -------------------------------------------------------------------------------------------
//                                   KIPOS ZOO - UPDATE GRAPHICS
// -------------------------------------------------------------------------------------------

void UpdateZooGraphics_South(void) // updates pokemon gfx in KiposTown_Zoo (south portion of zoo)
{
    u16 speciesGraphics;

    // Species 1 - Pokémon #1 in Enclosure #1 (Forest)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_01_1) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_01);
        // VarSet(VAR_OBJ_GFX_ID_0, VarGet(VAR_ZOO_POKEMON_ENCLOSURE_01_1) + OBJ_EVENT_GFX_SPECIES(NONE)/* + shinyTag*/);

        // // oricorio form check
        // if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_01_1) >= 1169 && VarGet(VAR_ZOO_POKEMON_ENCLOSURE_01_1) <= 1171)
        //     speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_01_1));
        // else
        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_01_1)) & OBJ_EVENT_GFX_SPECIES_MASK;

        VarSet(VAR_OBJ_GFX_ID_0, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_01);
    }

    // Species 2 - Pokémon #2 in Enclosure #1 (Forest)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_01_2) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_02);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_01_2)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_1, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_02);
    }

    // Species 3 - Pokémon #3 in Enclosure #1 (Forest)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_01_3) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_03);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_01_3)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_2, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_03);
    }

    // Species 4 - Pokémon #4 in Enclosure #1 (Forest)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_01_4) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_04);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_01_4)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_3, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_04);
    }

    // Species 5 - Pokémon #1 in Enclosure #2 (Nest)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_02_1) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_05);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_02_1)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_4, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_05);
    }

    // Species 6 - Pokémon #1 in Enclosure #3 (Rainforest)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_03_1) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_06);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_03_1)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_5, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_06);
    }

    // Species 7 - Pokémon #2 in Enclosure #3 (Rainforest)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_03_2) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_07);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_03_2)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_6, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_07);
    }

    // Species 8 - Pokémon #3 in Enclosure #3 (Rainforest)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_03_3) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_08);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_03_3)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_7, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_08);
    }

    // Species 9 - Pokémon #1 in Enclosure #4 (Suburbs)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_04_1) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_09);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_04_1)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_8, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_09);
    }

    // Species 10 - Pokémon #2 in Enclosure #4 (Suburbs)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_04_2) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_10);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_04_2)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_9, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_10);
    }

    // Species 11 - Pokémon #3 in Enclosure #4 (Suburbs)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_04_3) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_11);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_04_3)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_A, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_11);
    }

    // Species 12 - Pokémon #1 in Enclosure #5 (Fungal Swamp)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_05_1) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_12);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_05_1)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_B, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_12);
    }

    // Species 13 - Pokémon #2 in Enclosure #5 (Fungal Swamp)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_05_2) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_13);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_05_2)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_C, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_13);
    }

    // Species 14 - Pokémon #1 in Enclosure #6 (Wetlands)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_06_1) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_14);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_06_1)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_D, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_14);
    }

    // Species 15 - Pokémon #2 in Enclosure #6 (Wetlands)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_06_2) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_15);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_06_2)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_E, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_15);
    }
}

void UpdateZooGraphics_North(void)
{
    u16 speciesGraphics;

    // Species 1 - Pokémon #1 in Enclosure #7 (Beach)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_07_1) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_01);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_07_1)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_0, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_01);
    }

    // Species 2 - Pokémon #2 in Enclosure #7 (Beach)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_07_2) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_02);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_07_2)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_1, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_02);
    }

    // Species 3 - Pokémon #1 in Enclosure #8 (Desert)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_08_1) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_03);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_08_1)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_2, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_03);
    }

    // Species 4 - Pokémon #2 in Enclosure #8 (Desert)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_08_2) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_04);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_08_2)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_3, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_04);
    }

    // Species 5 - Pokémon #1 in Enclosure #9 (Lazarus Taxa)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_09_1) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_05);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_09_1)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_4, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_05);
    }

    // Species 6 - Pokémon #1 in Enclosure #10 (Mountains)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_10_1) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_06);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_10_1)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_5, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_06);
    }

    // Species 7 - Pokémon #2 in Enclosure #10 (Mountains)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_10_2) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_07);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_10_2)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_6, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_07);
    }

    // Species 8 - Pokémon #3 in Enclosure #10 (Mountains)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_10_3) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_08);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_10_3)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_7, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_08);
    }

    // Species 9 - Pokémon #1 in Enclosure #11 (Volcano)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_11_1) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_09);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_11_1)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_8, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_09);
    }

    // Species 10 - Pokémon #2 in Enclosure #11 (Volcano)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_11_2) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_10);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_11_2)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_9, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_10);
    }

    // Species 11 - Pokémon #1 in Enclosure #12 (Tundra)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_12_1) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_11);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_12_1)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_A, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_11);
    }

    // Species 12 - Pokémon #2 in Enclosure #12 (Tundra)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_12_2) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_12);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_12_2)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_B, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_12);
    }

    // Species 13 - Pokémon #1 in Enclosure #13 (Ruins)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_13_1) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_13);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_13_1)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_C, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_13);
    }

    // Species 14 - Pokémon #2 in Enclosure #13 (Ruins)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_13_2) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_14);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_13_2)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_D, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_14);
    }

    // Species 15 - Pokémon #1 in Enclosure #14 (Shallows)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_14_1) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_15);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_14_1)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_E, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_15);
    }

    // Species 16 - Pokémon #2 in Enclosure #14 (Shallows)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_14_2) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_16);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_14_2)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_F, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_16);
    }
}

void UpdateZooGraphics_SpecialtyBuilding(void)
{
    u16 speciesGraphics;

    // Species 1 - Pokémon #1 in Indoor Enclosure #1 (Warm Water)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_IN_01_1) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_01);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_IN_01_1)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_0, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_01);
    }

    // Species 2 - Pokémon #2 in Indoor Enclosure #1 (Warm Water)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_IN_01_2) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_02);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_IN_01_2)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_1, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_02);
    }

    // Species 3 - Pokémon #3 in Indoor Enclosure #1 (Warm Water)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_IN_01_3) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_03);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_IN_01_3)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_2, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_03);
    }

    // Species 4 - Pokémon #1 in Indoor Enclosure #2 (Gymnasium)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_IN_02_1) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_04);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_IN_02_1)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_3, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_04);
    }

    // Species 5 - Pokémon #2 in Indoor Enclosure #2 (Gymnasium)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_IN_02_2) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_05);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_IN_02_2)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_4, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_05);
    }

    // Species 6 - Pokémon #1 in Indoor Enclosure #3 (Spirit Center)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_IN_03_1) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_06);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_IN_03_1)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_5, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_06);
    }

    // Species 7 - Pokémon #2 in Indoor Enclosure #3 (Spirit Center)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_IN_03_2) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_07);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_IN_03_2)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_6, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_07);
    }
}

void UpdateZooGraphics_HerpetofaunaBuilding(void)
{
    u16 speciesGraphics;

    // Species 1 - Pokémon #1 in Herp Enclosure #1 (Badlands)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_HRP_01_1) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_01);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_HRP_01_1)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_0, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_01);
    }

    // Species 2 - Pokémon #2 in Herp Enclosure #1 (Badlands)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_HRP_01_2) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_02);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_HRP_01_2)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_1, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_02);
    }

    // Species 3 - Pokémon #1 in Herp Enclosure #2 (Jungle)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_HRP_02_1) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_03);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_HRP_02_1)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_2, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_03);
    }

    // Species 4 - Pokémon #2 in Herp Enclosure #2 (Jungle)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_HRP_02_2) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_04);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_HRP_02_2)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_3, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_04);
    }

    // Species 5 - Pokémon #1 in Herp Enclosure #3 (Swamp)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_HRP_03_1) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_05);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_HRP_03_1)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_4, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_05);
    }

    // Species 6 - Pokémon #2 in Herp Enclosure #3 (Swamp)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_HRP_03_2) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_06);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_HRP_03_2)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_5, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_06);
    }

    // Species 7 - Pokémon #1 in Herp Enclosure #4 (Birds)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_1) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_07);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_1)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_6, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_07);
    }

    // Species 8 - Pokémon #2 in Herp Enclosure #4 (Birds)
    if(VarGet(VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_2) > 0)
    {
        FlagClear(FLAG_HIDE_ZOO_POKEMON_08);

        speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + VarGet(VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_2)) & OBJ_EVENT_GFX_SPECIES_MASK;
        VarSet(VAR_OBJ_GFX_ID_7, speciesGraphics);
    }
    else
    {
        FlagSet(FLAG_HIDE_ZOO_POKEMON_08);
    }
}

void LoadWakewaterPlayerMonGfx(void)
{
    FlagClear(FLAG_ITEM_HIDE_PLAYER_MON_WAKEWATER);

    u16 speciesGraphics;

    // Loads Player's mon
    speciesGraphics = (OBJ_EVENT_GFX_MON_BASE + GetMonData(&gPlayerParty[GetLeadMonIndex()], MON_DATA_SPECIES)) & OBJ_EVENT_GFX_SPECIES_MASK;
    VarSet(VAR_OBJ_GFX_ID_4, speciesGraphics);
}

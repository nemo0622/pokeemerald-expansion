#include "nemo_regionmap_ui.h"

#include "gba/types.h"
#include "gba/defines.h"
#include "global.h"
#include "main.h"
#include "bg.h"
#include "text_window.h"
#include "window.h"
// #include "characters.h"
#include "palette.h"
#include "task.h"
#include "overworld.h"
#include "malloc.h"
#include "gba/macro.h"
#include "menu_helpers.h"
#include "menu.h"
#include "scanline_effect.h"
#include "sprite.h"
#include "constants/rgb.h"
#include "decompress.h"
#include "constants/songs.h"
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "pokemon_icon.h"
#include "graphics.h"
#include "data.h"
#include "pokedex.h"
#include "gpu_regs.h"
#include "fieldmap.h"
#include "region_map.h"
#include "international_string_util.h"
#include "event_data.h"
#include "constants/rgb.h"

// Can be called/tracked all across the script I believe
struct NemoRMUIState
{
    MainCallback savedCallback;
    u8 loadState;
    u8 mode;
    u8 cursorPosX;
    u8 cursorPosY;
    u16 cursorSpriteId;
    u16 playerSpriteId;
    u8 cursorMoveFrameTimer;
    u8 infoWindowStatus; // 0 = closed (normal), 1 = open
    u8 infoWindowCounter; // Returns player to overworld every like 5-ish window opens to avoid memory overflow #chopped
};

enum WindowIds
{
    WINDOW_0
};

static EWRAM_DATA struct NemoRMUIState *sNemoRMUIState = NULL;
static EWRAM_DATA u8 *sBg1TilemapBuffer = NULL;

static const struct BgTemplate sNemoRMUIBgTemplates[] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 1
    },
    {
        .bg = 1,
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .priority = 2
    }
};

static const struct WindowTemplate sNemoRMUIWindowTemplates[] =
{
    [WINDOW_0] =
    {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 0,
        .width = 26,
        .height = 17,
        .paletteNum = 15,
        .baseBlock = 1
    },
    DUMMY_WIN_TEMPLATE
};

// OAM define for 16x16 sprites (cursor + player heads)
static const struct OamData sOam_16x16Sprite =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(16x16),
    .x = 0,
    .size = SPRITE_SIZE(16x16),
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
};

// Map GFX
static const u32 sNemoRMUITiles[] = INCGFX_U32("graphics/nemo_region_map_ui/map_tiles.png", ".4bpp.smol");
static const u32 sNemoRMUITilemap[] = INCBIN_U32("graphics/nemo_region_map_ui/map_bin.bin.smolTM");
static const u16 sNemoRMUIPalette[] = INCGFX_U16("graphics/nemo_region_map_ui/map_pal.pal", ".gbapal");
static const u32 sNemoRMUITiles_InfoWindow[] = INCGFX_U32("graphics/nemo_region_map_ui/map_tiles_info.png", ".4bpp.smol");
static const u32 sNemoRMUITilemap_InfoWindow[] = INCBIN_U32("graphics/nemo_region_map_ui/map_bin_info.bin.smolTM");
static const u16 sNemoRMUIPalette_InfoWindow[] = INCGFX_U16("graphics/nemo_region_map_ui/map_pal_info.pal", ".gbapal");

// Sprite GFX
static const u32 sCursorSprite[] = INCBIN_U32("graphics/nemo_region_map_ui/sprites/cursor.4bpp.smol");
static const u32 sPlayerSprite_Elio[] = INCBIN_U32("graphics/nemo_region_map_ui/sprites/elio.4bpp.smol");
static const u32 sPlayerSprite_Selene[] = INCBIN_U32("graphics/nemo_region_map_ui/sprites/selene.4bpp.smol");
static const u16 sMapOverlaySpritePal[] = INCBIN_U16("graphics/nemo_region_map_ui/sprites/cursor.gbapal");

#define TAG_CURSOR_SPRITE 30018 // from Archie/Mudskip's Main Menu UI code
#define TAG_MAP_OVERLAY_SPRITE_PAL 30030 // used for all overlay sprites (cursor and player heads)
static const struct CompressedSpriteSheet sSpriteSheet_CursorSprite = { .data = sCursorSprite, .size = 128, /* 16x16, /2 */ .tag = TAG_CURSOR_SPRITE, };
static const struct CompressedSpriteSheet sSpriteSheet_PlayerSprite_Elio = { .data = sPlayerSprite_Elio, .size = 128, /* 16x16, /2 */ .tag = TAG_CURSOR_SPRITE + 2, };
static const struct CompressedSpriteSheet sSpriteSheet_PlayerSprite_Selene = { .data = sPlayerSprite_Selene, .size = 128, /* 16x16, /2 */ .tag = TAG_CURSOR_SPRITE + 4, };
static const struct SpritePalette sSpritePal_MapOverlaySpritePal = { .data = sMapOverlaySpritePal, .tag = TAG_MAP_OVERLAY_SPRITE_PAL };

static const struct SpriteTemplate sSpriteTemplate_CursorSprite =
{
    .tileTag = TAG_CURSOR_SPRITE,
    .paletteTag = TAG_MAP_OVERLAY_SPRITE_PAL,
    .oam = &sOam_16x16Sprite,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static const struct SpriteTemplate sSpriteTemplate_PlayerSprite_Elio =
{
    .tileTag = TAG_CURSOR_SPRITE + 2,
    .paletteTag = TAG_MAP_OVERLAY_SPRITE_PAL,
    .oam = &sOam_16x16Sprite,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static const struct SpriteTemplate sSpriteTemplate_PlayerSprite_Selene =
{
    .tileTag = TAG_CURSOR_SPRITE + 4,
    .paletteTag = TAG_MAP_OVERLAY_SPRITE_PAL,
    .oam = &sOam_16x16Sprite,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};


enum FontColor
{
    FONT_WHITE,
    FONT_BLACK,
    FONT_RED
};
static const u8 sNemoRMUIWindowFontColors[][3] =
{
    [FONT_WHITE]  = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_WHITE,      TEXT_COLOR_DARK_GRAY},
    [FONT_BLACK]  = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_DARK_GRAY,  TEXT_COLOR_LIGHT_GRAY},
    [FONT_RED]    = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_RED,        TEXT_COLOR_LIGHT_GRAY},
};

// Callbacks for the sample UI
static void NemoRMUI_SetupCB(void);
static void NemoRMUI_MainCB(void);
static void NemoRMUI_VBlankCB(void);

// Sample UI tasks
static void Task_NemoRMUIWaitFadeIn(u8 taskId);
static void Task_NemoRMUIMainInput(u8 taskId);
static void Task_NemoRMUIInfoWindowInput(u8 taskId);
static void Task_NemoRMUIWaitFadeAndBail(u8 taskId);
static void Task_NemoRMUIWaitFadeAndExitGracefully(u8 taskId);

// Sample UI helper functions
// static void NemoRMUI_Init(MainCallback callback);
static void NemoRMUI_ResetGpuRegsAndBgs(void);
static bool8 NemoRMUI_InitBgs(void);
static void NemoRMUI_FadeAndBail(void);
static bool8 NemoRMUI_LoadGraphics(void);
static bool8 NemoRMUI_LoadInfoWindowGraphics(void);
static void NemoRMUI_InitWindows(void);
static void NemoRMUI_FreeResources(void);

static void NemoRMUI_DisplayCursorLocation(void);
static u8 NemoRMUI_GetMapHeaderFromCursorXY(u8, u8);
static void NemoRMUI_GetMapPosFromMapHeader(void);
static void NemoRMUI_DisplayPlayerHead(void);
static void NemoRMUI_BufferLocationInfo(void);

// HELPER FUNCTIONS FOR REGION MAP CODE
// Takes in the given X and Y positions and returns a map header (MAPSEC)
// MUST BE UPDATED WITH EVERY NEW MAPSEC
static u8 NemoRMUI_GetMapHeaderFromCursorXY(u8 x, u8 y)
{

    switch(x)
    {
        case 6:
            if(y == 8)
                return MAPSEC_HAUOLI_CITY;
            else
                return MAPSEC_NONE;
        case 7:
            if(y == 8)
                return MAPSEC_HAUOLI_CITY;
            else
                return MAPSEC_NONE;
        case 8:
            if(y == 5)
                return MAPSEC_MAHALO_TRAIL;
            else if(y == 6)
                return MAPSEC_IKI_TOWN;
            else if(y == 7)
                return MAPSEC_ROUTE_1;
            else if(y == 8)
                return MAPSEC_ALOLA_LEO_SCHOOL;
            else
                return MAPSEC_NONE;
        case 9:
            if(y == 7)
                return MAPSEC_ROUTE_1;
            else if(y == 8)
                return MAPSEC_ALOLA_LEO_SCHOOL;
            else
                return MAPSEC_NONE;
        case 10:
            if(y == 7)
                return MAPSEC_ROUTE_1;
            else if(y == 8)
                return MAPSEC_HAUOLI_OUTSKIRTS;
            else
                return MAPSEC_NONE;
            break;
        default:
            return MAPSEC_NONE; // Should make text box blank
            break;
    }

    // Fallback: just returns current map header
    return gMapHeader.regionMapSectionId;

}

// Uses player's current map header (MAPSEC) and returns the X and Y position on the map
// (x = gSpecialVar_0x8000, y = gSpecialVar_0x8001)
// MUST BE UPDATED WITH EVERY NEW MAPSEC
static void NemoRMUI_GetMapPosFromMapHeader(void)
{

    switch(gMapHeader.regionMapSectionId) // Player's current map
    {
        case MAPSEC_HAUOLI_OUTSKIRTS:
            gSpecialVar_0x8000 = 10;    // x
            gSpecialVar_0x8001 = 8;     // y
            break;
        case MAPSEC_ROUTE_1:
            gSpecialVar_0x8000 = 9;     // x
            gSpecialVar_0x8001 = 7;     // y
            break;
        case MAPSEC_IKI_TOWN:
            gSpecialVar_0x8000 = 8;     // x
            gSpecialVar_0x8001 = 6;     // y
            break;
        case MAPSEC_ALOLA_LEO_SCHOOL:
            gSpecialVar_0x8000 = 8;     // x
            gSpecialVar_0x8001 = 8;     // y
            break;
        case MAPSEC_HAUOLI_CITY:
            gSpecialVar_0x8000 = 6;     // x
            gSpecialVar_0x8001 = 8;     // y
            break;
        case MAPSEC_MAHALO_TRAIL:
            gSpecialVar_0x8000 = 8;     // x
            gSpecialVar_0x8001 = 5;     // y
            break;
        default:
            gSpecialVar_0x8000 = 4;
            gSpecialVar_0x8001 = 3;
            break;
    }

}

// Text that will appear in the Info window which has caused me so much grief lol
// MUST BE UPDATED WITH EVERY NEW MAPSEC
static void NemoRMUI_BufferLocationInfo(void)
{

    // General guidelines:
    // Each line can hold about 35 characters (give or take a few based on punctuation, which is a few pixels smaller)
    // There can be 5 lines total (separated by '\n' with NO SPACES)
    // The text for HAUOLI_OUTSKIRTS is a good example!

    // Get map header and load the related info
    switch(NemoRMUI_GetMapHeaderFromCursorXY(sNemoRMUIState->cursorPosX, sNemoRMUIState->cursorPosY))
    {
        case MAPSEC_HAUOLI_OUTSKIRTS:
            StringCopy(gStringVar2, COMPOUND_STRING("Situated near Hau'oli City, the\nOutskirts are known for being home to\nProfessor Kukui and retired Dr. Samson\nOak, two famous researchers of Pokémon\nbehavior."));
            break;
        case MAPSEC_ROUTE_1:
            StringCopy(gStringVar2, COMPOUND_STRING("A sleepy, winding road leading up\nto Iki Town. Many young Trainers\ncatch their first Pokémon here out of\ntradition!"));
            break;
        case MAPSEC_IKI_TOWN:
            StringCopy(gStringVar2, COMPOUND_STRING("Iki Town is the heart of Alolan\ntradition on Melemele Island. The\nyearly Manalo Festival celebrates\nTapu Koko, Guardian of Melemele Island.\nIt is also home to Kahuna Hala!"));
            break;
        case MAPSEC_ALOLA_LEO_SCHOOL:
            StringCopy(gStringVar2, COMPOUND_STRING("This is Melemele Island's premier\nschool for young Trainers, teaching\nstudents everything they need to\nraise Pokémon with love and care.\nIt was founded over 100 years ago!"));
            break;
        case MAPSEC_HAUOLI_CITY:
            StringCopy(gStringVar2, COMPOUND_STRING("It's the biggest city in Alola!\nOnce the seat of the Alolan royals,\nHau'oli City remains the cultural and\neconomic center of the Region.\nThere's always more to see here!"));
            break;
        case MAPSEC_MAHALO_TRAIL:
            StringCopy(gStringVar2, COMPOUND_STRING("This ancient path leads uphill to\nthe Ruins of Conflict, where the\nlegendary Tapu Koko is said to rest.\nOnly the Island Kahuna and certain\nTrainers are allowed access."));
            break;
        default: // Fallback
            StringCopy(gStringVar2, COMPOUND_STRING("This area of Alola has been little\nexplored. There is always more to learn!"));
            break;
    }

}

static void NemoRMUI_DisplayPlayerHead(void)
{
    NemoRMUI_GetMapPosFromMapHeader(); // Load X and Y position on map to gSpecialVar_0x8000 and 0x8001

    // Now that we have the grid X and Y coordinates, we can translate that into pixel X and Y coordinates
    // General formula: Pixel position = (Grid Position * 8) + 4
    // (the `* 8` comes from each grid tile being 8 pixels across, and the +4 is a slight offset to make the 16x16 sprites align on the 8x8 grid)

    // However, some locations are 2 grid tiles long (e.g., Hau'oli City), so we
    // want to display the player head around the middle of that. To do this, we need to integrate
    // additional pixel movement by like 4 pixels in a given direction (half a grid tile)

    // Temporary, local values
    u8 playerSprite_xPos = 0;
    u8 playerSprite_yPos = 0;
    u8 playerSprite_xOffset = 4; // 4 being the default value to align the 16x16 sprites to the middle of 8x8 tiles
    u8 playerSprite_yOffset = 4; // 4 being the default value to align the 16x16 sprites to the middle of 8x8 tiles

    // Depending on what MAPSEC the player is in, we can add an additional pixel offset
    // Remember: Increased X and Y values move the sprite Right and Down respectively!
    // MUST BE UPDATED WITH EVERY NEW MAPSEC (when applicable)
    switch(gMapHeader.regionMapSectionId)
    {
        case MAPSEC_ALOLA_LEO_SCHOOL:
            playerSprite_xOffset = 8; // 4 additional pixels to the right to center it
            break;
        case MAPSEC_HAUOLI_CITY:
            playerSprite_xOffset = 8; // 4 additional pixels to the right to center it
            break;
    }

    playerSprite_xPos = (gSpecialVar_0x8000 * 8) + playerSprite_xOffset;
    playerSprite_yPos = (gSpecialVar_0x8001 * 8) + playerSprite_yOffset;

    // Display sprite!
    if(gSaveBlock2Ptr->playerGender == MALE)
    {
        LoadCompressedSpriteSheet(&sSpriteSheet_PlayerSprite_Elio);
        LoadSpritePalette(&sSpritePal_MapOverlaySpritePal);
        sNemoRMUIState->playerSpriteId = CreateSprite(&sSpriteTemplate_PlayerSprite_Elio, playerSprite_xPos, (gSpecialVar_0x8001 * 8) + 4, 0);
    }
    else
    {
        LoadCompressedSpriteSheet(&sSpriteSheet_PlayerSprite_Selene);
        LoadSpritePalette(&sSpritePal_MapOverlaySpritePal);
        sNemoRMUIState->playerSpriteId = CreateSprite(&sSpriteTemplate_PlayerSprite_Selene, playerSprite_yPos, (gSpecialVar_0x8001 * 8) + 4, 0);
    }
}

// Declared in sample_ui.h
void Task_OpenNemoRegionMap_BlankTemplate(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        CleanupOverworldWindowsAndTilemaps();
        NemoRMUI_Init(CB2_ReturnToFieldWithOpenMenu);
        DestroyTask(taskId);
    }
}

void NemoRMUI_Init(MainCallback callback)
{
    sNemoRMUIState = AllocZeroed(sizeof(struct NemoRMUIState));
    if (sNemoRMUIState == NULL)
    {
        SetMainCallback2(callback);
        return;
    }

    sNemoRMUIState->loadState = 0;
    sNemoRMUIState->savedCallback = callback;

    SetMainCallback2(NemoRMUI_SetupCB);
}

// Credit: Jaizu, pret
static void NemoRMUI_ResetGpuRegsAndBgs(void)
{
    /*
     * TODO : these settings are overkill, and seem to be clearing some
     * important values. I need to come back and investigate this. For now, they
     * are disabled. Note: by not resetting the various BG and GPU regs, we are
     * effectively assuming that the user of this UI is entering from the
     * overworld. If this UI is entered from a different screen, it's possible
     * some regs won't be set correctly. In that case, you'll need to figure
     * out which ones you need.
     */
    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP); // added the "| DISPCNT_OBJ_1D_MAP" to fix sprite displays
    // SetGpuReg(REG_OFFSET_BG3CNT, 0);
    // SetGpuReg(REG_OFFSET_BG2CNT, 0);
    // SetGpuReg(REG_OFFSET_BG1CNT, 0);
    // SetGpuReg(REG_OFFSET_BG0CNT, 0);
    ChangeBgX(0, 0, BG_COORD_SET);
    ChangeBgY(0, 0, BG_COORD_SET);
    ChangeBgX(1, 0, BG_COORD_SET);
    ChangeBgY(1, 0, BG_COORD_SET);
    ChangeBgX(2, 0, BG_COORD_SET);
    ChangeBgY(2, 0, BG_COORD_SET);
    ChangeBgX(3, 0, BG_COORD_SET);
    ChangeBgY(3, 0, BG_COORD_SET);
    // SetGpuReg(REG_OFFSET_BLDCNT, 0);
    // SetGpuReg(REG_OFFSET_BLDY, 0);
    // SetGpuReg(REG_OFFSET_BLDALPHA, 0);
    // SetGpuReg(REG_OFFSET_WIN0H, 0);
    // SetGpuReg(REG_OFFSET_WIN0V, 0);
    // SetGpuReg(REG_OFFSET_WIN1H, 0);
    // SetGpuReg(REG_OFFSET_WIN1V, 0);
    // SetGpuReg(REG_OFFSET_WININ, 0);
    // SetGpuReg(REG_OFFSET_WINOUT, 0);
    // CpuFill16(0, (void *)VRAM, VRAM_SIZE);
    // CpuFill32(0, (void *)OAM, OAM_SIZE);
}

static void NemoRMUI_SetupCB(void)
{
    switch (gMain.state)
    {
    case 0:
        NemoRMUI_ResetGpuRegsAndBgs();
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        gMain.state++;
        break;
    case 1:
        ScanlineEffect_Stop();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        ResetSpriteData();
        ResetTasks();
        gMain.state++;
        break;
    case 2:
        if (NemoRMUI_InitBgs())
        {
            sNemoRMUIState->loadState = 0;
            sNemoRMUIState->cursorMoveFrameTimer = 0;
            gMain.state++;
        }
        else
        {
            NemoRMUI_FadeAndBail();
            return;
        }
        break;
    case 3:
        if(sNemoRMUIState->infoWindowStatus == 0)
        {
            if (NemoRMUI_LoadGraphics() == TRUE)
                gMain.state++;
        }
        else
        {
            if (NemoRMUI_LoadInfoWindowGraphics() == TRUE)
                gMain.state++;
        }
        break;
    case 4:
        NemoRMUI_InitWindows();
        gMain.state++;
        break;
    case 5: // Step where sprites are initially loaded!
        if(sNemoRMUIState->infoWindowStatus == 0) // Opening main map
        {
            // Initialize where map cursor should be (x and y)
            NemoRMUI_GetMapPosFromMapHeader();
            sNemoRMUIState->cursorPosX = gSpecialVar_0x8000;
            sNemoRMUIState->cursorPosY = gSpecialVar_0x8001;

            // Draw cursor and update cursor location text displayed at top
            NemoRMUI_DisplayCursorLocation();

            // Create player head sprite
            NemoRMUI_DisplayPlayerHead();
        }
        else
        {
            // Put location name on top window (copied from DisplayCursorLocation Part 2)
            FillWindowPixelBuffer(WINDOW_0, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
            GetMapName(gStringVar3, NemoRMUI_GetMapHeaderFromCursorXY(sNemoRMUIState->cursorPosX, sNemoRMUIState->cursorPosY), 0);
            AddTextPrinterParameterized3(WINDOW_0, FONT_NORMAL, GetStringCenterAlignXOffset(1, gStringVar3, 112) + 49,
                                         6, sNemoRMUIWindowFontColors[FONT_BLACK], TEXT_SKIP_DRAW, gStringVar3);
            CopyWindowToVram(WINDOW_0, COPYWIN_GFX);

            // Print map information into window 1
            NemoRMUI_BufferLocationInfo();
            AddTextPrinterParameterized3(WINDOW_0, FONT_NORMAL, 1, 40, sNemoRMUIWindowFontColors[FONT_BLACK], TEXT_SKIP_DRAW, gStringVar2);
            CopyWindowToVram(WINDOW_0, COPYWIN_GFX);
        }
        CreateTask(Task_NemoRMUIWaitFadeIn, 0);
        gMain.state++;
        break;
    case 6:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    case 7:
        SetVBlankCallback(NemoRMUI_VBlankCB);
        SetMainCallback2(NemoRMUI_MainCB);
        break;
    }
}

static void NemoRMUI_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void NemoRMUI_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void Task_NemoRMUIWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        if(sNemoRMUIState->infoWindowStatus == 0)
            gTasks[taskId].func = Task_NemoRMUIMainInput;
        else if(sNemoRMUIState->infoWindowStatus == 1)
            gTasks[taskId].func = Task_NemoRMUIInfoWindowInput;
    }
}

#define REGION_MAP_X_BOUND_MIN 1
#define REGION_MAP_X_BOUND_MAX 28
#define REGION_MAP_Y_BOUND_MIN 3
#define REGION_MAP_Y_BOUND_MAX 18
#define REGION_MAP_CURSOR_FRAME_DELAY 6 // How many frames between cursor movement when move button held down

static void Task_NemoRMUIMainInput(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_PC_OFF);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_NemoRMUIWaitFadeAndExitGracefully;
    }
    if (JOY_NEW(A_BUTTON))
    {
        if(NemoRMUI_GetMapHeaderFromCursorXY(sNemoRMUIState->cursorPosX, sNemoRMUIState->cursorPosY) != MAPSEC_NONE)
        {
            PlaySE(SE_SELECT);

            // Just fuckin reload the whole menu i guess LMAO
            sNemoRMUIState->infoWindowStatus = 1; // Open window
            BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);  // NOTE: This is pretty choppy, but if I set it to
                                                                        // 16, 0, 0 (fade into black), then you get artifacting. sooo
            DestroySprite(&gSprites[sNemoRMUIState->cursorSpriteId]);
            ClearStdWindowAndFrameToTransparent(WINDOW_0, TRUE);
            RemoveWindow(WINDOW_0);
            FreeAllWindowBuffers();
            ResetSpriteData();
            FreeAllSpritePalettes();
            CopyBgTilemapBufferToVram(0);
            
            SetMainCallback2(NemoRMUI_SetupCB);
        }
    }

    // This ensures that when just tapping the controls there isn't a lag
    if(JOY_NEW(DPAD_LEFT) || JOY_NEW(DPAD_RIGHT) || JOY_NEW(DPAD_UP) || JOY_NEW(DPAD_DOWN))
        sNemoRMUIState->cursorMoveFrameTimer = 0;

    // Checks for DPAD buttons being held
    if(JOY_HELD(DPAD_LEFT) && sNemoRMUIState->cursorPosX > REGION_MAP_X_BOUND_MIN)
    {
        if(sNemoRMUIState->cursorMoveFrameTimer == 0)
        {
            sNemoRMUIState->cursorPosX--;
            NemoRMUI_DisplayCursorLocation();
            sNemoRMUIState->cursorMoveFrameTimer = REGION_MAP_CURSOR_FRAME_DELAY;
        }
        else
            sNemoRMUIState->cursorMoveFrameTimer--;
    }
    if(JOY_HELD(DPAD_RIGHT) && sNemoRMUIState->cursorPosX < REGION_MAP_X_BOUND_MAX)
    {
        if(sNemoRMUIState->cursorMoveFrameTimer == 0)
        {
            sNemoRMUIState->cursorPosX++;
            NemoRMUI_DisplayCursorLocation();
            sNemoRMUIState->cursorMoveFrameTimer = REGION_MAP_CURSOR_FRAME_DELAY;
        }
        else
            sNemoRMUIState->cursorMoveFrameTimer--;
    }
    if(JOY_HELD(DPAD_UP) && sNemoRMUIState->cursorPosY > REGION_MAP_Y_BOUND_MIN)
    {
        if(sNemoRMUIState->cursorMoveFrameTimer == 0)
        {
            sNemoRMUIState->cursorPosY--;
            NemoRMUI_DisplayCursorLocation();
            sNemoRMUIState->cursorMoveFrameTimer = REGION_MAP_CURSOR_FRAME_DELAY;
        }
        else
            sNemoRMUIState->cursorMoveFrameTimer--;
    }
    if(JOY_HELD(DPAD_DOWN) && sNemoRMUIState->cursorPosY < REGION_MAP_Y_BOUND_MAX)
    {
        if(sNemoRMUIState->cursorMoveFrameTimer == 0)
        {
            sNemoRMUIState->cursorPosY++;
            NemoRMUI_DisplayCursorLocation();
            sNemoRMUIState->cursorMoveFrameTimer = REGION_MAP_CURSOR_FRAME_DELAY;
        }
        else
            sNemoRMUIState->cursorMoveFrameTimer--;
    }
}

static void Task_NemoRMUIInfoWindowInput(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_PC_OFF);

        if(sNemoRMUIState->infoWindowCounter >= 30) // This is to handle the data overflow fml
        {
            sNemoRMUIState->infoWindowCounter = 0;
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            gTasks[taskId].func = Task_NemoRMUIWaitFadeAndExitGracefully;
        }

        else
        {
            u8 tempCounterStorage;
            
            // Try to reset all data to avoid data overflow
            sNemoRMUIState->infoWindowStatus = 0; // Close window
            tempCounterStorage = sNemoRMUIState->infoWindowCounter; // This is to handle the data overflow fml
            NemoRMUI_FreeResources();
            CleanupOverworldWindowsAndTilemaps();
            sNemoRMUIState = AllocZeroed(sizeof(struct NemoRMUIState));
            if (sNemoRMUIState == NULL)
            {
                SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
                return;
            }
            sNemoRMUIState->loadState = 0;
            sNemoRMUIState->savedCallback = CB2_ReturnToFieldContinueScriptPlayMapMusic;
            sNemoRMUIState->infoWindowCounter = tempCounterStorage + 1;

            // Menu reload
            BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);  // NOTE: This is pretty choppy, but if I set it to
                                                                        // 16, 0, 0 (fade into black), then you get artifacting. sooo
            SetMainCallback2(NemoRMUI_SetupCB);
        }
    }
}

static void Task_NemoRMUIWaitFadeAndBail(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sNemoRMUIState->savedCallback);
        NemoRMUI_FreeResources();
        DestroyTask(taskId);
    }
}

static void Task_NemoRMUIWaitFadeAndExitGracefully(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sNemoRMUIState->savedCallback);
        NemoRMUI_FreeResources();
        DestroyTask(taskId);
    }
}

#define TILEMAP_BUFFER_SIZE (1024 * 2)
static bool8 NemoRMUI_InitBgs(void)
{
    ResetAllBgsCoordinates();

    sBg1TilemapBuffer = AllocZeroed(TILEMAP_BUFFER_SIZE);
    if (sBg1TilemapBuffer == NULL)
    {
        return FALSE;
    }

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sNemoRMUIBgTemplates, NELEMS(sNemoRMUIBgTemplates));

    SetBgTilemapBuffer(1, sBg1TilemapBuffer);
    ScheduleBgCopyTilemapToVram(1);

    ShowBg(0);
    ShowBg(1);

    return TRUE;
}
#undef TILEMAP_BUFFER_SIZE

static void NemoRMUI_FadeAndBail(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_NemoRMUIWaitFadeAndBail, 0);
    SetVBlankCallback(NemoRMUI_VBlankCB);
    SetMainCallback2(NemoRMUI_MainCB);
}

static bool8 NemoRMUI_LoadGraphics(void)
{
    switch (sNemoRMUIState->loadState)
    {
    case 0:
        ResetTempTileDataBuffers();
        DecompressAndCopyTileDataToVram(1, sNemoRMUITiles, 0, 0, 0);
        sNemoRMUIState->loadState++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            DecompressDataWithHeaderWram(sNemoRMUITilemap, sBg1TilemapBuffer);
            sNemoRMUIState->loadState++;
        }
        break;
    case 2:
        LoadPalette(sNemoRMUIPalette, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
        LoadPalette(gMessageBox_Pal, BG_PLTT_ID(15), PLTT_SIZE_4BPP);
        sNemoRMUIState->loadState++;
    default:
        sNemoRMUIState->loadState = 0;
        return TRUE;
    }
    return FALSE;
}

static bool8 NemoRMUI_LoadInfoWindowGraphics(void)
{
    if(!gPaletteFade.active)
    {
        switch (sNemoRMUIState->loadState)
        {
        case 0:
            ResetTempTileDataBuffers();
            DecompressAndCopyTileDataToVram(1, sNemoRMUITiles_InfoWindow, 0, 0, 0);
            sNemoRMUIState->loadState++;
            break;
        case 1:
            if (FreeTempTileDataBuffersIfPossible() != TRUE)
            {
                DecompressDataWithHeaderWram(sNemoRMUITilemap_InfoWindow, sBg1TilemapBuffer);
                sNemoRMUIState->loadState++;
            }
            break;
        case 2:
            LoadPalette(sNemoRMUIPalette_InfoWindow, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
            LoadPalette(gMessageBox_Pal, BG_PLTT_ID(15), PLTT_SIZE_4BPP);
            sNemoRMUIState->loadState++;
        default:
            sNemoRMUIState->loadState = 0;
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

static void NemoRMUI_InitWindows(void)
{
    InitWindows(sNemoRMUIWindowTemplates);
    DeactivateAllTextPrinters();
    ScheduleBgCopyTilemapToVram(0);
    FillWindowPixelBuffer(WINDOW_0, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    PutWindowTilemap(WINDOW_0);
    CopyWindowToVram(WINDOW_0, 3);
}


static const u8 sText_Text1[] = _("Hello, world!");
static const u8 sText_Text2[] = _("Press {A_BUTTON} to make a sound!");
static void NemoRMUI_DisplayCursorLocation(void)
{
    // Part 1: Put the cursor on the screen
    DestroySprite(&gSprites[sNemoRMUIState->cursorSpriteId]);
    LoadCompressedSpriteSheet(&sSpriteSheet_CursorSprite);
    LoadSpritePalette(&sSpritePal_MapOverlaySpritePal);
    sNemoRMUIState->cursorSpriteId = CreateSprite(&sSpriteTemplate_CursorSprite, (sNemoRMUIState->cursorPosX * 8) + 4, (sNemoRMUIState->cursorPosY * 8) + 4, 0);

    // Part 2: Print the map's name on the top window
    FillWindowPixelBuffer(WINDOW_0, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    // Get map name of where cursor is
    GetMapName(gStringVar3, NemoRMUI_GetMapHeaderFromCursorXY(sNemoRMUIState->cursorPosX, sNemoRMUIState->cursorPosY), 0);
    // Print text
    AddTextPrinterParameterized3(WINDOW_0, FONT_NORMAL, GetStringCenterAlignXOffset(1, gStringVar3, 112) + 49,
                                 6, sNemoRMUIWindowFontColors[FONT_BLACK], TEXT_SKIP_DRAW, gStringVar3);

    CopyWindowToVram(WINDOW_0, COPYWIN_GFX);
}



static void NemoRMUI_FreeResources(void)
{
    if (sNemoRMUIState != NULL)
    {
        Free(sNemoRMUIState);
    }
    if (sBg1TilemapBuffer != NULL)
    {
        Free(sBg1TilemapBuffer);
    }
    FreeAllWindowBuffers();
    ResetSpriteData();
}

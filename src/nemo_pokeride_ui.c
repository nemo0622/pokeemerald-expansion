#include "nemo_ui_helper.h"

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
#include "international_string_util.h"
#include "trainer_pokemon_sprites.h"
#include "event_data.h"


// -------------------------------------------- Graphics ------------------------------------------------

static const u32 sNemoPRUITiles[] = INCGFX_U32("graphics/nemo_pokeride_ui/tiles.png", ".4bpp.smol");
static const u32 sNemoPRUITilemap[] = INCBIN_U32("graphics/nemo_pokeride_ui/tilemap.bin.lz");
static const u16 sNemoPRUIPalette[] = INCBIN_U16("graphics/nemo_pokeride_ui/tiles.gbapal");

static const u32 sRideMiniSprite_Tauros[] = INCGFX_U32("graphics/nemo_pokeride_ui/sprites/tauros_mini.png", ".4bpp.smol");
static const u32 sRideMiniSprite_Stoutland[] = INCGFX_U32("graphics/nemo_pokeride_ui/sprites/stoutland_mini.png", ".4bpp.smol");
static const u32 sRideMiniSprite_Lapras[] = INCGFX_U32("graphics/nemo_pokeride_ui/sprites/lapras_mini.png", ".4bpp.smol");
static const u32 sRideMiniSprite_Drampa[] = INCGFX_U32("graphics/nemo_pokeride_ui/sprites/drampa_mini.png", ".4bpp.smol");
static const u32 sRideMiniSprite_Flygon[] = INCGFX_U32("graphics/nemo_pokeride_ui/sprites/flygon_mini.png", ".4bpp.smol");
static const u32 sRideMiniSprite_Bewear[] = INCGFX_U32("graphics/nemo_pokeride_ui/sprites/bewear_mini.png", ".4bpp.smol");
static const u32 sRideMiniSprite_Question[] = INCGFX_U32("graphics/nemo_pokeride_ui/sprites/question_mini.png", ".4bpp.smol");
static const u16 sRideMiniSpritePal[] = INCBIN_U16("graphics/nemo_pokeride_ui/sprites/tauros_mini.gbapal");

static const u32 sRideSprite_Tauros[] = INCGFX_U32("graphics/nemo_pokeride_ui/sprites/tauros.png", ".4bpp.smol");
static const u32 sRideSprite_Stoutland[] = INCGFX_U32("graphics/nemo_pokeride_ui/sprites/stoutland.png", ".4bpp.smol");
static const u32 sRideSprite_Lapras[] = INCGFX_U32("graphics/nemo_pokeride_ui/sprites/lapras.png", ".4bpp.smol");
static const u32 sRideSprite_Drampa[] = INCGFX_U32("graphics/nemo_pokeride_ui/sprites/drampa.png", ".4bpp.smol");
static const u32 sRideSprite_Flygon[] = INCGFX_U32("graphics/nemo_pokeride_ui/sprites/flygon.png", ".4bpp.smol");
static const u32 sRideSprite_Bewear[] = INCGFX_U32("graphics/nemo_pokeride_ui/sprites/bewear.png", ".4bpp.smol");
static const u32 sRideSprite_Question[] = INCGFX_U32("graphics/nemo_pokeride_ui/sprites/question.png", ".4bpp.smol");
static const u16 sRideSpritePal[] = INCBIN_U16("graphics/nemo_pokeride_ui/sprites/tauros.gbapal");

#define TAG_RIDE_MINI_SPRITE 30018 // from Archie/Mudskip's Main Menu UI code
#define TAG_RIDE_MINI_PAL 30032
static const struct CompressedSpriteSheet sSpriteSheet_RideMiniSprite_Tauros = { .data = sRideMiniSprite_Tauros, .size = 512, .tag = TAG_RIDE_MINI_SPRITE, };
static const struct CompressedSpriteSheet sSpriteSheet_RideMiniSprite_Stoutland = { .data = sRideMiniSprite_Stoutland, .size = 512, .tag = TAG_RIDE_MINI_SPRITE + 2, };
static const struct CompressedSpriteSheet sSpriteSheet_RideMiniSprite_Lapras = { .data = sRideMiniSprite_Lapras, .size = 512, .tag = TAG_RIDE_MINI_SPRITE + 4, };
static const struct CompressedSpriteSheet sSpriteSheet_RideMiniSprite_Drampa = { .data = sRideMiniSprite_Drampa, .size = 512, .tag = TAG_RIDE_MINI_SPRITE + 6, };
static const struct CompressedSpriteSheet sSpriteSheet_RideMiniSprite_Flygon = { .data = sRideMiniSprite_Flygon, .size = 512, .tag = TAG_RIDE_MINI_SPRITE + 8, };
static const struct CompressedSpriteSheet sSpriteSheet_RideMiniSprite_Bewear = { .data = sRideMiniSprite_Bewear, .size = 512, .tag = TAG_RIDE_MINI_SPRITE + 10, };
static const struct CompressedSpriteSheet sSpriteSheet_RideMiniSprite_Question = { .data = sRideMiniSprite_Question, .size = 512, .tag = TAG_RIDE_MINI_SPRITE + 12, };
static const struct SpritePalette sSpritePal_RideMiniSprites = { .data = sRideMiniSpritePal, .tag = TAG_RIDE_MINI_PAL };

#define TAG_RIDE_SPRITE 30118 // from Archie/Mudskip's Main Menu UI code
#define TAG_RIDE_PAL 30132
static const struct CompressedSpriteSheet sSpriteSheet_RideSprite_Tauros = { .data = sRideSprite_Tauros, .size = 2048, .tag = TAG_RIDE_SPRITE, };
static const struct CompressedSpriteSheet sSpriteSheet_RideSprite_Stoutland = { .data = sRideSprite_Stoutland, .size = 2048, .tag = TAG_RIDE_SPRITE + 2, };
static const struct CompressedSpriteSheet sSpriteSheet_RideSprite_Lapras = { .data = sRideSprite_Lapras, .size = 2048, .tag = TAG_RIDE_SPRITE + 4, };
static const struct CompressedSpriteSheet sSpriteSheet_RideSprite_Drampa = { .data = sRideSprite_Drampa, .size = 2048, .tag = TAG_RIDE_SPRITE + 6, };
static const struct CompressedSpriteSheet sSpriteSheet_RideSprite_Flygon = { .data = sRideSprite_Flygon, .size = 2048, .tag = TAG_RIDE_SPRITE + 8, };
static const struct CompressedSpriteSheet sSpriteSheet_RideSprite_Bewear = { .data = sRideSprite_Bewear, .size = 2048, .tag = TAG_RIDE_SPRITE + 10, };
static const struct CompressedSpriteSheet sSpriteSheet_RideSprite_Question = { .data = sRideSprite_Question, .size = 2048, .tag = TAG_RIDE_SPRITE + 12, };
static const struct SpritePalette sSpritePal_RideSprites = { .data = sRideSpritePal, .tag = TAG_RIDE_PAL };

static const struct OamData sOam_32x32Sprite =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x32),
    .x = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
};

static const struct OamData sOam_64x64Sprite =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(64x64),
    .x = 0,
    .size = SPRITE_SIZE(64x64),
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
};

static const struct SpriteTemplate sSpriteTemplate_RideMiniSprite_Tauros = { .tileTag = TAG_RIDE_MINI_SPRITE, .paletteTag = TAG_RIDE_MINI_PAL, .oam = &sOam_32x32Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_RideMiniSprite_Stoutland = { .tileTag = TAG_RIDE_MINI_SPRITE + 2, .paletteTag = TAG_RIDE_MINI_PAL, .oam = &sOam_32x32Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_RideMiniSprite_Lapras = { .tileTag = TAG_RIDE_MINI_SPRITE + 4, .paletteTag = TAG_RIDE_MINI_PAL, .oam = &sOam_32x32Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_RideMiniSprite_Drampa = { .tileTag = TAG_RIDE_MINI_SPRITE + 6, .paletteTag = TAG_RIDE_MINI_PAL, .oam = &sOam_32x32Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_RideMiniSprite_Flygon = { .tileTag = TAG_RIDE_MINI_SPRITE + 8, .paletteTag = TAG_RIDE_MINI_PAL, .oam = &sOam_32x32Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_RideMiniSprite_Bewear = { .tileTag = TAG_RIDE_MINI_SPRITE + 10, .paletteTag = TAG_RIDE_MINI_PAL, .oam = &sOam_32x32Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_RideMiniSprite_Question = { .tileTag = TAG_RIDE_MINI_SPRITE + 12, .paletteTag = TAG_RIDE_MINI_PAL, .oam = &sOam_32x32Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };

static const struct SpriteTemplate sSpriteTemplate_RideSprite_Tauros = { .tileTag = TAG_RIDE_SPRITE, .paletteTag = TAG_RIDE_PAL, .oam = &sOam_64x64Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_RideSprite_Stoutland = { .tileTag = TAG_RIDE_SPRITE + 2, .paletteTag = TAG_RIDE_PAL, .oam = &sOam_64x64Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_RideSprite_Lapras = { .tileTag = TAG_RIDE_SPRITE + 4, .paletteTag = TAG_RIDE_PAL, .oam = &sOam_64x64Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_RideSprite_Drampa = { .tileTag = TAG_RIDE_SPRITE + 6, .paletteTag = TAG_RIDE_PAL, .oam = &sOam_64x64Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_RideSprite_Flygon = { .tileTag = TAG_RIDE_SPRITE + 8, .paletteTag = TAG_RIDE_PAL, .oam = &sOam_64x64Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_RideSprite_Bewear = { .tileTag = TAG_RIDE_SPRITE + 10, .paletteTag = TAG_RIDE_PAL, .oam = &sOam_64x64Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_RideSprite_Question = { .tileTag = TAG_RIDE_SPRITE + 12, .paletteTag = TAG_RIDE_PAL, .oam = &sOam_64x64Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };

struct NemoPRUIState
{
    MainCallback savedCallback;
    u8 loadState;
    u8 currentRideId; // Tracks currently open PokéRide page (0 = Tauros, 1 = Stoutland, etc.)
    u16 ridePokemonSpriteId;
    u16 leftPokemonSpriteId;
    u16 rightPokemonSpriteId;
};

enum WindowIds
{
    WINDOW_0
};

enum
{
    RIDE_OPTION_TAUROS,
    RIDE_OPTION_STOUTLAND,
    RIDE_OPTION_LAPRAS,
    RIDE_OPTION_DRAMPA,
    RIDE_OPTION_FLYGON,
    RIDE_OPTION_BEWEAR,
    RIDE_OPTION_COUNT
};

static EWRAM_DATA struct NemoPRUIState *sNemoPRUIState = NULL;
static EWRAM_DATA u8 *sBg1TilemapBuffer = NULL;

static const struct BgTemplate sNemoPRUIBgTemplates[] =
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

static const struct WindowTemplate sNemoPRUIWindowTemplates[] =
{
    [WINDOW_0] =
    {
        .bg = 0,
        .tilemapLeft = 7,
        .tilemapTop = 12,
        .width = 16,
        .height = 6,
        .paletteNum = 15,
        .baseBlock = 1
    },
    DUMMY_WIN_TEMPLATE
};

enum FontColor
{
    FONT_WHITE,
    FONT_BLACK,
    FONT_RED
};
static const u8 sNemoPRUIWindowFontColors[][3] =
{
    [FONT_WHITE]  = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_WHITE,      TEXT_COLOR_DARK_GRAY},
    [FONT_BLACK]  = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_DARK_GRAY,  TEXT_COLOR_LIGHT_GRAY},
    [FONT_RED]    = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_RED,        TEXT_COLOR_LIGHT_GRAY},
};

// Callbacks for the sample UI
static void NemoPRUI_SetupCB(void);
static void NemoPRUI_MainCB(void);
static void NemoPRUI_VBlankCB(void);

// Sample UI tasks
static void Task_NemoPRUIWaitFadeIn(u8 taskId);
static void Task_NemoPRUIMainInput(u8 taskId);
static void Task_NemoPRUIWaitFadeAndBail(u8 taskId);
static void Task_NemoPRUIWaitFadeAndExitGracefully(u8 taskId);
static void Task_NemoPRUIWaitFadeAndGoToFly(u8 taskId);

// Sample UI helper functions
// static void NemoPRUI_Init(MainCallback callback);
static void NemoPRUI_ResetGpuRegsAndBgs(void);
static bool8 NemoPRUI_InitBgs(void);
static void NemoPRUI_FadeAndBail(void);
static bool8 NemoPRUI_LoadGraphics(void);
static void NemoPRUI_InitWindows(void);
static void NemoPRUI_PrintText(void);
static void NemoPRUI_FreeResources(void);

static void NemoPRUI_BufferCurrentRideName(void);
static void NemoPRUI_BufferCurrentRideDesc(void);
static void NemoPRUI_LoadCurrentRideGfx(void);

// Declared in sample_ui.h
void Task_OpenNemoPRUI(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        CleanupOverworldWindowsAndTilemaps();
        NemoPRUI_Init(CB2_ReturnToFieldWithOpenMenu);
        DestroyTask(taskId);
    }
}

void NemoPRUI_Init(MainCallback callback)
{
    sNemoPRUIState = AllocZeroed(sizeof(struct NemoPRUIState));
    if (sNemoPRUIState == NULL)
    {
        SetMainCallback2(callback);
        return;
    }

    sNemoPRUIState->loadState = 0;
    sNemoPRUIState->savedCallback = callback;
    sNemoPRUIState->currentRideId = RIDE_OPTION_TAUROS; // Tauros Charge

    SetMainCallback2(NemoPRUI_SetupCB);
}

// Credit: Jaizu, pret
static void NemoPRUI_ResetGpuRegsAndBgs(void)
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

static void NemoPRUI_SetupCB(void)
{
    switch (gMain.state)
    {
    case 0:
        NemoPRUI_ResetGpuRegsAndBgs();
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
        if (NemoPRUI_InitBgs())
        {
            sNemoPRUIState->loadState = 0;
            gMain.state++;
        }
        else
        {
            NemoPRUI_FadeAndBail();
            return;
        }
        break;
    case 3:
        if (NemoPRUI_LoadGraphics() == TRUE)
        {
            gMain.state++;
        }
        break;
    case 4:
        NemoPRUI_InitWindows();
        gMain.state++;
        break;
    case 5:
        NemoPRUI_PrintText();
        NemoPRUI_LoadCurrentRideGfx();
        CreateTask(Task_NemoPRUIWaitFadeIn, 0);
        gMain.state++;
        break;
    case 6:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    case 7:
        SetVBlankCallback(NemoPRUI_VBlankCB);
        SetMainCallback2(NemoPRUI_MainCB);
        break;
    }
}

static void NemoPRUI_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void NemoPRUI_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void Task_NemoPRUIWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        gTasks[taskId].func = Task_NemoPRUIMainInput;
    }
}

static void Task_NemoPRUIMainInput(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_PC_OFF);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_NemoPRUIWaitFadeAndExitGracefully;
    }
    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);

        // Begin PokéRide!
        switch(sNemoPRUIState->currentRideId)
        {
            default:
            case RIDE_OPTION_TAUROS:
                // PLACEHOLDER: Todo, start Tauros PokéRide
                break;
            case RIDE_OPTION_STOUTLAND:
                // PLACEHOLDER: Todo, start Stoutland PokéRide
                break;
            case RIDE_OPTION_LAPRAS:
                // PLACEHOLDER: Todo, start Lapras PokéRide
                break;
            case RIDE_OPTION_DRAMPA:
                // PLACEHOLDER: Todo, start Drampa PokéRide
                break;
            case RIDE_OPTION_FLYGON:
                BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
                gTasks[taskId].func = Task_NemoPRUIWaitFadeAndGoToFly;
                break;
            case RIDE_OPTION_BEWEAR:
                // PLACEHOLDER: Todo, start Bewear PokéRide
                break;
        }
    }
    else if (JOY_NEW(L_BUTTON))
    {
        if(sNemoPRUIState->currentRideId > 0)
            sNemoPRUIState->currentRideId--;
        else if(sNemoPRUIState->currentRideId <= 0)
            sNemoPRUIState->currentRideId = RIDE_OPTION_BEWEAR;

        DestroySprite(&gSprites[sNemoPRUIState->ridePokemonSpriteId]);
        DestroySprite(&gSprites[sNemoPRUIState->leftPokemonSpriteId]);
        DestroySprite(&gSprites[sNemoPRUIState->rightPokemonSpriteId]);
        NemoPRUI_PrintText();
        NemoPRUI_LoadCurrentRideGfx();
    }
    else if (JOY_NEW(R_BUTTON))
    {
        if(sNemoPRUIState->currentRideId < RIDE_OPTION_BEWEAR)
            sNemoPRUIState->currentRideId++;
        else if(sNemoPRUIState->currentRideId >= RIDE_OPTION_BEWEAR)
            sNemoPRUIState->currentRideId = RIDE_OPTION_TAUROS;

        DestroySprite(&gSprites[sNemoPRUIState->ridePokemonSpriteId]);
        DestroySprite(&gSprites[sNemoPRUIState->leftPokemonSpriteId]);
        DestroySprite(&gSprites[sNemoPRUIState->rightPokemonSpriteId]);
        NemoPRUI_PrintText();
        NemoPRUI_LoadCurrentRideGfx();
    }
}

static void Task_NemoPRUIWaitFadeAndBail(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sNemoPRUIState->savedCallback);
        NemoPRUI_FreeResources();
        DestroyTask(taskId);
    }
}

static void Task_NemoPRUIWaitFadeAndExitGracefully(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sNemoPRUIState->savedCallback);
        NemoPRUI_FreeResources();
        DestroyTask(taskId);
    }
}

static void Task_NemoPRUIWaitFadeAndGoToFly(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        // SetMainCallback2(sNemoPRUIState->savedCallback);
        NemoPRUI_FreeResources();
        NemoRMUI_Init(CB2_ReturnToFieldContinueScriptPlayMapMusic, TRUE);
        DestroyTask(taskId);
    }
}
#define TILEMAP_BUFFER_SIZE (1024 * 2)
static bool8 NemoPRUI_InitBgs(void)
{
    ResetAllBgsCoordinates();

    sBg1TilemapBuffer = AllocZeroed(TILEMAP_BUFFER_SIZE);
    if (sBg1TilemapBuffer == NULL)
    {
        return FALSE;
    }

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sNemoPRUIBgTemplates, NELEMS(sNemoPRUIBgTemplates));

    SetBgTilemapBuffer(1, sBg1TilemapBuffer);
    ScheduleBgCopyTilemapToVram(1);

    ShowBg(0);
    ShowBg(1);

    return TRUE;
}
#undef TILEMAP_BUFFER_SIZE

static void NemoPRUI_FadeAndBail(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_NemoPRUIWaitFadeAndBail, 0);
    SetVBlankCallback(NemoPRUI_VBlankCB);
    SetMainCallback2(NemoPRUI_MainCB);
}

static bool8 NemoPRUI_LoadGraphics(void)
{
    switch (sNemoPRUIState->loadState)
    {
    case 0:
        ResetTempTileDataBuffers();
        DecompressAndCopyTileDataToVram(1, sNemoPRUITiles, 0, 0, 0);
        sNemoPRUIState->loadState++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            DecompressDataWithHeaderWram(sNemoPRUITilemap, sBg1TilemapBuffer);
            sNemoPRUIState->loadState++;
        }
        break;
    case 2:
        LoadPalette(sNemoPRUIPalette, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
        LoadPalette(gMessageBox_Pal, BG_PLTT_ID(15), PLTT_SIZE_4BPP);
        sNemoPRUIState->loadState++;
    default:
        sNemoPRUIState->loadState = 0;
        return TRUE;
    }
    return FALSE;
}

static void NemoPRUI_InitWindows(void)
{
    InitWindows(sNemoPRUIWindowTemplates);
    DeactivateAllTextPrinters();
    ScheduleBgCopyTilemapToVram(0);
    FillWindowPixelBuffer(WINDOW_0, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    PutWindowTilemap(WINDOW_0);
    CopyWindowToVram(WINDOW_0, 3);
}


// ------------------------------------- Loading Text and Graphics ----------------------------------------

static void NemoPRUI_PrintText(void)
{
    FillWindowPixelBuffer(WINDOW_0, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    // Buffer Ride Name and Description into gStringVar2 and 3
    NemoPRUI_BufferCurrentRideName();
    NemoPRUI_BufferCurrentRideDesc();

    // Print Ride title
    u16 centerOffset = GetStringCenterAlignXOffset(FONT_NORMAL, gStringVar2, sNemoPRUIWindowTemplates[WINDOW_0].width * 8);
    AddTextPrinterParameterized4(WINDOW_0, FONT_NORMAL, centerOffset, 4, 0, 0, sNemoPRUIWindowFontColors[FONT_BLACK], TEXT_SKIP_DRAW, gStringVar2);

    // Print Ride description
    centerOffset = GetStringCenterAlignXOffset(FONT_SMALL_NARROWER, gStringVar3, sNemoPRUIWindowTemplates[WINDOW_0].width * 8);
    AddTextPrinterParameterized4(WINDOW_0, FONT_SMALL_NARROWER, centerOffset, 18, 0, 0, sNemoPRUIWindowFontColors[FONT_BLACK], TEXT_SKIP_DRAW, gStringVar3);

    CopyWindowToVram(WINDOW_0, COPYWIN_GFX);
}

static void NemoPRUI_BufferCurrentRideName(void)
{
    switch(sNemoPRUIState->currentRideId)
    {
        default:
        case RIDE_OPTION_TAUROS:
            StringCopy(gStringVar2, COMPOUND_STRING("Tauros Charge"));
            break;
        case RIDE_OPTION_STOUTLAND:
            StringCopy(gStringVar2, COMPOUND_STRING("Stoutland Search"));
            break;
        case RIDE_OPTION_LAPRAS:
            StringCopy(gStringVar2, COMPOUND_STRING("Lapras Paddle"));
            break;
        case RIDE_OPTION_DRAMPA:
            StringCopy(gStringVar2, COMPOUND_STRING("Drampa Glide"));
            break;
        case RIDE_OPTION_FLYGON:
            StringCopy(gStringVar2, COMPOUND_STRING("Flygon Soar"));
            break;
        case RIDE_OPTION_BEWEAR:
            StringCopy(gStringVar2, COMPOUND_STRING("Bewear Shove"));
            break;
    }
}

static void NemoPRUI_BufferCurrentRideDesc(void)
{
    switch(sNemoPRUIState->currentRideId)
    {
        default:
        case RIDE_OPTION_TAUROS:
            StringCopy(gStringVar3, COMPOUND_STRING("Run wild with Tauros to\nbreak through cracked rocks!"));
            break;
        case RIDE_OPTION_STOUTLAND:
            StringCopy(gStringVar3, COMPOUND_STRING("Ride Stoutland to find hidden\nitems and Zygarde Cells!"));
            break;
        case RIDE_OPTION_LAPRAS:
            StringCopy(gStringVar3, COMPOUND_STRING("Let Lapras carry you across\nthe water in style!"));
            break;
        case RIDE_OPTION_DRAMPA:
            StringCopy(gStringVar3, COMPOUND_STRING("Float short distances on\nDrampa's back!"));
            break;
        case RIDE_OPTION_FLYGON:
            StringCopy(gStringVar3, COMPOUND_STRING("Travel across Alola in the\nblink of an eye with Flygon!"));
            break;
        case RIDE_OPTION_BEWEAR:
            StringCopy(gStringVar3, COMPOUND_STRING("Let Bewear get it's energy\nout and move large boulders!"));
            break;
    }
}

#define RIDE_MINI_SPRITE_LEFT_X     24
#define RIDE_MINI_SPRITE_RIGHT_X    216
#define RIDE_MINI_SPRITE_Y          120

static void NemoPRUI_LoadCurrentRideGfx(void)
{
    // Wipe away all the current sprites I think
    // I hope this doesn't fuck up the background lol i dunno
    ResetSpriteData();
    FreeAllSpritePalettes();

    LoadSpritePalette(&sSpritePal_RideMiniSprites); // Used for all Ride mini sprites

    switch(sNemoPRUIState->currentRideId)
    {
        default:
        case RIDE_OPTION_TAUROS:
            {
                // L-Button option
                if(FlagGet(FLAG_UNLOCKED_POKERIDE_BEWEAR))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Bewear);
                    sNemoPRUIState->leftPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Bewear, RIDE_MINI_SPRITE_LEFT_X, RIDE_MINI_SPRITE_Y, 0);
                }
                else { LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Question); sNemoPRUIState->leftPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Question, RIDE_MINI_SPRITE_LEFT_X, RIDE_MINI_SPRITE_Y, 0); }
                
                // R-Button option
                if(FlagGet(FLAG_UNLOCKED_POKERIDE_STOUTLAND))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Stoutland);
                    sNemoPRUIState->rightPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Stoutland, RIDE_MINI_SPRITE_RIGHT_X, RIDE_MINI_SPRITE_Y, 0);
                }
                else { LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Question); sNemoPRUIState->rightPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Question, RIDE_MINI_SPRITE_RIGHT_X, RIDE_MINI_SPRITE_Y, 0); }

                // Main Pokémon sprite
                LoadSpritePalette(&sSpritePal_RideSprites);
                if(FlagGet(FLAG_UNLOCKED_POKERIDE_TAUROS))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_RideSprite_Tauros);
                    sNemoPRUIState->ridePokemonSpriteId = CreateSprite(&sSpriteTemplate_RideSprite_Tauros, 120, 54, 0);
                }
                else { LoadCompressedSpriteSheet(&sSpriteSheet_RideSprite_Question); sNemoPRUIState->ridePokemonSpriteId = CreateSprite(&sSpriteTemplate_RideSprite_Question, 120, 54, 0); }
                // sNemoPRUIState->ridePokemonSpriteId = CreateMonPicSprite(SPECIES_TAUROS, FALSE, 0, TRUE, 120, 56, 14, TAG_NONE);
            }    
            break;
        case RIDE_OPTION_STOUTLAND:
            {
                // L-Button option
                if(FlagGet(FLAG_UNLOCKED_POKERIDE_TAUROS))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Tauros);
                    sNemoPRUIState->leftPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Tauros, RIDE_MINI_SPRITE_LEFT_X, RIDE_MINI_SPRITE_Y, 0);
                }
                else { LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Question); sNemoPRUIState->leftPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Question, RIDE_MINI_SPRITE_LEFT_X, RIDE_MINI_SPRITE_Y, 0); }
                
                // R-Button option
                if(FlagGet(FLAG_UNLOCKED_POKERIDE_LAPRAS))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Lapras);
                    sNemoPRUIState->rightPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Lapras, RIDE_MINI_SPRITE_RIGHT_X, RIDE_MINI_SPRITE_Y, 0);
                }
                else { LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Question); sNemoPRUIState->rightPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Question, RIDE_MINI_SPRITE_RIGHT_X, RIDE_MINI_SPRITE_Y, 0); }

                // Main Pokémon sprite
                LoadSpritePalette(&sSpritePal_RideSprites);
                if(FlagGet(FLAG_UNLOCKED_POKERIDE_STOUTLAND))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_RideSprite_Stoutland);
                    sNemoPRUIState->ridePokemonSpriteId = CreateSprite(&sSpriteTemplate_RideSprite_Stoutland, 120, 54, 0);
                }
                else { LoadCompressedSpriteSheet(&sSpriteSheet_RideSprite_Question); sNemoPRUIState->ridePokemonSpriteId = CreateSprite(&sSpriteTemplate_RideSprite_Question, 120, 54, 0); }
                // sNemoPRUIState->ridePokemonSpriteId = CreateMonPicSprite(SPECIES_STOUTLAND, FALSE, 0, TRUE, 120, 56, 14, TAG_NONE);
            }    
            break;
        case RIDE_OPTION_LAPRAS:
            {
                // L-Button option
                if(FlagGet(FLAG_UNLOCKED_POKERIDE_STOUTLAND))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Stoutland);
                    sNemoPRUIState->leftPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Stoutland, RIDE_MINI_SPRITE_LEFT_X, RIDE_MINI_SPRITE_Y, 0);
                }
                else { LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Question); sNemoPRUIState->leftPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Question, RIDE_MINI_SPRITE_LEFT_X, RIDE_MINI_SPRITE_Y, 0); }
                
                // R-Button option
                if(FlagGet(FLAG_UNLOCKED_POKERIDE_DRAMPA))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Drampa);
                    sNemoPRUIState->rightPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Drampa, RIDE_MINI_SPRITE_RIGHT_X, RIDE_MINI_SPRITE_Y, 0);
                }
                else { LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Question); sNemoPRUIState->rightPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Question, RIDE_MINI_SPRITE_RIGHT_X, RIDE_MINI_SPRITE_Y, 0); }

                // Main Pokémon sprite
                LoadSpritePalette(&sSpritePal_RideSprites);
                if(FlagGet(FLAG_UNLOCKED_POKERIDE_LAPRAS))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_RideSprite_Lapras);
                    sNemoPRUIState->ridePokemonSpriteId = CreateSprite(&sSpriteTemplate_RideSprite_Lapras, 120, 54, 0);
                }
                else { LoadCompressedSpriteSheet(&sSpriteSheet_RideSprite_Question); sNemoPRUIState->ridePokemonSpriteId = CreateSprite(&sSpriteTemplate_RideSprite_Question, 120, 54, 0); }
                // sNemoPRUIState->ridePokemonSpriteId = CreateMonPicSprite(SPECIES_LAPRAS, FALSE, 0, TRUE, 120, 56, 14, TAG_NONE);
            }    
            break;
        case RIDE_OPTION_DRAMPA:
            {
                // L-Button option
                if(FlagGet(FLAG_UNLOCKED_POKERIDE_LAPRAS))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Lapras);
                    sNemoPRUIState->leftPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Lapras, RIDE_MINI_SPRITE_LEFT_X, RIDE_MINI_SPRITE_Y, 0);
                }
                else { LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Question); sNemoPRUIState->leftPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Question, RIDE_MINI_SPRITE_LEFT_X, RIDE_MINI_SPRITE_Y, 0); }
                
                // R-Button option
                if(FlagGet(FLAG_UNLOCKED_POKERIDE_FLYGON))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Flygon);
                    sNemoPRUIState->rightPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Flygon, RIDE_MINI_SPRITE_RIGHT_X, RIDE_MINI_SPRITE_Y, 0);
                }
                else { LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Question); sNemoPRUIState->rightPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Question, RIDE_MINI_SPRITE_RIGHT_X, RIDE_MINI_SPRITE_Y, 0); }

                // Main Pokémon sprite
                LoadSpritePalette(&sSpritePal_RideSprites);
                if(FlagGet(FLAG_UNLOCKED_POKERIDE_DRAMPA))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_RideSprite_Drampa);
                    sNemoPRUIState->ridePokemonSpriteId = CreateSprite(&sSpriteTemplate_RideSprite_Drampa, 120, 54, 0);
                }
                else { LoadCompressedSpriteSheet(&sSpriteSheet_RideSprite_Question); sNemoPRUIState->ridePokemonSpriteId = CreateSprite(&sSpriteTemplate_RideSprite_Question, 120, 54, 0); }
                // sNemoPRUIState->ridePokemonSpriteId = CreateMonPicSprite(SPECIES_DRAMPA, FALSE, 0, TRUE, 120, 56, 14, TAG_NONE);
            }    
            break;
        case RIDE_OPTION_FLYGON:
            {
                // L-Button option
                if(FlagGet(FLAG_UNLOCKED_POKERIDE_DRAMPA))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Drampa);
                    sNemoPRUIState->leftPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Drampa, RIDE_MINI_SPRITE_LEFT_X, RIDE_MINI_SPRITE_Y, 0);
                }
                else { LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Question); sNemoPRUIState->leftPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Question, RIDE_MINI_SPRITE_LEFT_X, RIDE_MINI_SPRITE_Y, 0); }
                
                // R-Button option
                if(FlagGet(FLAG_UNLOCKED_POKERIDE_BEWEAR))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Bewear);
                    sNemoPRUIState->rightPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Bewear, RIDE_MINI_SPRITE_RIGHT_X, RIDE_MINI_SPRITE_Y, 0);
                }
                else { LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Question); sNemoPRUIState->rightPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Question, RIDE_MINI_SPRITE_RIGHT_X, RIDE_MINI_SPRITE_Y, 0); }

                // Main Pokémon sprite
                LoadSpritePalette(&sSpritePal_RideSprites);
                if(FlagGet(FLAG_UNLOCKED_POKERIDE_FLYGON))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_RideSprite_Flygon);
                    sNemoPRUIState->ridePokemonSpriteId = CreateSprite(&sSpriteTemplate_RideSprite_Flygon, 120, 54, 0);
                }
                else { LoadCompressedSpriteSheet(&sSpriteSheet_RideSprite_Question); sNemoPRUIState->ridePokemonSpriteId = CreateSprite(&sSpriteTemplate_RideSprite_Question, 120, 54, 0); }
                // sNemoPRUIState->ridePokemonSpriteId = CreateMonPicSprite(SPECIES_FLYGON, FALSE, 0, TRUE, 120, 56, 14, TAG_NONE);
            }    
            break;
        case RIDE_OPTION_BEWEAR:
            {
                // L-Button option
                if(FlagGet(FLAG_UNLOCKED_POKERIDE_FLYGON))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Flygon);
                    sNemoPRUIState->leftPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Flygon, RIDE_MINI_SPRITE_LEFT_X, RIDE_MINI_SPRITE_Y, 0);
                }
                else { LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Question); sNemoPRUIState->leftPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Question, RIDE_MINI_SPRITE_LEFT_X, RIDE_MINI_SPRITE_Y, 0); }
                
                // R-Button option
                if(FlagGet(FLAG_UNLOCKED_POKERIDE_TAUROS))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Tauros);
                    sNemoPRUIState->rightPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Tauros, RIDE_MINI_SPRITE_RIGHT_X, RIDE_MINI_SPRITE_Y, 0);
                }
                else { LoadCompressedSpriteSheet(&sSpriteSheet_RideMiniSprite_Question); sNemoPRUIState->rightPokemonSpriteId = CreateSprite(&sSpriteTemplate_RideMiniSprite_Question, RIDE_MINI_SPRITE_RIGHT_X, RIDE_MINI_SPRITE_Y, 0); }

                // Main Pokémon sprite
                LoadSpritePalette(&sSpritePal_RideSprites);
                if(FlagGet(FLAG_UNLOCKED_POKERIDE_BEWEAR))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_RideSprite_Bewear);
                    sNemoPRUIState->ridePokemonSpriteId = CreateSprite(&sSpriteTemplate_RideSprite_Bewear, 120, 54, 0);
                }
                else { LoadCompressedSpriteSheet(&sSpriteSheet_RideSprite_Question); sNemoPRUIState->ridePokemonSpriteId = CreateSprite(&sSpriteTemplate_RideSprite_Question, 120, 54, 0); }
                // sNemoPRUIState->ridePokemonSpriteId = CreateMonPicSprite(SPECIES_BEWEAR, FALSE, 0, TRUE, 120, 56, 14, TAG_NONE);
            }    
            break;
    }

    // gSprites[sNemoPRUIState->ridePokemonSpriteId].oam.priority = 0;
}


static void NemoPRUI_FreeResources(void)
{
    if (sNemoPRUIState != NULL)
    {
        Free(sNemoPRUIState);
    }
    if (sBg1TilemapBuffer != NULL)
    {
        Free(sBg1TilemapBuffer);
    }
    FreeAllWindowBuffers();
    ResetSpriteData();
}

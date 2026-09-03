// List mostly from Pokabbie's 'rogue_pokedex.c', I figured that's a good reference point for this lol
#include "global.h"
#include "battle.h"
#include "battle_controllers.h"
#include "battle_main.h"
#include "bg.h"
#include "data.h"
#include "daycare.h"
#include "decompress.h"
#include "event_data.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "international_string_util.h"
#include "item.h"
#include "item_menu.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "overworld.h"
#include "palette.h"
#include "party_menu.h"
#include "pokedex.h"
#include "pokemon_icon.h"
#include "region_map.h"
#include "scanline_effect.h"
#include "sound.h"
#include "strings.h"
#include "string_util.h"
#include "task.h"
#include "text.h"
#include "trainer_pokemon_sprites.h"
#include "window.h"

#include "constants/abilities.h"
#include "constants/items.h"
#include "constants/rgb.h"
#include "constants/rtc.h"
#include "constants/songs.h"

#include "nemo_pokedex.h"

// CREDIT:
// Most of this code is gonne be heavily referenced from or lowkey snatched from Pokabbie's `rogue_pokedex.c` script!
// Huge shoutout to them for opening Rogue up for other programmers to reference. Maybe I'll check out some of
// her other features... much to consider

// ------------------------------------- BUGS AND NOTES (8.28.26) ---------------------------------------------
// CRASH BUG:   Sometimes pressing L or R to switch Pokémon leads to an invalid species being loaded.
// <Fixed!>     Idea: Either figure out what's causing that, or remove the L/R thing entirely

// FEATURE BUG: Arrow keys in the mon stats page don't work, they just refresh the page but show
// <Fixed!>     the same basic info (abilities and stat totals).
//              Idea: Double-check the arrow key controls to see how the page loading works

// GFX BUG:     Some Pokémon type icons load the wrong palette and look whack
// <Fixed!>     Idea: Figure out correct palettes, or use a new set of typing sprites designed to look more GBC
//                    and use only one palette. Lowkey I like that second idea better!

// GFX UPDATE:  Need to redo like all the graphics for this stuff to fit with the other menus!
// <Done!>      Idea: Use Anima_Nel UI elements to make changes, staring with the title screen first.
//                    Make sure to keep the manual tilemap filling done in this script in mind!

// FEATURE BUG: Pokémon with less than enough level-up moves to fill up the page (ex: Metapod, Caterpie)
// <Fixed!>     crash the game.
//              Idea: Re-examine the move list code, and add a check for Pokémon with less than X moves,
//                    filling the rest of the space with "---"

// POLISH:      - <Done!> Make gray font darker
//              - <Done!> Center Pokémon name and number in mon info box
//              - <Done!> Center "Regional Dex" and dex variant name text in title screen boxes (also move the right arrow a little to the left!)
//              - <Done!> Shift Pokémon icons down a few pixels in most instances (just by like 2!)

// FEATURE IDEA:    For Region Map, this code has given me inspiration on how to fix the memory error stuff: 
//                  When switching pages in the mon viewer here (i.e., between Stats and Moves), different
//                  tilemaps are loaded. See how this is done and implement it in Region Map!

// ---------------------------------- Definitions ---------------------------------
// Number of columns and rows visible on Overview (grid) screen
#define COLUMN_ENTRY_COUNT 7
#define ROW_ENTRY_COUNT 4
#define OVERVIEW_ENTRY_COUNT (COLUMN_ENTRY_COUNT * ROW_ENTRY_COUNT)


// ---------------------------------- Enumerators ---------------------------------
// Page tracking
enum
{
    PAGE_NONE,

    PAGE_TITLE_SCREEN,
    PAGE_SEARCH,
    PAGE_OVERVIEW,
    PAGE_MON_STATS,
    PAGE_MON_MOVES,
    PAGE_MON_EVOS,
    PAGE_MON_FORMS,

    PAGE_MON_HABITAT, // replaces PAGE_MON_RIDE_STATS

    PAGE_MON_FIRST = PAGE_MON_STATS,
    PAGE_MON_LAST = PAGE_MON_HABITAT,
};

// Sprite tags
enum
{
    MON_SPRITE_FRONT_PIC,
    MON_SPRITE_BACK_PIC,
    MON_SPRITE_ICON,
    MON_SPRITE_TYPE1,
    MON_SPRITE_TYPE2,
    MON_SPRITE_EVO_ICON1,
    MON_SPRITE_EVO_ICON2,
    MON_SPRITE_EVO_ICON3,
    MON_SPRITE_EVO_ICON4,
    MON_SPRITE_COUNT,
};
#define MAX_SPRITE_COUNT max(OVERVIEW_ENTRY_COUNT, MON_SPRITE_COUNT)

// Dex view options (removed `SAFARI_MON` option from rogue_pokedex.c, as Alola doesn't have a Safari Zone)
enum
{
    DEX_VIEW_STANDARD,              // regular pokedex nothing speciton
    DEX_VIEW_SPECIFIC_MON,          // view entry for a specific party mon (support custom mons)
    DEX_VIEW_SELECT_MON,            // select a mon and return it in gSpecialVarResult
};

// Windows
enum
{
    WIN_MON_SPECIES_NAME_NO,
    WIN_MON_PAGE_TITLE,
    WIN_MON_PAGE_CONTENT,
    WIN_TITLE_COUNTERS,
    WIN_TITLE_VARIANT_SELECT,
    WIN_COUNT,
};
static const struct WindowTemplate sMonEntryWinTemplates[WIN_COUNT + 1] =
{
    [WIN_MON_SPECIES_NAME_NO] = 
    {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 14,
        .width = 7,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 1,
    },
    [WIN_MON_PAGE_TITLE] = 
    {
        .bg = 0,
        .tilemapLeft = 15,
        .tilemapTop = 1,
        .width = 11,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 29,
    },
    [WIN_MON_PAGE_CONTENT] = 
    {
        .bg = 0,
        .tilemapLeft = 12,
        .tilemapTop = 3,
        .width = 17,
        .height = 16,
        .paletteNum = 15,
        .baseBlock = 51,
    },

    [WIN_TITLE_COUNTERS] = 
    {
        .bg = 0,
        .tilemapLeft = 3,
        .tilemapTop = 14,
        .width = 4,
        .height = 8,
        .paletteNum = 15,
        .baseBlock = 323,
    },
    [WIN_TITLE_VARIANT_SELECT] = 
    {
        .bg = 0,
        .tilemapLeft = 8,
        .tilemapTop = 14,
        .width = 15,
        .height = 5,
        .paletteNum = 15,
        .baseBlock = 355,
    },

    [WIN_COUNT] = DUMMY_WIN_TEMPLATE,
};


//---------------------------------- Strings ---------------------------------
static const u8 sVariantTitle_Alola[] = _("Alola Region");
static const u8 sVariantTitle_Melemele[] = _("Melemele Island");
static const u8 sVariantTitle_Akala[] = _("Akala Island");
static const u8 sVariantTitle_Ula_Ula[] = _("Ula'ula Island");
static const u8 sVariantTitle_Poni[] = _("Poni Island");
static const u8 sVariantTitle_Ultra[] = _("Ultra Space");

static const u8 sTitle_Stats[] = _("Stats");
static const u8 sTitle_Moves[] = _("Moves");
static const u8 sTitle_Evolutions[] = _("Evolutions");
static const u8 sTitle_Forms[] = _("Forms");
static const u8 sTitle_Habitat[] = _("Habitat");

static const u8 sText_Types[] = _("Types:");
static const u8 sText_Abilities[] = _("Abilities");

static const u8 sText_Total[] = _("Total");

static const u8 sText_HP[] = _("HP");
static const u8 sText_Attack[] = _("Atk");
static const u8 sText_Defence[] = _("Def");
static const u8 sText_SpAttack[] = _("Sp Atk");
static const u8 sText_SpDefence[] = _("Sp Def");
static const u8 sText_Speed[] = _("Speed");

static const u8 sText_Skills[] = _("Skills");
static const u8 sText_SkillClimbing[] = _("Climbing");
static const u8 sText_SkillSurf[] = _("Surfing");
static const u8 sText_SkillFlying[] = _("Flying");
static const u8 sText_SkillNone[] = _("None");

static const u8 sText_Base[] = _("{COLOR RED}{SHADOW LIGHT_RED}Base");
static const u8 sText_Alolan[] = _("{COLOR BLUE}{SHADOW LIGHT_BLUE}Alolan");
static const u8 sText_Galarian[] = _("{COLOR BLUE}{SHADOW LIGHT_BLUE}Galarian");
static const u8 sText_Paldean[] = _("{COLOR BLUE}{SHADOW LIGHT_BLUE}Paldean");
static const u8 sText_Hisuian[] = _("{COLOR BLUE}{SHADOW LIGHT_BLUE}Hisuian");
static const u8 sText_Mega[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}Mega Evolution");
static const u8 sText_Primal[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}Primal Reversion");
static const u8 sText_UltraBurst[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}Ultra Burst");
static const u8 sText_Gigantamax[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}Gigantamax");
static const u8 sText_TeraForm[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}Tera Form");
static const u8 sText_Debug[] = _("{COLOR RED}{SHADOW LIGHT_RED}DEBUG VIEW ONLY");

static const u8 sText_NoFormData[] = _("{COLOR RED}{SHADOW LIGHT_RED}No Form data found");


// --------------------------------- Functions and Variable Declarations ---------------------------------
static void CB2_Nemo_ShowPokedex(void); // From rogue_pokedex: CB2_Rogue_ShowPokedex
static void MainCB2(void);
static void Task_SetupPage(u8);
static void Task_SwapToPage(u8);
static void Task_PageFadeIn(u8);
static void Task_PageWaitForKeyPress(u8);
static void Task_PageFadeOutAndExit(u8);
static void Task_PageFadeOutExitAndRelaunch(u8);
static void DisplayTitleScreenCountersText(void);
static void DisplayTitleDexVariantText(void);
static void DisplayMonEntryText(void);
static void DisplayMonStatsText(void);
static void DisplayMonMovesText(void);
static void DisplayMonEvosText(void);
static void DisplayMonFormsText(void);
static void DisplayMonHabitatText(void); // Replaces DisplayMonRideStatsText
static void InitOverviewBg(void);
static void InitMonEntryWindows(void);
static void DestroyMonEntryWindows(void);
static void InitPageResources(u8 fromPage, u8 toPage);
static void DestroyPageResources(u8 fromPage, u8 toPage);

static void GatherSpeciesStatsArray(u16 species, u8* stats);

static u16 GetVariantSpeciesAt(u8 variant, u16 index);
static u16 GetVariantSpeciesCount(u8 variant);
// static bool8 CheckVariantContainsSpecies(u8 variant, u16 species);

// Title screen
static void TitleScreen_HandleInput(u8);
static void TitleScreen_RefillBg();
static void TitleScreen_RefillStarsBg();

// Overview
static void Overview_HandleInput(u8);
static void Overview_RefillBg();
static void Overview_CreateSprites();
static void Overview_DestroySprites();
static void Overview_SelectSpeciesToDiplay();
static void Overview_FillEntryBg(u8 entryX, u8 entryY, bool8 includeHeader);
static void Overview_FillEntryBg_Selected(u8 entryX, u8 entryY, bool8 includeHeader);
static u8 Overview_GetLastValidActiveIndex();
static u8 Overview_GetMaxScrollAmount();

// MonInfo
static void MonInfo_CreateSprites(bool8 includeType);
static void MonInfo_DestroySprites();

// Mon stats
static void MonStats_HandleInput(u8);

// Mon moves
static void MonMoves_HandleInput(u8);

// Mon evos
static void MonEvos_OpenMoveQuery();
static void MonEvos_HandleInput(u8);
static void MonEvos_CreateSprites();

// Mon forms
static void MonForms_HandleInput(u8);
static void MonForms_CreateSprites();

// Habitat
static void MonHabitat_HandleInput(u8); // Replaced MonRideStats_HandleInput


// --------------------------------------------- Structs ---------------------------------------------

struct PokedexMenu
{
    u8 currentPage;
    u8 desiredPage;
    u8 pageSprites[MAX_SPRITE_COUNT];
    u8 displayArrowTask;
    u16 displayArrowOffset;

    // Title screen
    bool8 titleScreenInEditMode;
    // bool8 titleScreenCursorIdx; // Removed because we don't ever use region-changing

    // Overview
    u16 selectedIdx;
    u16 pageScrollAmount;
    u16 overviewPageSpecies[OVERVIEW_ENTRY_COUNT];
    u16 overviewPageNumbers[OVERVIEW_ENTRY_COUNT];

    // Mon screen
    u32 viewOtId;
    u16 lastCrySpecies;
    u16 viewBaseSpecies;
    u16 listScrollAmount;
    u8 partySlot;
};

struct PokedexViewRequest
{
    u8 view : 7;
    // u8 inBattleScreen : 1; // Remnant of Rogue's ability to view dex in battle; not included in Alolan Seaglass
    u16 dexVariantToRestore; // Repurpose for Island Pokédexes instead of region variants?
    union
    {
        struct
        {
            u32 OtId;
            u16 species;
            u8 partySlot;
        } specificMon;
        struct
        {
            bool8 requireSeen;
            bool8 requireCaught;
        } selectMon;
    } perView;
};

EWRAM_DATA static u8 *sTilemapBufferPtr = NULL;
EWRAM_DATA static struct PokedexMenu* sPokedexMenu = NULL;
EWRAM_DATA static struct PokedexViewRequest sPokedexViewReq = {0};

static void VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

// Renamed from `sDiplomaPalettes` in rogue_pokedex.c, idk why it was called that lol
static const u16 sInfoScreenPalettes[][16] =
{
    INCBIN_U16("graphics/nemo_pokedex/info_screen.gbapal"),
    INCBIN_U16("graphics/nemo_pokedex/info_screen.gbapal"),
};

static const u32 sTitleScreenTilemap[] = INCBIN_U32("graphics/nemo_pokedex/front_page.bin.lz");
static const u32 sTitleScreenTiles[] = INCBIN_U32("graphics/nemo_pokedex/front_page.4bpp.lz");

static const u32 sOverviewTilemap[] = INCBIN_U32("graphics/nemo_pokedex/info_screen.bin.lz");
static const u32 sOverviewTiles[] = INCBIN_U32("graphics/nemo_pokedex/info_screen.4bpp.lz");

static const u32 sPageSplitTableTilemap[] = INCBIN_U32("graphics/nemo_pokedex/page_split_table.bin.lz"); // Used for Stats page
static const u32 sPageListsTilemap[] = INCBIN_U32("graphics/nemo_pokedex/page_list.bin.lz"); // Used for Moves and Habitats pages
static const u32 sPageFormsTilemap[] = INCBIN_U32("graphics/nemo_pokedex/page_forms.bin.lz"); // Used for Evos and Forms pages

// Single tileset (png) used by all tilemaps (above) for simplicity
static const u32 sPageTiles[] = INCBIN_U32("graphics/nemo_pokedex/page_tiles.4bpp.lz");


// --------------------------------------- Number Functions --------------------------------------
static u16 GetSpeciesAtSlot(u8 slot) // Used when opening dex from party menu
{
    return GetMonData(&gPlayerParty[slot], MON_DATA_SPECIES);
}

static u32 GetOtIdAtSlot(u8 slot) // Used when opening dex from party menu
{
    return GetMonData(&gPlayerParty[slot], MON_DATA_OT_ID);
}

static u32 GetHpAtSlot(u8 slot) // Used when opening dex from party menu
{
    return GetMonData(&gPlayerParty[slot], MON_DATA_MAX_HP);
}


// --------------------------------------- Functions: Opening the Pokédex -----------------------------------
static void SetupPokedexViewDefault()
{
    sPokedexViewReq.view = DEX_VIEW_STANDARD;
    sPokedexViewReq.dexVariantToRestore = POKEDEX_INVALID_VARIANT;
    SetMainCallback2(CB2_Nemo_ShowPokedex);
}

void Nemo_ShowPokedexFromMenu(void)
{
    SetupPokedexViewDefault();
    gMain.savedCallback = CB2_ReturnToFullScreenStartMenu; // was CB2_ReturnToFieldWithOpenMenu
}

void Nemo_ShowPokedexFromScript(void)
{
    SetupPokedexViewDefault();
    gMain.savedCallback = CB2_ReturnToFieldContinueScript;
}

void Nemo_ShowPokedexForPartySlot(u8 slot)
{
    SetupPokedexViewDefault();
    gMain.savedCallback = CB2_ReturnToFieldContinueScript;

    // ReturnToPartyMenuSubMenu called below
    sPokedexViewReq.view = DEX_VIEW_SPECIFIC_MON;
    sPokedexViewReq.perView.specificMon.species = GetSpeciesAtSlot(slot);
    sPokedexViewReq.perView.specificMon.OtId = GetOtIdAtSlot(slot);
    sPokedexViewReq.perView.specificMon.partySlot = slot;
}

void Nemo_SelectPokemonInPokedexFromDex(bool8 requireSeen, bool8 requireCaught)
{
    Nemo_SelectPokemonInPokedexFromDexVariant(NemoPokedex_GetDexVariant(), requireSeen, requireCaught);
}

void Nemo_SelectPokemonInPokedexFromDexVariant(u8 variant, bool8 requireSeen, bool8 requireCaught)
{
    SetupPokedexViewDefault();
    gMain.savedCallback = CB2_ReturnToFieldContinueScript;

    sPokedexViewReq.view = DEX_VIEW_SELECT_MON;
    sPokedexViewReq.perView.selectMon.requireSeen = requireSeen;
    sPokedexViewReq.perView.selectMon.requireCaught = requireCaught;

    sPokedexViewReq.dexVariantToRestore = NemoPokedex_GetDexVariant();
    NemoPokedex_SetDexVariant(variant);
}

bool8 Rogue_IsViewingPokedex()
{
    return sPokedexMenu != NULL;
}

static bool8 IsCurrentlySelectingMon()
{
    return sPokedexViewReq.view == DEX_VIEW_SELECT_MON;
}

static void CB2_Nemo_ShowPokedex(void)
{
    u8 i;
    sPokedexMenu = AllocZeroed(sizeof(struct PokedexMenu));
    sPokedexMenu->currentPage = PAGE_NONE;
    sPokedexMenu->desiredPage = PAGE_TITLE_SCREEN;

    sPokedexMenu->lastCrySpecies = SPECIES_NONE;
    sPokedexMenu->viewBaseSpecies = SPECIES_NONE;
    sPokedexMenu->viewOtId = 0;
    sPokedexMenu->partySlot = PARTY_SIZE;

    sPokedexMenu->displayArrowTask = TASK_NONE;

    if(sPokedexViewReq.view == DEX_VIEW_SPECIFIC_MON)
    {
        sPokedexMenu->desiredPage = PAGE_MON_STATS;
        sPokedexMenu->viewBaseSpecies = sPokedexViewReq.perView.specificMon.species;
        sPokedexMenu->viewOtId = sPokedexViewReq.perView.specificMon.OtId;
        sPokedexMenu->partySlot = sPokedexViewReq.perView.specificMon.partySlot;
    }
    else if(IsCurrentlySelectingMon())
    {
        sPokedexMenu->desiredPage = PAGE_OVERVIEW;
    }

    for(i = 0; i < ARRAY_COUNT(sPokedexMenu->pageSprites); ++i)
        sPokedexMenu->pageSprites[i] = SPRITE_NONE;

    SetVBlankCallback(NULL);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0);
    SetGpuReg(REG_OFFSET_BG3CNT, 0);
    SetGpuReg(REG_OFFSET_BG2CNT, 0);
    SetGpuReg(REG_OFFSET_BG1CNT, 0);
    SetGpuReg(REG_OFFSET_BG0CNT, 0);
    SetGpuReg(REG_OFFSET_BG3HOFS, 0);
    SetGpuReg(REG_OFFSET_BG3VOFS, 0);
    SetGpuReg(REG_OFFSET_BG2HOFS, 0);
    SetGpuReg(REG_OFFSET_BG2VOFS, 0);
    SetGpuReg(REG_OFFSET_BG1HOFS, 0);
    SetGpuReg(REG_OFFSET_BG1VOFS, 0);
    SetGpuReg(REG_OFFSET_BG0HOFS, 0);
    SetGpuReg(REG_OFFSET_BG0VOFS, 0);
    // why doesn't this one use the dma manager either?
    DmaFill16(3, 0, VRAM, VRAM_SIZE);
    DmaFill32(3, 0, OAM, OAM_SIZE);
    DmaFill16(3, 0, PLTT, PLTT_SIZE);
    ScanlineEffect_Stop();
    ResetTasks();
    ResetSpriteData();
    ResetPaletteFade();
    FreeAllSpritePalettes();
    LoadPalette(sInfoScreenPalettes, 0, 64);
    sTilemapBufferPtr = Alloc(BG_SCREEN_SIZE);

    InitOverviewBg();
    ResetTempTileDataBuffers();
    
    //DecompressAndCopyTileDataToVram(1, &sOverviewTiles, 0, 0, 0);
    //while (FreeTempTileDataBuffersIfPossible())
    //    ;
    //DecompressDataWithHeaderWram(sOverviewTilemap, sTilemapBufferPtr);
    //CopyBgTilemapBufferToVram(1);

    sPokedexMenu->currentPage = sPokedexMenu->desiredPage;
    InitPageResources(PAGE_NONE, sPokedexMenu->currentPage);

    // Fade into page
    BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);

    EnableInterrupts(1);
    SetVBlankCallback(VBlankCB);
    SetMainCallback2(MainCB2);
    CreateTask(Task_PageFadeIn, 0);

    PlaySE(SE_PC_LOGIN);
}

static void MainCB2(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}


// -------------------------------------- Functions: Loading Pokédex Graphics ----------------------------------------

static const struct BgTemplate sOverviewBgTemplates[2] = // Name was originally sDiplomaBgTemplates for some reason
{
    {
        .bg = 0,
        .charBaseIndex = 1,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0,
    },
    {
        .bg = 1,
        .charBaseIndex = 0,
        .mapBaseIndex = 6,
        .screenSize = 1,
        .paletteMode = 0,
        .priority = 1,
        .baseTile = 0,
    },
};

static void InitOverviewBg(void)
{
    FreeAllWindowBuffers();

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sOverviewBgTemplates, ARRAY_COUNT(sOverviewBgTemplates));
    SetBgTilemapBuffer(1, sTilemapBufferPtr);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    ShowBg(0);
    ShowBg(1);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_BLDALPHA, 0);
    SetGpuReg(REG_OFFSET_BLDY, 0);
}

static void InitPageResources(u8 fromPage, u8 toPage)
{
    sPokedexMenu->listScrollAmount = 0;

    InitOverviewBg();
    ResetTempTileDataBuffers();

    if(toPage == PAGE_OVERVIEW)
        HideBg(0); // Fixes a few broken-looking tiles

    // If we're swapping onto a mon page for the first tile load tiles
    if(toPage >= PAGE_MON_FIRST && toPage <= PAGE_MON_LAST)
    {
        if(fromPage >= PAGE_MON_FIRST && fromPage <= PAGE_MON_LAST)
        {
            // No need + causes VRAM issues
        }
        else
        {
            DecompressAndCopyTileDataToVram(1, &sPageTiles, 0, 0, 0);
            while (FreeTempTileDataBuffersIfPossible())
                ;
        }
    }

    switch (toPage)
    {
    case PAGE_TITLE_SCREEN:
        {
            DecompressAndCopyTileDataToVram(1, &sTitleScreenTiles, 0, 0, 0);
            while (FreeTempTileDataBuffersIfPossible())
                ;
            DecompressDataWithHeaderWram(sTitleScreenTilemap, sTilemapBufferPtr);
            CopyBgTilemapBufferToVram(1);

            InitMonEntryWindows();
            // Text printed below

            TitleScreen_RefillBg();
        }
        break;
        
    case PAGE_OVERVIEW:
        {
            u16 desiredIdx = 0;

            DecompressAndCopyTileDataToVram(1, &sOverviewTiles, 0, 0, 0);
            while (FreeTempTileDataBuffersIfPossible())
                ;
            DecompressDataWithHeaderWram(sOverviewTilemap, sTilemapBufferPtr);
            CopyBgTilemapBufferToVram(1);

            LoadMonIconPalettes();
            //BlendPalettes(PALETTES_ALL, 16, RGB_BLACK); // Ensure the mon icon palettes are faded

            desiredIdx = NemoPokedex_GetSpeciesCurrentNum(sPokedexMenu->viewBaseSpecies);

            // Try and put the location on the mon we were just viewing
            if(desiredIdx != 0) // invalid num
            {
                --desiredIdx;
                sPokedexMenu->pageScrollAmount = 0;

                if(desiredIdx > OVERVIEW_ENTRY_COUNT)
                {
                    sPokedexMenu->pageScrollAmount = min(1 + (desiredIdx - OVERVIEW_ENTRY_COUNT) / COLUMN_ENTRY_COUNT, Overview_GetMaxScrollAmount());
                }

                sPokedexMenu->selectedIdx = desiredIdx - (sPokedexMenu->pageScrollAmount * COLUMN_ENTRY_COUNT);
            }

            Overview_SelectSpeciesToDiplay();
            Overview_RefillBg();
            Overview_CreateSprites();
        }
        break;

    case PAGE_MON_STATS:
        {
            DecompressDataWithHeaderWram(sPageSplitTableTilemap, sTilemapBufferPtr);
            CopyBgTilemapBufferToVram(1);

            InitMonEntryWindows();
            // Text printed below

            LoadMonIconPalettes();

            MonInfo_CreateSprites(TRUE);
        }
        break;

    case PAGE_MON_MOVES:
        {
            DecompressDataWithHeaderWram(sPageListsTilemap, sTilemapBufferPtr);
            CopyBgTilemapBufferToVram(1);

            MonEvos_OpenMoveQuery();

            InitMonEntryWindows();
            // Text printed below

            LoadMonIconPalettes();

            MonInfo_CreateSprites(FALSE);
        }
        break;

    case PAGE_MON_EVOS:
        {
            DecompressDataWithHeaderWram(sPageFormsTilemap, sTilemapBufferPtr);
            CopyBgTilemapBufferToVram(1);

            InitMonEntryWindows();
            // Text printed below

            LoadMonIconPalettes();

            MonInfo_CreateSprites(FALSE);
            MonEvos_CreateSprites();
        }
        break;

    case PAGE_MON_FORMS:
        {
            DecompressDataWithHeaderWram(sPageFormsTilemap, sTilemapBufferPtr);
            CopyBgTilemapBufferToVram(1);

            InitMonEntryWindows();
            // Text printed below

            LoadMonIconPalettes();

            MonInfo_CreateSprites(FALSE);
            MonForms_CreateSprites();
        }
        break;

    case PAGE_MON_HABITAT: // replaces RIDE_STATS
        {
            DecompressDataWithHeaderWram(sPageListsTilemap, sTilemapBufferPtr);
            CopyBgTilemapBufferToVram(1);

            InitMonEntryWindows();
            // Text printed below

            LoadMonIconPalettes();

            MonInfo_CreateSprites(FALSE);
        }
        break;

    default:
        break;
    }
}

static void DestroyPageResources(u8 fromPage, u8 toPage)
{    
    // TODO - Could stop sprites from flashing if we didn't destroy them here

    switch (fromPage)
    {
    case PAGE_TITLE_SCREEN:
        {
            DestroyMonEntryWindows();
        }
        break;

    case PAGE_OVERVIEW:
        {
            Overview_DestroySprites();
            FreeMonIconPalettes();
        }
        break;

    case PAGE_MON_STATS:
    case PAGE_MON_EVOS:
    case PAGE_MON_FORMS:
    case PAGE_MON_HABITAT:
        {
            MonInfo_DestroySprites();
            FreeMonIconPalettes();

            DestroyMonEntryWindows();
        }
        break;

    case PAGE_MON_MOVES:
        {
            // MonEvos_CloseMoveQuery();

            MonInfo_DestroySprites();
            FreeMonIconPalettes();

            DestroyMonEntryWindows();
        }
        break;
    
    default:
        break;
    }

    ResetSpriteData();
    FreeAllSpritePalettes();
    CopyBgTilemapBufferToVram(0);
}


// -------------------------------------- Functions: Page Switching -----------------------------------------------
#define tDoFade data[0]

static void Task_SetupPage(u8 taskId)
{
    DestroyPageResources(sPokedexMenu->currentPage, sPokedexMenu->desiredPage);
    InitPageResources(sPokedexMenu->currentPage, sPokedexMenu->desiredPage);
    
    sPokedexMenu->currentPage = sPokedexMenu->desiredPage;

    if(gTasks[taskId].tDoFade)
    {
        // Fade into page
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
    }

    gTasks[taskId].func = Task_PageFadeIn;
}

static void Task_SwapToPage2(u8);

static void Task_SwapToPage(u8 taskId)
{
    // If we're moving between stats page for the same mon, don't bother doing a fade
    if(sPokedexMenu->currentPage >= PAGE_MON_FIRST && sPokedexMenu->currentPage <= PAGE_MON_LAST && 
        sPokedexMenu->desiredPage >= PAGE_MON_FIRST && sPokedexMenu->desiredPage <= PAGE_MON_LAST)
    {
        gTasks[taskId].tDoFade = FALSE;//(sPokedexMenu->lastCrySpecies != sPokedexMenu->viewBaseSpecies);
    }
    else
    {
        gTasks[taskId].tDoFade = TRUE;
    }

    if(gTasks[taskId].tDoFade)
    {
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    }

    gTasks[taskId].func = Task_SwapToPage2;
}

static void Task_SwapToPage2(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_SetupPage;
}

static void Task_PageFadeIn2(u8 taskId);

static void Task_PageFadeIn(u8 taskId)
{
    // Print text now the fade has started
    switch (sPokedexMenu->currentPage)
    {
    case PAGE_TITLE_SCREEN:
        DisplayTitleScreenCountersText();
        DisplayTitleDexVariantText();
        break;

    case PAGE_MON_STATS:
        DisplayMonEntryText();
        DisplayMonStatsText();
        break;

    case PAGE_MON_MOVES:
        DisplayMonEntryText();
        DisplayMonMovesText();
        break;

    case PAGE_MON_EVOS:
        DisplayMonEntryText();
        DisplayMonEvosText();
        break;

    case PAGE_MON_FORMS:
        DisplayMonEntryText();
        DisplayMonFormsText();
        break;
    
    case PAGE_MON_HABITAT:
        DisplayMonEntryText();
        DisplayMonHabitatText(); // Replaces DisplayMonRideStatsText
        break;

    default:
        break;
    }

    gTasks[taskId].func = Task_PageFadeIn2;
}

static void Task_PageFadeIn2(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        if(sPokedexMenu->currentPage >= PAGE_MON_FIRST && sPokedexMenu->currentPage <= PAGE_MON_LAST)
        {
            if(sPokedexMenu->lastCrySpecies != sPokedexMenu->viewBaseSpecies)
            {
                PlayCry_Normal(sPokedexMenu->viewBaseSpecies, 0);
                sPokedexMenu->lastCrySpecies = sPokedexMenu->viewBaseSpecies;
            }
        }

        gTasks[taskId].func = Task_PageWaitForKeyPress;
    }
}

#undef tDoFade

static void Task_PageWaitForKeyPress(u8 taskId)
{
    switch (sPokedexMenu->currentPage)
    {
    case PAGE_TITLE_SCREEN:
        TitleScreen_HandleInput(taskId);
        break;

    case PAGE_OVERVIEW:
        Overview_HandleInput(taskId);
        break;

    case PAGE_MON_STATS:
        MonStats_HandleInput(taskId);
        break;

    case PAGE_MON_MOVES:
        MonMoves_HandleInput(taskId);
        break;

    case PAGE_MON_EVOS:
        MonEvos_HandleInput(taskId);
        break;

    case PAGE_MON_FORMS:
        MonForms_HandleInput(taskId);
        break;

    case PAGE_MON_HABITAT:
        MonHabitat_HandleInput(taskId);
        break;
    
    default:
        break;
    }
}

static void Task_PageFadeOutExitAndRelaunch(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        if(sPokedexViewReq.dexVariantToRestore != POKEDEX_INVALID_VARIANT)
            NemoPokedex_SetDexVariant(sPokedexViewReq.dexVariantToRestore);

        DestroyPageResources(sPokedexMenu->currentPage, PAGE_NONE);

        Free(sPokedexMenu);
        sPokedexMenu = NULL;

        Free(sTilemapBufferPtr);
        sTilemapBufferPtr = NULL;
        DestroyTask(taskId);

        FreeAllWindowBuffers();

        SetupPokedexViewDefault();
    }
}

static void Task_PageFadeOutAndExit(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        if(sPokedexViewReq.dexVariantToRestore != POKEDEX_INVALID_VARIANT)
            NemoPokedex_SetDexVariant(sPokedexViewReq.dexVariantToRestore);

        DestroyPageResources(sPokedexMenu->currentPage, PAGE_NONE);

        Free(sPokedexMenu);
        sPokedexMenu = NULL;

        Free(sTilemapBufferPtr);
        sTilemapBufferPtr = NULL;

        FreeAllWindowBuffers();
        DestroyTask(taskId);

        if(sPokedexViewReq.view == DEX_VIEW_SPECIFIC_MON)
            ReturnToPartyMenuSubMenu();
        else
            SetMainCallback2(gMain.savedCallback);
    }
}


// --------------------------------------- Functions: Handling Dex Variants and Mon Forms ----------------------------------------
u8 NemoPokedex_GetDexVariant()
{
    u8 dexVariant = gSaveBlock3Ptr->nemoPokedexVariant;

    if(dexVariant <= POKEDEX_VARIANT_END) // If a known variant, return that
        return dexVariant;

    return POKEDEX_VARIANT_DEFAULT; // Fallback: just return the normal Alola dex
}

void NemoPokedex_SetDexVariant(u8 variant)
{
    if(variant <= POKEDEX_VARIANT_END)
        gSaveBlock3Ptr->nemoPokedexVariant = variant;
    else
        gSaveBlock3Ptr->nemoPokedexVariant = POKEDEX_VARIANT_DEFAULT; // Fallback: just set to default ig
}

static bool8 IsAltFormVisible(u16 baseForm, u16 altForm)
{
    if(baseForm == altForm)
        return FALSE;

    // Below is an easter egg Wobbuffet form from Emerald Rogue
    // I'm keeping the code here in case I want to do easter egg forms
    // (actually I was already planning on the Fossil Museum Mining Pikachu... hmmm!)
    // // Hide punching form until the reveal
    // if(altForm == SPECIES_WOBBUFFET_PUNCHING)
    // {
    //     if(Rogue_Use100PercEffects() || Rogue_Use200PercEffects())
    //         return TRUE;
    //     else
    //         return FALSE;
    // }

    {
        // Modified from rogue_pokedex
        // Idrk how this all works, but basically I think weloop through forms until we find the current one? idk
        u32 i;

        const struct FormChange *formChanges = GetSpeciesFormChanges(baseForm);
        for (i = 0; formChanges != NULL && formChanges[i].method != FORM_CHANGE_TERMINATOR; i++)
        {
            if(formChanges[i].targetSpecies == altForm || formChanges[i].method == FORM_CHANGE_TERMINATOR)
                break;
        }
    }

    return TRUE;
}

// Pretty sure this function decides what the species on the grid ("overview") is!
static u16 GetDisplayedOverviewSpecies(u16 species)
{
    // Always display the base species for this slot
    if(IsCurrentlySelectingMon())
        return species;

    // If we haven't seen the base species check if we've seen any variants
    if(!GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_SEEN))
    {
        u8 i;
        u16 const* formTable = GetSpeciesFormTable(species);

        for(i = 0; formTable && formTable[i] != FORM_SPECIES_END; ++i)
        {
		    // Only consider regional variants
            if(gSpeciesInfo[formTable[i]].isAlolanForm || gSpeciesInfo[formTable[i]].isGalarianForm || gSpeciesInfo[formTable[i]].isHisuianForm || gSpeciesInfo[formTable[i]].isPaldeanForm)
            {
                if(GetSetPokedexFlag(SpeciesToNationalPokedexNum(formTable[i]), FLAG_GET_SEEN))
                {
                    return formTable[i];
                }
            }
        }
    }

    return species;
}

// Functions specifically for checking dex progress
static bool8 CheckDexCompletion(u8 caseID)
{
    u16 i;
    u16 species;

    u8 dexVariant = NemoPokedex_GetDexVariant();
    u16 dexCount = GetVariantSpeciesCount(dexVariant);
    
    for (i = 0; i < dexCount; i++)
    {
        species = GetVariantSpeciesAt(dexVariant, i);
        species = GetDisplayedOverviewSpecies(species);

        if (!GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), caseID))
            return FALSE;
    }

    return TRUE;
}

u16 NemoPokedex_CountCaughtMonsForVariant(u16 dexVariant, u8 caseID)
{
    u16 i;
    u16 species;
    u16 count = 0;
    u16 dexCount = GetVariantSpeciesCount(dexVariant);
    
    for (i = 0; i < dexCount; i++)
    {
        species = GetVariantSpeciesAt(dexVariant, i);
        species = GetDisplayedOverviewSpecies(species);

        if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), caseID))
            count++;
    }

    return count;
}

u16 NemoPokedex_CountCurrentCaughtMons(u8 caseID)
{
    return NemoPokedex_CountCaughtMonsForVariant(NemoPokedex_GetDexVariant(), caseID);
}


// ------------------------------------ Functions: Title Screen -----------------------------------------

static void DisplayTitleScreenCountersText(void)
{
    u8 color[3] = { TEXT_COLOR_TRANSPARENT, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_LIGHT_GRAY };
    u8 xCoords = NemoPokedex_GetCurrentDexLimit() > 999 ? 0 : 4; // Alolan Seaglass dex is absolutely less than 1000 but I'll keep it because it's neat
    u8 digits = NemoPokedex_GetCurrentDexLimit() > 999 ? 4 : 3;

    FillWindowPixelBuffer(WIN_TITLE_COUNTERS, PIXEL_FILL(0));

    ConvertUIntToDecimalStringN(gStringVar4, NemoPokedex_CountCurrentCaughtMons(FLAG_GET_SEEN), STR_CONV_MODE_RIGHT_ALIGN, digits);
    AddTextPrinterParameterized4(WIN_TITLE_COUNTERS, FONT_NARROW, xCoords, 0, 0, 0, color, TEXT_SKIP_DRAW, gStringVar4);

    ConvertUIntToDecimalStringN(gStringVar4, NemoPokedex_CountCurrentCaughtMons(FLAG_GET_CAUGHT), STR_CONV_MODE_RIGHT_ALIGN, digits);
    AddTextPrinterParameterized4(WIN_TITLE_COUNTERS, FONT_NARROW, xCoords, 24, 0, 0, color, TEXT_SKIP_DRAW, gStringVar4);

    PutWindowTilemap(WIN_TITLE_COUNTERS);
    CopyWindowToVram(WIN_TITLE_COUNTERS, COPYWIN_FULL);
}

static const struct ScrollArrowsTemplate sTitleScreen_ModeArrowsTemplate_Region =
{
    .firstArrowType = SCROLL_ARROW_LEFT,
    .firstX = 63,
    .firstY = 64,
    .secondArrowType = SCROLL_ARROW_RIGHT,
    .secondX = 184,
    .secondY = 64,
    .fullyUpThreshold = -1,
    .fullyDownThreshold = -1,
    .tileTag = 5325,
    .palTag = 5325,
    .palNum = 0,
};

static const struct ScrollArrowsTemplate sTitleScreen_ModeArrowsTemplate_Game =
{
    .firstArrowType = SCROLL_ARROW_LEFT,
    .firstX = 63,
    .firstY = 144,
    .secondArrowType = SCROLL_ARROW_RIGHT,
    .secondX = 169,
    .secondY = 144,
    .fullyUpThreshold = -1,
    .fullyDownThreshold = -1,
    .tileTag = 5325,
    .palTag = 5325,
    .palNum = 0,
};

static void TitleScreen_AddScrollArrows(void)
{
    AGB_ASSERT(sPokedexMenu != NULL);
    if (sPokedexMenu->displayArrowTask == TASK_NONE)
    {
        // if(sPokedexMenu->titleScreenCursorIdx == 0)
        //     sPokedexMenu->displayArrowTask = AddScrollIndicatorArrowPair(&sTitleScreen_ModeArrowsTemplate_Region, &sPokedexMenu->displayArrowOffset);
        // else
        //     sPokedexMenu->displayArrowTask = AddScrollIndicatorArrowPair(&sTitleScreen_ModeArrowsTemplate_Game, &sPokedexMenu->displayArrowOffset);
        
        // Just use variant arrows I think
        sPokedexMenu->displayArrowTask = AddScrollIndicatorArrowPair(&sTitleScreen_ModeArrowsTemplate_Game, &sPokedexMenu->displayArrowOffset);
    }
}

static void TitleScreen_RemoveScrollArrows(void)
{
    AGB_ASSERT(sPokedexMenu != NULL);
    if (sPokedexMenu->displayArrowTask != TASK_NONE)
    {
        RemoveScrollIndicatorArrowPair(sPokedexMenu->displayArrowTask);
        sPokedexMenu->displayArrowTask = TASK_NONE;
    }
}

static void TitleScreen_HandleInput(u8 taskId)
{
    if(sPokedexMenu->titleScreenInEditMode)
    {
        if (JOY_NEW(A_BUTTON | B_BUTTON | SELECT_BUTTON))
        {
            sPokedexMenu->titleScreenInEditMode = FALSE;
            PlaySE(SE_PIN);

            //DisplayTitleScreenCountersText();
            DisplayTitleDexVariantText();
            TitleScreen_RemoveScrollArrows();
        }
        // else if(JOY_NEW(DPAD_UP | DPAD_DOWN)) // Feature removed because we're just doing variant changing, not region changing
        // {
        //     PlaySE(SE_SELECT);
        //     sPokedexMenu->titleScreenCursorIdx = (sPokedexMenu->titleScreenCursorIdx + 1) % 2;
        //     DisplayTitleDexVariantText();
        //     TitleScreen_RemoveScrollArrows();
        //     TitleScreen_AddScrollArrows();
        // }
        else if(JOY_REPEAT(DPAD_LEFT))
        {
            // Edit variant
            u8 variant = NemoPokedex_GetDexVariant();

            if(variant <= POKEDEX_VARIANT_END)
            {
                PlaySE(SE_SELECT);

                if(variant == POKEDEX_VARIANT_START)
                    variant = POKEDEX_VARIANT_END; // Loops back around to Ultra Dex
                else
                    variant--;

                NemoPokedex_SetDexVariant(variant);
            }
            else // Fallback
            {
                // ???
                PlaySE(SE_FAILURE);
            }

            DisplayTitleDexVariantText();
            DisplayTitleScreenCountersText();
            TitleScreen_RefillStarsBg();
        }
        else if(JOY_REPEAT(DPAD_RIGHT))
        {
            // Edit variant
            u8 variant = NemoPokedex_GetDexVariant();

            if(variant <= POKEDEX_VARIANT_END)
            {
                PlaySE(SE_SELECT);

                if(variant == POKEDEX_VARIANT_END)
                    variant = POKEDEX_VARIANT_START; // Loops back around to Alola Dex
                else
                    variant++;

                NemoPokedex_SetDexVariant(variant);
            }
            else // Fallback
            {
                // ???
                PlaySE(SE_FAILURE);
            }

            DisplayTitleDexVariantText();
            DisplayTitleScreenCountersText();
            TitleScreen_RefillStarsBg();
        }
    }
    else
    {
        if (JOY_NEW(A_BUTTON))
        {
            sPokedexMenu->pageScrollAmount = 0;
            sPokedexMenu->selectedIdx = 0;

            sPokedexMenu->desiredPage = PAGE_OVERVIEW;
            gTasks[taskId].func = Task_SwapToPage;

            PlaySE(SE_WIN_OPEN);
        }
        else if (JOY_NEW(B_BUTTON))
        {
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            gTasks[taskId].func = Task_PageFadeOutAndExit;

            PlaySE(SE_PC_OFF);
        }
        else if (JOY_NEW(SELECT_BUTTON))
        {
            sPokedexMenu->titleScreenInEditMode = TRUE;
            PlaySE(SE_PIN);

            //DisplayTitleScreenCountersText();
            DisplayTitleDexVariantText();
            TitleScreen_AddScrollArrows();
        }
    }
}

#define FLIP_VERTICAL (0x08 << 8)
#define FLIP_HORIZONTAL (0x04 << 8)

static void TitleScreen_RefillBg()
{
    // Add stars for the full completion
    if(CheckDexCompletion(FLAG_GET_SEEN))
    {
        FillBgTilemapBufferRect_Palette0(1, 0xFC, 5, 14, 1, 1);
        FillBgTilemapBufferRect_Palette0(1, 0xFC, 6, 14, 1, 1);
        FillBgTilemapBufferRect_Palette0(1, 0xFC | FLIP_HORIZONTAL, 5, 15, 1, 1);
        FillBgTilemapBufferRect_Palette0(1, 0xFC | FLIP_HORIZONTAL, 6, 15, 1, 1);
    }

    if(CheckDexCompletion(FLAG_GET_CAUGHT))
    {
        FillBgTilemapBufferRect_Palette0(1, 0x5C, 5, 10, 1, 1);
        FillBgTilemapBufferRect_Palette0(1, 0x5D, 6, 10, 1, 1);
        FillBgTilemapBufferRect_Palette0(1, 0x66, 5, 11, 1, 1);
        FillBgTilemapBufferRect_Palette0(1, 0x67, 6, 11, 1, 1);
    }

    // if(CheckDexCompletion(FLAG_GET_CAUGHT_SHINY))
    // {
    //     FillBgTilemapBufferRect_Palette0(1, 0x5C, 5, 13, 1, 1);
    //     FillBgTilemapBufferRect_Palette0(1, 0x5D, 6, 13, 1, 1);
    //     FillBgTilemapBufferRect_Palette0(1, 0x66, 5, 14, 1, 1);
    //     FillBgTilemapBufferRect_Palette0(1, 0x67, 6, 14, 1, 1);
    // }

    TitleScreen_RefillStarsBg();
}

static void TitleScreen_RefillStarsBg()
{
    if(CheckDexCompletion(FLAG_GET_SEEN))
    {
        FillBgTilemapBufferRect_Palette0(1, 0x127, 5, 14, 1, 1);
        FillBgTilemapBufferRect_Palette0(1, 0x128, 6, 14, 1, 1);
        FillBgTilemapBufferRect_Palette0(1, 0x129, 5, 15, 1, 1);
        FillBgTilemapBufferRect_Palette0(1, 0x12A, 6, 15, 1, 1);
    }
    else
    {
        FillBgTilemapBufferRect_Palette0(1, 0xFB, 5, 14, 1, 1);
        FillBgTilemapBufferRect_Palette0(1, 0xFC, 6, 14, 1, 1);
        FillBgTilemapBufferRect_Palette0(1, 0xFB | FLIP_VERTICAL, 5, 15, 1, 1);
        FillBgTilemapBufferRect_Palette0(1, 0xFC | FLIP_VERTICAL, 6, 15, 1, 1);
    }

    if(CheckDexCompletion(FLAG_GET_CAUGHT))
    {
        FillBgTilemapBufferRect_Palette0(1, 0x127, 5, 17, 1, 1);
        FillBgTilemapBufferRect_Palette0(1, 0x128, 6, 17, 1, 1);
        FillBgTilemapBufferRect_Palette0(1, 0x129, 5, 18, 1, 1);
        FillBgTilemapBufferRect_Palette0(1, 0x12A, 6, 18, 1, 1);
    }
    else
    {
        FillBgTilemapBufferRect_Palette0(1, 0xFB, 5, 17, 1, 1);
        FillBgTilemapBufferRect_Palette0(1, 0xFC, 6, 17, 1, 1);
        FillBgTilemapBufferRect_Palette0(1, 0xFB | FLIP_VERTICAL, 5, 18, 1, 1);
        FillBgTilemapBufferRect_Palette0(1, 0xFC | FLIP_VERTICAL, 6, 18, 1, 1);
    }

    // if(CheckDexCompletion(FLAG_GET_CAUGHT_SHINY))
    // {
    //     FillBgTilemapBufferRect_Palette0(1, 0x5C, 5, 13, 1, 1);
    //     FillBgTilemapBufferRect_Palette0(1, 0x5D, 6, 13, 1, 1);
    //     FillBgTilemapBufferRect_Palette0(1, 0x66, 5, 14, 1, 1);
    //     FillBgTilemapBufferRect_Palette0(1, 0x67, 6, 14, 1, 1);
    // }
    // else
    // {
    //     FillBgTilemapBufferRect_Palette0(1, 0x48, 5, 13, 1, 1);
    //     FillBgTilemapBufferRect_Palette0(1, 0x49, 6, 13, 1, 1);
    //     FillBgTilemapBufferRect_Palette0(1, 0x48 | FLIP_VERTICAL, 5, 14, 1, 1);
    //     FillBgTilemapBufferRect_Palette0(1, 0x49 | FLIP_VERTICAL, 6, 14, 1, 1);
    // }

    ScheduleBgCopyTilemapToVram(1);
}

static const u8* GetDexVariantName() // No GetDexRegionName included because it's all in Alola in this game!
{
    u8 variant = NemoPokedex_GetDexVariant();

    switch(variant)
    {
        default:
        case POKEDEX_VARIANT_ALOLA:
            return sVariantTitle_Alola;
            break;
        case POKEDEX_VARIANT_MELEMELE:
            return sVariantTitle_Melemele;
            break;
        case POKEDEX_VARIANT_AKALA:
            return sVariantTitle_Akala;
            break;
        case POKEDEX_VARIANT_ULA_ULA:
            return sVariantTitle_Ula_Ula;
            break;
        case POKEDEX_VARIANT_PONI:
            return sVariantTitle_Poni;
            break;
        case POKEDEX_VARIANT_ULTRA:
            return sVariantTitle_Ultra;
            break;
    }

    return gText_ThreeQuestionMarks;
}

static void AddTitleText(u8 const* title)
{
    u8 color[3] = { TEXT_COLOR_TRANSPARENT, TEXT_COLOR_WHITE, TEXT_COLOR_DARK_GRAY };
    u16 offset;

    FillWindowPixelBuffer(WIN_MON_PAGE_TITLE, PIXEL_FILL(0));
    
    offset = GetStringCenterAlignXOffset(FONT_NORMAL, title, sMonEntryWinTemplates[WIN_MON_PAGE_TITLE].width * 8);
    AddTextPrinterParameterized4(WIN_MON_PAGE_TITLE, FONT_NORMAL, offset, 1, 0, 0, color, TEXT_SKIP_DRAW, title);

    PutWindowTilemap(WIN_MON_PAGE_TITLE);
    CopyWindowToVram(WIN_MON_PAGE_TITLE, COPYWIN_FULL);
}

static void DisplayTitleDexVariantText(void)
{
    u8 color[3] = { TEXT_COLOR_TRANSPARENT, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_LIGHT_GRAY };

    FillWindowPixelBuffer(WIN_TITLE_VARIANT_SELECT, PIXEL_FILL(0));

    u16 offset = GetStringCenterAlignXOffset(FONT_NARROW, COMPOUND_STRING("Regional Dex"), sMonEntryWinTemplates[WIN_TITLE_VARIANT_SELECT].width * 8);
    AddTextPrinterParameterized4(WIN_TITLE_VARIANT_SELECT, FONT_NARROW, offset - 8, 0, 0, 0, color, TEXT_SKIP_DRAW, COMPOUND_STRING("Regional Dex"));

    offset = GetStringCenterAlignXOffset(FONT_NARROW, GetDexVariantName(), sMonEntryWinTemplates[WIN_TITLE_VARIANT_SELECT].width * 8);
    AddTextPrinterParameterized4(WIN_TITLE_VARIANT_SELECT, FONT_NARROW, offset - 8, 24, 0, 0, color, TEXT_SKIP_DRAW, GetDexVariantName());

    PutWindowTilemap(WIN_TITLE_VARIANT_SELECT);
    CopyWindowToVram(WIN_TITLE_VARIANT_SELECT, COPYWIN_FULL);
}

static void DisplayMonEntryText(void)
{
    u8 color[3] = { TEXT_COLOR_TRANSPARENT, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_LIGHT_GRAY };
    u16 speciesNum = NemoPokedex_GetSpeciesCurrentNum(sPokedexMenu->viewBaseSpecies);
    
    ConvertUIntToDecimalStringN(gStringVar1, speciesNum, STR_CONV_MODE_LEADING_ZEROS, speciesNum > 999 ? 4 : 3);
    StringExpandPlaceholders(gStringVar3, gText_NumberStr1);

    u16 offset = GetStringCenterAlignXOffset(FONT_NARROW, GetSpeciesName(sPokedexMenu->viewBaseSpecies), sMonEntryWinTemplates[WIN_MON_SPECIES_NAME_NO].width * 8);
    AddTextPrinterParameterized4(WIN_MON_SPECIES_NAME_NO, FONT_NARROW, offset + 5, 1, 0, 0, color, TEXT_SKIP_DRAW, GetSpeciesName(sPokedexMenu->viewBaseSpecies));
    offset = GetStringCenterAlignXOffset(FONT_NARROW, gStringVar3, sMonEntryWinTemplates[WIN_MON_SPECIES_NAME_NO].width * 8);
    AddTextPrinterParameterized4(WIN_MON_SPECIES_NAME_NO, FONT_NARROW, offset + 5, 17, 0, 0, color, TEXT_SKIP_DRAW, gStringVar3);

    PutWindowTilemap(WIN_MON_SPECIES_NAME_NO);
    CopyWindowToVram(WIN_MON_SPECIES_NAME_NO, COPYWIN_FULL);
}


// -------------------------------- Functions: Stats Display -----------------------------------------

// extern const u8 gAbilityNames[][ABILITY_NAME_LENGTH + 1];

#define GET_STAT_COLOUR(stat) GET_STAT_COLOUR_RANGE(stats[stat], bestStatValue, worstStatValue)
#define GET_STAT_COLOUR_RANGE(value, bestValue, worstColor) (value >= bestValue ? bestStatColor : (value <= worstColor ? worstStatColor : statColor))

static void DisplayMonStatsText(void)
{
    u8 i;
    const u8 ySpacing = 16;
    u8 headerColor[3] = { TEXT_COLOR_TRANSPARENT, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_LIGHT_GRAY };
    u8 statColor[3] = { TEXT_COLOR_TRANSPARENT, TEXT_COLOR_BLUE, TEXT_COLOR_LIGHT_GRAY };

    AddTitleText(sTitle_Stats);

    FillWindowPixelBuffer(WIN_MON_PAGE_CONTENT, PIXEL_FILL(0));

    // Print types (Sprites display types setup later)
    AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NORMAL, 4, 1, 0, 0, headerColor, TEXT_SKIP_DRAW, sText_Types);
    StringCopy(gStringVar1, gTypesInfo[gSpeciesInfo[sPokedexMenu->viewBaseSpecies].types[0]].name);
    if(gSpeciesInfo[sPokedexMenu->viewBaseSpecies].types[0] != gSpeciesInfo[sPokedexMenu->viewBaseSpecies].types[1])
    {
        StringAppend(gStringVar1, COMPOUND_STRING(" / "));
        StringAppend(gStringVar1, gTypesInfo[gSpeciesInfo[sPokedexMenu->viewBaseSpecies].types[1]].name);
    }
    AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NORMAL, GetStringRightAlignXOffset(FONT_NORMAL, gStringVar1, 129), 1, 0, 0, headerColor, TEXT_SKIP_DRAW, gStringVar1);

    // Print abilities
    {
        u16 prevAbility = ABILITY_NONE;
        u8 j = 1;

        AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NORMAL, 4, 1 + ySpacing * j, 0, 0, headerColor, TEXT_SKIP_DRAW, sText_Abilities);
        ++j;

        for(i = 0; i < NUM_ABILITY_SLOTS; ++i)
        {
            enum Ability ability = GetAbilityBySpecies(sPokedexMenu->viewBaseSpecies, i);

            if(ability != ABILITY_NONE && ability != prevAbility)
            {
                AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 4, 1 + ySpacing * j, 0, 0, statColor, TEXT_SKIP_DRAW, gAbilitiesInfo[ability].name);
                prevAbility = ability;
                ++j;
            }
            else
            {
                AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 4, 1 + ySpacing * j, 0, 0, statColor, TEXT_SKIP_DRAW, gText_Dash);
                prevAbility = ability;
                ++j;
            }
        }
    }

    // Print stats
    {
        u16 bst;
        u8 stats[NUM_STATS];
        u8 bestStatValue;
        u8 worstStatValue;
        u8 bestStatColor[3] = { TEXT_COLOR_TRANSPARENT, TEXT_COLOR_GREEN, TEXT_COLOR_LIGHT_GRAY };
        u8 worstStatColor[3] = { TEXT_COLOR_TRANSPARENT, TEXT_COLOR_RED, TEXT_COLOR_LIGHT_GRAY };
        i = 0;

        GatherSpeciesStatsArray(sPokedexMenu->viewBaseSpecies, stats);
        bestStatValue = stats[NemoPokedex_GetSpeciesBestStat(sPokedexMenu->viewBaseSpecies)];
        worstStatValue = stats[NemoPokedex_GetSpeciesWorstStat(sPokedexMenu->viewBaseSpecies)];
        bst = NemoPokedex_GetSpeciesBST(sPokedexMenu->viewBaseSpecies);

        // Total
        ++i;
        AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NORMAL, 72, 1 + ySpacing * i, 0, 0, headerColor, TEXT_SKIP_DRAW, sText_Total);

        ConvertUIntToDecimalStringN(gStringVar4, bst, STR_CONV_MODE_RIGHT_ALIGN, 3);
        AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 115, 1 + ySpacing * i, 0, 0, GET_STAT_COLOUR_RANGE(bst, 600, 299), TEXT_SKIP_DRAW, gStringVar4);

        // HP
        ++i;
        AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NORMAL, 72, 1 + ySpacing * i, 0, 0, headerColor, TEXT_SKIP_DRAW, sText_HP);

        ConvertUIntToDecimalStringN(gStringVar4, stats[STAT_HP], STR_CONV_MODE_RIGHT_ALIGN, 3);
        AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 115, 1 + ySpacing * i, 0, 0, GET_STAT_COLOUR(STAT_HP), TEXT_SKIP_DRAW, gStringVar4);

        // Attack
        ++i;
        AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NORMAL, 72, 1 + ySpacing * i, 0, 0, headerColor, TEXT_SKIP_DRAW, sText_Attack);
        
        ConvertUIntToDecimalStringN(gStringVar4, stats[STAT_ATK], STR_CONV_MODE_RIGHT_ALIGN, 3);
        AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 115, 1 + ySpacing * i, 0, 0, GET_STAT_COLOUR(STAT_ATK), TEXT_SKIP_DRAW, gStringVar4);

        // Def
        ++i;
        AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NORMAL, 72, 1 + ySpacing * i, 0, 0, headerColor, TEXT_SKIP_DRAW, sText_Defence);
        
        ConvertUIntToDecimalStringN(gStringVar4, stats[STAT_DEF], STR_CONV_MODE_RIGHT_ALIGN, 3);
        AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 115, 1 + ySpacing * i, 0, 0, GET_STAT_COLOUR(STAT_DEF), TEXT_SKIP_DRAW, gStringVar4);

        // SpAttack
        ++i;
        AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NORMAL, 72, 1 + ySpacing * i, 0, 0, headerColor, TEXT_SKIP_DRAW, sText_SpAttack);
        
        ConvertUIntToDecimalStringN(gStringVar4, stats[STAT_SPATK], STR_CONV_MODE_RIGHT_ALIGN, 3);
        AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 115, 1 + ySpacing * i, 0, 0, GET_STAT_COLOUR(STAT_SPATK), TEXT_SKIP_DRAW, gStringVar4);

        // SpDef
        ++i;
        AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NORMAL, 72, 1 + ySpacing * i, 0, 0, headerColor, TEXT_SKIP_DRAW, sText_SpDefence);
        
        ConvertUIntToDecimalStringN(gStringVar4, stats[STAT_SPDEF], STR_CONV_MODE_RIGHT_ALIGN, 3);
        AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 115, 1 + ySpacing * i, 0, 0, GET_STAT_COLOUR(STAT_SPDEF), TEXT_SKIP_DRAW, gStringVar4);

        // Speed
        ++i;
        // Move 1 pixel higher
        AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NORMAL, 72, 0 + ySpacing * i, 0, 0, headerColor, TEXT_SKIP_DRAW, sText_Speed);

        ConvertUIntToDecimalStringN(gStringVar4, stats[STAT_SPEED], STR_CONV_MODE_RIGHT_ALIGN, 3);
        AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 115, 1 + ySpacing * i, 0, 0, GET_STAT_COLOUR(STAT_SPEED), TEXT_SKIP_DRAW, gStringVar4);
    }

    PutWindowTilemap(WIN_MON_PAGE_CONTENT);
    CopyWindowToVram(WIN_MON_PAGE_CONTENT, COPYWIN_FULL);
}

#undef GET_STAT_COLOUR
#undef GET_STAT_COLOUR_RANGE

#define MAX_LIST_DISPLAY_COUNT 8

static u16 GetMaxMoveScrollOffset()
{
    u8 i;
    u16 count = 0;
    u16 species = sPokedexMenu->viewBaseSpecies;

    const struct LevelUpMove *learnset;
    learnset = GetSpeciesLevelUpLearnset(species);

    // Level up
    for (i = 0; TRUE; i++)
    {
        if (learnset[i].move == MOVE_NONE || learnset[i].move == LEVEL_UP_MOVE_END)
            break;
        ++count;
    }

    // // Tutor/TM moves
    // const u16 *teachableLearnset = GetSpeciesTeachableLearnset(species);
    // for (i = 0; teachableLearnset[i] != MOVE_UNAVAILABLE; i++)
    // {
    //     ++count;
    // }

    return count - min(count, MAX_LIST_DISPLAY_COUNT);
}

static void DisplayMonMovesText()
{
    u8 i;
    u8 listIndex = 0;
    u8 displayCount = 0;
    const u8 ySpacing = 16;
    u8 color[3] = { TEXT_COLOR_TRANSPARENT, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_LIGHT_GRAY };
    u16 species = sPokedexMenu->viewBaseSpecies;

    AddTitleText(sTitle_Moves);

    FillWindowPixelBuffer(WIN_MON_PAGE_CONTENT, PIXEL_FILL(0));

    // Level moves
    const struct LevelUpMove *learnset;
    learnset = GetSpeciesLevelUpLearnset(species);

    {
        for (i = 0; displayCount < MAX_LIST_DISPLAY_COUNT && learnset[i].move != LEVEL_UP_MOVE_END; i++)
        {
            if (learnset[i].move == MOVE_NONE)
                break;

            if(learnset[i].level == 0)
            {
                // Is evo move
                StringCopy(gStringVar1, gMovesInfo[learnset[i].move].name);
                StringExpandPlaceholders(gStringVar3, gText_PokedexMovesEvo);
            }
            else
            { 
                ConvertUIntToDecimalStringN(gStringVar1, learnset[i].level, STR_CONV_MODE_RIGHT_ALIGN, 2);
                StringCopy(gStringVar2, gMovesInfo[learnset[i].move].name);
                StringExpandPlaceholders(gStringVar3, gText_PokedexMovesLevel);
            }
            
            if(listIndex >= sPokedexMenu->listScrollAmount)
            {
                AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 4, ySpacing * displayCount, 0, 0, color, TEXT_SKIP_DRAW, gStringVar3);
                ++displayCount;
            }
            ++listIndex;
        }
    }

    // // TM moves
    // if(displayCount < MAX_LIST_DISPLAY_COUNT)
    // {
    //     const u16 *teachableLearnset = GetSpeciesTeachableLearnset(species);

    //     for(i = 0; displayCount < MAX_LIST_DISPLAY_COUNT; ++i)
    //     {
    //         if(teachableLearnset[i] == MOVE_NONE || teachableLearnset[i] == MOVE_UNAVAILABLE)
    //             break;
            
    //         if(listIndex >= sPokedexMenu->listScrollAmount)
    //         {
    //             StringCopy(gStringVar1, gMovesInfo[teachableLearnset[i]].name);
    //             StringExpandPlaceholders(gStringVar2, gText_PokedexMovesTM);

    //             AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 4, ySpacing * displayCount, 0, 0, color, TEXT_SKIP_DRAW, gStringVar2);
    //             ++displayCount;
    //         }
    //         ++listIndex;
    //     }
    // }

    PutWindowTilemap(WIN_MON_PAGE_CONTENT);
    CopyWindowToVram(WIN_MON_PAGE_CONTENT, COPYWIN_FULL);
}

static u16 GetMaxEvoScrollOffset()
{
    u8 i;
    u8 count = 0;
    const struct Evolution *evolutions = GetSpeciesEvolutions(sPokedexMenu->viewBaseSpecies);

    for(i = 0; evolutions[i].method != EVOLUTIONS_END; ++i)
    {
        if(evolutions[i].targetSpecies == SPECIES_NONE)
            continue;

        ++count;
    }

    return count != 0 ? count - 1 : 0;
}

static u16 GetActiveEvoSpecies()
{
    u8 i;
    u8 listIndex = 0;
    const struct Evolution *evolutions = GetSpeciesEvolutions(sPokedexMenu->viewBaseSpecies);

    for(i = 0; evolutions[i].method != EVOLUTIONS_END; ++i)
    {
        if(evolutions[i].targetSpecies == SPECIES_NONE)
            continue;

        if(listIndex >= sPokedexMenu->listScrollAmount)
            return evolutions[i].targetSpecies;

        ++listIndex;
    }

    return SPECIES_NONE;
}

static u16 GetMaxFormScrollOffset()
{
    u8 i;
    u8 count = 0;
    u16 const* formTable = GetSpeciesFormTable(sPokedexMenu->viewBaseSpecies);

    for(i = 0; formTable && formTable[i] != FORM_SPECIES_END; ++i)
    {
        if(IsAltFormVisible(sPokedexMenu->viewBaseSpecies, formTable[i]))
            ++count;
    }

    return count != 0 ? count - 1 : 0;
}

static u16 GetActiveFormSpecies()
{
    u8 i;
    u8 listIndex = 0;
    u16 const* formTable = GetSpeciesFormTable(sPokedexMenu->viewBaseSpecies);

    for(i = 0; formTable && formTable[i] != FORM_SPECIES_END; ++i)
    {
        if(IsAltFormVisible(sPokedexMenu->viewBaseSpecies, formTable[i]))
        {
            if(listIndex >= sPokedexMenu->listScrollAmount)
                return formTable[i];

            ++listIndex;
        }
    }

    return SPECIES_NONE;
}

static void DisplayMonEvosText()
{
    u8 i;
    const u8 ySpacing = 16;
    u8 color[3] = { TEXT_COLOR_TRANSPARENT, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_LIGHT_GRAY };
    u8 listIndex = 0;
    u8 displayCount = 0;
    const struct Evolution *evolutions = GetSpeciesEvolutions(sPokedexMenu->viewBaseSpecies);
    u32 arg; // shorthand for some of the more mathy evolutions (from pokedex_plus_hgss)

    AddTitleText(sTitle_Evolutions);

    FillWindowPixelBuffer(WIN_MON_PAGE_CONTENT, PIXEL_FILL(0));

    for(i = 0; evolutions[i].method != EVOLUTIONS_END && displayCount < MAX_LIST_DISPLAY_COUNT; ++i)
    {
        if(evolutions[i].targetSpecies == SPECIES_NONE)
            continue;

        if(listIndex >= sPokedexMenu->listScrollAmount)
        {
            switch((enum EvolutionMethods)evolutions[i].method) // Adapted from Pokedex Plus HGSS
            {
                default:
                case EVO_NONE:
                    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Unknown"));
                    break;
                case EVO_LEVEL:
                case EVO_LEVEL_BATTLE_ONLY:
                    StringCopy(gStringVar4, COMPOUND_STRING("{LV}{UP_ARROW}"));
                    if (evolutions[i].param > 1)
                    {
                        ConvertIntToDecimalStringN(gStringVar1, evolutions[i].param, STR_CONV_MODE_LEFT_ALIGN, 2); //level
                        StringAppend(gStringVar4, gStringVar1);
                    }
                    if ((enum EvolutionMethods)evolutions[i].method == EVO_LEVEL_BATTLE_ONLY)
                        StringAppend(gStringVar4, COMPOUND_STRING(", in battle"));
                    break;
                case EVO_TRADE:
                    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Trading"));
                    break;
                case EVO_ITEM:
                    CopyItemName(evolutions[i].param, gStringVar1);
                    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{STR_VAR_2} is used"));
                    break;
                case EVO_SPLIT_FROM_EVO:
                    StringCopy(gStringVar4, COMPOUND_STRING("Splits from "));
                    StringAppend(gStringVar4, GetSpeciesName(evolutions[i].param)); //mon name
                    break;
                case EVO_BATTLE_END:
                    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("End battle"));
                    break;
            };

            // From pokedex_plus_hgss.c
            // Check for additional conditions. Skips if there's no additional conditions.
            for (u32 j = 0; evolutions[i].params != NULL && evolutions[i].params[j].condition != CONDITIONS_END; j++)
            {
                if (j == 0)
                {
                    StringAppend(gStringVar4, COMPOUND_STRING(", "));
                }

                enum EvolutionConditions condition = evolutions[i].params[j].condition;
                switch (condition)
                {
                // Gen 2
                case IF_GENDER:
                    switch (evolutions[i].params[j].arg1)
                    {
                    case MON_MALE:   StringAppend(gStringVar4, COMPOUND_STRING("Male"));   break;
                    case MON_FEMALE: StringAppend(gStringVar4, COMPOUND_STRING("Female")); break;
                    }
                    break;
                case IF_MIN_FRIENDSHIP:
                    StringAppend(gStringVar4, COMPOUND_STRING("{UP_ARROW_2}friendship"));
                    break;
                case IF_ATK_GT_DEF:
                    StringAppend(gStringVar4, COMPOUND_STRING("Atk > Def"));
                    break;
                case IF_ATK_EQ_DEF:
                    StringAppend(gStringVar4, COMPOUND_STRING("Atk = Def"));
                    break;
                case IF_ATK_LT_DEF:
                    StringAppend(gStringVar4, COMPOUND_STRING("Atk < Def"));
                    break;
                case IF_TIME:
                    switch (evolutions[i].params[j].arg1)
                    {
                    case TIME_MORNING: StringAppend(gStringVar4, COMPOUND_STRING("Morning")); break;
                    case TIME_DAY:     StringAppend(gStringVar4, COMPOUND_STRING("Day"));     break;
                    case TIME_EVENING: StringAppend(gStringVar4, COMPOUND_STRING("Evening")); break;
                    case TIME_NIGHT:   StringAppend(gStringVar4, COMPOUND_STRING("Night"));   break;
                    }
                    break;
                case IF_NOT_TIME:
                    switch (evolutions[i].params[j].arg1)
                    {
                    case TIME_MORNING: StringAppend(gStringVar4, COMPOUND_STRING("NOT Morning")); break;
                    case TIME_DAY:     StringAppend(gStringVar4, COMPOUND_STRING("NOT Day"));     break;
                    case TIME_EVENING: StringAppend(gStringVar4, COMPOUND_STRING("NOT Evening")); break;
                    case TIME_NIGHT:   StringAppend(gStringVar4, COMPOUND_STRING("Day"));         break; // More intuitive than "NOT Night"
                    }
                    break;
                case IF_HOLD_ITEM:
                    StringAppend(gStringVar4, COMPOUND_STRING("holds "));
                    CopyItemName(evolutions[i].params[j].arg1, gStringVar1); //item
                    StringAppend(gStringVar4, gStringVar1);
                    break;
                // Gen 3
                case IF_PID_UPPER_MODULO_10_GT:
                case IF_PID_UPPER_MODULO_10_EQ:
                case IF_PID_UPPER_MODULO_10_LT:
                    arg = evolutions[i].params[j].arg1;
                        if (condition == IF_PID_UPPER_MODULO_10_GT
                            && arg < 10 && arg >= 0)
                            arg = 9 - arg;
                        else if (condition == IF_PID_UPPER_MODULO_10_EQ
                             && arg < 10 && arg >= 0)
                            arg = 1;
                    ConvertIntToDecimalStringN(gStringVar1, arg * 10, STR_CONV_MODE_LEFT_ALIGN, 3);
                    StringAppend(gStringVar4, COMPOUND_STRING("random %"));
                    StringAppend(gStringVar4, gStringVar1);
                    break;
                case IF_MIN_BEAUTY:
                    StringAppend(gStringVar4, COMPOUND_STRING("{UP_ARROW_2}beauty"));
                    break;
                case IF_MIN_COOLNESS:
                    StringAppend(gStringVar4, COMPOUND_STRING("{UP_ARROW_2}coolness"));
                    break;
                case IF_MIN_SMARTNESS:
                    StringAppend(gStringVar4, COMPOUND_STRING("{UP_ARROW_2}smartness"));
                    break;
                case IF_MIN_TOUGHNESS:
                    StringAppend(gStringVar4, COMPOUND_STRING("{UP_ARROW_2}toughness"));
                    break;
                case IF_MIN_CUTENESS:
                    StringAppend(gStringVar4, COMPOUND_STRING("{UP_ARROW_2}cuteness"));
                    break;
                // Gen 4
                case IF_SPECIES_IN_PARTY:
                    StringAppend(gStringVar4, GetSpeciesName(evolutions[i].params[j].arg1)); //mon name
                    StringAppend(gStringVar4, COMPOUND_STRING(" in party"));
                    break;
                case IF_IN_MAPSEC:
                    StringAppend(gStringVar4, COMPOUND_STRING("in "));
                    StringCopy(gStringVar1, gRegionMapEntries[evolutions[i].params[j].arg1].name);
                    StringAppend(gStringVar4, gStringVar1);
                    break;
                case IF_IN_MAP:
                    StringAppend(gStringVar4, COMPOUND_STRING("in "));
                    GetMapName(gStringVar1, Overworld_GetMapHeaderByGroupAndId(evolutions[i].params[j].arg1 >> 8, evolutions[i].params[j].arg1 & 0xFF)->regionMapSectionId, 0);
                    StringAppend(gStringVar4, gStringVar1);
                    break;
                case IF_KNOWS_MOVE:
                    StringAppend(gStringVar4, COMPOUND_STRING("knows "));
                    StringAppend(gStringVar4, GetMoveName(evolutions[i].params[j].arg1));
                    break;
                // Gen 5
                case IF_TRADE_PARTNER_SPECIES:
                    StringAppend(gStringVar4, COMPOUND_STRING("traded with "));
                    StringAppend(gStringVar4, GetSpeciesName(evolutions[i].params[j].arg1));
                    break;
                // Gen 6
                case IF_TYPE_IN_PARTY:
                    StringAppend(gStringVar4, gTypesInfo[evolutions[i].params[j].arg1].name); //type name
                    StringAppend(gStringVar4, COMPOUND_STRING("-type in party"));
                    break;
                case IF_WEATHER:
                    StringAppend(gStringVar4, COMPOUND_STRING("weather "));
                    StringAppend(gStringVar4, GetWeatherName(evolutions[i].params[j].arg1));
                    break;
                case IF_KNOWS_MOVE_TYPE:
                    StringAppend(gStringVar4, gTypesInfo[evolutions[i].params[j].arg1].name);
                    StringAppend(gStringVar4, COMPOUND_STRING(" move"));
                    break;
                case IF_REGION:
                case IF_NOT_REGION:
                {
                    if (condition == IF_REGION)
                        StringAppend(gStringVar4, COMPOUND_STRING("in "));
                    else if (condition == IF_NOT_REGION)
                        StringAppend(gStringVar4, COMPOUND_STRING("out of "));

                    switch ((enum Region)evolutions[i].params[j].arg1)
                    {
                    case REGION_NONE:
                    case REGIONS_COUNT:
                        StringAppend(gStringVar4, COMPOUND_STRING("???"));
                        break;
                    case REGION_KANTO: StringAppend(gStringVar4, COMPOUND_STRING("Kanto")); break;
                    case REGION_JOHTO: StringAppend(gStringVar4, COMPOUND_STRING("Johto")); break;
                    case REGION_HOENN: StringAppend(gStringVar4, COMPOUND_STRING("Hoenn")); break;
                    case REGION_SINNOH: StringAppend(gStringVar4, COMPOUND_STRING("Sinnoh")); break;
                    case REGION_UNOVA: StringAppend(gStringVar4, COMPOUND_STRING("Unova")); break;
                    case REGION_KALOS: StringAppend(gStringVar4, COMPOUND_STRING("Kalos")); break;
                    case REGION_ALOLA: StringAppend(gStringVar4, COMPOUND_STRING("Alola")); break;
                    case REGION_GALAR: StringAppend(gStringVar4, COMPOUND_STRING("Galar")); break;
                    case REGION_HISUI: StringAppend(gStringVar4, COMPOUND_STRING("Hisui")); break;
                    case REGION_PALDEA: StringAppend(gStringVar4, COMPOUND_STRING("Paldea")); break;
                    }
                    break;
                }
                // Gen 8
                case IF_NATURE:
                    StringCopy(gStringVar1, gNaturesInfo[evolutions[i].params[j].arg1].name);
                    StringAppend(gStringVar4, gStringVar1);
                    StringAppend(gStringVar4, COMPOUND_STRING(" nature"));
                    break;
                case IF_AMPED_NATURE:
                    StringAppend(gStringVar4, COMPOUND_STRING("amped natures"));
                    break;
                case IF_LOW_KEY_NATURE:
                    StringAppend(gStringVar4, COMPOUND_STRING("low-Key natures"));
                    break;
                case IF_RECOIL_DAMAGE_GE:
                    StringAppend(gStringVar4, COMPOUND_STRING("takes >= "));
                    ConvertIntToDecimalStringN(gStringVar1, evolutions[i].params[j].arg1, STR_CONV_MODE_LEFT_ALIGN, 3);
                    StringAppend(gStringVar4, gStringVar1);
                    StringAppend(gStringVar4, COMPOUND_STRING(" recoil dmg"));
                    break;
                case IF_CURRENT_DAMAGE_GE:
                    ConvertIntToDecimalStringN(gStringVar1, evolutions[i].params[j].arg1, STR_CONV_MODE_LEFT_ALIGN, 3);
                    StringAppend(gStringVar4, gStringVar1);
                    StringAppend(gStringVar4, COMPOUND_STRING(" current dmg"));
                    break;
                case IF_CRITICAL_HITS_GE:
                    ConvertIntToDecimalStringN(gStringVar1, evolutions[i].params[j].arg1, STR_CONV_MODE_LEFT_ALIGN, 2);
                    StringAppend(gStringVar4, gStringVar1);
                    StringAppend(gStringVar4, COMPOUND_STRING(" critical hits"));
                    break;
                case IF_USED_MOVE_X_TIMES:
                    StringAppend(gStringVar4, COMPOUND_STRING("use move "));
                    StringAppend(gStringVar4, GetMoveName(evolutions[i].params[j].arg1));
                    StringAppend(gStringVar4, COMPOUND_STRING(" "));
                    ConvertIntToDecimalStringN(gStringVar1, evolutions[i].params[j].arg2, STR_CONV_MODE_LEFT_ALIGN, 3);
                    StringAppend(gStringVar4, gStringVar1);
                    StringAppend(gStringVar4, COMPOUND_STRING(" times"));
                    break;
                // Gen 9
                case IF_DEFEAT_X_WITH_ITEMS:
                    StringAppend(gStringVar4, COMPOUND_STRING("defeat "));
                    ConvertIntToDecimalStringN(gStringVar1, evolutions[i].params[j].arg3, STR_CONV_MODE_LEFT_ALIGN, 3);
                    StringAppend(gStringVar4, gStringVar1);
                    StringAppend(gStringVar4, COMPOUND_STRING(" "));
                    StringAppend(gStringVar4, GetSpeciesName(evolutions[i].params[j].arg1));
                    StringAppend(gStringVar4, COMPOUND_STRING(" that hold "));
                    CopyItemName(evolutions[i].params[j].arg2, gStringVar1);
                    StringAppend(gStringVar4, gStringVar1);
                    break;
                case IF_PID_MODULO_100_GT:
                case IF_PID_MODULO_100_EQ:
                case IF_PID_MODULO_100_LT:
                    arg = evolutions[i].params[j].arg1;
                        if (condition == IF_PID_MODULO_100_GT
                            && arg < 100 && arg >= 0)
                            arg = 99 - arg;
                        else if (condition == IF_PID_MODULO_100_EQ
                                 && arg < 100 && arg >= 0)
                            arg = 1;
                    ConvertIntToDecimalStringN(gStringVar1, arg, STR_CONV_MODE_LEFT_ALIGN, 3);
                    StringAppend(gStringVar4, COMPOUND_STRING("%"));
                    StringAppend(gStringVar4, gStringVar1);
                    break;
                case IF_MIN_OVERWORLD_STEPS:
                    StringAppend(gStringVar4, COMPOUND_STRING("after "));
                    ConvertIntToDecimalStringN(gStringVar1, evolutions[i].params[j].arg1, STR_CONV_MODE_LEFT_ALIGN, 4);
                    StringAppend(gStringVar4, gStringVar1);
                    StringAppend(gStringVar4, COMPOUND_STRING(" steps"));
                    break;
                case IF_BAG_ITEM_COUNT:
                    ConvertIntToDecimalStringN(gStringVar1, evolutions[i].params[j].arg2, STR_CONV_MODE_LEFT_ALIGN, 3);
                    StringAppend(gStringVar4, gStringVar1);
                    StringAppend(gStringVar4, COMPOUND_STRING(" "));
                    CopyItemNameHandlePlural(evolutions[i].params[j].arg1, gStringVar1, evolutions[i].params[j].arg2);
                    StringAppend(gStringVar4, gStringVar1);
                    StringAppend(gStringVar4, COMPOUND_STRING(" in bag"));
                    break;
                case CONDITIONS_END:
                    break;
                }

                if (evolutions[i].params[j+1].condition != CONDITIONS_END)
                {
                    StringAppend(gStringVar4, COMPOUND_STRING(", "));
                }
            }

            // Add arrow
            if(displayCount == 0)
                AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 35, ySpacing * displayCount, 0, 0, color, TEXT_SKIP_DRAW, gText_SelectorArrow);

            if(GetSetPokedexFlag(SpeciesToNationalPokedexNum(evolutions[i].targetSpecies), FLAG_GET_SEEN))
            {
                AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 35 + (displayCount == 0 ? 8 : 0), ySpacing * displayCount, 0, 0, color, TEXT_SKIP_DRAW, GetSpeciesName(evolutions[i].targetSpecies));
                ++displayCount;
            }
            else
            {
                AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 35 + (displayCount == 0 ? 8 : 0), ySpacing * displayCount, 0, 0, color, TEXT_SKIP_DRAW, gText_FiveMarks);
                ++displayCount;
            }

            AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 35, ySpacing * displayCount, 0, 0, color, TEXT_SKIP_DRAW, gStringVar4);
            ++displayCount;
        }
        ++listIndex;
    }

    if(displayCount == 0)
    {
        AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 15, 0, 0, 0, color, TEXT_SKIP_DRAW, COMPOUND_STRING("No Evolution Data"));
    }

    PutWindowTilemap(WIN_MON_PAGE_CONTENT);
    CopyWindowToVram(WIN_MON_PAGE_CONTENT, COPYWIN_FULL);
}

static void DisplayMonFormsText()
{
    u8 i;
    const u8 ySpacing = 16;
    u8 color[3] = { TEXT_COLOR_TRANSPARENT, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_LIGHT_GRAY };
    u8 listIndex = 0;
    u8 displayCount = 0;
    u16 const* formTable = GetSpeciesFormTable(sPokedexMenu->viewBaseSpecies);

    AddTitleText(sTitle_Forms);

    FillWindowPixelBuffer(WIN_MON_PAGE_CONTENT, PIXEL_FILL(0));

    for(i = 0; formTable && formTable[i] != FORM_SPECIES_END && displayCount < 8; ++i)
    {
        if(IsAltFormVisible(sPokedexMenu->viewBaseSpecies, formTable[i]))
        {
            if(listIndex >= sPokedexMenu->listScrollAmount)
            {
                // Add arrow
                if(displayCount == 0)
                    AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 35, ySpacing * displayCount, 0, 0, color, TEXT_SKIP_DRAW, gText_SelectorArrow);

                if(GetSetPokedexFlag(SpeciesToNationalPokedexNum(formTable[i]), FLAG_GET_SEEN))
                {
                    AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 35 + (displayCount == 0 ? 8 : 0), ySpacing * displayCount, 0, 0, color, TEXT_SKIP_DRAW, GetSpeciesName(formTable[i]));
                    ++displayCount;
                }
                else
                {
                    AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 35 + (displayCount == 0 ? 8 : 0), ySpacing * displayCount, 0, 0, color, TEXT_SKIP_DRAW, gText_FiveMarks);
                    ++displayCount;
                }

                if(gSpeciesInfo[formTable[i]].isAlolanForm)
                {
                    AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 35, ySpacing * displayCount, 0, 0, color, TEXT_SKIP_DRAW, sText_Alolan);
                }
                else if(gSpeciesInfo[formTable[i]].isGalarianForm)
                {
                    AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 35, ySpacing * displayCount, 0, 0, color, TEXT_SKIP_DRAW, sText_Galarian);
                }
                else if(gSpeciesInfo[formTable[i]].isPaldeanForm)
                {
                    AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 35, ySpacing * displayCount, 0, 0, color, TEXT_SKIP_DRAW, sText_Paldean);
                }
                else if(gSpeciesInfo[formTable[i]].isHisuianForm)
                {
                    AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 35, ySpacing * displayCount, 0, 0, color, TEXT_SKIP_DRAW, sText_Hisuian);
                }
                else if(gSpeciesInfo[formTable[i]].isMegaEvolution)
                {
                    AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 35, ySpacing * displayCount, 0, 0, color, TEXT_SKIP_DRAW, sText_Mega);
                }
                else if(gSpeciesInfo[formTable[i]].isPrimalReversion)
                {
                    AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 35, ySpacing * displayCount, 0, 0, color, TEXT_SKIP_DRAW, sText_Primal);
                }
                else if(gSpeciesInfo[formTable[i]].isUltraBurst)
                {
                    AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 35, ySpacing * displayCount, 0, 0, color, TEXT_SKIP_DRAW, sText_UltraBurst);
                }
                else if(gSpeciesInfo[formTable[i]].isGigantamax)
                {
                    AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 35, ySpacing * displayCount, 0, 0, color, TEXT_SKIP_DRAW, sText_Gigantamax);
                }
                else if(gSpeciesInfo[formTable[i]].isTeraForm)
                {
                    AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 35, ySpacing * displayCount, 0, 0, color, TEXT_SKIP_DRAW, sText_TeraForm);
                }
                else if(GET_BASE_SPECIES_ID(sPokedexMenu->viewBaseSpecies) == formTable[i])
                {
                    AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 35, ySpacing * displayCount, 0, 0, color, TEXT_SKIP_DRAW, sText_Base);
                }

                //AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, 35, ySpacing * displayCount, 0, 0, color, TEXT_SKIP_DRAW, gStringVar4);
                ++displayCount;
            }
            ++listIndex;
        }
    }

    if(displayCount == 0)
    {
        u16 offset = GetStringCenterAlignXOffset(FONT_NARROW, sText_NoFormData, sMonEntryWinTemplates[WIN_MON_PAGE_CONTENT].width * 8);
        AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, offset, 0, 0, 0, color, TEXT_SKIP_DRAW, sText_NoFormData);
    }

    PutWindowTilemap(WIN_MON_PAGE_CONTENT);
    CopyWindowToVram(WIN_MON_PAGE_CONTENT, COPYWIN_FULL);
}

static void DisplayMonHabitatText() // Replaces DisplayMonRideStats from rogue_pokedex.c
{
    const u8 ySpacing = 16;
    u8 headerColor[3] = { TEXT_COLOR_TRANSPARENT, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_LIGHT_GRAY };
    u8 statColor[3] = { TEXT_COLOR_TRANSPARENT, TEXT_COLOR_BLUE, TEXT_COLOR_LIGHT_GRAY };

    AddTitleText(sTitle_Habitat);

    FillWindowPixelBuffer(WIN_MON_PAGE_CONTENT, PIXEL_FILL(0));

    // PLACEHOLDER
    // TODO: Put a list of where Pokémon are found ("Habitats" (e.g., 'Grasslands', 'Tropic Forest') or specific locations)
    u16 offset = GetStringCenterAlignXOffset(FONT_NARROW, COMPOUND_STRING("HABITAT PLACEHOLDER"), sMonEntryWinTemplates[WIN_MON_PAGE_CONTENT].width * 8);
    AddTextPrinterParameterized4(WIN_MON_PAGE_CONTENT, FONT_NARROW, offset, 0, 0, 0, statColor, TEXT_SKIP_DRAW, COMPOUND_STRING("HABITAT PLACEHOLDER"));

    PutWindowTilemap(WIN_MON_PAGE_CONTENT);
    CopyWindowToVram(WIN_MON_PAGE_CONTENT, COPYWIN_FULL);
}

static void InitMonEntryWindows(void)
{
    u8 i;

    InitWindows(sMonEntryWinTemplates);
    DeactivateAllTextPrinters();
    LoadPalette(gStandardMenuPalette, 0xF0, 0x20);
    
    for(i = 0; i < WIN_COUNT; ++i)
    {
        FillWindowPixelBuffer(i, PIXEL_FILL(0));
        PutWindowTilemap(i);
    }
}

static void DestroyMonEntryWindows(void)
{
    u8 i;

    for(i = 0; i < WIN_COUNT; ++i)
    {
        ClearStdWindowAndFrameToTransparent(i, TRUE);
        RemoveWindow(i);
    }

    FreeAllWindowBuffers();
}


// -------------------------------------- Functions: Overview Windows and Input -------------------------------------

enum
{
    ENTRY_TYPE_NONE,        // background
    ENTRY_TYPE_DISABLED,
    ENTRY_TYPE_EMPTY, 
    ENTRY_TYPE_QUESTION_MARK, // ?
    ENTRY_TYPE_SEEN,
    ENTRY_TYPE_CAUGHT,
};

enum
{
    ENTRY_DIR_LEFT,
    ENTRY_DIR_CENTRE,
    ENTRY_DIR_RIGHT,
    ENTRY_DIR_COUNT
};

#define HEADER_EMPTY 0x0E
#define HEADER_BLACK 0x43
#define HEADER_NUM0  0x0D
#define HEADER_NUM1  0x03
#define HEADER_NUM2  0x04
#define HEADER_NUM3  0x05
#define HEADER_NUM4  0x07
#define HEADER_NUM5  0x08
#define HEADER_NUM6  0x09
#define HEADER_NUM7  0x0A
#define HEADER_NUM8  0x0B
#define HEADER_NUM9  0x0C

static u8 Overview_SelectDigitTile(u8 digit, u8 isSelected)
{
    u8 tileOffset = 0;
    if(isSelected)
        tileOffset = 0x4F;

    switch (digit)
    {
    case 0:
        return HEADER_NUM0 + tileOffset;
    case 1:
        return HEADER_NUM1 + tileOffset;
    case 2:
        return HEADER_NUM2 + tileOffset;
    case 3:
        return HEADER_NUM3 + tileOffset;
    case 4:
        return HEADER_NUM4 + tileOffset;
    case 5:
        return HEADER_NUM5 + tileOffset;
    case 6:
        return HEADER_NUM6 + tileOffset;
    case 7:
        return HEADER_NUM7 + tileOffset;
    case 8:
        return HEADER_NUM8 + tileOffset;
    case 9:
        return HEADER_NUM9 + tileOffset;
    }

    return HEADER_EMPTY;
}

static bool32 GetSpeciesDisplayDexFlag(u16 species, u8 dexFlag)
{
    return GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), dexFlag);
}

static u8 Overview_GetEntryType(s8 entryX, s8 entryY, s8 deltaX, s8 deltaY)
{
    u8 idx;
    u16 species;

    entryX += deltaX;
    entryY += deltaY;

    if(entryX < 0 || entryX >= COLUMN_ENTRY_COUNT)
        return ENTRY_TYPE_NONE;

    if(entryY < 0 || entryY >= ROW_ENTRY_COUNT)
        return ENTRY_TYPE_NONE;

    idx = entryX + entryY * COLUMN_ENTRY_COUNT;
    species = sPokedexMenu->overviewPageSpecies[idx];

    if(species == SPECIES_NONE)
        return ENTRY_TYPE_DISABLED;

        
    // We don't care if we've seen this mon or not
    if(IsCurrentlySelectingMon())
    {
        if(
            (!sPokedexViewReq.perView.selectMon.requireSeen || GetSpeciesDisplayDexFlag(species, FLAG_GET_SEEN)) &&
            (!sPokedexViewReq.perView.selectMon.requireCaught || GetSpeciesDisplayDexFlag(species, FLAG_GET_CAUGHT))
        )
        {
            // Display icons based on dex state
            // if(GetSpeciesDisplayDexFlag(species, FLAG_GET_CAUGHT_SHINY))
            //     return ENTRY_TYPE_CAUGHT_SHINY;
            if(GetSpeciesDisplayDexFlag(species, FLAG_GET_CAUGHT))
                return ENTRY_TYPE_CAUGHT;
            else if(GetSpeciesDisplayDexFlag(species, FLAG_GET_SEEN))
                return ENTRY_TYPE_SEEN;
        }
    }
    else
    {
        // Display icons based on dex state
        // if(GetSpeciesDisplayDexFlag(species, FLAG_GET_CAUGHT_SHINY))
        //     return ENTRY_TYPE_CAUGHT_SHINY;
        if(GetSpeciesDisplayDexFlag(species, FLAG_GET_CAUGHT))
            return ENTRY_TYPE_CAUGHT;
        else if(GetSpeciesDisplayDexFlag(species, FLAG_GET_SEEN))
            return ENTRY_TYPE_SEEN;
    }

    return ENTRY_TYPE_QUESTION_MARK;
}

static bool8 Overview_IsEntrySelected(s8 entryX, s8 entryY, s8 deltaX, s8 deltaY)
{
    entryX += deltaX;
    entryY += deltaY;

    if(entryX < 0 || entryX >= COLUMN_ENTRY_COUNT)
        return FALSE;

    if(entryY < 0 || entryY >= ROW_ENTRY_COUNT)
        return FALSE;

    return entryX + entryY * COLUMN_ENTRY_COUNT == sPokedexMenu->selectedIdx;
}

static void Overview_FillEntryTileBoundary_Header(u8 tileX, u8 tileY, u8 leftType, u8 rightType, bool8 leftSelected, bool8 rightSelected, u8 isSelected, u8 mode)
{
    switch (leftType) // Checking entry to the left of current box
    {
    case ENTRY_TYPE_NONE:
        if(rightType == ENTRY_TYPE_DISABLED)
            FillBgTilemapBufferRect_Palette0(1, 0x42, tileX + 0, tileY + 0, 1, 1);
        else
        {
            if(!isSelected)
                FillBgTilemapBufferRect_Palette0(1, 0x02, tileX + 0, tileY + 0, 1, 1);
            else
                FillBgTilemapBufferRect_Palette0(1, 0x4F | FLIP_VERTICAL, tileX + 0, tileY + 0, 1, 1);
        }
        break;

    case ENTRY_TYPE_DISABLED:
        if(rightType == ENTRY_TYPE_NONE)
            FillBgTilemapBufferRect_Palette0(1, 0x42 | FLIP_HORIZONTAL, tileX + 0, tileY + 0, 1, 1);
        else if(rightType == ENTRY_TYPE_DISABLED)
            FillBgTilemapBufferRect_Palette0(1, 0x45, tileX + 0, tileY + 0, 1, 1);
        else
        {
            if(!isSelected)
                FillBgTilemapBufferRect_Palette0(1, 0x44, tileX + 0, tileY + 0, 1, 1);
            else
                FillBgTilemapBufferRect_Palette0(1, 0x4F | FLIP_VERTICAL, tileX + 0, tileY + 0, 1, 1);
        }
        break;

    default:
        if(rightType == ENTRY_TYPE_NONE)
        {
            if(!isSelected)
                FillBgTilemapBufferRect_Palette0(1, 0x02 | FLIP_HORIZONTAL, tileX + 0, tileY + 0, 1, 1);
            else
                FillBgTilemapBufferRect_Palette0(1, 0x5D | FLIP_HORIZONTAL, tileX + 0, tileY + 0, 1, 1);
        }
        else if(rightType == ENTRY_TYPE_DISABLED)
        {
            if(!isSelected)
                FillBgTilemapBufferRect_Palette0(1, 0x44 | FLIP_HORIZONTAL, tileX + 0, tileY + 0, 1, 1);
            else
                FillBgTilemapBufferRect_Palette0(1, 0x5D | FLIP_HORIZONTAL, tileX + 0, tileY + 0, 1, 1);
        }
        else
        {
            if(mode == 2) // Filling right column
            {
                if(!isSelected)
                    FillBgTilemapBufferRect_Palette0(1, 0x06, tileX + 0, tileY + 0, 1, 1);
                else
                {
                    if(rightSelected)
                        FillBgTilemapBufferRect_Palette0(1, 0x5E | FLIP_HORIZONTAL, tileX + 0, tileY + 0, 1, 1);
                    else
                        FillBgTilemapBufferRect_Palette0(1, 0x5E, tileX + 0, tileY + 0, 1, 1);
                }
            }
            else // Filling middle/left columns
            {
                if(leftSelected)
                    FillBgTilemapBufferRect_Palette0(1, 0x5E, tileX + 0, tileY + 0, 1, 1);
                else if(rightSelected)
                    FillBgTilemapBufferRect_Palette0(1, 0x5E | FLIP_HORIZONTAL, tileX + 0, tileY + 0, 1, 1);
                // else if(Overview_GetEntryType((tileX - 1) / 4, tileY / 5, 1, 0) == ENTRY_TYPE_NONE)
                //     FillBgTilemapBufferRect_Palette0(1, 0x5D | FLIP_HORIZONTAL, tileX + 0, tileY + 0, 1, 1);
                else
                    FillBgTilemapBufferRect_Palette0(1, 0x06, tileX + 0, tileY + 0, 1, 1);
            }
        }
        break;
    }
}

static void Overview_FillEntryTileBoundary_Body(u8 tileX, u8 tileY, u8 leftType, u8 rightType, bool8 leftSelected, bool8 rightSelected)
{
    switch (leftType)
    {
    case ENTRY_TYPE_NONE:
        if(rightType == ENTRY_TYPE_DISABLED)
        {
            FillBgTilemapBufferRect_Palette0(1, 0x42, tileX + 0, tileY + 1, 1, 3);
            FillBgTilemapBufferRect_Palette0(1, 0x4B, tileX + 0, tileY + 4, 1, 1);
        }
        else
        {
            if(rightSelected)
            {
                FillBgTilemapBufferRect_Palette0(1, 0x29, tileX + 0, tileY + 1, 1, 1);
                FillBgTilemapBufferRect_Palette0(1, 0x2F, tileX + 0, tileY + 2, 1, 2);
                FillBgTilemapBufferRect_Palette0(1, 0x33, tileX + 0, tileY + 4, 1, 1);
            }
            else
            {
                FillBgTilemapBufferRect_Palette0(1, 0x11, tileX + 0, tileY + 1, 1, 1);
                FillBgTilemapBufferRect_Palette0(1, 0x17, tileX + 0, tileY + 2, 1, 2);
                FillBgTilemapBufferRect_Palette0(1, 0x20, tileX + 0, tileY + 4, 1, 1);
            }
        }
        break;

    case ENTRY_TYPE_DISABLED:
        if(rightType == ENTRY_TYPE_NONE)
        {
            FillBgTilemapBufferRect_Palette0(1, 0x42 | FLIP_HORIZONTAL, tileX + 0, tileY + 1, 1, 3);
            FillBgTilemapBufferRect_Palette0(1, 0x4B | FLIP_HORIZONTAL, tileX + 0, tileY + 4, 1, 1);
        }
        else if(rightType == ENTRY_TYPE_DISABLED)
        {
            FillBgTilemapBufferRect_Palette0(1, 0x45, tileX + 0, tileY + 1, 1, 3);
            FillBgTilemapBufferRect_Palette0(1, 0x4E, tileX + 0, tileY + 4, 1, 1);
        }
        else
        {
            if(rightSelected)
            {
                FillBgTilemapBufferRect_Palette0(1, 0x47, tileX + 0, tileY + 1, 1, 1);
                FillBgTilemapBufferRect_Palette0(1, 0x49, tileX + 0, tileY + 2, 1, 2);
                FillBgTilemapBufferRect_Palette0(1, 0x4F, tileX + 0, tileY + 4, 1, 1);
            }
            else
            {
                FillBgTilemapBufferRect_Palette0(1, 0x46, tileX + 0, tileY + 1, 1, 1);
                FillBgTilemapBufferRect_Palette0(1, 0x48, tileX + 0, tileY + 2, 1, 2);
                FillBgTilemapBufferRect_Palette0(1, 0x4D, tileX + 0, tileY + 4, 1, 1);
            }
        }
        break;

    default:
        if(leftSelected)
        {
            if(rightType == ENTRY_TYPE_NONE)
            {
                FillBgTilemapBufferRect_Palette0(1, 0x29 | FLIP_HORIZONTAL, tileX + 0, tileY + 1, 1, 1);
                FillBgTilemapBufferRect_Palette0(1, 0x2F | FLIP_HORIZONTAL, tileX + 0, tileY + 2, 1, 2);
                FillBgTilemapBufferRect_Palette0(1, 0x33 | FLIP_HORIZONTAL, tileX + 0, tileY + 4, 1, 1);
            }
            else if(rightType == ENTRY_TYPE_DISABLED)
            {
                FillBgTilemapBufferRect_Palette0(1, 0x47 | FLIP_HORIZONTAL, tileX + 0, tileY + 1, 1, 1);
                FillBgTilemapBufferRect_Palette0(1, 0x49 | FLIP_HORIZONTAL, tileX + 0, tileY + 2, 1, 2);
                FillBgTilemapBufferRect_Palette0(1, 0x4F | FLIP_HORIZONTAL, tileX + 0, tileY + 4, 1, 1);
            }
            else
            {
                if(rightSelected)
                {
                    FillBgTilemapBufferRect_Palette0(1, 0x2B, tileX + 0, tileY + 1, 1, 1);
                    FillBgTilemapBufferRect_Palette0(1, 0x30, tileX + 0, tileY + 2, 1, 2);
                    FillBgTilemapBufferRect_Palette0(1, 0x36, tileX + 0, tileY + 4, 1, 1);
                }
                else
                {
                    FillBgTilemapBufferRect_Palette0(1, 0x3E | FLIP_HORIZONTAL, tileX + 0, tileY + 1, 1, 1);
                    FillBgTilemapBufferRect_Palette0(1, 0x40 | FLIP_HORIZONTAL, tileX + 0, tileY + 2, 1, 2);
                    FillBgTilemapBufferRect_Palette0(1, 0x41 | FLIP_HORIZONTAL, tileX + 0, tileY + 4, 1, 1);
                }
            }
        }
        else
        {
            if(rightType == ENTRY_TYPE_NONE)
            {
                FillBgTilemapBufferRect_Palette0(1, 0x11 | FLIP_HORIZONTAL, tileX + 0, tileY + 1, 1, 1);
                FillBgTilemapBufferRect_Palette0(1, 0x17 | FLIP_HORIZONTAL, tileX + 0, tileY + 2, 1, 2);
                FillBgTilemapBufferRect_Palette0(1, 0x20 | FLIP_HORIZONTAL, tileX + 0, tileY + 4, 1, 1);
            }
            else if(rightType == ENTRY_TYPE_DISABLED)
            {
                FillBgTilemapBufferRect_Palette0(1, 0x46 | FLIP_HORIZONTAL, tileX + 0, tileY + 1, 1, 1);
                FillBgTilemapBufferRect_Palette0(1, 0x48 | FLIP_HORIZONTAL, tileX + 0, tileY + 2, 1, 2);
                FillBgTilemapBufferRect_Palette0(1, 0x4D | FLIP_HORIZONTAL, tileX + 0, tileY + 4, 1, 1);
            }
            else
            {
                if(rightSelected)
                {
                    FillBgTilemapBufferRect_Palette0(1, 0x3E, tileX + 0, tileY + 1, 1, 1);
                    FillBgTilemapBufferRect_Palette0(1, 0x40, tileX + 0, tileY + 2, 1, 2);
                    FillBgTilemapBufferRect_Palette0(1, 0x41, tileX + 0, tileY + 4, 1, 1);
                }
                else
                {
                    FillBgTilemapBufferRect_Palette0(1, 0x13, tileX + 0, tileY + 1, 1, 1);
                    FillBgTilemapBufferRect_Palette0(1, 0x18, tileX + 0, tileY + 2, 1, 2);
                    FillBgTilemapBufferRect_Palette0(1, 0x23, tileX + 0, tileY + 4, 1, 1);
                }
            }
        }
        break;
    }
}

static void Overview_FillEntryTileCentre_Header(u8 tileX, u8 tileY, u8 entryType, u16 numToDisplay, u8 isSelected)
{
    if(entryType == ENTRY_TYPE_DISABLED)
        FillBgTilemapBufferRect_Palette0(1, HEADER_BLACK, tileX + 1, tileY + 0, 3, 1);
    else if(numToDisplay == (u16)-1)
        FillBgTilemapBufferRect_Palette0(1, HEADER_EMPTY, tileX + 1, tileY + 0, 3, 1);
    else
    {
        u8 digits[3];
        digits[0] = numToDisplay % 10;
        digits[1] = (numToDisplay / 10) % 10;
        digits[2] = (numToDisplay / 100) % 10;

        FillBgTilemapBufferRect_Palette0(1, Overview_SelectDigitTile(digits[2], isSelected), tileX + 1, tileY + 0, 1, 1);
        FillBgTilemapBufferRect_Palette0(1, Overview_SelectDigitTile(digits[1], isSelected), tileX + 2, tileY + 0, 1, 1);
        FillBgTilemapBufferRect_Palette0(1, Overview_SelectDigitTile(digits[0], isSelected), tileX + 3, tileY + 0, 1, 1);
    }
}

static void Overview_FillEntryTileCentre_Body(u8 tileX, u8 tileY, u8 entryType, bool8 entrySelected)
{
    if(entryType == ENTRY_TYPE_NONE)
    {
        // Should never reach here so make it look obv broken
        FillBgTilemapBufferRect_Palette0(1, 0x28, tileX + 1, tileY + 1, 3, 4);
    }
    else if(entryType == ENTRY_TYPE_DISABLED)
    {
        FillBgTilemapBufferRect_Palette0(1, 0x43, tileX + 1, tileY + 1, 3, 3);
        FillBgTilemapBufferRect_Palette0(1, 0x4C, tileX + 1, tileY + 4, 3, 1);
    }
    else if(entryType == ENTRY_TYPE_QUESTION_MARK)
    {
        FillBgTilemapBufferRect_Palette0(1, 0x0F, tileX + 1, tileY + 2, 1, 1); // Old parts of multi-tile q-mark, now just fills white (tile #15, 0x0F, from the tile png)
        FillBgTilemapBufferRect_Palette0(1, 0x1A, tileX + 2, tileY + 2, 1, 1); // Updated question mark
        FillBgTilemapBufferRect_Palette0(1, 0x0F, tileX + 3, tileY + 2, 1, 1);

        FillBgTilemapBufferRect_Palette0(1, 0x0F, tileX + 1, tileY + 3, 1, 1);
        FillBgTilemapBufferRect_Palette0(1, 0x0F, tileX + 2, tileY + 3, 1, 1);
        FillBgTilemapBufferRect_Palette0(1, 0x0F, tileX + 3, tileY + 3, 1, 1);

        if(entrySelected)
        {
            FillBgTilemapBufferRect_Palette0(1, 0x2A, tileX + 1, tileY + 1, 1, 1);
            FillBgTilemapBufferRect_Palette0(1, 0x2A, tileX + 2, tileY + 1, 1, 1);
            FillBgTilemapBufferRect_Palette0(1, 0x2A, tileX + 3, tileY + 1, 1, 1);

            FillBgTilemapBufferRect_Palette0(1, 0x34, tileX + 1, tileY + 4, 1, 1);
            FillBgTilemapBufferRect_Palette0(1, 0x34, tileX + 2, tileY + 4, 1, 1);
            FillBgTilemapBufferRect_Palette0(1, 0x34, tileX + 3, tileY + 4, 1, 1);
        }
        else
        {
            FillBgTilemapBufferRect_Palette0(1, 0x12, tileX + 1, tileY + 1, 1, 1);
            FillBgTilemapBufferRect_Palette0(1, 0x12, tileX + 2, tileY + 1, 1, 1);
            FillBgTilemapBufferRect_Palette0(1, 0x12, tileX + 3, tileY + 1, 1, 1);

            FillBgTilemapBufferRect_Palette0(1, 0x21, tileX + 1, tileY + 4, 1, 1);
            FillBgTilemapBufferRect_Palette0(1, 0x21, tileX + 2, tileY + 4, 1, 1);
            FillBgTilemapBufferRect_Palette0(1, 0x21, tileX + 3, tileY + 4, 1, 1);
        }
    }
    else
    {
        // All of these have the same background and swap out the bottom most tile
        FillBgTilemapBufferRect_Palette0(1, entrySelected ? 0x2A : 0x12, tileX + 1, tileY + 1, 3, 1);
        FillBgTilemapBufferRect_Palette0(1, 0x0F, tileX + 1, tileY + 2, 3, 2);
        
        FillBgTilemapBufferRect_Palette0(1, entrySelected ? 0x34 : 0x21, tileX + 1, tileY + 4, 1, 1);
        FillBgTilemapBufferRect_Palette0(1, entrySelected ? 0x34 | FLIP_HORIZONTAL : 0x21, tileX + 3, tileY + 4, 1, 1);

        switch (entryType)
        {
        case ENTRY_TYPE_SEEN:
            FillBgTilemapBufferRect_Palette0(1, entrySelected ? 0x38 : 0x25, tileX + 2, tileY + 4, 1, 1);
            break;

        case ENTRY_TYPE_CAUGHT:
            FillBgTilemapBufferRect_Palette0(1, entrySelected ? 0x37 : 0x24, tileX + 2, tileY + 4, 1, 1);
            break;

        // case ENTRY_TYPE_CAUGHT_SHINY:
        //     FillBgTilemapBufferRect_Palette0(1, entrySelected ? 0x35 : 0x22, tileX + 2, tileY + 4, 1, 1);
        //     break;

        // case ENTRY_TYPE_GREEN_CIRCLE:
        //     FillBgTilemapBufferRect_Palette0(1, entrySelected ? 0x3B : 0x27, tileX + 2, tileY + 4, 1, 1);
        //     break;

        // case ENTRY_TYPE_RED_CROSS:
        //     FillBgTilemapBufferRect_Palette0(1, entrySelected ? 0x3C : 0x28, tileX + 2, tileY + 4, 1, 1);
        //     break;

        default: // ENTRY_TYPE_EMPTY
            FillBgTilemapBufferRect_Palette0(1, entrySelected ? 0x3A : 0x21, tileX + 2, tileY + 4, 1, 1);
            break;
        }
    }
}

static void Overview_HandleInput(u8 taskId)
{
    bool8 justJumpedPage = FALSE;
    u16 prevSelectedIdx = sPokedexMenu->selectedIdx;
    u16 prevScrollAmount = sPokedexMenu->pageScrollAmount;

    if(JOY_REPEAT(DPAD_LEFT))
    {
        u8 x, y;
        x = sPokedexMenu->selectedIdx % COLUMN_ENTRY_COUNT;
        y = sPokedexMenu->selectedIdx / COLUMN_ENTRY_COUNT;

        if(x == 0)
            x = COLUMN_ENTRY_COUNT - 1;
        else
            --x;

        sPokedexMenu->selectedIdx = x + y * COLUMN_ENTRY_COUNT;
    }
    else if(JOY_REPEAT(DPAD_RIGHT))
    {
        u8 x, y;
        x = sPokedexMenu->selectedIdx % COLUMN_ENTRY_COUNT;
        y = sPokedexMenu->selectedIdx / COLUMN_ENTRY_COUNT;

        x = (x + 1) % COLUMN_ENTRY_COUNT;
        sPokedexMenu->selectedIdx = x + y * COLUMN_ENTRY_COUNT;
    }
    else if(JOY_REPEAT(DPAD_UP))
    {
        if(sPokedexMenu->selectedIdx >= COLUMN_ENTRY_COUNT)
            sPokedexMenu->selectedIdx -= COLUMN_ENTRY_COUNT; // jump back a row
        else
        {
            if(sPokedexMenu->pageScrollAmount != 0)
            --sPokedexMenu->pageScrollAmount;
        }
    }
    else if(JOY_REPEAT(DPAD_DOWN))
    {
        if(sPokedexMenu->selectedIdx < OVERVIEW_ENTRY_COUNT - COLUMN_ENTRY_COUNT)
            sPokedexMenu->selectedIdx += COLUMN_ENTRY_COUNT; // jump down a row
        else
            ++sPokedexMenu->pageScrollAmount;
    }
    else if(JOY_REPEAT(L_BUTTON))
    {
        if(sPokedexMenu->pageScrollAmount != 0)
            sPokedexMenu->pageScrollAmount -= min(sPokedexMenu->pageScrollAmount, ROW_ENTRY_COUNT);
        else if(sPokedexMenu->selectedIdx != 0)
            sPokedexMenu->selectedIdx = 0; // Put back to first slot before looping
        else
            sPokedexMenu->pageScrollAmount = Overview_GetMaxScrollAmount();

        justJumpedPage = TRUE;
    }
    else if(JOY_REPEAT(R_BUTTON))
    {
        u8 maxScrollAmount = Overview_GetMaxScrollAmount();
        sPokedexMenu->pageScrollAmount += ROW_ENTRY_COUNT;
        
        if(sPokedexMenu->pageScrollAmount > maxScrollAmount)
        {
            u8 maxIdx = Overview_GetLastValidActiveIndex();
            if(sPokedexMenu->selectedIdx != maxIdx)
            {
                sPokedexMenu->pageScrollAmount = maxScrollAmount;
                sPokedexMenu->selectedIdx = maxIdx;
            }
            else
            {
                sPokedexMenu->pageScrollAmount = 0;
            }
        }

        justJumpedPage = TRUE;
    }
    else if (JOY_NEW(A_BUTTON))
    {
        u16 species = sPokedexMenu->overviewPageSpecies[sPokedexMenu->selectedIdx];

        if(IsCurrentlySelectingMon())
        {
            if(
                (!sPokedexViewReq.perView.selectMon.requireSeen || GetSpeciesDisplayDexFlag(species, FLAG_GET_SEEN)) &&
                (!sPokedexViewReq.perView.selectMon.requireCaught || GetSpeciesDisplayDexFlag(species, FLAG_GET_CAUGHT))
            )
            {
                gSpecialVar_Result = species;

                // Immediately exit if viewing view party summary
                BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
                gTasks[taskId].func = Task_PageFadeOutAndExit;

                PlaySE(SE_PIN);
            }
            else
            {
                // Can't select if we haven't seen this mon
                PlaySE(SE_FAILURE);
            }
        }
        else
        {
            if(GetSpeciesDisplayDexFlag(species, FLAG_GET_SEEN))
            {
                // Swap to the stats page
                sPokedexMenu->desiredPage = PAGE_MON_STATS;
                sPokedexMenu->viewBaseSpecies = species;
                gTasks[taskId].func = Task_SwapToPage;

                PlaySE(SE_PIN);
            }
            else
            {
                // Can't open if we haven't seen this mon
                PlaySE(SE_FAILURE);
            }
        }
    }
    else if (JOY_NEW(B_BUTTON))
    {
        if(IsCurrentlySelectingMon())
        {
            gSpecialVar_Result = SPECIES_NONE;

            // Immediately exit if viewing view party summary
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            gTasks[taskId].func = Task_PageFadeOutAndExit;

            PlaySE(SE_PC_OFF);
        }
        else
        {
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            gTasks[taskId].func = Task_PageFadeOutExitAndRelaunch;
            
            PlaySE(SE_SELECT);
        }
    }


    // Clamp scroll amount
    if(prevSelectedIdx  != sPokedexMenu->selectedIdx)
    {
        sPokedexMenu->selectedIdx = min(sPokedexMenu->selectedIdx, Overview_GetLastValidActiveIndex());
    }

    if(prevScrollAmount != sPokedexMenu->pageScrollAmount)
    {
        sPokedexMenu->pageScrollAmount = min(sPokedexMenu->pageScrollAmount, Overview_GetMaxScrollAmount());
    }

    if(prevScrollAmount != sPokedexMenu->pageScrollAmount)
    {
        // Scroll up/down
        Overview_SelectSpeciesToDiplay();
        
        // Clamp it here incase we go out of bounds when jumping from front to back
        sPokedexMenu->selectedIdx = min(sPokedexMenu->selectedIdx, Overview_GetLastValidActiveIndex());

        Overview_RefillBg();
        Overview_DestroySprites();
        Overview_CreateSprites();

        PlaySE(justJumpedPage ? SE_DEX_PAGE : SE_DEX_SCROLL);
    }
    else if(prevSelectedIdx != sPokedexMenu->selectedIdx)
    {
        // Highlight new selected entry
        u8 prevEntryX = prevSelectedIdx % COLUMN_ENTRY_COUNT;
        u8 prevEntryY = prevSelectedIdx / COLUMN_ENTRY_COUNT;
        u8 newEntryX = sPokedexMenu->selectedIdx % COLUMN_ENTRY_COUNT;
        u8 newEntryY = sPokedexMenu->selectedIdx / COLUMN_ENTRY_COUNT;

        Overview_FillEntryBg_Selected(prevEntryX, prevEntryY, TRUE);
        Overview_FillEntryBg_Selected(newEntryX, newEntryY, TRUE);

        PlaySE(SE_DEX_SCROLL);
    }
}

static void Overview_RefillBg()
{
    u8 x = 0;
    u8 y = 0;

    for(x = 0; x < COLUMN_ENTRY_COUNT; ++x)
        for(y = 0; y < ROW_ENTRY_COUNT; ++y)
            Overview_FillEntryBg(x, y, TRUE);
}

static void Overview_FillEntryBgInternal(u8 entryX, u8 entryY, bool8 includeHeader, bool8 includeRightColumn)
{
    u8 tileX = 1 + entryX * 4;
    u8 tileY = 0 + entryY * 5;
    u8 entryType[ENTRY_DIR_COUNT];
    bool8 entrySelected[ENTRY_DIR_COUNT];

    AGB_ASSERT(entryX + entryY * COLUMN_ENTRY_COUNT < COLUMN_ENTRY_COUNT * ROW_ENTRY_COUNT);

    entryType[ENTRY_DIR_LEFT] = Overview_GetEntryType(entryX, entryY, -1, 0);
    entryType[ENTRY_DIR_CENTRE] = Overview_GetEntryType(entryX, entryY, 0, 0);
    entryType[ENTRY_DIR_RIGHT] = Overview_GetEntryType(entryX, entryY, 1, 0);

    entrySelected[ENTRY_DIR_LEFT] = Overview_IsEntrySelected(entryX, entryY, -1, 0);
    entrySelected[ENTRY_DIR_CENTRE] = Overview_IsEntrySelected(entryX, entryY, 0, 0);
    entrySelected[ENTRY_DIR_RIGHT] = Overview_IsEntrySelected(entryX, entryY, 1, 0);

    if(includeHeader)
    {
        u16 num = sPokedexMenu->overviewPageNumbers[entryX + entryY * COLUMN_ENTRY_COUNT];

        Overview_FillEntryTileBoundary_Header(tileX, tileY, entryType[ENTRY_DIR_LEFT], entryType[ENTRY_DIR_CENTRE], entrySelected[ENTRY_DIR_LEFT], entrySelected[ENTRY_DIR_CENTRE], Overview_IsEntrySelected(entryX, entryY, 0, 0), 1);
        Overview_FillEntryTileCentre_Header(tileX, tileY, entryType[ENTRY_DIR_CENTRE], num, Overview_IsEntrySelected(entryX, entryY, 0, 0));

        // If we're in the last column (Or we are JUST refreshing this tile) handle right hand side
        if(entryX + 1 == COLUMN_ENTRY_COUNT || includeRightColumn)
            Overview_FillEntryTileBoundary_Header(tileX + 4, tileY, entryType[ENTRY_DIR_CENTRE], entryType[ENTRY_DIR_RIGHT], entrySelected[ENTRY_DIR_CENTRE], entrySelected[ENTRY_DIR_RIGHT], Overview_IsEntrySelected(entryX, entryY, 0, 0), 2);
    }

    {
        Overview_FillEntryTileBoundary_Body(tileX, tileY, entryType[ENTRY_DIR_LEFT], entryType[ENTRY_DIR_CENTRE], entrySelected[ENTRY_DIR_LEFT], entrySelected[ENTRY_DIR_CENTRE]);
        Overview_FillEntryTileCentre_Body(tileX, tileY, entryType[ENTRY_DIR_CENTRE], entrySelected[ENTRY_DIR_CENTRE]);

        // If we're in the last column (Or we are JUST refreshing this tile) handle right hand side
        if(entryX + 1 == COLUMN_ENTRY_COUNT || includeRightColumn)
            Overview_FillEntryTileBoundary_Body(tileX + 4, tileY, entryType[ENTRY_DIR_CENTRE], entryType[ENTRY_DIR_RIGHT], entrySelected[ENTRY_DIR_CENTRE], entrySelected[ENTRY_DIR_RIGHT]);
    }

    ScheduleBgCopyTilemapToVram(1);
}

static void Overview_FillEntryBg(u8 entryX, u8 entryY, bool8 includeHeader)
{
    Overview_FillEntryBgInternal(entryX, entryY, TRUE, FALSE);
}

static void Overview_FillEntryBg_Selected(u8 entryX, u8 entryY, bool8 includeHeader)
{
    Overview_FillEntryBgInternal(entryX, entryY, TRUE, TRUE);
}

static void Overview_CreateSprites()
{
    u8 i, x , y;
    u16 species;
    
    for(x = 0; x < COLUMN_ENTRY_COUNT; ++x)
    {
        for(y = 0; y < ROW_ENTRY_COUNT; ++y)
        {
            i = x + y * COLUMN_ENTRY_COUNT;
            species = sPokedexMenu->overviewPageSpecies[i];

            if(species != SPECIES_NONE)
            {
                if(IsCurrentlySelectingMon())
                {
                    if(sPokedexViewReq.perView.selectMon.requireSeen && !GetSpeciesDisplayDexFlag(species, FLAG_GET_SEEN))
                        continue;

                    if(sPokedexViewReq.perView.selectMon.requireCaught && !GetSpeciesDisplayDexFlag(species, FLAG_GET_CAUGHT))
                        continue;

                    // Always display in select mon view
                    // Non animated
                    sPokedexMenu->pageSprites[i] = CreateMonIcon(sPokedexMenu->overviewPageSpecies[i], SpriteCallbackDummy, 28 + 32 * x, 20 + 40 * y, 0, 0);
                }
                else
                {
                    if(GetSpeciesDisplayDexFlag(species, FLAG_GET_CAUGHT))
                    {
                        // Animated
                        sPokedexMenu->pageSprites[i] = CreateMonIcon(sPokedexMenu->overviewPageSpecies[i], SpriteCB_MonIcon, 28 + 32 * x, 20 + 40 * y, 0, 0);
                    }
                    else if(GetSpeciesDisplayDexFlag(species, FLAG_GET_SEEN))
                    {
                        // Non animated
                        sPokedexMenu->pageSprites[i] = CreateMonIcon(sPokedexMenu->overviewPageSpecies[i], SpriteCallbackDummy, 28 + 32 * x, 20 + 40 * y, 0, 0);
                    }
                    else
                    {
                        // Place ? icon
                        //sPokedexMenu->pageSprites[i] = CreateMissingMonIcon(SpriteCallbackDummy, 28 + 32 * x, 18 + 40 * y, 0, 0);
                    }
                }
            }
        }
    }
}

static void Overview_DestroySprites()
{
    u8 i;

    for(i = 0; i < ARRAY_COUNT(sPokedexMenu->pageSprites); ++i)
    {
        if(sPokedexMenu->pageSprites[i] != SPRITE_NONE)
            FreeAndDestroyMonIconSprite(&gSprites[sPokedexMenu->pageSprites[i]]);

        sPokedexMenu->pageSprites[i] = SPRITE_NONE;
    }
}

static void Overview_SelectSpeciesToDiplay()
{
    u8 i;
    u16 num;
    u16 species;
    u8 dexVariant = NemoPokedex_GetDexVariant();
    u16 dexCount = GetVariantSpeciesCount(dexVariant);

    for(i = 0; i < OVERVIEW_ENTRY_COUNT; ++i)
    {
        num = i + sPokedexMenu->pageScrollAmount * COLUMN_ENTRY_COUNT;

        species = SPECIES_NONE;

        if(num < dexCount)
            species = GetDisplayedOverviewSpecies(GetVariantSpeciesAt(dexVariant, num));

        sPokedexMenu->overviewPageSpecies[i] = species;
        sPokedexMenu->overviewPageNumbers[i] = num + 1;
    }
}

static u8 Overview_GetLastValidActiveIndex()
{
    u8 i, j;

    for(i = 0; i < OVERVIEW_ENTRY_COUNT; ++i)
    {
        j = OVERVIEW_ENTRY_COUNT - i - 1;
        if(sPokedexMenu->overviewPageSpecies[j] != SPECIES_NONE)
            return j;
    }

    return 0;
}

static u8 Overview_GetMaxScrollAmount()
{
    u8 dexVariant = NemoPokedex_GetDexVariant();
    u16 dexCount = GetVariantSpeciesCount(dexVariant);

    return (dexCount / COLUMN_ENTRY_COUNT) - ROW_ENTRY_COUNT + 1;
}


// ------------------------------------------- Functions: Mon Info --------------------------------------------------

// CreateMonTypeIcon (function to create type icons) was originally here but I couldn't get it to
// work and it was lowkey pissing me awf so it's done LMAO,
// now I just print the type names on the screen

static void MonInfo_CreateSprites(bool8 includeType)
{
    // // display as shiny if we have seen it
    // bool8 isShiny = GetSpeciesDisplayDexFlag(sPokedexMenu->viewBaseSpecies, FLAG_GET_CAUGHT_SHINY);

    sPokedexMenu->pageSprites[MON_SPRITE_FRONT_PIC] = CreateMonPicSprite_Affine(sPokedexMenu->viewBaseSpecies, 0, 0, MON_PIC_AFFINE_FRONT, 48, 66, 14, TAG_NONE);

    sPokedexMenu->pageSprites[MON_SPRITE_ICON] = CreateMonIcon(sPokedexMenu->viewBaseSpecies, SpriteCB_MonIcon, 48, 11, 0, 0);
}

static void MonInfo_DestroySprites()
{
    u8 i;
    u8 spriteId;

    for(i = 0; i < ARRAY_COUNT(sPokedexMenu->pageSprites); ++i)
    {
        spriteId = sPokedexMenu->pageSprites[i];

        if(spriteId != SPRITE_NONE)
        {
            switch (i)
            {
            case MON_SPRITE_FRONT_PIC:
            case MON_SPRITE_BACK_PIC:
                FreeAndDestroyMonPicSprite(spriteId);
                break;
            
            case MON_SPRITE_ICON:
            case MON_SPRITE_EVO_ICON1:
            case MON_SPRITE_EVO_ICON2:
            case MON_SPRITE_EVO_ICON3:
            case MON_SPRITE_EVO_ICON4:
                FreeAndDestroyMonIconSprite(&gSprites[spriteId]);
                break;

            case MON_SPRITE_TYPE1:
            case MON_SPRITE_TYPE2:
                DestroySprite(&gSprites[spriteId]);
                break;
                
            default:
                break;
            }
        }
    }
}


// --------------------------------------- Functions: Mon Stats / Mon Info / Mon Moves -------------------------------------------------

// Can lag out if too many
#define MAX_NEIGHBOUR_CHECKS 100

static u16 MonStats_GetMonNeighbour(u16 currViewSpecies, s8 offset)
{
    u16 i;
    u16 currViewIdx = (u16)-1;
    u8 dexVariant = NemoPokedex_GetDexVariant();
    u16 dexCount = GetVariantSpeciesCount(dexVariant);

    // Loop through party when using L/R from that menu
    if(sPokedexViewReq.view == DEX_VIEW_SPECIFIC_MON)
    {
        u8 partyCount = gPlayerPartyCount;

        do
        {
            if(offset == 1)
                sPokedexMenu->partySlot = (sPokedexMenu->partySlot + 1) % partyCount;
            else // offset == -1
            {
                if(sPokedexMenu->partySlot == 0)
                    sPokedexMenu->partySlot = partyCount - 1;
                else
                    --sPokedexMenu->partySlot;
            }
        }
        while(GetSpeciesAtSlot(sPokedexMenu->partySlot) == SPECIES_NONE || GetHpAtSlot(sPokedexMenu->partySlot) == 0);

        sPokedexMenu->viewBaseSpecies = SPECIES_NONE; // force it here so it always succeeds
        sPokedexMenu->viewOtId = GetOtIdAtSlot(sPokedexMenu->partySlot);

        return GetSpeciesAtSlot(sPokedexMenu->partySlot);
    }
    else
    {
        // currViewSpecies = GET_BASE_SPECIES_ID(currViewSpecies);

        for(i = 0; i < dexCount; ++i)
        {
            if(GetVariantSpeciesAt(dexVariant, i) == currViewSpecies)
            {
                currViewIdx = i;
                break;
            }
        }

        // Moved out of for loop while i try to recode this puppy to work
        u16 checkIdx;           // Current check location
        u16 checkSpecies;       // Species at check location

        checkIdx = currViewIdx;

        for(i = 0; i < MAX_NEIGHBOUR_CHECKS; ++i)
        {

            if(offset == 1) // Moving right with R_BUTTON
            {
                if(checkIdx < dexCount) // Make sure checkIdx never goes negative
                    checkIdx++;
                else
                {
                    return currViewSpecies; // Failed
                    break;
                }
            }
            else // Offset is -1; Moving left with L_BUTTON
            {
                if(checkIdx > 0)
                    checkIdx--;
                else
                {
                    return currViewSpecies; // Failed
                    break;
                }
            }

            checkSpecies = GetVariantSpeciesAt(dexVariant, checkIdx);

            // Only jump to seen species
            if(!GetSpeciesDisplayDexFlag(checkSpecies, FLAG_GET_SEEN))
                continue;

            return checkSpecies;

            // OLD CODE COMMENTED BELOW
            // u16 checkIdx;
            // u16 checkSpecies;

            // checkIdx = currViewIdx;

            // while(TRUE)
            // {
            //     if(offset == 1)
            //         checkIdx = (checkIdx + 1) % dexCount;
            //     else // offset == -1
            //     {
            //         if(checkIdx == 0)
            //             checkIdx = dexCount - 1;
            //         else
            //             --checkIdx;
            //     }

            //     // If we've done a full loop, we've failed to find next species we can view
            //     if(checkIdx == currViewIdx)
            //         break;

            //     checkSpecies = GetVariantSpeciesAt(dexVariant, checkIdx);

            //     // Only allowed to jump to seen mons
            //     if(!GetSpeciesDisplayDexFlag(checkSpecies, FLAG_GET_SEEN))
            //         continue;

            //     return checkSpecies;
            // }
        }
    }

    // Failed fallback
    return currViewSpecies;
}

static u8 NavigateNextMonPage(u8 startPage, u8 dir)
{
    u8 currentPage = startPage;
    while(TRUE)
    {
        if(dir == 1)
        {
            if(currentPage == PAGE_MON_LAST)
                currentPage = PAGE_MON_FIRST;
            else
                ++currentPage;
        }
        else // if(dir == -1)
        {
            if(currentPage == PAGE_MON_FIRST)
                currentPage = PAGE_MON_LAST;
            else
                --currentPage;
        }

        if(currentPage != startPage)
            return currentPage;
    }

    return startPage;
}

static bool8 MonInfo_HandleInput(u8 taskId)
{
    u16 viewSpecies = sPokedexMenu->viewBaseSpecies;
    bool8 useInput = FALSE;

    if(JOY_REPEAT(L_BUTTON))
    {
        useInput = TRUE;
        viewSpecies = MonStats_GetMonNeighbour(sPokedexMenu->viewBaseSpecies, -1);

        if(viewSpecies == sPokedexMenu->viewBaseSpecies)
            PlaySE(SE_FAILURE);
    }
    else if(JOY_REPEAT(R_BUTTON))
    {
        useInput = TRUE;
        viewSpecies = MonStats_GetMonNeighbour(sPokedexMenu->viewBaseSpecies, 1);

        if(viewSpecies == sPokedexMenu->viewBaseSpecies)
            PlaySE(SE_FAILURE);
    }
    else if (JOY_NEW(B_BUTTON))
    {
        useInput = TRUE;

        if(sPokedexViewReq.view == DEX_VIEW_SPECIFIC_MON)
        {
            // Immediately exit if viewing view party summary
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            gTasks[taskId].func = Task_PageFadeOutAndExit;

            PlaySE(SE_PC_OFF);
        }
        else
        {
            // Go back up to overview
            sPokedexMenu->desiredPage = PAGE_OVERVIEW;
            gTasks[taskId].func = Task_SwapToPage;
            PlaySE(SE_PIN);
        }
    }
    else if(JOY_REPEAT(DPAD_LEFT))
    {
        useInput = TRUE;

        sPokedexMenu->desiredPage = NavigateNextMonPage(sPokedexMenu->currentPage, -1);
        gTasks[taskId].func = Task_SwapToPage;
        PlaySE(SE_PIN);
    }
    else if(JOY_REPEAT(DPAD_RIGHT))
    {
        useInput = TRUE;

        sPokedexMenu->desiredPage = NavigateNextMonPage(sPokedexMenu->currentPage, 1);
        gTasks[taskId].func = Task_SwapToPage;
        PlaySE(SE_PIN);
    }

    if(viewSpecies != sPokedexMenu->viewBaseSpecies)
    {
        sPokedexMenu->viewBaseSpecies = viewSpecies;
        gTasks[taskId].func = Task_SwapToPage;
        PlaySE(SE_DEX_PAGE);
    }

    return useInput;
}

static void MonStats_HandleInput(u8 taskId)
{
    MonInfo_HandleInput(taskId);
}

static void MonMoves_HandleInput(u8 taskId)
{
    u16 maxScrollOffset;

    if(MonInfo_HandleInput(taskId))
        return;

    maxScrollOffset = GetMaxMoveScrollOffset();

    if((sPokedexMenu->listScrollAmount != 0 && JOY_HELD(DPAD_UP)) || JOY_NEW(DPAD_UP))
    {
        // if(sPokedexMenu->listScrollAmount == 0)
        //     sPokedexMenu->listScrollAmount = GetMaxMoveScrollOffset();
        // else
        //     sPokedexMenu->listScrollAmount -= 1;

        if(sPokedexMenu->listScrollAmount > 0)
        {
            sPokedexMenu->listScrollAmount -= 1;
            PlaySE(SE_DEX_SCROLL);
        }

        DisplayMonMovesText();
    }
    else if((sPokedexMenu->listScrollAmount != maxScrollOffset && JOY_HELD(DPAD_DOWN)) || JOY_NEW(DPAD_DOWN))
    {
        // if(sPokedexMenu->listScrollAmount == maxScrollOffset)
        //     sPokedexMenu->listScrollAmount = 0;
        // else
        //     sPokedexMenu->listScrollAmount = min(maxScrollOffset, sPokedexMenu->listScrollAmount + 1);

        if(sPokedexMenu->listScrollAmount < maxScrollOffset)
        {
            sPokedexMenu->listScrollAmount = min(maxScrollOffset, sPokedexMenu->listScrollAmount + 1);
            PlaySE(SE_DEX_SCROLL);
        }

        DisplayMonMovesText();
    }
}

static void MonEvos_OpenMoveQuery()
{
    u8 i;
    u16 moveId, itemId;
    u16 species = sPokedexMenu->viewBaseSpecies;

    // NOTE
    // This does a whole separate, rogue-specific thing in rogue_pokedex.c
    // I'll need to code a whole new move list creation thingy here, probably from the hgss dex

}

static void MonEvos_HandleInput(u8 taskId)
{
    if(MonInfo_HandleInput(taskId))
        return;

    if(JOY_REPEAT(DPAD_UP))
    {
        u16 maxScrollOffset = GetMaxEvoScrollOffset();

        if(maxScrollOffset == 0)
        {
            PlaySE(SE_FAILURE);
        }
        else
        {
            if(sPokedexMenu->listScrollAmount == 0)
                sPokedexMenu->listScrollAmount = maxScrollOffset;
            else
                --sPokedexMenu->listScrollAmount;

            PlaySE(SE_DEX_SCROLL);
            DisplayMonEvosText();
            MonEvos_CreateSprites();
        }
    }
    else if(JOY_REPEAT(DPAD_DOWN))
    {
        u16 maxScrollOffset = GetMaxEvoScrollOffset();

        if(maxScrollOffset == 0)
        {
            PlaySE(SE_FAILURE);
        }
        else
        {
            if(sPokedexMenu->listScrollAmount == maxScrollOffset)
                sPokedexMenu->listScrollAmount = 0;
            else
                ++sPokedexMenu->listScrollAmount;

            PlaySE(SE_DEX_SCROLL);
            DisplayMonEvosText();
            MonEvos_CreateSprites();
        }
    }
    else if(JOY_NEW(A_BUTTON))
    {
        u16 species = GetActiveEvoSpecies();

        if(species == SPECIES_NONE || !GetSpeciesDisplayDexFlag(species, FLAG_GET_SEEN))
        {
            PlaySE(SE_FAILURE);
        }
        else
        {
            sPokedexMenu->desiredPage = PAGE_MON_EVOS;
            sPokedexMenu->viewBaseSpecies = species;
            gTasks[taskId].func = Task_SwapToPage;

            PlaySE(SE_PIN);
        }
    }
}

static void MonEvos_CreateSprites()
{
    u8 i;
    u8 listIndex = 0;
    u8 displayCount = 0;
    const struct Evolution *evolutions = GetSpeciesEvolutions(sPokedexMenu->viewBaseSpecies);

    // Destroy any previous sprites
    for(i = 0; i < 4; ++i)
    {
        if(sPokedexMenu->pageSprites[MON_SPRITE_EVO_ICON1 + i] != SPRITE_NONE)
        {
            FreeAndDestroyMonIconSprite(&gSprites[sPokedexMenu->pageSprites[MON_SPRITE_EVO_ICON1 + i]]);
            sPokedexMenu->pageSprites[MON_SPRITE_EVO_ICON1 + i] = SPRITE_NONE;
        }
    }

    for(i = 0; evolutions[i].method != EVOLUTIONS_END && displayCount < 4; ++i)
    {
        if(evolutions[i].targetSpecies == SPECIES_NONE)
            continue;

        if(listIndex >= sPokedexMenu->listScrollAmount)
        {
            if(GetSpeciesDisplayDexFlag(evolutions[i].targetSpecies, FLAG_GET_SEEN))
                sPokedexMenu->pageSprites[MON_SPRITE_EVO_ICON1 + displayCount] = CreateMonIcon(evolutions[i].targetSpecies, SpriteCallbackDummy, 98 + 16, 24 + 16 + 32 * displayCount, 0, 0);
            else
                sPokedexMenu->pageSprites[MON_SPRITE_EVO_ICON1 + displayCount] = CreateMonIcon(SPECIES_NONE, SpriteCallbackDummy, 98 + 16, 24 + 16 + 32 * displayCount, 0, 0);
            ++displayCount;
        }
        ++listIndex;
    }
}

static void MonForms_HandleInput(u8 taskId)
{
    if(MonInfo_HandleInput(taskId))
        return;

    if(JOY_REPEAT(DPAD_UP))
    {
        u16 maxScrollOffset = GetMaxFormScrollOffset();

        if(maxScrollOffset == 0)
        {
            PlaySE(SE_FAILURE);
        }
        else
        {
            if(sPokedexMenu->listScrollAmount == 0)
                sPokedexMenu->listScrollAmount = maxScrollOffset;
            else
                --sPokedexMenu->listScrollAmount;

            PlaySE(SE_DEX_SCROLL);
            DisplayMonFormsText();
            MonForms_CreateSprites();
        }
    }
    else if(JOY_REPEAT(DPAD_DOWN))
    {
        u16 maxScrollOffset = GetMaxFormScrollOffset();

        if(maxScrollOffset == 0)
        {
            PlaySE(SE_FAILURE);
        }
        else
        {
            if(sPokedexMenu->listScrollAmount == maxScrollOffset)
                sPokedexMenu->listScrollAmount = 0;
            else
                ++sPokedexMenu->listScrollAmount;

            PlaySE(SE_DEX_SCROLL);
            DisplayMonFormsText();
            MonForms_CreateSprites();
        }
    }
    else if(JOY_NEW(A_BUTTON))
    {
        u16 species = GetActiveFormSpecies();

        if(species == SPECIES_NONE || !GetSpeciesDisplayDexFlag(species, FLAG_GET_SEEN))
        {
            PlaySE(SE_FAILURE);
        }
        else
        {
            sPokedexMenu->desiredPage = PAGE_MON_FORMS;
            sPokedexMenu->viewBaseSpecies = species;
            gTasks[taskId].func = Task_SwapToPage;

            PlaySE(SE_PIN);
        }
    }
}

static void MonForms_CreateSprites()
{
    u8 i;
    u8 listIndex = 0;
    u8 displayCount = 0;
    u16 const* formTable = GetSpeciesFormTable(sPokedexMenu->viewBaseSpecies);

    // Destroy any previous sprites
    for(i = 0; i < 4; ++i)
    {
        if(sPokedexMenu->pageSprites[MON_SPRITE_EVO_ICON1 + i] != SPRITE_NONE)
        {
            FreeAndDestroyMonIconSprite(&gSprites[sPokedexMenu->pageSprites[MON_SPRITE_EVO_ICON1 + i]]);
            sPokedexMenu->pageSprites[MON_SPRITE_EVO_ICON1 + i] = SPRITE_NONE;
        }
    }

    for(i = 0; formTable && formTable[i] != FORM_SPECIES_END && displayCount < 4; ++i)
    {
        if(IsAltFormVisible(sPokedexMenu->viewBaseSpecies, formTable[i]))
        {
            if(listIndex >= sPokedexMenu->listScrollAmount)
            {
                if(GetSpeciesDisplayDexFlag(formTable[i], FLAG_GET_SEEN))
                    sPokedexMenu->pageSprites[MON_SPRITE_EVO_ICON1 + displayCount] = CreateMonIcon(formTable[i], SpriteCallbackDummy, 98 + 16, 24 + 16 + 32 * displayCount, 0, 0);
                else
                    sPokedexMenu->pageSprites[MON_SPRITE_EVO_ICON1 + displayCount] = CreateMonIcon(SPECIES_NONE, SpriteCallbackDummy, 98 + 16, 24 + 16 + 32 * displayCount, 0, 0);

                ++displayCount;
            }
            ++listIndex;
        }
    }
}

static void MonHabitat_HandleInput(u8 taskId)
{
    MonInfo_HandleInput(taskId);
}

u16 NemoPokedex_GetCurrentDexLimit()
{
    u8 dexVariant = NemoPokedex_GetDexVariant();
    u16 dexCount = GetVariantSpeciesCount(dexVariant);

    return dexCount;
}

u16 NemoPokedex_GetSpeciesCurrentNum(u16 species)
{
    // species = GET_BASE_SPECIES_ID(species);

    {
        u16 i;
        u8 variant = NemoPokedex_GetDexVariant();
        u16 dexCount = GetVariantSpeciesCount(variant);

        for(i = 0; i < dexCount; ++i)
        {
            if(GetVariantSpeciesAt(variant, i) == species)
                return i + 1;
        }
    }

    return 0;
}

u16 NemoPokedex_GetSpeciesBST(u16 species)
{
    return (gSpeciesInfo[species].baseHP
    + gSpeciesInfo[species].baseAttack
    + gSpeciesInfo[species].baseDefense
    + gSpeciesInfo[species].baseSpAttack
    + gSpeciesInfo[species].baseSpDefense
    + gSpeciesInfo[species].baseSpeed);
}

static void GatherSpeciesStatsArray(u16 species, u8* stats)
{
    stats[STAT_HP] = gSpeciesInfo[species].baseHP;
    stats[STAT_ATK] = gSpeciesInfo[species].baseAttack;
    stats[STAT_DEF] = gSpeciesInfo[species].baseDefense;
    stats[STAT_SPATK] = gSpeciesInfo[species].baseSpAttack;
    stats[STAT_SPDEF] = gSpeciesInfo[species].baseSpDefense;
    stats[STAT_SPEED] = gSpeciesInfo[species].baseSpeed;
}

static u8 SelectBestWorstStat(u16 species, bool8 selectLargest)
{
    u8 i;
    u8 stats[NUM_STATS];
    u8 statId = 0;
    u8 statScore = 0;

    GatherSpeciesStatsArray(species, stats);

    for(i = 0; i < NUM_STATS; ++i)
    {
        if(selectLargest)
        {
            if(i == 0 || stats[i] > statScore)
            {
                statId = i;
                statScore = stats[i];
            }
        }
        else
        {
            if(i == 0 || stats[i] < statScore)
            {
                statId = i;
                statScore = stats[i];
            }
        }
    }

    return statId;
}

u8 NemoPokedex_GetSpeciesBestStat(u16 species)
{
    return SelectBestWorstStat(species, TRUE);
}

u8 NemoPokedex_GetSpeciesWorstStat(u16 species)
{
    return SelectBestWorstStat(species, FALSE);
}

static u16 GetVariantSpeciesAt(u8 variant, u16 index)
{
    return gPokedexVariants[variant].speciesList[index];
}

static u16 GetVariantSpeciesCount(u8 variant)
{
    return gPokedexVariants[variant].speciesCount;
}

// File based on src/data/rogue_pokedex.h

const u8 sDexVariantName_Alola[] = _("Alola Region");

const u16 sDexVariantList_Alola[] = 
{
    SPECIES_ROWLET,
    SPECIES_DARTRIX,
    SPECIES_DECIDUEYE,
    SPECIES_LITTEN,
    SPECIES_TORRACAT,
    SPECIES_INCINEROAR,
    SPECIES_POPPLIO,
    SPECIES_BRIONNE,
    SPECIES_PRIMARINA,
    SPECIES_PIKIPEK,
    SPECIES_TRUMBEAK,
    SPECIES_TOUCANNON,
    SPECIES_YUNGOOS,
    SPECIES_GUMSHOOS,
    SPECIES_RATTATA_ALOLA,
    SPECIES_RATICATE_ALOLA,
    SPECIES_CATERPIE,
    SPECIES_METAPOD,
    SPECIES_BUTTERFREE,
    SPECIES_LEDYBA,
    SPECIES_LEDIAN,
    SPECIES_SPINARAK,
    SPECIES_ARIADOS,
    SPECIES_LECHONK,
    SPECIES_OINKOLOGNE,
    SPECIES_INKAY,
    SPECIES_MALAMAR,
    SPECIES_ZORUA_HISUI,
    SPECIES_ZOROARK_HISUI,
    SPECIES_CYCLIZAR,
    SPECIES_PICHU,
    SPECIES_PIKACHU,
    SPECIES_RAICHU_ALOLA,
    SPECIES_GRUBBIN,
    SPECIES_CHARJABUG,
    SPECIES_VIKAVOLT,
    SPECIES_BONSLY,
    SPECIES_SUDOWOODO,
    SPECIES_MUNCHLAX,
    SPECIES_SNORLAX,
    SPECIES_SLOWPOKE,
    SPECIES_SLOWBRO,
    SPECIES_SLOWKING,
};

const u8 sDexVariantName_Melemele[] = _("Melemele Island");

const u16 sDexVariantList_Melemele[] = 
{
    SPECIES_ROWLET,
    SPECIES_DARTRIX,
    SPECIES_DECIDUEYE,
    SPECIES_LITTEN,
    SPECIES_TORRACAT,
    SPECIES_INCINEROAR,
    SPECIES_POPPLIO,
    SPECIES_BRIONNE,
    SPECIES_PRIMARINA,
    SPECIES_PIKIPEK,
    SPECIES_TRUMBEAK,
    SPECIES_TOUCANNON,
    SPECIES_YUNGOOS,
    SPECIES_GUMSHOOS,
    SPECIES_RATTATA_ALOLA,
    SPECIES_RATICATE_ALOLA,
    SPECIES_CATERPIE,
    SPECIES_METAPOD,
    SPECIES_BUTTERFREE,
    SPECIES_LEDYBA,
    SPECIES_LEDIAN,
    SPECIES_SPINARAK,
    SPECIES_ARIADOS,
    SPECIES_LECHONK,
    SPECIES_OINKOLOGNE,
    SPECIES_INKAY,
    SPECIES_MALAMAR,
    SPECIES_ZORUA_HISUI,
    SPECIES_ZOROARK_HISUI,
    SPECIES_CYCLIZAR,
    SPECIES_PICHU,
    SPECIES_PIKACHU,
    SPECIES_RAICHU_ALOLA,
    SPECIES_GRUBBIN,
    SPECIES_CHARJABUG,
    SPECIES_VIKAVOLT,
    SPECIES_BONSLY,
    SPECIES_SUDOWOODO,
    SPECIES_MUNCHLAX,
    SPECIES_SNORLAX,
    SPECIES_SLOWPOKE,
    SPECIES_SLOWBRO,
    SPECIES_SLOWKING,
    SPECIES_TAPU_KOKO,
};

const u8 sDexVariantName_Akala[] = _("Akala Island");

const u16 sDexVariantList_Akala[] = 
{
    SPECIES_PIKIPEK,
    SPECIES_TRUMBEAK,
    SPECIES_TOUCANNON,
    SPECIES_YUNGOOS,
    SPECIES_GUMSHOOS,
    SPECIES_RATTATA_ALOLA,
    SPECIES_RATICATE_ALOLA,
    SPECIES_CATERPIE,
    SPECIES_METAPOD,
    SPECIES_BUTTERFREE,
    SPECIES_GRUBBIN,
    SPECIES_CHARJABUG,
    SPECIES_VIKAVOLT,
    SPECIES_BONSLY,
    SPECIES_SUDOWOODO,
    SPECIES_WINGULL,
    SPECIES_PELIPPER,
    SPECIES_CRABRAWLER,
    SPECIES_CRABOMINABLE,
    SPECIES_GASTLY,
    SPECIES_HAUNTER,
    SPECIES_GENGAR,
    SPECIES_ZUBAT,
    SPECIES_GOLBAT,
    SPECIES_CROBAT,
    SPECIES_DIGLETT_ALOLA,
    SPECIES_DUGTRIO_ALOLA,
    SPECIES_ORICORIO,
    SPECIES_PSYDUCK,
    SPECIES_GOLDUCK,
    SPECIES_MAGIKARP,
    SPECIES_GYARADOS,
    SPECIES_BARBOACH,
    SPECIES_WHISCASH,
    SPECIES_TAPU_LELE,
};

const u8 sDexVariantName_Ula_Ula[] = _("Ula'ula Island");

const u16 sDexVariantList_Ula_Ula[] = 
{
    SPECIES_PIKIPEK,
    SPECIES_TRUMBEAK,
    SPECIES_TOUCANNON,
    SPECIES_YUNGOOS,
    SPECIES_GUMSHOOS,
    SPECIES_RATTATA_ALOLA,
    SPECIES_RATICATE_ALOLA,
    SPECIES_LEDYBA,
    SPECIES_LEDIAN,
    SPECIES_SPINARAK,
    SPECIES_ARIADOS,
    SPECIES_GRUBBIN,
    SPECIES_CHARJABUG,
    SPECIES_VIKAVOLT,
    SPECIES_SLOWPOKE,
    SPECIES_SLOWBRO,
    SPECIES_SLOWKING,
    SPECIES_WINGULL,
    SPECIES_PELIPPER,
    SPECIES_MEOWTH_ALOLA,
    SPECIES_PERSIAN_ALOLA,
    SPECIES_MAGNEMITE,
    SPECIES_MAGNETON,
    SPECIES_MAGNEZONE,
    SPECIES_GRIMER_ALOLA,
    SPECIES_MUK_ALOLA,
    SPECIES_CRABRAWLER,
    SPECIES_CRABOMINABLE,
    SPECIES_GASTLY,
    SPECIES_HAUNTER,
    SPECIES_GENGAR,
    SPECIES_ZUBAT,
    SPECIES_GOLBAT,
    SPECIES_CROBAT,
    SPECIES_DIGLETT_ALOLA,
    SPECIES_DUGTRIO_ALOLA,
    SPECIES_SPEAROW,
    SPECIES_FEAROW,
    SPECIES_ORICORIO,
    SPECIES_CUTIEFLY,
    SPECIES_RIBOMBEE,
    SPECIES_PETILIL,
    SPECIES_LILLIGANT,
    SPECIES_TAPU_BULU,
};

const u8 sDexVariantName_Poni[] = _("Poni Island");

const u16 sDexVariantList_Poni[] = 
{
    SPECIES_PIKIPEK,
    SPECIES_TRUMBEAK,
    SPECIES_TOUCANNON,
    SPECIES_YUNGOOS,
    SPECIES_GUMSHOOS,
    SPECIES_RATTATA_ALOLA,
    SPECIES_RATICATE_ALOLA,
    SPECIES_DROWZEE,
    SPECIES_HYPNO,
    SPECIES_MAKUHITA,
    SPECIES_HARIYAMA,
    SPECIES_CRABRAWLER,
    SPECIES_CRABOMINABLE,
    SPECIES_ZUBAT,
    SPECIES_GOLBAT,
    SPECIES_CROBAT,
    SPECIES_DIGLETT_ALOLA,
    SPECIES_DUGTRIO_ALOLA,
    SPECIES_SPEAROW,
    SPECIES_FEAROW,
    SPECIES_VULLABY,
    SPECIES_MANDIBUZZ,
    SPECIES_MANKEY,
    SPECIES_PRIMEAPE,
    SPECIES_ANNIHILAPE,
    SPECIES_ORICORIO,
    SPECIES_CUTIEFLY,
    SPECIES_RIBOMBEE,
    SPECIES_CARBINK,
    SPECIES_SABLEYE,
    SPECIES_ROCKRUFF,
    SPECIES_LYCANROC,
    SPECIES_MUDBRAY,
    SPECIES_MUDSDALE,
    SPECIES_TAUROS,
    SPECIES_MILTANK,
    SPECIES_STUFFUL,
    SPECIES_BEWEAR,
    SPECIES_GOOMY,
    SPECIES_SLIGGOO,
    SPECIES_GOODRA,
    SPECIES_CASTFORM,
    SPECIES_WIMPOD,
    SPECIES_GOLISOPOD,
    SPECIES_SNUBBULL,
    SPECIES_GRANBULL,
    SPECIES_TAPU_FINI,
};

const u8 sDexVariantName_Ultra[] = _("Ultra Space");

const u16 sDexVariantList_Ultra[] = 
{
    SPECIES_NECROZMA,
    SPECIES_NIHILEGO,
    SPECIES_STAKATAKA,
    SPECIES_BLACEPHALON,
    SPECIES_BUZZWOLE,
    SPECIES_PHEROMOSA,
    SPECIES_XURKITREE,
    SPECIES_CELESTEELA,
    SPECIES_KARTANA,
    SPECIES_GUZZLORD,
    SPECIES_POIPOLE,
    SPECIES_NAGANADEL,
    SPECIES_GREAT_TUSK,
    SPECIES_SCREAM_TAIL,
    SPECIES_FLUTTER_MANE,
    SPECIES_SLITHER_WING,
    SPECIES_ROARING_MOON,
    SPECIES_IRON_TREADS,
    SPECIES_IRON_BUNDLE,
    SPECIES_IRON_HANDS,
    SPECIES_IRON_MOTH,
    SPECIES_IRON_VALIANT,
    SPECIES_BULBASAUR,
    SPECIES_IVYSAUR,
    SPECIES_VENUSAUR,
    SPECIES_CHARMANDER,
    SPECIES_CHARMELEON,
    SPECIES_CHARIZARD,
    SPECIES_SQUIRTLE,
    SPECIES_WARTORTLE,
    SPECIES_BLASTOISE,
};

const struct PokedexVariant gPokedexVariants[POKEDEX_VARIANT_COUNT] = 
{

    [POKEDEX_VARIANT_ALOLA] = 
    {
        .displayName = sDexVariantName_Alola,
        .speciesList = sDexVariantList_Alola,
        .speciesCount = ARRAY_COUNT(sDexVariantList_Alola),
    },

    [POKEDEX_VARIANT_MELEMELE] = 
    {
        .displayName = sDexVariantName_Melemele,
        .speciesList = sDexVariantList_Melemele,
        .speciesCount = ARRAY_COUNT(sDexVariantList_Melemele),
    },

    [POKEDEX_VARIANT_AKALA] = 
    {
        .displayName = sDexVariantName_Akala,
        .speciesList = sDexVariantList_Akala,
        .speciesCount = ARRAY_COUNT(sDexVariantList_Akala),
    },

    [POKEDEX_VARIANT_ULA_ULA] = 
    {
        .displayName = sDexVariantName_Ula_Ula,
        .speciesList = sDexVariantList_Ula_Ula,
        .speciesCount = ARRAY_COUNT(sDexVariantList_Ula_Ula),
    },

    [POKEDEX_VARIANT_PONI] = 
    {
        .displayName = sDexVariantName_Poni,
        .speciesList = sDexVariantList_Poni,
        .speciesCount = ARRAY_COUNT(sDexVariantList_Poni),
    },

    [POKEDEX_VARIANT_ULTRA] = 
    {
        .displayName = sDexVariantName_Ultra,
        .speciesList = sDexVariantList_Ultra,
        .speciesCount = ARRAY_COUNT(sDexVariantList_Ultra),
    },

};


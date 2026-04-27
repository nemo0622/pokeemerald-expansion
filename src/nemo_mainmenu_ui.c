#include "nemo_mainmenu_ui.h"

#include "gba/types.h"
#include "gba/defines.h"
#include "constants/flags.h"
#include "constants/species.h"
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
#include "trainer_pokemon_sprites.h"
#include "field_effect.h"
#include "pokemon_icon.h"
#include "international_string_util.h"
#include "event_data.h"
#include "main_menu.h"
#include "option_menu.h"
#include "comfy_anim.h"
#include "save.h"

/*

Okay future Jack. Here's what has to be done:

:check: 1. Finish making sprites (Trainer sprite, Pokemon Icons, Z-Crystals, Stamps) spawn
:check:    - "Champion" stamp: Roughly 28x28

:check: 1.5. Do text printing!
:check:    - Player name under portrait
:check:    - PkMn count under party icons
:check:    - Z-Crystal number and Play time under Z-crystal picture

:check: 2. Testing purposes - when press A, load save file and go

:check: 4. If SAVE_STATUS_EMPTY (refer to main_menu.c), just go straight to Birch Intro (likely something like CB2_NewGameBirchSpeech_FromNewMainMenu from ui_main_menu.c)

:check: 5. Implement checks for all sprites!
:check:    - Trainer sprite: load based on chosen gender and starter (and create better placeholders for now)
:check:    - Z-crystals: Use Flag for-loop like used in Z-crystal count text!

6. Add "R to Show All Stamps" Option
    - Bring up side window (Comfy Anims slide in?) that has room for more stamps
    - Stamps: Official Pokémon Trainer, Island Trial completions, Island Pokédex completions, and some
    - for minigame rewards (Mining, Pinball/Arcade, Mantine Surfing if I add that?)

*/

// This kind of struct includes some stuff we wanna use all over, like the trainerSpriteId (a reference to the trainer sprite)
// and the selected option
struct NemoMMState
{
    MainCallback savedCallback;
    u8 loadState;
    u8 mode;
    u16 stampSpriteIds[5]; // all Stamp sprite objects will be held in here
    u16 zCrystalSpriteIds[12]; // all Z-crystal sprite objects will be held in here
    u16 iconMonSpriteIds[6];
    u16 trainerSpriteId;
    u8 sSelectedOption;
};

enum WindowIds
{
    WINDOW_CRYSTALS
};

// sNemoMMstate is an object that we can access all over and get stuff like our trainer sprite object from!
// It's defined above (struct NemoMMState) with everything it includes
static EWRAM_DATA struct NemoMMState *sNemoMMState = NULL;
static EWRAM_DATA u8 *sBg1TilemapBuffer = NULL;

static const struct BgTemplate sNemoMMBgTemplates[] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 1
    },
    {
        .bg = 1,
        .charBaseIndex = 1, // Changing this from 3 to 1 helped load up tiles right? dunno
        .mapBaseIndex = 30,
        .priority = 2
    }
};

static const struct WindowTemplate sNemoMMWindowTemplates[] =
{
    [WINDOW_CRYSTALS] =
    {
        .bg = 0,
        .tilemapLeft = 2, // pos x (* 8)
        .tilemapTop = 2, // pos y (* 8)
        .width = 24,
        .height = 18,
        .paletteNum = 15,
        .baseBlock = 1
    },
    DUMMY_WIN_TEMPLATE
};

/*
    --------    GRAPHICS    --------
*/

// Important OAM information about sprites (mostly sprite shape and size!)
static const struct OamData sOam_64x64Sprite = // Used for Trainer sprite
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

static const struct OamData sOam_16x16Sprite = // Used for Z-Crystals and smaller stamps
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

static const struct OamData sOam_32x32Sprite = // used for Island Challenge completion stamp
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

// Background tiles, tilemap, and palette
static const u32 sNemoMMTiles[] = INCBIN_U32("graphics/nemo_main_menu_ui/newtiles.4bpp.lz");
static const u32 sNemoMMTilemap[] = INCBIN_U32("graphics/nemo_main_menu_ui/newtiles.bin.lz");
static const u16 sNemoMMPalette[] = INCBIN_U16("graphics/nemo_main_menu_ui/newtiles.gbapal");

// Sprite files for Trainer sprites, Z-Crystals, and Stamps
static const u32 sPlayerMSprite_Rowlet[] = INCBIN_U32("graphics/nemo_main_menu_ui/trainer_sprites/m_rowlet.4bpp.smol");
static const u32 sPlayerMSprite_Dartrix[] = INCBIN_U32("graphics/nemo_main_menu_ui/trainer_sprites/m_dartrix.4bpp.smol");
static const u32 sPlayerMSprite_Decidueye[] = INCBIN_U32("graphics/nemo_main_menu_ui/trainer_sprites/m_decidueye.4bpp.smol");
static const u32 sPlayerMSprite_Litten[] = INCBIN_U32("graphics/nemo_main_menu_ui/trainer_sprites/m_litten.4bpp.smol");
static const u32 sPlayerMSprite_Torracat[] = INCBIN_U32("graphics/nemo_main_menu_ui/trainer_sprites/m_torracat.4bpp.smol");
static const u32 sPlayerMSprite_Incineroar[] = INCBIN_U32("graphics/nemo_main_menu_ui/trainer_sprites/m_incineroar.4bpp.smol");
static const u32 sPlayerMSprite_Popplio[] = INCBIN_U32("graphics/nemo_main_menu_ui/trainer_sprites/m_popplio.4bpp.smol");
static const u32 sPlayerMSprite_Brionne[] = INCBIN_U32("graphics/nemo_main_menu_ui/trainer_sprites/m_brionne.4bpp.smol");
static const u32 sPlayerMSprite_Primarina[] = INCBIN_U32("graphics/nemo_main_menu_ui/trainer_sprites/m_primarina.4bpp.smol");
static const u16 sPlayerMSprite_Rowlet_Pal[] = INCBIN_U16("graphics/nemo_main_menu_ui/trainer_sprites/m_rowlet.gbapal");
static const u16 sPlayerMSprite_Dartrix_Pal[] = INCBIN_U16("graphics/nemo_main_menu_ui/trainer_sprites/m_dartrix.gbapal");
static const u16 sPlayerMSprite_Decidueye_Pal[] = INCBIN_U16("graphics/nemo_main_menu_ui/trainer_sprites/m_decidueye.gbapal");
static const u16 sPlayerMSprite_Litten_Pal[] = INCBIN_U16("graphics/nemo_main_menu_ui/trainer_sprites/m_litten.gbapal");
static const u16 sPlayerMSprite_Torracat_Pal[] = INCBIN_U16("graphics/nemo_main_menu_ui/trainer_sprites/m_torracat.gbapal");
static const u16 sPlayerMSprite_Incineroar_Pal[] = INCBIN_U16("graphics/nemo_main_menu_ui/trainer_sprites/m_incineroar.gbapal");
static const u16 sPlayerMSprite_Popplio_Pal[] = INCBIN_U16("graphics/nemo_main_menu_ui/trainer_sprites/m_popplio.gbapal");
static const u16 sPlayerMSprite_Brionne_Pal[] = INCBIN_U16("graphics/nemo_main_menu_ui/trainer_sprites/m_brionne.gbapal");
static const u16 sPlayerMSprite_Primarina_Pal[] = INCBIN_U16("graphics/nemo_main_menu_ui/trainer_sprites/m_primarina.gbapal");
static const u32 sPlayerFSprite_Rowlet[] = INCBIN_U32("graphics/nemo_main_menu_ui/trainer_sprites/f_rowlet.4bpp.smol");
static const u32 sPlayerFSprite_Dartrix[] = INCBIN_U32("graphics/nemo_main_menu_ui/trainer_sprites/f_dartrix.4bpp.smol");
static const u32 sPlayerFSprite_Decidueye[] = INCBIN_U32("graphics/nemo_main_menu_ui/trainer_sprites/f_decidueye.4bpp.smol");
static const u32 sPlayerFSprite_Litten[] = INCBIN_U32("graphics/nemo_main_menu_ui/trainer_sprites/f_litten.4bpp.smol");
static const u32 sPlayerFSprite_Torracat[] = INCBIN_U32("graphics/nemo_main_menu_ui/trainer_sprites/f_torracat.4bpp.smol");
static const u32 sPlayerFSprite_Incineroar[] = INCBIN_U32("graphics/nemo_main_menu_ui/trainer_sprites/f_incineroar.4bpp.smol");
static const u32 sPlayerFSprite_Popplio[] = INCBIN_U32("graphics/nemo_main_menu_ui/trainer_sprites/f_popplio.4bpp.smol");
static const u32 sPlayerFSprite_Brionne[] = INCBIN_U32("graphics/nemo_main_menu_ui/trainer_sprites/f_brionne.4bpp.smol");
static const u32 sPlayerFSprite_Primarina[] = INCBIN_U32("graphics/nemo_main_menu_ui/trainer_sprites/f_primarina.4bpp.smol");
static const u16 sPlayerFSprite_Rowlet_Pal[] = INCBIN_U16("graphics/nemo_main_menu_ui/trainer_sprites/f_rowlet.gbapal");
static const u16 sPlayerFSprite_Dartrix_Pal[] = INCBIN_U16("graphics/nemo_main_menu_ui/trainer_sprites/f_dartrix.gbapal");
static const u16 sPlayerFSprite_Decidueye_Pal[] = INCBIN_U16("graphics/nemo_main_menu_ui/trainer_sprites/f_decidueye.gbapal");
static const u16 sPlayerFSprite_Litten_Pal[] = INCBIN_U16("graphics/nemo_main_menu_ui/trainer_sprites/f_litten.gbapal");
static const u16 sPlayerFSprite_Torracat_Pal[] = INCBIN_U16("graphics/nemo_main_menu_ui/trainer_sprites/f_torracat.gbapal");
static const u16 sPlayerFSprite_Incineroar_Pal[] = INCBIN_U16("graphics/nemo_main_menu_ui/trainer_sprites/f_incineroar.gbapal");
static const u16 sPlayerFSprite_Popplio_Pal[] = INCBIN_U16("graphics/nemo_main_menu_ui/trainer_sprites/f_popplio.gbapal");
static const u16 sPlayerFSprite_Brionne_Pal[] = INCBIN_U16("graphics/nemo_main_menu_ui/trainer_sprites/f_brionne.gbapal");
static const u16 sPlayerFSprite_Primarina_Pal[] = INCBIN_U16("graphics/nemo_main_menu_ui/trainer_sprites/f_primarina.gbapal");

// Sprite DATA for Trainer sprites, Z-Crystals, and Stamps (contain information later functions can interpret!)
#define TAG_TRAINER_SPRITE 30012 // from Archie/Mudskip's Main Menu UI code
static const struct CompressedSpriteSheet sSpriteSheet_PlayerMSprite_Rowlet = // Code-friendly reference to sprite
{
    .data = sPlayerMSprite_Rowlet, // Connection to sprite file
    .size = 2048, // Image is 64x64. Number divided by 2 i guess
    .tag = TAG_TRAINER_SPRITE, // Unique identifier used by all Trainer Sprite info pieces
};
static const struct CompressedSpriteSheet sSpriteSheet_PlayerMSprite_Dartrix = { .data = sPlayerMSprite_Dartrix, .size = 2048, .tag = TAG_TRAINER_SPRITE, };
static const struct CompressedSpriteSheet sSpriteSheet_PlayerMSprite_Decidueye = { .data = sPlayerMSprite_Decidueye, .size = 2048, .tag = TAG_TRAINER_SPRITE, };
static const struct CompressedSpriteSheet sSpriteSheet_PlayerMSprite_Litten = { .data = sPlayerMSprite_Litten, .size = 2048, .tag = TAG_TRAINER_SPRITE, };
static const struct CompressedSpriteSheet sSpriteSheet_PlayerMSprite_Torracat = { .data = sPlayerMSprite_Torracat, .size = 2048, .tag = TAG_TRAINER_SPRITE, };
static const struct CompressedSpriteSheet sSpriteSheet_PlayerMSprite_Incineroar = { .data = sPlayerMSprite_Incineroar, .size = 2048, .tag = TAG_TRAINER_SPRITE, };
static const struct CompressedSpriteSheet sSpriteSheet_PlayerMSprite_Popplio = { .data = sPlayerMSprite_Popplio, .size = 2048, .tag = TAG_TRAINER_SPRITE, };
static const struct CompressedSpriteSheet sSpriteSheet_PlayerMSprite_Brionne = { .data = sPlayerMSprite_Brionne, .size = 2048, .tag = TAG_TRAINER_SPRITE, };
static const struct CompressedSpriteSheet sSpriteSheet_PlayerMSprite_Primarina = { .data = sPlayerFSprite_Primarina, .size = 2048, .tag = TAG_TRAINER_SPRITE, };
static const struct CompressedSpriteSheet sSpriteSheet_PlayerFSprite_Rowlet = { .data = sPlayerFSprite_Rowlet, .size = 2048, .tag = TAG_TRAINER_SPRITE, };
static const struct CompressedSpriteSheet sSpriteSheet_PlayerFSprite_Dartrix = { .data = sPlayerFSprite_Dartrix, .size = 2048, .tag = TAG_TRAINER_SPRITE, };
static const struct CompressedSpriteSheet sSpriteSheet_PlayerFSprite_Decidueye = { .data = sPlayerFSprite_Decidueye, .size = 2048, .tag = TAG_TRAINER_SPRITE, };
static const struct CompressedSpriteSheet sSpriteSheet_PlayerFSprite_Litten = { .data = sPlayerFSprite_Litten, .size = 2048, .tag = TAG_TRAINER_SPRITE, };
static const struct CompressedSpriteSheet sSpriteSheet_PlayerFSprite_Torracat = { .data = sPlayerFSprite_Torracat, .size = 2048, .tag = TAG_TRAINER_SPRITE, };
static const struct CompressedSpriteSheet sSpriteSheet_PlayerFSprite_Incineroar = { .data = sPlayerFSprite_Incineroar, .size = 2048, .tag = TAG_TRAINER_SPRITE, };
static const struct CompressedSpriteSheet sSpriteSheet_PlayerFSprite_Popplio = { .data = sPlayerFSprite_Popplio, .size = 2048, .tag = TAG_TRAINER_SPRITE, };
static const struct CompressedSpriteSheet sSpriteSheet_PlayerFSprite_Brionne = { .data = sPlayerFSprite_Brionne, .size = 2048, .tag = TAG_TRAINER_SPRITE, };
static const struct CompressedSpriteSheet sSpriteSheet_PlayerFSprite_Primarina = { .data = sPlayerFSprite_Primarina, .size = 2048, .tag = TAG_TRAINER_SPRITE, };

static const struct SpritePalette sSpritePal_PlayerMSprite_Rowlet = // Code-friendly reference to sprite palette
{
    .data = sPlayerMSprite_Rowlet_Pal, // Connection to the sprite palette file
    .tag = TAG_TRAINER_SPRITE // Unique identifier used by all Trainer Sprite info pieces
};
static const struct SpritePalette sSpritePal_PlayerMSprite_Dartrix = { .data = sPlayerMSprite_Dartrix_Pal, .tag = TAG_TRAINER_SPRITE };
static const struct SpritePalette sSpritePal_PlayerMSprite_Decidueye = { .data = sPlayerMSprite_Decidueye_Pal, .tag = TAG_TRAINER_SPRITE };
static const struct SpritePalette sSpritePal_PlayerMSprite_Litten = { .data = sPlayerMSprite_Litten_Pal, .tag = TAG_TRAINER_SPRITE };
static const struct SpritePalette sSpritePal_PlayerMSprite_Torracat = { .data = sPlayerMSprite_Torracat_Pal, .tag = TAG_TRAINER_SPRITE };
static const struct SpritePalette sSpritePal_PlayerMSprite_Incineroar = { .data = sPlayerMSprite_Incineroar_Pal, .tag = TAG_TRAINER_SPRITE };
static const struct SpritePalette sSpritePal_PlayerMSprite_Popplio = { .data = sPlayerMSprite_Popplio_Pal, .tag = TAG_TRAINER_SPRITE };
static const struct SpritePalette sSpritePal_PlayerMSprite_Brionne = { .data = sPlayerMSprite_Brionne_Pal, .tag = TAG_TRAINER_SPRITE };
static const struct SpritePalette sSpritePal_PlayerMSprite_Primarina = { .data = sPlayerFSprite_Primarina_Pal, .tag = TAG_TRAINER_SPRITE };
static const struct SpritePalette sSpritePal_PlayerFSprite_Rowlet = { .data = sPlayerFSprite_Rowlet_Pal, .tag = TAG_TRAINER_SPRITE };
static const struct SpritePalette sSpritePal_PlayerFSprite_Dartrix = { .data = sPlayerFSprite_Dartrix_Pal, .tag = TAG_TRAINER_SPRITE };
static const struct SpritePalette sSpritePal_PlayerFSprite_Decidueye = { .data = sPlayerFSprite_Decidueye_Pal, .tag = TAG_TRAINER_SPRITE };
static const struct SpritePalette sSpritePal_PlayerFSprite_Litten = { .data = sPlayerFSprite_Litten_Pal, .tag = TAG_TRAINER_SPRITE };
static const struct SpritePalette sSpritePal_PlayerFSprite_Torracat = { .data = sPlayerFSprite_Torracat_Pal, .tag = TAG_TRAINER_SPRITE };
static const struct SpritePalette sSpritePal_PlayerFSprite_Incineroar = { .data = sPlayerFSprite_Incineroar_Pal, .tag = TAG_TRAINER_SPRITE };
static const struct SpritePalette sSpritePal_PlayerFSprite_Popplio = { .data = sPlayerFSprite_Popplio_Pal, .tag = TAG_TRAINER_SPRITE };
static const struct SpritePalette sSpritePal_PlayerFSprite_Brionne = { .data = sPlayerFSprite_Brionne_Pal, .tag = TAG_TRAINER_SPRITE };
static const struct SpritePalette sSpritePal_PlayerFSprite_Primarina = { .data = sPlayerFSprite_Primarina_Pal, .tag = TAG_TRAINER_SPRITE };

static const struct SpriteTemplate sSpriteTemplate_TrainerSprite = // Template for code to load Trainer Sprite
{
    .tileTag = TAG_TRAINER_SPRITE,
    .paletteTag = TAG_TRAINER_SPRITE,
    .oam = &sOam_64x64Sprite,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

// NOTE:
// To display multiple of these sprites at a time, each sprite needs it's own tag
// which will be applied in their CompressedSpriteSheet and SpriteTemplate areas later!
#define TAG_STAMP_PAL 30060 // All sprites use same single palette for eficiency (stored on island_challenge.png)
#define TAG_STAMP_MELEMELE_TRIAL 30062
#define TAG_STAMP_AKALA_TRIAL 30064
#define TAG_STAMP_ULAULA_TRIAL 30066
#define TAG_STAMP_PONI_TRIAL 30068
#define TAG_STAMP_ISLAND_CHALLENGE 30070
static const u32 sStampSprite_MelemeleTrial[] = INCBIN_U32("graphics/nemo_main_menu_ui/stamps/melemele.4bpp.smol");
static const u32 sStampSprite_AkalaTrial[] = INCBIN_U32("graphics/nemo_main_menu_ui/stamps/akala.4bpp.smol");
static const u32 sStampSprite_UlaUlaTrial[] = INCBIN_U32("graphics/nemo_main_menu_ui/stamps/ula_ula.4bpp.smol");
static const u32 sStampSprite_PoniTrial[] = INCBIN_U32("graphics/nemo_main_menu_ui/stamps/poni.4bpp.smol");
static const u32 sStampSprite_IslandChallenge[] = INCBIN_U32("graphics/nemo_main_menu_ui/stamps/island_challenge.4bpp.smol");
static const u16 sStampPal[] = INCBIN_U16("graphics/nemo_main_menu_ui/stamps/island_challenge.gbapal");

static const struct CompressedSpriteSheet sSpriteSheet_Stamp_MelemeleTrial = { .data = sStampSprite_MelemeleTrial, .size = 128, .tag = TAG_STAMP_MELEMELE_TRIAL, };
static const struct CompressedSpriteSheet sSpriteSheet_Stamp_AkalaTrial = { .data = sStampSprite_AkalaTrial, .size = 128, .tag = TAG_STAMP_AKALA_TRIAL, };
static const struct CompressedSpriteSheet sSpriteSheet_Stamp_UlaUlaTrial = { .data = sStampSprite_UlaUlaTrial, .size = 128, .tag = TAG_STAMP_ULAULA_TRIAL, };
static const struct CompressedSpriteSheet sSpriteSheet_Stamp_PoniTrial = { .data = sStampSprite_PoniTrial, .size = 128, .tag = TAG_STAMP_PONI_TRIAL, };
static const struct CompressedSpriteSheet sSpriteSheet_Stamp_IslandChallenge = { .data = sStampSprite_IslandChallenge, .size = 512, .tag = TAG_STAMP_ISLAND_CHALLENGE, };
static const struct SpritePalette sSpritePal_Stamp = { .data = sStampPal, .tag = TAG_STAMP_PAL };

static const struct SpriteTemplate sSpriteTemplate_Stamp_MelemeleTrial = { .tileTag = TAG_STAMP_MELEMELE_TRIAL, .paletteTag = TAG_STAMP_PAL, .oam = &sOam_16x16Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_Stamp_AkalaTrial = { .tileTag = TAG_STAMP_AKALA_TRIAL, .paletteTag = TAG_STAMP_PAL, .oam = &sOam_16x16Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_Stamp_UlaUlaTrial = { .tileTag = TAG_STAMP_ULAULA_TRIAL, .paletteTag = TAG_STAMP_PAL, .oam = &sOam_16x16Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_Stamp_PoniTrial = { .tileTag = TAG_STAMP_PONI_TRIAL, .paletteTag = TAG_STAMP_PAL, .oam = &sOam_16x16Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_Stamp_IslandChallenge = { .tileTag = TAG_STAMP_ISLAND_CHALLENGE, .paletteTag = TAG_STAMP_PAL, .oam = &sOam_32x32Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };

// Z-crystal stuff here - lots of variants so I figured I should separate it for organization lol
#define TAG_Z_CRYSTAL_SPRITE 30018 // from Archie/Mudskip's Main Menu UI code
#define TAG_Z_CRYSTAL_PAL_1 30048 // Palette 1: Used for Normal, Fighting, Water, and Fire
#define TAG_Z_CRYSTAL_PAL_2 30050 // Palette 2: Used for Grass, Rock, Electric, and Ghost
#define TAG_Z_CRYSTAL_PAL_3 30052 // Palette 3: Used for Dark, Dragon, Fairy, and Ground
static const u32 sZCrystalSprite_Normal[] = INCBIN_U32("graphics/nemo_main_menu_ui/z_crystals/normal.4bpp.smol");
static const u32 sZCrystalSprite_Fighting[] = INCBIN_U32("graphics/nemo_main_menu_ui/z_crystals/fighting.4bpp.smol");
static const u32 sZCrystalSprite_Water[] = INCBIN_U32("graphics/nemo_main_menu_ui/z_crystals/water.4bpp.smol");
static const u32 sZCrystalSprite_Fire[] = INCBIN_U32("graphics/nemo_main_menu_ui/z_crystals/fire.4bpp.smol");
static const u32 sZCrystalSprite_Grass[] = INCBIN_U32("graphics/nemo_main_menu_ui/z_crystals/grass.4bpp.smol");
static const u32 sZCrystalSprite_Rock[] = INCBIN_U32("graphics/nemo_main_menu_ui/z_crystals/rock.4bpp.smol");
static const u32 sZCrystalSprite_Electric[] = INCBIN_U32("graphics/nemo_main_menu_ui/z_crystals/electric.4bpp.smol");
static const u32 sZCrystalSprite_Ghost[] = INCBIN_U32("graphics/nemo_main_menu_ui/z_crystals/ghost.4bpp.smol");
static const u32 sZCrystalSprite_Dark[] = INCBIN_U32("graphics/nemo_main_menu_ui/z_crystals/dark.4bpp.smol");
static const u32 sZCrystalSprite_Dragon[] = INCBIN_U32("graphics/nemo_main_menu_ui/z_crystals/dragon.4bpp.smol");
static const u32 sZCrystalSprite_Fairy[] = INCBIN_U32("graphics/nemo_main_menu_ui/z_crystals/fairy.4bpp.smol");
static const u32 sZCrystalSprite_Ground[] = INCBIN_U32("graphics/nemo_main_menu_ui/z_crystals/ground.4bpp.smol");
static const u16 sZCrystalSprite_Pal1[] = INCBIN_U16("graphics/nemo_main_menu_ui/z_crystals/normal.gbapal");
static const u16 sZCrystalSprite_Pal2[] = INCBIN_U16("graphics/nemo_main_menu_ui/z_crystals/grass.gbapal");
static const u16 sZCrystalSprite_Pal3[] = INCBIN_U16("graphics/nemo_main_menu_ui/z_crystals/dark.gbapal");

static const struct CompressedSpriteSheet sSpriteSheet_ZCrystalSprite_Normal = { .data = sZCrystalSprite_Normal, .size = 128, /* 16x16, /2 */ .tag = TAG_Z_CRYSTAL_SPRITE, };
static const struct CompressedSpriteSheet sSpriteSheet_ZCrystalSprite_Fighting = { .data = sZCrystalSprite_Fighting, .size = 128, /* 16x16, /2 */ .tag = TAG_Z_CRYSTAL_SPRITE + 2, };
static const struct CompressedSpriteSheet sSpriteSheet_ZCrystalSprite_Water = { .data = sZCrystalSprite_Water, .size = 128, /* 16x16, /2 */ .tag = TAG_Z_CRYSTAL_SPRITE + 4, };
static const struct CompressedSpriteSheet sSpriteSheet_ZCrystalSprite_Fire = { .data = sZCrystalSprite_Fire, .size = 128, /* 16x16, /2 */ .tag = TAG_Z_CRYSTAL_SPRITE + 6, };
static const struct CompressedSpriteSheet sSpriteSheet_ZCrystalSprite_Grass = { .data = sZCrystalSprite_Grass, .size = 128, /* 16x16, /2 */ .tag = TAG_Z_CRYSTAL_SPRITE + 8, };
static const struct CompressedSpriteSheet sSpriteSheet_ZCrystalSprite_Rock = { .data = sZCrystalSprite_Rock, .size = 128, /* 16x16, /2 */ .tag = TAG_Z_CRYSTAL_SPRITE + 10, };
static const struct CompressedSpriteSheet sSpriteSheet_ZCrystalSprite_Electric = { .data = sZCrystalSprite_Electric, .size = 128, /* 16x16, /2 */ .tag = TAG_Z_CRYSTAL_SPRITE + 12, };
static const struct CompressedSpriteSheet sSpriteSheet_ZCrystalSprite_Ghost = { .data = sZCrystalSprite_Ghost, .size = 128, /* 16x16, /2 */ .tag = TAG_Z_CRYSTAL_SPRITE + 14, };
static const struct CompressedSpriteSheet sSpriteSheet_ZCrystalSprite_Dark = { .data = sZCrystalSprite_Dark, .size = 128, /* 16x16, /2 */ .tag = TAG_Z_CRYSTAL_SPRITE + 16, };
static const struct CompressedSpriteSheet sSpriteSheet_ZCrystalSprite_Dragon = { .data = sZCrystalSprite_Dragon, .size = 128, /* 16x16, /2 */ .tag = TAG_Z_CRYSTAL_SPRITE + 18, };
static const struct CompressedSpriteSheet sSpriteSheet_ZCrystalSprite_Fairy = { .data = sZCrystalSprite_Fairy, .size = 128, /* 16x16, /2 */ .tag = TAG_Z_CRYSTAL_SPRITE + 20, };
static const struct CompressedSpriteSheet sSpriteSheet_ZCrystalSprite_Ground = { .data = sZCrystalSprite_Ground, .size = 128, /* 16x16, /2 */ .tag = TAG_Z_CRYSTAL_SPRITE + 22, };
static const struct SpritePalette sSpritePal_ZCrystalSprite_Pal1 = { .data = sZCrystalSprite_Pal1, .tag = TAG_Z_CRYSTAL_PAL_1 };
static const struct SpritePalette sSpritePal_ZCrystalSprite_Pal2 = { .data = sZCrystalSprite_Pal2, .tag = TAG_Z_CRYSTAL_PAL_2 };
static const struct SpritePalette sSpritePal_ZCrystalSprite_Pal3 = { .data = sZCrystalSprite_Pal3, .tag = TAG_Z_CRYSTAL_PAL_3 };

// Code-friendly "templates" for later code to write upon
static const struct SpriteTemplate sSpriteTemplate_ZCrystal_Normal =
{
    .tileTag = TAG_Z_CRYSTAL_SPRITE,
    .paletteTag = TAG_Z_CRYSTAL_PAL_1,
    .oam = &sOam_16x16Sprite,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};
static const struct SpriteTemplate sSpriteTemplate_ZCrystal_Fighting =
{
    .tileTag = TAG_Z_CRYSTAL_SPRITE + 2,
    .paletteTag = TAG_Z_CRYSTAL_PAL_1,
    .oam = &sOam_16x16Sprite,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};
static const struct SpriteTemplate sSpriteTemplate_ZCrystal_Water = { .tileTag = TAG_Z_CRYSTAL_SPRITE + 4, .paletteTag = TAG_Z_CRYSTAL_PAL_1, .oam = &sOam_16x16Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_ZCrystal_Fire = { .tileTag = TAG_Z_CRYSTAL_SPRITE + 6, .paletteTag = TAG_Z_CRYSTAL_PAL_1, .oam = &sOam_16x16Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_ZCrystal_Grass = { .tileTag = TAG_Z_CRYSTAL_SPRITE + 8, .paletteTag = TAG_Z_CRYSTAL_PAL_2, .oam = &sOam_16x16Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_ZCrystal_Rock = { .tileTag = TAG_Z_CRYSTAL_SPRITE + 10, .paletteTag = TAG_Z_CRYSTAL_PAL_2, .oam = &sOam_16x16Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_ZCrystal_Electric = { .tileTag = TAG_Z_CRYSTAL_SPRITE + 12, .paletteTag = TAG_Z_CRYSTAL_PAL_2, .oam = &sOam_16x16Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_ZCrystal_Ghost = { .tileTag = TAG_Z_CRYSTAL_SPRITE + 14, .paletteTag = TAG_Z_CRYSTAL_PAL_2, .oam = &sOam_16x16Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_ZCrystal_Dark = { .tileTag = TAG_Z_CRYSTAL_SPRITE + 16, .paletteTag = TAG_Z_CRYSTAL_PAL_3, .oam = &sOam_16x16Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_ZCrystal_Dragon = { .tileTag = TAG_Z_CRYSTAL_SPRITE + 18, .paletteTag = TAG_Z_CRYSTAL_PAL_3, .oam = &sOam_16x16Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_ZCrystal_Fairy = { .tileTag = TAG_Z_CRYSTAL_SPRITE + 20, .paletteTag = TAG_Z_CRYSTAL_PAL_3, .oam = &sOam_16x16Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };
static const struct SpriteTemplate sSpriteTemplate_ZCrystal_Ground = { .tileTag = TAG_Z_CRYSTAL_SPRITE + 22, .paletteTag = TAG_Z_CRYSTAL_PAL_3, .oam = &sOam_16x16Sprite, .anims = gDummySpriteAnimTable, .images = NULL, .affineAnims = gDummySpriteAffineAnimTable, .callback = SpriteCallbackDummy };

enum
{
    ACTION_NEW_GAME,
    ACTION_CONTINUE,
    ACTION_OPTION,
    ACTION_INVALID
};

enum FontColor
{
    FONT_WHITE,
    FONT_RED
};
static const u8 sNemoMMWindowFontColors[][3] =
{
    [FONT_WHITE]  = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_WHITE,      TEXT_COLOR_DARK_GRAY},
    [FONT_RED]    = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_RED,        TEXT_COLOR_LIGHT_GRAY},
};

// Callbacks for the sample UI
static void NemoMM_SetupCB(void);
static void NemoMM_MainCB(void);
static void NemoMM_VBlankCB(void);

// Sample UI tasks
static void Task_NemoMMWaitFadeIn(u8 taskId);
static void Task_NemoMMMainInput(u8 taskId);
static void Task_HandleMainMenuAPressed(u8);
static void Task_NemoMMWaitFadeAndBail(u8 taskId);
static void Task_NemoMMWaitFadeAndExitGracefully(u8 taskId);

// Sample UI helper functions
static void NemoMM_Init(MainCallback callback);
static void NemoMM_ResetGpuRegsAndBgs(void);
static bool8 NemoMM_InitBgs(void);
static void NemoMM_FadeAndBail(void);
static bool8 NemoMM_LoadGraphics(void);
static void NemoMM_InitWindows(void);
static void NemoMM_PrintUiSampleWindowText(void);
static void NemoMM_FreeResources(void);

// Main Menu UI-specific functions (Nemo)
static void NemoMM_CreateTrainerSprite(void);
static void NemoMM_CreatePokemonIcons(void);
static void NemoMM_CreateZCrystalsAndStamps(void);
static void NemoMM_PrintText(void);

// Declared in sample_ui.h
void Task_OpenNemoMM_BlankTemplate(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        CleanupOverworldWindowsAndTilemaps();
        NemoMM_Init(CB2_ReturnToFieldWithOpenMenu);
        DestroyTask(taskId);
    }
}

static void NemoMM_Init(MainCallback callback)
{
    sNemoMMState = AllocZeroed(sizeof(struct NemoMMState));
    if (sNemoMMState == NULL)
    {
        SetMainCallback2(callback);
        return;
    }

    sNemoMMState->loadState = 0;
    sNemoMMState->savedCallback = callback;

    u32 i = 0;
    for(i = 0; i < 6; i++)
        sNemoMMState->iconMonSpriteIds[i] = SPRITE_NONE;
    for (i = 0; i < 12; i++)
        sNemoMMState->zCrystalSpriteIds[i] = SPRITE_NONE;
    

    SetMainCallback2(NemoMM_SetupCB);
}

// Credit: Jaizu, pret
static void NemoMM_ResetGpuRegsAndBgs(void)
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

/*
The SetupCB is done in a "switch" statement that incrementally increases each time it's called to reduce the
hardware demands of each individual frame, as far as I understand it.
Basically, this SetupCB function will keep being called on repeat, each time increasing the "gMain.state" by 1
until the end is reached!
*/

static void NemoMM_SetupCB(void)
{
    switch (gMain.state)
    {
    case 0:
        NemoMM_ResetGpuRegsAndBgs();
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
        if (NemoMM_InitBgs())
        {
            sNemoMMState->loadState = 0;
            gMain.state++;
        }
        else
        {
            NemoMM_FadeAndBail();
            return;
        }
        break;
    case 3:
        if (NemoMM_LoadGraphics() == TRUE)
        {
            gMain.state++;
        }
        break;
    case 4:
        NemoMM_InitWindows();
        gMain.state++;
        break;
    case 5: // This will be where text and sprites are loaded!
        // NemoMM_PrintUiSampleWindowText();
        NemoMM_CreateTrainerSprite();
        NemoMM_CreatePokemonIcons();
        NemoMM_CreateZCrystalsAndStamps();
        NemoMM_PrintText();
        CreateTask(Task_NemoMMWaitFadeIn, 0);
        gMain.state++;
        break;
    case 6:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_WHITEALPHA);
        gMain.state++;
        break;
    case 7:
        SetVBlankCallback(NemoMM_VBlankCB);
        SetMainCallback2(NemoMM_MainCB);
        break;
    }
}

// Pretty sure this is called every frame after SetupCB is complete
static void NemoMM_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void NemoMM_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void Task_NemoMMWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        gTasks[taskId].func = Task_NemoMMMainInput;
    }
}

// --------------------------------------- HANDLE INPUT ---------------------------------------

static void Task_NemoMMMainInput(u8 taskId)
{
    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 0x10, RGB_BLACK);
        // gTasks[taskId].func = Task_HandleMainMenuAPressed;
        ClearStdWindowAndFrame(0, TRUE);
        ChangeBgY(0, 0, BG_COORD_SET);
        ChangeBgY(1, 0, BG_COORD_SET);
        gPlttBufferUnfaded[0] = RGB_BLACK;
        gPlttBufferFaded[0] = RGB_BLACK;
        SetMainCallback2(CB2_ContinueSavedGame);
        DestroyTask(taskId);
    }
    if(JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 0x10, RGB_BLACK);
        ClearStdWindowAndFrame(0, TRUE);
        ChangeBgY(0, 0, BG_COORD_SET);
        ChangeBgY(1, 0, BG_COORD_SET);
        SetMainCallback2(CB2_NewGameBirchSpeech_FromNewMainMenu);
        DestroyTask(taskId);
    }
    if(JOY_NEW(L_BUTTON))
    {
        PlaySE(SE_SELECT);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 0x10, RGB_BLACK);
        ClearStdWindowAndFrame(0, TRUE);
        ChangeBgY(0, 0, BG_COORD_SET);
        ChangeBgY(1, 0, BG_COORD_SET);
        gMain.savedCallback = CB2_ReinitMainMenu;
        SetMainCallback2(CB2_InitOptionMenu);
        DestroyTask(taskId);
    }
}

static void Task_HandleMainMenuAPressed(u8 taskId)
{
    u8 action;

    if (!gPaletteFade.active)
    {
        ClearStdWindowAndFrame(0, TRUE);

        switch (sNemoMMState->sSelectedOption)
        {
        case 0:
        default:
            action = ACTION_CONTINUE;
            break;
        case 1:
            action = ACTION_NEW_GAME;
            break;
        case 2:
            action = ACTION_OPTION;
            break;
        }

        ChangeBgY(0, 0, BG_COORD_SET);
        ChangeBgY(1, 0, BG_COORD_SET);

        switch (action)
        {
        case ACTION_NEW_GAME:
        default:
            SetMainCallback2(CB2_NewGameBirchSpeech_FromNewMainMenu);
            DestroyTask(taskId);
            break;
        case ACTION_CONTINUE:
            gPlttBufferUnfaded[0] = RGB_BLACK;
            gPlttBufferFaded[0] = RGB_BLACK;
            SetMainCallback2(CB2_ContinueSavedGame);
            DestroyTask(taskId);
            break;
        case ACTION_OPTION:
            gMain.savedCallback = CB2_ReinitMainMenu;
            SetMainCallback2(CB2_InitOptionMenu);
            DestroyTask(taskId);
            break;
        }

        FreeAllWindowBuffers();
        if (action != ACTION_OPTION)
            sNemoMMState->sSelectedOption = 0;
        else
            sNemoMMState->sSelectedOption = 2;  // entering the options menu

    }
}

static void Task_NemoMMWaitFadeAndBail(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sNemoMMState->savedCallback);
        NemoMM_FreeResources();
        DestroyTask(taskId);
    }
}

static void Task_NemoMMWaitFadeAndExitGracefully(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sNemoMMState->savedCallback);
        NemoMM_FreeResources();
        DestroyTask(taskId);
    }
}

// ------------------------------------- End Input Code --------------------------------------

#define TILEMAP_BUFFER_SIZE (1024 * 2)
static bool8 NemoMM_InitBgs(void)
{
    ResetAllBgsCoordinates();

    sBg1TilemapBuffer = AllocZeroed(TILEMAP_BUFFER_SIZE);
    if (sBg1TilemapBuffer == NULL)
    {
        return FALSE;
    }

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sNemoMMBgTemplates, NELEMS(sNemoMMBgTemplates));

    SetBgTilemapBuffer(1, sBg1TilemapBuffer);
    ScheduleBgCopyTilemapToVram(1);

    ShowBg(0);
    ShowBg(1);

    return TRUE;
}
#undef TILEMAP_BUFFER_SIZE

static void NemoMM_FadeAndBail(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_NemoMMWaitFadeAndBail, 0);
    SetVBlankCallback(NemoMM_VBlankCB);
    SetMainCallback2(NemoMM_MainCB);
}

static bool8 NemoMM_LoadGraphics(void)
{
    switch (sNemoMMState->loadState)
    {
    case 0:
        ResetTempTileDataBuffers();
        DecompressAndCopyTileDataToVram(1, sNemoMMTiles, 0, 0, 0);
        sNemoMMState->loadState++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            DecompressDataWithHeaderWram(sNemoMMTilemap, sBg1TilemapBuffer);
            sNemoMMState->loadState++;
        }
        break;
    case 2:
        LoadPalette(sNemoMMPalette, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
        LoadPalette(gMessageBox_Pal, BG_PLTT_ID(15), PLTT_SIZE_4BPP);
        sNemoMMState->loadState++;
    case 3:
        // Load Sprite Sheets and Palettes earlier than CreateTrainerSprite functions!
        // This is to reduce the load on each individual frame (I think)
        // VarSet(VAR_STARTER_MON, SPECIES_POPPLIO); // TESTING
        // GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_BRIONNE), FLAG_SET_CAUGHT); // TESTING
        if(gSaveBlock2Ptr->playerGender == MALE) // MALE PLAYER
        {
            switch(VarGet(VAR_STARTER_MON))
            {
            case SPECIES_ROWLET:
            default:
                if(GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_DECIDUEYE), FLAG_GET_CAUGHT))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_PlayerMSprite_Decidueye);
                    LoadSpritePalette(&sSpritePal_PlayerMSprite_Decidueye);
                }
                else if(GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_DARTRIX), FLAG_GET_CAUGHT))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_PlayerMSprite_Dartrix);
                    LoadSpritePalette(&sSpritePal_PlayerMSprite_Dartrix);
                }
                else
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_PlayerMSprite_Rowlet);
                    LoadSpritePalette(&sSpritePal_PlayerMSprite_Rowlet);
                }
                break;
            case SPECIES_POPPLIO:
                if(GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_PRIMARINA), FLAG_GET_CAUGHT))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_PlayerMSprite_Primarina);
                    LoadSpritePalette(&sSpritePal_PlayerMSprite_Primarina);
                }
                else if(GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_BRIONNE), FLAG_GET_CAUGHT))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_PlayerMSprite_Brionne);
                    LoadSpritePalette(&sSpritePal_PlayerMSprite_Brionne);
                }
                else
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_PlayerMSprite_Popplio);
                    LoadSpritePalette(&sSpritePal_PlayerMSprite_Popplio);
                }
                break;
            case SPECIES_LITTEN:
                if(GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_INCINEROAR), FLAG_GET_CAUGHT))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_PlayerMSprite_Incineroar);
                    LoadSpritePalette(&sSpritePal_PlayerMSprite_Incineroar);
                }
                else if(GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_TORRACAT), FLAG_GET_CAUGHT))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_PlayerMSprite_Torracat);
                    LoadSpritePalette(&sSpritePal_PlayerMSprite_Torracat);
                }
                else
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_PlayerMSprite_Litten);
                    LoadSpritePalette(&sSpritePal_PlayerMSprite_Litten);
                }
                break;
            }
        }
        else // FEMALE PLAYER
        {
            switch(VarGet(VAR_STARTER_MON))
            {
            case SPECIES_ROWLET:
            default:
                if(GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_DECIDUEYE), FLAG_GET_CAUGHT))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_PlayerFSprite_Decidueye);
                    LoadSpritePalette(&sSpritePal_PlayerFSprite_Decidueye);
                }
                else if(GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_DARTRIX), FLAG_GET_CAUGHT))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_PlayerFSprite_Dartrix);
                    LoadSpritePalette(&sSpritePal_PlayerFSprite_Dartrix);
                }
                else
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_PlayerFSprite_Rowlet);
                    LoadSpritePalette(&sSpritePal_PlayerFSprite_Rowlet);
                }
                break;
            case SPECIES_POPPLIO:
                if(GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_PRIMARINA), FLAG_GET_CAUGHT))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_PlayerFSprite_Primarina);
                    LoadSpritePalette(&sSpritePal_PlayerFSprite_Primarina);
                }
                else if(GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_BRIONNE), FLAG_GET_CAUGHT))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_PlayerFSprite_Brionne);
                    LoadSpritePalette(&sSpritePal_PlayerFSprite_Brionne);
                }
                else
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_PlayerFSprite_Popplio);
                    LoadSpritePalette(&sSpritePal_PlayerFSprite_Popplio);
                }
                break;
            case SPECIES_LITTEN:
                if(GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_INCINEROAR), FLAG_GET_CAUGHT))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_PlayerFSprite_Incineroar);
                    LoadSpritePalette(&sSpritePal_PlayerFSprite_Incineroar);
                }
                else if(GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_TORRACAT), FLAG_GET_CAUGHT))
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_PlayerFSprite_Torracat);
                    LoadSpritePalette(&sSpritePal_PlayerFSprite_Torracat);
                }
                else
                {
                    LoadCompressedSpriteSheet(&sSpriteSheet_PlayerFSprite_Litten);
                    LoadSpritePalette(&sSpritePal_PlayerFSprite_Litten);
                }
                break;
            }
        }
        sNemoMMState->loadState++;
    default:
        sNemoMMState->loadState = 0;
        return TRUE;
    }
    return FALSE;
}

static void NemoMM_InitWindows(void)
{
    InitWindows(sNemoMMWindowTemplates);
    DeactivateAllTextPrinters();
    ScheduleBgCopyTilemapToVram(0);

    FillWindowPixelBuffer(WINDOW_CRYSTALS, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    PutWindowTilemap(WINDOW_CRYSTALS);
    CopyWindowToVram(WINDOW_CRYSTALS, 3);
}

// Sample UI testing code!
static const u8 sText_Text1[] = _("Hello, world!");
static const u8 sText_Text2[] = _("Press {A_BUTTON} to make a sound!");
static void NemoMM_PrintUiSampleWindowText(void)
{
    FillWindowPixelBuffer(WINDOW_CRYSTALS, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    AddTextPrinterParameterized4(WINDOW_CRYSTALS, FONT_NORMAL, 0, 3, 0, 0,
        sNemoMMWindowFontColors[FONT_WHITE], TEXT_SKIP_DRAW, sText_Text1);
    AddTextPrinterParameterized4(WINDOW_CRYSTALS, FONT_SMALL, 0, 15, 0, 0,
        sNemoMMWindowFontColors[FONT_RED], TEXT_SKIP_DRAW, sText_Text2);

    CopyWindowToVram(WINDOW_CRYSTALS, COPYWIN_GFX);
}

static void NemoMM_FreeResources(void)
{
    if (sNemoMMState != NULL)
    {
        Free(sNemoMMState);
    }
    if (sBg1TilemapBuffer != NULL)
    {
        Free(sBg1TilemapBuffer);
    }
    FreeAllWindowBuffers();
    ResetSpriteData();
}

// Nemo Main Menu functions

static void NemoMM_CreateTrainerSprite(void)
{
    // Creates Trainer sprite based on Archie & Mudskip's UI Main Menu code!
    // Remember: Spritesheet and Palette loaded in NemoMM_LoadGraphics case 3
    sNemoMMState->trainerSpriteId = CreateSprite(&sSpriteTemplate_TrainerSprite, 98, 98, 0);

    gSprites[sNemoMMState->trainerSpriteId].invisible = FALSE;
    StartSpriteAnim(&gSprites[sNemoMMState->trainerSpriteId], 0);
    gSprites[sNemoMMState->trainerSpriteId].oam.priority = 0;
    return;
}

#define ICON_BOX_1_START_X          145
#define ICON_BOX_1_START_Y          115
#define ICON_BOX_X_DIFFERENCE       18
#define ICON_BOX_Y_DIFFERENCE       18
static void NemoMM_CreatePokemonIcons(void)
{
    // Loads 6 Pokémon party icons - code from Archie & Mudskip's UI Main Menu code!
    u8 i = 0;
    s16 x = ICON_BOX_1_START_X;
    s16 y = ICON_BOX_1_START_Y;
    struct Pokemon *mon;
    LoadMonIconPalettes();
    for(i = 0; i < gPlayerPartyCount; i++)
    {   
        switch (i) // choose position for each icon
        {
            case 0:
                x = ICON_BOX_1_START_X;
                y = ICON_BOX_1_START_Y;
                break;
            case 1:
                x = ICON_BOX_1_START_X + ICON_BOX_X_DIFFERENCE;
                y = ICON_BOX_1_START_Y;
                break;
            case 2:
                x = ICON_BOX_1_START_X + (ICON_BOX_X_DIFFERENCE * 2);
                y = ICON_BOX_1_START_Y;
                break;
            case 3:
                x = ICON_BOX_1_START_X;
                y = ICON_BOX_1_START_Y + (ICON_BOX_Y_DIFFERENCE * 1);
                break;
            case 4:
                x = ICON_BOX_1_START_X + ICON_BOX_X_DIFFERENCE;
                y = ICON_BOX_1_START_Y + (ICON_BOX_X_DIFFERENCE * 1);
                break;
            case 5:
                x = ICON_BOX_1_START_X + (ICON_BOX_X_DIFFERENCE * 2);
                y = ICON_BOX_1_START_Y + (ICON_BOX_Y_DIFFERENCE * 1);
                break;
        }

        sNemoMMState->iconMonSpriteIds[i] = CreateMonIcon(GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG), SpriteCB_MonIcon, x, y, 0, GetMonData(&gPlayerParty[i], MON_DATA_PERSONALITY));

        gSprites[sNemoMMState->iconMonSpriteIds[i]].oam.priority = 0;

        // Maybe an egg check from ui_main_menu? Not sure
        // if (GetHPEggCyclePercent(i) == 0)
        // {
        //     gSprites[sNemoMMState->iconMonSpriteIds[i]].callback = SpriteCallbackDummy;
        // }

    }
}

static void NemoMM_CreateZCrystalsAndStamps(void)
{
    #define ZCRYSTAL_BASE_X 23
    #define ZCRYSTAL_BASE_Y 80
    #define ZCRYSTAL_OFFSET_X 8
    #define ZCRYSTAL_OFFSET_Y 5

    u8 i, zCrystalCount = 0;
    for (i = FLAG_GOT_NORMAL_Z_CRYSTAL; i <= FLAG_GOT_GROUND_Z_CRYSTAL; i++)
    {
        // FlagSet(i); // TESTING - set all crystals got
        if (FlagGet(i))
            zCrystalCount++;
    }

    switch(zCrystalCount)
    {
    case 0:
    default:
        break;
    case 12:
        LoadCompressedSpriteSheet(&sSpriteSheet_ZCrystalSprite_Ground);
        LoadSpritePalette(&sSpritePal_ZCrystalSprite_Pal3);
        sNemoMMState->zCrystalSpriteIds[11] = CreateSprite(&sSpriteTemplate_ZCrystal_Ground, ZCRYSTAL_BASE_X + (ZCRYSTAL_OFFSET_X * 3), ZCRYSTAL_BASE_Y + (ZCRYSTAL_OFFSET_Y * 3), 0);
    case 11:
        LoadCompressedSpriteSheet(&sSpriteSheet_ZCrystalSprite_Fairy);
        LoadSpritePalette(&sSpritePal_ZCrystalSprite_Pal3);
        sNemoMMState->zCrystalSpriteIds[10] = CreateSprite(&sSpriteTemplate_ZCrystal_Fairy, ZCRYSTAL_BASE_X + ZCRYSTAL_OFFSET_X, ZCRYSTAL_BASE_Y + (ZCRYSTAL_OFFSET_Y * 3), 0);
    case 10:
        LoadCompressedSpriteSheet(&sSpriteSheet_ZCrystalSprite_Dragon);
        LoadSpritePalette(&sSpritePal_ZCrystalSprite_Pal3);
        sNemoMMState->zCrystalSpriteIds[9] = CreateSprite(&sSpriteTemplate_ZCrystal_Dragon, ZCRYSTAL_BASE_X + (ZCRYSTAL_OFFSET_X * 4), ZCRYSTAL_BASE_Y + (ZCRYSTAL_OFFSET_Y * 2), 0);
    case 9:
        LoadCompressedSpriteSheet(&sSpriteSheet_ZCrystalSprite_Dark);
        LoadSpritePalette(&sSpritePal_ZCrystalSprite_Pal3);
        sNemoMMState->zCrystalSpriteIds[8] = CreateSprite(&sSpriteTemplate_ZCrystal_Dark, ZCRYSTAL_BASE_X + (ZCRYSTAL_OFFSET_X * 2), ZCRYSTAL_BASE_Y + (ZCRYSTAL_OFFSET_Y * 2), 0);
    case 8:
        LoadCompressedSpriteSheet(&sSpriteSheet_ZCrystalSprite_Ghost);
        LoadSpritePalette(&sSpritePal_ZCrystalSprite_Pal2);
        sNemoMMState->zCrystalSpriteIds[7] = CreateSprite(&sSpriteTemplate_ZCrystal_Ghost, ZCRYSTAL_BASE_X, ZCRYSTAL_BASE_Y + (ZCRYSTAL_OFFSET_Y * 2), 0);
    case 7:
        LoadCompressedSpriteSheet(&sSpriteSheet_ZCrystalSprite_Electric);
        LoadSpritePalette(&sSpritePal_ZCrystalSprite_Pal2);
        sNemoMMState->zCrystalSpriteIds[6] = CreateSprite(&sSpriteTemplate_ZCrystal_Electric, ZCRYSTAL_BASE_X + (ZCRYSTAL_OFFSET_X * 3), ZCRYSTAL_BASE_Y + ZCRYSTAL_OFFSET_Y, 0);
    case 6:
        LoadCompressedSpriteSheet(&sSpriteSheet_ZCrystalSprite_Rock);
        LoadSpritePalette(&sSpritePal_ZCrystalSprite_Pal2);
        sNemoMMState->zCrystalSpriteIds[5] = CreateSprite(&sSpriteTemplate_ZCrystal_Rock, ZCRYSTAL_BASE_X + ZCRYSTAL_OFFSET_X, ZCRYSTAL_BASE_Y + ZCRYSTAL_OFFSET_Y, 0);
    case 5:
        LoadCompressedSpriteSheet(&sSpriteSheet_ZCrystalSprite_Grass);
        LoadSpritePalette(&sSpritePal_ZCrystalSprite_Pal2);
        sNemoMMState->zCrystalSpriteIds[4] = CreateSprite(&sSpriteTemplate_ZCrystal_Grass, ZCRYSTAL_BASE_X + (ZCRYSTAL_OFFSET_X * 4), ZCRYSTAL_BASE_Y, 0);
    case 4:
        LoadCompressedSpriteSheet(&sSpriteSheet_ZCrystalSprite_Fire);
        LoadSpritePalette(&sSpritePal_ZCrystalSprite_Pal1);
        sNemoMMState->zCrystalSpriteIds[3] = CreateSprite(&sSpriteTemplate_ZCrystal_Fire, ZCRYSTAL_BASE_X + (ZCRYSTAL_OFFSET_X * 2), ZCRYSTAL_BASE_Y, 0);
    case 3:
        LoadCompressedSpriteSheet(&sSpriteSheet_ZCrystalSprite_Water);
        LoadSpritePalette(&sSpritePal_ZCrystalSprite_Pal1);
        sNemoMMState->zCrystalSpriteIds[2] = CreateSprite(&sSpriteTemplate_ZCrystal_Water, ZCRYSTAL_BASE_X, ZCRYSTAL_BASE_Y, 0);
    case 2:
        LoadCompressedSpriteSheet(&sSpriteSheet_ZCrystalSprite_Fighting);
        LoadSpritePalette(&sSpritePal_ZCrystalSprite_Pal1);
        sNemoMMState->zCrystalSpriteIds[1] = CreateSprite(&sSpriteTemplate_ZCrystal_Fighting, ZCRYSTAL_BASE_X + (ZCRYSTAL_OFFSET_X * 3), ZCRYSTAL_BASE_Y - ZCRYSTAL_OFFSET_Y, 0);
    case 1:
        LoadCompressedSpriteSheet(&sSpriteSheet_ZCrystalSprite_Normal);
        LoadSpritePalette(&sSpritePal_ZCrystalSprite_Pal1);
        sNemoMMState->zCrystalSpriteIds[0] = CreateSprite(&sSpriteTemplate_ZCrystal_Normal, ZCRYSTAL_BASE_X + ZCRYSTAL_OFFSET_X, ZCRYSTAL_BASE_Y - ZCRYSTAL_OFFSET_Y, 0);
        break;
    }

    // Time to load the Stamps!
    // These won't have fance defines for positions, I'm just gonna use magic numbers lol
    if(FlagGet(FLAG_GOT_FIGHTING_Z_CRYSTAL)) // Cleared Melememe Grand Trial
    {
        LoadCompressedSpriteSheet(&sSpriteSheet_Stamp_MelemeleTrial);
        LoadSpritePalette(&sSpritePal_Stamp);
        sNemoMMState->stampSpriteIds[0] = CreateSprite(&sSpriteTemplate_Stamp_MelemeleTrial, 19, 58, 0);
    }
    
    if(FlagGet(FLAG_GOT_ROCK_Z_CRYSTAL))
    {
        LoadCompressedSpriteSheet(&sSpriteSheet_Stamp_AkalaTrial);
        LoadSpritePalette(&sSpritePal_Stamp);
        sNemoMMState->stampSpriteIds[1] = CreateSprite(&sSpriteTemplate_Stamp_AkalaTrial, 59, 54, 0);
    }
    
    if(FlagGet(FLAG_GOT_DARK_Z_CRYSTAL))
    {
        LoadCompressedSpriteSheet(&sSpriteSheet_Stamp_UlaUlaTrial);
        LoadSpritePalette(&sSpritePal_Stamp);
        sNemoMMState->stampSpriteIds[2] = CreateSprite(&sSpriteTemplate_Stamp_UlaUlaTrial, 99, 50, 0);
    }

    if(FlagGet(FLAG_GOT_GROUND_Z_CRYSTAL))
    {
        LoadCompressedSpriteSheet(&sSpriteSheet_Stamp_PoniTrial);
        LoadSpritePalette(&sSpritePal_Stamp);
        sNemoMMState->stampSpriteIds[3] = CreateSprite(&sSpriteTemplate_Stamp_PoniTrial, 139, 46, 0);
    }

    if(FlagGet(FLAG_IS_CHAMPION))
    {
        LoadCompressedSpriteSheet(&sSpriteSheet_Stamp_IslandChallenge);
        LoadSpritePalette(&sSpritePal_Stamp);
        sNemoMMState->stampSpriteIds[4] = CreateSprite(&sSpriteTemplate_Stamp_IslandChallenge, 156, 67, 0);
    }

}

static const u8 sText_Z_Crystals[] = _("Z-Cryst.:");
static const u8 sText_PlayTime[] = _("Time:");
static const u8 sText_DexNum[] = _("PokéDex: {STR_VAR_1}");
static void NemoMM_PrintText(void)
{
    // Function to print Play Time and Z-crystal count under crystals,
    // Name under Trainer Sprite, and PkMn count under party mons
    FillWindowPixelBuffer(WINDOW_CRYSTALS, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    // Snagged from Archie & Mudskip's UI Main Menu (which is in turn mostly from Emerald's main menu code lol)
    // Prints play time
    #define PLAYTIME_TEXT_X 2
    #define PLAYTIME_TEXT_Y 84
    const u8 colors[3] = {0,  2,  3}; 

    u8 *playTimePtr;
    playTimePtr = ConvertIntToDecimalStringN(gStringVar4, gSaveBlock2Ptr->playTimeHours, STR_CONV_MODE_LEFT_ALIGN, 3);
    *playTimePtr = 0xF0;
    ConvertIntToDecimalStringN(playTimePtr + 1, gSaveBlock2Ptr->playTimeMinutes, STR_CONV_MODE_LEADING_ZEROS, 2);
    AddTextPrinterParameterized4(WINDOW_CRYSTALS, FONT_SMALL_NARROWER, PLAYTIME_TEXT_X + GetStringRightAlignXOffset(FONT_NORMAL, gStringVar4, (6*8)), PLAYTIME_TEXT_Y, 0, 0, colors, TEXT_SKIP_DRAW, gStringVar4);
    AddTextPrinterParameterized4(WINDOW_CRYSTALS, FONT_SMALL_NARROWER, PLAYTIME_TEXT_X, PLAYTIME_TEXT_Y, 0, 0, colors, TEXT_SKIP_DRAW, sText_PlayTime);

    // Prints Z-crystal count
    u8 i, zCrystalCount = 0;
    for (i = FLAG_GOT_NORMAL_Z_CRYSTAL; i <= FLAG_GOT_STEEL_Z_CRYSTAL; i++) // This idea is ALSO from Archie & Mudskip
    {
        // FlagSet(i); // TESTING - set all crystals got
        if (FlagGet(i))
            zCrystalCount++;
    } 
    ConvertIntToDecimalStringN(gStringVar1, zCrystalCount, STR_CONV_MODE_LEADING_ZEROS, 2);
    AddTextPrinterParameterized4(WINDOW_CRYSTALS, FONT_SMALL_NARROWER, PLAYTIME_TEXT_X + GetStringRightAlignXOffset(FONT_NORMAL, gStringVar1, (6*8)) - 2, PLAYTIME_TEXT_Y + 10, 0, 0, colors, TEXT_SKIP_DRAW, gStringVar1);
    AddTextPrinterParameterized4(WINDOW_CRYSTALS, FONT_SMALL_NARROWER, PLAYTIME_TEXT_X, PLAYTIME_TEXT_Y + 10, 0, 0, colors, TEXT_SKIP_DRAW, sText_Z_Crystals);

    // Print Dex Numbers if You Have It
    u16 dexCount = 0;
    FlagSet(FLAG_SYS_POKEDEX_GET); // TESTING - enable dex
    if (FlagGet(FLAG_SYS_POKEDEX_GET) == TRUE)
    {
        dexCount = GetHoennPokedexCount(FLAG_GET_CAUGHT);
        ConvertIntToDecimalStringN(gStringVar1, dexCount, STR_CONV_MODE_RIGHT_ALIGN, 4);
        StringExpandPlaceholders(gStringVar4, sText_DexNum);
        AddTextPrinterParameterized4(WINDOW_CRYSTALS, FONT_SMALL_NARROWER, 122, 130, 0, 0, colors, TEXT_SKIP_DRAW, gStringVar4);
    }

    // Print Player name
    AddTextPrinterParameterized3(WINDOW_CRYSTALS, FONT_SMALL, 65, 115, colors, TEXT_SKIP_DRAW, gSaveBlock2Ptr->playerName);

    CopyWindowToVram(WINDOW_CRYSTALS, COPYWIN_GFX);
}

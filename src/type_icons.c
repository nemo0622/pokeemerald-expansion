#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_arena.h"
#include "battle_controllers.h"
#include "battle_dome.h"
#include "battle_interface.h"
#include "battle_message.h"
#include "battle_setup.h"
#include "battle_tv.h"
#include "battle_z_move.h"
#include "battle_gimmick.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "item.h"
#include "item_menu.h"
#include "link.h"
#include "main.h"
#include "m4a.h"
#include "palette.h"
#include "party_menu.h"
#include "pokeball.h"
#include "pokemon.h"
#include "random.h"
#include "recorded_battle.h"
#include "reshow_battle_screen.h"
#include "sound.h"
#include "string_util.h"
#include "task.h"
#include "test_runner.h"
#include "text.h"
#include "util.h"
#include "window.h"
#include "constants/battle_anim.h"
#include "constants/battle_move_effects.h"
#include "constants/battle_partner.h"
#include "constants/hold_effects.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/party_menu.h"
#include "constants/songs.h"
#include "constants/trainers.h"
#include "constants/rgb.h"
#include "level_caps.h"
#include "menu.h"
#include "pokemon_summary_screen.h"
#include "sprite.h"
#include "graphics.h"

struct Pokemon* GetBankPartyData(u8 bank);
u8 GetMonType(struct Pokemon* mon, u8 typeId);
static void SpriteCB_CamomonsTypeIcon(struct Sprite* sprite);
static bool8 ShouldHideTypeIconSprite(u8 bank);
static void DestroyTypeIcon(struct Sprite* sprite);

#define TYPE_ICON_TAG 0x2720
#define TYPE_ICON_TAG_2 0x2721
#define BATTLER_ALIVE(bank) (gBattleMons[bank].hp > 0)
#define IS_DOUBLE_BATTLE (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
#define IS_SINGLE_BATTLE !IS_DOUBLE_BATTLE
#define SIDE(bank) GetBattlerSide(bank)

struct Pokemon* GetBankPartyData(u8 bank)
{
    u8 index = gBattlerPartyIndexes[bank];
    return (SIDE(bank) == B_SIDE_OPPONENT) ? &gEnemyParty[index] : &gPlayerParty[index];
}

u8 GetMonType(struct Pokemon* mon, u8 typeId)
{
    u16 species = GetMonData(mon, MON_DATA_SPECIES, NULL);

    if (typeId == 0)
        return gSpeciesInfo[species].types[0];
    else
        return gSpeciesInfo[species].types[1];
}

static const struct Coords16 sTypeIconPositions[][/*IS_SINGLE_BATTLE*/2] =
{
    [B_POSITION_PLAYER_LEFT] =
    {
        [TRUE] = {221, 86},     //Single Battle
        [FALSE] = {144, 70},    //Double Battle
    },
    [B_POSITION_OPPONENT_LEFT] =
    {
        [TRUE] = {20, 26},         //Single Battle
        [FALSE] = {97, 14},        //Double Battle
    },
    [B_POSITION_PLAYER_RIGHT] =
    {
        [FALSE] = {156, 96},    //Double Battle
    },
    [B_POSITION_OPPONENT_RIGHT] =
    {
        [FALSE] = {85, 39},        //Double Battle
    },
};

static void DestroyTypeIcon(struct Sprite* sprite)
{
    u32 i;
    DestroySprite(sprite);

    //Check if any more type icons are still on the screen
    for (i = 0; i < MAX_SPRITES; ++i)
    {
        if (gSprites[i].inUse && gSprites[i].template->paletteTag == TYPE_ICON_TAG)
            return;
    }

    //Free palette if no type icons are left
    FreeSpritePaletteByTag(TYPE_ICON_TAG);
    FreeSpritePaletteByTag(TYPE_ICON_TAG_2);
}

static bool8 ShouldHideTypeIconSprite(u8 bank)
{
    return gBattlerControllerFuncs[bank] != PlayerHandleChooseMove
        && gBattlerControllerFuncs[bank] != HandleInputChooseMove
        && gBattlerControllerFuncs[bank] != HandleChooseMoveAfterDma3
        && gBattlerControllerFuncs[bank] != HandleInputChooseMove
        && gBattlerControllerFuncs[bank] != HandleInputChooseTarget
        && gBattlerControllerFuncs[bank] != HandleMoveSwitching
        && gBattlerControllerFuncs[bank] != HandleInputChooseMove;
}

static void SpriteCB_CamomonsTypeIcon(struct Sprite* sprite)
{
    u8 position = sprite->data[0];
    u8 bank = sprite->data[1];

    if (sprite->data[2] == 10)
    {
        DestroyTypeIcon(sprite);
        return;
    }

    //Type icons should prepare to destroy themselves if the Player is not choosing an action
    if (ShouldHideTypeIconSprite(bank))
    {
        if (IS_SINGLE_BATTLE)
        {
            switch (position) {
                case B_POSITION_PLAYER_LEFT:
                    sprite->x -= 1;
                    break;
                case B_POSITION_OPPONENT_LEFT:
                    sprite->x += 1;
                    break;
            }
        }
        else //Double Battle
        {
            switch (position) {
                case B_POSITION_PLAYER_LEFT:
                case B_POSITION_PLAYER_RIGHT:
                    sprite->x += 1;
                    break;
                case B_POSITION_OPPONENT_LEFT:
                case B_POSITION_OPPONENT_RIGHT:
                    sprite->x -= 1;
                    break;
            }
        }

        ++sprite->data[2];
        return;
    }

    if (IS_SINGLE_BATTLE)
    {
        switch (position) {
            case B_POSITION_PLAYER_LEFT:
                if (sprite->x < sTypeIconPositions[position][TRUE].x + 10)
                    sprite->x += 1;
                break;
            case B_POSITION_OPPONENT_LEFT:
                if (sprite->x > sTypeIconPositions[position][TRUE].x - 10)
                    sprite->x -= 1;
                break;
        }
    }
    else //Double Battle
    {
        switch (position) {
            case B_POSITION_PLAYER_LEFT:
            case B_POSITION_PLAYER_RIGHT:
                if (sprite->x > sTypeIconPositions[position][FALSE].x - 10)
                    sprite->x -= 1;
                break;
            case B_POSITION_OPPONENT_LEFT:
            case B_POSITION_OPPONENT_RIGHT:
                if (sprite->x < sTypeIconPositions[position][FALSE].x + 10)
                    sprite->x += 1;
                break;
        }
    }

    //Deal with bouncing player healthbox
    s16 originalY = sprite->data[3];
    struct Sprite* healthbox = &gSprites[gHealthboxSpriteIds[GetBattlerAtPosition(position)]];
    sprite->y = originalY + healthbox->y2;
}

#define TYPE_ICON_1_FRAME(monType) ((monType - 1) * 2)
#define TYPE_ICON_2_FRAME(monType) ((monType - 11) * 2)

// type image 1 anims
static const union AnimCmd sSpriteAnim_TypeIcon_Normal[] =
{
    ANIMCMD_FRAME(TYPE_ICON_1_FRAME(TYPE_NORMAL), 0),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Fighting[] =
{
    ANIMCMD_FRAME(TYPE_ICON_1_FRAME(TYPE_FIGHTING), 0),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Flying[] =
{
    ANIMCMD_FRAME(TYPE_ICON_1_FRAME(TYPE_FLYING), 0),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Poison[] =
{
    ANIMCMD_FRAME(TYPE_ICON_1_FRAME(TYPE_POISON), 0),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Ground[] =
{
    ANIMCMD_FRAME(TYPE_ICON_1_FRAME(TYPE_GROUND), 0),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Rock[] =
{
    ANIMCMD_FRAME(TYPE_ICON_1_FRAME(TYPE_ROCK), 0),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Bug[] =
{
    ANIMCMD_FRAME(TYPE_ICON_1_FRAME(TYPE_BUG), 0),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Ghost[] =
{
    ANIMCMD_FRAME(TYPE_ICON_1_FRAME(TYPE_GHOST), 0),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Steel[] =
{
    ANIMCMD_FRAME(TYPE_ICON_1_FRAME(TYPE_STEEL), 0),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Mystery[] =
{
    ANIMCMD_FRAME(TYPE_ICON_1_FRAME(TYPE_MYSTERY), 0),
    ANIMCMD_END
};

// type image 2 anims
static const union AnimCmd sSpriteAnim_TypeIcon_Fire[] =
{
    ANIMCMD_FRAME(TYPE_ICON_2_FRAME(TYPE_FIRE), 0),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Water[] =
{
    ANIMCMD_FRAME(TYPE_ICON_2_FRAME(TYPE_WATER), 0),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Grass[] =
{
    ANIMCMD_FRAME(TYPE_ICON_2_FRAME(TYPE_GRASS), 0),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Electric[] =
{
    ANIMCMD_FRAME(TYPE_ICON_2_FRAME(TYPE_ELECTRIC), 0),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Psychic[] =
{
    ANIMCMD_FRAME(TYPE_ICON_2_FRAME(TYPE_PSYCHIC), 0),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Ice[] =
{
    ANIMCMD_FRAME(TYPE_ICON_2_FRAME(TYPE_ICE), 0),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Dragon[] =
{
    ANIMCMD_FRAME(TYPE_ICON_2_FRAME(TYPE_DRAGON), 0),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Dark[] =
{
    ANIMCMD_FRAME(TYPE_ICON_2_FRAME(TYPE_DARK), 0),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIcon_Fairy[] =
{
    ANIMCMD_FRAME(TYPE_ICON_2_FRAME(TYPE_FAIRY), 0),
    ANIMCMD_END
};

static const union AnimCmd *const sSpriteAnimTable_TypeIcons[] =
{
    [TYPE_NORMAL] =     sSpriteAnim_TypeIcon_Normal,
    [TYPE_FIGHTING] =   sSpriteAnim_TypeIcon_Fighting,
    [TYPE_FLYING] =     sSpriteAnim_TypeIcon_Flying,
    [TYPE_POISON] =     sSpriteAnim_TypeIcon_Poison,
    [TYPE_GROUND] =     sSpriteAnim_TypeIcon_Ground,
    [TYPE_ROCK] =       sSpriteAnim_TypeIcon_Rock,
    [TYPE_BUG] =        sSpriteAnim_TypeIcon_Bug,
    [TYPE_GHOST] =      sSpriteAnim_TypeIcon_Ghost,
    [TYPE_STEEL] =      sSpriteAnim_TypeIcon_Steel,
    [TYPE_MYSTERY] =    sSpriteAnim_TypeIcon_Mystery,
    [TYPE_FIRE] =       sSpriteAnim_TypeIcon_Fire,
    [TYPE_WATER] =      sSpriteAnim_TypeIcon_Water,
    [TYPE_GRASS] =      sSpriteAnim_TypeIcon_Grass,
    [TYPE_ELECTRIC] =   sSpriteAnim_TypeIcon_Electric,
    [TYPE_PSYCHIC] =    sSpriteAnim_TypeIcon_Psychic,
    [TYPE_ICE] =        sSpriteAnim_TypeIcon_Ice,
    [TYPE_DRAGON] =     sSpriteAnim_TypeIcon_Dragon,
    [TYPE_DARK] =       sSpriteAnim_TypeIcon_Dark,
    [TYPE_FAIRY] =      sSpriteAnim_TypeIcon_Fairy,
};

static const struct CompressedSpritePalette sTypeIconPal1 =
{
    .data = gBattleIcons_Pal1,
    .tag = TYPE_ICON_TAG
};

static const struct CompressedSpritePalette sTypeIconPal2 =
{
    .data = gBattleIcons_Pal2,
    .tag = TYPE_ICON_TAG_2
};

static const struct OamData sOamData_TypeIcons =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(8x16),
    .size = SPRITE_SIZE(8x16),
    .priority = 1, //Same level as health bar
};

static const struct CompressedSpriteSheet sSpriteSheet_TypeIcons2 =
{
    .data = gBattleIcons_Gfx2,
    .size = 8*16*9, // 9 different 8x16 icons
    .tag = TYPE_ICON_TAG_2,
};

static const struct CompressedSpriteSheet sSpriteSheet_TypeIcons1 =
{
    .data = gBattleIcons_Gfx1,
    .size = (8*16) * 10, // 10 different 8x16 icons
    .tag = TYPE_ICON_TAG,
};

static const struct SpriteTemplate sSpriteTemplate_TypeIcons1 =
{
    .tileTag = TYPE_ICON_TAG,
    .paletteTag = TYPE_ICON_TAG,
    .oam = &sOamData_TypeIcons,
    .anims = sSpriteAnimTable_TypeIcons,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_CamomonsTypeIcon
};

static const struct SpriteTemplate sSpriteTemplate_TypeIcons2 =
{
    .tileTag = TYPE_ICON_TAG_2,
    .paletteTag = TYPE_ICON_TAG_2,
    .oam = &sOamData_TypeIcons,
    .anims = sSpriteAnimTable_TypeIcons,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_CamomonsTypeIcon
};

void TryLoadTypeIcons(u32 battler)
{
    if (IndexOfSpritePaletteTag(TYPE_ICON_TAG) == 0xFF)
    {
        LoadCompressedSpriteSheet(&sSpriteSheet_TypeIcons1);
        LoadCompressedSpriteSheet(&sSpriteSheet_TypeIcons2);
        LoadCompressedSpritePalette(&sTypeIconPal1);
        LoadCompressedSpritePalette(&sTypeIconPal2);
    }

    for (u8 position = 0; position < gBattlersCount; ++position)
    {
        u8 bank = GetBattlerAtPosition(position);

        if (!BATTLER_ALIVE(GetBattlerAtPosition(position)))
            continue;

        /*
           struct Pokemon* monIllusion = GetIllusionMonPtr(bank);

           if (monIllusion != GetBankPartyData(bank)) //Under Illusion
           {
           type1 = GetMonType(monIllusion, 0);
           type2 = GetMonType(monIllusion, 1);
           }
           else
           {
           type1 = gBattleMons[bank].type1;
           type2 = gBattleMons[bank].type2;
           }
           */

        u8 type1 = gBattleMons[bank].type1;
        u8 type2 = gBattleMons[bank].type2;

        for (u8 typeNum = 0; typeNum < 2; ++typeNum) //Load each type
        {
            u8 spriteId;
            s16 x = sTypeIconPositions[position][IS_SINGLE_BATTLE].x;
            s16 y = sTypeIconPositions[position][IS_SINGLE_BATTLE].y + (11 * typeNum); //2nd type is 13px below

            u8 type = (typeNum == 0) ? type1 : type2;

            switch (type) //Certain types have a different palette
            { 
            case TYPE_FIRE:
            case TYPE_WATER:
            case TYPE_GRASS:
            case TYPE_ELECTRIC:
            case TYPE_PSYCHIC:
            case TYPE_ICE:
            case TYPE_DRAGON:
            case TYPE_DARK:
            case TYPE_FAIRY:
                spriteId = CreateSpriteAtEnd(&sSpriteTemplate_TypeIcons2, x, y, 0xFF);
                break;
            default:
                spriteId = CreateSpriteAtEnd(&sSpriteTemplate_TypeIcons1, x, y, 0xFF);
            }

            if (spriteId != MAX_SPRITES)
            {
                struct Sprite* sprite = &gSprites[spriteId];
                sprite->data[0] = position;
                sprite->data[1] = battler;
                sprite->data[3] = y; //Save original y-value for bouncing

                if (IS_SINGLE_BATTLE)
                {
                    if (SIDE(GetBattlerAtPosition(position)) == B_SIDE_PLAYER)
                        sprite->hFlip = TRUE;
                }
                else //Double Battle
                {
                    if (SIDE(GetBattlerAtPosition(position)) == B_SIDE_OPPONENT)
                        sprite->hFlip = TRUE;
                }

                StartSpriteAnim(sprite, type);
            }
        }
    }
}

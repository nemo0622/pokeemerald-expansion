#include "constants/global.h"
#include "constants/event_objects.h"

// OUTFIT NAMES AND DESCRIPTIONS
static const u8 sText_OutfitName_UniversityGreen[] = _("University Green");
static const u8 sText_OutfitDesc_UniversityGreen[] = _(
    "Worn on your first day at the \nUniversity.");

static const u8 sText_OutfitName_Zookeeper[] = _("Zookeeper");
static const u8 sText_OutfitDesc_Zookeeper[] = _(
    "Worn by staff at the Sunset \nWildlife Conservation Center.");

static const u8 sText_OutfitName_KalosFashion[] = _("Kalos Fashion");
static const u8 sText_OutfitDesc_KalosFashion[] = _(
    "Resembles the hero who \nsaved the Kalos Region.");

// Male outfit Region Map Icons
static const u16 sRegionMapPlayerIcon_BrendanGfx[] = INCBIN_U16("graphics/pokenav/region_map/brendan_icon.4bpp");
static const u16 sRegionMapPlayerIcon_RSBrendanGfx[] = INCBIN_U16("graphics/pokenav/region_map/rs_brendan_icon.4bpp");
static const u16 sRegionMapPlayerIcon_Calem[] = INCBIN_U16("graphics/pokenav/region_map/outfit_icons/outfit_calem_icon.4bpp");

// Female outfit Region Map Icons
static const u16 sRegionMapPlayerIcon_MayGfx[] = INCBIN_U16("graphics/pokenav/region_map/may_icon.4bpp");
static const u16 sRegionMapPlayerIcon_RSMayGfx[] = INCBIN_U16("graphics/pokenav/region_map/rs_may_icon.4bpp");
static const u16 sRegionMapPlayerIcon_Serena[] = INCBIN_U16("graphics/pokenav/region_map/outfit_icons/outfit_serena_icon.4bpp");

static const u8 sFrontierPassPlayerIcons_XMarks[] = INCBIN_U8("graphics/frontier_pass/map_heads.4bpp");

#define REGION_MAP_GFX(m, f) { sRegionMapPlayerIcon_ ## m ## Gfx, sRegionMapPlayerIcon_ ## f ## Gfx }

// bandaids to avoid adding unnecessary merge conflicts
// remove these if you have them added/renamed yourself.

#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_NORMAL     OBJ_EVENT_GFX_LINK_RS_BRENDAN
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_ACRO_BIKE  OBJ_EVENT_GFX_BRENDAN_ACRO_BIKE
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_SURFING    OBJ_EVENT_GFX_BRENDAN_SURFING
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_UNDERWATER OBJ_EVENT_GFX_BRENDAN_UNDERWATER
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_FIELD_MOVE OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_FISHING    OBJ_EVENT_GFX_BRENDAN_FISHING
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_WATERING   OBJ_EVENT_GFX_BRENDAN_WATERING
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_DECORATING OBJ_EVENT_GFX_BRENDAN_DECORATING
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_FIELD_MOVE OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE

#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_NORMAL     OBJ_EVENT_GFX_LINK_RS_MAY
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_ACRO_BIKE  OBJ_EVENT_GFX_MAY_ACRO_BIKE
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_SURFING    OBJ_EVENT_GFX_MAY_SURFING
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_UNDERWATER OBJ_EVENT_GFX_MAY_UNDERWATER
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_FIELD_MOVE OBJ_EVENT_GFX_MAY_FIELD_MOVE
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_FISHING    OBJ_EVENT_GFX_MAY_FISHING
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_WATERING   OBJ_EVENT_GFX_MAY_WATERING
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_DECORATING OBJ_EVENT_GFX_MAY_DECORATING
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_FIELD_MOVE OBJ_EVENT_GFX_MAY_FIELD_MOVE

const struct Outfit gOutfits[OUTFIT_COUNT] =
{
    [OUTFIT_NONE] = {
        .isHidden = TRUE
    },
    [OUTFIT_UNIVERSITY_GREEN] = {
        //! DESC: if sets to TRUE, it will not be shown in the OUTFIT menu if it's locked.
        .isHidden = FALSE,

        //! DESC: prices for purchasing them (male, female).
        .prices = { 0, 0 },

        //! DESC: outfit's name
        .name = sText_OutfitName_UniversityGreen,

        //! DESC: outfit's description
        .desc = sText_OutfitDesc_UniversityGreen,

        //! DESC: trainer front & back pic index
        //! (see include/constants/trainers.h)
        .trainerPics = {
            [MALE] =   { TRAINER_PIC_BRENDAN, TRAINER_BACK_PIC_BRENDAN, },
            [FEMALE] = { TRAINER_PIC_MAY, TRAINER_BACK_PIC_MAY, },
        },

        //! DESC: overworld avatars, consisting of: walking, cycling,
        //! surfing, and underwater. (see include/constants/event_object.h)
        .avatarGfxIds = {
           [MALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_BRENDAN_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_BRENDAN_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_BRENDAN_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_BRENDAN_UNDERWATER
           },
           [FEMALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_MAY_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_MAY_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_MAY_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_MAY_UNDERWATER
           },
        },

        //! DESC: overworld anims, consisting of: field move, fishing,
        //! water, and decorating. (see include/constants/event_object.h)
        .animGfxIds = {
            [MALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_BRENDAN_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_BRENDAN_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_BRENDAN_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE
            },
            [FEMALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_MAY_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_MAY_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_MAY_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_MAY_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_MAY_FIELD_MOVE
            },
        },

        //! DESC: head icons gfx&pal for region map
        .iconsRM = { sRegionMapPlayerIcon_BrendanGfx, sRegionMapPlayerIcon_MayGfx },

        //! DESC: head icons gfx&pal for frontier pass
        //! note that frontier pass needs to be in one sprite instead of two,
        //! unlike region map. (probably should split them tbh)
        .iconsFP = sFrontierPassPlayerIcons_XMarks,
    },
    [OUTFIT_ZOOKEEPER] = {
        .isHidden = FALSE,
        .prices = { 4000, 4000 },
        .name = sText_OutfitName_Zookeeper,
        .desc = sText_OutfitDesc_Zookeeper,
        .trainerPics = {
            [MALE]   = {TRAINER_PIC_RS_BRENDAN, TRAINER_BACK_PIC_RUBY_SAPPHIRE_BRENDAN},
            [FEMALE] = {TRAINER_PIC_RS_MAY, TRAINER_BACK_PIC_RUBY_SAPPHIRE_MAY}
        },
        .avatarGfxIds = {
           [MALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_UNDERWATER
           },
           [FEMALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_OUTFIT_RS_MAY_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_OUTFIT_RS_MAY_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_OUTFIT_RS_MAY_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_OUTFIT_RS_MAY_UNDERWATER
           },
        },
        .animGfxIds = {
            [MALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_FIELD_MOVE
            },
            [FEMALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_OUTFIT_RS_MAY_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_OUTFIT_RS_MAY_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_OUTFIT_RS_MAY_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_OUTFIT_RS_MAY_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_OUTFIT_RS_MAY_FIELD_MOVE
            },
        },
        .iconsRM = { sRegionMapPlayerIcon_RSBrendanGfx, sRegionMapPlayerIcon_RSMayGfx },
        .iconsFP = sFrontierPassPlayerIcons_XMarks,
    },
    [OUTFIT_KALOS_FASHION] = {
        .isHidden = FALSE,
        .prices = { 4000, 4000 },
        .name = sText_OutfitName_KalosFashion,
        .desc = sText_OutfitDesc_KalosFashion,
        .trainerPics = {
            [MALE]   = {TRAINER_PIC_OUTFIT_CALEM, TRAINER_BACK_PIC_OUTFIT_CALEM},
            [FEMALE] = {TRAINER_PIC_OUTFIT_SERENA, TRAINER_BACK_PIC_OUTFIT_SERENA}
        },
        .avatarGfxIds = {
           [MALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_OUTFIT_CALEM_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_OUTFIT_CALEM_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_OUTFIT_CALEM_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_OUTFIT_CALEM_UNDERWATER
           },
           [FEMALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_OUTFIT_SERENA_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_OUTFIT_SERENA_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_OUTFIT_SERENA_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_OUTFIT_SERENA_UNDERWATER
           },
        },
        .animGfxIds = {
            [MALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_OUTFIT_CALEM_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_OUTFIT_CALEM_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_OUTFIT_CALEM_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_OUTFIT_CALEM_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_OUTFIT_CALEM_FIELD_MOVE
            },
            [FEMALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_OUTFIT_SERENA_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_OUTFIT_SERENA_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_OUTFIT_SERENA_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_OUTFIT_SERENA_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_OUTFIT_SERENA_FIELD_MOVE
            },
        },
        .iconsRM = { sRegionMapPlayerIcon_Calem, sRegionMapPlayerIcon_Serena },
        .iconsFP = sFrontierPassPlayerIcons_XMarks, 
    },
};

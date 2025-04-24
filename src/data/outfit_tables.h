#include "constants/global.h"
#include "constants/event_objects.h"

// OUTFIT NAMES AND DESCRIPTIONS
static const u8 sText_OutfitName_UniversityGreen[] = _("University Green");
static const u8 sText_OutfitDesc_UniversityGreen[] = _(
    "Worn on your first day at the \nUniversity.");

static const u8 sText_OutfitName_Coral[] = _("Casual Coral");
static const u8 sText_OutfitDesc_Coral[] = _(
    "A cool, coral outfit worn on \nwarmer days.");

static const u8 sText_OutfitName_East_Blue[] = _("East Ilios Blue");
static const u8 sText_OutfitDesc_East_Blue[] = _(
    "Turquoise-blue outfits worn by \nextra-stylish folks.");

static const u8 sText_OutfitName_Tropics[] = _("Tropical Yellow");
static const u8 sText_OutfitDesc_Tropics[] = _(
    "Bright, breathable clothes, great \nfor summer days.");

static const u8 sText_OutfitName_Traditional[] = _("Traditional");
static const u8 sText_OutfitDesc_Traditional[] = _(
    "Traditional styles from the \ncountryside of Ilios.");

static const u8 sText_OutfitName_Old_Sofos[] = _("Old Sofos Toga");
static const u8 sText_OutfitDesc_Old_Sofos[] = _(
    "Dyed toga with gold embroidery.\nWorn in Ancient Ilios.");

static const u8 sText_OutfitName_Zookeeper[] = _("Zookeeper");
static const u8 sText_OutfitDesc_Zookeeper[] = _(
    "Worn by staff at the Sunset \nWildlife Conservation Center.");

static const u8 sText_OutfitName_KalosFashion[] = _("Kalos Fashion");
static const u8 sText_OutfitDesc_KalosFashion[] = _(
    "Resembles the hero who \nsaved the Kalos Region.");

// Male outfit Region Map Icons
static const u16 sRegionMapPlayerIcon_BrendanGfx[] = INCBIN_U16("graphics/pokenav/region_map/brendan_icon.4bpp");
static const u16 sRegionMapPlayerIcon_Coral_M[] = INCBIN_U16("graphics/pokenav/region_map/outfit_icons/outfit_coral_m_icon.4bpp");
static const u16 sRegionMapPlayerIcon_East_Blue_M[] = INCBIN_U16("graphics/pokenav/region_map/outfit_icons/outfit_east_blue_m_icon.4bpp");
static const u16 sRegionMapPlayerIcon_Tropics_M[] = INCBIN_U16("graphics/pokenav/region_map/outfit_icons/outfit_tropics_m_icon.4bpp");
static const u16 sRegionMapPlayerIcon_Traditional_M[] = INCBIN_U16("graphics/pokenav/region_map/outfit_icons/outfit_traditional_m_icon.4bpp");
static const u16 sRegionMapPlayerIcon_Old_Sofos_M[] = INCBIN_U16("graphics/pokenav/region_map/outfit_icons/outfit_old_sofos_m_icon.4bpp");
static const u16 sRegionMapPlayerIcon_Zookeeper_M[] = INCBIN_U16("graphics/pokenav/region_map/outfit_icons/outfit_zookeeper_m_icon.4bpp");
static const u16 sRegionMapPlayerIcon_Calem[] = INCBIN_U16("graphics/pokenav/region_map/outfit_icons/outfit_calem_icon.4bpp");

// Female outfit Region Map Icons
static const u16 sRegionMapPlayerIcon_MayGfx[] = INCBIN_U16("graphics/pokenav/region_map/may_icon.4bpp");
static const u16 sRegionMapPlayerIcon_Coral_F[] = INCBIN_U16("graphics/pokenav/region_map/outfit_icons/outfit_coral_f_icon.4bpp");
static const u16 sRegionMapPlayerIcon_East_Blue_F[] = INCBIN_U16("graphics/pokenav/region_map/outfit_icons/outfit_east_blue_f_icon.4bpp");
static const u16 sRegionMapPlayerIcon_Tropics_F[] = INCBIN_U16("graphics/pokenav/region_map/outfit_icons/outfit_tropics_f_icon.4bpp");
static const u16 sRegionMapPlayerIcon_Traditional_F[] = INCBIN_U16("graphics/pokenav/region_map/outfit_icons/outfit_traditional_f_icon.4bpp");
static const u16 sRegionMapPlayerIcon_Old_Sofos_F[] = INCBIN_U16("graphics/pokenav/region_map/outfit_icons/outfit_old_sofos_f_icon.4bpp");
static const u16 sRegionMapPlayerIcon_Zookeeper_F[] = INCBIN_U16("graphics/pokenav/region_map/outfit_icons/outfit_zookeeper_f_icon.4bpp");
static const u16 sRegionMapPlayerIcon_Serena[] = INCBIN_U16("graphics/pokenav/region_map/outfit_icons/outfit_serena_icon.4bpp");

static const u8 sFrontierPassPlayerIcons_XMarks[] = INCBIN_U8("graphics/frontier_pass/map_heads.4bpp");

#define REGION_MAP_GFX(m, f) { sRegionMapPlayerIcon_ ## m ## Gfx, sRegionMapPlayerIcon_ ## f ## Gfx }

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
    [OUTFIT_CORAL] = {
        .isHidden = FALSE,
        .prices = { 3000, 3000 },
        .name = sText_OutfitName_Coral,
        .desc = sText_OutfitDesc_Coral,
        .trainerPics = {
            [MALE]   = {TRAINER_PIC_OUTFIT_CORAL_M, TRAINER_BACK_PIC_OUTFIT_CORAL_M},
            [FEMALE] = {TRAINER_PIC_OUTFIT_CORAL_F, TRAINER_BACK_PIC_OUTFIT_CORAL_F}
        },
        .avatarGfxIds = {
           [MALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_OUTFIT_CORAL_M_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_OUTFIT_CORAL_M_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_OUTFIT_CORAL_M_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_OUTFIT_CORAL_M_UNDERWATER
           },
           [FEMALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_OUTFIT_CORAL_F_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_OUTFIT_CORAL_F_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_OUTFIT_CORAL_F_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_OUTFIT_CORAL_F_UNDERWATER
           },
        },
        .animGfxIds = {
            [MALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_OUTFIT_CORAL_M_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_OUTFIT_CORAL_M_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_OUTFIT_CORAL_M_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_OUTFIT_CORAL_M_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_OUTFIT_CORAL_M_FIELD_MOVE
            },
            [FEMALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_OUTFIT_CORAL_F_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_OUTFIT_CORAL_F_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_OUTFIT_CORAL_F_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_OUTFIT_CORAL_F_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_OUTFIT_CORAL_F_FIELD_MOVE
            },
        },
        .iconsRM = { sRegionMapPlayerIcon_Coral_M, sRegionMapPlayerIcon_Coral_F },
        .iconsFP = sFrontierPassPlayerIcons_XMarks,
    },
    [OUTFIT_EAST_BLUE] = {
        .isHidden = FALSE,
        .prices = { 6000, 6000 },
        .name = sText_OutfitName_East_Blue,
        .desc = sText_OutfitDesc_East_Blue,
        .trainerPics = {
            [MALE]   = {TRAINER_PIC_OUTFIT_EAST_BLUE_M, TRAINER_BACK_PIC_OUTFIT_EAST_BLUE_M},
            [FEMALE] = {TRAINER_PIC_OUTFIT_EAST_BLUE_F, TRAINER_BACK_PIC_OUTFIT_EAST_BLUE_F}
        },
        .avatarGfxIds = {
           [MALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_OUTFIT_EAST_BLUE_M_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_OUTFIT_EAST_BLUE_M_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_OUTFIT_EAST_BLUE_M_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_OUTFIT_EAST_BLUE_M_UNDERWATER
           },
           [FEMALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_OUTFIT_EAST_BLUE_F_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_OUTFIT_EAST_BLUE_F_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_OUTFIT_EAST_BLUE_F_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_OUTFIT_EAST_BLUE_F_UNDERWATER
           },
        },
        .animGfxIds = {
            [MALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_OUTFIT_EAST_BLUE_M_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_OUTFIT_EAST_BLUE_M_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_OUTFIT_EAST_BLUE_M_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_OUTFIT_EAST_BLUE_M_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_OUTFIT_EAST_BLUE_M_FIELD_MOVE
            },
            [FEMALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_OUTFIT_EAST_BLUE_F_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_OUTFIT_EAST_BLUE_F_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_OUTFIT_EAST_BLUE_F_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_OUTFIT_EAST_BLUE_F_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_OUTFIT_EAST_BLUE_F_FIELD_MOVE
            },
        },
        .iconsRM = { sRegionMapPlayerIcon_East_Blue_M, sRegionMapPlayerIcon_East_Blue_F },
        .iconsFP = sFrontierPassPlayerIcons_XMarks,
    },
    [OUTFIT_TROPICS] = {
        .isHidden = FALSE,
        .prices = { 2400, 2400 },
        .name = sText_OutfitName_Tropics,
        .desc = sText_OutfitDesc_Tropics,
        .trainerPics = {
            [MALE]   = {TRAINER_PIC_OUTFIT_TROPICS_M, TRAINER_BACK_PIC_OUTFIT_TROPICS_M},
            [FEMALE] = {TRAINER_PIC_OUTFIT_TROPICS_F, TRAINER_BACK_PIC_OUTFIT_TROPICS_F}
        },
        .avatarGfxIds = {
           [MALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_OUTFIT_TROPICS_M_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_OUTFIT_TROPICS_M_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_OUTFIT_TROPICS_M_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_OUTFIT_TROPICS_M_UNDERWATER
           },
           [FEMALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_OUTFIT_TROPICS_F_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_OUTFIT_TROPICS_F_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_OUTFIT_TROPICS_F_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_OUTFIT_TROPICS_F_UNDERWATER
           },
        },
        .animGfxIds = {
            [MALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_OUTFIT_TROPICS_M_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_OUTFIT_TROPICS_M_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_OUTFIT_TROPICS_M_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_OUTFIT_TROPICS_M_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_OUTFIT_TROPICS_M_FIELD_MOVE
            },
            [FEMALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_OUTFIT_TROPICS_F_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_OUTFIT_TROPICS_F_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_OUTFIT_TROPICS_F_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_OUTFIT_TROPICS_F_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_OUTFIT_TROPICS_F_FIELD_MOVE
            },
        },
        .iconsRM = { sRegionMapPlayerIcon_Tropics_M, sRegionMapPlayerIcon_Tropics_F },
        .iconsFP = sFrontierPassPlayerIcons_XMarks,
    },
    [OUTFIT_TRADITIONAL] = {
        .isHidden = FALSE,
        .prices = { 9800, 9800 },
        .name = sText_OutfitName_Traditional,
        .desc = sText_OutfitDesc_Traditional,
        .trainerPics = {
            [MALE]   = {TRAINER_PIC_OUTFIT_TRADITIONAL_M, TRAINER_BACK_PIC_OUTFIT_TRADITIONAL_M},
            [FEMALE] = {TRAINER_PIC_OUTFIT_TRADITIONAL_F, TRAINER_BACK_PIC_OUTFIT_TRADITIONAL_F}
        },
        .avatarGfxIds = {
           [MALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_OUTFIT_TRADITIONAL_M_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_OUTFIT_TRADITIONAL_M_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_OUTFIT_TRADITIONAL_M_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_OUTFIT_TRADITIONAL_M_UNDERWATER
           },
           [FEMALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_OUTFIT_TRADITIONAL_F_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_OUTFIT_TRADITIONAL_F_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_OUTFIT_TRADITIONAL_F_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_OUTFIT_TRADITIONAL_F_UNDERWATER
           },
        },
        .animGfxIds = {
            [MALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_OUTFIT_TRADITIONAL_M_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_OUTFIT_TRADITIONAL_M_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_OUTFIT_TRADITIONAL_M_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_OUTFIT_TRADITIONAL_M_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_OUTFIT_TRADITIONAL_M_FIELD_MOVE
            },
            [FEMALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_OUTFIT_TRADITIONAL_F_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_OUTFIT_TRADITIONAL_F_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_OUTFIT_TRADITIONAL_F_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_OUTFIT_TRADITIONAL_F_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_OUTFIT_TRADITIONAL_F_FIELD_MOVE
            },
        },
        .iconsRM = { sRegionMapPlayerIcon_Traditional_M, sRegionMapPlayerIcon_Traditional_F },
        .iconsFP = sFrontierPassPlayerIcons_XMarks,
    },
    [OUTFIT_OLD_SOFOS] = {
        .isHidden = FALSE,
        .prices = { 18900, 18900 },
        .name = sText_OutfitName_Old_Sofos,
        .desc = sText_OutfitDesc_Old_Sofos,
        .trainerPics = {
            [MALE]   = {TRAINER_PIC_OUTFIT_OLD_SOFOS_M, TRAINER_BACK_PIC_OUTFIT_OLD_SOFOS_M},
            [FEMALE] = {TRAINER_PIC_OUTFIT_OLD_SOFOS_F, TRAINER_BACK_PIC_OUTFIT_OLD_SOFOS_F}
        },
        .avatarGfxIds = {
           [MALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_OUTFIT_OLD_SOFOS_M_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_OUTFIT_OLD_SOFOS_M_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_OUTFIT_OLD_SOFOS_M_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_OUTFIT_OLD_SOFOS_M_UNDERWATER
           },
           [FEMALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_OUTFIT_OLD_SOFOS_F_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_OUTFIT_OLD_SOFOS_F_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_OUTFIT_OLD_SOFOS_F_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_OUTFIT_OLD_SOFOS_F_UNDERWATER
           },
        },
        .animGfxIds = {
            [MALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_OUTFIT_OLD_SOFOS_M_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_OUTFIT_OLD_SOFOS_M_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_OUTFIT_OLD_SOFOS_M_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_OUTFIT_OLD_SOFOS_M_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_OUTFIT_OLD_SOFOS_M_FIELD_MOVE
            },
            [FEMALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_OUTFIT_OLD_SOFOS_F_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_OUTFIT_OLD_SOFOS_F_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_OUTFIT_OLD_SOFOS_F_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_OUTFIT_OLD_SOFOS_F_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_OUTFIT_OLD_SOFOS_F_FIELD_MOVE
            },
        },
        .iconsRM = { sRegionMapPlayerIcon_Old_Sofos_M, sRegionMapPlayerIcon_Old_Sofos_F },
        .iconsFP = sFrontierPassPlayerIcons_XMarks,
    },
    [OUTFIT_ZOOKEEPER] = {
        .isHidden = FALSE,
        .prices = { 0, 0 },
        .name = sText_OutfitName_Zookeeper,
        .desc = sText_OutfitDesc_Zookeeper,
        .trainerPics = {
            [MALE]   = {TRAINER_PIC_OUTFIT_ZOOKEEPER_M, TRAINER_BACK_PIC_OUTFIT_ZOOKEEPER_M},
            [FEMALE] = {TRAINER_PIC_OUTFIT_ZOOKEEPER_F, TRAINER_BACK_PIC_OUTFIT_ZOOKEEPER_F}
        },
        .avatarGfxIds = {
           [MALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_OUTFIT_ZOOKEEPER_M_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_OUTFIT_ZOOKEEPER_M_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_OUTFIT_ZOOKEEPER_M_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_OUTFIT_ZOOKEEPER_M_UNDERWATER
           },
           [FEMALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_OUTFIT_ZOOKEEPER_F_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_OUTFIT_ZOOKEEPER_F_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_OUTFIT_ZOOKEEPER_F_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_OUTFIT_ZOOKEEPER_F_UNDERWATER
           },
        },
        .animGfxIds = {
            [MALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_OUTFIT_ZOOKEEPER_M_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_OUTFIT_ZOOKEEPER_M_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_OUTFIT_ZOOKEEPER_M_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_OUTFIT_ZOOKEEPER_M_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_OUTFIT_ZOOKEEPER_M_FIELD_MOVE
            },
            [FEMALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_OUTFIT_ZOOKEEPER_F_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_OUTFIT_ZOOKEEPER_F_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_OUTFIT_ZOOKEEPER_F_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_OUTFIT_ZOOKEEPER_F_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_OUTFIT_ZOOKEEPER_F_FIELD_MOVE
            },
        },
        .iconsRM = { sRegionMapPlayerIcon_Zookeeper_M, sRegionMapPlayerIcon_Zookeeper_F },
        .iconsFP = sFrontierPassPlayerIcons_XMarks,
    },
    [OUTFIT_KALOS_FASHION] = {
        .isHidden = TRUE,
        .prices = { 0, 0 },
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

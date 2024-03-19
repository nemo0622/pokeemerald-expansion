#include "global.h"
#include "blit.h"
#include "window.h"
#include "menu.h"
#include "palette.h"
#include "event_data.h"
#include "constants/mugshots.h"

#define MUGSHOT_PALETTE_NUM 13

struct Mugshot{
    u8 x;
    u8 y;
    u8 width;
    u8 height;
    const u32* image;
    const u16* palette;
};

void DrawMugshot(void); //VAR_MUGSHOT = mugshot id
void DrawMugshotAtPos(void); //VAR_MUGSHOT = mugshot id, VAR_0x8001 = x, VAR_0x8002 = y
void ClearMugshot(void);

static const u32 sMugshotImg_Brendan[] = INCBIN_U32("graphics/mugshots/pics/mugshot_brendan.4bpp.lz");
static const u16 sMugshotPal_Brendan[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_brendan.gbapal");
static const u32 sMugshotImg_May[] = INCBIN_U32("graphics/mugshots/pics/mugshot_may.4bpp.lz");
static const u16 sMugshotPal_May[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_may.gbapal");
static const u32 sMugshotImg_Twin[] = INCBIN_U32("graphics/mugshots/pics/mugshot_twin.4bpp.lz");
static const u16 sMugshotPal_Twin[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_twin.gbapal");
static const u32 sMugshotImg_Birch[] = INCBIN_U32("graphics/mugshots/pics/mugshot_birch.4bpp.lz");
static const u16 sMugshotPal_Birch[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_birch.gbapal");
static const u32 sMugshotImg_Wally[] = INCBIN_U32("graphics/mugshots/pics/mugshot_wally.4bpp.lz");
static const u16 sMugshotPal_Wally[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_wally.gbapal");
static const u32 sMugshotImg_NurseJoy[] = INCBIN_U32("graphics/mugshots/pics/mugshot_nursejoy.4bpp.lz");
static const u16 sMugshotPal_NurseJoy[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_nursejoy.gbapal");
static const u32 sMugshotImg_Roxanne[] = INCBIN_U32("graphics/mugshots/pics/mugshot_roxanne.4bpp.lz");
static const u16 sMugshotPal_Roxanne[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_roxanne.gbapal");
static const u32 sMugshotImg_Brawly[] = INCBIN_U32("graphics/mugshots/pics/mugshot_brawly.4bpp.lz");
static const u16 sMugshotPal_Brawly[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_brawly.gbapal");
static const u32 sMugshotImg_Wattson[] = INCBIN_U32("graphics/mugshots/pics/mugshot_wattson.4bpp.lz");
static const u16 sMugshotPal_Wattson[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_wattson.gbapal");
static const u32 sMugshotImg_Flannery[] = INCBIN_U32("graphics/mugshots/pics/mugshot_flannery.4bpp.lz");
static const u16 sMugshotPal_Flannery[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_flannery.gbapal");
static const u32 sMugshotImg_Norman[] = INCBIN_U32("graphics/mugshots/pics/mugshot_norman.4bpp.lz");
static const u16 sMugshotPal_Norman[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_norman.gbapal");
static const u32 sMugshotImg_Winona[] = INCBIN_U32("graphics/mugshots/pics/mugshot_winona.4bpp.lz");
static const u16 sMugshotPal_Winona[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_winona.gbapal");
static const u32 sMugshotImg_TateAndLiza[] = INCBIN_U32("graphics/mugshots/pics/mugshot_tateandliza.4bpp.lz");
static const u16 sMugshotPal_TateAndLiza[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_tateandliza.gbapal");
static const u32 sMugshotImg_Juan[] = INCBIN_U32("graphics/mugshots/pics/mugshot_juan.4bpp.lz");
static const u16 sMugshotPal_Juan[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_juan.gbapal");
static const u32 sMugshotImg_Wallace[] = INCBIN_U32("graphics/mugshots/pics/mugshot_wallace.4bpp.lz");
static const u16 sMugshotPal_Wallace[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_wallace.gbapal");
static const u32 sMugshotImg_Sidney[] = INCBIN_U32("graphics/mugshots/pics/mugshot_sidney.4bpp.lz");
static const u16 sMugshotPal_Sidney[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_sidney.gbapal");
static const u32 sMugshotImg_Phoebe[] = INCBIN_U32("graphics/mugshots/pics/mugshot_phoebe.4bpp.lz");
static const u16 sMugshotPal_Phoebe[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_phoebe.gbapal");
static const u32 sMugshotImg_Glacia[] = INCBIN_U32("graphics/mugshots/pics/mugshot_glacia.4bpp.lz");
static const u16 sMugshotPal_Glacia[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_glacia.gbapal");
static const u32 sMugshotImg_Drake[] = INCBIN_U32("graphics/mugshots/pics/mugshot_drake.4bpp.lz");
static const u16 sMugshotPal_Drake[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_drake.gbapal");
static const u32 sMugshotImg_Steven[] = INCBIN_U32("graphics/mugshots/pics/mugshot_steven.4bpp.lz");
static const u16 sMugshotPal_Steven[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_steven.gbapal");
static const u32 sMugshotImg_AquaGruntM[] = INCBIN_U32("graphics/mugshots/pics/mugshot_aquagruntm.4bpp.lz");
static const u16 sMugshotPal_AquaGruntM[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_aquagruntm.gbapal");
static const u32 sMugshotImg_AquaGruntF[] = INCBIN_U32("graphics/mugshots/pics/mugshot_aquagruntf.4bpp.lz");
static const u16 sMugshotPal_AquaGruntF[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_aquagruntf.gbapal");
static const u32 sMugshotImg_MagmaGruntM[] = INCBIN_U32("graphics/mugshots/pics/mugshot_magmagruntm.4bpp.lz");
static const u16 sMugshotPal_MagmaGruntM[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_magmagruntm.gbapal");
static const u32 sMugshotImg_MagmaGruntF[] = INCBIN_U32("graphics/mugshots/pics/mugshot_magmagruntf.4bpp.lz");
static const u16 sMugshotPal_MagmaGruntF[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_magmagruntf.gbapal");
static const u32 sMugshotImg_Archie[] = INCBIN_U32("graphics/mugshots/pics/mugshot_archie.4bpp.lz");
static const u16 sMugshotPal_Archie[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_archie.gbapal");
static const u32 sMugshotImg_Maxie[] = INCBIN_U32("graphics/mugshots/pics/mugshot_maxie.4bpp.lz");
static const u16 sMugshotPal_Maxie[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_maxie.gbapal");
static const u32 sMugshotImg_Youngster[] = INCBIN_U32("graphics/mugshots/pics/mugshot_youngster.4bpp.lz");
static const u16 sMugshotPal_Youngster[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_youngster.gbapal");
static const u32 sMugshotImg_Beauty[] = INCBIN_U32("graphics/mugshots/pics/mugshot_beauty.4bpp.lz");
static const u16 sMugshotPal_Beauty[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_beauty.gbapal");
static const u32 sMugshotImg_BlackBelt[] = INCBIN_U32("graphics/mugshots/pics/mugshot_blackbelt.4bpp.lz");
static const u16 sMugshotPal_BlackBelt[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_blackbelt.gbapal");
static const u32 sMugshotImg_Boy1[] = INCBIN_U32("graphics/mugshots/pics/mugshot_boy1.4bpp.lz");
static const u16 sMugshotPal_Boy1[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_boy1.gbapal");
static const u32 sMugshotImg_Boy2[] = INCBIN_U32("graphics/mugshots/pics/mugshot_boy2.4bpp.lz");
static const u16 sMugshotPal_Boy2[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_boy2.gbapal");
static const u32 sMugshotImg_Boy3[] = INCBIN_U32("graphics/mugshots/pics/mugshot_boy3.4bpp.lz");
static const u16 sMugshotPal_Boy3[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_boy3.gbapal");
static const u32 sMugshotImg_BugCatcher[] = INCBIN_U32("graphics/mugshots/pics/mugshot_bugcatcher.4bpp.lz");
static const u16 sMugshotPal_BugCatcher[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_bugcatcher.gbapal");
static const u32 sMugshotImg_Camper[] = INCBIN_U32("graphics/mugshots/pics/mugshot_camper.4bpp.lz");
static const u16 sMugshotPal_Camper[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_camper.gbapal");
static const u32 sMugshotImg_DevonEmployee[] = INCBIN_U32("graphics/mugshots/pics/mugshot_devonemployee.4bpp.lz");
static const u16 sMugshotPal_DevonEmployee[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_devonemployee.gbapal");
static const u32 sMugshotImg_ExpertF[] = INCBIN_U32("graphics/mugshots/pics/mugshot_expertf.4bpp.lz");
static const u16 sMugshotPal_ExpertF[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_expertf.gbapal");
static const u32 sMugshotImg_ExpertM[] = INCBIN_U32("graphics/mugshots/pics/mugshot_expertm.4bpp.lz");
static const u16 sMugshotPal_ExpertM[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_expertm.gbapal");
static const u32 sMugshotImg_Briney[] = INCBIN_U32("graphics/mugshots/pics/mugshot_briney.4bpp.lz");
static const u16 sMugshotPal_Briney[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_briney.gbapal");
static const u32 sMugshotImg_FatMan[] = INCBIN_U32("graphics/mugshots/pics/mugshot_fatman.4bpp.lz");
static const u16 sMugshotPal_FatMan[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_fatman.gbapal");
static const u32 sMugshotImg_Fisherman[] = INCBIN_U32("graphics/mugshots/pics/mugshot_fisherman.4bpp.lz");
static const u16 sMugshotPal_Fisherman[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_fisherman.gbapal");
static const u32 sMugshotImg_Gentleman[] = INCBIN_U32("graphics/mugshots/pics/mugshot_gentleman.4bpp.lz");
static const u16 sMugshotPal_Gentleman[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_gentleman.gbapal");
static const u32 sMugshotImg_Girl1[] = INCBIN_U32("graphics/mugshots/pics/mugshot_girl1.4bpp.lz");
static const u16 sMugshotPal_Girl1[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_girl1.gbapal");
static const u32 sMugshotImg_Girl2[] = INCBIN_U32("graphics/mugshots/pics/mugshot_girl2.4bpp.lz");
static const u16 sMugshotPal_Girl2[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_girl2.gbapal");
static const u32 sMugshotImg_Girl3[] = INCBIN_U32("graphics/mugshots/pics/mugshot_girl3.4bpp.lz");
static const u16 sMugshotPal_Girl3[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_girl3.gbapal");
static const u32 sMugshotImg_HexManiac[] = INCBIN_U32("graphics/mugshots/pics/mugshot_hexmaniac.4bpp.lz");
static const u16 sMugshotPal_HexManiac[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_hexmaniac.gbapal");
static const u32 sMugshotImg_Hiker[] = INCBIN_U32("graphics/mugshots/pics/mugshot_hiker.4bpp.lz");
static const u16 sMugshotPal_Hiker[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_hiker.gbapal");
static const u32 sMugshotImg_Lass[] = INCBIN_U32("graphics/mugshots/pics/mugshot_lass.4bpp.lz");
static const u16 sMugshotPal_Lass[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_lass.gbapal");
static const u32 sMugshotImg_LittleBoy[] = INCBIN_U32("graphics/mugshots/pics/mugshot_littleboy.4bpp.lz");
static const u16 sMugshotPal_LittleBoy[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_littleboy.gbapal");
static const u32 sMugshotImg_LittleGirl[] = INCBIN_U32("graphics/mugshots/pics/mugshot_littlegirl.4bpp.lz");
static const u16 sMugshotPal_LittleGirl[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_littlegirl.gbapal");
static const u32 sMugshotImg_Man1[] = INCBIN_U32("graphics/mugshots/pics/mugshot_man1.4bpp.lz");
static const u16 sMugshotPal_Man1[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_man1.gbapal");
static const u32 sMugshotImg_Man2[] = INCBIN_U32("graphics/mugshots/pics/mugshot_man2.4bpp.lz");
static const u16 sMugshotPal_Man2[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_man2.gbapal");
static const u32 sMugshotImg_Man3[] = INCBIN_U32("graphics/mugshots/pics/mugshot_man3.4bpp.lz");
static const u16 sMugshotPal_Man3[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_man3.gbapal");
static const u32 sMugshotImg_Man4[] = INCBIN_U32("graphics/mugshots/pics/mugshot_man4.4bpp.lz");
static const u16 sMugshotPal_Man4[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_man4.gbapal");
static const u32 sMugshotImg_Man5[] = INCBIN_U32("graphics/mugshots/pics/mugshot_man5.4bpp.lz");
static const u16 sMugshotPal_Man5[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_man5.gbapal");
static const u32 sMugshotImg_Maniac[] = INCBIN_U32("graphics/mugshots/pics/mugshot_maniac.4bpp.lz");
static const u16 sMugshotPal_Maniac[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_maniac.gbapal");
static const u32 sMugshotImg_Mom[] = INCBIN_U32("graphics/mugshots/pics/mugshot_mom.4bpp.lz");
static const u16 sMugshotPal_Mom[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_mom.gbapal");
static const u32 sMugshotImg_NinjaBoy[] = INCBIN_U32("graphics/mugshots/pics/mugshot_ninjaboy.4bpp.lz");
static const u16 sMugshotPal_NinjaBoy[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_ninjaboy.gbapal");
static const u32 sMugshotImg_OldWoman[] = INCBIN_U32("graphics/mugshots/pics/mugshot_oldwoman.4bpp.lz");
static const u16 sMugshotPal_OldWoman[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_oldwoman.gbapal");
static const u32 sMugshotImg_Picnicker[] = INCBIN_U32("graphics/mugshots/pics/mugshot_picnicker.4bpp.lz");
static const u16 sMugshotPal_Picnicker[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_picnicker.gbapal");
static const u32 sMugshotImg_PokefanF[] = INCBIN_U32("graphics/mugshots/pics/mugshot_pokefanf.4bpp.lz");
static const u16 sMugshotPal_PokefanF[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_pokefanf.gbapal");
static const u32 sMugshotImg_PokefanM[] = INCBIN_U32("graphics/mugshots/pics/mugshot_pokefanm.4bpp.lz");
static const u16 sMugshotPal_PokefanM[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_pokefanm.gbapal");
static const u32 sMugshotImg_PsychicM[] = INCBIN_U32("graphics/mugshots/pics/mugshot_psychicm.4bpp.lz");
static const u16 sMugshotPal_PsychicM[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_psychicm.gbapal");
static const u32 sMugshotImg_RichBoy[] = INCBIN_U32("graphics/mugshots/pics/mugshot_richboy.4bpp.lz");
static const u16 sMugshotPal_RichBoy[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_richboy.gbapal");
static const u32 sMugshotImg_Sailor[] = INCBIN_U32("graphics/mugshots/pics/mugshot_sailor.4bpp.lz");
static const u16 sMugshotPal_Sailor[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_sailor.gbapal");
static const u32 sMugshotImg_SchoolKidM[] = INCBIN_U32("graphics/mugshots/pics/mugshot_schoolkidm.4bpp.lz");
static const u16 sMugshotPal_SchoolKidM[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_schoolkidm.gbapal");
static const u32 sMugshotImg_Scientist[] = INCBIN_U32("graphics/mugshots/pics/mugshot_scientist.4bpp.lz");
static const u16 sMugshotPal_Scientist[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_scientist.gbapal");
static const u32 sMugshotImg_SwimmerF[] = INCBIN_U32("graphics/mugshots/pics/mugshot_swimmerf.4bpp.lz");
static const u16 sMugshotPal_SwimmerF[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_swimmerf.gbapal");
static const u32 sMugshotImg_SwimmerM[] = INCBIN_U32("graphics/mugshots/pics/mugshot_swimmerm.4bpp.lz");
static const u16 sMugshotPal_SwimmerM[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_swimmerm.gbapal");
static const u32 sMugshotImg_TuberF[] = INCBIN_U32("graphics/mugshots/pics/mugshot_tuberf.4bpp.lz");
static const u16 sMugshotPal_TuberF[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_tuberf.gbapal");
static const u32 sMugshotImg_TuberM[] = INCBIN_U32("graphics/mugshots/pics/mugshot_tuberm.4bpp.lz");
static const u16 sMugshotPal_TuberM[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_tuberm.gbapal");
static const u32 sMugshotImg_Woman1[] = INCBIN_U32("graphics/mugshots/pics/mugshot_woman1.4bpp.lz");
static const u16 sMugshotPal_Woman1[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_woman1.gbapal");
static const u32 sMugshotImg_Woman2[] = INCBIN_U32("graphics/mugshots/pics/mugshot_woman2.4bpp.lz");
static const u16 sMugshotPal_Woman2[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_woman2.gbapal");
static const u32 sMugshotImg_Woman3[] = INCBIN_U32("graphics/mugshots/pics/mugshot_woman3.4bpp.lz");
static const u16 sMugshotPal_Woman3[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_woman3.gbapal");
static const u32 sMugshotImg_Woman4[] = INCBIN_U32("graphics/mugshots/pics/mugshot_woman4.4bpp.lz");
static const u16 sMugshotPal_Woman4[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_woman4.gbapal");
static const u32 sMugshotImg_Woman5[] = INCBIN_U32("graphics/mugshots/pics/mugshot_woman5.4bpp.lz");
static const u16 sMugshotPal_Woman5[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_woman5.gbapal");
static const u32 sMugshotImg_Bird_Keeper[] = INCBIN_U32("graphics/mugshots/pics/mugshot_bird_keeper.4bpp.lz");
static const u16 sMugshotPal_Bird_Keeper[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_bird_keeper.gbapal");
static const u32 sMugshotImg_Kindler[] = INCBIN_U32("graphics/mugshots/pics/mugshot_kindler.4bpp.lz");
static const u16 sMugshotPal_Kindler[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_kindler.gbapal");
static const u32 sMugshotImg_Ruin_Maniac[] = INCBIN_U32("graphics/mugshots/pics/mugshot_ruin_maniac.4bpp.lz");
static const u16 sMugshotPal_Ruin_Maniac[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_ruin_maniac.gbapal");
static const u32 sMugshotImg_Rancher[] = INCBIN_U32("graphics/mugshots/pics/mugshot_rancher.4bpp.lz");
static const u16 sMugshotPal_Rancher[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_rancher.gbapal");
static const u32 sMugshotImg_Juggler[] = INCBIN_U32("graphics/mugshots/pics/mugshot_juggler.4bpp.lz");
static const u16 sMugshotPal_Juggler[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_juggler.gbapal");
static const u32 sMugshotImg_Biker[] = INCBIN_U32("graphics/mugshots/pics/mugshot_biker.4bpp.lz");
static const u16 sMugshotPal_Biker[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_biker.gbapal");
static const u32 sMugshotImg_Cooltrainer_M[] = INCBIN_U32("graphics/mugshots/pics/mugshot_cooltrainer_m.4bpp.lz");
static const u16 sMugshotPal_Cooltrainer_M[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_cooltrainer.gbapal");
static const u32 sMugshotImg_Cooltrainer_F[] = INCBIN_U32("graphics/mugshots/pics/mugshot_cooltrainer_f.4bpp.lz");
static const u16 sMugshotPal_Cooltrainer_F[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_cooltrainer.gbapal");
static const u32 sMugshotImg_Backpacker_F[] = INCBIN_U32("graphics/mugshots/pics/mugshot_backpacker_f.4bpp.lz");
static const u16 sMugshotPal_Backpacker_F[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_backpacker_f.gbapal");
static const u32 sMugshotImg_Lass2[] = INCBIN_U32("graphics/mugshots/pics/mugshot_lass2.4bpp.lz");
static const u16 sMugshotPal_Lass2[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_lass2.gbapal");
static const u32 sMugshotImg_Kimono_Girl[] = INCBIN_U32("graphics/mugshots/pics/mugshot_kimono_girl.4bpp.lz");
static const u16 sMugshotPal_Kimono_Girl[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_kimono_girl.gbapal");
static const u32 sMugshotImg_Zinnia[] = INCBIN_U32("graphics/mugshots/pics/mugshot_zinnia.4bpp.lz");
static const u16 sMugshotPal_Zinnia[] = INCBIN_U16("graphics/mugshots/palettes/mugshot_zinnia.gbapal");

static const struct Mugshot sMugshots[] = {
    //ADD YOUR MUGSHOTS HERE
    [MUGSHOT_BRENDAN] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Brendan, .palette = sMugshotPal_Brendan},
    [MUGSHOT_MAY] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_May, .palette = sMugshotPal_May},
    [MUGSHOT_TWIN] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Twin, .palette = sMugshotPal_Twin},
    [MUGSHOT_BIRCH] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Birch, .palette = sMugshotPal_Birch},
    [MUGSHOT_WALLY] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Wally, .palette = sMugshotPal_Wally},
    [MUGSHOT_NURSEJOY] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_NurseJoy, .palette = sMugshotPal_NurseJoy},
    [MUGSHOT_ROXANNE] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Roxanne, .palette = sMugshotPal_Roxanne},
    [MUGSHOT_BRAWLY] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Brawly, .palette = sMugshotPal_Brawly},
    [MUGSHOT_WATTSON] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Wattson, .palette = sMugshotPal_Wattson},
    [MUGSHOT_FLANNERY] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Flannery, .palette = sMugshotPal_Flannery},
    [MUGSHOT_NORMAN] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Norman, .palette = sMugshotPal_Norman},
    [MUGSHOT_WINONA] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Winona, .palette = sMugshotPal_Winona},
    [MUGSHOT_TATEANDLIZA] = {.x = 2, .y = 8, .width = 96, .height = 48, .image = sMugshotImg_TateAndLiza, .palette = sMugshotPal_TateAndLiza},
    [MUGSHOT_JUAN] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Juan, .palette = sMugshotPal_Juan},
    [MUGSHOT_WALLACE] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Wallace, .palette = sMugshotPal_Wallace},
    [MUGSHOT_SIDNEY] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Sidney, .palette = sMugshotPal_Sidney},
    [MUGSHOT_PHOEBE] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Phoebe, .palette = sMugshotPal_Phoebe},
    [MUGSHOT_GLACIA] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Glacia, .palette = sMugshotPal_Glacia},
    [MUGSHOT_DRAKE] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Drake, .palette = sMugshotPal_Drake},
    [MUGSHOT_STEVEN] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Steven, .palette = sMugshotPal_Steven},
    [MUGSHOT_AQUAGRUNTM] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_AquaGruntM, .palette = sMugshotPal_AquaGruntM},
    [MUGSHOT_AQUAGRUNTF] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_AquaGruntF, .palette = sMugshotPal_AquaGruntF},
    [MUGSHOT_MAGMAGRUNTM] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_MagmaGruntM, .palette = sMugshotPal_MagmaGruntM},
    [MUGSHOT_MAGMAGRUNTF] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_MagmaGruntF, .palette = sMugshotPal_MagmaGruntF},
    [MUGSHOT_ARCHIE] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Archie, .palette = sMugshotPal_Archie},
    [MUGSHOT_MAXIE] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Maxie, .palette = sMugshotPal_Maxie},
    [MUGSHOT_YOUNGSTER] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Youngster, .palette = sMugshotPal_Youngster},
    [MUGSHOT_BEAUTY] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Beauty, .palette = sMugshotPal_Beauty},
    [MUGSHOT_BLACKBELT] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_BlackBelt, .palette = sMugshotPal_BlackBelt},
    [MUGSHOT_BOY1] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Boy1, .palette = sMugshotPal_Boy1},
    [MUGSHOT_BOY2] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Boy2, .palette = sMugshotPal_Boy2},
    [MUGSHOT_BOY3] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Boy3, .palette = sMugshotPal_Boy3},
    [MUGSHOT_BUG_CATCHER] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_BugCatcher, .palette = sMugshotPal_BugCatcher},
    [MUGSHOT_CAMPER] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Camper, .palette = sMugshotPal_Camper},
    [MUGSHOT_DEVONEMPLOYEE] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_DevonEmployee, .palette = sMugshotPal_DevonEmployee},
    [MUGSHOT_EXPERTF] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_ExpertF, .palette = sMugshotPal_ExpertF},
    [MUGSHOT_EXPERTM] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_ExpertM, .palette = sMugshotPal_ExpertM},
    [MUGSHOT_BRINEY] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Briney, .palette = sMugshotPal_Briney},
    [MUGSHOT_FATMAN] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_FatMan, .palette = sMugshotPal_FatMan},
    [MUGSHOT_FISHERMAN] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Fisherman, .palette = sMugshotPal_Fisherman},
    [MUGSHOT_GENTLEMAN] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Gentleman, .palette = sMugshotPal_Gentleman},
    [MUGSHOT_GIRL1] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Girl1, .palette = sMugshotPal_Girl1},
    [MUGSHOT_GIRL2] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Girl2, .palette = sMugshotPal_Girl2},
    [MUGSHOT_GIRL3] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Girl3, .palette = sMugshotPal_Girl3},
    [MUGSHOT_HEXMANIAC] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_HexManiac, .palette = sMugshotPal_HexManiac},
    [MUGSHOT_HIKER] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Hiker, .palette = sMugshotPal_Hiker},
    [MUGSHOT_LASS] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Lass, .palette = sMugshotPal_Lass},
    [MUGSHOT_LITTLEBOY] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_LittleBoy, .palette = sMugshotPal_LittleBoy},
    [MUGSHOT_LITTLEGIRL] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_LittleGirl, .palette = sMugshotPal_LittleGirl},
    [MUGSHOT_MAN1] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Man1, .palette = sMugshotPal_Man1},
    [MUGSHOT_MAN2] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Man2, .palette = sMugshotPal_Man2},
    [MUGSHOT_MAN3] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Man3, .palette = sMugshotPal_Man3},
    [MUGSHOT_MAN4] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Man4, .palette = sMugshotPal_Man4},
    [MUGSHOT_MAN5] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Man5, .palette = sMugshotPal_Man5},
    [MUGSHOT_MANIAC] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Maniac, .palette = sMugshotPal_Maniac},
    [MUGSHOT_MOM] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Mom, .palette = sMugshotPal_Mom},
    [MUGSHOT_NINJABOY] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_NinjaBoy, .palette = sMugshotPal_NinjaBoy},
    [MUGSHOT_OLDWOMAN] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_OldWoman, .palette = sMugshotPal_OldWoman},
    [MUGSHOT_PICNICKER] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Picnicker, .palette = sMugshotPal_Picnicker},
    [MUGSHOT_POKEFANF] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_PokefanF, .palette = sMugshotPal_PokefanF},
    [MUGSHOT_POKEFANM] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_PokefanM, .palette = sMugshotPal_PokefanM},
    [MUGSHOT_PSYCHICM] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_PsychicM, .palette = sMugshotPal_PsychicM},
    [MUGSHOT_RICHBOY] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_RichBoy, .palette = sMugshotPal_RichBoy},
    [MUGSHOT_SAILOR] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Sailor, .palette = sMugshotPal_Sailor},
    [MUGSHOT_SCHOOLKIDM] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_SchoolKidM, .palette = sMugshotPal_SchoolKidM},
    [MUGSHOT_SCIENTIST] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Scientist, .palette = sMugshotPal_Scientist},
    [MUGSHOT_SWIMMERF] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_SwimmerF, .palette = sMugshotPal_SwimmerF},
    [MUGSHOT_SWIMMERM] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_SwimmerM, .palette = sMugshotPal_SwimmerM},
    [MUGSHOT_TUBERF] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_TuberF, .palette = sMugshotPal_TuberF},
    [MUGSHOT_TUBERM] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_TuberM, .palette = sMugshotPal_TuberM},
    [MUGSHOT_WOMAN1] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Woman1, .palette = sMugshotPal_Woman1},
    [MUGSHOT_WOMAN2] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Woman2, .palette = sMugshotPal_Woman2},
    [MUGSHOT_WOMAN3] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Woman3, .palette = sMugshotPal_Woman3},
    [MUGSHOT_WOMAN4] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Woman4, .palette = sMugshotPal_Woman4},
    [MUGSHOT_WOMAN5] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Woman5, .palette = sMugshotPal_Woman5},
    [MUGSHOT_BIRD_KEEPER] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Bird_Keeper, .palette = sMugshotPal_Bird_Keeper},
    [MUGSHOT_KINDLER] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Kindler, .palette = sMugshotPal_Kindler},
    [MUGSHOT_RUIN_MANIAC] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Ruin_Maniac, .palette = sMugshotPal_Ruin_Maniac},
    [MUGSHOT_RANCHER] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Rancher, .palette = sMugshotPal_Rancher},
    [MUGSHOT_JUGGLER] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Juggler, .palette = sMugshotPal_Juggler},
    [MUGSHOT_BIKER] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Biker, .palette = sMugshotPal_Biker},
    [MUGSHOT_COOLTRAINER_M] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Cooltrainer_M, .palette = sMugshotPal_Cooltrainer_M},
    [MUGSHOT_COOLTRAINER_F] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Cooltrainer_F, .palette = sMugshotPal_Cooltrainer_F},
    [MUGSHOT_BACKPACKER_F] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Backpacker_F, .palette = sMugshotPal_Backpacker_F},
    [MUGSHOT_LASS2] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Lass2, .palette = sMugshotPal_Lass2},
    [MUGSHOT_KIMONO_GIRL] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Kimono_Girl, .palette = sMugshotPal_Kimono_Girl},
    [MUGSHOT_ZINNIA] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Zinnia, .palette = sMugshotPal_Zinnia},
};


//WindowId + 1, 0 if window is not open
static EWRAM_DATA u8 sMugshotWindow = 0;

void ClearMugshot(void){
    if(sMugshotWindow != 0){
        ClearStdWindowAndFrameToTransparent(sMugshotWindow - 1, 0);
        CopyWindowToVram(sMugshotWindow - 1, 3);
        RemoveWindow(sMugshotWindow - 1);
        sMugshotWindow = 0;
    }
}

static void DrawMugshotCore(const struct Mugshot* const mugshot, int x, int y){
    struct WindowTemplate t;
    u16 windowId;
    
    if(sMugshotWindow != 0){
        ClearMugshot();
    }
    
    #if GAME_VERSION==VERSION_EMERALD
    SetWindowTemplateFields(&t, 0, x, y, mugshot->width/8, mugshot->height/8, MUGSHOT_PALETTE_NUM, 0x40);
    #else
    t = SetWindowTemplateFields(0, x, y, mugshot->width/8, mugshot->height/8, MUGSHOT_PALETTE_NUM, 0x40);
    #endif
    windowId = AddWindow(&t);
    sMugshotWindow = windowId + 1;
    
    LoadPalette(mugshot->palette, 16 * MUGSHOT_PALETTE_NUM, 32);
    CopyToWindowPixelBuffer(windowId, (const void*)mugshot->image, 0, 0);
    PutWindowRectTilemap(windowId, 0, 0, mugshot->width/8, mugshot->height/8);
    CopyWindowToVram(windowId, 3);
}

void DrawMugshot(void){
    const struct Mugshot* const mugshot = sMugshots + VarGet(VAR_MUGSHOT);
    DrawMugshotCore(mugshot, mugshot->x, mugshot->y);
}

void DrawMugshotAtPos(void){
    DrawMugshotCore(sMugshots + VarGet(VAR_MUGSHOT), VarGet(VAR_0x8001), VarGet(VAR_0x8002));
}
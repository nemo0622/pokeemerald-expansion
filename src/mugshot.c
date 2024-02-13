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

void DrawMugshot(void); //VAR_0x8000 = mugshot id
void DrawMugshotAtPos(void); //VAR_0x8000 = mugshot id, VAR_0x8001 = x, VAR_0x8002 = y
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

static const struct Mugshot sMugshots[] = {
    //ADD YOUR MUGSHOTS HERE
    [MUGSHOT_BRENDAN] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Brendan, .palette = sMugshotPal_Brendan},
    [MUGSHOT_MAY] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_May, .palette = sMugshotPal_May},
    [MUGSHOT_TWIN] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Twin, .palette = sMugshotPal_Twin},
    [MUGSHOT_BIRCH] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Birch, .palette = sMugshotPal_Birch},
    [MUGSHOT_WALLY] = {.x = 2, .y = 8, .width = 48, .height = 48, .image = sMugshotImg_Wally, .palette = sMugshotPal_Wally},
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
    const struct Mugshot* const mugshot = sMugshots + VarGet(VAR_0x8000);
    DrawMugshotCore(mugshot, mugshot->x, mugshot->y);
}

void DrawMugshotAtPos(void){
    DrawMugshotCore(sMugshots + VarGet(VAR_0x8000), VarGet(VAR_0x8001), VarGet(VAR_0x8002));
}
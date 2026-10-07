const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ElioNormal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_ELIO,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_ElioNormal,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ElioMachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_ELIO,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_ElioMachBike,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ElioAcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_ELIO,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_AcroBike,
    .images = sPicTable_ElioAcroBike,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ElioSurfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_ELIO,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Surfing,
    .images = sPicTable_ElioSurfing,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ElioFieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_ELIO,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_FieldMove,
    .images = sPicTable_ElioFieldMove,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BerryTree = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = NULL,
    .anims = sAnimTable_BerryTree,
    .images = sPicTable_PechaBerryTree,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BerryTreeEarlyStages = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_BerryTree,
    .images = sPicTable_PechaBerryTree,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BerryTreeLateStages = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BerryTree,
    .images = sPicTable_PechaBerryTree,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CuttableTree = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_CuttableTree,
    .images = sPicTable_CuttableTree,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BreakableRock = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_BreakableRock,
    .images = sPicTable_BreakableRock,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_PushableBoulder = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_PushableBoulder,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SeleneNormal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_SELENE,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_SeleneNormal,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SeleneMachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_SELENE,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_SeleneMachBike,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SeleneAcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_SELENE,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_AcroBike,
    .images = sPicTable_SeleneAcroBike,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SeleneSurfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_SELENE,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Surfing,
    .images = sPicTable_SeleneSurfing,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SeleneFieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_SELENE,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_FieldMove,
    .images = sPicTable_SeleneFieldMove,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ElioUnderwater = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_PLAYER_UNDERWATER,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_ElioUnderwater,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SeleneUnderwater = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_PLAYER_UNDERWATER,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_SeleneUnderwater,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ElioFishing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_ELIO,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Fishing,
    .images = sPicTable_ElioFishing,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SeleneFishing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_SELENE,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Fishing,
    .images = sPicTable_SeleneFishing,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ElioWatering = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_ELIO,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_ElioWatering,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SeleneWatering = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_SELENE,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_SeleneWatering,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ElioDecorating = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_ELIO,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_ElioDecorating,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SeleneDecorating = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_SELENE,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_SeleneDecorating,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_PokeBall = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Following,
    .images = sPicTable_PokeBall,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Follower = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_DYNAMIC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Following,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BallLight = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_LIGHT,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_LIGHT_2,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_NONE,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Inanimate,
    .images = gFieldEffectObjectPicTable_BallLight,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ApricornTree = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_ApricornTree,
};

// Alolan NPCs
const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_ProfKukui = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_ProfKukui,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_ProfBurnet = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_ProfBurnet,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_SamsonOak = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_SamsonOak,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Mom = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Mom,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_BugCatcher = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_BugCatcher,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_BlackBelt = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_BlackBelt,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_BigMan = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_BigMan,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_FarmerM = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_FarmerM,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_DancerF = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_DancerF,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Lass = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Lass,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_SchoolBoy = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_SchoolBoy,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_SchoolGirl = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_SchoolGirl,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_SightseerM = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_SightseerM,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_SightseerF = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_SightseerF,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_SwimmerM_Land = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_SwimmerM_Land,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_SwimmerF_Land = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_SwimmerF_Land,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Youngster = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Youngster,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Hala = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Hala,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Hau = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Hau,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Lillie_1 = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Lillie_1,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Lillie_2 = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Lillie_2,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Man_1 = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Man_1,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Man_2 = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Man_2,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Man_3 = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Man_3,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Gentleman = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Gentleman,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Woman_1 = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Woman_1,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Woman_2 = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Woman_2,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Woman_3 = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Woman_3,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Lady = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Lady,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Nurse = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Nurse,
    .images = sPicTable_Alola_Nurse,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Ace_Trainer_F = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Ace_Trainer_F,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Ace_Trainer_M = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Ace_Trainer_M,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Aether_Foundation_F = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Aether_Foundation_F,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Aether_Foundation_M = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Aether_Foundation_M,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Backpacker = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Backpacker,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Bug_Catcher_F = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Bug_Catcher_F,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Camper = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Camper,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Dancer_M = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Dancer_M,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Farmer_F = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Farmer_F,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Fisherman = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Fisherman,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Hiker = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Hiker,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Picnicker = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Picnicker,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Punk_Rocker_F = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Punk_Rocker_F,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Punk_Rocker_M = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Punk_Rocker_M,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Rising_Star_F = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Rising_Star_F,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Rising_Star_M = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Rising_Star_M,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Sailor_F = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Sailor_F,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Sailor_M = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Sailor_M,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Singer = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Singer,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Team_Skull_F = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Team_Skull_F,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Team_Skull_M = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Team_Skull_M,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Battle_Girl = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Battle_Girl,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Breeder_F = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Breeder_F,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Breeder_M = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Breeder_M,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Old_Man = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Old_Man,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Old_Woman = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Old_Woman,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Veteran_F = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Veteran_F,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Veteran_M = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Veteran_M,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Artist = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Artist,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Beauty = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Beauty,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Bellhop = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Bellhop,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Biker = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Biker,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Collector = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Collector,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Hex_Maniac = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Hex_Maniac,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Jester = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Jester,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Office_Worker_F = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Office_Worker_F,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Office_Worker_M = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Office_Worker_M,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Pilot = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Pilot,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Psychic = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Psychic,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Ranger_F = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Ranger_F,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Ranger_M = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Ranger_M,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Scientist_F = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Scientist_F,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Scientist_M = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Scientist_M,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Surfer_Land = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Surfer_Land,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Surfer = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Surfer,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Shop_Employee = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Shop_Employee,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Shop_Employee_F = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Shop_Employee_F,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Acerola = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Acerola,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Gladion = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Gladion,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Hapu = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Hapu,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Ilima = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Ilima,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Kiawe = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Kiawe,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Lana = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Lana,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Mallow = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Mallow,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Mina = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Mina,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Nanu = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Nanu,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Olivia = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Olivia,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Ryuki = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Ryuki,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Sophocles = {
    .tileTag = TAG_NONE, .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256, .width = 16, .height = 32,
    .paletteSlot = PALSLOT_NPC_1, .shadowSize = SHADOW_SIZE_M, .inanimate = FALSE, .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32, .subspriteTables = sOamTables_16x32, .anims = sAnimTable_Standard,
    .images = sPicTable_Alola_Sophocles,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Ship_1 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 2048,
    .width = 64,
    .height = 64,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_NONE,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_64x64,
    .subspriteTables = sOamTables_64x64,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_Alola_Ship_1,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Alola_Ship_2 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 2048,
    .width = 64,
    .height = 64,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_NONE,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_64x64,
    .subspriteTables = sOamTables_64x64,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_Alola_Ship_2,
};


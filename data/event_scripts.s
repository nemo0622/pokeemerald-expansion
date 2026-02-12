#include "config/general.h"
#include "config/battle.h"
#include "config/item.h"
#include "constants/global.h"
#include "constants/apprentice.h"
#include "constants/battle.h"
#include "constants/battle_arena.h"
#include "constants/battle_dome.h"
#include "constants/battle_factory.h"
#include "constants/battle_frontier.h"
#include "constants/battle_palace.h"
#include "constants/battle_pike.h"
#include "constants/battle_pyramid.h"
#include "constants/battle_setup.h"
#include "constants/battle_tent.h"
#include "constants/battle_tower.h"
#include "constants/berry.h"
#include "constants/cable_club.h"
#include "constants/coins.h"
#include "constants/contest.h"
#include "constants/daycare.h"
#include "constants/decorations.h"
#include "constants/easy_chat.h"
#include "constants/event_objects.h"
#include "constants/event_object_movement.h"
#include "constants/field_effects.h"
#include "constants/field_poison.h"
#include "constants/field_specials.h"
#include "constants/field_tasks.h"
#include "constants/field_weather.h"
#include "constants/flags.h"
#include "constants/frontier_util.h"
#include "constants/game_stat.h"
#include "constants/item.h"
#include "constants/items.h"
#include "constants/heal_locations.h"
#include "constants/layouts.h"
#include "constants/lilycove_lady.h"
#include "constants/map_scripts.h"
#include "constants/maps.h"
#include "constants/mauville_old_man.h"
#include "constants/metatile_labels.h"
#include "constants/moves.h"
#include "constants/party_menu.h"
#include "constants/pokemon.h"
#include "constants/roulette.h"
#include "constants/script_menu.h"
#include "constants/secret_bases.h"
#include "constants/sliding_puzzles.h"
#include "constants/songs.h"
#include "constants/sound.h"
#include "constants/species.h"
#include "constants/trade.h"
#include "constants/trainer_hill.h"
#include "constants/trainers.h"
#include "constants/tv.h"
#include "constants/union_room.h"
#include "constants/vars.h"
#include "constants/weather.h"
#include "constants/quests.h"
#include "constants/outfits.h"
	.include "asm/macros.inc"
	.include "asm/macros/event.inc"
	.include "constants/constants.inc"

	.section script_data, "aw", %progbits

	.include "data/script_cmd_table.inc"

gSpecialVars::
	.4byte gSpecialVar_0x8000
	.4byte gSpecialVar_0x8001
	.4byte gSpecialVar_0x8002
	.4byte gSpecialVar_0x8003
	.4byte gSpecialVar_0x8004
	.4byte gSpecialVar_0x8005
	.4byte gSpecialVar_0x8006
	.4byte gSpecialVar_0x8007
	.4byte gSpecialVar_0x8008
	.4byte gSpecialVar_0x8009
	.4byte gSpecialVar_0x800A
	.4byte gSpecialVar_0x800B
	.4byte gSpecialVar_Facing
	.4byte gSpecialVar_Result
	.4byte gSpecialVar_ItemId
	.4byte gSpecialVar_LastTalked
	.4byte gSpecialVar_ContestRank
	.4byte gSpecialVar_ContestCategory
	.4byte gSpecialVar_MonBoxId
	.4byte gSpecialVar_MonBoxPos
	.4byte gSpecialVar_Unused_0x8014
	.4byte gTrainerBattleOpponent_A

	.include "data/specials.inc"

gStdScripts::
	.4byte Std_ObtainItem              @ STD_OBTAIN_ITEM
	.4byte Std_FindItem                @ STD_FIND_ITEM
	.4byte Std_MsgboxNPC               @ MSGBOX_NPC
	.4byte Std_MsgboxSign              @ MSGBOX_SIGN
	.4byte Std_MsgboxDefault           @ MSGBOX_DEFAULT
	.4byte Std_MsgboxYesNo             @ MSGBOX_YESNO
	.4byte Std_MsgboxAutoclose         @ MSGBOX_AUTOCLOSE
	.4byte Std_ObtainDecoration        @ STD_OBTAIN_DECORATION
	.4byte Std_RegisteredInMatchCall   @ STD_REGISTER_MATCH_CALL
	.4byte Std_MsgboxGetPoints         @ MSGBOX_GETPOINTS
	.4byte Std_MsgboxPokenav           @ MSGBOX_POKENAV
gStdScripts_End::

	.include "data/maps/PetalburgCity/scripts.inc"
	.include "data/maps/SlateportCity/scripts.inc"
	.include "data/maps/MauvilleCity/scripts.inc"
	.include "data/maps/RustboroCity/scripts.inc"
	.include "data/maps/FortreeCity/scripts.inc"
	.include "data/maps/LilycoveCity/scripts.inc"
	.include "data/maps/MossdeepCity/scripts.inc"
	.include "data/maps/SootopolisCity/scripts.inc"
	.include "data/maps/EverGrandeCity/scripts.inc"
	.include "data/maps/LittlerootTown/scripts.inc"
	.include "data/maps/OldaleTown/scripts.inc"
	.include "data/maps/DewfordTown/scripts.inc"
	.include "data/maps/LavaridgeTown/scripts.inc"
	.include "data/maps/FallarborTown/scripts.inc"
	.include "data/maps/VerdanturfTown/scripts.inc"
	.include "data/maps/PacifidlogTown/scripts.inc"
	.include "data/maps/Route101/scripts.inc"
	.include "data/maps/Route102/scripts.inc"
	.include "data/maps/Route103/scripts.inc"
	.include "data/maps/Route104/scripts.inc"
	.include "data/maps/Route105/scripts.inc"
	.include "data/maps/Route106/scripts.inc"
	.include "data/maps/Route107/scripts.inc"
	.include "data/maps/Route108/scripts.inc"
	.include "data/maps/Route109/scripts.inc"
	.include "data/maps/Route110/scripts.inc"
	.include "data/maps/Route111/scripts.inc"
	.include "data/maps/Route112/scripts.inc"
	.include "data/maps/Route113/scripts.inc"
	.include "data/maps/Route114/scripts.inc"
	.include "data/maps/Route115/scripts.inc"
	.include "data/maps/Route116/scripts.inc"
	.include "data/maps/Route117/scripts.inc"
	.include "data/maps/Route118/scripts.inc"
	.include "data/maps/Route119/scripts.inc"
	.include "data/maps/Route120/scripts.inc"
	.include "data/maps/Route121/scripts.inc"
	.include "data/maps/Route122/scripts.inc"
	.include "data/maps/Route123/scripts.inc"
	.include "data/maps/Route124/scripts.inc"
	.include "data/maps/Route125/scripts.inc"
	.include "data/maps/Route126/scripts.inc"
	.include "data/maps/Route127/scripts.inc"
	.include "data/maps/Route128/scripts.inc"
	.include "data/maps/Route129/scripts.inc"
	.include "data/maps/Route130/scripts.inc"
	.include "data/maps/Route131/scripts.inc"
	.include "data/maps/Route132/scripts.inc"
	.include "data/maps/Route133/scripts.inc"
	.include "data/maps/Route134/scripts.inc"
	.include "data/maps/Underwater_Route124/scripts.inc"
	.include "data/maps/Underwater_Route126/scripts.inc"
	.include "data/maps/Underwater_Route127/scripts.inc"
	.include "data/maps/Underwater_Route128/scripts.inc"
	.include "data/maps/Underwater_Route129/scripts.inc"
	.include "data/maps/Underwater_Route105/scripts.inc"
	.include "data/maps/Underwater_Route125/scripts.inc"
	.include "data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc"
	.include "data/maps/LittlerootTown_BrendansHouse_2F/scripts.inc"
	.include "data/maps/LittlerootTown_MaysHouse_1F/scripts.inc"
	.include "data/maps/LittlerootTown_MaysHouse_2F/scripts.inc"
	.include "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.inc"
	.include "data/maps/OldaleTown_House1/scripts.inc"
	.include "data/maps/OldaleTown_House2/scripts.inc"
	.include "data/maps/OldaleTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/OldaleTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/OldaleTown_Mart/scripts.inc"
	.include "data/maps/DewfordTown_House1/scripts.inc"
	.include "data/maps/DewfordTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/DewfordTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/DewfordTown_Gym/scripts.inc"
	.include "data/maps/DewfordTown_Hall/scripts.inc"
	.include "data/maps/DewfordTown_House2/scripts.inc"
	.include "data/maps/LavaridgeTown_HerbShop/scripts.inc"
	.include "data/maps/LavaridgeTown_Gym_1F/scripts.inc"
	.include "data/maps/LavaridgeTown_Gym_B1F/scripts.inc"
	.include "data/maps/LavaridgeTown_House/scripts.inc"
	.include "data/maps/LavaridgeTown_Mart/scripts.inc"
	.include "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/FallarborTown_Mart/scripts.inc"
	.include "data/maps/FallarborTown_BattleTentLobby/scripts.inc"
	.include "data/maps/FallarborTown_BattleTentCorridor/scripts.inc"
	.include "data/maps/FallarborTown_BattleTentBattleRoom/scripts.inc"
	.include "data/maps/FallarborTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/FallarborTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/FallarborTown_CozmosHouse/scripts.inc"
	.include "data/maps/FallarborTown_MoveRelearnersHouse/scripts.inc"
	.include "data/maps/VerdanturfTown_BattleTentLobby/scripts.inc"
	.include "data/maps/VerdanturfTown_BattleTentCorridor/scripts.inc"
	.include "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.inc"
	.include "data/maps/VerdanturfTown_Mart/scripts.inc"
	.include "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/VerdanturfTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/VerdanturfTown_WandasHouse/scripts.inc"
	.include "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.inc"
	.include "data/maps/VerdanturfTown_House/scripts.inc"
	.include "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/PacifidlogTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/PacifidlogTown_House1/scripts.inc"
	.include "data/maps/PacifidlogTown_House2/scripts.inc"
	.include "data/maps/PacifidlogTown_House3/scripts.inc"
	.include "data/maps/PacifidlogTown_House4/scripts.inc"
	.include "data/maps/PacifidlogTown_House5/scripts.inc"
	.include "data/maps/PetalburgCity_WallysHouse/scripts.inc"
	.include "data/maps/PetalburgCity_Gym/scripts.inc"
	.include "data/maps/PetalburgCity_House1/scripts.inc"
	.include "data/maps/PetalburgCity_House2/scripts.inc"
	.include "data/maps/PetalburgCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/PetalburgCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/PetalburgCity_Mart/scripts.inc"
	.include "data/maps/SlateportCity_SternsShipyard_1F/scripts.inc"
	.include "data/maps/SlateportCity_SternsShipyard_2F/scripts.inc"
	.include "data/maps/SlateportCity_BattleTentLobby/scripts.inc"
	.include "data/maps/SlateportCity_BattleTentCorridor/scripts.inc"
	.include "data/maps/SlateportCity_BattleTentBattleRoom/scripts.inc"
	.include "data/maps/SlateportCity_NameRatersHouse/scripts.inc"
	.include "data/maps/SlateportCity_PokemonFanClub/scripts.inc"
	.include "data/maps/SlateportCity_OceanicMuseum_1F/scripts.inc"
	.include "data/maps/SlateportCity_OceanicMuseum_2F/scripts.inc"
	.include "data/maps/SlateportCity_Harbor/scripts.inc"
	.include "data/maps/SlateportCity_House/scripts.inc"
	.include "data/maps/SlateportCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/SlateportCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/SlateportCity_Mart/scripts.inc"
	.include "data/maps/MauvilleCity_Gym/scripts.inc"
	.include "data/maps/MauvilleCity_BikeShop/scripts.inc"
	.include "data/maps/MauvilleCity_House1/scripts.inc"
	.include "data/maps/MauvilleCity_GameCorner/scripts.inc"
	.include "data/maps/MauvilleCity_House2/scripts.inc"
	.include "data/maps/MauvilleCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/MauvilleCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/MauvilleCity_Mart/scripts.inc"
	.include "data/maps/RustboroCity_DevonCorp_1F/scripts.inc"
	.include "data/maps/RustboroCity_DevonCorp_2F/scripts.inc"
	.include "data/maps/RustboroCity_DevonCorp_3F/scripts.inc"
	.include "data/maps/RustboroCity_Gym/scripts.inc"
	.include "data/maps/RustboroCity_PokemonSchool/scripts.inc"
	.include "data/maps/RustboroCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/RustboroCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/RustboroCity_Mart/scripts.inc"
	.include "data/maps/RustboroCity_Flat1_1F/scripts.inc"
	.include "data/maps/RustboroCity_Flat1_2F/scripts.inc"
	.include "data/maps/RustboroCity_House1/scripts.inc"
	.include "data/maps/RustboroCity_CuttersHouse/scripts.inc"
	.include "data/maps/RustboroCity_House2/scripts.inc"
	.include "data/maps/RustboroCity_Flat2_1F/scripts.inc"
	.include "data/maps/RustboroCity_Flat2_2F/scripts.inc"
	.include "data/maps/RustboroCity_Flat2_3F/scripts.inc"
	.include "data/maps/RustboroCity_House3/scripts.inc"
	.include "data/maps/FortreeCity_House1/scripts.inc"
	.include "data/maps/FortreeCity_Gym/scripts.inc"
	.include "data/maps/FortreeCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/FortreeCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/FortreeCity_Mart/scripts.inc"
	.include "data/maps/FortreeCity_House2/scripts.inc"
	.include "data/maps/FortreeCity_House3/scripts.inc"
	.include "data/maps/FortreeCity_House4/scripts.inc"
	.include "data/maps/FortreeCity_House5/scripts.inc"
	.include "data/maps/FortreeCity_DecorationShop/scripts.inc"
	.include "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc"
	.include "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc"
	.include "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc"
	.include "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc"
	.include "data/maps/LilycoveCity_ContestLobby/scripts.inc"
	.include "data/maps/LilycoveCity_ContestHall/scripts.inc"
	.include "data/maps/LilycoveCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/LilycoveCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/LilycoveCity_UnusedMart/scripts.inc"
	.include "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc"
	.include "data/maps/LilycoveCity_Harbor/scripts.inc"
	.include "data/maps/LilycoveCity_MoveDeletersHouse/scripts.inc"
	.include "data/maps/LilycoveCity_House1/scripts.inc"
	.include "data/maps/LilycoveCity_House2/scripts.inc"
	.include "data/maps/LilycoveCity_House3/scripts.inc"
	.include "data/maps/LilycoveCity_House4/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_2F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_3F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_4F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_5F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.inc"
	.include "data/maps/MossdeepCity_Gym/scripts.inc"
	.include "data/maps/MossdeepCity_House1/scripts.inc"
	.include "data/maps/MossdeepCity_House2/scripts.inc"
	.include "data/maps/MossdeepCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/MossdeepCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/MossdeepCity_Mart/scripts.inc"
	.include "data/maps/MossdeepCity_House3/scripts.inc"
	.include "data/maps/MossdeepCity_StevensHouse/scripts.inc"
	.include "data/maps/MossdeepCity_House4/scripts.inc"
	.include "data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc"
	.include "data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc"
	.include "data/maps/MossdeepCity_GameCorner_1F/scripts.inc"
	.include "data/maps/MossdeepCity_GameCorner_B1F/scripts.inc"
	.include "data/maps/SootopolisCity_Gym_1F/scripts.inc"
	.include "data/maps/SootopolisCity_Gym_B1F/scripts.inc"
	.include "data/maps/SootopolisCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/SootopolisCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/SootopolisCity_Mart/scripts.inc"
	.include "data/maps/SootopolisCity_House1/scripts.inc"
	.include "data/maps/SootopolisCity_House2/scripts.inc"
	.include "data/maps/SootopolisCity_House3/scripts.inc"
	.include "data/maps/SootopolisCity_House4/scripts.inc"
	.include "data/maps/SootopolisCity_House5/scripts.inc"
	.include "data/maps/SootopolisCity_House6/scripts.inc"
	.include "data/maps/SootopolisCity_House7/scripts.inc"
	.include "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc"
	.include "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc"
	.include "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.inc"
	.include "data/maps/EverGrandeCity_SidneysRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_PhoebesRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_GlaciasRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_DrakesRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_ChampionsRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall1/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall2/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall3/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall4/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall5/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.inc"
	.include "data/maps/EverGrandeCity_HallOfFame/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonLeague_2F/scripts.inc"
	.include "data/maps/Route104_MrBrineysHouse/scripts.inc"
	.include "data/maps/Route104_PrettyPetalFlowerShop/scripts.inc"
	.include "data/maps/Route111_WinstrateFamilysHouse/scripts.inc"
	.include "data/maps/Route111_OldLadysRestStop/scripts.inc"
	.include "data/maps/Route112_CableCarStation/scripts.inc"
	.include "data/maps/MtChimney_CableCarStation/scripts.inc"
	.include "data/maps/Route114_FossilManiacsHouse/scripts.inc"
	.include "data/maps/Route114_FossilManiacsTunnel/scripts.inc"
	.include "data/maps/Route114_LanettesHouse/scripts.inc"
	.include "data/maps/Route116_TunnelersRestHouse/scripts.inc"
	.include "data/maps/Route117_PokemonDayCare/scripts.inc"
	.include "data/maps/Route121_SafariZoneEntrance/scripts.inc"
	.include "data/maps/MeteorFalls_1F_1R/scripts.inc"
	.include "data/maps/MeteorFalls_1F_2R/scripts.inc"
	.include "data/maps/MeteorFalls_B1F_1R/scripts.inc"
	.include "data/maps/MeteorFalls_B1F_2R/scripts.inc"
	.include "data/maps/RusturfTunnel/scripts.inc"
	.include "data/maps/Underwater_SootopolisCity/scripts.inc"
	.include "data/maps/DesertRuins/scripts.inc"
	.include "data/maps/GraniteCave_1F/scripts.inc"
	.include "data/maps/GraniteCave_B1F/scripts.inc"
	.include "data/maps/GraniteCave_B2F/scripts.inc"
	.include "data/maps/GraniteCave_StevensRoom/scripts.inc"
	.include "data/maps/PetalburgWoods/scripts.inc"
	.include "data/maps/MtChimney/scripts.inc"
	.include "data/maps/JaggedPass/scripts.inc"
	.include "data/maps/FieryPath/scripts.inc"
	.include "data/maps/MtPyre_1F/scripts.inc"
	.include "data/maps/MtPyre_2F/scripts.inc"
	.include "data/maps/MtPyre_3F/scripts.inc"
	.include "data/maps/MtPyre_4F/scripts.inc"
	.include "data/maps/MtPyre_5F/scripts.inc"
	.include "data/maps/MtPyre_6F/scripts.inc"
	.include "data/maps/MtPyre_Exterior/scripts.inc"
	.include "data/maps/MtPyre_Summit/scripts.inc"
	.include "data/maps/AquaHideout_1F/scripts.inc"
	.include "data/maps/AquaHideout_B1F/scripts.inc"
	.include "data/maps/AquaHideout_B2F/scripts.inc"
	.include "data/maps/Underwater_SeafloorCavern/scripts.inc"
	.include "data/maps/SeafloorCavern_Entrance/scripts.inc"
	.include "data/maps/SeafloorCavern_Room1/scripts.inc"
	.include "data/maps/SeafloorCavern_Room2/scripts.inc"
	.include "data/maps/SeafloorCavern_Room3/scripts.inc"
	.include "data/maps/SeafloorCavern_Room4/scripts.inc"
	.include "data/maps/SeafloorCavern_Room5/scripts.inc"
	.include "data/maps/SeafloorCavern_Room6/scripts.inc"
	.include "data/maps/SeafloorCavern_Room7/scripts.inc"
	.include "data/maps/SeafloorCavern_Room8/scripts.inc"
	.include "data/maps/SeafloorCavern_Room9/scripts.inc"
	.include "data/maps/CaveOfOrigin_Entrance/scripts.inc"
	.include "data/maps/CaveOfOrigin_1F/scripts.inc"
	.include "data/maps/CaveOfOrigin_UnusedRubySapphireMap1/scripts.inc"
	.include "data/maps/CaveOfOrigin_UnusedRubySapphireMap2/scripts.inc"
	.include "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.inc"
	.include "data/maps/CaveOfOrigin_B1F/scripts.inc"
	.include "data/maps/VictoryRoad_1F/scripts.inc"
	.include "data/maps/VictoryRoad_B1F/scripts.inc"
	.include "data/maps/VictoryRoad_B2F/scripts.inc"
	.include "data/maps/ShoalCave_LowTideEntranceRoom/scripts.inc"
	.include "data/maps/ShoalCave_LowTideInnerRoom/scripts.inc"
	.include "data/maps/ShoalCave_LowTideStairsRoom/scripts.inc"
	.include "data/maps/ShoalCave_LowTideLowerRoom/scripts.inc"
	.include "data/maps/ShoalCave_HighTideEntranceRoom/scripts.inc"
	.include "data/maps/ShoalCave_HighTideInnerRoom/scripts.inc"
	.include "data/maps/NewMauville_Entrance/scripts.inc"
	.include "data/maps/NewMauville_Inside/scripts.inc"
	.include "data/maps/AbandonedShip_Deck/scripts.inc"
	.include "data/maps/AbandonedShip_Corridors_1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms_1F/scripts.inc"
	.include "data/maps/AbandonedShip_Corridors_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms2_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Underwater1/scripts.inc"
	.include "data/maps/AbandonedShip_Room_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms2_1F/scripts.inc"
	.include "data/maps/AbandonedShip_CaptainsOffice/scripts.inc"
	.include "data/maps/AbandonedShip_Underwater2/scripts.inc"
	.include "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.inc"
	.include "data/maps/AbandonedShip_HiddenFloorRooms/scripts.inc"
	.include "data/maps/IslandCave/scripts.inc"
	.include "data/maps/AncientTomb/scripts.inc"
	.include "data/maps/Underwater_Route134/scripts.inc"
	.include "data/maps/Underwater_SealedChamber/scripts.inc"
	.include "data/maps/SealedChamber_OuterRoom/scripts.inc"
	.include "data/maps/SealedChamber_InnerRoom/scripts.inc"
	.include "data/maps/ScorchedSlab/scripts.inc"
	.include "data/maps/AquaHideout_UnusedRubyMap1/scripts.inc"
	.include "data/maps/AquaHideout_UnusedRubyMap2/scripts.inc"
	.include "data/maps/AquaHideout_UnusedRubyMap3/scripts.inc"
	.include "data/maps/SkyPillar_Entrance/scripts.inc"
	.include "data/maps/SkyPillar_Outside/scripts.inc"
	.include "data/maps/SkyPillar_1F/scripts.inc"
	.include "data/maps/SkyPillar_2F/scripts.inc"
	.include "data/maps/SkyPillar_3F/scripts.inc"
	.include "data/maps/SkyPillar_4F/scripts.inc"
	.include "data/maps/ShoalCave_LowTideIceRoom/scripts.inc"
	.include "data/maps/SkyPillar_5F/scripts.inc"
	.include "data/maps/SkyPillar_Top/scripts.inc"
	.include "data/maps/MagmaHideout_1F/scripts.inc"
	.include "data/maps/MagmaHideout_2F_1R/scripts.inc"
	.include "data/maps/MagmaHideout_2F_2R/scripts.inc"
	.include "data/maps/MagmaHideout_3F_1R/scripts.inc"
	.include "data/maps/MagmaHideout_3F_2R/scripts.inc"
	.include "data/maps/MagmaHideout_4F/scripts.inc"
	.include "data/maps/MagmaHideout_3F_3R/scripts.inc"
	.include "data/maps/MagmaHideout_2F_3R/scripts.inc"
	.include "data/maps/MirageTower_1F/scripts.inc"
	.include "data/maps/MirageTower_2F/scripts.inc"
	.include "data/maps/MirageTower_3F/scripts.inc"
	.include "data/maps/MirageTower_4F/scripts.inc"
	.include "data/maps/DesertUnderpass/scripts.inc"
	.include "data/maps/ArtisanCave_B1F/scripts.inc"
	.include "data/maps/ArtisanCave_1F/scripts.inc"
	.include "data/maps/Underwater_MarineCave/scripts.inc"
	.include "data/maps/MarineCave_Entrance/scripts.inc"
	.include "data/maps/MarineCave_End/scripts.inc"
	.include "data/maps/TerraCave_Entrance/scripts.inc"
	.include "data/maps/TerraCave_End/scripts.inc"
	.include "data/maps/AlteringCave/scripts.inc"
	.include "data/maps/MeteorFalls_StevensCave/scripts.inc"
	.include "data/scripts/shared_secret_base.inc"
	.include "data/maps/BattleColosseum_2P/scripts.inc"
	.include "data/maps/TradeCenter/scripts.inc"
	.include "data/maps/RecordCorner/scripts.inc"
	.include "data/maps/BattleColosseum_4P/scripts.inc"
	.include "data/maps/ContestHall/scripts.inc"
	.include "data/maps/InsideOfTruck/scripts.inc"
	.include "data/maps/SSTidalCorridor/scripts.inc"
	.include "data/maps/SSTidalLowerDeck/scripts.inc"
	.include "data/maps/SSTidalRooms/scripts.inc"
	.include "data/maps/BattlePyramidSquare01/scripts.inc"
	.include "data/maps/UnionRoom/scripts.inc"
	.include "data/maps/SafariZone_Northwest/scripts.inc"
	.include "data/maps/SafariZone_North/scripts.inc"
	.include "data/maps/SafariZone_Southwest/scripts.inc"
	.include "data/maps/SafariZone_South/scripts.inc"
	.include "data/maps/BattleFrontier_OutsideWest/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerElevator/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc"
	.include "data/maps/SouthernIsland_Exterior/scripts.inc"
	.include "data/maps/SouthernIsland_Interior/scripts.inc"
	.include "data/maps/SafariZone_RestHouse/scripts.inc"
	.include "data/maps/SafariZone_Northeast/scripts.inc"
	.include "data/maps/SafariZone_Southeast/scripts.inc"
	.include "data/maps/BattleFrontier_OutsideEast/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomeLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomeCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePalaceLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePyramidTop/scripts.inc"
	.include "data/maps/BattleFrontier_BattleArenaLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleArenaCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.inc"
	.include "data/maps/BattleFrontier_RankingHall/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge1/scripts.inc"
	.include "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge2/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge3/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge4/scripts.inc"
	.include "data/maps/BattleFrontier_ScottsHouse/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge5/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge6/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge7/scripts.inc"
	.include "data/maps/BattleFrontier_ReceptionGate/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge8/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge9/scripts.inc"
	.include "data/maps/BattleFrontier_PokemonCenter_1F/scripts.inc"
	.include "data/maps/BattleFrontier_PokemonCenter_2F/scripts.inc"
	.include "data/maps/BattleFrontier_Mart/scripts.inc"
	.include "data/maps/FarawayIsland_Entrance/scripts.inc"
	.include "data/maps/FarawayIsland_Interior/scripts.inc"
	.include "data/maps/BirthIsland_Exterior/scripts.inc"
	.include "data/maps/BirthIsland_Harbor/scripts.inc"
	.include "data/maps/TrainerHill_Entrance/scripts.inc"
	.include "data/maps/TrainerHill_1F/scripts.inc"
	.include "data/maps/TrainerHill_2F/scripts.inc"
	.include "data/maps/TrainerHill_3F/scripts.inc"
	.include "data/maps/TrainerHill_4F/scripts.inc"
	.include "data/maps/TrainerHill_Roof/scripts.inc"
	.include "data/maps/NavelRock_Exterior/scripts.inc"
	.include "data/maps/NavelRock_Harbor/scripts.inc"
	.include "data/maps/NavelRock_Entrance/scripts.inc"
	.include "data/maps/NavelRock_B1F/scripts.inc"
	.include "data/maps/NavelRock_Fork/scripts.inc"
	.include "data/maps/NavelRock_Up1/scripts.inc"
	.include "data/maps/NavelRock_Up2/scripts.inc"
	.include "data/maps/NavelRock_Up3/scripts.inc"
	.include "data/maps/NavelRock_Up4/scripts.inc"
	.include "data/maps/NavelRock_Top/scripts.inc"
	.include "data/maps/NavelRock_Down01/scripts.inc"
	.include "data/maps/NavelRock_Down02/scripts.inc"
	.include "data/maps/NavelRock_Down03/scripts.inc"
	.include "data/maps/NavelRock_Down04/scripts.inc"
	.include "data/maps/NavelRock_Down05/scripts.inc"
	.include "data/maps/NavelRock_Down06/scripts.inc"
	.include "data/maps/NavelRock_Down07/scripts.inc"
	.include "data/maps/NavelRock_Down08/scripts.inc"
	.include "data/maps/NavelRock_Down09/scripts.inc"
	.include "data/maps/NavelRock_Down10/scripts.inc"
	.include "data/maps/NavelRock_Down11/scripts.inc"
	.include "data/maps/NavelRock_Bottom/scripts.inc"
	.include "data/maps/TrainerHill_Elevator/scripts.inc"
	.include "data/maps/Route104_Prototype/scripts.inc"
	.include "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.inc"
	.include "data/maps/Route109_SeashoreHouse/scripts.inc"
	.include "data/maps/Route110_TrickHouseEntrance/scripts.inc"
	.include "data/maps/Route110_TrickHouseEnd/scripts.inc"
	.include "data/maps/Route110_TrickHouseCorridor/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle1/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle2/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle3/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle4/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle5/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle6/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle7/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle8/scripts.inc"
	.include "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.inc"
	.include "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.inc"
	.include "data/maps/Route113_GlassWorkshop/scripts.inc"
	.include "data/maps/Route123_BerryMastersHouse/scripts.inc"
	.include "data/maps/Route119_WeatherInstitute_1F/scripts.inc"
	.include "data/maps/Route119_WeatherInstitute_2F/scripts.inc"
	.include "data/maps/Route119_House/scripts.inc"
	.include "data/maps/Route124_DivingTreasureHuntersHouse/scripts.inc"

	.include "data/scripts/std_msgbox.inc"
	.include "data/scripts/trainer_battle.inc"
	.include "data/scripts/new_game.inc"
	.include "data/scripts/hall_of_fame.inc"

	.include "data/scripts/config.inc"
	.include "data/scripts/debug.inc"

EventScript_WhiteOut::
	call EverGrandeCity_HallOfFame_EventScript_ResetEliteFour
	goto EventScript_ResetMrBriney
	end

EventScript_AfterWhiteOutHeal::
	lockall
	msgbox gText_FirstShouldRestoreMonsHealth
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
	call_if_unset FLAG_DEFEATED_RUSTBORO_GYM, EventScript_AfterWhiteOutHealMsgPreRoxanne
	call_if_set FLAG_DEFEATED_RUSTBORO_GYM, EventScript_AfterWhiteOutHealMsg
	applymovement VAR_LAST_TALKED, Movement_PkmnCenterNurse_Bow
	waitmovement 0
	fadedefaultbgm
	releaseall
	end

EventScript_AfterWhiteOutHealMsgPreRoxanne::
	msgbox gText_MonsHealedShouldBuyPotions
	return

EventScript_AfterWhiteOutHealMsg::
	msgbox gText_MonsHealed
	return

EventScript_AfterWhiteOutMomHeal::
	lockall
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox gText_HadQuiteAnExperienceTakeRest
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox gText_MomExplainHPGetPotions
	fadedefaultbgm
	releaseall
	end

EventScript_ResetMrBriney::
	goto_if_eq VAR_BRINEY_LOCATION, 1, EventScript_MoveMrBrineyToHouse
	goto_if_eq VAR_BRINEY_LOCATION, 2, EventScript_MoveMrBrineyToDewford
	goto_if_eq VAR_BRINEY_LOCATION, 3, EventScript_MoveMrBrineyToRoute109
	end

EventScript_MoveMrBrineyToHouse::
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	end

EventScript_MoveMrBrineyToDewford::
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	end

EventScript_MoveMrBrineyToRoute109::
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	end

EverGrandeCity_HallOfFame_EventScript_ResetEliteFour::
	clearflag FLAG_DEFEATED_ELITE_4_SIDNEY
	clearflag FLAG_DEFEATED_ELITE_4_PHOEBE
	clearflag FLAG_DEFEATED_ELITE_4_GLACIA
	clearflag FLAG_DEFEATED_ELITE_4_DRAKE
	setvar VAR_ELITE_4_STATE, 0
	cleartrainerflag TRAINER_ELITEFOUR_POLYMNIA
	cleartrainerflag TRAINER_ELITEFOUR_POLYMNIA_HARD
	cleartrainerflag TRAINER_ELITEFOUR_TERPSIKORE
	cleartrainerflag TRAINER_ELITEFOUR_TERPSIKORE_HARD
	cleartrainerflag TRAINER_ELITEFOUR_EUTERPE
	cleartrainerflag TRAINER_ELITEFOUR_EUTERPE_HARD
	cleartrainerflag TRAINER_ELITEFOUR_RHADINE
	cleartrainerflag TRAINER_ELITEFOUR_RHADINE_HARD
	cleartrainerflag TRAINER_ELITEFOUR_ANYALIOS
	cleartrainerflag TRAINER_ELITEFOUR_ANYALIOS_HARD
	return

Common_EventScript_UpdateBrineyLocation::
	goto_if_unset FLAG_RECEIVED_POKENAV, Common_EventScript_NopReturn
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, Common_EventScript_NopReturn
	goto_if_unset FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT, EventScript_SetBrineyLocation_House
	goto_if_unset FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN, EventScript_SetBrineyLocation_Dewford
	goto_if_unset FLAG_HIDE_ROUTE_109_MR_BRINEY, EventScript_SetBrineyLocation_Route109
	return

EventScript_SetBrineyLocation_House::
	setvar VAR_BRINEY_LOCATION, 1
	return

EventScript_SetBrineyLocation_Dewford::
	setvar VAR_BRINEY_LOCATION, 2
	return

EventScript_SetBrineyLocation_Route109::
	setvar VAR_BRINEY_LOCATION, 3
	return

	.include "data/scripts/pkmn_center_nurse.inc"
	.include "data/scripts/obtain_item.inc"
	.include "data/scripts/record_mix.inc"
	.include "data/scripts/pc.inc"

@ scripts/notices.inc? signs.inc? See comment about text/notices.inc
Common_EventScript_ShowPokemartSign::
	msgbox gText_PokemartSign, MSGBOX_SIGN
	end

Common_EventScript_ShowPokemonCenterSign::
	msgbox gText_PokemonCenterSign, MSGBOX_SIGN
	end

Common_ShowEasyChatScreen::
	fadescreen FADE_TO_BLACK
	special ShowEasyChatScreen
	fadescreen FADE_FROM_BLACK
	return

Common_EventScript_ReadyPetalburgGymForBattle::
	clearflag FLAG_HIDE_PETALBURG_GYM_GREETER
	setflag FLAG_PETALBURG_MART_EXPANDED_ITEMS
	return

Common_EventScript_BufferTrendyPhrase::
	dotimebasedevents
	setvar VAR_0x8004, 0
	special BufferTrendyPhraseString
	return

EventScript_BackupMrBrineyLocation::
	copyvar VAR_0x8008, VAR_BRINEY_LOCATION
	setvar VAR_BRINEY_LOCATION, 0
	return

	.include "data/scripts/surf.inc"
	.include "data/scripts/rival_graphics.inc"
	.include "data/scripts/set_gym_trainers.inc"

Common_EventScript_ShowBagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	release
	end

Common_EventScript_BagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	return

Common_EventScript_ShowNoRoomForDecor::
	msgbox gText_NoRoomLeftForAnother, MSGBOX_DEFAULT
	release
	end

Common_EventScript_NoRoomForDecor::
	msgbox gText_NoRoomLeftForAnother, MSGBOX_DEFAULT
	return

Common_EventScript_SetAbnormalWeather::
	setweather WEATHER_ABNORMAL
	return

Common_EventScript_PlayGymBadgeFanfare::
	playfanfare MUS_OBTAIN_BADGE
	waitfanfare
	return

Common_EventScript_OutOfCenterPartyHeal::
	fadescreenswapbuffers FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	fadescreenswapbuffers FADE_FROM_BLACK
	return

EventScript_RegionMap::
	lockall
	msgbox Common_Text_LookCloserAtMap, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special FieldShowRegionMap
	waitstate
	releaseall
	end

Common_EventScript_PlayBrineysBoatMusic::
	setflag FLAG_DONT_TRANSITION_MUSIC
	playbgm MUS_SAILING, FALSE
	return

Common_EventScript_StopBrineysBoatMusic::
	clearflag FLAG_DONT_TRANSITION_MUSIC
	fadedefaultbgm
	return

	.include "data/scripts/prof_birch.inc"

@ Below could be split as ferry.inc aside from the Rusturf tunnel script
Common_EventScript_FerryDepart::
	delay 60
	applymovement VAR_0x8004, Movement_FerryDepart
	waitmovement 0
	return

Movement_FerryDepart:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

EventScript_HideMrBriney::
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	setvar VAR_BRINEY_LOCATION, 0
	return

RusturfTunnel_EventScript_SetRusturfTunnelOpen::
	removeobject LOCALID_WANDAS_BF
	removeobject LOCALID_WANDA
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDAS_BOYFRIEND
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDA
	setvar VAR_RUSTURF_TUNNEL_STATE, 6
	setflag FLAG_RUSTURF_TUNNEL_OPENED
	return

EventScript_UnusedBoardFerry::
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	showobjectat OBJ_EVENT_ID_PLAYER, 0
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Movement_UnusedBoardFerry
	waitmovement 0
	delay 30
	return

Movement_UnusedBoardFerry:
	walk_up
	step_end

Common_EventScript_FerryDepartIsland::
	call_if_eq VAR_FACING, DIR_SOUTH, Ferry_EventScript_DepartIslandSouth
	call_if_eq VAR_FACING, DIR_WEST, Ferry_EventScript_DepartIslandWest
	delay 30
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	call Common_EventScript_FerryDepart
	return

	.include "data/scripts/cave_of_origin.inc"
	.include "data/scripts/kecleon.inc"

Common_EventScript_NameReceivedPartyMon::
	fadescreen FADE_TO_BLACK
	special ChangePokemonNickname
	waitstate
	return

Common_EventScript_PlayerHandedOverTheItem::
	bufferitemname STR_VAR_1, VAR_0x8004
	playfanfare MUS_OBTAIN_TMHM
	message gText_PlayerHandedOverTheItem
	waitmessage
	waitfanfare
	removeitem VAR_0x8004
	return

	.include "data/scripts/elite_four.inc"
	.include "data/scripts/movement.inc"
	.include "data/scripts/check_furniture.inc"
	.include "data/text/record_mix.inc"
	.include "data/text/pc.inc"
	.include "data/text/pkmn_center_nurse.inc"
	.include "data/text/mart_clerk.inc"
	.include "data/text/obtain_item.inc"

@ The below and surf.inc could be split into some text/notices.inc
gText_PokemartSign::
	.string "“Selected items for your convenience!”\n"
	.string "POKéMON MART$"

gText_PokemonCenterSign::
	.string "“Rejuvenate your tired partners!”\n"
	.string "POKéMON CENTER$"

gText_MomOrDadMightLikeThisProgram::
	.string "{STR_VAR_1} might like this program.\n"
	.string "… … … … … … … … … … … … … … … …\p"
	.string "Better get going!$"

gText_WhichFloorWouldYouLike::
	.string "Welcome to LILYCOVE DEPARTMENT STORE.\p"
	.string "Which floor would you like?$"

gText_SandstormIsVicious::
	.string "The sandstorm is vicious.\n"
	.string "It's impossible to keep going.$"

gText_SelectWithoutRegisteredItem::
	.string "An item in the BAG can be\n"
	.string "registered to SELECT for easy use.$"

gText_PokemonTrainerSchoolEmail::
	.string "There's an e-mail from POKéMON TRAINER\n"
	.string "SCHOOL.\p"
	.string "… … … … … …\p"
	.string "A POKéMON may learn up to four moves.\p"
	.string "A TRAINER's expertise is tested on the\n"
	.string "move sets chosen for POKéMON.\p"
	.string "… … … … … …$"

gText_PlayerHouseBootPC::
	.string "{PLAYER} booted up the PC.$"

gText_PokeblockLinkCanceled::
	.string "The link was canceled.$"

gText_UnusedNicknameReceivedPokemon::
	.string "Want to give a nickname to\n"
	.string "the {STR_VAR_2} you received?$"

gText_PlayerWhitedOut::
	.string "{PLAYER} is out of usable\n"
	.string "POKéMON!\p{PLAYER} whited out!$"

gText_FirstShouldRestoreMonsHealth::
	.string "First, you should restore your\n"
	.string "POKéMON to full health.$"

gText_MonsHealedShouldBuyPotions::
	.string "Your POKéMON have been healed\n"
	.string "to perfect health.\p"
	.string "If your POKéMON's energy, HP,\n"
	.string "is down, please come see us.\p"
	.string "If you're planning to go far in the\n"
	.string "field, you should buy some POTIONS\l"
	.string "at the POKéMON MART.\p"
	.string "We hope you excel!$"

gText_MonsHealed::
	.string "Your POKéMON have been healed\n"
	.string "to perfect health.\p"
	.string "We hope you excel!$"

gText_HadQuiteAnExperienceTakeRest::
	.string "MOM: {PLAYER}!\n"
	.string "Welcome home.\p"
	.string "It sounds like you had quite\n"
	.string "an experience.\p"
	.string "Maybe you should take a quick\n"
	.string "rest.$"

gText_MomExplainHPGetPotions::
	.string "MOM: Oh, good! You and your\n"
	.string "POKéMON are looking great.\p"
	.string "I just heard from PROF. BIRCH.\p"
	.string "He said that POKéMON's energy is\n"
	.string "measured in HP.\p"
	.string "If your POKéMON lose their HP,\n"
	.string "you can restore them at any\l"
	.string "POKéMON CENTER.\p"
	.string "If you're going to travel far away,\n"
	.string "the smart TRAINER stocks up on\l"
	.string "POTIONS at the POKéMON MART.\p"
	.string "Make me proud, honey!\p"
	.string "Take care!$"

gText_RegisteredTrainerinPokeNav::
	.string "Registered {STR_VAR_1} {STR_VAR_2}\n"
	.string "in the POKéNAV.$"

gText_ComeBackWithSecretPower::
	.string "Do you know the TM SECRET POWER?\p"
	.string "Our group, we love the TM SECRET\n"
	.string "POWER.\p"
	.string "One of our members will give it to you.\n"
	.string "Come back and show me if you get it.\p"
	.string "We'll accept you as a member and sell\n"
	.string "you good stuff in secrecy.$"

gText_PokerusExplanation::
	.string "Your POKéMON may be infected with\n"
	.string "POKéRUS.\p"
	.string "Little is known about the POKéRUS\n"
	.string "except that they are microscopic life-\l"
	.string "forms that attach to POKéMON.\p"
	.string "While infected, POKéMON are said to\n"
	.string "grow exceptionally well.$"

	.include "data/text/surf.inc"

gText_DoorOpenedFarAway::
	.string "It sounded as if a door opened\n"
	.string "somewhere far away.$"

gText_BigHoleInTheWall::
	.string "There is a big hole in the wall.$"

gText_SorryWirelessClubAdjustments::
	.string "I'm terribly sorry.\n"
	.string "The POKéMON WIRELESS CLUB is\l"
	.string "undergoing adjustments now.$"

gText_UndergoingAdjustments::
	.string "It appears to be undergoing\n"
	.string "adjustments…$"

@ Unused
gText_SorryTradeCenterInspections::
	.string "I'm terribly sorry. The TRADE CENTER\n"
	.string "is undergoing inspections.$"

@ Unused
gText_SorryRecordCornerPreparation::
	.string "I'm terribly sorry. The RECORD CORNER\n"
	.string "is under preparation.$"

gText_PlayerHandedOverTheItem::
	.string "{PLAYER} handed over the\n"
	.string "{STR_VAR_1}.$"

gText_ThankYouForAccessingMysteryGift::
	.string "Thank you for accessing the\n"
	.string "MYSTERY GIFT System.$"

gText_PlayerFoundOneTMHM::
	.string "{PLAYER} found one {STR_VAR_1}\n"
	.string "{STR_VAR_2}!$"

gText_PlayerFoundTMHMs::
	.string "{PLAYER} found {STR_VAR_3} {STR_VAR_1}\n"
	.string "{STR_VAR_2}!$"

gText_Sudowoodo_Attacked::
	.string "The weird tree doesn't like the\n"
	.string "WAILMER PAIL!\p"
	.string "The weird tree attacked!$"

gText_LegendaryFlewAway::
	.string "The {STR_VAR_1} flew away!$"

gText_TransferredToPC::
	.string "The POKéMON was transferred to\n"
	.string "the PC.$"

	.include "data/text/pc_transfer.inc"
	.include "data/text/questionnaire.inc"
	.include "data/text/abnormal_weather.inc"

EventScript_SelectWithoutRegisteredItem::
	msgbox gText_SelectWithoutRegisteredItem, MSGBOX_SIGN
	end

	.include "data/scripts/field_poison.inc"

Common_EventScript_NopReturn::
	return

@ Unused
EventScript_CableClub_SetVarResult1::
	setvar VAR_RESULT, 1
	return

EventScript_CableClub_SetVarResult0::
	setvar VAR_RESULT, 0
	return

Common_EventScript_UnionRoomAttendant::
	call CableClub_EventScript_UnionRoomAttendant
	end

Common_EventScript_WirelessClubAttendant::
	call CableClub_EventScript_WirelessClubAttendant
	end

Common_EventScript_DirectCornerAttendant::
	call CableClub_EventScript_DirectCornerAttendant
	end

Common_EventScript_RemoveStaticPokemon::
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

Common_EventScript_LegendaryFlewAway::
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	bufferspeciesname STR_VAR_1, VAR_0x8004
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
	release
	end

EventScript_VsSeekerChargingDone::
	special VsSeekerFreezeObjectsAfterChargeComplete
	waitstate
	special VsSeekerResetObjectMovementAfterChargeComplete
	releaseall
	end

@ Call this script anywhere to access the Mystery Gift Code System
Common_EventScript_MysteryGift::
	lockall
MysteryGift_EventScript_StartMysteryGift::
	msgbox MysteryGift_Text_WelcomeToMysteryGiftSystem, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MysteryGift_EventScript_Exit
MysteryGift_EventScript_DoMysteryGift::
	msgbox MysteryGift_Text_EnterCode, MSGBOX_AUTOCLOSE
	special EnterMysteryGiftCode
	waitstate
	special GetMysteryGiftFeedback
	goto_if_eq VAR_RESULT, 0, MysteryGift_Failed
	goto_if_eq VAR_RESULT, 1, MysteryGift_EventScript_RareCandies
	goto_if_eq VAR_RESULT, 2, MysteryGift_EventScript_PerfectCatchRate
	goto_if_eq VAR_RESULT, 3, MysteryGift_EventScript_WorldChamp
	goto_if_eq VAR_RESULT, 4, MysteryGift_EventScript_Girlypop
	goto_if_eq VAR_RESULT, 5, MysteryGift_EventScript_GiveAlolaStarters
	goto_if_eq VAR_RESULT, 6, MysteryGift_EventScript_GiveKalosStarters
	goto_if_eq VAR_RESULT, 7, MysteryGift_EventScript_GiveUnovaStarters
	goto_if_eq VAR_RESULT, 8, MysteryGift_EventScript_GivePaldeaStarters
	goto_if_eq VAR_RESULT, 9, MysteryGift_EventScript_NemosFavs
	goto_if_eq VAR_RESULT, 10, MysteryGift_EventScript_JustShowMe
	goto_if_eq VAR_RESULT, 11, MysteryGift_EventScript_WishingStars
	goto_if_eq VAR_RESULT, 12, MysteryGift_EventScript_Nuggets
	goto_if_eq VAR_RESULT, 13, MysteryGift_EventScript_Monotype_Bug
	goto_if_eq VAR_RESULT, 14, MysteryGift_EventScript_Monotype_Dark
	goto_if_eq VAR_RESULT, 15, MysteryGift_EventScript_Monotype_Dragon
	goto_if_eq VAR_RESULT, 16, MysteryGift_EventScript_Monotype_Electric
	goto_if_eq VAR_RESULT, 17, MysteryGift_EventScript_Monotype_Fairy
	goto_if_eq VAR_RESULT, 18, MysteryGift_EventScript_Monotype_Fighting
	goto_if_eq VAR_RESULT, 19, MysteryGift_EventScript_Monotype_Fire
	goto_if_eq VAR_RESULT, 20, MysteryGift_EventScript_Monotype_Flying
	goto_if_eq VAR_RESULT, 21, MysteryGift_EventScript_Monotype_Ghost
	goto_if_eq VAR_RESULT, 22, MysteryGift_EventScript_Monotype_Grass
	goto_if_eq VAR_RESULT, 23, MysteryGift_EventScript_Monotype_Ground
	goto_if_eq VAR_RESULT, 24, MysteryGift_EventScript_Monotype_Ice
	goto_if_eq VAR_RESULT, 25, MysteryGift_EventScript_Monotype_Normal
	goto_if_eq VAR_RESULT, 26, MysteryGift_EventScript_Monotype_Poison
	goto_if_eq VAR_RESULT, 27, MysteryGift_EventScript_Monotype_Psychic
	goto_if_eq VAR_RESULT, 28, MysteryGift_EventScript_Monotype_Rock
	goto_if_eq VAR_RESULT, 29, MysteryGift_EventScript_Monotype_Steel
	goto_if_eq VAR_RESULT, 30, MysteryGift_EventScript_Monotype_Water
	goto_if_eq VAR_RESULT, 31, MysteryGift_EventScript_IMissJohto
	goto_if_eq VAR_RESULT, 32, MysteryGift_EventScript_Ogerpon
	goto_if_eq VAR_RESULT, 33, MysteryGift_EventScript_Floette
	goto_if_eq VAR_RESULT, 34, MysteryGift_EventScript_Rockruff
	goto_if_eq VAR_RESULT, 35, MysteryGift_EventScript_Outfits
	goto_if_eq VAR_RESULT, 36, MysteryGift_EventScript_HyruleOutfit
	goto_if_eq VAR_RESULT, 37, MysteryGift_EventScript_ShowWildNatures
	goto_if_eq VAR_RESULT, 38, MysteryGift_EventScript_PortablePC
	goto_if_eq VAR_RESULT, 39, MysteryGift_EventScript_Mosey
	goto_if_eq VAR_RESULT, 40, MysteryGift_EventScript_BattlePass
	end

MysteryGift_Failed::
	msgbox MysteryGift_Text_FailedText, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MysteryGift_EventScript_Exit
	goto MysteryGift_EventScript_DoMysteryGift
	end

MysteryGift_EventScript_Redeemed::
	msgbox MysteryGift_Text_RedeemedText, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MysteryGift_EventScript_Exit
	goto MysteryGift_EventScript_DoMysteryGift
	end

MysteryGift_EventScript_CurrentlyUnavailable::
	msgbox MysteryGift_Text_CurrentlyUnavailable, MSGBOX_DEFAULT
	releaseall
	end

MysteryGift_EventScript_Exit::
	releaseall
	end

MysteryGift_EventScript_ReceivedMon::
	msgbox MysteryGift_Text_SucceededText, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message MysteryGift_Text_ReceivedGiftMon
	waitfanfare
    goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MysteryGift_EventScript_NicknamePartyMon
    goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MysteryGift_EventScript_TransferredToPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

MysteryGift_EventScript_NicknamePartyMon::
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MysteryGift_EventScript_Exit
	call Common_EventScript_GetGiftMonPartySlot 
	call Common_EventScript_NameReceivedPartyMon 
	goto MysteryGift_EventScript_Exit
	end

MysteryGift_EventScript_NicknamePCMon::
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO 
	goto_if_eq VAR_RESULT, NO, MysteryGift_EventScript_TransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	call Common_EventScript_TransferredToPC
	goto MysteryGift_EventScript_Exit
	end

MysteryGift_EventScript_TransferredToPC::
	msgbox gText_TransferredToPC
	goto MysteryGift_EventScript_Exit
	end

MysteryGift_EventScript_ShowWildNatures::
	setflag FLAG_UNLOCKED_WILD_NATURE_VIEW
	releaseall
	end

MysteryGift_EventScript_PortablePC::
	giveitem ITEM_POKEMON_BOX_LINK
	releaseall
	end

MysteryGift_EventScript_Mosey::
	bufferspeciesname STR_VAR_1, SPECIES_MEOWTH_ALOLAN
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MEOWTH_ALOLAN
	givemon SPECIES_MEOWTH_ALOLAN, 10, ITEM_EVIOLITE, ITEM_MOON_BALL, NATURE_ADAMANT, 1, MON_FEMALE, 6, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_COVET, MOVE_KNOCK_OFF, MOVE_PARTING_SHOT, MOVE_FAKE_OUT, FALSE, FALSE, TYPE_GHOST
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_BattlePass::
	additem ITEM_ASSAULT_VEST, 10
	additem ITEM_LEFTOVERS, 10
	additem ITEM_WISE_GLASSES, 10
	additem ITEM_MUSCLE_BAND, 10
	additem ITEM_CHOICE_SPECS, 10
	additem ITEM_CHOICE_BAND, 10
	additem ITEM_CHOICE_SCARF, 10
	additem ITEM_LIFE_ORB, 10
	additem ITEM_EVIOLITE, 10
	additem ITEM_FOCUS_SASH, 10
	additem ITEM_EXPERT_BELT, 10
	additem ITEM_AMULET_COIN, 10
	additem ITEM_FLAME_ORB, 10
	additem ITEM_TOXIC_ORB, 10
	msgbox MysteryGift_Text_BattlePass, MSGBOX_DEFAULT
	releaseall
	releaseall
	end

MysteryGift_EventScript_RareCandies::
	giveitem ITEM_RARE_CANDY, 999
	releaseall
	end

MysteryGift_EventScript_PerfectCatchRate::
	setflag FLAG_PERFECT_CATCH_RATE
	msgbox MysteryGift_Text_PerfectCatchRateText, MSGBOX_DEFAULT
	releaseall
	end

MysteryGift_EventScript_WorldChamp::
	bufferspeciesname STR_VAR_1, SPECIES_LITTEN
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LITTEN
	givemon SPECIES_LITTEN, 5, ITEM_SAFETY_GOGGLES, ITEM_PREMIER_BALL, NATURE_ADAMANT, 2, MON_MALE, 6, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_KNOCK_OFF, MOVE_FIRE_FANG, MOVE_PARTING_SHOT, MOVE_FAKE_OUT, FALSE, FALSE, TYPE_GHOST
	bufferspeciesname STR_VAR_1, SPECIES_POLIWAG
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_POLIWAG
	givemon SPECIES_POLIWAG, 5, ITEM_LEFTOVERS, ITEM_PREMIER_BALL, NATURE_MODEST, 2, MON_MALE, 252, 0, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_WEATHER_BALL, MOVE_PROTECT, MOVE_PERISH_SONG, MOVE_ENCORE, FALSE, FALSE, TYPE_GRASS
	bufferspeciesname STR_VAR_1, SPECIES_GOTHITA
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GOTHITA
	givemon SPECIES_GOTHITA, 5, ITEM_SITRUS_BERRY, ITEM_PREMIER_BALL, NATURE_CALM, 2, MON_FEMALE, 128, 0, 0, 252, 128, 0, 31, 31, 31, 31, 31, 31, MOVE_PSYCHIC, MOVE_FAKE_OUT, MOVE_PROTECT, MOVE_TRICK_ROOM, FALSE, FALSE, TYPE_DARK
	releaseall
	end

MysteryGift_EventScript_Girlypop::
	randomelement SPECIES_FLABEBE_RED_FLOWER, SPECIES_FLABEBE_WHITE_FLOWER, SPECIES_FLABEBE_BLUE_FLOWER, SPECIES_FLABEBE_ORANGE_FLOWER, SPECIES_FLABEBE_YELLOW_FLOWER, SPECIES_BOUNSWEET, SPECIES_DRATINI, SPECIES_CUFANT, SPECIES_APPLIN, SPECIES_FINIZEN, SPECIES_VULPIX_ALOLA, SPECIES_JIGGLYPUFF, SPECIES_TOGEPI, SPECIES_RALTS, SPECIES_MAWILE, SPECIES_DEDENNE, SPECIES_POPPLIO, SPECIES_TINKATINK, SPECIES_CUTIEFLY, SPECIES_SNORUNT, SPECIES_ZORUA_HISUI, SPECIES_PUMPKABOO, SPECIES_ORICORIO_SENSU, SPECIES_CORSOLA_GALAR, SPECIES_SEEL, SPECIES_LAPRAS, SPECIES_EEVEE, SPECIES_CLAMPERL, SPECIES_BRUXISH, SPECIES_POLIWAG, SPECIES_CHINCHOU, SPECIES_WOOPER, SPECIES_SPHEAL, SPECIES_FINNEON, SPECIES_PANPOUR, SPECIES_ZIGZAGOON_GALAR, SPECIES_AIPOM, SPECIES_SWABLU, SPECIES_LILLIPUP, SPECIES_STUFFUL, SPECIES_GIRAFARIG, SPECIES_FLITTLE, SPECIES_MUNNA, SPECIES_ORICORIO_PAU, SPECIES_WOOBAT, SPECIES_ROSELIA, SPECIES_FOMANTIS, SPECIES_HOPPIP, SPECIES_CHERUBI, SPECIES_ROWLET, SPECIES_TOEDSCOOL, SPECIES_WURMPLE, SPECIES_LILEEP, SPECIES_OMANYTE, SPECIES_KABUTO, SPECIES_LARVITAR, SPECIES_DWEBBLE, SPECIES_ARCHEN, SPECIES_ROCKRUFF, SPECIES_GROWLITHE_HISUI, SPECIES_VULPIX, SPECIES_FENNEKIN, SPECIES_ORICORIO_BAILE, SPECIES_NUMEL, SPECIES_LITTEN, SPECIES_MURKROW, SPECIES_VULLABY, SPECIES_IMPIDIMP, SPECIES_TOGEDEMARU, SPECIES_EKANS, SPECIES_SPINARAK, SPECIES_SNEASEL_HISUI, SPECIES_PHANPY, SPECIES_CUBONE, SPECIES_TRAPINCH, SPECIES_MUDBRAY, SPECIES_MAREEP, SPECIES_PAWMI, SPECIES_GOOMY, SPECIES_ORICORIO_POM_POM, SPECIES_DODUO, SPECIES_HOOTHOOT, SPECIES_MEDITITE, SPECIES_MIENFOO, SPECIES_MANKEY, SPECIES_SCRAGGY, SPECIES_PANCHAM, SPECIES_SANDILE, SPECIES_CHIKORITA, SPECIES_TOTODILE
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_RESULT
	givemon VAR_RESULT, 5
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_GiveAlolaStarters::
	bufferspeciesname STR_VAR_1, SPECIES_ROWLET
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ROWLET
	givemon SPECIES_ROWLET, 5
	@ call MysteryGift_EventScript_ReceivedMon
	bufferspeciesname STR_VAR_1, SPECIES_LITTEN
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LITTEN
	givemon SPECIES_LITTEN, 5
	@ call MysteryGift_EventScript_ReceivedMon
	bufferspeciesname STR_VAR_1, SPECIES_POPPLIO
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_POPPLIO
	givemon SPECIES_POPPLIO, 5
	@ call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_GiveKalosStarters::
	bufferspeciesname STR_VAR_1, SPECIES_CHESPIN
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHESPIN
	givemon SPECIES_CHESPIN, 5
	@ call MysteryGift_EventScript_ReceivedMon
	bufferspeciesname STR_VAR_1, SPECIES_FROAKIE
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_FROAKIE
	givemon SPECIES_FROAKIE, 5
	@ call MysteryGift_EventScript_ReceivedMon
	bufferspeciesname STR_VAR_1, SPECIES_FENNEKIN
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_FENNEKIN
	givemon SPECIES_FENNEKIN, 5
	@ call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_GiveUnovaStarters::
	bufferspeciesname STR_VAR_1, SPECIES_PANSAGE
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PANSAGE
	givemon SPECIES_PANSAGE, 5
	@ call MysteryGift_EventScript_ReceivedMon
	bufferspeciesname STR_VAR_1, SPECIES_PANPOUR
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PANPOUR
	givemon SPECIES_PANPOUR, 5
	@ call MysteryGift_EventScript_ReceivedMon
	bufferspeciesname STR_VAR_1, SPECIES_PANSEAR
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PANSEAR
	givemon SPECIES_PANSEAR, 5
	@ call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_GivePaldeaStarters::
	bufferspeciesname STR_VAR_1, SPECIES_SPRIGATITO
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SPRIGATITO
	givemon SPECIES_SPRIGATITO, 5
	@ call MysteryGift_EventScript_ReceivedMon
	bufferspeciesname STR_VAR_1, SPECIES_QUAXLY
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_QUAXLY
	givemon SPECIES_QUAXLY, 5
	@ call MysteryGift_EventScript_ReceivedMon
	bufferspeciesname STR_VAR_1, SPECIES_FUECOCO
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_FUECOCO
	givemon SPECIES_FUECOCO, 5
	@ call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_NemosFavs::
	randomelement SPECIES_ROWLET, SPECIES_LITTEN, SPECIES_POPPLIO, SPECIES_BRAIXEN, SPECIES_VULPIX, SPECIES_TOEDSCOOL, SPECIES_PUMPKABOO, SPECIES_CUFANT, SPECIES_SANDILE, SPECIES_BOUNSWEET, SPECIES_SHROODLE, SPECIES_DRATINI, SPECIES_ZORUA_HISUI, SPECIES_CRABRAWLER, SPECIES_BASCULIN_WHITE_STRIPED, SPECIES_GROWLITHE_HISUI, SPECIES_ARCHEN, SPECIES_IMPIDIMP, SPECIES_TRAPINCH, SPECIES_ANORITH, SPECIES_PAWMI, SPECIES_ROCKRUFF, SPECIES_CHIKORITA, SPECIES_CYNDAQUIL, SPECIES_TOTODILE, SPECIES_JANGMO_O, SPECIES_LITLEO
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_RESULT
	givemon VAR_RESULT, 5, ITEM_EVIOLITE
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_JustShowMe::
	setflag FLAG_SYS_SHOW_ALL_DEXNAV_MONS
	playfanfare MUS_OBTAIN_ITEM
	message MysteryGift_Text_SucceededText_DexNavCode
	waitfanfare
	releaseall
	end

MysteryGift_EventScript_WishingStars::
	giveitem ITEM_WISHING_STAR, 99
	releaseall
	end

MysteryGift_EventScript_Nuggets::
	giveitem ITEM_NUGGET, 99
	releaseall
	end

MysteryGift_EventScript_Monotype_Bug::
	randomelement SPECIES_SNOM, SPECIES_FALINKS, SPECIES_NINCADA, SPECIES_GRUBBIN, SPECIES_PARAS, SPECIES_CUTIEFLY, SPECIES_WURMPLE, SPECIES_HERACROSS, SPECIES_DWEBBLE, SPECIES_SKORUPI, SPECIES_SPINARAK, SPECIES_SCYTHER, SPECIES_ANORITH, SPECIES_YANMA, SPECIES_SIZZLIPEDE
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_RESULT
	givemon VAR_RESULT, 5
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_Monotype_Dark::
	randomelement SPECIES_MURKROW, SPECIES_GRIMER_ALOLAN, SPECIES_SNEASEL, SPECIES_MEOWTH_ALOLAN, SPECIES_VULLABY, SPECIES_HOUNDOUR, SPECIES_STUNKY, SPECIES_EKANS, SPECIES_SCRAGGY, SPECIES_ZIGZAGOON_GALAR, SPECIES_IMPIDIMP, SPECIES_SPIRITOMB
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_RESULT
	givemon VAR_RESULT, 5
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_Monotype_Dragon::
	randomelement SPECIES_DRACOZOLT, SPECIES_DRACOVISH, SPECIES_TYRUNT, SPECIES_DREEPY, SPECIES_GOOMY, SPECIES_DRATINI, SPECIES_APPLIN, SPECIES_JANGMO_O
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_RESULT
	givemon VAR_RESULT, 5
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_Monotype_Electric::
	randomelement SPECIES_DRACOZOLT, SPECIES_ARCTOZOLT, SPECIES_HELIOPTILE, SPECIES_MAREEP, SPECIES_VOLTORB, SPECIES_BLITZLE, SPECIES_PACHIRISU, SPECIES_YAMPER, SPECIES_PAWMI, SPECIES_TOGEDEMARU, SPECIES_DEDENNE, SPECIES_CHINCHOU, SPECIES_VOLTORB_HISUI, SPECIES_MAGNEMITE, SPECIES_ORICORIO_POM_POM
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_RESULT
	givemon VAR_RESULT, 5
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_Monotype_Fairy::
	randomelement SPECIES_COMFEY, SPECIES_PONYTA_GALARIAN, SPECIES_CUTIEFLY, SPECIES_RALTS, SPECIES_MAWILE, SPECIES_VULPIX, SPECIES_TOGEPI, SPECIES_VULPIX_ALOLA, SPECIES_FINNEON, SPECIES_DEDENNE, SPECIES_FLABEBE_RED_FLOWER, SPECIES_FLABEBE_WHITE_FLOWER, SPECIES_FLABEBE_BLUE_FLOWER, SPECIES_FLABEBE_ORANGE_FLOWER, SPECIES_FLABEBE_YELLOW_FLOWER, SPECIES_IGGLYBUFF, SPECIES_TINKATINK, SPECIES_IMPIDIMP, SPECIES_SWABLU
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_RESULT
	givemon VAR_RESULT, 5
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_Monotype_Fighting::
	randomelement SPECIES_FALINKS, SPECIES_TIMBURR, SPECIES_HERACROSS, SPECIES_MIENFOO, SPECIES_SNEASEL_HISUI, SPECIES_STUFFUL, SPECIES_CRABRAWLER, SPECIES_MEDITITE, SPECIES_PANCHAM, SPECIES_SCRAGGY, SPECIES_PASSIMIAN, SPECIES_MANKEY, SPECIES_HAWLUCHA
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_RESULT
	givemon VAR_RESULT, 5
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_Monotype_Fire::
	randomelement SPECIES_LITWICK, SPECIES_LITLEO, SPECIES_CHARCADET, SPECIES_FUECOCO, SPECIES_LITTEN, SPECIES_PONYTA, SPECIES_FENNEKIN, SPECIES_PANSEAR, SPECIES_ORICORIO_BAILE, SPECIES_VULPIX, SPECIES_SALANDIT, SPECIES_HOUNDOUR, SPECIES_TORKOAL, SPECIES_NUMEL, SPECIES_GROWLITHE_HISUI, SPECIES_CYNDAQUIL, SPECIES_SIZZLIPEDE
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_RESULT
	givemon VAR_RESULT, 5
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_Monotype_Flying::
	randomelement SPECIES_TROPIUS, SPECIES_NATU, SPECIES_WINGULL, SPECIES_GLIGAR, SPECIES_ORICORIO_BAILE, SPECIES_CHATOT, SPECIES_ORICORIO_PAU, SPECIES_ORICORIO_POM_POM, SPECIES_ORICORIO_SENSU, SPECIES_ROWLET, SPECIES_PIKIPEK, SPECIES_DUCKLETT, SPECIES_HOPPIP, SPECIES_MURKROW, SPECIES_VULLABY, SPECIES_WOOBAT, SPECIES_HOOTHOOT, SPECIES_MINIOR, SPECIES_SCYTHER, SPECIES_DODUO, SPECIES_SWABLU, SPECIES_YANMA, SPECIES_AERODACTYL, SPECIES_RUFFLET, SPECIES_ARCHEN, SPECIES_HAWLUCHA
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_RESULT
	givemon VAR_RESULT, 5
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_Monotype_Ghost::
	randomelement SPECIES_LITWICK, SPECIES_ORICORIO_SENSU, SPECIES_PUMPKABOO, SPECIES_SHUPPET, SPECIES_HONEDGE, SPECIES_GASTLY, SPECIES_ZORUA_HISUI, SPECIES_CORSOLA_GALAR, SPECIES_DUSKULL, SPECIES_DHELMISE, SPECIES_SPIRITOMB
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_RESULT
	givemon VAR_RESULT, 5
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_Monotype_Grass::
	randomelement SPECIES_COMFEY, SPECIES_TROPIUS, SPECIES_SPRIGATITO, SPECIES_APPLIN, SPECIES_BOUNSWEET, SPECIES_ROWLET, SPECIES_CHESPIN, SPECIES_PANSAGE, SPECIES_HOPPIP, SPECIES_PARAS, SPECIES_SKIDDO, SPECIES_PUMPKABOO, SPECIES_SHROOMISH, SPECIES_TOEDSCOOL, SPECIES_CHERUBI, SPECIES_LILEEP, SPECIES_FOMANTIS, SPECIES_VOLTORB_HISUI, SPECIES_BELLSPROUT, SPECIES_SNOVER, SPECIES_DHELMISE, SPECIES_CHIKORITA
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_RESULT
	givemon VAR_RESULT, 5
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_Monotype_Ground::
	randomelement SPECIES_BARBOACH, SPECIES_SWINUB, SPECIES_ONIX, SPECIES_GLIGAR, SPECIES_SANDILE, SPECIES_NINCADA, SPECIES_WOOPER_PALDEAN, SPECIES_PHANPY, SPECIES_CUBONE, SPECIES_MUDBRAY, SPECIES_SANDSHREW, SPECIES_WOOPER, SPECIES_TOEDSCOOL, SPECIES_BALTOY, SPECIES_TRAPINCH, SPECIES_DODUO, SPECIES_NUMEL, SPECIES_LARVITAR
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_RESULT
	givemon VAR_RESULT, 5
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_Monotype_Ice::
	randomelement SPECIES_ARCTOZOLT, SPECIES_ARCTOVISH, SPECIES_AMAURA, SPECIES_SNOM, SPECIES_SNORUNT, SPECIES_SNEASEL, SPECIES_SPHEAL, SPECIES_VULPIX_ALOLA, SPECIES_LAPRAS, SPECIES_CUBCHOO, SPECIES_SNOVER, SPECIES_SWINUB
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_RESULT
	givemon VAR_RESULT, 5
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_Monotype_Normal::
	randomelement SPECIES_TYPE_NULL, SPECIES_LITLEO, SPECIES_HELIOPTILE, SPECIES_CUFANT, SPECIES_STANTLER, SPECIES_KOMALA, SPECIES_CHATOT, SPECIES_MEOWTH, SPECIES_LILLIPUP, SPECIES_PIKIPEK, SPECIES_EEVEE, SPECIES_SHUPPET, SPECIES_AIPOM, SPECIES_HOOTHOOT, SPECIES_ZORUA_HISUI, SPECIES_SHROODLE, SPECIES_STUFFUL, SPECIES_IGGLYBUFF, SPECIES_KECLEON, SPECIES_ORANGURU, SPECIES_ZIGZAGOON_GALAR, SPECIES_GIRAFARIG, SPECIES_RUFFLET
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_RESULT
	givemon VAR_RESULT, 5
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_Monotype_Poison::
	randomelement SPECIES_GRIMER, SPECIES_GRIMER_ALOLAN, SPECIES_GASTLY, SPECIES_SALANDIT, SPECIES_SKORUPI, SPECIES_SPINARAK, SPECIES_SNEASEL_HISUI, SPECIES_SHROODLE, SPECIES_STUNKY, SPECIES_TENTACOOL, SPECIES_EKANS, SPECIES_SKRELP, SPECIES_BELLSPROUT
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_RESULT
	givemon VAR_RESULT, 5
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_Monotype_Psychic::
	randomelement SPECIES_UNOWN, SPECIES_NATU, SPECIES_SOLOSIS, SPECIES_GOTHITA, SPECIES_ORICORIO_PAU, SPECIES_PONYTA_GALARIAN, SPECIES_RALTS, SPECIES_WOOBAT, SPECIES_FLITTLE, SPECIES_BALTOY, SPECIES_BRONZOR, SPECIES_MEDITITE, SPECIES_DROWZEE, SPECIES_MUNNA, SPECIES_ORANGURU, SPECIES_BRUXISH, SPECIES_GIRAFARIG
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_RESULT
	givemon VAR_RESULT, 5
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_Monotype_Rock::
	randomelement SPECIES_TYRUNT, SPECIES_AERODACTYL, SPECIES_AMAURA, SPECIES_ONIX, SPECIES_NOSEPASS, SPECIES_RELICANTH, SPECIES_CORSOLA, SPECIES_ROCKRUFF, SPECIES_ARON, SPECIES_KLAWF, SPECIES_DWEBBLE, SPECIES_MINIOR, SPECIES_OMANYTE, SPECIES_KABUTO, SPECIES_CORSOLA_GALAR, SPECIES_LILEEP, SPECIES_ANORITH, SPECIES_GROWLITHE_HISUI, SPECIES_TIRTOUGA, SPECIES_ARCHEN, SPECIES_LARVITAR, SPECIES_SHIELDON, SPECIES_CRANIDOS
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_RESULT
	givemon VAR_RESULT, 5
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_Monotype_Steel::
	randomelement SPECIES_CUFANT, SPECIES_MAWILE, SPECIES_ARON, SPECIES_HONEDGE, SPECIES_BRONZOR, SPECIES_MEOWTH_GALAR, SPECIES_TOGEDEMARU, SPECIES_TINKATINK, SPECIES_MAGNEMITE
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_RESULT
	givemon VAR_RESULT, 5
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_Monotype_Water::
	randomelement SPECIES_DRACOVISH, SPECIES_ARCTOVISH, SPECIES_BARBOACH, SPECIES_CORPHISH, SPECIES_WINGULL, SPECIES_QUAXLY, SPECIES_FINIZEN, SPECIES_RELICANTH, SPECIES_POPPLIO, SPECIES_CORSOLA, SPECIES_FROAKIE, SPECIES_PANPOUR, SPECIES_DUCKLETT, SPECIES_POLIWAG, SPECIES_WOOPER, SPECIES_OMANYTE, SPECIES_KABUTO, SPECIES_SPHEAL, SPECIES_SEEL, SPECIES_BUIZEL, SPECIES_FINNEON, SPECIES_WAILMER, SPECIES_TENTACOOL, SPECIES_CLAUNCHER, SPECIES_BASCULIN_WHITE_STRIPED, SPECIES_SKRELP, SPECIES_CHINCHOU, SPECIES_SHELLDER, SPECIES_CLAMPERL, SPECIES_MAGIKARP, SPECIES_BRUXISH, SPECIES_LAPRAS, SPECIES_PSYDUCK, SPECIES_REMORAID, SPECIES_TIRTOUGA, SPECIES_TOTODILE
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_RESULT
	givemon VAR_RESULT, 5
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_IMissJohto::
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHIKORITA
	givemon SPECIES_CHIKORITA, 5
	@ call MysteryGift_EventScript_ReceivedMon
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CYNDAQUIL
	givemon SPECIES_CYNDAQUIL, 5
	@ call MysteryGift_EventScript_ReceivedMon
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TOTODILE
	givemon SPECIES_TOTODILE, 5
	@ call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_Ogerpon::
	giveitem ITEM_CORNERSTONE_MASK
	giveitem ITEM_WELLSPRING_MASK
	giveitem ITEM_HEARTHFLAME_MASK
	bufferspeciesname STR_VAR_1, SPECIES_OGERPON
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_OGERPON
	givemon SPECIES_OGERPON, 5
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_Floette::
	bufferspeciesname STR_VAR_1, SPECIES_FLOETTE_ETERNAL_FLOWER
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_FLOETTE_ETERNAL_FLOWER
	givemon SPECIES_FLOETTE_ETERNAL_FLOWER, 5
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_Rockruff::
	random 2 // stores 0 or 1 in VAR_RESULT, for random gender
	bufferspeciesname STR_VAR_1, SPECIES_ROCKRUFF
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ROCKRUFF
	givemon SPECIES_ROCKRUFF, 5, ITEM_NEVER_MELT_ICE, ITEM_MOON_BALL, NATURE_ADAMANT, 2, VAR_RESULT, 6, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_LEER, MOVE_SAND_ATTACK, MOVE_MOUNTAIN_GALE, TRUE, FALSE, TYPE_ICE
	call MysteryGift_EventScript_ReceivedMon
	releaseall
	end

MysteryGift_EventScript_Outfits::
	additem ITEM_OUTFIT_BOX
	toggleoutfit OUTFIT_CORAL, OUTFIT_TOGGLE_UNLOCK
	toggleoutfit OUTFIT_EAST_BLUE, OUTFIT_TOGGLE_UNLOCK
	toggleoutfit OUTFIT_TROPICS, OUTFIT_TOGGLE_UNLOCK
	toggleoutfit OUTFIT_TRADITIONAL, OUTFIT_TOGGLE_UNLOCK
	toggleoutfit OUTFIT_OLD_SOFOS, OUTFIT_TOGGLE_UNLOCK
	toggleoutfit OUTFIT_ZOOKEEPER, OUTFIT_TOGGLE_UNLOCK
	toggleoutfit OUTFIT_PETAL, OUTFIT_TOGGLE_UNLOCK
	toggleoutfit OUTFIT_PALATI, OUTFIT_TOGGLE_UNLOCK
	toggleoutfit OUTFIT_ANCIENT, OUTFIT_TOGGLE_UNLOCK
	toggleoutfit OUTFIT_JOHTO_FASHION, OUTFIT_TOGGLE_UNLOCK
	toggleoutfit OUTFIT_KALOS_FASHION, OUTFIT_TOGGLE_UNLOCK
	toggleoutfit OUTFIT_ALOLA_FASHION, OUTFIT_TOGGLE_UNLOCK
	toggleoutfit OUTFIT_PALDEA_FASHION, OUTFIT_TOGGLE_UNLOCK
	toggleoutfit OUTFIT_HYLIAN_FASHION, OUTFIT_TOGGLE_UNLOCK
	msgbox MysteryGift_Text_UnlockedOutfits
	closemessage
	releaseall
	end

MysteryGift_Text_UnlockedOutfits:
	.string "All Outfits have been unlocked!$"

MysteryGift_EventScript_HyruleOutfit::
	toggleoutfit OUTFIT_HYLIAN_FASHION, OUTFIT_TOGGLE_UNLOCK
	msgbox MysteryGift_Text_UnlockedHylianOutfit
	closemessage
	releaseall
	end

MysteryGift_Text_UnlockedHylianOutfit:
	.string "Hylian Outfit has been unlocked!$"


MysteryGift_Text_WelcomeToMysteryGiftSystem:
	.string "Hello, {PLAYER}!\p"
	.string "Welcome to the Pokémon Lazarus\n"
	.string "Cheat Code System!\p"
	.string "Would you like to enter a code?$"

MysteryGift_Text_CurrentlyUnavailable:
	.string "I'm sorry, but the Cheat Code System\n"
	.string "is currently unavailable.\p"
	.string "Please try again later.\p"
	.string "Thank you!$"

MysteryGift_Text_PleaseVisitAgain:
	.string "Please visit again!$"

MysteryGift_Text_EnterCode:
	.string "Please enter the code.$"

MysteryGift_Text_SucceededText:
	.string "The code was valid!\p"
	.string "Enjoy your time in Ilios!$"

MysteryGift_Text_SucceededText_DexNavCode:
	.string "The code was valid! POKéMON will\n"
	.string "all be shown in the DexNav menu!$"

MysteryGift_Text_PerfectCatchRateText:
	.string "The code was valid!\p"
	.string "Pokémon now have a 100% catch rate!$"

MysteryGift_Text_BattlePass:
	.string "The code was valid!\p"
	.string "Battle Items added to Bag!$"

MysteryGift_Text_FailedText:
	.string "The code was invalid!\p"
	.string "Would you like to enter a new code?$"

MysteryGift_Text_RedeemedText:
	.string "This code was already redeemed!\p"
	.string "Would you like you enter a new code?$"

MysteryGift_Text_ReceivedGiftMon:
	.string "{PLAYER} received a {STR_VAR_1}!$"

	.include "data/scripts/pc_transfer.inc"
	.include "data/scripts/questionnaire.inc"
	.include "data/scripts/abnormal_weather.inc"
	.include "data/scripts/trainer_script.inc"
	.include "data/scripts/berry_tree.inc"
	.include "data/scripts/secret_base.inc"
	.include "data/scripts/cable_club.inc"
	.include "data/text/cable_club.inc"
	.include "data/scripts/contest_hall.inc"
	.include "data/text/contest_strings.inc"
	.include "data/text/contest_link.inc"
	.include "data/text/contest_painting.inc"
	.include "data/text/trick_house_mechadolls.inc"
	.include "data/scripts/tv.inc"
	.include "data/text/tv.inc"
	.include "data/scripts/interview.inc"
	.include "data/scripts/gabby_and_ty.inc"
	.include "data/text/pokemon_news.inc"
	.include "data/scripts/mauville_man.inc"
	.include "data/scripts/field_move_scripts.inc"
	.include "data/scripts/item_ball_scripts.inc"
	.include "data/scripts/profile_man.inc"
	.include "data/scripts/day_care.inc"
	.include "data/scripts/flash.inc"
	.include "data/scripts/players_house.inc"
	.include "data/scripts/berry_blender.inc"
	.include "data/text/mauville_man.inc"
	.include "data/text/trainers.inc"
	.include "data/scripts/repel.inc"
	.include "data/scripts/safari_zone.inc"
	.include "data/scripts/roulette.inc"
	.include "data/text/pokedex_rating.inc"
	.include "data/text/lottery_corner.inc"
	.include "data/text/event_ticket_1.inc"
	.include "data/text/braille.inc"
	.include "data/text/berries.inc"
	.include "data/text/shoal_cave.inc"
	.include "data/text/check_furniture.inc"
	.include "data/scripts/cave_hole.inc"
	.include "data/scripts/lilycove_lady.inc"
	.include "data/text/match_call.inc"
	.include "data/scripts/apprentice.inc"
	.include "data/text/apprentice.inc"
	.include "data/text/battle_dome.inc"
	.include "data/scripts/battle_pike.inc"
	.include "data/text/blend_master.inc"
	.include "data/text/battle_tent.inc"
	.include "data/text/event_ticket_2.inc"
	.include "data/text/move_tutors.inc"
	.include "data/scripts/move_tutors.inc"
	.include "data/scripts/trainer_hill.inc"
	.include "data/scripts/test_signpost.inc"
	.include "data/scripts/follower.inc"
	.include "data/text/frontier_brain.inc"
	.include "data/text/save.inc"
	.include "data/text/birch_speech.inc"
    .include "data/scripts/dexnav.inc"
    

	.include "data/maps/AcrisiaCity/scripts.inc"

	.include "data/maps/AcrisiaCity_University/scripts.inc"

	.include "data/maps/AcrisiaCity_House1/scripts.inc"

	.include "data/maps/AcrisiaCity_House2/scripts.inc"

	.include "data/maps/AcrisiaCity_House3/scripts.inc"

	.include "data/maps/BronzePass_North/scripts.inc"

	.include "data/maps/BronzeFields_South/scripts.inc"

	.include "data/maps/JusmailTown/scripts.inc"

	.include "data/maps/JusmailTown_PokemonCenter/scripts.inc"

	.include "data/maps/AcrisiaMountains/scripts.inc"

	.include "data/maps/DiscusForge/scripts.inc"

	.include "data/maps/WanderersWoods/scripts.inc"

	.include "data/maps/PythiosTown/scripts.inc"

	.include "data/maps/PythiosCemetery/scripts.inc"

	.include "data/maps/ErinysPath_East/scripts.inc"

	.include "data/maps/ErinysPath_West/scripts.inc"

	.include "data/maps/FroslassCavern_TopFloor/scripts.inc"

	.include "data/maps/FroslassCavern_Floor2/scripts.inc"

	.include "data/maps/FroslassCavern_Floor3/scripts.inc"

	.include "data/maps/AsfalHills/scripts.inc"

	.include "data/maps/SofosCity/scripts.inc"

	.include "data/maps/SeaOfAsteri_West/scripts.inc"

	.include "data/maps/MarmaroIsland/scripts.inc"

	.include "data/maps/SeaOfAsteri_Central/scripts.inc"

	.include "data/maps/MyrriniIsland/scripts.inc"

	.include "data/maps/SeaOfVulcai_West/scripts.inc"

	.include "data/maps/SeaOfVulcai_Southwest/scripts.inc"

	.include "data/maps/FrescoIsland/scripts.inc"

	.include "data/maps/PalatiCity/scripts.inc"

	.include "data/maps/KaptaraIsland_East/scripts.inc"

	.include "data/maps/KaptaraIsland_West/scripts.inc"

	.include "data/maps/TheRattway/scripts.inc"

	.include "data/maps/PortPello/scripts.inc"

	.include "data/maps/NyxTrails/scripts.inc"

	.include "data/maps/AreiosHideout/scripts.inc"

	.include "data/maps/StygianCaves_F1/scripts.inc"

	.include "data/maps/StygianCaves_BF1/scripts.inc"

	.include "data/maps/ChampionsPeak_Outside/scripts.inc"

	.include "data/maps/ChampionsPeak_BattleRoom/scripts.inc"

	.include "data/maps/AcrisiaCity_House4/scripts.inc"

	.include "data/maps/AcrisiaCity_House5/scripts.inc"

	.include "data/maps/SofosCity_GameCorner/scripts.inc"

	.include "data/maps/JusmailTown_Gym/scripts.inc"

	.include "data/maps/AcrisiaCaves_BF1/scripts.inc"

	.include "data/maps/JusmailTown_House1/scripts.inc"

	.include "data/maps/JusmailTown_House2/scripts.inc"

	.include "data/maps/AcrisiaCity_PokemonCenter/scripts.inc"

	.include "data/maps/AcrisiaCity_Mart/scripts.inc"

	.include "data/maps/PythiosTown_PokemonCenter/scripts.inc"

	.include "data/maps/PythiosTown_Mart/scripts.inc"

	.include "data/maps/PythiosTown_House1/scripts.inc"

	.include "data/maps/PythiosTown_House2/scripts.inc"

	.include "data/maps/PythiosTown_Gym/scripts.inc"

	.include "data/maps/TheDelphis/scripts.inc"

	.include "data/maps/SecretBase_TheDelphisCabin/scripts.inc"

	.include "data/maps/TheDelphis_PlayerCabin/scripts.inc"

	.include "data/maps/RiverwalkTrail_West/scripts.inc"

	.include "data/maps/RiverwalkTrail_South/scripts.inc"

	.include "data/maps/KalamiCity/scripts.inc"

	.include "data/maps/KalamiCity_House1/scripts.inc"

	.include "data/maps/KalamiCity_House2/scripts.inc"

	.include "data/maps/KalamiCity_House3/scripts.inc"

	.include "data/maps/KalamiCity_House4/scripts.inc"

	.include "data/maps/KalamiCity_PokemonCenter/scripts.inc"

	.include "data/maps/KalamiCity_Mart/scripts.inc"

	.include "data/maps/KalamiCity_Gym/scripts.inc"

	.include "data/maps/AcrisiaMountain_Peak/scripts.inc"

	.include "data/maps/WanderersWoods_South/scripts.inc"

	.include "data/maps/AsfalHills_House1/scripts.inc"

	.include "data/maps/AsfalHills_House2/scripts.inc"

	.include "data/maps/AsfalHills_House3/scripts.inc"

	.include "data/maps/SatyrsLair/scripts.inc"

	.include "data/maps/SofosCity_PokemonCenter/scripts.inc"

	.include "data/maps/SofosCity_Mart/scripts.inc"

	.include "data/maps/SofosCity_Gym/scripts.inc"

	.include "data/maps/SofosCity_House1/scripts.inc"

	.include "data/maps/SofosCity_House2/scripts.inc"

	.include "data/maps/SofosCity_House3/scripts.inc"

	.include "data/maps/SofosCity_House4/scripts.inc"

	.include "data/maps/SofosCity_House5/scripts.inc"

	.include "data/maps/SofosCity_House6/scripts.inc"

	.include "data/maps/SofosCity_House7/scripts.inc"

	.include "data/maps/SofosCity_House8/scripts.inc"

	.include "data/maps/SofosCity_House9/scripts.inc"

	.include "data/maps/SofosCity_Acropolis/scripts.inc"

	.include "data/maps/SofosCity_ShardExchangeHouse/scripts.inc"

	.include "data/maps/KiposTown/scripts.inc"

	.include "data/maps/KiposTown_ConservationCenter/scripts.inc"

	.include "data/maps/KiposTown_Zoo/scripts.inc"

	.include "data/maps/KiposTown_ZooNorth/scripts.inc"

	.include "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.inc"

	.include "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.inc"

	.include "data/maps/KiposTown_PokemonCenter/scripts.inc"

	.include "data/maps/KiposTown_house1/scripts.inc"

	.include "data/maps/KiposTown_House2/scripts.inc"

	.include "data/maps/KiposTown_House3/scripts.inc"

	.include "data/maps/KiposTown_Mart/scripts.inc"

	.include "data/maps/LastlightRoad/scripts.inc"

	.include "data/maps/MarmaroIsland_PokemonCenter/scripts.inc"

	.include "data/maps/MarmaroIsland_House1/scripts.inc"

	.include "data/maps/MarmaroIsland_House2/scripts.inc"

	.include "data/maps/MarmaroIsland_House3/scripts.inc"

	.include "data/maps/MyrriniIsland_PokemonCenter/scripts.inc"

	.include "data/maps/MyrriniIsland_House1/scripts.inc"

	.include "data/maps/MyrriniIsland_House2/scripts.inc"

	.include "data/maps/MyrriniIsland_House3/scripts.inc"

	.include "data/maps/MyrriniIsland_House4/scripts.inc"

	.include "data/maps/MyrriniIsland_House5/scripts.inc"

	.include "data/maps/MyrriniIsland_Mart/scripts.inc"

	.include "data/maps/MyrriniIsland_Gym/scripts.inc"

	.include "data/maps/MarmaroMines/scripts.inc"

	.include "data/maps/SeaOfAsteri_Underwater/scripts.inc"

	.include "data/maps/SeaOfVulcai_Underwater/scripts.inc"

	.include "data/maps/SeaOfAsteri_Underwater_East/scripts.inc"

	.include "data/maps/PentepetalCity/scripts.inc"

	.include "data/maps/PentepetalCity_PokemonCenter/scripts.inc"

	.include "data/maps/PentepetalCity_Mart/scripts.inc"

	.include "data/maps/PentepetalCity_House1/scripts.inc"

	.include "data/maps/PentepetalCity_House2/scripts.inc"

	.include "data/maps/PentepetalCity_House3/scripts.inc"

	.include "data/maps/PentepetalCity_House4/scripts.inc"

	.include "data/maps/PentepetalCity_House5/scripts.inc"

	.include "data/maps/SunkenTemple/scripts.inc"

	.include "data/maps/FrescoIsles_PokemonCenter/scripts.inc"

	.include "data/maps/FrescoIsles_Mart/scripts.inc"

	.include "data/maps/FrescoIsles_House1/scripts.inc"

	.include "data/maps/FrescoIsles_House2/scripts.inc"

	.include "data/maps/FrescoIsles_House3/scripts.inc"

	.include "data/maps/FrescoIsles_Tailor/scripts.inc"

	.include "data/maps/FrescoIsles_AbandonedLab/scripts.inc"

	.include "data/maps/FrescoIsles_Gym/scripts.inc"

	.include "data/maps/PalatiCity_PokemonCenter/scripts.inc"

	.include "data/maps/PalatiCity_Mart/scripts.inc"

	.include "data/maps/PalatiCity_Gym/scripts.inc"

	.include "data/maps/PalatiCity_House1/scripts.inc"

	.include "data/maps/PalatiCity_House2/scripts.inc"

	.include "data/maps/PalatiCity_House3/scripts.inc"

	.include "data/maps/PalatiCity_ArchaeologyInstitute/scripts.inc"

	.include "data/maps/PalatiCity_House4/scripts.inc"

	.include "data/maps/PalatiCity_House5/scripts.inc"

	.include "data/maps/PalatiCity_House6/scripts.inc"

	.include "data/maps/PalatiCity_House7/scripts.inc"

	.include "data/maps/SatyrsLair_Deep/scripts.inc"

	.include "data/maps/TowerOfDioxippus/scripts.inc"

	.include "data/maps/TowerOfDioxippus_PokemonCenter/scripts.inc"

	.include "data/maps/TowerOfDioxippus_House1/scripts.inc"

	.include "data/maps/TowerOfDioxippus_House2/scripts.inc"

	.include "data/maps/TowerOfDioxippus_Building/scripts.inc"

	.include "data/maps/TowerOfDioxippus_Top/scripts.inc"

	.include "data/maps/PortPello_PokemonCenter/scripts.inc"

	.include "data/maps/PortPello_Mart/scripts.inc"

	.include "data/maps/PortPello_House1/scripts.inc"

	.include "data/maps/PortPello_House2/scripts.inc"

	.include "data/maps/PortPello_House3/scripts.inc"

	.include "data/maps/PortPello_House4/scripts.inc"

	.include "data/maps/AreiosHideout_Gym/scripts.inc"

	.include "data/maps/PollenRoad/scripts.inc"

	.include "data/maps/DavosiStraits/scripts.inc"

	.include "data/maps/RuinsOfAhiyawa/scripts.inc"

	.include "data/maps/RuinsOfAhiyawa_Lobby/scripts.inc"

	.include "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.inc"

	.include "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.inc"

	.include "data/maps/WakewaterIsle/scripts.inc"

	.include "data/maps/WakewaterIsle_PokemonCenter/scripts.inc"

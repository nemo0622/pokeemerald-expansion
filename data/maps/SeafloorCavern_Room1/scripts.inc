# 1 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_MapScripts::
# 3 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.byte 0
# 4 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 5 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_EventScript_Grunt1::
# 6 "data/maps/SeafloorCavern_Room1/scripts.pory"
	setvar VAR_MUGSHOT, MUGSHOT_AQUAGRUNTM
# 7 "data/maps/SeafloorCavern_Room1/scripts.pory"
	callnative DrawMugshot
# 8 "data/maps/SeafloorCavern_Room1/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, SeafloorCavern_Room1_Text_Grunt1Intro, SeafloorCavern_Room1_Text_Grunt1Defeat
# 9 "data/maps/SeafloorCavern_Room1/scripts.pory"
	msgbox_mugshot SeafloorCavern_Room1_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_AQUAGRUNTM
# 10 "data/maps/SeafloorCavern_Room1/scripts.pory"
	end
# 11 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 12 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_EventScript_Grunt2::
# 13 "data/maps/SeafloorCavern_Room1/scripts.pory"
	setvar VAR_MUGSHOT, MUGSHOT_AQUAGRUNTM
# 14 "data/maps/SeafloorCavern_Room1/scripts.pory"
	callnative DrawMugshot
# 15 "data/maps/SeafloorCavern_Room1/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, SeafloorCavern_Room1_Text_Grunt2Intro, SeafloorCavern_Room1_Text_Grunt2Defeat
# 16 "data/maps/SeafloorCavern_Room1/scripts.pory"
	msgbox_mugshot SeafloorCavern_Room1_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_AQUAGRUNTM
# 17 "data/maps/SeafloorCavern_Room1/scripts.pory"
	end
# 18 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 19 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1Intro:
# 20 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "We don't need a kid around!\n"
# 21 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Go on home already!$"
# 22 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 23 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1Defeat:
# 24 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "I want to go home…$"
# 25 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 26 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1PostBattle:
# 27 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "I want to get a promotion so I can\n"
# 28 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "boss around the GRUNTS…$"
# 29 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 30 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt2Intro:
# 31 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "That submarine… It's tiny inside.\n"
# 32 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "I'm sore all over!$"
# 33 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 34 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt2Defeat:
# 35 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Losing makes me sore!$"
# 36 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 37 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt2PostBattle:
# 38 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "That submarine we jacked, man,\n"
# 39 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "it's brutal as a ride.\l"
# 40 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "It's way too tight in there!$"

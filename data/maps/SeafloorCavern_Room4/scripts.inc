# 1 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_MapScripts::
# 3 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.byte 0
# 4 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 5 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_EventScript_Grunt3::
# 6 "data/maps/SeafloorCavern_Room4/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AQUAGRUNTM
# 7 "data/maps/SeafloorCavern_Room4/scripts.pory"
	callnative DrawMugshot
# 8 "data/maps/SeafloorCavern_Room4/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, SeafloorCavern_Room4_Text_Grunt3Intro, SeafloorCavern_Room4_Text_Grunt3Defeat
# 9 "data/maps/SeafloorCavern_Room4/scripts.pory"
	msgbox_mugshot SeafloorCavern_Room4_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_AQUAGRUNTM
# 10 "data/maps/SeafloorCavern_Room4/scripts.pory"
	end
# 11 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 12 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_EventScript_Grunt4::
# 13 "data/maps/SeafloorCavern_Room4/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AQUAGRUNTF
# 14 "data/maps/SeafloorCavern_Room4/scripts.pory"
	callnative DrawMugshot
# 15 "data/maps/SeafloorCavern_Room4/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, SeafloorCavern_Room4_Text_Grunt4Intro, SeafloorCavern_Room4_Text_Grunt4Defeat
# 16 "data/maps/SeafloorCavern_Room4/scripts.pory"
	msgbox_mugshot SeafloorCavern_Room4_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_AQUAGRUNTF
# 17 "data/maps/SeafloorCavern_Room4/scripts.pory"
	end
# 18 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 19 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt3Intro:
# 20 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Who are you?\n"
# 21 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Where did you come in from?$"
# 22 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 23 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt3Defeat:
# 24 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Lost it…$"
# 25 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 26 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt3PostBattle:
# 27 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "I can't find the way out!\p"
# 28 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "I'm not afraid. Don't get me wrong!$"
# 29 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 30 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt4Intro:
# 31 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Who are you?\n"
# 32 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Where do you think you're going?$"
# 33 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 34 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt4Defeat:
# 35 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "I failed to win!$"
# 36 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 37 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt4PostBattle:
# 38 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "My partner forgot the map in that\n"
# 39 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "submarine!\p"
# 40 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "How's that for being useless?$"

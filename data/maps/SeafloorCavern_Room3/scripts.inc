# 1 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_MapScripts::
# 3 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.byte 0
# 4 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 5 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_EventScript_Shelly::
# 6 "data/maps/SeafloorCavern_Room3/scripts.pory"
	setvar VAR_MUGSHOT, MUGSHOT_AQUAGRUNTF
# 7 "data/maps/SeafloorCavern_Room3/scripts.pory"
	callnative DrawMugshot
# 8 "data/maps/SeafloorCavern_Room3/scripts.pory"
	trainerbattle_single TRAINER_SHELLY_SEAFLOOR_CAVERN, SeafloorCavern_Room3_Text_ShellyIntro, SeafloorCavern_Room3_Text_ShellyDefeat
# 9 "data/maps/SeafloorCavern_Room3/scripts.pory"
	msgbox_mugshot SeafloorCavern_Room3_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_AQUAGRUNTF
# 10 "data/maps/SeafloorCavern_Room3/scripts.pory"
	end
# 11 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 12 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_EventScript_Grunt5::
# 13 "data/maps/SeafloorCavern_Room3/scripts.pory"
	setvar VAR_MUGSHOT, MUGSHOT_AQUAGRUNTM
# 14 "data/maps/SeafloorCavern_Room3/scripts.pory"
	callnative DrawMugshot
# 15 "data/maps/SeafloorCavern_Room3/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_5, SeafloorCavern_Room3_Text_Grunt5Intro, SeafloorCavern_Room3_Text_Grunt5Defeat
# 16 "data/maps/SeafloorCavern_Room3/scripts.pory"
	msgbox_mugshot SeafloorCavern_Room3_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_AQUAGRUNTM
# 17 "data/maps/SeafloorCavern_Room3/scripts.pory"
	end
# 18 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 19 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_Text_ShellyIntro:
# 20 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Ahahahaha!\p"
# 21 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "How did you manage to get here without\n"
# 22 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "a submarine?\l"
# 23 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "What an impressive child!\p"
# 24 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "But… It won't do to have you\n"
# 25 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "meddling about here.\p"
# 26 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "And, I do want payback for what\n"
# 27 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "happened at the WEATHER INSTITUTE…\p"
# 28 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "I'm going to give you a little taste\n"
# 29 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "of pain! Resign yourself to it!$"
# 30 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 31 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_Text_ShellyDefeat:
# 32 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Ahahahaha!\p"
# 33 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Ouch!$"
# 34 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 35 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_Text_ShellyPostBattle:
# 36 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Ahahahaha!\n"
# 37 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "You're so darn strong.\p"
# 38 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "It's terribly disappointing that you're\n"
# 39 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "not a TEAM AQUA member.\p"
# 40 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "You could have enjoyed the fabulous\n"
# 41 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "world our BOSS has promised as\l"
# 42 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "one of us…$"
# 43 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 44 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_Text_Grunt5Intro:
# 45 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "For our dream to become real, we need\n"
# 46 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "the power of POKéMON.\p"
# 47 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "But meddlers like you use the power of\n"
# 48 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "POKéMON to mess with us even at\l"
# 49 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "a place like this!\p"
# 50 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Life just doesn't work the way we\n"
# 51 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "need it to!$"
# 52 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 53 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_Text_Grunt5Defeat:
# 54 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Gwah!$"
# 55 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 56 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_Text_Grunt5PostBattle:
# 57 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "You know, we don't dare question\n"
# 58 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "the motives of our leader.\p"
# 59 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "But here you are, just some punk,\n"
# 60 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "going up against our BOSS.\p"
# 61 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Maybe…\n"
# 62 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "You must be something…$"

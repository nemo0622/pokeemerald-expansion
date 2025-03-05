AcrisiaCaves_BF1_MapScripts::
# 2 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AcrisiaCaves_BF1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AcrisiaCaves_BF1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 4 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 5 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 6 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 7 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 8 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 9 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 10 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 11 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 12 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 13 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 14 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 15 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	setobjectaswildencounter 3, ENCOUNTER_LAND
# 16 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	setobjectaswildencounter 4, ENCOUNTER_LAND
	return


AcrisiaPeak_EventScript_TryEvent::
# 22 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	setvar VAR_TEMP_1, 1
# 23 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIKE, AcrisiaPeak_EventScript_TryEvent_2
# 31 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	goto AcrisiaPeak_EventScript_GiveEspathraEvent
# 33 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	releaseall
	end

AcrisiaPeak_EventScript_TryEvent_2:
# 25 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_WANDER_AROUND
# 26 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	releaseall
	end


AcrisiaPeak_EventScript_GiveEspathraEvent::
# 39 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	lockall
# 40 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	delay 20
# 41 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	applymovement 2, AcrisiaPeak_Movement_EspathraRunsAround
# 43 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	waitmovement 2
# 44 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	delay 20
# 46 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaPeak_EventScript_GiveEspathraEvent_Text_0
# 47 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaPeak_EventScript_GiveEspathraEvent_Text_1
# 48 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 49 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	delay 30
# 50 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 51 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	waitmovement 0
# 52 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 53 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	waitmovement 0
# 55 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaPeak_EventScript_GiveEspathraEvent_Text_0
# 56 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaPeak_EventScript_GiveEspathraEvent_Text_2
# 57 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 58 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 59 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 60 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	applymovement 2, AcrisiaPeak_Movement_EspathraGreetsPlayer
# 61 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	waitmovement 2
# 63 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaPeak_EventScript_GiveEspathraEvent_Text_0
# 64 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaPeak_EventScript_GiveEspathraEvent_Text_3
# 65 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 66 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 67 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	waitmovement 0
# 68 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 69 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	waitmovement 0
# 70 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	delay 20
# 71 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaPeak_EventScript_GiveEspathraEvent_Text_0
# 72 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaPeak_EventScript_GiveEspathraEvent_Text_4
# 73 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 74 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	applymovement 2, AcrisiaPeak_Movement_EspathraJumpInAgreement
# 75 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	waitmovement 0
# 76 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	delay 10
# 77 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaPeak_EventScript_GiveEspathraEvent_Text_0
# 78 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaPeak_EventScript_GiveEspathraEvent_Text_5
# 79 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 80 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 81 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	waitmovement 0
# 82 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 83 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	waitmovement 0
# 85 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaPeak_EventScript_GiveEspathraEvent_Text_0
# 86 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaPeak_EventScript_GiveEspathraEvent_Text_6
# 87 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 88 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	giveitem ITEM_ESPATHRA_WHISTLE
# 89 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaPeak_EventScript_GiveEspathraEvent_Text_0
# 90 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaPeak_EventScript_GiveEspathraEvent_Text_7
# 91 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 93 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 94 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	delay 30
# 95 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	removeobject 2
# 96 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 97 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_WANDER_AROUND
# 98 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	delay 30
# 99 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 100 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	delay 30
# 101 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	releaseall
	end


# 104 "data/maps/AcrisiaCaves_BF1/scripts.pory"
AcrisiaPeak_Movement_EspathraRunsAround:
# 106 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	walk_fast_left
# 107 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	walk_fast_up
# 107 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	walk_fast_up
# 108 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	walk_fast_right
# 108 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	walk_fast_right
# 109 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	walk_fast_down
# 109 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	walk_fast_down
# 110 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	walk_fast_left
# 111 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	jump_in_place_up
# 111 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	jump_in_place_up
# 112 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	step_end

# 114 "data/maps/AcrisiaCaves_BF1/scripts.pory"
AcrisiaPeak_Movement_EspathraGreetsPlayer:
# 116 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	walk_fast_left
# 117 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	walk_fast_up
# 117 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	walk_fast_up
# 117 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	walk_fast_up
# 118 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	face_right
# 119 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	jump_in_place_right
# 119 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	jump_in_place_right
# 120 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	step_end

# 122 "data/maps/AcrisiaCaves_BF1/scripts.pory"
AcrisiaPeak_Movement_EspathraJumpInAgreement:
# 124 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	jump_in_place_down
# 124 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	jump_in_place_down
# 125 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	face_right
# 126 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	step_end

AcrisiaPeak_EventScript_Espathra::
# 131 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	lock
# 132 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	faceplayer
# 133 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaPeak_EventScript_Espathra_Text_0
# 134 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	playmoncry SPECIES_ESPATHRA, CRY_MODE_NORMAL
# 135 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaPeak_EventScript_Espathra_Text_1
# 136 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	waitmoncry
# 137 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 138 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaPeak_EventScript_Espathra_Text_2
# 139 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 140 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	release
	end


AcrisiaPeak_EventScript_Elder::
# 146 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	lock
# 147 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	faceplayer
# 148 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaPeak_EventScript_GiveEspathraEvent_Text_0
# 149 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaPeak_EventScript_Elder_Text_0
# 150 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 151 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	release
	end


AcrisiaPeak_EventScript_GiveEspathraEvent_Text_0:
# 46 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Elder$"

AcrisiaPeak_EventScript_GiveEspathraEvent_Text_1:
# 47 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Hush now, Espathra, great protector of\n"
	.string "the mountain! A Trainer will come soon\l"
	.string "to quell your thirst for adventure.$"

AcrisiaPeak_EventScript_GiveEspathraEvent_Text_2:
# 56 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Oho, and what do we have here? See,\n"
	.string "Espathra, it's just as I said. Come\l"
	.string "forth, young Trainer.$"

AcrisiaPeak_EventScript_GiveEspathraEvent_Text_3:
# 64 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "This Pokémon is special among its kind.\n"
	.string "It has lived among the mountains here\l"
	.string "since I was a child, refusing to enter a\l"
	.string "Poké ball and trusting few. Many have\l"
	.string "called it a threat, spreading rumors\l"
	.string "about a monster in the mountain, but it\l"
	.string "is wise in ways we can't comprehend.$"

AcrisiaPeak_EventScript_GiveEspathraEvent_Text_4:
# 72 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Great Espathra, is this the Trainer you\n"
	.string "wish to join?$"

AcrisiaPeak_EventScript_GiveEspathraEvent_Text_5:
# 78 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Fwahaha, okay, okay! You are free to\n"
	.string "join them and see the world. Be well,\l"
	.string "Espathra.$"

AcrisiaPeak_EventScript_GiveEspathraEvent_Text_6:
# 86 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "As I said, Espathra does not live in a\n"
	.string "Poké ball. This means it {COLOR GREEN}cannot be used\l"
	.string "in battle{COLOR DARK_GRAY}. Instead, it can be called at\l"
	.string "any time to be {COLOR GREEN}ridden across the Ilios\l"
	.string "Region{COLOR DARK_GRAY} as a loyal mount!\p"
	.string "Take this {COLOR GREEN}Whistle{COLOR DARK_GRAY}. You can use it to\n"
	.string "summon Espathra from anywhere in Ilios.$"

AcrisiaPeak_EventScript_GiveEspathraEvent_Text_7:
# 90 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Thank you, young Trainer. You're\n"
	.string "welcome to come visit me and my\l"
	.string "sanctuary again.$"

AcrisiaPeak_EventScript_Espathra_Text_0:
# 133 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Espathra$"

AcrisiaPeak_EventScript_Espathra_Text_1:
# 135 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Craah! Haaahh!$"

AcrisiaPeak_EventScript_Espathra_Text_2:
# 138 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Espathra seems raring to go!$"

AcrisiaPeak_EventScript_Elder_Text_0:
# 149 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "How is the great Espathra doing under\n"
	.string "your care? It may not battle for you on\l"
	.string "your quest for Gym Badges, but I hope\l"
	.string "it is helping in whatever way it can.$"

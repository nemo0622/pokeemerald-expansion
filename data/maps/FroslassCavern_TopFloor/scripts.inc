FroslassCavern_TopFloor_MapScripts::
# 2 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FroslassCavern_TopFloor_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FroslassCavern_TopFloor_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	setflashlevel 4
# 5 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 6 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 7 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 8 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 9 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 10 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 11 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 12 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 13 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 14 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 15 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 16 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 17 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	setobjectaswildencounter 6, ENCOUNTER_LAND
# 18 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	setobjectaswildencounter 7, ENCOUNTER_LAND
	return


FroslassCavern_F1_EventScript_Trainer_FroslassCavern_F1_Robin::
# 24 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	trainerbattle_single TRAINER_FROSLASSCAVERN_F1_ROBIN, FroslassCavern_F1_Text_Trainer_FroslassCavern_F1_RobinIntro, FroslassCavern_F1_Text_Trainer_FroslassCavern_F1_RobinDefeat
# 25 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	speakername FroslassCavern_F1_EventScript_Trainer_FroslassCavern_F1_Robin_Text_0
# 26 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	msgbox FroslassCavern_F1_EventScript_Trainer_FroslassCavern_F1_Robin_Text_1
# 27 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	closemessage
# 28 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	release
	end


FroslassCavern_F1_EventScript_Trainer_FroslassCavern_F1_Carmin::
# 42 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	trainerbattle_single TRAINER_FROSLASSCAVERN_F1_CARMIN, FroslassCavern_F1_Text_Trainer_FroslassCavern_F1_CarminIntro, FroslassCavern_F1_Text_Trainer_FroslassCavern_F1_CarminDefeat
# 43 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	speakername FroslassCavern_F1_EventScript_Trainer_FroslassCavern_F1_Carmin_Text_0
# 44 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	msgbox FroslassCavern_F1_EventScript_Trainer_FroslassCavern_F1_Carmin_Text_1
# 45 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	closemessage
# 46 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	release
	end


FroslassCavern_F1_EventScript_Trainer_FroslassCavern_F1_Ento::
# 60 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	trainerbattle_single TRAINER_FROSLASSCAVERN_F1_ENTO, FroslassCavern_F1_Text_Trainer_FroslassCavern_F1_EntoIntro, FroslassCavern_F1_Text_Trainer_FroslassCavern_F1_EntoDefeat
# 61 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	speakername FroslassCavern_F1_EventScript_Trainer_FroslassCavern_F1_Ento_Text_0
# 62 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	msgbox FroslassCavern_F1_EventScript_Trainer_FroslassCavern_F1_Ento_Text_1
# 63 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	closemessage
# 64 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	release
	end


FroslassCavern_F1_EventScript_Trainer_FroslassCavern_F1_Robin_Text_0:
# 25 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	.string "Robin$"

FroslassCavern_F1_EventScript_Trainer_FroslassCavern_F1_Robin_Text_1:
# 26 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	.string "I'm a Scientist, so I'm naturally a\n"
	.string "skeptic. But even I can't deny\l"
	.string "Ghost-type Pokémon!$"

FroslassCavern_F1_EventScript_Trainer_FroslassCavern_F1_Carmin_Text_0:
# 43 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	.string "Carmin$"

FroslassCavern_F1_EventScript_Trainer_FroslassCavern_F1_Carmin_Text_1:
# 44 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	.string "I got confused in the dark, so I\n"
	.string "thought you were a monster. I'm on\l"
	.string "guard!$"

FroslassCavern_F1_EventScript_Trainer_FroslassCavern_F1_Ento_Text_0:
# 61 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	.string "Ento$"

FroslassCavern_F1_EventScript_Trainer_FroslassCavern_F1_Ento_Text_1:
# 62 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	.string "I heard there's an Ice-type Bug\n"
	.string "Pokémon in the Ilios Region. Are they\l"
	.string "not found in the icy caves?$"

FroslassCavern_F1_Text_Trainer_FroslassCavern_F1_RobinIntro::
# 31 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	.string "People say a ghostly Froslass lives\n"
	.string "deep in this cave. I'm here to test\l"
	.string "those rumors!$"

FroslassCavern_F1_Text_Trainer_FroslassCavern_F1_RobinDefeat::
# 35 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	.string "Back to the drawing board.$"

FroslassCavern_F1_Text_Trainer_FroslassCavern_F1_CarminIntro::
# 49 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	.string "Hiya! I'll defeat you, evil demon!$"

FroslassCavern_F1_Text_Trainer_FroslassCavern_F1_CarminDefeat::
# 53 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	.string "Oh, you're not a demon! Sorry!$"

FroslassCavern_F1_Text_Trainer_FroslassCavern_F1_EntoIntro::
# 67 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	.string "None... not a one! Not a single bug in\n"
	.string "this cave!$"

FroslassCavern_F1_Text_Trainer_FroslassCavern_F1_EntoDefeat::
# 71 "data/maps/FroslassCavern_TopFloor/scripts.pory"
	.string "How disappointing. I'm only interested\n"
	.string "in Bug-type Pokémon.$"

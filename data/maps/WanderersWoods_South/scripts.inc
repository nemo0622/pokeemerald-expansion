WanderersWoods_South_MapScripts::
# 2 "data/maps/WanderersWoods_South/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WanderersWoods_South_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

WanderersWoods_South_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/WanderersWoods_South/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, WanderersWoods_South_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
WanderersWoods_South_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/WanderersWoods_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 9 "data/maps/WanderersWoods_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 10 "data/maps/WanderersWoods_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 11 "data/maps/WanderersWoods_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 12 "data/maps/WanderersWoods_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 13 "data/maps/WanderersWoods_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 14 "data/maps/WanderersWoods_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 15 "data/maps/WanderersWoods_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 16 "data/maps/WanderersWoods_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 17 "data/maps/WanderersWoods_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 18 "data/maps/WanderersWoods_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 19 "data/maps/WanderersWoods_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 20 "data/maps/WanderersWoods_South/scripts.pory"
	setobjectaswildencounter 9, ENCOUNTER_LAND
# 21 "data/maps/WanderersWoods_South/scripts.pory"
	setobjectaswildencounter 10, ENCOUNTER_LAND
# 22 "data/maps/WanderersWoods_South/scripts.pory"
	setobjectaswildencounter 11, ENCOUNTER_LAND
# 23 "data/maps/WanderersWoods_South/scripts.pory"
	setobjectaswildencounter 12, ENCOUNTER_LAND
# 24 "data/maps/WanderersWoods_South/scripts.pory"
	setobjectaswildencounter 13, ENCOUNTER_LAND
	return

WanderersWoods_South_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/WanderersWoods_South/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto WanderersWoods_South_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


WanderersWoods_S_EventScript_DirectionSign::
# 30 "data/maps/WanderersWoods_South/scripts.pory"
	lock
# 31 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_DirectionSign_Text_0
# 32 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 33 "data/maps/WanderersWoods_South/scripts.pory"
	release
	end


WanderersWoods_S_EventScript_UniversityStudentRouteCheck::
# 39 "data/maps/WanderersWoods_South/scripts.pory"
	lock
# 40 "data/maps/WanderersWoods_South/scripts.pory"
	faceplayer
# 41 "data/maps/WanderersWoods_South/scripts.pory"
	speakername WanderersWoods_S_EventScript_UniversityStudentRouteCheck_Text_0
# 43 "data/maps/WanderersWoods_South/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_WANDERERS_WOODS, WanderersWoods_S_EventScript_UniversityStudentRouteCheck_2
# 50 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_UniversityStudentRouteCheck_Text_2
# 51 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 52 "data/maps/WanderersWoods_South/scripts.pory"
	special CheckRouteCaptureProgress
# 53 "data/maps/WanderersWoods_South/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq WanderersWoods_S_EventScript_UniversityStudentRouteCheck_5
WanderersWoods_S_EventScript_UniversityStudentRouteCheck_1:
# 70 "data/maps/WanderersWoods_South/scripts.pory"
	release
	end

WanderersWoods_S_EventScript_UniversityStudentRouteCheck_2:
# 45 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_UniversityStudentRouteCheck_Text_1
# 46 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
	goto WanderersWoods_S_EventScript_UniversityStudentRouteCheck_1

WanderersWoods_S_EventScript_UniversityStudentRouteCheck_5:
# 55 "data/maps/WanderersWoods_South/scripts.pory"
	delay 20
# 56 "data/maps/WanderersWoods_South/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 57 "data/maps/WanderersWoods_South/scripts.pory"
	speakername WanderersWoods_S_EventScript_UniversityStudentRouteCheck_Text_0
# 58 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_UniversityStudentRouteCheck_Text_3
# 59 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 60 "data/maps/WanderersWoods_South/scripts.pory"
	delay 5
# 63 "data/maps/WanderersWoods_South/scripts.pory"
	giveitem ITEM_TM50
# 64 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 66 "data/maps/WanderersWoods_South/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_WANDERERS_WOODS
	goto WanderersWoods_S_EventScript_UniversityStudentRouteCheck_1


WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Yamir::
# 76 "data/maps/WanderersWoods_South/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_S_YAMIR, WanderersWoods_S_Text_Trainer_WanderersWoods_S_YamirIntro, WanderersWoods_S_Text_Trainer_WanderersWoods_S_YamirDefeat
# 77 "data/maps/WanderersWoods_South/scripts.pory"
	speakername WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Yamir_Text_0
# 78 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Yamir_Text_1
# 79 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 80 "data/maps/WanderersWoods_South/scripts.pory"
	release
	end


WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Warren::
# 94 "data/maps/WanderersWoods_South/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_S_WARREN, WanderersWoods_S_Text_Trainer_WanderersWoods_S_WarrenIntro, WanderersWoods_S_Text_Trainer_WanderersWoods_S_WarrenDefeat
# 95 "data/maps/WanderersWoods_South/scripts.pory"
	speakername WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Warren_Text_0
# 96 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Warren_Text_1
# 97 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 98 "data/maps/WanderersWoods_South/scripts.pory"
	release
	end


WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Duncan::
# 112 "data/maps/WanderersWoods_South/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_S_DUNCAN, WanderersWoods_S_Text_Trainer_WanderersWoods_S_DuncanIntro, WanderersWoods_S_Text_Trainer_WanderersWoods_S_DuncanDefeat
# 113 "data/maps/WanderersWoods_South/scripts.pory"
	speakername WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Duncan_Text_0
# 114 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Duncan_Text_1
# 115 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 116 "data/maps/WanderersWoods_South/scripts.pory"
	release
	end


WanderersWoods_S_EventScript_Lass::
# 130 "data/maps/WanderersWoods_South/scripts.pory"
	lock
# 131 "data/maps/WanderersWoods_South/scripts.pory"
	faceplayer
# 132 "data/maps/WanderersWoods_South/scripts.pory"
	speakername WanderersWoods_S_EventScript_Lass_Text_0
# 133 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_Lass_Text_1
# 134 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 135 "data/maps/WanderersWoods_South/scripts.pory"
	release
	end


WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Donna::
# 141 "data/maps/WanderersWoods_South/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_S_DONNA, WanderersWoods_S_Text_Trainer_WanderersWoods_S_DonnaIntro, WanderersWoods_S_Text_Trainer_WanderersWoods_S_DonnaDefeat
# 142 "data/maps/WanderersWoods_South/scripts.pory"
	speakername WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Donna_Text_0
# 143 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Donna_Text_1
# 144 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 145 "data/maps/WanderersWoods_South/scripts.pory"
	release
	end


WanderersWoods_S_EventScript_LittleBoy::
# 159 "data/maps/WanderersWoods_South/scripts.pory"
	lock
# 160 "data/maps/WanderersWoods_South/scripts.pory"
	faceplayer
# 161 "data/maps/WanderersWoods_South/scripts.pory"
	speakername WanderersWoods_S_EventScript_LittleBoy_Text_0
# 162 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_LittleBoy_Text_1
# 163 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 164 "data/maps/WanderersWoods_South/scripts.pory"
	release
	end


WanderersWoods_S_EventScript_DirectionSign_Text_0:
# 31 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Wanderers' Woods - South\n"
	.string "A Land of Ancient Shadows\p"
	.string "{UP_ARROW} Jusmail Town\n"
	.string "Pythios Town {DOWN_ARROW}$"

WanderersWoods_S_EventScript_UniversityStudentRouteCheck_Text_0:
# 41 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Uni. Student$"

WanderersWoods_S_EventScript_UniversityStudentRouteCheck_Text_1:
# 45 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

WanderersWoods_S_EventScript_UniversityStudentRouteCheck_Text_2:
# 50 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Chaire! I'm a student from the Acrisia\n"
	.string "University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in the Wanderer's Woods\l"
	.string "North and South sections. If you've\l"
	.string "caught all the Pokémon here, please let\l"
	.string "me know.$"

WanderersWoods_S_EventScript_UniversityStudentRouteCheck_Text_3:
# 58 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Yamir_Text_0:
# 77 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Yamir$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Yamir_Text_1:
# 78 "data/maps/WanderersWoods_South/scripts.pory"
	.string "I come into these woods to ponder.\n"
	.string "Seeing history and the power of time\l"
	.string "stirs something in me.$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Warren_Text_0:
# 95 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Warren$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Warren_Text_1:
# 96 "data/maps/WanderersWoods_South/scripts.pory"
	.string "The Ilios Region is home to some of the\n"
	.string "oldest sports competitions in the\l"
	.string "world. I have to be ready to do my best!$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Duncan_Text_0:
# 113 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Duncan$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Duncan_Text_1:
# 114 "data/maps/WanderersWoods_South/scripts.pory"
	.string "These ruins are an important part of\n"
	.string "the region's history. I don't want any\l"
	.string "wild Grafaiai or their Trainers touching\l"
	.string "them!$"

WanderersWoods_S_EventScript_Lass_Text_0:
# 132 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Lass$"

WanderersWoods_S_EventScript_Lass_Text_1:
# 133 "data/maps/WanderersWoods_South/scripts.pory"
	.string "The lands around Pythios Town have\n"
	.string "been inhabited for thousands of years.\l"
	.string "Some of these graves are so old, they're\l"
	.string "in a different language.$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Donna_Text_0:
# 142 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Donna$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Donna_Text_1:
# 143 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Some people think it's creepy, but I\n"
	.string "think this is the prettiest place on the\l"
	.string "mainland. Nothing beats Myrrini Island,\l"
	.string "though!$"

WanderersWoods_S_EventScript_LittleBoy_Text_0:
# 161 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Little Boy$"

WanderersWoods_S_EventScript_LittleBoy_Text_1:
# 162 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Some fence posts got put up along the\n"
	.string "tree lines here to keep people from\l"
	.string "getting lost! But when you get closer\l"
	.string "to Jusmail Town, the woods get a lot\l"
	.string "more confusing.$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_YamirIntro::
# 83 "data/maps/WanderersWoods_South/scripts.pory"
	.string "These overhead beam structures used\n"
	.string "to carry rainwater to other towns.\l"
	.string "Let's honor the past with a battle!$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_YamirDefeat::
# 87 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Fallen to ruin, just as the aqueducts\n"
	.string "have.$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_WarrenIntro::
# 101 "data/maps/WanderersWoods_South/scripts.pory"
	.string "I'm gonna ride across the entire Ilios\n"
	.string "Region!$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_WarrenDefeat::
# 105 "data/maps/WanderersWoods_South/scripts.pory"
	.string "I better ride down to a Pokémon Center.$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_DuncanIntro::
# 119 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Halt! Don't despoil these ancient ruins!$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_DuncanDefeat::
# 123 "data/maps/WanderersWoods_South/scripts.pory"
	.string "My mistake, you may pass.$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_DonnaIntro::
# 148 "data/maps/WanderersWoods_South/scripts.pory"
	.string "My hair looks great in the rain, don't\n"
	.string "you think?$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_DonnaDefeat::
# 152 "data/maps/WanderersWoods_South/scripts.pory"
	.string "It looks better than yours!$"

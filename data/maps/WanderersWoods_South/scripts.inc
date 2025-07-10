WanderersWoods_South_MapScripts::
	.byte 0


WanderersWoods_S_EventScript_DirectionSign::
# 5 "data/maps/WanderersWoods_South/scripts.pory"
	lock
# 6 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_DirectionSign_Text_0
# 7 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 8 "data/maps/WanderersWoods_South/scripts.pory"
	release
	end


WanderersWoods_S_EventScript_UniversityStudentRouteCheck::
# 14 "data/maps/WanderersWoods_South/scripts.pory"
	lock
# 15 "data/maps/WanderersWoods_South/scripts.pory"
	faceplayer
# 16 "data/maps/WanderersWoods_South/scripts.pory"
	speakername WanderersWoods_S_EventScript_UniversityStudentRouteCheck_Text_0
# 18 "data/maps/WanderersWoods_South/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_WANDERERS_WOODS, WanderersWoods_S_EventScript_UniversityStudentRouteCheck_2
# 25 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_UniversityStudentRouteCheck_Text_2
# 26 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 27 "data/maps/WanderersWoods_South/scripts.pory"
	special CheckRouteCaptureProgress
# 28 "data/maps/WanderersWoods_South/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq WanderersWoods_S_EventScript_UniversityStudentRouteCheck_5
WanderersWoods_S_EventScript_UniversityStudentRouteCheck_1:
# 45 "data/maps/WanderersWoods_South/scripts.pory"
	release
	end

WanderersWoods_S_EventScript_UniversityStudentRouteCheck_2:
# 20 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_UniversityStudentRouteCheck_Text_1
# 21 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
	goto WanderersWoods_S_EventScript_UniversityStudentRouteCheck_1

WanderersWoods_S_EventScript_UniversityStudentRouteCheck_5:
# 30 "data/maps/WanderersWoods_South/scripts.pory"
	delay 20
# 31 "data/maps/WanderersWoods_South/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 32 "data/maps/WanderersWoods_South/scripts.pory"
	speakername WanderersWoods_S_EventScript_UniversityStudentRouteCheck_Text_0
# 33 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_UniversityStudentRouteCheck_Text_3
# 34 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 35 "data/maps/WanderersWoods_South/scripts.pory"
	delay 5
# 38 "data/maps/WanderersWoods_South/scripts.pory"
	giveitem ITEM_TM50
# 39 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 41 "data/maps/WanderersWoods_South/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_WANDERERS_WOODS
	goto WanderersWoods_S_EventScript_UniversityStudentRouteCheck_1


WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Yamir::
# 51 "data/maps/WanderersWoods_South/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_S_YAMIR, WanderersWoods_S_Text_Trainer_WanderersWoods_S_YamirIntro, WanderersWoods_S_Text_Trainer_WanderersWoods_S_YamirDefeat
# 52 "data/maps/WanderersWoods_South/scripts.pory"
	speakername WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Yamir_Text_0
# 53 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Yamir_Text_1
# 54 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 55 "data/maps/WanderersWoods_South/scripts.pory"
	release
	end


WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Warren::
# 69 "data/maps/WanderersWoods_South/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_S_WARREN, WanderersWoods_S_Text_Trainer_WanderersWoods_S_WarrenIntro, WanderersWoods_S_Text_Trainer_WanderersWoods_S_WarrenDefeat
# 70 "data/maps/WanderersWoods_South/scripts.pory"
	speakername WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Warren_Text_0
# 71 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Warren_Text_1
# 72 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 73 "data/maps/WanderersWoods_South/scripts.pory"
	release
	end


WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Duncan::
# 87 "data/maps/WanderersWoods_South/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_S_DUNCAN, WanderersWoods_S_Text_Trainer_WanderersWoods_S_DuncanIntro, WanderersWoods_S_Text_Trainer_WanderersWoods_S_DuncanDefeat
# 88 "data/maps/WanderersWoods_South/scripts.pory"
	speakername WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Duncan_Text_0
# 89 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Duncan_Text_1
# 90 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 91 "data/maps/WanderersWoods_South/scripts.pory"
	release
	end


WanderersWoods_S_EventScript_Lass::
# 105 "data/maps/WanderersWoods_South/scripts.pory"
	lock
# 106 "data/maps/WanderersWoods_South/scripts.pory"
	faceplayer
# 107 "data/maps/WanderersWoods_South/scripts.pory"
	speakername WanderersWoods_S_EventScript_Lass_Text_0
# 108 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_Lass_Text_1
# 109 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 110 "data/maps/WanderersWoods_South/scripts.pory"
	release
	end


WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Donna::
# 116 "data/maps/WanderersWoods_South/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_S_DONNA, WanderersWoods_S_Text_Trainer_WanderersWoods_S_DonnaIntro, WanderersWoods_S_Text_Trainer_WanderersWoods_S_DonnaDefeat
# 117 "data/maps/WanderersWoods_South/scripts.pory"
	speakername WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Donna_Text_0
# 118 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Donna_Text_1
# 119 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 120 "data/maps/WanderersWoods_South/scripts.pory"
	release
	end


WanderersWoods_S_EventScript_LittleBoy::
# 134 "data/maps/WanderersWoods_South/scripts.pory"
	lock
# 135 "data/maps/WanderersWoods_South/scripts.pory"
	faceplayer
# 136 "data/maps/WanderersWoods_South/scripts.pory"
	speakername WanderersWoods_S_EventScript_LittleBoy_Text_0
# 137 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_LittleBoy_Text_1
# 138 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 139 "data/maps/WanderersWoods_South/scripts.pory"
	release
	end


WanderersWoods_S_EventScript_DirectionSign_Text_0:
# 6 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Wanderers' Woods - South\n"
	.string "A Land of Ancient Shadows\p"
	.string "{UP_ARROW} Jusmail Town\n"
	.string "Pythios Town {DOWN_ARROW}$"

WanderersWoods_S_EventScript_UniversityStudentRouteCheck_Text_0:
# 16 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Uni. Student$"

WanderersWoods_S_EventScript_UniversityStudentRouteCheck_Text_1:
# 20 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

WanderersWoods_S_EventScript_UniversityStudentRouteCheck_Text_2:
# 25 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Chaire! I'm a student from the Acrisia\n"
	.string "University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in the Wanderer's Woods\l"
	.string "North and South sections. If you've\l"
	.string "caught all the Pokémon here, please let\l"
	.string "me know.$"

WanderersWoods_S_EventScript_UniversityStudentRouteCheck_Text_3:
# 33 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Yamir_Text_0:
# 52 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Yamir$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Yamir_Text_1:
# 53 "data/maps/WanderersWoods_South/scripts.pory"
	.string "I come into these woods to ponder.\n"
	.string "Seeing history and the power of time\l"
	.string "stirs something in me.$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Warren_Text_0:
# 70 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Warren$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Warren_Text_1:
# 71 "data/maps/WanderersWoods_South/scripts.pory"
	.string "The Ilios Region is home to some of the\n"
	.string "oldest sports competitions in the\l"
	.string "world. I have to be ready to do my best!$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Duncan_Text_0:
# 88 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Duncan$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Duncan_Text_1:
# 89 "data/maps/WanderersWoods_South/scripts.pory"
	.string "These ruins are an important part of\n"
	.string "the region's history. I don't want any\l"
	.string "wild Grafaiai or their Trainers touching\l"
	.string "them!$"

WanderersWoods_S_EventScript_Lass_Text_0:
# 107 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Lass$"

WanderersWoods_S_EventScript_Lass_Text_1:
# 108 "data/maps/WanderersWoods_South/scripts.pory"
	.string "The lands around Pythios Town have\n"
	.string "been inhabited for thousands of years.\l"
	.string "Some of these graves are so old, they're\l"
	.string "in a different language.$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Donna_Text_0:
# 117 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Donna$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Donna_Text_1:
# 118 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Some people think it's creepy, but I\n"
	.string "think this is the prettiest place on the\l"
	.string "mainland. Nothing beats Myrrini Island,\l"
	.string "though!$"

WanderersWoods_S_EventScript_LittleBoy_Text_0:
# 136 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Little Boy$"

WanderersWoods_S_EventScript_LittleBoy_Text_1:
# 137 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Some fence posts got put up along the\n"
	.string "tree lines here to keep people from\l"
	.string "getting lost! But when you get closer\l"
	.string "to Jusmail Town, the woods get a lot\l"
	.string "more confusing.$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_YamirIntro::
# 58 "data/maps/WanderersWoods_South/scripts.pory"
	.string "These overhead beam structures used\n"
	.string "to carry rainwater to other towns.\l"
	.string "Let's honor the past with a battle!$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_YamirDefeat::
# 62 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Fallen to ruin, just as the aqueducts\n"
	.string "have.$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_WarrenIntro::
# 76 "data/maps/WanderersWoods_South/scripts.pory"
	.string "I'm gonna ride across the entire Ilios\n"
	.string "Region!$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_WarrenDefeat::
# 80 "data/maps/WanderersWoods_South/scripts.pory"
	.string "I better ride down to a Pokémon Center.$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_DuncanIntro::
# 94 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Halt! Don't despoil these ancient ruins!$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_DuncanDefeat::
# 98 "data/maps/WanderersWoods_South/scripts.pory"
	.string "My mistake, you may pass.$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_DonnaIntro::
# 123 "data/maps/WanderersWoods_South/scripts.pory"
	.string "My hair looks great in the rain, don't\n"
	.string "you think?$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_DonnaDefeat::
# 127 "data/maps/WanderersWoods_South/scripts.pory"
	.string "It looks better than yours!$"

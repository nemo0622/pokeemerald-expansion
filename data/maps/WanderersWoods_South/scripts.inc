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


WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Yamir::
# 14 "data/maps/WanderersWoods_South/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_S_YAMIR, WanderersWoods_S_Text_Trainer_WanderersWoods_S_YamirIntro, WanderersWoods_S_Text_Trainer_WanderersWoods_S_YamirDefeat
# 15 "data/maps/WanderersWoods_South/scripts.pory"
	speakername WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Yamir_Text_0
# 16 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Yamir_Text_1
# 17 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 18 "data/maps/WanderersWoods_South/scripts.pory"
	release
	end


WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Warren::
# 32 "data/maps/WanderersWoods_South/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_S_WARREN, WanderersWoods_S_Text_Trainer_WanderersWoods_S_WarrenIntro, WanderersWoods_S_Text_Trainer_WanderersWoods_S_WarrenDefeat
# 33 "data/maps/WanderersWoods_South/scripts.pory"
	speakername WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Warren_Text_0
# 34 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Warren_Text_1
# 35 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 36 "data/maps/WanderersWoods_South/scripts.pory"
	release
	end


WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Duncan::
# 50 "data/maps/WanderersWoods_South/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_S_DUNCAN, WanderersWoods_S_Text_Trainer_WanderersWoods_S_DuncanIntro, WanderersWoods_S_Text_Trainer_WanderersWoods_S_DuncanDefeat
# 51 "data/maps/WanderersWoods_South/scripts.pory"
	speakername WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Duncan_Text_0
# 52 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Duncan_Text_1
# 53 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 54 "data/maps/WanderersWoods_South/scripts.pory"
	release
	end


WanderersWoods_S_EventScript_Lass::
# 68 "data/maps/WanderersWoods_South/scripts.pory"
	lock
# 69 "data/maps/WanderersWoods_South/scripts.pory"
	faceplayer
# 70 "data/maps/WanderersWoods_South/scripts.pory"
	speakername WanderersWoods_S_EventScript_Lass_Text_0
# 71 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_Lass_Text_1
# 72 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 73 "data/maps/WanderersWoods_South/scripts.pory"
	release
	end


WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Donna::
# 79 "data/maps/WanderersWoods_South/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_S_DONNA, WanderersWoods_S_Text_Trainer_WanderersWoods_S_DonnaIntro, WanderersWoods_S_Text_Trainer_WanderersWoods_S_DonnaDefeat
# 80 "data/maps/WanderersWoods_South/scripts.pory"
	speakername WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Donna_Text_0
# 81 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Donna_Text_1
# 82 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 83 "data/maps/WanderersWoods_South/scripts.pory"
	release
	end


WanderersWoods_S_EventScript_LittleBoy::
# 97 "data/maps/WanderersWoods_South/scripts.pory"
	lock
# 98 "data/maps/WanderersWoods_South/scripts.pory"
	faceplayer
# 99 "data/maps/WanderersWoods_South/scripts.pory"
	speakername WanderersWoods_S_EventScript_LittleBoy_Text_0
# 100 "data/maps/WanderersWoods_South/scripts.pory"
	msgbox WanderersWoods_S_EventScript_LittleBoy_Text_1
# 101 "data/maps/WanderersWoods_South/scripts.pory"
	closemessage
# 102 "data/maps/WanderersWoods_South/scripts.pory"
	release
	end


WanderersWoods_S_EventScript_DirectionSign_Text_0:
# 6 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Wanderers' Woods - South\n"
	.string "A Land of Ancient Shadows\p"
	.string "{UP_ARROW} Jusmail Town\n"
	.string "Pythios Town {DOWN_ARROW}$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Yamir_Text_0:
# 15 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Yamir$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Yamir_Text_1:
# 16 "data/maps/WanderersWoods_South/scripts.pory"
	.string "I come into these woods to ponder.\n"
	.string "Seeing history and the power of time\l"
	.string "stirs something in me.$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Warren_Text_0:
# 33 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Warren$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Warren_Text_1:
# 34 "data/maps/WanderersWoods_South/scripts.pory"
	.string "The Ilios Region is home to some of the\n"
	.string "oldest sports competitions in the\l"
	.string "world. I have to be ready to do my best!$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Duncan_Text_0:
# 51 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Duncan$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Duncan_Text_1:
# 52 "data/maps/WanderersWoods_South/scripts.pory"
	.string "These ruins are an important part of\n"
	.string "the region's history. I don't want any\l"
	.string "wild Grafaiai or their Trainers touching\l"
	.string "them!$"

WanderersWoods_S_EventScript_Lass_Text_0:
# 70 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Lass$"

WanderersWoods_S_EventScript_Lass_Text_1:
# 71 "data/maps/WanderersWoods_South/scripts.pory"
	.string "The lands around Pythios Town have\n"
	.string "been inhabited for thousands of years.\l"
	.string "Some of these graves are so old, they're\l"
	.string "in a different language.$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Donna_Text_0:
# 80 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Donna$"

WanderersWoods_S_EventScript_Trainer_WanderersWoods_S_Donna_Text_1:
# 81 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Some people think it's creepy, but I\n"
	.string "think this is the prettiest place on the\l"
	.string "mainland. Nothing beats Myrrini Island,\l"
	.string "though!$"

WanderersWoods_S_EventScript_LittleBoy_Text_0:
# 99 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Little Boy$"

WanderersWoods_S_EventScript_LittleBoy_Text_1:
# 100 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Some fence posts got put up along the\n"
	.string "tree lines here to keep people from\l"
	.string "getting lost! But when you get closer\l"
	.string "to Jusmail Town, the woods get a lot\l"
	.string "more confusing.$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_YamirIntro::
# 21 "data/maps/WanderersWoods_South/scripts.pory"
	.string "These overhead beam structures used\n"
	.string "to carry rainwater to other towns.\l"
	.string "Let's honor the past with a battle!$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_YamirDefeat::
# 25 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Fallen to ruin, just as the aqueducts\n"
	.string "have.$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_WarrenIntro::
# 39 "data/maps/WanderersWoods_South/scripts.pory"
	.string "I'm gonna ride across the entire Ilios\n"
	.string "Region!$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_WarrenDefeat::
# 43 "data/maps/WanderersWoods_South/scripts.pory"
	.string "I better ride down to a Pokémon Center.$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_DuncanIntro::
# 57 "data/maps/WanderersWoods_South/scripts.pory"
	.string "Halt! Don't despoil these ancient ruins!$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_DuncanDefeat::
# 61 "data/maps/WanderersWoods_South/scripts.pory"
	.string "My mistake, you may pass.$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_DonnaIntro::
# 86 "data/maps/WanderersWoods_South/scripts.pory"
	.string "My hair looks great in the rain, don't\n"
	.string "you think?$"

WanderersWoods_S_Text_Trainer_WanderersWoods_S_DonnaDefeat::
# 90 "data/maps/WanderersWoods_South/scripts.pory"
	.string "It looks better than yours!$"

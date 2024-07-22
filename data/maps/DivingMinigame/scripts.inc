# 1 "data/maps/DivingMinigame/scripts.pory"

# 2 "data/maps/DivingMinigame/scripts.pory"
DivingMinigame_MapScripts::
# 3 "data/maps/DivingMinigame/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DivingMinigame_OnFrame
# 4 "data/maps/DivingMinigame/scripts.pory"
	.byte 0
# 5 "data/maps/DivingMinigame/scripts.pory"

# 6 "data/maps/DivingMinigame/scripts.pory"
DivingMinigame_OnFrame:
# 7 "data/maps/DivingMinigame/scripts.pory"
	map_script_2 VAR_DIVING_MINIGAME_STEP_COUNT, 201, DivingMinigame_Central_ScubaIntroduction
# 8 "data/maps/DivingMinigame/scripts.pory"
	.2byte 0

DivingMinigame_Central_ScubaIntroduction::
# 15 "data/maps/DivingMinigame/scripts.pory"
	turnplayer DIR_NORTH
# 16 "data/maps/DivingMinigame/scripts.pory"
	msgbox DivingMinigame_Central_ScubaIntroduction_Text_0
# 17 "data/maps/DivingMinigame/scripts.pory"
	closemessage
# 20 "data/maps/DivingMinigame/scripts.pory"
	applymovement 2, DivingMinigame_Movement_Competitor1LeaveIntro
# 21 "data/maps/DivingMinigame/scripts.pory"
	applymovement 3, DivingMinigame_Movement_Competitor2LeaveIntro
# 22 "data/maps/DivingMinigame/scripts.pory"
	applymovement 4, DivingMinigame_Movement_Competitor3LeaveIntro
# 23 "data/maps/DivingMinigame/scripts.pory"
	applymovement 5, DivingMinigame_Movement_Competitor4LeaveIntro
# 25 "data/maps/DivingMinigame/scripts.pory"
	delay 120
# 27 "data/maps/DivingMinigame/scripts.pory"
	fadescreen FADE_TO_BLACK
# 28 "data/maps/DivingMinigame/scripts.pory"
	delay 20
# 31 "data/maps/DivingMinigame/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_1_UNDERWATER_INTRO
# 32 "data/maps/DivingMinigame/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_2_UNDERWATER_INTRO
# 33 "data/maps/DivingMinigame/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_3_UNDERWATER_INTRO
# 34 "data/maps/DivingMinigame/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_4_UNDERWATER_INTRO
# 37 "data/maps/DivingMinigame/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_1, DivingMinigame_Central_ScubaIntroduction_2
DivingMinigame_Central_ScubaIntroduction_1:
# 42 "data/maps/DivingMinigame/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_2, DivingMinigame_Central_ScubaIntroduction_5
DivingMinigame_Central_ScubaIntroduction_4:
# 47 "data/maps/DivingMinigame/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_3, DivingMinigame_Central_ScubaIntroduction_8
DivingMinigame_Central_ScubaIntroduction_7:
# 52 "data/maps/DivingMinigame/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_4, DivingMinigame_Central_ScubaIntroduction_11
DivingMinigame_Central_ScubaIntroduction_10:
# 58 "data/maps/DivingMinigame/scripts.pory"
	setvar VAR_DIVING_MINIGAME_STEP_COUNT, 200
# 60 "data/maps/DivingMinigame/scripts.pory"
	delay 20
# 61 "data/maps/DivingMinigame/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 62 "data/maps/DivingMinigame/scripts.pory"
	delay 10
# 64 "data/maps/DivingMinigame/scripts.pory"
	release
	end

DivingMinigame_Central_ScubaIntroduction_2:
# 39 "data/maps/DivingMinigame/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_1_UNDERWATER
# 40 "data/maps/DivingMinigame/scripts.pory"
	removeobject 2
	goto DivingMinigame_Central_ScubaIntroduction_1

DivingMinigame_Central_ScubaIntroduction_5:
# 44 "data/maps/DivingMinigame/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_2_UNDERWATER
# 45 "data/maps/DivingMinigame/scripts.pory"
	removeobject 3
	goto DivingMinigame_Central_ScubaIntroduction_4

DivingMinigame_Central_ScubaIntroduction_8:
# 49 "data/maps/DivingMinigame/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_3_UNDERWATER
# 50 "data/maps/DivingMinigame/scripts.pory"
	removeobject 4
	goto DivingMinigame_Central_ScubaIntroduction_7

DivingMinigame_Central_ScubaIntroduction_11:
# 54 "data/maps/DivingMinigame/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_4_UNDERWATER
# 55 "data/maps/DivingMinigame/scripts.pory"
	removeobject 5
	goto DivingMinigame_Central_ScubaIntroduction_10


# 69 "data/maps/DivingMinigame/scripts.pory"
DivingMinigame_Movement_Competitor1LeaveIntro:
# 71 "data/maps/DivingMinigame/scripts.pory"
	walk_right
# 72 "data/maps/DivingMinigame/scripts.pory"
	walk_up
# 72 "data/maps/DivingMinigame/scripts.pory"
	walk_up
# 73 "data/maps/DivingMinigame/scripts.pory"
	walk_right
# 74 "data/maps/DivingMinigame/scripts.pory"
	walk_in_place_left
# 74 "data/maps/DivingMinigame/scripts.pory"
	walk_in_place_left
# 75 "data/maps/DivingMinigame/scripts.pory"
	walk_in_place_right
# 75 "data/maps/DivingMinigame/scripts.pory"
	walk_in_place_right
# 76 "data/maps/DivingMinigame/scripts.pory"
	emote_exclamation_mark
	step_end

# 79 "data/maps/DivingMinigame/scripts.pory"
DivingMinigame_Movement_Competitor2LeaveIntro:
# 81 "data/maps/DivingMinigame/scripts.pory"
	walk_right
# 81 "data/maps/DivingMinigame/scripts.pory"
	walk_right
# 82 "data/maps/DivingMinigame/scripts.pory"
	walk_down
# 82 "data/maps/DivingMinigame/scripts.pory"
	walk_down
# 82 "data/maps/DivingMinigame/scripts.pory"
	walk_down
# 83 "data/maps/DivingMinigame/scripts.pory"
	walk_right
# 84 "data/maps/DivingMinigame/scripts.pory"
	walk_down
# 84 "data/maps/DivingMinigame/scripts.pory"
	walk_down
# 84 "data/maps/DivingMinigame/scripts.pory"
	walk_down
	step_end

# 87 "data/maps/DivingMinigame/scripts.pory"
DivingMinigame_Movement_Competitor3LeaveIntro:
# 89 "data/maps/DivingMinigame/scripts.pory"
	walk_left
# 89 "data/maps/DivingMinigame/scripts.pory"
	walk_left
# 89 "data/maps/DivingMinigame/scripts.pory"
	walk_left
# 90 "data/maps/DivingMinigame/scripts.pory"
	walk_up
# 90 "data/maps/DivingMinigame/scripts.pory"
	walk_up
# 91 "data/maps/DivingMinigame/scripts.pory"
	walk_left
# 91 "data/maps/DivingMinigame/scripts.pory"
	walk_left
# 91 "data/maps/DivingMinigame/scripts.pory"
	walk_left
# 91 "data/maps/DivingMinigame/scripts.pory"
	walk_left
	step_end

# 94 "data/maps/DivingMinigame/scripts.pory"
DivingMinigame_Movement_Competitor4LeaveIntro:
# 96 "data/maps/DivingMinigame/scripts.pory"
	walk_up
# 97 "data/maps/DivingMinigame/scripts.pory"
	walk_left
# 98 "data/maps/DivingMinigame/scripts.pory"
	walk_in_place_up
# 99 "data/maps/DivingMinigame/scripts.pory"
	emote_question_mark
# 100 "data/maps/DivingMinigame/scripts.pory"
	walk_up
# 100 "data/maps/DivingMinigame/scripts.pory"
	walk_up
# 100 "data/maps/DivingMinigame/scripts.pory"
	walk_up
	step_end

DivingMinigame_EventScript_Rua::
# 105 "data/maps/DivingMinigame/scripts.pory"
	lock
# 106 "data/maps/DivingMinigame/scripts.pory"
	faceplayer
# 107 "data/maps/DivingMinigame/scripts.pory"
	msgbox DivingMinigame_EventScript_Rua_Text_0
# 108 "data/maps/DivingMinigame/scripts.pory"
	closemessage
# 109 "data/maps/DivingMinigame/scripts.pory"
	release
	end


DivingMinigame_EventScript_Pora::
# 115 "data/maps/DivingMinigame/scripts.pory"
	lock
# 116 "data/maps/DivingMinigame/scripts.pory"
	faceplayer
# 117 "data/maps/DivingMinigame/scripts.pory"
	msgbox DivingMinigame_EventScript_Pora_Text_0
# 118 "data/maps/DivingMinigame/scripts.pory"
	closemessage
# 119 "data/maps/DivingMinigame/scripts.pory"
	release
	end


DivingMinigame_EventScript_Taonga::
# 125 "data/maps/DivingMinigame/scripts.pory"
	lock
# 126 "data/maps/DivingMinigame/scripts.pory"
	faceplayer
# 127 "data/maps/DivingMinigame/scripts.pory"
	msgbox DivingMinigame_EventScript_Taonga_Text_0
# 128 "data/maps/DivingMinigame/scripts.pory"
	closemessage
# 129 "data/maps/DivingMinigame/scripts.pory"
	release
	end


DivingMinigame_EventScript_Taiko::
# 135 "data/maps/DivingMinigame/scripts.pory"
	lock
# 136 "data/maps/DivingMinigame/scripts.pory"
	faceplayer
# 137 "data/maps/DivingMinigame/scripts.pory"
	msgbox DivingMinigame_EventScript_Taiko_Text_0
# 138 "data/maps/DivingMinigame/scripts.pory"
	closemessage
# 139 "data/maps/DivingMinigame/scripts.pory"
	release
	end


DivingMinigame_Central_ScubaIntroduction_Text_0:
# 16 "data/maps/DivingMinigame/scripts.pory"
	.string "-bzzt bzzt...-\n"
	.string "Looks like our headsets are working!\p"
	.string "Everyone has {COLOR GREEN}200 tiles{COLOR DARK_GRAY} of swimming or\n"
	.string "{COLOR GREEN}five encounters{COLOR DARK_GRAY}, whichever comes first,\l"
	.string "to find a POKéMON to be scored!\p"
	.string "Remember, POKéMON that are healthier,\n"
	.string "higher leveled, and of course, rarer,\l"
	.string "score the best! Good luck out there!$"

DivingMinigame_EventScript_Rua_Text_0:
# 107 "data/maps/DivingMinigame/scripts.pory"
	.string "I thought I saw some treasure up here!\n"
	.string "Jeez, this water sure is chilly, though...$"

DivingMinigame_EventScript_Pora_Text_0:
# 117 "data/maps/DivingMinigame/scripts.pory"
	.string "Wow, look at these weird buildings! I\n"
	.string "can't wait to tell mommy about this!$"

DivingMinigame_EventScript_Taonga_Text_0:
# 127 "data/maps/DivingMinigame/scripts.pory"
	.string "I always come chase POKéMON in the\n"
	.string "shallows. If a POKéMON can live on land\l"
	.string "and in the sea, they must be pretty\l"
	.string "great!$"

DivingMinigame_EventScript_Taiko_Text_0:
# 137 "data/maps/DivingMinigame/scripts.pory"
	.string "Wow, the deep water around here sure is\n"
	.string "dark... I wonder what we'll find?$"

LastlightRoad_MapScripts::
# 2 "data/maps/LastlightRoad/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LastlightRoad_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LastlightRoad_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LastlightRoad/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, LastlightRoad_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
LastlightRoad_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/LastlightRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 9 "data/maps/LastlightRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 10 "data/maps/LastlightRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 11 "data/maps/LastlightRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 12 "data/maps/LastlightRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 13 "data/maps/LastlightRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 14 "data/maps/LastlightRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 15 "data/maps/LastlightRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 16 "data/maps/LastlightRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 17 "data/maps/LastlightRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 18 "data/maps/LastlightRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 19 "data/maps/LastlightRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 20 "data/maps/LastlightRoad/scripts.pory"
	setobjectaswildencounter 18, ENCOUNTER_LAND
# 21 "data/maps/LastlightRoad/scripts.pory"
	setobjectaswildencounter 19, ENCOUNTER_LAND
# 22 "data/maps/LastlightRoad/scripts.pory"
	setobjectaswildencounter 20, ENCOUNTER_LAND
# 23 "data/maps/LastlightRoad/scripts.pory"
	setobjectaswildencounter 21, ENCOUNTER_LAND
# 24 "data/maps/LastlightRoad/scripts.pory"
	setobjectaswildencounter 22, ENCOUNTER_LAND
# 26 "data/maps/LastlightRoad/scripts.pory"
	goto_if_set FLAG_HIDE_CHIMERA_AFTER_GROUDON, LastlightRoad_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 26 "data/maps/LastlightRoad/scripts.pory"
	goto_if_set FLAG_HIDE_CHIMERA_AFTER_KYOGRE, LastlightRoad_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

LastlightRoad_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/LastlightRoad/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto LastlightRoad_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LastlightRoad_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 28 "data/maps/LastlightRoad/scripts.pory"
	setflag FLAG_TEMP_5
	return

LastlightRoad_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 26 "data/maps/LastlightRoad/scripts.pory"
	goto_if_unset FLAG_HIDE_RAYQUAZA_DIOXIPPUS, LastlightRoad_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return


LastlightRoad_EventScript_ForceCheckKyogreGroudonCatch::
# 35 "data/maps/LastlightRoad/scripts.pory"
	lock
# 36 "data/maps/LastlightRoad/scripts.pory"
	setvar VAR_TEMP_6, 0
# 38 "data/maps/LastlightRoad/scripts.pory"
	goto_if_set FLAG_HIDE_CHIMERA_AFTER_GROUDON, LastlightRoad_EventScript_ForceCheckKyogreGroudonCatch_3
LastlightRoad_EventScript_ForceCheckKyogreGroudonCatch_1:
# 59 "data/maps/LastlightRoad/scripts.pory"
	compare VAR_TEMP_6, 1
	goto_if_ge LastlightRoad_EventScript_ForceCheckKyogreGroudonCatch_7
LastlightRoad_EventScript_ForceCheckKyogreGroudonCatch_6:
# 68 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 69 "data/maps/LastlightRoad/scripts.pory"
	releaseall
	end

LastlightRoad_EventScript_ForceCheckKyogreGroudonCatch_2:
# 40 "data/maps/LastlightRoad/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_LEGEND_OF_KYOGRE
# 41 "data/maps/LastlightRoad/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LastlightRoad_EventScript_ForceCheckKyogreGroudonCatch_10
LastlightRoad_EventScript_ForceCheckKyogreGroudonCatch_9:
# 49 "data/maps/LastlightRoad/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_LEGEND_OF_GROUDON
# 50 "data/maps/LastlightRoad/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LastlightRoad_EventScript_ForceCheckKyogreGroudonCatch_12
	goto LastlightRoad_EventScript_ForceCheckKyogreGroudonCatch_1

LastlightRoad_EventScript_ForceCheckKyogreGroudonCatch_3:
# 38 "data/maps/LastlightRoad/scripts.pory"
	goto_if_set FLAG_HIDE_CHIMERA_AFTER_KYOGRE, LastlightRoad_EventScript_ForceCheckKyogreGroudonCatch_2
	goto LastlightRoad_EventScript_ForceCheckKyogreGroudonCatch_1

LastlightRoad_EventScript_ForceCheckKyogreGroudonCatch_7:
# 62 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_ForceCheckKyogreGroudonCatch_Text_0
# 63 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 64 "data/maps/LastlightRoad/scripts.pory"
	setflag FLAG_CAUGHT_BOTH_WEATHER_LEGENDS
# 65 "data/maps/LastlightRoad/scripts.pory"
	removeobject 2
# 66 "data/maps/LastlightRoad/scripts.pory"
	removeobject 3
	goto LastlightRoad_EventScript_ForceCheckKyogreGroudonCatch_6

LastlightRoad_EventScript_ForceCheckKyogreGroudonCatch_10:
# 44 "data/maps/LastlightRoad/scripts.pory"
	addvar VAR_TEMP_6, 1
# 45 "data/maps/LastlightRoad/scripts.pory"
	delay 20
# 46 "data/maps/LastlightRoad/scripts.pory"
	completequest QUEST_LEGEND_OF_KYOGRE
	goto LastlightRoad_EventScript_ForceCheckKyogreGroudonCatch_9

LastlightRoad_EventScript_ForceCheckKyogreGroudonCatch_12:
# 53 "data/maps/LastlightRoad/scripts.pory"
	addvar VAR_TEMP_6, 1
# 54 "data/maps/LastlightRoad/scripts.pory"
	delay 20
# 55 "data/maps/LastlightRoad/scripts.pory"
	completequest QUEST_LEGEND_OF_GROUDON
	goto LastlightRoad_EventScript_ForceCheckKyogreGroudonCatch_1


LastlightRoad_EventScript_DirectionSign::
# 75 "data/maps/LastlightRoad/scripts.pory"
	lock
# 76 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_DirectionSign_Text_0
# 77 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 78 "data/maps/LastlightRoad/scripts.pory"
	release
	end


LastlightRoad_EventScript_Girl::
# 84 "data/maps/LastlightRoad/scripts.pory"
	lock
# 85 "data/maps/LastlightRoad/scripts.pory"
	faceplayer
# 86 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_Girl_Text_0
# 87 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_Girl_Text_1
# 88 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 89 "data/maps/LastlightRoad/scripts.pory"
	release
	end


LastlightRoad_EventScript_BugCatcher::
# 95 "data/maps/LastlightRoad/scripts.pory"
	lock
# 96 "data/maps/LastlightRoad/scripts.pory"
	faceplayer
# 97 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_BugCatcher_Text_0
# 98 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_BugCatcher_Text_1
# 99 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 100 "data/maps/LastlightRoad/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 101 "data/maps/LastlightRoad/scripts.pory"
	waitmovement 0
# 102 "data/maps/LastlightRoad/scripts.pory"
	release
	end


LastlightRoad_EventScript_Scyther::
# 108 "data/maps/LastlightRoad/scripts.pory"
	lock
# 109 "data/maps/LastlightRoad/scripts.pory"
	faceplayer
# 110 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_Scyther_Text_0
# 111 "data/maps/LastlightRoad/scripts.pory"
	playmoncry SPECIES_SCYTHER, CRY_MODE_NORMAL
# 112 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_Scyther_Text_1
# 113 "data/maps/LastlightRoad/scripts.pory"
	waitmoncry
# 114 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 115 "data/maps/LastlightRoad/scripts.pory"
	release
	end


LastlightRoad_Trigger_ScytherGoesWild::
# 121 "data/maps/LastlightRoad/scripts.pory"
	lockall
# 122 "data/maps/LastlightRoad/scripts.pory"
	ballfollowingmon
# 123 "data/maps/LastlightRoad/scripts.pory"
	applymovement 3, Common_Movement_JumpInPlaceUp
# 124 "data/maps/LastlightRoad/scripts.pory"
	waitmovement 0
# 125 "data/maps/LastlightRoad/scripts.pory"
	delay 10
# 126 "data/maps/LastlightRoad/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 127 "data/maps/LastlightRoad/scripts.pory"
	waitmovement 0
# 128 "data/maps/LastlightRoad/scripts.pory"
	delay 10
# 129 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_BugCatcher_Text_0
# 130 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_Trigger_ScytherGoesWild_Text_0
# 131 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 132 "data/maps/LastlightRoad/scripts.pory"
	delay 10
# 133 "data/maps/LastlightRoad/scripts.pory"
	applymovement 3, LastlightRoad_Movement_ScytherRunsAround
# 134 "data/maps/LastlightRoad/scripts.pory"
	waitmovement 0
# 135 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_BugCatcher_Text_0
# 136 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_Trigger_ScytherGoesWild_Text_1
# 137 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 138 "data/maps/LastlightRoad/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 139 "data/maps/LastlightRoad/scripts.pory"
	waitmovement 0
# 140 "data/maps/LastlightRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 141 "data/maps/LastlightRoad/scripts.pory"
	waitmovement 0
# 142 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_BugCatcher_Text_0
# 143 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_Trigger_ScytherGoesWild_Text_2
# 144 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 145 "data/maps/LastlightRoad/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 146 "data/maps/LastlightRoad/scripts.pory"
	waitmovement 0
# 147 "data/maps/LastlightRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 148 "data/maps/LastlightRoad/scripts.pory"
	waitmovement 0
# 149 "data/maps/LastlightRoad/scripts.pory"
	releaseall
	end


# 152 "data/maps/LastlightRoad/scripts.pory"
LastlightRoad_Movement_ScytherRunsAround:
# 154 "data/maps/LastlightRoad/scripts.pory"
	walk_right
# 155 "data/maps/LastlightRoad/scripts.pory"
	walk_down
# 156 "data/maps/LastlightRoad/scripts.pory"
	jump_in_place_down
# 156 "data/maps/LastlightRoad/scripts.pory"
	jump_in_place_down
# 157 "data/maps/LastlightRoad/scripts.pory"
	walk_left
# 158 "data/maps/LastlightRoad/scripts.pory"
	jump_in_place_up
# 158 "data/maps/LastlightRoad/scripts.pory"
	jump_in_place_up
# 159 "data/maps/LastlightRoad/scripts.pory"
	walk_left
# 160 "data/maps/LastlightRoad/scripts.pory"
	walk_up
# 161 "data/maps/LastlightRoad/scripts.pory"
	walk_right
# 161 "data/maps/LastlightRoad/scripts.pory"
	walk_right
# 162 "data/maps/LastlightRoad/scripts.pory"
	walk_down
# 163 "data/maps/LastlightRoad/scripts.pory"
	walk_left
# 163 "data/maps/LastlightRoad/scripts.pory"
	walk_left
# 164 "data/maps/LastlightRoad/scripts.pory"
	walk_up
# 165 "data/maps/LastlightRoad/scripts.pory"
	walk_right
# 166 "data/maps/LastlightRoad/scripts.pory"
	jump_in_place_up
# 166 "data/maps/LastlightRoad/scripts.pory"
	jump_in_place_up
# 167 "data/maps/LastlightRoad/scripts.pory"
	face_up
# 168 "data/maps/LastlightRoad/scripts.pory"
	step_end

LastlightRoad_EventScript_Trainer_Lastlight_Harley::
# 173 "data/maps/LastlightRoad/scripts.pory"
	trainerbattle_single TRAINER_LASTLIGHT_HARLEY, LastlightRoad_Text_Trainer_Lastlight_HarleyIntro, LastlightRoad_Text_Trainer_Lastlight_HarleyDefeat
# 174 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_Trainer_Lastlight_Harley_Text_0
# 175 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_Trainer_Lastlight_Harley_Text_1
# 176 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 177 "data/maps/LastlightRoad/scripts.pory"
	release
	end


LastlightRoad_EventScript_Trainer_Lastlight_Billie::
# 191 "data/maps/LastlightRoad/scripts.pory"
	trainerbattle_single TRAINER_LASTLIGHT_BILLIE, LastlightRoad_Text_Trainer_Lastlight_BillieIntro, LastlightRoad_Text_Trainer_Lastlight_BillieDefeat
# 192 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_Trainer_Lastlight_Billie_Text_0
# 193 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_Trainer_Lastlight_Billie_Text_1
# 194 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 195 "data/maps/LastlightRoad/scripts.pory"
	release
	end


LastlightRoad_EventScript_Trainer_Lastlight_Zoey::
# 209 "data/maps/LastlightRoad/scripts.pory"
	trainerbattle_single TRAINER_LASTLIGHT_ZOEY, LastlightRoad_Text_Trainer_Lastlight_ZoeyIntro, LastlightRoad_Text_Trainer_Lastlight_ZoeyDefeat
# 210 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_Trainer_Lastlight_Zoey_Text_0
# 211 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_Trainer_Lastlight_Zoey_Text_1
# 212 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 213 "data/maps/LastlightRoad/scripts.pory"
	release
	end


LastlightRoad_EventScript_Trainer_Lastlight_Phallon::
# 227 "data/maps/LastlightRoad/scripts.pory"
	trainerbattle_single TRAINER_LASTLIGHT_PHALLON, LastlightRoad_Text_Trainer_Lastlight_PhallonIntro, LastlightRoad_Text_Trainer_Lastlight_PhallonDefeat
# 228 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_Trainer_Lastlight_Phallon_Text_0
# 229 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_Trainer_Lastlight_Phallon_Text_1
# 230 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 231 "data/maps/LastlightRoad/scripts.pory"
	release
	end


LastlightRoad_EventScript_Trainer_Lastlight_Nikitas::
# 245 "data/maps/LastlightRoad/scripts.pory"
	trainerbattle_single TRAINER_LASTLIGHT_NIKITAS, LastlightRoad_Text_Trainer_Lastlight_NikitasIntro, LastlightRoad_Text_Trainer_Lastlight_NikitasDefeat
# 246 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_Trainer_Lastlight_Nikitas_Text_0
# 247 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_Trainer_Lastlight_Nikitas_Text_1
# 248 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 249 "data/maps/LastlightRoad/scripts.pory"
	release
	end


LastlightRoad_EventScript_Trainer_Lastlight_Loukas::
# 263 "data/maps/LastlightRoad/scripts.pory"
	trainerbattle_single TRAINER_LASTLIGHT_LOUKAS, LastlightRoad_Text_Trainer_Lastlight_LoukasIntro, LastlightRoad_Text_Trainer_Lastlight_LoukasDefeat
# 264 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_Trainer_Lastlight_Loukas_Text_0
# 265 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_Trainer_Lastlight_Loukas_Text_1
# 266 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 267 "data/maps/LastlightRoad/scripts.pory"
	release
	end


LastlightRoad_EventScript_UniversityStudentRouteCheck::
# 281 "data/maps/LastlightRoad/scripts.pory"
	lock
# 282 "data/maps/LastlightRoad/scripts.pory"
	faceplayer
# 283 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_UniversityStudentRouteCheck_Text_0
# 285 "data/maps/LastlightRoad/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_LASTLIGHT_ROAD, LastlightRoad_EventScript_UniversityStudentRouteCheck_2
# 292 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_UniversityStudentRouteCheck_Text_2
# 293 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 294 "data/maps/LastlightRoad/scripts.pory"
	special CheckRouteCaptureProgress
# 295 "data/maps/LastlightRoad/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LastlightRoad_EventScript_UniversityStudentRouteCheck_5
LastlightRoad_EventScript_UniversityStudentRouteCheck_1:
# 313 "data/maps/LastlightRoad/scripts.pory"
	release
	end

LastlightRoad_EventScript_UniversityStudentRouteCheck_2:
# 287 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_UniversityStudentRouteCheck_Text_1
# 288 "data/maps/LastlightRoad/scripts.pory"
	closemessage
	goto LastlightRoad_EventScript_UniversityStudentRouteCheck_1

LastlightRoad_EventScript_UniversityStudentRouteCheck_5:
# 297 "data/maps/LastlightRoad/scripts.pory"
	delay 20
# 298 "data/maps/LastlightRoad/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 299 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_UniversityStudentRouteCheck_Text_0
# 300 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_UniversityStudentRouteCheck_Text_3
# 301 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 302 "data/maps/LastlightRoad/scripts.pory"
	delay 5
# 305 "data/maps/LastlightRoad/scripts.pory"
	giveitem ITEM_TIMER_BALL, 20
# 306 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 307 "data/maps/LastlightRoad/scripts.pory"
	delay 5
# 309 "data/maps/LastlightRoad/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_LASTLIGHT_ROAD
	goto LastlightRoad_EventScript_UniversityStudentRouteCheck_1


LastlightRoad_EventScript_ForceCheckKyogreGroudonCatch_Text_0:
# 62 "data/maps/LastlightRoad/scripts.pory"
	.string "Kyogre and Groudon have both been\n"
	.string "safely kept from Team Chimera! All that\l"
	.string "remains is {COLOR GREEN}Rayquaza{COLOR DARK_GRAY}, chased down by\l"
	.string "{COLOR RED}Kalliope{COLOR DARK_GRAY}, at the {COLOR GREEN}Tower of Dioxippus{COLOR DARK_GRAY}.$"

LastlightRoad_EventScript_DirectionSign_Text_0:
# 76 "data/maps/LastlightRoad/scripts.pory"
	.string "Lastlight Road\n"
	.string "Where Torches Burn Forever\p"
	.string "{UP_ARROW} Kipos Town\n"
	.string "{DOWN_ARROW} Tower of Dioxippus$"

LastlightRoad_EventScript_Girl_Text_0:
# 86 "data/maps/LastlightRoad/scripts.pory"
	.string "Battle Girl$"

LastlightRoad_EventScript_Girl_Text_1:
# 87 "data/maps/LastlightRoad/scripts.pory"
	.string "In ancient times, people from all over\n"
	.string "the Ilios Region used to travel down\l"
	.string "this road. The Tower at the end of the\l"
	.string "path was a sacred site, where rituals\l"
	.string "and competitions took place under the\l"
	.string "eyes of the gods.\p"
	.string "Not many people walk this way now,\n"
	.string "though. I would've loved to compete in\l"
	.string "an ancient battle there!$"

LastlightRoad_EventScript_BugCatcher_Text_0:
# 97 "data/maps/LastlightRoad/scripts.pory"
	.string "Bug Catcher$"

LastlightRoad_EventScript_BugCatcher_Text_1:
# 98 "data/maps/LastlightRoad/scripts.pory"
	.string "I sure am sorry about my Scyther acting\n"
	.string "up. It's too high leveled for me to\l"
	.string "control it!$"

LastlightRoad_EventScript_Scyther_Text_0:
# 110 "data/maps/LastlightRoad/scripts.pory"
	.string "Scyther$"

LastlightRoad_EventScript_Scyther_Text_1:
# 112 "data/maps/LastlightRoad/scripts.pory"
	.string "Rakakaka!$"

LastlightRoad_Trigger_ScytherGoesWild_Text_0:
# 130 "data/maps/LastlightRoad/scripts.pory"
	.string "Come on, Scyther! Get back in the Poké\n"
	.string "ball, please!$"

LastlightRoad_Trigger_ScytherGoesWild_Text_1:
# 136 "data/maps/LastlightRoad/scripts.pory"
	.string "...Unbelieveable! You're taking up the\n"
	.string "whole path!$"

LastlightRoad_Trigger_ScytherGoesWild_Text_2:
# 143 "data/maps/LastlightRoad/scripts.pory"
	.string "I'm so sorry, but my Scyther won't\n"
	.string "listen to me. Some Pokémon are just so\l"
	.string "strong-willed...$"

LastlightRoad_EventScript_Trainer_Lastlight_Harley_Text_0:
# 174 "data/maps/LastlightRoad/scripts.pory"
	.string "Harley$"

LastlightRoad_EventScript_Trainer_Lastlight_Harley_Text_1:
# 175 "data/maps/LastlightRoad/scripts.pory"
	.string "At least the torches are still lighting\n"
	.string "the path.$"

LastlightRoad_EventScript_Trainer_Lastlight_Billie_Text_0:
# 192 "data/maps/LastlightRoad/scripts.pory"
	.string "Billie$"

LastlightRoad_EventScript_Trainer_Lastlight_Billie_Text_1:
# 193 "data/maps/LastlightRoad/scripts.pory"
	.string "I'm glad Scyther and I are close now! It\n"
	.string "shouldn't be blocking the path any\l"
	.string "longer.$"

LastlightRoad_EventScript_Trainer_Lastlight_Zoey_Text_0:
# 210 "data/maps/LastlightRoad/scripts.pory"
	.string "Zoey$"

LastlightRoad_EventScript_Trainer_Lastlight_Zoey_Text_1:
# 211 "data/maps/LastlightRoad/scripts.pory"
	.string "Some Team Chimera thugs have passed\n"
	.string "through recently. They looked like\l"
	.string "demons in their masks!$"

LastlightRoad_EventScript_Trainer_Lastlight_Phallon_Text_0:
# 228 "data/maps/LastlightRoad/scripts.pory"
	.string "Phallon$"

LastlightRoad_EventScript_Trainer_Lastlight_Phallon_Text_1:
# 229 "data/maps/LastlightRoad/scripts.pory"
	.string "Research is key to understanding the\n"
	.string "world around us. You're a University\l"
	.string "student, right? You should understand\l"
	.string "that better than anyone!$"

LastlightRoad_EventScript_Trainer_Lastlight_Nikitas_Text_0:
# 246 "data/maps/LastlightRoad/scripts.pory"
	.string "Nikitas$"

LastlightRoad_EventScript_Trainer_Lastlight_Nikitas_Text_1:
# 247 "data/maps/LastlightRoad/scripts.pory"
	.string "In my youth, I tackled the Gym\n"
	.string "challenge. I came back home around Gym\l"
	.string "3 - I was homesick!$"

LastlightRoad_EventScript_Trainer_Lastlight_Loukas_Text_0:
# 264 "data/maps/LastlightRoad/scripts.pory"
	.string "Loukas$"

LastlightRoad_EventScript_Trainer_Lastlight_Loukas_Text_1:
# 265 "data/maps/LastlightRoad/scripts.pory"
	.string "The Tower of Dioxippus is such a\n"
	.string "mouthful. Who names these places,\l"
	.string "anyway?$"

LastlightRoad_EventScript_UniversityStudentRouteCheck_Text_0:
# 283 "data/maps/LastlightRoad/scripts.pory"
	.string "Uni. Student$"

LastlightRoad_EventScript_UniversityStudentRouteCheck_Text_1:
# 287 "data/maps/LastlightRoad/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

LastlightRoad_EventScript_UniversityStudentRouteCheck_Text_2:
# 292 "data/maps/LastlightRoad/scripts.pory"
	.string "Chaire (Hyeh-rei)! I'm a student from\n"
	.string "the Acrisia University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in Lastlight Road. If\l"
	.string "you've caught all the Pokémon here,\l"
	.string "please let me know.$"

LastlightRoad_EventScript_UniversityStudentRouteCheck_Text_3:
# 300 "data/maps/LastlightRoad/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

LastlightRoad_Text_Trainer_Lastlight_HarleyIntro::
# 180 "data/maps/LastlightRoad/scripts.pory"
	.string "This weather is terrifying! It's almost\n"
	.string "too bad to bike through!$"

LastlightRoad_Text_Trainer_Lastlight_HarleyDefeat::
# 184 "data/maps/LastlightRoad/scripts.pory"
	.string "I'd better get back inside.$"

LastlightRoad_Text_Trainer_Lastlight_BillieIntro::
# 198 "data/maps/LastlightRoad/scripts.pory"
	.string "I finally got a handle on my Scyther!\n"
	.string "We're ready for battle!$"

LastlightRoad_Text_Trainer_Lastlight_BillieDefeat::
# 202 "data/maps/LastlightRoad/scripts.pory"
	.string "It's okay, Scyther...$"

LastlightRoad_Text_Trainer_Lastlight_ZoeyIntro::
# 216 "data/maps/LastlightRoad/scripts.pory"
	.string "I'll show you how it's done-done-done!$"

LastlightRoad_Text_Trainer_Lastlight_ZoeyDefeat::
# 220 "data/maps/LastlightRoad/scripts.pory"
	.string "Aw, we went down-down-down!$"

LastlightRoad_Text_Trainer_Lastlight_PhallonIntro::
# 234 "data/maps/LastlightRoad/scripts.pory"
	.string "My project is almost complete!$"

LastlightRoad_Text_Trainer_Lastlight_PhallonDefeat::
# 238 "data/maps/LastlightRoad/scripts.pory"
	.string "Oh no, my Pokémon!$"

LastlightRoad_Text_Trainer_Lastlight_NikitasIntro::
# 252 "data/maps/LastlightRoad/scripts.pory"
	.string "I was born and raised right in Kipos\n"
	.string "Town, just like my Pokémon.$"

LastlightRoad_Text_Trainer_Lastlight_NikitasDefeat::
# 256 "data/maps/LastlightRoad/scripts.pory"
	.string "Ohoho, we need more training!$"

LastlightRoad_Text_Trainer_Lastlight_LoukasIntro::
# 270 "data/maps/LastlightRoad/scripts.pory"
	.string "I'm almost to the Tower of Dio...\n"
	.string "Dee-oh... Uhh...$"

LastlightRoad_Text_Trainer_Lastlight_LoukasDefeat::
# 274 "data/maps/LastlightRoad/scripts.pory"
	.string "I got it! It's the Tower of\n"
	.string "Dee-oh-hip-us!$"

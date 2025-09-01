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
	return

LastlightRoad_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/LastlightRoad/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto LastlightRoad_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


LastlightRoad_EventScript_DirectionSign::
# 30 "data/maps/LastlightRoad/scripts.pory"
	lock
# 31 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_DirectionSign_Text_0
# 32 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 33 "data/maps/LastlightRoad/scripts.pory"
	release
	end


LastlightRoad_EventScript_Girl::
# 39 "data/maps/LastlightRoad/scripts.pory"
	lock
# 40 "data/maps/LastlightRoad/scripts.pory"
	faceplayer
# 41 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_Girl_Text_0
# 42 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_Girl_Text_1
# 43 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 44 "data/maps/LastlightRoad/scripts.pory"
	release
	end


LastlightRoad_EventScript_BugCatcher::
# 50 "data/maps/LastlightRoad/scripts.pory"
	lock
# 51 "data/maps/LastlightRoad/scripts.pory"
	faceplayer
# 52 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_BugCatcher_Text_0
# 53 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_BugCatcher_Text_1
# 54 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 55 "data/maps/LastlightRoad/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 56 "data/maps/LastlightRoad/scripts.pory"
	waitmovement 0
# 57 "data/maps/LastlightRoad/scripts.pory"
	release
	end


LastlightRoad_EventScript_Scyther::
# 63 "data/maps/LastlightRoad/scripts.pory"
	lock
# 64 "data/maps/LastlightRoad/scripts.pory"
	faceplayer
# 65 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_Scyther_Text_0
# 66 "data/maps/LastlightRoad/scripts.pory"
	playmoncry SPECIES_SCYTHER, CRY_MODE_NORMAL
# 67 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_Scyther_Text_1
# 68 "data/maps/LastlightRoad/scripts.pory"
	waitmoncry
# 69 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 70 "data/maps/LastlightRoad/scripts.pory"
	release
	end


LastlightRoad_Trigger_ScytherGoesWild::
# 76 "data/maps/LastlightRoad/scripts.pory"
	lockall
# 77 "data/maps/LastlightRoad/scripts.pory"
	ballfollowingmon
# 78 "data/maps/LastlightRoad/scripts.pory"
	applymovement 3, Common_Movement_JumpInPlaceUp
# 79 "data/maps/LastlightRoad/scripts.pory"
	waitmovement 0
# 80 "data/maps/LastlightRoad/scripts.pory"
	delay 10
# 81 "data/maps/LastlightRoad/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 82 "data/maps/LastlightRoad/scripts.pory"
	waitmovement 0
# 83 "data/maps/LastlightRoad/scripts.pory"
	delay 10
# 84 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_BugCatcher_Text_0
# 85 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_Trigger_ScytherGoesWild_Text_0
# 86 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 87 "data/maps/LastlightRoad/scripts.pory"
	delay 10
# 88 "data/maps/LastlightRoad/scripts.pory"
	applymovement 3, LastlightRoad_Movement_ScytherRunsAround
# 89 "data/maps/LastlightRoad/scripts.pory"
	waitmovement 0
# 90 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_BugCatcher_Text_0
# 91 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_Trigger_ScytherGoesWild_Text_1
# 92 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 93 "data/maps/LastlightRoad/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 94 "data/maps/LastlightRoad/scripts.pory"
	waitmovement 0
# 95 "data/maps/LastlightRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 96 "data/maps/LastlightRoad/scripts.pory"
	waitmovement 0
# 97 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_BugCatcher_Text_0
# 98 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_Trigger_ScytherGoesWild_Text_2
# 99 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 100 "data/maps/LastlightRoad/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 101 "data/maps/LastlightRoad/scripts.pory"
	waitmovement 0
# 102 "data/maps/LastlightRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 103 "data/maps/LastlightRoad/scripts.pory"
	waitmovement 0
# 104 "data/maps/LastlightRoad/scripts.pory"
	releaseall
	end


# 107 "data/maps/LastlightRoad/scripts.pory"
LastlightRoad_Movement_ScytherRunsAround:
# 109 "data/maps/LastlightRoad/scripts.pory"
	walk_right
# 110 "data/maps/LastlightRoad/scripts.pory"
	walk_down
# 111 "data/maps/LastlightRoad/scripts.pory"
	jump_in_place_down
# 111 "data/maps/LastlightRoad/scripts.pory"
	jump_in_place_down
# 112 "data/maps/LastlightRoad/scripts.pory"
	walk_left
# 113 "data/maps/LastlightRoad/scripts.pory"
	jump_in_place_up
# 113 "data/maps/LastlightRoad/scripts.pory"
	jump_in_place_up
# 114 "data/maps/LastlightRoad/scripts.pory"
	walk_left
# 115 "data/maps/LastlightRoad/scripts.pory"
	walk_up
# 116 "data/maps/LastlightRoad/scripts.pory"
	walk_right
# 116 "data/maps/LastlightRoad/scripts.pory"
	walk_right
# 117 "data/maps/LastlightRoad/scripts.pory"
	walk_down
# 118 "data/maps/LastlightRoad/scripts.pory"
	walk_left
# 118 "data/maps/LastlightRoad/scripts.pory"
	walk_left
# 119 "data/maps/LastlightRoad/scripts.pory"
	walk_up
# 120 "data/maps/LastlightRoad/scripts.pory"
	walk_right
# 121 "data/maps/LastlightRoad/scripts.pory"
	jump_in_place_up
# 121 "data/maps/LastlightRoad/scripts.pory"
	jump_in_place_up
# 122 "data/maps/LastlightRoad/scripts.pory"
	face_up
# 123 "data/maps/LastlightRoad/scripts.pory"
	step_end

LastlightRoad_EventScript_Trainer_Lastlight_Harley::
# 128 "data/maps/LastlightRoad/scripts.pory"
	trainerbattle_single TRAINER_LASTLIGHT_HARLEY, LastlightRoad_Text_Trainer_Lastlight_HarleyIntro, LastlightRoad_Text_Trainer_Lastlight_HarleyDefeat
# 129 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_Trainer_Lastlight_Harley_Text_0
# 130 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_Trainer_Lastlight_Harley_Text_1
# 131 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 132 "data/maps/LastlightRoad/scripts.pory"
	release
	end


LastlightRoad_EventScript_Trainer_Lastlight_Billie::
# 146 "data/maps/LastlightRoad/scripts.pory"
	trainerbattle_single TRAINER_LASTLIGHT_BILLIE, LastlightRoad_Text_Trainer_Lastlight_BillieIntro, LastlightRoad_Text_Trainer_Lastlight_BillieDefeat
# 147 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_Trainer_Lastlight_Billie_Text_0
# 148 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_Trainer_Lastlight_Billie_Text_1
# 149 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 150 "data/maps/LastlightRoad/scripts.pory"
	release
	end


LastlightRoad_EventScript_Trainer_Lastlight_Zoey::
# 164 "data/maps/LastlightRoad/scripts.pory"
	trainerbattle_single TRAINER_LASTLIGHT_ZOEY, LastlightRoad_Text_Trainer_Lastlight_ZoeyIntro, LastlightRoad_Text_Trainer_Lastlight_ZoeyDefeat
# 165 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_Trainer_Lastlight_Zoey_Text_0
# 166 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_Trainer_Lastlight_Zoey_Text_1
# 167 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 168 "data/maps/LastlightRoad/scripts.pory"
	release
	end


LastlightRoad_EventScript_Trainer_Lastlight_Phallon::
# 182 "data/maps/LastlightRoad/scripts.pory"
	trainerbattle_single TRAINER_LASTLIGHT_PHALLON, LastlightRoad_Text_Trainer_Lastlight_PhallonIntro, LastlightRoad_Text_Trainer_Lastlight_PhallonDefeat
# 183 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_Trainer_Lastlight_Phallon_Text_0
# 184 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_Trainer_Lastlight_Phallon_Text_1
# 185 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 186 "data/maps/LastlightRoad/scripts.pory"
	release
	end


LastlightRoad_EventScript_Trainer_Lastlight_Nikitas::
# 200 "data/maps/LastlightRoad/scripts.pory"
	trainerbattle_single TRAINER_LASTLIGHT_NIKITAS, LastlightRoad_Text_Trainer_Lastlight_NikitasIntro, LastlightRoad_Text_Trainer_Lastlight_NikitasDefeat
# 201 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_Trainer_Lastlight_Nikitas_Text_0
# 202 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_Trainer_Lastlight_Nikitas_Text_1
# 203 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 204 "data/maps/LastlightRoad/scripts.pory"
	release
	end


LastlightRoad_EventScript_Trainer_Lastlight_Loukas::
# 218 "data/maps/LastlightRoad/scripts.pory"
	trainerbattle_single TRAINER_LASTLIGHT_LOUKAS, LastlightRoad_Text_Trainer_Lastlight_LoukasIntro, LastlightRoad_Text_Trainer_Lastlight_LoukasDefeat
# 219 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_Trainer_Lastlight_Loukas_Text_0
# 220 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_Trainer_Lastlight_Loukas_Text_1
# 221 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 222 "data/maps/LastlightRoad/scripts.pory"
	release
	end


LastlightRoad_EventScript_UniversityStudentRouteCheck::
# 236 "data/maps/LastlightRoad/scripts.pory"
	lock
# 237 "data/maps/LastlightRoad/scripts.pory"
	faceplayer
# 238 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_UniversityStudentRouteCheck_Text_0
# 240 "data/maps/LastlightRoad/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_LASTLIGHT_ROAD, LastlightRoad_EventScript_UniversityStudentRouteCheck_2
# 247 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_UniversityStudentRouteCheck_Text_2
# 248 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 249 "data/maps/LastlightRoad/scripts.pory"
	special CheckRouteCaptureProgress
# 250 "data/maps/LastlightRoad/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LastlightRoad_EventScript_UniversityStudentRouteCheck_5
LastlightRoad_EventScript_UniversityStudentRouteCheck_1:
# 268 "data/maps/LastlightRoad/scripts.pory"
	release
	end

LastlightRoad_EventScript_UniversityStudentRouteCheck_2:
# 242 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_UniversityStudentRouteCheck_Text_1
# 243 "data/maps/LastlightRoad/scripts.pory"
	closemessage
	goto LastlightRoad_EventScript_UniversityStudentRouteCheck_1

LastlightRoad_EventScript_UniversityStudentRouteCheck_5:
# 252 "data/maps/LastlightRoad/scripts.pory"
	delay 20
# 253 "data/maps/LastlightRoad/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 254 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_UniversityStudentRouteCheck_Text_0
# 255 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_UniversityStudentRouteCheck_Text_3
# 256 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 257 "data/maps/LastlightRoad/scripts.pory"
	delay 5
# 260 "data/maps/LastlightRoad/scripts.pory"
	giveitem ITEM_TIMER_BALL, 20
# 261 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 262 "data/maps/LastlightRoad/scripts.pory"
	delay 5
# 264 "data/maps/LastlightRoad/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_LASTLIGHT_ROAD
	goto LastlightRoad_EventScript_UniversityStudentRouteCheck_1


LastlightRoad_EventScript_DirectionSign_Text_0:
# 31 "data/maps/LastlightRoad/scripts.pory"
	.string "Lastlight Road\n"
	.string "Where Torches Burn Forever\p"
	.string "{UP_ARROW} Kipos Town\n"
	.string "{DOWN_ARROW} Tower of Dioxippus$"

LastlightRoad_EventScript_Girl_Text_0:
# 41 "data/maps/LastlightRoad/scripts.pory"
	.string "Battle Girl$"

LastlightRoad_EventScript_Girl_Text_1:
# 42 "data/maps/LastlightRoad/scripts.pory"
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
# 52 "data/maps/LastlightRoad/scripts.pory"
	.string "Bug Catcher$"

LastlightRoad_EventScript_BugCatcher_Text_1:
# 53 "data/maps/LastlightRoad/scripts.pory"
	.string "I sure am sorry about my Scyther acting\n"
	.string "up. It's too high leveled for me to\l"
	.string "control it!$"

LastlightRoad_EventScript_Scyther_Text_0:
# 65 "data/maps/LastlightRoad/scripts.pory"
	.string "Scyther$"

LastlightRoad_EventScript_Scyther_Text_1:
# 67 "data/maps/LastlightRoad/scripts.pory"
	.string "Rakakaka!$"

LastlightRoad_Trigger_ScytherGoesWild_Text_0:
# 85 "data/maps/LastlightRoad/scripts.pory"
	.string "Come on, Scyther! Get back in the Poké\n"
	.string "ball, please!$"

LastlightRoad_Trigger_ScytherGoesWild_Text_1:
# 91 "data/maps/LastlightRoad/scripts.pory"
	.string "...Unbelieveable! You're taking up the\n"
	.string "whole path!$"

LastlightRoad_Trigger_ScytherGoesWild_Text_2:
# 98 "data/maps/LastlightRoad/scripts.pory"
	.string "I'm so sorry, but my Scyther won't\n"
	.string "listen to me. Some Pokémon are just so\l"
	.string "strong-willed...$"

LastlightRoad_EventScript_Trainer_Lastlight_Harley_Text_0:
# 129 "data/maps/LastlightRoad/scripts.pory"
	.string "Harley$"

LastlightRoad_EventScript_Trainer_Lastlight_Harley_Text_1:
# 130 "data/maps/LastlightRoad/scripts.pory"
	.string "At least the torches are still lighting\n"
	.string "the path.$"

LastlightRoad_EventScript_Trainer_Lastlight_Billie_Text_0:
# 147 "data/maps/LastlightRoad/scripts.pory"
	.string "Billie$"

LastlightRoad_EventScript_Trainer_Lastlight_Billie_Text_1:
# 148 "data/maps/LastlightRoad/scripts.pory"
	.string "I'm glad Scyther and I are close now! It\n"
	.string "shouldn't be blocking the path any\l"
	.string "longer.$"

LastlightRoad_EventScript_Trainer_Lastlight_Zoey_Text_0:
# 165 "data/maps/LastlightRoad/scripts.pory"
	.string "Zoey$"

LastlightRoad_EventScript_Trainer_Lastlight_Zoey_Text_1:
# 166 "data/maps/LastlightRoad/scripts.pory"
	.string "Some Team Chimera thugs have passed\n"
	.string "through recently. They looked like\l"
	.string "demons in their masks!$"

LastlightRoad_EventScript_Trainer_Lastlight_Phallon_Text_0:
# 183 "data/maps/LastlightRoad/scripts.pory"
	.string "Phallon$"

LastlightRoad_EventScript_Trainer_Lastlight_Phallon_Text_1:
# 184 "data/maps/LastlightRoad/scripts.pory"
	.string "Research is key to understanding the\n"
	.string "world around us. You're a University\l"
	.string "student, right? You should understand\l"
	.string "that better than anyone!$"

LastlightRoad_EventScript_Trainer_Lastlight_Nikitas_Text_0:
# 201 "data/maps/LastlightRoad/scripts.pory"
	.string "Nikitas$"

LastlightRoad_EventScript_Trainer_Lastlight_Nikitas_Text_1:
# 202 "data/maps/LastlightRoad/scripts.pory"
	.string "In my youth, I tackled the Gym\n"
	.string "challenge. I came back home around Gym\l"
	.string "3 - I was homesick!$"

LastlightRoad_EventScript_Trainer_Lastlight_Loukas_Text_0:
# 219 "data/maps/LastlightRoad/scripts.pory"
	.string "Loukas$"

LastlightRoad_EventScript_Trainer_Lastlight_Loukas_Text_1:
# 220 "data/maps/LastlightRoad/scripts.pory"
	.string "The Tower of Dioxippus is such a\n"
	.string "mouthful. Who names these places,\l"
	.string "anyway?$"

LastlightRoad_EventScript_UniversityStudentRouteCheck_Text_0:
# 238 "data/maps/LastlightRoad/scripts.pory"
	.string "Uni. Student$"

LastlightRoad_EventScript_UniversityStudentRouteCheck_Text_1:
# 242 "data/maps/LastlightRoad/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

LastlightRoad_EventScript_UniversityStudentRouteCheck_Text_2:
# 247 "data/maps/LastlightRoad/scripts.pory"
	.string "Chaire (Hyeh-rei)! I'm a student from\n"
	.string "the Acrisia University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in Lastlight Road. If\l"
	.string "you've caught all the Pokémon here,\l"
	.string "please let me know.$"

LastlightRoad_EventScript_UniversityStudentRouteCheck_Text_3:
# 255 "data/maps/LastlightRoad/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

LastlightRoad_Text_Trainer_Lastlight_HarleyIntro::
# 135 "data/maps/LastlightRoad/scripts.pory"
	.string "This weather is terrifying! It's almost\n"
	.string "too bad to bike through!$"

LastlightRoad_Text_Trainer_Lastlight_HarleyDefeat::
# 139 "data/maps/LastlightRoad/scripts.pory"
	.string "I'd better get back inside.$"

LastlightRoad_Text_Trainer_Lastlight_BillieIntro::
# 153 "data/maps/LastlightRoad/scripts.pory"
	.string "I finally got a handle on my Scyther!\n"
	.string "We're ready for battle!$"

LastlightRoad_Text_Trainer_Lastlight_BillieDefeat::
# 157 "data/maps/LastlightRoad/scripts.pory"
	.string "It's okay, Scyther...$"

LastlightRoad_Text_Trainer_Lastlight_ZoeyIntro::
# 171 "data/maps/LastlightRoad/scripts.pory"
	.string "I'll show you how it's done-done-done!$"

LastlightRoad_Text_Trainer_Lastlight_ZoeyDefeat::
# 175 "data/maps/LastlightRoad/scripts.pory"
	.string "Aw, we went down-down-down!$"

LastlightRoad_Text_Trainer_Lastlight_PhallonIntro::
# 189 "data/maps/LastlightRoad/scripts.pory"
	.string "My project is almost complete!$"

LastlightRoad_Text_Trainer_Lastlight_PhallonDefeat::
# 193 "data/maps/LastlightRoad/scripts.pory"
	.string "Oh no, my Pokémon!$"

LastlightRoad_Text_Trainer_Lastlight_NikitasIntro::
# 207 "data/maps/LastlightRoad/scripts.pory"
	.string "I was born and raised right in Kipos\n"
	.string "Town, just like my Pokémon.$"

LastlightRoad_Text_Trainer_Lastlight_NikitasDefeat::
# 211 "data/maps/LastlightRoad/scripts.pory"
	.string "Ohoho, we need more training!$"

LastlightRoad_Text_Trainer_Lastlight_LoukasIntro::
# 225 "data/maps/LastlightRoad/scripts.pory"
	.string "I'm almost to the Tower of Dio...\n"
	.string "Dee-oh... Uhh...$"

LastlightRoad_Text_Trainer_Lastlight_LoukasDefeat::
# 229 "data/maps/LastlightRoad/scripts.pory"
	.string "I got it! It's the Tower of\n"
	.string "Dee-oh-hip-us!$"

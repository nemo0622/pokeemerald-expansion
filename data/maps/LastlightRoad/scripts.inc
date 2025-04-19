LastlightRoad_MapScripts::
	.byte 0


LastlightRoad_EventScript_Girl::
# 5 "data/maps/LastlightRoad/scripts.pory"
	lock
# 6 "data/maps/LastlightRoad/scripts.pory"
	faceplayer
# 7 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_Girl_Text_0
# 8 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_Girl_Text_1
# 9 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 10 "data/maps/LastlightRoad/scripts.pory"
	release
	end


LastlightRoad_EventScript_BugCatcher::
# 16 "data/maps/LastlightRoad/scripts.pory"
	lock
# 17 "data/maps/LastlightRoad/scripts.pory"
	faceplayer
# 18 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_BugCatcher_Text_0
# 19 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_BugCatcher_Text_1
# 20 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 21 "data/maps/LastlightRoad/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 22 "data/maps/LastlightRoad/scripts.pory"
	waitmovement 0
# 23 "data/maps/LastlightRoad/scripts.pory"
	release
	end


LastlightRoad_EventScript_Scyther::
# 29 "data/maps/LastlightRoad/scripts.pory"
	lock
# 30 "data/maps/LastlightRoad/scripts.pory"
	faceplayer
# 31 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_Scyther_Text_0
# 32 "data/maps/LastlightRoad/scripts.pory"
	playmoncry SPECIES_SCYTHER, CRY_MODE_NORMAL
# 33 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_EventScript_Scyther_Text_1
# 34 "data/maps/LastlightRoad/scripts.pory"
	waitmoncry
# 35 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 36 "data/maps/LastlightRoad/scripts.pory"
	release
	end


LastlightRoad_Trigger_ScytherGoesWild::
# 42 "data/maps/LastlightRoad/scripts.pory"
	lockall
# 43 "data/maps/LastlightRoad/scripts.pory"
	ballfollowingmon
# 44 "data/maps/LastlightRoad/scripts.pory"
	applymovement 3, Common_Movement_JumpInPlaceUp
# 45 "data/maps/LastlightRoad/scripts.pory"
	waitmovement 0
# 46 "data/maps/LastlightRoad/scripts.pory"
	delay 10
# 47 "data/maps/LastlightRoad/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 48 "data/maps/LastlightRoad/scripts.pory"
	waitmovement 0
# 49 "data/maps/LastlightRoad/scripts.pory"
	delay 10
# 50 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_BugCatcher_Text_0
# 51 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_Trigger_ScytherGoesWild_Text_0
# 52 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 53 "data/maps/LastlightRoad/scripts.pory"
	delay 10
# 54 "data/maps/LastlightRoad/scripts.pory"
	applymovement 3, LastlightRoad_Movement_ScytherRunsAround
# 55 "data/maps/LastlightRoad/scripts.pory"
	waitmovement 0
# 56 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_BugCatcher_Text_0
# 57 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_Trigger_ScytherGoesWild_Text_1
# 58 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 59 "data/maps/LastlightRoad/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 60 "data/maps/LastlightRoad/scripts.pory"
	waitmovement 0
# 61 "data/maps/LastlightRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 62 "data/maps/LastlightRoad/scripts.pory"
	waitmovement 0
# 63 "data/maps/LastlightRoad/scripts.pory"
	speakername LastlightRoad_EventScript_BugCatcher_Text_0
# 64 "data/maps/LastlightRoad/scripts.pory"
	msgbox LastlightRoad_Trigger_ScytherGoesWild_Text_2
# 65 "data/maps/LastlightRoad/scripts.pory"
	closemessage
# 66 "data/maps/LastlightRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 67 "data/maps/LastlightRoad/scripts.pory"
	waitmovement 0
# 68 "data/maps/LastlightRoad/scripts.pory"
	releaseall
	end


# 71 "data/maps/LastlightRoad/scripts.pory"
LastlightRoad_Movement_ScytherRunsAround:
# 73 "data/maps/LastlightRoad/scripts.pory"
	walk_right
# 74 "data/maps/LastlightRoad/scripts.pory"
	walk_down
# 75 "data/maps/LastlightRoad/scripts.pory"
	jump_in_place_down
# 75 "data/maps/LastlightRoad/scripts.pory"
	jump_in_place_down
# 76 "data/maps/LastlightRoad/scripts.pory"
	walk_left
# 77 "data/maps/LastlightRoad/scripts.pory"
	jump_in_place_up
# 77 "data/maps/LastlightRoad/scripts.pory"
	jump_in_place_up
# 78 "data/maps/LastlightRoad/scripts.pory"
	walk_left
# 79 "data/maps/LastlightRoad/scripts.pory"
	walk_up
# 80 "data/maps/LastlightRoad/scripts.pory"
	walk_right
# 80 "data/maps/LastlightRoad/scripts.pory"
	walk_right
# 81 "data/maps/LastlightRoad/scripts.pory"
	walk_down
# 82 "data/maps/LastlightRoad/scripts.pory"
	walk_left
# 82 "data/maps/LastlightRoad/scripts.pory"
	walk_left
# 83 "data/maps/LastlightRoad/scripts.pory"
	walk_up
# 84 "data/maps/LastlightRoad/scripts.pory"
	walk_right
# 85 "data/maps/LastlightRoad/scripts.pory"
	jump_in_place_up
# 85 "data/maps/LastlightRoad/scripts.pory"
	jump_in_place_up
# 86 "data/maps/LastlightRoad/scripts.pory"
	face_up
# 87 "data/maps/LastlightRoad/scripts.pory"
	step_end

LastlightRoad_EventScript_Girl_Text_0:
# 7 "data/maps/LastlightRoad/scripts.pory"
	.string "Battle Girl$"

LastlightRoad_EventScript_Girl_Text_1:
# 8 "data/maps/LastlightRoad/scripts.pory"
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
# 18 "data/maps/LastlightRoad/scripts.pory"
	.string "Bug Catcher$"

LastlightRoad_EventScript_BugCatcher_Text_1:
# 19 "data/maps/LastlightRoad/scripts.pory"
	.string "I sure am sorry about my Scyther acting\n"
	.string "up. It's too high leveled for me to\l"
	.string "control it!$"

LastlightRoad_EventScript_Scyther_Text_0:
# 31 "data/maps/LastlightRoad/scripts.pory"
	.string "Scyther$"

LastlightRoad_EventScript_Scyther_Text_1:
# 33 "data/maps/LastlightRoad/scripts.pory"
	.string "Rakakaka!$"

LastlightRoad_Trigger_ScytherGoesWild_Text_0:
# 51 "data/maps/LastlightRoad/scripts.pory"
	.string "Come on, Scyther! Get back in the Poké\n"
	.string "ball, please!$"

LastlightRoad_Trigger_ScytherGoesWild_Text_1:
# 57 "data/maps/LastlightRoad/scripts.pory"
	.string "...Unbelieveable! You're taking up the\n"
	.string "whole path!$"

LastlightRoad_Trigger_ScytherGoesWild_Text_2:
# 64 "data/maps/LastlightRoad/scripts.pory"
	.string "I'm so sorry, but my Scyther won't\n"
	.string "listen to me. Some Pokémon are just so\l"
	.string "strong-willed...$"

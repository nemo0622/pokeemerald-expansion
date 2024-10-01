AcrisiaCity_MapScripts::
# 3 "data/maps/AcrisiaCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AcrisiaCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AcrisiaCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/AcrisiaCity/scripts.pory"
	map_script_2 VAR_INTRO_STATE, 0, AcrisiaCity_EventScript_PlayerExitsTruck
	.2byte 0


AcrisiaCity_EventScript_PlayerExitsTruck::
# 11 "data/maps/AcrisiaCity/scripts.pory"
	setvar VAR_INTRO_STATE, 1
# 12 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_INTRO_TRUCK
# 13 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_SECOND_PROFESSOR_SPRITE
# 14 "data/maps/AcrisiaCity/scripts.pory"
	lockall
# 15 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerOffTruck
# 16 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 19 "data/maps/AcrisiaCity/scripts.pory"
	playse SE_PIN
# 20 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 21 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 22 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 23 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_1
# 24 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 27 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 28 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfGetsAbovePlayer
# 29 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 30 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1
# 31 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1
# 32 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 33 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 34 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_2
# 35 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 36 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2
# 37 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2
# 38 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 40 "data/maps/AcrisiaCity/scripts.pory"
	hideobjectat 12, MAP_ACRISIA_CITY
# 42 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 43 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 44 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 45 "data/maps/AcrisiaCity/scripts.pory"
	warpsilent MAP_ACRISIA_CITY_UNIVERSITY, 10, 19
# 46 "data/maps/AcrisiaCity/scripts.pory"
	waitstate
# 48 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 50 "data/maps/AcrisiaCity/scripts.pory"
	releaseall
	end


# 54 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerOffTruck:
# 56 "data/maps/AcrisiaCity/scripts.pory"
	jump_right
# 57 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 58 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 59 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 62 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfGetsAbovePlayer:
# 64 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 65 "data/maps/AcrisiaCity/scripts.pory"
	walk_left
# 66 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 67 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 67 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 68 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 71 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1:
# 73 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 73 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 73 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 73 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 73 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 73 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 74 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 74 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 74 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 74 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 74 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 75 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 75 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 75 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 75 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 75 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 76 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 77 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 80 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1:
# 82 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 82 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 82 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 82 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 82 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 82 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 82 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 83 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 83 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 83 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 83 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 83 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 84 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 84 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 84 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 84 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 85 "data/maps/AcrisiaCity/scripts.pory"
	face_up
# 86 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 89 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2:
# 91 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 91 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 91 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 91 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 91 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 91 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 91 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 91 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 93 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 93 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 93 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 93 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 93 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 93 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 94 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 97 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2:
# 99 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 99 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 99 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 99 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 99 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 99 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 99 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 99 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 99 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 101 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 101 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 101 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 101 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 101 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 102 "data/maps/AcrisiaCity/scripts.pory"
	step_end

AcrisiaCity_EventScript_PlayerExitsTruck_Text_0:
# 22 "data/maps/AcrisiaCity/scripts.pory"
	.string "Prof. Elia$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_1:
# 23 "data/maps/AcrisiaCity/scripts.pory"
	.string "Looks like you made it, {PLAYER}!\n"
	.string "Sorry about the rough ride, but there's\l"
	.string "no public transport up here. It's a bit...\l"
	.string "rural around here.\p"
	.string "Come, follow me! Let's get you to the\n"
	.string "University building!$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_2:
# 34 "data/maps/AcrisiaCity/scripts.pory"
	.string "As you can see, Acrisia City used to be\n"
	.string "a mining town. It's a bit past its prime\l"
	.string "now, but the folks here are still willing\l"
	.string "to support the University, so we've\l"
	.string "continued our research out of here!$"

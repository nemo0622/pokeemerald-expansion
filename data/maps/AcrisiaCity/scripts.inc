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
	lockall
# 13 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerOffTruck
# 14 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 15 "data/maps/AcrisiaCity/scripts.pory"
	releaseall
	end


# 19 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerOffTruck:
# 21 "data/maps/AcrisiaCity/scripts.pory"
	jump_right
# 22 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 23 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 24 "data/maps/AcrisiaCity/scripts.pory"
	step_end

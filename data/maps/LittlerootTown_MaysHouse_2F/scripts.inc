# 1 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
.set LOCALID_RIVAL, 1
# 3 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 4 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_MapScripts::
# 5 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_2F_OnTransition
# 6 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_MaysHouse_2F_OnWarp
# 7 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.byte 0
# 8 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 9 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnTransition:
# 10 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay
# 11 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos
# 12 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 4, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 13 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 14 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 15 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 16 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 17 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos::
# 18 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 19 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 20 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 21 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 22 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos::
# 23 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 24 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 25 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 26 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 8, 2
# 27 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_UP
# 28 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 29 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 30 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_Ret::
# 31 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 32 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 33 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay::
# 34 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 35 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay
# 36 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 37 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 38 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay::
# 39 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 40 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 41 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 42 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnWarp:
# 43 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor
# 44 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.2byte 0
# 45 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 46 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor::
# 47 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 48 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, SecretBase_EventScript_InitDecorations
# 49 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 50 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 51 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall::
# 52 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 53 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_MeetMay
# 54 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 55 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 56 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 57 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 58 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay::
# 59 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 60 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	addobject LOCALID_RIVAL
# 61 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayEnters
# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 63 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PIN
# 64 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 65 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 66 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 67 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 68 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 69 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 70 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LittlerootTown_MaysHouse_2F_EventScript_MeetMayNorth
# 71 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_MaysHouse_2F_EventScript_MeetMaySouth
# 72 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, LittlerootTown_MaysHouse_2F_EventScript_MeetMayWest
# 73 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LittlerootTown_MaysHouse_2F_EventScript_MeetMayEast
# 74 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 75 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 76 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 77 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 78 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 79 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	fadedefaultbgm
# 80 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 81 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 82 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 83 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayNorth::
# 84 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerNorth
# 85 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 86 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 87 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 88 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAY
# 89 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	callnative DrawMugshot
# 90 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 91 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	callnative ClearMugshot
# 92 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 93 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayNorth
# 94 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCNorth
# 95 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 96 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 97 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 98 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMaySouth::
# 99 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerSouth
# 100 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 101 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 102 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 103 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAY
# 104 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	callnative DrawMugshot
# 105 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 106 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	callnative ClearMugshot
# 107 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 108 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMaySouth
# 109 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCSouth
# 110 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 111 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 112 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 113 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayWest::
# 114 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerWest
# 115 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 116 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 117 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 118 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAY
# 119 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	callnative DrawMugshot
# 120 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 121 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	callnative ClearMugshot
# 122 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 123 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCWest
# 124 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 125 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 126 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 127 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayEast::
# 128 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerEast
# 129 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 130 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 131 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 132 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAY
# 133 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	callnative DrawMugshot
# 134 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 135 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	callnative ClearMugshot
# 136 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 137 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayEast
# 138 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCEast
# 139 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 140 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 141 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 142 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayEnters:
# 143 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 144 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 145 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 146 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 147 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 148 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerNorth:
# 149 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 150 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 151 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 152 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 153 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 154 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 155 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 156 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCNorth:
# 157 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 158 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 159 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 160 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 161 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 162 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 163 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 164 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 165 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 166 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 167 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 168 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayNorth:
# 169 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 170 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 171 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 172 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 173 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 174 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 175 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 176 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 177 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 178 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerSouth:
# 179 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 180 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 181 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 182 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 183 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 184 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCSouth:
# 185 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 186 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 187 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 188 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 189 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 190 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 191 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 192 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 193 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 194 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMaySouth:
# 195 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 196 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 197 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 198 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 199 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 200 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 201 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 202 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerWest:
# 203 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 204 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 205 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 206 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 207 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 208 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 209 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 210 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 211 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCWest:
# 212 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 213 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 214 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 215 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 216 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 217 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 218 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 219 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayWest:
# 220 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 221 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 222 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 223 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 224 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 225 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerEast:
# 226 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 227 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 228 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 229 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 230 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 231 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 232 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCEast:
# 233 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 234 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 235 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 236 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 237 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 238 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 239 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 240 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 241 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 242 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 243 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayEast:
# 244 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 245 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 246 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 247 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 248 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 249 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 250 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 251 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Rival::
# 252 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 253 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, RivalsHouse_2F_EventScript_RivalPostLilycove
# 254 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 255 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RivalsHouse_2F_EventScript_May
# 256 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RivalsHouse_2F_EventScript_Brendan
# 257 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 258 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 259 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_May::
# 260 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayGettingReady, MSGBOX_DEFAULT
# 261 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 262 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 263 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 264 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Brendan::
# 265 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanGettingReady, MSGBOX_DEFAULT
# 266 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 267 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 268 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 269 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_RivalPostLilycove::
# 270 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 271 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 272 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 273 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, RivalsHouse_2F_EventScript_MayPostLilycove
# 274 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, RivalsHouse_2F_EventScript_BrendanPostLilycove
# 275 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE
# 276 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 277 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 278 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 279 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayPostLilycove::
# 280 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_MayWhereShouldIGoNext
# 281 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayJustCheckingMyPokedex, MSGBOX_DEFAULT
# 282 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 283 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 284 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanPostLilycove::
# 285 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext
# 286 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex, MSGBOX_DEFAULT
# 287 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 288 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 289 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayWhereShouldIGoNext::
# 290 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 291 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 292 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 293 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext::
# 294 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 295 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 296 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 297 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_PC::
# 298 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 299 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 300 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC
# 301 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC
# 302 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 303 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 304 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC::
# 305 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 306 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 307 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 308 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 309 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC::
# 310 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 311 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 312 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_ON
# 313 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 314 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special BedroomPC
# 315 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitstate
# 316 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 317 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 318 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 319 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TurnOffPlayerPC::
# 320 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 321 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 322 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 323 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 324 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 325 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 326 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhoAreYou:
# 327 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Huh?\n"
# 328 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Who… Who are you?\p"
# 329 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "… … … … … … … …\n"
# 330 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "… … … … … … … …\p"
# 331 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}.\n"
# 332 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "So your move was today.\p"
# 333 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Um… I'm MAY.\n"
# 334 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Glad to meet you!\p"
# 335 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I…\n"
# 336 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I have this dream of becoming friends\l"
# 337 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "with POKéMON all over the world.\p"
# 338 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
# 339 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "my dad, PROF. BIRCH.\p"
# 340 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was hoping that you would be nice,\n"
# 341 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
# 342 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, this is silly, isn't it?\n"
# 343 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
# 344 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Eheheh…\p"
# 345 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, no! I forgot!\p"
# 346 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was supposed to go help Dad catch\n"
# 347 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some wild POKéMON!\p"
# 348 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{PLAYER}{KUN}, I'll catch you later!$"
# 349 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 350 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayGettingReady:
# 351 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "POKéMON fully restored!\n"
# 352 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Items ready, and…$"
# 353 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 354 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhoAreYou:
# 355 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Hey!\n"
# 356 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "You…\p"
# 357 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Who are you?\p"
# 358 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, you're {PLAYER}, aren't you?\n"
# 359 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Moved in next door, right?\p"
# 360 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I didn't know that you're a girl.\p"
# 361 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Dad, PROF. BIRCH, said that our new\n"
# 362 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "next-door neighbor is a GYM LEADER's\l"
# 363 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "kid, so I assumed you'd be a guy.\p"
# 364 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "My name's BRENDAN.\n"
# 365 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "So, hi, neighbor!\p"
# 366 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
# 367 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "a POKéMON?\p"
# 368 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Do you want me to go catch you one?\p"
# 369 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Aw, darn, I forgot…\p"
# 370 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I'm supposed to go help my dad catch\n"
# 371 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some wild POKéMON.\p"
# 372 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Some other time, okay?$"
# 373 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 374 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanGettingReady:
# 375 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "POKéMON fully restored…\n"
# 376 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Items all packed, and…$"
# 377 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 378 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_ItsRivalsPokeBall:
# 379 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "It's {RIVAL}'s POKé BALL!\p"
# 380 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Better leave it right where it is.$"
# 381 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 382 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayJustCheckingMyPokedex:
# 383 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\p"
# 384 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was just checking my POKéDEX.\p"
# 385 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "There's still a lot of POKéMON that\n"
# 386 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I've seen but haven't caught.\p"
# 387 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "And there are many others that\n"
# 388 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I think will evolve.\p"
# 389 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I wonder where I should go catch\n"
# 390 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some POKéMON next?$"
# 391 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 392 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhereShouldIGoNext:
# 393 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "MAY: I wonder where I should go catch\n"
# 394 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some POKéMON next?\p"
# 395 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Wouldn't it be funny if we ran into each\n"
# 396 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "other, {PLAYER}{KUN}?$"
# 397 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 398 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex:
# 399 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "BRENDAN: Hey, it's {PLAYER}.\p"
# 400 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was just checking out my POKéDEX.\p"
# 401 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "There are still many POKéMON that\n"
# 402 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I need to catch, I know, but this\l"
# 403 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "is looking pretty good.\p"
# 404 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Checking this POKéDEX out gives me\n"
# 405 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "the urge to hit the road again.$"
# 406 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 407 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhereShouldIGoNext:
# 408 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "BRENDAN: I'm having a hard time deciding\n"
# 409 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "where I should catch POKéMON next.\p"
# 410 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Hey, {PLAYER}, if I see you while I'm out\n"
# 411 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "catching POKéMON, I can pitch you a\l"
# 412 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "battle if you'd like.$"

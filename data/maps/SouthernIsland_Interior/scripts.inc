# 1 "data/maps/SouthernIsland_Interior/scripts.pory"

# 2 "data/maps/SouthernIsland_Interior/scripts.pory"
.set LOCALID_LATI, 2
# 3 "data/maps/SouthernIsland_Interior/scripts.pory"

# 4 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_MapScripts::
# 5 "data/maps/SouthernIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SouthernIsland_Interior_OnResume
# 6 "data/maps/SouthernIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SouthernIsland_Interior_OnTransition
# 7 "data/maps/SouthernIsland_Interior/scripts.pory"
	.byte 0
# 8 "data/maps/SouthernIsland_Interior/scripts.pory"

# 9 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_OnResume:
# 10 "data/maps/SouthernIsland_Interior/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, SouthernIsland_Interior_EventScript_TryRemoveLati
# 11 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 12 "data/maps/SouthernIsland_Interior/scripts.pory"

# 13 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_TryRemoveLati::
# 14 "data/maps/SouthernIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 15 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 16 "data/maps/SouthernIsland_Interior/scripts.pory"
	removeobject LOCALID_LATI
# 17 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 18 "data/maps/SouthernIsland_Interior/scripts.pory"

# 19 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_OnTransition:
# 20 "data/maps/SouthernIsland_Interior/scripts.pory"
	call SouthernIsland_Interior_EventScript_SetUpRandomLati
# 21 "data/maps/SouthernIsland_Interior/scripts.pory"
	call SouthernIsland_Interior_EventScript_SetUpPlayerGfx
# 22 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 23 "data/maps/SouthernIsland_Interior/scripts.pory"

# 24 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetUpRandomLati::
# 25 "data/maps/SouthernIsland_Interior/scripts.pory"
	random 2
# 26 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SouthernIsland_Interior_EventScript_SetUpLatios
# 27 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_ne VAR_RESULT, 0, SouthernIsland_Interior_EventScript_SetUpLatias
# 28 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 29 "data/maps/SouthernIsland_Interior/scripts.pory"

# 30 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetUpLatios::
# 31 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_LATIOS
# 32 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_LATIOS
# 33 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 34 "data/maps/SouthernIsland_Interior/scripts.pory"

# 35 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetUpLatias::
# 36 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_LATIAS
# 37 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_LATIAS
# 38 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 39 "data/maps/SouthernIsland_Interior/scripts.pory"

# 40 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetUpPlayerGfx::
# 41 "data/maps/SouthernIsland_Interior/scripts.pory"
	checkplayergender
# 42 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SouthernIsland_Interior_EventScript_SetBrendanGfx
# 43 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, SouthernIsland_Interior_EventScript_SetMayGfx
# 44 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 45 "data/maps/SouthernIsland_Interior/scripts.pory"

# 46 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetBrendanGfx::
# 47 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 48 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 49 "data/maps/SouthernIsland_Interior/scripts.pory"

# 50 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetMayGfx::
# 51 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 52 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 53 "data/maps/SouthernIsland_Interior/scripts.pory"

# 54 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_TryLatiEncounter::
# 55 "data/maps/SouthernIsland_Interior/scripts.pory"
	lockall
# 56 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_0x8008, 12  @ Player's Y coordinate. Not read
# 57 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_Lati
# 58 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 59 "data/maps/SouthernIsland_Interior/scripts.pory"

# 60 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati::
# 61 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_TEMP_2, SouthernIsland_Interior_EventScript_Sign
# 62 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_DEFEATED_LATIAS_OR_LATIOS, SouthernIsland_Interior_EventScript_Sign
# 63 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_CAUGHT_LATIAS_OR_LATIOS, SouthernIsland_Interior_EventScript_Sign
# 64 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_SOUTHERN_ISLAND, SouthernIsland_Interior_EventScript_Sign
# 65 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_ENCOUNTERED_LATIAS_OR_LATIOS
# 66 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_TEMP_2
# 67 "data/maps/SouthernIsland_Interior/scripts.pory"
	special SpawnCameraObject
# 68 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SouthernIsland_Interior_Movement_CameraPanUp
# 69 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 0
# 70 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 50
# 71 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitse
# 72 "data/maps/SouthernIsland_Interior/scripts.pory"
	playmoncry VAR_TEMP_4, CRY_MODE_NORMAL
# 73 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 30
# 74 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmoncry
# 75 "data/maps/SouthernIsland_Interior/scripts.pory"
	addobject LOCALID_LATI
# 76 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 30
# 77 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SouthernIsland_Interior_Movement_CameraPanDown
# 78 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement LOCALID_LATI, SouthernIsland_Interior_Movement_LatiApproach
# 79 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 0
# 80 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 50
# 81 "data/maps/SouthernIsland_Interior/scripts.pory"
	special RemoveCameraObject
# 82 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_LATI
# 83 "data/maps/SouthernIsland_Interior/scripts.pory"
	call_if_eq VAR_TEMP_4, SPECIES_LATIOS, SouthernIsland_Interior_EventScript_SetLatiosBattleVars
# 84 "data/maps/SouthernIsland_Interior/scripts.pory"
	call_if_ne VAR_TEMP_4, SPECIES_LATIOS, SouthernIsland_Interior_EventScript_SetLatiasBattleVars
# 85 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 86 "data/maps/SouthernIsland_Interior/scripts.pory"
	special BattleSetup_StartLatiBattle
# 87 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitstate
# 88 "data/maps/SouthernIsland_Interior/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 89 "data/maps/SouthernIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 90 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SouthernIsland_Interior_EventScript_LatiDefeated
# 91 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SouthernIsland_Interior_EventScript_RanFromLati
# 92 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SouthernIsland_Interior_EventScript_RanFromLati
# 93 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_CAUGHT_LATIAS_OR_LATIOS
# 94 "data/maps/SouthernIsland_Interior/scripts.pory"
	releaseall
# 95 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 96 "data/maps/SouthernIsland_Interior/scripts.pory"

# 97 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_LatiDefeated::
# 98 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_DEFEATED_LATIAS_OR_LATIOS
# 99 "data/maps/SouthernIsland_Interior/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_4
# 100 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 101 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 102 "data/maps/SouthernIsland_Interior/scripts.pory"

# 103 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_RanFromLati::
# 104 "data/maps/SouthernIsland_Interior/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_4
# 105 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 106 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 107 "data/maps/SouthernIsland_Interior/scripts.pory"

# 108 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Sign::
# 109 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_Text_Sign, MSGBOX_DEFAULT
# 110 "data/maps/SouthernIsland_Interior/scripts.pory"
	releaseall
# 111 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 112 "data/maps/SouthernIsland_Interior/scripts.pory"

# 113 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetLatiosBattleVars::
# 114 "data/maps/SouthernIsland_Interior/scripts.pory"
	seteventmon SPECIES_LATIOS, 50, ITEM_SOUL_DEW
# 115 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 116 "data/maps/SouthernIsland_Interior/scripts.pory"

# 117 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetLatiasBattleVars::
# 118 "data/maps/SouthernIsland_Interior/scripts.pory"
	seteventmon SPECIES_LATIAS, 50, ITEM_SOUL_DEW
# 119 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 120 "data/maps/SouthernIsland_Interior/scripts.pory"

# 121 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_CameraPanUp:
# 122 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 123 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 124 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 125 "data/maps/SouthernIsland_Interior/scripts.pory"
	step_end
# 126 "data/maps/SouthernIsland_Interior/scripts.pory"

# 127 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_CameraPanDown:
# 128 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 129 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 130 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 131 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 132 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 133 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 134 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 135 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 136 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 137 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 138 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_in_place_faster_up
# 139 "data/maps/SouthernIsland_Interior/scripts.pory"
	step_end
# 140 "data/maps/SouthernIsland_Interior/scripts.pory"

# 141 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_LatiApproach:
# 142 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 143 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 144 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 145 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 146 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 147 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 148 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 149 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 150 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 151 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 152 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 153 "data/maps/SouthernIsland_Interior/scripts.pory"
	step_end

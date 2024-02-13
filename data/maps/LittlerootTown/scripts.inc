# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_TWIN, 1
# 3 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_MOM, 4
# 4 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 6 "data/maps/LittlerootTown/scripts.pory"

# 7 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 8 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 9 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 10 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 11 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 12 "data/maps/LittlerootTown/scripts.pory"

# 13 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 14 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 15 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 17 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 18 "data/maps/LittlerootTown/scripts.pory"

# 19 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 20 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 21 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 22 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 23 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 24 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 26 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 27 "data/maps/LittlerootTown/scripts.pory"

# 28 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 29 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 30 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 31 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 32 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 34 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 35 "data/maps/LittlerootTown/scripts.pory"

# 36 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 37 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 38 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 39 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 40 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 41 "data/maps/LittlerootTown/scripts.pory"

# 42 "data/maps/LittlerootTown/scripts.pory"

# 43 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 44 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 45 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 46 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 47 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 48 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 49 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 50 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 51 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 52 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 53 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 54 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 55 "data/maps/LittlerootTown/scripts.pory"
	end
# 56 "data/maps/LittlerootTown/scripts.pory"

# 57 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 58 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 59 "data/maps/LittlerootTown/scripts.pory"
	return
# 60 "data/maps/LittlerootTown/scripts.pory"

# 61 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 62 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 63 "data/maps/LittlerootTown/scripts.pory"
	return
# 64 "data/maps/LittlerootTown/scripts.pory"

# 65 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 66 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 67 "data/maps/LittlerootTown/scripts.pory"
	return
# 68 "data/maps/LittlerootTown/scripts.pory"

# 69 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 70 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 71 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 72 "data/maps/LittlerootTown/scripts.pory"
	return
# 73 "data/maps/LittlerootTown/scripts.pory"

# 74 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 75 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 76 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 77 "data/maps/LittlerootTown/scripts.pory"
	return
# 78 "data/maps/LittlerootTown/scripts.pory"

# 79 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 80 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 8
# 81 "data/maps/LittlerootTown/scripts.pory"
	return
# 82 "data/maps/LittlerootTown/scripts.pory"

# 83 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 84 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 85 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 10, 1
# 86 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 87 "data/maps/LittlerootTown/scripts.pory"
	return
# 88 "data/maps/LittlerootTown/scripts.pory"

# 89 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 90 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 7, 2
# 91 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 92 "data/maps/LittlerootTown/scripts.pory"
	return
# 93 "data/maps/LittlerootTown/scripts.pory"

# 94 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 95 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 96 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 97 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 98 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 99 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 100 "data/maps/LittlerootTown/scripts.pory"
	return
# 101 "data/maps/LittlerootTown/scripts.pory"

# 102 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 103 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 5, 9
# 104 "data/maps/LittlerootTown/scripts.pory"
	return
# 105 "data/maps/LittlerootTown/scripts.pory"

# 106 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 107 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 9
# 108 "data/maps/LittlerootTown/scripts.pory"
	return
# 109 "data/maps/LittlerootTown/scripts.pory"

# 110 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 111 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 112 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 113 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 114 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 115 "data/maps/LittlerootTown/scripts.pory"

# 116 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 117 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 118 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 119 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 120 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 121 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 122 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 123 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 124 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 125 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 126 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 127 "data/maps/LittlerootTown/scripts.pory"
	end
# 128 "data/maps/LittlerootTown/scripts.pory"

# 129 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 130 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 131 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 132 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 133 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 134 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 135 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 136 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 137 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 138 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 139 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 140 "data/maps/LittlerootTown/scripts.pory"
	end
# 141 "data/maps/LittlerootTown/scripts.pory"

# 142 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 143 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 144 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 145 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 146 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 147 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 148 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 149 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 150 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 151 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 152 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 153 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 154 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 155 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 156 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 157 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 158 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 159 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 160 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 161 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 162 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 163 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 164 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 165 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 166 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 167 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 168 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 169 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 170 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 171 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 172 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 173 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 174 "data/maps/LittlerootTown/scripts.pory"
	return
# 175 "data/maps/LittlerootTown/scripts.pory"

# 176 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 177 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 178 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 179 "data/maps/LittlerootTown/scripts.pory"

# 180 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 181 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 182 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 183 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 184 "data/maps/LittlerootTown/scripts.pory"

# 185 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 186 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 187 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 188 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 189 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 190 "data/maps/LittlerootTown/scripts.pory"

# 191 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 192 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 193 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 194 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 195 "data/maps/LittlerootTown/scripts.pory"

# 196 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 197 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 198 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 199 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 200 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 201 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 202 "data/maps/LittlerootTown/scripts.pory"

# 203 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 204 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 205 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 206 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 207 "data/maps/LittlerootTown/scripts.pory"

# 208 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 209 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 210 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 211 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 212 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 213 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 214 "data/maps/LittlerootTown/scripts.pory"

# 215 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 216 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 217 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 218 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 219 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 220 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 221 "data/maps/LittlerootTown/scripts.pory"
	msgbox_mugshot LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT, MUGSHOT_BIRCH
# 222 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 223 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 224 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 225 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 226 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 227 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 228 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 229 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 230 "data/maps/LittlerootTown/scripts.pory"
	end
# 231 "data/maps/LittlerootTown/scripts.pory"

# 232 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 233 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 234 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 235 "data/maps/LittlerootTown/scripts.pory"

# 236 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 237 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 238 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 239 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 240 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 241 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 242 "data/maps/LittlerootTown/scripts.pory"
	end
# 243 "data/maps/LittlerootTown/scripts.pory"

# 244 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 245 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 246 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 247 "data/maps/LittlerootTown/scripts.pory"
	end
# 248 "data/maps/LittlerootTown/scripts.pory"

# 249 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 250 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 251 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 252 "data/maps/LittlerootTown/scripts.pory"
	end
# 253 "data/maps/LittlerootTown/scripts.pory"

# 254 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 255 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 256 "data/maps/LittlerootTown/scripts.pory"
	end
# 257 "data/maps/LittlerootTown/scripts.pory"

# 258 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 259 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 260 "data/maps/LittlerootTown/scripts.pory"
	end
# 261 "data/maps/LittlerootTown/scripts.pory"

# 262 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 263 "data/maps/LittlerootTown/scripts.pory"
	lock
# 264 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 265 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 266 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 267 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 268 "data/maps/LittlerootTown/scripts.pory"
	msgbox_mugshot LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT, MUGSHOT_TWIN
# 269 "data/maps/LittlerootTown/scripts.pory"
	release
# 270 "data/maps/LittlerootTown/scripts.pory"
	end
# 271 "data/maps/LittlerootTown/scripts.pory"

# 272 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 273 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 274 "data/maps/LittlerootTown/scripts.pory"
	msgbox_mugshot LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT, MUGSHOT_TWIN
# 275 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 276 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 277 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 278 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 279 "data/maps/LittlerootTown/scripts.pory"
	release
# 280 "data/maps/LittlerootTown/scripts.pory"
	end
# 281 "data/maps/LittlerootTown/scripts.pory"

# 282 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 283 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 284 "data/maps/LittlerootTown/scripts.pory"
	msgbox_mugshot LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT, MUGSHOT_TWIN
# 285 "data/maps/LittlerootTown/scripts.pory"
	release
# 286 "data/maps/LittlerootTown/scripts.pory"
	end
# 287 "data/maps/LittlerootTown/scripts.pory"

# 288 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 289 "data/maps/LittlerootTown/scripts.pory"
	msgbox_mugshot LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT, MUGSHOT_TWIN
# 290 "data/maps/LittlerootTown/scripts.pory"
	release
# 291 "data/maps/LittlerootTown/scripts.pory"
	end
# 292 "data/maps/LittlerootTown/scripts.pory"

# 293 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 294 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 295 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 296 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 297 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 298 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 299 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 300 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 301 "data/maps/LittlerootTown/scripts.pory"
	end
# 302 "data/maps/LittlerootTown/scripts.pory"

# 303 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 304 "data/maps/LittlerootTown/scripts.pory"
	msgbox_mugshot LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT, MUGSHOT_TWIN
# 305 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 306 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 307 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 308 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 309 "data/maps/LittlerootTown/scripts.pory"
	msgbox_mugshot LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT, MUGSHOT_TWIN
# 310 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 311 "data/maps/LittlerootTown/scripts.pory"
	return
# 312 "data/maps/LittlerootTown/scripts.pory"

# 313 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 314 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 315 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 316 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 317 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 318 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 319 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 320 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 321 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 322 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 323 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 324 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 325 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 326 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 327 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 328 "data/maps/LittlerootTown/scripts.pory"

# 329 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 330 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 331 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 332 "data/maps/LittlerootTown/scripts.pory"

# 333 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 334 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 335 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 336 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 337 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 338 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 339 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 340 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 341 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 342 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 343 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 344 "data/maps/LittlerootTown/scripts.pory"

# 345 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 346 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 347 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 348 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 349 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 350 "data/maps/LittlerootTown/scripts.pory"

# 351 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 352 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 353 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 354 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 355 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 356 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 357 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 358 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 359 "data/maps/LittlerootTown/scripts.pory"
	end
# 360 "data/maps/LittlerootTown/scripts.pory"

# 361 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 362 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 363 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 364 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 365 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 366 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 367 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 368 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 369 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 370 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 371 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 372 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 373 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 374 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 375 "data/maps/LittlerootTown/scripts.pory"

# 376 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 377 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 378 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 379 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 380 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 381 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 382 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 383 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 384 "data/maps/LittlerootTown/scripts.pory"

# 385 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 386 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 387 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 388 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 389 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 390 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 391 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 392 "data/maps/LittlerootTown/scripts.pory"
	msgbox_mugshot LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT, MUGSHOT_TWIN
# 393 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 394 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 395 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 396 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 397 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 398 "data/maps/LittlerootTown/scripts.pory"
	end
# 399 "data/maps/LittlerootTown/scripts.pory"

# 400 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 401 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 402 "data/maps/LittlerootTown/scripts.pory"
	end
# 403 "data/maps/LittlerootTown/scripts.pory"

# 404 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 405 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 406 "data/maps/LittlerootTown/scripts.pory"
	end
# 407 "data/maps/LittlerootTown/scripts.pory"

# 408 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 409 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 410 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 411 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 412 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 413 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 414 "data/maps/LittlerootTown/scripts.pory"
	end
# 415 "data/maps/LittlerootTown/scripts.pory"

# 416 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 417 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 418 "data/maps/LittlerootTown/scripts.pory"
	return
# 419 "data/maps/LittlerootTown/scripts.pory"

# 420 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 421 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 422 "data/maps/LittlerootTown/scripts.pory"
	return
# 423 "data/maps/LittlerootTown/scripts.pory"

# 424 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 425 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 426 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 427 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 428 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 429 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 430 "data/maps/LittlerootTown/scripts.pory"
	end
# 431 "data/maps/LittlerootTown/scripts.pory"

# 432 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 433 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 434 "data/maps/LittlerootTown/scripts.pory"
	return
# 435 "data/maps/LittlerootTown/scripts.pory"

# 436 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 437 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 438 "data/maps/LittlerootTown/scripts.pory"
	return
# 439 "data/maps/LittlerootTown/scripts.pory"

# 440 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 441 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 442 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 443 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 10, 9
# 444 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveDexNavTrigger
# 445 "data/maps/LittlerootTown/scripts.pory"
	end
# 446 "data/maps/LittlerootTown/scripts.pory"

# 447 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 448 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 449 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 450 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 11, 9
# 451 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveDexNavTrigger
# 452 "data/maps/LittlerootTown/scripts.pory"
	end
# 453 "data/maps/LittlerootTown/scripts.pory"

# 454 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveDexNavTrigger2::
# 455 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 456 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 457 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveDexNavTrigger
# 458 "data/maps/LittlerootTown/scripts.pory"
	end
# 459 "data/maps/LittlerootTown/scripts.pory"

# 460 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveDexNavTrigger3::
# 461 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 462 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 463 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveDexNavTrigger
# 464 "data/maps/LittlerootTown/scripts.pory"
	end
# 465 "data/maps/LittlerootTown/scripts.pory"

# 466 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveDexNavTrigger4::
# 467 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 468 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 469 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveDexNavTrigger
# 470 "data/maps/LittlerootTown/scripts.pory"
	end
# 471 "data/maps/LittlerootTown/scripts.pory"

# 472 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveDexNavTrigger5::
# 473 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 474 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 475 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveDexNavTrigger
# 476 "data/maps/LittlerootTown/scripts.pory"
	end
# 477 "data/maps/LittlerootTown/scripts.pory"

# 478 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveDexNavTrigger::
# 479 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 480 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 481 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 482 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 483 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 484 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 485 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 486 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 487 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 488 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 489 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 490 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveDexNav
# 491 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 492 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 493 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 494 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 495 "data/maps/LittlerootTown/scripts.pory"
	end
# 496 "data/maps/LittlerootTown/scripts.pory"

# 497 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 498 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 499 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 500 "data/maps/LittlerootTown/scripts.pory"
	return
# 501 "data/maps/LittlerootTown/scripts.pory"

# 502 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 503 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 504 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 505 "data/maps/LittlerootTown/scripts.pory"
	return
# 506 "data/maps/LittlerootTown/scripts.pory"

# 507 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 508 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 509 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 510 "data/maps/LittlerootTown/scripts.pory"
	return
# 511 "data/maps/LittlerootTown/scripts.pory"

# 512 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 513 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 514 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 515 "data/maps/LittlerootTown/scripts.pory"
	return
# 516 "data/maps/LittlerootTown/scripts.pory"

# 517 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 518 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 519 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 520 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 521 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 522 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 523 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 524 "data/maps/LittlerootTown/scripts.pory"
	return
# 525 "data/maps/LittlerootTown/scripts.pory"

# 526 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 527 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 528 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 529 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 530 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 531 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 532 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 533 "data/maps/LittlerootTown/scripts.pory"
	return
# 534 "data/maps/LittlerootTown/scripts.pory"

# 535 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 536 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 537 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 538 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 539 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 540 "data/maps/LittlerootTown/scripts.pory"
	return
# 541 "data/maps/LittlerootTown/scripts.pory"

# 542 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 543 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 544 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 545 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 546 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 547 "data/maps/LittlerootTown/scripts.pory"
	return
# 548 "data/maps/LittlerootTown/scripts.pory"

# 549 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 550 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 551 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 552 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 553 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 554 "data/maps/LittlerootTown/scripts.pory"
	return
# 555 "data/maps/LittlerootTown/scripts.pory"

# 556 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 557 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 558 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 559 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 560 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 561 "data/maps/LittlerootTown/scripts.pory"
	return
# 562 "data/maps/LittlerootTown/scripts.pory"

# 563 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 564 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 565 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 566 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 567 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 568 "data/maps/LittlerootTown/scripts.pory"
	return
# 569 "data/maps/LittlerootTown/scripts.pory"

# 570 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 571 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 572 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 573 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 574 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 575 "data/maps/LittlerootTown/scripts.pory"
	return
# 576 "data/maps/LittlerootTown/scripts.pory"

# 577 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 578 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 579 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 580 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 581 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 582 "data/maps/LittlerootTown/scripts.pory"
	return
# 583 "data/maps/LittlerootTown/scripts.pory"

# 584 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 585 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 586 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 587 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 588 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 589 "data/maps/LittlerootTown/scripts.pory"
	return
# 590 "data/maps/LittlerootTown/scripts.pory"

# 591 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 592 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 593 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 594 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 595 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 596 "data/maps/LittlerootTown/scripts.pory"
	return
# 597 "data/maps/LittlerootTown/scripts.pory"

# 598 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 599 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 600 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 601 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 602 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 603 "data/maps/LittlerootTown/scripts.pory"
	return
# 604 "data/maps/LittlerootTown/scripts.pory"

# 605 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 606 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 607 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 608 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 609 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 610 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 611 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 612 "data/maps/LittlerootTown/scripts.pory"
	return
# 613 "data/maps/LittlerootTown/scripts.pory"

# 614 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 615 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 616 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 617 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 618 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 619 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 620 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 621 "data/maps/LittlerootTown/scripts.pory"
	return
# 622 "data/maps/LittlerootTown/scripts.pory"

# 623 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 624 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 625 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 626 "data/maps/LittlerootTown/scripts.pory"
	return
# 627 "data/maps/LittlerootTown/scripts.pory"

# 628 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 629 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 630 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 631 "data/maps/LittlerootTown/scripts.pory"
	return
# 632 "data/maps/LittlerootTown/scripts.pory"

# 633 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 634 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 635 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 636 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 637 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 638 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 639 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 640 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 641 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 642 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 643 "data/maps/LittlerootTown/scripts.pory"
	return
# 644 "data/maps/LittlerootTown/scripts.pory"

# 645 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 646 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 647 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 648 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 649 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 650 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 651 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 652 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 653 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 654 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 655 "data/maps/LittlerootTown/scripts.pory"
	return
# 656 "data/maps/LittlerootTown/scripts.pory"

# 657 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 658 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 659 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 660 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 661 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 662 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 663 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 664 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 665 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 666 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 667 "data/maps/LittlerootTown/scripts.pory"
	return
# 668 "data/maps/LittlerootTown/scripts.pory"

# 669 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 670 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 671 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 672 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 673 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 674 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 675 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 676 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 677 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 678 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 679 "data/maps/LittlerootTown/scripts.pory"
	return
# 680 "data/maps/LittlerootTown/scripts.pory"

# 681 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 682 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 683 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 684 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 685 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 686 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 687 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 688 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 689 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 690 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 691 "data/maps/LittlerootTown/scripts.pory"
	return
# 692 "data/maps/LittlerootTown/scripts.pory"

# 693 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 694 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 695 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 696 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 697 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 698 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 699 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 700 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 701 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 702 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 703 "data/maps/LittlerootTown/scripts.pory"
	return
# 704 "data/maps/LittlerootTown/scripts.pory"

# 705 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 706 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 707 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 708 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 709 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 710 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 711 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 712 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 713 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 714 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 715 "data/maps/LittlerootTown/scripts.pory"
	return
# 716 "data/maps/LittlerootTown/scripts.pory"

# 717 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 718 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 719 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 720 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 721 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 722 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 723 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 724 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 725 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 726 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 727 "data/maps/LittlerootTown/scripts.pory"
	return
# 728 "data/maps/LittlerootTown/scripts.pory"

# 729 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 730 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 731 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 732 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 733 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 734 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 735 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 736 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 737 "data/maps/LittlerootTown/scripts.pory"

# 738 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 739 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 740 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 741 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 742 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 743 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 744 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 745 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 746 "data/maps/LittlerootTown/scripts.pory"

# 747 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 748 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 749 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 750 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 751 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 752 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 753 "data/maps/LittlerootTown/scripts.pory"

# 754 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 755 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 756 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 757 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 758 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 759 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 760 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 761 "data/maps/LittlerootTown/scripts.pory"

# 762 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 763 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 764 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 765 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 766 "data/maps/LittlerootTown/scripts.pory"

# 767 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 768 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 769 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 770 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 771 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 772 "data/maps/LittlerootTown/scripts.pory"

# 773 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 774 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 775 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 776 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 777 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 778 "data/maps/LittlerootTown/scripts.pory"

# 779 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 780 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 781 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 782 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 783 "data/maps/LittlerootTown/scripts.pory"

# 784 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 785 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 786 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 787 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 788 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 789 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 790 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 791 "data/maps/LittlerootTown/scripts.pory"

# 792 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 793 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 794 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 795 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 796 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 797 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 798 "data/maps/LittlerootTown/scripts.pory"

# 799 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 800 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 801 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 802 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 803 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 804 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 805 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 806 "data/maps/LittlerootTown/scripts.pory"

# 807 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 808 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 809 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 810 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 811 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 812 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 813 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 814 "data/maps/LittlerootTown/scripts.pory"

# 815 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 816 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 817 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 818 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 819 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 820 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 821 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 822 "data/maps/LittlerootTown/scripts.pory"

# 823 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 824 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 825 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 826 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 827 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 828 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 829 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 830 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 831 "data/maps/LittlerootTown/scripts.pory"

# 832 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 833 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 834 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 835 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 836 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 837 "data/maps/LittlerootTown/scripts.pory"

# 838 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 839 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 840 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 841 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 842 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 843 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 844 "data/maps/LittlerootTown/scripts.pory"

# 845 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 846 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 847 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 848 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 849 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 850 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 851 "data/maps/LittlerootTown/scripts.pory"

# 852 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 853 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 854 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 855 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 856 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 857 "data/maps/LittlerootTown/scripts.pory"

# 858 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 859 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 860 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 861 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 862 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 863 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 864 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 865 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 866 "data/maps/LittlerootTown/scripts.pory"

# 867 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 868 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 869 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 870 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 871 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 872 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 873 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 874 "data/maps/LittlerootTown/scripts.pory"

# 875 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 876 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 877 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 878 "data/maps/LittlerootTown/scripts.pory"

# 879 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 880 "data/maps/LittlerootTown/scripts.pory"
	lock
# 881 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 882 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 883 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 884 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 885 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveDexNav
# 886 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 887 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 888 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 889 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 890 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 891 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 892 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 893 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 894 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 895 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 896 "data/maps/LittlerootTown/scripts.pory"
	end
# 897 "data/maps/LittlerootTown/scripts.pory"

# 898 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 899 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 900 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 901 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_EXP_ALL
# 902 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 903 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 904 "data/maps/LittlerootTown/scripts.pory"
	release
# 905 "data/maps/LittlerootTown/scripts.pory"
	end
# 906 "data/maps/LittlerootTown/scripts.pory"

# 907 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveDexNav::
# 908 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_EnableDexNav, MSGBOX_DEFAULT
# 909 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 910 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_TurnOnDexNav
# 911 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 912 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 913 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainDexNav, MSGBOX_DEFAULT
# 914 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 915 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 916 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 917 "data/maps/LittlerootTown/scripts.pory"
	return
# 918 "data/maps/LittlerootTown/scripts.pory"

# 919 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 920 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 921 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 922 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 923 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 924 "data/maps/LittlerootTown/scripts.pory"
	.string "How do you like it?\n"
# 925 "data/maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 926 "data/maps/LittlerootTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 927 "data/maps/LittlerootTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 928 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 929 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 930 "data/maps/LittlerootTown/scripts.pory"

# 931 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 932 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 933 "data/maps/LittlerootTown/scripts.pory"

# 934 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_EnableDexNav:
# 935 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 936 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 937 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 938 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 939 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 940 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 941 "data/maps/LittlerootTown/scripts.pory"
	.string "Wow, honey! You even got a brand new\n"
# 942 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokédex! I've used your father's\l"
# 943 "data/maps/LittlerootTown/scripts.pory"
	.string "before, give it here...$"
# 944 "data/maps/LittlerootTown/scripts.pory"

# 945 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TurnOnDexNav:
# 946 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom turned on the DexNav feature of\n"
# 947 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s Pokédex!$"
# 948 "data/maps/LittlerootTown/scripts.pory"

# 949 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainDexNav:
# 950 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Ha ha, guess I learned a thing or\n"
# 951 "data/maps/LittlerootTown/scripts.pory"
	.string "two from your dad's Pokédex!\p"
# 952 "data/maps/LittlerootTown/scripts.pory"
	.string "To use the DexNav, you just have to\n"
# 953 "data/maps/LittlerootTown/scripts.pory"
	.string "open the menu and select the Pokémon\l"
# 954 "data/maps/LittlerootTown/scripts.pory"
	.string "you want to find! Then when you get\l"
# 955 "data/maps/LittlerootTown/scripts.pory"
	.string "close, hold {A_BUTTON} to creep up!\p"
# 956 "data/maps/LittlerootTown/scripts.pory"
	.string "Remember, wild Pokémon will run away\n"
# 957 "data/maps/LittlerootTown/scripts.pory"
	.string "if startled, so hold {A_BUTTON} to sneak!$"
# 958 "data/maps/LittlerootTown/scripts.pory"

# 959 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 960 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 961 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 962 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 963 "data/maps/LittlerootTown/scripts.pory"
	.string "POKéMON now…\l"
# 964 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 965 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 966 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 967 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 968 "data/maps/LittlerootTown/scripts.pory"

# 969 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 970 "data/maps/LittlerootTown/scripts.pory"
	.string "With the DexNav function, you can\n"
# 971 "data/maps/LittlerootTown/scripts.pory"
	.string "find rare Pokémon and creep up with {A_BUTTON}!\p"
# 972 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 973 "data/maps/LittlerootTown/scripts.pory"

# 974 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 975 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
# 976 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 977 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 978 "data/maps/LittlerootTown/scripts.pory"
	.string "When does PROF. BIRCH spend time\n"
# 979 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 980 "data/maps/LittlerootTown/scripts.pory"

# 981 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 982 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 983 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 984 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!$"
# 985 "data/maps/LittlerootTown/scripts.pory"

# 986 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 987 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 988 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 989 "data/maps/LittlerootTown/scripts.pory"

# 990 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 991 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 992 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 993 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 994 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 995 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 996 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 997 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 998 "data/maps/LittlerootTown/scripts.pory"

# 999 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 1000 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 1001 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 1002 "data/maps/LittlerootTown/scripts.pory"

# 1003 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1004 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 1005 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 1006 "data/maps/LittlerootTown/scripts.pory"

# 1007 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1008 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 1009 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1010 "data/maps/LittlerootTown/scripts.pory"

# 1011 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1012 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"
# 1013 "data/maps/LittlerootTown/scripts.pory"

# 1014 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1015 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1016 "data/maps/LittlerootTown/scripts.pory"

# 1017 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1018 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"
# 1019 "data/maps/LittlerootTown/scripts.pory"

# 1020 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1021 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
# 1022 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1023 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1024 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1025 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1026 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1027 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1028 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1029 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"

KiposTown_ConservationCenter_MapScripts::
# 2 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, KiposTown_ConservationCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

KiposTown_ConservationCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, KiposTown_ConservationCenter_EventScript_CheckEventStatus
	.2byte 0


KiposTown_ConservationCenter_EventScript_CheckEventStatus::
# 9 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	setvar VAR_TEMP_1, 1
# 11 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	goto_if_unset FLAG_DID_PIRAEUS_SAIL_TO_KIPOS_TOWN_EVENT, KiposTown_ConservationCenter_EventScript_CheckEventStatus_2
KiposTown_ConservationCenter_EventScript_CheckEventStatus_1:
# 16 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	releaseall
	end

KiposTown_ConservationCenter_EventScript_CheckEventStatus_2:
# 13 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	goto KiposTown_ConservationCenter_EventScript_PlayerShownAround
	goto KiposTown_ConservationCenter_EventScript_CheckEventStatus_1


KiposTown_ConservationCenter_EventScript_PlayerShownAround::
# 22 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	lockall
# 23 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 24 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	waitmovement 0
# 25 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 10
# 27 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	applymovement 11, KiposTown_ConservationCenter_Movement_RusselEnterBuilding
# 28 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KiposTown_ConservationCenter_Movement_PlayerEnterBuilding
# 29 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	waitmovement 0
# 30 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 10
# 32 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_PlayerShownAround_Text_0
# 33 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_EventScript_PlayerShownAround_Text_1
# 34 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 36 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	applymovement 11, KiposTown_ConservationCenter_Movement_RusselExitBuilding
# 37 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	waitmovement 0
# 38 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	hideobjectat 11, MAP_KIPOS_TOWN_CONSERVATION_CENTER
# 40 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KiposTown_ConservationCenter_Movement_PlayerExitBuilding
# 41 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	waitmovement 0
# 42 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	warpsilent MAP_KIPOS_TOWN_ZOO, 24, 41
# 44 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	waitstate
# 45 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	releaseall
	end


# 49 "data/maps/KiposTown_ConservationCenter/scripts.pory"
KiposTown_ConservationCenter_Movement_RusselEnterBuilding:
# 51 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 51 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 51 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 51 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 51 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 51 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 52 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	face_down
# 53 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	step_end

# 55 "data/maps/KiposTown_ConservationCenter/scripts.pory"
KiposTown_ConservationCenter_Movement_PlayerEnterBuilding:
# 57 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 57 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 57 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 57 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 57 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 57 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 58 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	face_up
# 59 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	step_end

# 61 "data/maps/KiposTown_ConservationCenter/scripts.pory"
KiposTown_ConservationCenter_Movement_RusselExitBuilding:
# 63 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 63 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 63 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 64 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	step_end

# 66 "data/maps/KiposTown_ConservationCenter/scripts.pory"
KiposTown_ConservationCenter_Movement_PlayerExitBuilding:
# 68 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 68 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 68 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 68 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 69 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	step_end

KiposTown_ConservationCenter_Trigger_EnterZoo_Left::
# 82 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	lock
# 83 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 84 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	waitmovement 0
# 85 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	goto KiposTown_ConservationCenter_EventScript_EnterZoo
# 86 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	release
	end


KiposTown_ConservationCenter_Trigger_EnterZoo_Right::
# 91 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	lock
# 92 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 93 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	waitmovement 0
# 94 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	goto KiposTown_ConservationCenter_EventScript_EnterZoo
# 95 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	release
	end


KiposTown_ConservationCenter_EventScript_EnterZoo::
# 100 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_EnterZoo_Text_0
# 101 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_EventScript_EnterZoo_Text_1
# 102 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 103 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 10
# 104 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 105 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	warp MAP_KIPOS_TOWN_ZOO, 24, 41
# 106 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	waitstate
# 107 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	release
	end


KiposTown_ConservationCenter_EventScript_PlayerShownAround_Text_0:
# 32 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Mr. Russel$"

KiposTown_ConservationCenter_EventScript_PlayerShownAround_Text_1:
# 33 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Welcome to the {COLOR GREEN}Sunset Wildlife\n"
	.string "Conservation Center{COLOR DARK_GRAY}! Luckily, Team\l"
	.string "Chimera didn't show much interest in our\l"
	.string "tools or research papers, so everything\l"
	.string "in here is intact.\p"
	.string "In your own time, please be sure to\n"
	.string "introduce yourself to everyone here.\l"
	.string "We're all looking forward to working\l"
	.string "with you!\p"
	.string "Oh, I'm getting ahead of myself. Come,\n"
	.string "let's see the {COLOR GREEN}Pokémon Zoo{COLOR DARK_GRAY} hosted by the\l"
	.string "Conservation Center... what remains of\l"
	.string "it, anyway.$"

KiposTown_ConservationCenter_EventScript_EnterZoo_Text_0:
# 100 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Desk Attendant$"

KiposTown_ConservationCenter_EventScript_EnterZoo_Text_1:
# 101 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Welcome to the Sunset Pokémon\n"
	.string "Conservation Center! As a Pokémon\l"
	.string "donor, you are permitted to enter for\l"
	.string "free.\p"
	.string "We hope you enjoy your time in the\n"
	.string "Sunset Pokémon Zoo!$"

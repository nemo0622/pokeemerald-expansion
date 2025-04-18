KiposTown_MapScripts::
# 2 "data/maps/KiposTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KiposTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 27 "data/maps/KiposTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, KiposTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

KiposTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/KiposTown/scripts.pory"
	goto_if_set FLAG_DID_PIRAEUS_SAIL_TO_KIPOS_TOWN_EVENT, KiposTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
KiposTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/KiposTown/scripts.pory"
	setflag FLAG_VISITED_KIPOS_TOWN
# 10 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 11 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 12 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 13 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 14 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 15 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 16 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 17 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 18 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 19 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 20 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 21 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 22 "data/maps/KiposTown/scripts.pory"
	setobjectaswildencounter 22, ENCOUNTER_LAND
# 23 "data/maps/KiposTown/scripts.pory"
	setobjectaswildencounter 23, ENCOUNTER_LAND
# 24 "data/maps/KiposTown/scripts.pory"
	setobjectaswildencounter 24, ENCOUNTER_LAND
	return

KiposTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/KiposTown/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto KiposTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

KiposTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 28 "data/maps/KiposTown/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, KiposTown_EventScript_CheckEventStatus
	.2byte 0


KiposTown_EventScript_CheckEventStatus::
# 34 "data/maps/KiposTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 36 "data/maps/KiposTown/scripts.pory"
	goto_if_unset FLAG_DID_PIRAEUS_SAIL_TO_KIPOS_TOWN_EVENT, KiposTown_EventScript_CheckEventStatus_2
KiposTown_EventScript_CheckEventStatus_1:
# 41 "data/maps/KiposTown/scripts.pory"
	releaseall
	end

KiposTown_EventScript_CheckEventStatus_2:
# 38 "data/maps/KiposTown/scripts.pory"
	goto KiposTown_EventScript_LeadPlayerToConservationCenter
	goto KiposTown_EventScript_CheckEventStatus_1


KiposTown_EventScript_LeadPlayerToConservationCenter::
# 47 "data/maps/KiposTown/scripts.pory"
	lockall
# 49 "data/maps/KiposTown/scripts.pory"
	delay 20
# 50 "data/maps/KiposTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 51 "data/maps/KiposTown/scripts.pory"
	applymovement 3, KiposTown_Movement_RusselApproachPlayer
# 52 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 54 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_LeadPlayerToConservationCenter_Text_0
# 55 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_LeadPlayerToConservationCenter_Text_1
# 56 "data/maps/KiposTown/scripts.pory"
	closemessage
# 58 "data/maps/KiposTown/scripts.pory"
	applymovement 3, KiposTown_Movement_RusselWalksToConservationCenter_1
# 59 "data/maps/KiposTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KiposTown_Movement_PlayerFollowsToConservationCenter_1
# 60 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 61 "data/maps/KiposTown/scripts.pory"
	delay 10
# 63 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_LeadPlayerToConservationCenter_Text_0
# 64 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_LeadPlayerToConservationCenter_Text_2
# 65 "data/maps/KiposTown/scripts.pory"
	closemessage
# 67 "data/maps/KiposTown/scripts.pory"
	applymovement 3, KiposTown_Movement_RusselWalksToConservationCenter_2
# 68 "data/maps/KiposTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KiposTown_Movement_PlayerFollowsToConservationCenter_2
# 69 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 70 "data/maps/KiposTown/scripts.pory"
	delay 10
# 72 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_LeadPlayerToConservationCenter_Text_0
# 73 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_LeadPlayerToConservationCenter_Text_3
# 74 "data/maps/KiposTown/scripts.pory"
	closemessage
# 76 "data/maps/KiposTown/scripts.pory"
	applymovement 3, Common_Movement_WalkUp
# 77 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 78 "data/maps/KiposTown/scripts.pory"
	hideobjectat 3, MAP_KIPOS_TOWN
# 79 "data/maps/KiposTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 80 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 81 "data/maps/KiposTown/scripts.pory"
	warpsilent MAP_KIPOS_TOWN_CONSERVATION_CENTER, 9, 11
# 83 "data/maps/KiposTown/scripts.pory"
	waitstate
# 84 "data/maps/KiposTown/scripts.pory"
	releaseall
	end


# 88 "data/maps/KiposTown/scripts.pory"
KiposTown_Movement_RusselApproachPlayer:
# 90 "data/maps/KiposTown/scripts.pory"
	emote_exclamation_mark
# 91 "data/maps/KiposTown/scripts.pory"
	delay_16
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 93 "data/maps/KiposTown/scripts.pory"
	face_down
# 94 "data/maps/KiposTown/scripts.pory"
	step_end

# 96 "data/maps/KiposTown/scripts.pory"
KiposTown_Movement_RusselWalksToConservationCenter_1:
# 98 "data/maps/KiposTown/scripts.pory"
	walk_left
# 98 "data/maps/KiposTown/scripts.pory"
	walk_left
# 98 "data/maps/KiposTown/scripts.pory"
	walk_left
# 98 "data/maps/KiposTown/scripts.pory"
	walk_left
# 98 "data/maps/KiposTown/scripts.pory"
	walk_left
# 99 "data/maps/KiposTown/scripts.pory"
	walk_up
# 99 "data/maps/KiposTown/scripts.pory"
	walk_up
# 100 "data/maps/KiposTown/scripts.pory"
	walk_left
# 100 "data/maps/KiposTown/scripts.pory"
	walk_left
# 100 "data/maps/KiposTown/scripts.pory"
	walk_left
# 100 "data/maps/KiposTown/scripts.pory"
	walk_left
# 100 "data/maps/KiposTown/scripts.pory"
	walk_left
# 100 "data/maps/KiposTown/scripts.pory"
	walk_left
# 100 "data/maps/KiposTown/scripts.pory"
	walk_left
# 101 "data/maps/KiposTown/scripts.pory"
	walk_down
# 101 "data/maps/KiposTown/scripts.pory"
	walk_down
# 101 "data/maps/KiposTown/scripts.pory"
	walk_down
# 101 "data/maps/KiposTown/scripts.pory"
	walk_down
# 101 "data/maps/KiposTown/scripts.pory"
	walk_down
# 101 "data/maps/KiposTown/scripts.pory"
	walk_down
# 101 "data/maps/KiposTown/scripts.pory"
	walk_down
# 101 "data/maps/KiposTown/scripts.pory"
	walk_down
# 101 "data/maps/KiposTown/scripts.pory"
	walk_down
# 101 "data/maps/KiposTown/scripts.pory"
	walk_down
# 101 "data/maps/KiposTown/scripts.pory"
	walk_down
# 101 "data/maps/KiposTown/scripts.pory"
	walk_down
# 101 "data/maps/KiposTown/scripts.pory"
	walk_down
# 101 "data/maps/KiposTown/scripts.pory"
	walk_down
# 101 "data/maps/KiposTown/scripts.pory"
	walk_down
# 101 "data/maps/KiposTown/scripts.pory"
	walk_down
# 102 "data/maps/KiposTown/scripts.pory"
	face_up
# 103 "data/maps/KiposTown/scripts.pory"
	step_end

# 105 "data/maps/KiposTown/scripts.pory"
KiposTown_Movement_PlayerFollowsToConservationCenter_1:
# 107 "data/maps/KiposTown/scripts.pory"
	walk_up
# 108 "data/maps/KiposTown/scripts.pory"
	walk_left
# 108 "data/maps/KiposTown/scripts.pory"
	walk_left
# 108 "data/maps/KiposTown/scripts.pory"
	walk_left
# 108 "data/maps/KiposTown/scripts.pory"
	walk_left
# 108 "data/maps/KiposTown/scripts.pory"
	walk_left
# 109 "data/maps/KiposTown/scripts.pory"
	walk_up
# 109 "data/maps/KiposTown/scripts.pory"
	walk_up
# 110 "data/maps/KiposTown/scripts.pory"
	walk_left
# 110 "data/maps/KiposTown/scripts.pory"
	walk_left
# 110 "data/maps/KiposTown/scripts.pory"
	walk_left
# 110 "data/maps/KiposTown/scripts.pory"
	walk_left
# 110 "data/maps/KiposTown/scripts.pory"
	walk_left
# 110 "data/maps/KiposTown/scripts.pory"
	walk_left
# 110 "data/maps/KiposTown/scripts.pory"
	walk_left
# 111 "data/maps/KiposTown/scripts.pory"
	walk_down
# 111 "data/maps/KiposTown/scripts.pory"
	walk_down
# 111 "data/maps/KiposTown/scripts.pory"
	walk_down
# 111 "data/maps/KiposTown/scripts.pory"
	walk_down
# 111 "data/maps/KiposTown/scripts.pory"
	walk_down
# 111 "data/maps/KiposTown/scripts.pory"
	walk_down
# 111 "data/maps/KiposTown/scripts.pory"
	walk_down
# 111 "data/maps/KiposTown/scripts.pory"
	walk_down
# 111 "data/maps/KiposTown/scripts.pory"
	walk_down
# 111 "data/maps/KiposTown/scripts.pory"
	walk_down
# 111 "data/maps/KiposTown/scripts.pory"
	walk_down
# 111 "data/maps/KiposTown/scripts.pory"
	walk_down
# 111 "data/maps/KiposTown/scripts.pory"
	walk_down
# 111 "data/maps/KiposTown/scripts.pory"
	walk_down
# 111 "data/maps/KiposTown/scripts.pory"
	walk_down
# 112 "data/maps/KiposTown/scripts.pory"
	face_down
# 113 "data/maps/KiposTown/scripts.pory"
	step_end

# 115 "data/maps/KiposTown/scripts.pory"
KiposTown_Movement_RusselWalksToConservationCenter_2:
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 117 "data/maps/KiposTown/scripts.pory"
	walk_right
# 118 "data/maps/KiposTown/scripts.pory"
	walk_up
# 118 "data/maps/KiposTown/scripts.pory"
	walk_up
# 118 "data/maps/KiposTown/scripts.pory"
	walk_up
# 119 "data/maps/KiposTown/scripts.pory"
	face_down
# 120 "data/maps/KiposTown/scripts.pory"
	step_end

# 122 "data/maps/KiposTown/scripts.pory"
KiposTown_Movement_PlayerFollowsToConservationCenter_2:
# 124 "data/maps/KiposTown/scripts.pory"
	walk_down
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 125 "data/maps/KiposTown/scripts.pory"
	walk_right
# 126 "data/maps/KiposTown/scripts.pory"
	walk_up
# 126 "data/maps/KiposTown/scripts.pory"
	walk_up
# 127 "data/maps/KiposTown/scripts.pory"
	face_up
# 128 "data/maps/KiposTown/scripts.pory"
	step_end

KiposTown_EventScript_Sailor::
# 136 "data/maps/KiposTown/scripts.pory"
	lock
# 137 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 138 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Sailor_Text_0
# 139 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Sailor_Text_1
# 140 "data/maps/KiposTown/scripts.pory"
	closemessage
# 141 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Lass::
# 147 "data/maps/KiposTown/scripts.pory"
	lock
# 148 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 149 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Lass_Text_0
# 150 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Lass_Text_1
# 151 "data/maps/KiposTown/scripts.pory"
	closemessage
# 152 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_ConstructionWorker::
# 158 "data/maps/KiposTown/scripts.pory"
	lock
# 159 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 160 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_ConstructionWorker_Text_0
# 161 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_ConstructionWorker_Text_1
# 162 "data/maps/KiposTown/scripts.pory"
	closemessage
# 163 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_ShoppingLady::
# 169 "data/maps/KiposTown/scripts.pory"
	lock
# 170 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 171 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_ShoppingLady_Text_0
# 172 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_ShoppingLady_Text_1
# 173 "data/maps/KiposTown/scripts.pory"
	closemessage
# 174 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Swinub::
# 180 "data/maps/KiposTown/scripts.pory"
	lock
# 181 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 182 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Swinub_Text_0
# 183 "data/maps/KiposTown/scripts.pory"
	playmoncry SPECIES_SWINUB, CRY_MODE_NORMAL
# 184 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Swinub_Text_1
# 185 "data/maps/KiposTown/scripts.pory"
	waitmoncry
# 186 "data/maps/KiposTown/scripts.pory"
	closemessage
# 187 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Scientist::
# 193 "data/maps/KiposTown/scripts.pory"
	lock
# 194 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 195 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Scientist_Text_0
# 198 "data/maps/KiposTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_SHOW_TYRUNT_KIPOS_TOWN
# 199 "data/maps/KiposTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_EventScript_Scientist_2
# 208 "data/maps/KiposTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_SHOW_TYRUNT_KIPOS_TOWN
# 209 "data/maps/KiposTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KiposTown_EventScript_Scientist_5
# 219 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Scientist_Text_3
# 220 "data/maps/KiposTown/scripts.pory"
	closemessage
# 222 "data/maps/KiposTown/scripts.pory"
	checkforspecies SPECIES_TYRUNT, OPEN_PARTY_SCREEN, KiposTown_EventScript_Scientist_ReactToTyrunt
# 225 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Scientist_Text_0
# 226 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Scientist_Text_4
# 227 "data/maps/KiposTown/scripts.pory"
	closemessage
KiposTown_EventScript_Scientist_4:
# 229 "data/maps/KiposTown/scripts.pory"
	release
	end

KiposTown_EventScript_Scientist_2:
# 201 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Scientist_Text_1
# 202 "data/maps/KiposTown/scripts.pory"
	closemessage
# 203 "data/maps/KiposTown/scripts.pory"
	release
	end

KiposTown_EventScript_Scientist_5:
# 211 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Scientist_Text_2
# 212 "data/maps/KiposTown/scripts.pory"
	closemessage
# 214 "data/maps/KiposTown/scripts.pory"
	delay 20
# 215 "data/maps/KiposTown/scripts.pory"
	startquest QUEST_SHOW_TYRUNT_KIPOS_TOWN
	goto KiposTown_EventScript_Scientist_4


KiposTown_EventScript_Scientist_ReactToTyrunt::
# 234 "data/maps/KiposTown/scripts.pory"
	delay 20
# 235 "data/maps/KiposTown/scripts.pory"
	applymovement 14, Common_Movement_Heart
# 236 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 237 "data/maps/KiposTown/scripts.pory"
	delay 10
# 238 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Scientist_Text_0
# 239 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Scientist_ReactToTyrunt_Text_0
# 240 "data/maps/KiposTown/scripts.pory"
	closemessage
# 241 "data/maps/KiposTown/scripts.pory"
	delay 5
# 242 "data/maps/KiposTown/scripts.pory"
	giveitem ITEM_PROTEIN
# 243 "data/maps/KiposTown/scripts.pory"
	closemessage
# 245 "data/maps/KiposTown/scripts.pory"
	delay 20
# 246 "data/maps/KiposTown/scripts.pory"
	completequest QUEST_SHOW_TYRUNT_KIPOS_TOWN
# 248 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Girl::
# 254 "data/maps/KiposTown/scripts.pory"
	lock
# 255 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 256 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Girl_Text_0
# 257 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Girl_Text_1
# 258 "data/maps/KiposTown/scripts.pory"
	closemessage
# 259 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_NinjaBoy::
# 265 "data/maps/KiposTown/scripts.pory"
	lock
# 266 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 267 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_NinjaBoy_Text_0
# 268 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_NinjaBoy_Text_1
# 269 "data/maps/KiposTown/scripts.pory"
	closemessage
# 270 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Psyduck::
# 275 "data/maps/KiposTown/scripts.pory"
	lock
# 276 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 277 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Psyduck_Text_0
# 278 "data/maps/KiposTown/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 279 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Psyduck_Text_1
# 280 "data/maps/KiposTown/scripts.pory"
	waitmoncry
# 281 "data/maps/KiposTown/scripts.pory"
	closemessage
# 282 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Hiker::
# 288 "data/maps/KiposTown/scripts.pory"
	lock
# 289 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 290 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Hiker_Text_0
# 291 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Hiker_Text_1
# 292 "data/maps/KiposTown/scripts.pory"
	closemessage
# 293 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Athlete::
# 299 "data/maps/KiposTown/scripts.pory"
	lock
# 300 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 301 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Athlete_Text_0
# 302 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Athlete_Text_1
# 303 "data/maps/KiposTown/scripts.pory"
	closemessage
# 304 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_OldWoman::
# 310 "data/maps/KiposTown/scripts.pory"
	lock
# 311 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 312 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_OldWoman_Text_0
# 313 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_OldWoman_Text_1
# 314 "data/maps/KiposTown/scripts.pory"
	closemessage
# 315 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Stantler::
# 320 "data/maps/KiposTown/scripts.pory"
	lock
# 321 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 322 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Stantler_Text_0
# 323 "data/maps/KiposTown/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
# 324 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Stantler_Text_1
# 325 "data/maps/KiposTown/scripts.pory"
	waitmoncry
# 326 "data/maps/KiposTown/scripts.pory"
	closemessage
# 327 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_TyrantrumSign::
# 333 "data/maps/KiposTown/scripts.pory"
	lock
# 334 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_TyrantrumSign_Text_0
# 335 "data/maps/KiposTown/scripts.pory"
	closemessage
# 336 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_LeadPlayerToConservationCenter_Text_0:
# 54 "data/maps/KiposTown/scripts.pory"
	.string "Mr. Russel$"

KiposTown_EventScript_LeadPlayerToConservationCenter_Text_1:
# 55 "data/maps/KiposTown/scripts.pory"
	.string "Ah, looks like Piraeus came through. You\n"
	.string "must be the Acrisia University\l"
	.string "researcher he knows! {PLAYER}, right?\p"
	.string "My name is Mr. Russel. I run the {COLOR GREEN}Sunset\n"
	.string "Wildlife Conservation Center{COLOR DARK_GRAY} here in\l"
	.string "Kipos Town, which provides a refuge for\l"
	.string "Pokémon from across the region. We run\l"
	.string "a conservation-focused {COLOR GREEN}Pokémon Zoo{COLOR DARK_GRAY},\l"
	.string "which helps us gather money to fund our\l"
	.string "work.\p"
	.string "We've run into trouble recently, as Team\n"
	.string "Chimera led a raid and {COLOR RED}took all our\l"
	.string "Pokémon{COLOR DARK_GRAY} from our facility to use in\l"
	.string "their schemes. Come, I'll show you the\l"
	.string "result.$"

KiposTown_EventScript_LeadPlayerToConservationCenter_Text_2:
# 64 "data/maps/KiposTown/scripts.pory"
	.string "You've never visited this part of the\n"
	.string "Ilios Region before, have you? This is\l"
	.string "{COLOR GREEN}Kipos Town{COLOR DARK_GRAY}. It's a quiet town outside\l"
	.string "the Conservation Center, but the\l"
	.string "tourism the Zoo brings helps keep the\l"
	.string "town afloat. That makes this\l"
	.string "catastrophe even more, well,\l"
	.string "catastrophic...\p"
	.string "Follow along now, we aren't far.$"

KiposTown_EventScript_LeadPlayerToConservationCenter_Text_3:
# 73 "data/maps/KiposTown/scripts.pory"
	.string "Here's our main building. Team Chimera\n"
	.string "didn't do much physical damage,\l"
	.string "managing to slip in over the border\l"
	.string "fences and stone walls during the night\l"
	.string "and capturing the Pokémon by force.\p"
	.string "I suppose I can't delay it any longer.\n"
	.string "Come, let's go inside.$"

KiposTown_EventScript_Sailor_Text_0:
# 138 "data/maps/KiposTown/scripts.pory"
	.string "Sailor$"

KiposTown_EventScript_Sailor_Text_1:
# 139 "data/maps/KiposTown/scripts.pory"
	.string "Kipos Town has a naturally shallow\n"
	.string "harbor area. It's also surrounded by\l"
	.string "land on both sides, so not many ships\l"
	.string "come here. Piraeus is always a welcome\l"
	.string "sight!$"

KiposTown_EventScript_Lass_Text_0:
# 149 "data/maps/KiposTown/scripts.pory"
	.string "Lass$"

KiposTown_EventScript_Lass_Text_1:
# 150 "data/maps/KiposTown/scripts.pory"
	.string "My brother told me there's, like, 400\n"
	.string "types of Pokémon in the Ilios Region!\l"
	.string "That's way too many to remember!$"

KiposTown_EventScript_ConstructionWorker_Text_0:
# 160 "data/maps/KiposTown/scripts.pory"
	.string "Worker$"

KiposTown_EventScript_ConstructionWorker_Text_1:
# 161 "data/maps/KiposTown/scripts.pory"
	.string "A bunch of businesses around town\n"
	.string "struggled after Team Chimera stole the\l"
	.string "Pokémon from the Conservation Center.\l"
	.string "Tourism dropped, and a bunch of jobs\l"
	.string "dried up. But I hear someone is donating\l"
	.string "Pokémon to bring the Conservation\l"
	.string "Center Zoo back!$"

KiposTown_EventScript_ShoppingLady_Text_0:
# 171 "data/maps/KiposTown/scripts.pory"
	.string "Woman$"

KiposTown_EventScript_ShoppingLady_Text_1:
# 172 "data/maps/KiposTown/scripts.pory"
	.string "Lots of fresh fruits and vegetables\n"
	.string "can be grown in the hills and valleys\l"
	.string "around here! There's nothing better\l"
	.string "than farmer's market food.$"

KiposTown_EventScript_Swinub_Text_0:
# 182 "data/maps/KiposTown/scripts.pory"
	.string "Swinub$"

KiposTown_EventScript_Swinub_Text_1:
# 184 "data/maps/KiposTown/scripts.pory"
	.string "Wee-snaw!$"

KiposTown_EventScript_Scientist_Text_0:
# 195 "data/maps/KiposTown/scripts.pory"
	.string "Scientist$"

KiposTown_EventScript_Scientist_Text_1:
# 201 "data/maps/KiposTown/scripts.pory"
	.string "Thank you for showing me a Tyrunt, mon\n"
	.string "amie. There are fossils of the species\l"
	.string "in Kalos, but seeing it living and\l"
	.string "walking around has completely changed\l"
	.string "my perspective.$"

KiposTown_EventScript_Scientist_Text_2:
# 211 "data/maps/KiposTown/scripts.pory"
	.string "I came all the way from Kalos to see\n"
	.string "this... and wow, it was totally worth it!\p"
	.string "People have reported finding {COLOR GREEN}Tyrunt,\n"
	.string "Tyrantrum's pre-evolution{COLOR DARK_GRAY}, in the wild\l"
	.string "recently. Honestly, I've always\l"
	.string "wondered what a baby version of this\l"
	.string "ferocious beast would look like. If you\l"
	.string "find a Tyrunt, come back and {COLOR GREEN}show it to\l"
	.string "me{COLOR DARK_GRAY}!$"

KiposTown_EventScript_Scientist_Text_3:
# 219 "data/maps/KiposTown/scripts.pory"
	.string "Bonjour, my friend of Ilios! Have you\n"
	.string "brought me a {COLOR GREEN}Tyrunt{COLOR DARK_GRAY} to make my trip\l"
	.string "from Kalos complete?$"

KiposTown_EventScript_Scientist_Text_4:
# 226 "data/maps/KiposTown/scripts.pory"
	.string "No Tyrunt, eh? Don't keep me waiting\n"
	.string "much longer, my friend. Vacations only\l"
	.string "last so long, and I'd love to {COLOR GREEN}see a\l"
	.string "Tyrunt{COLOR DARK_GRAY} before I return to Kalos!$"

KiposTown_EventScript_Scientist_ReactToTyrunt_Text_0:
# 239 "data/maps/KiposTown/scripts.pory"
	.string "Bravo! It's the perfect mix of cute and\n"
	.string "cool, just as I'd hoped.\p"
	.string "Thank you, mon amie. Take this as a\n"
	.string "token of appreciation.$"

KiposTown_EventScript_Girl_Text_0:
# 256 "data/maps/KiposTown/scripts.pory"
	.string "Girl$"

KiposTown_EventScript_Girl_Text_1:
# 257 "data/maps/KiposTown/scripts.pory"
	.string "Most people who live here grow up\n"
	.string "raising Pokémon. I was given a Shellder\l"
	.string "when I was a kid, and now it's a\l"
	.string "super-strong Cloyster!$"

KiposTown_EventScript_NinjaBoy_Text_0:
# 267 "data/maps/KiposTown/scripts.pory"
	.string "Boy$"

KiposTown_EventScript_NinjaBoy_Text_1:
# 268 "data/maps/KiposTown/scripts.pory"
	.string "My dad caught this Psyduck in a Repeat\n"
	.string "Ball! He already had one, so he gave it\l"
	.string "to me. Now we're best friends!$"

KiposTown_EventScript_Psyduck_Text_0:
# 277 "data/maps/KiposTown/scripts.pory"
	.string "Psyduck$"

KiposTown_EventScript_Psyduck_Text_1:
# 279 "data/maps/KiposTown/scripts.pory"
	.string "Wak qwak.$"

KiposTown_EventScript_Hiker_Text_0:
# 290 "data/maps/KiposTown/scripts.pory"
	.string "Hiker$"

KiposTown_EventScript_Hiker_Text_1:
# 291 "data/maps/KiposTown/scripts.pory"
	.string "People come a long way to visit the\n"
	.string "Conservation Center. They take in sick\l"
	.string "or abandoned Pokémon, and they run\l"
	.string "programs to support endangered\l"
	.string "species.$"

KiposTown_EventScript_Athlete_Text_0:
# 301 "data/maps/KiposTown/scripts.pory"
	.string "Athlete$"

KiposTown_EventScript_Athlete_Text_1:
# 302 "data/maps/KiposTown/scripts.pory"
	.string "I have to do more cardio training! The\n"
	.string "next time Team Chimera steps foot into\l"
	.string "Kipos Town, I'll be here to chase them\l"
	.string "off!$"

KiposTown_EventScript_OldWoman_Text_0:
# 312 "data/maps/KiposTown/scripts.pory"
	.string "Old Woman$"

KiposTown_EventScript_OldWoman_Text_1:
# 313 "data/maps/KiposTown/scripts.pory"
	.string "I found someone's Stantler left\n"
	.string "abandoned with it's Poké ball. I took it\l"
	.string "to the Conservation Center, and they\l"
	.string "told me how to care for it. Now, it's my\l"
	.string "closest companion!$"

KiposTown_EventScript_Stantler_Text_0:
# 322 "data/maps/KiposTown/scripts.pory"
	.string "Stantler$"

KiposTown_EventScript_Stantler_Text_1:
# 324 "data/maps/KiposTown/scripts.pory"
	.string "Hruff...$"

KiposTown_EventScript_TyrantrumSign_Text_0:
# 334 "data/maps/KiposTown/scripts.pory"
	.string "Tyrantrum Complete Fossil Skeleton\n"
	.string "Estimated Age: 72 Million Years Ago\p"
	.string "Tyrantrum lived during the Late\n"
	.string "Cretaceous Period, ending 66 million\l"
	.string "years ago with a mass extinction event.\l"
	.string "This specimen was excavated in the\l"
	.string "Unova Region, but specimens of similar\l"
	.string "species have been found from Galar to\l"
	.string "Kalos.$"

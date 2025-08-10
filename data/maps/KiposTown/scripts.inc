KiposTown_MapScripts::
# 2 "data/maps/KiposTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KiposTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 32 "data/maps/KiposTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, KiposTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

KiposTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/KiposTown/scripts.pory"
	goto_if_set FLAG_DID_PIRAEUS_SAIL_TO_KIPOS_TOWN_EVENT, KiposTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
KiposTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/KiposTown/scripts.pory"
	setflag FLAG_VISITED_KIPOS_TOWN
# 10 "data/maps/KiposTown/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, KiposTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
KiposTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 15 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 16 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 17 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 18 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 19 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 20 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 21 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 22 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 23 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 24 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 25 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 26 "data/maps/KiposTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 27 "data/maps/KiposTown/scripts.pory"
	setobjectaswildencounter 22, ENCOUNTER_LAND
# 28 "data/maps/KiposTown/scripts.pory"
	setobjectaswildencounter 23, ENCOUNTER_LAND
# 29 "data/maps/KiposTown/scripts.pory"
	setobjectaswildencounter 24, ENCOUNTER_LAND
	return

KiposTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/KiposTown/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto KiposTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

KiposTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 12 "data/maps/KiposTown/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto KiposTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

KiposTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 33 "data/maps/KiposTown/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, KiposTown_EventScript_CheckEventStatus
	.2byte 0


KiposTown_EventScript_CheckEventStatus::
# 39 "data/maps/KiposTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 41 "data/maps/KiposTown/scripts.pory"
	goto_if_unset FLAG_DID_PIRAEUS_SAIL_TO_KIPOS_TOWN_EVENT, KiposTown_EventScript_CheckEventStatus_2
KiposTown_EventScript_CheckEventStatus_1:
# 46 "data/maps/KiposTown/scripts.pory"
	releaseall
	end

KiposTown_EventScript_CheckEventStatus_2:
# 43 "data/maps/KiposTown/scripts.pory"
	goto KiposTown_EventScript_LeadPlayerToConservationCenter
	goto KiposTown_EventScript_CheckEventStatus_1


KiposTown_EventScript_LeadPlayerToConservationCenter::
# 52 "data/maps/KiposTown/scripts.pory"
	lockall
# 54 "data/maps/KiposTown/scripts.pory"
	delay 20
# 55 "data/maps/KiposTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 56 "data/maps/KiposTown/scripts.pory"
	applymovement 3, KiposTown_Movement_RusselApproachPlayer
# 57 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 59 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_LeadPlayerToConservationCenter_Text_0
# 60 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_LeadPlayerToConservationCenter_Text_1
# 61 "data/maps/KiposTown/scripts.pory"
	closemessage
# 63 "data/maps/KiposTown/scripts.pory"
	applymovement 3, KiposTown_Movement_RusselWalksToConservationCenter_1
# 64 "data/maps/KiposTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KiposTown_Movement_PlayerFollowsToConservationCenter_1
# 65 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 66 "data/maps/KiposTown/scripts.pory"
	delay 10
# 68 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_LeadPlayerToConservationCenter_Text_0
# 69 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_LeadPlayerToConservationCenter_Text_2
# 70 "data/maps/KiposTown/scripts.pory"
	closemessage
# 72 "data/maps/KiposTown/scripts.pory"
	applymovement 3, KiposTown_Movement_RusselWalksToConservationCenter_2
# 73 "data/maps/KiposTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KiposTown_Movement_PlayerFollowsToConservationCenter_2
# 74 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 75 "data/maps/KiposTown/scripts.pory"
	delay 10
# 77 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_LeadPlayerToConservationCenter_Text_0
# 78 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_LeadPlayerToConservationCenter_Text_3
# 79 "data/maps/KiposTown/scripts.pory"
	closemessage
# 81 "data/maps/KiposTown/scripts.pory"
	applymovement 3, Common_Movement_WalkUp
# 82 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 83 "data/maps/KiposTown/scripts.pory"
	hideobjectat 3, MAP_KIPOS_TOWN
# 84 "data/maps/KiposTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 85 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 86 "data/maps/KiposTown/scripts.pory"
	warpsilent MAP_KIPOS_TOWN_CONSERVATION_CENTER, 9, 11
# 88 "data/maps/KiposTown/scripts.pory"
	waitstate
# 89 "data/maps/KiposTown/scripts.pory"
	releaseall
	end


# 93 "data/maps/KiposTown/scripts.pory"
KiposTown_Movement_RusselApproachPlayer:
# 95 "data/maps/KiposTown/scripts.pory"
	emote_exclamation_mark
# 96 "data/maps/KiposTown/scripts.pory"
	delay_16
# 97 "data/maps/KiposTown/scripts.pory"
	walk_right
# 97 "data/maps/KiposTown/scripts.pory"
	walk_right
# 97 "data/maps/KiposTown/scripts.pory"
	walk_right
# 97 "data/maps/KiposTown/scripts.pory"
	walk_right
# 98 "data/maps/KiposTown/scripts.pory"
	face_down
# 99 "data/maps/KiposTown/scripts.pory"
	step_end

# 101 "data/maps/KiposTown/scripts.pory"
KiposTown_Movement_RusselWalksToConservationCenter_1:
# 103 "data/maps/KiposTown/scripts.pory"
	walk_left
# 103 "data/maps/KiposTown/scripts.pory"
	walk_left
# 103 "data/maps/KiposTown/scripts.pory"
	walk_left
# 103 "data/maps/KiposTown/scripts.pory"
	walk_left
# 103 "data/maps/KiposTown/scripts.pory"
	walk_left
# 104 "data/maps/KiposTown/scripts.pory"
	walk_up
# 104 "data/maps/KiposTown/scripts.pory"
	walk_up
# 105 "data/maps/KiposTown/scripts.pory"
	walk_left
# 105 "data/maps/KiposTown/scripts.pory"
	walk_left
# 105 "data/maps/KiposTown/scripts.pory"
	walk_left
# 105 "data/maps/KiposTown/scripts.pory"
	walk_left
# 105 "data/maps/KiposTown/scripts.pory"
	walk_left
# 105 "data/maps/KiposTown/scripts.pory"
	walk_left
# 105 "data/maps/KiposTown/scripts.pory"
	walk_left
# 106 "data/maps/KiposTown/scripts.pory"
	walk_down
# 106 "data/maps/KiposTown/scripts.pory"
	walk_down
# 106 "data/maps/KiposTown/scripts.pory"
	walk_down
# 106 "data/maps/KiposTown/scripts.pory"
	walk_down
# 106 "data/maps/KiposTown/scripts.pory"
	walk_down
# 106 "data/maps/KiposTown/scripts.pory"
	walk_down
# 106 "data/maps/KiposTown/scripts.pory"
	walk_down
# 106 "data/maps/KiposTown/scripts.pory"
	walk_down
# 106 "data/maps/KiposTown/scripts.pory"
	walk_down
# 106 "data/maps/KiposTown/scripts.pory"
	walk_down
# 106 "data/maps/KiposTown/scripts.pory"
	walk_down
# 106 "data/maps/KiposTown/scripts.pory"
	walk_down
# 106 "data/maps/KiposTown/scripts.pory"
	walk_down
# 106 "data/maps/KiposTown/scripts.pory"
	walk_down
# 106 "data/maps/KiposTown/scripts.pory"
	walk_down
# 106 "data/maps/KiposTown/scripts.pory"
	walk_down
# 107 "data/maps/KiposTown/scripts.pory"
	face_up
# 108 "data/maps/KiposTown/scripts.pory"
	step_end

# 110 "data/maps/KiposTown/scripts.pory"
KiposTown_Movement_PlayerFollowsToConservationCenter_1:
# 112 "data/maps/KiposTown/scripts.pory"
	walk_up
# 113 "data/maps/KiposTown/scripts.pory"
	walk_left
# 113 "data/maps/KiposTown/scripts.pory"
	walk_left
# 113 "data/maps/KiposTown/scripts.pory"
	walk_left
# 113 "data/maps/KiposTown/scripts.pory"
	walk_left
# 113 "data/maps/KiposTown/scripts.pory"
	walk_left
# 114 "data/maps/KiposTown/scripts.pory"
	walk_up
# 114 "data/maps/KiposTown/scripts.pory"
	walk_up
# 115 "data/maps/KiposTown/scripts.pory"
	walk_left
# 115 "data/maps/KiposTown/scripts.pory"
	walk_left
# 115 "data/maps/KiposTown/scripts.pory"
	walk_left
# 115 "data/maps/KiposTown/scripts.pory"
	walk_left
# 115 "data/maps/KiposTown/scripts.pory"
	walk_left
# 115 "data/maps/KiposTown/scripts.pory"
	walk_left
# 115 "data/maps/KiposTown/scripts.pory"
	walk_left
# 116 "data/maps/KiposTown/scripts.pory"
	walk_down
# 116 "data/maps/KiposTown/scripts.pory"
	walk_down
# 116 "data/maps/KiposTown/scripts.pory"
	walk_down
# 116 "data/maps/KiposTown/scripts.pory"
	walk_down
# 116 "data/maps/KiposTown/scripts.pory"
	walk_down
# 116 "data/maps/KiposTown/scripts.pory"
	walk_down
# 116 "data/maps/KiposTown/scripts.pory"
	walk_down
# 116 "data/maps/KiposTown/scripts.pory"
	walk_down
# 116 "data/maps/KiposTown/scripts.pory"
	walk_down
# 116 "data/maps/KiposTown/scripts.pory"
	walk_down
# 116 "data/maps/KiposTown/scripts.pory"
	walk_down
# 116 "data/maps/KiposTown/scripts.pory"
	walk_down
# 116 "data/maps/KiposTown/scripts.pory"
	walk_down
# 116 "data/maps/KiposTown/scripts.pory"
	walk_down
# 116 "data/maps/KiposTown/scripts.pory"
	walk_down
# 117 "data/maps/KiposTown/scripts.pory"
	face_down
# 118 "data/maps/KiposTown/scripts.pory"
	step_end

# 120 "data/maps/KiposTown/scripts.pory"
KiposTown_Movement_RusselWalksToConservationCenter_2:
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 122 "data/maps/KiposTown/scripts.pory"
	walk_right
# 123 "data/maps/KiposTown/scripts.pory"
	walk_up
# 123 "data/maps/KiposTown/scripts.pory"
	walk_up
# 123 "data/maps/KiposTown/scripts.pory"
	walk_up
# 124 "data/maps/KiposTown/scripts.pory"
	face_down
# 125 "data/maps/KiposTown/scripts.pory"
	step_end

# 127 "data/maps/KiposTown/scripts.pory"
KiposTown_Movement_PlayerFollowsToConservationCenter_2:
# 129 "data/maps/KiposTown/scripts.pory"
	walk_down
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 130 "data/maps/KiposTown/scripts.pory"
	walk_right
# 131 "data/maps/KiposTown/scripts.pory"
	walk_up
# 131 "data/maps/KiposTown/scripts.pory"
	walk_up
# 132 "data/maps/KiposTown/scripts.pory"
	face_up
# 133 "data/maps/KiposTown/scripts.pory"
	step_end

KiposTown_EventScript_Sailor::
# 141 "data/maps/KiposTown/scripts.pory"
	lock
# 142 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 143 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Sailor_Text_0
# 144 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Sailor_Text_1
# 145 "data/maps/KiposTown/scripts.pory"
	closemessage
# 146 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Lass::
# 152 "data/maps/KiposTown/scripts.pory"
	lock
# 153 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 154 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Lass_Text_0
# 155 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Lass_Text_1
# 156 "data/maps/KiposTown/scripts.pory"
	closemessage
# 157 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_ConstructionWorker::
# 163 "data/maps/KiposTown/scripts.pory"
	lock
# 164 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 165 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_ConstructionWorker_Text_0
# 166 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_ConstructionWorker_Text_1
# 167 "data/maps/KiposTown/scripts.pory"
	closemessage
# 168 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_ShoppingLady::
# 174 "data/maps/KiposTown/scripts.pory"
	lock
# 175 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 176 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_ShoppingLady_Text_0
# 177 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_ShoppingLady_Text_1
# 178 "data/maps/KiposTown/scripts.pory"
	closemessage
# 179 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Swinub::
# 185 "data/maps/KiposTown/scripts.pory"
	lock
# 186 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 187 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Swinub_Text_0
# 188 "data/maps/KiposTown/scripts.pory"
	playmoncry SPECIES_SWINUB, CRY_MODE_NORMAL
# 189 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Swinub_Text_1
# 190 "data/maps/KiposTown/scripts.pory"
	waitmoncry
# 191 "data/maps/KiposTown/scripts.pory"
	closemessage
# 192 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Scientist::
# 198 "data/maps/KiposTown/scripts.pory"
	lock
# 199 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 200 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Scientist_Text_0
# 203 "data/maps/KiposTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_SHOW_TYRUNT_KIPOS_TOWN
# 204 "data/maps/KiposTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_EventScript_Scientist_2
# 213 "data/maps/KiposTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_SHOW_TYRUNT_KIPOS_TOWN
# 214 "data/maps/KiposTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KiposTown_EventScript_Scientist_5
# 224 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Scientist_Text_3
# 225 "data/maps/KiposTown/scripts.pory"
	closemessage
# 227 "data/maps/KiposTown/scripts.pory"
	checkforspecies SPECIES_TYRUNT, OPEN_PARTY_SCREEN, KiposTown_EventScript_Scientist_ReactToTyrunt
# 230 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Scientist_Text_0
# 231 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Scientist_Text_4
# 232 "data/maps/KiposTown/scripts.pory"
	closemessage
KiposTown_EventScript_Scientist_4:
# 234 "data/maps/KiposTown/scripts.pory"
	release
	end

KiposTown_EventScript_Scientist_2:
# 206 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Scientist_Text_1
# 207 "data/maps/KiposTown/scripts.pory"
	closemessage
# 208 "data/maps/KiposTown/scripts.pory"
	release
	end

KiposTown_EventScript_Scientist_5:
# 216 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Scientist_Text_2
# 217 "data/maps/KiposTown/scripts.pory"
	closemessage
# 219 "data/maps/KiposTown/scripts.pory"
	delay 20
# 220 "data/maps/KiposTown/scripts.pory"
	startquest QUEST_SHOW_TYRUNT_KIPOS_TOWN
	goto KiposTown_EventScript_Scientist_4


KiposTown_EventScript_Scientist_ReactToTyrunt::
# 239 "data/maps/KiposTown/scripts.pory"
	delay 20
# 240 "data/maps/KiposTown/scripts.pory"
	applymovement 14, Common_Movement_Heart
# 241 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 242 "data/maps/KiposTown/scripts.pory"
	delay 10
# 243 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Scientist_Text_0
# 244 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Scientist_ReactToTyrunt_Text_0
# 245 "data/maps/KiposTown/scripts.pory"
	closemessage
# 246 "data/maps/KiposTown/scripts.pory"
	delay 5
# 247 "data/maps/KiposTown/scripts.pory"
	giveitem ITEM_PROTEIN
# 248 "data/maps/KiposTown/scripts.pory"
	closemessage
# 250 "data/maps/KiposTown/scripts.pory"
	delay 20
# 251 "data/maps/KiposTown/scripts.pory"
	completequest QUEST_SHOW_TYRUNT_KIPOS_TOWN
# 253 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Girl::
# 259 "data/maps/KiposTown/scripts.pory"
	lock
# 260 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 261 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Girl_Text_0
# 262 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Girl_Text_1
# 263 "data/maps/KiposTown/scripts.pory"
	closemessage
# 264 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_NinjaBoy::
# 270 "data/maps/KiposTown/scripts.pory"
	lock
# 271 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 272 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_NinjaBoy_Text_0
# 273 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_NinjaBoy_Text_1
# 274 "data/maps/KiposTown/scripts.pory"
	closemessage
# 275 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Psyduck::
# 280 "data/maps/KiposTown/scripts.pory"
	lock
# 281 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 282 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Psyduck_Text_0
# 283 "data/maps/KiposTown/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 284 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Psyduck_Text_1
# 285 "data/maps/KiposTown/scripts.pory"
	waitmoncry
# 286 "data/maps/KiposTown/scripts.pory"
	closemessage
# 287 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Hiker::
# 293 "data/maps/KiposTown/scripts.pory"
	lock
# 294 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 295 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Hiker_Text_0
# 296 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Hiker_Text_1
# 297 "data/maps/KiposTown/scripts.pory"
	closemessage
# 298 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Athlete::
# 304 "data/maps/KiposTown/scripts.pory"
	lock
# 305 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 306 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Athlete_Text_0
# 307 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Athlete_Text_1
# 308 "data/maps/KiposTown/scripts.pory"
	closemessage
# 309 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_OldWoman::
# 315 "data/maps/KiposTown/scripts.pory"
	lock
# 316 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 317 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_OldWoman_Text_0
# 318 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_OldWoman_Text_1
# 319 "data/maps/KiposTown/scripts.pory"
	closemessage
# 320 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Stantler::
# 325 "data/maps/KiposTown/scripts.pory"
	lock
# 326 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 327 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Stantler_Text_0
# 328 "data/maps/KiposTown/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
# 329 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Stantler_Text_1
# 330 "data/maps/KiposTown/scripts.pory"
	waitmoncry
# 331 "data/maps/KiposTown/scripts.pory"
	closemessage
# 332 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_TyrantrumSign::
# 338 "data/maps/KiposTown/scripts.pory"
	lock
# 339 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_TyrantrumSign_Text_0
# 340 "data/maps/KiposTown/scripts.pory"
	closemessage
# 341 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_DirectionSign::
# 347 "data/maps/KiposTown/scripts.pory"
	lock
# 348 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_DirectionSign_Text_0
# 349 "data/maps/KiposTown/scripts.pory"
	closemessage
# 350 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_LeadPlayerToConservationCenter_Text_0:
# 59 "data/maps/KiposTown/scripts.pory"
	.string "Mr. Russel$"

KiposTown_EventScript_LeadPlayerToConservationCenter_Text_1:
# 60 "data/maps/KiposTown/scripts.pory"
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
# 69 "data/maps/KiposTown/scripts.pory"
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
# 78 "data/maps/KiposTown/scripts.pory"
	.string "Here's our main building. Team Chimera\n"
	.string "didn't do much physical damage,\l"
	.string "managing to slip in over the border\l"
	.string "fences and stone walls during the night\l"
	.string "and capturing the Pokémon by force.\p"
	.string "I suppose I can't delay it any longer.\n"
	.string "Come, let's go inside.$"

KiposTown_EventScript_Sailor_Text_0:
# 143 "data/maps/KiposTown/scripts.pory"
	.string "Sailor$"

KiposTown_EventScript_Sailor_Text_1:
# 144 "data/maps/KiposTown/scripts.pory"
	.string "Kipos Town has a naturally shallow\n"
	.string "harbor area. It's also surrounded by\l"
	.string "land on both sides, so not many ships\l"
	.string "come here. Piraeus is always a welcome\l"
	.string "sight!$"

KiposTown_EventScript_Lass_Text_0:
# 154 "data/maps/KiposTown/scripts.pory"
	.string "Lass$"

KiposTown_EventScript_Lass_Text_1:
# 155 "data/maps/KiposTown/scripts.pory"
	.string "My brother told me there's, like, 400\n"
	.string "types of Pokémon in the Ilios Region!\l"
	.string "That's way too many to remember!$"

KiposTown_EventScript_ConstructionWorker_Text_0:
# 165 "data/maps/KiposTown/scripts.pory"
	.string "Worker$"

KiposTown_EventScript_ConstructionWorker_Text_1:
# 166 "data/maps/KiposTown/scripts.pory"
	.string "A bunch of businesses around town\n"
	.string "struggled after Team Chimera stole the\l"
	.string "Pokémon from the Conservation Center.\l"
	.string "Tourism dropped, and a bunch of jobs\l"
	.string "dried up. But I hear someone is donating\l"
	.string "Pokémon to bring the Conservation\l"
	.string "Center Zoo back!$"

KiposTown_EventScript_ShoppingLady_Text_0:
# 176 "data/maps/KiposTown/scripts.pory"
	.string "Woman$"

KiposTown_EventScript_ShoppingLady_Text_1:
# 177 "data/maps/KiposTown/scripts.pory"
	.string "Lots of fresh fruits and vegetables\n"
	.string "can be grown in the hills and valleys\l"
	.string "around here! There's nothing better\l"
	.string "than farmer's market food.$"

KiposTown_EventScript_Swinub_Text_0:
# 187 "data/maps/KiposTown/scripts.pory"
	.string "Swinub$"

KiposTown_EventScript_Swinub_Text_1:
# 189 "data/maps/KiposTown/scripts.pory"
	.string "Wee-snaw!$"

KiposTown_EventScript_Scientist_Text_0:
# 200 "data/maps/KiposTown/scripts.pory"
	.string "Scientist$"

KiposTown_EventScript_Scientist_Text_1:
# 206 "data/maps/KiposTown/scripts.pory"
	.string "Thank you for showing me a Tyrunt, mon\n"
	.string "amie. There are fossils of the species\l"
	.string "in Kalos, but seeing it living and\l"
	.string "walking around has completely changed\l"
	.string "my perspective.$"

KiposTown_EventScript_Scientist_Text_2:
# 216 "data/maps/KiposTown/scripts.pory"
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
# 224 "data/maps/KiposTown/scripts.pory"
	.string "Bonjour, my friend of Ilios! Have you\n"
	.string "brought me a {COLOR GREEN}Tyrunt{COLOR DARK_GRAY} to make my trip\l"
	.string "from Kalos complete?$"

KiposTown_EventScript_Scientist_Text_4:
# 231 "data/maps/KiposTown/scripts.pory"
	.string "No Tyrunt, eh? Don't keep me waiting\n"
	.string "much longer, my friend. Vacations only\l"
	.string "last so long, and I'd love to {COLOR GREEN}see a\l"
	.string "Tyrunt{COLOR DARK_GRAY} before I return to Kalos!$"

KiposTown_EventScript_Scientist_ReactToTyrunt_Text_0:
# 244 "data/maps/KiposTown/scripts.pory"
	.string "Bravo! It's the perfect mix of cute and\n"
	.string "cool, just as I'd hoped.\p"
	.string "Thank you, mon amie. Take this as a\n"
	.string "token of appreciation.$"

KiposTown_EventScript_Girl_Text_0:
# 261 "data/maps/KiposTown/scripts.pory"
	.string "Girl$"

KiposTown_EventScript_Girl_Text_1:
# 262 "data/maps/KiposTown/scripts.pory"
	.string "Most people who live here grow up\n"
	.string "raising Pokémon. I was given a Shellder\l"
	.string "when I was a kid, and now it's a\l"
	.string "super-strong Cloyster!$"

KiposTown_EventScript_NinjaBoy_Text_0:
# 272 "data/maps/KiposTown/scripts.pory"
	.string "Boy$"

KiposTown_EventScript_NinjaBoy_Text_1:
# 273 "data/maps/KiposTown/scripts.pory"
	.string "My dad caught this Psyduck in a Repeat\n"
	.string "Ball! He already had one, so he gave it\l"
	.string "to me. Now we're best friends!$"

KiposTown_EventScript_Psyduck_Text_0:
# 282 "data/maps/KiposTown/scripts.pory"
	.string "Psyduck$"

KiposTown_EventScript_Psyduck_Text_1:
# 284 "data/maps/KiposTown/scripts.pory"
	.string "Wak qwak.$"

KiposTown_EventScript_Hiker_Text_0:
# 295 "data/maps/KiposTown/scripts.pory"
	.string "Hiker$"

KiposTown_EventScript_Hiker_Text_1:
# 296 "data/maps/KiposTown/scripts.pory"
	.string "People come a long way to visit the\n"
	.string "Conservation Center. They take in sick\l"
	.string "or abandoned Pokémon, and they run\l"
	.string "programs to support endangered\l"
	.string "species.$"

KiposTown_EventScript_Athlete_Text_0:
# 306 "data/maps/KiposTown/scripts.pory"
	.string "Athlete$"

KiposTown_EventScript_Athlete_Text_1:
# 307 "data/maps/KiposTown/scripts.pory"
	.string "I have to do more cardio training! The\n"
	.string "next time Team Chimera steps foot into\l"
	.string "Kipos Town, I'll be here to chase them\l"
	.string "off!$"

KiposTown_EventScript_OldWoman_Text_0:
# 317 "data/maps/KiposTown/scripts.pory"
	.string "Old Woman$"

KiposTown_EventScript_OldWoman_Text_1:
# 318 "data/maps/KiposTown/scripts.pory"
	.string "I found someone's Stantler left\n"
	.string "abandoned with it's Poké ball. I took it\l"
	.string "to the Conservation Center, and they\l"
	.string "told me how to care for it. Now, it's my\l"
	.string "closest companion!$"

KiposTown_EventScript_Stantler_Text_0:
# 327 "data/maps/KiposTown/scripts.pory"
	.string "Stantler$"

KiposTown_EventScript_Stantler_Text_1:
# 329 "data/maps/KiposTown/scripts.pory"
	.string "Hruff...$"

KiposTown_EventScript_TyrantrumSign_Text_0:
# 339 "data/maps/KiposTown/scripts.pory"
	.string "Tyrantrum Complete Fossil Skeleton\n"
	.string "Estimated Age: 72 Million Years Ago\p"
	.string "Tyrantrum lived during the Late\n"
	.string "Cretaceous Period, ending 66 million\l"
	.string "years ago with a mass extinction event.\l"
	.string "This specimen was excavated in the\l"
	.string "Unova Region, but specimens of similar\l"
	.string "species have been found from Galar to\l"
	.string "Kalos.$"

KiposTown_EventScript_DirectionSign_Text_0:
# 348 "data/maps/KiposTown/scripts.pory"
	.string "Kipos Town\n"
	.string "For Nature, For People, Forever\p"
	.string "{UP_ARROW} Pythios Town\n"
	.string "Lastlight Road {DOWN_ARROW}\p"
	.string "Sunset Wildlife Conservation Center {RIGHT_ARROW}$"

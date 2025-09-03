KiposTown_MapScripts::
# 2 "data/maps/KiposTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KiposTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
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


KiposTown_EventScript_LeadPlayerToConservationCenter::
# 53 "data/maps/KiposTown/scripts.pory"
	lockall
# 55 "data/maps/KiposTown/scripts.pory"
	delay 20
# 56 "data/maps/KiposTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 57 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 58 "data/maps/KiposTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 59 "data/maps/KiposTown/scripts.pory"
	delay 10
# 61 "data/maps/KiposTown/scripts.pory"
	applymovement 3, KiposTown_Movement_RusselApproachPlayer
# 62 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 64 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_LeadPlayerToConservationCenter_Text_0
# 65 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_LeadPlayerToConservationCenter_Text_1
# 66 "data/maps/KiposTown/scripts.pory"
	closemessage
# 68 "data/maps/KiposTown/scripts.pory"
	applymovement 3, KiposTown_Movement_RusselWalksToConservationCenter_1
# 69 "data/maps/KiposTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KiposTown_Movement_PlayerFollowsToConservationCenter_1
# 70 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 71 "data/maps/KiposTown/scripts.pory"
	delay 10
# 73 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_LeadPlayerToConservationCenter_Text_0
# 74 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_LeadPlayerToConservationCenter_Text_2
# 75 "data/maps/KiposTown/scripts.pory"
	closemessage
# 77 "data/maps/KiposTown/scripts.pory"
	applymovement 3, KiposTown_Movement_RusselWalksToConservationCenter_2
# 78 "data/maps/KiposTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KiposTown_Movement_PlayerFollowsToConservationCenter_2
# 79 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 80 "data/maps/KiposTown/scripts.pory"
	delay 10
# 82 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_LeadPlayerToConservationCenter_Text_0
# 83 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_LeadPlayerToConservationCenter_Text_3
# 84 "data/maps/KiposTown/scripts.pory"
	closemessage
# 86 "data/maps/KiposTown/scripts.pory"
	applymovement 3, Common_Movement_WalkUp
# 87 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 88 "data/maps/KiposTown/scripts.pory"
	hideobjectat 3, MAP_KIPOS_TOWN
# 89 "data/maps/KiposTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 90 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 91 "data/maps/KiposTown/scripts.pory"
	warpsilent MAP_KIPOS_TOWN_CONSERVATION_CENTER, 9, 11
# 93 "data/maps/KiposTown/scripts.pory"
	waitstate
# 94 "data/maps/KiposTown/scripts.pory"
	releaseall
	end


# 98 "data/maps/KiposTown/scripts.pory"
KiposTown_Movement_RusselApproachPlayer:
# 100 "data/maps/KiposTown/scripts.pory"
	emote_exclamation_mark
# 101 "data/maps/KiposTown/scripts.pory"
	delay_16
# 102 "data/maps/KiposTown/scripts.pory"
	walk_right
# 102 "data/maps/KiposTown/scripts.pory"
	walk_right
# 102 "data/maps/KiposTown/scripts.pory"
	walk_right
# 102 "data/maps/KiposTown/scripts.pory"
	walk_right
# 103 "data/maps/KiposTown/scripts.pory"
	face_down
# 104 "data/maps/KiposTown/scripts.pory"
	step_end

# 106 "data/maps/KiposTown/scripts.pory"
KiposTown_Movement_RusselWalksToConservationCenter_1:
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
# 111 "data/maps/KiposTown/scripts.pory"
	walk_down
# 112 "data/maps/KiposTown/scripts.pory"
	face_up
# 113 "data/maps/KiposTown/scripts.pory"
	step_end

# 115 "data/maps/KiposTown/scripts.pory"
KiposTown_Movement_PlayerFollowsToConservationCenter_1:
# 117 "data/maps/KiposTown/scripts.pory"
	walk_up
# 118 "data/maps/KiposTown/scripts.pory"
	walk_left
# 118 "data/maps/KiposTown/scripts.pory"
	walk_left
# 118 "data/maps/KiposTown/scripts.pory"
	walk_left
# 118 "data/maps/KiposTown/scripts.pory"
	walk_left
# 118 "data/maps/KiposTown/scripts.pory"
	walk_left
# 119 "data/maps/KiposTown/scripts.pory"
	walk_up
# 119 "data/maps/KiposTown/scripts.pory"
	walk_up
# 120 "data/maps/KiposTown/scripts.pory"
	walk_left
# 120 "data/maps/KiposTown/scripts.pory"
	walk_left
# 120 "data/maps/KiposTown/scripts.pory"
	walk_left
# 120 "data/maps/KiposTown/scripts.pory"
	walk_left
# 120 "data/maps/KiposTown/scripts.pory"
	walk_left
# 120 "data/maps/KiposTown/scripts.pory"
	walk_left
# 120 "data/maps/KiposTown/scripts.pory"
	walk_left
# 121 "data/maps/KiposTown/scripts.pory"
	walk_down
# 121 "data/maps/KiposTown/scripts.pory"
	walk_down
# 121 "data/maps/KiposTown/scripts.pory"
	walk_down
# 121 "data/maps/KiposTown/scripts.pory"
	walk_down
# 121 "data/maps/KiposTown/scripts.pory"
	walk_down
# 121 "data/maps/KiposTown/scripts.pory"
	walk_down
# 121 "data/maps/KiposTown/scripts.pory"
	walk_down
# 121 "data/maps/KiposTown/scripts.pory"
	walk_down
# 121 "data/maps/KiposTown/scripts.pory"
	walk_down
# 121 "data/maps/KiposTown/scripts.pory"
	walk_down
# 121 "data/maps/KiposTown/scripts.pory"
	walk_down
# 121 "data/maps/KiposTown/scripts.pory"
	walk_down
# 121 "data/maps/KiposTown/scripts.pory"
	walk_down
# 121 "data/maps/KiposTown/scripts.pory"
	walk_down
# 121 "data/maps/KiposTown/scripts.pory"
	walk_down
# 122 "data/maps/KiposTown/scripts.pory"
	face_down
# 123 "data/maps/KiposTown/scripts.pory"
	step_end

# 125 "data/maps/KiposTown/scripts.pory"
KiposTown_Movement_RusselWalksToConservationCenter_2:
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 127 "data/maps/KiposTown/scripts.pory"
	walk_right
# 128 "data/maps/KiposTown/scripts.pory"
	walk_up
# 128 "data/maps/KiposTown/scripts.pory"
	walk_up
# 128 "data/maps/KiposTown/scripts.pory"
	walk_up
# 129 "data/maps/KiposTown/scripts.pory"
	face_down
# 130 "data/maps/KiposTown/scripts.pory"
	step_end

# 132 "data/maps/KiposTown/scripts.pory"
KiposTown_Movement_PlayerFollowsToConservationCenter_2:
# 134 "data/maps/KiposTown/scripts.pory"
	walk_down
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 135 "data/maps/KiposTown/scripts.pory"
	walk_right
# 136 "data/maps/KiposTown/scripts.pory"
	walk_up
# 136 "data/maps/KiposTown/scripts.pory"
	walk_up
# 137 "data/maps/KiposTown/scripts.pory"
	face_up
# 138 "data/maps/KiposTown/scripts.pory"
	step_end

KiposTown_EventScript_Sailor::
# 146 "data/maps/KiposTown/scripts.pory"
	lock
# 147 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 148 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Sailor_Text_0
# 149 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Sailor_Text_1
# 150 "data/maps/KiposTown/scripts.pory"
	closemessage
# 151 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Lass::
# 157 "data/maps/KiposTown/scripts.pory"
	lock
# 158 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 159 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Lass_Text_0
# 160 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Lass_Text_1
# 161 "data/maps/KiposTown/scripts.pory"
	closemessage
# 162 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_ConstructionWorker::
# 168 "data/maps/KiposTown/scripts.pory"
	lock
# 169 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 170 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_ConstructionWorker_Text_0
# 171 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_ConstructionWorker_Text_1
# 172 "data/maps/KiposTown/scripts.pory"
	closemessage
# 173 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_ShoppingLady::
# 179 "data/maps/KiposTown/scripts.pory"
	lock
# 180 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 181 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_ShoppingLady_Text_0
# 182 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_ShoppingLady_Text_1
# 183 "data/maps/KiposTown/scripts.pory"
	closemessage
# 184 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Swinub::
# 190 "data/maps/KiposTown/scripts.pory"
	lock
# 191 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 192 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Swinub_Text_0
# 193 "data/maps/KiposTown/scripts.pory"
	playmoncry SPECIES_SWINUB, CRY_MODE_NORMAL
# 194 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Swinub_Text_1
# 195 "data/maps/KiposTown/scripts.pory"
	waitmoncry
# 196 "data/maps/KiposTown/scripts.pory"
	closemessage
# 197 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Scientist::
# 203 "data/maps/KiposTown/scripts.pory"
	lock
# 204 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 205 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Scientist_Text_0
# 208 "data/maps/KiposTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_SHOW_TYRUNT_KIPOS_TOWN
# 209 "data/maps/KiposTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_EventScript_Scientist_2
# 218 "data/maps/KiposTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_SHOW_TYRUNT_KIPOS_TOWN
# 219 "data/maps/KiposTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KiposTown_EventScript_Scientist_5
# 229 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Scientist_Text_3
# 230 "data/maps/KiposTown/scripts.pory"
	closemessage
# 232 "data/maps/KiposTown/scripts.pory"
	checkforspecies SPECIES_TYRUNT, OPEN_PARTY_SCREEN, KiposTown_EventScript_Scientist_ReactToTyrunt
# 235 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Scientist_Text_0
# 236 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Scientist_Text_4
# 237 "data/maps/KiposTown/scripts.pory"
	closemessage
KiposTown_EventScript_Scientist_4:
# 239 "data/maps/KiposTown/scripts.pory"
	release
	end

KiposTown_EventScript_Scientist_2:
# 211 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Scientist_Text_1
# 212 "data/maps/KiposTown/scripts.pory"
	closemessage
# 213 "data/maps/KiposTown/scripts.pory"
	release
	end

KiposTown_EventScript_Scientist_5:
# 221 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Scientist_Text_2
# 222 "data/maps/KiposTown/scripts.pory"
	closemessage
# 224 "data/maps/KiposTown/scripts.pory"
	delay 20
# 225 "data/maps/KiposTown/scripts.pory"
	startquest QUEST_SHOW_TYRUNT_KIPOS_TOWN
	goto KiposTown_EventScript_Scientist_4


KiposTown_EventScript_Scientist_ReactToTyrunt::
# 244 "data/maps/KiposTown/scripts.pory"
	delay 20
# 245 "data/maps/KiposTown/scripts.pory"
	applymovement 14, Common_Movement_Heart
# 246 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 247 "data/maps/KiposTown/scripts.pory"
	delay 10
# 248 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Scientist_Text_0
# 249 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Scientist_ReactToTyrunt_Text_0
# 250 "data/maps/KiposTown/scripts.pory"
	closemessage
# 251 "data/maps/KiposTown/scripts.pory"
	delay 5
# 252 "data/maps/KiposTown/scripts.pory"
	giveitem ITEM_PROTEIN
# 253 "data/maps/KiposTown/scripts.pory"
	closemessage
# 255 "data/maps/KiposTown/scripts.pory"
	delay 20
# 256 "data/maps/KiposTown/scripts.pory"
	completequest QUEST_SHOW_TYRUNT_KIPOS_TOWN
# 258 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Girl::
# 264 "data/maps/KiposTown/scripts.pory"
	lock
# 265 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 266 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Girl_Text_0
# 267 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Girl_Text_1
# 268 "data/maps/KiposTown/scripts.pory"
	closemessage
# 269 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_NinjaBoy::
# 275 "data/maps/KiposTown/scripts.pory"
	lock
# 276 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 277 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_NinjaBoy_Text_0
# 278 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_NinjaBoy_Text_1
# 279 "data/maps/KiposTown/scripts.pory"
	closemessage
# 280 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Psyduck::
# 285 "data/maps/KiposTown/scripts.pory"
	lock
# 286 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 287 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Psyduck_Text_0
# 288 "data/maps/KiposTown/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 289 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Psyduck_Text_1
# 290 "data/maps/KiposTown/scripts.pory"
	waitmoncry
# 291 "data/maps/KiposTown/scripts.pory"
	closemessage
# 292 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Hiker::
# 298 "data/maps/KiposTown/scripts.pory"
	lock
# 299 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 300 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Hiker_Text_0
# 301 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Hiker_Text_1
# 302 "data/maps/KiposTown/scripts.pory"
	closemessage
# 303 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Athlete::
# 309 "data/maps/KiposTown/scripts.pory"
	lock
# 310 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 311 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Athlete_Text_0
# 312 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Athlete_Text_1
# 313 "data/maps/KiposTown/scripts.pory"
	closemessage
# 314 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_OldWoman::
# 320 "data/maps/KiposTown/scripts.pory"
	lock
# 321 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 322 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_OldWoman_Text_0
# 323 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_OldWoman_Text_1
# 324 "data/maps/KiposTown/scripts.pory"
	closemessage
# 325 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_Stantler::
# 330 "data/maps/KiposTown/scripts.pory"
	lock
# 331 "data/maps/KiposTown/scripts.pory"
	faceplayer
# 332 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_Stantler_Text_0
# 333 "data/maps/KiposTown/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
# 334 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_Stantler_Text_1
# 335 "data/maps/KiposTown/scripts.pory"
	waitmoncry
# 336 "data/maps/KiposTown/scripts.pory"
	closemessage
# 337 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_TyrantrumSign::
# 343 "data/maps/KiposTown/scripts.pory"
	lock
# 344 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_TyrantrumSign_Text_0
# 345 "data/maps/KiposTown/scripts.pory"
	closemessage
# 346 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_DirectionSign::
# 352 "data/maps/KiposTown/scripts.pory"
	lock
# 353 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_DirectionSign_Text_0
# 354 "data/maps/KiposTown/scripts.pory"
	closemessage
# 355 "data/maps/KiposTown/scripts.pory"
	release
	end


KiposTown_EventScript_LeadPlayerToConservationCenter_Text_0:
# 64 "data/maps/KiposTown/scripts.pory"
	.string "Mr. Russel$"

KiposTown_EventScript_LeadPlayerToConservationCenter_Text_1:
# 65 "data/maps/KiposTown/scripts.pory"
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
# 74 "data/maps/KiposTown/scripts.pory"
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
# 83 "data/maps/KiposTown/scripts.pory"
	.string "Here's our main building. Team Chimera\n"
	.string "didn't do much physical damage,\l"
	.string "managing to slip in over the border\l"
	.string "fences and stone walls during the night\l"
	.string "and capturing the Pokémon by force.\p"
	.string "I suppose I can't delay it any longer.\n"
	.string "Come, let's go inside.$"

KiposTown_EventScript_Sailor_Text_0:
# 148 "data/maps/KiposTown/scripts.pory"
	.string "Sailor$"

KiposTown_EventScript_Sailor_Text_1:
# 149 "data/maps/KiposTown/scripts.pory"
	.string "Kipos Town has a naturally shallow\n"
	.string "harbor area. It's also surrounded by\l"
	.string "land on both sides, so not many ships\l"
	.string "come here. Piraeus is always a welcome\l"
	.string "sight!$"

KiposTown_EventScript_Lass_Text_0:
# 159 "data/maps/KiposTown/scripts.pory"
	.string "Lass$"

KiposTown_EventScript_Lass_Text_1:
# 160 "data/maps/KiposTown/scripts.pory"
	.string "My brother told me there's, like, 400\n"
	.string "types of Pokémon in the Ilios Region!\l"
	.string "That's way too many to remember!$"

KiposTown_EventScript_ConstructionWorker_Text_0:
# 170 "data/maps/KiposTown/scripts.pory"
	.string "Worker$"

KiposTown_EventScript_ConstructionWorker_Text_1:
# 171 "data/maps/KiposTown/scripts.pory"
	.string "A bunch of businesses around town\n"
	.string "struggled after Team Chimera stole the\l"
	.string "Pokémon from the Conservation Center.\l"
	.string "Tourism dropped, and a bunch of jobs\l"
	.string "dried up. But I hear someone is donating\l"
	.string "Pokémon to bring the Conservation\l"
	.string "Center Zoo back!$"

KiposTown_EventScript_ShoppingLady_Text_0:
# 181 "data/maps/KiposTown/scripts.pory"
	.string "Woman$"

KiposTown_EventScript_ShoppingLady_Text_1:
# 182 "data/maps/KiposTown/scripts.pory"
	.string "Lots of fresh fruits and vegetables\n"
	.string "can be grown in the hills and valleys\l"
	.string "around here! There's nothing better\l"
	.string "than farmer's market food.$"

KiposTown_EventScript_Swinub_Text_0:
# 192 "data/maps/KiposTown/scripts.pory"
	.string "Swinub$"

KiposTown_EventScript_Swinub_Text_1:
# 194 "data/maps/KiposTown/scripts.pory"
	.string "Wee-snaw!$"

KiposTown_EventScript_Scientist_Text_0:
# 205 "data/maps/KiposTown/scripts.pory"
	.string "Scientist$"

KiposTown_EventScript_Scientist_Text_1:
# 211 "data/maps/KiposTown/scripts.pory"
	.string "Thank you for showing me a Tyrunt, mon\n"
	.string "amie. There are fossils of the species\l"
	.string "in Kalos, but seeing it living and\l"
	.string "walking around has completely changed\l"
	.string "my perspective.$"

KiposTown_EventScript_Scientist_Text_2:
# 221 "data/maps/KiposTown/scripts.pory"
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
# 229 "data/maps/KiposTown/scripts.pory"
	.string "Bonjour, my friend of Ilios! Have you\n"
	.string "brought me a {COLOR GREEN}Tyrunt{COLOR DARK_GRAY} to make my trip\l"
	.string "from Kalos complete?$"

KiposTown_EventScript_Scientist_Text_4:
# 236 "data/maps/KiposTown/scripts.pory"
	.string "No Tyrunt, eh? Don't keep me waiting\n"
	.string "much longer, my friend. Vacations only\l"
	.string "last so long, and I'd love to {COLOR GREEN}see a\l"
	.string "Tyrunt{COLOR DARK_GRAY} before I return to Kalos!$"

KiposTown_EventScript_Scientist_ReactToTyrunt_Text_0:
# 249 "data/maps/KiposTown/scripts.pory"
	.string "Bravo! It's the perfect mix of cute and\n"
	.string "cool, just as I'd hoped.\p"
	.string "Thank you, mon amie. Take this as a\n"
	.string "token of appreciation.$"

KiposTown_EventScript_Girl_Text_0:
# 266 "data/maps/KiposTown/scripts.pory"
	.string "Girl$"

KiposTown_EventScript_Girl_Text_1:
# 267 "data/maps/KiposTown/scripts.pory"
	.string "Most people who live here grow up\n"
	.string "raising Pokémon. I was given a Shellder\l"
	.string "when I was a kid, and now it's a\l"
	.string "super-strong Cloyster!$"

KiposTown_EventScript_NinjaBoy_Text_0:
# 277 "data/maps/KiposTown/scripts.pory"
	.string "Boy$"

KiposTown_EventScript_NinjaBoy_Text_1:
# 278 "data/maps/KiposTown/scripts.pory"
	.string "My dad caught this Psyduck in a Repeat\n"
	.string "Ball! He already had one, so he gave it\l"
	.string "to me. Now we're best friends!$"

KiposTown_EventScript_Psyduck_Text_0:
# 287 "data/maps/KiposTown/scripts.pory"
	.string "Psyduck$"

KiposTown_EventScript_Psyduck_Text_1:
# 289 "data/maps/KiposTown/scripts.pory"
	.string "Wak qwak.$"

KiposTown_EventScript_Hiker_Text_0:
# 300 "data/maps/KiposTown/scripts.pory"
	.string "Hiker$"

KiposTown_EventScript_Hiker_Text_1:
# 301 "data/maps/KiposTown/scripts.pory"
	.string "People come a long way to visit the\n"
	.string "Conservation Center. They take in sick\l"
	.string "or abandoned Pokémon, and they run\l"
	.string "programs to support endangered\l"
	.string "species.$"

KiposTown_EventScript_Athlete_Text_0:
# 311 "data/maps/KiposTown/scripts.pory"
	.string "Athlete$"

KiposTown_EventScript_Athlete_Text_1:
# 312 "data/maps/KiposTown/scripts.pory"
	.string "I have to do more cardio training! The\n"
	.string "next time Team Chimera steps foot into\l"
	.string "Kipos Town, I'll be here to chase them\l"
	.string "off!$"

KiposTown_EventScript_OldWoman_Text_0:
# 322 "data/maps/KiposTown/scripts.pory"
	.string "Old Woman$"

KiposTown_EventScript_OldWoman_Text_1:
# 323 "data/maps/KiposTown/scripts.pory"
	.string "I found someone's Stantler left\n"
	.string "abandoned with it's Poké ball. I took it\l"
	.string "to the Conservation Center, and they\l"
	.string "told me how to care for it. Now, it's my\l"
	.string "closest companion!$"

KiposTown_EventScript_Stantler_Text_0:
# 332 "data/maps/KiposTown/scripts.pory"
	.string "Stantler$"

KiposTown_EventScript_Stantler_Text_1:
# 334 "data/maps/KiposTown/scripts.pory"
	.string "Hruff...$"

KiposTown_EventScript_TyrantrumSign_Text_0:
# 344 "data/maps/KiposTown/scripts.pory"
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
# 353 "data/maps/KiposTown/scripts.pory"
	.string "Kipos Town\n"
	.string "For Nature, For People, Forever\p"
	.string "{UP_ARROW} Pythios Town\n"
	.string "Lastlight Road {DOWN_ARROW}\p"
	.string "Sunset Wildlife Conservation Center {RIGHT_ARROW}$"

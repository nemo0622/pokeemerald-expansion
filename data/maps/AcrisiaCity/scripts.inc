AcrisiaCity_MapScripts::
# 6 "data/maps/AcrisiaCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 3 "data/maps/AcrisiaCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AcrisiaCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_VISITED_ACRISIA_CITY
# 9 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 10 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 11 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 12 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 13 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 14 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 15 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 16 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 17 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 18 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 19 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 20 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 21 "data/maps/AcrisiaCity/scripts.pory"
	setobjectaswildencounter 26, ENCOUNTER_LAND
# 22 "data/maps/AcrisiaCity/scripts.pory"
	setobjectaswildencounter 27, ENCOUNTER_LAND
	return

AcrisiaCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/AcrisiaCity/scripts.pory"
	map_script_2 VAR_INTRO_STATE, 0, AcrisiaCity_EventScript_PlayerExitsTruck
	.2byte 0


Overworld_EventScript_WildPokemon::
# 29 "data/maps/AcrisiaCity/scripts.pory"
	lockall
# 30 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 31 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_DOING_OVERWORLD_ENCOUNTER
# 34 "data/maps/AcrisiaCity/scripts.pory"
	startoverworldencounter 5
# 36 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_DOING_OVERWORLD_ENCOUNTER
# 37 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_DemoWarning::
# 46 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 47 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_DemoWarning_Text_0
# 48 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_DemoWarning_Text_1
# 49 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 50 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_DID_DEMO_WARNING
# 51 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_PlayerExitsTruck::
# 57 "data/maps/AcrisiaCity/scripts.pory"
	setvar VAR_INTRO_STATE, 1
# 58 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_INTRO_TRUCK
# 59 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_SECOND_PROFESSOR_SPRITE
# 60 "data/maps/AcrisiaCity/scripts.pory"
	lockall
# 61 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerOffTruck
# 62 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 65 "data/maps/AcrisiaCity/scripts.pory"
	playse SE_PIN
# 66 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 67 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 68 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 69 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_1
# 70 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 73 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 74 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfGetsAbovePlayer
# 75 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 76 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1
# 77 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1
# 78 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 79 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 80 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_2
# 81 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 82 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2
# 83 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2
# 84 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 86 "data/maps/AcrisiaCity/scripts.pory"
	hideobjectat 12, MAP_ACRISIA_CITY
# 88 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 89 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 90 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 91 "data/maps/AcrisiaCity/scripts.pory"
	warpsilent MAP_ACRISIA_CITY_UNIVERSITY, 10, 19
# 92 "data/maps/AcrisiaCity/scripts.pory"
	waitstate
# 94 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 96 "data/maps/AcrisiaCity/scripts.pory"
	releaseall
	end


# 100 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerOffTruck:
# 102 "data/maps/AcrisiaCity/scripts.pory"
	jump_right
# 103 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 104 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 105 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 108 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfGetsAbovePlayer:
# 110 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 111 "data/maps/AcrisiaCity/scripts.pory"
	walk_left
# 112 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 113 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 113 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 114 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 117 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1:
# 119 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 119 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 119 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 119 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 119 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 119 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 120 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 120 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 120 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 120 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 120 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 121 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 121 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 121 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 121 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 121 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 122 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 123 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 126 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1:
# 128 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 128 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 128 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 128 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 128 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 128 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 128 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 129 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 129 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 129 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 129 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 129 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 130 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 130 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 130 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 130 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 131 "data/maps/AcrisiaCity/scripts.pory"
	face_up
# 132 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 135 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2:
# 137 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 137 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 137 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 137 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 137 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 137 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 137 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 137 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 137 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 139 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 139 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 139 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 139 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 139 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 140 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 143 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2:
# 145 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 145 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 145 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 145 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 145 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 145 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 145 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 145 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 145 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 145 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 147 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 147 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 147 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 147 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 148 "data/maps/AcrisiaCity/scripts.pory"
	step_end

AcrisiaCity_EventScript_LadyByWater::
# 156 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 157 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 158 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 159 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_1
# 160 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 162 "data/maps/AcrisiaCity/scripts.pory"
	goto_if_unset FLAG_GOT_EVIOLITE_ACRISIA_CITY, AcrisiaCity_EventScript_LadyByWater_2
# 199 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 200 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_6
# 201 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
AcrisiaCity_EventScript_LadyByWater_1:
# 204 "data/maps/AcrisiaCity/scripts.pory"
	release
	end

AcrisiaCity_EventScript_LadyByWater_2:
# 164 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 165 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_2
# 167 "data/maps/AcrisiaCity/scripts.pory"
	getcaughtmon SPECIES_TOGEPI
# 168 "data/maps/AcrisiaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_EventScript_LadyByWater_5
# 183 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 184 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_4
# 185 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 186 "data/maps/AcrisiaCity/scripts.pory"
	giveitem ITEM_EVIOLITE
# 187 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_GOT_EVIOLITE_ACRISIA_CITY
# 188 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 189 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_5
# 190 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 192 "data/maps/AcrisiaCity/scripts.pory"
	delay 20
# 193 "data/maps/AcrisiaCity/scripts.pory"
	completequest QUEST_TOGEPI_EVIOLITE
	goto AcrisiaCity_EventScript_LadyByWater_1

AcrisiaCity_EventScript_LadyByWater_5:
# 170 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 171 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_3
# 172 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 174 "data/maps/AcrisiaCity/scripts.pory"
	delay 20
# 175 "data/maps/AcrisiaCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_TOGEPI_EVIOLITE
# 176 "data/maps/AcrisiaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_EventScript_LadyByWater_8
	goto AcrisiaCity_EventScript_LadyByWater_1

AcrisiaCity_EventScript_LadyByWater_8:
# 178 "data/maps/AcrisiaCity/scripts.pory"
	startquest QUEST_TOGEPI_EVIOLITE
	goto AcrisiaCity_EventScript_LadyByWater_1


AcrisiaCity_EventScript_Woman2::
# 210 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 211 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 212 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Woman2_Text_0
# 213 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Woman2_Text_1
# 214 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 215 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Camper::
# 221 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 222 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 223 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Camper_Text_0
# 224 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Camper_Text_1
# 225 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 226 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_NinjaBoy::
# 232 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 233 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 234 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_NinjaBoy_Text_0
# 235 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_NinjaBoy_Text_1
# 236 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 237 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_RailMan::
# 243 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 244 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 245 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_RailMan_Text_0
# 246 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_RailMan_Text_1
# 247 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 248 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Growlithe::
# 254 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 255 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 256 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Growlithe_Text_0
# 257 "data/maps/AcrisiaCity/scripts.pory"
	playmoncry SPECIES_GROWLITHE_HISUI, CRY_MODE_NORMAL
# 258 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Growlithe_Text_1
# 259 "data/maps/AcrisiaCity/scripts.pory"
	waitmoncry
# 260 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 261 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Phanpy::
# 267 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 268 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 269 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Phanpy_Text_0
# 270 "data/maps/AcrisiaCity/scripts.pory"
	playmoncry SPECIES_PHANPY, CRY_MODE_NORMAL
# 271 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Phanpy_Text_1
# 272 "data/maps/AcrisiaCity/scripts.pory"
	waitmoncry
# 273 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 274 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_OldMan::
# 280 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 281 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 282 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_OldMan_Text_0
# 283 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_OldMan_Text_1
# 284 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 285 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Gentleman::
# 291 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 292 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 293 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Gentleman_Text_0
# 294 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Gentleman_Text_1
# 295 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 296 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_FatMan::
# 302 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 303 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 304 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_FatMan_Text_0
# 305 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_FatMan_Text_1
# 306 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 307 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 23, Common_Movement_FaceUp
# 308 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 309 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_DemoWarning_Text_0:
# 47 "data/maps/AcrisiaCity/scripts.pory"
	.string "Nemo622$"

AcrisiaCity_DemoWarning_Text_1:
# 48 "data/maps/AcrisiaCity/scripts.pory"
	.string "Hold on, {PLAYER}! Welcome to the\n"
	.string "Pokémon Lazarus Demo!\p"
	.string "Please remember that everything seen\n"
	.string "in this demo is in {COLOR GREEN}active development{COLOR DARK_GRAY}.\l"
	.string "There is no guarantee that what you\l"
	.string "see here will be reflected in the final\l"
	.string "game (although most should remain the\l"
	.string "same, as of typing this). Bugs and\l"
	.string "placeholder sprites should be\l"
	.string "anticipated, although I've done my best\l"
	.string "to polish as much as possible.\p"
	.string "With that said, have fun exploring the\n"
	.string "first portion of the Ilios Region! -Nemo$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_0:
# 68 "data/maps/AcrisiaCity/scripts.pory"
	.string "Prof. Elia$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_1:
# 69 "data/maps/AcrisiaCity/scripts.pory"
	.string "Looks like you made it, {PLAYER}!\n"
	.string "Sorry about the rough ride, but there's\l"
	.string "no public transport up here. It's a bit...\l"
	.string "rural around here.\p"
	.string "Come, follow me! Let's get you to the\n"
	.string "University building!$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_2:
# 80 "data/maps/AcrisiaCity/scripts.pory"
	.string "As you can see, Acrisia City used to be\n"
	.string "a mining town. It's a bit past its prime\l"
	.string "now, but the folks here are still willing\l"
	.string "to support the University, so we've\l"
	.string "continued our research out of here!$"

AcrisiaCity_EventScript_LadyByWater_Text_0:
# 158 "data/maps/AcrisiaCity/scripts.pory"
	.string "Performer$"

AcrisiaCity_EventScript_LadyByWater_Text_1:
# 159 "data/maps/AcrisiaCity/scripts.pory"
	.string "Baby Pokémon are the cutest, don't you\n"
	.string "think?$"

AcrisiaCity_EventScript_LadyByWater_Text_2:
# 165 "data/maps/AcrisiaCity/scripts.pory"
	.string "I've always wanted to learn more about\n"
	.string "Togepi... hey! You're a researcher with\l"
	.string "the University! Come to me when you\l"
	.string "have a {COLOR GREEN}complete Pokédex entry{COLOR DARK_GRAY} of\l"
	.string "Togepi.$"

AcrisiaCity_EventScript_LadyByWater_Text_3:
# 171 "data/maps/AcrisiaCity/scripts.pory"
	.string "Hurry up now, I'll have a {COLOR GREEN}prize{COLOR DARK_GRAY} for you!$"

AcrisiaCity_EventScript_LadyByWater_Text_4:
# 184 "data/maps/AcrisiaCity/scripts.pory"
	.string "Goodness, you've caught a Togepi! That\n"
	.string "makes me so happy!\p"
	.string "Here, let me give you a little something.$"

AcrisiaCity_EventScript_LadyByWater_Text_5:
# 189 "data/maps/AcrisiaCity/scripts.pory"
	.string "The {COLOR GREEN}Eviolite{COLOR DARK_GRAY} stops Pokémon from\n"
	.string "evolving and boosts their stats.\p"
	.string "It's great if you want to keep your\n"
	.string "cute baby Pokémon strong!$"

AcrisiaCity_EventScript_LadyByWater_Text_6:
# 200 "data/maps/AcrisiaCity/scripts.pory"
	.string "I hope that {COLOR GREEN}Eviolite{COLOR DARK_GRAY} has been helpful\n"
	.string "for you! It'll make your cute little\l"
	.string "Pokémon a bit stronger!$"

AcrisiaCity_EventScript_Woman2_Text_0:
# 212 "data/maps/AcrisiaCity/scripts.pory"
	.string "Woman$"

AcrisiaCity_EventScript_Woman2_Text_1:
# 213 "data/maps/AcrisiaCity/scripts.pory"
	.string "Even though not much mining happens\n"
	.string "here anymore, plenty of Trainers still\l"
	.string "come through Acrisia City. People are\l"
	.string "always looking for advice and to train\l"
	.string "in the mountains.$"

AcrisiaCity_EventScript_Camper_Text_0:
# 223 "data/maps/AcrisiaCity/scripts.pory"
	.string "Camper$"

AcrisiaCity_EventScript_Camper_Text_1:
# 224 "data/maps/AcrisiaCity/scripts.pory"
	.string "My family is camping in the Acrisia\n"
	.string "Mountains! I came down to check out\l"
	.string "the University and wild Pokémon.$"

AcrisiaCity_EventScript_NinjaBoy_Text_0:
# 234 "data/maps/AcrisiaCity/scripts.pory"
	.string "Excited Boy$"

AcrisiaCity_EventScript_NinjaBoy_Text_1:
# 235 "data/maps/AcrisiaCity/scripts.pory"
	.string "Some Pokémon are brave enough to walk\n"
	.string "around openly in the grass! It's so\l"
	.string "cool!$"

AcrisiaCity_EventScript_RailMan_Text_0:
# 245 "data/maps/AcrisiaCity/scripts.pory"
	.string "Nervous Man$"

AcrisiaCity_EventScript_RailMan_Text_1:
# 246 "data/maps/AcrisiaCity/scripts.pory"
	.string "I want to hop down and check this area\n"
	.string "out, but I'm too scared to jump... I\l"
	.string "should just get the Rock Smash HM.$"

AcrisiaCity_EventScript_Growlithe_Text_0:
# 256 "data/maps/AcrisiaCity/scripts.pory"
	.string "Growlithe$"

AcrisiaCity_EventScript_Growlithe_Text_1:
# 258 "data/maps/AcrisiaCity/scripts.pory"
	.string "Bwark bwark!$"

AcrisiaCity_EventScript_Phanpy_Text_0:
# 269 "data/maps/AcrisiaCity/scripts.pory"
	.string "Phanpy$"

AcrisiaCity_EventScript_Phanpy_Text_1:
# 271 "data/maps/AcrisiaCity/scripts.pory"
	.string "Toooot!$"

AcrisiaCity_EventScript_OldMan_Text_0:
# 282 "data/maps/AcrisiaCity/scripts.pory"
	.string "Old Man$"

AcrisiaCity_EventScript_OldMan_Text_1:
# 283 "data/maps/AcrisiaCity/scripts.pory"
	.string "Heavens, look at this harvest! Food\n"
	.string "comes up from Jusmail Town and feeds\l"
	.string "the folks up here.$"

AcrisiaCity_EventScript_Gentleman_Text_0:
# 293 "data/maps/AcrisiaCity/scripts.pory"
	.string "Gentleman$"

AcrisiaCity_EventScript_Gentleman_Text_1:
# 294 "data/maps/AcrisiaCity/scripts.pory"
	.string "Now that I'm retired, I like to sit here\n"
	.string "and watch the time pass. I can't help\l"
	.string "but smile seeing the lights come on in\l"
	.string "the evening!$"

AcrisiaCity_EventScript_FatMan_Text_0:
# 304 "data/maps/AcrisiaCity/scripts.pory"
	.string "Man$"

AcrisiaCity_EventScript_FatMan_Text_1:
# 305 "data/maps/AcrisiaCity/scripts.pory"
	.string "I'm looking for some food for my Phanpy.\n"
	.string "Towns in the Ilios Region tend to have\l"
	.string "little farmers' markets like this.$"

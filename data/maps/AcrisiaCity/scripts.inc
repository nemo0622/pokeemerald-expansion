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


AcrisiaCity_EventScript_PlayerExitsTruck::
# 43 "data/maps/AcrisiaCity/scripts.pory"
	setvar VAR_INTRO_STATE, 1
# 44 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_INTRO_TRUCK
# 45 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_SECOND_PROFESSOR_SPRITE
# 46 "data/maps/AcrisiaCity/scripts.pory"
	lockall
# 47 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerOffTruck
# 48 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 51 "data/maps/AcrisiaCity/scripts.pory"
	playse SE_PIN
# 52 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 53 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 54 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 55 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_1
# 56 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 59 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 60 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfGetsAbovePlayer
# 61 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 62 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1
# 63 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1
# 64 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 65 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 66 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_2
# 67 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 68 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2
# 69 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2
# 70 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 72 "data/maps/AcrisiaCity/scripts.pory"
	hideobjectat 12, MAP_ACRISIA_CITY
# 74 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 75 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 76 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 77 "data/maps/AcrisiaCity/scripts.pory"
	warpsilent MAP_ACRISIA_CITY_UNIVERSITY, 10, 19
# 78 "data/maps/AcrisiaCity/scripts.pory"
	waitstate
# 80 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 82 "data/maps/AcrisiaCity/scripts.pory"
	releaseall
	end


# 86 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerOffTruck:
# 88 "data/maps/AcrisiaCity/scripts.pory"
	jump_right
# 89 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 90 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 91 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 94 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfGetsAbovePlayer:
# 96 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 97 "data/maps/AcrisiaCity/scripts.pory"
	walk_left
# 98 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 99 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 99 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 100 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 103 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1:
# 105 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 105 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 105 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 105 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 105 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 105 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 106 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 106 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 106 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 106 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 106 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 107 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 107 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 107 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 107 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 107 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 108 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 109 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 112 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1:
# 114 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 114 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 114 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 114 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 114 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 114 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 114 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 115 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 115 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 115 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 115 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 115 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 116 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 116 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 116 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 116 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 117 "data/maps/AcrisiaCity/scripts.pory"
	face_up
# 118 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 121 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2:
# 123 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 123 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 123 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 123 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 123 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 123 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 123 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 123 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 123 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 124 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 124 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 124 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 124 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 124 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 124 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 124 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 124 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 124 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 124 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 124 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 124 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 124 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 124 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 124 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 124 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 124 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 124 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 124 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 124 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 125 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 125 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 125 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 125 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 125 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 126 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 129 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2:
# 131 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 131 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 131 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 131 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 131 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 131 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 131 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 131 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 131 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 131 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 132 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 132 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 132 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 132 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 132 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 132 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 132 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 132 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 132 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 132 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 132 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 132 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 132 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 132 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 132 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 132 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 132 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 132 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 132 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 132 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 133 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 133 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 133 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 133 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 134 "data/maps/AcrisiaCity/scripts.pory"
	step_end

AcrisiaCity_EventScript_LadyByWater::
# 142 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 143 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 144 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 145 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_1
# 146 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 148 "data/maps/AcrisiaCity/scripts.pory"
	goto_if_unset FLAG_GOT_EVIOLITE_ACRISIA_CITY, AcrisiaCity_EventScript_LadyByWater_2
# 175 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 176 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_6
# 177 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
AcrisiaCity_EventScript_LadyByWater_1:
# 180 "data/maps/AcrisiaCity/scripts.pory"
	release
	end

AcrisiaCity_EventScript_LadyByWater_2:
# 150 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 151 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_2
# 153 "data/maps/AcrisiaCity/scripts.pory"
	getcaughtmon SPECIES_TOGEPI
# 154 "data/maps/AcrisiaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_EventScript_LadyByWater_5
# 162 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 163 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_4
# 164 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 165 "data/maps/AcrisiaCity/scripts.pory"
	giveitem ITEM_EVIOLITE
# 166 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_GOT_EVIOLITE_ACRISIA_CITY
# 167 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 168 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_5
# 169 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
	goto AcrisiaCity_EventScript_LadyByWater_1

AcrisiaCity_EventScript_LadyByWater_5:
# 156 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 157 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_3
# 158 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
	goto AcrisiaCity_EventScript_LadyByWater_1


AcrisiaCity_EventScript_Woman2::
# 186 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 187 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 188 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Woman2_Text_0
# 189 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Woman2_Text_1
# 190 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 191 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Camper::
# 197 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 198 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 199 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Camper_Text_0
# 200 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Camper_Text_1
# 201 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 202 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_NinjaBoy::
# 208 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 209 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 210 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_NinjaBoy_Text_0
# 211 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_NinjaBoy_Text_1
# 212 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 213 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_RailMan::
# 219 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 220 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 221 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_RailMan_Text_0
# 222 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_RailMan_Text_1
# 223 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 224 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Growlithe::
# 230 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 231 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 232 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Growlithe_Text_0
# 233 "data/maps/AcrisiaCity/scripts.pory"
	playmoncry SPECIES_GROWLITHE_HISUI, CRY_MODE_NORMAL
# 234 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Growlithe_Text_1
# 235 "data/maps/AcrisiaCity/scripts.pory"
	waitmoncry
# 236 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 237 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Phanpy::
# 243 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 244 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 245 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Phanpy_Text_0
# 246 "data/maps/AcrisiaCity/scripts.pory"
	playmoncry SPECIES_PHANPY, CRY_MODE_NORMAL
# 247 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Phanpy_Text_1
# 248 "data/maps/AcrisiaCity/scripts.pory"
	waitmoncry
# 249 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 250 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_OldMan::
# 256 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 257 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 258 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_OldMan_Text_0
# 259 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_OldMan_Text_1
# 260 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 261 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Gentleman::
# 267 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 268 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 269 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Gentleman_Text_0
# 270 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Gentleman_Text_1
# 271 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 272 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_FatMan::
# 278 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 279 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 280 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_FatMan_Text_0
# 281 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_FatMan_Text_1
# 282 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 283 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 23, Common_Movement_FaceUp
# 284 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 285 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_PlayerExitsTruck_Text_0:
# 54 "data/maps/AcrisiaCity/scripts.pory"
	.string "Prof. Elia$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_1:
# 55 "data/maps/AcrisiaCity/scripts.pory"
	.string "Looks like you made it, {PLAYER}!\n"
	.string "Sorry about the rough ride, but there's\l"
	.string "no public transport up here. It's a bit...\l"
	.string "rural around here.\p"
	.string "Come, follow me! Let's get you to the\n"
	.string "University building!$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_2:
# 66 "data/maps/AcrisiaCity/scripts.pory"
	.string "As you can see, Acrisia City used to be\n"
	.string "a mining town. It's a bit past its prime\l"
	.string "now, but the folks here are still willing\l"
	.string "to support the University, so we've\l"
	.string "continued our research out of here!$"

AcrisiaCity_EventScript_LadyByWater_Text_0:
# 144 "data/maps/AcrisiaCity/scripts.pory"
	.string "Pokéfan Lady$"

AcrisiaCity_EventScript_LadyByWater_Text_1:
# 145 "data/maps/AcrisiaCity/scripts.pory"
	.string "Baby Pokémon are the cutest, don't you\n"
	.string "think?$"

AcrisiaCity_EventScript_LadyByWater_Text_2:
# 151 "data/maps/AcrisiaCity/scripts.pory"
	.string "I've always wanted to learn more about\n"
	.string "Togepi... hey! You're a researcher with\l"
	.string "the University! Come to me when you\l"
	.string "have a {COLOR GREEN}complete Pokédex entry{COLOR DARK_GRAY} of\l"
	.string "Togepi.$"

AcrisiaCity_EventScript_LadyByWater_Text_3:
# 157 "data/maps/AcrisiaCity/scripts.pory"
	.string "Hurry on now, I'll have a {COLOR GREEN}prize{COLOR DARK_GRAY} for you!$"

AcrisiaCity_EventScript_LadyByWater_Text_4:
# 163 "data/maps/AcrisiaCity/scripts.pory"
	.string "Goodness, you've caught a Togepi! That\n"
	.string "makes me so happy!\p"
	.string "Here, let me give you a little something.$"

AcrisiaCity_EventScript_LadyByWater_Text_5:
# 168 "data/maps/AcrisiaCity/scripts.pory"
	.string "The {COLOR GREEN}Eviolite{COLOR DARK_GRAY} stops Pokémon from\n"
	.string "evolving and boosts their stats.\p"
	.string "It's great if you want to keep your\n"
	.string "cute baby Pokémon strong!$"

AcrisiaCity_EventScript_LadyByWater_Text_6:
# 176 "data/maps/AcrisiaCity/scripts.pory"
	.string "I hope that {COLOR GREEN}Eviolite{COLOR DARK_GRAY} has been helpful\n"
	.string "for you! It'll make your cute little\l"
	.string "Pokémon a bit stronger!$"

AcrisiaCity_EventScript_Woman2_Text_0:
# 188 "data/maps/AcrisiaCity/scripts.pory"
	.string "Woman$"

AcrisiaCity_EventScript_Woman2_Text_1:
# 189 "data/maps/AcrisiaCity/scripts.pory"
	.string "Even though not much mining happens\n"
	.string "here anymore, plenty of Trainers still\l"
	.string "come through Acrisia City. People are\l"
	.string "always looking for advice and to train\l"
	.string "in the mountains.$"

AcrisiaCity_EventScript_Camper_Text_0:
# 199 "data/maps/AcrisiaCity/scripts.pory"
	.string "Camper$"

AcrisiaCity_EventScript_Camper_Text_1:
# 200 "data/maps/AcrisiaCity/scripts.pory"
	.string "My family is camping in the Acrisia\n"
	.string "Mountains! I came down to check out\l"
	.string "the University and wild Pokémon.$"

AcrisiaCity_EventScript_NinjaBoy_Text_0:
# 210 "data/maps/AcrisiaCity/scripts.pory"
	.string "Excited Boy$"

AcrisiaCity_EventScript_NinjaBoy_Text_1:
# 211 "data/maps/AcrisiaCity/scripts.pory"
	.string "The Pokémon here are so cool! I wanna\n"
	.string "find them all!$"

AcrisiaCity_EventScript_RailMan_Text_0:
# 221 "data/maps/AcrisiaCity/scripts.pory"
	.string "Nervous Man$"

AcrisiaCity_EventScript_RailMan_Text_1:
# 222 "data/maps/AcrisiaCity/scripts.pory"
	.string "I want to hop down and check this area\n"
	.string "out, but I'm too scared to jump... I\l"
	.string "should just get the Rock Smash HM.$"

AcrisiaCity_EventScript_Growlithe_Text_0:
# 232 "data/maps/AcrisiaCity/scripts.pory"
	.string "Growlithe$"

AcrisiaCity_EventScript_Growlithe_Text_1:
# 234 "data/maps/AcrisiaCity/scripts.pory"
	.string "Bwark bwark!$"

AcrisiaCity_EventScript_Phanpy_Text_0:
# 245 "data/maps/AcrisiaCity/scripts.pory"
	.string "Phanpy$"

AcrisiaCity_EventScript_Phanpy_Text_1:
# 247 "data/maps/AcrisiaCity/scripts.pory"
	.string "Toooot!$"

AcrisiaCity_EventScript_OldMan_Text_0:
# 258 "data/maps/AcrisiaCity/scripts.pory"
	.string "Old Man$"

AcrisiaCity_EventScript_OldMan_Text_1:
# 259 "data/maps/AcrisiaCity/scripts.pory"
	.string "Heavens, look at this harvest! Food\n"
	.string "comes up from Jusmail Town and feeds\l"
	.string "the folks up here.$"

AcrisiaCity_EventScript_Gentleman_Text_0:
# 269 "data/maps/AcrisiaCity/scripts.pory"
	.string "Gentleman$"

AcrisiaCity_EventScript_Gentleman_Text_1:
# 270 "data/maps/AcrisiaCity/scripts.pory"
	.string "Now that I'm retired, I like to sit here\n"
	.string "and watch the time pass. I can't help\l"
	.string "but smile seeing the lights come on in\l"
	.string "the evening!$"

AcrisiaCity_EventScript_FatMan_Text_0:
# 280 "data/maps/AcrisiaCity/scripts.pory"
	.string "Man$"

AcrisiaCity_EventScript_FatMan_Text_1:
# 281 "data/maps/AcrisiaCity/scripts.pory"
	.string "I'm looking for some food for my Phanpy.\n"
	.string "Towns in the Ilios Region tend to have\l"
	.string "little farmers' markets like this.$"

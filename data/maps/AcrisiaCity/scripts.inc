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
# 24 "data/maps/AcrisiaCity/scripts.pory"
	goto_if_unset FLAG_HIDE_INTRO_TRUCK, AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 26 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_STARTING_POKEMON
	return

AcrisiaCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/AcrisiaCity/scripts.pory"
	map_script_2 VAR_INTRO_STATE, 0, AcrisiaCity_EventScript_PlayerExitsTruck
	.2byte 0


Overworld_EventScript_WildPokemon::
# 34 "data/maps/AcrisiaCity/scripts.pory"
	lockall
# 35 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 36 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_DOING_OVERWORLD_ENCOUNTER
# 39 "data/maps/AcrisiaCity/scripts.pory"
	startoverworldencounter 5
# 41 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_DOING_OVERWORLD_ENCOUNTER
# 42 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_DemoWarning::
# 51 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 52 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_DemoWarning_Text_0
# 53 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_DemoWarning_Text_1
# 54 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 55 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_DID_DEMO_WARNING
# 56 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_PlayerExitsTruck::
# 62 "data/maps/AcrisiaCity/scripts.pory"
	setvar VAR_INTRO_STATE, 1
# 63 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_SECOND_PROFESSOR_SPRITE
# 64 "data/maps/AcrisiaCity/scripts.pory"
	lockall
# 65 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerOffTruck
# 66 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 69 "data/maps/AcrisiaCity/scripts.pory"
	playse SE_PIN
# 70 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 71 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 72 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 73 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_1
# 74 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 77 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 78 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfGetsAbovePlayer
# 79 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 80 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1
# 81 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1
# 82 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 83 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 84 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_2
# 85 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 86 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2
# 87 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2
# 88 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 90 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 91 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 92 "data/maps/AcrisiaCity/scripts.pory"
	delay 15
# 93 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 18, AcrisiaCity_Movement_ShroomishRunFromProf
# 94 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 29, AcrisiaCity_Movement_DucklettRunFromProf
# 95 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 97 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 98 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 99 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 100 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_3
# 101 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 102 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_3
# 103 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_3
# 104 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 106 "data/maps/AcrisiaCity/scripts.pory"
	hideobjectat 12, MAP_ACRISIA_CITY
# 108 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_INTRO_TRUCK
# 109 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_STARTING_POKEMON
# 111 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 112 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 113 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 114 "data/maps/AcrisiaCity/scripts.pory"
	warpsilent MAP_ACRISIA_CITY_UNIVERSITY, 10, 19
# 115 "data/maps/AcrisiaCity/scripts.pory"
	waitstate
# 117 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 119 "data/maps/AcrisiaCity/scripts.pory"
	releaseall
	end


# 123 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerOffTruck:
# 125 "data/maps/AcrisiaCity/scripts.pory"
	jump_right
# 126 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 127 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 128 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 131 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfGetsAbovePlayer:
# 133 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 134 "data/maps/AcrisiaCity/scripts.pory"
	walk_left
# 135 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 136 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 136 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 137 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 140 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1:
# 142 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 142 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 142 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 142 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 142 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 142 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 143 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 143 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 143 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 143 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 143 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 144 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 144 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 144 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 144 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 144 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 145 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 146 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 149 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1:
# 151 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 151 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 151 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 151 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 151 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 151 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 151 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 152 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 152 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 152 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 152 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 152 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 153 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 153 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 153 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 153 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 154 "data/maps/AcrisiaCity/scripts.pory"
	face_up
# 155 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 158 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2:
# 160 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 160 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 160 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 160 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 160 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 160 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 160 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 160 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 160 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 161 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 161 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 161 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 161 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 161 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 161 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 161 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 161 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 161 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 161 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 161 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 161 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 161 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 161 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 161 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 161 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 162 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 165 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2:
# 167 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 167 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 167 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 167 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 167 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 167 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 167 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 167 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 167 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 167 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 168 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 168 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 168 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 168 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 168 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 168 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 168 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 168 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 168 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 168 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 168 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 168 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 168 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 168 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 168 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 169 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 172 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ShroomishRunFromProf:
# 174 "data/maps/AcrisiaCity/scripts.pory"
	emote_exclamation_mark
# 175 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 175 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 175 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 175 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 175 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 175 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 175 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 176 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 179 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_DucklettRunFromProf:
# 181 "data/maps/AcrisiaCity/scripts.pory"
	emote_exclamation_mark
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_up
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_up
# 183 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_right
# 183 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_right
# 184 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 184 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 185 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_left
# 186 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 186 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 186 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 186 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 186 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 186 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 186 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 187 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 190 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_3:
# 192 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 192 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 192 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 193 "data/maps/AcrisiaCity/scripts.pory"
	face_left
# 194 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 194 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 194 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 195 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 196 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 196 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 196 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 196 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 196 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 197 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 200 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_3:
# 202 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 202 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 202 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 203 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 204 "data/maps/AcrisiaCity/scripts.pory"
	emote_heart
# 205 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 205 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 205 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 206 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 206 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 207 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 207 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 207 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 207 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 208 "data/maps/AcrisiaCity/scripts.pory"
	step_end

AcrisiaCity_EventScript_LadyByWater::
# 216 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 217 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 218 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 219 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_1
# 220 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 222 "data/maps/AcrisiaCity/scripts.pory"
	goto_if_unset FLAG_GOT_EVIOLITE_ACRISIA_CITY, AcrisiaCity_EventScript_LadyByWater_2
# 259 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 260 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_6
# 261 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
AcrisiaCity_EventScript_LadyByWater_1:
# 264 "data/maps/AcrisiaCity/scripts.pory"
	release
	end

AcrisiaCity_EventScript_LadyByWater_2:
# 224 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 225 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_2
# 227 "data/maps/AcrisiaCity/scripts.pory"
	getcaughtmon SPECIES_TOGEPI
# 228 "data/maps/AcrisiaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_EventScript_LadyByWater_5
# 243 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 244 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_4
# 245 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 246 "data/maps/AcrisiaCity/scripts.pory"
	giveitem ITEM_EVIOLITE
# 247 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_GOT_EVIOLITE_ACRISIA_CITY
# 248 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 249 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_5
# 250 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 252 "data/maps/AcrisiaCity/scripts.pory"
	delay 20
# 253 "data/maps/AcrisiaCity/scripts.pory"
	completequest QUEST_TOGEPI_EVIOLITE
	goto AcrisiaCity_EventScript_LadyByWater_1

AcrisiaCity_EventScript_LadyByWater_5:
# 230 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 231 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_3
# 232 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 234 "data/maps/AcrisiaCity/scripts.pory"
	delay 20
# 235 "data/maps/AcrisiaCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_TOGEPI_EVIOLITE
# 236 "data/maps/AcrisiaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_EventScript_LadyByWater_8
	goto AcrisiaCity_EventScript_LadyByWater_1

AcrisiaCity_EventScript_LadyByWater_8:
# 238 "data/maps/AcrisiaCity/scripts.pory"
	startquest QUEST_TOGEPI_EVIOLITE
	goto AcrisiaCity_EventScript_LadyByWater_1


AcrisiaCity_EventScript_Woman2::
# 270 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 271 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 272 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Woman2_Text_0
# 273 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Woman2_Text_1
# 274 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 275 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Camper::
# 281 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 282 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 283 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Camper_Text_0
# 284 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Camper_Text_1
# 285 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 286 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_NinjaBoy::
# 292 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 293 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 294 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_NinjaBoy_Text_0
# 295 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_NinjaBoy_Text_1
# 296 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 297 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_RailMan::
# 303 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 304 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 305 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_RailMan_Text_0
# 306 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_RailMan_Text_1
# 307 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 308 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Growlithe::
# 314 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 315 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 316 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Growlithe_Text_0
# 317 "data/maps/AcrisiaCity/scripts.pory"
	playmoncry SPECIES_GROWLITHE_HISUI, CRY_MODE_NORMAL
# 318 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Growlithe_Text_1
# 319 "data/maps/AcrisiaCity/scripts.pory"
	waitmoncry
# 320 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 321 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Phanpy::
# 327 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 328 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 329 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Phanpy_Text_0
# 330 "data/maps/AcrisiaCity/scripts.pory"
	playmoncry SPECIES_PHANPY, CRY_MODE_NORMAL
# 331 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Phanpy_Text_1
# 332 "data/maps/AcrisiaCity/scripts.pory"
	waitmoncry
# 333 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 334 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_OldMan::
# 340 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 341 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 342 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_OldMan_Text_0
# 343 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_OldMan_Text_1
# 344 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 345 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Gentleman::
# 351 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 352 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 353 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Gentleman_Text_0
# 354 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Gentleman_Text_1
# 355 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 356 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_FatMan::
# 362 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 363 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 364 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_FatMan_Text_0
# 365 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_FatMan_Text_1
# 366 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 367 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 23, Common_Movement_FaceUp
# 368 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 369 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_DemoWarning_Text_0:
# 52 "data/maps/AcrisiaCity/scripts.pory"
	.string "Nemo622$"

AcrisiaCity_DemoWarning_Text_1:
# 53 "data/maps/AcrisiaCity/scripts.pory"
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
# 72 "data/maps/AcrisiaCity/scripts.pory"
	.string "Prof. Elia$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_1:
# 73 "data/maps/AcrisiaCity/scripts.pory"
	.string "Looks like you made it, {PLAYER}!\n"
	.string "Sorry about the rough ride, but there's\l"
	.string "no public transport up here. It's a bit...\l"
	.string "rural around here.\p"
	.string "Come, follow me! Let's get you to the\n"
	.string "University building!$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_2:
# 84 "data/maps/AcrisiaCity/scripts.pory"
	.string "As you can see, Acrisia City used to be\n"
	.string "a mining town. It's a bit past its prime\l"
	.string "now, but the folks here are still willing\l"
	.string "to support the University, so we've\l"
	.string "continued our research out of here!$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_3:
# 100 "data/maps/AcrisiaCity/scripts.pory"
	.string "Oho! Looks like a few Pokémon are out\n"
	.string "and about this morning!\p"
	.string "As you explore the region, you may find\n"
	.string "some Pokémon wandering around like\l"
	.string "this. But I'm getting ahead of myself!\l"
	.string "Come, let's get inside.$"

AcrisiaCity_EventScript_LadyByWater_Text_0:
# 218 "data/maps/AcrisiaCity/scripts.pory"
	.string "Performer$"

AcrisiaCity_EventScript_LadyByWater_Text_1:
# 219 "data/maps/AcrisiaCity/scripts.pory"
	.string "Baby Pokémon are the cutest, don't you\n"
	.string "think?$"

AcrisiaCity_EventScript_LadyByWater_Text_2:
# 225 "data/maps/AcrisiaCity/scripts.pory"
	.string "I've always wanted to learn more about\n"
	.string "Togepi... hey! You're a researcher with\l"
	.string "the University! Come to me when you\l"
	.string "have a {COLOR GREEN}complete Pokédex entry{COLOR DARK_GRAY} of\l"
	.string "Togepi.$"

AcrisiaCity_EventScript_LadyByWater_Text_3:
# 231 "data/maps/AcrisiaCity/scripts.pory"
	.string "Hurry up now, I'll have a {COLOR GREEN}prize{COLOR DARK_GRAY} for you!$"

AcrisiaCity_EventScript_LadyByWater_Text_4:
# 244 "data/maps/AcrisiaCity/scripts.pory"
	.string "Goodness, you've caught a Togepi! That\n"
	.string "makes me so happy!\p"
	.string "Here, let me give you a little something.$"

AcrisiaCity_EventScript_LadyByWater_Text_5:
# 249 "data/maps/AcrisiaCity/scripts.pory"
	.string "The {COLOR GREEN}Eviolite{COLOR DARK_GRAY} stops Pokémon from\n"
	.string "evolving and boosts their stats.\p"
	.string "It's great if you want to keep your\n"
	.string "cute baby Pokémon strong!$"

AcrisiaCity_EventScript_LadyByWater_Text_6:
# 260 "data/maps/AcrisiaCity/scripts.pory"
	.string "I hope that {COLOR GREEN}Eviolite{COLOR DARK_GRAY} has been helpful\n"
	.string "for you! It'll make your cute little\l"
	.string "Pokémon a bit stronger!$"

AcrisiaCity_EventScript_Woman2_Text_0:
# 272 "data/maps/AcrisiaCity/scripts.pory"
	.string "Woman$"

AcrisiaCity_EventScript_Woman2_Text_1:
# 273 "data/maps/AcrisiaCity/scripts.pory"
	.string "Even though not much mining happens\n"
	.string "here anymore, plenty of Trainers still\l"
	.string "come through Acrisia City. People are\l"
	.string "always looking for advice and to train\l"
	.string "in the mountains.$"

AcrisiaCity_EventScript_Camper_Text_0:
# 283 "data/maps/AcrisiaCity/scripts.pory"
	.string "Camper$"

AcrisiaCity_EventScript_Camper_Text_1:
# 284 "data/maps/AcrisiaCity/scripts.pory"
	.string "My family is camping in the Acrisia\n"
	.string "Mountains! I came down to check out\l"
	.string "the University and wild Pokémon.$"

AcrisiaCity_EventScript_NinjaBoy_Text_0:
# 294 "data/maps/AcrisiaCity/scripts.pory"
	.string "Excited Boy$"

AcrisiaCity_EventScript_NinjaBoy_Text_1:
# 295 "data/maps/AcrisiaCity/scripts.pory"
	.string "Some Pokémon are brave enough to walk\n"
	.string "around openly in the grass! It's so\l"
	.string "cool!$"

AcrisiaCity_EventScript_RailMan_Text_0:
# 305 "data/maps/AcrisiaCity/scripts.pory"
	.string "Nervous Man$"

AcrisiaCity_EventScript_RailMan_Text_1:
# 306 "data/maps/AcrisiaCity/scripts.pory"
	.string "I want to hop down and check this area\n"
	.string "out, but I'm too scared to jump... I\l"
	.string "should just get the Rock Smash HM.$"

AcrisiaCity_EventScript_Growlithe_Text_0:
# 316 "data/maps/AcrisiaCity/scripts.pory"
	.string "Growlithe$"

AcrisiaCity_EventScript_Growlithe_Text_1:
# 318 "data/maps/AcrisiaCity/scripts.pory"
	.string "Bwark bwark!$"

AcrisiaCity_EventScript_Phanpy_Text_0:
# 329 "data/maps/AcrisiaCity/scripts.pory"
	.string "Phanpy$"

AcrisiaCity_EventScript_Phanpy_Text_1:
# 331 "data/maps/AcrisiaCity/scripts.pory"
	.string "Toooot!$"

AcrisiaCity_EventScript_OldMan_Text_0:
# 342 "data/maps/AcrisiaCity/scripts.pory"
	.string "Old Man$"

AcrisiaCity_EventScript_OldMan_Text_1:
# 343 "data/maps/AcrisiaCity/scripts.pory"
	.string "Heavens, look at this harvest! Food\n"
	.string "comes up from Jusmail Town and feeds\l"
	.string "the folks up here.$"

AcrisiaCity_EventScript_Gentleman_Text_0:
# 353 "data/maps/AcrisiaCity/scripts.pory"
	.string "Gentleman$"

AcrisiaCity_EventScript_Gentleman_Text_1:
# 354 "data/maps/AcrisiaCity/scripts.pory"
	.string "Now that I'm retired, I like to sit here\n"
	.string "and watch the time pass. I can't help\l"
	.string "but smile seeing the lights come on in\l"
	.string "the evening!$"

AcrisiaCity_EventScript_FatMan_Text_0:
# 364 "data/maps/AcrisiaCity/scripts.pory"
	.string "Man$"

AcrisiaCity_EventScript_FatMan_Text_1:
# 365 "data/maps/AcrisiaCity/scripts.pory"
	.string "I'm looking for some food for my Phanpy.\n"
	.string "Towns in the Ilios Region tend to have\l"
	.string "little farmers' markets like this.$"

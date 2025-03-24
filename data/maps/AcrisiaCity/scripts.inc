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
	goto_if_unset FLAG_HIDE_INTRO_TRUCK, AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 29 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_SYS_CLOCK_SET
	return

AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 26 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_STARTING_POKEMON
	goto AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AcrisiaCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/AcrisiaCity/scripts.pory"
	map_script_2 VAR_INTRO_STATE, 0, AcrisiaCity_EventScript_PlayerExitsTruck
	.2byte 0


Overworld_EventScript_WildPokemon::
# 36 "data/maps/AcrisiaCity/scripts.pory"
	lockall
# 37 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 38 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_DOING_OVERWORLD_ENCOUNTER
# 41 "data/maps/AcrisiaCity/scripts.pory"
	startoverworldencounter 5
# 43 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_DOING_OVERWORLD_ENCOUNTER
# 44 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_DemoWarning::
# 53 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 54 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_DemoWarning_Text_0
# 55 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_DemoWarning_Text_1
# 56 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 57 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_DID_DEMO_WARNING
# 58 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_PlayerExitsTruck::
# 64 "data/maps/AcrisiaCity/scripts.pory"
	setvar VAR_INTRO_STATE, 1
# 65 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_SECOND_PROFESSOR_SPRITE
# 66 "data/maps/AcrisiaCity/scripts.pory"
	lockall
# 67 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerOffTruck
# 68 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 71 "data/maps/AcrisiaCity/scripts.pory"
	playse SE_PIN
# 72 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 73 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 74 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 75 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_1
# 76 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 79 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 80 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfGetsAbovePlayer
# 81 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1
# 83 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1
# 84 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 85 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 86 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_2
# 87 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 88 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2
# 89 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2
# 90 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 92 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 93 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 94 "data/maps/AcrisiaCity/scripts.pory"
	delay 15
# 95 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 18, AcrisiaCity_Movement_ShroomishRunFromProf
# 96 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 29, AcrisiaCity_Movement_DucklettRunFromProf
# 97 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 99 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 100 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 101 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 102 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_3
# 103 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 104 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_3
# 105 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_3
# 106 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 108 "data/maps/AcrisiaCity/scripts.pory"
	hideobjectat 12, MAP_ACRISIA_CITY
# 110 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_INTRO_TRUCK
# 111 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_STARTING_POKEMON
# 113 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 114 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 115 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 116 "data/maps/AcrisiaCity/scripts.pory"
	warpsilent MAP_ACRISIA_CITY_UNIVERSITY, 10, 19
# 117 "data/maps/AcrisiaCity/scripts.pory"
	waitstate
# 119 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 121 "data/maps/AcrisiaCity/scripts.pory"
	releaseall
	end


# 125 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerOffTruck:
# 127 "data/maps/AcrisiaCity/scripts.pory"
	jump_right
# 128 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 129 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 130 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 133 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfGetsAbovePlayer:
# 135 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 136 "data/maps/AcrisiaCity/scripts.pory"
	walk_left
# 137 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 138 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 138 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 139 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 142 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1:
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
# 144 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 145 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 145 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 145 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 145 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 145 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 146 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 147 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 148 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 151 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1:
# 153 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 153 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 153 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 153 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 153 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 153 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 153 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 154 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 154 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 154 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 154 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 154 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 155 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 155 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 155 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 155 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 156 "data/maps/AcrisiaCity/scripts.pory"
	face_up
# 157 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 160 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2:
# 162 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 162 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 162 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 162 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 162 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 162 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 162 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 162 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 162 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 163 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 163 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 163 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 163 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 163 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 163 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 163 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 163 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 163 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 163 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 163 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 163 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 163 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 163 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 163 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 163 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 164 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 167 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2:
# 169 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 169 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 169 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 169 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 169 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 169 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 169 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 169 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 169 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 169 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 170 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 170 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 170 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 170 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 170 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 170 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 170 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 170 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 170 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 170 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 170 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 170 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 170 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 170 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 170 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 171 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 174 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ShroomishRunFromProf:
# 176 "data/maps/AcrisiaCity/scripts.pory"
	emote_exclamation_mark
# 177 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 177 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 177 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 177 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 177 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 177 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 177 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 178 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 181 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_DucklettRunFromProf:
# 183 "data/maps/AcrisiaCity/scripts.pory"
	emote_exclamation_mark
# 184 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_up
# 184 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_up
# 185 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_right
# 185 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_right
# 186 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 186 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 187 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_left
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 189 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 192 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_3:
# 194 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 194 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 194 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 195 "data/maps/AcrisiaCity/scripts.pory"
	face_left
# 196 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 196 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 196 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 197 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 198 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 198 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 198 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 198 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 198 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 199 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 202 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_3:
# 204 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 204 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 204 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 205 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 206 "data/maps/AcrisiaCity/scripts.pory"
	emote_heart
# 207 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 207 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 207 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 208 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 208 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 209 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 209 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 209 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 209 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 210 "data/maps/AcrisiaCity/scripts.pory"
	step_end

AcrisiaCity_EventScript_LadyByWater::
# 218 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 219 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 220 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 221 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_1
# 222 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 224 "data/maps/AcrisiaCity/scripts.pory"
	goto_if_unset FLAG_GOT_EVIOLITE_ACRISIA_CITY, AcrisiaCity_EventScript_LadyByWater_2
# 261 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 262 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_6
# 263 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
AcrisiaCity_EventScript_LadyByWater_1:
# 266 "data/maps/AcrisiaCity/scripts.pory"
	release
	end

AcrisiaCity_EventScript_LadyByWater_2:
# 226 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 227 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_2
# 229 "data/maps/AcrisiaCity/scripts.pory"
	getcaughtmon SPECIES_TOGEPI
# 230 "data/maps/AcrisiaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_EventScript_LadyByWater_5
# 245 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 246 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_4
# 247 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 248 "data/maps/AcrisiaCity/scripts.pory"
	giveitem ITEM_EVIOLITE
# 249 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_GOT_EVIOLITE_ACRISIA_CITY
# 250 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 251 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_5
# 252 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 254 "data/maps/AcrisiaCity/scripts.pory"
	delay 20
# 255 "data/maps/AcrisiaCity/scripts.pory"
	completequest QUEST_TOGEPI_EVIOLITE
	goto AcrisiaCity_EventScript_LadyByWater_1

AcrisiaCity_EventScript_LadyByWater_5:
# 232 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 233 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_3
# 234 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 236 "data/maps/AcrisiaCity/scripts.pory"
	delay 20
# 237 "data/maps/AcrisiaCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_TOGEPI_EVIOLITE
# 238 "data/maps/AcrisiaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_EventScript_LadyByWater_8
	goto AcrisiaCity_EventScript_LadyByWater_1

AcrisiaCity_EventScript_LadyByWater_8:
# 240 "data/maps/AcrisiaCity/scripts.pory"
	startquest QUEST_TOGEPI_EVIOLITE
	goto AcrisiaCity_EventScript_LadyByWater_1


AcrisiaCity_EventScript_Woman2::
# 272 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 273 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 274 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Woman2_Text_0
# 275 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Woman2_Text_1
# 276 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 277 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Camper::
# 283 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 284 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 285 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Camper_Text_0
# 286 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Camper_Text_1
# 287 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 288 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_NinjaBoy::
# 294 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 295 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 296 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_NinjaBoy_Text_0
# 297 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_NinjaBoy_Text_1
# 298 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 299 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_RailMan::
# 305 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 306 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 307 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_RailMan_Text_0
# 308 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_RailMan_Text_1
# 309 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 310 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Growlithe::
# 316 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 317 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 318 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Growlithe_Text_0
# 319 "data/maps/AcrisiaCity/scripts.pory"
	playmoncry SPECIES_GROWLITHE_HISUI, CRY_MODE_NORMAL
# 320 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Growlithe_Text_1
# 321 "data/maps/AcrisiaCity/scripts.pory"
	waitmoncry
# 322 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 323 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Phanpy::
# 329 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 330 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 331 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Phanpy_Text_0
# 332 "data/maps/AcrisiaCity/scripts.pory"
	playmoncry SPECIES_PHANPY, CRY_MODE_NORMAL
# 333 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Phanpy_Text_1
# 334 "data/maps/AcrisiaCity/scripts.pory"
	waitmoncry
# 335 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 336 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_OldMan::
# 342 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 343 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 344 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_OldMan_Text_0
# 345 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_OldMan_Text_1
# 346 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 347 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Gentleman::
# 353 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 354 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 355 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Gentleman_Text_0
# 356 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Gentleman_Text_1
# 357 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 358 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_FatMan::
# 364 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 365 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 366 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_FatMan_Text_0
# 367 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_FatMan_Text_1
# 368 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 369 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 23, Common_Movement_FaceUp
# 370 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 371 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_DemoWarning_Text_0:
# 54 "data/maps/AcrisiaCity/scripts.pory"
	.string "Nemo622$"

AcrisiaCity_DemoWarning_Text_1:
# 55 "data/maps/AcrisiaCity/scripts.pory"
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
# 74 "data/maps/AcrisiaCity/scripts.pory"
	.string "Prof. Elia$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_1:
# 75 "data/maps/AcrisiaCity/scripts.pory"
	.string "Looks like you made it, {PLAYER}!\n"
	.string "Sorry about the rough ride, but there's\l"
	.string "no public transport up here. It's a bit...\l"
	.string "rural around here.\p"
	.string "Come, follow me! Let's get you to the\n"
	.string "University building!$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_2:
# 86 "data/maps/AcrisiaCity/scripts.pory"
	.string "As you can see, Acrisia City used to be\n"
	.string "a mining town. It's a bit past its prime\l"
	.string "now, but the folks here are still willing\l"
	.string "to support the University, so we've\l"
	.string "continued our research out of here!$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_3:
# 102 "data/maps/AcrisiaCity/scripts.pory"
	.string "Oho! Looks like a few Pokémon are out\n"
	.string "and about this morning!\p"
	.string "As you explore the region, you may find\n"
	.string "some Pokémon wandering around like\l"
	.string "this. But I'm getting ahead of myself!\l"
	.string "Come, let's get inside.$"

AcrisiaCity_EventScript_LadyByWater_Text_0:
# 220 "data/maps/AcrisiaCity/scripts.pory"
	.string "Performer$"

AcrisiaCity_EventScript_LadyByWater_Text_1:
# 221 "data/maps/AcrisiaCity/scripts.pory"
	.string "Baby Pokémon are the cutest, don't you\n"
	.string "think?$"

AcrisiaCity_EventScript_LadyByWater_Text_2:
# 227 "data/maps/AcrisiaCity/scripts.pory"
	.string "I've always wanted to learn more about\n"
	.string "Togepi... hey! You're a researcher with\l"
	.string "the University! Come to me when you\l"
	.string "have a {COLOR GREEN}complete Pokédex entry{COLOR DARK_GRAY} of\l"
	.string "Togepi.$"

AcrisiaCity_EventScript_LadyByWater_Text_3:
# 233 "data/maps/AcrisiaCity/scripts.pory"
	.string "Hurry up now, I'll have a {COLOR GREEN}prize{COLOR DARK_GRAY} for you!$"

AcrisiaCity_EventScript_LadyByWater_Text_4:
# 246 "data/maps/AcrisiaCity/scripts.pory"
	.string "Goodness, you've caught a Togepi! That\n"
	.string "makes me so happy!\p"
	.string "Here, let me give you a little something.$"

AcrisiaCity_EventScript_LadyByWater_Text_5:
# 251 "data/maps/AcrisiaCity/scripts.pory"
	.string "The {COLOR GREEN}Eviolite{COLOR DARK_GRAY} stops Pokémon from\n"
	.string "evolving and boosts their stats.\p"
	.string "It's great if you want to keep your\n"
	.string "cute baby Pokémon strong!$"

AcrisiaCity_EventScript_LadyByWater_Text_6:
# 262 "data/maps/AcrisiaCity/scripts.pory"
	.string "I hope that {COLOR GREEN}Eviolite{COLOR DARK_GRAY} has been helpful\n"
	.string "for you! It'll make your cute little\l"
	.string "Pokémon a bit stronger!$"

AcrisiaCity_EventScript_Woman2_Text_0:
# 274 "data/maps/AcrisiaCity/scripts.pory"
	.string "Woman$"

AcrisiaCity_EventScript_Woman2_Text_1:
# 275 "data/maps/AcrisiaCity/scripts.pory"
	.string "Even though not much mining happens\n"
	.string "here anymore, plenty of Trainers still\l"
	.string "come through Acrisia City. People are\l"
	.string "always looking for advice and to train\l"
	.string "in the mountains.$"

AcrisiaCity_EventScript_Camper_Text_0:
# 285 "data/maps/AcrisiaCity/scripts.pory"
	.string "Camper$"

AcrisiaCity_EventScript_Camper_Text_1:
# 286 "data/maps/AcrisiaCity/scripts.pory"
	.string "My family is camping in the Acrisia\n"
	.string "Mountains! I came down to check out\l"
	.string "the University and wild Pokémon.$"

AcrisiaCity_EventScript_NinjaBoy_Text_0:
# 296 "data/maps/AcrisiaCity/scripts.pory"
	.string "Excited Boy$"

AcrisiaCity_EventScript_NinjaBoy_Text_1:
# 297 "data/maps/AcrisiaCity/scripts.pory"
	.string "Some Pokémon are brave enough to walk\n"
	.string "around openly in the grass! It's so\l"
	.string "cool!$"

AcrisiaCity_EventScript_RailMan_Text_0:
# 307 "data/maps/AcrisiaCity/scripts.pory"
	.string "Nervous Man$"

AcrisiaCity_EventScript_RailMan_Text_1:
# 308 "data/maps/AcrisiaCity/scripts.pory"
	.string "I want to hop down and check this area\n"
	.string "out, but I'm too scared to jump... I\l"
	.string "should just get the Rock Smash HM.$"

AcrisiaCity_EventScript_Growlithe_Text_0:
# 318 "data/maps/AcrisiaCity/scripts.pory"
	.string "Growlithe$"

AcrisiaCity_EventScript_Growlithe_Text_1:
# 320 "data/maps/AcrisiaCity/scripts.pory"
	.string "Bwark bwark!$"

AcrisiaCity_EventScript_Phanpy_Text_0:
# 331 "data/maps/AcrisiaCity/scripts.pory"
	.string "Phanpy$"

AcrisiaCity_EventScript_Phanpy_Text_1:
# 333 "data/maps/AcrisiaCity/scripts.pory"
	.string "Toooot!$"

AcrisiaCity_EventScript_OldMan_Text_0:
# 344 "data/maps/AcrisiaCity/scripts.pory"
	.string "Old Man$"

AcrisiaCity_EventScript_OldMan_Text_1:
# 345 "data/maps/AcrisiaCity/scripts.pory"
	.string "Heavens, look at this harvest! Food\n"
	.string "comes up from Jusmail Town and feeds\l"
	.string "the folks up here.$"

AcrisiaCity_EventScript_Gentleman_Text_0:
# 355 "data/maps/AcrisiaCity/scripts.pory"
	.string "Gentleman$"

AcrisiaCity_EventScript_Gentleman_Text_1:
# 356 "data/maps/AcrisiaCity/scripts.pory"
	.string "Now that I'm retired, I like to sit here\n"
	.string "and watch the time pass. I can't help\l"
	.string "but smile seeing the lights come on in\l"
	.string "the evening!$"

AcrisiaCity_EventScript_FatMan_Text_0:
# 366 "data/maps/AcrisiaCity/scripts.pory"
	.string "Man$"

AcrisiaCity_EventScript_FatMan_Text_1:
# 367 "data/maps/AcrisiaCity/scripts.pory"
	.string "I'm looking for some food for my Phanpy.\n"
	.string "Towns in the Ilios Region tend to have\l"
	.string "little farmers' markets like this.$"

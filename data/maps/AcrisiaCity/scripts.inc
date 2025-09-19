AcrisiaCity_MapScripts::
# 7 "data/maps/AcrisiaCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 3 "data/maps/AcrisiaCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AcrisiaCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_VISITED_ACRISIA_CITY
# 10 "data/maps/AcrisiaCity/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 15 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 16 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 17 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 18 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 19 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 20 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 21 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 22 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 23 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 24 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 25 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 26 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 27 "data/maps/AcrisiaCity/scripts.pory"
	setobjectaswildencounter 26, ENCOUNTER_LAND
# 28 "data/maps/AcrisiaCity/scripts.pory"
	setobjectaswildencounter 27, ENCOUNTER_LAND
# 30 "data/maps/AcrisiaCity/scripts.pory"
	goto_if_unset FLAG_HIDE_INTRO_TRUCK, AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 36 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_STARTING_POKEMON
AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 39 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_SYS_CLOCK_SET
	return

AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 12 "data/maps/AcrisiaCity/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 32 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_STARTING_POKEMON
	goto AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

AcrisiaCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/AcrisiaCity/scripts.pory"
	map_script_2 VAR_INTRO_STATE, 0, AcrisiaCity_EventScript_PlayerExitsTruck
# 5 "data/maps/AcrisiaCity/scripts.pory"
	map_script_2 VAR_INTRO_STATE, 7, AcrisiaCity_EventScript_PiraeusGreetsPlayerAfterEliteFour
	.2byte 0


Overworld_EventScript_WildPokemon::
# 46 "data/maps/AcrisiaCity/scripts.pory"
	lockall
# 47 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 48 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_DOING_OVERWORLD_ENCOUNTER
# 51 "data/maps/AcrisiaCity/scripts.pory"
	startoverworldencounter 5
# 53 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_DOING_OVERWORLD_ENCOUNTER
# 54 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_DemoWarning::
# 63 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 64 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_DemoWarning_Text_0
# 65 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_DemoWarning_Text_1
# 66 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 67 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_DID_DEMO_WARNING
# 68 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_DirectionSign::
# 74 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 75 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_DirectionSign_Text_0
# 76 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 77 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_PlayerExitsTruck::
# 83 "data/maps/AcrisiaCity/scripts.pory"
	setvar VAR_INTRO_STATE, 1
# 84 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_SECOND_PROFESSOR_SPRITE
# 85 "data/maps/AcrisiaCity/scripts.pory"
	lockall
# 86 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerOffTruck
# 87 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 90 "data/maps/AcrisiaCity/scripts.pory"
	playse SE_PIN
# 91 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 92 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 93 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 94 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_1
# 95 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 98 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 99 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfGetsAbovePlayer
# 100 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 101 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1
# 102 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1
# 103 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 104 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 105 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_2
# 106 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 107 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2
# 108 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2
# 109 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 111 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 112 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 113 "data/maps/AcrisiaCity/scripts.pory"
	delay 15
# 114 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 18, AcrisiaCity_Movement_ShroomishRunFromProf
# 115 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 29, AcrisiaCity_Movement_DucklettRunFromProf
# 116 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 118 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 119 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 120 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 121 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_3
# 122 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 123 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_3
# 124 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_3
# 125 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 127 "data/maps/AcrisiaCity/scripts.pory"
	hideobjectat 12, MAP_ACRISIA_CITY
# 129 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_INTRO_TRUCK
# 130 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_STARTING_POKEMON
# 132 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 133 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 134 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 135 "data/maps/AcrisiaCity/scripts.pory"
	warpsilent MAP_ACRISIA_CITY_UNIVERSITY, 10, 19
# 136 "data/maps/AcrisiaCity/scripts.pory"
	waitstate
# 138 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 140 "data/maps/AcrisiaCity/scripts.pory"
	releaseall
	end


# 144 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerOffTruck:
# 146 "data/maps/AcrisiaCity/scripts.pory"
	jump_right
# 147 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 148 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 149 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 152 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfGetsAbovePlayer:
# 154 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 155 "data/maps/AcrisiaCity/scripts.pory"
	walk_left
# 156 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 157 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 157 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 158 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 161 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1:
# 163 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 163 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 163 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 163 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 163 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 163 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 164 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 164 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 164 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 164 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 164 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 165 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 165 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 165 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 165 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 165 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 166 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 167 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 170 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1:
# 172 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 172 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 172 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 172 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 172 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 172 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 172 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 173 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 173 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 173 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 173 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 173 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 174 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 174 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 174 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 174 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 175 "data/maps/AcrisiaCity/scripts.pory"
	face_up
# 176 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 179 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2:
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 183 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 186 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2:
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 189 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 189 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 189 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 189 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 189 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 189 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 189 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 189 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 189 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 189 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 189 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 189 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 189 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 189 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 189 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 190 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 193 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ShroomishRunFromProf:
# 195 "data/maps/AcrisiaCity/scripts.pory"
	emote_exclamation_mark
# 196 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 196 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 196 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 196 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 196 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 196 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 196 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 197 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 200 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_DucklettRunFromProf:
# 202 "data/maps/AcrisiaCity/scripts.pory"
	emote_exclamation_mark
# 203 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_up
# 203 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_up
# 204 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_right
# 204 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_right
# 205 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 205 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 206 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_left
# 207 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 207 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 207 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 207 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 207 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 207 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 207 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 208 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 211 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_3:
# 213 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 213 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 213 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 214 "data/maps/AcrisiaCity/scripts.pory"
	face_left
# 215 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 215 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 215 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 216 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 217 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 217 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 217 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 217 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 217 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 218 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 221 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_3:
# 223 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 223 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 223 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 224 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 225 "data/maps/AcrisiaCity/scripts.pory"
	emote_heart
# 226 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 226 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 226 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 227 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 227 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 228 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 228 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 228 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 228 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 229 "data/maps/AcrisiaCity/scripts.pory"
	step_end

AcrisiaCity_EventScript_LadyByWater::
# 237 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 238 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 239 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 240 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_1
# 241 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 243 "data/maps/AcrisiaCity/scripts.pory"
	goto_if_unset FLAG_GOT_EVIOLITE_ACRISIA_CITY, AcrisiaCity_EventScript_LadyByWater_2
# 280 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 281 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_6
# 282 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
AcrisiaCity_EventScript_LadyByWater_1:
# 285 "data/maps/AcrisiaCity/scripts.pory"
	release
	end

AcrisiaCity_EventScript_LadyByWater_2:
# 245 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 246 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_2
# 248 "data/maps/AcrisiaCity/scripts.pory"
	getcaughtmon SPECIES_TOGEPI
# 249 "data/maps/AcrisiaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_EventScript_LadyByWater_5
# 264 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 265 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_4
# 266 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 267 "data/maps/AcrisiaCity/scripts.pory"
	giveitem ITEM_EVIOLITE
# 268 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_GOT_EVIOLITE_ACRISIA_CITY
# 269 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 270 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_5
# 271 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 273 "data/maps/AcrisiaCity/scripts.pory"
	delay 20
# 274 "data/maps/AcrisiaCity/scripts.pory"
	completequest QUEST_TOGEPI_EVIOLITE
	goto AcrisiaCity_EventScript_LadyByWater_1

AcrisiaCity_EventScript_LadyByWater_5:
# 251 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 252 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_3
# 253 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 255 "data/maps/AcrisiaCity/scripts.pory"
	delay 20
# 256 "data/maps/AcrisiaCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_TOGEPI_EVIOLITE
# 257 "data/maps/AcrisiaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_EventScript_LadyByWater_8
	goto AcrisiaCity_EventScript_LadyByWater_1

AcrisiaCity_EventScript_LadyByWater_8:
# 259 "data/maps/AcrisiaCity/scripts.pory"
	startquest QUEST_TOGEPI_EVIOLITE
	goto AcrisiaCity_EventScript_LadyByWater_1


AcrisiaCity_EventScript_Woman2::
# 291 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 292 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 293 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Woman2_Text_0
# 294 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Woman2_Text_1
# 295 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 296 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Camper::
# 302 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 303 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 304 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Camper_Text_0
# 305 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Camper_Text_1
# 306 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 307 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_NinjaBoy::
# 313 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 314 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 315 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_NinjaBoy_Text_0
# 316 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_NinjaBoy_Text_1
# 317 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 318 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_RailMan::
# 324 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 325 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 326 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_RailMan_Text_0
# 327 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_RailMan_Text_1
# 328 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 329 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Growlithe::
# 335 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 336 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 337 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Growlithe_Text_0
# 338 "data/maps/AcrisiaCity/scripts.pory"
	playmoncry SPECIES_GROWLITHE_HISUI, CRY_MODE_NORMAL
# 339 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Growlithe_Text_1
# 340 "data/maps/AcrisiaCity/scripts.pory"
	waitmoncry
# 341 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 342 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Phanpy::
# 348 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 349 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 350 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Phanpy_Text_0
# 351 "data/maps/AcrisiaCity/scripts.pory"
	playmoncry SPECIES_PHANPY, CRY_MODE_NORMAL
# 352 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Phanpy_Text_1
# 353 "data/maps/AcrisiaCity/scripts.pory"
	waitmoncry
# 354 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 355 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_OldMan::
# 361 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 362 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 363 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_OldMan_Text_0
# 364 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_OldMan_Text_1
# 365 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 366 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Gentleman::
# 372 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 373 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 374 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Gentleman_Text_0
# 375 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Gentleman_Text_1
# 376 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 377 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_FatMan::
# 383 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 384 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 385 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_FatMan_Text_0
# 386 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_FatMan_Text_1
# 387 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 388 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 23, Common_Movement_FaceUp
# 389 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 390 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_PiraeusGreetsPlayerAfterEliteFour::
# 396 "data/maps/AcrisiaCity/scripts.pory"
	lockall
# 397 "data/maps/AcrisiaCity/scripts.pory"
	setvar VAR_INTRO_STATE, 8
# 398 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_PIRAEUS_ACRISIA_CITY
# 399 "data/maps/AcrisiaCity/scripts.pory"
	addobject 30
# 400 "data/maps/AcrisiaCity/scripts.pory"
	delay 20
# 401 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PiraeusGreetsPlayerAfterEliteFour_Text_0
# 402 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PiraeusGreetsPlayerAfterEliteFour_Text_1
# 403 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 404 "data/maps/AcrisiaCity/scripts.pory"
	emote OBJ_EVENT_ID_PLAYER, EMOTE_EXCLAM
# 405 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 30, AcrisiaCity_Movement_PiraeusApproach
# 406 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 407 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PiraeusGreetsPlayerAfterEliteFour_Text_2
# 408 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PiraeusGreetsPlayerAfterEliteFour_Text_3
# 409 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 410 "data/maps/AcrisiaCity/scripts.pory"
	delay 10
# 411 "data/maps/AcrisiaCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 412 "data/maps/AcrisiaCity/scripts.pory"
	delay 15
# 413 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_PIRAEUS_ACRISIA_CITY
# 414 "data/maps/AcrisiaCity/scripts.pory"
	removeobject 30
# 415 "data/maps/AcrisiaCity/scripts.pory"
	delay 15
# 416 "data/maps/AcrisiaCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 417 "data/maps/AcrisiaCity/scripts.pory"
	delay 15
# 418 "data/maps/AcrisiaCity/scripts.pory"
	releaseall
	end


# 422 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PiraeusApproach:
# 424 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 424 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 424 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 424 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 424 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 425 "data/maps/AcrisiaCity/scripts.pory"
	face_up
# 426 "data/maps/AcrisiaCity/scripts.pory"
	step_end

AcrisiaCity_DemoWarning_Text_0:
# 64 "data/maps/AcrisiaCity/scripts.pory"
	.string "Nemo622$"

AcrisiaCity_DemoWarning_Text_1:
# 65 "data/maps/AcrisiaCity/scripts.pory"
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

AcrisiaCity_EventScript_DirectionSign_Text_0:
# 75 "data/maps/AcrisiaCity/scripts.pory"
	.string "Acrisia City\n"
	.string "The Heart of Ilian Learning\p"
	.string "{LEFT_ARROW} Acrisia Mountains\n"
	.string "Riverwalk Trail {RIGHT_ARROW}\n"
	.string "{DOWN_ARROW} Bronze Fields - North$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_0:
# 93 "data/maps/AcrisiaCity/scripts.pory"
	.string "Prof. Elia$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_1:
# 94 "data/maps/AcrisiaCity/scripts.pory"
	.string "Looks like you made it, {PLAYER}!\n"
	.string "Sorry about the rough ride, but there's\l"
	.string "no public transport up here. It's a bit...\l"
	.string "rural around here.\p"
	.string "Come, follow me! Let's get you to the\n"
	.string "University building!$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_2:
# 105 "data/maps/AcrisiaCity/scripts.pory"
	.string "As you can see, Acrisia City used to be\n"
	.string "a mining town. It's a bit past its prime\l"
	.string "now, but the folks here are still willing\l"
	.string "to support the University, so we've\l"
	.string "continued our research out of here!$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_3:
# 121 "data/maps/AcrisiaCity/scripts.pory"
	.string "Oho! Looks like a few Pokémon are out\n"
	.string "and about this morning!\p"
	.string "As you explore the region, you may find\n"
	.string "some Pokémon wandering around like\l"
	.string "this. But I'm getting ahead of myself!\l"
	.string "Come, let's get inside.$"

AcrisiaCity_EventScript_LadyByWater_Text_0:
# 239 "data/maps/AcrisiaCity/scripts.pory"
	.string "Performer$"

AcrisiaCity_EventScript_LadyByWater_Text_1:
# 240 "data/maps/AcrisiaCity/scripts.pory"
	.string "Baby Pokémon are the cutest, don't you\n"
	.string "think?$"

AcrisiaCity_EventScript_LadyByWater_Text_2:
# 246 "data/maps/AcrisiaCity/scripts.pory"
	.string "I've always wanted to learn more about\n"
	.string "Togepi... hey! You're a researcher with\l"
	.string "the University! Come to me when you\l"
	.string "have a {COLOR GREEN}complete Pokédex entry{COLOR DARK_GRAY} of\l"
	.string "Togepi.$"

AcrisiaCity_EventScript_LadyByWater_Text_3:
# 252 "data/maps/AcrisiaCity/scripts.pory"
	.string "Hurry up now, I'll have a {COLOR GREEN}prize{COLOR DARK_GRAY} for you!$"

AcrisiaCity_EventScript_LadyByWater_Text_4:
# 265 "data/maps/AcrisiaCity/scripts.pory"
	.string "Goodness, you've caught a Togepi! That\n"
	.string "makes me so happy!\p"
	.string "Here, let me give you a little something.$"

AcrisiaCity_EventScript_LadyByWater_Text_5:
# 270 "data/maps/AcrisiaCity/scripts.pory"
	.string "The {COLOR GREEN}Eviolite{COLOR DARK_GRAY} stops Pokémon from\n"
	.string "evolving and boosts their stats.\p"
	.string "It's great if you want to keep your\n"
	.string "cute baby Pokémon strong!$"

AcrisiaCity_EventScript_LadyByWater_Text_6:
# 281 "data/maps/AcrisiaCity/scripts.pory"
	.string "I hope that {COLOR GREEN}Eviolite{COLOR DARK_GRAY} has been helpful\n"
	.string "for you! It'll make your cute little\l"
	.string "Pokémon a bit stronger!$"

AcrisiaCity_EventScript_Woman2_Text_0:
# 293 "data/maps/AcrisiaCity/scripts.pory"
	.string "Woman$"

AcrisiaCity_EventScript_Woman2_Text_1:
# 294 "data/maps/AcrisiaCity/scripts.pory"
	.string "Even though not much mining happens\n"
	.string "here anymore, plenty of Trainers still\l"
	.string "come through Acrisia City. People are\l"
	.string "always looking for advice and to train\l"
	.string "in the mountains.$"

AcrisiaCity_EventScript_Camper_Text_0:
# 304 "data/maps/AcrisiaCity/scripts.pory"
	.string "Camper$"

AcrisiaCity_EventScript_Camper_Text_1:
# 305 "data/maps/AcrisiaCity/scripts.pory"
	.string "My family is camping in the Acrisia\n"
	.string "Mountains! I came down to check out\l"
	.string "the University and wild Pokémon.$"

AcrisiaCity_EventScript_NinjaBoy_Text_0:
# 315 "data/maps/AcrisiaCity/scripts.pory"
	.string "Excited Boy$"

AcrisiaCity_EventScript_NinjaBoy_Text_1:
# 316 "data/maps/AcrisiaCity/scripts.pory"
	.string "Some Pokémon are brave enough to walk\n"
	.string "around openly in the grass! It's so\l"
	.string "cool!$"

AcrisiaCity_EventScript_RailMan_Text_0:
# 326 "data/maps/AcrisiaCity/scripts.pory"
	.string "Nervous Man$"

AcrisiaCity_EventScript_RailMan_Text_1:
# 327 "data/maps/AcrisiaCity/scripts.pory"
	.string "I want to hop down and check this area\n"
	.string "out, but I'm too scared to jump... I\l"
	.string "should just get the Rock Smash HM.$"

AcrisiaCity_EventScript_Growlithe_Text_0:
# 337 "data/maps/AcrisiaCity/scripts.pory"
	.string "Growlithe$"

AcrisiaCity_EventScript_Growlithe_Text_1:
# 339 "data/maps/AcrisiaCity/scripts.pory"
	.string "Bwark bwark!$"

AcrisiaCity_EventScript_Phanpy_Text_0:
# 350 "data/maps/AcrisiaCity/scripts.pory"
	.string "Phanpy$"

AcrisiaCity_EventScript_Phanpy_Text_1:
# 352 "data/maps/AcrisiaCity/scripts.pory"
	.string "Toooot!$"

AcrisiaCity_EventScript_OldMan_Text_0:
# 363 "data/maps/AcrisiaCity/scripts.pory"
	.string "Old Man$"

AcrisiaCity_EventScript_OldMan_Text_1:
# 364 "data/maps/AcrisiaCity/scripts.pory"
	.string "Heavens, look at this harvest! Food\n"
	.string "comes up from Jusmail Town and feeds\l"
	.string "the folks up here.$"

AcrisiaCity_EventScript_Gentleman_Text_0:
# 374 "data/maps/AcrisiaCity/scripts.pory"
	.string "Gentleman$"

AcrisiaCity_EventScript_Gentleman_Text_1:
# 375 "data/maps/AcrisiaCity/scripts.pory"
	.string "Now that I'm retired, I like to sit here\n"
	.string "and watch the time pass. I can't help\l"
	.string "but smile seeing the lights come on in\l"
	.string "the evening!$"

AcrisiaCity_EventScript_FatMan_Text_0:
# 385 "data/maps/AcrisiaCity/scripts.pory"
	.string "Man$"

AcrisiaCity_EventScript_FatMan_Text_1:
# 386 "data/maps/AcrisiaCity/scripts.pory"
	.string "I'm looking for some food for my Phanpy.\n"
	.string "Towns in the Ilios Region tend to have\l"
	.string "little farmers' markets like this.$"

AcrisiaCity_EventScript_PiraeusGreetsPlayerAfterEliteFour_Text_0:
# 401 "data/maps/AcrisiaCity/scripts.pory"
	.string "???$"

AcrisiaCity_EventScript_PiraeusGreetsPlayerAfterEliteFour_Text_1:
# 402 "data/maps/AcrisiaCity/scripts.pory"
	.string "Buongiorno, {PLAYER}!$"

AcrisiaCity_EventScript_PiraeusGreetsPlayerAfterEliteFour_Text_2:
# 407 "data/maps/AcrisiaCity/scripts.pory"
	.string "Piraeus$"

AcrisiaCity_EventScript_PiraeusGreetsPlayerAfterEliteFour_Text_3:
# 408 "data/maps/AcrisiaCity/scripts.pory"
	.string "Surprised to see me so far from my boat,\n"
	.string "eh? Kahaha! I had to come by and\l"
	.string "congratulate you for becoming\l"
	.string "{COLOR GREEN}Champion{COLOR DARK_GRAY}!\p"
	.string "Knowing you, I'm sure you're after some\n"
	.string "more adventure, yeah? Now that you're\l"
	.string "Champion, I'll start sailing you to\l"
	.string "{COLOR GREEN}Wakewater Isle{COLOR DARK_GRAY}, an island where you can\l"
	.string "battle against {COLOR GREEN}highly-ranked Trainers{COLOR DARK_GRAY}\l"
	.string "as long as you'd like!\p"
	.string "If you want to sail with me to\n"
	.string "{COLOR GREEN}Wakewater Isle{COLOR DARK_GRAY}, just talk to me at my\l"
	.string "boat. See ya around, Champ!$"

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
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 15 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 16 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 17 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 18 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 19 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 20 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 21 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 22 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 23 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 24 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 25 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 26 "data/maps/AcrisiaCity/scripts.pory"
	setobjectaswildencounter 26, ENCOUNTER_LAND
# 27 "data/maps/AcrisiaCity/scripts.pory"
	setobjectaswildencounter 27, ENCOUNTER_LAND
# 29 "data/maps/AcrisiaCity/scripts.pory"
	goto_if_unset FLAG_HIDE_INTRO_TRUCK, AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 35 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_STARTING_POKEMON
AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 38 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_SYS_CLOCK_SET
	return

AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 11 "data/maps/AcrisiaCity/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 31 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_STARTING_POKEMON
	goto AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

AcrisiaCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/AcrisiaCity/scripts.pory"
	map_script_2 VAR_INTRO_STATE, 0, AcrisiaCity_EventScript_PlayerExitsTruck
	.2byte 0


Overworld_EventScript_WildPokemon::
# 45 "data/maps/AcrisiaCity/scripts.pory"
	lockall
# 46 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 47 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_DOING_OVERWORLD_ENCOUNTER
# 50 "data/maps/AcrisiaCity/scripts.pory"
	startoverworldencounter 5
# 52 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_DOING_OVERWORLD_ENCOUNTER
# 53 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_DemoWarning::
# 62 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 63 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_DemoWarning_Text_0
# 64 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_DemoWarning_Text_1
# 65 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 66 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_DID_DEMO_WARNING
# 67 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_DirectionSign::
# 73 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 74 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_DirectionSign_Text_0
# 75 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 76 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_PlayerExitsTruck::
# 82 "data/maps/AcrisiaCity/scripts.pory"
	setvar VAR_INTRO_STATE, 1
# 83 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_SECOND_PROFESSOR_SPRITE
# 84 "data/maps/AcrisiaCity/scripts.pory"
	lockall
# 85 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerOffTruck
# 86 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 89 "data/maps/AcrisiaCity/scripts.pory"
	playse SE_PIN
# 90 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 91 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 92 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 93 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_1
# 94 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 97 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 98 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfGetsAbovePlayer
# 99 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 100 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1
# 101 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1
# 102 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 103 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 104 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_2
# 105 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 106 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2
# 107 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2
# 108 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 110 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 111 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 112 "data/maps/AcrisiaCity/scripts.pory"
	delay 15
# 113 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 18, AcrisiaCity_Movement_ShroomishRunFromProf
# 114 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 29, AcrisiaCity_Movement_DucklettRunFromProf
# 115 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 117 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 118 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 119 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 120 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_3
# 121 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 122 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_3
# 123 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_3
# 124 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 126 "data/maps/AcrisiaCity/scripts.pory"
	hideobjectat 12, MAP_ACRISIA_CITY
# 128 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_INTRO_TRUCK
# 129 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_STARTING_POKEMON
# 131 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 132 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 133 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 134 "data/maps/AcrisiaCity/scripts.pory"
	warpsilent MAP_ACRISIA_CITY_UNIVERSITY, 10, 19
# 135 "data/maps/AcrisiaCity/scripts.pory"
	waitstate
# 137 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 139 "data/maps/AcrisiaCity/scripts.pory"
	releaseall
	end


# 143 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerOffTruck:
# 145 "data/maps/AcrisiaCity/scripts.pory"
	jump_right
# 146 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 147 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 148 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 151 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfGetsAbovePlayer:
# 153 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 154 "data/maps/AcrisiaCity/scripts.pory"
	walk_left
# 155 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 156 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 156 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 157 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 160 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1:
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
# 164 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 164 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 164 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 164 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 164 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 165 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 166 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 169 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1:
# 171 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 171 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 171 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 171 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 171 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 171 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 171 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 172 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 172 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 172 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 172 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 172 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 173 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 173 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 173 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 173 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 174 "data/maps/AcrisiaCity/scripts.pory"
	face_up
# 175 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 178 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2:
# 180 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 180 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 180 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 180 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 180 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 180 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 180 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 180 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 180 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 182 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 185 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2:
# 187 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 187 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 187 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 187 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 187 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 187 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 187 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 187 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 187 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 187 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 189 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 192 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ShroomishRunFromProf:
# 194 "data/maps/AcrisiaCity/scripts.pory"
	emote_exclamation_mark
# 195 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 195 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 195 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 195 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 195 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 195 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 195 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 196 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 199 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_DucklettRunFromProf:
# 201 "data/maps/AcrisiaCity/scripts.pory"
	emote_exclamation_mark
# 202 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_up
# 202 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_up
# 203 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_right
# 203 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_right
# 204 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 204 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 205 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_left
# 206 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 206 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 206 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 206 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 206 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 206 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 206 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 207 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 210 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_3:
# 212 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 212 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 212 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 213 "data/maps/AcrisiaCity/scripts.pory"
	face_left
# 214 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 214 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 214 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 215 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 216 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 216 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 216 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 216 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 216 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 217 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 220 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_3:
# 222 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 222 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 222 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 223 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 224 "data/maps/AcrisiaCity/scripts.pory"
	emote_heart
# 225 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 225 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 225 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 226 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 226 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 227 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 227 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 227 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 227 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 228 "data/maps/AcrisiaCity/scripts.pory"
	step_end

AcrisiaCity_EventScript_LadyByWater::
# 236 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 237 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 238 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 239 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_1
# 240 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 242 "data/maps/AcrisiaCity/scripts.pory"
	goto_if_unset FLAG_GOT_EVIOLITE_ACRISIA_CITY, AcrisiaCity_EventScript_LadyByWater_2
# 279 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 280 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_6
# 281 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
AcrisiaCity_EventScript_LadyByWater_1:
# 284 "data/maps/AcrisiaCity/scripts.pory"
	release
	end

AcrisiaCity_EventScript_LadyByWater_2:
# 244 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 245 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_2
# 247 "data/maps/AcrisiaCity/scripts.pory"
	getcaughtmon SPECIES_TOGEPI
# 248 "data/maps/AcrisiaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_EventScript_LadyByWater_5
# 263 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 264 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_4
# 265 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 266 "data/maps/AcrisiaCity/scripts.pory"
	giveitem ITEM_EVIOLITE
# 267 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_GOT_EVIOLITE_ACRISIA_CITY
# 268 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 269 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_5
# 270 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 272 "data/maps/AcrisiaCity/scripts.pory"
	delay 20
# 273 "data/maps/AcrisiaCity/scripts.pory"
	completequest QUEST_TOGEPI_EVIOLITE
	goto AcrisiaCity_EventScript_LadyByWater_1

AcrisiaCity_EventScript_LadyByWater_5:
# 250 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 251 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_3
# 252 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 254 "data/maps/AcrisiaCity/scripts.pory"
	delay 20
# 255 "data/maps/AcrisiaCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_TOGEPI_EVIOLITE
# 256 "data/maps/AcrisiaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_EventScript_LadyByWater_8
	goto AcrisiaCity_EventScript_LadyByWater_1

AcrisiaCity_EventScript_LadyByWater_8:
# 258 "data/maps/AcrisiaCity/scripts.pory"
	startquest QUEST_TOGEPI_EVIOLITE
	goto AcrisiaCity_EventScript_LadyByWater_1


AcrisiaCity_EventScript_Woman2::
# 290 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 291 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 292 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Woman2_Text_0
# 293 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Woman2_Text_1
# 294 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 295 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Camper::
# 301 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 302 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 303 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Camper_Text_0
# 304 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Camper_Text_1
# 305 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 306 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_NinjaBoy::
# 312 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 313 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 314 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_NinjaBoy_Text_0
# 315 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_NinjaBoy_Text_1
# 316 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 317 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_RailMan::
# 323 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 324 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 325 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_RailMan_Text_0
# 326 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_RailMan_Text_1
# 327 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 328 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Growlithe::
# 334 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 335 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 336 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Growlithe_Text_0
# 337 "data/maps/AcrisiaCity/scripts.pory"
	playmoncry SPECIES_GROWLITHE_HISUI, CRY_MODE_NORMAL
# 338 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Growlithe_Text_1
# 339 "data/maps/AcrisiaCity/scripts.pory"
	waitmoncry
# 340 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 341 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Phanpy::
# 347 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 348 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 349 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Phanpy_Text_0
# 350 "data/maps/AcrisiaCity/scripts.pory"
	playmoncry SPECIES_PHANPY, CRY_MODE_NORMAL
# 351 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Phanpy_Text_1
# 352 "data/maps/AcrisiaCity/scripts.pory"
	waitmoncry
# 353 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 354 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_OldMan::
# 360 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 361 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 362 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_OldMan_Text_0
# 363 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_OldMan_Text_1
# 364 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 365 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Gentleman::
# 371 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 372 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 373 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Gentleman_Text_0
# 374 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Gentleman_Text_1
# 375 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 376 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_FatMan::
# 382 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 383 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 384 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_FatMan_Text_0
# 385 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_FatMan_Text_1
# 386 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 387 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 23, Common_Movement_FaceUp
# 388 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 389 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_DemoWarning_Text_0:
# 63 "data/maps/AcrisiaCity/scripts.pory"
	.string "Nemo622$"

AcrisiaCity_DemoWarning_Text_1:
# 64 "data/maps/AcrisiaCity/scripts.pory"
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
# 74 "data/maps/AcrisiaCity/scripts.pory"
	.string "Acrisia City\n"
	.string "The Heart of Ilian Learning\p"
	.string "{LEFT_ARROW} Acrisia Mountains\n"
	.string "Riverwalk Trail {RIGHT_ARROW}\n"
	.string "{DOWN_ARROW} Bronze Fields - North$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_0:
# 92 "data/maps/AcrisiaCity/scripts.pory"
	.string "Prof. Elia$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_1:
# 93 "data/maps/AcrisiaCity/scripts.pory"
	.string "Looks like you made it, {PLAYER}!\n"
	.string "Sorry about the rough ride, but there's\l"
	.string "no public transport up here. It's a bit...\l"
	.string "rural around here.\p"
	.string "Come, follow me! Let's get you to the\n"
	.string "University building!$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_2:
# 104 "data/maps/AcrisiaCity/scripts.pory"
	.string "As you can see, Acrisia City used to be\n"
	.string "a mining town. It's a bit past its prime\l"
	.string "now, but the folks here are still willing\l"
	.string "to support the University, so we've\l"
	.string "continued our research out of here!$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_3:
# 120 "data/maps/AcrisiaCity/scripts.pory"
	.string "Oho! Looks like a few Pokémon are out\n"
	.string "and about this morning!\p"
	.string "As you explore the region, you may find\n"
	.string "some Pokémon wandering around like\l"
	.string "this. But I'm getting ahead of myself!\l"
	.string "Come, let's get inside.$"

AcrisiaCity_EventScript_LadyByWater_Text_0:
# 238 "data/maps/AcrisiaCity/scripts.pory"
	.string "Performer$"

AcrisiaCity_EventScript_LadyByWater_Text_1:
# 239 "data/maps/AcrisiaCity/scripts.pory"
	.string "Baby Pokémon are the cutest, don't you\n"
	.string "think?$"

AcrisiaCity_EventScript_LadyByWater_Text_2:
# 245 "data/maps/AcrisiaCity/scripts.pory"
	.string "I've always wanted to learn more about\n"
	.string "Togepi... hey! You're a researcher with\l"
	.string "the University! Come to me when you\l"
	.string "have a {COLOR GREEN}complete Pokédex entry{COLOR DARK_GRAY} of\l"
	.string "Togepi.$"

AcrisiaCity_EventScript_LadyByWater_Text_3:
# 251 "data/maps/AcrisiaCity/scripts.pory"
	.string "Hurry up now, I'll have a {COLOR GREEN}prize{COLOR DARK_GRAY} for you!$"

AcrisiaCity_EventScript_LadyByWater_Text_4:
# 264 "data/maps/AcrisiaCity/scripts.pory"
	.string "Goodness, you've caught a Togepi! That\n"
	.string "makes me so happy!\p"
	.string "Here, let me give you a little something.$"

AcrisiaCity_EventScript_LadyByWater_Text_5:
# 269 "data/maps/AcrisiaCity/scripts.pory"
	.string "The {COLOR GREEN}Eviolite{COLOR DARK_GRAY} stops Pokémon from\n"
	.string "evolving and boosts their stats.\p"
	.string "It's great if you want to keep your\n"
	.string "cute baby Pokémon strong!$"

AcrisiaCity_EventScript_LadyByWater_Text_6:
# 280 "data/maps/AcrisiaCity/scripts.pory"
	.string "I hope that {COLOR GREEN}Eviolite{COLOR DARK_GRAY} has been helpful\n"
	.string "for you! It'll make your cute little\l"
	.string "Pokémon a bit stronger!$"

AcrisiaCity_EventScript_Woman2_Text_0:
# 292 "data/maps/AcrisiaCity/scripts.pory"
	.string "Woman$"

AcrisiaCity_EventScript_Woman2_Text_1:
# 293 "data/maps/AcrisiaCity/scripts.pory"
	.string "Even though not much mining happens\n"
	.string "here anymore, plenty of Trainers still\l"
	.string "come through Acrisia City. People are\l"
	.string "always looking for advice and to train\l"
	.string "in the mountains.$"

AcrisiaCity_EventScript_Camper_Text_0:
# 303 "data/maps/AcrisiaCity/scripts.pory"
	.string "Camper$"

AcrisiaCity_EventScript_Camper_Text_1:
# 304 "data/maps/AcrisiaCity/scripts.pory"
	.string "My family is camping in the Acrisia\n"
	.string "Mountains! I came down to check out\l"
	.string "the University and wild Pokémon.$"

AcrisiaCity_EventScript_NinjaBoy_Text_0:
# 314 "data/maps/AcrisiaCity/scripts.pory"
	.string "Excited Boy$"

AcrisiaCity_EventScript_NinjaBoy_Text_1:
# 315 "data/maps/AcrisiaCity/scripts.pory"
	.string "Some Pokémon are brave enough to walk\n"
	.string "around openly in the grass! It's so\l"
	.string "cool!$"

AcrisiaCity_EventScript_RailMan_Text_0:
# 325 "data/maps/AcrisiaCity/scripts.pory"
	.string "Nervous Man$"

AcrisiaCity_EventScript_RailMan_Text_1:
# 326 "data/maps/AcrisiaCity/scripts.pory"
	.string "I want to hop down and check this area\n"
	.string "out, but I'm too scared to jump... I\l"
	.string "should just get the Rock Smash HM.$"

AcrisiaCity_EventScript_Growlithe_Text_0:
# 336 "data/maps/AcrisiaCity/scripts.pory"
	.string "Growlithe$"

AcrisiaCity_EventScript_Growlithe_Text_1:
# 338 "data/maps/AcrisiaCity/scripts.pory"
	.string "Bwark bwark!$"

AcrisiaCity_EventScript_Phanpy_Text_0:
# 349 "data/maps/AcrisiaCity/scripts.pory"
	.string "Phanpy$"

AcrisiaCity_EventScript_Phanpy_Text_1:
# 351 "data/maps/AcrisiaCity/scripts.pory"
	.string "Toooot!$"

AcrisiaCity_EventScript_OldMan_Text_0:
# 362 "data/maps/AcrisiaCity/scripts.pory"
	.string "Old Man$"

AcrisiaCity_EventScript_OldMan_Text_1:
# 363 "data/maps/AcrisiaCity/scripts.pory"
	.string "Heavens, look at this harvest! Food\n"
	.string "comes up from Jusmail Town and feeds\l"
	.string "the folks up here.$"

AcrisiaCity_EventScript_Gentleman_Text_0:
# 373 "data/maps/AcrisiaCity/scripts.pory"
	.string "Gentleman$"

AcrisiaCity_EventScript_Gentleman_Text_1:
# 374 "data/maps/AcrisiaCity/scripts.pory"
	.string "Now that I'm retired, I like to sit here\n"
	.string "and watch the time pass. I can't help\l"
	.string "but smile seeing the lights come on in\l"
	.string "the evening!$"

AcrisiaCity_EventScript_FatMan_Text_0:
# 384 "data/maps/AcrisiaCity/scripts.pory"
	.string "Man$"

AcrisiaCity_EventScript_FatMan_Text_1:
# 385 "data/maps/AcrisiaCity/scripts.pory"
	.string "I'm looking for some food for my Phanpy.\n"
	.string "Towns in the Ilios Region tend to have\l"
	.string "little farmers' markets like this.$"

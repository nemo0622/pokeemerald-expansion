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
# 30 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_STARTING_POKEMON
AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 33 "data/maps/AcrisiaCity/scripts.pory"
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
# 40 "data/maps/AcrisiaCity/scripts.pory"
	lockall
# 41 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 42 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_DOING_OVERWORLD_ENCOUNTER
# 45 "data/maps/AcrisiaCity/scripts.pory"
	startoverworldencounter 5
# 47 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_DOING_OVERWORLD_ENCOUNTER
# 48 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_DemoWarning::
# 57 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 58 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_DemoWarning_Text_0
# 59 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_DemoWarning_Text_1
# 60 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 61 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_DID_DEMO_WARNING
# 62 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_DirectionSign::
# 68 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 69 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_DirectionSign_Text_0
# 70 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 71 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_PlayerExitsTruck::
# 77 "data/maps/AcrisiaCity/scripts.pory"
	setvar VAR_INTRO_STATE, 1
# 78 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_SECOND_PROFESSOR_SPRITE
# 79 "data/maps/AcrisiaCity/scripts.pory"
	lockall
# 80 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerOffTruck
# 81 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 84 "data/maps/AcrisiaCity/scripts.pory"
	playse SE_PIN
# 85 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 86 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 87 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 88 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_1
# 89 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 92 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 93 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfGetsAbovePlayer
# 94 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 95 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1
# 96 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1
# 97 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 98 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 99 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_2
# 100 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 101 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2
# 102 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2
# 103 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 105 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 106 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 107 "data/maps/AcrisiaCity/scripts.pory"
	delay 15
# 108 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 18, AcrisiaCity_Movement_ShroomishRunFromProf
# 109 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 29, AcrisiaCity_Movement_DucklettRunFromProf
# 110 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 112 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 113 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 114 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 115 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_3
# 116 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 117 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_3
# 118 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_3
# 119 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 121 "data/maps/AcrisiaCity/scripts.pory"
	hideobjectat 12, MAP_ACRISIA_CITY
# 123 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_INTRO_TRUCK
# 124 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_STARTING_POKEMON
# 126 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 127 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 128 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 129 "data/maps/AcrisiaCity/scripts.pory"
	warpsilent MAP_ACRISIA_CITY_UNIVERSITY, 10, 19
# 130 "data/maps/AcrisiaCity/scripts.pory"
	waitstate
# 132 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 134 "data/maps/AcrisiaCity/scripts.pory"
	releaseall
	end


# 138 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerOffTruck:
# 140 "data/maps/AcrisiaCity/scripts.pory"
	jump_right
# 141 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 142 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 143 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 146 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfGetsAbovePlayer:
# 148 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 149 "data/maps/AcrisiaCity/scripts.pory"
	walk_left
# 150 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 151 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 151 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 152 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 155 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1:
# 157 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 157 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 157 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 157 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 157 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 157 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 158 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 158 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 158 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 158 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 158 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 159 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 159 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 159 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 159 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 159 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 160 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 161 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 164 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1:
# 166 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 166 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 166 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 166 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 166 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 166 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 166 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 167 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 167 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 167 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 167 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 167 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 168 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 168 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 168 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 168 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 169 "data/maps/AcrisiaCity/scripts.pory"
	face_up
# 170 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 173 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2:
# 175 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 175 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 175 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 175 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 175 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 175 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 175 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 175 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 175 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 176 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 176 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 176 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 176 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 176 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 176 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 176 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 176 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 176 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 176 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 176 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 176 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 176 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 176 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 176 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 176 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 177 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 180 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2:
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 183 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 183 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 183 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 183 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 183 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 183 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 183 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 183 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 183 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 183 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 183 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 183 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 183 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 183 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 183 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 184 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 187 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ShroomishRunFromProf:
# 189 "data/maps/AcrisiaCity/scripts.pory"
	emote_exclamation_mark
# 190 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 190 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 190 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 190 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 190 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 190 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 190 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 191 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 194 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_DucklettRunFromProf:
# 196 "data/maps/AcrisiaCity/scripts.pory"
	emote_exclamation_mark
# 197 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_up
# 197 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_up
# 198 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_right
# 198 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_right
# 199 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 199 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 200 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_left
# 201 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 201 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 201 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 201 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 201 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 201 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 201 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 202 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 205 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_3:
# 207 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 207 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 207 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 208 "data/maps/AcrisiaCity/scripts.pory"
	face_left
# 209 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 209 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 209 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 210 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 211 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 211 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 211 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 211 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 211 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 212 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 215 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_3:
# 217 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 217 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 217 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 218 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 219 "data/maps/AcrisiaCity/scripts.pory"
	emote_heart
# 220 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 220 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 220 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 221 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 221 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 222 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 222 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 222 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 222 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 223 "data/maps/AcrisiaCity/scripts.pory"
	step_end

AcrisiaCity_EventScript_LadyByWater::
# 231 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 232 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 233 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 234 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_1
# 235 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 237 "data/maps/AcrisiaCity/scripts.pory"
	goto_if_unset FLAG_GOT_EVIOLITE_ACRISIA_CITY, AcrisiaCity_EventScript_LadyByWater_2
# 274 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 275 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_6
# 276 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
AcrisiaCity_EventScript_LadyByWater_1:
# 279 "data/maps/AcrisiaCity/scripts.pory"
	release
	end

AcrisiaCity_EventScript_LadyByWater_2:
# 239 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 240 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_2
# 242 "data/maps/AcrisiaCity/scripts.pory"
	getcaughtmon SPECIES_TOGEPI
# 243 "data/maps/AcrisiaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_EventScript_LadyByWater_5
# 258 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 259 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_4
# 260 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 261 "data/maps/AcrisiaCity/scripts.pory"
	giveitem ITEM_EVIOLITE
# 262 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_GOT_EVIOLITE_ACRISIA_CITY
# 263 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 264 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_5
# 265 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 267 "data/maps/AcrisiaCity/scripts.pory"
	delay 20
# 268 "data/maps/AcrisiaCity/scripts.pory"
	completequest QUEST_TOGEPI_EVIOLITE
	goto AcrisiaCity_EventScript_LadyByWater_1

AcrisiaCity_EventScript_LadyByWater_5:
# 245 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 246 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_3
# 247 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 249 "data/maps/AcrisiaCity/scripts.pory"
	delay 20
# 250 "data/maps/AcrisiaCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_TOGEPI_EVIOLITE
# 251 "data/maps/AcrisiaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_EventScript_LadyByWater_8
	goto AcrisiaCity_EventScript_LadyByWater_1

AcrisiaCity_EventScript_LadyByWater_8:
# 253 "data/maps/AcrisiaCity/scripts.pory"
	startquest QUEST_TOGEPI_EVIOLITE
	goto AcrisiaCity_EventScript_LadyByWater_1


AcrisiaCity_EventScript_Woman2::
# 285 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 286 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 287 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Woman2_Text_0
# 288 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Woman2_Text_1
# 289 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 290 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Camper::
# 296 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 297 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 298 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Camper_Text_0
# 299 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Camper_Text_1
# 300 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 301 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_NinjaBoy::
# 307 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 308 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 309 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_NinjaBoy_Text_0
# 310 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_NinjaBoy_Text_1
# 311 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 312 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_RailMan::
# 318 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 319 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 320 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_RailMan_Text_0
# 321 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_RailMan_Text_1
# 322 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 323 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Growlithe::
# 329 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 330 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 331 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Growlithe_Text_0
# 332 "data/maps/AcrisiaCity/scripts.pory"
	playmoncry SPECIES_GROWLITHE_HISUI, CRY_MODE_NORMAL
# 333 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Growlithe_Text_1
# 334 "data/maps/AcrisiaCity/scripts.pory"
	waitmoncry
# 335 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 336 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Phanpy::
# 342 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 343 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 344 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Phanpy_Text_0
# 345 "data/maps/AcrisiaCity/scripts.pory"
	playmoncry SPECIES_PHANPY, CRY_MODE_NORMAL
# 346 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Phanpy_Text_1
# 347 "data/maps/AcrisiaCity/scripts.pory"
	waitmoncry
# 348 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 349 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_OldMan::
# 355 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 356 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 357 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_OldMan_Text_0
# 358 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_OldMan_Text_1
# 359 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 360 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Gentleman::
# 366 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 367 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 368 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Gentleman_Text_0
# 369 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Gentleman_Text_1
# 370 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 371 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_FatMan::
# 377 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 378 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 379 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_FatMan_Text_0
# 380 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_FatMan_Text_1
# 381 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 382 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 23, Common_Movement_FaceUp
# 383 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 384 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_DemoWarning_Text_0:
# 58 "data/maps/AcrisiaCity/scripts.pory"
	.string "Nemo622$"

AcrisiaCity_DemoWarning_Text_1:
# 59 "data/maps/AcrisiaCity/scripts.pory"
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
# 69 "data/maps/AcrisiaCity/scripts.pory"
	.string "Acrisia City\n"
	.string "The Heart of Ilian Learning\p"
	.string "{LEFT_ARROW} Acrisia Mountains\n"
	.string "Riverwalk Trail {RIGHT_ARROW}\n"
	.string "{DOWN_ARROW} Bronze Fields - North$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_0:
# 87 "data/maps/AcrisiaCity/scripts.pory"
	.string "Prof. Elia$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_1:
# 88 "data/maps/AcrisiaCity/scripts.pory"
	.string "Looks like you made it, {PLAYER}!\n"
	.string "Sorry about the rough ride, but there's\l"
	.string "no public transport up here. It's a bit...\l"
	.string "rural around here.\p"
	.string "Come, follow me! Let's get you to the\n"
	.string "University building!$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_2:
# 99 "data/maps/AcrisiaCity/scripts.pory"
	.string "As you can see, Acrisia City used to be\n"
	.string "a mining town. It's a bit past its prime\l"
	.string "now, but the folks here are still willing\l"
	.string "to support the University, so we've\l"
	.string "continued our research out of here!$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_3:
# 115 "data/maps/AcrisiaCity/scripts.pory"
	.string "Oho! Looks like a few Pokémon are out\n"
	.string "and about this morning!\p"
	.string "As you explore the region, you may find\n"
	.string "some Pokémon wandering around like\l"
	.string "this. But I'm getting ahead of myself!\l"
	.string "Come, let's get inside.$"

AcrisiaCity_EventScript_LadyByWater_Text_0:
# 233 "data/maps/AcrisiaCity/scripts.pory"
	.string "Performer$"

AcrisiaCity_EventScript_LadyByWater_Text_1:
# 234 "data/maps/AcrisiaCity/scripts.pory"
	.string "Baby Pokémon are the cutest, don't you\n"
	.string "think?$"

AcrisiaCity_EventScript_LadyByWater_Text_2:
# 240 "data/maps/AcrisiaCity/scripts.pory"
	.string "I've always wanted to learn more about\n"
	.string "Togepi... hey! You're a researcher with\l"
	.string "the University! Come to me when you\l"
	.string "have a {COLOR GREEN}complete Pokédex entry{COLOR DARK_GRAY} of\l"
	.string "Togepi.$"

AcrisiaCity_EventScript_LadyByWater_Text_3:
# 246 "data/maps/AcrisiaCity/scripts.pory"
	.string "Hurry up now, I'll have a {COLOR GREEN}prize{COLOR DARK_GRAY} for you!$"

AcrisiaCity_EventScript_LadyByWater_Text_4:
# 259 "data/maps/AcrisiaCity/scripts.pory"
	.string "Goodness, you've caught a Togepi! That\n"
	.string "makes me so happy!\p"
	.string "Here, let me give you a little something.$"

AcrisiaCity_EventScript_LadyByWater_Text_5:
# 264 "data/maps/AcrisiaCity/scripts.pory"
	.string "The {COLOR GREEN}Eviolite{COLOR DARK_GRAY} stops Pokémon from\n"
	.string "evolving and boosts their stats.\p"
	.string "It's great if you want to keep your\n"
	.string "cute baby Pokémon strong!$"

AcrisiaCity_EventScript_LadyByWater_Text_6:
# 275 "data/maps/AcrisiaCity/scripts.pory"
	.string "I hope that {COLOR GREEN}Eviolite{COLOR DARK_GRAY} has been helpful\n"
	.string "for you! It'll make your cute little\l"
	.string "Pokémon a bit stronger!$"

AcrisiaCity_EventScript_Woman2_Text_0:
# 287 "data/maps/AcrisiaCity/scripts.pory"
	.string "Woman$"

AcrisiaCity_EventScript_Woman2_Text_1:
# 288 "data/maps/AcrisiaCity/scripts.pory"
	.string "Even though not much mining happens\n"
	.string "here anymore, plenty of Trainers still\l"
	.string "come through Acrisia City. People are\l"
	.string "always looking for advice and to train\l"
	.string "in the mountains.$"

AcrisiaCity_EventScript_Camper_Text_0:
# 298 "data/maps/AcrisiaCity/scripts.pory"
	.string "Camper$"

AcrisiaCity_EventScript_Camper_Text_1:
# 299 "data/maps/AcrisiaCity/scripts.pory"
	.string "My family is camping in the Acrisia\n"
	.string "Mountains! I came down to check out\l"
	.string "the University and wild Pokémon.$"

AcrisiaCity_EventScript_NinjaBoy_Text_0:
# 309 "data/maps/AcrisiaCity/scripts.pory"
	.string "Excited Boy$"

AcrisiaCity_EventScript_NinjaBoy_Text_1:
# 310 "data/maps/AcrisiaCity/scripts.pory"
	.string "Some Pokémon are brave enough to walk\n"
	.string "around openly in the grass! It's so\l"
	.string "cool!$"

AcrisiaCity_EventScript_RailMan_Text_0:
# 320 "data/maps/AcrisiaCity/scripts.pory"
	.string "Nervous Man$"

AcrisiaCity_EventScript_RailMan_Text_1:
# 321 "data/maps/AcrisiaCity/scripts.pory"
	.string "I want to hop down and check this area\n"
	.string "out, but I'm too scared to jump... I\l"
	.string "should just get the Rock Smash HM.$"

AcrisiaCity_EventScript_Growlithe_Text_0:
# 331 "data/maps/AcrisiaCity/scripts.pory"
	.string "Growlithe$"

AcrisiaCity_EventScript_Growlithe_Text_1:
# 333 "data/maps/AcrisiaCity/scripts.pory"
	.string "Bwark bwark!$"

AcrisiaCity_EventScript_Phanpy_Text_0:
# 344 "data/maps/AcrisiaCity/scripts.pory"
	.string "Phanpy$"

AcrisiaCity_EventScript_Phanpy_Text_1:
# 346 "data/maps/AcrisiaCity/scripts.pory"
	.string "Toooot!$"

AcrisiaCity_EventScript_OldMan_Text_0:
# 357 "data/maps/AcrisiaCity/scripts.pory"
	.string "Old Man$"

AcrisiaCity_EventScript_OldMan_Text_1:
# 358 "data/maps/AcrisiaCity/scripts.pory"
	.string "Heavens, look at this harvest! Food\n"
	.string "comes up from Jusmail Town and feeds\l"
	.string "the folks up here.$"

AcrisiaCity_EventScript_Gentleman_Text_0:
# 368 "data/maps/AcrisiaCity/scripts.pory"
	.string "Gentleman$"

AcrisiaCity_EventScript_Gentleman_Text_1:
# 369 "data/maps/AcrisiaCity/scripts.pory"
	.string "Now that I'm retired, I like to sit here\n"
	.string "and watch the time pass. I can't help\l"
	.string "but smile seeing the lights come on in\l"
	.string "the evening!$"

AcrisiaCity_EventScript_FatMan_Text_0:
# 379 "data/maps/AcrisiaCity/scripts.pory"
	.string "Man$"

AcrisiaCity_EventScript_FatMan_Text_1:
# 380 "data/maps/AcrisiaCity/scripts.pory"
	.string "I'm looking for some food for my Phanpy.\n"
	.string "Towns in the Ilios Region tend to have\l"
	.string "little farmers' markets like this.$"

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


AcrisiaCity_EventScript_PlayerExitsTruck::
# 68 "data/maps/AcrisiaCity/scripts.pory"
	setvar VAR_INTRO_STATE, 1
# 69 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_SECOND_PROFESSOR_SPRITE
# 70 "data/maps/AcrisiaCity/scripts.pory"
	lockall
# 71 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerOffTruck
# 72 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 75 "data/maps/AcrisiaCity/scripts.pory"
	playse SE_PIN
# 76 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 77 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 78 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 79 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_1
# 80 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 83 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 84 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfGetsAbovePlayer
# 85 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 86 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1
# 87 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1
# 88 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 89 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 90 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_2
# 91 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 92 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2
# 93 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2
# 94 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 96 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 97 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 98 "data/maps/AcrisiaCity/scripts.pory"
	delay 15
# 99 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 18, AcrisiaCity_Movement_ShroomishRunFromProf
# 100 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 29, AcrisiaCity_Movement_DucklettRunFromProf
# 101 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 103 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 104 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 105 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 106 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_3
# 107 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 108 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_3
# 109 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_3
# 110 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 112 "data/maps/AcrisiaCity/scripts.pory"
	hideobjectat 12, MAP_ACRISIA_CITY
# 114 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_INTRO_TRUCK
# 115 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_STARTING_POKEMON
# 117 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 118 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 119 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 120 "data/maps/AcrisiaCity/scripts.pory"
	warpsilent MAP_ACRISIA_CITY_UNIVERSITY, 10, 19
# 121 "data/maps/AcrisiaCity/scripts.pory"
	waitstate
# 123 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 125 "data/maps/AcrisiaCity/scripts.pory"
	releaseall
	end


# 129 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerOffTruck:
# 131 "data/maps/AcrisiaCity/scripts.pory"
	jump_right
# 132 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 133 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 134 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 137 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfGetsAbovePlayer:
# 139 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 140 "data/maps/AcrisiaCity/scripts.pory"
	walk_left
# 141 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 142 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 142 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 143 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 146 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1:
# 148 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 148 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 148 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 148 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 148 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 148 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 149 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 149 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 149 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 149 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 149 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 150 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 150 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 150 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 150 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 150 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 151 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 152 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 155 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1:
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
# 160 "data/maps/AcrisiaCity/scripts.pory"
	face_up
# 161 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 164 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2:
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
# 167 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 168 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 171 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2:
# 173 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 173 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 173 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 173 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 173 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 173 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 173 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 173 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 173 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 173 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 174 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 174 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 174 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 174 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 174 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 174 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 174 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 174 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 174 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 174 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 174 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 174 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 174 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 174 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 174 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 175 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 178 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ShroomishRunFromProf:
# 180 "data/maps/AcrisiaCity/scripts.pory"
	emote_exclamation_mark
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 182 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 185 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_DucklettRunFromProf:
# 187 "data/maps/AcrisiaCity/scripts.pory"
	emote_exclamation_mark
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_up
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_up
# 189 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_right
# 189 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_right
# 190 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 190 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 191 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_left
# 192 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 192 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 192 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 192 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 192 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 192 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 192 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 193 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 196 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_3:
# 198 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 198 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 198 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 199 "data/maps/AcrisiaCity/scripts.pory"
	face_left
# 200 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 200 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 200 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 201 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 202 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 202 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 202 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 202 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 202 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 203 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 206 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_3:
# 208 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 208 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 208 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 209 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 210 "data/maps/AcrisiaCity/scripts.pory"
	emote_heart
# 211 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 211 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 211 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 212 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 212 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 213 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 213 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 213 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 213 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 214 "data/maps/AcrisiaCity/scripts.pory"
	step_end

AcrisiaCity_EventScript_LadyByWater::
# 222 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 223 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 224 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 225 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_1
# 226 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 228 "data/maps/AcrisiaCity/scripts.pory"
	goto_if_unset FLAG_GOT_EVIOLITE_ACRISIA_CITY, AcrisiaCity_EventScript_LadyByWater_2
# 265 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 266 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_6
# 267 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
AcrisiaCity_EventScript_LadyByWater_1:
# 270 "data/maps/AcrisiaCity/scripts.pory"
	release
	end

AcrisiaCity_EventScript_LadyByWater_2:
# 230 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 231 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_2
# 233 "data/maps/AcrisiaCity/scripts.pory"
	getcaughtmon SPECIES_TOGEPI
# 234 "data/maps/AcrisiaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_EventScript_LadyByWater_5
# 249 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 250 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_4
# 251 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 252 "data/maps/AcrisiaCity/scripts.pory"
	giveitem ITEM_EVIOLITE
# 253 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_GOT_EVIOLITE_ACRISIA_CITY
# 254 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 255 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_5
# 256 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 258 "data/maps/AcrisiaCity/scripts.pory"
	delay 20
# 259 "data/maps/AcrisiaCity/scripts.pory"
	completequest QUEST_TOGEPI_EVIOLITE
	goto AcrisiaCity_EventScript_LadyByWater_1

AcrisiaCity_EventScript_LadyByWater_5:
# 236 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 237 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_3
# 238 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 240 "data/maps/AcrisiaCity/scripts.pory"
	delay 20
# 241 "data/maps/AcrisiaCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_TOGEPI_EVIOLITE
# 242 "data/maps/AcrisiaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_EventScript_LadyByWater_8
	goto AcrisiaCity_EventScript_LadyByWater_1

AcrisiaCity_EventScript_LadyByWater_8:
# 244 "data/maps/AcrisiaCity/scripts.pory"
	startquest QUEST_TOGEPI_EVIOLITE
	goto AcrisiaCity_EventScript_LadyByWater_1


AcrisiaCity_EventScript_Woman2::
# 276 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 277 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 278 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Woman2_Text_0
# 279 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Woman2_Text_1
# 280 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 281 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Camper::
# 287 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 288 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 289 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Camper_Text_0
# 290 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Camper_Text_1
# 291 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 292 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_NinjaBoy::
# 298 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 299 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 300 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_NinjaBoy_Text_0
# 301 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_NinjaBoy_Text_1
# 302 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 303 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_RailMan::
# 309 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 310 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 311 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_RailMan_Text_0
# 312 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_RailMan_Text_1
# 313 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 314 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Growlithe::
# 320 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 321 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 322 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Growlithe_Text_0
# 323 "data/maps/AcrisiaCity/scripts.pory"
	playmoncry SPECIES_GROWLITHE_HISUI, CRY_MODE_NORMAL
# 324 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Growlithe_Text_1
# 325 "data/maps/AcrisiaCity/scripts.pory"
	waitmoncry
# 326 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 327 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Phanpy::
# 333 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 334 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 335 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Phanpy_Text_0
# 336 "data/maps/AcrisiaCity/scripts.pory"
	playmoncry SPECIES_PHANPY, CRY_MODE_NORMAL
# 337 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Phanpy_Text_1
# 338 "data/maps/AcrisiaCity/scripts.pory"
	waitmoncry
# 339 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 340 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_OldMan::
# 346 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 347 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 348 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_OldMan_Text_0
# 349 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_OldMan_Text_1
# 350 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 351 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Gentleman::
# 357 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 358 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 359 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Gentleman_Text_0
# 360 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Gentleman_Text_1
# 361 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 362 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_FatMan::
# 368 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 369 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 370 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_FatMan_Text_0
# 371 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_FatMan_Text_1
# 372 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 373 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 23, Common_Movement_FaceUp
# 374 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 375 "data/maps/AcrisiaCity/scripts.pory"
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

AcrisiaCity_EventScript_PlayerExitsTruck_Text_0:
# 78 "data/maps/AcrisiaCity/scripts.pory"
	.string "Prof. Elia$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_1:
# 79 "data/maps/AcrisiaCity/scripts.pory"
	.string "Looks like you made it, {PLAYER}!\n"
	.string "Sorry about the rough ride, but there's\l"
	.string "no public transport up here. It's a bit...\l"
	.string "rural around here.\p"
	.string "Come, follow me! Let's get you to the\n"
	.string "University building!$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_2:
# 90 "data/maps/AcrisiaCity/scripts.pory"
	.string "As you can see, Acrisia City used to be\n"
	.string "a mining town. It's a bit past its prime\l"
	.string "now, but the folks here are still willing\l"
	.string "to support the University, so we've\l"
	.string "continued our research out of here!$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_3:
# 106 "data/maps/AcrisiaCity/scripts.pory"
	.string "Oho! Looks like a few Pokémon are out\n"
	.string "and about this morning!\p"
	.string "As you explore the region, you may find\n"
	.string "some Pokémon wandering around like\l"
	.string "this. But I'm getting ahead of myself!\l"
	.string "Come, let's get inside.$"

AcrisiaCity_EventScript_LadyByWater_Text_0:
# 224 "data/maps/AcrisiaCity/scripts.pory"
	.string "Performer$"

AcrisiaCity_EventScript_LadyByWater_Text_1:
# 225 "data/maps/AcrisiaCity/scripts.pory"
	.string "Baby Pokémon are the cutest, don't you\n"
	.string "think?$"

AcrisiaCity_EventScript_LadyByWater_Text_2:
# 231 "data/maps/AcrisiaCity/scripts.pory"
	.string "I've always wanted to learn more about\n"
	.string "Togepi... hey! You're a researcher with\l"
	.string "the University! Come to me when you\l"
	.string "have a {COLOR GREEN}complete Pokédex entry{COLOR DARK_GRAY} of\l"
	.string "Togepi.$"

AcrisiaCity_EventScript_LadyByWater_Text_3:
# 237 "data/maps/AcrisiaCity/scripts.pory"
	.string "Hurry up now, I'll have a {COLOR GREEN}prize{COLOR DARK_GRAY} for you!$"

AcrisiaCity_EventScript_LadyByWater_Text_4:
# 250 "data/maps/AcrisiaCity/scripts.pory"
	.string "Goodness, you've caught a Togepi! That\n"
	.string "makes me so happy!\p"
	.string "Here, let me give you a little something.$"

AcrisiaCity_EventScript_LadyByWater_Text_5:
# 255 "data/maps/AcrisiaCity/scripts.pory"
	.string "The {COLOR GREEN}Eviolite{COLOR DARK_GRAY} stops Pokémon from\n"
	.string "evolving and boosts their stats.\p"
	.string "It's great if you want to keep your\n"
	.string "cute baby Pokémon strong!$"

AcrisiaCity_EventScript_LadyByWater_Text_6:
# 266 "data/maps/AcrisiaCity/scripts.pory"
	.string "I hope that {COLOR GREEN}Eviolite{COLOR DARK_GRAY} has been helpful\n"
	.string "for you! It'll make your cute little\l"
	.string "Pokémon a bit stronger!$"

AcrisiaCity_EventScript_Woman2_Text_0:
# 278 "data/maps/AcrisiaCity/scripts.pory"
	.string "Woman$"

AcrisiaCity_EventScript_Woman2_Text_1:
# 279 "data/maps/AcrisiaCity/scripts.pory"
	.string "Even though not much mining happens\n"
	.string "here anymore, plenty of Trainers still\l"
	.string "come through Acrisia City. People are\l"
	.string "always looking for advice and to train\l"
	.string "in the mountains.$"

AcrisiaCity_EventScript_Camper_Text_0:
# 289 "data/maps/AcrisiaCity/scripts.pory"
	.string "Camper$"

AcrisiaCity_EventScript_Camper_Text_1:
# 290 "data/maps/AcrisiaCity/scripts.pory"
	.string "My family is camping in the Acrisia\n"
	.string "Mountains! I came down to check out\l"
	.string "the University and wild Pokémon.$"

AcrisiaCity_EventScript_NinjaBoy_Text_0:
# 300 "data/maps/AcrisiaCity/scripts.pory"
	.string "Excited Boy$"

AcrisiaCity_EventScript_NinjaBoy_Text_1:
# 301 "data/maps/AcrisiaCity/scripts.pory"
	.string "Some Pokémon are brave enough to walk\n"
	.string "around openly in the grass! It's so\l"
	.string "cool!$"

AcrisiaCity_EventScript_RailMan_Text_0:
# 311 "data/maps/AcrisiaCity/scripts.pory"
	.string "Nervous Man$"

AcrisiaCity_EventScript_RailMan_Text_1:
# 312 "data/maps/AcrisiaCity/scripts.pory"
	.string "I want to hop down and check this area\n"
	.string "out, but I'm too scared to jump... I\l"
	.string "should just get the Rock Smash HM.$"

AcrisiaCity_EventScript_Growlithe_Text_0:
# 322 "data/maps/AcrisiaCity/scripts.pory"
	.string "Growlithe$"

AcrisiaCity_EventScript_Growlithe_Text_1:
# 324 "data/maps/AcrisiaCity/scripts.pory"
	.string "Bwark bwark!$"

AcrisiaCity_EventScript_Phanpy_Text_0:
# 335 "data/maps/AcrisiaCity/scripts.pory"
	.string "Phanpy$"

AcrisiaCity_EventScript_Phanpy_Text_1:
# 337 "data/maps/AcrisiaCity/scripts.pory"
	.string "Toooot!$"

AcrisiaCity_EventScript_OldMan_Text_0:
# 348 "data/maps/AcrisiaCity/scripts.pory"
	.string "Old Man$"

AcrisiaCity_EventScript_OldMan_Text_1:
# 349 "data/maps/AcrisiaCity/scripts.pory"
	.string "Heavens, look at this harvest! Food\n"
	.string "comes up from Jusmail Town and feeds\l"
	.string "the folks up here.$"

AcrisiaCity_EventScript_Gentleman_Text_0:
# 359 "data/maps/AcrisiaCity/scripts.pory"
	.string "Gentleman$"

AcrisiaCity_EventScript_Gentleman_Text_1:
# 360 "data/maps/AcrisiaCity/scripts.pory"
	.string "Now that I'm retired, I like to sit here\n"
	.string "and watch the time pass. I can't help\l"
	.string "but smile seeing the lights come on in\l"
	.string "the evening!$"

AcrisiaCity_EventScript_FatMan_Text_0:
# 370 "data/maps/AcrisiaCity/scripts.pory"
	.string "Man$"

AcrisiaCity_EventScript_FatMan_Text_1:
# 371 "data/maps/AcrisiaCity/scripts.pory"
	.string "I'm looking for some food for my Phanpy.\n"
	.string "Towns in the Ilios Region tend to have\l"
	.string "little farmers' markets like this.$"

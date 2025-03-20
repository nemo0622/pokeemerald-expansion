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
# 23 "data/maps/AcrisiaCity/scripts.pory"
	setobjectaswildencounter 18, ENCOUNTER_LAND
# 24 "data/maps/AcrisiaCity/scripts.pory"
	setobjectaswildencounter 29, ENCOUNTER_LAND
	return

AcrisiaCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/AcrisiaCity/scripts.pory"
	map_script_2 VAR_INTRO_STATE, 0, AcrisiaCity_EventScript_PlayerExitsTruck
	.2byte 0


Overworld_EventScript_WildPokemon::
# 31 "data/maps/AcrisiaCity/scripts.pory"
	lockall
# 32 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 33 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_DOING_OVERWORLD_ENCOUNTER
# 36 "data/maps/AcrisiaCity/scripts.pory"
	startoverworldencounter 5
# 38 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_DOING_OVERWORLD_ENCOUNTER
# 39 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_DemoWarning::
# 48 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 49 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_DemoWarning_Text_0
# 50 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_DemoWarning_Text_1
# 51 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 52 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_DID_DEMO_WARNING
# 53 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_PlayerExitsTruck::
# 59 "data/maps/AcrisiaCity/scripts.pory"
	setvar VAR_INTRO_STATE, 1
# 60 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_SECOND_PROFESSOR_SPRITE
# 61 "data/maps/AcrisiaCity/scripts.pory"
	lockall
# 62 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerOffTruck
# 63 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 66 "data/maps/AcrisiaCity/scripts.pory"
	playse SE_PIN
# 67 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 68 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 69 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 70 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_1
# 71 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 74 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 75 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfGetsAbovePlayer
# 76 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 77 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1
# 78 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1
# 79 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 80 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 81 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_2
# 82 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 83 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2
# 84 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2
# 85 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 87 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 88 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 89 "data/maps/AcrisiaCity/scripts.pory"
	delay 15
# 90 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 18, AcrisiaCity_Movement_ShroomishRunFromProf
# 91 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 29, AcrisiaCity_Movement_DucklettRunFromProf
# 92 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 94 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 95 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 96 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 97 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_3
# 98 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 99 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_3
# 100 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_3
# 101 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 103 "data/maps/AcrisiaCity/scripts.pory"
	hideobjectat 12, MAP_ACRISIA_CITY
# 105 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_INTRO_TRUCK
# 107 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 108 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 109 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 110 "data/maps/AcrisiaCity/scripts.pory"
	warpsilent MAP_ACRISIA_CITY_UNIVERSITY, 10, 19
# 111 "data/maps/AcrisiaCity/scripts.pory"
	waitstate
# 113 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 115 "data/maps/AcrisiaCity/scripts.pory"
	releaseall
	end


# 119 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerOffTruck:
# 121 "data/maps/AcrisiaCity/scripts.pory"
	jump_right
# 122 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 123 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 124 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 127 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfGetsAbovePlayer:
# 129 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 130 "data/maps/AcrisiaCity/scripts.pory"
	walk_left
# 131 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 132 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 132 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 133 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 136 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1:
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 138 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 139 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 139 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 139 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 139 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 139 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 140 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 140 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 140 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 140 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 140 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 141 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 142 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 145 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1:
# 147 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 147 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 147 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 147 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 147 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 147 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 147 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 148 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 148 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 148 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 148 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 148 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 149 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 149 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 149 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 149 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 150 "data/maps/AcrisiaCity/scripts.pory"
	face_up
# 151 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 154 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2:
# 156 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 156 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 156 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 156 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 156 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 156 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 156 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 156 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 156 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 157 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 157 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 157 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 157 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 157 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 157 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 157 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 157 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 157 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 157 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 157 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 157 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 157 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 157 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 157 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 157 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 158 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 161 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2:
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
	step_end

# 168 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ShroomishRunFromProf:
# 170 "data/maps/AcrisiaCity/scripts.pory"
	emote_exclamation_mark
# 171 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 171 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 171 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 171 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 171 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 171 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 171 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 172 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 175 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_DucklettRunFromProf:
# 177 "data/maps/AcrisiaCity/scripts.pory"
	emote_exclamation_mark
# 178 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_up
# 178 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_up
# 179 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_right
# 179 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_right
# 180 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 180 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 181 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_left
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 182 "data/maps/AcrisiaCity/scripts.pory"
	walk_fast_down
# 183 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 186 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_3:
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 188 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 189 "data/maps/AcrisiaCity/scripts.pory"
	face_left
# 190 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 190 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 190 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 191 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 192 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 192 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 192 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 192 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 192 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 193 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 196 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_3:
# 198 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 198 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 198 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 199 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 200 "data/maps/AcrisiaCity/scripts.pory"
	emote_heart
# 201 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 201 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 201 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 202 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 202 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 203 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 203 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 203 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 203 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 204 "data/maps/AcrisiaCity/scripts.pory"
	step_end

AcrisiaCity_EventScript_LadyByWater::
# 212 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 213 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 214 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 215 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_1
# 216 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 218 "data/maps/AcrisiaCity/scripts.pory"
	goto_if_unset FLAG_GOT_EVIOLITE_ACRISIA_CITY, AcrisiaCity_EventScript_LadyByWater_2
# 255 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 256 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_6
# 257 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
AcrisiaCity_EventScript_LadyByWater_1:
# 260 "data/maps/AcrisiaCity/scripts.pory"
	release
	end

AcrisiaCity_EventScript_LadyByWater_2:
# 220 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 221 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_2
# 223 "data/maps/AcrisiaCity/scripts.pory"
	getcaughtmon SPECIES_TOGEPI
# 224 "data/maps/AcrisiaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_EventScript_LadyByWater_5
# 239 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 240 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_4
# 241 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 242 "data/maps/AcrisiaCity/scripts.pory"
	giveitem ITEM_EVIOLITE
# 243 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_GOT_EVIOLITE_ACRISIA_CITY
# 244 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 245 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_5
# 246 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 248 "data/maps/AcrisiaCity/scripts.pory"
	delay 20
# 249 "data/maps/AcrisiaCity/scripts.pory"
	completequest QUEST_TOGEPI_EVIOLITE
	goto AcrisiaCity_EventScript_LadyByWater_1

AcrisiaCity_EventScript_LadyByWater_5:
# 226 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 227 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_3
# 228 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 230 "data/maps/AcrisiaCity/scripts.pory"
	delay 20
# 231 "data/maps/AcrisiaCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_TOGEPI_EVIOLITE
# 232 "data/maps/AcrisiaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_EventScript_LadyByWater_8
	goto AcrisiaCity_EventScript_LadyByWater_1

AcrisiaCity_EventScript_LadyByWater_8:
# 234 "data/maps/AcrisiaCity/scripts.pory"
	startquest QUEST_TOGEPI_EVIOLITE
	goto AcrisiaCity_EventScript_LadyByWater_1


AcrisiaCity_EventScript_Woman2::
# 266 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 267 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 268 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Woman2_Text_0
# 269 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Woman2_Text_1
# 270 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 271 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Camper::
# 277 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 278 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 279 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Camper_Text_0
# 280 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Camper_Text_1
# 281 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 282 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_NinjaBoy::
# 288 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 289 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 290 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_NinjaBoy_Text_0
# 291 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_NinjaBoy_Text_1
# 292 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 293 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_RailMan::
# 299 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 300 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 301 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_RailMan_Text_0
# 302 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_RailMan_Text_1
# 303 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 304 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Growlithe::
# 310 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 311 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 312 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Growlithe_Text_0
# 313 "data/maps/AcrisiaCity/scripts.pory"
	playmoncry SPECIES_GROWLITHE_HISUI, CRY_MODE_NORMAL
# 314 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Growlithe_Text_1
# 315 "data/maps/AcrisiaCity/scripts.pory"
	waitmoncry
# 316 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 317 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Phanpy::
# 323 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 324 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 325 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Phanpy_Text_0
# 326 "data/maps/AcrisiaCity/scripts.pory"
	playmoncry SPECIES_PHANPY, CRY_MODE_NORMAL
# 327 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Phanpy_Text_1
# 328 "data/maps/AcrisiaCity/scripts.pory"
	waitmoncry
# 329 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 330 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_OldMan::
# 336 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 337 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 338 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_OldMan_Text_0
# 339 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_OldMan_Text_1
# 340 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 341 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Gentleman::
# 347 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 348 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 349 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Gentleman_Text_0
# 350 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Gentleman_Text_1
# 351 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 352 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_FatMan::
# 358 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 359 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 360 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_FatMan_Text_0
# 361 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_FatMan_Text_1
# 362 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 363 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 23, Common_Movement_FaceUp
# 364 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 365 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_DemoWarning_Text_0:
# 49 "data/maps/AcrisiaCity/scripts.pory"
	.string "Nemo622$"

AcrisiaCity_DemoWarning_Text_1:
# 50 "data/maps/AcrisiaCity/scripts.pory"
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
# 69 "data/maps/AcrisiaCity/scripts.pory"
	.string "Prof. Elia$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_1:
# 70 "data/maps/AcrisiaCity/scripts.pory"
	.string "Looks like you made it, {PLAYER}!\n"
	.string "Sorry about the rough ride, but there's\l"
	.string "no public transport up here. It's a bit...\l"
	.string "rural around here.\p"
	.string "Come, follow me! Let's get you to the\n"
	.string "University building!$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_2:
# 81 "data/maps/AcrisiaCity/scripts.pory"
	.string "As you can see, Acrisia City used to be\n"
	.string "a mining town. It's a bit past its prime\l"
	.string "now, but the folks here are still willing\l"
	.string "to support the University, so we've\l"
	.string "continued our research out of here!$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_3:
# 97 "data/maps/AcrisiaCity/scripts.pory"
	.string "Oho! Looks like a few Pokémon are out\n"
	.string "and about this morning!\p"
	.string "As you explore the region, you may find\n"
	.string "some Pokémon wandering around like\l"
	.string "this. But I'm getting ahead of myself!\l"
	.string "Come, let's get inside.$"

AcrisiaCity_EventScript_LadyByWater_Text_0:
# 214 "data/maps/AcrisiaCity/scripts.pory"
	.string "Performer$"

AcrisiaCity_EventScript_LadyByWater_Text_1:
# 215 "data/maps/AcrisiaCity/scripts.pory"
	.string "Baby Pokémon are the cutest, don't you\n"
	.string "think?$"

AcrisiaCity_EventScript_LadyByWater_Text_2:
# 221 "data/maps/AcrisiaCity/scripts.pory"
	.string "I've always wanted to learn more about\n"
	.string "Togepi... hey! You're a researcher with\l"
	.string "the University! Come to me when you\l"
	.string "have a {COLOR GREEN}complete Pokédex entry{COLOR DARK_GRAY} of\l"
	.string "Togepi.$"

AcrisiaCity_EventScript_LadyByWater_Text_3:
# 227 "data/maps/AcrisiaCity/scripts.pory"
	.string "Hurry up now, I'll have a {COLOR GREEN}prize{COLOR DARK_GRAY} for you!$"

AcrisiaCity_EventScript_LadyByWater_Text_4:
# 240 "data/maps/AcrisiaCity/scripts.pory"
	.string "Goodness, you've caught a Togepi! That\n"
	.string "makes me so happy!\p"
	.string "Here, let me give you a little something.$"

AcrisiaCity_EventScript_LadyByWater_Text_5:
# 245 "data/maps/AcrisiaCity/scripts.pory"
	.string "The {COLOR GREEN}Eviolite{COLOR DARK_GRAY} stops Pokémon from\n"
	.string "evolving and boosts their stats.\p"
	.string "It's great if you want to keep your\n"
	.string "cute baby Pokémon strong!$"

AcrisiaCity_EventScript_LadyByWater_Text_6:
# 256 "data/maps/AcrisiaCity/scripts.pory"
	.string "I hope that {COLOR GREEN}Eviolite{COLOR DARK_GRAY} has been helpful\n"
	.string "for you! It'll make your cute little\l"
	.string "Pokémon a bit stronger!$"

AcrisiaCity_EventScript_Woman2_Text_0:
# 268 "data/maps/AcrisiaCity/scripts.pory"
	.string "Woman$"

AcrisiaCity_EventScript_Woman2_Text_1:
# 269 "data/maps/AcrisiaCity/scripts.pory"
	.string "Even though not much mining happens\n"
	.string "here anymore, plenty of Trainers still\l"
	.string "come through Acrisia City. People are\l"
	.string "always looking for advice and to train\l"
	.string "in the mountains.$"

AcrisiaCity_EventScript_Camper_Text_0:
# 279 "data/maps/AcrisiaCity/scripts.pory"
	.string "Camper$"

AcrisiaCity_EventScript_Camper_Text_1:
# 280 "data/maps/AcrisiaCity/scripts.pory"
	.string "My family is camping in the Acrisia\n"
	.string "Mountains! I came down to check out\l"
	.string "the University and wild Pokémon.$"

AcrisiaCity_EventScript_NinjaBoy_Text_0:
# 290 "data/maps/AcrisiaCity/scripts.pory"
	.string "Excited Boy$"

AcrisiaCity_EventScript_NinjaBoy_Text_1:
# 291 "data/maps/AcrisiaCity/scripts.pory"
	.string "Some Pokémon are brave enough to walk\n"
	.string "around openly in the grass! It's so\l"
	.string "cool!$"

AcrisiaCity_EventScript_RailMan_Text_0:
# 301 "data/maps/AcrisiaCity/scripts.pory"
	.string "Nervous Man$"

AcrisiaCity_EventScript_RailMan_Text_1:
# 302 "data/maps/AcrisiaCity/scripts.pory"
	.string "I want to hop down and check this area\n"
	.string "out, but I'm too scared to jump... I\l"
	.string "should just get the Rock Smash HM.$"

AcrisiaCity_EventScript_Growlithe_Text_0:
# 312 "data/maps/AcrisiaCity/scripts.pory"
	.string "Growlithe$"

AcrisiaCity_EventScript_Growlithe_Text_1:
# 314 "data/maps/AcrisiaCity/scripts.pory"
	.string "Bwark bwark!$"

AcrisiaCity_EventScript_Phanpy_Text_0:
# 325 "data/maps/AcrisiaCity/scripts.pory"
	.string "Phanpy$"

AcrisiaCity_EventScript_Phanpy_Text_1:
# 327 "data/maps/AcrisiaCity/scripts.pory"
	.string "Toooot!$"

AcrisiaCity_EventScript_OldMan_Text_0:
# 338 "data/maps/AcrisiaCity/scripts.pory"
	.string "Old Man$"

AcrisiaCity_EventScript_OldMan_Text_1:
# 339 "data/maps/AcrisiaCity/scripts.pory"
	.string "Heavens, look at this harvest! Food\n"
	.string "comes up from Jusmail Town and feeds\l"
	.string "the folks up here.$"

AcrisiaCity_EventScript_Gentleman_Text_0:
# 349 "data/maps/AcrisiaCity/scripts.pory"
	.string "Gentleman$"

AcrisiaCity_EventScript_Gentleman_Text_1:
# 350 "data/maps/AcrisiaCity/scripts.pory"
	.string "Now that I'm retired, I like to sit here\n"
	.string "and watch the time pass. I can't help\l"
	.string "but smile seeing the lights come on in\l"
	.string "the evening!$"

AcrisiaCity_EventScript_FatMan_Text_0:
# 360 "data/maps/AcrisiaCity/scripts.pory"
	.string "Man$"

AcrisiaCity_EventScript_FatMan_Text_1:
# 361 "data/maps/AcrisiaCity/scripts.pory"
	.string "I'm looking for some food for my Phanpy.\n"
	.string "Towns in the Ilios Region tend to have\l"
	.string "little farmers' markets like this.$"

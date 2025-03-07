AcrisiaCity_University_MapScripts::
# 2 "data/maps/AcrisiaCity_University/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AcrisiaCity_University_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AcrisiaCity_University_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/AcrisiaCity_University/scripts.pory"
	map_script_2 VAR_INTRO_STATE, 1, AcrisiaCity_University_EventScript_PlayerIntro
# 4 "data/maps/AcrisiaCity_University/scripts.pory"
	map_script_2 VAR_STARTER_MON, 0, AcrisiaCity_University_EventScript_ChoosePokemon
	.2byte 0


AcrisiaCity_University_EventScript_PlayerIntro::
# 11 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 2
# 12 "data/maps/AcrisiaCity_University/scripts.pory"
	setobjectxy 1, 10, 18
# 13 "data/maps/AcrisiaCity_University/scripts.pory"
	lockall
# 15 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 16 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 19 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 20 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_1
# 21 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 22 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 23 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 24 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 27 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 28 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_2
# 29 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 30 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_PIN
# 31 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 32 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 33 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_3
# 34 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_4
# 35 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 36 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 3, AcrisiaCity_University_Movement_NikoStopsPlayer
# 37 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 38 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_3
# 39 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_5
# 40 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 41 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 42 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_6
# 43 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 44 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 45 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 46 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 47 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 48 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_7
# 49 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 50 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 51 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 52 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 53 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 54 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 55 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 56 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 57 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_9
# 58 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 59 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 3, AcrisiaCity_University_Movement_NikoReturnToStation
# 60 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 63 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 1, AcrisiaCity_University_Movement_ProfessorUp
# 64 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerFollowProfessorUp
# 65 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 66 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 67 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_10
# 68 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 69 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 4, AcrisiaCity_University_Movement_RaniaGreetsPlayer
# 70 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 71 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 72 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_12
# 73 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 74 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 4, AcrisiaCity_University_Movement_RaniaReturnsToStation
# 75 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 78 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 79 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 80 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 1, AcrisiaCity_University_Movement_ProfessorToMainPosition
# 81 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerFollowProfessorToMainPosition
# 82 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 83 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 84 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_13
# 85 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 88 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 1, AcrisiaCity_University_Movement_ProfessorTriesToFindDex_1
# 89 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 90 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 91 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 92 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_PIN
# 93 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 94 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 1, AcrisiaCity_University_Movement_ProfessorTriesToFindDex_2
# 95 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 96 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 97 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 98 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 99 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_14
# 100 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 101 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 30
# 102 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 103 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 104 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 105 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_15
# 106 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 108 "data/maps/AcrisiaCity_University/scripts.pory"
	call Common_EventScript_SaveGame
# 110 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_ChoosePokemon
# 112 "data/maps/AcrisiaCity_University/scripts.pory"
	releaseall
	end


AcrisiaCity_University_EventScript_ChoosePokemon::
# 120 "data/maps/AcrisiaCity_University/scripts.pory"
	callnative StartNewPokeballCaseUI
# 121 "data/maps/AcrisiaCity_University/scripts.pory"
	waitstate
# 123 "data/maps/AcrisiaCity_University/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_MON
# 124 "data/maps/AcrisiaCity_University/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 125 "data/maps/AcrisiaCity_University/scripts.pory"
	message AcrisiaCity_University_EventScript_ChoosePokemon_Text_0
# 126 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmessage
# 127 "data/maps/AcrisiaCity_University/scripts.pory"
	waitfanfare
# 128 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 129 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 130 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_ChoosePokemon_Text_1
# 131 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 133 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 134 "data/maps/AcrisiaCity_University/scripts.pory"
	clearflag FLAG_HIDE_SECOND_PROFESSOR_SPRITE
# 135 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_HIDE_FIRST_PROFESSOR_SPRITE
# 136 "data/maps/AcrisiaCity_University/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 137 "data/maps/AcrisiaCity_University/scripts.pory"
	setrespawn HEAL_LOCATION_ACRISIA_CITY
# 138 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_BERRY_TREES_PLANTED, 0
# 140 "data/maps/AcrisiaCity_University/scripts.pory"
	warpsilent MAP_ACRISIA_CITY_UNIVERSITY, 6, 12
# 141 "data/maps/AcrisiaCity_University/scripts.pory"
	waitstate
# 147 "data/maps/AcrisiaCity_University/scripts.pory"
	releaseall
	end


# 151 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_NikoStopsPlayer:
# 153 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_left
# 153 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_left
# 154 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_left
# 154 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_left
# 155 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 156 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 159 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_NikoReturnToStation:
# 161 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 161 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 162 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 163 "data/maps/AcrisiaCity_University/scripts.pory"
	face_up
# 164 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 167 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_ProfessorUp:
# 169 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 169 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 169 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 169 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 169 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 170 "data/maps/AcrisiaCity_University/scripts.pory"
	face_right
# 171 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 174 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerFollowProfessorUp:
# 176 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 176 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 176 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 176 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 176 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 177 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 178 "data/maps/AcrisiaCity_University/scripts.pory"
	face_up
# 179 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 182 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_RaniaGreetsPlayer:
# 184 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 185 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 185 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 185 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 186 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 186 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 187 "data/maps/AcrisiaCity_University/scripts.pory"
	face_down
# 188 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 191 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_RaniaReturnsToStation:
# 193 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 193 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 194 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 194 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 194 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 195 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 196 "data/maps/AcrisiaCity_University/scripts.pory"
	face_left
# 197 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 200 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_ProfessorToMainPosition:
# 202 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 202 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 202 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 202 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 202 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 203 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 203 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 204 "data/maps/AcrisiaCity_University/scripts.pory"
	face_down
# 205 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 208 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerFollowProfessorToMainPosition:
# 210 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 210 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 210 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 210 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 210 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 210 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 211 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 212 "data/maps/AcrisiaCity_University/scripts.pory"
	face_up
# 213 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 216 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_ProfessorTriesToFindDex_1:
# 218 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 219 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 220 "data/maps/AcrisiaCity_University/scripts.pory"
	face_left
# 221 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 221 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 221 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 222 "data/maps/AcrisiaCity_University/scripts.pory"
	emote_question_mark
# 223 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 224 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_up
# 225 "data/maps/AcrisiaCity_University/scripts.pory"
	face_right
# 226 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 226 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 227 "data/maps/AcrisiaCity_University/scripts.pory"
	emote_exclamation_mark
# 228 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 229 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_down
# 229 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_down
# 230 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 230 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 230 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 231 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_up
# 231 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_up
# 232 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 235 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_ProfessorTriesToFindDex_2:
# 237 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 237 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 237 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 238 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_right
# 238 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_right
# 239 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 239 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 239 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 240 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 240 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 240 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 241 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 241 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 242 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 242 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 243 "data/maps/AcrisiaCity_University/scripts.pory"
	face_down
# 244 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

AcrisiaCity_University_EventScript_Duskull::
# 251 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 252 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_Duskull_Text_0
# 253 "data/maps/AcrisiaCity_University/scripts.pory"
	playmoncry SPECIES_DUSKULL, CRY_MODE_NORMAL
# 254 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Duskull_Text_1
# 255 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmoncry
# 256 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 257 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end


AcrisiaCity_University_EventScript_Niko::
# 263 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 264 "data/maps/AcrisiaCity_University/scripts.pory"
	faceplayer
# 265 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 0
	goto_if_eq AcrisiaCity_University_EventScript_Niko_2
# 271 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 1
	goto_if_eq AcrisiaCity_University_EventScript_Niko_3
# 282 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 2
	goto_if_eq AcrisiaCity_University_EventScript_Niko_4
# 288 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 3
	goto_if_eq AcrisiaCity_University_EventScript_Niko_5
# 299 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 4
	goto_if_eq AcrisiaCity_University_EventScript_Niko_6
# 305 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 5
	goto_if_eq AcrisiaCity_University_EventScript_Niko_7
AcrisiaCity_University_EventScript_Niko_1:
# 311 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_Niko_2:
# 267 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 268 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_0
# 269 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_3:
# 273 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 274 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_1
# 275 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 276 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_NEST_BALL, 3
# 277 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 278 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_2
# 279 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 280 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_NIKO_STATE, 2
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_4:
# 284 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 285 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_3
# 286 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_5:
# 290 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 291 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_4
# 292 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 293 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_TIMER_BALL, 3
# 294 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 295 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_5
# 296 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 297 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_NIKO_STATE, 4
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_6:
# 301 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 302 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_6
# 303 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_7:
# 307 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 308 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_7
# 309 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Niko_1


AcrisiaCity_University_EventScript_Rania::
# 317 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 318 "data/maps/AcrisiaCity_University/scripts.pory"
	faceplayer
# 319 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 0
	goto_if_eq AcrisiaCity_University_EventScript_Rania_2
# 325 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 1
	goto_if_eq AcrisiaCity_University_EventScript_Rania_3
# 331 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 2
	goto_if_eq AcrisiaCity_University_EventScript_Rania_4
# 342 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 3
	goto_if_eq AcrisiaCity_University_EventScript_Rania_5
# 348 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 4
	goto_if_eq AcrisiaCity_University_EventScript_Rania_6
AcrisiaCity_University_EventScript_Rania_1:
# 354 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_Rania_2:
# 321 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 322 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_0
# 323 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_3:
# 327 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 328 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_1
# 329 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_4:
# 333 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 334 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_2
# 335 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 336 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_WISHING_STAR, 2
# 337 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 338 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_3
# 339 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 340 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_RANIA_STATE, 3
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_5:
# 344 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 345 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_4
# 346 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_6:
# 350 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 351 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_5
# 352 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Rania_1


AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Trigger1::
# 366 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_1, 1
# 367 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs
	return


AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Trigger2::
# 371 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_1, 2
# 372 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs
	return


AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Trigger3::
# 376 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_1, 3
# 377 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs
	return


AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Trigger4::
# 381 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_1, 4
# 382 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs
	return


AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs::
# 388 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 389 "data/maps/AcrisiaCity_University/scripts.pory"
	emote 3, EMOTE_EXCLAM
# 390 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 391 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 392 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 393 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_0
# 394 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 395 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_2
# 399 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_3
# 403 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_4
# 407 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_5
AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1:
# 411 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 413 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 414 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_1, MSGBOX_YESNO
# 415 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_11
# 427 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 428 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_4
# 429 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 430 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 431 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 30
# 432 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_GREAT_BALL, 3
# 433 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 434 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_5
# 435 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_10:
# 437 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 438 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 439 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 4
# 440 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_2:
# 397 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerGoesToNiko_1
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_3:
# 401 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerGoesToNiko_2
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_4:
# 405 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerGoesToNiko_3
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_5:
# 409 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerGoesToNiko_4
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_11:
# 417 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 418 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_2
# 419 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 420 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_POKE_BALL, 3
# 421 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 422 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_3
# 423 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_10


# 444 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerGoesToNiko_1:
# 446 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 446 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 447 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 447 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 447 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 447 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
	step_end

# 449 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerGoesToNiko_2:
# 451 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 451 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 452 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 452 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 452 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
	step_end

# 454 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerGoesToNiko_3:
# 456 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 456 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 457 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 457 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
	step_end

# 459 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerGoesToNiko_4:
# 461 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 461 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 462 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
	step_end

AcrisiaCity_University_CustomSettingsComputer::
# 467 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 468 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_CustomSettingsComputer_Text_0
# 469 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_CustomSettingsComputer_Text_1
# 470 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 473 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_DIFFICULTY, 0
	goto_if_eq AcrisiaCity_University_CustomSettingsComputer_2
# 479 "data/maps/AcrisiaCity_University/scripts.pory"
	bufferstring STR_VAR_1, AcrisiaCity_University_CustomSettingsComputer_Text_3
AcrisiaCity_University_CustomSettingsComputer_1:
# 481 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_CustomSettingsComputer_Text_0
# 482 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_CustomSettingsComputer_Text_4, MSGBOX_YESNO
# 483 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_University_CustomSettingsComputer_6
# 492 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_DIFFICULTY, 1
# 493 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_CustomSettingsComputer_Text_0
# 494 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_CustomSettingsComputer_Text_6
# 495 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
AcrisiaCity_University_CustomSettingsComputer_5:
# 499 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_set FLAG_VISIBLE_DAY_NIGHT_CYCLE, AcrisiaCity_University_CustomSettingsComputer_10
# 505 "data/maps/AcrisiaCity_University/scripts.pory"
	bufferstring STR_VAR_1, AcrisiaCity_University_CustomSettingsComputer_Text_8
AcrisiaCity_University_CustomSettingsComputer_9:
# 507 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_CustomSettingsComputer_Text_0
# 508 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_CustomSettingsComputer_Text_9, MSGBOX_YESNO
# 509 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_University_CustomSettingsComputer_14
# 518 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_VISIBLE_DAY_NIGHT_CYCLE
# 519 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_CustomSettingsComputer_Text_0
# 520 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_CustomSettingsComputer_Text_11
# 521 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
AcrisiaCity_University_CustomSettingsComputer_13:
# 524 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_CustomSettingsComputer_Text_0
# 525 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_CustomSettingsComputer_Text_12
# 526 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 527 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_CustomSettingsComputer_2:
# 475 "data/maps/AcrisiaCity_University/scripts.pory"
	bufferstring STR_VAR_1, AcrisiaCity_University_CustomSettingsComputer_Text_2
	goto AcrisiaCity_University_CustomSettingsComputer_1

AcrisiaCity_University_CustomSettingsComputer_6:
# 485 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_DIFFICULTY, 0
# 486 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_CustomSettingsComputer_Text_0
# 487 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_CustomSettingsComputer_Text_5
# 488 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_CustomSettingsComputer_5

AcrisiaCity_University_CustomSettingsComputer_10:
# 501 "data/maps/AcrisiaCity_University/scripts.pory"
	bufferstring STR_VAR_1, AcrisiaCity_University_CustomSettingsComputer_Text_7
	goto AcrisiaCity_University_CustomSettingsComputer_9

AcrisiaCity_University_CustomSettingsComputer_14:
# 511 "data/maps/AcrisiaCity_University/scripts.pory"
	clearflag FLAG_VISIBLE_DAY_NIGHT_CYCLE
# 512 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_CustomSettingsComputer_Text_0
# 513 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_CustomSettingsComputer_Text_10
# 514 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_CustomSettingsComputer_13


AcrisiaCity_EventScript_ProfessorElia::
# 537 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 538 "data/maps/AcrisiaCity_University/scripts.pory"
	faceplayer
# 540 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 2
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_2
# 544 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 3
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_3
# 544 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 4
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_3
# 548 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 5
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_4
# 557 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaRatePokedex
AcrisiaCity_EventScript_ProfessorElia_1:
# 560 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_EventScript_ProfessorElia_2:
# 542 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck
	goto AcrisiaCity_EventScript_ProfessorElia_1

AcrisiaCity_EventScript_ProfessorElia_3:
# 546 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaCheckBadgeOne
	goto AcrisiaCity_EventScript_ProfessorElia_1

AcrisiaCity_EventScript_ProfessorElia_4:
# 550 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaCheckBadgeTwo
	goto AcrisiaCity_EventScript_ProfessorElia_1


AcrisiaCity_University_EventScript_EliaRatePokedex::
# 572 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 573 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_0, MSGBOX_YESNO
# 574 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_University_EventScript_EliaRatePokedex_2
# 583 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_0x8004, 0
# 584 "data/maps/AcrisiaCity_University/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 585 "data/maps/AcrisiaCity_University/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 586 "data/maps/AcrisiaCity_University/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 587 "data/maps/AcrisiaCity_University/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 588 "data/maps/AcrisiaCity_University/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 589 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 590 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_2
# 593 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 10
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_6
AcrisiaCity_University_EventScript_EliaRatePokedex_4:
# 604 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 20
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_12
AcrisiaCity_University_EventScript_EliaRatePokedex_11:
# 621 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 622 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_7
# 623 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
AcrisiaCity_University_EventScript_EliaRatePokedex_9:
# 626 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 627 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaRatePokedex_2:
# 576 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 577 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_1
# 578 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 579 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaRatePokedex_5:
# 595 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_01
# 596 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 597 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_3
# 598 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 599 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_NUGGET
# 600 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 601 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_4
# 602 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_4

AcrisiaCity_University_EventScript_EliaRatePokedex_6:
# 593 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_01, AcrisiaCity_University_EventScript_EliaRatePokedex_5
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_4

AcrisiaCity_University_EventScript_EliaRatePokedex_10:
# 606 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_02
# 607 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 608 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_5
# 609 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 610 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_LOADED_DICE
# 611 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 612 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_6
# 613 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_9

AcrisiaCity_University_EventScript_EliaRatePokedex_12:
# 604 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_02, AcrisiaCity_University_EventScript_EliaRatePokedex_10
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_11


AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck::
# 633 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 634 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_0, MSGBOX_YESNO
# 635 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_2
# 642 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_set FLAG_FOUND_LOST_DELIVERY, AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_5
# 681 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_7
# 682 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_1:
# 685 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_2:
# 637 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_1
# 638 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_1

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_5:
# 644 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_2
# 645 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 646 "data/maps/AcrisiaCity_University/scripts.pory"
	removeitem ITEM_PARCEL
# 647 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 648 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 649 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 650 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 651 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 652 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 653 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 654 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 655 "data/maps/AcrisiaCity_University/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 656 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_3
# 657 "data/maps/AcrisiaCity_University/scripts.pory"
	waitfanfare
# 658 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 659 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 660 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 661 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 662 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 663 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_4
# 664 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 665 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 666 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_EXP_SHARE_ENABLED
# 667 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 668 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 669 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_5
# 670 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 671 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 672 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_6
# 673 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 676 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 3
# 677 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_HIDE_RANIA_JUSMAIL
	goto AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_1


AcrisiaCity_University_EventScript_EliaCheckBadgeOne::
# 691 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 692 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_0
# 693 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 694 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, AcrisiaCity_University_EventScript_EliaCheckBadgeOne_2
# 702 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 703 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_2
# 704 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 705 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
# 706 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 707 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_3
# 708 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 709 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 5
# 710 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_HIDE_RANIA_JUSMAIL
# 711 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNLOCKED_ACRISIA_MTNS
AcrisiaCity_University_EventScript_EliaCheckBadgeOne_1:
# 713 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_2:
# 696 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 697 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_1
# 698 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaCheckBadgeOne_1


AcrisiaCity_University_EventScript_EliaCheckBadgeTwo::
# 719 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 720 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_0
# 721 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 722 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_2
# 734 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 735 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_2
# 736 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 737 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 738 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 739 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_3
# 740 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 741 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 742 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 743 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 744 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 745 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 746 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 747 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 748 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 749 "data/maps/AcrisiaCity_University/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 750 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_4
# 751 "data/maps/AcrisiaCity_University/scripts.pory"
	waitfanfare
# 752 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 753 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 754 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 755 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_5
# 756 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 757 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 758 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_6
# 759 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 761 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 6
AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_1:
# 763 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_2:
# 724 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 725 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_1
# 726 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_1


AcrisiaCity_University_EventScript_PlayerIntro_Text_0:
# 19 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Prof. Elia$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_1:
# 20 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Welcome to the Acrisia University! Well,\n"
	.string "one of many campus locations, but still!\p"
	.string "Come, let me introduce you to everyone.$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_2:
# 28 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Now this here is-$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_3:
# 33 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "???$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_4:
# 34 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "WOAH WOAH WOAH!$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_5:
# 39 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Come on, Professor! You know sudden\n"
	.string "movements can scare Duskull!$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_6:
# 42 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Oof, sorry Niko...$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_7:
# 48 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "As I was saying, this is Niko. He's a bit\n"
	.string "protective of his work, but he's a great\l"
	.string "resource for knowledge.$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_8:
# 56 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Niko$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_9:
# 57 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Sorry about the fuss, but when Duskull\n"
	.string "gets scared, it starts floating through\l"
	.string "walls and knocking over the books!\p"
	.string "I study how Pokémon behave in\n"
	.string "captivity. I'm learning a lot about Poké\l"
	.string "balls and how to care for captive\l"
	.string "Pokémon.\p"
	.string "If you have any questions about Poké\n"
	.string "balls, let me know.$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_10:
# 67 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "This section of the building is for\n"
	.string "Rania! Here, I'll let her tell you what\l"
	.string "she does.$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_11:
# 71 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Rania$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_12:
# 72 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Chaire (Hyeh-rei)! That's how we say\n"
	.string "'Hello' here! I'm Rania, and you must be...\l"
	.string "the new field assistant, {PLAYER}!\p"
	.string "I study the movement of Pokémon\n"
	.string "populations across the Ilios Region.\l"
	.string "Part of your fieldwork is collecting\l"
	.string "Pokémon location data, and I'm the one\l"
	.string "who goes through it all and finds\l"
	.string "trends!\p"
	.string "I'd love to keep chatting, but I've got\n"
	.string "a deadline to meet. Nice to meet you!$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_13:
# 84 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "And here's my area of the building!\n"
	.string "Other students come in and out over\l"
	.string "time, but they're mostly out doing\l"
	.string "fieldwork. Speaking of which...$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_14:
# 99 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Ehehe... so, it looks like I don't quite\n"
	.string "have an extra Pokédex on hand. I\l"
	.string "ordered a new set of lab equipment\l"
	.string "which included a new one, but it seems\l"
	.string "like that hasn't come yet...$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_15:
# 105 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER}! Oh, I've had the most fun\n"
	.string "idea! How about you go {COLOR GREEN}find the lost\l"
	.string "delivery{COLOR DARK_GRAY} and help them out?\p"
	.string "I've got a few rare Pokémon in my\n"
	.string "briefcase here. Why don't you choose\l"
	.string "one to adventure with you?$"

AcrisiaCity_University_EventScript_ChoosePokemon_Text_0:
# 125 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER} received a {STR_VAR_1}!$"

AcrisiaCity_University_EventScript_ChoosePokemon_Text_1:
# 130 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Ah, {STR_VAR_1}! That Pokémon suits\n"
	.string "you. Now, for the task at hand: the {COLOR GREEN}lost\l"
	.string "delivery{COLOR DARK_GRAY} should be {COLOR GREEN}South{COLOR DARK_GRAY} of Acrisia\l"
	.string "City. Usually, the mover that brings our\l"
	.string "shipments here stops to rest their\l"
	.string "Pokémon in the woods. Why don't you\l"
	.string "check there?$"

AcrisiaCity_University_EventScript_Duskull_Text_0:
# 252 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Duskull$"

AcrisiaCity_University_EventScript_Duskull_Text_1:
# 254 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Bwraaahhh!$"

AcrisiaCity_University_EventScript_Niko_Text_0:
# 268 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Come to check out my research,\n"
	.string "{PLAYER}? I'm observing the Duskull\l"
	.string "to see how it behaves.\p"
	.string "There are old folktales of Ghost-type\n"
	.string "Pokémon being evil, but this Duskull\l"
	.string "seems totally friendly!$"

AcrisiaCity_University_EventScript_Niko_Text_1:
# 274 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Chaire, bud! I hear you beat Rania in\n"
	.string "Jusmail Town. After all the braggin' she\l"
	.string "did about her team, fwahaha!\p"
	.string "Ahem, hm. Getting the Harvest Badge is a\n"
	.string "big step for trainers in Ilios! Rania and\l"
	.string "I are thinking about doing it ourselves.\l"
	.string "Here's a little congratulatory gift from\l"
	.string "me!$"

AcrisiaCity_University_EventScript_Niko_Text_2:
# 278 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Those Nest Balls are good for catching\n"
	.string "young, weak Pokémon. My studies say the\l"
	.string "inside of Nest Balls remind Pokémon of\l"
	.string "their home. Isn't that cute?\p"
	.string "{COLOR GREEN}Check back in{COLOR DARK_GRAY} as you {COLOR GREEN}defeat Pokémon\n"
	.string "Gyms{COLOR DARK_GRAY}, and I'll give you little gifts and\l"
	.string "tips.$"

AcrisiaCity_University_EventScript_Niko_Text_3:
# 285 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Give those Nest Balls a shot! They work\n"
	.string "best with low-level Pokémon.\p"
	.string "{COLOR GREEN}Check back in{COLOR DARK_GRAY} as you {COLOR GREEN}defeat Pokémon\n"
	.string "Gyms{COLOR DARK_GRAY}, and I'll give you little gifts and\l"
	.string "tips.$"

AcrisiaCity_University_EventScript_Niko_Text_4:
# 291 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Ehehe, looks like I beat you to\n"
	.string "Mattaios! We're all starting to be\l"
	.string "pretty strong trainers, huh?\p"
	.string "Ah, I worked on a new Poké Ball type.\n"
	.string "Give it a test for me!$"

AcrisiaCity_University_EventScript_Niko_Text_5:
# 295 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Those Timer Balls work better when a\n"
	.string "battle begins to drag on. Hopefully\l"
	.string "they help... help you catch up to me!\l"
	.string "Fwahaha!$"

AcrisiaCity_University_EventScript_Niko_Text_6:
# 302 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER}! I'm back here to study this\n"
	.string "little Duskull. In case you can't tell, I\l"
	.string "really like Ghost-type Pokémon.$"

AcrisiaCity_University_EventScript_Niko_Text_7:
# 308 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Welcome back, {PLAYER}. I hope that\n"
	.string "run-in with Team Chimera didn't rattle\l"
	.string "you too bad.\p"
	.string "The Ilios Region is mostly peaceful, but\n"
	.string "just like anywhere else, there are some\l"
	.string "people willing to do anything to gain\l"
	.string "power.$"

AcrisiaCity_University_EventScript_Rania_Text_0:
# 322 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Chaire, {PLAYER}! You doin' well?\p"
	.string "I help out with Pokédex data analysis.\n"
	.string "Now that you're here, there's gonna be a\l"
	.string "lot more data. Come {COLOR GREEN}speak with me{COLOR DARK_GRAY} as you\l"
	.string "{COLOR GREEN}defeat Pokémon Gyms{COLOR DARK_GRAY}, I'll give you some\l"
	.string "helpful tips and items!$"

AcrisiaCity_University_EventScript_Rania_Text_1:
# 328 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Here comes {PLAYER}, the new Champ!\n"
	.string "...Ehehe, just kidding! My Pokémon are\l"
	.string "still calming down from that battle in\l"
	.string "Jusmail Town, what a fight!$"

AcrisiaCity_University_EventScript_Rania_Text_2:
# 334 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "No way, you got the Gemstone Badge?! I\n"
	.string "haven't even gotten to the Acrisia\l"
	.string "Caverns yet!\p"
	.string "Yamas! Cheers! We have to celebrate\n"
	.string "your success somehow! I'll give you\l"
	.string "this, as a start.$"

AcrisiaCity_University_EventScript_Rania_Text_3:
# 338 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Those Wishing Stars can be used at the\n"
	.string "Wishing Well in Jusmail Town. Old myths\l"
	.string "say that worthy trainers may earn\l"
	.string "something from it.\p"
	.string "Speaking of Jusmail Town, you should be\n"
	.string "able to get rid of those {COLOR GREEN}rocks blocking\l"
	.string "the path south{COLOR DARK_GRAY}! I'll be seeing you out\l"
	.string "there, {PLAYER}!$"

AcrisiaCity_University_EventScript_Rania_Text_4:
# 345 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Chaire! I come back here to heal my\n"
	.string "Pokémon and put my new Pokédex data\l"
	.string "into the computers. Don't you worry, I'll\l"
	.string "be back out soon! Get ready for some\l"
	.string "battles!$"

AcrisiaCity_University_EventScript_Rania_Text_5:
# 351 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Come back to cool off too, {PLAYER}?\n"
	.string "That fight with Team Chimera sure was\l"
	.string "something. I wonder why they're\l"
	.string "collecting Pokémon...$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_0:
# 393 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Hold up, come here {PLAYER}!$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_1:
# 414 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You remember me, right? R-right? I'm the\n"
	.string "one who works with captive Pokémon!$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_2:
# 418 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "No? Some research partner you are.\p"
	.string "I was gonna give you some good Poké\n"
	.string "balls, but now you're just getting\l"
	.string "these.$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_3:
# 422 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "A little disappointing, huh? Just like\n"
	.string "being forgotten about! Well, now we're\l"
	.string "even.\p"
	.string "Come back to the University as you\n"
	.string "catch more Pokémon. Rania and I can get\l"
	.string "you some neat stuff... if you remember\l"
	.string "me, that is.$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_4:
# 428 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Ehehe, I knew you were a real friend!\p"
	.string "I'm only supposed to give you a few\n"
	.string "Poké balls, but you made my day, so I'll\l"
	.string "make yours!$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_5:
# 434 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Use those Great Balls on Pokémon giving\n"
	.string "you a hard time! They work like a charm.\p"
	.string "Come back to the University as you fill\n"
	.string "up the Pokédex! Rania and I might have\l"
	.string "some new gear for you to try out.$"

AcrisiaCity_University_CustomSettingsComputer_Text_0:
# 468 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Computer$"

AcrisiaCity_University_CustomSettingsComputer_Text_1:
# 469 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Welcome to the Pokémon Lazarus\n"
	.string "Settings Menu!$"

AcrisiaCity_University_CustomSettingsComputer_Text_2:
# 475 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "NORMAL$"

AcrisiaCity_University_CustomSettingsComputer_Text_3:
# 479 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "HARD$"

AcrisiaCity_University_CustomSettingsComputer_Text_4:
# 482 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{COLOR GREEN}DIFFICULTY OPTION{COLOR DARK_GRAY}\n"
	.string "Should {COLOR RED}HARD MODE{COLOR DARK_GRAY} be enabled? This\l"
	.string "increases opponent Pokémon levels\l"
	.string "steadily across the game, adds {COLOR RED}strict\l"
	.string "Level Caps{COLOR DARK_GRAY}, and {COLOR RED}gives Gym Leaders more\l"
	.string "difficult teams{COLOR DARK_GRAY}.\p"
	.string "The current difficulty is\n"
	.string "{STR_VAR_1}. Should {COLOR RED}HARD MODE{COLOR DARK_GRAY} be\l"
	.string "enabled?$"

AcrisiaCity_University_CustomSettingsComputer_Text_5:
# 487 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "The game has been set to {COLOR GREEN}NORMAL\n"
	.string "DIFFICULTY{COLOR DARK_GRAY}.$"

AcrisiaCity_University_CustomSettingsComputer_Text_6:
# 494 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "The game has been set to {COLOR RED}HARD\n"
	.string "DIFFICULTY{COLOR DARK_GRAY}.$"

AcrisiaCity_University_CustomSettingsComputer_Text_7:
# 501 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "VISIBLE$"

AcrisiaCity_University_CustomSettingsComputer_Text_8:
# 505 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "INVISIBLE$"

AcrisiaCity_University_CustomSettingsComputer_Text_9:
# 508 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{COLOR GREEN}TIME OF DAY TINT{COLOR DARK_GRAY}\n"
	.string "Should {COLOR GREEN}Nighttime Tint{COLOR DARK_GRAY} be enabled? When\l"
	.string "enabled, the in-game time of day\l"
	.string "influences how the game looks.\p"
	.string "The current setting is {STR_VAR_1}.\n"
	.string "Should {COLOR GREEN}NIGHTTIME TINT{COLOR DARK_GRAY} be enabled?$"

AcrisiaCity_University_CustomSettingsComputer_Text_10:
# 513 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "The {COLOR GREEN}Time of Day Tint{COLOR DARK_GRAY} has been {COLOR RED}disabled{COLOR DARK_GRAY}.\n"
	.string "The game will always be at full\l"
	.string "brightness.$"

AcrisiaCity_University_CustomSettingsComputer_Text_11:
# 520 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "The {COLOR GREEN}Time of Day Tint{COLOR DARK_GRAY} has been {COLOR GREEN}enabled{COLOR DARK_GRAY}.\n"
	.string "The time of day will be visible in the\l"
	.string "overworld.$"

AcrisiaCity_University_CustomSettingsComputer_Text_12:
# 525 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "All settings have been set. Enjoy your\n"
	.string "time in the Ilios Region!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_0:
# 573 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Chaire, {PLAYER}! How's your research\n"
	.string "going? I can check your Pokédex\l"
	.string "progress!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_1:
# 577 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "No? That's okay, go out there and\n"
	.string "gather some more data! I may have\l"
	.string "{COLOR GREEN}rewards{COLOR DARK_GRAY} for you next time.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_2:
# 590 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've seen {STR_VAR_1} Pokémon,\n"
	.string "and caught {STR_VAR_2} Pokémon!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_3:
# 597 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured more than 10 unique\n"
	.string "Pokémon! You're certainly capable,\l"
	.string "{PLAYER}. Here's your first progress\l"
	.string "reward!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_4:
# 601 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "That Nugget can be sold for a pretty\n"
	.string "penny! It should help fund your\l"
	.string "studies. As you catch more Pokémon, I'll\l"
	.string "have more for you.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_5:
# 608 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured more than 20 unique\n"
	.string "Pokémon! Great job, {PLAYER}! Here's a\l"
	.string "nice new item.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_6:
# 612 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Pokémon holding the Loaded Dice will be\n"
	.string "able to land multi-hit attacks more\l"
	.string "times in a row! As you catch more\l"
	.string "Pokémon, I'll have more for you.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_7:
# 622 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Hmm, it doesn't look like I have any more\n"
	.string "rewards for you at the moment. Get back\l"
	.string "out there and find some new Pokémon!$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_0:
# 634 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Welcome back, {PLAYER}! Did you find\n"
	.string "that {COLOR GREEN}lost delivery{COLOR DARK_GRAY} yet?$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_1:
# 637 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Hmm, that's concerning... local crime\n"
	.string "groups have been active lately, I'm\l"
	.string "nervous that the delivery cart was\l"
	.string "attacked. Keep us updated on the\l"
	.string "situation.$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_2:
# 644 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Aie! The delivery cart was attacked!?\n"
	.string "Well I'm glad everyone is okay...\p"
	.string "Here, I'll enable your Pokédex.$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_3:
# 656 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER}'s {COLOR GREEN}Pokédex{COLOR DARK_GRAY} was enabled!$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_4:
# 663 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Ah, speaking of electronics, here's an\n"
	.string "{COLOR GREEN}EXP. Share{COLOR DARK_GRAY} to help raise your Pokémon\l"
	.string "faster. I'll give you a Town Map, too.$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_5:
# 669 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "I think it's a good idea to train your\n"
	.string "Pokémon for battle, in case more\l"
	.string "troublemakers come around. Why don't\l"
	.string "you {COLOR GREEN}battle the Pokémon Gyms{COLOR DARK_GRAY} you find\l"
	.string "while you're exploring the Ilios Region?\l"
	.string "That'll get your Pokémon raring to go!$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_6:
# 672 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "The {COLOR GREEN}first Gym{COLOR DARK_GRAY} is south of here, in\n"
	.string "{COLOR GREEN}Jusmail Town{COLOR DARK_GRAY}. Come back to me with the\l"
	.string "{COLOR GREEN}first Gym Badge{COLOR DARK_GRAY} to show me your skill as\l"
	.string "a trainer!$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_7:
# 681 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You did? Well where's the Pokédex?\n"
	.string "...Come on {PLAYER}, we need to make\l"
	.string "sure the delivery folks are alright! Go\l"
	.string "look again!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_0:
# 692 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Chaire, welcome back {PLAYER}! Have\n"
	.string "you made it to the {COLOR GREEN}Jusmail Town Gym{COLOR DARK_GRAY}\l"
	.string "yet?$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_1:
# 697 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Still training, eh? No rush, no rush!\p"
	.string "Come back to the University and check\n"
	.string "in with me when you have your first Gym\l"
	.string "Badge.$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_2:
# 703 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Well done! You're well on your way to\n"
	.string "being a great trainer.\p"
	.string "Here, I wanted to give you something to\n"
	.string "celebrate!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_3:
# 707 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "That's an Ability Capsule. It can change\n"
	.string "the Ability of a Pokémon, which can make\l"
	.string "it totally different in battle!\p"
	.string "Look, I know I've been sending you back\n"
	.string "and forth a bunch, but I think I've got\l"
	.string "a good idea. You should head {COLOR GREEN}west{COLOR DARK_GRAY} from\l"
	.string "here, up into the {COLOR GREEN}Acrisia Mountains{COLOR DARK_GRAY} for\l"
	.string "extra training.\p"
	.string "After your training, or if you just feel\n"
	.string "ready, you can {COLOR GREEN}cross the rail bridge{COLOR DARK_GRAY}\l"
	.string "over Acrisia City to the east towards\l"
	.string "{COLOR GREEN}Kalami City{COLOR DARK_GRAY}. Your next Gym Badge will be\l"
	.string "there. Be sure to come back to Acrisia\l"
	.string "City after your fight!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_0:
# 720 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER}, welcome, welcome! Have you\n"
	.string "crossed the rail bridge and explored\l"
	.string "east to {COLOR GREEN}Kalami City{COLOR DARK_GRAY} yet? Your next Gym\l"
	.string "Badge is there!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_1:
# 725 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Not yet, hm? That's fine, the swamps to\n"
	.string "the east are a tough area. Remember,\l"
	.string "you can always do some extra training\l"
	.string "in the Acrisia Mountains to the west!\p"
	.string "Come back and check in with me when you\n"
	.string "have your second Gym Badge. I've got\l"
	.string "another gift for you!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_2:
# 735 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Incredible! You're becoming a great\n"
	.string "Pokémon trainer. As promised, here's\l"
	.string "something exciting for you!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_3:
# 739 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Oh right, another thing! I ordered an\n"
	.string "upgrade for your Pokédex.$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_4:
# 750 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER} can use the {COLOR GREEN}DexNav{COLOR DARK_GRAY}!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_5:
# 755 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "It came with directions! It says to\n"
	.string "select a Pokémon from the {COLOR GREEN}DexNav menu{COLOR DARK_GRAY}\l"
	.string "to try and find it, then {COLOR GREEN}hold the A\l"
	.string "Button{COLOR DARK_GRAY} to {COLOR GREEN}creep up on the Pokémon{COLOR DARK_GRAY}! If\l"
	.string "you move too fast, the Pokémon will {COLOR RED}run\l"
	.string "away{COLOR DARK_GRAY}. Seems useful!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_6:
# 758 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "As you grow stronger, you'll be able to\n"
	.string "adventure further to find new Pokémon.\l"
	.string "This'll be great for our studies!\p"
	.string "I believe you're ready to conduct your\n"
	.string "{COLOR GREEN}independent research{COLOR DARK_GRAY} and {COLOR GREEN}explore Ilios{COLOR DARK_GRAY}.\l"
	.string "With Rock Smash, you should be able to\l"
	.string "continue {COLOR GREEN}south to Pythios Town{COLOR DARK_GRAY}.\p"
	.string "Remember to stop back here sometimes!\n"
	.string "I can check your Pokédex progress and\l"
	.string "give you rewards for your research, and\l"
	.string "your fellow University students here\l"
	.string "will be researching right alongside you.\l"
	.string "Good luck, {PLAYER}!$"

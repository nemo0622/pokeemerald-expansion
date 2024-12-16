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
# 139 "data/maps/AcrisiaCity_University/scripts.pory"
	warpsilent MAP_ACRISIA_CITY_UNIVERSITY, 6, 12
# 140 "data/maps/AcrisiaCity_University/scripts.pory"
	waitstate
# 146 "data/maps/AcrisiaCity_University/scripts.pory"
	releaseall
	end


# 150 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_NikoStopsPlayer:
# 152 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_left
# 152 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_left
# 153 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_left
# 153 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_left
# 154 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 155 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 158 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_NikoReturnToStation:
# 160 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 160 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 161 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 162 "data/maps/AcrisiaCity_University/scripts.pory"
	face_up
# 163 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 166 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_ProfessorUp:
# 168 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 168 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 168 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 168 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 168 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 169 "data/maps/AcrisiaCity_University/scripts.pory"
	face_right
# 170 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 173 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerFollowProfessorUp:
# 175 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 175 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 175 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 175 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 175 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 176 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 177 "data/maps/AcrisiaCity_University/scripts.pory"
	face_up
# 178 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 181 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_RaniaGreetsPlayer:
# 183 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 184 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 184 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 184 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 185 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 185 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 186 "data/maps/AcrisiaCity_University/scripts.pory"
	face_down
# 187 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 190 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_RaniaReturnsToStation:
# 192 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 192 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 193 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 193 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 193 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 194 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 195 "data/maps/AcrisiaCity_University/scripts.pory"
	face_left
# 196 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 199 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_ProfessorToMainPosition:
# 201 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 201 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 201 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 201 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 201 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 202 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 202 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 203 "data/maps/AcrisiaCity_University/scripts.pory"
	face_down
# 204 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 207 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerFollowProfessorToMainPosition:
# 209 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 209 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 209 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 209 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 209 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 209 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 210 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 211 "data/maps/AcrisiaCity_University/scripts.pory"
	face_up
# 212 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 215 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_ProfessorTriesToFindDex_1:
# 217 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 218 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 219 "data/maps/AcrisiaCity_University/scripts.pory"
	face_left
# 220 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 220 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 220 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 221 "data/maps/AcrisiaCity_University/scripts.pory"
	emote_question_mark
# 222 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 223 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_up
# 224 "data/maps/AcrisiaCity_University/scripts.pory"
	face_right
# 225 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 225 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 226 "data/maps/AcrisiaCity_University/scripts.pory"
	emote_exclamation_mark
# 227 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 228 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_down
# 228 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_down
# 229 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 229 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 229 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 230 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_up
# 230 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_up
# 231 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 234 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_ProfessorTriesToFindDex_2:
# 236 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 236 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 236 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 237 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_right
# 237 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_right
# 238 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 238 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 238 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 239 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 239 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 239 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 240 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 240 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 241 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 241 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 242 "data/maps/AcrisiaCity_University/scripts.pory"
	face_down
# 243 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

AcrisiaCity_University_EventScript_Duskull::
# 250 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 251 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_Duskull_Text_0
# 252 "data/maps/AcrisiaCity_University/scripts.pory"
	playmoncry SPECIES_DUSKULL, CRY_MODE_NORMAL
# 253 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Duskull_Text_1
# 254 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmoncry
# 255 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 256 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end


AcrisiaCity_University_EventScript_Niko::
# 262 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 263 "data/maps/AcrisiaCity_University/scripts.pory"
	faceplayer
# 264 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 0
	goto_if_eq AcrisiaCity_University_EventScript_Niko_2
# 270 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 1
	goto_if_eq AcrisiaCity_University_EventScript_Niko_3
# 281 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 2
	goto_if_eq AcrisiaCity_University_EventScript_Niko_4
# 287 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 3
	goto_if_eq AcrisiaCity_University_EventScript_Niko_5
# 298 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 4
	goto_if_eq AcrisiaCity_University_EventScript_Niko_6
AcrisiaCity_University_EventScript_Niko_1:
# 304 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_Niko_2:
# 266 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 267 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_0
# 268 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_3:
# 272 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 273 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_1
# 274 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 275 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_NEST_BALL, 3
# 276 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 277 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_2
# 278 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 279 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_NIKO_STATE, 2
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_4:
# 283 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 284 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_3
# 285 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_5:
# 289 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 290 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_4
# 291 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 292 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_TIMER_BALL, 3
# 293 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 294 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_5
# 295 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 296 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_NIKO_STATE, 4
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_6:
# 300 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 301 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_6
# 302 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Niko_1


AcrisiaCity_University_EventScript_Rania::
# 310 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 311 "data/maps/AcrisiaCity_University/scripts.pory"
	faceplayer
# 312 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 0
	goto_if_eq AcrisiaCity_University_EventScript_Rania_2
# 318 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 1
	goto_if_eq AcrisiaCity_University_EventScript_Rania_3
# 324 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 2
	goto_if_eq AcrisiaCity_University_EventScript_Rania_4
# 335 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 3
	goto_if_eq AcrisiaCity_University_EventScript_Rania_5
AcrisiaCity_University_EventScript_Rania_1:
# 341 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_Rania_2:
# 314 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 315 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_0
# 316 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_3:
# 320 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 321 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_1
# 322 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_4:
# 326 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 327 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_2
# 328 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 329 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_WISHING_STAR, 2
# 330 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 331 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_3
# 332 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 333 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_RANIA_STATE, 3
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_5:
# 337 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 338 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_4
# 339 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Rania_1


AcrisiaCity_University_EventScript_RaniaShowsHealspot::
# 355 "data/maps/AcrisiaCity_University/scripts.pory"
	lockall
# 356 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 4, AcrisiaCity_University_Movement_RaniaJumps
# 357 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 358 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 4, AcrisiaCity_University_Movement_RaniaShowsHealing
# 359 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 360 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 361 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 363 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 364 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_RaniaShowsHealspot_Text_0
# 365 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 366 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 367 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 368 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 369 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_RaniaShowsHealspot_Text_1
# 370 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 371 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 372 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 373 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 374 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_RaniaShowsHealspot_Text_2
# 375 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 376 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 4, AcrisiaCity_University_Movement_RaniaDoneShowingHealing
# 377 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 378 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_SHOWN_ACRISIA_HEALSPOT
# 379 "data/maps/AcrisiaCity_University/scripts.pory"
	releaseall
	end


# 383 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_RaniaJumps:
# 385 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_left
# 385 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_left
# 386 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 389 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_RaniaShowsHealing:
# 391 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 392 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 392 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 393 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 393 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 393 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 393 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 394 "data/maps/AcrisiaCity_University/scripts.pory"
	face_down
# 395 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 398 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_RaniaDoneShowingHealing:
# 400 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 400 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 400 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 400 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 401 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 401 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 402 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 403 "data/maps/AcrisiaCity_University/scripts.pory"
	face_left
# 404 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Trigger1::
# 409 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_1, 1
# 410 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs
	return


AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Trigger2::
# 414 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_1, 2
# 415 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs
	return


AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Trigger3::
# 419 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_1, 3
# 420 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs
	return


AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Trigger4::
# 424 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_1, 4
# 425 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs
	return


AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs::
# 431 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 432 "data/maps/AcrisiaCity_University/scripts.pory"
	emote 3, EMOTE_EXCLAM
# 433 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 434 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 435 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 436 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_0
# 437 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 438 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_2
# 442 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_3
# 446 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_4
# 450 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_5
AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1:
# 454 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 456 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 457 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_1, MSGBOX_YESNO
# 458 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_11
# 470 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 471 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_4
# 472 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 473 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 474 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 30
# 475 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_GREAT_BALL, 3
# 476 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 477 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_5
# 478 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_10:
# 480 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 481 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 482 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 4
# 483 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_2:
# 440 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerGoesToNiko_1
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_3:
# 444 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerGoesToNiko_2
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_4:
# 448 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerGoesToNiko_3
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_5:
# 452 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerGoesToNiko_4
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_11:
# 460 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 461 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_2
# 462 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 463 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_POKE_BALL, 3
# 464 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 465 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_3
# 466 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_10


# 487 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerGoesToNiko_1:
# 489 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 489 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 490 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 490 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 490 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 490 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
	step_end

# 492 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerGoesToNiko_2:
# 494 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 494 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 495 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 495 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 495 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
	step_end

# 497 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerGoesToNiko_3:
# 499 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 499 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 500 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 500 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
	step_end

# 502 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerGoesToNiko_4:
# 504 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 504 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 505 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
	step_end

AcrisiaCity_University_HealParty::
# 510 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 511 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_HealParty_Text_0
# 512 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_HealParty_Text_1
# 513 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 514 "data/maps/AcrisiaCity_University/scripts.pory"
	playfanfare MUS_HEAL
# 515 "data/maps/AcrisiaCity_University/scripts.pory"
	special HealPlayerParty
# 516 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 120
# 517 "data/maps/AcrisiaCity_University/scripts.pory"
	waitfanfare
# 518 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_HealParty_Text_0
# 519 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_HealParty_Text_2
# 520 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 521 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end


AcrisiaCity_University_CustomSettingsComputer::
# 527 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 528 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_HealParty_Text_0
# 529 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_CustomSettingsComputer_Text_0
# 530 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 533 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_DIFFICULTY, 0
	goto_if_eq AcrisiaCity_University_CustomSettingsComputer_2
# 539 "data/maps/AcrisiaCity_University/scripts.pory"
	bufferstring STR_VAR_1, AcrisiaCity_University_CustomSettingsComputer_Text_2
AcrisiaCity_University_CustomSettingsComputer_1:
# 541 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_HealParty_Text_0
# 542 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_CustomSettingsComputer_Text_3, MSGBOX_YESNO
# 543 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_University_CustomSettingsComputer_6
# 552 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_DIFFICULTY, 1
# 553 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_HealParty_Text_0
# 554 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_CustomSettingsComputer_Text_5
# 555 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
AcrisiaCity_University_CustomSettingsComputer_5:
# 558 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_HealParty_Text_0
# 559 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_CustomSettingsComputer_Text_6
# 560 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 561 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_CustomSettingsComputer_2:
# 535 "data/maps/AcrisiaCity_University/scripts.pory"
	bufferstring STR_VAR_1, AcrisiaCity_University_CustomSettingsComputer_Text_1
	goto AcrisiaCity_University_CustomSettingsComputer_1

AcrisiaCity_University_CustomSettingsComputer_6:
# 545 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_DIFFICULTY, 0
# 546 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_HealParty_Text_0
# 547 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_CustomSettingsComputer_Text_4
# 548 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_CustomSettingsComputer_5


AcrisiaCity_EventScript_ProfessorElia::
# 571 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 572 "data/maps/AcrisiaCity_University/scripts.pory"
	faceplayer
# 574 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 2
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_2
# 578 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 3
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_3
# 578 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 4
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_3
# 582 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 5
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_4
# 591 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaRatePokedex
AcrisiaCity_EventScript_ProfessorElia_1:
# 594 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_EventScript_ProfessorElia_2:
# 576 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck
	goto AcrisiaCity_EventScript_ProfessorElia_1

AcrisiaCity_EventScript_ProfessorElia_3:
# 580 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaCheckBadgeOne
	goto AcrisiaCity_EventScript_ProfessorElia_1

AcrisiaCity_EventScript_ProfessorElia_4:
# 584 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaCheckBadgeTwo
	goto AcrisiaCity_EventScript_ProfessorElia_1


AcrisiaCity_University_EventScript_EliaRatePokedex::
# 606 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 607 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_0, MSGBOX_YESNO
# 608 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_University_EventScript_EliaRatePokedex_2
# 617 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_0x8004, 0
# 618 "data/maps/AcrisiaCity_University/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 619 "data/maps/AcrisiaCity_University/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 620 "data/maps/AcrisiaCity_University/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 621 "data/maps/AcrisiaCity_University/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 622 "data/maps/AcrisiaCity_University/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 623 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 624 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_2
# 627 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 10
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_6
AcrisiaCity_University_EventScript_EliaRatePokedex_4:
# 638 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 20
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_11
AcrisiaCity_University_EventScript_EliaRatePokedex_9:
# 652 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 653 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaRatePokedex_2:
# 610 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 611 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_1
# 612 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 613 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaRatePokedex_5:
# 629 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_01
# 630 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 631 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_3
# 632 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 633 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_NUGGET
# 634 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 635 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_4
# 636 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_4

AcrisiaCity_University_EventScript_EliaRatePokedex_6:
# 627 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_01, AcrisiaCity_University_EventScript_EliaRatePokedex_5
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_4

AcrisiaCity_University_EventScript_EliaRatePokedex_10:
# 640 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_02
# 641 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 642 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_5
# 643 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 644 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_LOADED_DICE
# 645 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 646 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_6
# 647 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_9

AcrisiaCity_University_EventScript_EliaRatePokedex_11:
# 638 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_02, AcrisiaCity_University_EventScript_EliaRatePokedex_10
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_9


AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck::
# 659 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 660 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_0, MSGBOX_YESNO
# 661 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_2
# 668 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_set FLAG_FOUND_LOST_DELIVERY, AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_5
# 701 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_6
# 702 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_1:
# 705 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_2:
# 663 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_1
# 664 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_1

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_5:
# 670 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_2
# 671 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 672 "data/maps/AcrisiaCity_University/scripts.pory"
	removeobject ITEM_PARCEL
# 673 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 674 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 675 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 676 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 677 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 678 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 679 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 680 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 681 "data/maps/AcrisiaCity_University/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 682 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_3
# 683 "data/maps/AcrisiaCity_University/scripts.pory"
	waitfanfare
# 684 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 685 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 686 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 687 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 688 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 689 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_4
# 690 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 691 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 692 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_5
# 693 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 696 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 3
# 697 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_HIDE_RANIA_JUSMAIL
	goto AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_1


AcrisiaCity_University_EventScript_EliaCheckBadgeOne::
# 711 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 712 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_0
# 713 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 714 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, AcrisiaCity_University_EventScript_EliaCheckBadgeOne_2
# 722 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 723 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_2
# 724 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 725 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
# 726 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 727 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_3
# 728 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 729 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 5
# 730 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_HIDE_RANIA_JUSMAIL
AcrisiaCity_University_EventScript_EliaCheckBadgeOne_1:
# 732 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_2:
# 716 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 717 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_1
# 718 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaCheckBadgeOne_1


AcrisiaCity_University_EventScript_EliaCheckBadgeTwo::
# 738 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 739 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_0
# 740 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 741 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_2
# 753 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 754 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_2
# 755 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 756 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 757 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 758 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_3
# 759 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 761 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 6
AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_1:
# 763 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_2:
# 743 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 744 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_1
# 745 "data/maps/AcrisiaCity_University/scripts.pory"
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
	.string "captivity. I'm learning a lot about\l"
	.string "Pokéballs and how to care for captive\l"
	.string "Pokémon.\p"
	.string "If you have any questions about\n"
	.string "Pokéballs, let me know.$"

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
	.string "Yia sou! That's how we say 'Hello' here!\n"
	.string "I'm Rania, and you must be... the new\l"
	.string "field assistant, {PLAYER}!\p"
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
# 251 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Duskull$"

AcrisiaCity_University_EventScript_Duskull_Text_1:
# 253 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Bwraaahhh!$"

AcrisiaCity_University_EventScript_Niko_Text_0:
# 267 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Come to check out my research,\n"
	.string "{PLAYER}? I'm observing the Duskull\l"
	.string "to see how it behaves.\p"
	.string "There are old folktales of Ghost-type\n"
	.string "Pokémon being evil, but this Duskull\l"
	.string "seems totally friendly!$"

AcrisiaCity_University_EventScript_Niko_Text_1:
# 273 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Yia sou, bud! I hear you beat Rania in\n"
	.string "Jusmail Town. After all the braggin' she\l"
	.string "did about her team, fwahaha!\p"
	.string "Ahem, hm. Getting the Harvest Badge is a\n"
	.string "big step for trainers in Ilios! Rania and\l"
	.string "I are thinking about doing it ourselves.\l"
	.string "Here's a little congratulatory gift from\l"
	.string "me!$"

AcrisiaCity_University_EventScript_Niko_Text_2:
# 277 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Those Nest Balls are good for catching\n"
	.string "young, weak Pokémon. My studies say the\l"
	.string "inside of Nest Balls remind Pokémon of\l"
	.string "their home. Isn't that cute?\p"
	.string "{COLOR GREEN}Check back in{COLOR DARK_GRAY} as you {COLOR GREEN}defeat Pokémon\n"
	.string "Gyms{COLOR DARK_GRAY}, and I'll give you little gifts and\l"
	.string "tips.$"

AcrisiaCity_University_EventScript_Niko_Text_3:
# 284 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Give those Nest Balls a shot! They work\n"
	.string "best with low-level Pokémon.\p"
	.string "{COLOR GREEN}Check back in{COLOR DARK_GRAY} as you {COLOR GREEN}defeat Pokémon\n"
	.string "Gyms{COLOR DARK_GRAY}, and I'll give you little gifts and\l"
	.string "tips.$"

AcrisiaCity_University_EventScript_Niko_Text_4:
# 290 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Ehehe, looks like I beat you to\n"
	.string "Mattaios! We're all starting to be\l"
	.string "pretty strong trainers, huh?\p"
	.string "Ah, I worked on a new Poké Ball type.\n"
	.string "Give it a test for me!$"

AcrisiaCity_University_EventScript_Niko_Text_5:
# 294 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Those Timer Balls work better when a\n"
	.string "battle begins to drag on. Hopefully\l"
	.string "they help... help you catch up to me!\l"
	.string "Fwahaha!$"

AcrisiaCity_University_EventScript_Niko_Text_6:
# 301 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER}! I'm back here to study this\n"
	.string "little Duskull. In case you can't tell, I\l"
	.string "really like Ghost-type Pokémon.$"

AcrisiaCity_University_EventScript_Rania_Text_0:
# 315 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Yia sou, {PLAYER}! You doin' well?\p"
	.string "I help out with Pokédex data analysis.\n"
	.string "Now that you're here, there's gonna be a\l"
	.string "lot more data. Come {COLOR GREEN}speak with me{COLOR DARK_GRAY} as you\l"
	.string "{COLOR GREEN}defeat Pokémon Gyms{COLOR DARK_GRAY}, I'll give you some\l"
	.string "helpful tips and items!$"

AcrisiaCity_University_EventScript_Rania_Text_1:
# 321 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Here comes {PLAYER}, the new Champ!\n"
	.string "...Ehehe, just kidding! My Pokémon are\l"
	.string "still calming down from that battle in\l"
	.string "Jusmail Town, what a fight!$"

AcrisiaCity_University_EventScript_Rania_Text_2:
# 327 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "No way, you got the Gemstone Badge?! I\n"
	.string "haven't even gotten to the Acrisia\l"
	.string "Caverns yet!\p"
	.string "Yamas! Cheers! We have to celebrate\n"
	.string "your success somehow! I'll give you\l"
	.string "this, as a start.$"

AcrisiaCity_University_EventScript_Rania_Text_3:
# 331 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Those Wishing Stars can be used at the\n"
	.string "Wishing Well in Jusmail Town. Old myths\l"
	.string "say that worthy trainers may earn\l"
	.string "something from it.\p"
	.string "Speaking of Jusmail Town, you should be\n"
	.string "able to get rid of those {COLOR GREEN}rocks blocking\l"
	.string "the path south{COLOR DARK_GRAY}! I'll be seeing you out\l"
	.string "there, {PLAYER}!$"

AcrisiaCity_University_EventScript_Rania_Text_4:
# 338 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Yia sou! I come back here to heal my\n"
	.string "Pokémon and put my new Pokédex data\l"
	.string "into the computers. Don't you worry, I'll\l"
	.string "be back out soon! Get ready for some\l"
	.string "battles!$"

AcrisiaCity_University_EventScript_RaniaShowsHealspot_Text_0:
# 364 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Wait, {PLAYER}! Before you go, take a\n"
	.string "look at this.$"

AcrisiaCity_University_EventScript_RaniaShowsHealspot_Text_1:
# 369 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "This machine is a Pokémon Healing\n"
	.string "device! Whenever your Pokémon are\l"
	.string "feeling low, come interact with it to\l"
	.string "heal them up!$"

AcrisiaCity_University_EventScript_RaniaShowsHealspot_Text_2:
# 374 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Well, good luck on your first University\n"
	.string "assignment! Make sure to stop back in\l"
	.string "sometimes!$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_0:
# 436 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Hold up, come here {PLAYER}!$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_1:
# 457 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You remember me, right? R-right? I'm the\n"
	.string "one who works with captive Pokémon!$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_2:
# 461 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "No? Some research partner you are.\p"
	.string "I was gonna give you some good\n"
	.string "Pokéballs, but now you're just getting\l"
	.string "these.$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_3:
# 465 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "A little disappointing, huh? Just like\n"
	.string "being forgotten about! Well, now we're\l"
	.string "even.\p"
	.string "Come back to the University as you\n"
	.string "catch more Pokémon. Rania and I can get\l"
	.string "you some neat stuff... if you remember\l"
	.string "me, that is.$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_4:
# 471 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Ehehe, I knew you were a real friend!\p"
	.string "I'm only supposed to give you a few\n"
	.string "Pokéballs, but you made my day, so I'll\l"
	.string "make yours!$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_5:
# 477 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Use those Great Balls on Pokémon giving\n"
	.string "you a hard time! They work like a charm.\p"
	.string "Come back to the University as you fill\n"
	.string "up the Pokédex! Rania and I might have\l"
	.string "some new gear for you to try out.$"

AcrisiaCity_University_HealParty_Text_0:
# 511 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Computer$"

AcrisiaCity_University_HealParty_Text_1:
# 512 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "-bzzt bzzt-\l"
	.string "Healing Pokémon...$"

AcrisiaCity_University_HealParty_Text_2:
# 519 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Pokémon are healthy and ready to go!$"

AcrisiaCity_University_CustomSettingsComputer_Text_0:
# 529 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "-bzzt bzzt-\n"
	.string "Welcome to the Sunset Settings Menu!$"

AcrisiaCity_University_CustomSettingsComputer_Text_1:
# 535 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "NORMAL$"

AcrisiaCity_University_CustomSettingsComputer_Text_2:
# 539 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "HARD$"

AcrisiaCity_University_CustomSettingsComputer_Text_3:
# 542 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{COLOR GREEN}DIFFICULTY OPTION{COLOR DARK_GRAY}\n"
	.string "Should {COLOR RED}HARD MODE{COLOR DARK_GRAY} be enabled? This\l"
	.string "increases opponent Pokémon levels\l"
	.string "steadily across the game, adds {COLOR RED}strict\l"
	.string "Level Caps{COLOR DARK_GRAY}, and {COLOR RED}gives Gym Leaders more\l"
	.string "difficult teams{COLOR DARK_GRAY}.\p"
	.string "The current difficulty is\n"
	.string "{STR_VAR_1}. Should {COLOR RED}HARD MODE{COLOR DARK_GRAY} be\l"
	.string "enabled?$"

AcrisiaCity_University_CustomSettingsComputer_Text_4:
# 547 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "The game has been set to {COLOR GREEN}NORMAL\n"
	.string "DIFFICULTY{COLOR DARK_GRAY}.$"

AcrisiaCity_University_CustomSettingsComputer_Text_5:
# 554 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "The game has been set to {COLOR RED}HARD\n"
	.string "DIFFICULTY{COLOR DARK_GRAY}.$"

AcrisiaCity_University_CustomSettingsComputer_Text_6:
# 559 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "All settings have been set. Enjoy your\n"
	.string "time in the Ilios Region!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_0:
# 607 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Yia sou, {PLAYER}! How's your research\n"
	.string "going? I can check your Pokédex\l"
	.string "progress!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_1:
# 611 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "No? That's okay, go out there and\n"
	.string "gather some more data! I may have\l"
	.string "{COLOR GREEN}rewards{COLOR DARK_GRAY} for you next time.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_2:
# 624 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've seen {STR_VAR_1} Pokémon,\n"
	.string "and caught {STR_VAR_2} Pokémon!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_3:
# 631 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured more than 10 unique\n"
	.string "Pokémon! You're certainly capable,\l"
	.string "{PLAYER}. Here's your first progress\l"
	.string "reward!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_4:
# 635 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "That Nugget can be sold for a pretty\n"
	.string "penny! It should help fund your\l"
	.string "studies. As you catch more Pokémon, I'll\l"
	.string "have more for you.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_5:
# 642 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured more than 20 unique\n"
	.string "Pokémon! Great job, {PLAYER}! Here's a\l"
	.string "nice new item.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_6:
# 646 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Pokémon holding the Loaded Dice will be\n"
	.string "able to land multi-hit attacks more\l"
	.string "times in a row! As you catch more\l"
	.string "Pokémon, I'll have more for you.$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_0:
# 660 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Welcome back, {PLAYER}! Did you find\n"
	.string "that {COLOR GREEN}lost delivery{COLOR DARK_GRAY} yet?$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_1:
# 663 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Hmm, that's concerning... local crime\n"
	.string "groups have been active lately, I'm\l"
	.string "nervous that the delivery cart was\l"
	.string "attacked. Keep us updated on the\l"
	.string "situation.$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_2:
# 670 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Aie! The delivery cart was attacked!?\n"
	.string "Well I'm glad everyone is okay...\p"
	.string "Here, I'll enable your Pokédex.$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_3:
# 682 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER}'s Pokédex was enabled!$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_4:
# 689 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "I think it's a good idea to train your\n"
	.string "Pokémon for battle, in case more\l"
	.string "troublemakers come around. Why don't\l"
	.string "you {COLOR GREEN}battle the Pokémon Gyms{COLOR DARK_GRAY} you find\l"
	.string "while you're exploring the Ilios Region?\l"
	.string "That'll get your Pokémon raring to go!$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_5:
# 692 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "The {COLOR GREEN}first Gym{COLOR DARK_GRAY} is south of here, in\n"
	.string "{COLOR GREEN}Jusmail Town{COLOR DARK_GRAY}. Come back to me with the\l"
	.string "{COLOR GREEN}first Gym Badge{COLOR DARK_GRAY} to show me your skill as\l"
	.string "a trainer!$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_6:
# 701 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You did? Well where's the Pokédex?\n"
	.string "...Come on {PLAYER}, we need to make\l"
	.string "sure the delivery folks are alright! Go\l"
	.string "look again!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_0:
# 712 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Yia sou, welcome back {PLAYER}! Have\n"
	.string "you made it to the {COLOR GREEN}Jusmail Town Gym{COLOR DARK_GRAY}\l"
	.string "yet?$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_1:
# 717 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Still training, eh? No rush, no rush!\p"
	.string "Come back to the University and check\n"
	.string "in with me when you have your first Gym\l"
	.string "Badge.$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_2:
# 723 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Well done! You're well on your way to\n"
	.string "being a great trainer.\p"
	.string "Here, I wanted to give you something to\n"
	.string "celebrate!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_3:
# 727 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "That's an Ability Capsule. It can change\n"
	.string "the Ability of a Pokémon, which can make\l"
	.string "it totally different in battle!\p"
	.string "Look, I know I've been sending you back\n"
	.string "and forth a bunch, but I think I've got\l"
	.string "a good idea. You should head {COLOR GREEN}west{COLOR DARK_GRAY} from\l"
	.string "here, up into the {COLOR GREEN}Acrisia Mountains{COLOR DARK_GRAY}.\l"
	.string "There's a cave nearby called the {COLOR GREEN}Acrisia\l"
	.string "Caverns{COLOR DARK_GRAY}, which the Ilios Region\l"
	.string "considers a Gym. If you can win, I have\l"
	.string "something even better for you!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_0:
# 739 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER}, welcome, welcome! Have you\n"
	.string "explored the {COLOR GREEN}Acrisia Mountains{COLOR DARK_GRAY} to the\l"
	.string "west yet? The {COLOR GREEN}second Gym{COLOR DARK_GRAY} is there!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_1:
# 744 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Not yet, hm? That's fine, the Mountains\n"
	.string "are a tough area. Only a small area is\l"
	.string "safe to explore, so it's packed with\l"
	.string "trainers.\p"
	.string "Come back and check in with me when you\n"
	.string "have your second Gym Badge. And\l"
	.string "remember to heal your Pokémon at the\l"
	.string "machine to your right!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_2:
# 754 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Incredible! You're becoming a great\n"
	.string "Pokémon trainer. As promised, here's\l"
	.string "something exciting for you!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_3:
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

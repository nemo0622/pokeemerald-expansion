AcrisiaCity_University_MapScripts::
# 2 "data/maps/AcrisiaCity_University/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AcrisiaCity_University_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AcrisiaCity_University_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/AcrisiaCity_University/scripts.pory"
	map_script_2 VAR_INTRO_STATE, 1, AcrisiaCity_University_EventScript_PlayerIntro
	.2byte 0


AcrisiaCity_University_EventScript_PlayerIntro::
# 10 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 2
# 11 "data/maps/AcrisiaCity_University/scripts.pory"
	setobjectxy 1, 10, 18
# 12 "data/maps/AcrisiaCity_University/scripts.pory"
	lockall
# 14 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 15 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 18 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 19 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_1
# 20 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 21 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 22 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 23 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 26 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 27 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_2
# 28 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 29 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_PIN
# 30 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 31 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 32 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_3
# 33 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_4
# 34 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 35 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 3, AcrisiaCity_University_Movement_NikoStopsPlayer
# 36 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 37 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_3
# 38 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_5
# 39 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 40 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 41 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_6
# 42 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 43 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 44 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 45 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 46 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 47 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_7
# 48 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 49 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 50 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 51 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 52 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 53 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 54 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 55 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 56 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_9
# 57 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 58 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 3, AcrisiaCity_University_Movement_NikoReturnToStation
# 59 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 62 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 1, AcrisiaCity_University_Movement_ProfessorUp
# 63 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerFollowProfessorUp
# 64 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 65 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 66 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_10
# 67 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 68 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 4, AcrisiaCity_University_Movement_RaniaGreetsPlayer
# 69 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 70 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 71 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_12
# 72 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 73 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 4, AcrisiaCity_University_Movement_RaniaReturnsToStation
# 74 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 77 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 78 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 79 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 1, AcrisiaCity_University_Movement_ProfessorToMainPosition
# 80 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerFollowProfessorToMainPosition
# 81 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 82 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 83 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_13
# 84 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 87 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 1, AcrisiaCity_University_Movement_ProfessorTriesToFindDex_1
# 88 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 89 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 90 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 91 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_PIN
# 92 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 93 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 1, AcrisiaCity_University_Movement_ProfessorTriesToFindDex_2
# 94 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 95 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 96 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 97 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 98 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_14
# 99 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 100 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 30
# 101 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 102 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 103 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 104 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_15
# 105 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 108 "data/maps/AcrisiaCity_University/scripts.pory"
	callnative StartNewPokeballCaseUI
# 109 "data/maps/AcrisiaCity_University/scripts.pory"
	waitstate
# 111 "data/maps/AcrisiaCity_University/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_MON
# 112 "data/maps/AcrisiaCity_University/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 113 "data/maps/AcrisiaCity_University/scripts.pory"
	message AcrisiaCity_University_EventScript_PlayerIntro_Text_16
# 114 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmessage
# 115 "data/maps/AcrisiaCity_University/scripts.pory"
	waitfanfare
# 116 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 117 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 118 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_PlayerIntro_Text_17
# 119 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 121 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 122 "data/maps/AcrisiaCity_University/scripts.pory"
	clearflag FLAG_HIDE_SECOND_PROFESSOR_SPRITE
# 123 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_HIDE_FIRST_PROFESSOR_SPRITE
# 124 "data/maps/AcrisiaCity_University/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 125 "data/maps/AcrisiaCity_University/scripts.pory"
	setrespawn HEAL_LOCATION_ACRISIA_CITY
# 127 "data/maps/AcrisiaCity_University/scripts.pory"
	warpsilent MAP_ACRISIA_CITY_UNIVERSITY, 6, 12
# 128 "data/maps/AcrisiaCity_University/scripts.pory"
	waitstate
# 134 "data/maps/AcrisiaCity_University/scripts.pory"
	releaseall
	end


# 139 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_NikoStopsPlayer:
# 141 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_left
# 141 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_left
# 142 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_left
# 142 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_left
# 143 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 144 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 147 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_NikoReturnToStation:
# 149 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 149 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 150 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 151 "data/maps/AcrisiaCity_University/scripts.pory"
	face_up
# 152 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 155 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_ProfessorUp:
# 157 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 157 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 157 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 157 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 157 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 158 "data/maps/AcrisiaCity_University/scripts.pory"
	face_right
# 159 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 162 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerFollowProfessorUp:
# 164 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 164 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 164 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 164 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 164 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 165 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 166 "data/maps/AcrisiaCity_University/scripts.pory"
	face_up
# 167 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 170 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_RaniaGreetsPlayer:
# 172 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 173 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 173 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 173 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 174 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 174 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 175 "data/maps/AcrisiaCity_University/scripts.pory"
	face_down
# 176 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 179 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_RaniaReturnsToStation:
# 181 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 181 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 182 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 182 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 182 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 183 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 184 "data/maps/AcrisiaCity_University/scripts.pory"
	face_left
# 185 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 188 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_ProfessorToMainPosition:
# 190 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 190 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 190 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 190 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 190 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 191 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 191 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 192 "data/maps/AcrisiaCity_University/scripts.pory"
	face_down
# 193 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 196 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerFollowProfessorToMainPosition:
# 198 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 198 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 198 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 198 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 198 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 198 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 199 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 200 "data/maps/AcrisiaCity_University/scripts.pory"
	face_up
# 201 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 204 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_ProfessorTriesToFindDex_1:
# 206 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 207 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 208 "data/maps/AcrisiaCity_University/scripts.pory"
	face_left
# 209 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 209 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 209 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 210 "data/maps/AcrisiaCity_University/scripts.pory"
	emote_question_mark
# 211 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 212 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_up
# 213 "data/maps/AcrisiaCity_University/scripts.pory"
	face_right
# 214 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 214 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 215 "data/maps/AcrisiaCity_University/scripts.pory"
	emote_exclamation_mark
# 216 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 217 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_down
# 217 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_down
# 218 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 218 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 218 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 219 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_up
# 219 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_up
# 220 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 223 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_ProfessorTriesToFindDex_2:
# 225 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 225 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 225 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 226 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_right
# 226 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_right
# 227 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 227 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 227 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 228 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 228 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 228 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 229 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 229 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 230 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 230 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 231 "data/maps/AcrisiaCity_University/scripts.pory"
	face_down
# 232 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

AcrisiaCity_University_EventScript_Duskull::
# 239 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 240 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_Duskull_Text_0
# 241 "data/maps/AcrisiaCity_University/scripts.pory"
	playmoncry SPECIES_DUSKULL, CRY_MODE_NORMAL
# 242 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Duskull_Text_1
# 243 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmoncry
# 244 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 245 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end


AcrisiaCity_University_EventScript_Niko::
# 251 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 252 "data/maps/AcrisiaCity_University/scripts.pory"
	faceplayer
# 253 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 0
	goto_if_eq AcrisiaCity_University_EventScript_Niko_2
# 259 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 1
	goto_if_eq AcrisiaCity_University_EventScript_Niko_3
# 270 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 2
	goto_if_eq AcrisiaCity_University_EventScript_Niko_4
AcrisiaCity_University_EventScript_Niko_1:
# 276 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_Niko_2:
# 255 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 256 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_0
# 257 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_3:
# 261 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 262 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_1
# 263 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 264 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_NEST_BALL, 3
# 265 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 266 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_2
# 267 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 268 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_NIKO_STATE, 2
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_4:
# 272 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 273 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_3
# 274 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Niko_1


AcrisiaCity_University_EventScript_Rania::
# 282 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 283 "data/maps/AcrisiaCity_University/scripts.pory"
	faceplayer
# 284 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 0
	goto_if_eq AcrisiaCity_University_EventScript_Rania_2
# 290 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 1
	goto_if_eq AcrisiaCity_University_EventScript_Rania_3
AcrisiaCity_University_EventScript_Rania_1:
# 296 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_Rania_2:
# 286 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 287 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_0
# 288 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_3:
# 292 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 293 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_1
# 294 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Rania_1


AcrisiaCity_University_EventScript_RaniaShowsHealspot::
# 310 "data/maps/AcrisiaCity_University/scripts.pory"
	lockall
# 311 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 4, AcrisiaCity_University_Movement_RaniaJumps
# 312 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 313 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 4, AcrisiaCity_University_Movement_RaniaShowsHealing
# 314 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 315 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 316 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 318 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 319 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_RaniaShowsHealspot_Text_0
# 320 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 321 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 322 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 323 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 324 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_RaniaShowsHealspot_Text_1
# 325 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 326 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 327 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 328 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 329 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_RaniaShowsHealspot_Text_2
# 330 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 331 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 4, AcrisiaCity_University_Movement_RaniaDoneShowingHealing
# 332 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 333 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_SHOWN_ACRISIA_HEALSPOT
# 334 "data/maps/AcrisiaCity_University/scripts.pory"
	releaseall
	end


# 338 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_RaniaJumps:
# 340 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_left
# 340 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_left
# 341 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 344 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_RaniaShowsHealing:
# 346 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 347 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 347 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 348 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 348 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 348 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 348 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 349 "data/maps/AcrisiaCity_University/scripts.pory"
	face_down
# 350 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 353 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_RaniaDoneShowingHealing:
# 355 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 355 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 355 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 355 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 356 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 356 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 357 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 358 "data/maps/AcrisiaCity_University/scripts.pory"
	face_left
# 359 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Trigger1::
# 364 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_1, 1
# 365 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs
	return


AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Trigger2::
# 369 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_1, 2
# 370 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs
	return


AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Trigger3::
# 374 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_1, 3
# 375 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs
	return


AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Trigger4::
# 379 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_1, 4
# 380 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs
	return


AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs::
# 386 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 387 "data/maps/AcrisiaCity_University/scripts.pory"
	emote 3, EMOTE_EXCLAM
# 388 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 389 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 390 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 391 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_0
# 392 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 393 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_2
# 397 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_3
# 401 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_4
# 405 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_5
AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1:
# 409 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 411 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 412 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_1, MSGBOX_YESNO
# 413 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_11
# 425 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 426 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_4
# 427 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 428 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 429 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 30
# 430 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_GREAT_BALL, 3
# 431 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 432 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_5
# 433 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_10:
# 435 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 436 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 437 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 4
# 438 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_2:
# 395 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerGoesToNiko_1
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_3:
# 399 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerGoesToNiko_2
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_4:
# 403 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerGoesToNiko_3
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_5:
# 407 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerGoesToNiko_4
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_11:
# 415 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 416 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_2
# 417 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 418 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_POKE_BALL, 3
# 419 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 420 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_3
# 421 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_10


# 442 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerGoesToNiko_1:
# 444 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 444 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 445 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 445 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 445 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 445 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
	step_end

# 447 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerGoesToNiko_2:
# 449 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 449 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 450 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 450 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 450 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
	step_end

# 452 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerGoesToNiko_3:
# 454 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 454 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 455 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 455 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
	step_end

# 457 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerGoesToNiko_4:
# 459 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 459 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 460 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
	step_end

AcrisiaCity_University_HealParty::
# 465 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 466 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_HealParty_Text_0
# 467 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_HealParty_Text_1
# 468 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 469 "data/maps/AcrisiaCity_University/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 470 "data/maps/AcrisiaCity_University/scripts.pory"
	special HealPlayerParty
# 471 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 120
# 472 "data/maps/AcrisiaCity_University/scripts.pory"
	waitfanfare
# 473 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_HealParty_Text_0
# 474 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_HealParty_Text_2
# 475 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 476 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end


AcrisiaCity_EventScript_ProfessorElia::
# 486 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 487 "data/maps/AcrisiaCity_University/scripts.pory"
	faceplayer
# 489 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 2
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_2
# 493 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 3
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_3
# 493 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 4
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_3
# 497 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 5
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_4
# 506 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaRatePokedex
AcrisiaCity_EventScript_ProfessorElia_1:
# 509 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_EventScript_ProfessorElia_2:
# 491 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck
	goto AcrisiaCity_EventScript_ProfessorElia_1

AcrisiaCity_EventScript_ProfessorElia_3:
# 495 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaCheckBadgeOne
	goto AcrisiaCity_EventScript_ProfessorElia_1

AcrisiaCity_EventScript_ProfessorElia_4:
# 499 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaCheckBadgeTwo
	goto AcrisiaCity_EventScript_ProfessorElia_1


AcrisiaCity_University_EventScript_EliaRatePokedex::
# 521 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 522 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_0, MSGBOX_YESNO
# 523 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_University_EventScript_EliaRatePokedex_2
# 532 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_0x8004, 0
# 533 "data/maps/AcrisiaCity_University/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 534 "data/maps/AcrisiaCity_University/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 535 "data/maps/AcrisiaCity_University/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 536 "data/maps/AcrisiaCity_University/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 537 "data/maps/AcrisiaCity_University/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 538 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 539 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_2
# 542 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 10
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_6
AcrisiaCity_University_EventScript_EliaRatePokedex_4:
# 553 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 20
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_11
AcrisiaCity_University_EventScript_EliaRatePokedex_9:
# 567 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 568 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaRatePokedex_2:
# 525 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 526 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_1
# 527 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 528 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaRatePokedex_5:
# 544 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_01
# 545 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 546 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_3
# 547 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 548 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_NUGGET
# 549 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 550 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_4
# 551 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_4

AcrisiaCity_University_EventScript_EliaRatePokedex_6:
# 542 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_01, AcrisiaCity_University_EventScript_EliaRatePokedex_5
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_4

AcrisiaCity_University_EventScript_EliaRatePokedex_10:
# 555 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_02
# 556 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 557 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_5
# 558 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 559 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_LOADED_DICE
# 560 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 561 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_6
# 562 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_9

AcrisiaCity_University_EventScript_EliaRatePokedex_11:
# 553 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_02, AcrisiaCity_University_EventScript_EliaRatePokedex_10
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_9


AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck::
# 574 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 575 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_0, MSGBOX_YESNO
# 576 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_2
# 583 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_set FLAG_FOUND_LOST_DELIVERY, AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_5
# 616 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_6
# 617 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_1:
# 620 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_2:
# 578 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_1
# 579 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_1

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_5:
# 585 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_2
# 586 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 587 "data/maps/AcrisiaCity_University/scripts.pory"
	removeobject ITEM_PARCEL
# 588 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 589 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 590 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 591 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 592 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 593 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 594 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 595 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 596 "data/maps/AcrisiaCity_University/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 597 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_3
# 598 "data/maps/AcrisiaCity_University/scripts.pory"
	waitfanfare
# 599 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 600 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 601 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 602 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 603 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 604 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_4
# 605 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 606 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 607 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_5
# 608 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 611 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 3
# 612 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_HIDE_RANIA_JUSMAIL
	goto AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_1


AcrisiaCity_University_EventScript_EliaCheckBadgeOne::
# 626 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 627 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_0
# 628 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 629 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, AcrisiaCity_University_EventScript_EliaCheckBadgeOne_2
# 637 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 638 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_2
# 639 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 640 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
# 641 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 642 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_3
# 643 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 644 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 5
# 645 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_HIDE_RANIA_JUSMAIL
AcrisiaCity_University_EventScript_EliaCheckBadgeOne_1:
# 647 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_2:
# 631 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 632 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_1
# 633 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaCheckBadgeOne_1


AcrisiaCity_University_EventScript_EliaCheckBadgeTwo::
# 653 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 654 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_0
# 655 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 656 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_2
# 668 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 669 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_2
# 670 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 671 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 672 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 673 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_3
# 674 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 676 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 6
AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_1:
# 678 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_2:
# 658 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 659 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_1
# 660 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_1


AcrisiaCity_University_EventScript_PlayerIntro_Text_0:
# 18 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Prof. Elia$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_1:
# 19 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Welcome to the Acrisia University! Well,\n"
	.string "one of many campus locations, but still!\p"
	.string "Come, let me introduce you to everyone.$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_2:
# 27 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Now this here is-$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_3:
# 32 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "???$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_4:
# 33 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "WOAH WOAH WOAH!$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_5:
# 38 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Come on, Professor! You know sudden\n"
	.string "movements can scare Duskull!$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_6:
# 41 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Oof, sorry Niko...$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_7:
# 47 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "As I was saying, this is Niko. He's a bit\n"
	.string "protective of his work, but he's a great\l"
	.string "resource for knowledge.$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_8:
# 55 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Niko$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_9:
# 56 "data/maps/AcrisiaCity_University/scripts.pory"
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
# 66 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "This section of the building is for\n"
	.string "Rania! Here, I'll let her tell you what\l"
	.string "she does.$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_11:
# 70 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Rania$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_12:
# 71 "data/maps/AcrisiaCity_University/scripts.pory"
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
# 83 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "And here's my area of the building!\n"
	.string "Other students come in and out over\l"
	.string "time, but they're mostly out doing\l"
	.string "fieldwork. Speaking of which...$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_14:
# 98 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Ehehe... so, it looks like I don't quite\n"
	.string "have an extra Pokédex on hand. I\l"
	.string "ordered a new set of lab equipment\l"
	.string "which included a new one, but it seems\l"
	.string "like that hasn't come yet...$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_15:
# 104 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER}! Oh, I've had the most fun\n"
	.string "idea! How about you go {COLOR GREEN}find the lost\l"
	.string "delivery{COLOR DARK_GRAY} and help them out?\p"
	.string "I've got a few rare Pokémon in my\n"
	.string "briefcase here. Why don't you choose\l"
	.string "one to adventure with you?$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_16:
# 113 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER} received a {STR_VAR_1}!$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_17:
# 118 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Ah, {STR_VAR_1}! That Pokémon suits\n"
	.string "you. Now, for the task at hand: the {COLOR GREEN}lost\l"
	.string "delivery{COLOR DARK_GRAY} should be {COLOR GREEN}South{COLOR DARK_GRAY} of Acrisia\l"
	.string "City. Usually, the mover that brings our\l"
	.string "shipments here stops to rest their\l"
	.string "Pokémon in the woods. Why don't you\l"
	.string "check there?$"

AcrisiaCity_University_EventScript_Duskull_Text_0:
# 240 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Duskull$"

AcrisiaCity_University_EventScript_Duskull_Text_1:
# 242 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Bwraaahhh!$"

AcrisiaCity_University_EventScript_Niko_Text_0:
# 256 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Come to check out my research,\n"
	.string "{PLAYER}? I'm observing the Duskull\l"
	.string "to see how it behaves.\p"
	.string "There are old folktales of Ghost-type\n"
	.string "Pokémon being evil, but this Duskull\l"
	.string "seems totally friendly!$"

AcrisiaCity_University_EventScript_Niko_Text_1:
# 262 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Yia sou, bud! I hear you beat Rania in\n"
	.string "Jusmail Town. After all the braggin' she\l"
	.string "did about her team, fwahaha!\p"
	.string "Ahem, hm. Getting the Harvest Badge is a\n"
	.string "big step for trainers in Ilios! Rania and\l"
	.string "I are thinking about doing it ourselves.\l"
	.string "Here's a little congratulatory gift from\l"
	.string "me!$"

AcrisiaCity_University_EventScript_Niko_Text_2:
# 266 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Those Nest Balls are good for catching\n"
	.string "young, weak Pokémon. My studies say the\l"
	.string "inside of Nest Balls remind Pokémon of\l"
	.string "their home. Isn't that cute?\p"
	.string "{COLOR GREEN}Check back in{COLOR DARK_GRAY} as you {COLOR GREEN}defeat Pokémon\n"
	.string "Gyms{COLOR DARK_GRAY}, and I'll give you little gifts and\l"
	.string "tips.$"

AcrisiaCity_University_EventScript_Niko_Text_3:
# 273 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Give those Nest Balls a shot! They work\n"
	.string "best with low-level Pokémon.\p"
	.string "{COLOR GREEN}Check back in{COLOR DARK_GRAY} as you {COLOR GREEN}defeat Pokémon\n"
	.string "Gyms{COLOR DARK_GRAY}, and I'll give you little gifts and\l"
	.string "tips.$"

AcrisiaCity_University_EventScript_Rania_Text_0:
# 287 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Yia sou, {PLAYER}! You doin' well?\p"
	.string "I help out with Pokédex data analysis.\n"
	.string "Now that you're here, there's gonna be a\l"
	.string "lot more data. Come {COLOR GREEN}speak with me{COLOR DARK_GRAY} as you\l"
	.string "{COLOR GREEN}defeat Pokémon Gyms{COLOR DARK_GRAY}, I'll give you some\l"
	.string "helpful tips and items!$"

AcrisiaCity_University_EventScript_Rania_Text_1:
# 293 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Here comes {PLAYER}, the new Champ!\n"
	.string "...Ehehe, just kidding! My Pokémon are\l"
	.string "still calming down from that battle in\l"
	.string "Jusmail Town, what a fight!$"

AcrisiaCity_University_EventScript_RaniaShowsHealspot_Text_0:
# 319 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Wait, {PLAYER}! Before you go, take a\n"
	.string "look at this.$"

AcrisiaCity_University_EventScript_RaniaShowsHealspot_Text_1:
# 324 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "This machine is a Pokémon Healing\n"
	.string "device! Whenever your Pokémon are\l"
	.string "feeling low, come interact with it to\l"
	.string "heal them up!$"

AcrisiaCity_University_EventScript_RaniaShowsHealspot_Text_2:
# 329 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Well, good luck on your first University\n"
	.string "assignment! Make sure to stop back in\l"
	.string "sometimes!$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_0:
# 391 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Hold up, come here {PLAYER}!$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_1:
# 412 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You remember me, right? R-right? I'm the\n"
	.string "one who works with captive Pokémon!$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_2:
# 416 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "No? Some research partner you are.\p"
	.string "I was gonna give you some good\n"
	.string "Pokéballs, but now you're just getting\l"
	.string "these.$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_3:
# 420 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "A little disappointing, huh? Just like\n"
	.string "being forgotten about! Well, now we're\l"
	.string "even.\p"
	.string "Come back to the University as you\n"
	.string "catch more Pokémon. Rania and I can get\l"
	.string "you some neat stuff... if you remember\l"
	.string "me, that is.$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_4:
# 426 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Ehehe, I knew you were a real friend!\p"
	.string "I'm only supposed to give you a few\n"
	.string "Pokéballs, but you made my day, so I'll\l"
	.string "make yours!$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_5:
# 432 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Use those Great Balls on Pokémon giving\n"
	.string "you a hard time! They work like a charm.\p"
	.string "Come back to the University as you fill\n"
	.string "up the Pokédex! Rania and I might have\l"
	.string "some new gear for you to try out.$"

AcrisiaCity_University_HealParty_Text_0:
# 466 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Computer$"

AcrisiaCity_University_HealParty_Text_1:
# 467 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "-bzzt bzzt-\l"
	.string "Healing Pokémon...$"

AcrisiaCity_University_HealParty_Text_2:
# 474 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Pokémon are healthy and ready to go.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_0:
# 522 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Yia sou, {PLAYER}! How's your research\n"
	.string "going? I can check your Pokédex\l"
	.string "progress!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_1:
# 526 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "No? That's okay, go out there and\n"
	.string "gather some more data! I may have\l"
	.string "{COLOR GREEN}rewards{COLOR DARK_GRAY} for you next time.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_2:
# 539 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've seen {STR_VAR_1} Pokémon,\n"
	.string "and caught {STR_VAR_2} Pokémon!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_3:
# 546 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured more than 10 unique\n"
	.string "Pokémon! You're certainly capable,\l"
	.string "{PLAYER}. Here's your first progress\l"
	.string "reward!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_4:
# 550 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "That Nugget can be sold for a pretty\n"
	.string "penny! It should help fund your\l"
	.string "studies. As you catch more Pokémon, I'll\l"
	.string "have more for you.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_5:
# 557 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured more than 20 unique\n"
	.string "Pokémon! Great job, {PLAYER}! Here's a\l"
	.string "nice new item.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_6:
# 561 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Pokémon holding the Loaded Dice will be\n"
	.string "able to land multi-hit attacks more\l"
	.string "times in a row! As you catch more\l"
	.string "Pokémon, I'll have more for you.$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_0:
# 575 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Welcome back, {PLAYER}! Did you find\n"
	.string "that {COLOR GREEN}lost delivery{COLOR DARK_GRAY} yet?$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_1:
# 578 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Hmm, that's concerning... local crime\n"
	.string "groups have been active lately, I'm\l"
	.string "nervous that the delivery cart was\l"
	.string "attacked. Keep us updated on the\l"
	.string "situation.$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_2:
# 585 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Heavens! The delivery cart was\n"
	.string "attacked!? Well I'm glad everyone is\l"
	.string "okay...\p"
	.string "Here, I'll enable your Pokédex.$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_3:
# 597 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER}'s Pokédex was enabled!$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_4:
# 604 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "I think it's a good idea to train your\n"
	.string "Pokémon for battle, in case more\l"
	.string "troublemakers come around. Why don't\l"
	.string "you {COLOR GREEN}battle the Pokémon Gyms{COLOR DARK_GRAY} you find\l"
	.string "while you're exploring the Ilios Region?\l"
	.string "That'll get your Pokémon raring to go!$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_5:
# 607 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "The {COLOR GREEN}first Gym{COLOR DARK_GRAY} is south of here, in\n"
	.string "{COLOR GREEN}Jusmail Town{COLOR DARK_GRAY}. Come back to me with the\l"
	.string "{COLOR GREEN}first Gym Badge{COLOR DARK_GRAY} to show me your skill as\l"
	.string "a trainer!$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_6:
# 616 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You did? Well where's the Pokédex?\n"
	.string "...Come on {PLAYER}, we need to make\l"
	.string "sure the delivery folks are alright! Go\l"
	.string "look again!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_0:
# 627 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Yia sou, welcome back {PLAYER}! Have\n"
	.string "you made it to the {COLOR GREEN}Jusmail Town Gym{COLOR DARK_GRAY}\l"
	.string "yet?$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_1:
# 632 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Still training, eh? No rush, no rush!\p"
	.string "Come back to the University and check\n"
	.string "in with me when you have your first Gym\l"
	.string "Badge.$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_2:
# 638 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Well done! You're well on your way to\n"
	.string "being a great trainer.\p"
	.string "Here, I wanted to give you something to\n"
	.string "celebrate!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_3:
# 642 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "That's an Ability Capsule. It can change\n"
	.string "the Ability of a Pokémon, which can make\l"
	.string "it totally different in battle!\p"
	.string "Look, I know I've been sending you back\n"
	.string "and forth a bunch, but I think I've got\l"
	.string "a good idea. You should head {COLOR GREEN}west{COLOR DARK_GRAY} from\l"
	.string "here, up into the {COLOR GREEN}Acrisia Mountains{COLOR DARK_GRAY}.\l"
	.string "There's a cave nearby called the {COLOR GREEN}Discus\l"
	.string "Forge{COLOR DARK_GRAY}, which the Ilios Region considers\l"
	.string "a Gym. If you can win, I have something\l"
	.string "even better for you!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_0:
# 654 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER}, welcome, welcome! Have you\n"
	.string "explored the {COLOR GREEN}Acrisia Mountains{COLOR DARK_GRAY} to the\l"
	.string "west yet? The {COLOR GREEN}second Gym{COLOR DARK_GRAY} is there!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_1:
# 659 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Not yet, hm? That's fine, the Mountains\n"
	.string "are a tough area. Only a small area is\l"
	.string "safe to explore, so it's packed with\l"
	.string "trainers.\p"
	.string "Come back and check in with me when you\n"
	.string "have your second Gym Badge. And\l"
	.string "remember to heal your Pokémon at the\l"
	.string "machine to your right!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_2:
# 669 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Incredible! You're becoming a great\n"
	.string "Pokémon trainer. As promised, here's\l"
	.string "something exciting for you!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_3:
# 673 "data/maps/AcrisiaCity_University/scripts.pory"
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

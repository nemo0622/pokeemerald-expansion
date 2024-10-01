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
# 126 "data/maps/AcrisiaCity_University/scripts.pory"
	warpsilent MAP_ACRISIA_CITY_UNIVERSITY, 6, 12
# 127 "data/maps/AcrisiaCity_University/scripts.pory"
	waitstate
# 133 "data/maps/AcrisiaCity_University/scripts.pory"
	releaseall
	end


# 138 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_NikoStopsPlayer:
# 140 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_left
# 140 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_left
# 141 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_left
# 141 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_left
# 142 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 143 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 146 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_NikoReturnToStation:
# 148 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 148 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 149 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 150 "data/maps/AcrisiaCity_University/scripts.pory"
	face_up
# 151 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 154 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_ProfessorUp:
# 156 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 156 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 156 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 156 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 156 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 157 "data/maps/AcrisiaCity_University/scripts.pory"
	face_right
# 158 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 161 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerFollowProfessorUp:
# 163 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 163 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 163 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 163 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 163 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 164 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 165 "data/maps/AcrisiaCity_University/scripts.pory"
	face_up
# 166 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 169 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_RaniaGreetsPlayer:
# 171 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 172 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 172 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 172 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 173 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 173 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 174 "data/maps/AcrisiaCity_University/scripts.pory"
	face_down
# 175 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 178 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_RaniaReturnsToStation:
# 180 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 180 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 181 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 181 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 181 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 182 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 183 "data/maps/AcrisiaCity_University/scripts.pory"
	face_left
# 184 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 187 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_ProfessorToMainPosition:
# 189 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 189 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 189 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 189 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 189 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 190 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 190 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 191 "data/maps/AcrisiaCity_University/scripts.pory"
	face_down
# 192 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 195 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerFollowProfessorToMainPosition:
# 197 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 197 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 197 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 197 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 197 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 197 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 198 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 199 "data/maps/AcrisiaCity_University/scripts.pory"
	face_up
# 200 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 203 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_ProfessorTriesToFindDex_1:
# 205 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 206 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 207 "data/maps/AcrisiaCity_University/scripts.pory"
	face_left
# 208 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 208 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 208 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 209 "data/maps/AcrisiaCity_University/scripts.pory"
	emote_question_mark
# 210 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 211 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_up
# 212 "data/maps/AcrisiaCity_University/scripts.pory"
	face_right
# 213 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 213 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 214 "data/maps/AcrisiaCity_University/scripts.pory"
	emote_exclamation_mark
# 215 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 216 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_down
# 216 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_down
# 217 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 217 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 217 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 218 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_up
# 218 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_up
# 219 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 222 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_ProfessorTriesToFindDex_2:
# 224 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 224 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 224 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 225 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_right
# 225 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_right
# 226 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 226 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 226 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 227 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 227 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 227 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 228 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 228 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 229 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 229 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 230 "data/maps/AcrisiaCity_University/scripts.pory"
	face_down
# 231 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

AcrisiaCity_University_EventScript_Duskull::
# 238 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 239 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_Duskull_Text_0
# 240 "data/maps/AcrisiaCity_University/scripts.pory"
	playmoncry SPECIES_DUSKULL, CRY_MODE_NORMAL
# 241 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Duskull_Text_1
# 242 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmoncry
# 243 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 244 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end


AcrisiaCity_University_EventScript_Niko::
# 250 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 251 "data/maps/AcrisiaCity_University/scripts.pory"
	faceplayer
# 252 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 253 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_0
# 254 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 255 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end


AcrisiaCity_University_EventScript_Rania::
# 261 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 262 "data/maps/AcrisiaCity_University/scripts.pory"
	faceplayer
# 263 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 264 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_0
# 265 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 266 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end


AcrisiaCity_EventScript_ProfessorElia::
# 276 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 277 "data/maps/AcrisiaCity_University/scripts.pory"
	faceplayer
# 279 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 2
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_2
AcrisiaCity_EventScript_ProfessorElia_1:
# 325 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_EventScript_ProfessorElia_2:
# 281 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 282 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_EventScript_ProfessorElia_Text_0, MSGBOX_YESNO
# 283 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_4
# 290 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_set FLAG_FOUND_LOST_DELIVERY, AcrisiaCity_EventScript_ProfessorElia_7
# 319 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_EventScript_ProfessorElia_Text_6
# 320 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_EventScript_ProfessorElia_1

AcrisiaCity_EventScript_ProfessorElia_4:
# 285 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_EventScript_ProfessorElia_Text_1
# 286 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_EventScript_ProfessorElia_1

AcrisiaCity_EventScript_ProfessorElia_7:
# 292 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_EventScript_ProfessorElia_Text_2
# 293 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 294 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 295 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 296 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 297 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 298 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 299 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 300 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 301 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 302 "data/maps/AcrisiaCity_University/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 303 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_EventScript_ProfessorElia_Text_3
# 304 "data/maps/AcrisiaCity_University/scripts.pory"
	waitfanfare
# 305 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 306 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 307 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 308 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 309 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 310 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_EventScript_ProfessorElia_Text_4
# 311 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 312 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 313 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_EventScript_ProfessorElia_Text_5
# 314 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 315 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 3
	goto AcrisiaCity_EventScript_ProfessorElia_1


AcrisiaCity_University_EventScript_PlayerIntro_Text_0:
# 18 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Prof. Elia$"

AcrisiaCity_University_EventScript_PlayerIntro_Text_1:
# 19 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Welcome to the Agria University! Well,\n"
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
	.string "Whoops, my bad, Niko!$"

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
	.string "Pokémon. Now, back to work.$"

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
	.string "Yia sou! I'm Rania, and you must be... the\n"
	.string "new field assistant, {PLAYER}!\p"
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
	.string "Sooo... it looks like I don't quite have\n"
	.string "an extra Pokédex on hand. I ordered a\l"
	.string "new set of lab equipment which included\l"
	.string "a new one, but it seems like that hasn't\l"
	.string "come yet...$"

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
	.string "shipments here stops at a {COLOR GREEN}Stable{COLOR DARK_GRAY} in the\l"
	.string "woods. Why don't you check there?$"

AcrisiaCity_University_EventScript_Duskull_Text_0:
# 239 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Duskull$"

AcrisiaCity_University_EventScript_Duskull_Text_1:
# 241 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Bwraaahhh!$"

AcrisiaCity_University_EventScript_Niko_Text_0:
# 253 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Come to check out my research,\n"
	.string "{PLAYER}? I'm observing the Duskull\l"
	.string "to see how it behaves.\p"
	.string "There are old folktales of Ghost-type\n"
	.string "Pokémon being evil, but this Duskull\l"
	.string "seems totally friendly!$"

AcrisiaCity_University_EventScript_Rania_Text_0:
# 264 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Yia sou, {PLAYER}! You doin' well?\p"
	.string "Me? I'm stuck in here doing data\n"
	.string "analysis. Fieldwork information needs\l"
	.string "to be sorted into spreadsheets and\l"
	.string "analyzed, that's where I come in! It's\l"
	.string "sure not the most exciting part, but I\l"
	.string "find out some cool stuff.$"

AcrisiaCity_EventScript_ProfessorElia_Text_0:
# 282 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Welcome back, {PLAYER}! Did you find\n"
	.string "that {COLOR GREEN}lost delivery{COLOR DARK_GRAY} yet?$"

AcrisiaCity_EventScript_ProfessorElia_Text_1:
# 285 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Hmm, that's concerning... local crime\n"
	.string "groups have been active lately, I'm\l"
	.string "nervous that the delivery cart was\l"
	.string "attacked. Keep us updated on the\l"
	.string "situation.$"

AcrisiaCity_EventScript_ProfessorElia_Text_2:
# 292 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Ochi! The delivery cart was attacked!?\n"
	.string "Well I'm glad everyone is okay...\p"
	.string "Here, I'll enable your Pokédex.$"

AcrisiaCity_EventScript_ProfessorElia_Text_3:
# 303 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER}'s Pokédex was enabled!$"

AcrisiaCity_EventScript_ProfessorElia_Text_4:
# 310 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "I think it's a good idea to train your\n"
	.string "Pokémon for battle, in case more\l"
	.string "troublemakers come around. Why don't\l"
	.string "you {COLOR GREEN}battle the Pokémon Gyms{COLOR DARK_GRAY} you find\l"
	.string "while you're exploring the Ilios Region?\l"
	.string "That'll get your Pokémon raring to go!$"

AcrisiaCity_EventScript_ProfessorElia_Text_5:
# 313 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You're all set to go, {PLAYER}!\n"
	.string "Capture Pokémon, collect data, and get\l"
	.string "stronger! Oh, and make sure to help\l"
	.string "people when you can. Good luck!$"

AcrisiaCity_EventScript_ProfessorElia_Text_6:
# 319 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You did? Well where's the Pokédex?\n"
	.string "...Come on {PLAYER}, we need to make\l"
	.string "sure the delivery folks are alright! Go\l"
	.string "look again!$"

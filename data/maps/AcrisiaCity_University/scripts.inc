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
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 254 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_0
# 255 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 256 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end


AcrisiaCity_University_EventScript_Rania::
# 262 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 263 "data/maps/AcrisiaCity_University/scripts.pory"
	faceplayer
# 264 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 265 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_0
# 266 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 267 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end


AcrisiaCity_University_EventScript_RaniaShowsHealspot::
# 277 "data/maps/AcrisiaCity_University/scripts.pory"
	lockall
# 278 "data/maps/AcrisiaCity_University/scripts.pory"
	emote 4, EMOTE_EXCLAM
# 279 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 4, AcrisiaCity_University_Movement_RaniaShowsHealing
# 280 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 281 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 282 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 284 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 285 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_RaniaShowsHealspot_Text_0
# 286 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 287 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 288 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 289 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 290 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_RaniaShowsHealspot_Text_1
# 291 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 292 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 293 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 294 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 295 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_RaniaShowsHealspot_Text_2
# 296 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 297 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 4, AcrisiaCity_University_Movement_RaniaDoneShowingHealing
# 298 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 299 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_SHOWN_ACRISIA_HEALSPOT
# 300 "data/maps/AcrisiaCity_University/scripts.pory"
	releaseall
	end


# 304 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_RaniaShowsHealing:
# 306 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 307 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 307 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 308 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 308 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 308 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 308 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 309 "data/maps/AcrisiaCity_University/scripts.pory"
	face_down
# 310 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 313 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_RaniaDoneShowingHealing:
# 315 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 315 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 315 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 315 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 316 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 316 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 317 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 318 "data/maps/AcrisiaCity_University/scripts.pory"
	face_left
# 319 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

AcrisiaCity_University_HealParty::
# 324 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 325 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_HealParty_Text_0
# 326 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_HealParty_Text_1
# 327 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 328 "data/maps/AcrisiaCity_University/scripts.pory"
	special HealPlayerParty
# 329 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 120
# 330 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_HealParty_Text_0
# 331 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_HealParty_Text_2
# 332 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 333 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end


AcrisiaCity_EventScript_ProfessorElia::
# 343 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 344 "data/maps/AcrisiaCity_University/scripts.pory"
	faceplayer
# 346 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 2
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_2
# 350 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 3
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_3
# 354 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 4
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_4
# 363 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaRatePokedex
AcrisiaCity_EventScript_ProfessorElia_1:
# 366 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_EventScript_ProfessorElia_2:
# 348 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck
	goto AcrisiaCity_EventScript_ProfessorElia_1

AcrisiaCity_EventScript_ProfessorElia_3:
# 352 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaCheckBadgeOne
	goto AcrisiaCity_EventScript_ProfessorElia_1

AcrisiaCity_EventScript_ProfessorElia_4:
# 356 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaCheckBadgeTwo
	goto AcrisiaCity_EventScript_ProfessorElia_1


AcrisiaCity_University_EventScript_EliaRatePokedex::
# 376 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 377 "data/maps/AcrisiaCity_University/scripts.pory"
	goto ProfBirch_EventScript_RatePokedex
# 378 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 379 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end


AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck::
# 385 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 386 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_0, MSGBOX_YESNO
# 387 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_2
# 394 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_set FLAG_FOUND_LOST_DELIVERY, AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_5
# 426 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_6
# 427 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_1:
# 430 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_2:
# 389 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_1
# 390 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_1

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_5:
# 396 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_2
# 397 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 398 "data/maps/AcrisiaCity_University/scripts.pory"
	removeobject ITEM_PARCEL
# 399 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 400 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 401 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 402 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 403 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 404 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 405 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 406 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 407 "data/maps/AcrisiaCity_University/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 408 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_3
# 409 "data/maps/AcrisiaCity_University/scripts.pory"
	waitfanfare
# 410 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 411 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 412 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 413 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 414 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 415 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_4
# 416 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 417 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 418 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_5
# 419 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 422 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 3
	goto AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_1


AcrisiaCity_University_EventScript_EliaCheckBadgeOne::
# 436 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 437 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_0
# 438 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 439 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, AcrisiaCity_University_EventScript_EliaCheckBadgeOne_2
# 447 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 448 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_2
# 449 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 450 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
# 451 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 452 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_3
# 453 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 454 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 4
AcrisiaCity_University_EventScript_EliaCheckBadgeOne_1:
# 456 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_2:
# 441 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 442 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_1
# 443 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaCheckBadgeOne_1


AcrisiaCity_University_EventScript_EliaCheckBadgeTwo::
# 462 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 463 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_0
# 464 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 465 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_2
# 477 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 478 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_2
# 479 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 480 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 481 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 482 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_3
# 483 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 485 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 5
AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_1:
# 487 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_2:
# 467 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 468 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_1
# 469 "data/maps/AcrisiaCity_University/scripts.pory"
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
# 254 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Come to check out my research,\n"
	.string "{PLAYER}? I'm observing the Duskull\l"
	.string "to see how it behaves.\p"
	.string "There are old folktales of Ghost-type\n"
	.string "Pokémon being evil, but this Duskull\l"
	.string "seems totally friendly!$"

AcrisiaCity_University_EventScript_Rania_Text_0:
# 265 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Yia sou, {PLAYER}! You doin' well?\p"
	.string "Me? I'm stuck in here doing data\n"
	.string "analysis. Fieldwork information needs\l"
	.string "to be sorted into spreadsheets and\l"
	.string "analyzed, that's where I come in! It's\l"
	.string "sure not the most exciting part, but I\l"
	.string "find out some cool stuff.$"

AcrisiaCity_University_EventScript_RaniaShowsHealspot_Text_0:
# 285 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Wait, {PLAYER}! Before you go, take a\n"
	.string "look at this.$"

AcrisiaCity_University_EventScript_RaniaShowsHealspot_Text_1:
# 290 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "This machine is a Pokémon Healing\n"
	.string "device! Whenever your Pokémon are\l"
	.string "feeling low, come interact with it to\l"
	.string "heal them up!$"

AcrisiaCity_University_EventScript_RaniaShowsHealspot_Text_2:
# 295 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Well, good luck on your first University\n"
	.string "assignment! Make sure to stop back in\l"
	.string "sometimes!$"

AcrisiaCity_University_HealParty_Text_0:
# 325 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Computer$"

AcrisiaCity_University_HealParty_Text_1:
# 326 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "-bzzt bzzt-\l"
	.string "Healing Pokémon...$"

AcrisiaCity_University_HealParty_Text_2:
# 331 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Pokémon are healthy and ready to go.$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_0:
# 386 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Welcome back, {PLAYER}! Did you find\n"
	.string "that {COLOR GREEN}lost delivery{COLOR DARK_GRAY} yet?$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_1:
# 389 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Hmm, that's concerning... local crime\n"
	.string "groups have been active lately, I'm\l"
	.string "nervous that the delivery cart was\l"
	.string "attacked. Keep us updated on the\l"
	.string "situation.$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_2:
# 396 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Heavens! The delivery cart was\n"
	.string "attacked!? Well I'm glad everyone is\l"
	.string "okay...\p"
	.string "Here, I'll enable your Pokédex.$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_3:
# 408 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER}'s Pokédex was enabled!$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_4:
# 415 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "I think it's a good idea to train your\n"
	.string "Pokémon for battle, in case more\l"
	.string "troublemakers come around. Why don't\l"
	.string "you {COLOR GREEN}battle the Pokémon Gyms{COLOR DARK_GRAY} you find\l"
	.string "while you're exploring the Ilios Region?\l"
	.string "That'll get your Pokémon raring to go!$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_5:
# 418 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "The {COLOR GREEN}first Gym{COLOR DARK_GRAY} is south of here, in\n"
	.string "{COLOR GREEN}Jusmail Town{COLOR DARK_GRAY}. Come back to me with the\l"
	.string "{COLOR GREEN}first Gym Badge{COLOR DARK_GRAY} to show me your skill as\l"
	.string "a trainer!$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_6:
# 426 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You did? Well where's the Pokédex?\n"
	.string "...Come on {PLAYER}, we need to make\l"
	.string "sure the delivery folks are alright! Go\l"
	.string "look again!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_0:
# 437 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Yia sou, welcome back {PLAYER}! Have\n"
	.string "you made it to the {COLOR GREEN}Jusmail Town Gym{COLOR DARK_GRAY}\l"
	.string "yet?$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_1:
# 442 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Still training, eh? No rush, no rush!\p"
	.string "Come back to the University and check\n"
	.string "in with me when you have your first Gym\l"
	.string "Badge.$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_2:
# 448 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Well done! You're well on your way to\n"
	.string "being a great trainer.\p"
	.string "Here, I wanted to give you something to\n"
	.string "celebrate!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_3:
# 452 "data/maps/AcrisiaCity_University/scripts.pory"
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
# 463 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER}, welcome, welcome! Have you\n"
	.string "explored the {COLOR GREEN}Acrisia Mountains{COLOR DARK_GRAY} to the\l"
	.string "west yet? The {COLOR GREEN}second Gym{COLOR DARK_GRAY} is there!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_1:
# 468 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Not yet, hm? That's fine, the Mountains\n"
	.string "are a tough area. Only a small area is\l"
	.string "safe to explore, so it's packed with\l"
	.string "trainers.\p"
	.string "Come back and check in with me when you\n"
	.string "have your second Gym Badge. And\l"
	.string "remember to heal your Pokémon at the\l"
	.string "machine to your right!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_2:
# 478 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Incredible! You're becoming a great\n"
	.string "Pokémon trainer. As promised, here's\l"
	.string "something exciting for you!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_3:
# 482 "data/maps/AcrisiaCity_University/scripts.pory"
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

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
	closemessage
# 130 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 1
# 131 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 132 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_ChoosePokemon_Text_1
# 133 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 135 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 136 "data/maps/AcrisiaCity_University/scripts.pory"
	clearflag FLAG_HIDE_SECOND_PROFESSOR_SPRITE
# 137 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_HIDE_FIRST_PROFESSOR_SPRITE
# 138 "data/maps/AcrisiaCity_University/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 139 "data/maps/AcrisiaCity_University/scripts.pory"
	setrespawn HEAL_LOCATION_ACRISIA_CITY
# 140 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_BERRY_TREES_PLANTED, 0
# 142 "data/maps/AcrisiaCity_University/scripts.pory"
	startquest QUEST_FIND_POKEDEX
# 144 "data/maps/AcrisiaCity_University/scripts.pory"
	warpsilent MAP_ACRISIA_CITY_UNIVERSITY, 6, 12
# 145 "data/maps/AcrisiaCity_University/scripts.pory"
	waitstate
# 151 "data/maps/AcrisiaCity_University/scripts.pory"
	releaseall
	end


# 155 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_NikoStopsPlayer:
# 157 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_left
# 157 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_left
# 158 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_left
# 158 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_left
# 159 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 160 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 163 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_NikoReturnToStation:
# 165 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 165 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 166 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 167 "data/maps/AcrisiaCity_University/scripts.pory"
	face_up
# 168 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 171 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_ProfessorUp:
# 173 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 173 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 173 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 173 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 173 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 174 "data/maps/AcrisiaCity_University/scripts.pory"
	face_right
# 175 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 178 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerFollowProfessorUp:
# 180 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 180 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 180 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 180 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 180 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 181 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 182 "data/maps/AcrisiaCity_University/scripts.pory"
	face_up
# 183 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 186 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_RaniaGreetsPlayer:
# 188 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 189 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 189 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 189 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 190 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 190 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 191 "data/maps/AcrisiaCity_University/scripts.pory"
	face_down
# 192 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 195 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_RaniaReturnsToStation:
# 197 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 197 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 198 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 198 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 198 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 199 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 200 "data/maps/AcrisiaCity_University/scripts.pory"
	face_left
# 201 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 204 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_ProfessorToMainPosition:
# 206 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 206 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 206 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 206 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 206 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 207 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 207 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 208 "data/maps/AcrisiaCity_University/scripts.pory"
	face_down
# 209 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 212 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerFollowProfessorToMainPosition:
# 214 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 214 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 214 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 214 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 214 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 214 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 215 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 216 "data/maps/AcrisiaCity_University/scripts.pory"
	face_up
# 217 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 220 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_ProfessorTriesToFindDex_1:
# 222 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_up
# 223 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 224 "data/maps/AcrisiaCity_University/scripts.pory"
	face_left
# 225 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 225 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 225 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 226 "data/maps/AcrisiaCity_University/scripts.pory"
	emote_question_mark
# 227 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 228 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_up
# 229 "data/maps/AcrisiaCity_University/scripts.pory"
	face_right
# 230 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 230 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 231 "data/maps/AcrisiaCity_University/scripts.pory"
	emote_exclamation_mark
# 232 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 233 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_down
# 233 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_down
# 234 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 234 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 234 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 235 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_up
# 235 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_up
# 236 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

# 239 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_ProfessorTriesToFindDex_2:
# 241 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 241 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 241 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_fast_right
# 242 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_right
# 242 "data/maps/AcrisiaCity_University/scripts.pory"
	jump_in_place_right
# 243 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 243 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 243 "data/maps/AcrisiaCity_University/scripts.pory"
	delay_16
# 244 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 244 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 244 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 245 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 245 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 246 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 246 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_left
# 247 "data/maps/AcrisiaCity_University/scripts.pory"
	face_down
# 248 "data/maps/AcrisiaCity_University/scripts.pory"
	step_end

AcrisiaCity_University_EventScript_Duskull::
# 255 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 256 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_Duskull_Text_0
# 257 "data/maps/AcrisiaCity_University/scripts.pory"
	playmoncry SPECIES_DUSKULL, CRY_MODE_NORMAL
# 258 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Duskull_Text_1
# 259 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmoncry
# 260 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 261 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end


AcrisiaCity_University_EventScript_Niko::
# 267 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 268 "data/maps/AcrisiaCity_University/scripts.pory"
	faceplayer
# 269 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 0
	goto_if_eq AcrisiaCity_University_EventScript_Niko_2
# 275 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 1
	goto_if_eq AcrisiaCity_University_EventScript_Niko_3
# 286 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 2
	goto_if_eq AcrisiaCity_University_EventScript_Niko_4
# 292 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 3
	goto_if_eq AcrisiaCity_University_EventScript_Niko_5
# 303 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 4
	goto_if_eq AcrisiaCity_University_EventScript_Niko_6
# 309 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 5
	goto_if_eq AcrisiaCity_University_EventScript_Niko_7
AcrisiaCity_University_EventScript_Niko_1:
# 315 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_Niko_2:
# 271 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 272 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_0
# 273 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_3:
# 277 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 278 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_1
# 279 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 280 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_NEST_BALL, 3
# 281 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 282 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_2
# 283 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 284 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_NIKO_STATE, 2
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_4:
# 288 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 289 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_3
# 290 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_5:
# 294 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 295 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_4
# 296 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 297 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_TIMER_BALL, 3
# 298 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 299 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_5
# 300 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 301 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_NIKO_STATE, 4
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_6:
# 305 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 306 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_6
# 307 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_7:
# 311 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 312 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_7
# 313 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Niko_1


AcrisiaCity_University_EventScript_Rania::
# 321 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 322 "data/maps/AcrisiaCity_University/scripts.pory"
	faceplayer
# 323 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 0
	goto_if_eq AcrisiaCity_University_EventScript_Rania_2
# 329 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 1
	goto_if_eq AcrisiaCity_University_EventScript_Rania_3
# 335 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 2
	goto_if_eq AcrisiaCity_University_EventScript_Rania_4
# 346 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 3
	goto_if_eq AcrisiaCity_University_EventScript_Rania_5
# 352 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 4
	goto_if_eq AcrisiaCity_University_EventScript_Rania_6
AcrisiaCity_University_EventScript_Rania_1:
# 358 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_Rania_2:
# 325 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 326 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_0
# 327 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_3:
# 331 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 332 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_1
# 333 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_4:
# 337 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 338 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_2
# 339 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 340 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_WISHING_STAR, 2
# 341 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 342 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_3
# 343 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 344 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_RANIA_STATE, 3
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_5:
# 348 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 349 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_4
# 350 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_6:
# 354 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 355 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_5
# 356 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Rania_1


AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Trigger1::
# 370 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_1, 1
# 371 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs
	return


AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Trigger2::
# 375 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_1, 2
# 376 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs
	return


AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Trigger3::
# 380 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_1, 3
# 381 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs
	return


AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Trigger4::
# 385 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_1, 4
# 386 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs
	return


AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs::
# 392 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 393 "data/maps/AcrisiaCity_University/scripts.pory"
	emote 3, EMOTE_EXCLAM
# 394 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 395 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 396 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 397 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_0
# 398 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 399 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_2
# 403 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_3
# 407 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_4
# 411 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_5
AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1:
# 415 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 417 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 418 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_1, MSGBOX_YESNO
# 419 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_11
# 431 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 432 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_4
# 433 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 434 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 435 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 30
# 436 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_GREAT_BALL, 3
# 437 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 438 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_5
# 439 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_10:
# 441 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 442 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 443 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 4
# 444 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_2:
# 401 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerGoesToNiko_1
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_3:
# 405 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerGoesToNiko_2
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_4:
# 409 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerGoesToNiko_3
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_5:
# 413 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerGoesToNiko_4
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_11:
# 421 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 422 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_2
# 423 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 424 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_POKE_BALL, 3
# 425 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 426 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_3
# 427 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_10


# 448 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerGoesToNiko_1:
# 450 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 450 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 451 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 451 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 451 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 451 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
	step_end

# 453 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerGoesToNiko_2:
# 455 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 455 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 456 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 456 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 456 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
	step_end

# 458 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerGoesToNiko_3:
# 460 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 460 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 461 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 461 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
	step_end

# 463 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerGoesToNiko_4:
# 465 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 465 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 466 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
	step_end

AcrisiaCity_EventScript_ProfessorElia::
# 475 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 476 "data/maps/AcrisiaCity_University/scripts.pory"
	faceplayer
# 478 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 2
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_2
# 482 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 3
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_3
# 482 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 4
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_3
# 486 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 5
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_4
# 495 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaRatePokedex
AcrisiaCity_EventScript_ProfessorElia_1:
# 498 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_EventScript_ProfessorElia_2:
# 480 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck
	goto AcrisiaCity_EventScript_ProfessorElia_1

AcrisiaCity_EventScript_ProfessorElia_3:
# 484 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaCheckBadgeOne
	goto AcrisiaCity_EventScript_ProfessorElia_1

AcrisiaCity_EventScript_ProfessorElia_4:
# 488 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaCheckBadgeTwo
	goto AcrisiaCity_EventScript_ProfessorElia_1


AcrisiaCity_University_EventScript_EliaRatePokedex::
# 510 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 511 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_0, MSGBOX_YESNO
# 512 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_University_EventScript_EliaRatePokedex_2
# 521 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_0x8004, 0
# 522 "data/maps/AcrisiaCity_University/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 523 "data/maps/AcrisiaCity_University/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 524 "data/maps/AcrisiaCity_University/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 525 "data/maps/AcrisiaCity_University/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 526 "data/maps/AcrisiaCity_University/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 527 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 528 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_2
# 531 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 10
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_6
AcrisiaCity_University_EventScript_EliaRatePokedex_4:
# 542 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 25
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_11
AcrisiaCity_University_EventScript_EliaRatePokedex_9:
# 553 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 50
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_16
AcrisiaCity_University_EventScript_EliaRatePokedex_14:
# 564 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 100
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_21
AcrisiaCity_University_EventScript_EliaRatePokedex_19:
# 585 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 135
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_26
AcrisiaCity_University_EventScript_EliaRatePokedex_24:
# 606 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 170
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_31
AcrisiaCity_University_EventScript_EliaRatePokedex_29:
# 627 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 200
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_36
AcrisiaCity_University_EventScript_EliaRatePokedex_34:
# 638 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 250
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_41
AcrisiaCity_University_EventScript_EliaRatePokedex_39:
# 649 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 300
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_46
AcrisiaCity_University_EventScript_EliaRatePokedex_44:
# 660 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 400
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_50
# 692 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 693 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_27
# 694 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
AcrisiaCity_University_EventScript_EliaRatePokedex_49:
# 697 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 698 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaRatePokedex_2:
# 514 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 515 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_1
# 516 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 517 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaRatePokedex_5:
# 533 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_01
# 534 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 535 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_3
# 536 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 537 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_NUGGET
# 538 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 539 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_4
# 540 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_4

AcrisiaCity_University_EventScript_EliaRatePokedex_6:
# 531 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_01, AcrisiaCity_University_EventScript_EliaRatePokedex_5
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_4

AcrisiaCity_University_EventScript_EliaRatePokedex_10:
# 544 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_02
# 545 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 546 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_5
# 547 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 548 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_LOADED_DICE
# 549 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 550 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_6
# 551 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_9

AcrisiaCity_University_EventScript_EliaRatePokedex_11:
# 542 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_02, AcrisiaCity_University_EventScript_EliaRatePokedex_10
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_9

AcrisiaCity_University_EventScript_EliaRatePokedex_15:
# 555 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_03
# 556 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 557 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_7
# 558 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 559 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_TM_RETURN
# 560 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 561 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_8
# 562 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_14

AcrisiaCity_University_EventScript_EliaRatePokedex_16:
# 553 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_03, AcrisiaCity_University_EventScript_EliaRatePokedex_15
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_14

AcrisiaCity_University_EventScript_EliaRatePokedex_20:
# 566 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_04
# 567 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 568 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_9
# 569 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 570 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ROWLET
# 571 "data/maps/AcrisiaCity_University/scripts.pory"
	givemon SPECIES_ROWLET, 10
# 572 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LITTEN
# 573 "data/maps/AcrisiaCity_University/scripts.pory"
	givemon SPECIES_LITTEN, 10
# 574 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_POPPLIO
# 575 "data/maps/AcrisiaCity_University/scripts.pory"
	givemon SPECIES_POPPLIO, 10
# 576 "data/maps/AcrisiaCity_University/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 577 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_10
# 578 "data/maps/AcrisiaCity_University/scripts.pory"
	waitfanfare
# 579 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 580 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 581 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 582 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_11
# 583 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_19

AcrisiaCity_University_EventScript_EliaRatePokedex_21:
# 564 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_04, AcrisiaCity_University_EventScript_EliaRatePokedex_20
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_19

AcrisiaCity_University_EventScript_EliaRatePokedex_25:
# 587 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_05
# 588 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 589 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_12
# 590 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 591 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHESPIN
# 592 "data/maps/AcrisiaCity_University/scripts.pory"
	givemon SPECIES_CHESPIN, 10
# 593 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_FENNEKIN
# 594 "data/maps/AcrisiaCity_University/scripts.pory"
	givemon SPECIES_FENNEKIN, 10
# 595 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_FROAKIE
# 596 "data/maps/AcrisiaCity_University/scripts.pory"
	givemon SPECIES_FROAKIE, 10
# 597 "data/maps/AcrisiaCity_University/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 598 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_13
# 599 "data/maps/AcrisiaCity_University/scripts.pory"
	waitfanfare
# 600 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 601 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 602 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 603 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_11
# 604 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_24

AcrisiaCity_University_EventScript_EliaRatePokedex_26:
# 585 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_05, AcrisiaCity_University_EventScript_EliaRatePokedex_25
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_24

AcrisiaCity_University_EventScript_EliaRatePokedex_30:
# 608 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_06
# 609 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 610 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_14
# 611 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 612 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SPRIGATITO
# 613 "data/maps/AcrisiaCity_University/scripts.pory"
	givemon SPECIES_SPRIGATITO, 10
# 614 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_FUECOCO
# 615 "data/maps/AcrisiaCity_University/scripts.pory"
	givemon SPECIES_FUECOCO, 10
# 616 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_QUAXLY
# 617 "data/maps/AcrisiaCity_University/scripts.pory"
	givemon SPECIES_QUAXLY, 10
# 618 "data/maps/AcrisiaCity_University/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 619 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_15
# 620 "data/maps/AcrisiaCity_University/scripts.pory"
	waitfanfare
# 621 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 622 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 623 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 624 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_16
# 625 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_29

AcrisiaCity_University_EventScript_EliaRatePokedex_31:
# 606 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_06, AcrisiaCity_University_EventScript_EliaRatePokedex_30
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_29

AcrisiaCity_University_EventScript_EliaRatePokedex_35:
# 629 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_07
# 630 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 631 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_17
# 632 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 633 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_OVAL_CHARM
# 634 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 635 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_18
# 636 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_34

AcrisiaCity_University_EventScript_EliaRatePokedex_36:
# 627 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_07, AcrisiaCity_University_EventScript_EliaRatePokedex_35
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_34

AcrisiaCity_University_EventScript_EliaRatePokedex_40:
# 640 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_08
# 641 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 642 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_19
# 643 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 644 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_LEFTOVERS, 3
# 645 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 646 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_20
# 647 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_39

AcrisiaCity_University_EventScript_EliaRatePokedex_41:
# 638 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_08, AcrisiaCity_University_EventScript_EliaRatePokedex_40
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_39

AcrisiaCity_University_EventScript_EliaRatePokedex_45:
# 651 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_09
# 652 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 653 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_21
# 654 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 655 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_SHINY_CHARM
# 656 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 657 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_22
# 658 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_44

AcrisiaCity_University_EventScript_EliaRatePokedex_46:
# 649 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_09, AcrisiaCity_University_EventScript_EliaRatePokedex_45
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_44

AcrisiaCity_University_EventScript_EliaRatePokedex_50:
# 662 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_10, AcrisiaCity_University_EventScript_EliaRatePokedex_53
# 684 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 685 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_26
# 686 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_49

AcrisiaCity_University_EventScript_EliaRatePokedex_53:
# 664 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_10
# 665 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 666 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_23
# 667 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 668 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 30
# 669 "data/maps/AcrisiaCity_University/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 670 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_24
# 671 "data/maps/AcrisiaCity_University/scripts.pory"
	waitfanfare
# 672 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 673 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 30
# 674 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 675 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_25
# 676 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 678 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 679 "data/maps/AcrisiaCity_University/scripts.pory"
	special DoDomeConfetti
# 680 "data/maps/AcrisiaCity_University/scripts.pory"
	completequest QUEST_COMPLETE_DEX
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_49


AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck::
# 704 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 705 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_0, MSGBOX_YESNO
# 706 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_2
# 713 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_set FLAG_FOUND_LOST_DELIVERY, AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_5
# 757 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_7
# 758 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_1:
# 761 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_2:
# 708 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_1
# 709 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_1

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_5:
# 715 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_2
# 716 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 717 "data/maps/AcrisiaCity_University/scripts.pory"
	removeitem ITEM_PARCEL
# 718 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 719 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 720 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 721 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 722 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 723 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 724 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 725 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 726 "data/maps/AcrisiaCity_University/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 727 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_3
# 728 "data/maps/AcrisiaCity_University/scripts.pory"
	waitfanfare
# 729 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 730 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 731 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 732 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 733 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 734 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_4
# 735 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 736 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 737 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_EXP_SHARE_ENABLED
# 738 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 739 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 740 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_5
# 741 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 742 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 743 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_6
# 744 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 746 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 747 "data/maps/AcrisiaCity_University/scripts.pory"
	completequest QUEST_FIND_POKEDEX
# 748 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 749 "data/maps/AcrisiaCity_University/scripts.pory"
	startquest QUEST_GYM_1
# 752 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 3
# 753 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_HIDE_RANIA_JUSMAIL
	goto AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_1


AcrisiaCity_University_EventScript_EliaCheckBadgeOne::
# 767 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 768 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_0
# 769 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 770 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, AcrisiaCity_University_EventScript_EliaCheckBadgeOne_2
# 778 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 779 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_2
# 780 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 781 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
# 782 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 783 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_3
# 784 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 785 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 5
# 786 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_HIDE_RANIA_JUSMAIL
# 787 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNLOCKED_ACRISIA_MTNS
# 789 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 790 "data/maps/AcrisiaCity_University/scripts.pory"
	completequest QUEST_CHECK_AFTER_GYM_1
# 791 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 792 "data/maps/AcrisiaCity_University/scripts.pory"
	startquest QUEST_GYM_2
AcrisiaCity_University_EventScript_EliaCheckBadgeOne_1:
# 794 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_2:
# 772 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 773 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_1
# 774 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaCheckBadgeOne_1


AcrisiaCity_University_EventScript_EliaCheckBadgeTwo::
# 800 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 801 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_0
# 802 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 803 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_2
# 815 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 816 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_2
# 817 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 818 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 819 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 820 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_3
# 821 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 822 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 823 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 824 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 825 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 826 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 827 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 828 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 829 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 830 "data/maps/AcrisiaCity_University/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 831 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_4
# 832 "data/maps/AcrisiaCity_University/scripts.pory"
	waitfanfare
# 833 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 834 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 835 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 836 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_5
# 837 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 838 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 839 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_6
# 840 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 842 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 6
# 844 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 845 "data/maps/AcrisiaCity_University/scripts.pory"
	completequest QUEST_CHECK_AFTER_GYM_2
# 846 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 847 "data/maps/AcrisiaCity_University/scripts.pory"
	startquest QUEST_GYM_3
# 848 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 849 "data/maps/AcrisiaCity_University/scripts.pory"
	startquest QUEST_COMPLETE_DEX
AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_1:
# 851 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_2:
# 805 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 806 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_1
# 807 "data/maps/AcrisiaCity_University/scripts.pory"
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
# 132 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Ah, {STR_VAR_1}! That Pokémon suits\n"
	.string "you. Now, for the task at hand: the {COLOR GREEN}lost\l"
	.string "delivery{COLOR DARK_GRAY} should be {COLOR GREEN}South{COLOR DARK_GRAY} of Acrisia\l"
	.string "City. Usually, the mover that brings our\l"
	.string "shipments here stops to rest their\l"
	.string "Pokémon in the woods. Why don't you\l"
	.string "check there?$"

AcrisiaCity_University_EventScript_Duskull_Text_0:
# 256 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Duskull$"

AcrisiaCity_University_EventScript_Duskull_Text_1:
# 258 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Bwraaahhh!$"

AcrisiaCity_University_EventScript_Niko_Text_0:
# 272 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Come to check out my research,\n"
	.string "{PLAYER}? I'm observing the Duskull\l"
	.string "to see how it behaves.\p"
	.string "There are old folktales of Ghost-type\n"
	.string "Pokémon being evil, but this Duskull\l"
	.string "seems totally friendly!$"

AcrisiaCity_University_EventScript_Niko_Text_1:
# 278 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Chaire, bud! I hear you beat Rania in\n"
	.string "Jusmail Town. After all the braggin' she\l"
	.string "did about her team, fwahaha!\p"
	.string "Ahem, hm. Getting the Harvest Badge is a\n"
	.string "big step for trainers in Ilios! Rania and\l"
	.string "I are thinking about doing it ourselves.\l"
	.string "Here's a little congratulatory gift from\l"
	.string "me!$"

AcrisiaCity_University_EventScript_Niko_Text_2:
# 282 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Those Nest Balls are good for catching\n"
	.string "young, weak Pokémon. My studies say the\l"
	.string "inside of Nest Balls remind Pokémon of\l"
	.string "their home. Isn't that cute?\p"
	.string "{COLOR GREEN}Check back in{COLOR DARK_GRAY} as you {COLOR GREEN}defeat Pokémon\n"
	.string "Gyms{COLOR DARK_GRAY}, and I'll give you little gifts and\l"
	.string "tips.$"

AcrisiaCity_University_EventScript_Niko_Text_3:
# 289 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Give those Nest Balls a shot! They work\n"
	.string "best with low-level Pokémon.\p"
	.string "{COLOR GREEN}Check back in{COLOR DARK_GRAY} as you {COLOR GREEN}defeat Pokémon\n"
	.string "Gyms{COLOR DARK_GRAY}, and I'll give you little gifts and\l"
	.string "tips.$"

AcrisiaCity_University_EventScript_Niko_Text_4:
# 295 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Ehehe, looks like I beat you to\n"
	.string "Mattaios! We're all starting to be\l"
	.string "pretty strong trainers, huh?\p"
	.string "Ah, I worked on a new Poké Ball type.\n"
	.string "Give it a test for me!$"

AcrisiaCity_University_EventScript_Niko_Text_5:
# 299 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Those Timer Balls work better when a\n"
	.string "battle begins to drag on. Hopefully\l"
	.string "they help... help you catch up to me!\l"
	.string "Fwahaha!$"

AcrisiaCity_University_EventScript_Niko_Text_6:
# 306 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER}! I'm back here to study this\n"
	.string "little Duskull. In case you can't tell, I\l"
	.string "really like Ghost-type Pokémon.$"

AcrisiaCity_University_EventScript_Niko_Text_7:
# 312 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Welcome back, {PLAYER}. I hope that\n"
	.string "run-in with Team Chimera didn't rattle\l"
	.string "you too bad.\p"
	.string "The Ilios Region is mostly peaceful, but\n"
	.string "just like anywhere else, there are some\l"
	.string "people willing to do anything to gain\l"
	.string "power.$"

AcrisiaCity_University_EventScript_Rania_Text_0:
# 326 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Chaire, {PLAYER}! You doin' well?\p"
	.string "I help out with Pokédex data analysis.\n"
	.string "Now that you're here, there's gonna be a\l"
	.string "lot more data. Come {COLOR GREEN}speak with me{COLOR DARK_GRAY} as you\l"
	.string "{COLOR GREEN}defeat Pokémon Gyms{COLOR DARK_GRAY}, I'll give you some\l"
	.string "helpful tips and items!$"

AcrisiaCity_University_EventScript_Rania_Text_1:
# 332 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Here comes {PLAYER}, the new Champ!\n"
	.string "...Ehehe, just kidding! My Pokémon are\l"
	.string "still calming down from that battle in\l"
	.string "Jusmail Town, what a fight!$"

AcrisiaCity_University_EventScript_Rania_Text_2:
# 338 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "No way, you got the Gemstone Badge?! I\n"
	.string "haven't even gotten to the Acrisia\l"
	.string "Caverns yet!\p"
	.string "Yamas! Cheers! We have to celebrate\n"
	.string "your success somehow! I'll give you\l"
	.string "this, as a start.$"

AcrisiaCity_University_EventScript_Rania_Text_3:
# 342 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Those Wishing Stars can be used at the\n"
	.string "Wishing Well in Jusmail Town. Old myths\l"
	.string "say that worthy trainers may earn\l"
	.string "something from it.\p"
	.string "Speaking of Jusmail Town, you should be\n"
	.string "able to get rid of those {COLOR GREEN}rocks blocking\l"
	.string "the path south{COLOR DARK_GRAY}! I'll be seeing you out\l"
	.string "there, {PLAYER}!$"

AcrisiaCity_University_EventScript_Rania_Text_4:
# 349 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Chaire! I come back here to heal my\n"
	.string "Pokémon and put my new Pokédex data\l"
	.string "into the computers. Don't you worry, I'll\l"
	.string "be back out soon! Get ready for some\l"
	.string "battles!$"

AcrisiaCity_University_EventScript_Rania_Text_5:
# 355 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Come back to cool off too, {PLAYER}?\n"
	.string "That fight with Team Chimera sure was\l"
	.string "something. I wonder why they're\l"
	.string "collecting Pokémon...$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_0:
# 397 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Hold up, come here {PLAYER}!$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_1:
# 418 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You remember me, right? R-right? I'm the\n"
	.string "one who works with captive Pokémon!$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_2:
# 422 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "No? Some research partner you are.\p"
	.string "I was gonna give you some good Poké\n"
	.string "balls, but now you're just getting\l"
	.string "these.$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_3:
# 426 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "A little disappointing, huh? Just like\n"
	.string "being forgotten about! Well, now we're\l"
	.string "even.\p"
	.string "Come back to the University as you\n"
	.string "catch more Pokémon. Rania and I can get\l"
	.string "you some neat stuff... if you remember\l"
	.string "me, that is.$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_4:
# 432 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Ehehe, I knew you were a real friend!\p"
	.string "I'm only supposed to give you a few\n"
	.string "Poké balls, but you made my day, so I'll\l"
	.string "make yours!$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_5:
# 438 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Use those Great Balls on Pokémon giving\n"
	.string "you a hard time! They work like a charm.\p"
	.string "Come back to the University as you fill\n"
	.string "up the Pokédex! Rania and I might have\l"
	.string "some new gear for you to try out.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_0:
# 511 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Chaire, {PLAYER}! How's your research\n"
	.string "going? I can check your Pokédex\l"
	.string "progress!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_1:
# 515 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "No? That's okay, go out there and\n"
	.string "gather some more data! I may have\l"
	.string "{COLOR GREEN}rewards{COLOR DARK_GRAY} for you next time.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_2:
# 528 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've seen {STR_VAR_1} Pokémon,\n"
	.string "and caught {STR_VAR_2} Pokémon!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_3:
# 535 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured at least 10 unique\n"
	.string "Pokémon! You're certainly capable,\l"
	.string "{PLAYER}. Here's your first progress\l"
	.string "reward!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_4:
# 539 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "That Nugget can be sold for a pretty\n"
	.string "penny! It should help fund your\l"
	.string "studies. As you catch more Pokémon, I'll\l"
	.string "have more for you.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_5:
# 546 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured at least 25 unique\n"
	.string "Pokémon! Great job, {PLAYER}! Here's a\l"
	.string "nice new item.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_6:
# 550 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Pokémon holding the Loaded Dice will be\n"
	.string "able to land multi-hit attacks more\l"
	.string "times in a row! As you catch more\l"
	.string "Pokémon, I'll have more for you.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_7:
# 557 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured at least 50 unique\n"
	.string "Pokémon! Great job, {PLAYER}! Here's a\l"
	.string "nice new item.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_8:
# 561 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "That move, Return, gets more powerful\n"
	.string "the more your Pokémon like you! As you\l"
	.string "catch more Pokémon, I'll have more for\l"
	.string "you.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_9:
# 568 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured at least 100 unique\n"
	.string "Pokémon! Great job, {PLAYER}!\p"
	.string "We've come across more specimens of\n"
	.string "the Starter Pokémon you saw at the\l"
	.string "beginning of your adventure. Here's\l"
	.string "your first trio!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_10:
# 577 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER} received a Rowlet, Litten,\n"
	.string "and Popplio!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_11:
# 582 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "As you catch more Pokémon, I'll have\n"
	.string "more Starter Pokémon and other rewards\l"
	.string "for you.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_12:
# 589 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured at least 135 unique\n"
	.string "Pokémon! Great job, {PLAYER}!\p"
	.string "We've come across more specimens of\n"
	.string "the Starter Pokémon you saw at the\l"
	.string "beginning of your adventure. Here's\l"
	.string "your first trio!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_13:
# 598 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER} received a Chespin,\n"
	.string "Fennekin, and Froakie!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_14:
# 610 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured at least 170 unique\n"
	.string "Pokémon! Great job, {PLAYER}!\p"
	.string "We've come across more specimens of\n"
	.string "the Starter Pokémon you saw at the\l"
	.string "beginning of your adventure. Here's\l"
	.string "your first trio!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_15:
# 619 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER} received a Sprigatito,\n"
	.string "Fuecoco, and Quaxly!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_16:
# 624 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Looks like you've gotten all 9 Starter\n"
	.string "Pokémon!\p"
	.string "As you catch more Pokémon, I'll have\n"
	.string "other rewards for you.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_17:
# 631 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured at least 200 unique\n"
	.string "Pokémon! Great job, {PLAYER}! Here's a\l"
	.string "nice new item.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_18:
# 635 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "The Oval Charm increases the odds of\n"
	.string "Pokémon laying Eggs, which is key to our\l"
	.string "research!\p"
	.string "You've recorded half of the estimated\n"
	.string "native Pokémon species in the Ilios\l"
	.string "Region! As you catch more Pokémon, I'll\l"
	.string "have more for you.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_19:
# 642 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured at least 250 unique\n"
	.string "Pokémon! Great job, {PLAYER}! Here's a\l"
	.string "nice new item.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_20:
# 646 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Those are 3 Leftovers items, which let\n"
	.string "your Pokémon regain health every turn\l"
	.string "during battle.\p"
	.string "As you catch more Pokémon, I'll have\n"
	.string "more for you.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_21:
# 653 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured at least 300 unique\n"
	.string "Pokémon! Great job, {PLAYER}! Here's a\l"
	.string "nice new item.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_22:
# 657 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "The Shiny Charm drastically increases\n"
	.string "the chances of finding wild Shiny\l"
	.string "Pokémon. While you continue to complete\l"
	.string "the Pokédex, maybe you'll get lucky and\l"
	.string "find one!\p"
	.string "As you catch more Pokémon, I'll have\n"
	.string "more for you. You're almost done!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_23:
# 666 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "I-i-incredible! You've actually done it!\n"
	.string "Your Pokédex contains data for all 400\l"
	.string "known Pokémon species in the Ilios\l"
	.string "Region!\p"
	.string "This calls for something more special\n"
	.string "than a simple item. Here, and me your\l"
	.string "Trainer Card.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_24:
# 670 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER} received a Trainer Card Gold\n"
	.string "Star!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_25:
# 675 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Earning a Gold Star on your Trainer Card\n"
	.string "is no easy feat. This shows you have\l"
	.string "done something truly remarkable. Your\l"
	.string "research will help the Ilios Region for\l"
	.string "years to come!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_26:
# 685 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Chaire, {PLAYER}! It's nice to see you\n"
	.string "around the lab.\p"
	.string "Although you've recorded all the native\n"
	.string "Pokémon in the Ilios Region, I hope you\l"
	.string "continue to enjoy your time here!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_27:
# 693 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Hmm, it doesn't look like I have any more\n"
	.string "rewards for you at the moment. Get back\l"
	.string "out there and find some new Pokémon!$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_0:
# 705 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Welcome back, {PLAYER}! Did you find\n"
	.string "that {COLOR GREEN}lost delivery{COLOR DARK_GRAY} yet?$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_1:
# 708 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Hmm, that's concerning... local crime\n"
	.string "groups have been active lately, I'm\l"
	.string "nervous that the delivery cart was\l"
	.string "attacked. Keep us updated on the\l"
	.string "situation.$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_2:
# 715 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Aie! The delivery cart was attacked!?\n"
	.string "Well I'm glad everyone is okay...\p"
	.string "Here, I'll enable your Pokédex.$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_3:
# 727 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER}'s {COLOR GREEN}Pokédex{COLOR DARK_GRAY} was enabled!$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_4:
# 734 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Ah, speaking of electronics, here's an\n"
	.string "{COLOR GREEN}EXP. Share{COLOR DARK_GRAY} to help raise your Pokémon\l"
	.string "faster. I'll give you a Town Map, too.$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_5:
# 740 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "I think it's a good idea to train your\n"
	.string "Pokémon for battle, in case more\l"
	.string "troublemakers come around. Why don't\l"
	.string "you {COLOR GREEN}battle the Pokémon Gyms{COLOR DARK_GRAY} you find\l"
	.string "while you're exploring the Ilios Region?\l"
	.string "That'll get your Pokémon raring to go!$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_6:
# 743 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "The {COLOR GREEN}first Gym{COLOR DARK_GRAY} is south of here, in\n"
	.string "{COLOR GREEN}Jusmail Town{COLOR DARK_GRAY}. Come back to me with the\l"
	.string "{COLOR GREEN}first Gym Badge{COLOR DARK_GRAY} to show me your skill as\l"
	.string "a trainer!$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_7:
# 757 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You did? Well where's the Pokédex?\n"
	.string "...Come on {PLAYER}, we need to make\l"
	.string "sure the delivery folks are alright! Go\l"
	.string "look again!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_0:
# 768 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Chaire, welcome back {PLAYER}! Have\n"
	.string "you made it to the {COLOR GREEN}Jusmail Town Gym{COLOR DARK_GRAY}\l"
	.string "yet?$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_1:
# 773 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Still training, eh? No rush, no rush!\p"
	.string "Come back to the University and check\n"
	.string "in with me when you have your first Gym\l"
	.string "Badge.$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_2:
# 779 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Well done! You're well on your way to\n"
	.string "being a great trainer.\p"
	.string "Here, I wanted to give you something to\n"
	.string "celebrate!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_3:
# 783 "data/maps/AcrisiaCity_University/scripts.pory"
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
# 801 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER}, welcome, welcome! Have you\n"
	.string "crossed the rail bridge and explored\l"
	.string "east to {COLOR GREEN}Kalami City{COLOR DARK_GRAY} yet? Your next Gym\l"
	.string "Badge is there!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_1:
# 806 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Not yet, hm? That's fine, the swamps to\n"
	.string "the east are a tough area. Remember,\l"
	.string "you can always do some extra training\l"
	.string "in the Acrisia Mountains to the west!\p"
	.string "Come back and check in with me when you\n"
	.string "have your second Gym Badge. I've got\l"
	.string "another gift for you!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_2:
# 816 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Incredible! You're becoming a great\n"
	.string "Pokémon trainer. As promised, here's\l"
	.string "something exciting for you!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_3:
# 820 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Oh right, another thing! I ordered an\n"
	.string "upgrade for your Pokédex.$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_4:
# 831 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER} can use the {COLOR GREEN}DexNav{COLOR DARK_GRAY}!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_5:
# 836 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "It came with directions! It says to\n"
	.string "select a Pokémon from the {COLOR GREEN}DexNav menu{COLOR DARK_GRAY}\l"
	.string "to try and find it, then {COLOR GREEN}hold the A\l"
	.string "Button{COLOR DARK_GRAY} to {COLOR GREEN}creep up on the Pokémon{COLOR DARK_GRAY}! If\l"
	.string "you move too fast, the Pokémon will {COLOR RED}run\l"
	.string "away{COLOR DARK_GRAY}. Seems useful!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_6:
# 839 "data/maps/AcrisiaCity_University/scripts.pory"
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

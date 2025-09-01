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
# 288 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 2
	goto_if_eq AcrisiaCity_University_EventScript_Niko_4
# 294 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 3
	goto_if_eq AcrisiaCity_University_EventScript_Niko_5
# 307 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 4
	goto_if_eq AcrisiaCity_University_EventScript_Niko_6
# 313 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 5
	goto_if_eq AcrisiaCity_University_EventScript_Niko_7
# 319 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 6
	goto_if_eq AcrisiaCity_University_EventScript_Niko_8
# 332 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 7
	goto_if_eq AcrisiaCity_University_EventScript_Niko_9
# 338 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 8
	goto_if_ge AcrisiaCity_University_EventScript_Niko_10
AcrisiaCity_University_EventScript_Niko_1:
# 445 "data/maps/AcrisiaCity_University/scripts.pory"
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
	closemessage
# 282 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 5
# 283 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 284 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_2
# 285 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 286 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_NIKO_STATE, 2
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_4:
# 290 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 291 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_3
# 292 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_5:
# 296 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 297 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_4
# 298 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 299 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_TIMER_BALL, 3
# 300 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 301 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 5
# 302 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 303 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_5
# 304 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 305 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_NIKO_STATE, 4
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_6:
# 309 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 310 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_6
# 311 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_7:
# 315 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 316 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_7
# 317 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_8:
# 321 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 322 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_8
# 323 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 324 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_AMPHAROSITE
# 325 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 326 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 5
# 327 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 328 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_9
# 329 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 330 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_NIKO_STATE, 7
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_9:
# 334 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 335 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_10
# 336 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_10:
# 340 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 341 "data/maps/AcrisiaCity_University/scripts.pory"
	message AcrisiaCity_University_EventScript_Niko_Text_11
# 342 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmessage
# 343 "data/maps/AcrisiaCity_University/scripts.pory"
	multichoice 21, 5, MULTI_CHOOSE_NIKO_DIALOGUE, TRUE
# 344 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 345 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 5
# 347 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_University_EventScript_Niko_20
# 384 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AcrisiaCity_University_EventScript_Niko_21
# 438 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 439 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_21
# 440 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 441 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_Niko_20:
# 349 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 350 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_12, MSGBOX_YESNO
# 351 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 352 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 5
# 353 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_University_EventScript_Niko_25
# 363 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, AcrisiaCity_University_EventScript_Niko_41
# 367 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, AcrisiaCity_University_EventScript_Niko_42
# 373 "data/maps/AcrisiaCity_University/scripts.pory"
	pokemart AcrisiaCity_University_Mart_MegaStones_CompleteShop
AcrisiaCity_University_EventScript_Niko_40:
# 375 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 376 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 5
# 377 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 378 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_14
# 379 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 380 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_Niko_21:
# 387 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 8
	goto_if_eq AcrisiaCity_University_EventScript_Niko_28
# 395 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 9
	goto_if_eq AcrisiaCity_University_EventScript_Niko_29
# 403 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 10
	goto_if_eq AcrisiaCity_University_EventScript_Niko_30
# 411 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 11
	goto_if_eq AcrisiaCity_University_EventScript_Niko_31
# 419 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 12
	goto_if_eq AcrisiaCity_University_EventScript_Niko_32
# 427 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_NIKO_STATE, 13
	goto_if_eq AcrisiaCity_University_EventScript_Niko_33
	goto AcrisiaCity_University_EventScript_Niko_1

AcrisiaCity_University_EventScript_Niko_25:
# 355 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 356 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_13
# 357 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 358 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_Niko_28:
# 389 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 390 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_15
# 391 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 392 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_Niko_29:
# 397 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 398 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_16
# 399 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 400 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_Niko_30:
# 405 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 406 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_17
# 407 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 408 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_Niko_31:
# 413 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 414 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_18
# 415 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 416 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_Niko_32:
# 421 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 422 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_19
# 423 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 424 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_Niko_33:
# 429 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 430 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Niko_Text_20
# 431 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 432 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_Niko_41:
# 365 "data/maps/AcrisiaCity_University/scripts.pory"
	pokemart AcrisiaCity_University_Mart_MegaStones_Shop1
	goto AcrisiaCity_University_EventScript_Niko_40

AcrisiaCity_University_EventScript_Niko_42:
# 369 "data/maps/AcrisiaCity_University/scripts.pory"
	pokemart AcrisiaCity_University_Mart_MegaStones_Shop2
	goto AcrisiaCity_University_EventScript_Niko_40


	.align 2
# 449 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Mart_MegaStones_Shop1:
# 451 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_VICTREEBITE
# 452 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_GYARADOSITE
# 453 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_NOCTOWLITE
# 454 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_AMPHAROSITE
# 455 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_SCIZORITE
# 456 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_HERACRONITE
# 457 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_HOUNDOOMINITE
# 458 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_MAWILITE
# 459 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_AGGRONITE
# 460 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_CAMERUPTITE
# 461 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_ALTARIANITE
# 462 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_BANETTITE
# 463 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_MANDIBITE
# 464 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_HELIOLITE
# 465 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_HAWLUCHITE
# 466 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_RIBOMBITE
# 467 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_WYRDEERITE
# 468 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_TINKATITE
	.2byte ITEM_NONE

	.align 2
# 471 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Mart_MegaStones_Shop2:
# 473 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_VICTREEBITE
# 474 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_GENGARITE
# 475 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_GYARADOSITE
# 476 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_LAPRASITE
# 477 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_AERODACTYLITE
# 478 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_NOCTOWLITE
# 479 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_AMPHAROSITE
# 480 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_STEELIXITE
# 481 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_SCIZORITE
# 482 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_HERACRONITE
# 483 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_HOUNDOOMINITE
# 484 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_GARDEVOIRITE
# 485 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_MAWILITE
# 486 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_AGGRONITE
# 487 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_MEDICHAMITE
# 488 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_CAMERUPTITE
# 489 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_FLYGONITE
# 490 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_ALTARIANITE
# 491 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_BANETTITE
# 492 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_GALLADITE
# 493 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_MANDIBITE
# 494 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_PANGORITE
# 495 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_HELIOLITE
# 496 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_HAWLUCHITE
# 497 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_RIBOMBITE
# 498 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_WYRDEERITE
# 499 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_CENTISKITE
# 500 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_COPPERAJITE
# 501 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_TINKATITE
	.2byte ITEM_NONE

	.align 2
# 504 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Mart_MegaStones_CompleteShop:
# 506 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_VICTREEBITE
# 507 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_GENGARITE
# 508 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_GYARADOSITE
# 509 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_LAPRASITE
# 510 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_AERODACTYLITE
# 511 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_DRAGONITEITE
# 512 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_NOCTOWLITE
# 513 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_AMPHAROSITE
# 514 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_STEELIXITE
# 515 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_SCIZORITE
# 516 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_HERACRONITE
# 517 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_HOUNDOOMINITE
# 518 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_TYRANITARITE
# 519 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_GARDEVOIRITE
# 520 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_MAWILITE
# 521 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_AGGRONITE
# 522 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_MEDICHAMITE
# 523 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_CAMERUPTITE
# 524 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_FLYGONITE
# 525 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_ALTARIANITE
# 526 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_BANETTITE
# 527 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_GLALITITE
# 528 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_ABOMASITE
# 529 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_GALLADITE
# 530 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_ARCHEOPSITE
# 531 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_MANDIBITE
# 532 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_GOGOATITE
# 533 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_PANGORITE
# 534 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_HELIOLITE
# 535 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_HAWLUCHITE
# 536 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_TOUCANNONITE
# 537 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_RIBOMBITE
# 538 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_WYRDEERITE
# 539 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_CENTISKITE
# 540 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_GRIMMSNARLITE
# 541 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_COPPERAJITE
# 542 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_TINKATITE
# 543 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_CYCLIZITE_S
# 544 "data/maps/AcrisiaCity_University/scripts.pory"
	.2byte ITEM_CYCLIZITE_V
	.2byte ITEM_NONE

AcrisiaCity_University_EventScript_Rania::
# 549 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 550 "data/maps/AcrisiaCity_University/scripts.pory"
	faceplayer
# 551 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 0
	goto_if_eq AcrisiaCity_University_EventScript_Rania_2
# 557 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 1
	goto_if_eq AcrisiaCity_University_EventScript_Rania_3
# 563 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 2
	goto_if_eq AcrisiaCity_University_EventScript_Rania_4
# 576 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 3
	goto_if_eq AcrisiaCity_University_EventScript_Rania_5
# 582 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 4
	goto_if_eq AcrisiaCity_University_EventScript_Rania_6
# 588 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 5
	goto_if_eq AcrisiaCity_University_EventScript_Rania_7
# 601 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 6
	goto_if_eq AcrisiaCity_University_EventScript_Rania_8
# 607 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 7
	goto_if_eq AcrisiaCity_University_EventScript_Rania_9
# 614 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 8
	goto_if_eq AcrisiaCity_University_EventScript_Rania_10
# 620 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 9
	goto_if_eq AcrisiaCity_University_EventScript_Rania_11
# 626 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 10
	goto_if_ge AcrisiaCity_University_EventScript_Rania_19
AcrisiaCity_University_EventScript_Rania_17:
# 634 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 10
	goto_if_eq AcrisiaCity_University_EventScript_Rania_16
AcrisiaCity_University_EventScript_Rania_15:
# 640 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RANIA_STATE, 11
	goto_if_eq AcrisiaCity_University_EventScript_Rania_14
AcrisiaCity_University_EventScript_Rania_1:
# 647 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_Rania_2:
# 553 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 554 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_0
# 555 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_3:
# 559 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 560 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_1
# 561 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_4:
# 565 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 566 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_2
# 567 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 568 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_WISHING_STAR, 2
# 569 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 570 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 5
# 571 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 572 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_3
# 573 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 574 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_RANIA_STATE, 3
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_5:
# 578 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 579 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_4
# 580 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_6:
# 584 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 585 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_5
# 586 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_7:
# 590 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 591 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_6
# 592 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 593 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_ROCKY_HELMET
# 594 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 595 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 5
# 596 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 597 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_7
# 598 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 599 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_RANIA_STATE, 6
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_8:
# 603 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 604 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_8
# 605 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_9:
# 609 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 610 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_9
# 611 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 612 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_RANIA_STATE, 8
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_10:
# 616 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 617 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_10
# 618 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_11:
# 622 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 623 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_11
# 624 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_12:
# 628 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 629 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_12
# 630 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 631 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_TM_STEEL_WING
# 632 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_GOT_STEEL_WING_FROM_RANIA
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_13:
# 636 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 637 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_13
# 638 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_14:
# 642 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_11
# 643 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_Rania_Text_14
# 644 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_Rania_1

AcrisiaCity_University_EventScript_Rania_16:
# 634 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_set FLAG_GOT_STEEL_WING_FROM_RANIA, AcrisiaCity_University_EventScript_Rania_13
	goto AcrisiaCity_University_EventScript_Rania_15

AcrisiaCity_University_EventScript_Rania_19:
# 626 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_GOT_STEEL_WING_FROM_RANIA, AcrisiaCity_University_EventScript_Rania_12
	goto AcrisiaCity_University_EventScript_Rania_17


AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Trigger1::
# 659 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_1, 1
# 660 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs
	return


AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Trigger2::
# 664 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_1, 2
# 665 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs
	return


AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Trigger3::
# 669 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_1, 3
# 670 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs
	return


AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Trigger4::
# 674 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_1, 4
# 675 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs
	return


AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs::
# 681 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 682 "data/maps/AcrisiaCity_University/scripts.pory"
	emote 3, EMOTE_EXCLAM
# 683 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 684 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 685 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 686 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_0
# 687 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 688 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_2
# 692 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_3
# 696 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_4
# 700 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_5
AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1:
# 704 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 706 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 707 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_1, MSGBOX_YESNO
# 708 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_11
# 722 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 723 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_4
# 724 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 725 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 726 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 727 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 30
# 728 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_GREAT_BALL, 3
# 729 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 730 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 5
# 731 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 732 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_5
# 733 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_10:
# 735 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 736 "data/maps/AcrisiaCity_University/scripts.pory"
	waitmovement 0
# 737 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 4
# 738 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_2:
# 690 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerGoesToNiko_1
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_3:
# 694 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerGoesToNiko_2
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_4:
# 698 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerGoesToNiko_3
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_5:
# 702 "data/maps/AcrisiaCity_University/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_University_Movement_PlayerGoesToNiko_4
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_1

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_11:
# 710 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 711 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_2
# 712 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 713 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_POKE_BALL, 3
# 714 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 715 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 5
# 716 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_8
# 717 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_3
# 718 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_10


# 742 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerGoesToNiko_1:
# 744 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 744 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 745 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 745 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 745 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 745 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
	step_end

# 747 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerGoesToNiko_2:
# 749 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 749 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 750 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 750 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 750 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
	step_end

# 752 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerGoesToNiko_3:
# 754 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 754 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 755 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
# 755 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
	step_end

# 757 "data/maps/AcrisiaCity_University/scripts.pory"
AcrisiaCity_University_Movement_PlayerGoesToNiko_4:
# 759 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 759 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_down
# 760 "data/maps/AcrisiaCity_University/scripts.pory"
	walk_right
	step_end

AcrisiaCity_EventScript_ProfessorElia::
# 769 "data/maps/AcrisiaCity_University/scripts.pory"
	lock
# 770 "data/maps/AcrisiaCity_University/scripts.pory"
	faceplayer
# 772 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 2
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_2
# 776 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 3
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_3
# 776 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 4
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_3
# 780 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_INTRO_STATE, 5
	goto_if_eq AcrisiaCity_EventScript_ProfessorElia_4
# 789 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaRatePokedex
AcrisiaCity_EventScript_ProfessorElia_1:
# 792 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_EventScript_ProfessorElia_2:
# 774 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck
	goto AcrisiaCity_EventScript_ProfessorElia_1

AcrisiaCity_EventScript_ProfessorElia_3:
# 778 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaCheckBadgeOne
	goto AcrisiaCity_EventScript_ProfessorElia_1

AcrisiaCity_EventScript_ProfessorElia_4:
# 782 "data/maps/AcrisiaCity_University/scripts.pory"
	goto AcrisiaCity_University_EventScript_EliaCheckBadgeTwo
	goto AcrisiaCity_EventScript_ProfessorElia_1


AcrisiaCity_University_EventScript_EliaRatePokedex::
# 804 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 805 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_0, MSGBOX_YESNO
# 806 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_University_EventScript_EliaRatePokedex_2
# 815 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_0x8004, 0
# 816 "data/maps/AcrisiaCity_University/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 817 "data/maps/AcrisiaCity_University/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 818 "data/maps/AcrisiaCity_University/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 819 "data/maps/AcrisiaCity_University/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 820 "data/maps/AcrisiaCity_University/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 821 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 822 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_2
# 825 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 10
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_6
AcrisiaCity_University_EventScript_EliaRatePokedex_4:
# 838 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 25
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_11
AcrisiaCity_University_EventScript_EliaRatePokedex_9:
# 851 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 50
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_16
AcrisiaCity_University_EventScript_EliaRatePokedex_14:
# 864 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 100
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_21
AcrisiaCity_University_EventScript_EliaRatePokedex_19:
# 885 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 135
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_26
AcrisiaCity_University_EventScript_EliaRatePokedex_24:
# 906 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 170
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_31
AcrisiaCity_University_EventScript_EliaRatePokedex_29:
# 927 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 200
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_36
AcrisiaCity_University_EventScript_EliaRatePokedex_34:
# 940 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 250
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_41
AcrisiaCity_University_EventScript_EliaRatePokedex_39:
# 953 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 300
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_46
AcrisiaCity_University_EventScript_EliaRatePokedex_44:
# 966 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_0x8009, 400
	goto_if_ge AcrisiaCity_University_EventScript_EliaRatePokedex_50
# 998 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 999 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_27
# 1000 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
AcrisiaCity_University_EventScript_EliaRatePokedex_49:
# 1003 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 1004 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaRatePokedex_2:
# 808 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 809 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_1
# 810 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 811 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaRatePokedex_5:
# 827 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_01
# 828 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 829 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_3
# 830 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 831 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_NUGGET
# 832 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 833 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 5
# 834 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 835 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_4
# 836 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_4

AcrisiaCity_University_EventScript_EliaRatePokedex_6:
# 825 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_01, AcrisiaCity_University_EventScript_EliaRatePokedex_5
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_4

AcrisiaCity_University_EventScript_EliaRatePokedex_10:
# 840 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_02
# 841 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 842 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_5
# 843 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 844 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_LOADED_DICE
# 845 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 846 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 5
# 847 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 848 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_6
# 849 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_9

AcrisiaCity_University_EventScript_EliaRatePokedex_11:
# 838 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_02, AcrisiaCity_University_EventScript_EliaRatePokedex_10
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_9

AcrisiaCity_University_EventScript_EliaRatePokedex_15:
# 853 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_03
# 854 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 855 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_7
# 856 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 857 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_TM_RETURN
# 858 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 859 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 5
# 860 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 861 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_8
# 862 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_14

AcrisiaCity_University_EventScript_EliaRatePokedex_16:
# 851 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_03, AcrisiaCity_University_EventScript_EliaRatePokedex_15
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_14

AcrisiaCity_University_EventScript_EliaRatePokedex_20:
# 866 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_04
# 867 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 868 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_9
# 869 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 870 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ROWLET
# 871 "data/maps/AcrisiaCity_University/scripts.pory"
	givemon SPECIES_ROWLET, 10
# 872 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LITTEN
# 873 "data/maps/AcrisiaCity_University/scripts.pory"
	givemon SPECIES_LITTEN, 10
# 874 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_POPPLIO
# 875 "data/maps/AcrisiaCity_University/scripts.pory"
	givemon SPECIES_POPPLIO, 10
# 876 "data/maps/AcrisiaCity_University/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 877 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_10
# 878 "data/maps/AcrisiaCity_University/scripts.pory"
	waitfanfare
# 879 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 880 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 881 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 882 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_11
# 883 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_19

AcrisiaCity_University_EventScript_EliaRatePokedex_21:
# 864 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_04, AcrisiaCity_University_EventScript_EliaRatePokedex_20
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_19

AcrisiaCity_University_EventScript_EliaRatePokedex_25:
# 887 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_05
# 888 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 889 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_12
# 890 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 891 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHESPIN
# 892 "data/maps/AcrisiaCity_University/scripts.pory"
	givemon SPECIES_CHESPIN, 10
# 893 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_FENNEKIN
# 894 "data/maps/AcrisiaCity_University/scripts.pory"
	givemon SPECIES_FENNEKIN, 10
# 895 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_FROAKIE
# 896 "data/maps/AcrisiaCity_University/scripts.pory"
	givemon SPECIES_FROAKIE, 10
# 897 "data/maps/AcrisiaCity_University/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 898 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_13
# 899 "data/maps/AcrisiaCity_University/scripts.pory"
	waitfanfare
# 900 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 901 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 902 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 903 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_11
# 904 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_24

AcrisiaCity_University_EventScript_EliaRatePokedex_26:
# 885 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_05, AcrisiaCity_University_EventScript_EliaRatePokedex_25
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_24

AcrisiaCity_University_EventScript_EliaRatePokedex_30:
# 908 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_06
# 909 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 910 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_14
# 911 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 912 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SPRIGATITO
# 913 "data/maps/AcrisiaCity_University/scripts.pory"
	givemon SPECIES_SPRIGATITO, 10
# 914 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_FUECOCO
# 915 "data/maps/AcrisiaCity_University/scripts.pory"
	givemon SPECIES_FUECOCO, 10
# 916 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_QUAXLY
# 917 "data/maps/AcrisiaCity_University/scripts.pory"
	givemon SPECIES_QUAXLY, 10
# 918 "data/maps/AcrisiaCity_University/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 919 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_15
# 920 "data/maps/AcrisiaCity_University/scripts.pory"
	waitfanfare
# 921 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 922 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 923 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 924 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_16
# 925 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_29

AcrisiaCity_University_EventScript_EliaRatePokedex_31:
# 906 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_06, AcrisiaCity_University_EventScript_EliaRatePokedex_30
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_29

AcrisiaCity_University_EventScript_EliaRatePokedex_35:
# 929 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_07
# 930 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 931 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_17
# 932 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 933 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_OVAL_CHARM
# 934 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 935 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 5
# 936 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 937 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_18
# 938 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_34

AcrisiaCity_University_EventScript_EliaRatePokedex_36:
# 927 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_07, AcrisiaCity_University_EventScript_EliaRatePokedex_35
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_34

AcrisiaCity_University_EventScript_EliaRatePokedex_40:
# 942 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_08
# 943 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 944 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_19
# 945 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 946 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_LEFTOVERS, 3
# 947 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 948 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 5
# 949 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 950 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_20
# 951 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_39

AcrisiaCity_University_EventScript_EliaRatePokedex_41:
# 940 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_08, AcrisiaCity_University_EventScript_EliaRatePokedex_40
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_39

AcrisiaCity_University_EventScript_EliaRatePokedex_45:
# 955 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_09
# 956 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 957 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_21
# 958 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 959 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_SHINY_CHARM
# 960 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 961 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 5
# 962 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 963 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_22
# 964 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_44

AcrisiaCity_University_EventScript_EliaRatePokedex_46:
# 953 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_09, AcrisiaCity_University_EventScript_EliaRatePokedex_45
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_44

AcrisiaCity_University_EventScript_EliaRatePokedex_50:
# 968 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_UNIVERSITY_REWARD_ELIA_10, AcrisiaCity_University_EventScript_EliaRatePokedex_53
# 990 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 991 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_26
# 992 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_49

AcrisiaCity_University_EventScript_EliaRatePokedex_53:
# 970 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNIVERSITY_REWARD_ELIA_10
# 971 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 972 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_23
# 973 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 974 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 30
# 975 "data/maps/AcrisiaCity_University/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 976 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_24
# 977 "data/maps/AcrisiaCity_University/scripts.pory"
	waitfanfare
# 978 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 979 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 30
# 980 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 981 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaRatePokedex_Text_25
# 982 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 984 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 985 "data/maps/AcrisiaCity_University/scripts.pory"
	special DoDomeConfetti
# 986 "data/maps/AcrisiaCity_University/scripts.pory"
	completequest QUEST_COMPLETE_DEX
	goto AcrisiaCity_University_EventScript_EliaRatePokedex_49


AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck::
# 1010 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 1011 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_0, MSGBOX_YESNO
# 1012 "data/maps/AcrisiaCity_University/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_2
# 1019 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_set FLAG_FOUND_LOST_DELIVERY, AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_5
# 1068 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_8
# 1069 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_1:
# 1072 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_2:
# 1014 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_1
# 1015 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_1

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_5:
# 1021 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_2
# 1022 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 1023 "data/maps/AcrisiaCity_University/scripts.pory"
	removeitem ITEM_PARCEL
# 1024 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 1025 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 1026 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 1027 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 1028 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 1029 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 1030 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 1031 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 1032 "data/maps/AcrisiaCity_University/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1033 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_3
# 1034 "data/maps/AcrisiaCity_University/scripts.pory"
	waitfanfare
# 1035 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_SYS_ROTOM_PHONE_GET
# 1036 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 1037 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 1038 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 1039 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 1040 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 1041 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_4
# 1042 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 1043 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 5
# 1044 "data/maps/AcrisiaCity_University/scripts.pory"
	additem ITEM_EXP_SHARE
# 1045 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_EXP_SHARE_ENABLED
# 1046 "data/maps/AcrisiaCity_University/scripts.pory"
	additem ITEM_OUTFIT_BOX
# 1047 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_5
# 1048 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 1049 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 5
# 1050 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 1051 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_6
# 1052 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 1053 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 1054 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_7
# 1055 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 1057 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 1058 "data/maps/AcrisiaCity_University/scripts.pory"
	completequest QUEST_FIND_POKEDEX
# 1059 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 1060 "data/maps/AcrisiaCity_University/scripts.pory"
	startquest QUEST_GYM_1
# 1063 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 3
# 1064 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_HIDE_RANIA_JUSMAIL
	goto AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_1


AcrisiaCity_University_EventScript_EliaCheckBadgeOne::
# 1078 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 1079 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_0
# 1080 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 1081 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, AcrisiaCity_University_EventScript_EliaCheckBadgeOne_2
# 1089 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 1090 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_2
# 1091 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 1092 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
# 1093 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 1094 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 5
# 1095 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 1096 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_3
# 1097 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 1098 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 5
# 1099 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_HIDE_RANIA_JUSMAIL
# 1100 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_UNLOCKED_ACRISIA_MTNS
# 1102 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 1103 "data/maps/AcrisiaCity_University/scripts.pory"
	completequest QUEST_CHECK_AFTER_GYM_1
# 1104 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 1105 "data/maps/AcrisiaCity_University/scripts.pory"
	startquest QUEST_GYM_2
AcrisiaCity_University_EventScript_EliaCheckBadgeOne_1:
# 1107 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_2:
# 1083 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 1084 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_1
# 1085 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
	goto AcrisiaCity_University_EventScript_EliaCheckBadgeOne_1


AcrisiaCity_University_EventScript_EliaCheckBadgeTwo::
# 1113 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 1114 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_0
# 1115 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 1116 "data/maps/AcrisiaCity_University/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_2
# 1128 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 1129 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_2
# 1130 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 1131 "data/maps/AcrisiaCity_University/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 1132 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 1133 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 5
# 1134 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 1135 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_3
# 1136 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 1137 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 1138 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 1139 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 1140 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 1141 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 1142 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 10
# 1143 "data/maps/AcrisiaCity_University/scripts.pory"
	playse SE_CLICK
# 1144 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 1145 "data/maps/AcrisiaCity_University/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1146 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_4
# 1147 "data/maps/AcrisiaCity_University/scripts.pory"
	waitfanfare
# 1148 "data/maps/AcrisiaCity_University/scripts.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 1149 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 1150 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 1151 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_5
# 1152 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 1153 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 1154 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_6
# 1155 "data/maps/AcrisiaCity_University/scripts.pory"
	closemessage
# 1157 "data/maps/AcrisiaCity_University/scripts.pory"
	setvar VAR_INTRO_STATE, 6
# 1159 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 1160 "data/maps/AcrisiaCity_University/scripts.pory"
	completequest QUEST_CHECK_AFTER_GYM_2
# 1161 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 1162 "data/maps/AcrisiaCity_University/scripts.pory"
	startquest QUEST_GYM_3
# 1163 "data/maps/AcrisiaCity_University/scripts.pory"
	delay 20
# 1164 "data/maps/AcrisiaCity_University/scripts.pory"
	startquest QUEST_COMPLETE_DEX
AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_1:
# 1166 "data/maps/AcrisiaCity_University/scripts.pory"
	release
	end

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_2:
# 1118 "data/maps/AcrisiaCity_University/scripts.pory"
	speakername AcrisiaCity_University_EventScript_PlayerIntro_Text_0
# 1119 "data/maps/AcrisiaCity_University/scripts.pory"
	msgbox AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_1
# 1120 "data/maps/AcrisiaCity_University/scripts.pory"
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
	.string "have an extra Pokédex on hand. But you\l"
	.string "know what they say, every mistake can\l"
	.string "be an opportunity!\p"
	.string "I recently imported a {COLOR GREEN}Rotom Phone{COLOR DARK_GRAY} with\n"
	.string "a {COLOR GREEN}Pokédex function{COLOR DARK_GRAY} from the Alola\l"
	.string "Region. It should be here by now, but\l"
	.string "something's gone wrong - maybe\l"
	.string "something's delaying the deliveryman...?$"

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
# 284 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Those Nest Balls are good for catching\n"
	.string "young, weak Pokémon. My studies say the\l"
	.string "inside of Nest Balls remind Pokémon of\l"
	.string "their home. Isn't that cute?\p"
	.string "{COLOR GREEN}Check back in{COLOR DARK_GRAY} as you {COLOR GREEN}defeat Pokémon\n"
	.string "Gyms{COLOR DARK_GRAY}, and I'll give you little gifts and\l"
	.string "tips.$"

AcrisiaCity_University_EventScript_Niko_Text_3:
# 291 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Give those Nest Balls a shot! They work\n"
	.string "best with low-level Pokémon.\p"
	.string "{COLOR GREEN}Check back in{COLOR DARK_GRAY} as you {COLOR GREEN}defeat Pokémon\n"
	.string "Gyms{COLOR DARK_GRAY}, and I'll give you little gifts and\l"
	.string "tips.$"

AcrisiaCity_University_EventScript_Niko_Text_4:
# 297 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Ehehe, looks like I beat you to Ourani!\n"
	.string "We're all starting to be pretty strong\l"
	.string "trainers, huh?\p"
	.string "Ah, I worked on a new Poké Ball type.\n"
	.string "Give it a test for me!$"

AcrisiaCity_University_EventScript_Niko_Text_5:
# 303 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Those Timer Balls work better when a\n"
	.string "battle begins to drag on. Hopefully\l"
	.string "they help... help you catch up to me!\l"
	.string "Fwahaha!$"

AcrisiaCity_University_EventScript_Niko_Text_6:
# 310 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER}! I'm back here to study this\n"
	.string "little Duskull. In case you can't tell, I\l"
	.string "really like Ghost-type Pokémon.$"

AcrisiaCity_University_EventScript_Niko_Text_7:
# 316 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Welcome back, {PLAYER}. I hope that\n"
	.string "run-in with Team Chimera didn't rattle\l"
	.string "you too bad.\p"
	.string "The Ilios Region is mostly peaceful, but\n"
	.string "just like anywhere else, there are some\l"
	.string "people willing to do anything to gain\l"
	.string "power.$"

AcrisiaCity_University_EventScript_Niko_Text_8:
# 322 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Oh, I see you've got the Gym Badge from\n"
	.string "Pythios Town! Was it worth visiting,\l"
	.string "even after all the commotion in\l"
	.string "Wanderer's Woods?\p"
	.string "Ah, yes, while I've got you here - I have\n"
	.string "a gift!$"

AcrisiaCity_University_EventScript_Niko_Text_9:
# 328 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "That's something called a {COLOR GREEN}Mega Stone{COLOR DARK_GRAY}.\n"
	.string "These mysterious objects are found in\l"
	.string "a few other regions, such as Kalos and\l"
	.string "Alola, but I didn't know there were\l"
	.string "actually any in Ilios.\p"
	.string "I took it from one of the Team Chimera\n"
	.string "Grunts in Wanderer's Woods while they\l"
	.string "ran. I wonder where they got it...$"

AcrisiaCity_University_EventScript_Niko_Text_10:
# 335 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "I'm still thinking about that {COLOR GREEN}Mega\n"
	.string "Stone{COLOR DARK_GRAY} I gave you. If used correctly,\l"
	.string "they could crush most Pokémon Trainers\l"
	.string "easily... It's a scary thought.$"

AcrisiaCity_University_EventScript_Niko_Text_11:
# 341 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Chaire, {PLAYER}! What brings you to\n"
	.string "my corner of the University?$"

AcrisiaCity_University_EventScript_Niko_Text_12:
# 350 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Right, Mega Evolution! I've been doing\n"
	.string "more research on various {COLOR GREEN}mysterious\l"
	.string "Stones{COLOR DARK_GRAY}, and I believe they allow\l"
	.string "Trainers to {COLOR GREEN}Mega Evolve{COLOR DARK_GRAY} Pokémon in\l"
	.string "battle!\p"
	.string "I'm slowly gathering a collection. It's\n"
	.string "expensive, but totally worth it for\l"
	.string "research! Do you want to shop my\l"
	.string "selection of {COLOR GREEN}Mega Stones{COLOR DARK_GRAY}?$"

AcrisiaCity_University_EventScript_Niko_Text_13:
# 356 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Ehehe, no worries! Mega Stones are\n"
	.string "extremely rare, so the University's\l"
	.string "collection is slow-growing.\p"
	.string "If you're ready to Mega Evolve a\n"
	.string "Pokémon, stop by and see if we have any\l"
	.string "to spare! Our {COLOR GREEN}collection will grow over\l"
	.string "time{COLOR DARK_GRAY}, so make sure to come back\l"
	.string "regularly.$"

AcrisiaCity_University_EventScript_Niko_Text_14:
# 378 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Thanks, stop by again! Our {COLOR GREEN}collection\n"
	.string "will grow over time{COLOR DARK_GRAY}, so make sure to come\l"
	.string "back regularly.$"

AcrisiaCity_University_EventScript_Niko_Text_15:
# 390 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Team Chimera collecting Mega Stones is\n"
	.string "extremely concerning. They already run\l"
	.string "rampant, stealing Pokémon and taking\l"
	.string "over whole towns. If they got their\l"
	.string "hands on Mega Evolution... No. They have\l"
	.string "to be stopped.$"

AcrisiaCity_University_EventScript_Niko_Text_16:
# 398 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "I hear you and Rania had a run-in with\n"
	.string "Team Chimera on Myrrini Island. What\l"
	.string "could they have possibly meant by\l"
	.string "'reawakening ancient Pokémon'? We all\l"
	.string "know Lazarus Taxa are being\l"
	.string "rediscovered left and right, but what\l"
	.string "are Team Chimera's plans with them?$"

AcrisiaCity_University_EventScript_Niko_Text_17:
# 406 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "The Cranidos and Shieldon you saved in\n"
	.string "Péntepetal City are doing well in\l"
	.string "captivity! Thanks to them, we've\l"
	.string "learned a lot more about how those\l"
	.string "species live.\p"
	.string "I've been thinking about Team Chimera's\n"
	.string "plans. There must be some connection\l"
	.string "between the Ancient Mechanism parts\l"
	.string "they collected on Marmaro Island and\l"
	.string "their obsession with Mega Evolution. In\l"
	.string "fact, Lazarus Taxa might be connected\l"
	.string "too. Mark my words, they're planning\l"
	.string "something big.$"

AcrisiaCity_University_EventScript_Niko_Text_18:
# 414 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "I've been looking into Team Chimera's\n"
	.string "plans. That Ancient Mechanism they've\l"
	.string "been working to assemble is referred to\l"
	.string "in centuries-old texts. It seems to\l"
	.string "have a {COLOR GREEN}connection to Mega Evolution{COLOR DARK_GRAY},\l"
	.string "but the specifics aren't clear to me.\p"
	.string "Old carvings and fragments of text\n"
	.string "state that the Ancient Mechanism can\l"
	.string "cause a Pokémon to experience a burst\l"
	.string "of energy, but I need more time to\l"
	.string "research it.$"

AcrisiaCity_University_EventScript_Niko_Text_19:
# 422 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Team Chimera hasn't attacked the\n"
	.string "University yet. They must still be\l"
	.string "struggling to wrestle control of the\l"
	.string "region from Kyogre, Groudon, and\l"
	.string "Rayquaza.\p"
	.string "Speaking of which, have you found them\n"
	.string "yet? Those Legendary Pokémon might be\l"
	.string "our only shot at defeating Team\l"
	.string "Chimera.$"

AcrisiaCity_University_EventScript_Niko_Text_20:
# 430 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Now that the weather around Ilios has\n"
	.string "calmed down, everyone feels a lot safer.\l"
	.string "That's all thanks to you!\p"
	.string "Oh, have you been to {COLOR GREEN}Port Pello{COLOR DARK_GRAY} yet?\n"
	.string "Rania was looking for you there.$"

AcrisiaCity_University_EventScript_Niko_Text_21:
# 439 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Come back is you want to {COLOR GREEN}check our Mega\n"
	.string "Stone collection{COLOR DARK_GRAY}. And hey, I've still got\l"
	.string "rewards and fun things to talk about,\l"
	.string "too!$"

AcrisiaCity_University_EventScript_Rania_Text_0:
# 554 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Chaire, {PLAYER}! You doin' well?\p"
	.string "I help out with Pokédex data analysis.\n"
	.string "Now that you're here, there's gonna be a\l"
	.string "lot more data. Come {COLOR GREEN}speak with me{COLOR DARK_GRAY} as you\l"
	.string "{COLOR GREEN}defeat Pokémon Gyms{COLOR DARK_GRAY}, I'll give you some\l"
	.string "helpful tips and items!$"

AcrisiaCity_University_EventScript_Rania_Text_1:
# 560 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Here comes {PLAYER}, the new Champ!\n"
	.string "...Ehehe, just kidding! My Pokémon are\l"
	.string "still calming down from that battle in\l"
	.string "Jusmail Town, what a fight!$"

AcrisiaCity_University_EventScript_Rania_Text_2:
# 566 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "No way, you got the Gemstone Badge?! I\n"
	.string "haven't even gotten to the Acrisia\l"
	.string "Caverns yet!\p"
	.string "Yamas! Cheers! We have to celebrate\n"
	.string "your success somehow! I'll give you\l"
	.string "this, as a start.$"

AcrisiaCity_University_EventScript_Rania_Text_3:
# 572 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Those Wishing Stars can be used at the\n"
	.string "Wishing Well in Jusmail Town. Old myths\l"
	.string "say that worthy trainers may earn\l"
	.string "something from it.\p"
	.string "Speaking of Jusmail Town, you should be\n"
	.string "able to get rid of those {COLOR GREEN}rocks blocking\l"
	.string "the path south{COLOR DARK_GRAY}! I'll be seeing you out\l"
	.string "there, {PLAYER}!$"

AcrisiaCity_University_EventScript_Rania_Text_4:
# 579 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Chaire! I come back here to heal my\n"
	.string "Pokémon and put my new Pokédex data\l"
	.string "into the computers. Don't you worry, I'll\l"
	.string "be back out soon! Get ready for some\l"
	.string "battles!$"

AcrisiaCity_University_EventScript_Rania_Text_5:
# 585 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Come back to cool off too, {PLAYER}?\n"
	.string "That fight with Team Chimera sure was\l"
	.string "something. I wonder why they're\l"
	.string "collecting Pokémon...$"

AcrisiaCity_University_EventScript_Rania_Text_6:
# 591 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER}! I hear you made it to\n"
	.string "Pythios Town alright, and you even got\l"
	.string "the Gym Badge! You're not such a new\l"
	.string "Trainer anymore, huh?\p"
	.string "Right, I have something for you!$"

AcrisiaCity_University_EventScript_Rania_Text_7:
# 597 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "If a Pokémon holds the {COLOR GREEN}Rocky Helmet{COLOR DARK_GRAY}, if\n"
	.string "an opponent makes contact with them,\l"
	.string "they take a bit of damage! Dealing chip\l"
	.string "damage like that can be the key to\l"
	.string "winning.$"

AcrisiaCity_University_EventScript_Rania_Text_8:
# 604 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "I've been working through all the data\n"
	.string "coming in from your Rotom Phone! From\l"
	.string "what I can tell, you're the first person\l"
	.string "to record and identify some of these\l"
	.string "species in their ecosystems.\p"
	.string "By learning more about Pokémon, we can\n"
	.string "find new ways to protect them!$"

AcrisiaCity_University_EventScript_Rania_Text_9:
# 610 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER}! Thank goodness you're\n"
	.string "okay! Niko told Prof. Elia and I about\l"
	.string "what happened in Sofos City.\p"
	.string "Team Chimera must be up to something\n"
	.string "big. Normally, they lurked in the\l"
	.string "shadows, but their attacks on Sofos\l"
	.string "City and theft of Mega Stones set a new\l"
	.string "bar.$"

AcrisiaCity_University_EventScript_Rania_Text_10:
# 617 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Oh, I've been working on a training\n"
	.string "manual with some helpful information -\l"
	.string "that might help with the fight against\l"
	.string "Team Chimera!\p"
	.string "I need a bit more time, I'm just so\n"
	.string "excited I had to tell someone!$"

AcrisiaCity_University_EventScript_Rania_Text_11:
# 623 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Welcome back, {PLAYER}. Cranidos and\n"
	.string "Shieldon are thriving, thanks to Niko's\l"
	.string "help!\p"
	.string "Oh, have you been practicing\n"
	.string "identifying wild Pokémon Natures?\l"
	.string "Pretty convenient, huh?$"

AcrisiaCity_University_EventScript_Rania_Text_12:
# 629 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "I see you've earned the {COLOR GREEN}Theatrical\n"
	.string "Badge{COLOR DARK_GRAY} from Thalia and Melpomene! Here,\l"
	.string "have this TM I found recently. I've\l"
	.string "already registered the data in the\l"
	.string "University system, so I don't need it\l"
	.string "anymore.$"

AcrisiaCity_University_EventScript_Rania_Text_13:
# 637 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "That TM contains the move Steel Wing.\n"
	.string "It's a great offensive option for many\l"
	.string "bird Pokémon!$"

AcrisiaCity_University_EventScript_Rania_Text_14:
# 643 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Team Chimera hasn't made it to Acrisia\n"
	.string "City yet, thankfully. For now, I'll keep\l"
	.string "processing Pokédex information. Maybe\l"
	.string "that'll help you fight Team Chimera\l"
	.string "somehow!$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_0:
# 686 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Hold up, come here {PLAYER}!$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_1:
# 707 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You remember me, right? R-right? I'm the\n"
	.string "one who works with captive Pokémon!$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_2:
# 711 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "No? Some research partner you are.\p"
	.string "I was gonna give you some good Poké\n"
	.string "balls, but now you're just getting\l"
	.string "these.$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_3:
# 717 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "A little disappointing, huh? Just like\n"
	.string "being forgotten about! Well, now we're\l"
	.string "even.\p"
	.string "Come back to the University as you\n"
	.string "catch more Pokémon. Rania and I can get\l"
	.string "you some neat stuff... if you remember\l"
	.string "me, that is.$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_4:
# 723 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Ehehe, I knew you were a real friend!\p"
	.string "I'm only supposed to give you a few\n"
	.string "Poké balls, but you made my day, so I'll\l"
	.string "make yours!$"

AcrisiaCity_University_EventScript_NikoGivesFirstPokeballs_Text_5:
# 732 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Use those Great Balls on Pokémon giving\n"
	.string "you a hard time! They work like a charm.\p"
	.string "Come back to the University as you fill\n"
	.string "up the Pokédex! Rania and I might have\l"
	.string "some new gear for you to try out.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_0:
# 805 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Chaire, {PLAYER}! How's your research\n"
	.string "going? I can check your Rotom Phone\l"
	.string "Pokédex progress!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_1:
# 809 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "No? That's okay, go out there and\n"
	.string "gather some more data! I may have\l"
	.string "{COLOR GREEN}rewards{COLOR DARK_GRAY} for you next time.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_2:
# 822 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've seen {STR_VAR_1} Pokémon,\n"
	.string "and caught {STR_VAR_2} Pokémon!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_3:
# 829 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured at least 10 unique\n"
	.string "Pokémon! You're certainly capable,\l"
	.string "{PLAYER}. Here's your first progress\l"
	.string "reward!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_4:
# 835 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "That Nugget can be sold for a pretty\n"
	.string "penny! It should help fund your\l"
	.string "studies. As you catch more Pokémon, I'll\l"
	.string "have more for you.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_5:
# 842 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured at least 25 unique\n"
	.string "Pokémon! Great job, {PLAYER}! Here's a\l"
	.string "nice new item.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_6:
# 848 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Pokémon holding the Loaded Dice will be\n"
	.string "able to land multi-hit attacks more\l"
	.string "times in a row! As you catch more\l"
	.string "Pokémon, I'll have more for you.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_7:
# 855 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured at least 50 unique\n"
	.string "Pokémon! Great job, {PLAYER}! Here's a\l"
	.string "nice new item.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_8:
# 861 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "That move, Return, gets more powerful\n"
	.string "the more your Pokémon like you! As you\l"
	.string "catch more Pokémon, I'll have more for\l"
	.string "you.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_9:
# 868 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured at least 100 unique\n"
	.string "Pokémon! Great job, {PLAYER}!\p"
	.string "We've come across more specimens of\n"
	.string "the Starter Pokémon you saw at the\l"
	.string "beginning of your adventure. Here's\l"
	.string "your first trio!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_10:
# 877 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER} received a Rowlet, Litten,\n"
	.string "and Popplio!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_11:
# 882 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "As you catch more Pokémon, I'll have\n"
	.string "more Starter Pokémon and other rewards\l"
	.string "for you.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_12:
# 889 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured at least 135 unique\n"
	.string "Pokémon! Great job, {PLAYER}!\p"
	.string "We've come across more specimens of\n"
	.string "the Starter Pokémon you saw at the\l"
	.string "beginning of your adventure. Here's\l"
	.string "your first trio!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_13:
# 898 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER} received a Chespin,\n"
	.string "Fennekin, and Froakie!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_14:
# 910 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured at least 170 unique\n"
	.string "Pokémon! Great job, {PLAYER}!\p"
	.string "We've come across more specimens of\n"
	.string "the Starter Pokémon you saw at the\l"
	.string "beginning of your adventure. Here's\l"
	.string "your first trio!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_15:
# 919 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER} received a Sprigatito,\n"
	.string "Fuecoco, and Quaxly!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_16:
# 924 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Looks like you've gotten all 9 Starter\n"
	.string "Pokémon!\p"
	.string "As you catch more Pokémon, I'll have\n"
	.string "other rewards for you.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_17:
# 931 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured at least 200 unique\n"
	.string "Pokémon! Great job, {PLAYER}! Here's a\l"
	.string "nice new item.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_18:
# 937 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "The Oval Charm increases the odds of\n"
	.string "Pokémon laying Eggs, which is key to our\l"
	.string "research!\p"
	.string "You've recorded half of the estimated\n"
	.string "native Pokémon species in the Ilios\l"
	.string "Region! As you catch more Pokémon, I'll\l"
	.string "have more for you.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_19:
# 944 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured at least 250 unique\n"
	.string "Pokémon! Great job, {PLAYER}! Here's a\l"
	.string "nice new item.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_20:
# 950 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Those are 3 Leftovers items, which let\n"
	.string "your Pokémon regain health every turn\l"
	.string "during battle.\p"
	.string "As you catch more Pokémon, I'll have\n"
	.string "more for you.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_21:
# 957 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You've captured at least 300 unique\n"
	.string "Pokémon! Great job, {PLAYER}! Here's a\l"
	.string "nice new item.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_22:
# 963 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "The Shiny Charm drastically increases\n"
	.string "the chances of finding wild Shiny\l"
	.string "Pokémon. While you continue to complete\l"
	.string "the Pokédex, maybe you'll get lucky and\l"
	.string "find one!\p"
	.string "As you catch more Pokémon, I'll have\n"
	.string "more for you. You're almost done!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_23:
# 972 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "I-i-incredible! You've actually done it!\n"
	.string "Your Rotom Phone Pokédex contains\l"
	.string "data for all 400 known Pokémon species\l"
	.string "in the Ilios Region!\p"
	.string "This calls for something more special\n"
	.string "than a simple item. Here, and me your\l"
	.string "Trainer Card.$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_24:
# 976 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER} received a Trainer Card Gold\n"
	.string "Star!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_25:
# 981 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Earning a Gold Star on your Trainer Card\n"
	.string "is no easy feat. This shows you have\l"
	.string "done something truly remarkable. Your\l"
	.string "research will help the Ilios Region for\l"
	.string "years to come!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_26:
# 991 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Chaire, {PLAYER}! It's nice to see you\n"
	.string "around the lab.\p"
	.string "Although you've recorded all the native\n"
	.string "Pokémon in the Ilios Region, I hope you\l"
	.string "continue to enjoy your time here!$"

AcrisiaCity_University_EventScript_EliaRatePokedex_Text_27:
# 999 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Hmm, it doesn't look like I have any more\n"
	.string "rewards for you at the moment. Get back\l"
	.string "out there and find some new Pokémon!$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_0:
# 1011 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Welcome back, {PLAYER}! Did you find\n"
	.string "that {COLOR GREEN}lost delivery{COLOR DARK_GRAY} yet?$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_1:
# 1014 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Hmm, that's concerning... local crime\n"
	.string "groups have been active lately, I'm\l"
	.string "nervous that the delivery cart was\l"
	.string "attacked. Keep us updated on the\l"
	.string "situation.$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_2:
# 1021 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Aie! The delivery cart was attacked!?\n"
	.string "Well I'm glad everyone is okay...\p"
	.string "Here, I'll enable your {COLOR GREEN}Rotom Phone's\n"
	.string "Pokédex function{COLOR DARK_GRAY}.$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_3:
# 1033 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER}'s {COLOR GREEN}Rotom Phone{COLOR DARK_GRAY} was enabled!$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_4:
# 1041 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "The {COLOR GREEN}Rotom Phone{COLOR DARK_GRAY} also has various other\n"
	.string "functions. Besides the Pokédex, it can\l"
	.string "also be used to {COLOR GREEN}view your ongoing\l"
	.string "Quests{COLOR DARK_GRAY} and an {COLOR GREEN}Ilios Region map{COLOR DARK_GRAY}!\p"
	.string "Oh, before I forget about these -\n"
	.string "here's an EXP Share and an Outfit Box!$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_5:
# 1047 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "The EXP Share and Outfit Box were\n"
	.string "added to the Bag!$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_6:
# 1051 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "I think it's a good idea to train your\n"
	.string "Pokémon for battle, in case more\l"
	.string "troublemakers come around. Why don't\l"
	.string "you {COLOR GREEN}battle the Pokémon Gyms{COLOR DARK_GRAY} you find\l"
	.string "while you're exploring the Ilios Region?\l"
	.string "That'll get your Pokémon raring to go!$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_7:
# 1054 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "The {COLOR GREEN}first Gym{COLOR DARK_GRAY} is south of here, in\n"
	.string "{COLOR GREEN}Jusmail Town{COLOR DARK_GRAY}. Come back to me with the\l"
	.string "{COLOR GREEN}first Gym Badge{COLOR DARK_GRAY} to show me your skill as\l"
	.string "a trainer!$"

AcrisiaCity_University_EventScript_EliaLostPokedexDeliveryCheck_Text_8:
# 1068 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "You did? Well, where's the Rotom Phone?\p"
	.string "...Come on {PLAYER}, we need to make\n"
	.string "sure the delivery folks are alright! Go\l"
	.string "look again!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_0:
# 1079 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Chaire, welcome back {PLAYER}! Have\n"
	.string "you made it to the {COLOR GREEN}Jusmail Town Gym{COLOR DARK_GRAY}\l"
	.string "yet?$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_1:
# 1084 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Still training, eh? No rush, no rush!\p"
	.string "Come back to the University and check\n"
	.string "in with me when you have your first Gym\l"
	.string "Badge.$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_2:
# 1090 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Well done! You're well on your way to\n"
	.string "being a great trainer.\p"
	.string "Here, I wanted to give you something to\n"
	.string "celebrate!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeOne_Text_3:
# 1096 "data/maps/AcrisiaCity_University/scripts.pory"
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
# 1114 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER}, welcome, welcome! Have you\n"
	.string "crossed the rail bridge and explored\l"
	.string "east to {COLOR GREEN}Kalami City{COLOR DARK_GRAY} yet? Your next Gym\l"
	.string "Badge is there!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_1:
# 1119 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Not yet, hm? That's fine, the swamps to\n"
	.string "the east are a tough area. Remember,\l"
	.string "you can always do some extra training\l"
	.string "in the Acrisia Mountains to the west!\p"
	.string "Come back and check in with me when you\n"
	.string "have your second Gym Badge. I've got\l"
	.string "another gift for you!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_2:
# 1129 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Incredible! You're becoming a great\n"
	.string "Pokémon trainer. As promised, here's\l"
	.string "something exciting for you!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_3:
# 1135 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "Oh right, another thing! I ordered a new\n"
	.string "piece of tech from the Hoenn Region\l"
	.string "which might help you out. Here, look at\l"
	.string "this!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_4:
# 1146 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "{PLAYER} can use the {COLOR GREEN}DexNav{COLOR DARK_GRAY}!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_5:
# 1151 "data/maps/AcrisiaCity_University/scripts.pory"
	.string "It came with directions! It says to\n"
	.string "select a Pokémon from the {COLOR GREEN}DexNav menu{COLOR DARK_GRAY}\l"
	.string "to try and find it, then {COLOR GREEN}hold the A\l"
	.string "Button{COLOR DARK_GRAY} to {COLOR GREEN}creep up on the Pokémon{COLOR DARK_GRAY}! If\l"
	.string "you move too fast, the Pokémon will {COLOR RED}run\l"
	.string "away{COLOR DARK_GRAY}. Seems useful!$"

AcrisiaCity_University_EventScript_EliaCheckBadgeTwo_Text_6:
# 1154 "data/maps/AcrisiaCity_University/scripts.pory"
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

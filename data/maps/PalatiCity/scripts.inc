PalatiCity_MapScripts::
# 2 "data/maps/PalatiCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalatiCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 28 "data/maps/PalatiCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalatiCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PalatiCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PalatiCity/scripts.pory"
	setflag FLAG_VISITED_PALATI_CITY
# 5 "data/maps/PalatiCity/scripts.pory"
	goto_if_unset FLAG_CHIMERA_WEATHER_ACTIVE, PalatiCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
PalatiCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 11 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 12 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 13 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 14 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 15 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 16 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 17 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 18 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 19 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 20 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 21 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 22 "data/maps/PalatiCity/scripts.pory"
	setobjectaswildencounter 31, ENCOUNTER_LAND
# 23 "data/maps/PalatiCity/scripts.pory"
	setobjectaswildencounter 32, ENCOUNTER_LAND
# 24 "data/maps/PalatiCity/scripts.pory"
	setobjectaswildencounter 33, ENCOUNTER_LAND
# 25 "data/maps/PalatiCity/scripts.pory"
	setobjectaswildencounter 34, ENCOUNTER_LAND
	return

PalatiCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/PalatiCity/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto PalatiCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PalatiCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 29 "data/maps/PalatiCity/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PalatiCity_EventScript_TryChimeraEvent
	.2byte 0


PalatiCity_EventScript_TryChimeraEvent::
# 35 "data/maps/PalatiCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 36 "data/maps/PalatiCity/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 37 "data/maps/PalatiCity/scripts.pory"
	doweather
# 38 "data/maps/PalatiCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, PalatiCity_EventScript_TryChimeraEvent_3
PalatiCity_EventScript_TryChimeraEvent_1:
# 42 "data/maps/PalatiCity/scripts.pory"
	releaseall
	end

PalatiCity_EventScript_TryChimeraEvent_2:
# 40 "data/maps/PalatiCity/scripts.pory"
	goto PalatiCity_EventScript_ChimeraEvent
	goto PalatiCity_EventScript_TryChimeraEvent_1

PalatiCity_EventScript_TryChimeraEvent_3:
# 38 "data/maps/PalatiCity/scripts.pory"
	goto_if_unset FLAG_DID_CHIMERA_EVENT_PALATI_CITY, PalatiCity_EventScript_TryChimeraEvent_2
	goto PalatiCity_EventScript_TryChimeraEvent_1


PalatiCity_EventScript_ChimeraEvent::
# 48 "data/maps/PalatiCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 50 "data/maps/PalatiCity/scripts.pory"
	lockall
# 51 "data/maps/PalatiCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 52 "data/maps/PalatiCity/scripts.pory"
	delay 10
# 53 "data/maps/PalatiCity/scripts.pory"
	applymovement 40, Common_Movement_WalkDown
# 54 "data/maps/PalatiCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 55 "data/maps/PalatiCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 56 "data/maps/PalatiCity/scripts.pory"
	waitmovement 0
# 57 "data/maps/PalatiCity/scripts.pory"
	delay 10
# 58 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_ChimeraEvent_Text_0
# 59 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_ChimeraEvent_Text_1
# 60 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 61 "data/maps/PalatiCity/scripts.pory"
	delay 10
# 64 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_ChimeraEvent_Text_2
# 65 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_ChimeraEvent_Text_3
# 66 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 67 "data/maps/PalatiCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 68 "data/maps/PalatiCity/scripts.pory"
	waitmovement 0
# 69 "data/maps/PalatiCity/scripts.pory"
	emote OBJ_EVENT_ID_PLAYER, EMOTE_QUESTION
# 70 "data/maps/PalatiCity/scripts.pory"
	applymovement 41, PalatiCity_Movement_RaniaApproachesPlayer
# 71 "data/maps/PalatiCity/scripts.pory"
	waitmovement 0
# 72 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_ChimeraEvent_Text_4
# 73 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_ChimeraEvent_Text_5
# 74 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 75 "data/maps/PalatiCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 76 "data/maps/PalatiCity/scripts.pory"
	waitmovement 0
# 77 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_ChimeraEvent_Text_0
# 78 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_ChimeraEvent_Text_6
# 79 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 81 "data/maps/PalatiCity/scripts.pory"
	warp MAP_SOFOS_CITY_ACROPOLIS, 5, 10
# 82 "data/maps/PalatiCity/scripts.pory"
	waitstate
# 83 "data/maps/PalatiCity/scripts.pory"
	release
	end


# 100 "data/maps/PalatiCity/scripts.pory"
PalatiCity_Movement_RaniaApproachesPlayer:
# 102 "data/maps/PalatiCity/scripts.pory"
	walk_right
# 102 "data/maps/PalatiCity/scripts.pory"
	walk_right
# 102 "data/maps/PalatiCity/scripts.pory"
	walk_right
# 102 "data/maps/PalatiCity/scripts.pory"
	walk_right
# 102 "data/maps/PalatiCity/scripts.pory"
	walk_right
# 102 "data/maps/PalatiCity/scripts.pory"
	walk_right
# 102 "data/maps/PalatiCity/scripts.pory"
	walk_right
# 102 "data/maps/PalatiCity/scripts.pory"
	walk_right
# 103 "data/maps/PalatiCity/scripts.pory"
	walk_up
# 104 "data/maps/PalatiCity/scripts.pory"
	face_up
# 105 "data/maps/PalatiCity/scripts.pory"
	step_end

PalatiCity_EventScript_ArtistPlayingChess::
# 110 "data/maps/PalatiCity/scripts.pory"
	lock
# 111 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 112 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_ArtistPlayingChess_Text_0
# 113 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_ArtistPlayingChess_Text_1
# 114 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 115 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_CyclingTriathleteF::
# 121 "data/maps/PalatiCity/scripts.pory"
	lock
# 122 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 123 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_CyclingTriathleteF_Text_0
# 124 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_CyclingTriathleteF_Text_1
# 125 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 126 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_BlackBeltNearStatue::
# 132 "data/maps/PalatiCity/scripts.pory"
	lock
# 133 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 134 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_BlackBeltNearStatue_Text_0
# 135 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_BlackBeltNearStatue_Text_1
# 136 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 137 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_OfficerRunningAround::
# 143 "data/maps/PalatiCity/scripts.pory"
	lock
# 144 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 145 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_OfficerRunningAround_Text_0
# 146 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_OfficerRunningAround_Text_1
# 147 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 148 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_Boltund::
# 154 "data/maps/PalatiCity/scripts.pory"
	lock
# 155 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 156 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_Boltund_Text_0
# 157 "data/maps/PalatiCity/scripts.pory"
	playmoncry SPECIES_BOLTUND, CRY_MODE_NORMAL
# 158 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_Boltund_Text_1
# 159 "data/maps/PalatiCity/scripts.pory"
	waitmoncry
# 160 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 161 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_ManLookingAtArchen::
# 167 "data/maps/PalatiCity/scripts.pory"
	lock
# 168 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 169 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_ManLookingAtArchen_Text_0
# 172 "data/maps/PalatiCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_SHOW_MAN_ARCHEN_FROM_PARTY
# 173 "data/maps/PalatiCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PalatiCity_EventScript_ManLookingAtArchen_2
# 182 "data/maps/PalatiCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_SHOW_MAN_ARCHEN_FROM_PARTY
# 183 "data/maps/PalatiCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PalatiCity_EventScript_ManLookingAtArchen_5
# 197 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_ManLookingAtArchen_Text_4
# 198 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 200 "data/maps/PalatiCity/scripts.pory"
	checkforspecieslocal SPECIES_ARCHEN, OPEN_PARTY_SCREEN
# 201 "data/maps/PalatiCity/scripts.pory"
	delay 30
# 202 "data/maps/PalatiCity/scripts.pory"
	compare VAR_RESULT, SPECIES_ARCHEN
	goto_if_ne PalatiCity_EventScript_ManLookingAtArchen_8
# 210 "data/maps/PalatiCity/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 211 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_ManLookingAtArchen_Text_0
# 212 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_ManLookingAtArchen_Text_6
# 213 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 214 "data/maps/PalatiCity/scripts.pory"
	delay 5
# 215 "data/maps/PalatiCity/scripts.pory"
	giveitem ITEM_NEST_BALL, 10
# 216 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 217 "data/maps/PalatiCity/scripts.pory"
	delay 20
# 218 "data/maps/PalatiCity/scripts.pory"
	completequest QUEST_SHOW_MAN_ARCHEN_FROM_PARTY
PalatiCity_EventScript_ManLookingAtArchen_4:
# 221 "data/maps/PalatiCity/scripts.pory"
	release
	end

PalatiCity_EventScript_ManLookingAtArchen_2:
# 175 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_ManLookingAtArchen_Text_1
# 176 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 177 "data/maps/PalatiCity/scripts.pory"
	release
	end

PalatiCity_EventScript_ManLookingAtArchen_5:
# 185 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_ManLookingAtArchen_Text_2
# 186 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 187 "data/maps/PalatiCity/scripts.pory"
	delay 30
# 188 "data/maps/PalatiCity/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 189 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_ManLookingAtArchen_Text_0
# 190 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_ManLookingAtArchen_Text_3
# 191 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 192 "data/maps/PalatiCity/scripts.pory"
	delay 20
# 193 "data/maps/PalatiCity/scripts.pory"
	startquest QUEST_SHOW_MAN_ARCHEN_FROM_PARTY
	goto PalatiCity_EventScript_ManLookingAtArchen_4

PalatiCity_EventScript_ManLookingAtArchen_8:
# 204 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_ManLookingAtArchen_Text_0
# 205 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_ManLookingAtArchen_Text_5
# 206 "data/maps/PalatiCity/scripts.pory"
	closemessage
	goto PalatiCity_EventScript_ManLookingAtArchen_4


PalatiCity_EventScript_GirlLosingChess::
# 227 "data/maps/PalatiCity/scripts.pory"
	lock
# 228 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 229 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_GirlLosingChess_Text_0
# 230 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_GirlLosingChess_Text_1
# 231 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 232 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_Oranguru::
# 238 "data/maps/PalatiCity/scripts.pory"
	lock
# 239 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 240 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_Oranguru_Text_0
# 241 "data/maps/PalatiCity/scripts.pory"
	playmoncry SPECIES_ORANGURU, CRY_MODE_NORMAL
# 242 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_Oranguru_Text_1
# 243 "data/maps/PalatiCity/scripts.pory"
	waitmoncry
# 244 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 245 "data/maps/PalatiCity/scripts.pory"
	delay 5
# 246 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_Oranguru_Text_2
# 247 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 248 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_LittleGirl::
# 254 "data/maps/PalatiCity/scripts.pory"
	lock
# 255 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 256 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_LittleGirl_Text_0
# 257 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_LittleGirl_Text_1
# 258 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 259 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_Camper::
# 265 "data/maps/PalatiCity/scripts.pory"
	lock
# 266 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 267 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_Camper_Text_0
# 268 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_Camper_Text_1
# 269 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 270 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_CollectorWithArmorouge::
# 276 "data/maps/PalatiCity/scripts.pory"
	lock
# 277 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 278 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_CollectorWithArmorouge_Text_0
# 279 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_CollectorWithArmorouge_Text_1
# 280 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 281 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_Armorouge::
# 287 "data/maps/PalatiCity/scripts.pory"
	lock
# 288 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 289 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_Armorouge_Text_0
# 290 "data/maps/PalatiCity/scripts.pory"
	playmoncry SPECIES_ARMAROUGE, CRY_MODE_NORMAL
# 291 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_Armorouge_Text_1
# 292 "data/maps/PalatiCity/scripts.pory"
	waitmoncry
# 293 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 294 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_BeautyInRoad::
# 300 "data/maps/PalatiCity/scripts.pory"
	lock
# 301 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 302 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_BeautyInRoad_Text_0
# 303 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_BeautyInRoad_Text_1
# 304 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 305 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_PsychicM::
# 311 "data/maps/PalatiCity/scripts.pory"
	lock
# 312 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 313 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_PsychicM_Text_0
# 314 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_PsychicM_Text_1
# 315 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 316 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_PokeFan::
# 322 "data/maps/PalatiCity/scripts.pory"
	lock
# 323 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 324 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_PokeFan_Text_0
# 325 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_PokeFan_Text_1
# 326 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 327 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_Cyclizar::
# 333 "data/maps/PalatiCity/scripts.pory"
	lock
# 334 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 335 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_Cyclizar_Text_0
# 336 "data/maps/PalatiCity/scripts.pory"
	playmoncry SPECIES_CYCLIZAR, CRY_MODE_NORMAL
# 337 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_Cyclizar_Text_1
# 338 "data/maps/PalatiCity/scripts.pory"
	waitmoncry
# 339 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 340 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_OldMan::
# 346 "data/maps/PalatiCity/scripts.pory"
	lock
# 347 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 348 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_OldMan_Text_0
# 349 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_OldMan_Text_1
# 350 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 351 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_Youngster::
# 357 "data/maps/PalatiCity/scripts.pory"
	lock
# 358 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 359 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_Youngster_Text_0
# 360 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_Youngster_Text_1
# 361 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 362 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_WorkerMan::
# 368 "data/maps/PalatiCity/scripts.pory"
	lock
# 369 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 370 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_WorkerMan_Text_0
# 371 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_WorkerMan_Text_1
# 372 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 373 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_OldWoman::
# 379 "data/maps/PalatiCity/scripts.pory"
	lock
# 380 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 381 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_OldWoman_Text_0
# 382 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_OldWoman_Text_1
# 383 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 384 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_PunkRocker::
# 390 "data/maps/PalatiCity/scripts.pory"
	lock
# 391 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 392 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_PunkRocker_Text_0
# 393 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_PunkRocker_Text_1
# 394 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 395 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_NinjaBoy::
# 401 "data/maps/PalatiCity/scripts.pory"
	lock
# 402 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 403 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_NinjaBoy_Text_0
# 404 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_NinjaBoy_Text_1
# 405 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 406 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_WomanOnBeach::
# 412 "data/maps/PalatiCity/scripts.pory"
	lock
# 413 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 414 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_WomanOnBeach_Text_0
# 415 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_WomanOnBeach_Text_1
# 416 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 417 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_Sign_GymSign::
# 423 "data/maps/PalatiCity/scripts.pory"
	lock
# 424 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_Sign_GymSign_Text_0
# 425 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 426 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_DirectionSign::
# 432 "data/maps/PalatiCity/scripts.pory"
	lock
# 433 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_DirectionSign_Text_0
# 434 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 435 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_ChimeraEvent_Text_0:
# 58 "data/maps/PalatiCity/scripts.pory"
	.string "Rhadine$"

PalatiCity_EventScript_ChimeraEvent_Text_1:
# 59 "data/maps/PalatiCity/scripts.pory"
	.string "It hasn't stormed this badly in\n"
	.string "generations. Did Team Chimera finally do\l"
	.string "it?\p"
	.string "{PLAYER}, you've been fighting Team\n"
	.string "Chimera across the region, right? Then\l"
	.string "you know better than anyone how\l"
	.string "desperately they want control over\l"
	.string "land, sea, and sky. Us Gym Leaders\l"
	.string "discovered their plan to summon a trio\l"
	.string "of Legendary Pokémon: {COLOR GREEN}Raikou, Entei,\l"
	.string "and Suicune{COLOR DARK_GRAY}. These would give Team\l"
	.string "Chimera absolute control of the region,\l"
	.string "to do with as they please.$"

PalatiCity_EventScript_ChimeraEvent_Text_2:
# 64 "data/maps/PalatiCity/scripts.pory"
	.string "???$"

PalatiCity_EventScript_ChimeraEvent_Text_3:
# 65 "data/maps/PalatiCity/scripts.pory"
	.string "{PLAYER}! Thank the Fates, you're\n"
	.string "here!$"

PalatiCity_EventScript_ChimeraEvent_Text_4:
# 72 "data/maps/PalatiCity/scripts.pory"
	.string "Rania$"

PalatiCity_EventScript_ChimeraEvent_Text_5:
# 73 "data/maps/PalatiCity/scripts.pory"
	.string "Piraeus said you'd be here! I sailed with\n"
	.string "him from Sofos City as fast as I could,\l"
	.string "but it looks like the weather beat me.\p"
	.string "Niko and I were in Sofos City to study\n"
	.string "the Acropolis Temple, when Team Chimera\l"
	.string "burst in and took over! I managed to\l"
	.string "slip out, but {COLOR RED}one of the Admins\l"
	.string "captured him{COLOR DARK_GRAY}... If we're going to fight\l"
	.string "back, I need your help. Please, come to\l"
	.string "Sofos City with me!$"

PalatiCity_EventScript_ChimeraEvent_Text_6:
# 78 "data/maps/PalatiCity/scripts.pory"
	.string "I'll come too! If the rumors are true,\n"
	.string "then Team Chimera might have already\l"
	.string "awakened Legendary Pokémon. Come on!$"

PalatiCity_EventScript_ArtistPlayingChess_Text_0:
# 112 "data/maps/PalatiCity/scripts.pory"
	.string "Artist$"

PalatiCity_EventScript_ArtistPlayingChess_Text_1:
# 113 "data/maps/PalatiCity/scripts.pory"
	.string "I'm studying the game board to think of\n"
	.string "strategies. It's really an art form!$"

PalatiCity_EventScript_CyclingTriathleteF_Text_0:
# 123 "data/maps/PalatiCity/scripts.pory"
	.string "Cyclist$"

PalatiCity_EventScript_CyclingTriathleteF_Text_1:
# 124 "data/maps/PalatiCity/scripts.pory"
	.string "Palati City has some of the smoothest\n"
	.string "roads in the region! That's why I come\l"
	.string "here to ride.$"

PalatiCity_EventScript_BlackBeltNearStatue_Text_0:
# 134 "data/maps/PalatiCity/scripts.pory"
	.string "Black Belt$"

PalatiCity_EventScript_BlackBeltNearStatue_Text_1:
# 135 "data/maps/PalatiCity/scripts.pory"
	.string "These statues have been standing for\n"
	.string "thousands of years. I think they were\l"
	.string "great warriors from their time... I\l"
	.string "wonder if there will be statues made of\l"
	.string "me!$"

PalatiCity_EventScript_OfficerRunningAround_Text_0:
# 145 "data/maps/PalatiCity/scripts.pory"
	.string "Officer$"

PalatiCity_EventScript_OfficerRunningAround_Text_1:
# 146 "data/maps/PalatiCity/scripts.pory"
	.string "My Boltund is too fast for me! I\n"
	.string "shouldn't have had that extra donut\l"
	.string "this morning... Urrp!$"

PalatiCity_EventScript_Boltund_Text_0:
# 156 "data/maps/PalatiCity/scripts.pory"
	.string "Boltund$"

PalatiCity_EventScript_Boltund_Text_1:
# 158 "data/maps/PalatiCity/scripts.pory"
	.string "Bwuf bwuf!$"

PalatiCity_EventScript_ManLookingAtArchen_Text_0:
# 169 "data/maps/PalatiCity/scripts.pory"
	.string "Archen Fan$"

PalatiCity_EventScript_ManLookingAtArchen_Text_1:
# 175 "data/maps/PalatiCity/scripts.pory"
	.string "I'm a lot happier now that I've seen\n"
	.string "your Archen up close. I'd love to catch\l"
	.string "that one on top of the Gym someday,\l"
	.string "though.$"

PalatiCity_EventScript_ManLookingAtArchen_Text_2:
# 185 "data/maps/PalatiCity/scripts.pory"
	.string "Hey! Do you see that Archen up there?\n"
	.string "I'd love to learn more about it, but I\l"
	.string "can't chase any down...$"

PalatiCity_EventScript_ManLookingAtArchen_Text_3:
# 190 "data/maps/PalatiCity/scripts.pory"
	.string "Wait, that's a Rotom Phone! And those\n"
	.string "are Poké balls on your belt! I bet you\l"
	.string "can help me.\p"
	.string "{COLOR GREEN}Catch an Archen{COLOR DARK_GRAY} and show me from your\n"
	.string "{COLOR GREEN}Party{COLOR DARK_GRAY} so I can see one up-close. I'll\l"
	.string "give you a little something as thanks!$"

PalatiCity_EventScript_ManLookingAtArchen_Text_4:
# 197 "data/maps/PalatiCity/scripts.pory"
	.string "I'm still chasing down Archens in the\n"
	.string "wild, but it's not going well. Do you\l"
	.string "happen to have one?$"

PalatiCity_EventScript_ManLookingAtArchen_Text_5:
# 205 "data/maps/PalatiCity/scripts.pory"
	.string "Doesn't look like you've had any luck\n"
	.string "catching an Archen, either.\p"
	.string "Show me an {COLOR GREEN}Archen from your Party{COLOR DARK_GRAY} if\n"
	.string "you can catch one. I'd love to see one\l"
	.string "up-close.$"

PalatiCity_EventScript_ManLookingAtArchen_Text_6:
# 212 "data/maps/PalatiCity/scripts.pory"
	.string "Ehehe, look at that! Wow, it's so cool...\p"
	.string "Thanks for showing me. One day, I know\n"
	.string "I'll catch one for myself! Here's\l"
	.string "something for your help.$"

PalatiCity_EventScript_GirlLosingChess_Text_0:
# 229 "data/maps/PalatiCity/scripts.pory"
	.string "Girl$"

PalatiCity_EventScript_GirlLosingChess_Text_1:
# 230 "data/maps/PalatiCity/scripts.pory"
	.string "This is unreal! My Oranguru is kicking my\n"
	.string "butt! I knew they were smart, but this\l"
	.string "is wild...$"

PalatiCity_EventScript_Oranguru_Text_0:
# 240 "data/maps/PalatiCity/scripts.pory"
	.string "Oranguru$"

PalatiCity_EventScript_Oranguru_Text_1:
# 242 "data/maps/PalatiCity/scripts.pory"
	.string "Mmm... Mhmhm!$"

PalatiCity_EventScript_Oranguru_Text_2:
# 246 "data/maps/PalatiCity/scripts.pory"
	.string "Oranguru has a grin on its face... It\n"
	.string "knows it's winning!$"

PalatiCity_EventScript_LittleGirl_Text_0:
# 256 "data/maps/PalatiCity/scripts.pory"
	.string "Little Girl$"

PalatiCity_EventScript_LittleGirl_Text_1:
# 257 "data/maps/PalatiCity/scripts.pory"
	.string "Palati City is all covered in stone, but\n"
	.string "look! Just outside the city, all these\l"
	.string "plants are growing, and Pokémon are\l"
	.string "playing!$"

PalatiCity_EventScript_Camper_Text_0:
# 267 "data/maps/PalatiCity/scripts.pory"
	.string "Camper$"

PalatiCity_EventScript_Camper_Text_1:
# 268 "data/maps/PalatiCity/scripts.pory"
	.string "All Pokémon have different strengths\n"
	.string "and weaknesses. I heard the Gym Leader\l"
	.string "that lives here uses Fire and\l"
	.string "Flying-type Pokémon. I bet Rock-type\l"
	.string "Pokémon would totally win against that!$"

PalatiCity_EventScript_CollectorWithArmorouge_Text_0:
# 278 "data/maps/PalatiCity/scripts.pory"
	.string "Collector$"

PalatiCity_EventScript_CollectorWithArmorouge_Text_1:
# 279 "data/maps/PalatiCity/scripts.pory"
	.string "I found some ancient armor pieces in\n"
	.string "the areas around Palati City, and they\l"
	.string "made my Charcadet evolve. How\l"
	.string "fascinating!$"

PalatiCity_EventScript_Armorouge_Text_0:
# 289 "data/maps/PalatiCity/scripts.pory"
	.string "Armarouge$"

PalatiCity_EventScript_Armorouge_Text_1:
# 291 "data/maps/PalatiCity/scripts.pory"
	.string "Hyeh!$"

PalatiCity_EventScript_BeautyInRoad_Text_0:
# 302 "data/maps/PalatiCity/scripts.pory"
	.string "Beauty$"

PalatiCity_EventScript_BeautyInRoad_Text_1:
# 303 "data/maps/PalatiCity/scripts.pory"
	.string "Every area in the Ilios Region has its\n"
	.string "own fashion. Personally, I think Palati\l"
	.string "City fashion is the best of all!$"

PalatiCity_EventScript_PsychicM_Text_0:
# 313 "data/maps/PalatiCity/scripts.pory"
	.string "Psychic$"

PalatiCity_EventScript_PsychicM_Text_1:
# 314 "data/maps/PalatiCity/scripts.pory"
	.string "My Pokémon help me see visions of the\n"
	.string "past. Palati City has the longest\l"
	.string "history of any city in the Ilios Region.$"

PalatiCity_EventScript_PokeFan_Text_0:
# 324 "data/maps/PalatiCity/scripts.pory"
	.string "Pokéfan$"

PalatiCity_EventScript_PokeFan_Text_1:
# 325 "data/maps/PalatiCity/scripts.pory"
	.string "I ride around on the back of my\n"
	.string "Cyclizar! It can't evolve, but I've\l"
	.string "heard it can change form somehow...$"

PalatiCity_EventScript_Cyclizar_Text_0:
# 335 "data/maps/PalatiCity/scripts.pory"
	.string "Cyclizar$"

PalatiCity_EventScript_Cyclizar_Text_1:
# 337 "data/maps/PalatiCity/scripts.pory"
	.string "Kroom room!$"

PalatiCity_EventScript_OldMan_Text_0:
# 348 "data/maps/PalatiCity/scripts.pory"
	.string "Old Man$"

PalatiCity_EventScript_OldMan_Text_1:
# 349 "data/maps/PalatiCity/scripts.pory"
	.string "There are lots of foodstuffs free for\n"
	.string "the taking around the city. We have\l"
	.string "plenty of food to go around here, so\l"
	.string "it's a good use of resources.$"

PalatiCity_EventScript_Youngster_Text_0:
# 359 "data/maps/PalatiCity/scripts.pory"
	.string "Youngster$"

PalatiCity_EventScript_Youngster_Text_1:
# 360 "data/maps/PalatiCity/scripts.pory"
	.string "I hear there are strong Trainers on\n"
	.string "Kaptara Island. If you're going to\l"
	.string "challenge the Gym, you should make sure\l"
	.string "you can beat them.$"

PalatiCity_EventScript_WorkerMan_Text_0:
# 370 "data/maps/PalatiCity/scripts.pory"
	.string "Worker$"

PalatiCity_EventScript_WorkerMan_Text_1:
# 371 "data/maps/PalatiCity/scripts.pory"
	.string "The palace-like buildings of Palati City\n"
	.string "have stood for thousands of years.\l"
	.string "When we make repairs, we have to be\l"
	.string "careful to preserve the original\l"
	.string "architecture.$"

PalatiCity_EventScript_OldWoman_Text_0:
# 381 "data/maps/PalatiCity/scripts.pory"
	.string "Old Woman$"

PalatiCity_EventScript_OldWoman_Text_1:
# 382 "data/maps/PalatiCity/scripts.pory"
	.string "I used to play this game when I was a\n"
	.string "girl. Now, most people go to Sofos City's\l"
	.string "Arcade to play modern games.$"

PalatiCity_EventScript_PunkRocker_Text_0:
# 392 "data/maps/PalatiCity/scripts.pory"
	.string "Punk Rocker$"

PalatiCity_EventScript_PunkRocker_Text_1:
# 393 "data/maps/PalatiCity/scripts.pory"
	.string "The wild Timburr and Gurdurr found\n"
	.string "around the city are descended from the\l"
	.string "first Pokémon, who helped build the\l"
	.string "palaces thousands of years ago. I'm\l"
	.string "more of a music girl, but I can\l"
	.string "appreciate history!$"

PalatiCity_EventScript_NinjaBoy_Text_0:
# 403 "data/maps/PalatiCity/scripts.pory"
	.string "Ninja Boy$"

PalatiCity_EventScript_NinjaBoy_Text_1:
# 404 "data/maps/PalatiCity/scripts.pory"
	.string "That old sailor lets me play with his\n"
	.string "Vaporeon when he sails here!$"

PalatiCity_EventScript_WomanOnBeach_Text_0:
# 414 "data/maps/PalatiCity/scripts.pory"
	.string "Woman$"

PalatiCity_EventScript_WomanOnBeach_Text_1:
# 415 "data/maps/PalatiCity/scripts.pory"
	.string "Palati City doesn't have much of a\n"
	.string "beach to speak of. Over the centuries,\l"
	.string "the beaches eroded away to almost\l"
	.string "nothing.\p"
	.string "The island still stands, though. My\n"
	.string "professor said it was the first place in\l"
	.string "Ilios to develop civilization!$"

PalatiCity_Sign_GymSign_Text_0:
# 424 "data/maps/PalatiCity/scripts.pory"
	.string "Gym Leader: Rhadine\n"
	.string "Muse of Fiery Love and Beauty$"

PalatiCity_EventScript_DirectionSign_Text_0:
# 433 "data/maps/PalatiCity/scripts.pory"
	.string "Palati City\n"
	.string "The Birthplace of Ilian Civilization\p"
	.string "{LEFT_ARROW} Kaptara Island - Krikri Gorge\n"
	.string "Kaptara Island - Octillery Forest {RIGHT_ARROW}$"

AsfalHills_MapScripts::
# 2 "data/maps/AsfalHills/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AsfalHills_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AsfalHills_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 4 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 5 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 6 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 7 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 8 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 9 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 10 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 11 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 12 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 13 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 14 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 15 "data/maps/AsfalHills/scripts.pory"
	setobjectaswildencounter 23, ENCOUNTER_LAND
# 16 "data/maps/AsfalHills/scripts.pory"
	setobjectaswildencounter 24, ENCOUNTER_LAND
# 17 "data/maps/AsfalHills/scripts.pory"
	setobjectaswildencounter 25, ENCOUNTER_LAND
# 18 "data/maps/AsfalHills/scripts.pory"
	setobjectaswildencounter 26, ENCOUNTER_LAND
# 19 "data/maps/AsfalHills/scripts.pory"
	setobjectaswildencounter 27, ENCOUNTER_LAND
# 20 "data/maps/AsfalHills/scripts.pory"
	setobjectaswildencounter 32, ENCOUNTER_LAND
	return


AsfalHills_EventScript_DirectionSign::
# 26 "data/maps/AsfalHills/scripts.pory"
	lock
# 27 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_DirectionSign_Text_0
# 28 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 29 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_LibrarySign::
# 35 "data/maps/AsfalHills/scripts.pory"
	lock
# 36 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_LibrarySign_Text_0
# 37 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 38 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Nurse::
# 44 "data/maps/AsfalHills/scripts.pory"
	lock
# 45 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 46 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Nurse_Text_0
# 47 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Nurse_Text_1, MSGBOX_YESNO
# 48 "data/maps/AsfalHills/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AsfalHills_EventScript_Nurse_2
# 59 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Nurse_Text_0
# 60 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Nurse_Text_3
# 61 "data/maps/AsfalHills/scripts.pory"
	closemessage
AsfalHills_EventScript_Nurse_1:
# 63 "data/maps/AsfalHills/scripts.pory"
	release
	end

AsfalHills_EventScript_Nurse_2:
# 50 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 51 "data/maps/AsfalHills/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 52 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 53 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Nurse_Text_0
# 54 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Nurse_Text_2
# 55 "data/maps/AsfalHills/scripts.pory"
	closemessage
	goto AsfalHills_EventScript_Nurse_1


AsfalHills_EventScript_Trainer_AsfalHills_Salmai::
# 69 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_single TRAINER_ASFALHILLS_SALMAI, AsfalHills_Text_Trainer_AsfalHills_SalmaiIntro, AsfalHills_Text_Trainer_AsfalHills_SalmaiDefeat
# 70 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Salmai_Text_0
# 71 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Salmai_Text_1
# 72 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 73 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Trainer_AsfalHills_Ardrin::
# 87 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_single TRAINER_ASFALHILLS_ARDRIN, AsfalHills_Text_Trainer_AsfalHills_ArdrinIntro, AsfalHills_Text_Trainer_AsfalHills_ArdrinDefeat
# 88 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Ardrin_Text_0
# 89 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Ardrin_Text_1
# 90 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 91 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Trainer_AsfalHills_Vito::
# 105 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_single TRAINER_ASFALHILLS_VITO, AsfalHills_Text_Trainer_AsfalHills_VitoIntro, AsfalHills_Text_Trainer_AsfalHills_VitoDefeat
# 106 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Vito_Text_0
# 107 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Vito_Text_1
# 108 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 109 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Trainer_AsfalHills_Marisa::
# 124 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_double TRAINER_ASFALHILLS_LENA_AND_MARISA, AsfalHills_Text_Trainer_AsfalHills_MarisaIntro, AsfalHills_Text_Trainer_AsfalHills_MarisaDefeat, AsfalHills_Text_Trainer_AsfalHills_MarisaNotEnoughMons
# 125 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Marisa_Text_0
# 126 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Marisa_Text_1
# 127 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 128 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Trainer_AsfalHills_Lena::
# 146 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_double TRAINER_ASFALHILLS_LENA_AND_MARISA, AsfalHills_Text_Trainer_AsfalHills_LenaIntro, AsfalHills_Text_Trainer_AsfalHills_LenaDefeat, AsfalHills_Text_Trainer_AsfalHills_LenaNotEnoughMons
# 147 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Lena_Text_0
# 148 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Lena_Text_1
# 149 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 150 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Trainer_AsfalHills_Arisbe::
# 168 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_single TRAINER_ASFALHILLS_ARISBE, AsfalHills_Text_Trainer_AsfalHills_ArisbeIntro, AsfalHills_Text_Trainer_AsfalHills_ArisbeDefeat
# 169 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Arisbe_Text_0
# 170 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Arisbe_Text_1
# 171 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 172 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_PsychicM::
# 186 "data/maps/AsfalHills/scripts.pory"
	lock
# 187 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 188 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_PsychicM_Text_0
# 189 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_PsychicM_Text_1
# 190 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 191 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_OfficerBlockingPath::
# 197 "data/maps/AsfalHills/scripts.pory"
	lock
# 198 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 199 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_OfficerBlockingPath_Text_0
# 200 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_OfficerBlockingPath_Text_1
# 201 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 202 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_ManTryingToGetSouth::
# 208 "data/maps/AsfalHills/scripts.pory"
	lock
# 209 "data/maps/AsfalHills/scripts.pory"
	applymovement 15, Common_Movement_ExclamationMark
# 210 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 211 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_ManTryingToGetSouth_Text_0
# 212 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_ManTryingToGetSouth_Text_1
# 213 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 214 "data/maps/AsfalHills/scripts.pory"
	applymovement 15, Common_Movement_FacePlayer
# 215 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 216 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_ManTryingToGetSouth_Text_0
# 217 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_ManTryingToGetSouth_Text_2
# 218 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 219 "data/maps/AsfalHills/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 220 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 221 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_WomanTryingToGetSouth::
# 227 "data/maps/AsfalHills/scripts.pory"
	lock
# 228 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 229 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_WomanTryingToGetSouth_Text_0
# 230 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_WomanTryingToGetSouth_Text_1
# 231 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 232 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Trainer_AsfalHills_Prothoe::
# 238 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_single TRAINER_ASFALHILLS_PROTHOE, AsfalHills_Text_Trainer_AsfalHills_ProthoeIntro, AsfalHills_Text_Trainer_AsfalHills_ProthoeDefeat
# 239 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Prothoe_Text_0
# 240 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Prothoe_Text_1
# 241 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 242 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Trainer_AsfalHills_Batto::
# 256 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_single TRAINER_ASFALHILLS_BATTO, AsfalHills_Text_Trainer_AsfalHills_BattoIntro, AsfalHills_Text_Trainer_AsfalHills_BattoDefeat
# 257 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Batto_Text_0
# 258 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Batto_Text_1
# 259 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 260 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_OldMan::
# 274 "data/maps/AsfalHills/scripts.pory"
	lock
# 275 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 276 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_OldMan_Text_0
# 277 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_OldMan_Text_1
# 278 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 279 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Hiker::
# 285 "data/maps/AsfalHills/scripts.pory"
	lock
# 286 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 287 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Hiker_Text_0
# 288 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Hiker_Text_1
# 289 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 290 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_NikoMeetPlayerEvent::
# 299 "data/maps/AsfalHills/scripts.pory"
	lockall
# 300 "data/maps/AsfalHills/scripts.pory"
	ballfollowingmon
# 301 "data/maps/AsfalHills/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 302 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 303 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 304 "data/maps/AsfalHills/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 305 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 306 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 307 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoMeetPlayerEvent_Text_1
# 308 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 309 "data/maps/AsfalHills/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AsfalHills_Movement_PlayerApproachNiko
# 310 "data/maps/AsfalHills/scripts.pory"
	applymovement 8, AsfalHills_Movement_DuskullApproachPlayer
# 311 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 312 "data/maps/AsfalHills/scripts.pory"
	applymovement 7, Common_Movement_FacePlayer
# 313 "data/maps/AsfalHills/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 314 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 315 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 316 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 317 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoMeetPlayerEvent_Text_2
# 318 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 319 "data/maps/AsfalHills/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 320 "data/maps/AsfalHills/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 321 "data/maps/AsfalHills/scripts.pory"
	applymovement 8, AsfalHills_Movement_DuskullReturnsToNiko
# 322 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 325 "data/maps/AsfalHills/scripts.pory"
	delay 5
# 326 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 327 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoMeetPlayerEvent_Text_3
# 328 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 329 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 330 "data/maps/AsfalHills/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 331 "data/maps/AsfalHills/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 332 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 333 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 334 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoMeetPlayerEvent_Text_4
# 335 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 336 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 337 "data/maps/AsfalHills/scripts.pory"
	applymovement 8, AsfalHills_Movement_DuskullReturnsToStatue
# 338 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 339 "data/maps/AsfalHills/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 340 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 342 "data/maps/AsfalHills/scripts.pory"
	delay 20
# 343 "data/maps/AsfalHills/scripts.pory"
	startquest QUEST_BEAT_CHIMERA_SOFOS_CITY
# 348 "data/maps/AsfalHills/scripts.pory"
	setflag FLAG_TRIGGERED_NIKO_EVENT_ASFAL_HILLS
# 349 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_BLOCKING_SOFOS_GYM
# 350 "data/maps/AsfalHills/scripts.pory"
	setflag FLAG_HIDE_NIKO_ACRISIA_UNIVERSITY
	return


# 353 "data/maps/AsfalHills/scripts.pory"
AsfalHills_Movement_PlayerApproachNiko:
# 355 "data/maps/AsfalHills/scripts.pory"
	walk_right
# 355 "data/maps/AsfalHills/scripts.pory"
	walk_right
# 355 "data/maps/AsfalHills/scripts.pory"
	walk_right
# 356 "data/maps/AsfalHills/scripts.pory"
	walk_up
# 356 "data/maps/AsfalHills/scripts.pory"
	walk_up
# 357 "data/maps/AsfalHills/scripts.pory"
	step_end

# 359 "data/maps/AsfalHills/scripts.pory"
AsfalHills_Movement_DuskullApproachPlayer:
# 361 "data/maps/AsfalHills/scripts.pory"
	walk_right
# 361 "data/maps/AsfalHills/scripts.pory"
	walk_right
# 362 "data/maps/AsfalHills/scripts.pory"
	walk_down
# 363 "data/maps/AsfalHills/scripts.pory"
	delay_16
# 364 "data/maps/AsfalHills/scripts.pory"
	emote_heart
# 365 "data/maps/AsfalHills/scripts.pory"
	step_end

# 367 "data/maps/AsfalHills/scripts.pory"
AsfalHills_Movement_DuskullReturnsToNiko:
# 369 "data/maps/AsfalHills/scripts.pory"
	walk_left
# 369 "data/maps/AsfalHills/scripts.pory"
	walk_left
# 370 "data/maps/AsfalHills/scripts.pory"
	walk_down
# 371 "data/maps/AsfalHills/scripts.pory"
	face_up
# 372 "data/maps/AsfalHills/scripts.pory"
	step_end

# 374 "data/maps/AsfalHills/scripts.pory"
AsfalHills_Movement_DuskullReturnsToStatue:
# 376 "data/maps/AsfalHills/scripts.pory"
	walk_up
# 376 "data/maps/AsfalHills/scripts.pory"
	walk_up
# 377 "data/maps/AsfalHills/scripts.pory"
	face_left
# 378 "data/maps/AsfalHills/scripts.pory"
	step_end

AsfalHills_EventScript_Duskull::
# 382 "data/maps/AsfalHills/scripts.pory"
	lock
# 383 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 384 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Duskull_Text_0
# 385 "data/maps/AsfalHills/scripts.pory"
	playmoncry SPECIES_DUSKULL, CRY_MODE_NORMAL
# 386 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Duskull_Text_1
# 387 "data/maps/AsfalHills/scripts.pory"
	waitmoncry
# 388 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 389 "data/maps/AsfalHills/scripts.pory"
	delay 5
# 390 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Duskull_Text_2
# 391 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 392 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_NikoWaitingForPlayer::
# 398 "data/maps/AsfalHills/scripts.pory"
	lock
# 399 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 400 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 401 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoWaitingForPlayer_Text_0
# 402 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 404 "data/maps/AsfalHills/scripts.pory"
	delay 20
# 405 "data/maps/AsfalHills/scripts.pory"
	checkitem ITEM_TERA_ORB
# 406 "data/maps/AsfalHills/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AsfalHills_EventScript_NikoWaitingForPlayer_2
# 416 "data/maps/AsfalHills/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 417 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 418 "data/maps/AsfalHills/scripts.pory"
	delay 5
# 419 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 420 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoWaitingForPlayer_Text_2
# 421 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 422 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 423 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 424 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoWaitingForPlayer_Text_3
# 425 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 426 "data/maps/AsfalHills/scripts.pory"
	giveitem ITEM_HM_SURF
# 427 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 428 "data/maps/AsfalHills/scripts.pory"
	delay 5
# 429 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 430 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoWaitingForPlayer_Text_4
# 431 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 432 "data/maps/AsfalHills/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 433 "data/maps/AsfalHills/scripts.pory"
	delay 20
# 434 "data/maps/AsfalHills/scripts.pory"
	setflag FLAG_HIDE_NIKO_ASFAL_HILLS
# 435 "data/maps/AsfalHills/scripts.pory"
	removeobject 7
# 436 "data/maps/AsfalHills/scripts.pory"
	removeobject 8
# 437 "data/maps/AsfalHills/scripts.pory"
	setflag FLAG_HIDE_BLOCKING_SOFOS_GYM
# 438 "data/maps/AsfalHills/scripts.pory"
	setflag FLAG_UNLOCKED_TERASTALLIZATION
# 439 "data/maps/AsfalHills/scripts.pory"
	delay 20
# 440 "data/maps/AsfalHills/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 441 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 443 "data/maps/AsfalHills/scripts.pory"
	delay 20
# 444 "data/maps/AsfalHills/scripts.pory"
	completequest QUEST_BEAT_CHIMERA_SOFOS_CITY
# 446 "data/maps/AsfalHills/scripts.pory"
	releaseall
	end

AsfalHills_EventScript_NikoWaitingForPlayer_2:
# 408 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 409 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoWaitingForPlayer_Text_1
# 410 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 411 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_DirectionSign_Text_0:
# 27 "data/maps/AsfalHills/scripts.pory"
	.string "Asfal Hills\n"
	.string "The Gentle Coastal Road\p"
	.string "{LEFT_ARROW} Froslass Cavern\n"
	.string "Sofos City {RIGHT_ARROW}$"

AsfalHills_EventScript_LibrarySign_Text_0:
# 36 "data/maps/AsfalHills/scripts.pory"
	.string "Sofos Outskirts Public Library\n"
	.string "Open to all, 24 Hours a day!$"

AsfalHills_EventScript_Nurse_Text_0:
# 46 "data/maps/AsfalHills/scripts.pory"
	.string "Nurse$"

AsfalHills_EventScript_Nurse_Text_1:
# 47 "data/maps/AsfalHills/scripts.pory"
	.string "Welcome to my Roadside Pokémon Healing\n"
	.string "Service! I'm here to help Trainers\l"
	.string "coming from Pythios Town make it to\l"
	.string "Sofos City.\p"
	.string "Would you like to heal your Pokémon?$"

AsfalHills_EventScript_Nurse_Text_2:
# 54 "data/maps/AsfalHills/scripts.pory"
	.string "Good luck on your adventures!$"

AsfalHills_EventScript_Nurse_Text_3:
# 60 "data/maps/AsfalHills/scripts.pory"
	.string "Feel free to come back any time!$"

AsfalHills_EventScript_Trainer_AsfalHills_Salmai_Text_0:
# 70 "data/maps/AsfalHills/scripts.pory"
	.string "Salmai$"

AsfalHills_EventScript_Trainer_AsfalHills_Salmai_Text_1:
# 71 "data/maps/AsfalHills/scripts.pory"
	.string "Pokémon Eggs take many steps to hatch.\n"
	.string "Moving back and forth like this is a way\l"
	.string "to quickly hatch them!$"

AsfalHills_EventScript_Trainer_AsfalHills_Ardrin_Text_0:
# 88 "data/maps/AsfalHills/scripts.pory"
	.string "Ardrin$"

AsfalHills_EventScript_Trainer_AsfalHills_Ardrin_Text_1:
# 89 "data/maps/AsfalHills/scripts.pory"
	.string "These hills are nice, but they're\n"
	.string "covered in stony ruins. That makes it\l"
	.string "hard for crops to grow.$"

AsfalHills_EventScript_Trainer_AsfalHills_Vito_Text_0:
# 106 "data/maps/AsfalHills/scripts.pory"
	.string "Vito$"

AsfalHills_EventScript_Trainer_AsfalHills_Vito_Text_1:
# 107 "data/maps/AsfalHills/scripts.pory"
	.string "Maybe I'll take a boat from Sofos City\n"
	.string "back to Pythios Town. My parents say\l"
	.string "it's a lot faster!$"

AsfalHills_EventScript_Trainer_AsfalHills_Marisa_Text_0:
# 125 "data/maps/AsfalHills/scripts.pory"
	.string "Maria$"

AsfalHills_EventScript_Trainer_AsfalHills_Marisa_Text_1:
# 126 "data/maps/AsfalHills/scripts.pory"
	.string "You only won because I was looking at\n"
	.string "the statues!$"

AsfalHills_EventScript_Trainer_AsfalHills_Lena_Text_0:
# 147 "data/maps/AsfalHills/scripts.pory"
	.string "Lena$"

AsfalHills_EventScript_Trainer_AsfalHills_Lena_Text_1:
# 148 "data/maps/AsfalHills/scripts.pory"
	.string "I guess Marisa and I need to train some\n"
	.string "more.$"

AsfalHills_EventScript_Trainer_AsfalHills_Arisbe_Text_0:
# 169 "data/maps/AsfalHills/scripts.pory"
	.string "Arisbe$"

AsfalHills_EventScript_Trainer_AsfalHills_Arisbe_Text_1:
# 170 "data/maps/AsfalHills/scripts.pory"
	.string "Most outside areas have different\n"
	.string "Pokémon come out at night. It can feel\l"
	.string "like a whole new area!$"

AsfalHills_EventScript_PsychicM_Text_0:
# 188 "data/maps/AsfalHills/scripts.pory"
	.string "Psychic$"

AsfalHills_EventScript_PsychicM_Text_1:
# 189 "data/maps/AsfalHills/scripts.pory"
	.string "Sofos City is the biggest city in Ilios\n"
	.string "by far. If you go south by Corrin\l"
	.string "Crossing, you get to the sister city of\l"
	.string "Sofos, Port Pello.$"

AsfalHills_EventScript_OfficerBlockingPath_Text_0:
# 199 "data/maps/AsfalHills/scripts.pory"
	.string "Officer$"

AsfalHills_EventScript_OfficerBlockingPath_Text_1:
# 200 "data/maps/AsfalHills/scripts.pory"
	.string "Corrin Crossing is currently unsafe to\n"
	.string "travel due to a high number of\l"
	.string "sinkholes. Come back later, when the\l"
	.string "situation has stabilized.$"

AsfalHills_EventScript_ManTryingToGetSouth_Text_0:
# 211 "data/maps/AsfalHills/scripts.pory"
	.string "Angry Man$"

AsfalHills_EventScript_ManTryingToGetSouth_Text_1:
# 212 "data/maps/AsfalHills/scripts.pory"
	.string "This is ridiculous! I have business in\n"
	.string "Port Pello!$"

AsfalHills_EventScript_ManTryingToGetSouth_Text_2:
# 217 "data/maps/AsfalHills/scripts.pory"
	.string "Can you believe this?! Blocking the\n"
	.string "path to a major city like it's nothing. I\l"
	.string "have to wonder why they're really\l"
	.string "stopping us from going south.$"

AsfalHills_EventScript_WomanTryingToGetSouth_Text_0:
# 229 "data/maps/AsfalHills/scripts.pory"
	.string "Beauty$"

AsfalHills_EventScript_WomanTryingToGetSouth_Text_1:
# 230 "data/maps/AsfalHills/scripts.pory"
	.string "Stopping people from getting to Port\n"
	.string "Pello... this is unbelieveable! There's no\l"
	.string "way this is just about sinkholes like\l"
	.string "they say.$"

AsfalHills_EventScript_Trainer_AsfalHills_Prothoe_Text_0:
# 239 "data/maps/AsfalHills/scripts.pory"
	.string "Prothoe$"

AsfalHills_EventScript_Trainer_AsfalHills_Prothoe_Text_1:
# 240 "data/maps/AsfalHills/scripts.pory"
	.string "Sofos City is huge! It's certainly\n"
	.string "pretty, but there's a certain beauty to\l"
	.string "the wilderness out here, too.$"

AsfalHills_EventScript_Trainer_AsfalHills_Batto_Text_0:
# 257 "data/maps/AsfalHills/scripts.pory"
	.string "Batto$"

AsfalHills_EventScript_Trainer_AsfalHills_Batto_Text_1:
# 258 "data/maps/AsfalHills/scripts.pory"
	.string "My favorite part about the city is the\n"
	.string "Arcade! You can play Pinball to win all\l"
	.string "these cool prizes, it's the best!$"

AsfalHills_EventScript_OldMan_Text_0:
# 276 "data/maps/AsfalHills/scripts.pory"
	.string "Old Man$"

AsfalHills_EventScript_OldMan_Text_1:
# 277 "data/maps/AsfalHills/scripts.pory"
	.string "Back in my day, Sofos City was half the\n"
	.string "size it is now. I moved out here because\l"
	.string "the inner city got too busy for an old\l"
	.string "man like me.$"

AsfalHills_EventScript_Hiker_Text_0:
# 287 "data/maps/AsfalHills/scripts.pory"
	.string "Hiker$"

AsfalHills_EventScript_Hiker_Text_1:
# 288 "data/maps/AsfalHills/scripts.pory"
	.string "I hiked all the way down from the\n"
	.string "mountains in the north. I'm exhausted,\l"
	.string "but it was totally worth it!$"

AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0:
# 306 "data/maps/AsfalHills/scripts.pory"
	.string "Niko$"

AsfalHills_EventScript_NikoMeetPlayerEvent_Text_1:
# 307 "data/maps/AsfalHills/scripts.pory"
	.string "{PLAYER}? Opa! I thought it was you!\n"
	.string "Here, come look at these statues.$"

AsfalHills_EventScript_NikoMeetPlayerEvent_Text_2:
# 317 "data/maps/AsfalHills/scripts.pory"
	.string "Ehehe, looks like Duskull remembers you\n"
	.string "too!$"

AsfalHills_EventScript_NikoMeetPlayerEvent_Text_3:
# 327 "data/maps/AsfalHills/scripts.pory"
	.string "These were two brothers who lived back\n"
	.string "when the Ilios Region was young. On the\l"
	.string "left was a mighty king, while to the\l"
	.string "right was a humble poet.\p"
	.string "Both pursued happiness in different\n"
	.string "ways. The king, obsessed with worldly\l"
	.string "possessions, strove to become the\l"
	.string "richest man in the region. The poet\l"
	.string "remained humble, choosing to help\l"
	.string "others and follow his heart.\p"
	.string "Now, thousands of years later, you can\n"
	.string "see which was better for everyone. The\l"
	.string "king's statue remains overgrown and\l"
	.string "weathered, while the statue of the poet\l"
	.string "is cleaned and cared for.$"

AsfalHills_EventScript_NikoMeetPlayerEvent_Text_4:
# 334 "data/maps/AsfalHills/scripts.pory"
	.string "Ahem, sorry for the info dump. The point\n"
	.string "is, there are more important things in\l"
	.string "the world than money and power.\p"
	.string "You've had encounters with {COLOR GREEN}Team\n"
	.string "Chimera{COLOR DARK_GRAY}, as I'm sure you remember. I\l"
	.string "believe they share a goal with this\l"
	.string "ancient king. I heard rumors that\l"
	.string "they've set up camp {COLOR GREEN}in Sofos City{COLOR DARK_GRAY} and\l"
	.string "stole an important artifact - a\l"
	.string "{COLOR GREEN}Terastallization Orb{COLOR DARK_GRAY}. My bet is, they\l"
	.string "want to sell it or use it to control\l"
	.string "people even more.\p"
	.string "Head into Sofos City, {COLOR GREEN}root out Team\n"
	.string "Chimera{COLOR DARK_GRAY}, and {COLOR GREEN}bring me back that Tera\l"
	.string "Orb{COLOR DARK_GRAY}. We can't let them keep their hands\l"
	.string "on it!$"

AsfalHills_EventScript_Duskull_Text_0:
# 384 "data/maps/AsfalHills/scripts.pory"
	.string "Duskull$"

AsfalHills_EventScript_Duskull_Text_1:
# 386 "data/maps/AsfalHills/scripts.pory"
	.string "Kaaahhh...$"

AsfalHills_EventScript_Duskull_Text_2:
# 390 "data/maps/AsfalHills/scripts.pory"
	.string "Duskull is studying the statue closely.$"

AsfalHills_EventScript_NikoWaitingForPlayer_Text_0:
# 401 "data/maps/AsfalHills/scripts.pory"
	.string "Chaire, {PLAYER}. I'm sorry for\n"
	.string "sending you on such a dangerous quest,\l"
	.string "but I'm afraid I'm not much of a Pokémon\l"
	.string "battler.\p"
	.string "Did you find {COLOR GREEN}Team Chimera's Hideout{COLOR DARK_GRAY}\n"
	.string "around Sofos City?$"

AsfalHills_EventScript_NikoWaitingForPlayer_Text_1:
# 409 "data/maps/AsfalHills/scripts.pory"
	.string "Hmm, I don't see the {COLOR GREEN}Tera Orb{COLOR DARK_GRAY} with you.\n"
	.string "Please, we can't let Team Chimera keep\l"
	.string "that, it's a precious artifact that may\l"
	.string "hold more power than we know.\p"
	.string "Please, find {COLOR GREEN}Team Chimera's Hideout{COLOR DARK_GRAY}\n"
	.string "around Sofos City and {COLOR GREEN}bring back the\l"
	.string "Tera Orb{COLOR DARK_GRAY}!$"

AsfalHills_EventScript_NikoWaitingForPlayer_Text_2:
# 420 "data/maps/AsfalHills/scripts.pory"
	.string "Woah, you got it! The aura radiating\n"
	.string "around it... it can only mean one thing,\l"
	.string "my hunch was correct.\p"
	.string "The Tera Orb allows skilled Trainers to\n"
	.string "unlock the powers of {COLOR GREEN}Terastallization{COLOR DARK_GRAY},\l"
	.string "temporarily changing a Pokémon's type\l"
	.string "and giving them an edge in battle. There\l"
	.string "are only a few of these outside of the\l"
	.string "Paldea Region... I thought only Gym\l"
	.string "Leaders and a few other powerful\l"
	.string "Trainers could have them.\p"
	.string "{PLAYER}, I want you to keep the Tera\n"
	.string "Orb. Team Chimera is clearly trying to\l"
	.string "grow in power, so the safest place for\l"
	.string "it would be with a skilled Trainer like\l"
	.string "you. The Tera Orb can be recharged at\l"
	.string "most Pokémon Centers after being used.$"

AsfalHills_EventScript_NikoWaitingForPlayer_Text_3:
# 424 "data/maps/AsfalHills/scripts.pory"
	.string "What a wreck! I'm glad you were here to\n"
	.string "help, {PLAYER}. This has been way too\l"
	.string "much excitement for me, so I'll be\l"
	.string "bringing Duskull back to the University.\p"
	.string "Oh! Speaking of which, I have something\n"
	.string "for you we've been working on in the lab.\l"
	.string "Take this!$"

AsfalHills_EventScript_NikoWaitingForPlayer_Text_4:
# 430 "data/maps/AsfalHills/scripts.pory"
	.string "The HM Surf will allow you to cross the\n"
	.string "waters of Ilios. Of course, you need the\l"
	.string "Gym Badge from Sofos City to use it!\p"
	.string "Alright, Duskull and I are getting out\n"
	.string "of here before any Team Chimera\l"
	.string "members pay us a visit. Come to Acrisia\l"
	.string "University if you have any\l"
	.string "{COLOR GREEN}Terastallization questions{COLOR DARK_GRAY}!$"

AsfalHills_Text_Trainer_AsfalHills_SalmaiIntro::
# 76 "data/maps/AsfalHills/scripts.pory"
	.string "There's a good, long horizontal stretch\n"
	.string "on this route. Perfect for biking back\l"
	.string "and forth!$"

AsfalHills_Text_Trainer_AsfalHills_SalmaiDefeat::
# 80 "data/maps/AsfalHills/scripts.pory"
	.string "Huff, huff... I have to keep training!$"

AsfalHills_Text_Trainer_AsfalHills_ArdrinIntro::
# 94 "data/maps/AsfalHills/scripts.pory"
	.string "Ahh, it's no good. There are too many\n"
	.string "stones in the ground here for farming!$"

AsfalHills_Text_Trainer_AsfalHills_ArdrinDefeat::
# 98 "data/maps/AsfalHills/scripts.pory"
	.string "I should head back towards Jusmail\n"
	.string "Town.$"

AsfalHills_Text_Trainer_AsfalHills_VitoIntro::
# 112 "data/maps/AsfalHills/scripts.pory"
	.string "I came all the way from Pythios Town!$"

AsfalHills_Text_Trainer_AsfalHills_VitoDefeat::
# 116 "data/maps/AsfalHills/scripts.pory"
	.string "I'm not sure how I'll get back...$"

AsfalHills_Text_Trainer_AsfalHills_MarisaIntro::
# 131 "data/maps/AsfalHills/scripts.pory"
	.string "There are two statues over there.\n"
	.string "Maybe they're twins like us!$"

AsfalHills_Text_Trainer_AsfalHills_MarisaDefeat::
# 135 "data/maps/AsfalHills/scripts.pory"
	.string "So much for twin power...$"

AsfalHills_Text_Trainer_AsfalHills_MarisaNotEnoughMons::
# 139 "data/maps/AsfalHills/scripts.pory"
	.string "We can't battle anyone without at least\n"
	.string "2 Pokémon!$"

AsfalHills_Text_Trainer_AsfalHills_LenaIntro::
# 153 "data/maps/AsfalHills/scripts.pory"
	.string "Two is better than one!$"

AsfalHills_Text_Trainer_AsfalHills_LenaDefeat::
# 157 "data/maps/AsfalHills/scripts.pory"
	.string "I thought two was better than one!$"

AsfalHills_Text_Trainer_AsfalHills_LenaNotEnoughMons::
# 161 "data/maps/AsfalHills/scripts.pory"
	.string "We can't battle anyone without at least\n"
	.string "2 Pokémon!$"

AsfalHills_Text_Trainer_AsfalHills_ArisbeIntro::
# 175 "data/maps/AsfalHills/scripts.pory"
	.string "Look at the Pokémon I found around\n"
	.string "here!$"

AsfalHills_Text_Trainer_AsfalHills_ArisbeDefeat::
# 179 "data/maps/AsfalHills/scripts.pory"
	.string "How could you fight my cuties?!$"

AsfalHills_Text_Trainer_AsfalHills_ProthoeIntro::
# 245 "data/maps/AsfalHills/scripts.pory"
	.string "We're not far from the suburbs around\n"
	.string "Sofos City. Battle me before you go!$"

AsfalHills_Text_Trainer_AsfalHills_ProthoeDefeat::
# 249 "data/maps/AsfalHills/scripts.pory"
	.string "My Pokémon need a rest now!$"

AsfalHills_Text_Trainer_AsfalHills_BattoIntro::
# 263 "data/maps/AsfalHills/scripts.pory"
	.string "Finally, I can see the walls of the city\n"
	.string "from here!$"

AsfalHills_Text_Trainer_AsfalHills_BattoDefeat::
# 267 "data/maps/AsfalHills/scripts.pory"
	.string "I guess my first stop is a Pokémon\n"
	.string "Center!$"

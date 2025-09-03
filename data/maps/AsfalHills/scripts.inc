AsfalHills_MapScripts::
# 2 "data/maps/AsfalHills/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AsfalHills_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AsfalHills_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/AsfalHills/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, AsfalHills_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
AsfalHills_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 9 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 10 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 11 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 12 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 13 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 14 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 15 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 16 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 17 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 18 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 19 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 20 "data/maps/AsfalHills/scripts.pory"
	setobjectaswildencounter 23, ENCOUNTER_LAND
# 21 "data/maps/AsfalHills/scripts.pory"
	setobjectaswildencounter 24, ENCOUNTER_LAND
# 22 "data/maps/AsfalHills/scripts.pory"
	setobjectaswildencounter 25, ENCOUNTER_LAND
# 23 "data/maps/AsfalHills/scripts.pory"
	setobjectaswildencounter 26, ENCOUNTER_LAND
# 24 "data/maps/AsfalHills/scripts.pory"
	setobjectaswildencounter 27, ENCOUNTER_LAND
# 25 "data/maps/AsfalHills/scripts.pory"
	setobjectaswildencounter 32, ENCOUNTER_LAND
	return

AsfalHills_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/AsfalHills/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto AsfalHills_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


AsfalHills_EventScript_UniversityStudentRouteCheck::
# 31 "data/maps/AsfalHills/scripts.pory"
	lock
# 32 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 33 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_UniversityStudentRouteCheck_Text_0
# 35 "data/maps/AsfalHills/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_ASFAL_HILLS, AsfalHills_EventScript_UniversityStudentRouteCheck_2
# 42 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_UniversityStudentRouteCheck_Text_2
# 43 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 44 "data/maps/AsfalHills/scripts.pory"
	special CheckRouteCaptureProgress
# 45 "data/maps/AsfalHills/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AsfalHills_EventScript_UniversityStudentRouteCheck_5
AsfalHills_EventScript_UniversityStudentRouteCheck_1:
# 62 "data/maps/AsfalHills/scripts.pory"
	release
	end

AsfalHills_EventScript_UniversityStudentRouteCheck_2:
# 37 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_UniversityStudentRouteCheck_Text_1
# 38 "data/maps/AsfalHills/scripts.pory"
	closemessage
	goto AsfalHills_EventScript_UniversityStudentRouteCheck_1

AsfalHills_EventScript_UniversityStudentRouteCheck_5:
# 47 "data/maps/AsfalHills/scripts.pory"
	delay 20
# 48 "data/maps/AsfalHills/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 49 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_UniversityStudentRouteCheck_Text_0
# 50 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_UniversityStudentRouteCheck_Text_3
# 51 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 52 "data/maps/AsfalHills/scripts.pory"
	delay 5
# 55 "data/maps/AsfalHills/scripts.pory"
	giveitem ITEM_QUICK_BALL, 15
# 56 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 58 "data/maps/AsfalHills/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_ASFAL_HILLS
	goto AsfalHills_EventScript_UniversityStudentRouteCheck_1


AsfalHills_EventScript_DirectionSign::
# 68 "data/maps/AsfalHills/scripts.pory"
	lock
# 69 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_DirectionSign_Text_0
# 70 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 71 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_LibrarySign::
# 77 "data/maps/AsfalHills/scripts.pory"
	lock
# 78 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_LibrarySign_Text_0
# 79 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 80 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Nurse::
# 86 "data/maps/AsfalHills/scripts.pory"
	lock
# 87 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 88 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Nurse_Text_0
# 89 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Nurse_Text_1, MSGBOX_YESNO
# 90 "data/maps/AsfalHills/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AsfalHills_EventScript_Nurse_2
# 101 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Nurse_Text_0
# 102 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Nurse_Text_3
# 103 "data/maps/AsfalHills/scripts.pory"
	closemessage
AsfalHills_EventScript_Nurse_1:
# 105 "data/maps/AsfalHills/scripts.pory"
	release
	end

AsfalHills_EventScript_Nurse_2:
# 92 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 93 "data/maps/AsfalHills/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 94 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 95 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Nurse_Text_0
# 96 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Nurse_Text_2
# 97 "data/maps/AsfalHills/scripts.pory"
	closemessage
	goto AsfalHills_EventScript_Nurse_1


AsfalHills_EventScript_Trainer_AsfalHills_Salmai::
# 111 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_single TRAINER_ASFALHILLS_SALMAI, AsfalHills_Text_Trainer_AsfalHills_SalmaiIntro, AsfalHills_Text_Trainer_AsfalHills_SalmaiDefeat
# 112 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Salmai_Text_0
# 113 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Salmai_Text_1
# 114 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 115 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Trainer_AsfalHills_Ardrin::
# 129 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_single TRAINER_ASFALHILLS_ARDRIN, AsfalHills_Text_Trainer_AsfalHills_ArdrinIntro, AsfalHills_Text_Trainer_AsfalHills_ArdrinDefeat
# 130 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Ardrin_Text_0
# 131 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Ardrin_Text_1
# 132 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 133 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Trainer_AsfalHills_Vito::
# 147 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_single TRAINER_ASFALHILLS_VITO, AsfalHills_Text_Trainer_AsfalHills_VitoIntro, AsfalHills_Text_Trainer_AsfalHills_VitoDefeat
# 148 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Vito_Text_0
# 149 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Vito_Text_1
# 150 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 151 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Trainer_AsfalHills_Marisa::
# 166 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_double TRAINER_ASFALHILLS_LENA_AND_MARISA, AsfalHills_Text_Trainer_AsfalHills_MarisaIntro, AsfalHills_Text_Trainer_AsfalHills_MarisaDefeat, AsfalHills_Text_Trainer_AsfalHills_MarisaNotEnoughMons
# 167 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Marisa_Text_0
# 168 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Marisa_Text_1
# 169 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 170 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Trainer_AsfalHills_Lena::
# 188 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_double TRAINER_ASFALHILLS_LENA_AND_MARISA, AsfalHills_Text_Trainer_AsfalHills_LenaIntro, AsfalHills_Text_Trainer_AsfalHills_LenaDefeat, AsfalHills_Text_Trainer_AsfalHills_LenaNotEnoughMons
# 189 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Lena_Text_0
# 190 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Lena_Text_1
# 191 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 192 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Trainer_AsfalHills_Arisbe::
# 210 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_single TRAINER_ASFALHILLS_ARISBE, AsfalHills_Text_Trainer_AsfalHills_ArisbeIntro, AsfalHills_Text_Trainer_AsfalHills_ArisbeDefeat
# 211 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Arisbe_Text_0
# 212 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Arisbe_Text_1
# 213 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 214 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_PsychicM::
# 228 "data/maps/AsfalHills/scripts.pory"
	lock
# 229 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 230 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_PsychicM_Text_0
# 231 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_PsychicM_Text_1
# 232 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 233 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_OfficerBlockingPath::
# 239 "data/maps/AsfalHills/scripts.pory"
	lock
# 240 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 241 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_OfficerBlockingPath_Text_0
# 242 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_OfficerBlockingPath_Text_1
# 243 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 244 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_ManTryingToGetSouth::
# 250 "data/maps/AsfalHills/scripts.pory"
	lock
# 251 "data/maps/AsfalHills/scripts.pory"
	emote 15, EMOTE_EXCLAM
# 252 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 253 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_ManTryingToGetSouth_Text_0
# 254 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_ManTryingToGetSouth_Text_1
# 255 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 256 "data/maps/AsfalHills/scripts.pory"
	applymovement 15, Common_Movement_FacePlayer
# 257 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 258 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_ManTryingToGetSouth_Text_0
# 259 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_ManTryingToGetSouth_Text_2
# 260 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 261 "data/maps/AsfalHills/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 262 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 263 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_WomanTryingToGetSouth::
# 269 "data/maps/AsfalHills/scripts.pory"
	lock
# 270 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 271 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_WomanTryingToGetSouth_Text_0
# 272 "data/maps/AsfalHills/scripts.pory"
	goto_if_unset FLAG_HIDE_CORRIN_CROSSING_ROADBLOCK, AsfalHills_EventScript_WomanTryingToGetSouth_2
# 278 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_WomanTryingToGetSouth_Text_2
AsfalHills_EventScript_WomanTryingToGetSouth_1:
# 280 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 281 "data/maps/AsfalHills/scripts.pory"
	release
	end

AsfalHills_EventScript_WomanTryingToGetSouth_2:
# 274 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_WomanTryingToGetSouth_Text_1
	goto AsfalHills_EventScript_WomanTryingToGetSouth_1


AsfalHills_EventScript_Trainer_AsfalHills_Prothoe::
# 287 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_single TRAINER_ASFALHILLS_PROTHOE, AsfalHills_Text_Trainer_AsfalHills_ProthoeIntro, AsfalHills_Text_Trainer_AsfalHills_ProthoeDefeat
# 288 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Prothoe_Text_0
# 289 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Prothoe_Text_1
# 290 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 291 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Trainer_AsfalHills_Batto::
# 305 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_single TRAINER_ASFALHILLS_BATTO, AsfalHills_Text_Trainer_AsfalHills_BattoIntro, AsfalHills_Text_Trainer_AsfalHills_BattoDefeat
# 306 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Batto_Text_0
# 307 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Batto_Text_1
# 308 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 309 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_OldMan::
# 323 "data/maps/AsfalHills/scripts.pory"
	lock
# 324 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 325 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_OldMan_Text_0
# 326 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_OldMan_Text_1
# 327 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 328 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Hiker::
# 334 "data/maps/AsfalHills/scripts.pory"
	lock
# 335 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 336 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Hiker_Text_0
# 337 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Hiker_Text_1
# 338 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 339 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_NikoMeetPlayerEvent::
# 348 "data/maps/AsfalHills/scripts.pory"
	lockall
# 349 "data/maps/AsfalHills/scripts.pory"
	ballfollowingmon
# 350 "data/maps/AsfalHills/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 351 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 352 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 353 "data/maps/AsfalHills/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 354 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 355 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 356 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoMeetPlayerEvent_Text_1
# 357 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 358 "data/maps/AsfalHills/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AsfalHills_Movement_PlayerApproachNiko
# 359 "data/maps/AsfalHills/scripts.pory"
	applymovement 8, AsfalHills_Movement_DuskullApproachPlayer
# 360 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 361 "data/maps/AsfalHills/scripts.pory"
	applymovement 7, Common_Movement_FacePlayer
# 362 "data/maps/AsfalHills/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 363 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 364 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 365 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 366 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoMeetPlayerEvent_Text_2
# 367 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 368 "data/maps/AsfalHills/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 369 "data/maps/AsfalHills/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 370 "data/maps/AsfalHills/scripts.pory"
	applymovement 8, AsfalHills_Movement_DuskullReturnsToNiko
# 371 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 374 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 375 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 376 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoMeetPlayerEvent_Text_3
# 377 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 379 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_no_intro TRAINER_ASFALHILLS_NIKO, AsfalHills_Text_NikoLose
# 382 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 383 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 384 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoMeetPlayerEvent_Text_4
# 385 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 386 "data/maps/AsfalHills/scripts.pory"
	delay 30
# 387 "data/maps/AsfalHills/scripts.pory"
	emote 7, EMOTE_EXCLAM
# 388 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 389 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoMeetPlayerEvent_Text_5
# 390 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 391 "data/maps/AsfalHills/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 392 "data/maps/AsfalHills/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 393 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 394 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 395 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoMeetPlayerEvent_Text_6
# 396 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 397 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 398 "data/maps/AsfalHills/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 399 "data/maps/AsfalHills/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 400 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 401 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 402 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoMeetPlayerEvent_Text_7
# 403 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 404 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 405 "data/maps/AsfalHills/scripts.pory"
	applymovement 8, AsfalHills_Movement_DuskullReturnsToStatue
# 406 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 407 "data/maps/AsfalHills/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 408 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 410 "data/maps/AsfalHills/scripts.pory"
	delay 20
# 411 "data/maps/AsfalHills/scripts.pory"
	startquest QUEST_BEAT_CHIMERA_SOFOS_CITY
# 416 "data/maps/AsfalHills/scripts.pory"
	setflag FLAG_TRIGGERED_NIKO_EVENT_ASFAL_HILLS
# 417 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_BLOCKING_SOFOS_GYM
# 418 "data/maps/AsfalHills/scripts.pory"
	setflag FLAG_HIDE_NIKO_ACRISIA_UNIVERSITY
	return


# 421 "data/maps/AsfalHills/scripts.pory"
AsfalHills_Movement_PlayerApproachNiko:
# 423 "data/maps/AsfalHills/scripts.pory"
	walk_right
# 423 "data/maps/AsfalHills/scripts.pory"
	walk_right
# 423 "data/maps/AsfalHills/scripts.pory"
	walk_right
# 424 "data/maps/AsfalHills/scripts.pory"
	walk_up
# 424 "data/maps/AsfalHills/scripts.pory"
	walk_up
# 425 "data/maps/AsfalHills/scripts.pory"
	step_end

# 427 "data/maps/AsfalHills/scripts.pory"
AsfalHills_Movement_DuskullApproachPlayer:
# 429 "data/maps/AsfalHills/scripts.pory"
	walk_right
# 429 "data/maps/AsfalHills/scripts.pory"
	walk_right
# 430 "data/maps/AsfalHills/scripts.pory"
	walk_down
# 431 "data/maps/AsfalHills/scripts.pory"
	delay_16
# 432 "data/maps/AsfalHills/scripts.pory"
	emote_heart
# 433 "data/maps/AsfalHills/scripts.pory"
	step_end

# 435 "data/maps/AsfalHills/scripts.pory"
AsfalHills_Movement_DuskullReturnsToNiko:
# 437 "data/maps/AsfalHills/scripts.pory"
	walk_left
# 437 "data/maps/AsfalHills/scripts.pory"
	walk_left
# 438 "data/maps/AsfalHills/scripts.pory"
	walk_down
# 439 "data/maps/AsfalHills/scripts.pory"
	face_up
# 440 "data/maps/AsfalHills/scripts.pory"
	step_end

# 442 "data/maps/AsfalHills/scripts.pory"
AsfalHills_Movement_DuskullReturnsToStatue:
# 444 "data/maps/AsfalHills/scripts.pory"
	walk_up
# 444 "data/maps/AsfalHills/scripts.pory"
	walk_up
# 445 "data/maps/AsfalHills/scripts.pory"
	face_left
# 446 "data/maps/AsfalHills/scripts.pory"
	step_end

AsfalHills_EventScript_Duskull::
# 450 "data/maps/AsfalHills/scripts.pory"
	lock
# 451 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 452 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Duskull_Text_0
# 453 "data/maps/AsfalHills/scripts.pory"
	playmoncry SPECIES_DUSKULL, CRY_MODE_NORMAL
# 454 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Duskull_Text_1
# 455 "data/maps/AsfalHills/scripts.pory"
	waitmoncry
# 456 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 457 "data/maps/AsfalHills/scripts.pory"
	delay 5
# 458 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Duskull_Text_2
# 459 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 460 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_NikoWaitingForPlayer::
# 466 "data/maps/AsfalHills/scripts.pory"
	lock
# 467 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 468 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 469 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoWaitingForPlayer_Text_0
# 470 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 472 "data/maps/AsfalHills/scripts.pory"
	delay 20
# 473 "data/maps/AsfalHills/scripts.pory"
	checkitem ITEM_KEY_STONE
# 474 "data/maps/AsfalHills/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AsfalHills_EventScript_NikoWaitingForPlayer_2
# 484 "data/maps/AsfalHills/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 485 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 486 "data/maps/AsfalHills/scripts.pory"
	delay 5
# 487 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 488 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoWaitingForPlayer_Text_2
# 489 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 490 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 491 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 492 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoWaitingForPlayer_Text_3
# 493 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 494 "data/maps/AsfalHills/scripts.pory"
	giveitem ITEM_HM_SURF
# 495 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 496 "data/maps/AsfalHills/scripts.pory"
	delay 5
# 497 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 498 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoWaitingForPlayer_Text_4
# 499 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 500 "data/maps/AsfalHills/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 501 "data/maps/AsfalHills/scripts.pory"
	delay 20
# 502 "data/maps/AsfalHills/scripts.pory"
	setflag FLAG_HIDE_NIKO_ASFAL_HILLS
# 503 "data/maps/AsfalHills/scripts.pory"
	removeobject 7
# 504 "data/maps/AsfalHills/scripts.pory"
	removeobject 8
# 505 "data/maps/AsfalHills/scripts.pory"
	setflag FLAG_HIDE_BLOCKING_SOFOS_GYM
# 506 "data/maps/AsfalHills/scripts.pory"
	setflag FLAG_UNLOCKED_MEGA_EVOLUTION
# 507 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_NIKO_ACRISIA_UNIVERSITY
# 508 "data/maps/AsfalHills/scripts.pory"
	setvar VAR_NIKO_STATE, 8
# 509 "data/maps/AsfalHills/scripts.pory"
	delay 20
# 510 "data/maps/AsfalHills/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 511 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 513 "data/maps/AsfalHills/scripts.pory"
	delay 20
# 514 "data/maps/AsfalHills/scripts.pory"
	completequest QUEST_BEAT_CHIMERA_SOFOS_CITY
# 516 "data/maps/AsfalHills/scripts.pory"
	releaseall
	end

AsfalHills_EventScript_NikoWaitingForPlayer_2:
# 476 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 477 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoWaitingForPlayer_Text_1
# 478 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 479 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_UniversityStudentRouteCheck_Text_0:
# 33 "data/maps/AsfalHills/scripts.pory"
	.string "Uni. Student$"

AsfalHills_EventScript_UniversityStudentRouteCheck_Text_1:
# 37 "data/maps/AsfalHills/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

AsfalHills_EventScript_UniversityStudentRouteCheck_Text_2:
# 42 "data/maps/AsfalHills/scripts.pory"
	.string "Chaire! I'm a student from the Acrisia\n"
	.string "University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in Asfal Hills. If you've\l"
	.string "caught all the Pokémon here, please let\l"
	.string "me know.$"

AsfalHills_EventScript_UniversityStudentRouteCheck_Text_3:
# 50 "data/maps/AsfalHills/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

AsfalHills_EventScript_DirectionSign_Text_0:
# 69 "data/maps/AsfalHills/scripts.pory"
	.string "Asfal Hills\n"
	.string "The Gentle Coastal Road\p"
	.string "{LEFT_ARROW} Froslass Cavern\n"
	.string "Sofos City {RIGHT_ARROW}$"

AsfalHills_EventScript_LibrarySign_Text_0:
# 78 "data/maps/AsfalHills/scripts.pory"
	.string "Sofos Outskirts Public Library\n"
	.string "Open to all, 24 Hours a day!$"

AsfalHills_EventScript_Nurse_Text_0:
# 88 "data/maps/AsfalHills/scripts.pory"
	.string "Nurse$"

AsfalHills_EventScript_Nurse_Text_1:
# 89 "data/maps/AsfalHills/scripts.pory"
	.string "Welcome to my Roadside Pokémon Healing\n"
	.string "Service! I'm here to help Trainers\l"
	.string "coming from Pythios Town make it to\l"
	.string "Sofos City.\p"
	.string "Would you like to heal your Pokémon?$"

AsfalHills_EventScript_Nurse_Text_2:
# 96 "data/maps/AsfalHills/scripts.pory"
	.string "Good luck on your adventures!$"

AsfalHills_EventScript_Nurse_Text_3:
# 102 "data/maps/AsfalHills/scripts.pory"
	.string "Feel free to come back any time!$"

AsfalHills_EventScript_Trainer_AsfalHills_Salmai_Text_0:
# 112 "data/maps/AsfalHills/scripts.pory"
	.string "Salmai$"

AsfalHills_EventScript_Trainer_AsfalHills_Salmai_Text_1:
# 113 "data/maps/AsfalHills/scripts.pory"
	.string "Pokémon Eggs take many steps to hatch.\n"
	.string "Moving back and forth like this is a way\l"
	.string "to quickly hatch them!$"

AsfalHills_EventScript_Trainer_AsfalHills_Ardrin_Text_0:
# 130 "data/maps/AsfalHills/scripts.pory"
	.string "Ardrin$"

AsfalHills_EventScript_Trainer_AsfalHills_Ardrin_Text_1:
# 131 "data/maps/AsfalHills/scripts.pory"
	.string "These hills are nice, but they're\n"
	.string "covered in stony ruins. That makes it\l"
	.string "hard for crops to grow.$"

AsfalHills_EventScript_Trainer_AsfalHills_Vito_Text_0:
# 148 "data/maps/AsfalHills/scripts.pory"
	.string "Vito$"

AsfalHills_EventScript_Trainer_AsfalHills_Vito_Text_1:
# 149 "data/maps/AsfalHills/scripts.pory"
	.string "Maybe I'll take a boat from Sofos City\n"
	.string "back to Pythios Town. My parents say\l"
	.string "it's a lot faster!$"

AsfalHills_EventScript_Trainer_AsfalHills_Marisa_Text_0:
# 167 "data/maps/AsfalHills/scripts.pory"
	.string "Maria$"

AsfalHills_EventScript_Trainer_AsfalHills_Marisa_Text_1:
# 168 "data/maps/AsfalHills/scripts.pory"
	.string "You only won because I was looking at\n"
	.string "the statues!$"

AsfalHills_EventScript_Trainer_AsfalHills_Lena_Text_0:
# 189 "data/maps/AsfalHills/scripts.pory"
	.string "Lena$"

AsfalHills_EventScript_Trainer_AsfalHills_Lena_Text_1:
# 190 "data/maps/AsfalHills/scripts.pory"
	.string "I guess Marisa and I need to train some\n"
	.string "more.$"

AsfalHills_EventScript_Trainer_AsfalHills_Arisbe_Text_0:
# 211 "data/maps/AsfalHills/scripts.pory"
	.string "Arisbe$"

AsfalHills_EventScript_Trainer_AsfalHills_Arisbe_Text_1:
# 212 "data/maps/AsfalHills/scripts.pory"
	.string "Most outside areas have different\n"
	.string "Pokémon come out at night. It can feel\l"
	.string "like a whole new area!$"

AsfalHills_EventScript_PsychicM_Text_0:
# 230 "data/maps/AsfalHills/scripts.pory"
	.string "Psychic$"

AsfalHills_EventScript_PsychicM_Text_1:
# 231 "data/maps/AsfalHills/scripts.pory"
	.string "Sofos City is the biggest city in Ilios\n"
	.string "by far. If you go south by Corrin\l"
	.string "Crossing, you get to the sister city of\l"
	.string "Sofos, Port Pello.$"

AsfalHills_EventScript_OfficerBlockingPath_Text_0:
# 241 "data/maps/AsfalHills/scripts.pory"
	.string "Officer$"

AsfalHills_EventScript_OfficerBlockingPath_Text_1:
# 242 "data/maps/AsfalHills/scripts.pory"
	.string "Corrin Crossing is currently blocked\n"
	.string "off. {COLOR GREEN}Areios Town{COLOR DARK_GRAY} was captured by Team\l"
	.string "Chimera, so we have {COLOR GREEN}Port Pello{COLOR DARK_GRAY} on\l"
	.string "lockdown to prevent harm from coming\l"
	.string "to it. Please come back later.$"

AsfalHills_EventScript_ManTryingToGetSouth_Text_0:
# 253 "data/maps/AsfalHills/scripts.pory"
	.string "Angry Man$"

AsfalHills_EventScript_ManTryingToGetSouth_Text_1:
# 254 "data/maps/AsfalHills/scripts.pory"
	.string "This is ridiculous! I have business in\n"
	.string "Port Pello!$"

AsfalHills_EventScript_ManTryingToGetSouth_Text_2:
# 259 "data/maps/AsfalHills/scripts.pory"
	.string "Can you believe this?! Blocking the\n"
	.string "path to a major city like it's nothing. I\l"
	.string "know Team Chimera is dangerous, but\l"
	.string "life must go on... Right?$"

AsfalHills_EventScript_WomanTryingToGetSouth_Text_0:
# 271 "data/maps/AsfalHills/scripts.pory"
	.string "Beauty$"

AsfalHills_EventScript_WomanTryingToGetSouth_Text_1:
# 274 "data/maps/AsfalHills/scripts.pory"
	.string "Areios Town, the hamlet south of Port\n"
	.string "Pello, was taken over by Team Chimera a\l"
	.string "few months ago. Now, we're even being\l"
	.string "blocked from Port Pello. Someone needs\l"
	.string "to stop Team Chimera before the whole\l"
	.string "region falls apart!$"

AsfalHills_EventScript_WomanTryingToGetSouth_Text_2:
# 278 "data/maps/AsfalHills/scripts.pory"
	.string "Access to Port Pello has been opened up\n"
	.string "again! I hear a brave Trainer has been\l"
	.string "causing problems for Team Chimera,\l"
	.string "making it safer for everyone to travel\l"
	.string "again.$"

AsfalHills_EventScript_Trainer_AsfalHills_Prothoe_Text_0:
# 288 "data/maps/AsfalHills/scripts.pory"
	.string "Prothoe$"

AsfalHills_EventScript_Trainer_AsfalHills_Prothoe_Text_1:
# 289 "data/maps/AsfalHills/scripts.pory"
	.string "Sofos City is huge! It's certainly\n"
	.string "pretty, but there's a certain beauty to\l"
	.string "the wilderness out here, too.$"

AsfalHills_EventScript_Trainer_AsfalHills_Batto_Text_0:
# 306 "data/maps/AsfalHills/scripts.pory"
	.string "Batto$"

AsfalHills_EventScript_Trainer_AsfalHills_Batto_Text_1:
# 307 "data/maps/AsfalHills/scripts.pory"
	.string "My favorite part about the city is the\n"
	.string "Arcade! You can play Pinball to win all\l"
	.string "these cool prizes, it's the best!$"

AsfalHills_EventScript_OldMan_Text_0:
# 325 "data/maps/AsfalHills/scripts.pory"
	.string "Old Man$"

AsfalHills_EventScript_OldMan_Text_1:
# 326 "data/maps/AsfalHills/scripts.pory"
	.string "Back in my day, Sofos City was half the\n"
	.string "size it is now. I moved out here because\l"
	.string "the inner city got too busy for an old\l"
	.string "man like me.$"

AsfalHills_EventScript_Hiker_Text_0:
# 336 "data/maps/AsfalHills/scripts.pory"
	.string "Hiker$"

AsfalHills_EventScript_Hiker_Text_1:
# 337 "data/maps/AsfalHills/scripts.pory"
	.string "I hiked all the way down from the\n"
	.string "mountains in the north. I'm exhausted,\l"
	.string "but it was totally worth it!$"

AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0:
# 355 "data/maps/AsfalHills/scripts.pory"
	.string "Niko$"

AsfalHills_EventScript_NikoMeetPlayerEvent_Text_1:
# 356 "data/maps/AsfalHills/scripts.pory"
	.string "{PLAYER}? Opa! I thought it was you!\n"
	.string "Here, come look at these statues.$"

AsfalHills_EventScript_NikoMeetPlayerEvent_Text_2:
# 366 "data/maps/AsfalHills/scripts.pory"
	.string "Ehehe, looks like Duskull remembers you\n"
	.string "too!$"

AsfalHills_EventScript_NikoMeetPlayerEvent_Text_3:
# 376 "data/maps/AsfalHills/scripts.pory"
	.string "In fact, Duskull seems like it wants to\n"
	.string "battle you... I'm not much of a battler,\l"
	.string "but I'll give it my all!$"

AsfalHills_EventScript_NikoMeetPlayerEvent_Text_4:
# 384 "data/maps/AsfalHills/scripts.pory"
	.string "Phew, you might even be a better\n"
	.string "Trainer than Rania...$"

AsfalHills_EventScript_NikoMeetPlayerEvent_Text_5:
# 389 "data/maps/AsfalHills/scripts.pory"
	.string "D-don't tell her I said that!\p"
	.string "Ahem, right, I called you over for a\n"
	.string "reason. Here, look at these statues.$"

AsfalHills_EventScript_NikoMeetPlayerEvent_Text_6:
# 395 "data/maps/AsfalHills/scripts.pory"
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

AsfalHills_EventScript_NikoMeetPlayerEvent_Text_7:
# 402 "data/maps/AsfalHills/scripts.pory"
	.string "Ahem, sorry for the info dump. The point\n"
	.string "is, there are more important things in\l"
	.string "the world than money and power.\p"
	.string "You've had encounters with {COLOR GREEN}Team\n"
	.string "Chimera{COLOR DARK_GRAY}, as I'm sure you remember. I\l"
	.string "believe they share a goal with this\l"
	.string "ancient king. I heard rumors that\l"
	.string "they've set up camp {COLOR GREEN}somewhere around\l"
	.string "Sofos City{COLOR DARK_GRAY} to find a hidden treasure: a\l"
	.string "{COLOR GREEN}Key Stone{COLOR DARK_GRAY}. My bet is, they want to\l"
	.string "control Mega Evolution and squeeze\l"
	.string "even more money out of the Ilios\l"
	.string "Region.\p"
	.string "Head into Sofos City, {COLOR GREEN}root out Team\n"
	.string "Chimera{COLOR DARK_GRAY}, and {COLOR GREEN}bring me back that Key\l"
	.string "Stone{COLOR DARK_GRAY}. We can't let them keep their\l"
	.string "hands on it!$"

AsfalHills_EventScript_Duskull_Text_0:
# 452 "data/maps/AsfalHills/scripts.pory"
	.string "Duskull$"

AsfalHills_EventScript_Duskull_Text_1:
# 454 "data/maps/AsfalHills/scripts.pory"
	.string "Kaaahhh...$"

AsfalHills_EventScript_Duskull_Text_2:
# 458 "data/maps/AsfalHills/scripts.pory"
	.string "Duskull is studying the statue closely.$"

AsfalHills_EventScript_NikoWaitingForPlayer_Text_0:
# 469 "data/maps/AsfalHills/scripts.pory"
	.string "Chaire, {PLAYER}. I'm sorry for\n"
	.string "sending you on such a dangerous quest,\l"
	.string "but I'm afraid I'm not much of a Pokémon\l"
	.string "battler.\p"
	.string "Did you find {COLOR GREEN}Team Chimera's Hideout{COLOR DARK_GRAY}\n"
	.string "around Sofos City?$"

AsfalHills_EventScript_NikoWaitingForPlayer_Text_1:
# 477 "data/maps/AsfalHills/scripts.pory"
	.string "Hmm, I don't see the {COLOR GREEN}Key Stone{COLOR DARK_GRAY} with you.\n"
	.string "Please, we can't let Team Chimera keep\l"
	.string "that, it's a precious artifact that may\l"
	.string "hold more power than we know.\p"
	.string "Please, find {COLOR GREEN}Team Chimera's Hideout{COLOR DARK_GRAY}\n"
	.string "around Sofos City and {COLOR GREEN}bring back the\l"
	.string "Key Stone{COLOR DARK_GRAY}!$"

AsfalHills_EventScript_NikoWaitingForPlayer_Text_2:
# 488 "data/maps/AsfalHills/scripts.pory"
	.string "Woah, you got it! The aura radiating\n"
	.string "around it... it can only mean one thing,\l"
	.string "my hunch was correct.\p"
	.string "The Key Stone allows skilled Trainers to\n"
	.string "unlock the powers of {COLOR GREEN}Mega Evolution{COLOR DARK_GRAY},\l"
	.string "temporarily changing a Pokémon into an\l"
	.string "incredibly powerful form. There are only\l"
	.string "a few of these in the Ilios Region. Most\l"
	.string "Key Stones have already been claimed\l"
	.string "by Gym Leaders and a few powerful\l"
	.string "Trainer families... I suppose it makes\l"
	.string "sense that one was hidden in the\l"
	.string "Satyr's Lair from ancient times, though.\p"
	.string "{PLAYER}, I want you to keep the Key\n"
	.string "Stone. Team Chimera is clearly trying to\l"
	.string "grow in power, so the safest place for\l"
	.string "it would be with a skilled Trainer like\l"
	.string "you.$"

AsfalHills_EventScript_NikoWaitingForPlayer_Text_3:
# 492 "data/maps/AsfalHills/scripts.pory"
	.string "What a wreck! I'm glad you were here to\n"
	.string "help, {PLAYER}. This has been way too\l"
	.string "much excitement for me, so I'll be\l"
	.string "bringing Duskull back to the University.\p"
	.string "Oh! Speaking of which, I have something\n"
	.string "for you we've been working on in the lab.\l"
	.string "Take this!$"

AsfalHills_EventScript_NikoWaitingForPlayer_Text_4:
# 498 "data/maps/AsfalHills/scripts.pory"
	.string "The HM Surf will allow you to cross the\n"
	.string "waters of Ilios. Of course, you need the\l"
	.string "Gym Badge from Sofos City to use it!\p"
	.string "Alright, Duskull and I are getting out\n"
	.string "of here before any Team Chimera\l"
	.string "members pay us a visit. Come to Acrisia\l"
	.string "University soon, as I'll be collecting\l"
	.string "{COLOR GREEN}Mega Stones{COLOR DARK_GRAY} for you!$"

AsfalHills_Text_Trainer_AsfalHills_SalmaiIntro::
# 118 "data/maps/AsfalHills/scripts.pory"
	.string "There's a good, long horizontal stretch\n"
	.string "on this route. Perfect for biking back\l"
	.string "and forth!$"

AsfalHills_Text_Trainer_AsfalHills_SalmaiDefeat::
# 122 "data/maps/AsfalHills/scripts.pory"
	.string "Huff, huff... I have to keep training!$"

AsfalHills_Text_Trainer_AsfalHills_ArdrinIntro::
# 136 "data/maps/AsfalHills/scripts.pory"
	.string "Ahh, it's no good. There are too many\n"
	.string "stones in the ground here for farming!$"

AsfalHills_Text_Trainer_AsfalHills_ArdrinDefeat::
# 140 "data/maps/AsfalHills/scripts.pory"
	.string "I should head back towards Jusmail\n"
	.string "Town.$"

AsfalHills_Text_Trainer_AsfalHills_VitoIntro::
# 154 "data/maps/AsfalHills/scripts.pory"
	.string "I came all the way from Pythios Town!$"

AsfalHills_Text_Trainer_AsfalHills_VitoDefeat::
# 158 "data/maps/AsfalHills/scripts.pory"
	.string "I'm not sure how I'll get back...$"

AsfalHills_Text_Trainer_AsfalHills_MarisaIntro::
# 173 "data/maps/AsfalHills/scripts.pory"
	.string "There are two statues over there.\n"
	.string "Maybe they're twins like us!$"

AsfalHills_Text_Trainer_AsfalHills_MarisaDefeat::
# 177 "data/maps/AsfalHills/scripts.pory"
	.string "So much for twin power...$"

AsfalHills_Text_Trainer_AsfalHills_MarisaNotEnoughMons::
# 181 "data/maps/AsfalHills/scripts.pory"
	.string "We can't battle anyone without at least\n"
	.string "2 Pokémon!$"

AsfalHills_Text_Trainer_AsfalHills_LenaIntro::
# 195 "data/maps/AsfalHills/scripts.pory"
	.string "Two is better than one!$"

AsfalHills_Text_Trainer_AsfalHills_LenaDefeat::
# 199 "data/maps/AsfalHills/scripts.pory"
	.string "I thought two was better than one!$"

AsfalHills_Text_Trainer_AsfalHills_LenaNotEnoughMons::
# 203 "data/maps/AsfalHills/scripts.pory"
	.string "We can't battle anyone without at least\n"
	.string "2 Pokémon!$"

AsfalHills_Text_Trainer_AsfalHills_ArisbeIntro::
# 217 "data/maps/AsfalHills/scripts.pory"
	.string "Look at the Pokémon I found around\n"
	.string "here!$"

AsfalHills_Text_Trainer_AsfalHills_ArisbeDefeat::
# 221 "data/maps/AsfalHills/scripts.pory"
	.string "How could you fight my cuties?!$"

AsfalHills_Text_Trainer_AsfalHills_ProthoeIntro::
# 294 "data/maps/AsfalHills/scripts.pory"
	.string "We're not far from the suburbs around\n"
	.string "Sofos City. Battle me before you go!$"

AsfalHills_Text_Trainer_AsfalHills_ProthoeDefeat::
# 298 "data/maps/AsfalHills/scripts.pory"
	.string "My Pokémon need a rest now!$"

AsfalHills_Text_Trainer_AsfalHills_BattoIntro::
# 312 "data/maps/AsfalHills/scripts.pory"
	.string "Finally, I can see the walls of the city\n"
	.string "from here!$"

AsfalHills_Text_Trainer_AsfalHills_BattoDefeat::
# 316 "data/maps/AsfalHills/scripts.pory"
	.string "I guess my first stop is a Pokémon\n"
	.string "Center!$"

AsfalHills_Text_NikoLose::
# 520 "data/maps/AsfalHills/scripts.pory"
	.string "Urk... Like I said, I've never been much\n"
	.string "of a battler.$"

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


AsfalHills_EventScript_UniversityStudentRouteCheck::
# 26 "data/maps/AsfalHills/scripts.pory"
	lock
# 27 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 28 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_UniversityStudentRouteCheck_Text_0
# 30 "data/maps/AsfalHills/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_ASFAL_HILLS, AsfalHills_EventScript_UniversityStudentRouteCheck_2
# 37 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_UniversityStudentRouteCheck_Text_2
# 38 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 39 "data/maps/AsfalHills/scripts.pory"
	special CheckRouteCaptureProgress
# 40 "data/maps/AsfalHills/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AsfalHills_EventScript_UniversityStudentRouteCheck_5
AsfalHills_EventScript_UniversityStudentRouteCheck_1:
# 57 "data/maps/AsfalHills/scripts.pory"
	release
	end

AsfalHills_EventScript_UniversityStudentRouteCheck_2:
# 32 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_UniversityStudentRouteCheck_Text_1
# 33 "data/maps/AsfalHills/scripts.pory"
	closemessage
	goto AsfalHills_EventScript_UniversityStudentRouteCheck_1

AsfalHills_EventScript_UniversityStudentRouteCheck_5:
# 42 "data/maps/AsfalHills/scripts.pory"
	delay 20
# 43 "data/maps/AsfalHills/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 44 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_UniversityStudentRouteCheck_Text_0
# 45 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_UniversityStudentRouteCheck_Text_3
# 46 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 47 "data/maps/AsfalHills/scripts.pory"
	delay 5
# 50 "data/maps/AsfalHills/scripts.pory"
	giveitem ITEM_QUICK_BALL, 15
# 51 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 53 "data/maps/AsfalHills/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_ASFAL_HILLS
	goto AsfalHills_EventScript_UniversityStudentRouteCheck_1


AsfalHills_EventScript_DirectionSign::
# 63 "data/maps/AsfalHills/scripts.pory"
	lock
# 64 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_DirectionSign_Text_0
# 65 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 66 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_LibrarySign::
# 72 "data/maps/AsfalHills/scripts.pory"
	lock
# 73 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_LibrarySign_Text_0
# 74 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 75 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Nurse::
# 81 "data/maps/AsfalHills/scripts.pory"
	lock
# 82 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 83 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Nurse_Text_0
# 84 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Nurse_Text_1, MSGBOX_YESNO
# 85 "data/maps/AsfalHills/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AsfalHills_EventScript_Nurse_2
# 96 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Nurse_Text_0
# 97 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Nurse_Text_3
# 98 "data/maps/AsfalHills/scripts.pory"
	closemessage
AsfalHills_EventScript_Nurse_1:
# 100 "data/maps/AsfalHills/scripts.pory"
	release
	end

AsfalHills_EventScript_Nurse_2:
# 87 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 88 "data/maps/AsfalHills/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 89 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 90 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Nurse_Text_0
# 91 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Nurse_Text_2
# 92 "data/maps/AsfalHills/scripts.pory"
	closemessage
	goto AsfalHills_EventScript_Nurse_1


AsfalHills_EventScript_Trainer_AsfalHills_Salmai::
# 106 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_single TRAINER_ASFALHILLS_SALMAI, AsfalHills_Text_Trainer_AsfalHills_SalmaiIntro, AsfalHills_Text_Trainer_AsfalHills_SalmaiDefeat
# 107 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Salmai_Text_0
# 108 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Salmai_Text_1
# 109 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 110 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Trainer_AsfalHills_Ardrin::
# 124 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_single TRAINER_ASFALHILLS_ARDRIN, AsfalHills_Text_Trainer_AsfalHills_ArdrinIntro, AsfalHills_Text_Trainer_AsfalHills_ArdrinDefeat
# 125 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Ardrin_Text_0
# 126 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Ardrin_Text_1
# 127 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 128 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Trainer_AsfalHills_Vito::
# 142 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_single TRAINER_ASFALHILLS_VITO, AsfalHills_Text_Trainer_AsfalHills_VitoIntro, AsfalHills_Text_Trainer_AsfalHills_VitoDefeat
# 143 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Vito_Text_0
# 144 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Vito_Text_1
# 145 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 146 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Trainer_AsfalHills_Marisa::
# 161 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_double TRAINER_ASFALHILLS_LENA_AND_MARISA, AsfalHills_Text_Trainer_AsfalHills_MarisaIntro, AsfalHills_Text_Trainer_AsfalHills_MarisaDefeat, AsfalHills_Text_Trainer_AsfalHills_MarisaNotEnoughMons
# 162 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Marisa_Text_0
# 163 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Marisa_Text_1
# 164 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 165 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Trainer_AsfalHills_Lena::
# 183 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_double TRAINER_ASFALHILLS_LENA_AND_MARISA, AsfalHills_Text_Trainer_AsfalHills_LenaIntro, AsfalHills_Text_Trainer_AsfalHills_LenaDefeat, AsfalHills_Text_Trainer_AsfalHills_LenaNotEnoughMons
# 184 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Lena_Text_0
# 185 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Lena_Text_1
# 186 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 187 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Trainer_AsfalHills_Arisbe::
# 205 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_single TRAINER_ASFALHILLS_ARISBE, AsfalHills_Text_Trainer_AsfalHills_ArisbeIntro, AsfalHills_Text_Trainer_AsfalHills_ArisbeDefeat
# 206 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Arisbe_Text_0
# 207 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Arisbe_Text_1
# 208 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 209 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_PsychicM::
# 223 "data/maps/AsfalHills/scripts.pory"
	lock
# 224 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 225 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_PsychicM_Text_0
# 226 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_PsychicM_Text_1
# 227 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 228 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_OfficerBlockingPath::
# 234 "data/maps/AsfalHills/scripts.pory"
	lock
# 235 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 236 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_OfficerBlockingPath_Text_0
# 237 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_OfficerBlockingPath_Text_1
# 238 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 239 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_ManTryingToGetSouth::
# 245 "data/maps/AsfalHills/scripts.pory"
	lock
# 246 "data/maps/AsfalHills/scripts.pory"
	emote 15, EMOTE_EXCLAM
# 247 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 248 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_ManTryingToGetSouth_Text_0
# 249 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_ManTryingToGetSouth_Text_1
# 250 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 251 "data/maps/AsfalHills/scripts.pory"
	applymovement 15, Common_Movement_FacePlayer
# 252 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 253 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_ManTryingToGetSouth_Text_0
# 254 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_ManTryingToGetSouth_Text_2
# 255 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 256 "data/maps/AsfalHills/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 257 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 258 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_WomanTryingToGetSouth::
# 264 "data/maps/AsfalHills/scripts.pory"
	lock
# 265 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 266 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_WomanTryingToGetSouth_Text_0
# 267 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_WomanTryingToGetSouth_Text_1
# 268 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 269 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Trainer_AsfalHills_Prothoe::
# 275 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_single TRAINER_ASFALHILLS_PROTHOE, AsfalHills_Text_Trainer_AsfalHills_ProthoeIntro, AsfalHills_Text_Trainer_AsfalHills_ProthoeDefeat
# 276 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Prothoe_Text_0
# 277 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Prothoe_Text_1
# 278 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 279 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Trainer_AsfalHills_Batto::
# 293 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_single TRAINER_ASFALHILLS_BATTO, AsfalHills_Text_Trainer_AsfalHills_BattoIntro, AsfalHills_Text_Trainer_AsfalHills_BattoDefeat
# 294 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Batto_Text_0
# 295 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Batto_Text_1
# 296 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 297 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_OldMan::
# 311 "data/maps/AsfalHills/scripts.pory"
	lock
# 312 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 313 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_OldMan_Text_0
# 314 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_OldMan_Text_1
# 315 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 316 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Hiker::
# 322 "data/maps/AsfalHills/scripts.pory"
	lock
# 323 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 324 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Hiker_Text_0
# 325 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Hiker_Text_1
# 326 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 327 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_NikoMeetPlayerEvent::
# 336 "data/maps/AsfalHills/scripts.pory"
	lockall
# 337 "data/maps/AsfalHills/scripts.pory"
	ballfollowingmon
# 338 "data/maps/AsfalHills/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 339 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 340 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 341 "data/maps/AsfalHills/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 342 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 343 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 344 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoMeetPlayerEvent_Text_1
# 345 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 346 "data/maps/AsfalHills/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AsfalHills_Movement_PlayerApproachNiko
# 347 "data/maps/AsfalHills/scripts.pory"
	applymovement 8, AsfalHills_Movement_DuskullApproachPlayer
# 348 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 349 "data/maps/AsfalHills/scripts.pory"
	applymovement 7, Common_Movement_FacePlayer
# 350 "data/maps/AsfalHills/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 351 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 352 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 353 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 354 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoMeetPlayerEvent_Text_2
# 355 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 356 "data/maps/AsfalHills/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 357 "data/maps/AsfalHills/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 358 "data/maps/AsfalHills/scripts.pory"
	applymovement 8, AsfalHills_Movement_DuskullReturnsToNiko
# 359 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 362 "data/maps/AsfalHills/scripts.pory"
	delay 5
# 363 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 364 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoMeetPlayerEvent_Text_3
# 365 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 366 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 367 "data/maps/AsfalHills/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 368 "data/maps/AsfalHills/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 369 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 370 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 371 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoMeetPlayerEvent_Text_4
# 372 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 373 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 374 "data/maps/AsfalHills/scripts.pory"
	applymovement 8, AsfalHills_Movement_DuskullReturnsToStatue
# 375 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 376 "data/maps/AsfalHills/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 377 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 379 "data/maps/AsfalHills/scripts.pory"
	delay 20
# 380 "data/maps/AsfalHills/scripts.pory"
	startquest QUEST_BEAT_CHIMERA_SOFOS_CITY
# 385 "data/maps/AsfalHills/scripts.pory"
	setflag FLAG_TRIGGERED_NIKO_EVENT_ASFAL_HILLS
# 386 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_BLOCKING_SOFOS_GYM
# 387 "data/maps/AsfalHills/scripts.pory"
	setflag FLAG_HIDE_NIKO_ACRISIA_UNIVERSITY
	return


# 390 "data/maps/AsfalHills/scripts.pory"
AsfalHills_Movement_PlayerApproachNiko:
# 392 "data/maps/AsfalHills/scripts.pory"
	walk_right
# 392 "data/maps/AsfalHills/scripts.pory"
	walk_right
# 392 "data/maps/AsfalHills/scripts.pory"
	walk_right
# 393 "data/maps/AsfalHills/scripts.pory"
	walk_up
# 393 "data/maps/AsfalHills/scripts.pory"
	walk_up
# 394 "data/maps/AsfalHills/scripts.pory"
	step_end

# 396 "data/maps/AsfalHills/scripts.pory"
AsfalHills_Movement_DuskullApproachPlayer:
# 398 "data/maps/AsfalHills/scripts.pory"
	walk_right
# 398 "data/maps/AsfalHills/scripts.pory"
	walk_right
# 399 "data/maps/AsfalHills/scripts.pory"
	walk_down
# 400 "data/maps/AsfalHills/scripts.pory"
	delay_16
# 401 "data/maps/AsfalHills/scripts.pory"
	emote_heart
# 402 "data/maps/AsfalHills/scripts.pory"
	step_end

# 404 "data/maps/AsfalHills/scripts.pory"
AsfalHills_Movement_DuskullReturnsToNiko:
# 406 "data/maps/AsfalHills/scripts.pory"
	walk_left
# 406 "data/maps/AsfalHills/scripts.pory"
	walk_left
# 407 "data/maps/AsfalHills/scripts.pory"
	walk_down
# 408 "data/maps/AsfalHills/scripts.pory"
	face_up
# 409 "data/maps/AsfalHills/scripts.pory"
	step_end

# 411 "data/maps/AsfalHills/scripts.pory"
AsfalHills_Movement_DuskullReturnsToStatue:
# 413 "data/maps/AsfalHills/scripts.pory"
	walk_up
# 413 "data/maps/AsfalHills/scripts.pory"
	walk_up
# 414 "data/maps/AsfalHills/scripts.pory"
	face_left
# 415 "data/maps/AsfalHills/scripts.pory"
	step_end

AsfalHills_EventScript_Duskull::
# 419 "data/maps/AsfalHills/scripts.pory"
	lock
# 420 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 421 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Duskull_Text_0
# 422 "data/maps/AsfalHills/scripts.pory"
	playmoncry SPECIES_DUSKULL, CRY_MODE_NORMAL
# 423 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Duskull_Text_1
# 424 "data/maps/AsfalHills/scripts.pory"
	waitmoncry
# 425 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 426 "data/maps/AsfalHills/scripts.pory"
	delay 5
# 427 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Duskull_Text_2
# 428 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 429 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_NikoWaitingForPlayer::
# 435 "data/maps/AsfalHills/scripts.pory"
	lock
# 436 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 437 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 438 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoWaitingForPlayer_Text_0
# 439 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 441 "data/maps/AsfalHills/scripts.pory"
	delay 20
# 442 "data/maps/AsfalHills/scripts.pory"
	checkitem ITEM_KEY_STONE
# 443 "data/maps/AsfalHills/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AsfalHills_EventScript_NikoWaitingForPlayer_2
# 453 "data/maps/AsfalHills/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 454 "data/maps/AsfalHills/scripts.pory"
	waitmovement 0
# 455 "data/maps/AsfalHills/scripts.pory"
	delay 5
# 456 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 457 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoWaitingForPlayer_Text_2
# 458 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 459 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 460 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 461 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoWaitingForPlayer_Text_3
# 462 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 463 "data/maps/AsfalHills/scripts.pory"
	giveitem ITEM_HM_SURF
# 464 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 465 "data/maps/AsfalHills/scripts.pory"
	delay 5
# 466 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 467 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoWaitingForPlayer_Text_4
# 468 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 469 "data/maps/AsfalHills/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 470 "data/maps/AsfalHills/scripts.pory"
	delay 20
# 471 "data/maps/AsfalHills/scripts.pory"
	setflag FLAG_HIDE_NIKO_ASFAL_HILLS
# 472 "data/maps/AsfalHills/scripts.pory"
	removeobject 7
# 473 "data/maps/AsfalHills/scripts.pory"
	removeobject 8
# 474 "data/maps/AsfalHills/scripts.pory"
	setflag FLAG_HIDE_BLOCKING_SOFOS_GYM
# 475 "data/maps/AsfalHills/scripts.pory"
	setflag FLAG_UNLOCKED_MEGA_EVOLUTION
# 476 "data/maps/AsfalHills/scripts.pory"
	clearflag FLAG_HIDE_NIKO_ACRISIA_UNIVERSITY
# 477 "data/maps/AsfalHills/scripts.pory"
	delay 20
# 478 "data/maps/AsfalHills/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 479 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 481 "data/maps/AsfalHills/scripts.pory"
	delay 20
# 482 "data/maps/AsfalHills/scripts.pory"
	completequest QUEST_BEAT_CHIMERA_SOFOS_CITY
# 484 "data/maps/AsfalHills/scripts.pory"
	releaseall
	end

AsfalHills_EventScript_NikoWaitingForPlayer_2:
# 445 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0
# 446 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_NikoWaitingForPlayer_Text_1
# 447 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 448 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_UniversityStudentRouteCheck_Text_0:
# 28 "data/maps/AsfalHills/scripts.pory"
	.string "Uni. Student$"

AsfalHills_EventScript_UniversityStudentRouteCheck_Text_1:
# 32 "data/maps/AsfalHills/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

AsfalHills_EventScript_UniversityStudentRouteCheck_Text_2:
# 37 "data/maps/AsfalHills/scripts.pory"
	.string "Chaire! I'm a student from the Acrisia\n"
	.string "University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in Asfal Hills. If you've\l"
	.string "caught all the Pokémon here, please let\l"
	.string "me know.$"

AsfalHills_EventScript_UniversityStudentRouteCheck_Text_3:
# 45 "data/maps/AsfalHills/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

AsfalHills_EventScript_DirectionSign_Text_0:
# 64 "data/maps/AsfalHills/scripts.pory"
	.string "Asfal Hills\n"
	.string "The Gentle Coastal Road\p"
	.string "{LEFT_ARROW} Froslass Cavern\n"
	.string "Sofos City {RIGHT_ARROW}$"

AsfalHills_EventScript_LibrarySign_Text_0:
# 73 "data/maps/AsfalHills/scripts.pory"
	.string "Sofos Outskirts Public Library\n"
	.string "Open to all, 24 Hours a day!$"

AsfalHills_EventScript_Nurse_Text_0:
# 83 "data/maps/AsfalHills/scripts.pory"
	.string "Nurse$"

AsfalHills_EventScript_Nurse_Text_1:
# 84 "data/maps/AsfalHills/scripts.pory"
	.string "Welcome to my Roadside Pokémon Healing\n"
	.string "Service! I'm here to help Trainers\l"
	.string "coming from Pythios Town make it to\l"
	.string "Sofos City.\p"
	.string "Would you like to heal your Pokémon?$"

AsfalHills_EventScript_Nurse_Text_2:
# 91 "data/maps/AsfalHills/scripts.pory"
	.string "Good luck on your adventures!$"

AsfalHills_EventScript_Nurse_Text_3:
# 97 "data/maps/AsfalHills/scripts.pory"
	.string "Feel free to come back any time!$"

AsfalHills_EventScript_Trainer_AsfalHills_Salmai_Text_0:
# 107 "data/maps/AsfalHills/scripts.pory"
	.string "Salmai$"

AsfalHills_EventScript_Trainer_AsfalHills_Salmai_Text_1:
# 108 "data/maps/AsfalHills/scripts.pory"
	.string "Pokémon Eggs take many steps to hatch.\n"
	.string "Moving back and forth like this is a way\l"
	.string "to quickly hatch them!$"

AsfalHills_EventScript_Trainer_AsfalHills_Ardrin_Text_0:
# 125 "data/maps/AsfalHills/scripts.pory"
	.string "Ardrin$"

AsfalHills_EventScript_Trainer_AsfalHills_Ardrin_Text_1:
# 126 "data/maps/AsfalHills/scripts.pory"
	.string "These hills are nice, but they're\n"
	.string "covered in stony ruins. That makes it\l"
	.string "hard for crops to grow.$"

AsfalHills_EventScript_Trainer_AsfalHills_Vito_Text_0:
# 143 "data/maps/AsfalHills/scripts.pory"
	.string "Vito$"

AsfalHills_EventScript_Trainer_AsfalHills_Vito_Text_1:
# 144 "data/maps/AsfalHills/scripts.pory"
	.string "Maybe I'll take a boat from Sofos City\n"
	.string "back to Pythios Town. My parents say\l"
	.string "it's a lot faster!$"

AsfalHills_EventScript_Trainer_AsfalHills_Marisa_Text_0:
# 162 "data/maps/AsfalHills/scripts.pory"
	.string "Maria$"

AsfalHills_EventScript_Trainer_AsfalHills_Marisa_Text_1:
# 163 "data/maps/AsfalHills/scripts.pory"
	.string "You only won because I was looking at\n"
	.string "the statues!$"

AsfalHills_EventScript_Trainer_AsfalHills_Lena_Text_0:
# 184 "data/maps/AsfalHills/scripts.pory"
	.string "Lena$"

AsfalHills_EventScript_Trainer_AsfalHills_Lena_Text_1:
# 185 "data/maps/AsfalHills/scripts.pory"
	.string "I guess Marisa and I need to train some\n"
	.string "more.$"

AsfalHills_EventScript_Trainer_AsfalHills_Arisbe_Text_0:
# 206 "data/maps/AsfalHills/scripts.pory"
	.string "Arisbe$"

AsfalHills_EventScript_Trainer_AsfalHills_Arisbe_Text_1:
# 207 "data/maps/AsfalHills/scripts.pory"
	.string "Most outside areas have different\n"
	.string "Pokémon come out at night. It can feel\l"
	.string "like a whole new area!$"

AsfalHills_EventScript_PsychicM_Text_0:
# 225 "data/maps/AsfalHills/scripts.pory"
	.string "Psychic$"

AsfalHills_EventScript_PsychicM_Text_1:
# 226 "data/maps/AsfalHills/scripts.pory"
	.string "Sofos City is the biggest city in Ilios\n"
	.string "by far. If you go south by Corrin\l"
	.string "Crossing, you get to the sister city of\l"
	.string "Sofos, Port Pello.$"

AsfalHills_EventScript_OfficerBlockingPath_Text_0:
# 236 "data/maps/AsfalHills/scripts.pory"
	.string "Officer$"

AsfalHills_EventScript_OfficerBlockingPath_Text_1:
# 237 "data/maps/AsfalHills/scripts.pory"
	.string "Corrin Crossing is currently unsafe to\n"
	.string "travel due to a high number of\l"
	.string "sinkholes. Come back later, when the\l"
	.string "situation has stabilized.$"

AsfalHills_EventScript_ManTryingToGetSouth_Text_0:
# 248 "data/maps/AsfalHills/scripts.pory"
	.string "Angry Man$"

AsfalHills_EventScript_ManTryingToGetSouth_Text_1:
# 249 "data/maps/AsfalHills/scripts.pory"
	.string "This is ridiculous! I have business in\n"
	.string "Port Pello!$"

AsfalHills_EventScript_ManTryingToGetSouth_Text_2:
# 254 "data/maps/AsfalHills/scripts.pory"
	.string "Can you believe this?! Blocking the\n"
	.string "path to a major city like it's nothing. I\l"
	.string "have to wonder why they're really\l"
	.string "stopping us from going south.$"

AsfalHills_EventScript_WomanTryingToGetSouth_Text_0:
# 266 "data/maps/AsfalHills/scripts.pory"
	.string "Beauty$"

AsfalHills_EventScript_WomanTryingToGetSouth_Text_1:
# 267 "data/maps/AsfalHills/scripts.pory"
	.string "Areios Town, the hamlet south of Port\n"
	.string "Pello, was taken over by Team Chimera a\l"
	.string "few months ago. Now, we're even being\l"
	.string "blocked from Port Pello. Someone needs\l"
	.string "to stop Team Chimera before the whole\l"
	.string "region falls apart!$"

AsfalHills_EventScript_Trainer_AsfalHills_Prothoe_Text_0:
# 276 "data/maps/AsfalHills/scripts.pory"
	.string "Prothoe$"

AsfalHills_EventScript_Trainer_AsfalHills_Prothoe_Text_1:
# 277 "data/maps/AsfalHills/scripts.pory"
	.string "Sofos City is huge! It's certainly\n"
	.string "pretty, but there's a certain beauty to\l"
	.string "the wilderness out here, too.$"

AsfalHills_EventScript_Trainer_AsfalHills_Batto_Text_0:
# 294 "data/maps/AsfalHills/scripts.pory"
	.string "Batto$"

AsfalHills_EventScript_Trainer_AsfalHills_Batto_Text_1:
# 295 "data/maps/AsfalHills/scripts.pory"
	.string "My favorite part about the city is the\n"
	.string "Arcade! You can play Pinball to win all\l"
	.string "these cool prizes, it's the best!$"

AsfalHills_EventScript_OldMan_Text_0:
# 313 "data/maps/AsfalHills/scripts.pory"
	.string "Old Man$"

AsfalHills_EventScript_OldMan_Text_1:
# 314 "data/maps/AsfalHills/scripts.pory"
	.string "Back in my day, Sofos City was half the\n"
	.string "size it is now. I moved out here because\l"
	.string "the inner city got too busy for an old\l"
	.string "man like me.$"

AsfalHills_EventScript_Hiker_Text_0:
# 324 "data/maps/AsfalHills/scripts.pory"
	.string "Hiker$"

AsfalHills_EventScript_Hiker_Text_1:
# 325 "data/maps/AsfalHills/scripts.pory"
	.string "I hiked all the way down from the\n"
	.string "mountains in the north. I'm exhausted,\l"
	.string "but it was totally worth it!$"

AsfalHills_EventScript_NikoMeetPlayerEvent_Text_0:
# 343 "data/maps/AsfalHills/scripts.pory"
	.string "Niko$"

AsfalHills_EventScript_NikoMeetPlayerEvent_Text_1:
# 344 "data/maps/AsfalHills/scripts.pory"
	.string "{PLAYER}? Opa! I thought it was you!\n"
	.string "Here, come look at these statues.$"

AsfalHills_EventScript_NikoMeetPlayerEvent_Text_2:
# 354 "data/maps/AsfalHills/scripts.pory"
	.string "Ehehe, looks like Duskull remembers you\n"
	.string "too!$"

AsfalHills_EventScript_NikoMeetPlayerEvent_Text_3:
# 364 "data/maps/AsfalHills/scripts.pory"
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
# 371 "data/maps/AsfalHills/scripts.pory"
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
# 421 "data/maps/AsfalHills/scripts.pory"
	.string "Duskull$"

AsfalHills_EventScript_Duskull_Text_1:
# 423 "data/maps/AsfalHills/scripts.pory"
	.string "Kaaahhh...$"

AsfalHills_EventScript_Duskull_Text_2:
# 427 "data/maps/AsfalHills/scripts.pory"
	.string "Duskull is studying the statue closely.$"

AsfalHills_EventScript_NikoWaitingForPlayer_Text_0:
# 438 "data/maps/AsfalHills/scripts.pory"
	.string "Chaire, {PLAYER}. I'm sorry for\n"
	.string "sending you on such a dangerous quest,\l"
	.string "but I'm afraid I'm not much of a Pokémon\l"
	.string "battler.\p"
	.string "Did you find {COLOR GREEN}Team Chimera's Hideout{COLOR DARK_GRAY}\n"
	.string "around Sofos City?$"

AsfalHills_EventScript_NikoWaitingForPlayer_Text_1:
# 446 "data/maps/AsfalHills/scripts.pory"
	.string "Hmm, I don't see the {COLOR GREEN}Key Stone{COLOR DARK_GRAY} with you.\n"
	.string "Please, we can't let Team Chimera keep\l"
	.string "that, it's a precious artifact that may\l"
	.string "hold more power than we know.\p"
	.string "Please, find {COLOR GREEN}Team Chimera's Hideout{COLOR DARK_GRAY}\n"
	.string "around Sofos City and {COLOR GREEN}bring back the\l"
	.string "Key Stone{COLOR DARK_GRAY}!$"

AsfalHills_EventScript_NikoWaitingForPlayer_Text_2:
# 457 "data/maps/AsfalHills/scripts.pory"
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
# 461 "data/maps/AsfalHills/scripts.pory"
	.string "What a wreck! I'm glad you were here to\n"
	.string "help, {PLAYER}. This has been way too\l"
	.string "much excitement for me, so I'll be\l"
	.string "bringing Duskull back to the University.\p"
	.string "Oh! Speaking of which, I have something\n"
	.string "for you we've been working on in the lab.\l"
	.string "Take this!$"

AsfalHills_EventScript_NikoWaitingForPlayer_Text_4:
# 467 "data/maps/AsfalHills/scripts.pory"
	.string "The HM Surf will allow you to cross the\n"
	.string "waters of Ilios. Of course, you need the\l"
	.string "Gym Badge from Sofos City to use it!\p"
	.string "Alright, Duskull and I are getting out\n"
	.string "of here before any Team Chimera\l"
	.string "members pay us a visit. Come to Acrisia\l"
	.string "University soon, as I'll be collecting\l"
	.string "{COLOR GREEN}Mega Stones{COLOR DARK_GRAY} for you!$"

AsfalHills_Text_Trainer_AsfalHills_SalmaiIntro::
# 113 "data/maps/AsfalHills/scripts.pory"
	.string "There's a good, long horizontal stretch\n"
	.string "on this route. Perfect for biking back\l"
	.string "and forth!$"

AsfalHills_Text_Trainer_AsfalHills_SalmaiDefeat::
# 117 "data/maps/AsfalHills/scripts.pory"
	.string "Huff, huff... I have to keep training!$"

AsfalHills_Text_Trainer_AsfalHills_ArdrinIntro::
# 131 "data/maps/AsfalHills/scripts.pory"
	.string "Ahh, it's no good. There are too many\n"
	.string "stones in the ground here for farming!$"

AsfalHills_Text_Trainer_AsfalHills_ArdrinDefeat::
# 135 "data/maps/AsfalHills/scripts.pory"
	.string "I should head back towards Jusmail\n"
	.string "Town.$"

AsfalHills_Text_Trainer_AsfalHills_VitoIntro::
# 149 "data/maps/AsfalHills/scripts.pory"
	.string "I came all the way from Pythios Town!$"

AsfalHills_Text_Trainer_AsfalHills_VitoDefeat::
# 153 "data/maps/AsfalHills/scripts.pory"
	.string "I'm not sure how I'll get back...$"

AsfalHills_Text_Trainer_AsfalHills_MarisaIntro::
# 168 "data/maps/AsfalHills/scripts.pory"
	.string "There are two statues over there.\n"
	.string "Maybe they're twins like us!$"

AsfalHills_Text_Trainer_AsfalHills_MarisaDefeat::
# 172 "data/maps/AsfalHills/scripts.pory"
	.string "So much for twin power...$"

AsfalHills_Text_Trainer_AsfalHills_MarisaNotEnoughMons::
# 176 "data/maps/AsfalHills/scripts.pory"
	.string "We can't battle anyone without at least\n"
	.string "2 Pokémon!$"

AsfalHills_Text_Trainer_AsfalHills_LenaIntro::
# 190 "data/maps/AsfalHills/scripts.pory"
	.string "Two is better than one!$"

AsfalHills_Text_Trainer_AsfalHills_LenaDefeat::
# 194 "data/maps/AsfalHills/scripts.pory"
	.string "I thought two was better than one!$"

AsfalHills_Text_Trainer_AsfalHills_LenaNotEnoughMons::
# 198 "data/maps/AsfalHills/scripts.pory"
	.string "We can't battle anyone without at least\n"
	.string "2 Pokémon!$"

AsfalHills_Text_Trainer_AsfalHills_ArisbeIntro::
# 212 "data/maps/AsfalHills/scripts.pory"
	.string "Look at the Pokémon I found around\n"
	.string "here!$"

AsfalHills_Text_Trainer_AsfalHills_ArisbeDefeat::
# 216 "data/maps/AsfalHills/scripts.pory"
	.string "How could you fight my cuties?!$"

AsfalHills_Text_Trainer_AsfalHills_ProthoeIntro::
# 282 "data/maps/AsfalHills/scripts.pory"
	.string "We're not far from the suburbs around\n"
	.string "Sofos City. Battle me before you go!$"

AsfalHills_Text_Trainer_AsfalHills_ProthoeDefeat::
# 286 "data/maps/AsfalHills/scripts.pory"
	.string "My Pokémon need a rest now!$"

AsfalHills_Text_Trainer_AsfalHills_BattoIntro::
# 300 "data/maps/AsfalHills/scripts.pory"
	.string "Finally, I can see the walls of the city\n"
	.string "from here!$"

AsfalHills_Text_Trainer_AsfalHills_BattoDefeat::
# 304 "data/maps/AsfalHills/scripts.pory"
	.string "I guess my first stop is a Pokémon\n"
	.string "Center!$"

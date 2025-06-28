MarmaroIsland_House2_MapScripts::
	.byte 0


MarmaroIsland_House2_EventScript_Girl::
# 5 "data/maps/MarmaroIsland_House2/scripts.pory"
	lock
# 6 "data/maps/MarmaroIsland_House2/scripts.pory"
	faceplayer
# 7 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_Girl_Text_0
# 8 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_Girl_Text_1
# 9 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 10 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end


MarmaroIsland_House2_EventScript_Boy::
# 16 "data/maps/MarmaroIsland_House2/scripts.pory"
	lock
# 17 "data/maps/MarmaroIsland_House2/scripts.pory"
	faceplayer
# 18 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_Boy_Text_0
# 19 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_Boy_Text_1
# 20 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 21 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end


MarmaroIsland_House2_EventScript_FossilReviveMan::
# 27 "data/maps/MarmaroIsland_House2/scripts.pory"
	lock
# 28 "data/maps/MarmaroIsland_House2/scripts.pory"
	faceplayer
# 29 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 30 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_1, MSGBOX_YESNO
# 31 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 32 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_2
# 42 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 43 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_3
# 44 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 45 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 48 "data/maps/MarmaroIsland_House2/scripts.pory"
	chooseitem ITEMS_POCKET
# 49 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 52 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_HELIX_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_6
# 56 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_DOME_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_7
# 60 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_OLD_AMBER
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_8
# 64 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_ROOT_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_9
# 68 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_CLAW_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_10
# 72 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_SKULL_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_11
# 76 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_ARMOR_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_12
# 80 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_COVER_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_13
# 84 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_PLUME_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_14
# 88 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_JAW_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_15
# 92 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_SAIL_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_16
# 96 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_FOSSILIZED_BIRD
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_17
# 96 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_FOSSILIZED_DINO
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_17
# 96 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_FOSSILIZED_DRAKE
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_17
# 96 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_FOSSILIZED_FISH
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_17
# 103 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 0
MarmaroIsland_House2_EventScript_FossilReviveMan_5:
# 107 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, 0
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_37
# 115 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_DRACOZOLT
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_38
# 319 "data/maps/MarmaroIsland_House2/scripts.pory"
	showmoneybox 0, 0
# 321 "data/maps/MarmaroIsland_House2/scripts.pory"
	bufferitemname STR_VAR_1, VAR_ITEM_ID
# 322 "data/maps/MarmaroIsland_House2/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_WHICH_FOSSIL_REVIVED
# 323 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 324 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_12, MSGBOX_YESNO
# 325 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 326 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 328 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_50
# 339 "data/maps/MarmaroIsland_House2/scripts.pory"
	checkmoney 2000
# 340 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_83
# 351 "data/maps/MarmaroIsland_House2/scripts.pory"
	removeitem VAR_ITEM_ID
# 352 "data/maps/MarmaroIsland_House2/scripts.pory"
	removemoney 2000
# 353 "data/maps/MarmaroIsland_House2/scripts.pory"
	updatemoneybox
# 354 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 10
# 355 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 356 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_13
# 357 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 358 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 362 "data/maps/MarmaroIsland_House2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 363 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 60
# 364 "data/maps/MarmaroIsland_House2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 365 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 20
# 367 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 368 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_14
# 369 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 370 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 373 "data/maps/MarmaroIsland_House2/scripts.pory"
	randompercentage 1
# 374 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_81
MarmaroIsland_House2_EventScript_FossilReviveMan_80:
# 380 "data/maps/MarmaroIsland_House2/scripts.pory"
	random 3
# 381 "data/maps/MarmaroIsland_House2/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 382 "data/maps/MarmaroIsland_House2/scripts.pory"
	random 2
# 383 "data/maps/MarmaroIsland_House2/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 385 "data/maps/MarmaroIsland_House2/scripts.pory"
	random 3
# 388 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_OMANYTE
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_91
# 396 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_KABUTO
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_92
# 404 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_AERODACTYL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_93
# 412 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_LILEEP
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_94
# 420 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_ANORITH
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_95
# 428 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_CRANIDOS
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_96
# 436 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_SHIELDON
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_97
# 444 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_TIRTOUGA
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_98
# 452 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_ARCHEN
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_99
# 460 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_TYRUNT
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_100
# 468 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_AMAURA
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_101
MarmaroIsland_House2_EventScript_FossilReviveMan_90:
# 476 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 478 "data/maps/MarmaroIsland_House2/scripts.pory"
	clearflag FLAG_FORCE_SHINY
MarmaroIsland_House2_EventScript_FossilReviveMan_1:
# 482 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_FossilReviveMan_2:
# 34 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 35 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_2
# 36 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 37 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_FossilReviveMan_6:
# 54 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_OMANYTE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_7:
# 58 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_KABUTO
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_8:
# 62 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_AERODACTYL
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_9:
# 66 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_LILEEP
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_10:
# 70 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_ANORITH
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_11:
# 74 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_CRANIDOS
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_12:
# 78 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_SHIELDON
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_13:
# 82 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_TIRTOUGA
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_14:
# 86 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_ARCHEN
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_15:
# 90 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_TYRUNT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_16:
# 94 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_AMAURA
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_17:
# 99 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_DRACOZOLT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_37:
# 109 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 110 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_4
# 111 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 112 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_FossilReviveMan_38:
# 125 "data/maps/MarmaroIsland_House2/scripts.pory"
	copyvar VAR_TEMP_B, VAR_ITEM_ID
# 127 "data/maps/MarmaroIsland_House2/scripts.pory"
	bufferitemname STR_VAR_1, VAR_ITEM_ID
# 128 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 129 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_5
# 130 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 133 "data/maps/MarmaroIsland_House2/scripts.pory"
	chooseitem ITEMS_POCKET
# 134 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 136 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_ITEM_ID
# 138 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 176, MarmaroIsland_House2_EventScript_FossilReviveMan_44
# 152 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 177, MarmaroIsland_House2_EventScript_FossilReviveMan_45
# 166 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 178, MarmaroIsland_House2_EventScript_FossilReviveMan_46
# 180 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 179, MarmaroIsland_House2_EventScript_FossilReviveMan_47
# 195 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 0
MarmaroIsland_House2_EventScript_FossilReviveMan_42:
# 198 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, 0
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_53
# 209 "data/maps/MarmaroIsland_House2/scripts.pory"
	showmoneybox 0, 0
# 211 "data/maps/MarmaroIsland_House2/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_WHICH_FOSSIL_REVIVED
# 212 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 213 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_7, MSGBOX_YESNO
# 214 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 215 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 218 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_87
# 229 "data/maps/MarmaroIsland_House2/scripts.pory"
	checkmoney 2000
# 230 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_116
# 241 "data/maps/MarmaroIsland_House2/scripts.pory"
	removeitem VAR_TEMP_B
# 242 "data/maps/MarmaroIsland_House2/scripts.pory"
	removeitem VAR_ITEM_ID
# 243 "data/maps/MarmaroIsland_House2/scripts.pory"
	removemoney 2000
# 244 "data/maps/MarmaroIsland_House2/scripts.pory"
	updatemoneybox
# 245 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 10
# 246 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 247 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_10
# 248 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 249 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 253 "data/maps/MarmaroIsland_House2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 254 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 60
# 255 "data/maps/MarmaroIsland_House2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 256 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 20
# 258 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 259 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_11
# 260 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 261 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 264 "data/maps/MarmaroIsland_House2/scripts.pory"
	randompercentage 1
# 265 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_114
MarmaroIsland_House2_EventScript_FossilReviveMan_113:
# 271 "data/maps/MarmaroIsland_House2/scripts.pory"
	random 3
# 272 "data/maps/MarmaroIsland_House2/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 273 "data/maps/MarmaroIsland_House2/scripts.pory"
	random 2
# 274 "data/maps/MarmaroIsland_House2/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 276 "data/maps/MarmaroIsland_House2/scripts.pory"
	random 3
# 279 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_DRACOZOLT
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_164
# 287 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_ARCTOZOLT
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_165
# 295 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_DRACOVISH
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_166
# 303 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_ARCTOVISH
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_167
MarmaroIsland_House2_EventScript_FossilReviveMan_163:
# 311 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 313 "data/maps/MarmaroIsland_House2/scripts.pory"
	clearflag FLAG_FORCE_SHINY
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_1

MarmaroIsland_House2_EventScript_FossilReviveMan_44:
# 139 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_TEMP_B, 178
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_57
# 143 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_TEMP_B, 179
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_58
# 149 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 0
MarmaroIsland_House2_EventScript_FossilReviveMan_56:
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_45:
# 153 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_TEMP_B, 178
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_63
# 157 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_TEMP_B, 179
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_64
# 163 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 0
MarmaroIsland_House2_EventScript_FossilReviveMan_62:
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_46:
# 167 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_TEMP_B, 176
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_69
# 171 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_TEMP_B, 177
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_70
# 177 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 0
MarmaroIsland_House2_EventScript_FossilReviveMan_68:
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_47:
# 181 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_TEMP_B, 176
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_75
# 185 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_TEMP_B, 177
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_76
# 191 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 0
MarmaroIsland_House2_EventScript_FossilReviveMan_74:
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_50:
# 330 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 331 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 332 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_8
# 333 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 334 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_FossilReviveMan_53:
# 200 "data/maps/MarmaroIsland_House2/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_B
# 201 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 202 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_6
# 203 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 204 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_FossilReviveMan_57:
# 141 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_DRACOZOLT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_56

MarmaroIsland_House2_EventScript_FossilReviveMan_58:
# 145 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_ARCTOZOLT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_56

MarmaroIsland_House2_EventScript_FossilReviveMan_63:
# 155 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_DRACOVISH
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_62

MarmaroIsland_House2_EventScript_FossilReviveMan_64:
# 159 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_ARCTOVISH
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_62

MarmaroIsland_House2_EventScript_FossilReviveMan_69:
# 169 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_DRACOZOLT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_68

MarmaroIsland_House2_EventScript_FossilReviveMan_70:
# 173 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_DRACOVISH
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_68

MarmaroIsland_House2_EventScript_FossilReviveMan_75:
# 183 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_ARCTOZOLT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_74

MarmaroIsland_House2_EventScript_FossilReviveMan_76:
# 187 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_ARCTOVISH
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_74

MarmaroIsland_House2_EventScript_FossilReviveMan_81:
# 376 "data/maps/MarmaroIsland_House2/scripts.pory"
	setflag FLAG_FORCE_SHINY
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_80

MarmaroIsland_House2_EventScript_FossilReviveMan_83:
# 342 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 343 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 344 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_9
# 345 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 346 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_FossilReviveMan_87:
# 220 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 221 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 222 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_8
# 223 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 224 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_FossilReviveMan_91:
# 390 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 391 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_120
# 392 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_121
# 393 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_122
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_92:
# 398 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 399 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_124
# 400 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_125
# 401 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_126
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_93:
# 406 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 407 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_128
# 408 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_129
# 409 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_130
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_94:
# 414 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 415 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_132
# 416 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_133
# 417 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_134
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_95:
# 422 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 423 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_136
# 424 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_137
# 425 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_138
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_96:
# 430 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 431 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_140
# 432 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_141
# 433 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_142
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_97:
# 438 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 439 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_144
# 440 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_145
# 441 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_146
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_98:
# 446 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 447 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_148
# 448 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_149
# 449 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_150
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_99:
# 454 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 455 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_152
# 456 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_153
# 457 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_154
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_100:
# 462 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 463 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_156
# 464 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_157
# 465 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_158
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_101:
# 470 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 471 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_160
# 472 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_161
# 473 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_162
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_114:
# 267 "data/maps/MarmaroIsland_House2/scripts.pory"
	setflag FLAG_FORCE_SHINY
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_113

MarmaroIsland_House2_EventScript_FossilReviveMan_116:
# 232 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 233 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 234 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_9
# 235 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 236 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_FossilReviveMan_120:
# 391 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_OMANYTE, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_CONSTRICT, MOVE_WITHDRAW, MOVE_BITE, MOVE_WATER_GUN
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_121:
# 392 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_OMANYTE, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_WITHDRAW, MOVE_BITE, MOVE_WATER_GUN
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_122:
# 393 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_OMANYTE, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_CONSTRICT, MOVE_IRON_DEFENSE, MOVE_BITE, MOVE_WATER_GUN
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_124:
# 399 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_KABUTO, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SCRATCH, MOVE_HARDEN, MOVE_ABSORB, MOVE_LEER
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_125:
# 400 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_KABUTO, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SCRATCH, MOVE_HARDEN, MOVE_ABSORB, MOVE_METAL_CLAW
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_126:
# 401 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_KABUTO, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SCRATCH, MOVE_HARDEN, MOVE_ABSORB, MOVE_ANCHOR_SHOT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_128:
# 407 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_AERODACTYL, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_WING_ATTACK, MOVE_SUPERSONIC, MOVE_BITE, MOVE_SCARY_FACE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_129:
# 408 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_AERODACTYL, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_WING_ATTACK, MOVE_SUPERSONIC, MOVE_BITE, MOVE_SUPER_FANG
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_130:
# 409 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_AERODACTYL, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_WING_ATTACK, MOVE_SUPERSONIC, MOVE_BITE, MOVE_METEOR_MASH
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_132:
# 415 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_LILEEP, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ASTONISH, MOVE_CONSTRICT, MOVE_ACID, MOVE_INGRAIN
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_133:
# 416 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_LILEEP, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ASTONISH, MOVE_SCALD, MOVE_ACID, MOVE_INGRAIN
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_134:
# 417 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_LILEEP, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ASTONISH, MOVE_SYNTHESIS, MOVE_ACID, MOVE_INGRAIN
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_136:
# 423 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ANORITH, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SCRATCH, MOVE_HARDEN, MOVE_MUD_SPORT, MOVE_BUBBLE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_137:
# 424 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ANORITH, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SCRATCH, MOVE_SPIKY_SHIELD, MOVE_MUD_SPORT, MOVE_BUBBLE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_138:
# 425 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ANORITH, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SCRATCH, MOVE_SHORE_UP, MOVE_MUD_SPORT, MOVE_BUBBLE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_140:
# 431 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_CRANIDOS, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_HEADBUTT, MOVE_LEER, MOVE_FOCUS_ENERGY, MOVE_PURSUIT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_141:
# 432 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_CRANIDOS, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_HEADBUTT, MOVE_SEISMIC_TOSS, MOVE_FOCUS_ENERGY, MOVE_PURSUIT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_142:
# 433 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_CRANIDOS, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_HEADBUTT, MOVE_GLARE, MOVE_FOCUS_ENERGY, MOVE_PURSUIT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_144:
# 439 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_SHIELDON, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_PROTECT, MOVE_TAUNT, MOVE_METAL_SOUND
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_145:
# 440 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_SHIELDON, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_PROTECT, MOVE_PSYSHIELD_BASH, MOVE_METAL_SOUND
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_146:
# 441 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_SHIELDON, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_PROTECT, MOVE_AVALANCHE, MOVE_METAL_SOUND
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_148:
# 447 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_TIRTOUGA, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BITE, MOVE_WITHDRAW, MOVE_WATER_GUN, MOVE_ROLLOUT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_149:
# 448 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_TIRTOUGA, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BITE, MOVE_ICE_FANG, MOVE_WATER_GUN, MOVE_ROLLOUT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_150:
# 449 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_TIRTOUGA, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BITE, MOVE_SHORE_UP, MOVE_WATER_GUN, MOVE_ROLLOUT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_152:
# 455 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ARCHEN, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_QUICK_ATTACK, MOVE_DOUBLE_TEAM, MOVE_WING_ATTACK, MOVE_ROCK_THROW
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_153:
# 456 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ARCHEN, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_QUICK_ATTACK, MOVE_BONEMERANG, MOVE_WING_ATTACK, MOVE_ROCK_THROW
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_154:
# 457 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ARCHEN, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_QUICK_ATTACK, MOVE_JUMP_KICK, MOVE_WING_ATTACK, MOVE_ROCK_THROW
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_156:
# 463 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_TYRUNT, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_ROAR, MOVE_STOMP
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_157:
# 464 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_TYRUNT, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_ICE_FANG, MOVE_ROAR, MOVE_STOMP
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_158:
# 465 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_TYRUNT, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_PLAY_ROUGH, MOVE_ROAR, MOVE_STOMP
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_160:
# 471 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_AMAURA, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POWDER_SNOW, MOVE_GROWL, MOVE_THUNDER_WAVE, MOVE_ROCK_THROW
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_161:
# 472 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_AMAURA, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POWDER_SNOW, MOVE_DAZZLING_GLEAM, MOVE_THUNDER_WAVE, MOVE_ROCK_THROW
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_162:
# 473 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_AMAURA, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POWDER_SNOW, MOVE_CHILLING_WATER, MOVE_THUNDER_WAVE, MOVE_ROCK_THROW
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_164:
# 281 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 282 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_173
# 283 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_174
# 284 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_175
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_165:
# 289 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 290 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_177
# 291 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_178
# 292 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_179
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_166:
# 297 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 298 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_181
# 299 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_182
# 300 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_183
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_167:
# 305 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 306 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_185
# 307 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_186
# 308 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_187
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_173:
# 282 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_DRACOZOLT, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_THUNDER_SHOCK, MOVE_CHARGE, MOVE_AERIAL_ACE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_174:
# 283 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_DRACOZOLT, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_QUICK_ATTACK, MOVE_THUNDER_SHOCK, MOVE_CHARGE, MOVE_AERIAL_ACE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_175:
# 284 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_DRACOZOLT, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_SHOCK_WAVE, MOVE_CHARGE, MOVE_AERIAL_ACE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_177:
# 290 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ARCTOZOLT, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POWDER_SNOW, MOVE_THUNDER_SHOCK, MOVE_CHARGE, MOVE_ECHOED_VOICE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_178:
# 291 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ARCTOZOLT, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ICE_SHARD, MOVE_THUNDER_SHOCK, MOVE_CHARGE, MOVE_ECHOED_VOICE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_179:
# 292 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ARCTOZOLT, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POWDER_SNOW, MOVE_SHOCK_WAVE, MOVE_CHARGE, MOVE_ECHOED_VOICE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_181:
# 298 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_DRACOVISH, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_WATER_GUN, MOVE_PROTECT, MOVE_BRUTAL_SWING
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_182:
# 299 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_DRACOVISH, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_LOW_KICK, MOVE_WATER_GUN, MOVE_PROTECT, MOVE_BRUTAL_SWING
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_183:
# 300 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_DRACOVISH, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_WATER_GUN, MOVE_SCARY_FACE, MOVE_BRUTAL_SWING
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_185:
# 306 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ARCTOVISH, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POWDER_SNOW, MOVE_WATER_GUN, MOVE_PROTECT, MOVE_ICY_WIND
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_186:
# 307 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ARCTOVISH, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POWDER_SNOW, MOVE_CLAMP, MOVE_PROTECT, MOVE_ICY_WIND
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_187:
# 308 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ARCTOVISH, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POWDER_SNOW, MOVE_WATER_GUN, MOVE_SCARY_FACE, MOVE_ICY_WIND
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163


MarmaroIsland_House2_EventScript_OddKeystoneWoman::
# 488 "data/maps/MarmaroIsland_House2/scripts.pory"
	lock
# 489 "data/maps/MarmaroIsland_House2/scripts.pory"
	faceplayer
# 490 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 491 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_1, MSGBOX_YESNO
# 492 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 493 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MarmaroIsland_House2_EventScript_OddKeystoneWoman_2
# 503 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 504 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_3
# 505 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 506 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 509 "data/maps/MarmaroIsland_House2/scripts.pory"
	chooseitem ITEMS_POCKET
# 510 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 513 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_ODD_KEYSTONE
	goto_if_eq MarmaroIsland_House2_EventScript_OddKeystoneWoman_6
# 519 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 0
MarmaroIsland_House2_EventScript_OddKeystoneWoman_5:
# 523 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, 0
	goto_if_eq MarmaroIsland_House2_EventScript_OddKeystoneWoman_9
# 534 "data/maps/MarmaroIsland_House2/scripts.pory"
	showmoneybox 0, 0
# 536 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 537 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_5, MSGBOX_YESNO
# 538 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 539 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 541 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MarmaroIsland_House2_EventScript_OddKeystoneWoman_13
# 552 "data/maps/MarmaroIsland_House2/scripts.pory"
	checkmoney 2000
# 553 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MarmaroIsland_House2_EventScript_OddKeystoneWoman_19
# 564 "data/maps/MarmaroIsland_House2/scripts.pory"
	removeitem VAR_ITEM_ID
# 565 "data/maps/MarmaroIsland_House2/scripts.pory"
	removemoney 2000
# 566 "data/maps/MarmaroIsland_House2/scripts.pory"
	updatemoneybox
# 567 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 10
# 568 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 569 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_8
# 570 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 571 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 575 "data/maps/MarmaroIsland_House2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 576 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 60
# 577 "data/maps/MarmaroIsland_House2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 578 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 20
# 580 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 581 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_9
# 582 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 583 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 586 "data/maps/MarmaroIsland_House2/scripts.pory"
	randompercentage 1
# 587 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MarmaroIsland_House2_EventScript_OddKeystoneWoman_17
MarmaroIsland_House2_EventScript_OddKeystoneWoman_16:
# 592 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon VAR_WHICH_FOSSIL_REVIVED, 20
# 593 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 595 "data/maps/MarmaroIsland_House2/scripts.pory"
	clearflag FLAG_FORCE_SHINY
# 599 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_OddKeystoneWoman_2:
# 495 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 496 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_2
# 497 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 498 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_OddKeystoneWoman_6:
# 515 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_SPIRITOMB
	goto MarmaroIsland_House2_EventScript_OddKeystoneWoman_5

MarmaroIsland_House2_EventScript_OddKeystoneWoman_9:
# 525 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 526 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_4
# 527 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 528 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_OddKeystoneWoman_13:
# 543 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 544 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 545 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_6
# 546 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 547 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_OddKeystoneWoman_17:
# 589 "data/maps/MarmaroIsland_House2/scripts.pory"
	setflag FLAG_FORCE_SHINY
	goto MarmaroIsland_House2_EventScript_OddKeystoneWoman_16

MarmaroIsland_House2_EventScript_OddKeystoneWoman_19:
# 555 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 556 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 557 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_7
# 558 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 559 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end


MarmaroIsland_House2_EventScript_Girl_Text_0:
# 7 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Girl$"

MarmaroIsland_House2_EventScript_Girl_Text_1:
# 8 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Dad says that Marmaro Island used to\n"
	.string "be a lot bigger, but stone mining made it\l"
	.string "shrink. That must've been a lot of\l"
	.string "stone!$"

MarmaroIsland_House2_EventScript_Boy_Text_0:
# 18 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Boy$"

MarmaroIsland_House2_EventScript_Boy_Text_1:
# 19 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Pokémon everyone thought were extinct\n"
	.string "have been showing up a lot around here!\l"
	.string "Maybe it's because of all the fossils in\l"
	.string "the stone?$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0:
# 29 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Paleontologist$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_1:
# 30 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Chaire! If you've spent time in the\n"
	.string "Mines, there's a good chance you've\l"
	.string "found a {COLOR GREEN}Pokémon Fossil{COLOR DARK_GRAY}.\p"
	.string "Through my experiments, I've found a\n"
	.string "way to {COLOR GREEN}restore Pokémon from Fossils{COLOR DARK_GRAY}\l"
	.string "back to life! Are you interested?$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_2:
# 35 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Still looking for Fossils? If you find\n"
	.string "any, bring them to me!$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_3:
# 43 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Great! Go ahead and choose the Fossil\n"
	.string "you want me to restore.$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_4:
# 110 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Hmm... I hate to break it to you, but\n"
	.string "that just isn't a Fossil.\p"
	.string "Bring me a Pokémon Fossil, and I'll be\n"
	.string "able to restore it for you.$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_5:
# 129 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Hmm... this seems to be an incomplete\n"
	.string "{STR_VAR_1}. I've read studies from\l"
	.string "the Galar Region on how to assemble\l"
	.string "these with other fossil fragments.\p"
	.string "Do you happen to have any {COLOR GREEN}Fossilized\n"
	.string "Parts{COLOR DARK_GRAY}?$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_6:
# 202 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Well, I'm not seeing any compatibility,\n"
	.string "and I can't revive this {STR_VAR_1}\l"
	.string "by itself.\p"
	.string "Bring me back a working combination of\n"
	.string "Fossilized Parts, or separate, complete\l"
	.string "Fossils.$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_7:
# 213 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "According to that research, this\n"
	.string "combination will produce a living\l"
	.string "{STR_VAR_1} specimen! It seems\l"
	.string "strange, but it's backed up by Galarian\l"
	.string "experts, so... let's give it a shot!\p"
	.string "This process will be pretty\n"
	.string "resource-intensive. Including labor\l"
	.string "and time, it should cost around ¥2000.\l"
	.string "Are you interested?$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_8:
# 222 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "No? Well, come on back with other\n"
	.string "Fossils anytime.$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_9:
# 234 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Hmm... It doesn't look like you've got\n"
	.string "the funds right now. Come back with a\l"
	.string "Fossil and ¥2000, and I'll restore it for\l"
	.string "you!$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_10:
# 247 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Alright, thanks! I'll just take those\n"
	.string "Fossilized Parts from you, then we'll\l"
	.string "get started!$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_11:
# 259 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Thanks for waiting. It was a complete\n"
	.string "success! Meet your new Pokémon!$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_12:
# 324 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Ah, this is certainly a {STR_VAR_1}!\n"
	.string "From my research, I believe a Pokémon\l"
	.string "known as {STR_VAR_2} will be\l"
	.string "restored from this.\p"
	.string "This process will be pretty\n"
	.string "resource-intensive. Including labor\l"
	.string "and time, it should cost around ¥2000.\l"
	.string "Are you interested?$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_13:
# 356 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Alright, thanks! I'll just take that\n"
	.string "Fossil from you, then we'll get started!$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_14:
# 368 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Thanks for waiting. It was a complete\n"
	.string "success! The {STR_VAR_2} has\l"
	.string "imprinted on you, so it is ready to\l"
	.string "follow you wherever you go. Meet your\l"
	.string "new {STR_VAR_2}!$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0:
# 490 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Spiritual Woman$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_1:
# 491 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Hello... by chance, have you found an\n"
	.string "{COLOR GREEN}Odd Keystone{COLOR DARK_GRAY} in the Mines?\p"
	.string "In my studies of the occult, I've found\n"
	.string "that a Pokémon called {COLOR GREEN}Spiritomb{COLOR DARK_GRAY} may\l"
	.string "live inside them, as they were once used\l"
	.string "in burial traditions of ancient Ilios.\l"
	.string "Have you found an Odd Keystone?$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_2:
# 496 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "No, I suppose most people wouldn't have\n"
	.string "one, as they are exceedingly rare.\l"
	.string "According to legend, over 100 souls are\l"
	.string "contained in each Odd Keystone, found\l"
	.string "near burial sites or ancient\l"
	.string "battlefields.\p"
	.string "If you happen to find an Odd Keystone,\n"
	.string "please let me know.$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_3:
# 504 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Really? What incredible luck. Please,\n"
	.string "show me...$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_4:
# 526 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Oh, my sweet summer child, this is not an\n"
	.string "Odd Keystone at all.$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_5:
# 537 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Yes, I can feel the spirits swirling\n"
	.string "inside... this is most certainly an Odd\l"
	.string "Keystone!\p"
	.string "Awakening Spiritomb from the Odd\n"
	.string "Keystone is very spiritually intensive.\l"
	.string "Including labor and time, it should cost\l"
	.string "around ¥2000. Shall we begin?$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_6:
# 545 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "No? Hm. Well please, come back with the\n"
	.string "Odd Keystone when you can.$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_7:
# 557 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Hmm... I'm sorry, but you're lacking the\n"
	.string "funds right now. Come back with an Odd\l"
	.string "Keystone and ¥2000, and I'll awaken the\l"
	.string "Spiritomb inside.$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_8:
# 569 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Okay, I'll place the Odd Keystone in the\n"
	.string "center of my crystal circle, and we\l"
	.string "shall begin the ritual. Please, wait\l"
	.string "there.$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_9:
# 581 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "The spirits have been stirred by your\n"
	.string "energy, and Spiritomb has awakened.\l"
	.string "Take it, and treat it with respect.$"

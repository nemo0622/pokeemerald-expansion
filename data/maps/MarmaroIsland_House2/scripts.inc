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
	goto_if_unset FLAG_GOT_BLACK_AUGURITE_MARMARO, MarmaroIsland_House2_EventScript_Girl_2
MarmaroIsland_House2_EventScript_Girl_1:
# 20 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_Girl_2:
# 12 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_Girl_Text_0
# 13 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_Girl_Text_2
# 14 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 15 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 16 "data/maps/MarmaroIsland_House2/scripts.pory"
	giveitem ITEM_BLACK_AUGURITE
# 17 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 18 "data/maps/MarmaroIsland_House2/scripts.pory"
	setflag FLAG_GOT_BLACK_AUGURITE_MARMARO
	goto MarmaroIsland_House2_EventScript_Girl_1


MarmaroIsland_House2_EventScript_Boy::
# 26 "data/maps/MarmaroIsland_House2/scripts.pory"
	lock
# 27 "data/maps/MarmaroIsland_House2/scripts.pory"
	faceplayer
# 28 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_Boy_Text_0
# 29 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_Boy_Text_1
# 30 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 31 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end


MarmaroIsland_House2_EventScript_FossilReviveMan::
# 37 "data/maps/MarmaroIsland_House2/scripts.pory"
	lock
# 38 "data/maps/MarmaroIsland_House2/scripts.pory"
	faceplayer
# 39 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 40 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_1, MSGBOX_YESNO
# 41 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 42 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_2
# 52 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 53 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_3
# 54 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 55 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 58 "data/maps/MarmaroIsland_House2/scripts.pory"
	chooseitem ITEMS_POCKET
# 59 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 62 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_HELIX_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_6
# 66 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_DOME_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_7
# 70 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_OLD_AMBER
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_8
# 74 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_ROOT_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_9
# 78 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_CLAW_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_10
# 82 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_SKULL_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_11
# 86 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_ARMOR_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_12
# 90 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_COVER_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_13
# 94 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_PLUME_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_14
# 98 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_JAW_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_15
# 102 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_SAIL_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_16
# 106 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_FOSSILIZED_BIRD
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_17
# 106 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_FOSSILIZED_DINO
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_17
# 106 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_FOSSILIZED_DRAKE
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_17
# 106 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_FOSSILIZED_FISH
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_17
# 113 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 0
MarmaroIsland_House2_EventScript_FossilReviveMan_5:
# 117 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, 0
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_37
# 125 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_DRACOZOLT
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_38
# 329 "data/maps/MarmaroIsland_House2/scripts.pory"
	showmoneybox 0, 0
# 331 "data/maps/MarmaroIsland_House2/scripts.pory"
	bufferitemname STR_VAR_1, VAR_ITEM_ID
# 332 "data/maps/MarmaroIsland_House2/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_WHICH_FOSSIL_REVIVED
# 333 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 334 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_12, MSGBOX_YESNO
# 335 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 336 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 338 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_50
# 349 "data/maps/MarmaroIsland_House2/scripts.pory"
	checkmoney 2000
# 350 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_83
# 361 "data/maps/MarmaroIsland_House2/scripts.pory"
	removeitem VAR_ITEM_ID
# 362 "data/maps/MarmaroIsland_House2/scripts.pory"
	removemoney 2000
# 363 "data/maps/MarmaroIsland_House2/scripts.pory"
	updatemoneybox
# 364 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 10
# 365 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 366 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_13
# 367 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 368 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 372 "data/maps/MarmaroIsland_House2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 373 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 60
# 374 "data/maps/MarmaroIsland_House2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 375 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 20
# 377 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 378 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_14
# 379 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 380 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 383 "data/maps/MarmaroIsland_House2/scripts.pory"
	randompercentage 1
# 384 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_81
MarmaroIsland_House2_EventScript_FossilReviveMan_80:
# 390 "data/maps/MarmaroIsland_House2/scripts.pory"
	random 3
# 391 "data/maps/MarmaroIsland_House2/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 392 "data/maps/MarmaroIsland_House2/scripts.pory"
	random 2
# 393 "data/maps/MarmaroIsland_House2/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 395 "data/maps/MarmaroIsland_House2/scripts.pory"
	random 3
# 398 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_OMANYTE
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_91
# 406 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_KABUTO
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_92
# 414 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_AERODACTYL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_93
# 422 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_LILEEP
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_94
# 430 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_ANORITH
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_95
# 438 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_CRANIDOS
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_96
# 446 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_SHIELDON
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_97
# 454 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_TIRTOUGA
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_98
# 462 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_ARCHEN
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_99
# 470 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_TYRUNT
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_100
# 478 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_AMAURA
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_101
MarmaroIsland_House2_EventScript_FossilReviveMan_90:
# 486 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 488 "data/maps/MarmaroIsland_House2/scripts.pory"
	clearflag FLAG_FORCE_SHINY
MarmaroIsland_House2_EventScript_FossilReviveMan_1:
# 492 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_FossilReviveMan_2:
# 44 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 45 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_2
# 46 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 47 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_FossilReviveMan_6:
# 64 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_OMANYTE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_7:
# 68 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_KABUTO
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_8:
# 72 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_AERODACTYL
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_9:
# 76 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_LILEEP
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_10:
# 80 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_ANORITH
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_11:
# 84 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_CRANIDOS
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_12:
# 88 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_SHIELDON
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_13:
# 92 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_TIRTOUGA
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_14:
# 96 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_ARCHEN
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_15:
# 100 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_TYRUNT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_16:
# 104 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_AMAURA
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_17:
# 109 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_DRACOZOLT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_37:
# 119 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 120 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_4
# 121 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 122 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_FossilReviveMan_38:
# 135 "data/maps/MarmaroIsland_House2/scripts.pory"
	copyvar VAR_TEMP_B, VAR_ITEM_ID
# 137 "data/maps/MarmaroIsland_House2/scripts.pory"
	bufferitemname STR_VAR_1, VAR_ITEM_ID
# 138 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 139 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_5
# 140 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 143 "data/maps/MarmaroIsland_House2/scripts.pory"
	chooseitem ITEMS_POCKET
# 144 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 146 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_ITEM_ID
# 148 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 176, MarmaroIsland_House2_EventScript_FossilReviveMan_44
# 162 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 177, MarmaroIsland_House2_EventScript_FossilReviveMan_45
# 176 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 178, MarmaroIsland_House2_EventScript_FossilReviveMan_46
# 190 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 179, MarmaroIsland_House2_EventScript_FossilReviveMan_47
# 205 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 0
MarmaroIsland_House2_EventScript_FossilReviveMan_42:
# 208 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, 0
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_53
# 219 "data/maps/MarmaroIsland_House2/scripts.pory"
	showmoneybox 0, 0
# 221 "data/maps/MarmaroIsland_House2/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_WHICH_FOSSIL_REVIVED
# 222 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 223 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_7, MSGBOX_YESNO
# 224 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 225 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 228 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_87
# 239 "data/maps/MarmaroIsland_House2/scripts.pory"
	checkmoney 2000
# 240 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_116
# 251 "data/maps/MarmaroIsland_House2/scripts.pory"
	removeitem VAR_TEMP_B
# 252 "data/maps/MarmaroIsland_House2/scripts.pory"
	removeitem VAR_ITEM_ID
# 253 "data/maps/MarmaroIsland_House2/scripts.pory"
	removemoney 2000
# 254 "data/maps/MarmaroIsland_House2/scripts.pory"
	updatemoneybox
# 255 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 10
# 256 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 257 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_10
# 258 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 259 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 263 "data/maps/MarmaroIsland_House2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 264 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 60
# 265 "data/maps/MarmaroIsland_House2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 266 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 20
# 268 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 269 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_11
# 270 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 271 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 274 "data/maps/MarmaroIsland_House2/scripts.pory"
	randompercentage 1
# 275 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_114
MarmaroIsland_House2_EventScript_FossilReviveMan_113:
# 281 "data/maps/MarmaroIsland_House2/scripts.pory"
	random 3
# 282 "data/maps/MarmaroIsland_House2/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 283 "data/maps/MarmaroIsland_House2/scripts.pory"
	random 2
# 284 "data/maps/MarmaroIsland_House2/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 286 "data/maps/MarmaroIsland_House2/scripts.pory"
	random 3
# 289 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_DRACOZOLT
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_164
# 297 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_ARCTOZOLT
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_165
# 305 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_DRACOVISH
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_166
# 313 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_ARCTOVISH
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_167
MarmaroIsland_House2_EventScript_FossilReviveMan_163:
# 321 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 323 "data/maps/MarmaroIsland_House2/scripts.pory"
	clearflag FLAG_FORCE_SHINY
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_1

MarmaroIsland_House2_EventScript_FossilReviveMan_44:
# 149 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_TEMP_B, 178
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_57
# 153 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_TEMP_B, 179
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_58
# 159 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 0
MarmaroIsland_House2_EventScript_FossilReviveMan_56:
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_45:
# 163 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_TEMP_B, 178
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_63
# 167 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_TEMP_B, 179
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_64
# 173 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 0
MarmaroIsland_House2_EventScript_FossilReviveMan_62:
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_46:
# 177 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_TEMP_B, 176
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_69
# 181 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_TEMP_B, 177
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_70
# 187 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 0
MarmaroIsland_House2_EventScript_FossilReviveMan_68:
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_47:
# 191 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_TEMP_B, 176
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_75
# 195 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_TEMP_B, 177
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_76
# 201 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 0
MarmaroIsland_House2_EventScript_FossilReviveMan_74:
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_50:
# 340 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 341 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 342 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_8
# 343 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 344 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_FossilReviveMan_53:
# 210 "data/maps/MarmaroIsland_House2/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_B
# 211 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 212 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_6
# 213 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 214 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_FossilReviveMan_57:
# 151 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_DRACOZOLT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_56

MarmaroIsland_House2_EventScript_FossilReviveMan_58:
# 155 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_ARCTOZOLT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_56

MarmaroIsland_House2_EventScript_FossilReviveMan_63:
# 165 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_DRACOVISH
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_62

MarmaroIsland_House2_EventScript_FossilReviveMan_64:
# 169 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_ARCTOVISH
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_62

MarmaroIsland_House2_EventScript_FossilReviveMan_69:
# 179 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_DRACOZOLT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_68

MarmaroIsland_House2_EventScript_FossilReviveMan_70:
# 183 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_DRACOVISH
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_68

MarmaroIsland_House2_EventScript_FossilReviveMan_75:
# 193 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_ARCTOZOLT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_74

MarmaroIsland_House2_EventScript_FossilReviveMan_76:
# 197 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_ARCTOVISH
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_74

MarmaroIsland_House2_EventScript_FossilReviveMan_81:
# 386 "data/maps/MarmaroIsland_House2/scripts.pory"
	setflag FLAG_FORCE_SHINY
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_80

MarmaroIsland_House2_EventScript_FossilReviveMan_83:
# 352 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 353 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 354 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_9
# 355 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 356 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_FossilReviveMan_87:
# 230 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 231 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 232 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_8
# 233 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 234 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_FossilReviveMan_91:
# 400 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 401 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_120
# 402 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_121
# 403 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_122
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_92:
# 408 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 409 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_124
# 410 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_125
# 411 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_126
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_93:
# 416 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 417 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_128
# 418 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_129
# 419 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_130
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_94:
# 424 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 425 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_132
# 426 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_133
# 427 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_134
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_95:
# 432 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 433 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_136
# 434 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_137
# 435 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_138
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_96:
# 440 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 441 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_140
# 442 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_141
# 443 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_142
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_97:
# 448 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 449 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_144
# 450 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_145
# 451 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_146
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_98:
# 456 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 457 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_148
# 458 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_149
# 459 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_150
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_99:
# 464 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 465 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_152
# 466 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_153
# 467 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_154
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_100:
# 472 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 473 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_156
# 474 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_157
# 475 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_158
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_101:
# 480 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 481 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_160
# 482 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_161
# 483 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_162
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_114:
# 277 "data/maps/MarmaroIsland_House2/scripts.pory"
	setflag FLAG_FORCE_SHINY
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_113

MarmaroIsland_House2_EventScript_FossilReviveMan_116:
# 242 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 243 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 244 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_9
# 245 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 246 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_FossilReviveMan_120:
# 401 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_OMANYTE, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_CONSTRICT, MOVE_WITHDRAW, MOVE_BITE, MOVE_WATER_GUN
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_121:
# 402 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_OMANYTE, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_WITHDRAW, MOVE_BITE, MOVE_WATER_GUN
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_122:
# 403 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_OMANYTE, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_CONSTRICT, MOVE_IRON_DEFENSE, MOVE_BITE, MOVE_WATER_GUN
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_124:
# 409 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_KABUTO, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SCRATCH, MOVE_HARDEN, MOVE_ABSORB, MOVE_LEER
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_125:
# 410 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_KABUTO, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SCRATCH, MOVE_HARDEN, MOVE_ABSORB, MOVE_METAL_CLAW
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_126:
# 411 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_KABUTO, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SCRATCH, MOVE_HARDEN, MOVE_ABSORB, MOVE_ANCHOR_SHOT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_128:
# 417 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_AERODACTYL, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_WING_ATTACK, MOVE_SUPERSONIC, MOVE_BITE, MOVE_SCARY_FACE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_129:
# 418 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_AERODACTYL, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_WING_ATTACK, MOVE_SUPERSONIC, MOVE_BITE, MOVE_SUPER_FANG
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_130:
# 419 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_AERODACTYL, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_WING_ATTACK, MOVE_SUPERSONIC, MOVE_BITE, MOVE_METEOR_MASH
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_132:
# 425 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_LILEEP, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ASTONISH, MOVE_CONSTRICT, MOVE_ACID, MOVE_INGRAIN
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_133:
# 426 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_LILEEP, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ASTONISH, MOVE_SCALD, MOVE_ACID, MOVE_INGRAIN
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_134:
# 427 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_LILEEP, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ASTONISH, MOVE_SYNTHESIS, MOVE_ACID, MOVE_INGRAIN
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_136:
# 433 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ANORITH, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SCRATCH, MOVE_HARDEN, MOVE_MUD_SPORT, MOVE_BUBBLE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_137:
# 434 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ANORITH, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SCRATCH, MOVE_SPIKY_SHIELD, MOVE_MUD_SPORT, MOVE_BUBBLE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_138:
# 435 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ANORITH, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SCRATCH, MOVE_SHORE_UP, MOVE_MUD_SPORT, MOVE_BUBBLE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_140:
# 441 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_CRANIDOS, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_HEADBUTT, MOVE_LEER, MOVE_FOCUS_ENERGY, MOVE_PURSUIT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_141:
# 442 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_CRANIDOS, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_HEADBUTT, MOVE_SEISMIC_TOSS, MOVE_FOCUS_ENERGY, MOVE_PURSUIT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_142:
# 443 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_CRANIDOS, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_HEADBUTT, MOVE_GLARE, MOVE_FOCUS_ENERGY, MOVE_PURSUIT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_144:
# 449 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_SHIELDON, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_PROTECT, MOVE_TAUNT, MOVE_METAL_SOUND
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_145:
# 450 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_SHIELDON, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_PROTECT, MOVE_PSYSHIELD_BASH, MOVE_METAL_SOUND
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_146:
# 451 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_SHIELDON, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_PROTECT, MOVE_AVALANCHE, MOVE_METAL_SOUND
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_148:
# 457 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_TIRTOUGA, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BITE, MOVE_WITHDRAW, MOVE_WATER_GUN, MOVE_ROLLOUT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_149:
# 458 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_TIRTOUGA, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BITE, MOVE_ICE_FANG, MOVE_WATER_GUN, MOVE_ROLLOUT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_150:
# 459 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_TIRTOUGA, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BITE, MOVE_SHORE_UP, MOVE_WATER_GUN, MOVE_ROLLOUT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_152:
# 465 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ARCHEN, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_QUICK_ATTACK, MOVE_DOUBLE_TEAM, MOVE_WING_ATTACK, MOVE_ROCK_THROW
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_153:
# 466 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ARCHEN, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_QUICK_ATTACK, MOVE_BONEMERANG, MOVE_WING_ATTACK, MOVE_ROCK_THROW
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_154:
# 467 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ARCHEN, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_QUICK_ATTACK, MOVE_JUMP_KICK, MOVE_WING_ATTACK, MOVE_ROCK_THROW
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_156:
# 473 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_TYRUNT, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_ROAR, MOVE_STOMP
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_157:
# 474 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_TYRUNT, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_ICE_FANG, MOVE_ROAR, MOVE_STOMP
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_158:
# 475 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_TYRUNT, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_PLAY_ROUGH, MOVE_ROAR, MOVE_STOMP
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_160:
# 481 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_AMAURA, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POWDER_SNOW, MOVE_GROWL, MOVE_THUNDER_WAVE, MOVE_ROCK_THROW
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_161:
# 482 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_AMAURA, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POWDER_SNOW, MOVE_DAZZLING_GLEAM, MOVE_THUNDER_WAVE, MOVE_ROCK_THROW
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_162:
# 483 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_AMAURA, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POWDER_SNOW, MOVE_CHILLING_WATER, MOVE_THUNDER_WAVE, MOVE_ROCK_THROW
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_90

MarmaroIsland_House2_EventScript_FossilReviveMan_164:
# 291 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 292 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_173
# 293 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_174
# 294 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_175
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_165:
# 299 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 300 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_177
# 301 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_178
# 302 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_179
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_166:
# 307 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 308 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_181
# 309 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_182
# 310 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_183
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_167:
# 315 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 316 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_185
# 317 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_186
# 318 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_187
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_173:
# 292 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_DRACOZOLT, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_THUNDER_SHOCK, MOVE_CHARGE, MOVE_AERIAL_ACE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_174:
# 293 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_DRACOZOLT, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_QUICK_ATTACK, MOVE_THUNDER_SHOCK, MOVE_CHARGE, MOVE_AERIAL_ACE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_175:
# 294 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_DRACOZOLT, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_SHOCK_WAVE, MOVE_CHARGE, MOVE_AERIAL_ACE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_177:
# 300 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ARCTOZOLT, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POWDER_SNOW, MOVE_THUNDER_SHOCK, MOVE_CHARGE, MOVE_ECHOED_VOICE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_178:
# 301 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ARCTOZOLT, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ICE_SHARD, MOVE_THUNDER_SHOCK, MOVE_CHARGE, MOVE_ECHOED_VOICE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_179:
# 302 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ARCTOZOLT, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POWDER_SNOW, MOVE_SHOCK_WAVE, MOVE_CHARGE, MOVE_ECHOED_VOICE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_181:
# 308 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_DRACOVISH, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_WATER_GUN, MOVE_PROTECT, MOVE_BRUTAL_SWING
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_182:
# 309 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_DRACOVISH, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_LOW_KICK, MOVE_WATER_GUN, MOVE_PROTECT, MOVE_BRUTAL_SWING
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_183:
# 310 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_DRACOVISH, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_WATER_GUN, MOVE_SCARY_FACE, MOVE_BRUTAL_SWING
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_185:
# 316 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ARCTOVISH, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POWDER_SNOW, MOVE_WATER_GUN, MOVE_PROTECT, MOVE_ICY_WIND
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_186:
# 317 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ARCTOVISH, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POWDER_SNOW, MOVE_CLAMP, MOVE_PROTECT, MOVE_ICY_WIND
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163

MarmaroIsland_House2_EventScript_FossilReviveMan_187:
# 318 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ARCTOVISH, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POWDER_SNOW, MOVE_WATER_GUN, MOVE_SCARY_FACE, MOVE_ICY_WIND
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_163


MarmaroIsland_House2_EventScript_OddKeystoneWoman::
# 498 "data/maps/MarmaroIsland_House2/scripts.pory"
	lock
# 499 "data/maps/MarmaroIsland_House2/scripts.pory"
	faceplayer
# 500 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 501 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_1, MSGBOX_YESNO
# 502 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 503 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MarmaroIsland_House2_EventScript_OddKeystoneWoman_2
# 513 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 514 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_3
# 515 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 516 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 519 "data/maps/MarmaroIsland_House2/scripts.pory"
	chooseitem ITEMS_POCKET
# 520 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 523 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_ODD_KEYSTONE
	goto_if_eq MarmaroIsland_House2_EventScript_OddKeystoneWoman_6
# 529 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 0
MarmaroIsland_House2_EventScript_OddKeystoneWoman_5:
# 533 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, 0
	goto_if_eq MarmaroIsland_House2_EventScript_OddKeystoneWoman_9
# 544 "data/maps/MarmaroIsland_House2/scripts.pory"
	showmoneybox 0, 0
# 546 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 547 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_5, MSGBOX_YESNO
# 548 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 549 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 551 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MarmaroIsland_House2_EventScript_OddKeystoneWoman_13
# 562 "data/maps/MarmaroIsland_House2/scripts.pory"
	checkmoney 2000
# 563 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MarmaroIsland_House2_EventScript_OddKeystoneWoman_19
# 574 "data/maps/MarmaroIsland_House2/scripts.pory"
	removeitem VAR_ITEM_ID
# 575 "data/maps/MarmaroIsland_House2/scripts.pory"
	removemoney 2000
# 576 "data/maps/MarmaroIsland_House2/scripts.pory"
	updatemoneybox
# 577 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 10
# 578 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 579 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_8
# 580 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 581 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 585 "data/maps/MarmaroIsland_House2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 586 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 60
# 587 "data/maps/MarmaroIsland_House2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 588 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 20
# 590 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 591 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_9
# 592 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 593 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 596 "data/maps/MarmaroIsland_House2/scripts.pory"
	randompercentage 1
# 597 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MarmaroIsland_House2_EventScript_OddKeystoneWoman_17
MarmaroIsland_House2_EventScript_OddKeystoneWoman_16:
# 602 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon VAR_WHICH_FOSSIL_REVIVED, 20
# 603 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 605 "data/maps/MarmaroIsland_House2/scripts.pory"
	clearflag FLAG_FORCE_SHINY
# 609 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_OddKeystoneWoman_2:
# 505 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 506 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_2
# 507 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 508 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_OddKeystoneWoman_6:
# 525 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_SPIRITOMB
	goto MarmaroIsland_House2_EventScript_OddKeystoneWoman_5

MarmaroIsland_House2_EventScript_OddKeystoneWoman_9:
# 535 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 536 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_4
# 537 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 538 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_OddKeystoneWoman_13:
# 553 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 554 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 555 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_6
# 556 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 557 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_OddKeystoneWoman_17:
# 599 "data/maps/MarmaroIsland_House2/scripts.pory"
	setflag FLAG_FORCE_SHINY
	goto MarmaroIsland_House2_EventScript_OddKeystoneWoman_16

MarmaroIsland_House2_EventScript_OddKeystoneWoman_19:
# 565 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 566 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 567 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_7
# 568 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 569 "data/maps/MarmaroIsland_House2/scripts.pory"
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

MarmaroIsland_House2_EventScript_Girl_Text_2:
# 13 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "I found this weird black stone by the\n"
	.string "Mine, but Dad told me it wasn't a fossil.\l"
	.string "Do you want it?$"

MarmaroIsland_House2_EventScript_Boy_Text_0:
# 28 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Boy$"

MarmaroIsland_House2_EventScript_Boy_Text_1:
# 29 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Pokémon everyone thought were extinct\n"
	.string "have been showing up a lot around here!\l"
	.string "Maybe it's because of all the fossils in\l"
	.string "the stone?$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0:
# 39 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Paleontologist$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_1:
# 40 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Chaire! If you've spent time in the\n"
	.string "Mines, there's a good chance you've\l"
	.string "found a {COLOR GREEN}Pokémon Fossil{COLOR DARK_GRAY}.\p"
	.string "Through my experiments, I've found a\n"
	.string "way to {COLOR GREEN}restore Pokémon from Fossils{COLOR DARK_GRAY}\l"
	.string "back to life! Are you interested?$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_2:
# 45 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Still looking for Fossils? If you find\n"
	.string "any, bring them to me!$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_3:
# 53 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Great! Go ahead and choose the Fossil\n"
	.string "you want me to restore.$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_4:
# 120 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Hmm... I hate to break it to you, but\n"
	.string "that just isn't a Fossil.\p"
	.string "Bring me a Pokémon Fossil, and I'll be\n"
	.string "able to restore it for you.$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_5:
# 139 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Hmm... this seems to be an incomplete\n"
	.string "{STR_VAR_1}. I've read studies from\l"
	.string "the Galar Region on how to assemble\l"
	.string "these with other fossil fragments.\p"
	.string "Do you happen to have any {COLOR GREEN}Fossilized\n"
	.string "Parts{COLOR DARK_GRAY}?$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_6:
# 212 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Well, I'm not seeing any compatibility,\n"
	.string "and I can't revive this {STR_VAR_1}\l"
	.string "by itself.\p"
	.string "Bring me back a working combination of\n"
	.string "Fossilized Parts, or separate, complete\l"
	.string "Fossils.$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_7:
# 223 "data/maps/MarmaroIsland_House2/scripts.pory"
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
# 232 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "No? Well, come on back with other\n"
	.string "Fossils anytime.$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_9:
# 244 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Hmm... It doesn't look like you've got\n"
	.string "the funds right now. Come back with a\l"
	.string "Fossil and ¥2000, and I'll restore it for\l"
	.string "you!$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_10:
# 257 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Alright, thanks! I'll just take those\n"
	.string "Fossilized Parts from you, then we'll\l"
	.string "get started!$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_11:
# 269 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Thanks for waiting. It was a complete\n"
	.string "success! Meet your new Pokémon!$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_12:
# 334 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Ah, this is certainly a {STR_VAR_1}!\n"
	.string "From my research, I believe a Pokémon\l"
	.string "known as {STR_VAR_2} will be\l"
	.string "restored from this.\p"
	.string "This process will be pretty\n"
	.string "resource-intensive. Including labor\l"
	.string "and time, it should cost around ¥2000.\l"
	.string "Are you interested?$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_13:
# 366 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Alright, thanks! I'll just take that\n"
	.string "Fossil from you, then we'll get started!$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_14:
# 378 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Thanks for waiting. It was a complete\n"
	.string "success! The {STR_VAR_2} has\l"
	.string "imprinted on you, so it is ready to\l"
	.string "follow you wherever you go. Meet your\l"
	.string "new {STR_VAR_2}!$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0:
# 500 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Spiritual Woman$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_1:
# 501 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Hello... by chance, have you found an\n"
	.string "{COLOR GREEN}Odd Keystone{COLOR DARK_GRAY} in the Mines?\p"
	.string "In my studies of the occult, I've found\n"
	.string "that a Pokémon called {COLOR GREEN}Spiritomb{COLOR DARK_GRAY} may\l"
	.string "live inside them, as they were once used\l"
	.string "in burial traditions of ancient Ilios.\l"
	.string "Have you found an Odd Keystone?$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_2:
# 506 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "No, I suppose most people wouldn't have\n"
	.string "one, as they are exceedingly rare.\l"
	.string "According to legend, over 100 souls are\l"
	.string "contained in each Odd Keystone, found\l"
	.string "near burial sites or ancient\l"
	.string "battlefields.\p"
	.string "If you happen to find an Odd Keystone,\n"
	.string "please let me know.$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_3:
# 514 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Really? What incredible luck. Please,\n"
	.string "show me...$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_4:
# 536 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Oh, my sweet summer child, this is not an\n"
	.string "Odd Keystone at all.$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_5:
# 547 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Yes, I can feel the spirits swirling\n"
	.string "inside... this is most certainly an Odd\l"
	.string "Keystone!\p"
	.string "Awakening Spiritomb from the Odd\n"
	.string "Keystone is very spiritually intensive.\l"
	.string "Including labor and time, it should cost\l"
	.string "around ¥2000. Shall we begin?$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_6:
# 555 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "No? Hm. Well please, come back with the\n"
	.string "Odd Keystone when you can.$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_7:
# 567 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Hmm... I'm sorry, but you're lacking the\n"
	.string "funds right now. Come back with an Odd\l"
	.string "Keystone and ¥2000, and I'll awaken the\l"
	.string "Spiritomb inside.$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_8:
# 579 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Okay, I'll place the Odd Keystone in the\n"
	.string "center of my crystal circle, and we\l"
	.string "shall begin the ritual. Please, wait\l"
	.string "there.$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_9:
# 591 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "The spirits have been stirred by your\n"
	.string "energy, and Spiritomb has awakened.\l"
	.string "Take it, and treat it with respect.$"

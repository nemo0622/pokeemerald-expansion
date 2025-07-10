KalamiCity_MapScripts::
# 2 "data/maps/KalamiCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KalamiCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

KalamiCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/KalamiCity/scripts.pory"
	setflag FLAG_VISITED_KALAMI_CITY
# 5 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 6 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 7 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 8 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 9 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 10 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 11 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 12 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 13 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 14 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 15 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 16 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 17 "data/maps/KalamiCity/scripts.pory"
	setobjectaswildencounter 23, ENCOUNTER_LAND
# 18 "data/maps/KalamiCity/scripts.pory"
	setobjectaswildencounter 24, ENCOUNTER_LAND
# 19 "data/maps/KalamiCity/scripts.pory"
	setobjectaswildencounter 25, ENCOUNTER_SURF
# 20 "data/maps/KalamiCity/scripts.pory"
	setobjectaswildencounter 26, ENCOUNTER_LAND
# 21 "data/maps/KalamiCity/scripts.pory"
	setobjectaswildencounter 27, ENCOUNTER_SURF
	return


KalamiCity_EventScript_Piraeus::
# 29 "data/maps/KalamiCity/scripts.pory"
	goto_if_unset FLAG_HELPED_PIRAEUS_PYTHIOS_TOWN, KalamiCity_EventScript_Piraeus_2
# 43 "data/maps/KalamiCity/scripts.pory"
	goto Common_EventScript_Piraeus
# 45 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_Piraeus_2:
# 31 "data/maps/KalamiCity/scripts.pory"
	lock
# 32 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Piraeus_Text_0
# 33 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Piraeus_Text_1
# 34 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 35 "data/maps/KalamiCity/scripts.pory"
	delay 30
# 36 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Piraeus_Text_2
# 37 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 38 "data/maps/KalamiCity/scripts.pory"
	release
	end


Common_EventScript_Piraeus::
# 51 "data/maps/KalamiCity/scripts.pory"
	lock
# 52 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 53 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 54 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_1
# 57 "data/maps/KalamiCity/scripts.pory"
	dynmultipush Common_EventScript_Piraeus_Text_2, 0
# 58 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_KALAMI_CITY, Common_EventScript_Piraeus_2
Common_EventScript_Piraeus_1:
# 61 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_PYTHIOS_TOWN, Common_EventScript_Piraeus_5
Common_EventScript_Piraeus_4:
# 64 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_SOFOS_CITY, Common_EventScript_Piraeus_8
Common_EventScript_Piraeus_7:
# 67 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_KIPOS_TOWN, Common_EventScript_Piraeus_11
Common_EventScript_Piraeus_10:
# 70 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_MARMARO_ISLAND, Common_EventScript_Piraeus_14
Common_EventScript_Piraeus_13:
# 73 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_MYRRINI_ISLAND, Common_EventScript_Piraeus_17
Common_EventScript_Piraeus_16:
# 76 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_PENTEPETAL_CITY, Common_EventScript_Piraeus_20
Common_EventScript_Piraeus_19:
# 79 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_FRESCO_ISLAND, Common_EventScript_Piraeus_23
Common_EventScript_Piraeus_22:
# 82 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_PALATI_CITY, Common_EventScript_Piraeus_26
Common_EventScript_Piraeus_25:
# 85 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_PORT_PELLO, Common_EventScript_Piraeus_29
Common_EventScript_Piraeus_28:
# 88 "data/maps/KalamiCity/scripts.pory"
	dynmultistack 100, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 91 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Piraeus_32
# 110 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Piraeus_39
# 119 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Common_EventScript_Piraeus_40
# 128 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Common_EventScript_Piraeus_41
# 137 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Common_EventScript_Piraeus_42
# 146 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Common_EventScript_Piraeus_43
# 155 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Common_EventScript_Piraeus_44
# 164 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq Common_EventScript_Piraeus_45
# 173 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq Common_EventScript_Piraeus_46
# 182 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq Common_EventScript_Piraeus_47
# 191 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq Common_EventScript_Piraeus_48
Common_EventScript_Piraeus_31:
# 201 "data/maps/KalamiCity/scripts.pory"
	release
	end

Common_EventScript_Piraeus_2:
# 59 "data/maps/KalamiCity/scripts.pory"
	dynmultipush Common_EventScript_Piraeus_Text_3, 1
	goto Common_EventScript_Piraeus_1

Common_EventScript_Piraeus_5:
# 62 "data/maps/KalamiCity/scripts.pory"
	dynmultipush Common_EventScript_Piraeus_Text_4, 2
	goto Common_EventScript_Piraeus_4

Common_EventScript_Piraeus_8:
# 65 "data/maps/KalamiCity/scripts.pory"
	dynmultipush Common_EventScript_Piraeus_Text_5, 3
	goto Common_EventScript_Piraeus_7

Common_EventScript_Piraeus_11:
# 68 "data/maps/KalamiCity/scripts.pory"
	dynmultipush Common_EventScript_Piraeus_Text_6, 4
	goto Common_EventScript_Piraeus_10

Common_EventScript_Piraeus_14:
# 71 "data/maps/KalamiCity/scripts.pory"
	dynmultipush Common_EventScript_Piraeus_Text_7, 5
	goto Common_EventScript_Piraeus_13

Common_EventScript_Piraeus_17:
# 74 "data/maps/KalamiCity/scripts.pory"
	dynmultipush Common_EventScript_Piraeus_Text_8, 6
	goto Common_EventScript_Piraeus_16

Common_EventScript_Piraeus_20:
# 77 "data/maps/KalamiCity/scripts.pory"
	dynmultipush Common_EventScript_Piraeus_Text_9, 7
	goto Common_EventScript_Piraeus_19

Common_EventScript_Piraeus_23:
# 80 "data/maps/KalamiCity/scripts.pory"
	dynmultipush Common_EventScript_Piraeus_Text_10, 8
	goto Common_EventScript_Piraeus_22

Common_EventScript_Piraeus_26:
# 83 "data/maps/KalamiCity/scripts.pory"
	dynmultipush Common_EventScript_Piraeus_Text_11, 9
	goto Common_EventScript_Piraeus_25

Common_EventScript_Piraeus_29:
# 86 "data/maps/KalamiCity/scripts.pory"
	dynmultipush Common_EventScript_Piraeus_Text_12, 10
	goto Common_EventScript_Piraeus_28

Common_EventScript_Piraeus_32:
# 93 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 0
# 94 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 95 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Common_EventScript_Piraeus_36
# 102 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_14
# 103 "data/maps/KalamiCity/scripts.pory"
	closemessage
Common_EventScript_Piraeus_35:
# 105 "data/maps/KalamiCity/scripts.pory"
	release
	end

Common_EventScript_Piraeus_36:
# 97 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_13
# 98 "data/maps/KalamiCity/scripts.pory"
	closemessage
	goto Common_EventScript_Piraeus_35

Common_EventScript_Piraeus_39:
# 112 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 1
# 113 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 114 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_15
# 115 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 116 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 117 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_31

Common_EventScript_Piraeus_40:
# 121 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 2
# 122 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 123 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_16
# 124 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 125 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 126 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_31

Common_EventScript_Piraeus_41:
# 130 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 3
# 131 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 132 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_17
# 133 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 134 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 135 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_31

Common_EventScript_Piraeus_42:
# 139 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 4
# 140 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 141 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_18
# 142 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 143 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 144 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_31

Common_EventScript_Piraeus_43:
# 148 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 5
# 149 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 150 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_19
# 151 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 152 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 153 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_31

Common_EventScript_Piraeus_44:
# 157 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 6
# 158 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 159 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_20
# 160 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 161 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 162 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_31

Common_EventScript_Piraeus_45:
# 166 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 7
# 167 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 168 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_21
# 169 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 170 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 171 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_31

Common_EventScript_Piraeus_46:
# 175 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 8
# 176 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 177 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_22
# 178 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 179 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 180 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_31

Common_EventScript_Piraeus_47:
# 184 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 9
# 185 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 186 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_23
# 187 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 188 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 189 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_31

Common_EventScript_Piraeus_48:
# 193 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 10
# 194 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 195 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_24
# 196 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 197 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 198 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_31


KalamiCity_EventScript_DirectionSign::
# 210 "data/maps/KalamiCity/scripts.pory"
	lock
# 211 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_DirectionSign_Text_0
# 212 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 213 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_UniversityStudentRouteCheck::
# 219 "data/maps/KalamiCity/scripts.pory"
	lock
# 220 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 221 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_UniversityStudentRouteCheck_Text_0
# 223 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_KALAMI_CITY, KalamiCity_EventScript_UniversityStudentRouteCheck_2
# 230 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_UniversityStudentRouteCheck_Text_2
# 231 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 232 "data/maps/KalamiCity/scripts.pory"
	special CheckRouteCaptureProgress
# 233 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq KalamiCity_EventScript_UniversityStudentRouteCheck_5
KalamiCity_EventScript_UniversityStudentRouteCheck_1:
# 260 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_UniversityStudentRouteCheck_2:
# 225 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_UniversityStudentRouteCheck_Text_1
# 226 "data/maps/KalamiCity/scripts.pory"
	closemessage
	goto KalamiCity_EventScript_UniversityStudentRouteCheck_1

KalamiCity_EventScript_UniversityStudentRouteCheck_5:
# 235 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 236 "data/maps/KalamiCity/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 237 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_UniversityStudentRouteCheck_Text_0
# 238 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_UniversityStudentRouteCheck_Text_3
# 239 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 240 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 243 "data/maps/KalamiCity/scripts.pory"
	giveitem ITEM_TM_WHIRLPOOL
# 244 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 245 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 247 "data/maps/KalamiCity/scripts.pory"
	checkoutfitflag OUTFIT_EAST_BLUE
# 248 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KalamiCity_EventScript_UniversityStudentRouteCheck_8
KalamiCity_EventScript_UniversityStudentRouteCheck_7:
# 256 "data/maps/KalamiCity/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_KALAMI_CITY
	goto KalamiCity_EventScript_UniversityStudentRouteCheck_1

KalamiCity_EventScript_UniversityStudentRouteCheck_8:
# 250 "data/maps/KalamiCity/scripts.pory"
	unlockoutfit OUTFIT_EAST_BLUE
# 251 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_UniversityStudentRouteCheck_Text_4
# 252 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 253 "data/maps/KalamiCity/scripts.pory"
	closemessage
	goto KalamiCity_EventScript_UniversityStudentRouteCheck_7


KalamiCity_Sign_GymSign::
# 266 "data/maps/KalamiCity/scripts.pory"
	lock
# 267 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_Sign_GymSign_Text_0
# 268 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 269 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Camper::
# 275 "data/maps/KalamiCity/scripts.pory"
	lock
# 276 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 277 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Camper_Text_0
# 278 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Camper_Text_1
# 279 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 280 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Artist::
# 286 "data/maps/KalamiCity/scripts.pory"
	lock
# 287 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 288 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 291 "data/maps/KalamiCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_KALAMI_HEART_SCALE
# 292 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KalamiCity_EventScript_Artist_2
# 301 "data/maps/KalamiCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_KALAMI_HEART_SCALE
# 302 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KalamiCity_EventScript_Artist_4
# 312 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_3
# 313 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 315 "data/maps/KalamiCity/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 316 "data/maps/KalamiCity/scripts.pory"
	delay 30
# 318 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KalamiCity_EventScript_Artist_7
# 326 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 327 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_5
# 328 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 329 "data/maps/KalamiCity/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 330 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 331 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 332 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_6
# 333 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 335 "data/maps/KalamiCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 336 "data/maps/KalamiCity/scripts.pory"
	delay 60
# 337 "data/maps/KalamiCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 338 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 340 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 341 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_7
# 342 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 343 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 344 "data/maps/KalamiCity/scripts.pory"
	adddecoration DECOR_OPAL_FISH_POSTER
# 345 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_8
# 346 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 347 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 348 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 349 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 350 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_9
# 351 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 353 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 354 "data/maps/KalamiCity/scripts.pory"
	completequest QUEST_KALAMI_HEART_SCALE
	return

KalamiCity_EventScript_Artist_2:
# 294 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_1
# 295 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 296 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_Artist_4:
# 304 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_2
# 305 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 307 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 308 "data/maps/KalamiCity/scripts.pory"
	startquest QUEST_KALAMI_HEART_SCALE
	return

KalamiCity_EventScript_Artist_7:
# 320 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 321 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_4
# 322 "data/maps/KalamiCity/scripts.pory"
	closemessage
	return


KalamiCity_EventScript_Sailor::
# 361 "data/maps/KalamiCity/scripts.pory"
	lock
# 362 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 363 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Sailor_Text_0
# 364 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Sailor_Text_1
# 365 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 366 "data/maps/KalamiCity/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 367 "data/maps/KalamiCity/scripts.pory"
	waitmovement 0
# 368 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Sailor2::
# 374 "data/maps/KalamiCity/scripts.pory"
	lock
# 375 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 376 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Sailor_Text_0
# 377 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Sailor2_Text_0
# 378 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 379 "data/maps/KalamiCity/scripts.pory"
	goto_if_unset FLAG_GOT_ABILITY_CAPSULE_KALAMI_CITY, KalamiCity_EventScript_Sailor2_2
KalamiCity_EventScript_Sailor2_1:
# 387 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_Sailor2_2:
# 381 "data/maps/KalamiCity/scripts.pory"
	setflag FLAG_GOT_ABILITY_CAPSULE_KALAMI_CITY
# 382 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Sailor_Text_0
# 383 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Sailor2_Text_1
# 384 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 385 "data/maps/KalamiCity/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
	goto KalamiCity_EventScript_Sailor2_1


KalamiCity_EventScript_Fisherman::
# 393 "data/maps/KalamiCity/scripts.pory"
	lock
# 394 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 395 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Fisherman_Text_0
# 396 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Fisherman_Text_1
# 397 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 398 "data/maps/KalamiCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OLD_ROD, KalamiCity_EventScript_Fisherman_2
KalamiCity_EventScript_Fisherman_1:
# 409 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_Fisherman_2:
# 400 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Fisherman_Text_0
# 401 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Fisherman_Text_2
# 402 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 403 "data/maps/KalamiCity/scripts.pory"
	giveitem ITEM_OLD_ROD
# 404 "data/maps/KalamiCity/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 405 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Fisherman_Text_0
# 406 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Fisherman_Text_3
# 407 "data/maps/KalamiCity/scripts.pory"
	closemessage
	goto KalamiCity_EventScript_Fisherman_1


KalamiCity_EventScript_Bounsweet::
# 415 "data/maps/KalamiCity/scripts.pory"
	lock
# 416 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 417 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Bounsweet_Text_0
# 418 "data/maps/KalamiCity/scripts.pory"
	playmoncry SPECIES_BOUNSWEET, CRY_MODE_NORMAL
# 419 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Bounsweet_Text_1
# 420 "data/maps/KalamiCity/scripts.pory"
	waitmoncry
# 421 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 422 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Aipom::
# 428 "data/maps/KalamiCity/scripts.pory"
	lock
# 429 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 430 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Aipom_Text_0
# 431 "data/maps/KalamiCity/scripts.pory"
	playmoncry SPECIES_AIPOM, CRY_MODE_NORMAL
# 432 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Aipom_Text_1
# 433 "data/maps/KalamiCity/scripts.pory"
	waitmoncry
# 434 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 435 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Lass::
# 441 "data/maps/KalamiCity/scripts.pory"
	lock
# 442 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 443 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Lass_Text_0
# 444 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Lass_Text_1
# 445 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 446 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_BugCatcher::
# 452 "data/maps/KalamiCity/scripts.pory"
	lock
# 453 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 454 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_BugCatcher_Text_0
# 455 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_BugCatcher_Text_1
# 456 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 457 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Beauty::
# 463 "data/maps/KalamiCity/scripts.pory"
	lock
# 464 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 465 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Beauty_Text_0
# 466 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Beauty_Text_1
# 467 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 468 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_WallWorker::
# 474 "data/maps/KalamiCity/scripts.pory"
	lock
# 475 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 476 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_WallWorker_Text_0
# 477 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_WallWorker_Text_1
# 478 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 479 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_PerformerM::
# 485 "data/maps/KalamiCity/scripts.pory"
	lock
# 486 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 487 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_PerformerM_Text_0
# 488 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_PerformerM_Text_1
# 489 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 490 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_BlackBelt::
# 496 "data/maps/KalamiCity/scripts.pory"
	lock
# 497 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 498 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_BlackBelt_Text_0
# 499 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_BlackBelt_Text_1
# 500 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 501 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Youngster::
# 507 "data/maps/KalamiCity/scripts.pory"
	lock
# 508 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 509 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Youngster_Text_0
# 510 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Youngster_Text_1
# 511 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 512 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Girl::
# 518 "data/maps/KalamiCity/scripts.pory"
	lock
# 519 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 520 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Girl_Text_0
# 521 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Girl_Text_1
# 522 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 523 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Athlete::
# 529 "data/maps/KalamiCity/scripts.pory"
	lock
# 530 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 531 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Athlete_Text_0
# 532 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Athlete_Text_1
# 533 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 534 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Amaura::
# 540 "data/maps/KalamiCity/scripts.pory"
	lock
# 541 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 542 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Amaura_Text_0
# 543 "data/maps/KalamiCity/scripts.pory"
	playmoncry SPECIES_AMAURA, CRY_MODE_NORMAL
# 544 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Amaura_Text_1
# 545 "data/maps/KalamiCity/scripts.pory"
	waitmoncry
# 546 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 547 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_EastBlueOutfitBeauty::
# 553 "data/maps/KalamiCity/scripts.pory"
	lock
# 554 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 555 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0
# 556 "data/maps/KalamiCity/scripts.pory"
	checkoutfitflag OUTFIT_EAST_BLUE
# 558 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KalamiCity_EventScript_EastBlueOutfitBeauty_2
# 608 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_6
# 609 "data/maps/KalamiCity/scripts.pory"
	closemessage
KalamiCity_EventScript_EastBlueOutfitBeauty_1:
# 611 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_EastBlueOutfitBeauty_2:
# 560 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_1
# 561 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 562 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 563 "data/maps/KalamiCity/scripts.pory"
	showmoneybox 0, 0
# 564 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0
# 565 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_2, MSGBOX_YESNO
# 566 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 567 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KalamiCity_EventScript_EastBlueOutfitBeauty_5
# 579 "data/maps/KalamiCity/scripts.pory"
	checkmoney 6000
# 580 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KalamiCity_EventScript_EastBlueOutfitBeauty_8
# 591 "data/maps/KalamiCity/scripts.pory"
	removemoney 6000
# 592 "data/maps/KalamiCity/scripts.pory"
	updatemoneybox
# 593 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 594 "data/maps/KalamiCity/scripts.pory"
	unlockoutfit OUTFIT_EAST_BLUE
# 595 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_UniversityStudentRouteCheck_Text_4
# 596 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 597 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 598 "data/maps/KalamiCity/scripts.pory"
	hidemoneybox
# 599 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 600 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0
# 601 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_5
# 602 "data/maps/KalamiCity/scripts.pory"
	closemessage
	goto KalamiCity_EventScript_EastBlueOutfitBeauty_1

KalamiCity_EventScript_EastBlueOutfitBeauty_5:
# 569 "data/maps/KalamiCity/scripts.pory"
	hidemoneybox
# 570 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0
# 571 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_3
# 572 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 573 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_EastBlueOutfitBeauty_8:
# 582 "data/maps/KalamiCity/scripts.pory"
	hidemoneybox
# 583 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0
# 584 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_4
# 585 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 586 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Piraeus_Text_0:
# 32 "data/maps/KalamiCity/scripts.pory"
	.string "Strange Sailor$"

KalamiCity_EventScript_Piraeus_Text_1:
# 33 "data/maps/KalamiCity/scripts.pory"
	.string "Grumble, grumble... darn thugs... no {COLOR GREEN}Team\n"
	.string "Chimera{COLOR DARK_GRAY} member is setting a hand on my\l"
	.string "boat, I swear!$"

KalamiCity_EventScript_Piraeus_Text_2:
# 36 "data/maps/KalamiCity/scripts.pory"
	.string "The sailor doesn't seem to notice\n"
	.string "anyone is there.$"

Common_EventScript_Piraeus_Text_0:
# 53 "data/maps/KalamiCity/scripts.pory"
	.string "Piraeus$"

Common_EventScript_Piraeus_Text_1:
# 54 "data/maps/KalamiCity/scripts.pory"
	.string "Chaire, {PLAYER}! Where are we going\n"
	.string "today?$"

Common_EventScript_Piraeus_Text_2:
# 57 "data/maps/KalamiCity/scripts.pory"
	.string "Just chatting!$"

Common_EventScript_Piraeus_Text_3:
# 59 "data/maps/KalamiCity/scripts.pory"
	.string "Kalami City$"

Common_EventScript_Piraeus_Text_4:
# 62 "data/maps/KalamiCity/scripts.pory"
	.string "Pythios Town$"

Common_EventScript_Piraeus_Text_5:
# 65 "data/maps/KalamiCity/scripts.pory"
	.string "Sofos City$"

Common_EventScript_Piraeus_Text_6:
# 68 "data/maps/KalamiCity/scripts.pory"
	.string "Kipos Town$"

Common_EventScript_Piraeus_Text_7:
# 71 "data/maps/KalamiCity/scripts.pory"
	.string "Marmaro Island$"

Common_EventScript_Piraeus_Text_8:
# 74 "data/maps/KalamiCity/scripts.pory"
	.string "Myrrini Island$"

Common_EventScript_Piraeus_Text_9:
# 77 "data/maps/KalamiCity/scripts.pory"
	.string "Péntepetal City$"

Common_EventScript_Piraeus_Text_10:
# 80 "data/maps/KalamiCity/scripts.pory"
	.string "Fresco Isles$"

Common_EventScript_Piraeus_Text_11:
# 83 "data/maps/KalamiCity/scripts.pory"
	.string "Palati City$"

Common_EventScript_Piraeus_Text_12:
# 86 "data/maps/KalamiCity/scripts.pory"
	.string "Port Pello$"

Common_EventScript_Piraeus_Text_13:
# 97 "data/maps/KalamiCity/scripts.pory"
	.string "Ehehe, glad to see the Champion still\n"
	.string "hangs around with the likes of me!$"

Common_EventScript_Piraeus_Text_14:
# 102 "data/maps/KalamiCity/scripts.pory"
	.string "How's the ol' adventure going,\n"
	.string "{PLAYER}? You still winning Gym\l"
	.string "Badges and knocking Team Chimera\l"
	.string "heads? Fwahaha!$"

Common_EventScript_Piraeus_Text_15:
# 114 "data/maps/KalamiCity/scripts.pory"
	.string "Kalami City! That's quite the challenge,\n"
	.string "sailing between those mangrove trees\l"
	.string "and shallow patches. But hey, I've got\l"
	.string "some Poké ball shopping to do there, so\l"
	.string "let's go!$"

Common_EventScript_Piraeus_Text_16:
# 123 "data/maps/KalamiCity/scripts.pory"
	.string "Pythios Town, eh? I've still got bad\n"
	.string "memories from that place, after my\l"
	.string "run-in with Team Chimera. Let's make\l"
	.string "this a quick trip, ehehe!$"

Common_EventScript_Piraeus_Text_17:
# 132 "data/maps/KalamiCity/scripts.pory"
	.string "Sofos City, eh? The heart of the Ilios\n"
	.string "Region! While you keep adventuring, I\l"
	.string "may play a little Pinball. I'm not good,\l"
	.string "but it's fun!$"

Common_EventScript_Piraeus_Text_18:
# 141 "data/maps/KalamiCity/scripts.pory"
	.string "That's one of my favorite little spots\n"
	.string "in Ilios! Maybe you could swing by the\l"
	.string "Sunset Wildlife Conservation Center\l"
	.string "while you're there. Come on, let's take\l"
	.string "off!$"

Common_EventScript_Piraeus_Text_19:
# 150 "data/maps/KalamiCity/scripts.pory"
	.string "Marmaro Island! A beautiful little spot.\n"
	.string "Their marble helped build structures\l"
	.string "across the ancient Ilios Region. Let's\l"
	.string "check it out!$"

Common_EventScript_Piraeus_Text_20:
# 159 "data/maps/KalamiCity/scripts.pory"
	.string "Hey, I love Myrrini Island! Their wine\n"
	.string "and fruit are famous around the world. I\l"
	.string "hope there's a festival going on!$"

Common_EventScript_Piraeus_Text_21:
# 168 "data/maps/KalamiCity/scripts.pory"
	.string "Oho, what are the odds? I was about to\n"
	.string "sail there for a Pokémon Contest\l"
	.string "myself! Let's get going!$"

Common_EventScript_Piraeus_Text_22:
# 177 "data/maps/KalamiCity/scripts.pory"
	.string "The Fresco Isles, eh? For a group of\n"
	.string "islands, it gets awful dry there. Maybe\l"
	.string "you'll find some unique Pokémon there!$"

Common_EventScript_Piraeus_Text_23:
# 186 "data/maps/KalamiCity/scripts.pory"
	.string "Palati City! That's on Kaptara Island,\n"
	.string "right? That place is covered with\l"
	.string "gorgeous ruins... maybe I'll do a little\l"
	.string "exploring when we get there!$"

Common_EventScript_Piraeus_Text_24:
# 195 "data/maps/KalamiCity/scripts.pory"
	.string "Port Pello! Their cherry trees are\n"
	.string "world-famous! They say the gods\l"
	.string "blessed the lands. How about we see it\l"
	.string "for ourselves?$"

KalamiCity_EventScript_DirectionSign_Text_0:
# 211 "data/maps/KalamiCity/scripts.pory"
	.string "Kalami City\n"
	.string "Reeds, Vines, and Industry\p"
	.string "{UP_ARROW} Riverwalk Trail - South$"

KalamiCity_EventScript_UniversityStudentRouteCheck_Text_0:
# 221 "data/maps/KalamiCity/scripts.pory"
	.string "Uni. Student$"

KalamiCity_EventScript_UniversityStudentRouteCheck_Text_1:
# 225 "data/maps/KalamiCity/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

KalamiCity_EventScript_UniversityStudentRouteCheck_Text_2:
# 230 "data/maps/KalamiCity/scripts.pory"
	.string "Chaire (Hyeh-rei)! I'm a student from\n"
	.string "the Acrisia University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "and Water Pokémon{COLOR DARK_GRAY} found in Acrisia\l"
	.string "City. If you've caught all the Pokémon\l"
	.string "here, please let me know.$"

KalamiCity_EventScript_UniversityStudentRouteCheck_Text_3:
# 238 "data/maps/KalamiCity/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

KalamiCity_EventScript_UniversityStudentRouteCheck_Text_4:
# 251 "data/maps/KalamiCity/scripts.pory"
	.string "The East Ilios Blue Outfit has been\n"
	.string "added to the Outfit Box!$"

KalamiCity_Sign_GymSign_Text_0:
# 267 "data/maps/KalamiCity/scripts.pory"
	.string "Gym Leader: Ourani\n"
	.string "The Muse of Sky-bound Industry$"

KalamiCity_EventScript_Camper_Text_0:
# 277 "data/maps/KalamiCity/scripts.pory"
	.string "Camper$"

KalamiCity_EventScript_Camper_Text_1:
# 278 "data/maps/KalamiCity/scripts.pory"
	.string "Hehehe, I love the shallows around\n"
	.string "Kalami City! I like feeling the sand and\l"
	.string "pebbles between my toes!$"

KalamiCity_EventScript_Artist_Text_0:
# 288 "data/maps/KalamiCity/scripts.pory"
	.string "Artist$"

KalamiCity_EventScript_Artist_Text_1:
# 294 "data/maps/KalamiCity/scripts.pory"
	.string "I've been inspired by your Heart Scale!\n"
	.string "I feel my creative juices flowing, I\l"
	.string "must make more shining, opal art!$"

KalamiCity_EventScript_Artist_Text_2:
# 304 "data/maps/KalamiCity/scripts.pory"
	.string "Hm? Oh, hi. Sorry, I'm hoping the ocean\n"
	.string "gives me inspiration. I've been\l"
	.string "struggling with artist's block for\l"
	.string "months, and there's no end in sight.\p"
	.string "I'm looking for something so beautiful,\n"
	.string "so sparkly, that it inspires me. A {COLOR GREEN}Heart\l"
	.string "Scale{COLOR DARK_GRAY} would be just perfect!$"

KalamiCity_EventScript_Artist_Text_3:
# 312 "data/maps/KalamiCity/scripts.pory"
	.string "Welcome back. I still can't seem to find\n"
	.string "inspiration... did you happen to bring a\l"
	.string "{COLOR GREEN}Heart Scale{COLOR DARK_GRAY}?$"

KalamiCity_EventScript_Artist_Text_4:
# 321 "data/maps/KalamiCity/scripts.pory"
	.string "Aw, looks like my artist's block will\n"
	.string "continue.\p"
	.string "If you happen to find an extra {COLOR GREEN}Heart\n"
	.string "Scale{COLOR DARK_GRAY}, please let me know!$"

KalamiCity_EventScript_Artist_Text_5:
# 327 "data/maps/KalamiCity/scripts.pory"
	.string "Incredible! The ripples of color, the\n"
	.string "sparkle in the light... it's unlike\l"
	.string "anything I've ever seen! Please, let me\l"
	.string "keep this and use it for inspiration!$"

KalamiCity_EventScript_Artist_Text_6:
# 332 "data/maps/KalamiCity/scripts.pory"
	.string "I'm so inspired, I could paint something\n"
	.string "right now! Wait there!$"

KalamiCity_EventScript_Artist_Text_7:
# 341 "data/maps/KalamiCity/scripts.pory"
	.string "My first masterpiece is complete! I\n"
	.string "want you to have it, as a symbol of our\l"
	.string "artistic partnership!$"

KalamiCity_EventScript_Artist_Text_8:
# 345 "data/maps/KalamiCity/scripts.pory"
	.string "{PLAYER} was given an Opal Fish\n"
	.string "Poster!$"

KalamiCity_EventScript_Artist_Text_9:
# 350 "data/maps/KalamiCity/scripts.pory"
	.string "That's a Poster of an extinct Pokémon,\n"
	.string "Relicanth, with hardened scales made of\l"
	.string "opal Heart Scales. I wanted it to\l"
	.string "symbolize the beauty and tragedy in\l"
	.string "lost species.\p"
	.string "If you don't have anywhere to put that\n"
	.string "Poster yet, maybe you {COLOR GREEN}will in the\l"
	.string "future{COLOR DARK_GRAY}. Hold onto it for me!$"

KalamiCity_EventScript_Sailor_Text_0:
# 363 "data/maps/KalamiCity/scripts.pory"
	.string "Sailor$"

KalamiCity_EventScript_Sailor_Text_1:
# 364 "data/maps/KalamiCity/scripts.pory"
	.string "Only a few larger boats like this can\n"
	.string "make it past the rocks and plants to\l"
	.string "these docks. It's tough, but we make it\l"
	.string "work.$"

KalamiCity_EventScript_Sailor2_Text_0:
# 377 "data/maps/KalamiCity/scripts.pory"
	.string "A lot of important goods come through\n"
	.string "the Kalami City ports.\p"
	.string "It's hard to sail through the mangrove,\n"
	.string "but the items produced by the\l"
	.string "industrial center here are real useful.$"

KalamiCity_EventScript_Sailor2_Text_1:
# 383 "data/maps/KalamiCity/scripts.pory"
	.string "Here, I'll give you a sample!$"

KalamiCity_EventScript_Fisherman_Text_0:
# 395 "data/maps/KalamiCity/scripts.pory"
	.string "Fishing Guru$"

KalamiCity_EventScript_Fisherman_Text_1:
# 396 "data/maps/KalamiCity/scripts.pory"
	.string "I've lived here since before Ourani and\n"
	.string "the industrial center was settled here.\l"
	.string "I fished here when I was a kid, and I'll\l"
	.string "keep fishing here until I'm old!$"

KalamiCity_EventScript_Fisherman_Text_2:
# 401 "data/maps/KalamiCity/scripts.pory"
	.string "I've got an extra {COLOR GREEN}Old Rod{COLOR DARK_GRAY} here. You look\n"
	.string "like you'd make a great angler one day...\l"
	.string "here, I want you to have this!$"

KalamiCity_EventScript_Fisherman_Text_3:
# 406 "data/maps/KalamiCity/scripts.pory"
	.string "Fishing opens up a whole new world of\n"
	.string "Pokémon! Make sure you fish every day.$"

KalamiCity_EventScript_Bounsweet_Text_0:
# 417 "data/maps/KalamiCity/scripts.pory"
	.string "Bounsweet$"

KalamiCity_EventScript_Bounsweet_Text_1:
# 419 "data/maps/KalamiCity/scripts.pory"
	.string "Cree-ee!$"

KalamiCity_EventScript_Aipom_Text_0:
# 430 "data/maps/KalamiCity/scripts.pory"
	.string "Aipom$"

KalamiCity_EventScript_Aipom_Text_1:
# 432 "data/maps/KalamiCity/scripts.pory"
	.string "Eek eek!$"

KalamiCity_EventScript_Lass_Text_0:
# 443 "data/maps/KalamiCity/scripts.pory"
	.string "Lass$"

KalamiCity_EventScript_Lass_Text_1:
# 444 "data/maps/KalamiCity/scripts.pory"
	.string "Look, I found this Bounsweet rooting\n"
	.string "around in the crates! I think it wanted\l"
	.string "a Trainer to be its friend.$"

KalamiCity_EventScript_BugCatcher_Text_0:
# 454 "data/maps/KalamiCity/scripts.pory"
	.string "Bug Catcher$"

KalamiCity_EventScript_BugCatcher_Text_1:
# 455 "data/maps/KalamiCity/scripts.pory"
	.string "I learned all about how Pokémon live\n"
	.string "together in places like this in school!\l"
	.string "Pokémon from the water and the land\l"
	.string "help each other out in a bunch of cool\l"
	.string "ways!$"

KalamiCity_EventScript_Beauty_Text_0:
# 465 "data/maps/KalamiCity/scripts.pory"
	.string "Beauty$"

KalamiCity_EventScript_Beauty_Text_1:
# 466 "data/maps/KalamiCity/scripts.pory"
	.string "This fruit tree at the center of town is\n"
	.string "the only one of its kind in Kalami City.\l"
	.string "They say it's the last tree from before\l"
	.string "the swamp crept in and people started\l"
	.string "building here.$"

KalamiCity_EventScript_WallWorker_Text_0:
# 476 "data/maps/KalamiCity/scripts.pory"
	.string "Worker$"

KalamiCity_EventScript_WallWorker_Text_1:
# 477 "data/maps/KalamiCity/scripts.pory"
	.string "The land around Kalami City is always\n"
	.string "sinking. The swamp and water creeps in,\l"
	.string "and I'm stuck trying to keep these\l"
	.string "walls in good condition!$"

KalamiCity_EventScript_PerformerM_Text_0:
# 487 "data/maps/KalamiCity/scripts.pory"
	.string "Performer$"

KalamiCity_EventScript_PerformerM_Text_1:
# 488 "data/maps/KalamiCity/scripts.pory"
	.string "I dream of performing comedy shows on\n"
	.string "the biggest stages of Ilios! For now,\l"
	.string "though, I'm just sticking with street\l"
	.string "shows here.$"

KalamiCity_EventScript_BlackBelt_Text_0:
# 498 "data/maps/KalamiCity/scripts.pory"
	.string "Black Belt$"

KalamiCity_EventScript_BlackBelt_Text_1:
# 499 "data/maps/KalamiCity/scripts.pory"
	.string "I taught my Pokémon to use Karate Chop\n"
	.string "so it could cut through the vines and\l"
	.string "reeds in the swamp. Now it helps me\l"
	.string "explore the area around the city!$"

KalamiCity_EventScript_Youngster_Text_0:
# 509 "data/maps/KalamiCity/scripts.pory"
	.string "Youngster$"

KalamiCity_EventScript_Youngster_Text_1:
# 510 "data/maps/KalamiCity/scripts.pory"
	.string "My dad says the walls keep the swamp\n"
	.string "from coming into the city. I don't see\l"
	.string "what would be so wrong about that! I\l"
	.string "could make friends with all the new\l"
	.string "Pokémon!$"

KalamiCity_EventScript_Girl_Text_0:
# 520 "data/maps/KalamiCity/scripts.pory"
	.string "Girl$"

KalamiCity_EventScript_Girl_Text_1:
# 521 "data/maps/KalamiCity/scripts.pory"
	.string "My Pokémon was rooting around in the\n"
	.string "dirt, and it found a weird, minty plant. I\l"
	.string "think it changed natures after\l"
	.string "sniffing it!$"

KalamiCity_EventScript_Athlete_Text_0:
# 531 "data/maps/KalamiCity/scripts.pory"
	.string "Athlete$"

KalamiCity_EventScript_Athlete_Text_1:
# 532 "data/maps/KalamiCity/scripts.pory"
	.string "I'm training in the shallow water to\n"
	.string "make my legs stronger! At this rate, I'll\l"
	.string "be the fastest guy in Ilios!$"

KalamiCity_EventScript_Amaura_Text_0:
# 542 "data/maps/KalamiCity/scripts.pory"
	.string "Amaura$"

KalamiCity_EventScript_Amaura_Text_1:
# 544 "data/maps/KalamiCity/scripts.pory"
	.string "Hraaah...!$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0:
# 555 "data/maps/KalamiCity/scripts.pory"
	.string "Fashionista$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_1:
# 560 "data/maps/KalamiCity/scripts.pory"
	.string "My sweet, colorful Amaura has inspired\n"
	.string "me to put together a new outfit!$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_2:
# 565 "data/maps/KalamiCity/scripts.pory"
	.string "I can tell you have a sharp eye for\n"
	.string "fashion! I'll give you this {COLOR GREEN}East Ilios\l"
	.string "Blue Outfit{COLOR DARK_GRAY} for just ¥6000. How about\l"
	.string "it?$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_3:
# 571 "data/maps/KalamiCity/scripts.pory"
	.string "No? But I thought you were into\n"
	.string "fashion!$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_4:
# 584 "data/maps/KalamiCity/scripts.pory"
	.string "Hey, you don't have the money for that!$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_5:
# 601 "data/maps/KalamiCity/scripts.pory"
	.string "Sweet! The East Ilios Blue Outfit\n"
	.string "incorporates the most recent fashion\l"
	.string "trends from the coastal areas of the\l"
	.string "region.$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_6:
# 608 "data/maps/KalamiCity/scripts.pory"
	.string "Have you tried on the East Ilios Blue\n"
	.string "Outfit? It sticks to the coolest, most\l"
	.string "recent fashion trends!$"

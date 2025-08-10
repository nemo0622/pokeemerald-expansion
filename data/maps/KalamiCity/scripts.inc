KalamiCity_MapScripts::
# 2 "data/maps/KalamiCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KalamiCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

KalamiCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/KalamiCity/scripts.pory"
	setflag FLAG_VISITED_KALAMI_CITY
# 5 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, KalamiCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
KalamiCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 11 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 12 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 13 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 14 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 15 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 16 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 17 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 18 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 19 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 20 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 21 "data/maps/KalamiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 22 "data/maps/KalamiCity/scripts.pory"
	setobjectaswildencounter 23, ENCOUNTER_LAND
# 23 "data/maps/KalamiCity/scripts.pory"
	setobjectaswildencounter 24, ENCOUNTER_LAND
# 24 "data/maps/KalamiCity/scripts.pory"
	setobjectaswildencounter 25, ENCOUNTER_SURF
# 25 "data/maps/KalamiCity/scripts.pory"
	setobjectaswildencounter 26, ENCOUNTER_LAND
# 26 "data/maps/KalamiCity/scripts.pory"
	setobjectaswildencounter 27, ENCOUNTER_SURF
	return

KalamiCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/KalamiCity/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto KalamiCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


KalamiCity_EventScript_Piraeus::
# 34 "data/maps/KalamiCity/scripts.pory"
	goto_if_unset FLAG_HELPED_PIRAEUS_PYTHIOS_TOWN, KalamiCity_EventScript_Piraeus_2
# 48 "data/maps/KalamiCity/scripts.pory"
	goto Common_EventScript_Piraeus
# 50 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_Piraeus_2:
# 36 "data/maps/KalamiCity/scripts.pory"
	lock
# 37 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Piraeus_Text_0
# 38 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Piraeus_Text_1
# 39 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 40 "data/maps/KalamiCity/scripts.pory"
	delay 30
# 41 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Piraeus_Text_2
# 42 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 43 "data/maps/KalamiCity/scripts.pory"
	release
	end


Common_EventScript_Piraeus::
# 56 "data/maps/KalamiCity/scripts.pory"
	lock
# 57 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 58 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 59 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_1
# 62 "data/maps/KalamiCity/scripts.pory"
	dynmultipush Common_EventScript_Piraeus_Text_2, 0
# 63 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_KALAMI_CITY, Common_EventScript_Piraeus_2
Common_EventScript_Piraeus_1:
# 66 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_PYTHIOS_TOWN, Common_EventScript_Piraeus_5
Common_EventScript_Piraeus_4:
# 69 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_SOFOS_CITY, Common_EventScript_Piraeus_8
Common_EventScript_Piraeus_7:
# 72 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_KIPOS_TOWN, Common_EventScript_Piraeus_11
Common_EventScript_Piraeus_10:
# 75 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_MARMARO_ISLAND, Common_EventScript_Piraeus_14
Common_EventScript_Piraeus_13:
# 78 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_MYRRINI_ISLAND, Common_EventScript_Piraeus_17
Common_EventScript_Piraeus_16:
# 81 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_PENTEPETAL_CITY, Common_EventScript_Piraeus_20
Common_EventScript_Piraeus_19:
# 84 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_FRESCO_ISLAND, Common_EventScript_Piraeus_23
Common_EventScript_Piraeus_22:
# 87 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_PALATI_CITY, Common_EventScript_Piraeus_26
Common_EventScript_Piraeus_25:
# 90 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_PORT_PELLO, Common_EventScript_Piraeus_29
Common_EventScript_Piraeus_28:
# 93 "data/maps/KalamiCity/scripts.pory"
	dynmultistack 100, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 96 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Piraeus_32
# 115 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Piraeus_39
# 124 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Common_EventScript_Piraeus_40
# 133 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Common_EventScript_Piraeus_41
# 142 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Common_EventScript_Piraeus_42
# 151 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Common_EventScript_Piraeus_43
# 160 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Common_EventScript_Piraeus_44
# 169 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq Common_EventScript_Piraeus_45
# 178 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq Common_EventScript_Piraeus_46
# 187 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq Common_EventScript_Piraeus_47
# 196 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq Common_EventScript_Piraeus_48
Common_EventScript_Piraeus_31:
# 206 "data/maps/KalamiCity/scripts.pory"
	release
	end

Common_EventScript_Piraeus_2:
# 64 "data/maps/KalamiCity/scripts.pory"
	dynmultipush Common_EventScript_Piraeus_Text_3, 1
	goto Common_EventScript_Piraeus_1

Common_EventScript_Piraeus_5:
# 67 "data/maps/KalamiCity/scripts.pory"
	dynmultipush Common_EventScript_Piraeus_Text_4, 2
	goto Common_EventScript_Piraeus_4

Common_EventScript_Piraeus_8:
# 70 "data/maps/KalamiCity/scripts.pory"
	dynmultipush Common_EventScript_Piraeus_Text_5, 3
	goto Common_EventScript_Piraeus_7

Common_EventScript_Piraeus_11:
# 73 "data/maps/KalamiCity/scripts.pory"
	dynmultipush Common_EventScript_Piraeus_Text_6, 4
	goto Common_EventScript_Piraeus_10

Common_EventScript_Piraeus_14:
# 76 "data/maps/KalamiCity/scripts.pory"
	dynmultipush Common_EventScript_Piraeus_Text_7, 5
	goto Common_EventScript_Piraeus_13

Common_EventScript_Piraeus_17:
# 79 "data/maps/KalamiCity/scripts.pory"
	dynmultipush Common_EventScript_Piraeus_Text_8, 6
	goto Common_EventScript_Piraeus_16

Common_EventScript_Piraeus_20:
# 82 "data/maps/KalamiCity/scripts.pory"
	dynmultipush Common_EventScript_Piraeus_Text_9, 7
	goto Common_EventScript_Piraeus_19

Common_EventScript_Piraeus_23:
# 85 "data/maps/KalamiCity/scripts.pory"
	dynmultipush Common_EventScript_Piraeus_Text_10, 8
	goto Common_EventScript_Piraeus_22

Common_EventScript_Piraeus_26:
# 88 "data/maps/KalamiCity/scripts.pory"
	dynmultipush Common_EventScript_Piraeus_Text_11, 9
	goto Common_EventScript_Piraeus_25

Common_EventScript_Piraeus_29:
# 91 "data/maps/KalamiCity/scripts.pory"
	dynmultipush Common_EventScript_Piraeus_Text_12, 10
	goto Common_EventScript_Piraeus_28

Common_EventScript_Piraeus_32:
# 98 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 0
# 99 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 100 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Common_EventScript_Piraeus_36
# 107 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_14
# 108 "data/maps/KalamiCity/scripts.pory"
	closemessage
Common_EventScript_Piraeus_35:
# 110 "data/maps/KalamiCity/scripts.pory"
	release
	end

Common_EventScript_Piraeus_36:
# 102 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_13
# 103 "data/maps/KalamiCity/scripts.pory"
	closemessage
	goto Common_EventScript_Piraeus_35

Common_EventScript_Piraeus_39:
# 117 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 1
# 118 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 119 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_15
# 120 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 121 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 122 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_31

Common_EventScript_Piraeus_40:
# 126 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 2
# 127 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 128 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_16
# 129 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 130 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 131 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_31

Common_EventScript_Piraeus_41:
# 135 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 3
# 136 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 137 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_17
# 138 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 139 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 140 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_31

Common_EventScript_Piraeus_42:
# 144 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 4
# 145 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 146 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_18
# 147 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 148 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 149 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_31

Common_EventScript_Piraeus_43:
# 153 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 5
# 154 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 155 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_19
# 156 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 157 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 158 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_31

Common_EventScript_Piraeus_44:
# 162 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 6
# 163 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 164 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_20
# 165 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 166 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 167 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_31

Common_EventScript_Piraeus_45:
# 171 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 7
# 172 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 173 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_21
# 174 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 175 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 176 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_31

Common_EventScript_Piraeus_46:
# 180 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 8
# 181 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 182 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_22
# 183 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 184 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 185 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_31

Common_EventScript_Piraeus_47:
# 189 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 9
# 190 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 191 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_23
# 192 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 193 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 194 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_31

Common_EventScript_Piraeus_48:
# 198 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 10
# 199 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 200 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_24
# 201 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 202 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 203 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_31


KalamiCity_EventScript_DirectionSign::
# 215 "data/maps/KalamiCity/scripts.pory"
	lock
# 216 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_DirectionSign_Text_0
# 217 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 218 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_UniversityStudentRouteCheck::
# 224 "data/maps/KalamiCity/scripts.pory"
	lock
# 225 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 226 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_UniversityStudentRouteCheck_Text_0
# 228 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_KALAMI_CITY, KalamiCity_EventScript_UniversityStudentRouteCheck_2
# 235 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_UniversityStudentRouteCheck_Text_2
# 236 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 237 "data/maps/KalamiCity/scripts.pory"
	special CheckRouteCaptureProgress
# 238 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq KalamiCity_EventScript_UniversityStudentRouteCheck_5
KalamiCity_EventScript_UniversityStudentRouteCheck_1:
# 265 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_UniversityStudentRouteCheck_2:
# 230 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_UniversityStudentRouteCheck_Text_1
# 231 "data/maps/KalamiCity/scripts.pory"
	closemessage
	goto KalamiCity_EventScript_UniversityStudentRouteCheck_1

KalamiCity_EventScript_UniversityStudentRouteCheck_5:
# 240 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 241 "data/maps/KalamiCity/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 242 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_UniversityStudentRouteCheck_Text_0
# 243 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_UniversityStudentRouteCheck_Text_3
# 244 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 245 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 248 "data/maps/KalamiCity/scripts.pory"
	giveitem ITEM_TM_WHIRLPOOL
# 249 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 250 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 252 "data/maps/KalamiCity/scripts.pory"
	checkoutfitflag OUTFIT_EAST_BLUE
# 253 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KalamiCity_EventScript_UniversityStudentRouteCheck_8
KalamiCity_EventScript_UniversityStudentRouteCheck_7:
# 261 "data/maps/KalamiCity/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_KALAMI_CITY
	goto KalamiCity_EventScript_UniversityStudentRouteCheck_1

KalamiCity_EventScript_UniversityStudentRouteCheck_8:
# 255 "data/maps/KalamiCity/scripts.pory"
	unlockoutfit OUTFIT_EAST_BLUE
# 256 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_UniversityStudentRouteCheck_Text_4
# 257 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 258 "data/maps/KalamiCity/scripts.pory"
	closemessage
	goto KalamiCity_EventScript_UniversityStudentRouteCheck_7


KalamiCity_Sign_GymSign::
# 271 "data/maps/KalamiCity/scripts.pory"
	lock
# 272 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_Sign_GymSign_Text_0
# 273 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 274 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Camper::
# 280 "data/maps/KalamiCity/scripts.pory"
	lock
# 281 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 282 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Camper_Text_0
# 283 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Camper_Text_1
# 284 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 285 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Artist::
# 291 "data/maps/KalamiCity/scripts.pory"
	lock
# 292 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 293 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 296 "data/maps/KalamiCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_KALAMI_HEART_SCALE
# 297 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KalamiCity_EventScript_Artist_2
# 306 "data/maps/KalamiCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_KALAMI_HEART_SCALE
# 307 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KalamiCity_EventScript_Artist_4
# 317 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_3
# 318 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 320 "data/maps/KalamiCity/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 321 "data/maps/KalamiCity/scripts.pory"
	delay 30
# 323 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KalamiCity_EventScript_Artist_7
# 331 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 332 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_5
# 333 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 334 "data/maps/KalamiCity/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 335 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 336 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 337 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_6
# 338 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 340 "data/maps/KalamiCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 341 "data/maps/KalamiCity/scripts.pory"
	delay 60
# 342 "data/maps/KalamiCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 343 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 345 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 346 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_7
# 347 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 348 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 349 "data/maps/KalamiCity/scripts.pory"
	adddecoration DECOR_OPAL_FISH_POSTER
# 350 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_8
# 351 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 352 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 353 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 354 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 355 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_9
# 356 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 358 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 359 "data/maps/KalamiCity/scripts.pory"
	completequest QUEST_KALAMI_HEART_SCALE
	return

KalamiCity_EventScript_Artist_2:
# 299 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_1
# 300 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 301 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_Artist_4:
# 309 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_2
# 310 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 312 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 313 "data/maps/KalamiCity/scripts.pory"
	startquest QUEST_KALAMI_HEART_SCALE
	return

KalamiCity_EventScript_Artist_7:
# 325 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 326 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_4
# 327 "data/maps/KalamiCity/scripts.pory"
	closemessage
	return


KalamiCity_EventScript_Sailor::
# 366 "data/maps/KalamiCity/scripts.pory"
	lock
# 367 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 368 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Sailor_Text_0
# 369 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Sailor_Text_1
# 370 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 371 "data/maps/KalamiCity/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 372 "data/maps/KalamiCity/scripts.pory"
	waitmovement 0
# 373 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Sailor2::
# 379 "data/maps/KalamiCity/scripts.pory"
	lock
# 380 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 381 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Sailor_Text_0
# 382 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Sailor2_Text_0
# 383 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 384 "data/maps/KalamiCity/scripts.pory"
	goto_if_unset FLAG_GOT_ABILITY_CAPSULE_KALAMI_CITY, KalamiCity_EventScript_Sailor2_2
KalamiCity_EventScript_Sailor2_1:
# 392 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_Sailor2_2:
# 386 "data/maps/KalamiCity/scripts.pory"
	setflag FLAG_GOT_ABILITY_CAPSULE_KALAMI_CITY
# 387 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Sailor_Text_0
# 388 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Sailor2_Text_1
# 389 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 390 "data/maps/KalamiCity/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
	goto KalamiCity_EventScript_Sailor2_1


KalamiCity_EventScript_Fisherman::
# 398 "data/maps/KalamiCity/scripts.pory"
	lock
# 399 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 400 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Fisherman_Text_0
# 401 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Fisherman_Text_1
# 402 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 403 "data/maps/KalamiCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OLD_ROD, KalamiCity_EventScript_Fisherman_2
KalamiCity_EventScript_Fisherman_1:
# 414 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_Fisherman_2:
# 405 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Fisherman_Text_0
# 406 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Fisherman_Text_2
# 407 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 408 "data/maps/KalamiCity/scripts.pory"
	giveitem ITEM_OLD_ROD
# 409 "data/maps/KalamiCity/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 410 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Fisherman_Text_0
# 411 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Fisherman_Text_3
# 412 "data/maps/KalamiCity/scripts.pory"
	closemessage
	goto KalamiCity_EventScript_Fisherman_1


KalamiCity_EventScript_Bounsweet::
# 420 "data/maps/KalamiCity/scripts.pory"
	lock
# 421 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 422 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Bounsweet_Text_0
# 423 "data/maps/KalamiCity/scripts.pory"
	playmoncry SPECIES_BOUNSWEET, CRY_MODE_NORMAL
# 424 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Bounsweet_Text_1
# 425 "data/maps/KalamiCity/scripts.pory"
	waitmoncry
# 426 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 427 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Aipom::
# 433 "data/maps/KalamiCity/scripts.pory"
	lock
# 434 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 435 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Aipom_Text_0
# 436 "data/maps/KalamiCity/scripts.pory"
	playmoncry SPECIES_AIPOM, CRY_MODE_NORMAL
# 437 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Aipom_Text_1
# 438 "data/maps/KalamiCity/scripts.pory"
	waitmoncry
# 439 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 440 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Lass::
# 446 "data/maps/KalamiCity/scripts.pory"
	lock
# 447 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 448 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Lass_Text_0
# 449 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Lass_Text_1
# 450 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 451 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_BugCatcher::
# 457 "data/maps/KalamiCity/scripts.pory"
	lock
# 458 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 459 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_BugCatcher_Text_0
# 460 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_BugCatcher_Text_1
# 461 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 462 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Beauty::
# 468 "data/maps/KalamiCity/scripts.pory"
	lock
# 469 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 470 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Beauty_Text_0
# 471 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Beauty_Text_1
# 472 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 473 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_WallWorker::
# 479 "data/maps/KalamiCity/scripts.pory"
	lock
# 480 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 481 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_WallWorker_Text_0
# 482 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_WallWorker_Text_1
# 483 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 484 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_PerformerM::
# 490 "data/maps/KalamiCity/scripts.pory"
	lock
# 491 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 492 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_PerformerM_Text_0
# 493 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_PerformerM_Text_1
# 494 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 495 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_BlackBelt::
# 501 "data/maps/KalamiCity/scripts.pory"
	lock
# 502 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 503 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_BlackBelt_Text_0
# 504 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_BlackBelt_Text_1
# 505 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 506 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Youngster::
# 512 "data/maps/KalamiCity/scripts.pory"
	lock
# 513 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 514 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Youngster_Text_0
# 515 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Youngster_Text_1
# 516 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 517 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Girl::
# 523 "data/maps/KalamiCity/scripts.pory"
	lock
# 524 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 525 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Girl_Text_0
# 526 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Girl_Text_1
# 527 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 528 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Athlete::
# 534 "data/maps/KalamiCity/scripts.pory"
	lock
# 535 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 536 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Athlete_Text_0
# 537 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Athlete_Text_1
# 538 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 539 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Amaura::
# 545 "data/maps/KalamiCity/scripts.pory"
	lock
# 546 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 547 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Amaura_Text_0
# 548 "data/maps/KalamiCity/scripts.pory"
	playmoncry SPECIES_AMAURA, CRY_MODE_NORMAL
# 549 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Amaura_Text_1
# 550 "data/maps/KalamiCity/scripts.pory"
	waitmoncry
# 551 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 552 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_EastBlueOutfitBeauty::
# 558 "data/maps/KalamiCity/scripts.pory"
	lock
# 559 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 560 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0
# 561 "data/maps/KalamiCity/scripts.pory"
	checkoutfitflag OUTFIT_EAST_BLUE
# 563 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KalamiCity_EventScript_EastBlueOutfitBeauty_2
# 613 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_6
# 614 "data/maps/KalamiCity/scripts.pory"
	closemessage
KalamiCity_EventScript_EastBlueOutfitBeauty_1:
# 616 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_EastBlueOutfitBeauty_2:
# 565 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_1
# 566 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 567 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 568 "data/maps/KalamiCity/scripts.pory"
	showmoneybox 0, 0
# 569 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0
# 570 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_2, MSGBOX_YESNO
# 571 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 572 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KalamiCity_EventScript_EastBlueOutfitBeauty_5
# 584 "data/maps/KalamiCity/scripts.pory"
	checkmoney 6000
# 585 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KalamiCity_EventScript_EastBlueOutfitBeauty_8
# 596 "data/maps/KalamiCity/scripts.pory"
	removemoney 6000
# 597 "data/maps/KalamiCity/scripts.pory"
	updatemoneybox
# 598 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 599 "data/maps/KalamiCity/scripts.pory"
	unlockoutfit OUTFIT_EAST_BLUE
# 600 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_UniversityStudentRouteCheck_Text_4
# 601 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 602 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 603 "data/maps/KalamiCity/scripts.pory"
	hidemoneybox
# 604 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 605 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0
# 606 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_5
# 607 "data/maps/KalamiCity/scripts.pory"
	closemessage
	goto KalamiCity_EventScript_EastBlueOutfitBeauty_1

KalamiCity_EventScript_EastBlueOutfitBeauty_5:
# 574 "data/maps/KalamiCity/scripts.pory"
	hidemoneybox
# 575 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0
# 576 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_3
# 577 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 578 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_EastBlueOutfitBeauty_8:
# 587 "data/maps/KalamiCity/scripts.pory"
	hidemoneybox
# 588 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0
# 589 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_4
# 590 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 591 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Piraeus_Text_0:
# 37 "data/maps/KalamiCity/scripts.pory"
	.string "Strange Sailor$"

KalamiCity_EventScript_Piraeus_Text_1:
# 38 "data/maps/KalamiCity/scripts.pory"
	.string "Grumble, grumble... darn thugs... no {COLOR GREEN}Team\n"
	.string "Chimera{COLOR DARK_GRAY} member is setting a hand on my\l"
	.string "boat, I swear!$"

KalamiCity_EventScript_Piraeus_Text_2:
# 41 "data/maps/KalamiCity/scripts.pory"
	.string "The sailor doesn't seem to notice\n"
	.string "anyone is there.$"

Common_EventScript_Piraeus_Text_0:
# 58 "data/maps/KalamiCity/scripts.pory"
	.string "Piraeus$"

Common_EventScript_Piraeus_Text_1:
# 59 "data/maps/KalamiCity/scripts.pory"
	.string "Chaire, {PLAYER}! Where are we going\n"
	.string "today?$"

Common_EventScript_Piraeus_Text_2:
# 62 "data/maps/KalamiCity/scripts.pory"
	.string "Just chatting!$"

Common_EventScript_Piraeus_Text_3:
# 64 "data/maps/KalamiCity/scripts.pory"
	.string "Kalami City$"

Common_EventScript_Piraeus_Text_4:
# 67 "data/maps/KalamiCity/scripts.pory"
	.string "Pythios Town$"

Common_EventScript_Piraeus_Text_5:
# 70 "data/maps/KalamiCity/scripts.pory"
	.string "Sofos City$"

Common_EventScript_Piraeus_Text_6:
# 73 "data/maps/KalamiCity/scripts.pory"
	.string "Kipos Town$"

Common_EventScript_Piraeus_Text_7:
# 76 "data/maps/KalamiCity/scripts.pory"
	.string "Marmaro Island$"

Common_EventScript_Piraeus_Text_8:
# 79 "data/maps/KalamiCity/scripts.pory"
	.string "Myrrini Island$"

Common_EventScript_Piraeus_Text_9:
# 82 "data/maps/KalamiCity/scripts.pory"
	.string "Péntepetal City$"

Common_EventScript_Piraeus_Text_10:
# 85 "data/maps/KalamiCity/scripts.pory"
	.string "Fresco Isles$"

Common_EventScript_Piraeus_Text_11:
# 88 "data/maps/KalamiCity/scripts.pory"
	.string "Palati City$"

Common_EventScript_Piraeus_Text_12:
# 91 "data/maps/KalamiCity/scripts.pory"
	.string "Port Pello$"

Common_EventScript_Piraeus_Text_13:
# 102 "data/maps/KalamiCity/scripts.pory"
	.string "Ehehe, glad to see the Champion still\n"
	.string "hangs around with the likes of me!$"

Common_EventScript_Piraeus_Text_14:
# 107 "data/maps/KalamiCity/scripts.pory"
	.string "How's the ol' adventure going,\n"
	.string "{PLAYER}? You still winning Gym\l"
	.string "Badges and knocking Team Chimera\l"
	.string "heads? Fwahaha!$"

Common_EventScript_Piraeus_Text_15:
# 119 "data/maps/KalamiCity/scripts.pory"
	.string "Kalami City! That's quite the challenge,\n"
	.string "sailing between those mangrove trees\l"
	.string "and shallow patches. But hey, I've got\l"
	.string "some Poké ball shopping to do there, so\l"
	.string "let's go!$"

Common_EventScript_Piraeus_Text_16:
# 128 "data/maps/KalamiCity/scripts.pory"
	.string "Pythios Town, eh? I've still got bad\n"
	.string "memories from that place, after my\l"
	.string "run-in with Team Chimera. Let's make\l"
	.string "this a quick trip, ehehe!$"

Common_EventScript_Piraeus_Text_17:
# 137 "data/maps/KalamiCity/scripts.pory"
	.string "Sofos City, eh? The heart of the Ilios\n"
	.string "Region! While you keep adventuring, I\l"
	.string "may play a little Pinball. I'm not good,\l"
	.string "but it's fun!$"

Common_EventScript_Piraeus_Text_18:
# 146 "data/maps/KalamiCity/scripts.pory"
	.string "That's one of my favorite little spots\n"
	.string "in Ilios! Maybe you could swing by the\l"
	.string "Sunset Wildlife Conservation Center\l"
	.string "while you're there. Come on, let's take\l"
	.string "off!$"

Common_EventScript_Piraeus_Text_19:
# 155 "data/maps/KalamiCity/scripts.pory"
	.string "Marmaro Island! A beautiful little spot.\n"
	.string "Their marble helped build structures\l"
	.string "across the ancient Ilios Region. Let's\l"
	.string "check it out!$"

Common_EventScript_Piraeus_Text_20:
# 164 "data/maps/KalamiCity/scripts.pory"
	.string "Hey, I love Myrrini Island! Their wine\n"
	.string "and fruit are famous around the world. I\l"
	.string "hope there's a festival going on!$"

Common_EventScript_Piraeus_Text_21:
# 173 "data/maps/KalamiCity/scripts.pory"
	.string "Oho, what are the odds? I was about to\n"
	.string "sail there for a Pokémon Contest\l"
	.string "myself! Let's get going!$"

Common_EventScript_Piraeus_Text_22:
# 182 "data/maps/KalamiCity/scripts.pory"
	.string "The Fresco Isles, eh? For a group of\n"
	.string "islands, it gets awful dry there. Maybe\l"
	.string "you'll find some unique Pokémon there!$"

Common_EventScript_Piraeus_Text_23:
# 191 "data/maps/KalamiCity/scripts.pory"
	.string "Palati City! That's on Kaptara Island,\n"
	.string "right? That place is covered with\l"
	.string "gorgeous ruins... maybe I'll do a little\l"
	.string "exploring when we get there!$"

Common_EventScript_Piraeus_Text_24:
# 200 "data/maps/KalamiCity/scripts.pory"
	.string "Port Pello! Their cherry trees are\n"
	.string "world-famous! They say the gods\l"
	.string "blessed the lands. How about we see it\l"
	.string "for ourselves?$"

KalamiCity_EventScript_DirectionSign_Text_0:
# 216 "data/maps/KalamiCity/scripts.pory"
	.string "Kalami City\n"
	.string "Reeds, Vines, and Industry\p"
	.string "{UP_ARROW} Riverwalk Trail - South$"

KalamiCity_EventScript_UniversityStudentRouteCheck_Text_0:
# 226 "data/maps/KalamiCity/scripts.pory"
	.string "Uni. Student$"

KalamiCity_EventScript_UniversityStudentRouteCheck_Text_1:
# 230 "data/maps/KalamiCity/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

KalamiCity_EventScript_UniversityStudentRouteCheck_Text_2:
# 235 "data/maps/KalamiCity/scripts.pory"
	.string "Chaire (Hyeh-rei)! I'm a student from\n"
	.string "the Acrisia University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "and Water Pokémon{COLOR DARK_GRAY} found in Kalami City.\l"
	.string "If you've caught all the Pokémon here,\l"
	.string "please let me know.$"

KalamiCity_EventScript_UniversityStudentRouteCheck_Text_3:
# 243 "data/maps/KalamiCity/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

KalamiCity_EventScript_UniversityStudentRouteCheck_Text_4:
# 256 "data/maps/KalamiCity/scripts.pory"
	.string "The East Ilios Blue Outfit has been\n"
	.string "added to the Outfit Box!$"

KalamiCity_Sign_GymSign_Text_0:
# 272 "data/maps/KalamiCity/scripts.pory"
	.string "Gym Leader: Ourani\n"
	.string "The Muse of Sky-bound Industry$"

KalamiCity_EventScript_Camper_Text_0:
# 282 "data/maps/KalamiCity/scripts.pory"
	.string "Camper$"

KalamiCity_EventScript_Camper_Text_1:
# 283 "data/maps/KalamiCity/scripts.pory"
	.string "Hehehe, I love the shallows around\n"
	.string "Kalami City! I like feeling the sand and\l"
	.string "pebbles between my toes!$"

KalamiCity_EventScript_Artist_Text_0:
# 293 "data/maps/KalamiCity/scripts.pory"
	.string "Artist$"

KalamiCity_EventScript_Artist_Text_1:
# 299 "data/maps/KalamiCity/scripts.pory"
	.string "I've been inspired by your Heart Scale!\n"
	.string "I feel my creative juices flowing, I\l"
	.string "must make more shining, opal art!$"

KalamiCity_EventScript_Artist_Text_2:
# 309 "data/maps/KalamiCity/scripts.pory"
	.string "Hm? Oh, hi. Sorry, I'm hoping the ocean\n"
	.string "gives me inspiration. I've been\l"
	.string "struggling with artist's block for\l"
	.string "months, and there's no end in sight.\p"
	.string "I'm looking for something so beautiful,\n"
	.string "so sparkly, that it inspires me. A {COLOR GREEN}Heart\l"
	.string "Scale{COLOR DARK_GRAY} would be just perfect!$"

KalamiCity_EventScript_Artist_Text_3:
# 317 "data/maps/KalamiCity/scripts.pory"
	.string "Welcome back. I still can't seem to find\n"
	.string "inspiration... did you happen to bring a\l"
	.string "{COLOR GREEN}Heart Scale{COLOR DARK_GRAY}?$"

KalamiCity_EventScript_Artist_Text_4:
# 326 "data/maps/KalamiCity/scripts.pory"
	.string "Aw, looks like my artist's block will\n"
	.string "continue.\p"
	.string "If you happen to find an extra {COLOR GREEN}Heart\n"
	.string "Scale{COLOR DARK_GRAY}, please let me know!$"

KalamiCity_EventScript_Artist_Text_5:
# 332 "data/maps/KalamiCity/scripts.pory"
	.string "Incredible! The ripples of color, the\n"
	.string "sparkle in the light... it's unlike\l"
	.string "anything I've ever seen! Please, let me\l"
	.string "keep this and use it for inspiration!$"

KalamiCity_EventScript_Artist_Text_6:
# 337 "data/maps/KalamiCity/scripts.pory"
	.string "I'm so inspired, I could paint something\n"
	.string "right now! Wait there!$"

KalamiCity_EventScript_Artist_Text_7:
# 346 "data/maps/KalamiCity/scripts.pory"
	.string "My first masterpiece is complete! I\n"
	.string "want you to have it, as a symbol of our\l"
	.string "artistic partnership!$"

KalamiCity_EventScript_Artist_Text_8:
# 350 "data/maps/KalamiCity/scripts.pory"
	.string "{PLAYER} was given an Opal Fish\n"
	.string "Poster!$"

KalamiCity_EventScript_Artist_Text_9:
# 355 "data/maps/KalamiCity/scripts.pory"
	.string "That's a Poster of an extinct Pokémon,\n"
	.string "Relicanth, with hardened scales made of\l"
	.string "opal Heart Scales. I wanted it to\l"
	.string "symbolize the beauty and tragedy in\l"
	.string "lost species.\p"
	.string "If you don't have anywhere to put that\n"
	.string "Poster yet, maybe you {COLOR GREEN}will in the\l"
	.string "future{COLOR DARK_GRAY}. Hold onto it for me!$"

KalamiCity_EventScript_Sailor_Text_0:
# 368 "data/maps/KalamiCity/scripts.pory"
	.string "Sailor$"

KalamiCity_EventScript_Sailor_Text_1:
# 369 "data/maps/KalamiCity/scripts.pory"
	.string "Only a few larger boats like this can\n"
	.string "make it past the rocks and plants to\l"
	.string "these docks. It's tough, but we make it\l"
	.string "work.$"

KalamiCity_EventScript_Sailor2_Text_0:
# 382 "data/maps/KalamiCity/scripts.pory"
	.string "A lot of important goods come through\n"
	.string "the Kalami City ports.\p"
	.string "It's hard to sail through the mangrove,\n"
	.string "but the items produced by the\l"
	.string "industrial center here are real useful.$"

KalamiCity_EventScript_Sailor2_Text_1:
# 388 "data/maps/KalamiCity/scripts.pory"
	.string "Here, I'll give you a sample!$"

KalamiCity_EventScript_Fisherman_Text_0:
# 400 "data/maps/KalamiCity/scripts.pory"
	.string "Fishing Guru$"

KalamiCity_EventScript_Fisherman_Text_1:
# 401 "data/maps/KalamiCity/scripts.pory"
	.string "I've lived here since before Ourani and\n"
	.string "the industrial center was settled here.\l"
	.string "I fished here when I was a kid, and I'll\l"
	.string "keep fishing here until I'm old!$"

KalamiCity_EventScript_Fisherman_Text_2:
# 406 "data/maps/KalamiCity/scripts.pory"
	.string "I've got an extra {COLOR GREEN}Old Rod{COLOR DARK_GRAY} here. You look\n"
	.string "like you'd make a great angler one day...\l"
	.string "here, I want you to have this!$"

KalamiCity_EventScript_Fisherman_Text_3:
# 411 "data/maps/KalamiCity/scripts.pory"
	.string "Fishing opens up a whole new world of\n"
	.string "Pokémon! Make sure you fish every day.$"

KalamiCity_EventScript_Bounsweet_Text_0:
# 422 "data/maps/KalamiCity/scripts.pory"
	.string "Bounsweet$"

KalamiCity_EventScript_Bounsweet_Text_1:
# 424 "data/maps/KalamiCity/scripts.pory"
	.string "Cree-ee!$"

KalamiCity_EventScript_Aipom_Text_0:
# 435 "data/maps/KalamiCity/scripts.pory"
	.string "Aipom$"

KalamiCity_EventScript_Aipom_Text_1:
# 437 "data/maps/KalamiCity/scripts.pory"
	.string "Eek eek!$"

KalamiCity_EventScript_Lass_Text_0:
# 448 "data/maps/KalamiCity/scripts.pory"
	.string "Lass$"

KalamiCity_EventScript_Lass_Text_1:
# 449 "data/maps/KalamiCity/scripts.pory"
	.string "Look, I found this Bounsweet rooting\n"
	.string "around in the crates! I think it wanted\l"
	.string "a Trainer to be its friend.$"

KalamiCity_EventScript_BugCatcher_Text_0:
# 459 "data/maps/KalamiCity/scripts.pory"
	.string "Bug Catcher$"

KalamiCity_EventScript_BugCatcher_Text_1:
# 460 "data/maps/KalamiCity/scripts.pory"
	.string "I learned all about how Pokémon live\n"
	.string "together in places like this in school!\l"
	.string "Pokémon from the water and the land\l"
	.string "help each other out in a bunch of cool\l"
	.string "ways!$"

KalamiCity_EventScript_Beauty_Text_0:
# 470 "data/maps/KalamiCity/scripts.pory"
	.string "Beauty$"

KalamiCity_EventScript_Beauty_Text_1:
# 471 "data/maps/KalamiCity/scripts.pory"
	.string "This fruit tree at the center of town is\n"
	.string "the only one of its kind in Kalami City.\l"
	.string "They say it's the last tree from before\l"
	.string "the swamp crept in and people started\l"
	.string "building here.$"

KalamiCity_EventScript_WallWorker_Text_0:
# 481 "data/maps/KalamiCity/scripts.pory"
	.string "Worker$"

KalamiCity_EventScript_WallWorker_Text_1:
# 482 "data/maps/KalamiCity/scripts.pory"
	.string "The land around Kalami City is always\n"
	.string "sinking. The swamp and water creeps in,\l"
	.string "and I'm stuck trying to keep these\l"
	.string "walls in good condition!$"

KalamiCity_EventScript_PerformerM_Text_0:
# 492 "data/maps/KalamiCity/scripts.pory"
	.string "Performer$"

KalamiCity_EventScript_PerformerM_Text_1:
# 493 "data/maps/KalamiCity/scripts.pory"
	.string "I dream of performing comedy shows on\n"
	.string "the biggest stages of Ilios! For now,\l"
	.string "though, I'm just sticking with street\l"
	.string "shows here.$"

KalamiCity_EventScript_BlackBelt_Text_0:
# 503 "data/maps/KalamiCity/scripts.pory"
	.string "Black Belt$"

KalamiCity_EventScript_BlackBelt_Text_1:
# 504 "data/maps/KalamiCity/scripts.pory"
	.string "I taught my Pokémon to use Karate Chop\n"
	.string "so it could cut through the vines and\l"
	.string "reeds in the swamp. Now it helps me\l"
	.string "explore the area around the city!$"

KalamiCity_EventScript_Youngster_Text_0:
# 514 "data/maps/KalamiCity/scripts.pory"
	.string "Youngster$"

KalamiCity_EventScript_Youngster_Text_1:
# 515 "data/maps/KalamiCity/scripts.pory"
	.string "My dad says the walls keep the swamp\n"
	.string "from coming into the city. I don't see\l"
	.string "what would be so wrong about that! I\l"
	.string "could make friends with all the new\l"
	.string "Pokémon!$"

KalamiCity_EventScript_Girl_Text_0:
# 525 "data/maps/KalamiCity/scripts.pory"
	.string "Girl$"

KalamiCity_EventScript_Girl_Text_1:
# 526 "data/maps/KalamiCity/scripts.pory"
	.string "My Pokémon was rooting around in the\n"
	.string "dirt, and it found a weird, minty plant. I\l"
	.string "think it changed natures after\l"
	.string "sniffing it!$"

KalamiCity_EventScript_Athlete_Text_0:
# 536 "data/maps/KalamiCity/scripts.pory"
	.string "Athlete$"

KalamiCity_EventScript_Athlete_Text_1:
# 537 "data/maps/KalamiCity/scripts.pory"
	.string "I'm training in the shallow water to\n"
	.string "make my legs stronger! At this rate, I'll\l"
	.string "be the fastest guy in Ilios!$"

KalamiCity_EventScript_Amaura_Text_0:
# 547 "data/maps/KalamiCity/scripts.pory"
	.string "Amaura$"

KalamiCity_EventScript_Amaura_Text_1:
# 549 "data/maps/KalamiCity/scripts.pory"
	.string "Hraaah...!$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0:
# 560 "data/maps/KalamiCity/scripts.pory"
	.string "Fashionista$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_1:
# 565 "data/maps/KalamiCity/scripts.pory"
	.string "My sweet, colorful Amaura has inspired\n"
	.string "me to put together a new outfit!$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_2:
# 570 "data/maps/KalamiCity/scripts.pory"
	.string "I can tell you have a sharp eye for\n"
	.string "fashion! I'll give you this {COLOR GREEN}East Ilios\l"
	.string "Blue Outfit{COLOR DARK_GRAY} for just ¥6000. How about\l"
	.string "it?$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_3:
# 576 "data/maps/KalamiCity/scripts.pory"
	.string "No? But I thought you were into\n"
	.string "fashion!$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_4:
# 589 "data/maps/KalamiCity/scripts.pory"
	.string "Hey, you don't have the money for that!$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_5:
# 606 "data/maps/KalamiCity/scripts.pory"
	.string "Sweet! The East Ilios Blue Outfit\n"
	.string "incorporates the most recent fashion\l"
	.string "trends from the coastal areas of the\l"
	.string "region.$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_6:
# 613 "data/maps/KalamiCity/scripts.pory"
	.string "Have you tried on the East Ilios Blue\n"
	.string "Outfit? It sticks to the coolest, most\l"
	.string "recent fashion trends!$"

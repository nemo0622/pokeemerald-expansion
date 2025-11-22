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
	goto_if_set FLAG_IS_CHAMPION, Common_EventScript_Piraeus_32
Common_EventScript_Piraeus_31:
# 96 "data/maps/KalamiCity/scripts.pory"
	dynmultistack 100, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 99 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Piraeus_35
# 118 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Piraeus_42
# 127 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Common_EventScript_Piraeus_43
# 136 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Common_EventScript_Piraeus_44
# 145 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Common_EventScript_Piraeus_45
# 154 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Common_EventScript_Piraeus_46
# 163 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Common_EventScript_Piraeus_47
# 172 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq Common_EventScript_Piraeus_48
# 181 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq Common_EventScript_Piraeus_49
# 190 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq Common_EventScript_Piraeus_50
# 199 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq Common_EventScript_Piraeus_51
# 208 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 11
	goto_if_eq Common_EventScript_Piraeus_52
Common_EventScript_Piraeus_34:
# 218 "data/maps/KalamiCity/scripts.pory"
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
# 94 "data/maps/KalamiCity/scripts.pory"
	dynmultipush Common_EventScript_Piraeus_Text_13, 11
	goto Common_EventScript_Piraeus_31

Common_EventScript_Piraeus_35:
# 101 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 0
# 102 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 103 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Common_EventScript_Piraeus_39
# 110 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_15
# 111 "data/maps/KalamiCity/scripts.pory"
	closemessage
Common_EventScript_Piraeus_38:
# 113 "data/maps/KalamiCity/scripts.pory"
	release
	end

Common_EventScript_Piraeus_39:
# 105 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_14
# 106 "data/maps/KalamiCity/scripts.pory"
	closemessage
	goto Common_EventScript_Piraeus_38

Common_EventScript_Piraeus_42:
# 120 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 1
# 121 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 122 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_16
# 123 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 124 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 125 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_34

Common_EventScript_Piraeus_43:
# 129 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 2
# 130 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 131 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_17
# 132 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 133 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 134 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_34

Common_EventScript_Piraeus_44:
# 138 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 3
# 139 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 140 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_18
# 141 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 142 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 143 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_34

Common_EventScript_Piraeus_45:
# 147 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 4
# 148 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 149 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_19
# 150 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 151 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 152 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_34

Common_EventScript_Piraeus_46:
# 156 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 5
# 157 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 158 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_20
# 159 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 160 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 161 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_34

Common_EventScript_Piraeus_47:
# 165 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 6
# 166 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 167 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_21
# 168 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 169 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 170 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_34

Common_EventScript_Piraeus_48:
# 174 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 7
# 175 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 176 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_22
# 177 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 178 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 179 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_34

Common_EventScript_Piraeus_49:
# 183 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 8
# 184 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 185 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_23
# 186 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 187 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 188 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_34

Common_EventScript_Piraeus_50:
# 192 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 9
# 193 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 194 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_24
# 195 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 196 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 197 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_34

Common_EventScript_Piraeus_51:
# 201 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 10
# 202 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 203 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_25
# 204 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 205 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 206 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_34

Common_EventScript_Piraeus_52:
# 210 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 11
# 211 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 212 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_26
# 213 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 214 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 215 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_34


KalamiCity_EventScript_DirectionSign::
# 227 "data/maps/KalamiCity/scripts.pory"
	lock
# 228 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_DirectionSign_Text_0
# 229 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 230 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_UniversityStudentRouteCheck::
# 236 "data/maps/KalamiCity/scripts.pory"
	lock
# 237 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 238 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_UniversityStudentRouteCheck_Text_0
# 240 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_KALAMI_CITY, KalamiCity_EventScript_UniversityStudentRouteCheck_2
# 247 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_UniversityStudentRouteCheck_Text_2
# 248 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 249 "data/maps/KalamiCity/scripts.pory"
	special CheckRouteCaptureProgress
# 250 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq KalamiCity_EventScript_UniversityStudentRouteCheck_5
KalamiCity_EventScript_UniversityStudentRouteCheck_1:
# 277 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_UniversityStudentRouteCheck_2:
# 242 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_UniversityStudentRouteCheck_Text_1
# 243 "data/maps/KalamiCity/scripts.pory"
	closemessage
	goto KalamiCity_EventScript_UniversityStudentRouteCheck_1

KalamiCity_EventScript_UniversityStudentRouteCheck_5:
# 252 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 253 "data/maps/KalamiCity/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 254 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_UniversityStudentRouteCheck_Text_0
# 255 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_UniversityStudentRouteCheck_Text_3
# 256 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 257 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 260 "data/maps/KalamiCity/scripts.pory"
	giveitem ITEM_TM_WHIRLPOOL
# 261 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 262 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 264 "data/maps/KalamiCity/scripts.pory"
	checkoutfitflag OUTFIT_EAST_BLUE
# 265 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KalamiCity_EventScript_UniversityStudentRouteCheck_8
KalamiCity_EventScript_UniversityStudentRouteCheck_7:
# 273 "data/maps/KalamiCity/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_KALAMI_CITY
	goto KalamiCity_EventScript_UniversityStudentRouteCheck_1

KalamiCity_EventScript_UniversityStudentRouteCheck_8:
# 267 "data/maps/KalamiCity/scripts.pory"
	unlockoutfit OUTFIT_EAST_BLUE
# 268 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_UniversityStudentRouteCheck_Text_4
# 269 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 270 "data/maps/KalamiCity/scripts.pory"
	closemessage
	goto KalamiCity_EventScript_UniversityStudentRouteCheck_7


KalamiCity_Sign_GymSign::
# 283 "data/maps/KalamiCity/scripts.pory"
	lock
# 284 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_Sign_GymSign_Text_0
# 285 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 286 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Camper::
# 292 "data/maps/KalamiCity/scripts.pory"
	lock
# 293 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 294 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Camper_Text_0
# 295 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Camper_Text_1
# 296 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 297 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Artist::
# 303 "data/maps/KalamiCity/scripts.pory"
	lock
# 304 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 305 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 308 "data/maps/KalamiCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_KALAMI_HEART_SCALE
# 309 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KalamiCity_EventScript_Artist_2
# 318 "data/maps/KalamiCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_KALAMI_HEART_SCALE
# 319 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KalamiCity_EventScript_Artist_4
# 329 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_3
# 330 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 332 "data/maps/KalamiCity/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 333 "data/maps/KalamiCity/scripts.pory"
	delay 30
# 335 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KalamiCity_EventScript_Artist_7
# 343 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 344 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_5
# 345 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 346 "data/maps/KalamiCity/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 347 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 348 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 349 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_6
# 350 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 352 "data/maps/KalamiCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 353 "data/maps/KalamiCity/scripts.pory"
	delay 60
# 354 "data/maps/KalamiCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 355 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 357 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 358 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_7
# 359 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 360 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 361 "data/maps/KalamiCity/scripts.pory"
	adddecoration DECOR_OPAL_FISH_POSTER
# 362 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_8
# 363 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 364 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 365 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 366 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 367 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_9
# 368 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 370 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 371 "data/maps/KalamiCity/scripts.pory"
	completequest QUEST_KALAMI_HEART_SCALE
	return

KalamiCity_EventScript_Artist_2:
# 311 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_1
# 312 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 313 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_Artist_4:
# 321 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_2
# 322 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 324 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 325 "data/maps/KalamiCity/scripts.pory"
	startquest QUEST_KALAMI_HEART_SCALE
	return

KalamiCity_EventScript_Artist_7:
# 337 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 338 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_4
# 339 "data/maps/KalamiCity/scripts.pory"
	closemessage
	return


KalamiCity_EventScript_Sailor::
# 378 "data/maps/KalamiCity/scripts.pory"
	lock
# 379 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 380 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Sailor_Text_0
# 381 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Sailor_Text_1
# 382 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 383 "data/maps/KalamiCity/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 384 "data/maps/KalamiCity/scripts.pory"
	waitmovement 0
# 385 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Sailor2::
# 391 "data/maps/KalamiCity/scripts.pory"
	lock
# 392 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 393 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Sailor_Text_0
# 394 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Sailor2_Text_0
# 395 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 396 "data/maps/KalamiCity/scripts.pory"
	goto_if_unset FLAG_GOT_ABILITY_CAPSULE_KALAMI_CITY, KalamiCity_EventScript_Sailor2_2
KalamiCity_EventScript_Sailor2_1:
# 404 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_Sailor2_2:
# 398 "data/maps/KalamiCity/scripts.pory"
	setflag FLAG_GOT_ABILITY_CAPSULE_KALAMI_CITY
# 399 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Sailor_Text_0
# 400 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Sailor2_Text_1
# 401 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 402 "data/maps/KalamiCity/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
	goto KalamiCity_EventScript_Sailor2_1


KalamiCity_EventScript_Fisherman::
# 410 "data/maps/KalamiCity/scripts.pory"
	lock
# 411 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 412 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Fisherman_Text_0
# 413 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Fisherman_Text_1
# 414 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 415 "data/maps/KalamiCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OLD_ROD, KalamiCity_EventScript_Fisherman_2
KalamiCity_EventScript_Fisherman_1:
# 426 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_Fisherman_2:
# 417 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Fisherman_Text_0
# 418 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Fisherman_Text_2
# 419 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 420 "data/maps/KalamiCity/scripts.pory"
	giveitem ITEM_OLD_ROD
# 421 "data/maps/KalamiCity/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 422 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Fisherman_Text_0
# 423 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Fisherman_Text_3
# 424 "data/maps/KalamiCity/scripts.pory"
	closemessage
	goto KalamiCity_EventScript_Fisherman_1


KalamiCity_EventScript_Bounsweet::
# 432 "data/maps/KalamiCity/scripts.pory"
	lock
# 433 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 434 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Bounsweet_Text_0
# 435 "data/maps/KalamiCity/scripts.pory"
	playmoncry SPECIES_BOUNSWEET, CRY_MODE_NORMAL
# 436 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Bounsweet_Text_1
# 437 "data/maps/KalamiCity/scripts.pory"
	waitmoncry
# 438 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 439 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Aipom::
# 445 "data/maps/KalamiCity/scripts.pory"
	lock
# 446 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 447 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Aipom_Text_0
# 448 "data/maps/KalamiCity/scripts.pory"
	playmoncry SPECIES_AIPOM, CRY_MODE_NORMAL
# 449 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Aipom_Text_1
# 450 "data/maps/KalamiCity/scripts.pory"
	waitmoncry
# 451 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 452 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Lass::
# 458 "data/maps/KalamiCity/scripts.pory"
	lock
# 459 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 460 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Lass_Text_0
# 461 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Lass_Text_1
# 462 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 463 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_BugCatcher::
# 469 "data/maps/KalamiCity/scripts.pory"
	lock
# 470 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 471 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_BugCatcher_Text_0
# 472 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_BugCatcher_Text_1
# 473 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 474 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Beauty::
# 480 "data/maps/KalamiCity/scripts.pory"
	lock
# 481 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 482 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Beauty_Text_0
# 483 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Beauty_Text_1
# 484 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 485 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_WallWorker::
# 491 "data/maps/KalamiCity/scripts.pory"
	lock
# 492 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 493 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_WallWorker_Text_0
# 494 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_WallWorker_Text_1
# 495 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 496 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_PerformerM::
# 502 "data/maps/KalamiCity/scripts.pory"
	lock
# 503 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 504 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_PerformerM_Text_0
# 505 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_PerformerM_Text_1
# 506 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 507 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_BlackBelt::
# 513 "data/maps/KalamiCity/scripts.pory"
	lock
# 514 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 515 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_BlackBelt_Text_0
# 516 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_BlackBelt_Text_1
# 517 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 518 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Youngster::
# 524 "data/maps/KalamiCity/scripts.pory"
	lock
# 525 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 526 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Youngster_Text_0
# 527 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Youngster_Text_1
# 528 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 529 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Girl::
# 535 "data/maps/KalamiCity/scripts.pory"
	lock
# 536 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 537 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Girl_Text_0
# 538 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Girl_Text_1
# 539 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 540 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Athlete::
# 546 "data/maps/KalamiCity/scripts.pory"
	lock
# 547 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 548 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Athlete_Text_0
# 549 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Athlete_Text_1
# 550 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 551 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Amaura::
# 557 "data/maps/KalamiCity/scripts.pory"
	lock
# 558 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 559 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Amaura_Text_0
# 560 "data/maps/KalamiCity/scripts.pory"
	playmoncry SPECIES_AMAURA, CRY_MODE_NORMAL
# 561 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Amaura_Text_1
# 562 "data/maps/KalamiCity/scripts.pory"
	waitmoncry
# 563 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 564 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_EastBlueOutfitBeauty::
# 570 "data/maps/KalamiCity/scripts.pory"
	lock
# 571 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 572 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0
# 573 "data/maps/KalamiCity/scripts.pory"
	checkoutfitflag OUTFIT_EAST_BLUE
# 575 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KalamiCity_EventScript_EastBlueOutfitBeauty_2
# 625 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_6
# 626 "data/maps/KalamiCity/scripts.pory"
	closemessage
KalamiCity_EventScript_EastBlueOutfitBeauty_1:
# 628 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_EastBlueOutfitBeauty_2:
# 577 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_1
# 578 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 579 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 580 "data/maps/KalamiCity/scripts.pory"
	showmoneybox 0, 0
# 581 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0
# 582 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_2, MSGBOX_YESNO
# 583 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 584 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KalamiCity_EventScript_EastBlueOutfitBeauty_5
# 596 "data/maps/KalamiCity/scripts.pory"
	checkmoney 6000
# 597 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KalamiCity_EventScript_EastBlueOutfitBeauty_8
# 608 "data/maps/KalamiCity/scripts.pory"
	removemoney 6000
# 609 "data/maps/KalamiCity/scripts.pory"
	updatemoneybox
# 610 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 611 "data/maps/KalamiCity/scripts.pory"
	unlockoutfit OUTFIT_EAST_BLUE
# 612 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_UniversityStudentRouteCheck_Text_4
# 613 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 614 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 615 "data/maps/KalamiCity/scripts.pory"
	hidemoneybox
# 616 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 617 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0
# 618 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_5
# 619 "data/maps/KalamiCity/scripts.pory"
	closemessage
	goto KalamiCity_EventScript_EastBlueOutfitBeauty_1

KalamiCity_EventScript_EastBlueOutfitBeauty_5:
# 586 "data/maps/KalamiCity/scripts.pory"
	hidemoneybox
# 587 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0
# 588 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_3
# 589 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 590 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_EastBlueOutfitBeauty_8:
# 599 "data/maps/KalamiCity/scripts.pory"
	hidemoneybox
# 600 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0
# 601 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_4
# 602 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 603 "data/maps/KalamiCity/scripts.pory"
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
# 94 "data/maps/KalamiCity/scripts.pory"
	.string "Wakewater Isle$"

Common_EventScript_Piraeus_Text_14:
# 105 "data/maps/KalamiCity/scripts.pory"
	.string "Ehehe, glad to see the Champion still\n"
	.string "hangs around with the likes of me!$"

Common_EventScript_Piraeus_Text_15:
# 110 "data/maps/KalamiCity/scripts.pory"
	.string "How's the ol' adventure going,\n"
	.string "{PLAYER}? You still winning Gym\l"
	.string "Badges and knocking Team Chimera\l"
	.string "heads? Fwahaha!$"

Common_EventScript_Piraeus_Text_16:
# 122 "data/maps/KalamiCity/scripts.pory"
	.string "Kalami City! That's quite the challenge,\n"
	.string "sailing between those mangrove trees\l"
	.string "and shallow patches. But hey, I've got\l"
	.string "some Poké ball shopping to do there, so\l"
	.string "let's go!$"

Common_EventScript_Piraeus_Text_17:
# 131 "data/maps/KalamiCity/scripts.pory"
	.string "Pythios Town, eh? I've still got bad\n"
	.string "memories from that place, after my\l"
	.string "run-in with Team Chimera. Let's make\l"
	.string "this a quick trip, ehehe!$"

Common_EventScript_Piraeus_Text_18:
# 140 "data/maps/KalamiCity/scripts.pory"
	.string "Sofos City, eh? The heart of the Ilios\n"
	.string "Region! While you keep adventuring, I\l"
	.string "may play a little Pinball. I'm not good,\l"
	.string "but it's fun!$"

Common_EventScript_Piraeus_Text_19:
# 149 "data/maps/KalamiCity/scripts.pory"
	.string "That's one of my favorite little spots\n"
	.string "in Ilios! Maybe you could swing by the\l"
	.string "Sunset Wildlife Conservation Center\l"
	.string "while you're there. Come on, let's take\l"
	.string "off!$"

Common_EventScript_Piraeus_Text_20:
# 158 "data/maps/KalamiCity/scripts.pory"
	.string "Marmaro Island! A beautiful little spot.\n"
	.string "Their marble helped build structures\l"
	.string "across the ancient Ilios Region. Let's\l"
	.string "check it out!$"

Common_EventScript_Piraeus_Text_21:
# 167 "data/maps/KalamiCity/scripts.pory"
	.string "Hey, I love Myrrini Island! Their wine\n"
	.string "and fruit are famous around the world. I\l"
	.string "hope there's a festival going on!$"

Common_EventScript_Piraeus_Text_22:
# 176 "data/maps/KalamiCity/scripts.pory"
	.string "Oho, what are the odds? I was about to\n"
	.string "sail there for a Pokémon Contest\l"
	.string "myself! Let's get going!$"

Common_EventScript_Piraeus_Text_23:
# 185 "data/maps/KalamiCity/scripts.pory"
	.string "The Fresco Isles, eh? For a group of\n"
	.string "islands, it gets awful dry there. Maybe\l"
	.string "you'll find some unique Pokémon there!$"

Common_EventScript_Piraeus_Text_24:
# 194 "data/maps/KalamiCity/scripts.pory"
	.string "Palati City! That's on Kaptara Island,\n"
	.string "right? That place is covered with\l"
	.string "gorgeous ruins... maybe I'll do a little\l"
	.string "exploring when we get there!$"

Common_EventScript_Piraeus_Text_25:
# 203 "data/maps/KalamiCity/scripts.pory"
	.string "Port Pello! Their cherry trees are\n"
	.string "world-famous! They say a magic Tropius\l"
	.string "blessed their lands. How about we see it\l"
	.string "for ourselves?$"

Common_EventScript_Piraeus_Text_26:
# 212 "data/maps/KalamiCity/scripts.pory"
	.string "Ohoho, you're looking for a challenge,\n"
	.string "eh? You'd better get your Pokémon\l"
	.string "ready on the way there!$"

KalamiCity_EventScript_DirectionSign_Text_0:
# 228 "data/maps/KalamiCity/scripts.pory"
	.string "Kalami City\n"
	.string "Reeds, Vines, and Industry\p"
	.string "{UP_ARROW} Riverwalk Trail - South$"

KalamiCity_EventScript_UniversityStudentRouteCheck_Text_0:
# 238 "data/maps/KalamiCity/scripts.pory"
	.string "Uni. Student$"

KalamiCity_EventScript_UniversityStudentRouteCheck_Text_1:
# 242 "data/maps/KalamiCity/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

KalamiCity_EventScript_UniversityStudentRouteCheck_Text_2:
# 247 "data/maps/KalamiCity/scripts.pory"
	.string "Chaire (Hyeh-rei)! I'm a student from\n"
	.string "the Acrisia University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in Kalami City. If you've\l"
	.string "caught all the Pokémon here, please let\l"
	.string "me know.$"

KalamiCity_EventScript_UniversityStudentRouteCheck_Text_3:
# 255 "data/maps/KalamiCity/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

KalamiCity_EventScript_UniversityStudentRouteCheck_Text_4:
# 268 "data/maps/KalamiCity/scripts.pory"
	.string "The East Ilios Blue Outfit has been\n"
	.string "added to the Outfit Box!$"

KalamiCity_Sign_GymSign_Text_0:
# 284 "data/maps/KalamiCity/scripts.pory"
	.string "Gym Leader: Ourani\n"
	.string "The Muse of Sky-bound Industry$"

KalamiCity_EventScript_Camper_Text_0:
# 294 "data/maps/KalamiCity/scripts.pory"
	.string "Camper$"

KalamiCity_EventScript_Camper_Text_1:
# 295 "data/maps/KalamiCity/scripts.pory"
	.string "Hehehe, I love the shallows around\n"
	.string "Kalami City! I like feeling the sand and\l"
	.string "pebbles between my toes!$"

KalamiCity_EventScript_Artist_Text_0:
# 305 "data/maps/KalamiCity/scripts.pory"
	.string "Artist$"

KalamiCity_EventScript_Artist_Text_1:
# 311 "data/maps/KalamiCity/scripts.pory"
	.string "I've been inspired by your Heart Scale!\n"
	.string "I feel my creative juices flowing, I\l"
	.string "must make more shining, opal art!$"

KalamiCity_EventScript_Artist_Text_2:
# 321 "data/maps/KalamiCity/scripts.pory"
	.string "Hm? Oh, hi. Sorry, I'm hoping the ocean\n"
	.string "gives me inspiration. I've been\l"
	.string "struggling with artist's block for\l"
	.string "months, and there's no end in sight.\p"
	.string "I'm looking for something so beautiful,\n"
	.string "so sparkly, that it inspires me. A {COLOR GREEN}Heart\l"
	.string "Scale{COLOR DARK_GRAY} would be just perfect!$"

KalamiCity_EventScript_Artist_Text_3:
# 329 "data/maps/KalamiCity/scripts.pory"
	.string "Welcome back. I still can't seem to find\n"
	.string "inspiration... did you happen to bring a\l"
	.string "{COLOR GREEN}Heart Scale{COLOR DARK_GRAY}?$"

KalamiCity_EventScript_Artist_Text_4:
# 338 "data/maps/KalamiCity/scripts.pory"
	.string "Aw, looks like my artist's block will\n"
	.string "continue.\p"
	.string "If you happen to find an extra {COLOR GREEN}Heart\n"
	.string "Scale{COLOR DARK_GRAY}, please let me know!$"

KalamiCity_EventScript_Artist_Text_5:
# 344 "data/maps/KalamiCity/scripts.pory"
	.string "Incredible! The ripples of color, the\n"
	.string "sparkle in the light... it's unlike\l"
	.string "anything I've ever seen! Please, let me\l"
	.string "keep this and use it for inspiration!$"

KalamiCity_EventScript_Artist_Text_6:
# 349 "data/maps/KalamiCity/scripts.pory"
	.string "I'm so inspired, I could paint something\n"
	.string "right now! Wait there!$"

KalamiCity_EventScript_Artist_Text_7:
# 358 "data/maps/KalamiCity/scripts.pory"
	.string "My first masterpiece is complete! I\n"
	.string "want you to have it, as a symbol of our\l"
	.string "artistic partnership!$"

KalamiCity_EventScript_Artist_Text_8:
# 362 "data/maps/KalamiCity/scripts.pory"
	.string "{PLAYER} was given an Opal Fish\n"
	.string "Poster!$"

KalamiCity_EventScript_Artist_Text_9:
# 367 "data/maps/KalamiCity/scripts.pory"
	.string "That's a Poster of an extinct Pokémon,\n"
	.string "Relicanth, with hardened scales made of\l"
	.string "opal Heart Scales. I wanted it to\l"
	.string "symbolize the beauty and tragedy in\l"
	.string "lost species.\p"
	.string "If you don't have anywhere to put that\n"
	.string "Poster yet, maybe you {COLOR GREEN}will in the\l"
	.string "future{COLOR DARK_GRAY}. Hold onto it for me!$"

KalamiCity_EventScript_Sailor_Text_0:
# 380 "data/maps/KalamiCity/scripts.pory"
	.string "Sailor$"

KalamiCity_EventScript_Sailor_Text_1:
# 381 "data/maps/KalamiCity/scripts.pory"
	.string "Only a few larger boats like this can\n"
	.string "make it past the rocks and plants to\l"
	.string "these docks. It's tough, but we make it\l"
	.string "work.$"

KalamiCity_EventScript_Sailor2_Text_0:
# 394 "data/maps/KalamiCity/scripts.pory"
	.string "A lot of important goods come through\n"
	.string "the Kalami City ports.\p"
	.string "It's hard to sail through the mangrove,\n"
	.string "but the items produced by the\l"
	.string "industrial center here are real useful.$"

KalamiCity_EventScript_Sailor2_Text_1:
# 400 "data/maps/KalamiCity/scripts.pory"
	.string "Here, I'll give you a sample!$"

KalamiCity_EventScript_Fisherman_Text_0:
# 412 "data/maps/KalamiCity/scripts.pory"
	.string "Fishing Guru$"

KalamiCity_EventScript_Fisherman_Text_1:
# 413 "data/maps/KalamiCity/scripts.pory"
	.string "I've lived here since before Ourani and\n"
	.string "the industrial center was settled here.\l"
	.string "I fished here when I was a kid, and I'll\l"
	.string "keep fishing here until I'm old!$"

KalamiCity_EventScript_Fisherman_Text_2:
# 418 "data/maps/KalamiCity/scripts.pory"
	.string "I've got an extra {COLOR GREEN}Old Rod{COLOR DARK_GRAY} here. You look\n"
	.string "like you'd make a great angler one day...\l"
	.string "here, I want you to have this!$"

KalamiCity_EventScript_Fisherman_Text_3:
# 423 "data/maps/KalamiCity/scripts.pory"
	.string "Fishing opens up a whole new world of\n"
	.string "Pokémon! Make sure you fish every day.$"

KalamiCity_EventScript_Bounsweet_Text_0:
# 434 "data/maps/KalamiCity/scripts.pory"
	.string "Bounsweet$"

KalamiCity_EventScript_Bounsweet_Text_1:
# 436 "data/maps/KalamiCity/scripts.pory"
	.string "Cree-ee!$"

KalamiCity_EventScript_Aipom_Text_0:
# 447 "data/maps/KalamiCity/scripts.pory"
	.string "Aipom$"

KalamiCity_EventScript_Aipom_Text_1:
# 449 "data/maps/KalamiCity/scripts.pory"
	.string "Eek eek!$"

KalamiCity_EventScript_Lass_Text_0:
# 460 "data/maps/KalamiCity/scripts.pory"
	.string "Lass$"

KalamiCity_EventScript_Lass_Text_1:
# 461 "data/maps/KalamiCity/scripts.pory"
	.string "Look, I found this Bounsweet rooting\n"
	.string "around in the crates! I think it wanted\l"
	.string "a Trainer to be its friend.$"

KalamiCity_EventScript_BugCatcher_Text_0:
# 471 "data/maps/KalamiCity/scripts.pory"
	.string "Bug Catcher$"

KalamiCity_EventScript_BugCatcher_Text_1:
# 472 "data/maps/KalamiCity/scripts.pory"
	.string "I learned all about how Pokémon live\n"
	.string "together in places like this in school!\l"
	.string "Pokémon from the water and the land\l"
	.string "help each other out in a bunch of cool\l"
	.string "ways!$"

KalamiCity_EventScript_Beauty_Text_0:
# 482 "data/maps/KalamiCity/scripts.pory"
	.string "Beauty$"

KalamiCity_EventScript_Beauty_Text_1:
# 483 "data/maps/KalamiCity/scripts.pory"
	.string "This fruit tree at the center of town is\n"
	.string "the only one of its kind in Kalami City.\l"
	.string "They say it's the last tree from before\l"
	.string "the swamp crept in and people started\l"
	.string "building here.$"

KalamiCity_EventScript_WallWorker_Text_0:
# 493 "data/maps/KalamiCity/scripts.pory"
	.string "Worker$"

KalamiCity_EventScript_WallWorker_Text_1:
# 494 "data/maps/KalamiCity/scripts.pory"
	.string "The land around Kalami City is always\n"
	.string "sinking. The swamp and water creeps in,\l"
	.string "and I'm stuck trying to keep these\l"
	.string "walls in good condition!$"

KalamiCity_EventScript_PerformerM_Text_0:
# 504 "data/maps/KalamiCity/scripts.pory"
	.string "Performer$"

KalamiCity_EventScript_PerformerM_Text_1:
# 505 "data/maps/KalamiCity/scripts.pory"
	.string "I dream of performing comedy shows on\n"
	.string "the biggest stages of Ilios! For now,\l"
	.string "though, I'm just sticking with street\l"
	.string "shows here.$"

KalamiCity_EventScript_BlackBelt_Text_0:
# 515 "data/maps/KalamiCity/scripts.pory"
	.string "Black Belt$"

KalamiCity_EventScript_BlackBelt_Text_1:
# 516 "data/maps/KalamiCity/scripts.pory"
	.string "I taught my Pokémon to use Karate Chop\n"
	.string "so it could cut through the vines and\l"
	.string "reeds in the swamp. Now it helps me\l"
	.string "explore the area around the city!$"

KalamiCity_EventScript_Youngster_Text_0:
# 526 "data/maps/KalamiCity/scripts.pory"
	.string "Youngster$"

KalamiCity_EventScript_Youngster_Text_1:
# 527 "data/maps/KalamiCity/scripts.pory"
	.string "My dad says the walls keep the swamp\n"
	.string "from coming into the city. I don't see\l"
	.string "what would be so wrong about that! I\l"
	.string "could make friends with all the new\l"
	.string "Pokémon!$"

KalamiCity_EventScript_Girl_Text_0:
# 537 "data/maps/KalamiCity/scripts.pory"
	.string "Girl$"

KalamiCity_EventScript_Girl_Text_1:
# 538 "data/maps/KalamiCity/scripts.pory"
	.string "My Pokémon was rooting around in the\n"
	.string "dirt, and it found a weird, minty plant. I\l"
	.string "think it changed natures after\l"
	.string "sniffing it!$"

KalamiCity_EventScript_Athlete_Text_0:
# 548 "data/maps/KalamiCity/scripts.pory"
	.string "Athlete$"

KalamiCity_EventScript_Athlete_Text_1:
# 549 "data/maps/KalamiCity/scripts.pory"
	.string "I'm training in the shallow water to\n"
	.string "make my legs stronger! At this rate, I'll\l"
	.string "be the fastest guy in Ilios!$"

KalamiCity_EventScript_Amaura_Text_0:
# 559 "data/maps/KalamiCity/scripts.pory"
	.string "Amaura$"

KalamiCity_EventScript_Amaura_Text_1:
# 561 "data/maps/KalamiCity/scripts.pory"
	.string "Hraaah...!$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0:
# 572 "data/maps/KalamiCity/scripts.pory"
	.string "Fashionista$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_1:
# 577 "data/maps/KalamiCity/scripts.pory"
	.string "My sweet, colorful Amaura has inspired\n"
	.string "me to put together a new outfit!$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_2:
# 582 "data/maps/KalamiCity/scripts.pory"
	.string "I can tell you have a sharp eye for\n"
	.string "fashion! I'll give you this {COLOR GREEN}East Ilios\l"
	.string "Blue Outfit{COLOR DARK_GRAY} for just ¥6000. How about\l"
	.string "it?$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_3:
# 588 "data/maps/KalamiCity/scripts.pory"
	.string "No? But I thought you were into\n"
	.string "fashion!$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_4:
# 601 "data/maps/KalamiCity/scripts.pory"
	.string "Hey, you don't have the money for that!$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_5:
# 618 "data/maps/KalamiCity/scripts.pory"
	.string "Sweet! The East Ilios Blue Outfit\n"
	.string "incorporates the most recent fashion\l"
	.string "trends from the coastal areas of the\l"
	.string "region.$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_6:
# 625 "data/maps/KalamiCity/scripts.pory"
	.string "Have you tried on the East Ilios Blue\n"
	.string "Outfit? It sticks to the coolest, most\l"
	.string "recent fashion trends!$"

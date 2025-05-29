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


KalamiCity_Sign_GymSign::
# 219 "data/maps/KalamiCity/scripts.pory"
	lock
# 220 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_Sign_GymSign_Text_0
# 221 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 222 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Camper::
# 228 "data/maps/KalamiCity/scripts.pory"
	lock
# 229 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 230 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Camper_Text_0
# 231 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Camper_Text_1
# 232 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 233 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Artist::
# 239 "data/maps/KalamiCity/scripts.pory"
	lock
# 240 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 241 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 244 "data/maps/KalamiCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_KALAMI_HEART_SCALE
# 245 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KalamiCity_EventScript_Artist_2
# 254 "data/maps/KalamiCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_KALAMI_HEART_SCALE
# 255 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KalamiCity_EventScript_Artist_4
# 265 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_3
# 266 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 268 "data/maps/KalamiCity/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 269 "data/maps/KalamiCity/scripts.pory"
	delay 30
# 271 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KalamiCity_EventScript_Artist_7
# 279 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 280 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_5
# 281 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 282 "data/maps/KalamiCity/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 283 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 284 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 285 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_6
# 286 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 288 "data/maps/KalamiCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 289 "data/maps/KalamiCity/scripts.pory"
	delay 60
# 290 "data/maps/KalamiCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 291 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 293 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 294 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_7
# 295 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 296 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 297 "data/maps/KalamiCity/scripts.pory"
	adddecoration DECOR_OPAL_FISH_POSTER
# 298 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_8
# 299 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 300 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 301 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 302 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 303 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_9
# 304 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 306 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 307 "data/maps/KalamiCity/scripts.pory"
	completequest QUEST_KALAMI_HEART_SCALE
	return

KalamiCity_EventScript_Artist_2:
# 247 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_1
# 248 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 249 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_Artist_4:
# 257 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_2
# 258 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 260 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 261 "data/maps/KalamiCity/scripts.pory"
	startquest QUEST_KALAMI_HEART_SCALE
	return

KalamiCity_EventScript_Artist_7:
# 273 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 274 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_4
# 275 "data/maps/KalamiCity/scripts.pory"
	closemessage
	return


KalamiCity_EventScript_Sailor::
# 314 "data/maps/KalamiCity/scripts.pory"
	lock
# 315 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 316 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Sailor_Text_0
# 317 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Sailor_Text_1
# 318 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 319 "data/maps/KalamiCity/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 320 "data/maps/KalamiCity/scripts.pory"
	waitmovement 0
# 321 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Sailor2::
# 327 "data/maps/KalamiCity/scripts.pory"
	lock
# 328 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 329 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Sailor_Text_0
# 330 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Sailor2_Text_0
# 331 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 332 "data/maps/KalamiCity/scripts.pory"
	goto_if_unset FLAG_GOT_ABILITY_CAPSULE_KALAMI_CITY, KalamiCity_EventScript_Sailor2_2
KalamiCity_EventScript_Sailor2_1:
# 340 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_Sailor2_2:
# 334 "data/maps/KalamiCity/scripts.pory"
	setflag FLAG_GOT_ABILITY_CAPSULE_KALAMI_CITY
# 335 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Sailor_Text_0
# 336 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Sailor2_Text_1
# 337 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 338 "data/maps/KalamiCity/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
	goto KalamiCity_EventScript_Sailor2_1


KalamiCity_EventScript_Fisherman::
# 346 "data/maps/KalamiCity/scripts.pory"
	lock
# 347 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 348 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Fisherman_Text_0
# 349 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Fisherman_Text_1
# 350 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 351 "data/maps/KalamiCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OLD_ROD, KalamiCity_EventScript_Fisherman_2
KalamiCity_EventScript_Fisherman_1:
# 362 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_Fisherman_2:
# 353 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Fisherman_Text_0
# 354 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Fisherman_Text_2
# 355 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 356 "data/maps/KalamiCity/scripts.pory"
	giveitem ITEM_OLD_ROD
# 357 "data/maps/KalamiCity/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 358 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Fisherman_Text_0
# 359 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Fisherman_Text_3
# 360 "data/maps/KalamiCity/scripts.pory"
	closemessage
	goto KalamiCity_EventScript_Fisherman_1


KalamiCity_EventScript_Bounsweet::
# 368 "data/maps/KalamiCity/scripts.pory"
	lock
# 369 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 370 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Bounsweet_Text_0
# 371 "data/maps/KalamiCity/scripts.pory"
	playmoncry SPECIES_BOUNSWEET, CRY_MODE_NORMAL
# 372 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Bounsweet_Text_1
# 373 "data/maps/KalamiCity/scripts.pory"
	waitmoncry
# 374 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 375 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Aipom::
# 381 "data/maps/KalamiCity/scripts.pory"
	lock
# 382 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 383 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Aipom_Text_0
# 384 "data/maps/KalamiCity/scripts.pory"
	playmoncry SPECIES_AIPOM, CRY_MODE_NORMAL
# 385 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Aipom_Text_1
# 386 "data/maps/KalamiCity/scripts.pory"
	waitmoncry
# 387 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 388 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Lass::
# 394 "data/maps/KalamiCity/scripts.pory"
	lock
# 395 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 396 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Lass_Text_0
# 397 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Lass_Text_1
# 398 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 399 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_BugCatcher::
# 405 "data/maps/KalamiCity/scripts.pory"
	lock
# 406 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 407 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_BugCatcher_Text_0
# 408 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_BugCatcher_Text_1
# 409 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 410 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Beauty::
# 416 "data/maps/KalamiCity/scripts.pory"
	lock
# 417 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 418 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Beauty_Text_0
# 419 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Beauty_Text_1
# 420 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 421 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_WallWorker::
# 427 "data/maps/KalamiCity/scripts.pory"
	lock
# 428 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 429 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_WallWorker_Text_0
# 430 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_WallWorker_Text_1
# 431 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 432 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_PerformerM::
# 438 "data/maps/KalamiCity/scripts.pory"
	lock
# 439 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 440 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_PerformerM_Text_0
# 441 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_PerformerM_Text_1
# 442 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 443 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_BlackBelt::
# 449 "data/maps/KalamiCity/scripts.pory"
	lock
# 450 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 451 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_BlackBelt_Text_0
# 452 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_BlackBelt_Text_1
# 453 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 454 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Youngster::
# 460 "data/maps/KalamiCity/scripts.pory"
	lock
# 461 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 462 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Youngster_Text_0
# 463 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Youngster_Text_1
# 464 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 465 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Girl::
# 471 "data/maps/KalamiCity/scripts.pory"
	lock
# 472 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 473 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Girl_Text_0
# 474 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Girl_Text_1
# 475 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 476 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Athlete::
# 482 "data/maps/KalamiCity/scripts.pory"
	lock
# 483 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 484 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Athlete_Text_0
# 485 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Athlete_Text_1
# 486 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 487 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Amaura::
# 493 "data/maps/KalamiCity/scripts.pory"
	lock
# 494 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 495 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Amaura_Text_0
# 496 "data/maps/KalamiCity/scripts.pory"
	playmoncry SPECIES_AMAURA, CRY_MODE_NORMAL
# 497 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Amaura_Text_1
# 498 "data/maps/KalamiCity/scripts.pory"
	waitmoncry
# 499 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 500 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_EastBlueOutfitBeauty::
# 506 "data/maps/KalamiCity/scripts.pory"
	lock
# 507 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 508 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0
# 509 "data/maps/KalamiCity/scripts.pory"
	checkoutfitflag OUTFIT_EAST_BLUE
# 511 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KalamiCity_EventScript_EastBlueOutfitBeauty_2
# 561 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_7
# 562 "data/maps/KalamiCity/scripts.pory"
	closemessage
KalamiCity_EventScript_EastBlueOutfitBeauty_1:
# 564 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_EastBlueOutfitBeauty_2:
# 513 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_1
# 514 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 515 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 516 "data/maps/KalamiCity/scripts.pory"
	showmoneybox 0, 0
# 517 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0
# 518 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_2, MSGBOX_YESNO
# 519 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 520 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KalamiCity_EventScript_EastBlueOutfitBeauty_5
# 532 "data/maps/KalamiCity/scripts.pory"
	checkmoney 6000
# 533 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KalamiCity_EventScript_EastBlueOutfitBeauty_8
# 544 "data/maps/KalamiCity/scripts.pory"
	removemoney 6000
# 545 "data/maps/KalamiCity/scripts.pory"
	updatemoneybox
# 546 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 547 "data/maps/KalamiCity/scripts.pory"
	unlockoutfit OUTFIT_EAST_BLUE
# 548 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_5
# 549 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 550 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 551 "data/maps/KalamiCity/scripts.pory"
	hidemoneybox
# 552 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 553 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0
# 554 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_6
# 555 "data/maps/KalamiCity/scripts.pory"
	closemessage
	goto KalamiCity_EventScript_EastBlueOutfitBeauty_1

KalamiCity_EventScript_EastBlueOutfitBeauty_5:
# 522 "data/maps/KalamiCity/scripts.pory"
	hidemoneybox
# 523 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0
# 524 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_3
# 525 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 526 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_EastBlueOutfitBeauty_8:
# 535 "data/maps/KalamiCity/scripts.pory"
	hidemoneybox
# 536 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0
# 537 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_EastBlueOutfitBeauty_Text_4
# 538 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 539 "data/maps/KalamiCity/scripts.pory"
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

KalamiCity_Sign_GymSign_Text_0:
# 220 "data/maps/KalamiCity/scripts.pory"
	.string "Gym Leader: Mattaios\n"
	.string "The Hard-Working Engineer$"

KalamiCity_EventScript_Camper_Text_0:
# 230 "data/maps/KalamiCity/scripts.pory"
	.string "Camper$"

KalamiCity_EventScript_Camper_Text_1:
# 231 "data/maps/KalamiCity/scripts.pory"
	.string "Hehehe, I love the shallows around\n"
	.string "Kalami City! I like feeling the sand and\l"
	.string "pebbles between my toes!$"

KalamiCity_EventScript_Artist_Text_0:
# 241 "data/maps/KalamiCity/scripts.pory"
	.string "Artist$"

KalamiCity_EventScript_Artist_Text_1:
# 247 "data/maps/KalamiCity/scripts.pory"
	.string "I've been inspired by your Heart Scale!\n"
	.string "I feel my creative juices flowing, I\l"
	.string "must make more shining, opal art!$"

KalamiCity_EventScript_Artist_Text_2:
# 257 "data/maps/KalamiCity/scripts.pory"
	.string "Hm? Oh, hi. Sorry, I'm hoping the ocean\n"
	.string "gives me inspiration. I've been\l"
	.string "struggling with artist's block for\l"
	.string "months, and there's no end in sight.\p"
	.string "I'm looking for something so beautiful,\n"
	.string "so sparkly, that it inspires me. A {COLOR GREEN}Heart\l"
	.string "Scale{COLOR DARK_GRAY} would be just perfect!$"

KalamiCity_EventScript_Artist_Text_3:
# 265 "data/maps/KalamiCity/scripts.pory"
	.string "Welcome back. I still can't seem to find\n"
	.string "inspiration... did you happen to bring a\l"
	.string "{COLOR GREEN}Heart Scale{COLOR DARK_GRAY}?$"

KalamiCity_EventScript_Artist_Text_4:
# 274 "data/maps/KalamiCity/scripts.pory"
	.string "Aw, looks like my artist's block will\n"
	.string "continue.\p"
	.string "If you happen to find an extra {COLOR GREEN}Heart\n"
	.string "Scale{COLOR DARK_GRAY}, please let me know!$"

KalamiCity_EventScript_Artist_Text_5:
# 280 "data/maps/KalamiCity/scripts.pory"
	.string "Incredible! The ripples of color, the\n"
	.string "sparkle in the light... it's unlike\l"
	.string "anything I've ever seen! Please, let me\l"
	.string "keep this and use it for inspiration!$"

KalamiCity_EventScript_Artist_Text_6:
# 285 "data/maps/KalamiCity/scripts.pory"
	.string "I'm so inspired, I could paint something\n"
	.string "right now! Wait there!$"

KalamiCity_EventScript_Artist_Text_7:
# 294 "data/maps/KalamiCity/scripts.pory"
	.string "My first masterpiece is complete! I\n"
	.string "want you to have it, as a symbol of our\l"
	.string "artistic partnership!$"

KalamiCity_EventScript_Artist_Text_8:
# 298 "data/maps/KalamiCity/scripts.pory"
	.string "{PLAYER} was given an Opal Fish\n"
	.string "Poster!$"

KalamiCity_EventScript_Artist_Text_9:
# 303 "data/maps/KalamiCity/scripts.pory"
	.string "That's a Poster of an extinct Pokémon,\n"
	.string "Relicanth, with hardened scales made of\l"
	.string "opal Heart Scales. I wanted it to\l"
	.string "symbolize the beauty and tragedy in\l"
	.string "lost species.\p"
	.string "If you don't have anywhere to put that\n"
	.string "Poster yet, maybe you {COLOR GREEN}will in the\l"
	.string "future{COLOR DARK_GRAY}. Hold onto it for me!$"

KalamiCity_EventScript_Sailor_Text_0:
# 316 "data/maps/KalamiCity/scripts.pory"
	.string "Sailor$"

KalamiCity_EventScript_Sailor_Text_1:
# 317 "data/maps/KalamiCity/scripts.pory"
	.string "Only a few larger boats like this can\n"
	.string "make it past the rocks and plants to\l"
	.string "these docks. It's tough, but we make it\l"
	.string "work.$"

KalamiCity_EventScript_Sailor2_Text_0:
# 330 "data/maps/KalamiCity/scripts.pory"
	.string "A lot of important goods come through\n"
	.string "the Kalami City ports.\p"
	.string "It's hard to sail through the mangrove,\n"
	.string "but the items produced by the\l"
	.string "industrial center here are real useful.$"

KalamiCity_EventScript_Sailor2_Text_1:
# 336 "data/maps/KalamiCity/scripts.pory"
	.string "Here, I'll give you a sample!$"

KalamiCity_EventScript_Fisherman_Text_0:
# 348 "data/maps/KalamiCity/scripts.pory"
	.string "Fishing Guru$"

KalamiCity_EventScript_Fisherman_Text_1:
# 349 "data/maps/KalamiCity/scripts.pory"
	.string "I've lived here since before Mattaios\n"
	.string "and the industrial center was settled\l"
	.string "here. I fished here when I was a kid, and\l"
	.string "I'll keep fishing here until I'm old!$"

KalamiCity_EventScript_Fisherman_Text_2:
# 354 "data/maps/KalamiCity/scripts.pory"
	.string "I've got an extra {COLOR GREEN}Old Rod{COLOR DARK_GRAY} here. You look\n"
	.string "like you'd make a great angler one day...\l"
	.string "here, I want you to have this!$"

KalamiCity_EventScript_Fisherman_Text_3:
# 359 "data/maps/KalamiCity/scripts.pory"
	.string "Fishing opens up a whole new world of\n"
	.string "Pokémon! Make sure you fish every day.$"

KalamiCity_EventScript_Bounsweet_Text_0:
# 370 "data/maps/KalamiCity/scripts.pory"
	.string "Bounsweet$"

KalamiCity_EventScript_Bounsweet_Text_1:
# 372 "data/maps/KalamiCity/scripts.pory"
	.string "Cree-ee!$"

KalamiCity_EventScript_Aipom_Text_0:
# 383 "data/maps/KalamiCity/scripts.pory"
	.string "Aipom$"

KalamiCity_EventScript_Aipom_Text_1:
# 385 "data/maps/KalamiCity/scripts.pory"
	.string "Eek eek!$"

KalamiCity_EventScript_Lass_Text_0:
# 396 "data/maps/KalamiCity/scripts.pory"
	.string "Lass$"

KalamiCity_EventScript_Lass_Text_1:
# 397 "data/maps/KalamiCity/scripts.pory"
	.string "Look, I found this Bounsweet rooting\n"
	.string "around in the crates! I think it wanted\l"
	.string "a Trainer to be its friend.$"

KalamiCity_EventScript_BugCatcher_Text_0:
# 407 "data/maps/KalamiCity/scripts.pory"
	.string "Bug Catcher$"

KalamiCity_EventScript_BugCatcher_Text_1:
# 408 "data/maps/KalamiCity/scripts.pory"
	.string "I learned all about how Pokémon live\n"
	.string "together in places like this in school!\l"
	.string "Pokémon from the water and the land\l"
	.string "help each other out in a bunch of cool\l"
	.string "ways!$"

KalamiCity_EventScript_Beauty_Text_0:
# 418 "data/maps/KalamiCity/scripts.pory"
	.string "Beauty$"

KalamiCity_EventScript_Beauty_Text_1:
# 419 "data/maps/KalamiCity/scripts.pory"
	.string "This fruit tree at the center of town is\n"
	.string "the only one of its kind in Kalami City.\l"
	.string "They say it's the last tree from before\l"
	.string "the swamp crept in and people started\l"
	.string "building here.$"

KalamiCity_EventScript_WallWorker_Text_0:
# 429 "data/maps/KalamiCity/scripts.pory"
	.string "Worker$"

KalamiCity_EventScript_WallWorker_Text_1:
# 430 "data/maps/KalamiCity/scripts.pory"
	.string "The land around Kalami City is always\n"
	.string "sinking. The swamp and water creeps in,\l"
	.string "and I'm stuck trying to keep these\l"
	.string "walls in good condition!$"

KalamiCity_EventScript_PerformerM_Text_0:
# 440 "data/maps/KalamiCity/scripts.pory"
	.string "Performer$"

KalamiCity_EventScript_PerformerM_Text_1:
# 441 "data/maps/KalamiCity/scripts.pory"
	.string "I dream of performing comedy shows on\n"
	.string "the biggest stages of Ilios! For now,\l"
	.string "though, I'm just sticking with street\l"
	.string "shows here.$"

KalamiCity_EventScript_BlackBelt_Text_0:
# 451 "data/maps/KalamiCity/scripts.pory"
	.string "Black Belt$"

KalamiCity_EventScript_BlackBelt_Text_1:
# 452 "data/maps/KalamiCity/scripts.pory"
	.string "I taught my Pokémon to use Karate Chop\n"
	.string "so it could cut through the vines and\l"
	.string "reeds in the swamp. Now it helps me\l"
	.string "explore the area around the city!$"

KalamiCity_EventScript_Youngster_Text_0:
# 462 "data/maps/KalamiCity/scripts.pory"
	.string "Youngster$"

KalamiCity_EventScript_Youngster_Text_1:
# 463 "data/maps/KalamiCity/scripts.pory"
	.string "My dad says the walls keep the swamp\n"
	.string "from coming into the city. I don't see\l"
	.string "what would be so wrong about that! I\l"
	.string "could make friends with all the new\l"
	.string "Pokémon!$"

KalamiCity_EventScript_Girl_Text_0:
# 473 "data/maps/KalamiCity/scripts.pory"
	.string "Girl$"

KalamiCity_EventScript_Girl_Text_1:
# 474 "data/maps/KalamiCity/scripts.pory"
	.string "My Pokémon was rooting around in the\n"
	.string "dirt, and it found a weird, minty plant. I\l"
	.string "think it changed natures after\l"
	.string "sniffing it!$"

KalamiCity_EventScript_Athlete_Text_0:
# 484 "data/maps/KalamiCity/scripts.pory"
	.string "Athlete$"

KalamiCity_EventScript_Athlete_Text_1:
# 485 "data/maps/KalamiCity/scripts.pory"
	.string "I'm training in the shallow water to\n"
	.string "make my legs stronger! At this rate, I'll\l"
	.string "be the fastest guy in Ilios!$"

KalamiCity_EventScript_Amaura_Text_0:
# 495 "data/maps/KalamiCity/scripts.pory"
	.string "Amaura$"

KalamiCity_EventScript_Amaura_Text_1:
# 497 "data/maps/KalamiCity/scripts.pory"
	.string "Hraaah...!$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_0:
# 508 "data/maps/KalamiCity/scripts.pory"
	.string "Fashionista$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_1:
# 513 "data/maps/KalamiCity/scripts.pory"
	.string "My sweet, colorful Amaura has inspired\n"
	.string "me to put together a new outfit!$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_2:
# 518 "data/maps/KalamiCity/scripts.pory"
	.string "I can tell you have a sharp eye for\n"
	.string "fashion! I'll give you this {COLOR GREEN}East Ilios\l"
	.string "Blue Outfit{COLOR DARK_GRAY} for just ¥6000. How about\l"
	.string "it?$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_3:
# 524 "data/maps/KalamiCity/scripts.pory"
	.string "No? But I thought you were into\n"
	.string "fashion!$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_4:
# 537 "data/maps/KalamiCity/scripts.pory"
	.string "Hey, you don't have the money for that!$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_5:
# 548 "data/maps/KalamiCity/scripts.pory"
	.string "The East Ilios Blue Outfit has been\n"
	.string "added to the Outfit Box!$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_6:
# 554 "data/maps/KalamiCity/scripts.pory"
	.string "Sweet! The East Ilios Blue Outfit\n"
	.string "incorporates the most recent fashion\l"
	.string "trends from the coastal areas of the\l"
	.string "region.$"

KalamiCity_EventScript_EastBlueOutfitBeauty_Text_7:
# 561 "data/maps/KalamiCity/scripts.pory"
	.string "Have you tried on the East Ilios Blue\n"
	.string "Outfit? It sticks to the coolest, most\l"
	.string "recent fashion trends!$"

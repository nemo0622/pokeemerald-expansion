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
	goto_if_set FLAG_VISITED_FRESCO_ISLAND, Common_EventScript_Piraeus_20
Common_EventScript_Piraeus_19:
# 79 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_PALATI_CITY, Common_EventScript_Piraeus_23
Common_EventScript_Piraeus_22:
# 82 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_PORT_PELLO, Common_EventScript_Piraeus_26
Common_EventScript_Piraeus_25:
# 85 "data/maps/KalamiCity/scripts.pory"
	dynmultistack 100, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 88 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Piraeus_29
# 107 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Piraeus_36
# 116 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Common_EventScript_Piraeus_37
# 125 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Common_EventScript_Piraeus_38
# 134 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Common_EventScript_Piraeus_39
# 143 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Common_EventScript_Piraeus_40
# 152 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Common_EventScript_Piraeus_41
# 161 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq Common_EventScript_Piraeus_42
# 170 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq Common_EventScript_Piraeus_43
# 179 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq Common_EventScript_Piraeus_44
Common_EventScript_Piraeus_28:
# 189 "data/maps/KalamiCity/scripts.pory"
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
# 90 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 0
# 91 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 92 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Common_EventScript_Piraeus_33
# 99 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_13
# 100 "data/maps/KalamiCity/scripts.pory"
	closemessage
Common_EventScript_Piraeus_32:
# 102 "data/maps/KalamiCity/scripts.pory"
	release
	end

Common_EventScript_Piraeus_33:
# 94 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_12
# 95 "data/maps/KalamiCity/scripts.pory"
	closemessage
	goto Common_EventScript_Piraeus_32

Common_EventScript_Piraeus_36:
# 109 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 1
# 110 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 111 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_14
# 112 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 113 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 114 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_28

Common_EventScript_Piraeus_37:
# 118 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 2
# 119 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 120 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_15
# 121 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 122 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 123 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_28

Common_EventScript_Piraeus_38:
# 127 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 3
# 128 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 129 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_16
# 130 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 131 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 132 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_28

Common_EventScript_Piraeus_39:
# 136 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 4
# 137 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 138 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_17
# 139 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 140 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 141 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_28

Common_EventScript_Piraeus_40:
# 145 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 5
# 146 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 147 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_18
# 148 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 149 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 150 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_28

Common_EventScript_Piraeus_41:
# 154 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 6
# 155 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 156 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_19
# 157 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 158 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 159 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_28

Common_EventScript_Piraeus_42:
# 163 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 7
# 164 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 165 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_20
# 166 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 167 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 168 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_28

Common_EventScript_Piraeus_43:
# 172 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 8
# 173 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 174 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_21
# 175 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 176 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 177 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_28

Common_EventScript_Piraeus_44:
# 181 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 9
# 182 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 183 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_22
# 184 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 185 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 186 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_28


KalamiCity_EventScript_DirectionSign::
# 198 "data/maps/KalamiCity/scripts.pory"
	lock
# 199 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_DirectionSign_Text_0
# 200 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 201 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_Sign_GymSign::
# 207 "data/maps/KalamiCity/scripts.pory"
	lock
# 208 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_Sign_GymSign_Text_0
# 209 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 210 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Camper::
# 216 "data/maps/KalamiCity/scripts.pory"
	lock
# 217 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 218 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Camper_Text_0
# 219 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Camper_Text_1
# 220 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 221 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Artist::
# 227 "data/maps/KalamiCity/scripts.pory"
	lock
# 228 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 229 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 232 "data/maps/KalamiCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_KALAMI_HEART_SCALE
# 233 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KalamiCity_EventScript_Artist_2
# 242 "data/maps/KalamiCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_KALAMI_HEART_SCALE
# 243 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KalamiCity_EventScript_Artist_4
# 253 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_3
# 254 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 256 "data/maps/KalamiCity/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 257 "data/maps/KalamiCity/scripts.pory"
	delay 30
# 259 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KalamiCity_EventScript_Artist_7
# 267 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 268 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_5
# 269 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 270 "data/maps/KalamiCity/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 271 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 272 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 273 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_6
# 274 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 276 "data/maps/KalamiCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 277 "data/maps/KalamiCity/scripts.pory"
	delay 60
# 278 "data/maps/KalamiCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 279 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 281 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 282 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_7
# 283 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 284 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 285 "data/maps/KalamiCity/scripts.pory"
	adddecoration DECOR_OPAL_FISH_POSTER
# 286 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_8
# 287 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 288 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 289 "data/maps/KalamiCity/scripts.pory"
	delay 5
# 290 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 291 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_9
# 292 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 294 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 295 "data/maps/KalamiCity/scripts.pory"
	completequest QUEST_KALAMI_HEART_SCALE
	return

KalamiCity_EventScript_Artist_2:
# 235 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_1
# 236 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 237 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_Artist_4:
# 245 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_2
# 246 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 248 "data/maps/KalamiCity/scripts.pory"
	delay 20
# 249 "data/maps/KalamiCity/scripts.pory"
	startquest QUEST_KALAMI_HEART_SCALE
	return

KalamiCity_EventScript_Artist_7:
# 261 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 262 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_4
# 263 "data/maps/KalamiCity/scripts.pory"
	closemessage
	return


KalamiCity_EventScript_Sailor::
# 302 "data/maps/KalamiCity/scripts.pory"
	lock
# 303 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 304 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Sailor_Text_0
# 305 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Sailor_Text_1
# 306 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 307 "data/maps/KalamiCity/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 308 "data/maps/KalamiCity/scripts.pory"
	waitmovement 0
# 309 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Sailor2::
# 315 "data/maps/KalamiCity/scripts.pory"
	lock
# 316 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 317 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Sailor_Text_0
# 318 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Sailor2_Text_0
# 319 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 320 "data/maps/KalamiCity/scripts.pory"
	goto_if_unset FLAG_GOT_ABILITY_CAPSULE_KALAMI_CITY, KalamiCity_EventScript_Sailor2_2
KalamiCity_EventScript_Sailor2_1:
# 328 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_Sailor2_2:
# 322 "data/maps/KalamiCity/scripts.pory"
	setflag FLAG_GOT_ABILITY_CAPSULE_KALAMI_CITY
# 323 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Sailor_Text_0
# 324 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Sailor2_Text_1
# 325 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 326 "data/maps/KalamiCity/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
	goto KalamiCity_EventScript_Sailor2_1


KalamiCity_EventScript_Fisherman::
# 334 "data/maps/KalamiCity/scripts.pory"
	lock
# 335 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 336 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Fisherman_Text_0
# 337 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Fisherman_Text_1
# 338 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 339 "data/maps/KalamiCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OLD_ROD, KalamiCity_EventScript_Fisherman_2
KalamiCity_EventScript_Fisherman_1:
# 350 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_Fisherman_2:
# 341 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Fisherman_Text_0
# 342 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Fisherman_Text_2
# 343 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 344 "data/maps/KalamiCity/scripts.pory"
	giveitem ITEM_OLD_ROD
# 345 "data/maps/KalamiCity/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 346 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Fisherman_Text_0
# 347 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Fisherman_Text_3
# 348 "data/maps/KalamiCity/scripts.pory"
	closemessage
	goto KalamiCity_EventScript_Fisherman_1


KalamiCity_EventScript_Bounsweet::
# 356 "data/maps/KalamiCity/scripts.pory"
	lock
# 357 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 358 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Bounsweet_Text_0
# 359 "data/maps/KalamiCity/scripts.pory"
	playmoncry SPECIES_BOUNSWEET, CRY_MODE_NORMAL
# 360 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Bounsweet_Text_1
# 361 "data/maps/KalamiCity/scripts.pory"
	waitmoncry
# 362 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 363 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Aipom::
# 369 "data/maps/KalamiCity/scripts.pory"
	lock
# 370 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 371 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Aipom_Text_0
# 372 "data/maps/KalamiCity/scripts.pory"
	playmoncry SPECIES_AIPOM, CRY_MODE_NORMAL
# 373 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Aipom_Text_1
# 374 "data/maps/KalamiCity/scripts.pory"
	waitmoncry
# 375 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 376 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Lass::
# 382 "data/maps/KalamiCity/scripts.pory"
	lock
# 383 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 384 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Lass_Text_0
# 385 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Lass_Text_1
# 386 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 387 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_BugCatcher::
# 393 "data/maps/KalamiCity/scripts.pory"
	lock
# 394 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 395 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_BugCatcher_Text_0
# 396 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_BugCatcher_Text_1
# 397 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 398 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Beauty::
# 404 "data/maps/KalamiCity/scripts.pory"
	lock
# 405 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 406 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Beauty_Text_0
# 407 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Beauty_Text_1
# 408 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 409 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_WallWorker::
# 415 "data/maps/KalamiCity/scripts.pory"
	lock
# 416 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 417 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_WallWorker_Text_0
# 418 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_WallWorker_Text_1
# 419 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 420 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_PerformerM::
# 426 "data/maps/KalamiCity/scripts.pory"
	lock
# 427 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 428 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_PerformerM_Text_0
# 429 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_PerformerM_Text_1
# 430 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 431 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_BlackBelt::
# 437 "data/maps/KalamiCity/scripts.pory"
	lock
# 438 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 439 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_BlackBelt_Text_0
# 440 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_BlackBelt_Text_1
# 441 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 442 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Youngster::
# 448 "data/maps/KalamiCity/scripts.pory"
	lock
# 449 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 450 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Youngster_Text_0
# 451 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Youngster_Text_1
# 452 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 453 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Girl::
# 459 "data/maps/KalamiCity/scripts.pory"
	lock
# 460 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 461 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Girl_Text_0
# 462 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Girl_Text_1
# 463 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 464 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Athlete::
# 470 "data/maps/KalamiCity/scripts.pory"
	lock
# 471 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 472 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Athlete_Text_0
# 473 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Athlete_Text_1
# 474 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 475 "data/maps/KalamiCity/scripts.pory"
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
	.string "Fresco Isles$"

Common_EventScript_Piraeus_Text_10:
# 80 "data/maps/KalamiCity/scripts.pory"
	.string "Palati City$"

Common_EventScript_Piraeus_Text_11:
# 83 "data/maps/KalamiCity/scripts.pory"
	.string "Port Pello$"

Common_EventScript_Piraeus_Text_12:
# 94 "data/maps/KalamiCity/scripts.pory"
	.string "Ehehe, glad to see the Champion still\n"
	.string "hangs around with the likes of me!$"

Common_EventScript_Piraeus_Text_13:
# 99 "data/maps/KalamiCity/scripts.pory"
	.string "How's the ol' adventure going,\n"
	.string "{PLAYER}? You still winning Gym\l"
	.string "Badges and knocking Team Chimera\l"
	.string "heads? Fwahaha!$"

Common_EventScript_Piraeus_Text_14:
# 111 "data/maps/KalamiCity/scripts.pory"
	.string "Kalami City! That's quite the challenge,\n"
	.string "sailing between those mangrove trees\l"
	.string "and shallow patches. But hey, I've got\l"
	.string "some Poké ball shopping to do there, so\l"
	.string "let's go!$"

Common_EventScript_Piraeus_Text_15:
# 120 "data/maps/KalamiCity/scripts.pory"
	.string "Pythios Town, eh? I've still got bad\n"
	.string "memories from that place, after my\l"
	.string "run-in with Team Chimera. Let's make\l"
	.string "this a quick trip, ehehe!$"

Common_EventScript_Piraeus_Text_16:
# 129 "data/maps/KalamiCity/scripts.pory"
	.string "Sofos City, eh? The heart of the Ilios\n"
	.string "Region! While you keep adventuring, I\l"
	.string "may play a little Pinball. I'm not good,\l"
	.string "but it's fun!$"

Common_EventScript_Piraeus_Text_17:
# 138 "data/maps/KalamiCity/scripts.pory"
	.string "That's one of my favorite little spots\n"
	.string "in Ilios! Maybe you could swing by the\l"
	.string "Sunset Wildlife Conservation Center\l"
	.string "while you're there. Come on, let's take\l"
	.string "off!$"

Common_EventScript_Piraeus_Text_18:
# 147 "data/maps/KalamiCity/scripts.pory"
	.string "Marmaro Island! A beautiful little spot.\n"
	.string "Their marble helped build structures\l"
	.string "across the ancient Ilios Region. Let's\l"
	.string "check it out!$"

Common_EventScript_Piraeus_Text_19:
# 156 "data/maps/KalamiCity/scripts.pory"
	.string "Hey, I love Myrrini Island! Maybe I'll do\n"
	.string "some walking around while I'm there! You\l"
	.string "know what they say, Myrrini parties are\l"
	.string "the best parties!$"

Common_EventScript_Piraeus_Text_20:
# 165 "data/maps/KalamiCity/scripts.pory"
	.string "The Fresco Isles, eh? For a group of\n"
	.string "islands, it gets awful dry there. Maybe\l"
	.string "you'll find some unique Pokémon there!$"

Common_EventScript_Piraeus_Text_21:
# 174 "data/maps/KalamiCity/scripts.pory"
	.string "Palati City! That's on Kaptara Island,\n"
	.string "right? That place is covered with\l"
	.string "gorgeous ruins... maybe I'll do a little\l"
	.string "exploring when we get there!$"

Common_EventScript_Piraeus_Text_22:
# 183 "data/maps/KalamiCity/scripts.pory"
	.string "Port Pello! Their cherry trees are\n"
	.string "world-famous! They say the gods\l"
	.string "blessed the lands. How about we see it\l"
	.string "for ourselves?$"

KalamiCity_EventScript_DirectionSign_Text_0:
# 199 "data/maps/KalamiCity/scripts.pory"
	.string "Kalami City\n"
	.string "Reeds, Vines, and Industry\p"
	.string "{UP_ARROW} Riverwalk Trail - South$"

KalamiCity_Sign_GymSign_Text_0:
# 208 "data/maps/KalamiCity/scripts.pory"
	.string "Gym Leader: Mattaios\n"
	.string "The Hard-Working Engineer$"

KalamiCity_EventScript_Camper_Text_0:
# 218 "data/maps/KalamiCity/scripts.pory"
	.string "Camper$"

KalamiCity_EventScript_Camper_Text_1:
# 219 "data/maps/KalamiCity/scripts.pory"
	.string "Hehehe, I love the shallows around\n"
	.string "Kalami City! I like feeling the sand and\l"
	.string "pebbles between my toes!$"

KalamiCity_EventScript_Artist_Text_0:
# 229 "data/maps/KalamiCity/scripts.pory"
	.string "Artist$"

KalamiCity_EventScript_Artist_Text_1:
# 235 "data/maps/KalamiCity/scripts.pory"
	.string "I've been inspired by your Heart Scale!\n"
	.string "I feel my creative juices flowing, I\l"
	.string "must make more shining, opal art!$"

KalamiCity_EventScript_Artist_Text_2:
# 245 "data/maps/KalamiCity/scripts.pory"
	.string "Hm? Oh, hi. Sorry, I'm hoping the ocean\n"
	.string "gives me inspiration. I've been\l"
	.string "struggling with artist's block for\l"
	.string "months, and there's no end in sight.\p"
	.string "I'm looking for something so beautiful,\n"
	.string "so sparkly, that it inspires me. A {COLOR GREEN}Heart\l"
	.string "Scale{COLOR DARK_GRAY} would be just perfect!$"

KalamiCity_EventScript_Artist_Text_3:
# 253 "data/maps/KalamiCity/scripts.pory"
	.string "Welcome back. I still can't seem to find\n"
	.string "inspiration... did you happen to bring a\l"
	.string "{COLOR GREEN}Heart Scale{COLOR DARK_GRAY}?$"

KalamiCity_EventScript_Artist_Text_4:
# 262 "data/maps/KalamiCity/scripts.pory"
	.string "Aw, looks like my artist's block will\n"
	.string "continue.\p"
	.string "If you happen to find an extra {COLOR GREEN}Heart\n"
	.string "Scale{COLOR DARK_GRAY}, please let me know!$"

KalamiCity_EventScript_Artist_Text_5:
# 268 "data/maps/KalamiCity/scripts.pory"
	.string "Incredible! The ripples of color, the\n"
	.string "sparkle in the light... it's unlike\l"
	.string "anything I've ever seen! Please, let me\l"
	.string "keep this and use it for inspiration!$"

KalamiCity_EventScript_Artist_Text_6:
# 273 "data/maps/KalamiCity/scripts.pory"
	.string "I'm so inspired, I could paint something\n"
	.string "right now! Wait there!$"

KalamiCity_EventScript_Artist_Text_7:
# 282 "data/maps/KalamiCity/scripts.pory"
	.string "My first masterpiece is complete! I\n"
	.string "want you to have it, as a symbol of our\l"
	.string "artistic partnership!$"

KalamiCity_EventScript_Artist_Text_8:
# 286 "data/maps/KalamiCity/scripts.pory"
	.string "{PLAYER} was given an Opal Fish\n"
	.string "Poster!$"

KalamiCity_EventScript_Artist_Text_9:
# 291 "data/maps/KalamiCity/scripts.pory"
	.string "That's a Poster of an extinct Pokémon,\n"
	.string "Relicanth, with hardened scales made of\l"
	.string "opal Heart Scales. I wanted it to\l"
	.string "symbolize the beauty and tragedy in\l"
	.string "lost species.\p"
	.string "If you don't have anywhere to put that\n"
	.string "Poster yet, maybe you {COLOR GREEN}will in the\l"
	.string "future{COLOR DARK_GRAY}. Hold onto it for me!$"

KalamiCity_EventScript_Sailor_Text_0:
# 304 "data/maps/KalamiCity/scripts.pory"
	.string "Sailor$"

KalamiCity_EventScript_Sailor_Text_1:
# 305 "data/maps/KalamiCity/scripts.pory"
	.string "Only a few larger boats like this can\n"
	.string "make it past the rocks and plants to\l"
	.string "these docks. It's tough, but we make it\l"
	.string "work.$"

KalamiCity_EventScript_Sailor2_Text_0:
# 318 "data/maps/KalamiCity/scripts.pory"
	.string "A lot of important goods come through\n"
	.string "the Kalami City ports.\p"
	.string "It's hard to sail through the mangrove,\n"
	.string "but the items produced by the\l"
	.string "industrial center here are real useful.$"

KalamiCity_EventScript_Sailor2_Text_1:
# 324 "data/maps/KalamiCity/scripts.pory"
	.string "Here, I'll give you a sample!$"

KalamiCity_EventScript_Fisherman_Text_0:
# 336 "data/maps/KalamiCity/scripts.pory"
	.string "Fishing Guru$"

KalamiCity_EventScript_Fisherman_Text_1:
# 337 "data/maps/KalamiCity/scripts.pory"
	.string "I've lived here since before Mattaios\n"
	.string "and the industrial center was settled\l"
	.string "here. I fished here when I was a kid, and\l"
	.string "I'll keep fishing here until I'm old!$"

KalamiCity_EventScript_Fisherman_Text_2:
# 342 "data/maps/KalamiCity/scripts.pory"
	.string "I've got an extra {COLOR GREEN}Old Rod{COLOR DARK_GRAY} here. You look\n"
	.string "like you'd make a great angler one day...\l"
	.string "here, I want you to have this!$"

KalamiCity_EventScript_Fisherman_Text_3:
# 347 "data/maps/KalamiCity/scripts.pory"
	.string "Fishing opens up a whole new world of\n"
	.string "Pokémon! Make sure you fish every day.$"

KalamiCity_EventScript_Bounsweet_Text_0:
# 358 "data/maps/KalamiCity/scripts.pory"
	.string "Bounsweet$"

KalamiCity_EventScript_Bounsweet_Text_1:
# 360 "data/maps/KalamiCity/scripts.pory"
	.string "Cree-ee!$"

KalamiCity_EventScript_Aipom_Text_0:
# 371 "data/maps/KalamiCity/scripts.pory"
	.string "Aipom$"

KalamiCity_EventScript_Aipom_Text_1:
# 373 "data/maps/KalamiCity/scripts.pory"
	.string "Eek eek!$"

KalamiCity_EventScript_Lass_Text_0:
# 384 "data/maps/KalamiCity/scripts.pory"
	.string "Lass$"

KalamiCity_EventScript_Lass_Text_1:
# 385 "data/maps/KalamiCity/scripts.pory"
	.string "Look, I found this Bounsweet rooting\n"
	.string "around in the crates! I think it wanted\l"
	.string "a Trainer to be its friend.$"

KalamiCity_EventScript_BugCatcher_Text_0:
# 395 "data/maps/KalamiCity/scripts.pory"
	.string "Bug Catcher$"

KalamiCity_EventScript_BugCatcher_Text_1:
# 396 "data/maps/KalamiCity/scripts.pory"
	.string "I learned all about how Pokémon live\n"
	.string "together in places like this in school!\l"
	.string "Pokémon from the water and the land\l"
	.string "help each other out in a bunch of cool\l"
	.string "ways!$"

KalamiCity_EventScript_Beauty_Text_0:
# 406 "data/maps/KalamiCity/scripts.pory"
	.string "Beauty$"

KalamiCity_EventScript_Beauty_Text_1:
# 407 "data/maps/KalamiCity/scripts.pory"
	.string "This fruit tree at the center of town is\n"
	.string "the only one of its kind in Kalami City.\l"
	.string "They say it's the last tree from before\l"
	.string "the swamp crept in and people started\l"
	.string "building here.$"

KalamiCity_EventScript_WallWorker_Text_0:
# 417 "data/maps/KalamiCity/scripts.pory"
	.string "Worker$"

KalamiCity_EventScript_WallWorker_Text_1:
# 418 "data/maps/KalamiCity/scripts.pory"
	.string "The land around Kalami City is always\n"
	.string "sinking. The swamp and water creeps in,\l"
	.string "and I'm stuck trying to keep these\l"
	.string "walls in good condition!$"

KalamiCity_EventScript_PerformerM_Text_0:
# 428 "data/maps/KalamiCity/scripts.pory"
	.string "Performer$"

KalamiCity_EventScript_PerformerM_Text_1:
# 429 "data/maps/KalamiCity/scripts.pory"
	.string "I dream of performing comedy shows on\n"
	.string "the biggest stages of Ilios! For now,\l"
	.string "though, I'm just sticking with street\l"
	.string "shows here.$"

KalamiCity_EventScript_BlackBelt_Text_0:
# 439 "data/maps/KalamiCity/scripts.pory"
	.string "Black Belt$"

KalamiCity_EventScript_BlackBelt_Text_1:
# 440 "data/maps/KalamiCity/scripts.pory"
	.string "I taught my Pokémon to use Karate Chop\n"
	.string "so it could cut through the vines and\l"
	.string "reeds in the swamp. Now it helps me\l"
	.string "explore the area around the city!$"

KalamiCity_EventScript_Youngster_Text_0:
# 450 "data/maps/KalamiCity/scripts.pory"
	.string "Youngster$"

KalamiCity_EventScript_Youngster_Text_1:
# 451 "data/maps/KalamiCity/scripts.pory"
	.string "My dad says the walls keep the swamp\n"
	.string "from coming into the city. I don't see\l"
	.string "what would be so wrong about that! I\l"
	.string "could make friends with all the new\l"
	.string "Pokémon!$"

KalamiCity_EventScript_Girl_Text_0:
# 461 "data/maps/KalamiCity/scripts.pory"
	.string "Girl$"

KalamiCity_EventScript_Girl_Text_1:
# 462 "data/maps/KalamiCity/scripts.pory"
	.string "My Pokémon was rooting around in the\n"
	.string "dirt, and it found a weird, minty plant. I\l"
	.string "think it changed natures after\l"
	.string "sniffing it!$"

KalamiCity_EventScript_Athlete_Text_0:
# 472 "data/maps/KalamiCity/scripts.pory"
	.string "Athlete$"

KalamiCity_EventScript_Athlete_Text_1:
# 473 "data/maps/KalamiCity/scripts.pory"
	.string "I'm training in the shallow water to\n"
	.string "make my legs stronger! At this rate, I'll\l"
	.string "be the fastest guy in Ilios!$"

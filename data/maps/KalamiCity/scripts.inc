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
	goto_if_set FLAG_VISITED_MARMARO_ISLAND, Common_EventScript_Piraeus_11
Common_EventScript_Piraeus_10:
# 70 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_MYRRINI_ISLAND, Common_EventScript_Piraeus_14
Common_EventScript_Piraeus_13:
# 73 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_FRESCO_ISLAND, Common_EventScript_Piraeus_17
Common_EventScript_Piraeus_16:
# 76 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_PALATI_CITY, Common_EventScript_Piraeus_20
Common_EventScript_Piraeus_19:
# 79 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_VISITED_PORT_PELLO, Common_EventScript_Piraeus_23
Common_EventScript_Piraeus_22:
# 82 "data/maps/KalamiCity/scripts.pory"
	dynmultistack 100, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 85 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_Piraeus_26
# 104 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_Piraeus_33
# 113 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Common_EventScript_Piraeus_34
# 122 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Common_EventScript_Piraeus_35
# 131 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Common_EventScript_Piraeus_36
# 140 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Common_EventScript_Piraeus_37
# 149 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Common_EventScript_Piraeus_38
# 158 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq Common_EventScript_Piraeus_39
# 167 "data/maps/KalamiCity/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq Common_EventScript_Piraeus_40
Common_EventScript_Piraeus_25:
# 177 "data/maps/KalamiCity/scripts.pory"
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
# 87 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 0
# 88 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 89 "data/maps/KalamiCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Common_EventScript_Piraeus_30
# 96 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_12
# 97 "data/maps/KalamiCity/scripts.pory"
	closemessage
Common_EventScript_Piraeus_29:
# 99 "data/maps/KalamiCity/scripts.pory"
	release
	end

Common_EventScript_Piraeus_30:
# 91 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_11
# 92 "data/maps/KalamiCity/scripts.pory"
	closemessage
	goto Common_EventScript_Piraeus_29

Common_EventScript_Piraeus_33:
# 106 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 1
# 107 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 108 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_13
# 109 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 110 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 111 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_25

Common_EventScript_Piraeus_34:
# 115 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 2
# 116 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 117 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_14
# 118 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 119 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 120 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_25

Common_EventScript_Piraeus_35:
# 124 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 3
# 125 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 126 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_15
# 127 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 128 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 129 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_25

Common_EventScript_Piraeus_36:
# 133 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 4
# 134 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 135 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_16
# 136 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 137 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 138 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_25

Common_EventScript_Piraeus_37:
# 142 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 5
# 143 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 144 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_17
# 145 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 146 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 147 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_25

Common_EventScript_Piraeus_38:
# 151 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 6
# 152 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 153 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_18
# 154 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 155 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 156 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_25

Common_EventScript_Piraeus_39:
# 160 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 7
# 161 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 162 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_19
# 163 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 164 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 165 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_25

Common_EventScript_Piraeus_40:
# 169 "data/maps/KalamiCity/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 8
# 170 "data/maps/KalamiCity/scripts.pory"
	speakername Common_EventScript_Piraeus_Text_0
# 171 "data/maps/KalamiCity/scripts.pory"
	msgbox Common_EventScript_Piraeus_Text_20
# 172 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 173 "data/maps/KalamiCity/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 2
# 174 "data/maps/KalamiCity/scripts.pory"
	waitstate
	goto Common_EventScript_Piraeus_25


KalamiCity_EventScript_DirectionSign::
# 186 "data/maps/KalamiCity/scripts.pory"
	lock
# 187 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_DirectionSign_Text_0
# 188 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 189 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_Sign_GymSign::
# 195 "data/maps/KalamiCity/scripts.pory"
	lock
# 196 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_Sign_GymSign_Text_0
# 197 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 198 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Camper::
# 204 "data/maps/KalamiCity/scripts.pory"
	lock
# 205 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 206 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Camper_Text_0
# 207 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Camper_Text_1
# 208 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 209 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Artist::
# 215 "data/maps/KalamiCity/scripts.pory"
	lock
# 216 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 217 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Artist_Text_0
# 218 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Artist_Text_1
# 219 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 220 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Sailor::
# 226 "data/maps/KalamiCity/scripts.pory"
	lock
# 227 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 228 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Sailor_Text_0
# 229 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Sailor_Text_1
# 230 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 231 "data/maps/KalamiCity/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 232 "data/maps/KalamiCity/scripts.pory"
	waitmovement 0
# 233 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Sailor2::
# 239 "data/maps/KalamiCity/scripts.pory"
	lock
# 240 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 241 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Sailor_Text_0
# 242 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Sailor2_Text_0
# 243 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 244 "data/maps/KalamiCity/scripts.pory"
	goto_if_unset FLAG_GOT_ABILITY_CAPSULE_KALAMI_CITY, KalamiCity_EventScript_Sailor2_2
KalamiCity_EventScript_Sailor2_1:
# 252 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_Sailor2_2:
# 246 "data/maps/KalamiCity/scripts.pory"
	setflag FLAG_GOT_ABILITY_CAPSULE_KALAMI_CITY
# 247 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Sailor_Text_0
# 248 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Sailor2_Text_1
# 249 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 250 "data/maps/KalamiCity/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
	goto KalamiCity_EventScript_Sailor2_1


KalamiCity_EventScript_Fisherman::
# 258 "data/maps/KalamiCity/scripts.pory"
	lock
# 259 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 260 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Fisherman_Text_0
# 261 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Fisherman_Text_1
# 262 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 263 "data/maps/KalamiCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OLD_ROD, KalamiCity_EventScript_Fisherman_2
KalamiCity_EventScript_Fisherman_1:
# 274 "data/maps/KalamiCity/scripts.pory"
	release
	end

KalamiCity_EventScript_Fisherman_2:
# 265 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Fisherman_Text_0
# 266 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Fisherman_Text_2
# 267 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 268 "data/maps/KalamiCity/scripts.pory"
	giveitem ITEM_OLD_ROD
# 269 "data/maps/KalamiCity/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 270 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Fisherman_Text_0
# 271 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Fisherman_Text_3
# 272 "data/maps/KalamiCity/scripts.pory"
	closemessage
	goto KalamiCity_EventScript_Fisherman_1


KalamiCity_EventScript_Bounsweet::
# 280 "data/maps/KalamiCity/scripts.pory"
	lock
# 281 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 282 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Bounsweet_Text_0
# 283 "data/maps/KalamiCity/scripts.pory"
	playmoncry SPECIES_BOUNSWEET, CRY_MODE_NORMAL
# 284 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Bounsweet_Text_1
# 285 "data/maps/KalamiCity/scripts.pory"
	waitmoncry
# 286 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 287 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Aipom::
# 293 "data/maps/KalamiCity/scripts.pory"
	lock
# 294 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 295 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Aipom_Text_0
# 296 "data/maps/KalamiCity/scripts.pory"
	playmoncry SPECIES_AIPOM, CRY_MODE_NORMAL
# 297 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Aipom_Text_1
# 298 "data/maps/KalamiCity/scripts.pory"
	waitmoncry
# 299 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 300 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Lass::
# 306 "data/maps/KalamiCity/scripts.pory"
	lock
# 307 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 308 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Lass_Text_0
# 309 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Lass_Text_1
# 310 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 311 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_BugCatcher::
# 317 "data/maps/KalamiCity/scripts.pory"
	lock
# 318 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 319 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_BugCatcher_Text_0
# 320 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_BugCatcher_Text_1
# 321 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 322 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Beauty::
# 328 "data/maps/KalamiCity/scripts.pory"
	lock
# 329 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 330 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Beauty_Text_0
# 331 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Beauty_Text_1
# 332 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 333 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_WallWorker::
# 339 "data/maps/KalamiCity/scripts.pory"
	lock
# 340 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 341 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_WallWorker_Text_0
# 342 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_WallWorker_Text_1
# 343 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 344 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_PerformerM::
# 350 "data/maps/KalamiCity/scripts.pory"
	lock
# 351 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 352 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_PerformerM_Text_0
# 353 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_PerformerM_Text_1
# 354 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 355 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_BlackBelt::
# 361 "data/maps/KalamiCity/scripts.pory"
	lock
# 362 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 363 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_BlackBelt_Text_0
# 364 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_BlackBelt_Text_1
# 365 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 366 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Youngster::
# 372 "data/maps/KalamiCity/scripts.pory"
	lock
# 373 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 374 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Youngster_Text_0
# 375 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Youngster_Text_1
# 376 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 377 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Girl::
# 383 "data/maps/KalamiCity/scripts.pory"
	lock
# 384 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 385 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Girl_Text_0
# 386 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Girl_Text_1
# 387 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 388 "data/maps/KalamiCity/scripts.pory"
	release
	end


KalamiCity_EventScript_Athlete::
# 394 "data/maps/KalamiCity/scripts.pory"
	lock
# 395 "data/maps/KalamiCity/scripts.pory"
	faceplayer
# 396 "data/maps/KalamiCity/scripts.pory"
	speakername KalamiCity_EventScript_Athlete_Text_0
# 397 "data/maps/KalamiCity/scripts.pory"
	msgbox KalamiCity_EventScript_Athlete_Text_1
# 398 "data/maps/KalamiCity/scripts.pory"
	closemessage
# 399 "data/maps/KalamiCity/scripts.pory"
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
	.string "Marmaro Island$"

Common_EventScript_Piraeus_Text_7:
# 71 "data/maps/KalamiCity/scripts.pory"
	.string "Myrrini Island$"

Common_EventScript_Piraeus_Text_8:
# 74 "data/maps/KalamiCity/scripts.pory"
	.string "Fresco Isles$"

Common_EventScript_Piraeus_Text_9:
# 77 "data/maps/KalamiCity/scripts.pory"
	.string "Palati City$"

Common_EventScript_Piraeus_Text_10:
# 80 "data/maps/KalamiCity/scripts.pory"
	.string "Port Pello$"

Common_EventScript_Piraeus_Text_11:
# 91 "data/maps/KalamiCity/scripts.pory"
	.string "Ehehe, glad to see the Champion still\n"
	.string "hangs around with the likes of me!$"

Common_EventScript_Piraeus_Text_12:
# 96 "data/maps/KalamiCity/scripts.pory"
	.string "How's the ol' adventure going,\n"
	.string "{PLAYER}? You still winning Gym\l"
	.string "Badges and knocking Team Chimera\l"
	.string "heads? Fwahaha!$"

Common_EventScript_Piraeus_Text_13:
# 108 "data/maps/KalamiCity/scripts.pory"
	.string "Kalami City! That's quite the challenge,\n"
	.string "sailing between those mangrove trees\l"
	.string "and shallow patches. But hey, I've got\l"
	.string "some Poké ball shopping to do there, so\l"
	.string "let's go!$"

Common_EventScript_Piraeus_Text_14:
# 117 "data/maps/KalamiCity/scripts.pory"
	.string "Pythios Town, eh? I've still got bad\n"
	.string "memories from that place, after my\l"
	.string "run-in with Team Chimera. Let's make\l"
	.string "this a quick trip, ehehe!$"

Common_EventScript_Piraeus_Text_15:
# 126 "data/maps/KalamiCity/scripts.pory"
	.string "Sofos City, eh? The heart of the Ilios\n"
	.string "Region! While you keep adventuring, I\l"
	.string "may play a little Pinball. I'm not good,\l"
	.string "but it's fun!$"

Common_EventScript_Piraeus_Text_16:
# 135 "data/maps/KalamiCity/scripts.pory"
	.string "Marmaro Island! A beautiful little spot.\n"
	.string "Their marble helped build structures\l"
	.string "across the ancient Ilios Region. Let's\l"
	.string "check it out!$"

Common_EventScript_Piraeus_Text_17:
# 144 "data/maps/KalamiCity/scripts.pory"
	.string "Hey, I love Myrrini Island! Maybe I'll do\n"
	.string "some walking around while I'm there! You\l"
	.string "know what they say, Myrrini parties are\l"
	.string "the best parties!$"

Common_EventScript_Piraeus_Text_18:
# 153 "data/maps/KalamiCity/scripts.pory"
	.string "The Fresco Isles, eh? For a group of\n"
	.string "islands, it gets awful dry there. Maybe\l"
	.string "you'll find some unique Pokémon there!$"

Common_EventScript_Piraeus_Text_19:
# 162 "data/maps/KalamiCity/scripts.pory"
	.string "Palati City! That's on Kaptara Island,\n"
	.string "right? That place is covered with\l"
	.string "gorgeous ruins... maybe I'll do a little\l"
	.string "exploring when we get there!$"

Common_EventScript_Piraeus_Text_20:
# 171 "data/maps/KalamiCity/scripts.pory"
	.string "Port Pello! Their cherry trees are\n"
	.string "world-famous! They say the gods\l"
	.string "blessed the lands. How about we see it\l"
	.string "for ourselves?$"

KalamiCity_EventScript_DirectionSign_Text_0:
# 187 "data/maps/KalamiCity/scripts.pory"
	.string "Kalami City\n"
	.string "Reeds, Vines, and Industry\p"
	.string "{UP_ARROW} Riverwalk Trail - South$"

KalamiCity_Sign_GymSign_Text_0:
# 196 "data/maps/KalamiCity/scripts.pory"
	.string "Gym Leader: Mattaios\n"
	.string "The Hard-Working Engineer$"

KalamiCity_EventScript_Camper_Text_0:
# 206 "data/maps/KalamiCity/scripts.pory"
	.string "Camper$"

KalamiCity_EventScript_Camper_Text_1:
# 207 "data/maps/KalamiCity/scripts.pory"
	.string "Hehehe, I love the shallows around\n"
	.string "Kalami City! I like feeling the sand and\l"
	.string "pebbles between my toes!$"

KalamiCity_EventScript_Artist_Text_0:
# 217 "data/maps/KalamiCity/scripts.pory"
	.string "Artist$"

KalamiCity_EventScript_Artist_Text_1:
# 218 "data/maps/KalamiCity/scripts.pory"
	.string "Kalami City, the city of reeds and\n"
	.string "rivers...\p"
	.string "We coexist with nature here. We're\n"
	.string "treated to the natural beauty of the\l"
	.string "land, and in return, we've thrown crates\l"
	.string "in the water, cut some trees, and built\l"
	.string "an industrial sector in the heart of the\l"
	.string "swamp.\p"
	.string "Just something to reflect on.$"

KalamiCity_EventScript_Sailor_Text_0:
# 228 "data/maps/KalamiCity/scripts.pory"
	.string "Sailor$"

KalamiCity_EventScript_Sailor_Text_1:
# 229 "data/maps/KalamiCity/scripts.pory"
	.string "Only a few larger boats like this can\n"
	.string "make it past the rocks and plants to\l"
	.string "these docks. It's tough, but we make it\l"
	.string "work.$"

KalamiCity_EventScript_Sailor2_Text_0:
# 242 "data/maps/KalamiCity/scripts.pory"
	.string "A lot of important goods come through\n"
	.string "the Kalami City ports.\p"
	.string "It's hard to sail through the mangrove,\n"
	.string "but the items produced by the\l"
	.string "industrial center here are real useful.$"

KalamiCity_EventScript_Sailor2_Text_1:
# 248 "data/maps/KalamiCity/scripts.pory"
	.string "Here, I'll give you a sample!$"

KalamiCity_EventScript_Fisherman_Text_0:
# 260 "data/maps/KalamiCity/scripts.pory"
	.string "Fishing Guru$"

KalamiCity_EventScript_Fisherman_Text_1:
# 261 "data/maps/KalamiCity/scripts.pory"
	.string "I've lived here since before Mattaios\n"
	.string "and the industrial center was settled\l"
	.string "here. I fished here when I was a kid, and\l"
	.string "I'll keep fishing here until I'm old!$"

KalamiCity_EventScript_Fisherman_Text_2:
# 266 "data/maps/KalamiCity/scripts.pory"
	.string "I've got an extra {COLOR GREEN}Old Rod{COLOR DARK_GRAY} here. You look\n"
	.string "like you'd make a great angler one day...\l"
	.string "here, I want you to have this!$"

KalamiCity_EventScript_Fisherman_Text_3:
# 271 "data/maps/KalamiCity/scripts.pory"
	.string "Fishing opens up a whole new world of\n"
	.string "Pokémon! Make sure you fish every day.$"

KalamiCity_EventScript_Bounsweet_Text_0:
# 282 "data/maps/KalamiCity/scripts.pory"
	.string "Bounsweet$"

KalamiCity_EventScript_Bounsweet_Text_1:
# 284 "data/maps/KalamiCity/scripts.pory"
	.string "Cree-ee!$"

KalamiCity_EventScript_Aipom_Text_0:
# 295 "data/maps/KalamiCity/scripts.pory"
	.string "Aipom$"

KalamiCity_EventScript_Aipom_Text_1:
# 297 "data/maps/KalamiCity/scripts.pory"
	.string "Eek eek!$"

KalamiCity_EventScript_Lass_Text_0:
# 308 "data/maps/KalamiCity/scripts.pory"
	.string "Lass$"

KalamiCity_EventScript_Lass_Text_1:
# 309 "data/maps/KalamiCity/scripts.pory"
	.string "Look, I found this Bounsweet rooting\n"
	.string "around in the crates! I think it wanted\l"
	.string "a Trainer to be its friend.$"

KalamiCity_EventScript_BugCatcher_Text_0:
# 319 "data/maps/KalamiCity/scripts.pory"
	.string "Bug Catcher$"

KalamiCity_EventScript_BugCatcher_Text_1:
# 320 "data/maps/KalamiCity/scripts.pory"
	.string "I learned all about how Pokémon live\n"
	.string "together in places like this in school!\l"
	.string "Pokémon from the water and the land\l"
	.string "help each other out in a bunch of cool\l"
	.string "ways!$"

KalamiCity_EventScript_Beauty_Text_0:
# 330 "data/maps/KalamiCity/scripts.pory"
	.string "Beauty$"

KalamiCity_EventScript_Beauty_Text_1:
# 331 "data/maps/KalamiCity/scripts.pory"
	.string "This fruit tree at the center of town is\n"
	.string "the only one of its kind in Kalami City.\l"
	.string "They say it's the last tree from before\l"
	.string "the swamp crept in and people started\l"
	.string "building here.$"

KalamiCity_EventScript_WallWorker_Text_0:
# 341 "data/maps/KalamiCity/scripts.pory"
	.string "Worker$"

KalamiCity_EventScript_WallWorker_Text_1:
# 342 "data/maps/KalamiCity/scripts.pory"
	.string "The land around Kalami City is always\n"
	.string "sinking. The swamp and water creeps in,\l"
	.string "and I'm stuck trying to keep these\l"
	.string "walls in good condition!$"

KalamiCity_EventScript_PerformerM_Text_0:
# 352 "data/maps/KalamiCity/scripts.pory"
	.string "Performer$"

KalamiCity_EventScript_PerformerM_Text_1:
# 353 "data/maps/KalamiCity/scripts.pory"
	.string "I dream of performing comedy shows on\n"
	.string "the biggest stages of Ilios! For now,\l"
	.string "though, I'm just sticking with street\l"
	.string "shows here.$"

KalamiCity_EventScript_BlackBelt_Text_0:
# 363 "data/maps/KalamiCity/scripts.pory"
	.string "Black Belt$"

KalamiCity_EventScript_BlackBelt_Text_1:
# 364 "data/maps/KalamiCity/scripts.pory"
	.string "I taught my Pokémon to use Karate Chop\n"
	.string "so it could cut through the vines and\l"
	.string "reeds in the swamp. Now it helps me\l"
	.string "explore the area around the city!$"

KalamiCity_EventScript_Youngster_Text_0:
# 374 "data/maps/KalamiCity/scripts.pory"
	.string "Youngster$"

KalamiCity_EventScript_Youngster_Text_1:
# 375 "data/maps/KalamiCity/scripts.pory"
	.string "My dad says the walls keep the swamp\n"
	.string "from coming into the city. I don't see\l"
	.string "what would be so wrong about that! I\l"
	.string "could make friends with all the new\l"
	.string "Pokémon!$"

KalamiCity_EventScript_Girl_Text_0:
# 385 "data/maps/KalamiCity/scripts.pory"
	.string "Girl$"

KalamiCity_EventScript_Girl_Text_1:
# 386 "data/maps/KalamiCity/scripts.pory"
	.string "My Pokémon was rooting around in the\n"
	.string "dirt, and it found a weird, minty plant. I\l"
	.string "think it changed natures after\l"
	.string "sniffing it!$"

KalamiCity_EventScript_Athlete_Text_0:
# 396 "data/maps/KalamiCity/scripts.pory"
	.string "Athlete$"

KalamiCity_EventScript_Athlete_Text_1:
# 397 "data/maps/KalamiCity/scripts.pory"
	.string "I'm training in the shallow water to\n"
	.string "make my legs stronger! At this rate, I'll\l"
	.string "be the fastest guy in Ilios!$"

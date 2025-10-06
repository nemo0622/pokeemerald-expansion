PalatiCity_MapScripts::
# 2 "data/maps/PalatiCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalatiCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 28 "data/maps/PalatiCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalatiCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PalatiCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PalatiCity/scripts.pory"
	setflag FLAG_VISITED_PALATI_CITY
# 5 "data/maps/PalatiCity/scripts.pory"
	goto_if_unset FLAG_CHIMERA_WEATHER_ACTIVE, PalatiCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
PalatiCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 11 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 12 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 13 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 14 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 15 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 16 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 17 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 18 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 19 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 20 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 21 "data/maps/PalatiCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 22 "data/maps/PalatiCity/scripts.pory"
	setobjectaswildencounter 31, ENCOUNTER_LAND
# 23 "data/maps/PalatiCity/scripts.pory"
	setobjectaswildencounter 32, ENCOUNTER_LAND
# 24 "data/maps/PalatiCity/scripts.pory"
	setobjectaswildencounter 33, ENCOUNTER_LAND
# 25 "data/maps/PalatiCity/scripts.pory"
	setobjectaswildencounter 34, ENCOUNTER_LAND
	return

PalatiCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/PalatiCity/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto PalatiCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PalatiCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 29 "data/maps/PalatiCity/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PalatiCity_EventScript_TryChimeraEvent
	.2byte 0


PalatiCity_EventScript_TryChimeraEvent::
# 35 "data/maps/PalatiCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 36 "data/maps/PalatiCity/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 37 "data/maps/PalatiCity/scripts.pory"
	doweather
# 38 "data/maps/PalatiCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, PalatiCity_EventScript_TryChimeraEvent_3
PalatiCity_EventScript_TryChimeraEvent_1:
# 42 "data/maps/PalatiCity/scripts.pory"
	releaseall
	end

PalatiCity_EventScript_TryChimeraEvent_2:
# 40 "data/maps/PalatiCity/scripts.pory"
	goto PalatiCity_EventScript_ChimeraEvent
	goto PalatiCity_EventScript_TryChimeraEvent_1

PalatiCity_EventScript_TryChimeraEvent_3:
# 38 "data/maps/PalatiCity/scripts.pory"
	goto_if_unset FLAG_DID_CHIMERA_EVENT_PALATI_CITY, PalatiCity_EventScript_TryChimeraEvent_2
	goto PalatiCity_EventScript_TryChimeraEvent_1


PalatiCity_EventScript_ChimeraEvent::
# 48 "data/maps/PalatiCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 51 "data/maps/PalatiCity/scripts.pory"
	setflag FLAG_HIDE_NIKO_PENTEPETAL_CITY
# 52 "data/maps/PalatiCity/scripts.pory"
	setflag FLAG_HIDE_CHIMERA_PENTEPETAL_CITY
# 53 "data/maps/PalatiCity/scripts.pory"
	setflag FLAG_HIDE_RANIA_PENTEPETAL_CITY
# 54 "data/maps/PalatiCity/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_VISIT_RANIA_PENTEPETAL
# 56 "data/maps/PalatiCity/scripts.pory"
	lockall
# 57 "data/maps/PalatiCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 58 "data/maps/PalatiCity/scripts.pory"
	delay 10
# 59 "data/maps/PalatiCity/scripts.pory"
	applymovement 40, Common_Movement_WalkDown
# 60 "data/maps/PalatiCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 61 "data/maps/PalatiCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 62 "data/maps/PalatiCity/scripts.pory"
	waitmovement 0
# 63 "data/maps/PalatiCity/scripts.pory"
	delay 10
# 64 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_ChimeraEvent_Text_0
# 65 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_ChimeraEvent_Text_1
# 66 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 67 "data/maps/PalatiCity/scripts.pory"
	delay 10
# 70 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_ChimeraEvent_Text_2
# 71 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_ChimeraEvent_Text_3
# 72 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 73 "data/maps/PalatiCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 74 "data/maps/PalatiCity/scripts.pory"
	waitmovement 0
# 75 "data/maps/PalatiCity/scripts.pory"
	emote OBJ_EVENT_ID_PLAYER, EMOTE_QUESTION
# 76 "data/maps/PalatiCity/scripts.pory"
	applymovement 41, PalatiCity_Movement_RaniaApproachesPlayer
# 77 "data/maps/PalatiCity/scripts.pory"
	waitmovement 0
# 78 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_ChimeraEvent_Text_4
# 79 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_ChimeraEvent_Text_5
# 80 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 81 "data/maps/PalatiCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 82 "data/maps/PalatiCity/scripts.pory"
	waitmovement 0
# 83 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_ChimeraEvent_Text_0
# 84 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_ChimeraEvent_Text_6
# 85 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 87 "data/maps/PalatiCity/scripts.pory"
	warp MAP_SOFOS_CITY_ACROPOLIS, 5, 10
# 88 "data/maps/PalatiCity/scripts.pory"
	waitstate
# 89 "data/maps/PalatiCity/scripts.pory"
	release
	end


# 106 "data/maps/PalatiCity/scripts.pory"
PalatiCity_Movement_RaniaApproachesPlayer:
# 108 "data/maps/PalatiCity/scripts.pory"
	walk_right
# 108 "data/maps/PalatiCity/scripts.pory"
	walk_right
# 108 "data/maps/PalatiCity/scripts.pory"
	walk_right
# 108 "data/maps/PalatiCity/scripts.pory"
	walk_right
# 108 "data/maps/PalatiCity/scripts.pory"
	walk_right
# 108 "data/maps/PalatiCity/scripts.pory"
	walk_right
# 108 "data/maps/PalatiCity/scripts.pory"
	walk_right
# 108 "data/maps/PalatiCity/scripts.pory"
	walk_right
# 109 "data/maps/PalatiCity/scripts.pory"
	walk_up
# 110 "data/maps/PalatiCity/scripts.pory"
	face_up
# 111 "data/maps/PalatiCity/scripts.pory"
	step_end

PalatiCity_EventScript_ArtistPlayingChess::
# 116 "data/maps/PalatiCity/scripts.pory"
	lock
# 117 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 118 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_ArtistPlayingChess_Text_0
# 119 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_ArtistPlayingChess_Text_1
# 120 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 121 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_CyclingTriathleteF::
# 127 "data/maps/PalatiCity/scripts.pory"
	lock
# 128 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 129 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_CyclingTriathleteF_Text_0
# 130 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_CyclingTriathleteF_Text_1
# 131 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 132 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_BlackBeltNearStatue::
# 138 "data/maps/PalatiCity/scripts.pory"
	lock
# 139 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 140 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_BlackBeltNearStatue_Text_0
# 141 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_BlackBeltNearStatue_Text_1
# 142 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 143 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_OfficerRunningAround::
# 149 "data/maps/PalatiCity/scripts.pory"
	lock
# 150 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 151 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_OfficerRunningAround_Text_0
# 152 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_OfficerRunningAround_Text_1
# 153 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 154 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_Boltund::
# 160 "data/maps/PalatiCity/scripts.pory"
	lock
# 161 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 162 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_Boltund_Text_0
# 163 "data/maps/PalatiCity/scripts.pory"
	playmoncry SPECIES_BOLTUND, CRY_MODE_NORMAL
# 164 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_Boltund_Text_1
# 165 "data/maps/PalatiCity/scripts.pory"
	waitmoncry
# 166 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 167 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_ManLookingAtArchen::
# 173 "data/maps/PalatiCity/scripts.pory"
	lock
# 174 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 175 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_ManLookingAtArchen_Text_0
# 178 "data/maps/PalatiCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_SHOW_MAN_ARCHEN_FROM_PARTY
# 179 "data/maps/PalatiCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PalatiCity_EventScript_ManLookingAtArchen_2
# 188 "data/maps/PalatiCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_SHOW_MAN_ARCHEN_FROM_PARTY
# 189 "data/maps/PalatiCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PalatiCity_EventScript_ManLookingAtArchen_5
# 203 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_ManLookingAtArchen_Text_4
# 204 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 206 "data/maps/PalatiCity/scripts.pory"
	checkforspecieslocal SPECIES_ARCHEN, OPEN_PARTY_SCREEN
# 207 "data/maps/PalatiCity/scripts.pory"
	delay 30
# 208 "data/maps/PalatiCity/scripts.pory"
	compare VAR_RESULT, SPECIES_ARCHEN
	goto_if_ne PalatiCity_EventScript_ManLookingAtArchen_8
# 216 "data/maps/PalatiCity/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 217 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_ManLookingAtArchen_Text_0
# 218 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_ManLookingAtArchen_Text_6
# 219 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 220 "data/maps/PalatiCity/scripts.pory"
	delay 5
# 221 "data/maps/PalatiCity/scripts.pory"
	giveitem ITEM_NEST_BALL, 10
# 222 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 223 "data/maps/PalatiCity/scripts.pory"
	delay 20
# 224 "data/maps/PalatiCity/scripts.pory"
	completequest QUEST_SHOW_MAN_ARCHEN_FROM_PARTY
PalatiCity_EventScript_ManLookingAtArchen_4:
# 227 "data/maps/PalatiCity/scripts.pory"
	release
	end

PalatiCity_EventScript_ManLookingAtArchen_2:
# 181 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_ManLookingAtArchen_Text_1
# 182 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 183 "data/maps/PalatiCity/scripts.pory"
	release
	end

PalatiCity_EventScript_ManLookingAtArchen_5:
# 191 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_ManLookingAtArchen_Text_2
# 192 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 193 "data/maps/PalatiCity/scripts.pory"
	delay 30
# 194 "data/maps/PalatiCity/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 195 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_ManLookingAtArchen_Text_0
# 196 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_ManLookingAtArchen_Text_3
# 197 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 198 "data/maps/PalatiCity/scripts.pory"
	delay 20
# 199 "data/maps/PalatiCity/scripts.pory"
	startquest QUEST_SHOW_MAN_ARCHEN_FROM_PARTY
	goto PalatiCity_EventScript_ManLookingAtArchen_4

PalatiCity_EventScript_ManLookingAtArchen_8:
# 210 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_ManLookingAtArchen_Text_0
# 211 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_ManLookingAtArchen_Text_5
# 212 "data/maps/PalatiCity/scripts.pory"
	closemessage
	goto PalatiCity_EventScript_ManLookingAtArchen_4


PalatiCity_EventScript_GirlLosingChess::
# 233 "data/maps/PalatiCity/scripts.pory"
	lock
# 234 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 235 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_GirlLosingChess_Text_0
# 236 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_GirlLosingChess_Text_1
# 237 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 238 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_Oranguru::
# 244 "data/maps/PalatiCity/scripts.pory"
	lock
# 245 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 246 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_Oranguru_Text_0
# 247 "data/maps/PalatiCity/scripts.pory"
	playmoncry SPECIES_ORANGURU, CRY_MODE_NORMAL
# 248 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_Oranguru_Text_1
# 249 "data/maps/PalatiCity/scripts.pory"
	waitmoncry
# 250 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 251 "data/maps/PalatiCity/scripts.pory"
	delay 5
# 252 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_Oranguru_Text_2
# 253 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 254 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_LittleGirl::
# 260 "data/maps/PalatiCity/scripts.pory"
	lock
# 261 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 262 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_LittleGirl_Text_0
# 263 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_LittleGirl_Text_1
# 264 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 265 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_Camper::
# 271 "data/maps/PalatiCity/scripts.pory"
	lock
# 272 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 273 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_Camper_Text_0
# 274 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_Camper_Text_1
# 275 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 276 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_CollectorWithArmorouge::
# 282 "data/maps/PalatiCity/scripts.pory"
	lock
# 283 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 284 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_CollectorWithArmorouge_Text_0
# 285 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_CollectorWithArmorouge_Text_1
# 286 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 287 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_Armorouge::
# 293 "data/maps/PalatiCity/scripts.pory"
	lock
# 294 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 295 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_Armorouge_Text_0
# 296 "data/maps/PalatiCity/scripts.pory"
	playmoncry SPECIES_ARMAROUGE, CRY_MODE_NORMAL
# 297 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_Armorouge_Text_1
# 298 "data/maps/PalatiCity/scripts.pory"
	waitmoncry
# 299 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 300 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_BeautyInRoad::
# 306 "data/maps/PalatiCity/scripts.pory"
	lock
# 307 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 308 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_BeautyInRoad_Text_0
# 309 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_BeautyInRoad_Text_1
# 310 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 311 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_PsychicM::
# 317 "data/maps/PalatiCity/scripts.pory"
	lock
# 318 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 319 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_PsychicM_Text_0
# 320 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_PsychicM_Text_1
# 321 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 322 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_PokeFan::
# 328 "data/maps/PalatiCity/scripts.pory"
	lock
# 329 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 330 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_PokeFan_Text_0
# 331 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_PokeFan_Text_1
# 332 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 333 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_Cyclizar::
# 339 "data/maps/PalatiCity/scripts.pory"
	lock
# 340 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 341 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_Cyclizar_Text_0
# 342 "data/maps/PalatiCity/scripts.pory"
	playmoncry SPECIES_CYCLIZAR, CRY_MODE_NORMAL
# 343 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_Cyclizar_Text_1
# 344 "data/maps/PalatiCity/scripts.pory"
	waitmoncry
# 345 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 346 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_OldMan::
# 352 "data/maps/PalatiCity/scripts.pory"
	lock
# 353 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 354 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_OldMan_Text_0
# 355 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_OldMan_Text_1
# 356 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 357 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_Youngster::
# 363 "data/maps/PalatiCity/scripts.pory"
	lock
# 364 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 365 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_Youngster_Text_0
# 366 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_Youngster_Text_1
# 367 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 368 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_WorkerMan::
# 374 "data/maps/PalatiCity/scripts.pory"
	lock
# 375 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 376 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_WorkerMan_Text_0
# 377 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_WorkerMan_Text_1
# 378 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 379 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_OldWoman::
# 385 "data/maps/PalatiCity/scripts.pory"
	lock
# 386 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 387 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_OldWoman_Text_0
# 388 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_OldWoman_Text_1
# 389 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 390 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_PunkRocker::
# 396 "data/maps/PalatiCity/scripts.pory"
	lock
# 397 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 398 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_PunkRocker_Text_0
# 399 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_PunkRocker_Text_1
# 400 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 401 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_NinjaBoy::
# 407 "data/maps/PalatiCity/scripts.pory"
	lock
# 408 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 409 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_NinjaBoy_Text_0
# 410 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_NinjaBoy_Text_1
# 411 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 412 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_WomanOnBeach::
# 418 "data/maps/PalatiCity/scripts.pory"
	lock
# 419 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 420 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_WomanOnBeach_Text_0
# 421 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_WomanOnBeach_Text_1
# 422 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 423 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_Sign_GymSign::
# 429 "data/maps/PalatiCity/scripts.pory"
	lock
# 430 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_Sign_GymSign_Text_0
# 431 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 432 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_DirectionSign::
# 438 "data/maps/PalatiCity/scripts.pory"
	lock
# 439 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_DirectionSign_Text_0
# 440 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 441 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_RaniaRivalBattle::
# 447 "data/maps/PalatiCity/scripts.pory"
	lock
# 448 "data/maps/PalatiCity/scripts.pory"
	faceplayer
# 449 "data/maps/PalatiCity/scripts.pory"
	emote 42, EMOTE_EXCLAM
# 450 "data/maps/PalatiCity/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, PalatiCity_EventScript_RaniaRivalBattle_2
# 458 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_ChimeraEvent_Text_4
# 459 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_RaniaRivalBattle_Text_1
# 460 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 462 "data/maps/PalatiCity/scripts.pory"
	trainerbattle_no_intro TRAINER_PALATI_RANIA, PalatiCity_Text_RaniaLose
# 464 "data/maps/PalatiCity/scripts.pory"
	delay 10
# 465 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_ChimeraEvent_Text_4
# 466 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_RaniaRivalBattle_Text_2
# 467 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 468 "data/maps/PalatiCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 469 "data/maps/PalatiCity/scripts.pory"
	delay 15
# 470 "data/maps/PalatiCity/scripts.pory"
	setflag FLAG_HIDE_RIVAL_RANIA_PALATI
# 471 "data/maps/PalatiCity/scripts.pory"
	removeobject 42
# 472 "data/maps/PalatiCity/scripts.pory"
	delay 15
# 473 "data/maps/PalatiCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 474 "data/maps/PalatiCity/scripts.pory"
	delay 10
# 475 "data/maps/PalatiCity/scripts.pory"
	releaseall
	end

PalatiCity_EventScript_RaniaRivalBattle_2:
# 452 "data/maps/PalatiCity/scripts.pory"
	speakername PalatiCity_EventScript_ChimeraEvent_Text_4
# 453 "data/maps/PalatiCity/scripts.pory"
	msgbox PalatiCity_EventScript_RaniaRivalBattle_Text_0
# 454 "data/maps/PalatiCity/scripts.pory"
	closemessage
# 455 "data/maps/PalatiCity/scripts.pory"
	release
	end


PalatiCity_EventScript_ChimeraEvent_Text_0:
# 64 "data/maps/PalatiCity/scripts.pory"
	.string "Rhadine$"

PalatiCity_EventScript_ChimeraEvent_Text_1:
# 65 "data/maps/PalatiCity/scripts.pory"
	.string "It hasn't stormed this badly in\n"
	.string "generations. Did Team Chimera finally do\l"
	.string "it?\p"
	.string "{PLAYER}, you've been fighting Team\n"
	.string "Chimera across the region, right? Then\l"
	.string "you know better than anyone how\l"
	.string "desperately they want control over\l"
	.string "land, sea, and sky. Us Gym Leaders\l"
	.string "discovered their plan to summon a trio\l"
	.string "of Legendary Pokémon: {COLOR GREEN}Raikou, Entei,\l"
	.string "and Suicune{COLOR DARK_GRAY}. These would give Team\l"
	.string "Chimera absolute control of the region,\l"
	.string "to do with as they please.$"

PalatiCity_EventScript_ChimeraEvent_Text_2:
# 70 "data/maps/PalatiCity/scripts.pory"
	.string "???$"

PalatiCity_EventScript_ChimeraEvent_Text_3:
# 71 "data/maps/PalatiCity/scripts.pory"
	.string "{PLAYER}! Thank the Fates, you're\n"
	.string "here!$"

PalatiCity_EventScript_ChimeraEvent_Text_4:
# 78 "data/maps/PalatiCity/scripts.pory"
	.string "Rania$"

PalatiCity_EventScript_ChimeraEvent_Text_5:
# 79 "data/maps/PalatiCity/scripts.pory"
	.string "Piraeus said you'd be here! I sailed with\n"
	.string "him from Sofos City as fast as I could,\l"
	.string "but it looks like the weather beat me.\p"
	.string "Niko and I were in Sofos City to study\n"
	.string "the Acropolis Temple, when Team Chimera\l"
	.string "burst in and took over! I managed to\l"
	.string "slip out, but {COLOR RED}one of the Admins\l"
	.string "captured him{COLOR DARK_GRAY}... If we're going to fight\l"
	.string "back, I need your help. Please, come to\l"
	.string "Sofos City with me!$"

PalatiCity_EventScript_ChimeraEvent_Text_6:
# 84 "data/maps/PalatiCity/scripts.pory"
	.string "I'll come too! If the rumors are true,\n"
	.string "then Team Chimera might have already\l"
	.string "awakened Legendary Pokémon. Come on!$"

PalatiCity_EventScript_ArtistPlayingChess_Text_0:
# 118 "data/maps/PalatiCity/scripts.pory"
	.string "Artist$"

PalatiCity_EventScript_ArtistPlayingChess_Text_1:
# 119 "data/maps/PalatiCity/scripts.pory"
	.string "I'm studying the game board to think of\n"
	.string "strategies. It's really an art form!$"

PalatiCity_EventScript_CyclingTriathleteF_Text_0:
# 129 "data/maps/PalatiCity/scripts.pory"
	.string "Cyclist$"

PalatiCity_EventScript_CyclingTriathleteF_Text_1:
# 130 "data/maps/PalatiCity/scripts.pory"
	.string "Palati City has some of the smoothest\n"
	.string "roads in the region! That's why I come\l"
	.string "here to ride.$"

PalatiCity_EventScript_BlackBeltNearStatue_Text_0:
# 140 "data/maps/PalatiCity/scripts.pory"
	.string "Black Belt$"

PalatiCity_EventScript_BlackBeltNearStatue_Text_1:
# 141 "data/maps/PalatiCity/scripts.pory"
	.string "These statues have been standing for\n"
	.string "thousands of years. I think they were\l"
	.string "great warriors from their time... I\l"
	.string "wonder if there will be statues made of\l"
	.string "me!$"

PalatiCity_EventScript_OfficerRunningAround_Text_0:
# 151 "data/maps/PalatiCity/scripts.pory"
	.string "Officer$"

PalatiCity_EventScript_OfficerRunningAround_Text_1:
# 152 "data/maps/PalatiCity/scripts.pory"
	.string "My Boltund is too fast for me! I\n"
	.string "shouldn't have had that extra donut\l"
	.string "this morning... Urrp!$"

PalatiCity_EventScript_Boltund_Text_0:
# 162 "data/maps/PalatiCity/scripts.pory"
	.string "Boltund$"

PalatiCity_EventScript_Boltund_Text_1:
# 164 "data/maps/PalatiCity/scripts.pory"
	.string "Bwuf bwuf!$"

PalatiCity_EventScript_ManLookingAtArchen_Text_0:
# 175 "data/maps/PalatiCity/scripts.pory"
	.string "Archen Fan$"

PalatiCity_EventScript_ManLookingAtArchen_Text_1:
# 181 "data/maps/PalatiCity/scripts.pory"
	.string "I'm a lot happier now that I've seen\n"
	.string "your Archen up close. I'd love to catch\l"
	.string "that one on top of the Gym someday,\l"
	.string "though.$"

PalatiCity_EventScript_ManLookingAtArchen_Text_2:
# 191 "data/maps/PalatiCity/scripts.pory"
	.string "Hey! Do you see that Archen up there?\n"
	.string "I'd love to learn more about it, but I\l"
	.string "can't chase any down...$"

PalatiCity_EventScript_ManLookingAtArchen_Text_3:
# 196 "data/maps/PalatiCity/scripts.pory"
	.string "Wait, that's a Rotom Phone! And those\n"
	.string "are Poké balls on your belt! I bet you\l"
	.string "can help me.\p"
	.string "{COLOR GREEN}Catch an Archen{COLOR DARK_GRAY} and show me from your\n"
	.string "{COLOR GREEN}Party{COLOR DARK_GRAY} so I can see one up-close. I'll\l"
	.string "give you a little something as thanks!$"

PalatiCity_EventScript_ManLookingAtArchen_Text_4:
# 203 "data/maps/PalatiCity/scripts.pory"
	.string "I'm still chasing down Archens in the\n"
	.string "wild, but it's not going well. Do you\l"
	.string "happen to have one?$"

PalatiCity_EventScript_ManLookingAtArchen_Text_5:
# 211 "data/maps/PalatiCity/scripts.pory"
	.string "Doesn't look like you've had any luck\n"
	.string "catching an Archen, either.\p"
	.string "Show me an {COLOR GREEN}Archen from your Party{COLOR DARK_GRAY} if\n"
	.string "you can catch one. I'd love to see one\l"
	.string "up-close.$"

PalatiCity_EventScript_ManLookingAtArchen_Text_6:
# 218 "data/maps/PalatiCity/scripts.pory"
	.string "Ehehe, look at that! Wow, it's so cool...\p"
	.string "Thanks for showing me. One day, I know\n"
	.string "I'll catch one for myself! Here's\l"
	.string "something for your help.$"

PalatiCity_EventScript_GirlLosingChess_Text_0:
# 235 "data/maps/PalatiCity/scripts.pory"
	.string "Girl$"

PalatiCity_EventScript_GirlLosingChess_Text_1:
# 236 "data/maps/PalatiCity/scripts.pory"
	.string "This is unreal! My Oranguru is kicking my\n"
	.string "butt! I knew they were smart, but this\l"
	.string "is wild...$"

PalatiCity_EventScript_Oranguru_Text_0:
# 246 "data/maps/PalatiCity/scripts.pory"
	.string "Oranguru$"

PalatiCity_EventScript_Oranguru_Text_1:
# 248 "data/maps/PalatiCity/scripts.pory"
	.string "Mmm... Mhmhm!$"

PalatiCity_EventScript_Oranguru_Text_2:
# 252 "data/maps/PalatiCity/scripts.pory"
	.string "Oranguru has a grin on its face... It\n"
	.string "knows it's winning!$"

PalatiCity_EventScript_LittleGirl_Text_0:
# 262 "data/maps/PalatiCity/scripts.pory"
	.string "Little Girl$"

PalatiCity_EventScript_LittleGirl_Text_1:
# 263 "data/maps/PalatiCity/scripts.pory"
	.string "Palati City is all covered in stone, but\n"
	.string "look! Just outside the city, all these\l"
	.string "plants are growing, and Pokémon are\l"
	.string "playing!$"

PalatiCity_EventScript_Camper_Text_0:
# 273 "data/maps/PalatiCity/scripts.pory"
	.string "Camper$"

PalatiCity_EventScript_Camper_Text_1:
# 274 "data/maps/PalatiCity/scripts.pory"
	.string "All Pokémon have different strengths\n"
	.string "and weaknesses. I heard the Gym Leader\l"
	.string "that lives here uses Fire and\l"
	.string "Flying-type Pokémon. I bet Rock-type\l"
	.string "Pokémon would totally win against that!$"

PalatiCity_EventScript_CollectorWithArmorouge_Text_0:
# 284 "data/maps/PalatiCity/scripts.pory"
	.string "Collector$"

PalatiCity_EventScript_CollectorWithArmorouge_Text_1:
# 285 "data/maps/PalatiCity/scripts.pory"
	.string "I found some ancient armor pieces in\n"
	.string "the areas around Palati City, and they\l"
	.string "made my Charcadet evolve. How\l"
	.string "fascinating!$"

PalatiCity_EventScript_Armorouge_Text_0:
# 295 "data/maps/PalatiCity/scripts.pory"
	.string "Armarouge$"

PalatiCity_EventScript_Armorouge_Text_1:
# 297 "data/maps/PalatiCity/scripts.pory"
	.string "Hyeh!$"

PalatiCity_EventScript_BeautyInRoad_Text_0:
# 308 "data/maps/PalatiCity/scripts.pory"
	.string "Beauty$"

PalatiCity_EventScript_BeautyInRoad_Text_1:
# 309 "data/maps/PalatiCity/scripts.pory"
	.string "Every area in the Ilios Region has its\n"
	.string "own fashion. Personally, I think Palati\l"
	.string "City fashion is the best of all!$"

PalatiCity_EventScript_PsychicM_Text_0:
# 319 "data/maps/PalatiCity/scripts.pory"
	.string "Psychic$"

PalatiCity_EventScript_PsychicM_Text_1:
# 320 "data/maps/PalatiCity/scripts.pory"
	.string "My Pokémon help me see visions of the\n"
	.string "past. Palati City has the longest\l"
	.string "history of any city in the Ilios Region.$"

PalatiCity_EventScript_PokeFan_Text_0:
# 330 "data/maps/PalatiCity/scripts.pory"
	.string "Pokéfan$"

PalatiCity_EventScript_PokeFan_Text_1:
# 331 "data/maps/PalatiCity/scripts.pory"
	.string "I ride around on the back of my\n"
	.string "Cyclizar! It can't evolve, but I've\l"
	.string "heard it can change form somehow...$"

PalatiCity_EventScript_Cyclizar_Text_0:
# 341 "data/maps/PalatiCity/scripts.pory"
	.string "Cyclizar$"

PalatiCity_EventScript_Cyclizar_Text_1:
# 343 "data/maps/PalatiCity/scripts.pory"
	.string "Kroom room!$"

PalatiCity_EventScript_OldMan_Text_0:
# 354 "data/maps/PalatiCity/scripts.pory"
	.string "Old Man$"

PalatiCity_EventScript_OldMan_Text_1:
# 355 "data/maps/PalatiCity/scripts.pory"
	.string "There are lots of foodstuffs free for\n"
	.string "the taking around the city. We have\l"
	.string "plenty of food to go around here, so\l"
	.string "it's a good use of resources.$"

PalatiCity_EventScript_Youngster_Text_0:
# 365 "data/maps/PalatiCity/scripts.pory"
	.string "Youngster$"

PalatiCity_EventScript_Youngster_Text_1:
# 366 "data/maps/PalatiCity/scripts.pory"
	.string "I hear there are strong Trainers on\n"
	.string "Kaptara Island. If you're going to\l"
	.string "challenge the Gym, you should make sure\l"
	.string "you can beat them.$"

PalatiCity_EventScript_WorkerMan_Text_0:
# 376 "data/maps/PalatiCity/scripts.pory"
	.string "Worker$"

PalatiCity_EventScript_WorkerMan_Text_1:
# 377 "data/maps/PalatiCity/scripts.pory"
	.string "The palace-like buildings of Palati City\n"
	.string "have stood for thousands of years.\l"
	.string "When we make repairs, we have to be\l"
	.string "careful to preserve the original\l"
	.string "architecture.$"

PalatiCity_EventScript_OldWoman_Text_0:
# 387 "data/maps/PalatiCity/scripts.pory"
	.string "Old Woman$"

PalatiCity_EventScript_OldWoman_Text_1:
# 388 "data/maps/PalatiCity/scripts.pory"
	.string "I used to play this game when I was a\n"
	.string "girl. Now, most people go to Sofos City's\l"
	.string "Arcade to play modern games.$"

PalatiCity_EventScript_PunkRocker_Text_0:
# 398 "data/maps/PalatiCity/scripts.pory"
	.string "Punk Rocker$"

PalatiCity_EventScript_PunkRocker_Text_1:
# 399 "data/maps/PalatiCity/scripts.pory"
	.string "The wild Timburr and Gurdurr found\n"
	.string "around the city are descended from the\l"
	.string "first Pokémon, who helped build the\l"
	.string "palaces thousands of years ago. I'm\l"
	.string "more of a music girl, but I can\l"
	.string "appreciate history!$"

PalatiCity_EventScript_NinjaBoy_Text_0:
# 409 "data/maps/PalatiCity/scripts.pory"
	.string "Ninja Boy$"

PalatiCity_EventScript_NinjaBoy_Text_1:
# 410 "data/maps/PalatiCity/scripts.pory"
	.string "That old sailor lets me play with his\n"
	.string "Vaporeon when he sails here!$"

PalatiCity_EventScript_WomanOnBeach_Text_0:
# 420 "data/maps/PalatiCity/scripts.pory"
	.string "Woman$"

PalatiCity_EventScript_WomanOnBeach_Text_1:
# 421 "data/maps/PalatiCity/scripts.pory"
	.string "Palati City doesn't have much of a\n"
	.string "beach to speak of. Over the centuries,\l"
	.string "the beaches eroded away to almost\l"
	.string "nothing.\p"
	.string "The island still stands, though. My\n"
	.string "professor said it was the first place in\l"
	.string "Ilios to develop civilization!$"

PalatiCity_Sign_GymSign_Text_0:
# 430 "data/maps/PalatiCity/scripts.pory"
	.string "Gym Leader: Rhadine\n"
	.string "Muse of Fiery Love and Beauty$"

PalatiCity_EventScript_DirectionSign_Text_0:
# 439 "data/maps/PalatiCity/scripts.pory"
	.string "Palati City\n"
	.string "The Birthplace of Ilian Civilization\p"
	.string "{LEFT_ARROW} Kaptara Island - Krikri Gorge\n"
	.string "Kaptara Island - Octillery Forest {RIGHT_ARROW}$"

PalatiCity_EventScript_RaniaRivalBattle_Text_0:
# 453 "data/maps/PalatiCity/scripts.pory"
	.string "{PLAYER}! It's been a bit, eh?\p"
	.string "I was about to challenge Rhadine, the\n"
	.string "Gym Leader of Palati City. They turned\l"
	.string "me away because I don't have the\l"
	.string "{COLOR GREEN}Fresco Isles Gym Badge{COLOR DARK_GRAY}, though. I guess\l"
	.string "we should get that first!$"

PalatiCity_EventScript_RaniaRivalBattle_Text_1:
# 459 "data/maps/PalatiCity/scripts.pory"
	.string "{PLAYER}! It's been a bit, eh?\p"
	.string "I just beat Rhadine, the Gym Leader of\n"
	.string "this city! That was a rough one, but I'm\l"
	.string "more fired up than ever. How about a\l"
	.string "quick battle before you head into the\l"
	.string "Gym?$"

PalatiCity_EventScript_RaniaRivalBattle_Text_2:
# 466 "data/maps/PalatiCity/scripts.pory"
	.string "Ehehe, I didn't doubt you for a second,\n"
	.string "{PLAYER}! If you can handle me, you\l"
	.string "can definitely handle Rhadine.\p"
	.string "I'm planning on meeting with Niko in\n"
	.string "Sofos City soon on a little research\l"
	.string "expedition. Maybe we can catch up and\l"
	.string "chat about it afterwards! For now, good\l"
	.string "luck with Rhadine!$"

PalatiCity_Text_RaniaLose::
# 479 "data/maps/PalatiCity/scripts.pory"
	.string "I can't believe it, you're still stronger\n"
	.string "than me!$"

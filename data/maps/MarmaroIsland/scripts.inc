MarmaroIsland_MapScripts::
# 2 "data/maps/MarmaroIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MarmaroIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MarmaroIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MarmaroIsland/scripts.pory"
	setflag FLAG_VISITED_MARMARO_ISLAND
# 5 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 6 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 7 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 8 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 9 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 10 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 11 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 12 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 13 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 14 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 15 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 16 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 17 "data/maps/MarmaroIsland/scripts.pory"
	setobjectaswildencounter 17, ENCOUNTER_LAND
# 18 "data/maps/MarmaroIsland/scripts.pory"
	setobjectaswildencounter 18, ENCOUNTER_LAND
# 19 "data/maps/MarmaroIsland/scripts.pory"
	setobjectaswildencounter 19, ENCOUNTER_LAND
# 20 "data/maps/MarmaroIsland/scripts.pory"
	setobjectaswildencounter 20, ENCOUNTER_LAND
	return


MarmaroIsland_EventScript_DirectionSign::
# 26 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 27 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_DirectionSign_Text_0
# 28 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 29 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_PiraeusVaporeon::
# 35 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 36 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 37 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_PiraeusVaporeon_Text_0
# 38 "data/maps/MarmaroIsland/scripts.pory"
	playmoncry SPECIES_VAPOREON, CRY_MODE_NORMAL
# 39 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PiraeusVaporeon_Text_1
# 40 "data/maps/MarmaroIsland/scripts.pory"
	waitmoncry
# 41 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 42 "data/maps/MarmaroIsland/scripts.pory"
	delay 5
# 43 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PiraeusVaporeon_Text_2
# 44 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 45 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_FatMan::
# 51 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 52 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 53 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_FatMan_Text_0
# 54 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_FatMan_Text_1
# 55 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 56 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_LittleGirl::
# 62 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 63 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 64 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_LittleGirl_Text_0
# 65 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_LittleGirl_Text_1
# 66 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 67 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Mother::
# 73 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 74 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 75 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Mother_Text_0
# 76 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Mother_Text_1
# 77 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 78 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_RichBoy::
# 84 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 85 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 86 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_RichBoy_Text_0
# 87 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_RichBoy_Text_1
# 88 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 89 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Lass::
# 95 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 96 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 97 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Lass_Text_0
# 98 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Lass_Text_1
# 99 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 100 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Scraggy::
# 106 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 107 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 108 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Scraggy_Text_0
# 109 "data/maps/MarmaroIsland/scripts.pory"
	playmoncry SPECIES_SCRAGGY, CRY_MODE_NORMAL
# 110 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Scraggy_Text_1
# 111 "data/maps/MarmaroIsland/scripts.pory"
	waitmoncry
# 112 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 113 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_BlackBelt::
# 119 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 120 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 121 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_BlackBelt_Text_0
# 122 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_BlackBelt_Text_1
# 123 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 124 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_PsychicM::
# 130 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 131 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 132 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_PsychicM_Text_0
# 133 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PsychicM_Text_1
# 134 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 135 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_ConstructionWorker::
# 141 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 142 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 143 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_ConstructionWorker_Text_0
# 144 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_ConstructionWorker_Text_1
# 145 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 146 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Worker::
# 152 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 153 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 154 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_ConstructionWorker_Text_0
# 155 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Worker_Text_0
# 156 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 157 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_ConstructionWorker2::
# 163 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 164 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 165 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_ConstructionWorker_Text_0
# 166 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_ConstructionWorker2_Text_0
# 167 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 168 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_PokefanF::
# 174 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 175 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 176 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_PokefanF_Text_0
# 179 "data/maps/MarmaroIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_MARMARO_TIMER_BALL
# 180 "data/maps/MarmaroIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MarmaroIsland_EventScript_PokefanF_2
# 189 "data/maps/MarmaroIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_MARMARO_TIMER_BALL
# 190 "data/maps/MarmaroIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MarmaroIsland_EventScript_PokefanF_5
# 200 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PokefanF_Text_3
# 201 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 203 "data/maps/MarmaroIsland/scripts.pory"
	checkitem ITEM_TIMER_BALL
# 204 "data/maps/MarmaroIsland/scripts.pory"
	delay 30
# 205 "data/maps/MarmaroIsland/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MarmaroIsland_EventScript_PokefanF_8
# 215 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_PokefanF_Text_0
# 216 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PokefanF_Text_5
# 217 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 218 "data/maps/MarmaroIsland/scripts.pory"
	removeitem ITEM_TIMER_BALL
# 219 "data/maps/MarmaroIsland/scripts.pory"
	delay 5
# 220 "data/maps/MarmaroIsland/scripts.pory"
	giveitem ITEM_QUICK_BALL, 3
# 221 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 223 "data/maps/MarmaroIsland/scripts.pory"
	delay 20
# 224 "data/maps/MarmaroIsland/scripts.pory"
	completequest QUEST_MARMARO_TIMER_BALL
MarmaroIsland_EventScript_PokefanF_4:
# 227 "data/maps/MarmaroIsland/scripts.pory"
	release
	end

MarmaroIsland_EventScript_PokefanF_2:
# 182 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PokefanF_Text_1
# 183 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 184 "data/maps/MarmaroIsland/scripts.pory"
	release
	end

MarmaroIsland_EventScript_PokefanF_5:
# 192 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PokefanF_Text_2
# 193 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 195 "data/maps/MarmaroIsland/scripts.pory"
	delay 20
# 196 "data/maps/MarmaroIsland/scripts.pory"
	startquest QUEST_MARMARO_TIMER_BALL
	goto MarmaroIsland_EventScript_PokefanF_4

MarmaroIsland_EventScript_PokefanF_8:
# 207 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_PokefanF_Text_0
# 208 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PokefanF_Text_4
# 209 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 210 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Wurmple::
# 233 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 234 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 235 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Wurmple_Text_0
# 236 "data/maps/MarmaroIsland/scripts.pory"
	playmoncry SPECIES_WURMPLE, CRY_MODE_NORMAL
# 237 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Wurmple_Text_1
# 238 "data/maps/MarmaroIsland/scripts.pory"
	waitmoncry
# 239 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 240 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Hiker::
# 246 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 247 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 248 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Hiker_Text_0
# 249 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Hiker_Text_1
# 250 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 251 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Beauty::
# 257 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 258 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 259 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Beauty_Text_0
# 262 "data/maps/MarmaroIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_MARMARO_EGG_QUEST
# 263 "data/maps/MarmaroIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MarmaroIsland_EventScript_Beauty_2
# 272 "data/maps/MarmaroIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_MARMARO_EGG_QUEST
# 273 "data/maps/MarmaroIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MarmaroIsland_EventScript_Beauty_5
# 283 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_Text_3
# 284 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 286 "data/maps/MarmaroIsland/scripts.pory"
	checkforspecies SPECIES_EGG, OPEN_PARTY_SCREEN, MarmaroIsland_EventScript_Beauty_ReactToEgg
# 289 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Beauty_Text_0
# 290 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_Text_4
# 291 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
MarmaroIsland_EventScript_Beauty_4:
# 293 "data/maps/MarmaroIsland/scripts.pory"
	release
	end

MarmaroIsland_EventScript_Beauty_2:
# 265 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_Text_1
# 266 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 267 "data/maps/MarmaroIsland/scripts.pory"
	release
	end

MarmaroIsland_EventScript_Beauty_5:
# 275 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_Text_2
# 276 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 278 "data/maps/MarmaroIsland/scripts.pory"
	delay 20
# 279 "data/maps/MarmaroIsland/scripts.pory"
	startquest QUEST_MARMARO_EGG_QUEST
	goto MarmaroIsland_EventScript_Beauty_4


MarmaroIsland_EventScript_Beauty_ReactToEgg::
# 298 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 299 "data/maps/MarmaroIsland/scripts.pory"
	delay 20
# 300 "data/maps/MarmaroIsland/scripts.pory"
	applymovement 22, Common_Movement_Heart
# 301 "data/maps/MarmaroIsland/scripts.pory"
	waitmovement 0
# 302 "data/maps/MarmaroIsland/scripts.pory"
	delay 10
# 303 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Beauty_Text_0
# 304 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_ReactToEgg_Text_0
# 305 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 306 "data/maps/MarmaroIsland/scripts.pory"
	delay 10
# 307 "data/maps/MarmaroIsland/scripts.pory"
	applymovement 22, Common_Movement_ExclamationMark
# 308 "data/maps/MarmaroIsland/scripts.pory"
	waitmovement 0
# 309 "data/maps/MarmaroIsland/scripts.pory"
	delay 10
# 310 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Beauty_Text_0
# 311 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_ReactToEgg_Text_1
# 312 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 313 "data/maps/MarmaroIsland/scripts.pory"
	delay 5
# 314 "data/maps/MarmaroIsland/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
# 315 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 317 "data/maps/MarmaroIsland/scripts.pory"
	delay 20
# 318 "data/maps/MarmaroIsland/scripts.pory"
	completequest QUEST_MARMARO_EGG_QUEST
# 320 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_SwimmerM::
# 326 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 327 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 328 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_SwimmerM_Text_0
# 329 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_SwimmerM_Text_1
# 330 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 331 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Gentleman::
# 337 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 338 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 339 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Gentleman_Text_0
# 340 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Gentleman_Text_1
# 341 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 342 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_SwimmerF::
# 348 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 349 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 350 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_SwimmerM_Text_0
# 351 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_SwimmerF_Text_0
# 352 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 353 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_OldWoman::
# 359 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 360 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 361 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_OldWoman_Text_0
# 362 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_OldWoman_Text_1
# 363 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 364 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_ChimeraGruntBlockingMine::
# 370 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 371 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 372 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_ChimeraGruntBlockingMine_Text_0
# 373 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_ChimeraGruntBlockingMine_Text_1
# 374 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 375 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_FossilHouseSign::
# 381 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 382 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_FossilHouseSign_Text_0
# 383 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 384 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_DirectionSign_Text_0:
# 27 "data/maps/MarmaroIsland/scripts.pory"
	.string "Marmaro Island\n"
	.string "Isle of Marble and Minecarts\p"
	.string "{LEFT_ARROW} Sea of Asteri - West\n"
	.string "Sea of Asteri - East {RIGHT_ARROW}$"

MarmaroIsland_EventScript_PiraeusVaporeon_Text_0:
# 37 "data/maps/MarmaroIsland/scripts.pory"
	.string "Vaporeon$"

MarmaroIsland_EventScript_PiraeusVaporeon_Text_1:
# 39 "data/maps/MarmaroIsland/scripts.pory"
	.string "Bwark!$"

MarmaroIsland_EventScript_PiraeusVaporeon_Text_2:
# 43 "data/maps/MarmaroIsland/scripts.pory"
	.string "Piraeus's Vaporeon looks happy to see\n"
	.string "you!$"

MarmaroIsland_EventScript_FatMan_Text_0:
# 53 "data/maps/MarmaroIsland/scripts.pory"
	.string "Fat Man$"

MarmaroIsland_EventScript_FatMan_Text_1:
# 54 "data/maps/MarmaroIsland/scripts.pory"
	.string "My family expects me to go into the\n"
	.string "mining business, but that's just not\l"
	.string "where my heart is. I want to run a hotel\l"
	.string "here!$"

MarmaroIsland_EventScript_LittleGirl_Text_0:
# 64 "data/maps/MarmaroIsland/scripts.pory"
	.string "Little Girl$"

MarmaroIsland_EventScript_LittleGirl_Text_1:
# 65 "data/maps/MarmaroIsland/scripts.pory"
	.string "I'm here on vacation with my mom! I've\n"
	.string "never felt weather this warm!$"

MarmaroIsland_EventScript_Mother_Text_0:
# 75 "data/maps/MarmaroIsland/scripts.pory"
	.string "Woman$"

MarmaroIsland_EventScript_Mother_Text_1:
# 76 "data/maps/MarmaroIsland/scripts.pory"
	.string "My child and I are visiting from the\n"
	.string "Galar Region. The climate here is so\l"
	.string "much nicer... maybe we should look into\l"
	.string "moving! Of course, that's what everyone\l"
	.string "says on vacation, ehehe.$"

MarmaroIsland_EventScript_RichBoy_Text_0:
# 86 "data/maps/MarmaroIsland/scripts.pory"
	.string "Rich Boy$"

MarmaroIsland_EventScript_RichBoy_Text_1:
# 87 "data/maps/MarmaroIsland/scripts.pory"
	.string "Apparently, this island made a ton of\n"
	.string "money by selling marble to the rest of\l"
	.string "the Region. Maybe I could do something\l"
	.string "like that!$"

MarmaroIsland_EventScript_Lass_Text_0:
# 97 "data/maps/MarmaroIsland/scripts.pory"
	.string "Lass$"

MarmaroIsland_EventScript_Lass_Text_1:
# 98 "data/maps/MarmaroIsland/scripts.pory"
	.string "The pine trees on Marmaro Island are so\n"
	.string "different than the palms of other\l"
	.string "islands. I wonder why it's so different.$"

MarmaroIsland_EventScript_Scraggy_Text_0:
# 108 "data/maps/MarmaroIsland/scripts.pory"
	.string "Scraggy$"

MarmaroIsland_EventScript_Scraggy_Text_1:
# 110 "data/maps/MarmaroIsland/scripts.pory"
	.string "Hka ka ka!$"

MarmaroIsland_EventScript_BlackBelt_Text_0:
# 121 "data/maps/MarmaroIsland/scripts.pory"
	.string "Black Belt$"

MarmaroIsland_EventScript_BlackBelt_Text_1:
# 122 "data/maps/MarmaroIsland/scripts.pory"
	.string "I'm training my Pokémon to protect\n"
	.string "everyone. {COLOR GREEN}Areios Town{COLOR DARK_GRAY}, a little hamlet\l"
	.string "on the southwest mainland, was taken\l"
	.string "over by Team Chimera. Their Gym Leader\l"
	.string "was supposed to be the strongest in\l"
	.string "the region, but she's gone missing.$"

MarmaroIsland_EventScript_PsychicM_Text_0:
# 132 "data/maps/MarmaroIsland/scripts.pory"
	.string "Psychic$"

MarmaroIsland_EventScript_PsychicM_Text_1:
# 133 "data/maps/MarmaroIsland/scripts.pory"
	.string "The white stone of Marmaro Island has\n"
	.string "special properties! In Ancient Ilios,\l"
	.string "people used to build temples with it to\l"
	.string "honor the gods.$"

MarmaroIsland_EventScript_ConstructionWorker_Text_0:
# 143 "data/maps/MarmaroIsland/scripts.pory"
	.string "Worker$"

MarmaroIsland_EventScript_ConstructionWorker_Text_1:
# 144 "data/maps/MarmaroIsland/scripts.pory"
	.string "Our minecarts move the stone we\n"
	.string "extract across the island. Big boats\l"
	.string "come by every so often to ship it\l"
	.string "across the Ilios Region!$"

MarmaroIsland_EventScript_Worker_Text_0:
# 155 "data/maps/MarmaroIsland/scripts.pory"
	.string "It's hard work to keep the minecart\n"
	.string "rails clear! There's always loose stone\l"
	.string "falling on the tracks.$"

MarmaroIsland_EventScript_ConstructionWorker2_Text_0:
# 166 "data/maps/MarmaroIsland/scripts.pory"
	.string "We move full minecarts off the tracks\n"
	.string "to prepare for shipping. Before sending\l"
	.string "it off, we sort through it all to make\l"
	.string "sure there aren't any valuables. People\l"
	.string "have found gold Nuggets hidden in the\l"
	.string "piles!$"

MarmaroIsland_EventScript_PokefanF_Text_0:
# 176 "data/maps/MarmaroIsland/scripts.pory"
	.string "Pokéfan$"

MarmaroIsland_EventScript_PokefanF_Text_1:
# 182 "data/maps/MarmaroIsland/scripts.pory"
	.string "The Timer Ball is gonna work perfectly,\n"
	.string "I know it!$"

MarmaroIsland_EventScript_PokefanF_Text_2:
# 192 "data/maps/MarmaroIsland/scripts.pory"
	.string "My Wurmple and I have been chasing down\n"
	.string "a Growlithe for hours, hitting it with\l"
	.string "String Shot to slow it down. After all\l"
	.string "that effort, I'm out of Poké balls!\p"
	.string "Please, {COLOR GREEN}bring me a Timer Ball{COLOR DARK_GRAY} so I can\n"
	.string "finally catch the Growlithe!$"

MarmaroIsland_EventScript_PokefanF_Text_3:
# 200 "data/maps/MarmaroIsland/scripts.pory"
	.string "Hiya! Did you bring that Timer Ball you\n"
	.string "asked for?$"

MarmaroIsland_EventScript_PokefanF_Text_4:
# 208 "data/maps/MarmaroIsland/scripts.pory"
	.string "I guess I'm still out of luck...\p"
	.string "When you can, {COLOR GREEN}bring me a Timer Ball{COLOR DARK_GRAY} so I\n"
	.string "can catch this Growlithe I've been\l"
	.string "following around the Island!$"

MarmaroIsland_EventScript_PokefanF_Text_5:
# 216 "data/maps/MarmaroIsland/scripts.pory"
	.string "Cheers, you brought a Timer Ball! I'll\n"
	.string "take that off your hands...\p"
	.string "Here, take these Quick Balls. I was\n"
	.string "gonna use them on the wild Growlithe,\l"
	.string "but the battle took too long!$"

MarmaroIsland_EventScript_Wurmple_Text_0:
# 235 "data/maps/MarmaroIsland/scripts.pory"
	.string "Wurmple$"

MarmaroIsland_EventScript_Wurmple_Text_1:
# 237 "data/maps/MarmaroIsland/scripts.pory"
	.string "St-st-st.$"

MarmaroIsland_EventScript_Hiker_Text_0:
# 248 "data/maps/MarmaroIsland/scripts.pory"
	.string "Hiker$"

MarmaroIsland_EventScript_Hiker_Text_1:
# 249 "data/maps/MarmaroIsland/scripts.pory"
	.string "The marble quarry of Marmaro Island is\n"
	.string "famous in the Ilios Region. Everything\l"
	.string "from treasure to precious stones can\l"
	.string "be found in the rock here!$"

MarmaroIsland_EventScript_Beauty_Text_0:
# 259 "data/maps/MarmaroIsland/scripts.pory"
	.string "Beauty$"

MarmaroIsland_EventScript_Beauty_Text_1:
# 265 "data/maps/MarmaroIsland/scripts.pory"
	.string "Holding your Pokémon Egg has convinced\n"
	.string "me. I'm gonna head to the Sunset\l"
	.string "Wildlife Conservation Center in Kipos\l"
	.string "Town and volunteer to help out!$"

MarmaroIsland_EventScript_Beauty_Text_2:
# 275 "data/maps/MarmaroIsland/scripts.pory"
	.string "See up there? That Altaria laid an Egg!\n"
	.string "I'd give anything to hold a Pokémon Egg,\l"
	.string "they're just so cool!\p"
	.string "Oh, you're a Trainer, right? Could you\n"
	.string "{COLOR GREEN}bring me a Pokémon Egg to see{COLOR DARK_GRAY} and hold?\l"
	.string "I've always wanted to hold one, but\l"
	.string "taking wild Pokémon Eggs from their\l"
	.string "parents is unethical.$"

MarmaroIsland_EventScript_Beauty_Text_3:
# 283 "data/maps/MarmaroIsland/scripts.pory"
	.string "Chaire! Are you here to check out the\n"
	.string "Altaria nest?\p"
	.string "Oh, right! Do you have a {COLOR GREEN}Pokémon Egg in\n"
	.string "your Party{COLOR DARK_GRAY} that I could hold? I've\l"
	.string "always wanted to!$"

MarmaroIsland_EventScript_Beauty_Text_4:
# 290 "data/maps/MarmaroIsland/scripts.pory"
	.string "Aw, I suppose Pokémon Eggs aren't all\n"
	.string "that common.\p"
	.string "Bring me a {COLOR GREEN}Pokémon Egg to hold{COLOR DARK_GRAY} if you\n"
	.string "can! I've always wanted to see and hold\l"
	.string "one myself.$"

MarmaroIsland_EventScript_Beauty_ReactToEgg_Text_0:
# 304 "data/maps/MarmaroIsland/scripts.pory"
	.string "Amazing! Almost all Pokémon species lay\n"
	.string "Eggs, and each is slightly different. I'd\l"
	.string "love to learn even more about them...$"

MarmaroIsland_EventScript_Beauty_ReactToEgg_Text_1:
# 311 "data/maps/MarmaroIsland/scripts.pory"
	.string "That's right! In Kipos Town, the Sunset\n"
	.string "Wildlife Conservation Center helps\l"
	.string "Pokémon with Eggs. Maybe I'll go ahead\l"
	.string "and volunteer there!\p"
	.string "I'm sure this wasn't easy for you. I\n"
	.string "want you to have this!$"

MarmaroIsland_EventScript_SwimmerM_Text_0:
# 328 "data/maps/MarmaroIsland/scripts.pory"
	.string "Swimmer$"

MarmaroIsland_EventScript_SwimmerM_Text_1:
# 329 "data/maps/MarmaroIsland/scripts.pory"
	.string "I was on such a roll swimming, I almost\n"
	.string "went right past Marmaro Island!$"

MarmaroIsland_EventScript_Gentleman_Text_0:
# 339 "data/maps/MarmaroIsland/scripts.pory"
	.string "Gentleman$"

MarmaroIsland_EventScript_Gentleman_Text_1:
# 340 "data/maps/MarmaroIsland/scripts.pory"
	.string "The way south around Marmaro Island is\n"
	.string "blocked by that old fellow with the\l"
	.string "boat. The best way to pass is just to\l"
	.string "cross the island on foot.$"

MarmaroIsland_EventScript_SwimmerF_Text_0:
# 351 "data/maps/MarmaroIsland/scripts.pory"
	.string "To get to Myrrini Island, I have to keep\n"
	.string "swimming east! I just stopped here for\l"
	.string "a quick rest.$"

MarmaroIsland_EventScript_OldWoman_Text_0:
# 361 "data/maps/MarmaroIsland/scripts.pory"
	.string "Old Woman$"

MarmaroIsland_EventScript_OldWoman_Text_1:
# 362 "data/maps/MarmaroIsland/scripts.pory"
	.string "Not everyone is a skilled enough\n"
	.string "Trainer to use Surf between islands.\l"
	.string "That's why there are bridges\l"
	.string "connecting some areas, and boat\l"
	.string "services are common.$"

MarmaroIsland_EventScript_ChimeraGruntBlockingMine_Text_0:
# 372 "data/maps/MarmaroIsland/scripts.pory"
	.string "Chimera Grunt$"

MarmaroIsland_EventScript_ChimeraGruntBlockingMine_Text_1:
# 373 "data/maps/MarmaroIsland/scripts.pory"
	.string "Uhh, hey there, bud! There's been\n"
	.string "reports of... big, scary monsters in the\l"
	.string "Marmaro Mines! Yeah, you don't want to\l"
	.string "go in here! Now, move along.$"

MarmaroIsland_EventScript_FossilHouseSign_Text_0:
# 382 "data/maps/MarmaroIsland/scripts.pory"
	.string "There's a message freshly painted on\n"
	.string "the sign...\p"
	.string "Marmaro Paleo-Fossil Services!\n"
	.string "For all your Fossil and Spirit needs.$"

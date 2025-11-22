MarmaroIsland_MapScripts::
# 2 "data/maps/MarmaroIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MarmaroIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MarmaroIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MarmaroIsland/scripts.pory"
	setflag FLAG_VISITED_MARMARO_ISLAND
# 5 "data/maps/MarmaroIsland/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, MarmaroIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MarmaroIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 11 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 12 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 13 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 14 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 15 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 16 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 17 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 18 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 19 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 20 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 21 "data/maps/MarmaroIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 22 "data/maps/MarmaroIsland/scripts.pory"
	setobjectaswildencounter 17, ENCOUNTER_LAND
# 23 "data/maps/MarmaroIsland/scripts.pory"
	setobjectaswildencounter 18, ENCOUNTER_LAND
# 24 "data/maps/MarmaroIsland/scripts.pory"
	setobjectaswildencounter 19, ENCOUNTER_LAND
# 25 "data/maps/MarmaroIsland/scripts.pory"
	setobjectaswildencounter 20, ENCOUNTER_LAND
	return

MarmaroIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/MarmaroIsland/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto MarmaroIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


MarmaroIsland_EventScript_DirectionSign::
# 31 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 32 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_DirectionSign_Text_0
# 33 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 34 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_PiraeusVaporeon::
# 40 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 41 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 42 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_PiraeusVaporeon_Text_0
# 43 "data/maps/MarmaroIsland/scripts.pory"
	playmoncry SPECIES_VAPOREON, CRY_MODE_NORMAL
# 44 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PiraeusVaporeon_Text_1
# 45 "data/maps/MarmaroIsland/scripts.pory"
	waitmoncry
# 46 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 47 "data/maps/MarmaroIsland/scripts.pory"
	delay 5
# 48 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PiraeusVaporeon_Text_2
# 49 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 50 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_FatMan::
# 56 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 57 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 58 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_FatMan_Text_0
# 59 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_FatMan_Text_1
# 60 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 61 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_LittleGirl::
# 67 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 68 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 69 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_LittleGirl_Text_0
# 70 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_LittleGirl_Text_1
# 71 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 72 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Mother::
# 78 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 79 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 80 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Mother_Text_0
# 81 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Mother_Text_1
# 82 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 83 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_RichBoy::
# 89 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 90 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 91 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_RichBoy_Text_0
# 92 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_RichBoy_Text_1
# 93 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 94 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Lass::
# 100 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 101 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 102 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Lass_Text_0
# 103 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Lass_Text_1
# 104 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 105 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Scraggy::
# 111 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 112 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 113 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Scraggy_Text_0
# 114 "data/maps/MarmaroIsland/scripts.pory"
	playmoncry SPECIES_SCRAGGY, CRY_MODE_NORMAL
# 115 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Scraggy_Text_1
# 116 "data/maps/MarmaroIsland/scripts.pory"
	waitmoncry
# 117 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 118 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_BlackBelt::
# 124 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 125 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 126 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_BlackBelt_Text_0
# 127 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_BlackBelt_Text_1
# 128 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 129 "data/maps/MarmaroIsland/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BRICK_BREAK, MarmaroIsland_EventScript_BlackBelt_2
MarmaroIsland_EventScript_BlackBelt_1:
# 140 "data/maps/MarmaroIsland/scripts.pory"
	release
	end

MarmaroIsland_EventScript_BlackBelt_2:
# 131 "data/maps/MarmaroIsland/scripts.pory"
	delay 5
# 132 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_BlackBelt_Text_0
# 133 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_BlackBelt_Text_2
# 134 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 135 "data/maps/MarmaroIsland/scripts.pory"
	delay 5
# 136 "data/maps/MarmaroIsland/scripts.pory"
	setflag FLAG_RECEIVED_TM_BRICK_BREAK
# 137 "data/maps/MarmaroIsland/scripts.pory"
	giveitem ITEM_TM_BRICK_BREAK
# 138 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
	goto MarmaroIsland_EventScript_BlackBelt_1


MarmaroIsland_EventScript_PsychicM::
# 146 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 147 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 148 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_PsychicM_Text_0
# 149 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PsychicM_Text_1
# 150 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 151 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_ConstructionWorker::
# 157 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 158 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 159 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_ConstructionWorker_Text_0
# 160 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_ConstructionWorker_Text_1
# 161 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 162 "data/maps/MarmaroIsland/scripts.pory"
	goto_if_unset FLAG_GOT_DIG_TM, MarmaroIsland_EventScript_ConstructionWorker_2
MarmaroIsland_EventScript_ConstructionWorker_1:
# 171 "data/maps/MarmaroIsland/scripts.pory"
	release
	end

MarmaroIsland_EventScript_ConstructionWorker_2:
# 164 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_ConstructionWorker_Text_0
# 165 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_ConstructionWorker_Text_2
# 166 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 167 "data/maps/MarmaroIsland/scripts.pory"
	delay 5
# 168 "data/maps/MarmaroIsland/scripts.pory"
	giveitem ITEM_TM_DIG
# 169 "data/maps/MarmaroIsland/scripts.pory"
	setflag FLAG_GOT_DIG_TM
	goto MarmaroIsland_EventScript_ConstructionWorker_1


MarmaroIsland_EventScript_Worker::
# 177 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 178 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 179 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_ConstructionWorker_Text_0
# 180 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Worker_Text_0
# 181 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 182 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_ConstructionWorker2::
# 188 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 189 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 190 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_ConstructionWorker_Text_0
# 191 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_ConstructionWorker2_Text_0
# 192 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 193 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_PokefanF::
# 199 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 200 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 201 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_PokefanF_Text_0
# 204 "data/maps/MarmaroIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_MARMARO_TIMER_BALL
# 205 "data/maps/MarmaroIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MarmaroIsland_EventScript_PokefanF_2
# 214 "data/maps/MarmaroIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_MARMARO_TIMER_BALL
# 215 "data/maps/MarmaroIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MarmaroIsland_EventScript_PokefanF_5
# 225 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PokefanF_Text_3
# 226 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 228 "data/maps/MarmaroIsland/scripts.pory"
	checkitem ITEM_TIMER_BALL
# 229 "data/maps/MarmaroIsland/scripts.pory"
	delay 30
# 230 "data/maps/MarmaroIsland/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MarmaroIsland_EventScript_PokefanF_8
# 240 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_PokefanF_Text_0
# 241 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PokefanF_Text_5
# 242 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 243 "data/maps/MarmaroIsland/scripts.pory"
	removeitem ITEM_TIMER_BALL
# 244 "data/maps/MarmaroIsland/scripts.pory"
	delay 5
# 245 "data/maps/MarmaroIsland/scripts.pory"
	giveitem ITEM_QUICK_BALL, 3
# 246 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 248 "data/maps/MarmaroIsland/scripts.pory"
	delay 20
# 249 "data/maps/MarmaroIsland/scripts.pory"
	completequest QUEST_MARMARO_TIMER_BALL
MarmaroIsland_EventScript_PokefanF_4:
# 252 "data/maps/MarmaroIsland/scripts.pory"
	release
	end

MarmaroIsland_EventScript_PokefanF_2:
# 207 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PokefanF_Text_1
# 208 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 209 "data/maps/MarmaroIsland/scripts.pory"
	release
	end

MarmaroIsland_EventScript_PokefanF_5:
# 217 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PokefanF_Text_2
# 218 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 220 "data/maps/MarmaroIsland/scripts.pory"
	delay 20
# 221 "data/maps/MarmaroIsland/scripts.pory"
	startquest QUEST_MARMARO_TIMER_BALL
	goto MarmaroIsland_EventScript_PokefanF_4

MarmaroIsland_EventScript_PokefanF_8:
# 232 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_PokefanF_Text_0
# 233 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PokefanF_Text_4
# 234 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 235 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Wurmple::
# 258 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 259 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 260 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Wurmple_Text_0
# 261 "data/maps/MarmaroIsland/scripts.pory"
	playmoncry SPECIES_WURMPLE, CRY_MODE_NORMAL
# 262 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Wurmple_Text_1
# 263 "data/maps/MarmaroIsland/scripts.pory"
	waitmoncry
# 264 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 265 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Hiker::
# 271 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 272 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 273 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Hiker_Text_0
# 274 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Hiker_Text_1
# 275 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 276 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Beauty::
# 282 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 283 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 284 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Beauty_Text_0
# 287 "data/maps/MarmaroIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_MARMARO_EGG_QUEST
# 288 "data/maps/MarmaroIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MarmaroIsland_EventScript_Beauty_2
# 297 "data/maps/MarmaroIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_MARMARO_EGG_QUEST
# 298 "data/maps/MarmaroIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MarmaroIsland_EventScript_Beauty_5
# 308 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_Text_3
# 309 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 311 "data/maps/MarmaroIsland/scripts.pory"
	special ChoosePartyMon
# 312 "data/maps/MarmaroIsland/scripts.pory"
	waitstate
# 313 "data/maps/MarmaroIsland/scripts.pory"
	special IsSelectedMonEgg
# 314 "data/maps/MarmaroIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MarmaroIsland_EventScript_Beauty_9
MarmaroIsland_EventScript_Beauty_8:
# 320 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Beauty_Text_0
# 321 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_Text_4
# 322 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
MarmaroIsland_EventScript_Beauty_4:
# 324 "data/maps/MarmaroIsland/scripts.pory"
	release
	end

MarmaroIsland_EventScript_Beauty_2:
# 290 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_Text_1
# 291 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 292 "data/maps/MarmaroIsland/scripts.pory"
	release
	end

MarmaroIsland_EventScript_Beauty_5:
# 300 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_Text_2
# 301 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 303 "data/maps/MarmaroIsland/scripts.pory"
	delay 20
# 304 "data/maps/MarmaroIsland/scripts.pory"
	startquest QUEST_MARMARO_EGG_QUEST
	goto MarmaroIsland_EventScript_Beauty_4

MarmaroIsland_EventScript_Beauty_9:
# 316 "data/maps/MarmaroIsland/scripts.pory"
	goto MarmaroIsland_EventScript_Beauty_ReactToEgg
	goto MarmaroIsland_EventScript_Beauty_8


MarmaroIsland_EventScript_Beauty_ReactToEgg::
# 329 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 330 "data/maps/MarmaroIsland/scripts.pory"
	delay 20
# 331 "data/maps/MarmaroIsland/scripts.pory"
	applymovement 22, Common_Movement_Heart
# 332 "data/maps/MarmaroIsland/scripts.pory"
	waitmovement 0
# 333 "data/maps/MarmaroIsland/scripts.pory"
	delay 10
# 334 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Beauty_Text_0
# 335 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_ReactToEgg_Text_0
# 336 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 337 "data/maps/MarmaroIsland/scripts.pory"
	delay 10
# 338 "data/maps/MarmaroIsland/scripts.pory"
	applymovement 22, Common_Movement_ExclamationMark
# 339 "data/maps/MarmaroIsland/scripts.pory"
	waitmovement 0
# 340 "data/maps/MarmaroIsland/scripts.pory"
	delay 10
# 341 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Beauty_Text_0
# 342 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_ReactToEgg_Text_1
# 343 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 344 "data/maps/MarmaroIsland/scripts.pory"
	delay 5
# 345 "data/maps/MarmaroIsland/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
# 346 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 348 "data/maps/MarmaroIsland/scripts.pory"
	delay 20
# 349 "data/maps/MarmaroIsland/scripts.pory"
	completequest QUEST_MARMARO_EGG_QUEST
# 351 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_SwimmerM::
# 357 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 358 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 359 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_SwimmerM_Text_0
# 360 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_SwimmerM_Text_1
# 361 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 362 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Gentleman::
# 368 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 369 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 370 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Gentleman_Text_0
# 371 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Gentleman_Text_1
# 372 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 373 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_SwimmerF::
# 379 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 380 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 381 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_SwimmerM_Text_0
# 382 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_SwimmerF_Text_0
# 383 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 384 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_OldWoman::
# 390 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 391 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 392 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_OldWoman_Text_0
# 393 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_OldWoman_Text_1
# 394 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 395 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_ChimeraGruntBlockingMine::
# 401 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 402 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 403 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_ChimeraGruntBlockingMine_Text_0
# 404 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_ChimeraGruntBlockingMine_Text_1
# 405 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 406 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_FossilHouseSign::
# 412 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 413 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_FossilHouseSign_Text_0
# 414 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 415 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_DirectionSign_Text_0:
# 32 "data/maps/MarmaroIsland/scripts.pory"
	.string "Marmaro Island\n"
	.string "Isle of Marble and Minecarts\p"
	.string "{LEFT_ARROW} Sea of Asteri - West\n"
	.string "Sea of Asteri - East {RIGHT_ARROW}$"

MarmaroIsland_EventScript_PiraeusVaporeon_Text_0:
# 42 "data/maps/MarmaroIsland/scripts.pory"
	.string "Vaporeon$"

MarmaroIsland_EventScript_PiraeusVaporeon_Text_1:
# 44 "data/maps/MarmaroIsland/scripts.pory"
	.string "Bwark!$"

MarmaroIsland_EventScript_PiraeusVaporeon_Text_2:
# 48 "data/maps/MarmaroIsland/scripts.pory"
	.string "Piraeus's Vaporeon looks happy to see\n"
	.string "you!$"

MarmaroIsland_EventScript_FatMan_Text_0:
# 58 "data/maps/MarmaroIsland/scripts.pory"
	.string "Fat Man$"

MarmaroIsland_EventScript_FatMan_Text_1:
# 59 "data/maps/MarmaroIsland/scripts.pory"
	.string "My family expects me to go into the\n"
	.string "mining business, but that's just not\l"
	.string "where my heart is. I want to run a hotel\l"
	.string "here!$"

MarmaroIsland_EventScript_LittleGirl_Text_0:
# 69 "data/maps/MarmaroIsland/scripts.pory"
	.string "Little Girl$"

MarmaroIsland_EventScript_LittleGirl_Text_1:
# 70 "data/maps/MarmaroIsland/scripts.pory"
	.string "I'm here on vacation with my mom! I've\n"
	.string "never felt weather this warm!$"

MarmaroIsland_EventScript_Mother_Text_0:
# 80 "data/maps/MarmaroIsland/scripts.pory"
	.string "Woman$"

MarmaroIsland_EventScript_Mother_Text_1:
# 81 "data/maps/MarmaroIsland/scripts.pory"
	.string "My child and I are visiting from the\n"
	.string "Galar Region. The climate here is so\l"
	.string "much nicer... maybe we should look into\l"
	.string "moving! Of course, that's what everyone\l"
	.string "says on vacation, ehehe.$"

MarmaroIsland_EventScript_RichBoy_Text_0:
# 91 "data/maps/MarmaroIsland/scripts.pory"
	.string "Rich Boy$"

MarmaroIsland_EventScript_RichBoy_Text_1:
# 92 "data/maps/MarmaroIsland/scripts.pory"
	.string "Apparently, this island made a ton of\n"
	.string "money by selling marble to the rest of\l"
	.string "the Region. Maybe I could do something\l"
	.string "like that!$"

MarmaroIsland_EventScript_Lass_Text_0:
# 102 "data/maps/MarmaroIsland/scripts.pory"
	.string "Lass$"

MarmaroIsland_EventScript_Lass_Text_1:
# 103 "data/maps/MarmaroIsland/scripts.pory"
	.string "The pine trees on Marmaro Island are so\n"
	.string "different than the palms of other\l"
	.string "islands. I wonder why it's so different.$"

MarmaroIsland_EventScript_Scraggy_Text_0:
# 113 "data/maps/MarmaroIsland/scripts.pory"
	.string "Scraggy$"

MarmaroIsland_EventScript_Scraggy_Text_1:
# 115 "data/maps/MarmaroIsland/scripts.pory"
	.string "Hka ka ka!$"

MarmaroIsland_EventScript_BlackBelt_Text_0:
# 126 "data/maps/MarmaroIsland/scripts.pory"
	.string "Black Belt$"

MarmaroIsland_EventScript_BlackBelt_Text_1:
# 127 "data/maps/MarmaroIsland/scripts.pory"
	.string "I'm training my Pokémon to protect\n"
	.string "everyone. {COLOR GREEN}Areios Town{COLOR DARK_GRAY}, a little hamlet\l"
	.string "on the southwest mainland, was taken\l"
	.string "over by Team Chimera. Their Gym Leader\l"
	.string "was supposed to be the strongest in\l"
	.string "the region, but she's gone missing.$"

MarmaroIsland_EventScript_BlackBelt_Text_2:
# 133 "data/maps/MarmaroIsland/scripts.pory"
	.string "You seem like a strong young Trainer.\n"
	.string "Take this, and use it to defend others!$"

MarmaroIsland_EventScript_PsychicM_Text_0:
# 148 "data/maps/MarmaroIsland/scripts.pory"
	.string "Psychic$"

MarmaroIsland_EventScript_PsychicM_Text_1:
# 149 "data/maps/MarmaroIsland/scripts.pory"
	.string "The white stone of Marmaro Island has\n"
	.string "special properties! In Ancient Ilios,\l"
	.string "people used to build temples with it to\l"
	.string "honor the gods.$"

MarmaroIsland_EventScript_ConstructionWorker_Text_0:
# 159 "data/maps/MarmaroIsland/scripts.pory"
	.string "Worker$"

MarmaroIsland_EventScript_ConstructionWorker_Text_1:
# 160 "data/maps/MarmaroIsland/scripts.pory"
	.string "We do our best to balance digging and\n"
	.string "sustainability.$"

MarmaroIsland_EventScript_ConstructionWorker_Text_2:
# 165 "data/maps/MarmaroIsland/scripts.pory"
	.string "Do you want to do some digging, too?\n"
	.string "Take this.$"

MarmaroIsland_EventScript_Worker_Text_0:
# 180 "data/maps/MarmaroIsland/scripts.pory"
	.string "It's hard work to keep the minecart\n"
	.string "rails clear! There's always loose stone\l"
	.string "falling on the tracks.$"

MarmaroIsland_EventScript_ConstructionWorker2_Text_0:
# 191 "data/maps/MarmaroIsland/scripts.pory"
	.string "We move full minecarts off the tracks\n"
	.string "to prepare for shipping. Before sending\l"
	.string "it off, we sort through it all to make\l"
	.string "sure there aren't any valuables. People\l"
	.string "have found gold Nuggets hidden in the\l"
	.string "piles!$"

MarmaroIsland_EventScript_PokefanF_Text_0:
# 201 "data/maps/MarmaroIsland/scripts.pory"
	.string "Pokéfan$"

MarmaroIsland_EventScript_PokefanF_Text_1:
# 207 "data/maps/MarmaroIsland/scripts.pory"
	.string "The Timer Ball is gonna work perfectly,\n"
	.string "I know it!$"

MarmaroIsland_EventScript_PokefanF_Text_2:
# 217 "data/maps/MarmaroIsland/scripts.pory"
	.string "My Wurmple and I have been chasing down\n"
	.string "a Growlithe for hours, hitting it with\l"
	.string "String Shot to slow it down. After all\l"
	.string "that effort, I'm out of Poké balls!\p"
	.string "Please, {COLOR GREEN}bring me a Timer Ball{COLOR DARK_GRAY} so I can\n"
	.string "finally catch the Growlithe!$"

MarmaroIsland_EventScript_PokefanF_Text_3:
# 225 "data/maps/MarmaroIsland/scripts.pory"
	.string "Hiya! Did you bring that Timer Ball you\n"
	.string "asked for?$"

MarmaroIsland_EventScript_PokefanF_Text_4:
# 233 "data/maps/MarmaroIsland/scripts.pory"
	.string "I guess I'm still out of luck...\p"
	.string "When you can, {COLOR GREEN}bring me a Timer Ball{COLOR DARK_GRAY} so I\n"
	.string "can catch this Growlithe I've been\l"
	.string "following around the Island!$"

MarmaroIsland_EventScript_PokefanF_Text_5:
# 241 "data/maps/MarmaroIsland/scripts.pory"
	.string "Cheers, you brought a Timer Ball! I'll\n"
	.string "take that off your hands...\p"
	.string "Here, take these Quick Balls. I was\n"
	.string "gonna use them on the wild Growlithe,\l"
	.string "but the battle took too long!$"

MarmaroIsland_EventScript_Wurmple_Text_0:
# 260 "data/maps/MarmaroIsland/scripts.pory"
	.string "Wurmple$"

MarmaroIsland_EventScript_Wurmple_Text_1:
# 262 "data/maps/MarmaroIsland/scripts.pory"
	.string "St-st-st.$"

MarmaroIsland_EventScript_Hiker_Text_0:
# 273 "data/maps/MarmaroIsland/scripts.pory"
	.string "Hiker$"

MarmaroIsland_EventScript_Hiker_Text_1:
# 274 "data/maps/MarmaroIsland/scripts.pory"
	.string "The marble quarry of Marmaro Island is\n"
	.string "famous in the Ilios Region. Everything\l"
	.string "from treasure to precious stones can\l"
	.string "be found in the rock here!$"

MarmaroIsland_EventScript_Beauty_Text_0:
# 284 "data/maps/MarmaroIsland/scripts.pory"
	.string "Beauty$"

MarmaroIsland_EventScript_Beauty_Text_1:
# 290 "data/maps/MarmaroIsland/scripts.pory"
	.string "Holding your Pokémon Egg has convinced\n"
	.string "me. I'm gonna head to the Sunset\l"
	.string "Wildlife Conservation Center in Kipos\l"
	.string "Town and volunteer to help out!$"

MarmaroIsland_EventScript_Beauty_Text_2:
# 300 "data/maps/MarmaroIsland/scripts.pory"
	.string "See up there? That Altaria laid an Egg!\n"
	.string "I'd give anything to hold a Pokémon Egg,\l"
	.string "they're just so cool!\p"
	.string "Oh, you're a Trainer, right? Could you\n"
	.string "{COLOR GREEN}bring me a Pokémon Egg to see{COLOR DARK_GRAY} and hold?\l"
	.string "I've always wanted to hold one, but\l"
	.string "taking wild Pokémon Eggs from their\l"
	.string "parents is unethical.$"

MarmaroIsland_EventScript_Beauty_Text_3:
# 308 "data/maps/MarmaroIsland/scripts.pory"
	.string "Chaire! Are you here to check out the\n"
	.string "Altaria nest?\p"
	.string "Oh, right! Do you have a {COLOR GREEN}Pokémon Egg in\n"
	.string "your Party{COLOR DARK_GRAY} that I could hold? I've\l"
	.string "always wanted to!$"

MarmaroIsland_EventScript_Beauty_Text_4:
# 321 "data/maps/MarmaroIsland/scripts.pory"
	.string "Aw, I suppose Pokémon Eggs aren't all\n"
	.string "that common.\p"
	.string "Bring me a {COLOR GREEN}Pokémon Egg to hold{COLOR DARK_GRAY} if you\n"
	.string "can! I've always wanted to see and hold\l"
	.string "one myself.$"

MarmaroIsland_EventScript_Beauty_ReactToEgg_Text_0:
# 335 "data/maps/MarmaroIsland/scripts.pory"
	.string "Amazing! Almost all Pokémon species lay\n"
	.string "Eggs, and each is slightly different. I'd\l"
	.string "love to learn even more about them...$"

MarmaroIsland_EventScript_Beauty_ReactToEgg_Text_1:
# 342 "data/maps/MarmaroIsland/scripts.pory"
	.string "That's right! In Kipos Town, the Sunset\n"
	.string "Wildlife Conservation Center helps\l"
	.string "Pokémon with Eggs. Maybe I'll go ahead\l"
	.string "and volunteer there!\p"
	.string "I'm sure this wasn't easy for you. I\n"
	.string "want you to have this!$"

MarmaroIsland_EventScript_SwimmerM_Text_0:
# 359 "data/maps/MarmaroIsland/scripts.pory"
	.string "Swimmer$"

MarmaroIsland_EventScript_SwimmerM_Text_1:
# 360 "data/maps/MarmaroIsland/scripts.pory"
	.string "I was on such a roll swimming, I almost\n"
	.string "went right past Marmaro Island!$"

MarmaroIsland_EventScript_Gentleman_Text_0:
# 370 "data/maps/MarmaroIsland/scripts.pory"
	.string "Gentleman$"

MarmaroIsland_EventScript_Gentleman_Text_1:
# 371 "data/maps/MarmaroIsland/scripts.pory"
	.string "The way south around Marmaro Island is\n"
	.string "blocked by that old fellow with the\l"
	.string "boat. The best way to pass is just to\l"
	.string "cross the island on foot.$"

MarmaroIsland_EventScript_SwimmerF_Text_0:
# 382 "data/maps/MarmaroIsland/scripts.pory"
	.string "To get to Myrrini Island, I have to keep\n"
	.string "swimming east! I just stopped here for\l"
	.string "a quick rest.$"

MarmaroIsland_EventScript_OldWoman_Text_0:
# 392 "data/maps/MarmaroIsland/scripts.pory"
	.string "Old Woman$"

MarmaroIsland_EventScript_OldWoman_Text_1:
# 393 "data/maps/MarmaroIsland/scripts.pory"
	.string "Not everyone is a skilled enough\n"
	.string "Trainer to use Surf between islands.\l"
	.string "That's why there are bridges\l"
	.string "connecting some areas, and boat\l"
	.string "services are common.$"

MarmaroIsland_EventScript_ChimeraGruntBlockingMine_Text_0:
# 403 "data/maps/MarmaroIsland/scripts.pory"
	.string "Chimera Grunt$"

MarmaroIsland_EventScript_ChimeraGruntBlockingMine_Text_1:
# 404 "data/maps/MarmaroIsland/scripts.pory"
	.string "Uhh, hey there, bud! There's been\n"
	.string "reports of... big, scary monsters in the\l"
	.string "Marmaro Mines! Yeah, you don't want to\l"
	.string "go in here! Now, move along.$"

MarmaroIsland_EventScript_FossilHouseSign_Text_0:
# 413 "data/maps/MarmaroIsland/scripts.pory"
	.string "There's a message freshly painted on\n"
	.string "the sign...\p"
	.string "Marmaro Paleo-Fossil Services!\n"
	.string "For all your Fossil and Spirit needs.$"

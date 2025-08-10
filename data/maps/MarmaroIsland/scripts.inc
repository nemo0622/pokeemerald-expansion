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
	release
	end


MarmaroIsland_EventScript_PsychicM::
# 135 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 136 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 137 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_PsychicM_Text_0
# 138 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PsychicM_Text_1
# 139 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 140 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_ConstructionWorker::
# 146 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 147 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 148 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_ConstructionWorker_Text_0
# 149 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_ConstructionWorker_Text_1
# 150 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 151 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Worker::
# 157 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 158 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 159 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_ConstructionWorker_Text_0
# 160 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Worker_Text_0
# 161 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 162 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_ConstructionWorker2::
# 168 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 169 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 170 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_ConstructionWorker_Text_0
# 171 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_ConstructionWorker2_Text_0
# 172 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 173 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_PokefanF::
# 179 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 180 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 181 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_PokefanF_Text_0
# 184 "data/maps/MarmaroIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_MARMARO_TIMER_BALL
# 185 "data/maps/MarmaroIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MarmaroIsland_EventScript_PokefanF_2
# 194 "data/maps/MarmaroIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_MARMARO_TIMER_BALL
# 195 "data/maps/MarmaroIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MarmaroIsland_EventScript_PokefanF_5
# 205 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PokefanF_Text_3
# 206 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 208 "data/maps/MarmaroIsland/scripts.pory"
	checkitem ITEM_TIMER_BALL
# 209 "data/maps/MarmaroIsland/scripts.pory"
	delay 30
# 210 "data/maps/MarmaroIsland/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MarmaroIsland_EventScript_PokefanF_8
# 220 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_PokefanF_Text_0
# 221 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PokefanF_Text_5
# 222 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 223 "data/maps/MarmaroIsland/scripts.pory"
	removeitem ITEM_TIMER_BALL
# 224 "data/maps/MarmaroIsland/scripts.pory"
	delay 5
# 225 "data/maps/MarmaroIsland/scripts.pory"
	giveitem ITEM_QUICK_BALL, 3
# 226 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 228 "data/maps/MarmaroIsland/scripts.pory"
	delay 20
# 229 "data/maps/MarmaroIsland/scripts.pory"
	completequest QUEST_MARMARO_TIMER_BALL
MarmaroIsland_EventScript_PokefanF_4:
# 232 "data/maps/MarmaroIsland/scripts.pory"
	release
	end

MarmaroIsland_EventScript_PokefanF_2:
# 187 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PokefanF_Text_1
# 188 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 189 "data/maps/MarmaroIsland/scripts.pory"
	release
	end

MarmaroIsland_EventScript_PokefanF_5:
# 197 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PokefanF_Text_2
# 198 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 200 "data/maps/MarmaroIsland/scripts.pory"
	delay 20
# 201 "data/maps/MarmaroIsland/scripts.pory"
	startquest QUEST_MARMARO_TIMER_BALL
	goto MarmaroIsland_EventScript_PokefanF_4

MarmaroIsland_EventScript_PokefanF_8:
# 212 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_PokefanF_Text_0
# 213 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PokefanF_Text_4
# 214 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 215 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Wurmple::
# 238 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 239 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 240 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Wurmple_Text_0
# 241 "data/maps/MarmaroIsland/scripts.pory"
	playmoncry SPECIES_WURMPLE, CRY_MODE_NORMAL
# 242 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Wurmple_Text_1
# 243 "data/maps/MarmaroIsland/scripts.pory"
	waitmoncry
# 244 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 245 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Hiker::
# 251 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 252 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 253 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Hiker_Text_0
# 254 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Hiker_Text_1
# 255 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 256 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Beauty::
# 262 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 263 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 264 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Beauty_Text_0
# 267 "data/maps/MarmaroIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_MARMARO_EGG_QUEST
# 268 "data/maps/MarmaroIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MarmaroIsland_EventScript_Beauty_2
# 277 "data/maps/MarmaroIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_MARMARO_EGG_QUEST
# 278 "data/maps/MarmaroIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MarmaroIsland_EventScript_Beauty_5
# 288 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_Text_3
# 289 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 291 "data/maps/MarmaroIsland/scripts.pory"
	checkforspecies SPECIES_EGG, OPEN_PARTY_SCREEN, MarmaroIsland_EventScript_Beauty_ReactToEgg
# 294 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Beauty_Text_0
# 295 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_Text_4
# 296 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
MarmaroIsland_EventScript_Beauty_4:
# 298 "data/maps/MarmaroIsland/scripts.pory"
	release
	end

MarmaroIsland_EventScript_Beauty_2:
# 270 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_Text_1
# 271 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 272 "data/maps/MarmaroIsland/scripts.pory"
	release
	end

MarmaroIsland_EventScript_Beauty_5:
# 280 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_Text_2
# 281 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 283 "data/maps/MarmaroIsland/scripts.pory"
	delay 20
# 284 "data/maps/MarmaroIsland/scripts.pory"
	startquest QUEST_MARMARO_EGG_QUEST
	goto MarmaroIsland_EventScript_Beauty_4


MarmaroIsland_EventScript_Beauty_ReactToEgg::
# 303 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 304 "data/maps/MarmaroIsland/scripts.pory"
	delay 20
# 305 "data/maps/MarmaroIsland/scripts.pory"
	applymovement 22, Common_Movement_Heart
# 306 "data/maps/MarmaroIsland/scripts.pory"
	waitmovement 0
# 307 "data/maps/MarmaroIsland/scripts.pory"
	delay 10
# 308 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Beauty_Text_0
# 309 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_ReactToEgg_Text_0
# 310 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 311 "data/maps/MarmaroIsland/scripts.pory"
	delay 10
# 312 "data/maps/MarmaroIsland/scripts.pory"
	applymovement 22, Common_Movement_ExclamationMark
# 313 "data/maps/MarmaroIsland/scripts.pory"
	waitmovement 0
# 314 "data/maps/MarmaroIsland/scripts.pory"
	delay 10
# 315 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Beauty_Text_0
# 316 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_ReactToEgg_Text_1
# 317 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 318 "data/maps/MarmaroIsland/scripts.pory"
	delay 5
# 319 "data/maps/MarmaroIsland/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
# 320 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 322 "data/maps/MarmaroIsland/scripts.pory"
	delay 20
# 323 "data/maps/MarmaroIsland/scripts.pory"
	completequest QUEST_MARMARO_EGG_QUEST
# 325 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_SwimmerM::
# 331 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 332 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 333 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_SwimmerM_Text_0
# 334 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_SwimmerM_Text_1
# 335 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 336 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Gentleman::
# 342 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 343 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 344 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Gentleman_Text_0
# 345 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Gentleman_Text_1
# 346 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 347 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_SwimmerF::
# 353 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 354 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 355 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_SwimmerM_Text_0
# 356 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_SwimmerF_Text_0
# 357 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 358 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_OldWoman::
# 364 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 365 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 366 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_OldWoman_Text_0
# 367 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_OldWoman_Text_1
# 368 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 369 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_ChimeraGruntBlockingMine::
# 375 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 376 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 377 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_ChimeraGruntBlockingMine_Text_0
# 378 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_ChimeraGruntBlockingMine_Text_1
# 379 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 380 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_FossilHouseSign::
# 386 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 387 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_FossilHouseSign_Text_0
# 388 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 389 "data/maps/MarmaroIsland/scripts.pory"
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

MarmaroIsland_EventScript_PsychicM_Text_0:
# 137 "data/maps/MarmaroIsland/scripts.pory"
	.string "Psychic$"

MarmaroIsland_EventScript_PsychicM_Text_1:
# 138 "data/maps/MarmaroIsland/scripts.pory"
	.string "The white stone of Marmaro Island has\n"
	.string "special properties! In Ancient Ilios,\l"
	.string "people used to build temples with it to\l"
	.string "honor the gods.$"

MarmaroIsland_EventScript_ConstructionWorker_Text_0:
# 148 "data/maps/MarmaroIsland/scripts.pory"
	.string "Worker$"

MarmaroIsland_EventScript_ConstructionWorker_Text_1:
# 149 "data/maps/MarmaroIsland/scripts.pory"
	.string "Our minecarts move the stone we\n"
	.string "extract across the island. Big boats\l"
	.string "come by every so often to ship it\l"
	.string "across the Ilios Region!$"

MarmaroIsland_EventScript_Worker_Text_0:
# 160 "data/maps/MarmaroIsland/scripts.pory"
	.string "It's hard work to keep the minecart\n"
	.string "rails clear! There's always loose stone\l"
	.string "falling on the tracks.$"

MarmaroIsland_EventScript_ConstructionWorker2_Text_0:
# 171 "data/maps/MarmaroIsland/scripts.pory"
	.string "We move full minecarts off the tracks\n"
	.string "to prepare for shipping. Before sending\l"
	.string "it off, we sort through it all to make\l"
	.string "sure there aren't any valuables. People\l"
	.string "have found gold Nuggets hidden in the\l"
	.string "piles!$"

MarmaroIsland_EventScript_PokefanF_Text_0:
# 181 "data/maps/MarmaroIsland/scripts.pory"
	.string "Pokéfan$"

MarmaroIsland_EventScript_PokefanF_Text_1:
# 187 "data/maps/MarmaroIsland/scripts.pory"
	.string "The Timer Ball is gonna work perfectly,\n"
	.string "I know it!$"

MarmaroIsland_EventScript_PokefanF_Text_2:
# 197 "data/maps/MarmaroIsland/scripts.pory"
	.string "My Wurmple and I have been chasing down\n"
	.string "a Growlithe for hours, hitting it with\l"
	.string "String Shot to slow it down. After all\l"
	.string "that effort, I'm out of Poké balls!\p"
	.string "Please, {COLOR GREEN}bring me a Timer Ball{COLOR DARK_GRAY} so I can\n"
	.string "finally catch the Growlithe!$"

MarmaroIsland_EventScript_PokefanF_Text_3:
# 205 "data/maps/MarmaroIsland/scripts.pory"
	.string "Hiya! Did you bring that Timer Ball you\n"
	.string "asked for?$"

MarmaroIsland_EventScript_PokefanF_Text_4:
# 213 "data/maps/MarmaroIsland/scripts.pory"
	.string "I guess I'm still out of luck...\p"
	.string "When you can, {COLOR GREEN}bring me a Timer Ball{COLOR DARK_GRAY} so I\n"
	.string "can catch this Growlithe I've been\l"
	.string "following around the Island!$"

MarmaroIsland_EventScript_PokefanF_Text_5:
# 221 "data/maps/MarmaroIsland/scripts.pory"
	.string "Cheers, you brought a Timer Ball! I'll\n"
	.string "take that off your hands...\p"
	.string "Here, take these Quick Balls. I was\n"
	.string "gonna use them on the wild Growlithe,\l"
	.string "but the battle took too long!$"

MarmaroIsland_EventScript_Wurmple_Text_0:
# 240 "data/maps/MarmaroIsland/scripts.pory"
	.string "Wurmple$"

MarmaroIsland_EventScript_Wurmple_Text_1:
# 242 "data/maps/MarmaroIsland/scripts.pory"
	.string "St-st-st.$"

MarmaroIsland_EventScript_Hiker_Text_0:
# 253 "data/maps/MarmaroIsland/scripts.pory"
	.string "Hiker$"

MarmaroIsland_EventScript_Hiker_Text_1:
# 254 "data/maps/MarmaroIsland/scripts.pory"
	.string "The marble quarry of Marmaro Island is\n"
	.string "famous in the Ilios Region. Everything\l"
	.string "from treasure to precious stones can\l"
	.string "be found in the rock here!$"

MarmaroIsland_EventScript_Beauty_Text_0:
# 264 "data/maps/MarmaroIsland/scripts.pory"
	.string "Beauty$"

MarmaroIsland_EventScript_Beauty_Text_1:
# 270 "data/maps/MarmaroIsland/scripts.pory"
	.string "Holding your Pokémon Egg has convinced\n"
	.string "me. I'm gonna head to the Sunset\l"
	.string "Wildlife Conservation Center in Kipos\l"
	.string "Town and volunteer to help out!$"

MarmaroIsland_EventScript_Beauty_Text_2:
# 280 "data/maps/MarmaroIsland/scripts.pory"
	.string "See up there? That Altaria laid an Egg!\n"
	.string "I'd give anything to hold a Pokémon Egg,\l"
	.string "they're just so cool!\p"
	.string "Oh, you're a Trainer, right? Could you\n"
	.string "{COLOR GREEN}bring me a Pokémon Egg to see{COLOR DARK_GRAY} and hold?\l"
	.string "I've always wanted to hold one, but\l"
	.string "taking wild Pokémon Eggs from their\l"
	.string "parents is unethical.$"

MarmaroIsland_EventScript_Beauty_Text_3:
# 288 "data/maps/MarmaroIsland/scripts.pory"
	.string "Chaire! Are you here to check out the\n"
	.string "Altaria nest?\p"
	.string "Oh, right! Do you have a {COLOR GREEN}Pokémon Egg in\n"
	.string "your Party{COLOR DARK_GRAY} that I could hold? I've\l"
	.string "always wanted to!$"

MarmaroIsland_EventScript_Beauty_Text_4:
# 295 "data/maps/MarmaroIsland/scripts.pory"
	.string "Aw, I suppose Pokémon Eggs aren't all\n"
	.string "that common.\p"
	.string "Bring me a {COLOR GREEN}Pokémon Egg to hold{COLOR DARK_GRAY} if you\n"
	.string "can! I've always wanted to see and hold\l"
	.string "one myself.$"

MarmaroIsland_EventScript_Beauty_ReactToEgg_Text_0:
# 309 "data/maps/MarmaroIsland/scripts.pory"
	.string "Amazing! Almost all Pokémon species lay\n"
	.string "Eggs, and each is slightly different. I'd\l"
	.string "love to learn even more about them...$"

MarmaroIsland_EventScript_Beauty_ReactToEgg_Text_1:
# 316 "data/maps/MarmaroIsland/scripts.pory"
	.string "That's right! In Kipos Town, the Sunset\n"
	.string "Wildlife Conservation Center helps\l"
	.string "Pokémon with Eggs. Maybe I'll go ahead\l"
	.string "and volunteer there!\p"
	.string "I'm sure this wasn't easy for you. I\n"
	.string "want you to have this!$"

MarmaroIsland_EventScript_SwimmerM_Text_0:
# 333 "data/maps/MarmaroIsland/scripts.pory"
	.string "Swimmer$"

MarmaroIsland_EventScript_SwimmerM_Text_1:
# 334 "data/maps/MarmaroIsland/scripts.pory"
	.string "I was on such a roll swimming, I almost\n"
	.string "went right past Marmaro Island!$"

MarmaroIsland_EventScript_Gentleman_Text_0:
# 344 "data/maps/MarmaroIsland/scripts.pory"
	.string "Gentleman$"

MarmaroIsland_EventScript_Gentleman_Text_1:
# 345 "data/maps/MarmaroIsland/scripts.pory"
	.string "The way south around Marmaro Island is\n"
	.string "blocked by that old fellow with the\l"
	.string "boat. The best way to pass is just to\l"
	.string "cross the island on foot.$"

MarmaroIsland_EventScript_SwimmerF_Text_0:
# 356 "data/maps/MarmaroIsland/scripts.pory"
	.string "To get to Myrrini Island, I have to keep\n"
	.string "swimming east! I just stopped here for\l"
	.string "a quick rest.$"

MarmaroIsland_EventScript_OldWoman_Text_0:
# 366 "data/maps/MarmaroIsland/scripts.pory"
	.string "Old Woman$"

MarmaroIsland_EventScript_OldWoman_Text_1:
# 367 "data/maps/MarmaroIsland/scripts.pory"
	.string "Not everyone is a skilled enough\n"
	.string "Trainer to use Surf between islands.\l"
	.string "That's why there are bridges\l"
	.string "connecting some areas, and boat\l"
	.string "services are common.$"

MarmaroIsland_EventScript_ChimeraGruntBlockingMine_Text_0:
# 377 "data/maps/MarmaroIsland/scripts.pory"
	.string "Chimera Grunt$"

MarmaroIsland_EventScript_ChimeraGruntBlockingMine_Text_1:
# 378 "data/maps/MarmaroIsland/scripts.pory"
	.string "Uhh, hey there, bud! There's been\n"
	.string "reports of... big, scary monsters in the\l"
	.string "Marmaro Mines! Yeah, you don't want to\l"
	.string "go in here! Now, move along.$"

MarmaroIsland_EventScript_FossilHouseSign_Text_0:
# 387 "data/maps/MarmaroIsland/scripts.pory"
	.string "There's a message freshly painted on\n"
	.string "the sign...\p"
	.string "Marmaro Paleo-Fossil Services!\n"
	.string "For all your Fossil and Spirit needs.$"

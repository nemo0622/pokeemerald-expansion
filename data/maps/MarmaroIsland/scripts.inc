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


MarmaroIsland_EventScript_PiraeusVaporeon::
# 26 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 27 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 28 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_PiraeusVaporeon_Text_0
# 29 "data/maps/MarmaroIsland/scripts.pory"
	playmoncry SPECIES_VAPOREON, CRY_MODE_NORMAL
# 30 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PiraeusVaporeon_Text_1
# 31 "data/maps/MarmaroIsland/scripts.pory"
	waitmoncry
# 32 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 33 "data/maps/MarmaroIsland/scripts.pory"
	delay 5
# 34 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PiraeusVaporeon_Text_2
# 35 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 36 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_FatMan::
# 42 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 43 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 44 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_FatMan_Text_0
# 45 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_FatMan_Text_1
# 46 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 47 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_LittleGirl::
# 53 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 54 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 55 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_LittleGirl_Text_0
# 56 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_LittleGirl_Text_1
# 57 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 58 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Mother::
# 64 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 65 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 66 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Mother_Text_0
# 67 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Mother_Text_1
# 68 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 69 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_RichBoy::
# 75 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 76 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 77 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_RichBoy_Text_0
# 78 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_RichBoy_Text_1
# 79 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 80 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Lass::
# 86 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 87 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 88 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Lass_Text_0
# 89 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Lass_Text_1
# 90 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 91 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Scraggy::
# 97 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 98 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 99 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Scraggy_Text_0
# 100 "data/maps/MarmaroIsland/scripts.pory"
	playmoncry SPECIES_SCRAGGY, CRY_MODE_NORMAL
# 101 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Scraggy_Text_1
# 102 "data/maps/MarmaroIsland/scripts.pory"
	waitmoncry
# 103 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 104 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_BlackBelt::
# 110 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 111 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 112 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_BlackBelt_Text_0
# 113 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_BlackBelt_Text_1
# 114 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 115 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_PsychicM::
# 121 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 122 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 123 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_PsychicM_Text_0
# 124 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PsychicM_Text_1
# 125 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 126 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_ConstructionWorker::
# 132 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 133 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 134 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_ConstructionWorker_Text_0
# 135 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_ConstructionWorker_Text_1
# 136 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 137 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Worker::
# 143 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 144 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 145 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_ConstructionWorker_Text_0
# 146 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Worker_Text_0
# 147 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 148 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_ConstructionWorker2::
# 154 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 155 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 156 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_ConstructionWorker_Text_0
# 157 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_ConstructionWorker2_Text_0
# 158 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 159 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_PokefanF::
# 165 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 166 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 167 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_PokefanF_Text_0
# 170 "data/maps/MarmaroIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_MARMARO_TIMER_BALL
# 171 "data/maps/MarmaroIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MarmaroIsland_EventScript_PokefanF_2
# 180 "data/maps/MarmaroIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_MARMARO_TIMER_BALL
# 181 "data/maps/MarmaroIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MarmaroIsland_EventScript_PokefanF_5
# 191 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PokefanF_Text_3
# 192 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 194 "data/maps/MarmaroIsland/scripts.pory"
	checkitem ITEM_TIMER_BALL
# 195 "data/maps/MarmaroIsland/scripts.pory"
	delay 30
# 196 "data/maps/MarmaroIsland/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MarmaroIsland_EventScript_PokefanF_8
# 206 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_PokefanF_Text_0
# 207 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PokefanF_Text_5
# 208 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 209 "data/maps/MarmaroIsland/scripts.pory"
	removeitem ITEM_TIMER_BALL
# 210 "data/maps/MarmaroIsland/scripts.pory"
	delay 5
# 211 "data/maps/MarmaroIsland/scripts.pory"
	giveitem ITEM_QUICK_BALL, 3
# 212 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 214 "data/maps/MarmaroIsland/scripts.pory"
	delay 20
# 215 "data/maps/MarmaroIsland/scripts.pory"
	completequest QUEST_MARMARO_TIMER_BALL
MarmaroIsland_EventScript_PokefanF_4:
# 218 "data/maps/MarmaroIsland/scripts.pory"
	release
	end

MarmaroIsland_EventScript_PokefanF_2:
# 173 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PokefanF_Text_1
# 174 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 175 "data/maps/MarmaroIsland/scripts.pory"
	release
	end

MarmaroIsland_EventScript_PokefanF_5:
# 183 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PokefanF_Text_2
# 184 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 186 "data/maps/MarmaroIsland/scripts.pory"
	delay 20
# 187 "data/maps/MarmaroIsland/scripts.pory"
	startquest QUEST_MARMARO_TIMER_BALL
	goto MarmaroIsland_EventScript_PokefanF_4

MarmaroIsland_EventScript_PokefanF_8:
# 198 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_PokefanF_Text_0
# 199 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_PokefanF_Text_4
# 200 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 201 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Wurmple::
# 224 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 225 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 226 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Wurmple_Text_0
# 227 "data/maps/MarmaroIsland/scripts.pory"
	playmoncry SPECIES_WURMPLE, CRY_MODE_NORMAL
# 228 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Wurmple_Text_1
# 229 "data/maps/MarmaroIsland/scripts.pory"
	waitmoncry
# 230 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 231 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Hiker::
# 237 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 238 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 239 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Hiker_Text_0
# 240 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Hiker_Text_1
# 241 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 242 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Beauty::
# 248 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 249 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 250 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Beauty_Text_0
# 253 "data/maps/MarmaroIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_MARMARO_EGG_QUEST
# 254 "data/maps/MarmaroIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MarmaroIsland_EventScript_Beauty_2
# 263 "data/maps/MarmaroIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_MARMARO_EGG_QUEST
# 264 "data/maps/MarmaroIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MarmaroIsland_EventScript_Beauty_5
# 274 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_Text_3
# 275 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 277 "data/maps/MarmaroIsland/scripts.pory"
	checkforspecies SPECIES_EGG, OPEN_PARTY_SCREEN, MarmaroIsland_EventScript_Beauty_ReactToEgg
# 280 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Beauty_Text_0
# 281 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_Text_4
# 282 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
MarmaroIsland_EventScript_Beauty_4:
# 284 "data/maps/MarmaroIsland/scripts.pory"
	release
	end

MarmaroIsland_EventScript_Beauty_2:
# 256 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_Text_1
# 257 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 258 "data/maps/MarmaroIsland/scripts.pory"
	release
	end

MarmaroIsland_EventScript_Beauty_5:
# 266 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_Text_2
# 267 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 269 "data/maps/MarmaroIsland/scripts.pory"
	delay 20
# 270 "data/maps/MarmaroIsland/scripts.pory"
	startquest QUEST_MARMARO_EGG_QUEST
	goto MarmaroIsland_EventScript_Beauty_4


MarmaroIsland_EventScript_Beauty_ReactToEgg::
# 289 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 290 "data/maps/MarmaroIsland/scripts.pory"
	delay 20
# 291 "data/maps/MarmaroIsland/scripts.pory"
	applymovement 22, Common_Movement_Heart
# 292 "data/maps/MarmaroIsland/scripts.pory"
	waitmovement 0
# 293 "data/maps/MarmaroIsland/scripts.pory"
	delay 10
# 294 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Beauty_Text_0
# 295 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_ReactToEgg_Text_0
# 296 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 297 "data/maps/MarmaroIsland/scripts.pory"
	delay 10
# 298 "data/maps/MarmaroIsland/scripts.pory"
	applymovement 22, Common_Movement_ExclamationMark
# 299 "data/maps/MarmaroIsland/scripts.pory"
	waitmovement 0
# 300 "data/maps/MarmaroIsland/scripts.pory"
	delay 10
# 301 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Beauty_Text_0
# 302 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Beauty_ReactToEgg_Text_1
# 303 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 304 "data/maps/MarmaroIsland/scripts.pory"
	delay 5
# 305 "data/maps/MarmaroIsland/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
# 306 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 308 "data/maps/MarmaroIsland/scripts.pory"
	delay 20
# 309 "data/maps/MarmaroIsland/scripts.pory"
	completequest QUEST_MARMARO_EGG_QUEST
# 311 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_SwimmerM::
# 317 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 318 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 319 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_SwimmerM_Text_0
# 320 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_SwimmerM_Text_1
# 321 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 322 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_Gentleman::
# 328 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 329 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 330 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_Gentleman_Text_0
# 331 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_Gentleman_Text_1
# 332 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 333 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_SwimmerF::
# 339 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 340 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 341 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_SwimmerM_Text_0
# 342 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_SwimmerF_Text_0
# 343 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 344 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_OldWoman::
# 350 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 351 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 352 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_OldWoman_Text_0
# 353 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_OldWoman_Text_1
# 354 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 355 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_ChimeraGruntBlockingMine::
# 361 "data/maps/MarmaroIsland/scripts.pory"
	lock
# 362 "data/maps/MarmaroIsland/scripts.pory"
	faceplayer
# 363 "data/maps/MarmaroIsland/scripts.pory"
	speakername MarmaroIsland_EventScript_ChimeraGruntBlockingMine_Text_0
# 364 "data/maps/MarmaroIsland/scripts.pory"
	msgbox MarmaroIsland_EventScript_ChimeraGruntBlockingMine_Text_1
# 365 "data/maps/MarmaroIsland/scripts.pory"
	closemessage
# 366 "data/maps/MarmaroIsland/scripts.pory"
	release
	end


MarmaroIsland_EventScript_PiraeusVaporeon_Text_0:
# 28 "data/maps/MarmaroIsland/scripts.pory"
	.string "Vaporeon$"

MarmaroIsland_EventScript_PiraeusVaporeon_Text_1:
# 30 "data/maps/MarmaroIsland/scripts.pory"
	.string "Bwark!$"

MarmaroIsland_EventScript_PiraeusVaporeon_Text_2:
# 34 "data/maps/MarmaroIsland/scripts.pory"
	.string "Piraeus's Vaporeon looks happy to see\n"
	.string "you!$"

MarmaroIsland_EventScript_FatMan_Text_0:
# 44 "data/maps/MarmaroIsland/scripts.pory"
	.string "Fat Man$"

MarmaroIsland_EventScript_FatMan_Text_1:
# 45 "data/maps/MarmaroIsland/scripts.pory"
	.string "My family expects me to go into the\n"
	.string "mining business, but that's just not\l"
	.string "where my heart is. I want to run a hotel\l"
	.string "here!$"

MarmaroIsland_EventScript_LittleGirl_Text_0:
# 55 "data/maps/MarmaroIsland/scripts.pory"
	.string "Little Girl$"

MarmaroIsland_EventScript_LittleGirl_Text_1:
# 56 "data/maps/MarmaroIsland/scripts.pory"
	.string "I'm here on vacation with my mom! I've\n"
	.string "never felt weather this warm!$"

MarmaroIsland_EventScript_Mother_Text_0:
# 66 "data/maps/MarmaroIsland/scripts.pory"
	.string "Woman$"

MarmaroIsland_EventScript_Mother_Text_1:
# 67 "data/maps/MarmaroIsland/scripts.pory"
	.string "My child and I are visiting from the\n"
	.string "Galar Region. The climate here is so\l"
	.string "much nicer... maybe we should look into\l"
	.string "moving! Of course, that's what everyone\l"
	.string "says on vacation, ehehe.$"

MarmaroIsland_EventScript_RichBoy_Text_0:
# 77 "data/maps/MarmaroIsland/scripts.pory"
	.string "Rich Boy$"

MarmaroIsland_EventScript_RichBoy_Text_1:
# 78 "data/maps/MarmaroIsland/scripts.pory"
	.string "Apparently, this island made a ton of\n"
	.string "money by selling marble to the rest of\l"
	.string "the Region. Maybe I could do something\l"
	.string "like that!$"

MarmaroIsland_EventScript_Lass_Text_0:
# 88 "data/maps/MarmaroIsland/scripts.pory"
	.string "Lass$"

MarmaroIsland_EventScript_Lass_Text_1:
# 89 "data/maps/MarmaroIsland/scripts.pory"
	.string "The pine trees on Marmaro Island are so\n"
	.string "different than the palms of other\l"
	.string "islands. I wonder why it's so different.$"

MarmaroIsland_EventScript_Scraggy_Text_0:
# 99 "data/maps/MarmaroIsland/scripts.pory"
	.string "Scraggy$"

MarmaroIsland_EventScript_Scraggy_Text_1:
# 101 "data/maps/MarmaroIsland/scripts.pory"
	.string "Hka ka ka!$"

MarmaroIsland_EventScript_BlackBelt_Text_0:
# 112 "data/maps/MarmaroIsland/scripts.pory"
	.string "Black Belt$"

MarmaroIsland_EventScript_BlackBelt_Text_1:
# 113 "data/maps/MarmaroIsland/scripts.pory"
	.string "My Pokémon can break right through the\n"
	.string "rocks around here! I wonder if we'll find\l"
	.string "anything cool!$"

MarmaroIsland_EventScript_PsychicM_Text_0:
# 123 "data/maps/MarmaroIsland/scripts.pory"
	.string "Psychic$"

MarmaroIsland_EventScript_PsychicM_Text_1:
# 124 "data/maps/MarmaroIsland/scripts.pory"
	.string "The white stone of Marmaro Island has\n"
	.string "special properties! In Ancient Ilios,\l"
	.string "people used to build temples with it to\l"
	.string "honor the gods.$"

MarmaroIsland_EventScript_ConstructionWorker_Text_0:
# 134 "data/maps/MarmaroIsland/scripts.pory"
	.string "Worker$"

MarmaroIsland_EventScript_ConstructionWorker_Text_1:
# 135 "data/maps/MarmaroIsland/scripts.pory"
	.string "Our minecarts move the stone we\n"
	.string "extract across the island. Big boats\l"
	.string "come by every so often to ship it\l"
	.string "across the Ilios Region!$"

MarmaroIsland_EventScript_Worker_Text_0:
# 146 "data/maps/MarmaroIsland/scripts.pory"
	.string "It's hard work to keep the minecart\n"
	.string "rails clear! There's always loose stone\l"
	.string "falling on the tracks.$"

MarmaroIsland_EventScript_ConstructionWorker2_Text_0:
# 157 "data/maps/MarmaroIsland/scripts.pory"
	.string "We move full minecarts off the tracks\n"
	.string "to prepare for shipping. Before sending\l"
	.string "it off, we sort through it all to make\l"
	.string "sure there aren't any valuables. People\l"
	.string "have found gold Nuggets hidden in the\l"
	.string "piles!$"

MarmaroIsland_EventScript_PokefanF_Text_0:
# 167 "data/maps/MarmaroIsland/scripts.pory"
	.string "Pokéfan$"

MarmaroIsland_EventScript_PokefanF_Text_1:
# 173 "data/maps/MarmaroIsland/scripts.pory"
	.string "The Timer Ball is gonna work perfectly,\n"
	.string "I know it!$"

MarmaroIsland_EventScript_PokefanF_Text_2:
# 183 "data/maps/MarmaroIsland/scripts.pory"
	.string "My Wurmple and I have been chasing down\n"
	.string "a Growlithe for hours, hitting it with\l"
	.string "String Shot to slow it down. After all\l"
	.string "that effort, I'm out of Poké balls!\p"
	.string "Please, {COLOR GREEN}bring me a Timer Ball{COLOR DARK_GRAY} so I can\n"
	.string "finally catch the Growlithe!$"

MarmaroIsland_EventScript_PokefanF_Text_3:
# 191 "data/maps/MarmaroIsland/scripts.pory"
	.string "Hiya! Did you bring that Timer Ball you\n"
	.string "asked for?$"

MarmaroIsland_EventScript_PokefanF_Text_4:
# 199 "data/maps/MarmaroIsland/scripts.pory"
	.string "I guess I'm still out of luck...\p"
	.string "When you can, {COLOR GREEN}bring me a Timer Ball{COLOR DARK_GRAY} so I\n"
	.string "can catch this Growlithe I've been\l"
	.string "following around the Island!$"

MarmaroIsland_EventScript_PokefanF_Text_5:
# 207 "data/maps/MarmaroIsland/scripts.pory"
	.string "Cheers, you brought a Timer Ball! I'll\n"
	.string "take that off your hands...\p"
	.string "Here, take these Quick Balls. I was\n"
	.string "gonna use them on the wild Growlithe,\l"
	.string "but the battle took too long!$"

MarmaroIsland_EventScript_Wurmple_Text_0:
# 226 "data/maps/MarmaroIsland/scripts.pory"
	.string "Wurmple$"

MarmaroIsland_EventScript_Wurmple_Text_1:
# 228 "data/maps/MarmaroIsland/scripts.pory"
	.string "St-st-st.$"

MarmaroIsland_EventScript_Hiker_Text_0:
# 239 "data/maps/MarmaroIsland/scripts.pory"
	.string "Hiker$"

MarmaroIsland_EventScript_Hiker_Text_1:
# 240 "data/maps/MarmaroIsland/scripts.pory"
	.string "The marble quarry of Marmaro Island is\n"
	.string "famous in the Ilios Region. Everything\l"
	.string "from treasure to precious stones can\l"
	.string "be found in the rock here!$"

MarmaroIsland_EventScript_Beauty_Text_0:
# 250 "data/maps/MarmaroIsland/scripts.pory"
	.string "Beauty$"

MarmaroIsland_EventScript_Beauty_Text_1:
# 256 "data/maps/MarmaroIsland/scripts.pory"
	.string "Holding your Pokémon Egg has convinced\n"
	.string "me. I'm gonna head to the Sunset\l"
	.string "Wildlife Conservation Center in Kipos\l"
	.string "Town and volunteer to help out!$"

MarmaroIsland_EventScript_Beauty_Text_2:
# 266 "data/maps/MarmaroIsland/scripts.pory"
	.string "See up there? That Altaria laid an Egg!\n"
	.string "I'd give anything to hold a Pokémon Egg,\l"
	.string "they're just so cool!\p"
	.string "Oh, you're a Trainer, right? Could you\n"
	.string "{COLOR GREEN}bring me a Pokémon Egg to see{COLOR DARK_GRAY} and hold?\l"
	.string "I've always wanted to hold one, but\l"
	.string "taking wild Pokémon Eggs from their\l"
	.string "parents is unethical.$"

MarmaroIsland_EventScript_Beauty_Text_3:
# 274 "data/maps/MarmaroIsland/scripts.pory"
	.string "Chaire! Are you here to check out the\n"
	.string "Altaria nest?\p"
	.string "Oh, right! Do you have a {COLOR GREEN}Pokémon Egg in\n"
	.string "your Party{COLOR DARK_GRAY} that I could hold? I've\l"
	.string "always wanted to!$"

MarmaroIsland_EventScript_Beauty_Text_4:
# 281 "data/maps/MarmaroIsland/scripts.pory"
	.string "Aw, I suppose Pokémon Eggs aren't all\n"
	.string "that common.\p"
	.string "Bring me a {COLOR GREEN}Pokémon Egg to hold{COLOR DARK_GRAY} if you\n"
	.string "can! I've always wanted to see and hold\l"
	.string "one myself.$"

MarmaroIsland_EventScript_Beauty_ReactToEgg_Text_0:
# 295 "data/maps/MarmaroIsland/scripts.pory"
	.string "Amazing! Almost all Pokémon species lay\n"
	.string "Eggs, and each is slightly different. I'd\l"
	.string "love to learn even more about them...$"

MarmaroIsland_EventScript_Beauty_ReactToEgg_Text_1:
# 302 "data/maps/MarmaroIsland/scripts.pory"
	.string "That's right! In Kipos Town, the Sunset\n"
	.string "Wildlife Conservation Center helps\l"
	.string "Pokémon with Eggs. Maybe I'll go ahead\l"
	.string "and volunteer there!\p"
	.string "I'm sure this wasn't easy for you. I\n"
	.string "want you to have this!$"

MarmaroIsland_EventScript_SwimmerM_Text_0:
# 319 "data/maps/MarmaroIsland/scripts.pory"
	.string "Swimmer$"

MarmaroIsland_EventScript_SwimmerM_Text_1:
# 320 "data/maps/MarmaroIsland/scripts.pory"
	.string "I was on such a roll swimming, I almost\n"
	.string "went right past Marmaro Island!$"

MarmaroIsland_EventScript_Gentleman_Text_0:
# 330 "data/maps/MarmaroIsland/scripts.pory"
	.string "Gentleman$"

MarmaroIsland_EventScript_Gentleman_Text_1:
# 331 "data/maps/MarmaroIsland/scripts.pory"
	.string "The way south around Marmaro Island is\n"
	.string "blocked by that old fellow with the\l"
	.string "boat. The best way to pass is just to\l"
	.string "cross the island on foot.$"

MarmaroIsland_EventScript_SwimmerF_Text_0:
# 342 "data/maps/MarmaroIsland/scripts.pory"
	.string "To get to Myrrini Island, I have to keep\n"
	.string "swimming east! I just stopped here for\l"
	.string "a quick rest.$"

MarmaroIsland_EventScript_OldWoman_Text_0:
# 352 "data/maps/MarmaroIsland/scripts.pory"
	.string "Old Woman$"

MarmaroIsland_EventScript_OldWoman_Text_1:
# 353 "data/maps/MarmaroIsland/scripts.pory"
	.string "Not everyone is a skilled enough\n"
	.string "Trainer to use Surf between islands.\l"
	.string "That's why there are bridges\l"
	.string "connecting some areas, and boat\l"
	.string "services are common.$"

MarmaroIsland_EventScript_ChimeraGruntBlockingMine_Text_0:
# 363 "data/maps/MarmaroIsland/scripts.pory"
	.string "Chimera Grunt$"

MarmaroIsland_EventScript_ChimeraGruntBlockingMine_Text_1:
# 364 "data/maps/MarmaroIsland/scripts.pory"
	.string "Uhh, hey there, bud! There's been\n"
	.string "reports of... big, scary monsters in the\l"
	.string "Marmaro Mines! Yeah, you don't want to\l"
	.string "go in here! Now, move along.$"

KaptaraIsland_East_MapScripts::
# 2 "data/maps/KaptaraIsland_East/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KaptaraIsland_East_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

KaptaraIsland_East_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/KaptaraIsland_East/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, KaptaraIsland_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 9 "data/maps/KaptaraIsland_East/scripts.pory"
	random 2
# 10 "data/maps/KaptaraIsland_East/scripts.pory"
	switch VAR_RESULT
# 11 "data/maps/KaptaraIsland_East/scripts.pory"
	case 0, KaptaraIsland_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 12 "data/maps/KaptaraIsland_East/scripts.pory"
	case 1, KaptaraIsland_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
KaptaraIsland_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 16 "data/maps/KaptaraIsland_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 17 "data/maps/KaptaraIsland_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 18 "data/maps/KaptaraIsland_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 19 "data/maps/KaptaraIsland_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 20 "data/maps/KaptaraIsland_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 21 "data/maps/KaptaraIsland_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 22 "data/maps/KaptaraIsland_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 23 "data/maps/KaptaraIsland_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 24 "data/maps/KaptaraIsland_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 25 "data/maps/KaptaraIsland_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 26 "data/maps/KaptaraIsland_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 27 "data/maps/KaptaraIsland_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 28 "data/maps/KaptaraIsland_East/scripts.pory"
	setobjectaswildencounter 21, ENCOUNTER_LAND
# 29 "data/maps/KaptaraIsland_East/scripts.pory"
	setobjectaswildencounter 22, ENCOUNTER_LAND
# 30 "data/maps/KaptaraIsland_East/scripts.pory"
	setobjectaswildencounter 23, ENCOUNTER_LAND
# 31 "data/maps/KaptaraIsland_East/scripts.pory"
	setobjectaswildencounter 24, ENCOUNTER_LAND
# 32 "data/maps/KaptaraIsland_East/scripts.pory"
	setobjectaswildencounter 25, ENCOUNTER_LAND
# 33 "data/maps/KaptaraIsland_East/scripts.pory"
	setobjectaswildencounter 26, ENCOUNTER_LAND
# 34 "data/maps/KaptaraIsland_East/scripts.pory"
	setobjectaswildencounter 27, ENCOUNTER_LAND
	return

KaptaraIsland_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/KaptaraIsland_East/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto KaptaraIsland_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

KaptaraIsland_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 11 "data/maps/KaptaraIsland_East/scripts.pory"
	setweather WEATHER_RAIN
	goto KaptaraIsland_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

KaptaraIsland_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 12 "data/maps/KaptaraIsland_East/scripts.pory"
	setweather WEATHER_SUNNY
	goto KaptaraIsland_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


KaptaraIsland_East_EventScript_DirectionSign::
# 41 "data/maps/KaptaraIsland_East/scripts.pory"
	lock
# 42 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_East_EventScript_DirectionSign_Text_0
# 43 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 44 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_Trainer_KaptaraIsland_Yesui::
# 50 "data/maps/KaptaraIsland_East/scripts.pory"
	trainerbattle_single TRAINER_KAPTARAISLAND_YESUI, KaptaraIsland_Text_Trainer_KaptaraIsland_YesuiIntro, KaptaraIsland_Text_Trainer_KaptaraIsland_YesuiDefeat
# 51 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_Trainer_KaptaraIsland_Yesui_Text_0
# 52 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_Trainer_KaptaraIsland_Yesui_Text_1
# 53 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 54 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_RuinManiac::
# 68 "data/maps/KaptaraIsland_East/scripts.pory"
	lock
# 69 "data/maps/KaptaraIsland_East/scripts.pory"
	faceplayer
# 70 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_RuinManiac_Text_0
# 71 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_RuinManiac_Text_1
# 72 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 73 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_Trainer_KaptaraIsland_Issa::
# 79 "data/maps/KaptaraIsland_East/scripts.pory"
	trainerbattle_single TRAINER_KAPTARAISLAND_ISSA, KaptaraIsland_Text_Trainer_KaptaraIsland_IssaIntro, KaptaraIsland_Text_Trainer_KaptaraIsland_IssaDefeat
# 80 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_Trainer_KaptaraIsland_Issa_Text_0
# 81 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_Trainer_KaptaraIsland_Issa_Text_1
# 82 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 83 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_Trainer_KaptaraIsland_Grigor::
# 97 "data/maps/KaptaraIsland_East/scripts.pory"
	trainerbattle_single TRAINER_KAPTARAISLAND_GRIGOR, KaptaraIsland_Text_Trainer_KaptaraIsland_GrigorIntro, KaptaraIsland_Text_Trainer_KaptaraIsland_GrigorDefeat
# 98 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_Trainer_KaptaraIsland_Grigor_Text_0
# 99 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_Trainer_KaptaraIsland_Grigor_Text_1
# 100 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 101 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_Trainer_KaptaraIsland_Manto::
# 115 "data/maps/KaptaraIsland_East/scripts.pory"
	trainerbattle_single TRAINER_KAPTARAISLAND_MANTO, KaptaraIsland_Text_Trainer_KaptaraIsland_MantoIntro, KaptaraIsland_Text_Trainer_KaptaraIsland_MantoDefeat
# 116 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_Trainer_KaptaraIsland_Manto_Text_0
# 117 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_Trainer_KaptaraIsland_Manto_Text_1
# 118 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 119 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_Trainer_KaptaraIsland_Stan::
# 133 "data/maps/KaptaraIsland_East/scripts.pory"
	trainerbattle_single TRAINER_KAPTARAISLAND_STAN, KaptaraIsland_Text_Trainer_KaptaraIsland_StanIntro, KaptaraIsland_Text_Trainer_KaptaraIsland_StanDefeat
# 134 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_Trainer_KaptaraIsland_Stan_Text_0
# 135 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_Trainer_KaptaraIsland_Stan_Text_1
# 136 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 137 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_Trainer_KaptaraIsland_Horatio::
# 151 "data/maps/KaptaraIsland_East/scripts.pory"
	trainerbattle_single TRAINER_KAPTARAISLAND_HORATIO, KaptaraIsland_Text_Trainer_KaptaraIsland_HoratioIntro, KaptaraIsland_Text_Trainer_KaptaraIsland_HoratioDefeat
# 152 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_Trainer_KaptaraIsland_Horatio_Text_0
# 153 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_Trainer_KaptaraIsland_Horatio_Text_1
# 154 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 155 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_BugCatcher::
# 169 "data/maps/KaptaraIsland_East/scripts.pory"
	lock
# 170 "data/maps/KaptaraIsland_East/scripts.pory"
	faceplayer
# 171 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_BugCatcher_Text_0
# 172 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_BugCatcher_Text_1
# 173 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 174 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_Trainer_KaptaraIsland_Edith::
# 180 "data/maps/KaptaraIsland_East/scripts.pory"
	trainerbattle_single TRAINER_KAPTARAISLAND_EDITH, KaptaraIsland_Text_Trainer_KaptaraIsland_EdithIntro, KaptaraIsland_Text_Trainer_KaptaraIsland_EdithDefeat
# 181 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_Trainer_KaptaraIsland_Edith_Text_0
# 182 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_Trainer_KaptaraIsland_Edith_Text_1
# 183 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 184 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_YoungsterNeedsMoonStone::
# 198 "data/maps/KaptaraIsland_East/scripts.pory"
	lock
# 199 "data/maps/KaptaraIsland_East/scripts.pory"
	faceplayer
# 200 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_0
# 203 "data/maps/KaptaraIsland_East/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_MOON_STONE_YOUNGSTER
# 204 "data/maps/KaptaraIsland_East/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KaptaraIsland_EventScript_YoungsterNeedsMoonStone_2
# 213 "data/maps/KaptaraIsland_East/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_MOON_STONE_YOUNGSTER
# 214 "data/maps/KaptaraIsland_East/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KaptaraIsland_EventScript_YoungsterNeedsMoonStone_5
# 223 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_3
# 224 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 226 "data/maps/KaptaraIsland_East/scripts.pory"
	checkitem ITEM_MOON_STONE
# 227 "data/maps/KaptaraIsland_East/scripts.pory"
	delay 30
# 229 "data/maps/KaptaraIsland_East/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq KaptaraIsland_EventScript_YoungsterNeedsMoonStone_8
# 248 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_0
# 249 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_6
# 250 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
KaptaraIsland_EventScript_YoungsterNeedsMoonStone_4:
# 253 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end

KaptaraIsland_EventScript_YoungsterNeedsMoonStone_2:
# 206 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_1
# 207 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 208 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end

KaptaraIsland_EventScript_YoungsterNeedsMoonStone_5:
# 216 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_2
# 217 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 218 "data/maps/KaptaraIsland_East/scripts.pory"
	delay 20
# 219 "data/maps/KaptaraIsland_East/scripts.pory"
	startquest QUEST_MOON_STONE_YOUNGSTER
	goto KaptaraIsland_EventScript_YoungsterNeedsMoonStone_4

KaptaraIsland_EventScript_YoungsterNeedsMoonStone_8:
# 231 "data/maps/KaptaraIsland_East/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 232 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_0
# 233 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_4
# 234 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 235 "data/maps/KaptaraIsland_East/scripts.pory"
	delay 30
# 236 "data/maps/KaptaraIsland_East/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_QUESTION
# 237 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_0
# 238 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_5
# 239 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 240 "data/maps/KaptaraIsland_East/scripts.pory"
	delay 5
# 241 "data/maps/KaptaraIsland_East/scripts.pory"
	giveitem ITEM_EXP_CANDY_L
# 242 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 243 "data/maps/KaptaraIsland_East/scripts.pory"
	delay 20
# 244 "data/maps/KaptaraIsland_East/scripts.pory"
	completequest QUEST_MOON_STONE_YOUNGSTER
	goto KaptaraIsland_EventScript_YoungsterNeedsMoonStone_4


KaptaraIsland_EventScript_BraviaryHisui::
# 259 "data/maps/KaptaraIsland_East/scripts.pory"
	lock
# 260 "data/maps/KaptaraIsland_East/scripts.pory"
	faceplayer
# 261 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_BraviaryHisui_Text_0
# 262 "data/maps/KaptaraIsland_East/scripts.pory"
	playmoncry SPECIES_BRAVIARY_HISUIAN, CRY_MODE_NORMAL
# 263 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_BraviaryHisui_Text_1
# 264 "data/maps/KaptaraIsland_East/scripts.pory"
	waitmoncry
# 265 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 266 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_BirdKeeperWithFly::
# 272 "data/maps/KaptaraIsland_East/scripts.pory"
	lock
# 273 "data/maps/KaptaraIsland_East/scripts.pory"
	faceplayer
# 274 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_BirdKeeperWithFly_Text_0
# 276 "data/maps/KaptaraIsland_East/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLY, KaptaraIsland_EventScript_BirdKeeperWithFly_2
# 285 "data/maps/KaptaraIsland_East/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 286 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_BirdKeeperWithFly_Text_2, MSGBOX_YESNO
# 287 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 288 "data/maps/KaptaraIsland_East/scripts.pory"
	delay 5
# 289 "data/maps/KaptaraIsland_East/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KaptaraIsland_EventScript_BirdKeeperWithFly_5
# 299 "data/maps/KaptaraIsland_East/scripts.pory"
	trainerbattle_no_intro TRAINER_KAPTARAISLAND_FLYGUY, KaptaraIsland_Text_FlyGuyDefeat
# 301 "data/maps/KaptaraIsland_East/scripts.pory"
	delay 5
# 302 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_BirdKeeperWithFly_Text_0
# 303 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_BirdKeeperWithFly_Text_4
# 304 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 305 "data/maps/KaptaraIsland_East/scripts.pory"
	delay 5
# 306 "data/maps/KaptaraIsland_East/scripts.pory"
	giveitem ITEM_HM_FLY
# 307 "data/maps/KaptaraIsland_East/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
# 308 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 309 "data/maps/KaptaraIsland_East/scripts.pory"
	delay 5
# 310 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_BirdKeeperWithFly_Text_0
# 311 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_BirdKeeperWithFly_Text_5
# 312 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 315 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end

KaptaraIsland_EventScript_BirdKeeperWithFly_2:
# 278 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_BirdKeeperWithFly_Text_1
# 279 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 280 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end

KaptaraIsland_EventScript_BirdKeeperWithFly_5:
# 291 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_BirdKeeperWithFly_Text_0
# 292 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_BirdKeeperWithFly_Text_3
# 293 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 294 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_Trainer_KaptaraIsland_Rose::
# 326 "data/maps/KaptaraIsland_East/scripts.pory"
	trainerbattle_double TRAINER_KAPTARAISLAND_JON_AND_ROSE, KaptaraIsland_Text_Trainer_KaptaraIsland_RoseIntro, KaptaraIsland_Text_Trainer_KaptaraIsland_RoseDefeat, KaptaraIsland_Text_Trainer_KaptaraIsland_RoseNotEnoughMons
# 327 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_Trainer_KaptaraIsland_Rose_Text_0
# 328 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_Trainer_KaptaraIsland_Rose_Text_1
# 329 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 330 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_Trainer_KaptaraIsland_Jon::
# 348 "data/maps/KaptaraIsland_East/scripts.pory"
	trainerbattle_double TRAINER_KAPTARAISLAND_JON_AND_ROSE, KaptaraIsland_Text_Trainer_KaptaraIsland_JonIntro, KaptaraIsland_Text_Trainer_KaptaraIsland_JonDefeat, KaptaraIsland_Text_Trainer_KaptaraIsland_JonNotEnoughMons
# 349 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_Trainer_KaptaraIsland_Jon_Text_0
# 350 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_Trainer_KaptaraIsland_Jon_Text_1
# 351 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 352 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_LassWanderingAround::
# 370 "data/maps/KaptaraIsland_East/scripts.pory"
	lock
# 371 "data/maps/KaptaraIsland_East/scripts.pory"
	faceplayer
# 372 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_LassWanderingAround_Text_0
# 373 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_LassWanderingAround_Text_1
# 374 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 375 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_East_EventScript_UniversityStudentRouteCheck::
# 381 "data/maps/KaptaraIsland_East/scripts.pory"
	lock
# 382 "data/maps/KaptaraIsland_East/scripts.pory"
	faceplayer
# 383 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_East_EventScript_UniversityStudentRouteCheck_Text_0
# 385 "data/maps/KaptaraIsland_East/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_KAPTARA_ISLAND, KaptaraIsland_East_EventScript_UniversityStudentRouteCheck_2
# 392 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_East_EventScript_UniversityStudentRouteCheck_Text_2
# 393 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 394 "data/maps/KaptaraIsland_East/scripts.pory"
	special CheckRouteCaptureProgress
# 395 "data/maps/KaptaraIsland_East/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq KaptaraIsland_East_EventScript_UniversityStudentRouteCheck_5
KaptaraIsland_East_EventScript_UniversityStudentRouteCheck_1:
# 413 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end

KaptaraIsland_East_EventScript_UniversityStudentRouteCheck_2:
# 387 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_East_EventScript_UniversityStudentRouteCheck_Text_1
# 388 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
	goto KaptaraIsland_East_EventScript_UniversityStudentRouteCheck_1

KaptaraIsland_East_EventScript_UniversityStudentRouteCheck_5:
# 397 "data/maps/KaptaraIsland_East/scripts.pory"
	delay 20
# 398 "data/maps/KaptaraIsland_East/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 399 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_East_EventScript_UniversityStudentRouteCheck_Text_0
# 400 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_East_EventScript_UniversityStudentRouteCheck_Text_3
# 401 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 402 "data/maps/KaptaraIsland_East/scripts.pory"
	delay 5
# 405 "data/maps/KaptaraIsland_East/scripts.pory"
	giveitem ITEM_TM_EARTHQUAKE
# 406 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 407 "data/maps/KaptaraIsland_East/scripts.pory"
	delay 5
# 409 "data/maps/KaptaraIsland_East/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_KAPTARA_ISLAND
	goto KaptaraIsland_East_EventScript_UniversityStudentRouteCheck_1


KaptaraIsland_East_EventScript_DirectionSign_Text_0:
# 42 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Kaptara Island - Octillery Forest\n"
	.string "A Ruinous, Twisting Woodland\p"
	.string "{LEFT_ARROW} Palati City$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Yesui_Text_0:
# 51 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Yesui$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Yesui_Text_1:
# 52 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "There used to be wild Litleo and Pyroar\n"
	.string "all over the Ilios Region, but most were\l"
	.string "hunted down centuries ago. There are\l"
	.string "only a few pockets of them left in the\l"
	.string "wild.$"

KaptaraIsland_EventScript_RuinManiac_Text_0:
# 70 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Ruin Maniac$"

KaptaraIsland_EventScript_RuinManiac_Text_1:
# 71 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "There are broken fragments of an\n"
	.string "ancient civilization's buildings all over\l"
	.string "this side of the island. It seems like\l"
	.string "the whole island was once covered in\l"
	.string "palaces, like those remaining in Palati\l"
	.string "City. I wonder what happened to them...$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Issa_Text_0:
# 80 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Issa$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Issa_Text_1:
# 81 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Some people say that the winding trails\n"
	.string "of this forest look like the tentacles\l"
	.string "of an Octillery. I guess Octillery was\l"
	.string "painted on a lot of ancient walls here,\l"
	.string "too.$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Grigor_Text_0:
# 98 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Grigor$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Grigor_Text_1:
# 99 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Art has been practiced on this island\n"
	.string "for thousands of years. I am simply\l"
	.string "continuing this tradition!$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Manto_Text_0:
# 116 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Manto$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Manto_Text_1:
# 117 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "It's easy to lose your way in these\n"
	.string "twisting paths. Make sure to remember\l"
	.string "your way back to Palati City.$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Stan_Text_0:
# 134 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Stan$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Stan_Text_1:
# 135 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "I'm growing my collection of Pokémon. I\n"
	.string "hear this island holds some secrets...$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Horatio_Text_0:
# 152 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Horatio$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Horatio_Text_1:
# 153 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "I took the day off work to come out\n"
	.string "here and explore. There's value in\l"
	.string "touching grass.$"

KaptaraIsland_EventScript_BugCatcher_Text_0:
# 171 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Bug Catcher$"

KaptaraIsland_EventScript_BugCatcher_Text_1:
# 172 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "The weather is always crazy here! It's\n"
	.string "either pouring rain or bright and sunny!$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Edith_Text_0:
# 181 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Edith$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Edith_Text_1:
# 182 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "They say the person deep in the woods\n"
	.string "is looking for a challenge. Maybe you\l"
	.string "could be that challenge!$"

KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_0:
# 200 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Youngster$"

KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_1:
# 206 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Wigglytuff might not look that strong,\n"
	.string "but it can pack a serious punch. My\l"
	.string "friends will be so jealous!$"

KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_2:
# 216 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "I'm digging around here for a Moon\n"
	.string "Stone. My only Pokémon is a Jigglypuff,\l"
	.string "and all my friends say it looks weak... I\l"
	.string "thought its evolution might look\l"
	.string "stronger!\p"
	.string "Hey, you're a traveler, right? Could you\n"
	.string "bring me a {COLOR GREEN}Moon Stone{COLOR DARK_GRAY}?$"

KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_3:
# 223 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "It's you! Did you find a Moon Stone?$"

KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_4:
# 233 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Hey, that's it! Let me give it to\n"
	.string "Jigglypuff... aaaand...$"

KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_5:
# 238 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "What? A Wigglytuff? It's just a\n"
	.string "Jigglypuff but taller!\p"
	.string "Well, maybe my friends will stop making\n"
	.string "fun of me, now that my Pokémon is taller\l"
	.string "than them. Here, take this!$"

KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_6:
# 249 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Aw, you don't have a Moon Stone. Please,\n"
	.string "I need to evolve my Jigglypuff!\p"
	.string "Bring me a {COLOR GREEN}Moon Stone{COLOR DARK_GRAY}, and I'll give you\n"
	.string "something I found in these ruins!$"

KaptaraIsland_EventScript_BraviaryHisui_Text_0:
# 261 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Braviary$"

KaptaraIsland_EventScript_BraviaryHisui_Text_1:
# 263 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Kraww!$"

KaptaraIsland_EventScript_BirdKeeperWithFly_Text_0:
# 274 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Fly Guy$"

KaptaraIsland_EventScript_BirdKeeperWithFly_Text_1:
# 278 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Are you enjoying Flying around the\n"
	.string "region? Of course, you'll need the 7th\l"
	.string "Gym Badge to use it, but it's one of the\l"
	.string "most helpful tools I've got!$"

KaptaraIsland_EventScript_BirdKeeperWithFly_Text_2:
# 286 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Hey, someone found me! I'm the {COLOR GREEN}Fly Guy{COLOR DARK_GRAY}\n"
	.string "of Ilios - I give people the {COLOR GREEN}Fly HM{COLOR DARK_GRAY}!\p"
	.string "Oh, but first, you'll have to earn it. Are\n"
	.string "you ready for a battle?$"

KaptaraIsland_EventScript_BirdKeeperWithFly_Text_3:
# 292 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Ehehe, need some time first, hm? Come\n"
	.string "back when you're ready for a fight. I'll\l"
	.string "give you the {COLOR GREEN}Fly HM{COLOR DARK_GRAY} as a reward!$"

KaptaraIsland_EventScript_BirdKeeperWithFly_Text_4:
# 303 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Ehehe, you clipped my wings and brought\n"
	.string "me down! You've earned this.$"

KaptaraIsland_EventScript_BirdKeeperWithFly_Text_5:
# 311 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "After you've earned the {COLOR GREEN}Palati City Gym\n"
	.string "Badge{COLOR DARK_GRAY}, you can use Fly to travel around\l"
	.string "the Ilios Region. Neat, huh?$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Rose_Text_0:
# 327 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Rose$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Rose_Text_1:
# 328 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "I wonder what's deeper in the woods.$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Jon_Text_0:
# 349 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Jon$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Jon_Text_1:
# 350 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "I hear there's a sunken ruin deep in the\n"
	.string "woods. Is it around here?$"

KaptaraIsland_EventScript_LassWanderingAround_Text_0:
# 372 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Lass$"

KaptaraIsland_EventScript_LassWanderingAround_Text_1:
# 373 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Have you heard about the Pokémon\n"
	.string "coming back from extinction? I wonder\l"
	.string "if the ancient people of this island\l"
	.string "lived alongside them before they went\l"
	.string "extinct.$"

KaptaraIsland_East_EventScript_UniversityStudentRouteCheck_Text_0:
# 383 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Uni. Student$"

KaptaraIsland_East_EventScript_UniversityStudentRouteCheck_Text_1:
# 387 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

KaptaraIsland_East_EventScript_UniversityStudentRouteCheck_Text_2:
# 392 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Chaire (Hyeh-rei)! I'm a student from\n"
	.string "the Acrisia University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in {COLOR GREEN}East and West{COLOR DARK_GRAY} Kaptara\l"
	.string "Island. If you've caught all the\l"
	.string "Pokémon here, please let me know.$"

KaptaraIsland_East_EventScript_UniversityStudentRouteCheck_Text_3:
# 400 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_YesuiIntro::
# 57 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Go, my shining lions!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_YesuiDefeat::
# 61 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "How could they lose?!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_IssaIntro::
# 86 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "This rough terrain is perfect for\n"
	.string "training!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_IssaDefeat::
# 90 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Aw... It was because of the terrain!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_GrigorIntro::
# 104 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "I'm painting the natural beauty of this\n"
	.string "island.$"

KaptaraIsland_Text_Trainer_KaptaraIsland_GrigorDefeat::
# 108 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "I'll have to paint your Pokémon, too.$"

KaptaraIsland_Text_Trainer_KaptaraIsland_MantoIntro::
# 122 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Uh oh, I think I'm lost!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_MantoDefeat::
# 126 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "My poor Pokémon are lost, too!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_StanIntro::
# 140 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Ooo, a fresh team of Pokémon! Let's see\n"
	.string "what you've got!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_StanDefeat::
# 144 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "What a collection!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_HoratioIntro::
# 158 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "I haven't spent time in nature in years.\n"
	.string "Come, help me have fun!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_HoratioDefeat::
# 162 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Battles are quite the thrill!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_EdithIntro::
# 187 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "There's someone who stays deep in\n"
	.string "these woods for days on end. I wonder\l"
	.string "if I can find them.$"

KaptaraIsland_Text_Trainer_KaptaraIsland_EdithDefeat::
# 191 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "I'll need to heal my Pokémon first.$"

KaptaraIsland_Text_FlyGuyDefeat::
# 319 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Woah, you blew me away!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_RoseIntro::
# 333 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "My husband says there's something past\n"
	.string "this rock, but I'm not sure I believe\l"
	.string "him.$"

KaptaraIsland_Text_Trainer_KaptaraIsland_RoseDefeat::
# 337 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "We better heal out Pokémon before we\n"
	.string "move on.$"

KaptaraIsland_Text_Trainer_KaptaraIsland_RoseNotEnoughMons::
# 341 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "It doesn't look like you have enough\n"
	.string "Pokémon for a double battle.$"

KaptaraIsland_Text_Trainer_KaptaraIsland_JonIntro::
# 355 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Come on honey, we need to get past this\n"
	.string "rock! Huh? A Trainer?$"

KaptaraIsland_Text_Trainer_KaptaraIsland_JonDefeat::
# 359 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Just a little further!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_JonNotEnoughMons::
# 363 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "It doesn't look like you have enough\n"
	.string "Pokémon for a double battle.$"

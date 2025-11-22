MyrriniIsland_MapScripts::
# 2 "data/maps/MyrriniIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 37 "data/maps/MyrriniIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MyrriniIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_VISITED_MYRRINI_ISLAND
# 5 "data/maps/MyrriniIsland/scripts.pory"
	goto_if_set FLAG_HIDE_CHIMERA_EVENT_MYRRINI_ISLAND, MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/MyrriniIsland/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 15 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 16 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 17 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 18 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 19 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 20 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 21 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 22 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 23 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 24 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 25 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 26 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 27 "data/maps/MyrriniIsland/scripts.pory"
	setobjectaswildencounter 46, ENCOUNTER_LAND
# 28 "data/maps/MyrriniIsland/scripts.pory"
	setobjectaswildencounter 47, ENCOUNTER_LAND
# 29 "data/maps/MyrriniIsland/scripts.pory"
	setobjectaswildencounter 48, ENCOUNTER_LAND
# 31 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/MyrriniIsland/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 12 "data/maps/MyrriniIsland/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 33 "data/maps/MyrriniIsland/scripts.pory"
	call Route117_OnTransition
	return

MyrriniIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 38 "data/maps/MyrriniIsland/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, MyrriniIsland_EventScript_TryChimeraEvent
	.2byte 0


MyrriniIsland_EventScript_TryChimeraEvent::
# 44 "data/maps/MyrriniIsland/scripts.pory"
	setvar VAR_TEMP_1, 1
# 45 "data/maps/MyrriniIsland/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MyrriniIsland_EventScript_TryChimeraEvent_3
MyrriniIsland_EventScript_TryChimeraEvent_1:
# 49 "data/maps/MyrriniIsland/scripts.pory"
	releaseall
	end

MyrriniIsland_EventScript_TryChimeraEvent_2:
# 47 "data/maps/MyrriniIsland/scripts.pory"
	goto MyrriniIsland_EventScript_ChimeraEvent
	goto MyrriniIsland_EventScript_TryChimeraEvent_1

MyrriniIsland_EventScript_TryChimeraEvent_3:
# 45 "data/maps/MyrriniIsland/scripts.pory"
	goto_if_unset FLAG_HIDE_CHIMERA_EVENT_MYRRINI_ISLAND, MyrriniIsland_EventScript_TryChimeraEvent_2
	goto MyrriniIsland_EventScript_TryChimeraEvent_1


MyrriniIsland_EventScript_DirectionSign::
# 55 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 56 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_DirectionSign_Text_0
# 57 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 58 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_Sign_GymSign::
# 64 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 65 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_Sign_GymSign_Text_0
# 66 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 67 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_BlackBelt::
# 73 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 74 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 75 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_BlackBelt_Text_0
# 76 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_BlackBelt_Text_1
# 77 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 78 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_PsychicM::
# 84 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 85 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 86 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_PsychicM_Text_0
# 87 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_PsychicM_Text_1
# 88 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 89 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Girl::
# 95 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 96 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 97 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Girl_Text_0
# 98 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Girl_Text_1
# 99 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 100 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_OldWoman::
# 106 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 107 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 108 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_OldWoman_Text_0
# 109 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_OldWoman_Text_1
# 110 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 111 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Beauty::
# 117 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 118 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 119 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Beauty_Text_0
# 120 "data/maps/MyrriniIsland/scripts.pory"
	message MyrriniIsland_EventScript_Beauty_Text_1
# 121 "data/maps/MyrriniIsland/scripts.pory"
	waitmessage
# 122 "data/maps/MyrriniIsland/scripts.pory"
	pokemart NectarMart
# 123 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 124 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 125 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Beauty_Text_0
# 126 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Beauty_Text_2
# 127 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 128 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


	.align 2
# 132 "data/maps/MyrriniIsland/scripts.pory"
NectarMart:
# 134 "data/maps/MyrriniIsland/scripts.pory"
	.2byte ITEM_RED_NECTAR
# 135 "data/maps/MyrriniIsland/scripts.pory"
	.2byte ITEM_YELLOW_NECTAR
# 136 "data/maps/MyrriniIsland/scripts.pory"
	.2byte ITEM_PINK_NECTAR
# 137 "data/maps/MyrriniIsland/scripts.pory"
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE

MyrriniIsland_EventScript_Ribombee::
# 142 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 143 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 144 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Ribombee_Text_0
# 145 "data/maps/MyrriniIsland/scripts.pory"
	playmoncry SPECIES_RIBOMBEE, CRY_MODE_NORMAL
# 146 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Ribombee_Text_1
# 147 "data/maps/MyrriniIsland/scripts.pory"
	waitmoncry
# 148 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 149 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Camper::
# 155 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 156 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 157 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Camper_Text_0
# 160 "data/maps/MyrriniIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_MYRRINI_ALLERGIES
# 161 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MyrriniIsland_EventScript_Camper_2
# 170 "data/maps/MyrriniIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_MYRRINI_ALLERGIES
# 171 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MyrriniIsland_EventScript_Camper_5
# 181 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_3
# 182 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 184 "data/maps/MyrriniIsland/scripts.pory"
	checkitem ITEM_FULL_HEAL
# 185 "data/maps/MyrriniIsland/scripts.pory"
	delay 30
# 186 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MyrriniIsland_EventScript_Camper_8
# 196 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Camper_Text_0
# 197 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_5
# 198 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 199 "data/maps/MyrriniIsland/scripts.pory"
	removeitem ITEM_FULL_HEAL
# 200 "data/maps/MyrriniIsland/scripts.pory"
	delay 30
# 201 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 23, Common_Movement_Heart
# 202 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 203 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 204 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Camper_Text_0
# 205 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_6
# 206 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 207 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 208 "data/maps/MyrriniIsland/scripts.pory"
	giveitem ITEM_SILK_SCARF
# 209 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 211 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 212 "data/maps/MyrriniIsland/scripts.pory"
	completequest QUEST_MYRRINI_ALLERGIES
MyrriniIsland_EventScript_Camper_4:
# 215 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_Camper_2:
# 163 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_1
# 164 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 165 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_Camper_5:
# 173 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_2
# 174 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 176 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 177 "data/maps/MyrriniIsland/scripts.pory"
	startquest QUEST_MYRRINI_ALLERGIES
	goto MyrriniIsland_EventScript_Camper_4

MyrriniIsland_EventScript_Camper_8:
# 188 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Camper_Text_0
# 189 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_4
# 190 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 191 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Girl2::
# 221 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 222 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 223 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Girl_Text_0
# 224 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Girl2_Text_0
# 225 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 226 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Panpour::
# 232 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 233 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 234 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Panpour_Text_0
# 235 "data/maps/MyrriniIsland/scripts.pory"
	playmoncry SPECIES_PANPOUR, CRY_MODE_NORMAL
# 236 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Panpour_Text_1
# 237 "data/maps/MyrriniIsland/scripts.pory"
	waitmoncry
# 238 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 239 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_BugCatcher::
# 245 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 246 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 247 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_BugCatcher_Text_0
# 248 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_BugCatcher_Text_1
# 249 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 250 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Woman::
# 256 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 257 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 258 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Woman_Text_0
# 259 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Woman_Text_1
# 260 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 261 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Artist::
# 267 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 268 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 269 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Artist_Text_0
# 270 "data/maps/MyrriniIsland/scripts.pory"
	goto_if_set FLAG_GOT_TM_POISON_FANG, MyrriniIsland_EventScript_Artist_2
# 277 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_GOT_TM_POISON_FANG
# 278 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Artist_Text_2
# 279 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 280 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 281 "data/maps/MyrriniIsland/scripts.pory"
	giveitem ITEM_TM_POISON_FANG
# 282 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
MyrriniIsland_EventScript_Artist_1:
# 284 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_Artist_2:
# 272 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Artist_Text_1
# 273 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
	goto MyrriniIsland_EventScript_Artist_1


MyrriniIsland_EventScript_Farmer1::
# 290 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 291 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 292 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Farmer1_Text_0
# 293 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Farmer1_Text_1
# 294 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 295 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Farmer2::
# 301 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 302 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 303 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Farmer1_Text_0
# 304 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Farmer2_Text_0
# 305 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 306 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_LittleGirl::
# 312 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 313 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 314 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_LittleGirl_Text_0
# 315 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_LittleGirl_Text_1
# 316 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 317 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_BattleGirl::
# 323 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 324 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 325 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_BattleGirl_Text_0
# 326 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_BattleGirl_Text_1
# 327 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 328 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_HexManiac::
# 334 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 335 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_HexManiac_Text_0
# 336 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_1
# 337 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 338 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 339 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 36, Common_Movement_ExclamationMark
# 340 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 341 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 342 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 343 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_HexManiac_Text_0
# 346 "data/maps/MyrriniIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_TRY_MYRRINI_BATTLE_PAVILION
# 347 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MyrriniIsland_EventScript_HexManiac_2
# 356 "data/maps/MyrriniIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_TRY_MYRRINI_BATTLE_PAVILION
# 357 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MyrriniIsland_EventScript_HexManiac_5
# 367 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_4
# 368 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 370 "data/maps/MyrriniIsland/scripts.pory"
	delay 30
# 371 "data/maps/MyrriniIsland/scripts.pory"
	goto_if_set FLAG_PLAYED_IN_MYRRINI_BATTLE_PAVILION, MyrriniIsland_EventScript_HexManiac_8
# 385 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_HexManiac_Text_0
# 386 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_6
# 387 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
MyrriniIsland_EventScript_HexManiac_4:
# 390 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_HexManiac_2:
# 349 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_2
# 350 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 351 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_HexManiac_5:
# 359 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_3
# 360 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 362 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 363 "data/maps/MyrriniIsland/scripts.pory"
	startquest QUEST_TRY_MYRRINI_BATTLE_PAVILION
	goto MyrriniIsland_EventScript_HexManiac_4

MyrriniIsland_EventScript_HexManiac_8:
# 373 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_HexManiac_Text_0
# 374 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_5
# 375 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 376 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 377 "data/maps/MyrriniIsland/scripts.pory"
	giveitem ITEM_REAPER_CLOTH
# 378 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 380 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 381 "data/maps/MyrriniIsland/scripts.pory"
	completequest QUEST_TRY_MYRRINI_BATTLE_PAVILION
	goto MyrriniIsland_EventScript_HexManiac_4


MyrriniIsland_EventScript_Zorua::
# 396 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 397 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 398 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Zorua_Text_0
# 399 "data/maps/MyrriniIsland/scripts.pory"
	playmoncry SPECIES_ZORUA_HISUIAN, CRY_MODE_NORMAL
# 400 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Zorua_Text_1
# 401 "data/maps/MyrriniIsland/scripts.pory"
	waitmoncry
# 402 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 403 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Scientist::
# 409 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 410 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 411 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Scientist_Text_0
# 412 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Scientist_Text_1
# 413 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 414 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Toucannon::
# 420 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 421 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 422 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Toucannon_Text_0
# 423 "data/maps/MyrriniIsland/scripts.pory"
	playmoncry SPECIES_TOUCANNON, CRY_MODE_NORMAL
# 424 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Toucannon_Text_1
# 425 "data/maps/MyrriniIsland/scripts.pory"
	waitmoncry
# 426 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 427 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 428 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Toucannon_Text_2
# 429 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 430 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Kilowattrel::
# 436 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 437 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 438 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Kilowattrel_Text_0
# 439 "data/maps/MyrriniIsland/scripts.pory"
	playmoncry SPECIES_KILOWATTREL, CRY_MODE_NORMAL
# 440 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Kilowattrel_Text_1
# 441 "data/maps/MyrriniIsland/scripts.pory"
	waitmoncry
# 442 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 443 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 444 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Kilowattrel_Text_2
# 445 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 446 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Sailor::
# 452 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 453 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 454 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Sailor_Text_0
# 455 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Sailor_Text_1
# 456 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 457 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_OldMan::
# 463 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 464 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 465 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_OldMan_Text_0
# 466 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_OldMan_Text_1
# 467 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 468 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_BattlePavilionSign::
# 474 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 475 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_BattlePavilionSign_Text_0
# 476 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 477 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_ChimeraEvent::
# 483 "data/maps/MyrriniIsland/scripts.pory"
	setvar VAR_TEMP_1, 1
# 485 "data/maps/MyrriniIsland/scripts.pory"
	lockall
# 486 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 487 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_0
# 488 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_1
# 489 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 490 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 491 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 492 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 493 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 494 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 495 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 496 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 497 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_EUTERPE_DURING_CHIMERA_EVENT_MYRRINI_ISLAND
# 498 "data/maps/MyrriniIsland/scripts.pory"
	addobject 55
# 499 "data/maps/MyrriniIsland/scripts.pory"
	showobjectat 55, MAP_MYRRINI_ISLAND
# 500 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, Common_Movement_WalkDown
# 501 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_2
# 502 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_3
# 503 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 505 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MyrriniIsland_Movement_PlayerWalkDownToEvent
# 506 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, MyrriniIsland_Movement_EuterpeApproach
# 507 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 508 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 509 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 52, Common_Movement_FaceUp
# 510 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 511 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_4
# 512 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_5
# 513 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 514 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 516 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_2
# 517 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_6
# 518 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 519 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 520 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, MyrriniIsland_Movement_PlayerAndEuterpeReposition
# 521 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 522 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 53, Common_Movement_FaceUp
# 523 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 524 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_2
# 525 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_7
# 526 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 527 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 53, Common_Movement_JumpInPlaceUp
# 528 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 529 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_8
# 530 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_9
# 531 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 532 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 54, MyrriniIsland_Movement_AdminNoticesKalliope
# 533 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 534 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 53, Common_Movement_ExclamationMark
# 535 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 536 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_10
# 537 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_11
# 538 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 539 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 53, MyrriniIsland_Movement_AdminsMoveForBoss
# 540 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 54, MyrriniIsland_Movement_AdminsMoveForBoss
# 541 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 543 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MyrriniIsland_Movement_PlayerAndEuterpeReposition
# 544 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, MyrriniIsland_Movement_PlayerAndEuterpeReposition
# 545 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 52, Common_Movement_FaceDown
# 546 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 548 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, MyrriniIsland_Movement_KalliopeApproaches
# 549 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 550 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_12
# 551 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_13
# 552 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 553 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, Common_Movement_WalkRight
# 554 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 555 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_12
# 556 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_14
# 557 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 558 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_15
# 559 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_16
# 560 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 561 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 53, MyrriniIsland_Movement_AdminsFlee
# 562 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 54, MyrriniIsland_Movement_AdminsFlee
# 563 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 564 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 565 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, Common_Movement_WalkLeft
# 566 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 567 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, Common_Movement_FaceUp
# 568 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 570 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_17
# 571 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_18
# 572 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 573 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 574 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 52, Common_Movement_JumpInPlaceDown
# 575 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 576 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_4
# 577 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_19
# 578 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 579 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, Common_Movement_FaceLeft
# 580 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 581 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_17
# 582 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_20
# 583 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 584 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, Common_Movement_FaceUp
# 585 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 586 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_17
# 587 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_21
# 588 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 589 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, MyrriniIsland_Movement_KalliopeLeaves
# 590 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 591 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 593 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 52, Common_Movement_FaceRight
# 594 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 595 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, Common_Movement_FaceLeft
# 596 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 597 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_2
# 598 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_22
# 599 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 600 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, MyrriniIsland_Movement_EuterpeLeaves
# 601 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 607 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 608 "data/maps/MyrriniIsland/scripts.pory"
	startquest QUEST_FREE_MARMARO_MINES
# 609 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 610 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 612 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 613 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 614 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_4
# 615 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_23
# 616 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 617 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 52, MyrriniIsland_Movement_RaniaLeaves
# 618 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 620 "data/maps/MyrriniIsland/scripts.pory"
	removeobject 52
# 621 "data/maps/MyrriniIsland/scripts.pory"
	removeobject 53
# 622 "data/maps/MyrriniIsland/scripts.pory"
	removeobject 54
# 623 "data/maps/MyrriniIsland/scripts.pory"
	removeobject 55
# 624 "data/maps/MyrriniIsland/scripts.pory"
	removeobject 56
# 625 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_HIDE_CHIMERA_EVENT_MYRRINI_ISLAND
# 626 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_HIDE_EUTERPE_DURING_CHIMERA_EVENT_MYRRINI_ISLAND
# 627 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_HIDE_GRUNT_BLOCKING_MARMARO_MINES
# 628 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_VISITED_PENTEPETAL_CITY
# 633 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_HIDE_RANIA_ACRISIA_UNIVERSITY
# 634 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 635 "data/maps/MyrriniIsland/scripts.pory"
	startquest QUEST_VISIT_RANIA_PENTEPETAL
# 636 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 637 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 639 "data/maps/MyrriniIsland/scripts.pory"
	releaseall
	end


# 643 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_PlayerWalkDownToEvent:
# 645 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 645 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 645 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 645 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 646 "data/maps/MyrriniIsland/scripts.pory"
	emote_exclamation_mark
# 647 "data/maps/MyrriniIsland/scripts.pory"
	delay_16
# 648 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 648 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 648 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 648 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 648 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 648 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 649 "data/maps/MyrriniIsland/scripts.pory"
	jump_in_place_down
# 649 "data/maps/MyrriniIsland/scripts.pory"
	jump_in_place_down
# 650 "data/maps/MyrriniIsland/scripts.pory"
	face_down
# 651 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 653 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_EuterpeApproach:
# 655 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 655 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 655 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 655 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 656 "data/maps/MyrriniIsland/scripts.pory"
	delay_16
# 657 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 657 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 657 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 657 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 657 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 657 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 658 "data/maps/MyrriniIsland/scripts.pory"
	face_down
# 659 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 661 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_AdminNoticesKalliope:
# 663 "data/maps/MyrriniIsland/scripts.pory"
	face_down
# 664 "data/maps/MyrriniIsland/scripts.pory"
	delay_16
# 665 "data/maps/MyrriniIsland/scripts.pory"
	emote_exclamation_mark
# 666 "data/maps/MyrriniIsland/scripts.pory"
	delay_16
# 667 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 668 "data/maps/MyrriniIsland/scripts.pory"
	face_up
# 669 "data/maps/MyrriniIsland/scripts.pory"
	jump_in_place_up
# 670 "data/maps/MyrriniIsland/scripts.pory"
	face_up
# 671 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 673 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_AdminsMoveForBoss:
# 675 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 675 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 676 "data/maps/MyrriniIsland/scripts.pory"
	face_left
# 677 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 679 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_PlayerAndEuterpeReposition:
# 681 "data/maps/MyrriniIsland/scripts.pory"
	walk_right
# 682 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 683 "data/maps/MyrriniIsland/scripts.pory"
	face_down
# 684 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 686 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_KalliopeApproaches:
# 688 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 688 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 688 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 688 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 688 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 689 "data/maps/MyrriniIsland/scripts.pory"
	walk_right
# 690 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 691 "data/maps/MyrriniIsland/scripts.pory"
	face_up
# 692 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 694 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_AdminsFlee:
# 696 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 696 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 696 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 696 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 696 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 696 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 696 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 696 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 696 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 697 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 699 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_KalliopeLeaves:
# 701 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 702 "data/maps/MyrriniIsland/scripts.pory"
	walk_left
# 703 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 703 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 703 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 703 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 703 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 703 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 703 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 704 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 706 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_EuterpeLeaves:
# 708 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 709 "data/maps/MyrriniIsland/scripts.pory"
	walk_left
# 709 "data/maps/MyrriniIsland/scripts.pory"
	walk_left
# 710 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 710 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 710 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 710 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 710 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 710 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 711 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 713 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_RaniaLeaves:
# 715 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 715 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 715 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 715 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 715 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 715 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 715 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 716 "data/maps/MyrriniIsland/scripts.pory"
	step_end

MyrriniIsland_EventScript_WomanGivesEggDoll::
# 721 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 722 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 723 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_WomanGivesEggDoll_Text_0
# 724 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_WomanGivesEggDoll_Text_1
# 725 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 726 "data/maps/MyrriniIsland/scripts.pory"
	goto_if_unset FLAG_GOT_EGG_DOLL, MyrriniIsland_EventScript_WomanGivesEggDoll_2
MyrriniIsland_EventScript_WomanGivesEggDoll_1:
# 736 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_WomanGivesEggDoll_2:
# 728 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_WomanGivesEggDoll_Text_0
# 729 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_WomanGivesEggDoll_Text_2
# 730 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 731 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 732 "data/maps/MyrriniIsland/scripts.pory"
	givedecoration DECOR_EGG_DOLL
# 733 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 734 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_GOT_EGG_DOLL
	goto MyrriniIsland_EventScript_WomanGivesEggDoll_1


MyrriniIsland_EventScript_DirectionSign_Text_0:
# 56 "data/maps/MyrriniIsland/scripts.pory"
	.string "Myrrini Island\n"
	.string "The Island of Festivals\p"
	.string "{LEFT_ARROW} Sea of Asteri - East$"

MyrriniIsland_Sign_GymSign_Text_0:
# 65 "data/maps/MyrriniIsland/scripts.pory"
	.string "Gym Leader: Euterpe\n"
	.string "Muse of Parties and Poisons$"

MyrriniIsland_EventScript_BlackBelt_Text_0:
# 75 "data/maps/MyrriniIsland/scripts.pory"
	.string "Black Belt$"

MyrriniIsland_EventScript_BlackBelt_Text_1:
# 76 "data/maps/MyrriniIsland/scripts.pory"
	.string "Sometimes, you have to kick back and\n"
	.string "relax. Myrrini Island is perfect for\l"
	.string "that!$"

MyrriniIsland_EventScript_PsychicM_Text_0:
# 86 "data/maps/MyrriniIsland/scripts.pory"
	.string "Psychic$"

MyrriniIsland_EventScript_PsychicM_Text_1:
# 87 "data/maps/MyrriniIsland/scripts.pory"
	.string "This island has lots of grape vines,\n"
	.string "purple fruited trees, and purple\l"
	.string "buildings. Purple is my favorite color,\l"
	.string "so I love it!$"

MyrriniIsland_EventScript_Girl_Text_0:
# 97 "data/maps/MyrriniIsland/scripts.pory"
	.string "Girl$"

MyrriniIsland_EventScript_Girl_Text_1:
# 98 "data/maps/MyrriniIsland/scripts.pory"
	.string "Migratory Pokémon stop on Myrrini\n"
	.string "Island while they fly, like that Swanna\l"
	.string "on the roof! They join up with the\l"
	.string "native Oricorio found here to dance and\l"
	.string "sing.$"

MyrriniIsland_EventScript_OldWoman_Text_0:
# 108 "data/maps/MyrriniIsland/scripts.pory"
	.string "Old Woman$"

MyrriniIsland_EventScript_OldWoman_Text_1:
# 109 "data/maps/MyrriniIsland/scripts.pory"
	.string "Ahh, this is the life... I knew moving to\n"
	.string "Myrrini Island was the right choice. The\l"
	.string "folks here are nice, and that old sailor\l"
	.string "over there is nice on the eyes... ehehe!$"

MyrriniIsland_EventScript_Beauty_Text_0:
# 119 "data/maps/MyrriniIsland/scripts.pory"
	.string "Beauty$"

MyrriniIsland_EventScript_Beauty_Text_1:
# 120 "data/maps/MyrriniIsland/scripts.pory"
	.string "The wildflowers growing on this island\n"
	.string "make it a dream! My Ribombee is having\l"
	.string "the time of her life gathering nectar\l"
	.string "and pollen from them all.\p"
	.string "Are you interested in buying any of the\n"
	.string "Nectar? Oricorio seem to love it!$"

MyrriniIsland_EventScript_Beauty_Text_2:
# 126 "data/maps/MyrriniIsland/scripts.pory"
	.string "Come again! I'll still be here with my\n"
	.string "sweet Ribombee.$"

MyrriniIsland_EventScript_Ribombee_Text_0:
# 144 "data/maps/MyrriniIsland/scripts.pory"
	.string "Ribombee$"

MyrriniIsland_EventScript_Ribombee_Text_1:
# 146 "data/maps/MyrriniIsland/scripts.pory"
	.string "Zee-ee-ee!$"

MyrriniIsland_EventScript_Camper_Text_0:
# 157 "data/maps/MyrriniIsland/scripts.pory"
	.string "Camper$"

MyrriniIsland_EventScript_Camper_Text_1:
# 163 "data/maps/MyrriniIsland/scripts.pory"
	.string "My allergies are all cleared up! Now I\n"
	.string "can fully enjoy Myrrini Island!$"

MyrriniIsland_EventScript_Camper_Text_2:
# 173 "data/maps/MyrriniIsland/scripts.pory"
	.string "The outdoors are great and all, but...\n"
	.string "ACHOO! SHNIFF! My allergies are acting\l"
	.string "up...\p"
	.string "You seem like you're doing alright, could\n"
	.string "you bring me a {COLOR GREEN}Full Heal{COLOR DARK_GRAY}? Maybe that'll\l"
	.string "help my allergies.$"

MyrriniIsland_EventScript_Camper_Text_3:
# 181 "data/maps/MyrriniIsland/scripts.pory"
	.string "ACHOO! H-hey... SHNIFFLE! Did you\n"
	.string "happen to bring a Full Heal...?$"

MyrriniIsland_EventScript_Camper_Text_4:
# 189 "data/maps/MyrriniIsland/scripts.pory"
	.string "Aww, but my nose is totally clogged.\p"
	.string "Bring me a {COLOR GREEN}Full Heal{COLOR DARK_GRAY} for my pollen\n"
	.string "allergy, please!$"

MyrriniIsland_EventScript_Camper_Text_5:
# 197 "data/maps/MyrriniIsland/scripts.pory"
	.string "Oh, you've got it! Let me just use this\n"
	.string "quick...$"

MyrriniIsland_EventScript_Camper_Text_6:
# 205 "data/maps/MyrriniIsland/scripts.pory"
	.string "Woah, what a difference that made! I\n"
	.string "can totally breathe now!\p"
	.string "Now I can have fun outside with the\n"
	.string "flowers. Thank you! Take this!$"

MyrriniIsland_EventScript_Girl2_Text_0:
# 224 "data/maps/MyrriniIsland/scripts.pory"
	.string "The crops and fruits grown on Myrrini\n"
	.string "Island are the best in Ilios! I think\l"
	.string "it's the sunlight and the warm weather.$"

MyrriniIsland_EventScript_Panpour_Text_0:
# 234 "data/maps/MyrriniIsland/scripts.pory"
	.string "Panpour$"

MyrriniIsland_EventScript_Panpour_Text_1:
# 236 "data/maps/MyrriniIsland/scripts.pory"
	.string "Hia hee ee!$"

MyrriniIsland_EventScript_BugCatcher_Text_0:
# 247 "data/maps/MyrriniIsland/scripts.pory"
	.string "Bug Catcher$"

MyrriniIsland_EventScript_BugCatcher_Text_1:
# 248 "data/maps/MyrriniIsland/scripts.pory"
	.string "These markets always attract a bunch\n"
	.string "of Pokémon. I'm looking for any\l"
	.string "Bug-type Pokémon that show up!$"

MyrriniIsland_EventScript_Woman_Text_0:
# 258 "data/maps/MyrriniIsland/scripts.pory"
	.string "Performer$"

MyrriniIsland_EventScript_Woman_Text_1:
# 259 "data/maps/MyrriniIsland/scripts.pory"
	.string "Can you smell it? The pollen in the air,\n"
	.string "the fruits, and the salt sea spray... I'm\l"
	.string "so glad I moved here!$"

MyrriniIsland_EventScript_Artist_Text_0:
# 269 "data/maps/MyrriniIsland/scripts.pory"
	.string "Artist$"

MyrriniIsland_EventScript_Artist_Text_1:
# 272 "data/maps/MyrriniIsland/scripts.pory"
	.string "Inflicting opposing Pokémon with\n"
	.string "status effects is a sure way to win\l"
	.string "Pokémon battles!$"

MyrriniIsland_EventScript_Artist_Text_2:
# 278 "data/maps/MyrriniIsland/scripts.pory"
	.string "The Gym Leader on Myrrini Island\n"
	.string "specializes in Poison-type moves, which\l"
	.string "can tear through teams by inflicting\l"
	.string "the Poison effect on your Pokémon. I\l"
	.string "created this TM based on those\l"
	.string "techniques!$"

MyrriniIsland_EventScript_Farmer1_Text_0:
# 292 "data/maps/MyrriniIsland/scripts.pory"
	.string "Farmer$"

MyrriniIsland_EventScript_Farmer1_Text_1:
# 293 "data/maps/MyrriniIsland/scripts.pory"
	.string "These fruit trees are blooming all\n"
	.string "across the island! We're gonna make a\l"
	.string "fortune selling all this!$"

MyrriniIsland_EventScript_Farmer2_Text_0:
# 304 "data/maps/MyrriniIsland/scripts.pory"
	.string "Lot'sa Pokémon come around to snack on\n"
	.string "the fruits growing here. We gather and\l"
	.string "sell the ones which native Pokémon\l"
	.string "don't get to first.$"

MyrriniIsland_EventScript_LittleGirl_Text_0:
# 314 "data/maps/MyrriniIsland/scripts.pory"
	.string "Little Girl$"

MyrriniIsland_EventScript_LittleGirl_Text_1:
# 315 "data/maps/MyrriniIsland/scripts.pory"
	.string "Sometimes, the nice people who run the\n"
	.string "Daycare let me play with the Pokémon!\l"
	.string "When I grow up, I wanna work there with\l"
	.string "them!$"

MyrriniIsland_EventScript_BattleGirl_Text_0:
# 325 "data/maps/MyrriniIsland/scripts.pory"
	.string "Battle Girl$"

MyrriniIsland_EventScript_BattleGirl_Text_1:
# 326 "data/maps/MyrriniIsland/scripts.pory"
	.string "Phew, I just got totally wiped out at\n"
	.string "the Battle Pavilion! It's just up the\l"
	.string "road to the north.\p"
	.string "In the Myrrini Battle Pavilion, Pokémon\n"
	.string "choose their own actions in battle. It's\l"
	.string "a whole other level of strategy!$"

MyrriniIsland_EventScript_HexManiac_Text_0:
# 335 "data/maps/MyrriniIsland/scripts.pory"
	.string "Crystal Girl$"

MyrriniIsland_EventScript_HexManiac_Text_1:
# 336 "data/maps/MyrriniIsland/scripts.pory"
	.string "Huff, huff... Come on, Zorua! We have to\n"
	.string "keep training!$"

MyrriniIsland_EventScript_HexManiac_Text_2:
# 349 "data/maps/MyrriniIsland/scripts.pory"
	.string "If you can do well in the Battle\n"
	.string "Pavilion, so can Zorua and I! We're\l"
	.string "gonna be the best!$"

MyrriniIsland_EventScript_HexManiac_Text_3:
# 359 "data/maps/MyrriniIsland/scripts.pory"
	.string "Oh! Sorry, we were in an intense training\n"
	.string "match. Zorua tried their best, but the\l"
	.string "Battle Pavilion proved to be too much\l"
	.string "for it.\p"
	.string "Honestly, I'm not convinced the Battle\n"
	.string "Pavilion is even possible! If you\l"
	.string "{COLOR GREEN}participate in the Myrrini Battle\l"
	.string "Pavilion{COLOR DARK_GRAY}, let me know what you think.$"

MyrriniIsland_EventScript_HexManiac_Text_4:
# 367 "data/maps/MyrriniIsland/scripts.pory"
	.string "Hey, you're back! Have you tried the\n"
	.string "Battle Pavilion on Myrrini Island yet?$"

MyrriniIsland_EventScript_HexManiac_Text_5:
# 374 "data/maps/MyrriniIsland/scripts.pory"
	.string "Oh, you actually did! And your Pokémon\n"
	.string "did alright?\p"
	.string "Okay, I'm convinced now! Zorua and I\n"
	.string "just need more training! Thanks for\l"
	.string "inspiring me. Take this!$"

MyrriniIsland_EventScript_HexManiac_Text_6:
# 386 "data/maps/MyrriniIsland/scripts.pory"
	.string "Not yet, huh? I know, it's super\n"
	.string "intimidating!\p"
	.string "Come back once you've tried the {COLOR GREEN}Myrrini\n"
	.string "Battle Pavilion{COLOR DARK_GRAY}. Anyway, back to\l"
	.string "training!$"

MyrriniIsland_EventScript_Zorua_Text_0:
# 398 "data/maps/MyrriniIsland/scripts.pory"
	.string "Zorua$"

MyrriniIsland_EventScript_Zorua_Text_1:
# 400 "data/maps/MyrriniIsland/scripts.pory"
	.string "Huaaa...$"

MyrriniIsland_EventScript_Scientist_Text_0:
# 411 "data/maps/MyrriniIsland/scripts.pory"
	.string "Scientist$"

MyrriniIsland_EventScript_Scientist_Text_1:
# 412 "data/maps/MyrriniIsland/scripts.pory"
	.string "I hear the Gym Leader on this island\n"
	.string "specializes in Poison-types and pulling\l"
	.string "tricks, like confusing opposing\l"
	.string "Pokémon. This is gonna be a hard battle\l"
	.string "to win, that's for sure...$"

MyrriniIsland_EventScript_Toucannon_Text_0:
# 422 "data/maps/MyrriniIsland/scripts.pory"
	.string "Toucannon$"

MyrriniIsland_EventScript_Toucannon_Text_1:
# 424 "data/maps/MyrriniIsland/scripts.pory"
	.string "Caww-aww!$"

MyrriniIsland_EventScript_Toucannon_Text_2:
# 428 "data/maps/MyrriniIsland/scripts.pory"
	.string "Woah, it's a Toucannon! It must have\n"
	.string "been flying by and stopped for fruit!$"

MyrriniIsland_EventScript_Kilowattrel_Text_0:
# 438 "data/maps/MyrriniIsland/scripts.pory"
	.string "Kilowattrel$"

MyrriniIsland_EventScript_Kilowattrel_Text_1:
# 440 "data/maps/MyrriniIsland/scripts.pory"
	.string "Eee! Kreee!$"

MyrriniIsland_EventScript_Kilowattrel_Text_2:
# 444 "data/maps/MyrriniIsland/scripts.pory"
	.string "Woah, it's a Kilowattrel! It must have\n"
	.string "been flying by and stopped for fruit!$"

MyrriniIsland_EventScript_Sailor_Text_0:
# 454 "data/maps/MyrriniIsland/scripts.pory"
	.string "Sailor$"

MyrriniIsland_EventScript_Sailor_Text_1:
# 455 "data/maps/MyrriniIsland/scripts.pory"
	.string "Ships from all over the Ilios Region\n"
	.string "stop here to trade. We're expecting a\l"
	.string "big shipment soon!$"

MyrriniIsland_EventScript_OldMan_Text_0:
# 465 "data/maps/MyrriniIsland/scripts.pory"
	.string "Old Man$"

MyrriniIsland_EventScript_OldMan_Text_1:
# 466 "data/maps/MyrriniIsland/scripts.pory"
	.string "Fwahaha, I love seeing Trainers come\n"
	.string "and go from the Battle Pavilion! I give\l"
	.string "them words of encouragement on the way\l"
	.string "in, and I console them if they lost when\l"
	.string "they leave.$"

MyrriniIsland_EventScript_BattlePavilionSign_Text_0:
# 475 "data/maps/MyrriniIsland/scripts.pory"
	.string "Myrrini Island Battle Pavilion\n"
	.string "Try a New Type of Battle!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_0:
# 487 "data/maps/MyrriniIsland/scripts.pory"
	.string "???$"

MyrriniIsland_EventScript_ChimeraEvent_Text_1:
# 488 "data/maps/MyrriniIsland/scripts.pory"
	.string "Hey, get away from me!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_2:
# 501 "data/maps/MyrriniIsland/scripts.pory"
	.string "Euterpe$"

MyrriniIsland_EventScript_ChimeraEvent_Text_3:
# 502 "data/maps/MyrriniIsland/scripts.pory"
	.string "{PLAYER}, did you hear that? Sounds\n"
	.string "like someone's in trouble. No\l"
	.string "disruptions to the party on my Island!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_4:
# 511 "data/maps/MyrriniIsland/scripts.pory"
	.string "Rania$"

MyrriniIsland_EventScript_ChimeraEvent_Text_5:
# 512 "data/maps/MyrriniIsland/scripts.pory"
	.string "{PLAYER}, thank the Fates! I'm being\n"
	.string "swarmed with Team Chimera Admins!\l"
	.string "Please, give me some help here!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_6:
# 517 "data/maps/MyrriniIsland/scripts.pory"
	.string "HOLD IT!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_7:
# 525 "data/maps/MyrriniIsland/scripts.pory"
	.string "Team Chimera? On MY island?! No no no,\n"
	.string "this is all wrong! I don't appreciate\l"
	.string "party crashers here!\p"
	.string "Will you leave on your own? Or do I need\n"
	.string "my Hypno to throw you into the sea?$"

MyrriniIsland_EventScript_ChimeraEvent_Text_8:
# 529 "data/maps/MyrriniIsland/scripts.pory"
	.string "Chimera Admin 1$"

MyrriniIsland_EventScript_ChimeraEvent_Text_9:
# 530 "data/maps/MyrriniIsland/scripts.pory"
	.string "Kekeke, you think you can take us on?\n"
	.string "You're fools, all of you! Get ready to-$"

MyrriniIsland_EventScript_ChimeraEvent_Text_10:
# 536 "data/maps/MyrriniIsland/scripts.pory"
	.string "Chimera Admin 2$"

MyrriniIsland_EventScript_ChimeraEvent_Text_11:
# 537 "data/maps/MyrriniIsland/scripts.pory"
	.string "Hey, the Boss is coming! Get out of the\n"
	.string "way!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_12:
# 550 "data/maps/MyrriniIsland/scripts.pory"
	.string "Chimera Boss$"

MyrriniIsland_EventScript_ChimeraEvent_Text_13:
# 551 "data/maps/MyrriniIsland/scripts.pory"
	.string "Hm. Quite the party we have going on\n"
	.string "here, eh? A great, big circus, and all I\l"
	.string "see are clowns.$"

MyrriniIsland_EventScript_ChimeraEvent_Text_14:
# 556 "data/maps/MyrriniIsland/scripts.pory"
	.string "You two. The tip specifically told us\n"
	.string "MARMARO Island, not MYRRINI Island.\l"
	.string "But when I got to the mines, imagine my\l"
	.string "surprise to see you weren't there.\p"
	.string "Grr...! {COLOR RED}You FOOLS! This artifact is KEY\n"
	.string "to reawakening the Ancient Pokémon,\l"
	.string "but here you are on the WRONG ISLAND!{COLOR DARK_GRAY}$"

MyrriniIsland_EventScript_ChimeraEvent_Text_15:
# 558 "data/maps/MyrriniIsland/scripts.pory"
	.string "Chimera Admins$"

MyrriniIsland_EventScript_ChimeraEvent_Text_16:
# 559 "data/maps/MyrriniIsland/scripts.pory"
	.string "W-we-we're sorry, {COLOR RED}Miss Kalliope{COLOR DARK_GRAY}! We'll\n"
	.string "get to the {COLOR GREEN}Marmaro Mines{COLOR DARK_GRAY} right away!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_17:
# 570 "data/maps/MyrriniIsland/scripts.pory"
	.string "Kalliope$"

MyrriniIsland_EventScript_ChimeraEvent_Text_18:
# 571 "data/maps/MyrriniIsland/scripts.pory"
	.string "Sigh... I apologize for losing my temper.\n"
	.string "Their repeated failures to fight you\l"
	.string "have brought shame to Team Chimera. In\l"
	.string "fact, if you fought again now, you'd\l"
	.string "likely win.\p"
	.string "My name is Kalliope. I am the {COLOR GREEN}leader of\n"
	.string "Team Chimera{COLOR DARK_GRAY}. Just listen to what I\l"
	.string "have to say, then I will leave Myrrini\l"
	.string "Island in peace.\p"
	.string "I have always focused on the financial\n"
	.string "side of the world. The value of raw\l"
	.string "materials, services, even Pokémon...\l"
	.string "everything can be bought and sold for\l"
	.string "the right price.\p"
	.string "{COLOR GREEN}Lazarus Taxa{COLOR DARK_GRAY}, the rare Pokémon once\n"
	.string "thought extinct, are the ultimate\l"
	.string "financial opportunity. Can't you see?\l"
	.string "If we simply rounded them all up and\l"
	.string "sold them to the highest bidder, we\l"
	.string "could have more money than all other\l"
	.string "Regions combined! Furthermore, some\l"
	.string "ancient Pokémon are on {COLOR GREEN}another level of\l"
	.string "power{COLOR DARK_GRAY}, able to {COLOR GREEN}control the Earth, the\l"
	.string "Sea, and the Sky{COLOR DARK_GRAY}. We could drill and mine\l"
	.string "for fuel while crushing all opposition.\l"
	.string "This is my ultimate dream.$"

MyrriniIsland_EventScript_ChimeraEvent_Text_19:
# 577 "data/maps/MyrriniIsland/scripts.pory"
	.string "But why?! Trafficking Pokémon and\n"
	.string "using the strongest to destroy the\l"
	.string "environment... how could that POSSIBLY\l"
	.string "be a good thing?$"

MyrriniIsland_EventScript_ChimeraEvent_Text_20:
# 582 "data/maps/MyrriniIsland/scripts.pory"
	.string "Money makes the world go 'round, you\n"
	.string "naive child. When I look at a forest\l"
	.string "filled with wildlife, all I see are dollar\l"
	.string "signs. The Pokémon, the lumber, and the\l"
	.string "fossil fuels in the ground below - all\l"
	.string "can be sold, so they must all be mine.$"

MyrriniIsland_EventScript_ChimeraEvent_Text_21:
# 587 "data/maps/MyrriniIsland/scripts.pory"
	.string "{PLAYER}, right? My Admins, as simple\n"
	.string "as they can be, have told me about you.\l"
	.string "You've given us more trouble than just\l"
	.string "about anyone else, but your defeat will\l"
	.string "come.\p"
	.string "Our plans are nearing fruition. Soon, we\n"
	.string "will {COLOR GREEN}awaken ancient Pokémon to shake\l"
	.string "the Earth{COLOR DARK_GRAY} and claim what is ours! I can\l"
	.string "assure you, you won't want to miss the\l"
	.string "show!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_22:
# 598 "data/maps/MyrriniIsland/scripts.pory"
	.string "Kalliope... I... I can't believe it. She was\n"
	.string "the {COLOR GREEN}8th Gym Leader{COLOR DARK_GRAY}, living in a southern\l"
	.string "village called Areios Town. Team Chimera\l"
	.string "raided it and made it their Hideout a\l"
	.string "few months ago, and Kalliope went\l"
	.string "missing. All of us Gym Leaders thought\l"
	.string "she was captured, but... She's the\l"
	.string "{COLOR RED}Leader of Team Chimera{COLOR DARK_GRAY}?!\p"
	.string "In any case, she mentioned something\n"
	.string "about the {COLOR GREEN}Marmaro Island Mines{COLOR DARK_GRAY} to the\l"
	.string "Chimera Admins. If you're on the tail of\l"
	.string "Team Chimera, I'd go there. For now, I'll\l"
	.string "stay here and keep Myrrini Island safe.$"

MyrriniIsland_EventScript_ChimeraEvent_Text_23:
# 615 "data/maps/MyrriniIsland/scripts.pory"
	.string "Ugh, Team Chimera is going way too far!\n"
	.string "I knew they were collecting Pokémon\l"
	.string "and looking for ways to gain power, but\l"
	.string "trafficking Pokémon and using them for\l"
	.string "profit is just evil!\p"
	.string "I know I acted all tough, but my\n"
	.string "Pokémon were beaten pretty badly by\l"
	.string "that first Admin. I think I'll take them\l"
	.string "to {COLOR GREEN}Péntepetal City{COLOR DARK_GRAY} for a rest. If you\l"
	.string "want to join later, just {COLOR GREEN}ask Piraeus to\l"
	.string "bring you{COLOR DARK_GRAY}. See you soon!$"

MyrriniIsland_EventScript_WomanGivesEggDoll_Text_0:
# 723 "data/maps/MyrriniIsland/scripts.pory"
	.string "Woman$"

MyrriniIsland_EventScript_WomanGivesEggDoll_Text_1:
# 724 "data/maps/MyrriniIsland/scripts.pory"
	.string "People sometimes leave the Eggs their\n"
	.string "Pokémon lay here. I take those Eggs and\l"
	.string "care for them... I don't know how anyone\l"
	.string "could be so heartless!$"

MyrriniIsland_EventScript_WomanGivesEggDoll_Text_2:
# 729 "data/maps/MyrriniIsland/scripts.pory"
	.string "While I'm here, I like to crochet\n"
	.string "Pokémon dolls. Here's one I made to look\l"
	.string "like an Egg!$"

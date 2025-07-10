MyrriniIsland_MapScripts::
# 2 "data/maps/MyrriniIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 29 "data/maps/MyrriniIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MyrriniIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_VISITED_MYRRINI_ISLAND
# 5 "data/maps/MyrriniIsland/scripts.pory"
	goto_if_set FLAG_HIDE_CHIMERA_EVENT_MYRRINI_ISLAND, MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 11 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 12 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 13 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 14 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 15 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 16 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 17 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 18 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 19 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 20 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 21 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 22 "data/maps/MyrriniIsland/scripts.pory"
	setobjectaswildencounter 46, ENCOUNTER_LAND
# 23 "data/maps/MyrriniIsland/scripts.pory"
	setobjectaswildencounter 47, ENCOUNTER_LAND
# 24 "data/maps/MyrriniIsland/scripts.pory"
	setobjectaswildencounter 48, ENCOUNTER_LAND
# 26 "data/maps/MyrriniIsland/scripts.pory"
	call Route117_OnTransition
	return

MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/MyrriniIsland/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MyrriniIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 30 "data/maps/MyrriniIsland/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, MyrriniIsland_EventScript_TryChimeraEvent
	.2byte 0


MyrriniIsland_EventScript_TryChimeraEvent::
# 36 "data/maps/MyrriniIsland/scripts.pory"
	setvar VAR_TEMP_1, 1
# 37 "data/maps/MyrriniIsland/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MyrriniIsland_EventScript_TryChimeraEvent_3
MyrriniIsland_EventScript_TryChimeraEvent_1:
# 41 "data/maps/MyrriniIsland/scripts.pory"
	releaseall
	end

MyrriniIsland_EventScript_TryChimeraEvent_2:
# 39 "data/maps/MyrriniIsland/scripts.pory"
	goto MyrriniIsland_EventScript_ChimeraEvent
	goto MyrriniIsland_EventScript_TryChimeraEvent_1

MyrriniIsland_EventScript_TryChimeraEvent_3:
# 37 "data/maps/MyrriniIsland/scripts.pory"
	goto_if_unset FLAG_HIDE_CHIMERA_EVENT_MYRRINI_ISLAND, MyrriniIsland_EventScript_TryChimeraEvent_2
	goto MyrriniIsland_EventScript_TryChimeraEvent_1


MyrriniIsland_EventScript_DirectionSign::
# 47 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 48 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_DirectionSign_Text_0
# 49 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 50 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_Sign_GymSign::
# 56 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 57 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_Sign_GymSign_Text_0
# 58 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 59 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_BlackBelt::
# 65 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 66 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 67 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_BlackBelt_Text_0
# 68 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_BlackBelt_Text_1
# 69 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 70 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_PsychicM::
# 76 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 77 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 78 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_PsychicM_Text_0
# 79 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_PsychicM_Text_1
# 80 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 81 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Girl::
# 87 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 88 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 89 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Girl_Text_0
# 90 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Girl_Text_1
# 91 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 92 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_OldWoman::
# 98 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 99 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 100 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_OldWoman_Text_0
# 101 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_OldWoman_Text_1
# 102 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 103 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Beauty::
# 109 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 110 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 111 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Beauty_Text_0
# 112 "data/maps/MyrriniIsland/scripts.pory"
	message MyrriniIsland_EventScript_Beauty_Text_1
# 113 "data/maps/MyrriniIsland/scripts.pory"
	waitmessage
# 114 "data/maps/MyrriniIsland/scripts.pory"
	pokemart NectarMart
# 115 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 116 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 117 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Beauty_Text_0
# 118 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Beauty_Text_2
# 119 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 120 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


	.align 2
# 124 "data/maps/MyrriniIsland/scripts.pory"
NectarMart:
# 126 "data/maps/MyrriniIsland/scripts.pory"
	.2byte ITEM_RED_NECTAR
# 127 "data/maps/MyrriniIsland/scripts.pory"
	.2byte ITEM_YELLOW_NECTAR
# 128 "data/maps/MyrriniIsland/scripts.pory"
	.2byte ITEM_PINK_NECTAR
# 129 "data/maps/MyrriniIsland/scripts.pory"
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE

MyrriniIsland_EventScript_Ribombee::
# 134 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 135 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 136 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Ribombee_Text_0
# 137 "data/maps/MyrriniIsland/scripts.pory"
	playmoncry SPECIES_RIBOMBEE, CRY_MODE_NORMAL
# 138 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Ribombee_Text_1
# 139 "data/maps/MyrriniIsland/scripts.pory"
	waitmoncry
# 140 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 141 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Camper::
# 147 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 148 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 149 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Camper_Text_0
# 152 "data/maps/MyrriniIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_MYRRINI_ALLERGIES
# 153 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MyrriniIsland_EventScript_Camper_2
# 162 "data/maps/MyrriniIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_MYRRINI_ALLERGIES
# 163 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MyrriniIsland_EventScript_Camper_5
# 173 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_3
# 174 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 176 "data/maps/MyrriniIsland/scripts.pory"
	checkitem ITEM_FULL_HEAL
# 177 "data/maps/MyrriniIsland/scripts.pory"
	delay 30
# 178 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MyrriniIsland_EventScript_Camper_8
# 188 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Camper_Text_0
# 189 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_5
# 190 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 191 "data/maps/MyrriniIsland/scripts.pory"
	removeitem ITEM_FULL_HEAL
# 192 "data/maps/MyrriniIsland/scripts.pory"
	delay 30
# 193 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 23, Common_Movement_Heart
# 194 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 195 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 196 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Camper_Text_0
# 197 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_6
# 198 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 199 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 200 "data/maps/MyrriniIsland/scripts.pory"
	giveitem ITEM_SILK_SCARF
# 201 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 203 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 204 "data/maps/MyrriniIsland/scripts.pory"
	completequest QUEST_MYRRINI_ALLERGIES
MyrriniIsland_EventScript_Camper_4:
# 207 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_Camper_2:
# 155 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_1
# 156 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 157 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_Camper_5:
# 165 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_2
# 166 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 168 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 169 "data/maps/MyrriniIsland/scripts.pory"
	startquest QUEST_MYRRINI_ALLERGIES
	goto MyrriniIsland_EventScript_Camper_4

MyrriniIsland_EventScript_Camper_8:
# 180 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Camper_Text_0
# 181 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_4
# 182 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 183 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Girl2::
# 213 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 214 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 215 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Girl_Text_0
# 216 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Girl2_Text_0
# 217 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 218 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Panpour::
# 224 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 225 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 226 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Panpour_Text_0
# 227 "data/maps/MyrriniIsland/scripts.pory"
	playmoncry SPECIES_PANPOUR, CRY_MODE_NORMAL
# 228 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Panpour_Text_1
# 229 "data/maps/MyrriniIsland/scripts.pory"
	waitmoncry
# 230 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 231 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_BugCatcher::
# 237 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 238 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 239 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_BugCatcher_Text_0
# 240 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_BugCatcher_Text_1
# 241 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 242 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Woman::
# 248 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 249 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 250 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Woman_Text_0
# 251 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Woman_Text_1
# 252 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 253 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Artist::
# 259 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 260 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 261 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Artist_Text_0
# 262 "data/maps/MyrriniIsland/scripts.pory"
	goto_if_set FLAG_GOT_TM_POISON_FANG, MyrriniIsland_EventScript_Artist_2
# 269 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_GOT_TM_POISON_FANG
# 270 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Artist_Text_2
# 271 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 272 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 273 "data/maps/MyrriniIsland/scripts.pory"
	giveitem ITEM_TM_POISON_FANG
# 274 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
MyrriniIsland_EventScript_Artist_1:
# 276 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_Artist_2:
# 264 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Artist_Text_1
# 265 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
	goto MyrriniIsland_EventScript_Artist_1


MyrriniIsland_EventScript_Farmer1::
# 282 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 283 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 284 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Farmer1_Text_0
# 285 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Farmer1_Text_1
# 286 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 287 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Farmer2::
# 293 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 294 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 295 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Farmer1_Text_0
# 296 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Farmer2_Text_0
# 297 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 298 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_LittleGirl::
# 304 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 305 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 306 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_LittleGirl_Text_0
# 307 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_LittleGirl_Text_1
# 308 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 309 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_BattleGirl::
# 315 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 316 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 317 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_BattleGirl_Text_0
# 318 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_BattleGirl_Text_1
# 319 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 320 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_HexManiac::
# 326 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 327 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_HexManiac_Text_0
# 328 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_1
# 329 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 330 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 331 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 36, Common_Movement_ExclamationMark
# 332 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 333 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 334 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 335 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_HexManiac_Text_0
# 338 "data/maps/MyrriniIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_TRY_MYRRINI_BATTLE_PAVILION
# 339 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MyrriniIsland_EventScript_HexManiac_2
# 348 "data/maps/MyrriniIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_TRY_MYRRINI_BATTLE_PAVILION
# 349 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MyrriniIsland_EventScript_HexManiac_5
# 359 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_4
# 360 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 362 "data/maps/MyrriniIsland/scripts.pory"
	delay 30
# 363 "data/maps/MyrriniIsland/scripts.pory"
	goto_if_set FLAG_PLAYED_IN_MYRRINI_BATTLE_PAVILION, MyrriniIsland_EventScript_HexManiac_8
# 377 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_HexManiac_Text_0
# 378 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_6
# 379 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
MyrriniIsland_EventScript_HexManiac_4:
# 382 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_HexManiac_2:
# 341 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_2
# 342 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 343 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_HexManiac_5:
# 351 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_3
# 352 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 354 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 355 "data/maps/MyrriniIsland/scripts.pory"
	startquest QUEST_TRY_MYRRINI_BATTLE_PAVILION
	goto MyrriniIsland_EventScript_HexManiac_4

MyrriniIsland_EventScript_HexManiac_8:
# 365 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_HexManiac_Text_0
# 366 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_5
# 367 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 368 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 369 "data/maps/MyrriniIsland/scripts.pory"
	giveitem ITEM_REAPER_CLOTH
# 370 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 372 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 373 "data/maps/MyrriniIsland/scripts.pory"
	completequest QUEST_TRY_MYRRINI_BATTLE_PAVILION
	goto MyrriniIsland_EventScript_HexManiac_4


MyrriniIsland_EventScript_Zorua::
# 388 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 389 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 390 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Zorua_Text_0
# 391 "data/maps/MyrriniIsland/scripts.pory"
	playmoncry SPECIES_ZORUA_HISUIAN, CRY_MODE_NORMAL
# 392 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Zorua_Text_1
# 393 "data/maps/MyrriniIsland/scripts.pory"
	waitmoncry
# 394 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 395 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Scientist::
# 401 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 402 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 403 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Scientist_Text_0
# 404 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Scientist_Text_1
# 405 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 406 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Toucannon::
# 412 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 413 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 414 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Toucannon_Text_0
# 415 "data/maps/MyrriniIsland/scripts.pory"
	playmoncry SPECIES_TOUCANNON, CRY_MODE_NORMAL
# 416 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Toucannon_Text_1
# 417 "data/maps/MyrriniIsland/scripts.pory"
	waitmoncry
# 418 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 419 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 420 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Toucannon_Text_2
# 421 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 422 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Kilowattrel::
# 428 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 429 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 430 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Kilowattrel_Text_0
# 431 "data/maps/MyrriniIsland/scripts.pory"
	playmoncry SPECIES_KILOWATTREL, CRY_MODE_NORMAL
# 432 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Kilowattrel_Text_1
# 433 "data/maps/MyrriniIsland/scripts.pory"
	waitmoncry
# 434 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 435 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 436 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Kilowattrel_Text_2
# 437 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 438 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Sailor::
# 444 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 445 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 446 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Sailor_Text_0
# 447 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Sailor_Text_1
# 448 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 449 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_OldMan::
# 455 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 456 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 457 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_OldMan_Text_0
# 458 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_OldMan_Text_1
# 459 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 460 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_BattlePavilionSign::
# 466 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 467 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_BattlePavilionSign_Text_0
# 468 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 469 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_ChimeraEvent::
# 475 "data/maps/MyrriniIsland/scripts.pory"
	setvar VAR_TEMP_1, 1
# 477 "data/maps/MyrriniIsland/scripts.pory"
	lockall
# 478 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 479 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_0
# 480 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_1
# 481 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 482 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 483 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 484 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 485 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 486 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 487 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 488 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 489 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_EUTERPE_DURING_CHIMERA_EVENT_MYRRINI_ISLAND
# 490 "data/maps/MyrriniIsland/scripts.pory"
	addobject 55
# 491 "data/maps/MyrriniIsland/scripts.pory"
	showobjectat 55, MAP_MYRRINI_ISLAND
# 492 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, Common_Movement_WalkDown
# 493 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_2
# 494 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_3
# 495 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 497 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MyrriniIsland_Movement_PlayerWalkDownToEvent
# 498 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, MyrriniIsland_Movement_EuterpeApproach
# 499 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 500 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 501 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 52, Common_Movement_FaceUp
# 502 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 503 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_4
# 504 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_5
# 505 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 506 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 508 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_2
# 509 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_6
# 510 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 511 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 512 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, MyrriniIsland_Movement_PlayerAndEuterpeReposition
# 513 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 514 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 53, Common_Movement_FaceUp
# 515 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 516 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_2
# 517 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_7
# 518 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 519 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 53, Common_Movement_JumpInPlaceUp
# 520 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 521 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_8
# 522 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_9
# 523 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 524 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 54, MyrriniIsland_Movement_AdminNoticesKalliope
# 525 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 526 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 53, Common_Movement_ExclamationMark
# 527 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 528 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_10
# 529 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_11
# 530 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 531 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 53, MyrriniIsland_Movement_AdminsMoveForBoss
# 532 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 54, MyrriniIsland_Movement_AdminsMoveForBoss
# 533 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 535 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MyrriniIsland_Movement_PlayerAndEuterpeReposition
# 536 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, MyrriniIsland_Movement_PlayerAndEuterpeReposition
# 537 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 52, Common_Movement_FaceDown
# 538 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 540 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, MyrriniIsland_Movement_KalliopeApproaches
# 541 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 542 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_12
# 543 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_13
# 544 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 545 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, Common_Movement_WalkRight
# 546 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 547 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_12
# 548 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_14
# 549 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 550 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_15
# 551 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_16
# 552 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 553 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 53, MyrriniIsland_Movement_AdminsFlee
# 554 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 54, MyrriniIsland_Movement_AdminsFlee
# 555 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 556 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 557 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, Common_Movement_WalkLeft
# 558 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 559 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, Common_Movement_FaceUp
# 560 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 562 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_17
# 563 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_18
# 564 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 565 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 566 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 52, Common_Movement_JumpInPlaceDown
# 567 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 568 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_4
# 569 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_19
# 570 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 571 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, Common_Movement_FaceLeft
# 572 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 573 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_17
# 574 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_20
# 575 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 576 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, Common_Movement_FaceUp
# 577 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 578 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_17
# 579 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_21
# 580 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 581 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, MyrriniIsland_Movement_KalliopeLeaves
# 582 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 583 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 585 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 52, Common_Movement_FaceRight
# 586 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 587 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, Common_Movement_FaceLeft
# 588 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 589 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_2
# 590 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_22
# 591 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 592 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, MyrriniIsland_Movement_EuterpeLeaves
# 593 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 599 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 600 "data/maps/MyrriniIsland/scripts.pory"
	startquest QUEST_FREE_MARMARO_MINES
# 601 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 602 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 604 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 605 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 606 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_4
# 607 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_23
# 608 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 609 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 52, MyrriniIsland_Movement_RaniaLeaves
# 610 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 612 "data/maps/MyrriniIsland/scripts.pory"
	removeobject 52
# 613 "data/maps/MyrriniIsland/scripts.pory"
	removeobject 53
# 614 "data/maps/MyrriniIsland/scripts.pory"
	removeobject 54
# 615 "data/maps/MyrriniIsland/scripts.pory"
	removeobject 55
# 616 "data/maps/MyrriniIsland/scripts.pory"
	removeobject 56
# 617 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_HIDE_CHIMERA_EVENT_MYRRINI_ISLAND
# 618 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_HIDE_EUTERPE_DURING_CHIMERA_EVENT_MYRRINI_ISLAND
# 619 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_HIDE_GRUNT_BLOCKING_MARMARO_MINES
# 624 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_HIDE_RANIA_ACRISIA_UNIVERSITY
# 625 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 626 "data/maps/MyrriniIsland/scripts.pory"
	startquest QUEST_VISIT_RANIA_PENTEPETAL
# 627 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 628 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 630 "data/maps/MyrriniIsland/scripts.pory"
	releaseall
	end


# 634 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_PlayerWalkDownToEvent:
# 636 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 636 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 636 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 636 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 637 "data/maps/MyrriniIsland/scripts.pory"
	emote_exclamation_mark
# 638 "data/maps/MyrriniIsland/scripts.pory"
	delay_16
# 639 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 639 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 639 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 639 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 639 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 639 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 640 "data/maps/MyrriniIsland/scripts.pory"
	jump_in_place_down
# 640 "data/maps/MyrriniIsland/scripts.pory"
	jump_in_place_down
# 641 "data/maps/MyrriniIsland/scripts.pory"
	face_down
# 642 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 644 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_EuterpeApproach:
# 646 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 646 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 646 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 646 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
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
	face_down
# 650 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 652 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_AdminNoticesKalliope:
# 654 "data/maps/MyrriniIsland/scripts.pory"
	face_down
# 655 "data/maps/MyrriniIsland/scripts.pory"
	delay_16
# 656 "data/maps/MyrriniIsland/scripts.pory"
	emote_exclamation_mark
# 657 "data/maps/MyrriniIsland/scripts.pory"
	delay_16
# 658 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 659 "data/maps/MyrriniIsland/scripts.pory"
	face_up
# 660 "data/maps/MyrriniIsland/scripts.pory"
	jump_in_place_up
# 661 "data/maps/MyrriniIsland/scripts.pory"
	face_up
# 662 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 664 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_AdminsMoveForBoss:
# 666 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 666 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 667 "data/maps/MyrriniIsland/scripts.pory"
	face_left
# 668 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 670 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_PlayerAndEuterpeReposition:
# 672 "data/maps/MyrriniIsland/scripts.pory"
	walk_right
# 673 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 674 "data/maps/MyrriniIsland/scripts.pory"
	face_down
# 675 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 677 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_KalliopeApproaches:
# 679 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 679 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 679 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 679 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 679 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 680 "data/maps/MyrriniIsland/scripts.pory"
	walk_right
# 681 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 682 "data/maps/MyrriniIsland/scripts.pory"
	face_up
# 683 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 685 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_AdminsFlee:
# 687 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 687 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 687 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 687 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 687 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 687 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 687 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 687 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 687 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 688 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 690 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_KalliopeLeaves:
# 692 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 693 "data/maps/MyrriniIsland/scripts.pory"
	walk_left
# 694 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 694 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 694 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 694 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 694 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 694 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 694 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 695 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 697 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_EuterpeLeaves:
# 699 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 700 "data/maps/MyrriniIsland/scripts.pory"
	walk_left
# 700 "data/maps/MyrriniIsland/scripts.pory"
	walk_left
# 701 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 701 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 701 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 701 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 701 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 701 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 702 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 704 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_RaniaLeaves:
# 706 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 706 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 706 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 706 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 706 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 706 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 706 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 707 "data/maps/MyrriniIsland/scripts.pory"
	step_end

MyrriniIsland_EventScript_DirectionSign_Text_0:
# 48 "data/maps/MyrriniIsland/scripts.pory"
	.string "Myrrini Island\n"
	.string "The Island of Festivals\p"
	.string "{LEFT_ARROW} Sea of Asteri - East$"

MyrriniIsland_Sign_GymSign_Text_0:
# 57 "data/maps/MyrriniIsland/scripts.pory"
	.string "Gym Leader: Euterpe\n"
	.string "Muse of Parties and Poisons$"

MyrriniIsland_EventScript_BlackBelt_Text_0:
# 67 "data/maps/MyrriniIsland/scripts.pory"
	.string "Black Belt$"

MyrriniIsland_EventScript_BlackBelt_Text_1:
# 68 "data/maps/MyrriniIsland/scripts.pory"
	.string "Sometimes, you have to kick back and relax. Myrrini Island is perfect for that!$"

MyrriniIsland_EventScript_PsychicM_Text_0:
# 78 "data/maps/MyrriniIsland/scripts.pory"
	.string "Psychic$"

MyrriniIsland_EventScript_PsychicM_Text_1:
# 79 "data/maps/MyrriniIsland/scripts.pory"
	.string "This island has lots of grape vines,\n"
	.string "purple fruited trees, and purple\l"
	.string "buildings. Purple is my favorite color,\l"
	.string "so I love it!$"

MyrriniIsland_EventScript_Girl_Text_0:
# 89 "data/maps/MyrriniIsland/scripts.pory"
	.string "Girl$"

MyrriniIsland_EventScript_Girl_Text_1:
# 90 "data/maps/MyrriniIsland/scripts.pory"
	.string "Migratory Pokémon stop on Myrrini\n"
	.string "Island while they fly, like that Swanna\l"
	.string "on the roof! They join up with the\l"
	.string "native Oricorio found here to dance and\l"
	.string "sing.$"

MyrriniIsland_EventScript_OldWoman_Text_0:
# 100 "data/maps/MyrriniIsland/scripts.pory"
	.string "Old Woman$"

MyrriniIsland_EventScript_OldWoman_Text_1:
# 101 "data/maps/MyrriniIsland/scripts.pory"
	.string "Ahh, this is the life... I knew moving to\n"
	.string "Myrrini Island was the right choice. The\l"
	.string "folks here are nice, and that old sailor\l"
	.string "over there is nice on the eyes... ehehe!$"

MyrriniIsland_EventScript_Beauty_Text_0:
# 111 "data/maps/MyrriniIsland/scripts.pory"
	.string "Beauty$"

MyrriniIsland_EventScript_Beauty_Text_1:
# 112 "data/maps/MyrriniIsland/scripts.pory"
	.string "The wildflowers growing on this island\n"
	.string "make it a dream! My Ribombee is having\l"
	.string "the time of her life gathering nectar\l"
	.string "and pollen from them all.\p"
	.string "Are you interested in buying any of the\n"
	.string "Nectar? Oricorio seem to love it!$"

MyrriniIsland_EventScript_Beauty_Text_2:
# 118 "data/maps/MyrriniIsland/scripts.pory"
	.string "Come again! I'll still be here with my\n"
	.string "sweet Ribombee.$"

MyrriniIsland_EventScript_Ribombee_Text_0:
# 136 "data/maps/MyrriniIsland/scripts.pory"
	.string "Ribombee$"

MyrriniIsland_EventScript_Ribombee_Text_1:
# 138 "data/maps/MyrriniIsland/scripts.pory"
	.string "Zee-ee-ee!$"

MyrriniIsland_EventScript_Camper_Text_0:
# 149 "data/maps/MyrriniIsland/scripts.pory"
	.string "Camper$"

MyrriniIsland_EventScript_Camper_Text_1:
# 155 "data/maps/MyrriniIsland/scripts.pory"
	.string "My allergies are all cleared up! Now I\n"
	.string "can fully enjoy Myrrini Island!$"

MyrriniIsland_EventScript_Camper_Text_2:
# 165 "data/maps/MyrriniIsland/scripts.pory"
	.string "The outdoors are great and all, but...\n"
	.string "ACHOO! SHNIFF! My allergies are acting\l"
	.string "up...\p"
	.string "You seem like you're doing alright, could\n"
	.string "you bring me a {COLOR GREEN}Full Heal{COLOR DARK_GRAY}? Maybe that'll\l"
	.string "help my allergies.$"

MyrriniIsland_EventScript_Camper_Text_3:
# 173 "data/maps/MyrriniIsland/scripts.pory"
	.string "ACHOO! H-hey... SHNIFFLE! Did you\n"
	.string "happen to bring a Full Heal...?$"

MyrriniIsland_EventScript_Camper_Text_4:
# 181 "data/maps/MyrriniIsland/scripts.pory"
	.string "Aww, but my nose is totally clogged.\p"
	.string "Bring me a {COLOR GREEN}Full Heal{COLOR DARK_GRAY} for my pollen\n"
	.string "allergy, please!$"

MyrriniIsland_EventScript_Camper_Text_5:
# 189 "data/maps/MyrriniIsland/scripts.pory"
	.string "Oh, you've got it! Let me just use this\n"
	.string "quick...$"

MyrriniIsland_EventScript_Camper_Text_6:
# 197 "data/maps/MyrriniIsland/scripts.pory"
	.string "Woah, what a difference that made! I\n"
	.string "can totally breathe now!\p"
	.string "Now I can have fun outside with the\n"
	.string "flowers. Thank you! Take this!$"

MyrriniIsland_EventScript_Girl2_Text_0:
# 216 "data/maps/MyrriniIsland/scripts.pory"
	.string "The crops and fruits grown on Myrrini\n"
	.string "Island are the best in Ilios! I think\l"
	.string "it's the sunlight and the warm weather.$"

MyrriniIsland_EventScript_Panpour_Text_0:
# 226 "data/maps/MyrriniIsland/scripts.pory"
	.string "Panpour$"

MyrriniIsland_EventScript_Panpour_Text_1:
# 228 "data/maps/MyrriniIsland/scripts.pory"
	.string "Hia hee ee!$"

MyrriniIsland_EventScript_BugCatcher_Text_0:
# 239 "data/maps/MyrriniIsland/scripts.pory"
	.string "Bug Catcher$"

MyrriniIsland_EventScript_BugCatcher_Text_1:
# 240 "data/maps/MyrriniIsland/scripts.pory"
	.string "These markets always attract a bunch\n"
	.string "of Pokémon. I'm looking for any\l"
	.string "Bug-type Pokémon that show up!$"

MyrriniIsland_EventScript_Woman_Text_0:
# 250 "data/maps/MyrriniIsland/scripts.pory"
	.string "Performer$"

MyrriniIsland_EventScript_Woman_Text_1:
# 251 "data/maps/MyrriniIsland/scripts.pory"
	.string "Can you smell it? The pollen in the air,\n"
	.string "the fruits, and the salt sea spray... I'm\l"
	.string "so glad I moved here!$"

MyrriniIsland_EventScript_Artist_Text_0:
# 261 "data/maps/MyrriniIsland/scripts.pory"
	.string "Artist$"

MyrriniIsland_EventScript_Artist_Text_1:
# 264 "data/maps/MyrriniIsland/scripts.pory"
	.string "Inflicting opposing Pokémon with\n"
	.string "status effects is a sure way to win\l"
	.string "Pokémon battles!$"

MyrriniIsland_EventScript_Artist_Text_2:
# 270 "data/maps/MyrriniIsland/scripts.pory"
	.string "The Gym Leader on Myrrini Island\n"
	.string "specializes in Poison-type moves, which\l"
	.string "can tear through teams by inflicting\l"
	.string "the Poison effect on your Pokémon. I\l"
	.string "created this TM based on those\l"
	.string "techniques!$"

MyrriniIsland_EventScript_Farmer1_Text_0:
# 284 "data/maps/MyrriniIsland/scripts.pory"
	.string "Farmer$"

MyrriniIsland_EventScript_Farmer1_Text_1:
# 285 "data/maps/MyrriniIsland/scripts.pory"
	.string "These fruit trees are blooming all\n"
	.string "across the island! We're gonna make a\l"
	.string "fortune selling all this!$"

MyrriniIsland_EventScript_Farmer2_Text_0:
# 296 "data/maps/MyrriniIsland/scripts.pory"
	.string "Lot'sa Pokémon come around to snack on\n"
	.string "the fruits growing here. We gather and\l"
	.string "sell the ones which native Pokémon\l"
	.string "don't get to first.$"

MyrriniIsland_EventScript_LittleGirl_Text_0:
# 306 "data/maps/MyrriniIsland/scripts.pory"
	.string "Little Girl$"

MyrriniIsland_EventScript_LittleGirl_Text_1:
# 307 "data/maps/MyrriniIsland/scripts.pory"
	.string "Sometimes, the nice people who run the\n"
	.string "Daycare let me play with the Pokémon!\l"
	.string "When I grow up, I wanna work there with\l"
	.string "them!$"

MyrriniIsland_EventScript_BattleGirl_Text_0:
# 317 "data/maps/MyrriniIsland/scripts.pory"
	.string "Battle Girl$"

MyrriniIsland_EventScript_BattleGirl_Text_1:
# 318 "data/maps/MyrriniIsland/scripts.pory"
	.string "Phew, I just got totally wiped out at\n"
	.string "the Battle Pavilion! It's just up the\l"
	.string "road to the north.\p"
	.string "In the Myrrini Battle Pavilion, Pokémon\n"
	.string "choose their own actions in battle. It's\l"
	.string "a whole other level of strategy!$"

MyrriniIsland_EventScript_HexManiac_Text_0:
# 327 "data/maps/MyrriniIsland/scripts.pory"
	.string "Crystal Girl$"

MyrriniIsland_EventScript_HexManiac_Text_1:
# 328 "data/maps/MyrriniIsland/scripts.pory"
	.string "Huff, huff... Come on, Zorua! We have to\n"
	.string "keep training!$"

MyrriniIsland_EventScript_HexManiac_Text_2:
# 341 "data/maps/MyrriniIsland/scripts.pory"
	.string "If you can do well in the Battle\n"
	.string "Pavilion, so can Zorua and I! We're\l"
	.string "gonna be the best!$"

MyrriniIsland_EventScript_HexManiac_Text_3:
# 351 "data/maps/MyrriniIsland/scripts.pory"
	.string "Oh! Sorry, we were in an intense training\n"
	.string "match. Zorua tried their best, but the\l"
	.string "Battle Pavilion proved to be too much\l"
	.string "for it.\p"
	.string "Honestly, I'm not convinced the Battle\n"
	.string "Pavilion is even possible! If you\l"
	.string "{COLOR GREEN}participate in the Myrrini Battle\l"
	.string "Pavilion{COLOR DARK_GRAY}, let me know what you think.$"

MyrriniIsland_EventScript_HexManiac_Text_4:
# 359 "data/maps/MyrriniIsland/scripts.pory"
	.string "Hey, you're back! Have you tried the\n"
	.string "Battle Pavilion on Myrrini Island yet?$"

MyrriniIsland_EventScript_HexManiac_Text_5:
# 366 "data/maps/MyrriniIsland/scripts.pory"
	.string "Oh, you actually did! And your Pokémon\n"
	.string "did alright?\p"
	.string "Okay, I'm convinced now! Zorua and I\n"
	.string "just need more training! Thanks for\l"
	.string "inspiring me. Take this!$"

MyrriniIsland_EventScript_HexManiac_Text_6:
# 378 "data/maps/MyrriniIsland/scripts.pory"
	.string "Not yet, huh? I know, it's super\n"
	.string "intimidating!\p"
	.string "Come back once you've tried the {COLOR GREEN}Myrrini\n"
	.string "Battle Pavilion{COLOR DARK_GRAY}. Anyway, back to\l"
	.string "training!$"

MyrriniIsland_EventScript_Zorua_Text_0:
# 390 "data/maps/MyrriniIsland/scripts.pory"
	.string "Zorua$"

MyrriniIsland_EventScript_Zorua_Text_1:
# 392 "data/maps/MyrriniIsland/scripts.pory"
	.string "Huaaa...$"

MyrriniIsland_EventScript_Scientist_Text_0:
# 403 "data/maps/MyrriniIsland/scripts.pory"
	.string "Scientist$"

MyrriniIsland_EventScript_Scientist_Text_1:
# 404 "data/maps/MyrriniIsland/scripts.pory"
	.string "I hear the Gym Leader on this island\n"
	.string "specializes in Poison-types and pulling\l"
	.string "tricks, like confusing opposing\l"
	.string "Pokémon. This is gonna be a hard battle\l"
	.string "to win, that's for sure...$"

MyrriniIsland_EventScript_Toucannon_Text_0:
# 414 "data/maps/MyrriniIsland/scripts.pory"
	.string "Toucannon$"

MyrriniIsland_EventScript_Toucannon_Text_1:
# 416 "data/maps/MyrriniIsland/scripts.pory"
	.string "Caww-aww!$"

MyrriniIsland_EventScript_Toucannon_Text_2:
# 420 "data/maps/MyrriniIsland/scripts.pory"
	.string "Woah, it's a Toucannon! It must have\n"
	.string "been flying by and stopped for fruit!$"

MyrriniIsland_EventScript_Kilowattrel_Text_0:
# 430 "data/maps/MyrriniIsland/scripts.pory"
	.string "Kilowattrel$"

MyrriniIsland_EventScript_Kilowattrel_Text_1:
# 432 "data/maps/MyrriniIsland/scripts.pory"
	.string "Eee! Kreee!$"

MyrriniIsland_EventScript_Kilowattrel_Text_2:
# 436 "data/maps/MyrriniIsland/scripts.pory"
	.string "Woah, it's a Kilowattrel! It must have\n"
	.string "been flying by and stopped for fruit!$"

MyrriniIsland_EventScript_Sailor_Text_0:
# 446 "data/maps/MyrriniIsland/scripts.pory"
	.string "Sailor$"

MyrriniIsland_EventScript_Sailor_Text_1:
# 447 "data/maps/MyrriniIsland/scripts.pory"
	.string "Ships from all over the Ilios Region\n"
	.string "stop here to trade. We're expecting a\l"
	.string "big shipment soon!$"

MyrriniIsland_EventScript_OldMan_Text_0:
# 457 "data/maps/MyrriniIsland/scripts.pory"
	.string "Old Man$"

MyrriniIsland_EventScript_OldMan_Text_1:
# 458 "data/maps/MyrriniIsland/scripts.pory"
	.string "Fwahaha, I love seeing Trainers come\n"
	.string "and go from the Battle Pavilion! I give\l"
	.string "them words of encouragement on the way\l"
	.string "in, and I console them if they lost when\l"
	.string "they leave.$"

MyrriniIsland_EventScript_BattlePavilionSign_Text_0:
# 467 "data/maps/MyrriniIsland/scripts.pory"
	.string "Myrrini Island Battle Pavilion\n"
	.string "Try a New Type of Battle!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_0:
# 479 "data/maps/MyrriniIsland/scripts.pory"
	.string "???$"

MyrriniIsland_EventScript_ChimeraEvent_Text_1:
# 480 "data/maps/MyrriniIsland/scripts.pory"
	.string "Hey, get away from me!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_2:
# 493 "data/maps/MyrriniIsland/scripts.pory"
	.string "Euterpe$"

MyrriniIsland_EventScript_ChimeraEvent_Text_3:
# 494 "data/maps/MyrriniIsland/scripts.pory"
	.string "{PLAYER}, did you hear that? Sounds\n"
	.string "like someone's in trouble. No\l"
	.string "disruptions to the party on my Island!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_4:
# 503 "data/maps/MyrriniIsland/scripts.pory"
	.string "Rania$"

MyrriniIsland_EventScript_ChimeraEvent_Text_5:
# 504 "data/maps/MyrriniIsland/scripts.pory"
	.string "{PLAYER}, thank the Fates! I'm being\n"
	.string "swarmed with Team Chimera Admins!\l"
	.string "Please, give me some help here!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_6:
# 509 "data/maps/MyrriniIsland/scripts.pory"
	.string "HOLD IT!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_7:
# 517 "data/maps/MyrriniIsland/scripts.pory"
	.string "Team Chimera? On MY island?! No no no,\n"
	.string "this is all wrong! I don't appreciate\l"
	.string "party crashers here!\p"
	.string "Will you leave on your own? Or do I need\n"
	.string "my Hypno to throw you into the sea?$"

MyrriniIsland_EventScript_ChimeraEvent_Text_8:
# 521 "data/maps/MyrriniIsland/scripts.pory"
	.string "Chimera Admin 1$"

MyrriniIsland_EventScript_ChimeraEvent_Text_9:
# 522 "data/maps/MyrriniIsland/scripts.pory"
	.string "Kekeke, you think you can take us on?\n"
	.string "You're fools, all of you! Get ready to-$"

MyrriniIsland_EventScript_ChimeraEvent_Text_10:
# 528 "data/maps/MyrriniIsland/scripts.pory"
	.string "Chimera Admin 2$"

MyrriniIsland_EventScript_ChimeraEvent_Text_11:
# 529 "data/maps/MyrriniIsland/scripts.pory"
	.string "Hey, the Boss is coming! Get out of the\n"
	.string "way!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_12:
# 542 "data/maps/MyrriniIsland/scripts.pory"
	.string "Chimera Boss$"

MyrriniIsland_EventScript_ChimeraEvent_Text_13:
# 543 "data/maps/MyrriniIsland/scripts.pory"
	.string "Hm. Quite the party we have going on\n"
	.string "here, eh? A great, big circus, and all I\l"
	.string "see are clowns.$"

MyrriniIsland_EventScript_ChimeraEvent_Text_14:
# 548 "data/maps/MyrriniIsland/scripts.pory"
	.string "You two. The tip specifically told us\n"
	.string "MARMARO Island, not MYRRINI Island.\l"
	.string "But when I got to the mines, imagine my\l"
	.string "surprise to see you weren't there.\p"
	.string "Grr...! {COLOR RED}You FOOLS! This artifact is KEY\n"
	.string "to reawakening the Ancient Pokémon,\l"
	.string "but here you are on the WRONG ISLAND!{COLOR DARK_GRAY}$"

MyrriniIsland_EventScript_ChimeraEvent_Text_15:
# 550 "data/maps/MyrriniIsland/scripts.pory"
	.string "Chimera Admins$"

MyrriniIsland_EventScript_ChimeraEvent_Text_16:
# 551 "data/maps/MyrriniIsland/scripts.pory"
	.string "W-we-we're sorry, {COLOR RED}Miss Kalliope{COLOR DARK_GRAY}! We'll\n"
	.string "get to the {COLOR GREEN}Marmaro Mines{COLOR DARK_GRAY} right away!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_17:
# 562 "data/maps/MyrriniIsland/scripts.pory"
	.string "Kalliope$"

MyrriniIsland_EventScript_ChimeraEvent_Text_18:
# 563 "data/maps/MyrriniIsland/scripts.pory"
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
# 569 "data/maps/MyrriniIsland/scripts.pory"
	.string "But why?! Trafficking Pokémon and\n"
	.string "using the strongest to destroy the\l"
	.string "environment... how could that POSSIBLY\l"
	.string "be a good thing?$"

MyrriniIsland_EventScript_ChimeraEvent_Text_20:
# 574 "data/maps/MyrriniIsland/scripts.pory"
	.string "Money makes the world go 'round, you\n"
	.string "naive child. When I look at a forest\l"
	.string "filled with wildlife, all I see are dollar\l"
	.string "signs. The Pokémon, the lumber, and the\l"
	.string "fossil fuels in the ground below - all\l"
	.string "can be sold, so they must all be mine.$"

MyrriniIsland_EventScript_ChimeraEvent_Text_21:
# 579 "data/maps/MyrriniIsland/scripts.pory"
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
# 590 "data/maps/MyrriniIsland/scripts.pory"
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
# 607 "data/maps/MyrriniIsland/scripts.pory"
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

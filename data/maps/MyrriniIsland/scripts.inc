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


MyrriniIsland_Sign_GymSign::
# 47 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 48 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_Sign_GymSign_Text_0
# 49 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 50 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_BlackBelt::
# 56 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 57 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 58 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_BlackBelt_Text_0
# 59 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_BlackBelt_Text_1
# 60 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 61 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_PsychicM::
# 67 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 68 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 69 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_PsychicM_Text_0
# 70 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_PsychicM_Text_1
# 71 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 72 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Girl::
# 78 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 79 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 80 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Girl_Text_0
# 81 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Girl_Text_1
# 82 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 83 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_OldWoman::
# 89 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 90 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 91 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_OldWoman_Text_0
# 92 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_OldWoman_Text_1
# 93 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 94 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Beauty::
# 100 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 101 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 102 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Beauty_Text_0
# 103 "data/maps/MyrriniIsland/scripts.pory"
	message MyrriniIsland_EventScript_Beauty_Text_1
# 104 "data/maps/MyrriniIsland/scripts.pory"
	waitmessage
# 105 "data/maps/MyrriniIsland/scripts.pory"
	pokemart NectarMart
# 106 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 107 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 108 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Beauty_Text_0
# 109 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Beauty_Text_2
# 110 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 111 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


	.align 2
# 115 "data/maps/MyrriniIsland/scripts.pory"
NectarMart:
# 117 "data/maps/MyrriniIsland/scripts.pory"
	.2byte ITEM_RED_NECTAR
# 118 "data/maps/MyrriniIsland/scripts.pory"
	.2byte ITEM_YELLOW_NECTAR
# 119 "data/maps/MyrriniIsland/scripts.pory"
	.2byte ITEM_PINK_NECTAR
# 120 "data/maps/MyrriniIsland/scripts.pory"
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE

MyrriniIsland_EventScript_Ribombee::
# 125 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 126 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 127 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Ribombee_Text_0
# 128 "data/maps/MyrriniIsland/scripts.pory"
	playmoncry SPECIES_RIBOMBEE, CRY_MODE_NORMAL
# 129 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Ribombee_Text_1
# 130 "data/maps/MyrriniIsland/scripts.pory"
	waitmoncry
# 131 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 132 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Camper::
# 138 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 139 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 140 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Camper_Text_0
# 143 "data/maps/MyrriniIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_MYRRINI_ALLERGIES
# 144 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MyrriniIsland_EventScript_Camper_2
# 153 "data/maps/MyrriniIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_MYRRINI_ALLERGIES
# 154 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MyrriniIsland_EventScript_Camper_5
# 164 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_3
# 165 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 167 "data/maps/MyrriniIsland/scripts.pory"
	checkitem ITEM_FULL_HEAL
# 168 "data/maps/MyrriniIsland/scripts.pory"
	delay 30
# 169 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MyrriniIsland_EventScript_Camper_8
# 179 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Camper_Text_0
# 180 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_5
# 181 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 182 "data/maps/MyrriniIsland/scripts.pory"
	removeitem ITEM_FULL_HEAL
# 183 "data/maps/MyrriniIsland/scripts.pory"
	delay 30
# 184 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 23, Common_Movement_Heart
# 185 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 186 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 187 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Camper_Text_0
# 188 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_6
# 189 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 190 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 191 "data/maps/MyrriniIsland/scripts.pory"
	giveitem ITEM_SILK_SCARF
# 192 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 194 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 195 "data/maps/MyrriniIsland/scripts.pory"
	completequest QUEST_MYRRINI_ALLERGIES
MyrriniIsland_EventScript_Camper_4:
# 198 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_Camper_2:
# 146 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_1
# 147 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 148 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_Camper_5:
# 156 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_2
# 157 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 159 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 160 "data/maps/MyrriniIsland/scripts.pory"
	startquest QUEST_MYRRINI_ALLERGIES
	goto MyrriniIsland_EventScript_Camper_4

MyrriniIsland_EventScript_Camper_8:
# 171 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Camper_Text_0
# 172 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_4
# 173 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 174 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Girl2::
# 204 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 205 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 206 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Girl_Text_0
# 207 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Girl2_Text_0
# 208 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 209 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Panpour::
# 215 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 216 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 217 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Panpour_Text_0
# 218 "data/maps/MyrriniIsland/scripts.pory"
	playmoncry SPECIES_PANPOUR, CRY_MODE_NORMAL
# 219 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Panpour_Text_1
# 220 "data/maps/MyrriniIsland/scripts.pory"
	waitmoncry
# 221 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 222 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_BugCatcher::
# 228 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 229 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 230 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_BugCatcher_Text_0
# 231 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_BugCatcher_Text_1
# 232 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 233 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Woman::
# 239 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 240 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 241 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Woman_Text_0
# 242 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Woman_Text_1
# 243 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 244 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Artist::
# 250 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 251 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 252 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Artist_Text_0
# 253 "data/maps/MyrriniIsland/scripts.pory"
	goto_if_set FLAG_GOT_TM_POISON_FANG, MyrriniIsland_EventScript_Artist_2
# 260 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_GOT_TM_POISON_FANG
# 261 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Artist_Text_2
# 262 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 263 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 264 "data/maps/MyrriniIsland/scripts.pory"
	giveitem ITEM_TM_POISON_FANG
# 265 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
MyrriniIsland_EventScript_Artist_1:
# 267 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_Artist_2:
# 255 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Artist_Text_1
# 256 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
	goto MyrriniIsland_EventScript_Artist_1


MyrriniIsland_EventScript_Farmer1::
# 273 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 274 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 275 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Farmer1_Text_0
# 276 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Farmer1_Text_1
# 277 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 278 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Farmer2::
# 284 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 285 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 286 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Farmer1_Text_0
# 287 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Farmer2_Text_0
# 288 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 289 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_LittleGirl::
# 295 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 296 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 297 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_LittleGirl_Text_0
# 298 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_LittleGirl_Text_1
# 299 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 300 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_BattleGirl::
# 306 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 307 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 308 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_BattleGirl_Text_0
# 309 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_BattleGirl_Text_1
# 310 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 311 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_HexManiac::
# 317 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 318 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_HexManiac_Text_0
# 319 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_1
# 320 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 321 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 322 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 36, Common_Movement_ExclamationMark
# 323 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 324 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 325 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 326 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_HexManiac_Text_0
# 329 "data/maps/MyrriniIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_TRY_MYRRINI_BATTLE_PAVILION
# 330 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MyrriniIsland_EventScript_HexManiac_2
# 339 "data/maps/MyrriniIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_TRY_MYRRINI_BATTLE_PAVILION
# 340 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MyrriniIsland_EventScript_HexManiac_5
# 350 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_4
# 351 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 353 "data/maps/MyrriniIsland/scripts.pory"
	delay 30
# 354 "data/maps/MyrriniIsland/scripts.pory"
	goto_if_set FLAG_PLAYED_IN_MYRRINI_BATTLE_PAVILION, MyrriniIsland_EventScript_HexManiac_8
# 368 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_HexManiac_Text_0
# 369 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_6
# 370 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
MyrriniIsland_EventScript_HexManiac_4:
# 373 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_HexManiac_2:
# 332 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_2
# 333 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 334 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_HexManiac_5:
# 342 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_3
# 343 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 345 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 346 "data/maps/MyrriniIsland/scripts.pory"
	startquest QUEST_TRY_MYRRINI_BATTLE_PAVILION
	goto MyrriniIsland_EventScript_HexManiac_4

MyrriniIsland_EventScript_HexManiac_8:
# 356 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_HexManiac_Text_0
# 357 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_5
# 358 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 359 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 360 "data/maps/MyrriniIsland/scripts.pory"
	giveitem ITEM_REAPER_CLOTH
# 361 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 363 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 364 "data/maps/MyrriniIsland/scripts.pory"
	completequest QUEST_TRY_MYRRINI_BATTLE_PAVILION
	goto MyrriniIsland_EventScript_HexManiac_4


MyrriniIsland_EventScript_Zorua::
# 379 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 380 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 381 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Zorua_Text_0
# 382 "data/maps/MyrriniIsland/scripts.pory"
	playmoncry SPECIES_ZORUA_HISUIAN, CRY_MODE_NORMAL
# 383 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Zorua_Text_1
# 384 "data/maps/MyrriniIsland/scripts.pory"
	waitmoncry
# 385 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 386 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Scientist::
# 392 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 393 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 394 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Scientist_Text_0
# 395 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Scientist_Text_1
# 396 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 397 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Toucannon::
# 403 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 404 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 405 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Toucannon_Text_0
# 406 "data/maps/MyrriniIsland/scripts.pory"
	playmoncry SPECIES_TOUCANNON, CRY_MODE_NORMAL
# 407 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Toucannon_Text_1
# 408 "data/maps/MyrriniIsland/scripts.pory"
	waitmoncry
# 409 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 410 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 411 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Toucannon_Text_2
# 412 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 413 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Kilowattrel::
# 419 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 420 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 421 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Kilowattrel_Text_0
# 422 "data/maps/MyrriniIsland/scripts.pory"
	playmoncry SPECIES_KILOWATTREL, CRY_MODE_NORMAL
# 423 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Kilowattrel_Text_1
# 424 "data/maps/MyrriniIsland/scripts.pory"
	waitmoncry
# 425 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 426 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 427 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Kilowattrel_Text_2
# 428 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 429 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Sailor::
# 435 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 436 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 437 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Sailor_Text_0
# 438 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Sailor_Text_1
# 439 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 440 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_OldMan::
# 446 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 447 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 448 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_OldMan_Text_0
# 449 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_OldMan_Text_1
# 450 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 451 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_BattlePavilionSign::
# 457 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 458 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_BattlePavilionSign_Text_0
# 459 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 460 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_ChimeraEvent::
# 466 "data/maps/MyrriniIsland/scripts.pory"
	setvar VAR_TEMP_1, 1
# 468 "data/maps/MyrriniIsland/scripts.pory"
	lockall
# 469 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 470 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_0
# 471 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_1
# 472 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 473 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 474 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 475 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 476 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 477 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 478 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 479 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 480 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_THYRSUS_DURING_CHIMERA_EVENT_MYRRINI_ISLAND
# 481 "data/maps/MyrriniIsland/scripts.pory"
	addobject 55
# 482 "data/maps/MyrriniIsland/scripts.pory"
	showobjectat 55, MAP_MYRRINI_ISLAND
# 483 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, Common_Movement_WalkDown
# 484 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_2
# 485 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_3
# 486 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 488 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MyrriniIsland_Movement_PlayerWalkDownToEvent
# 489 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, MyrriniIsland_Movement_ThyrsusApproach
# 490 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 491 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 492 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 52, Common_Movement_FaceUp
# 493 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 494 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_4
# 495 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_5
# 496 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 497 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 499 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_2
# 500 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_6
# 501 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 502 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 503 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, MyrriniIsland_Movement_PlayerAndThyrsusReposition
# 504 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 505 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 53, Common_Movement_FaceUp
# 506 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 507 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_2
# 508 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_7
# 509 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 510 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 53, Common_Movement_JumpInPlaceUp
# 511 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 512 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_8
# 513 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_9
# 514 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 515 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 54, MyrriniIsland_Movement_AdminNoticesMara
# 516 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 517 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 53, Common_Movement_ExclamationMark
# 518 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 519 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_10
# 520 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_11
# 521 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 522 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 53, MyrriniIsland_Movement_AdminsMoveForBoss
# 523 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 54, MyrriniIsland_Movement_AdminsMoveForBoss
# 524 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 526 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MyrriniIsland_Movement_PlayerAndThyrsusReposition
# 527 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, MyrriniIsland_Movement_PlayerAndThyrsusReposition
# 528 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 52, Common_Movement_FaceDown
# 529 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 531 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, MyrriniIsland_Movement_MaraApproaches
# 532 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 533 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_12
# 534 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_13
# 535 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 536 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, Common_Movement_WalkRight
# 537 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 538 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_12
# 539 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_14
# 540 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 541 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_15
# 542 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_16
# 543 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 544 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 53, MyrriniIsland_Movement_AdminsFlee
# 545 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 54, MyrriniIsland_Movement_AdminsFlee
# 546 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 547 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 548 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, Common_Movement_WalkLeft
# 549 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 550 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, Common_Movement_FaceUp
# 551 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 553 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_17
# 554 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_18
# 555 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 556 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 557 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 52, Common_Movement_JumpInPlaceDown
# 558 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 559 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_4
# 560 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_19
# 561 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 562 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, Common_Movement_FaceLeft
# 563 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 564 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_17
# 565 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_20
# 566 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 567 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, Common_Movement_FaceUp
# 568 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 569 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_17
# 570 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_21
# 571 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 572 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, MyrriniIsland_Movement_MaraLeaves
# 573 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 574 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 576 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 52, Common_Movement_FaceRight
# 577 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 578 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, Common_Movement_FaceLeft
# 579 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 580 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_2
# 581 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_22
# 582 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 583 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, MyrriniIsland_Movement_ThyrsusLeaves
# 584 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 592 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 593 "data/maps/MyrriniIsland/scripts.pory"
	startquest QUEST_FREE_MARMARO_MINES
# 594 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 595 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 597 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 598 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 599 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_4
# 600 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_23
# 601 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 602 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 52, MyrriniIsland_Movement_RaniaLeaves
# 603 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 605 "data/maps/MyrriniIsland/scripts.pory"
	removeobject 52
# 606 "data/maps/MyrriniIsland/scripts.pory"
	removeobject 53
# 607 "data/maps/MyrriniIsland/scripts.pory"
	removeobject 54
# 608 "data/maps/MyrriniIsland/scripts.pory"
	removeobject 55
# 609 "data/maps/MyrriniIsland/scripts.pory"
	removeobject 56
# 610 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_HIDE_CHIMERA_EVENT_MYRRINI_ISLAND
# 611 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_HIDE_THYRSUS_DURING_CHIMERA_EVENT_MYRRINI_ISLAND
# 616 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_HIDE_RANIA_ACRISIA_UNIVERSITY
# 617 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 618 "data/maps/MyrriniIsland/scripts.pory"
	startquest QUEST_VISIT_RANIA_PENTEPETAL
# 619 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 620 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 622 "data/maps/MyrriniIsland/scripts.pory"
	releaseall
	end


# 626 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_PlayerWalkDownToEvent:
# 628 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 628 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 628 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 628 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 629 "data/maps/MyrriniIsland/scripts.pory"
	emote_exclamation_mark
# 630 "data/maps/MyrriniIsland/scripts.pory"
	delay_16
# 631 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 631 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 631 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 631 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 631 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 631 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 632 "data/maps/MyrriniIsland/scripts.pory"
	jump_in_place_down
# 632 "data/maps/MyrriniIsland/scripts.pory"
	jump_in_place_down
# 633 "data/maps/MyrriniIsland/scripts.pory"
	face_down
# 634 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 636 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_ThyrsusApproach:
# 638 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 638 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 638 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 638 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 639 "data/maps/MyrriniIsland/scripts.pory"
	delay_16
# 640 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 640 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 640 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 640 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 640 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 640 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 641 "data/maps/MyrriniIsland/scripts.pory"
	face_down
# 642 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 644 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_AdminNoticesMara:
# 646 "data/maps/MyrriniIsland/scripts.pory"
	face_down
# 647 "data/maps/MyrriniIsland/scripts.pory"
	delay_16
# 648 "data/maps/MyrriniIsland/scripts.pory"
	emote_exclamation_mark
# 649 "data/maps/MyrriniIsland/scripts.pory"
	delay_16
# 650 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 651 "data/maps/MyrriniIsland/scripts.pory"
	face_up
# 652 "data/maps/MyrriniIsland/scripts.pory"
	jump_in_place_up
# 653 "data/maps/MyrriniIsland/scripts.pory"
	face_up
# 654 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 656 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_AdminsMoveForBoss:
# 658 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 658 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 659 "data/maps/MyrriniIsland/scripts.pory"
	face_left
# 660 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 662 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_PlayerAndThyrsusReposition:
# 664 "data/maps/MyrriniIsland/scripts.pory"
	walk_right
# 665 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 666 "data/maps/MyrriniIsland/scripts.pory"
	face_down
# 667 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 669 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_MaraApproaches:
# 671 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 671 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 671 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 671 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 671 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 672 "data/maps/MyrriniIsland/scripts.pory"
	walk_right
# 673 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 674 "data/maps/MyrriniIsland/scripts.pory"
	face_up
# 675 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 677 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_AdminsFlee:
# 679 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 679 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 679 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 679 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 679 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 679 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 679 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 679 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 679 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 680 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 682 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_MaraLeaves:
# 684 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 685 "data/maps/MyrriniIsland/scripts.pory"
	walk_left
# 686 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 686 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 686 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 686 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 686 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 686 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 686 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 687 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 689 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_ThyrsusLeaves:
# 691 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 692 "data/maps/MyrriniIsland/scripts.pory"
	walk_left
# 692 "data/maps/MyrriniIsland/scripts.pory"
	walk_left
# 693 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 693 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 693 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 693 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 693 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 693 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 694 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 696 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_RaniaLeaves:
# 698 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 698 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 698 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 698 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 698 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 698 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 698 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 699 "data/maps/MyrriniIsland/scripts.pory"
	step_end

MyrriniIsland_Sign_GymSign_Text_0:
# 48 "data/maps/MyrriniIsland/scripts.pory"
	.string "Gym Leader: Thyrsus\n"
	.string "King of Parties and Poisons$"

MyrriniIsland_EventScript_BlackBelt_Text_0:
# 58 "data/maps/MyrriniIsland/scripts.pory"
	.string "Black Belt$"

MyrriniIsland_EventScript_BlackBelt_Text_1:
# 59 "data/maps/MyrriniIsland/scripts.pory"
	.string "Sometimes, you have to kick back and relax. Myrrini Island is perfect for that!$"

MyrriniIsland_EventScript_PsychicM_Text_0:
# 69 "data/maps/MyrriniIsland/scripts.pory"
	.string "Psychic$"

MyrriniIsland_EventScript_PsychicM_Text_1:
# 70 "data/maps/MyrriniIsland/scripts.pory"
	.string "This island has lots of grape vines,\n"
	.string "purple fruited trees, and purple\l"
	.string "buildings. Purple is my favorite color,\l"
	.string "so I love it!$"

MyrriniIsland_EventScript_Girl_Text_0:
# 80 "data/maps/MyrriniIsland/scripts.pory"
	.string "Girl$"

MyrriniIsland_EventScript_Girl_Text_1:
# 81 "data/maps/MyrriniIsland/scripts.pory"
	.string "Migratory Pokémon stop on Myrrini\n"
	.string "Island while they fly, like that Swanna\l"
	.string "on the roof! They join up with the\l"
	.string "native Oricorio found here to dance and\l"
	.string "sing.$"

MyrriniIsland_EventScript_OldWoman_Text_0:
# 91 "data/maps/MyrriniIsland/scripts.pory"
	.string "Old Woman$"

MyrriniIsland_EventScript_OldWoman_Text_1:
# 92 "data/maps/MyrriniIsland/scripts.pory"
	.string "Ahh, this is the life... I knew moving to\n"
	.string "Myrrini Island was the right choice. The\l"
	.string "folks here are nice, and that old sailor\l"
	.string "over there is nice on the eyes... ehehe!$"

MyrriniIsland_EventScript_Beauty_Text_0:
# 102 "data/maps/MyrriniIsland/scripts.pory"
	.string "Beauty$"

MyrriniIsland_EventScript_Beauty_Text_1:
# 103 "data/maps/MyrriniIsland/scripts.pory"
	.string "The wildflowers growing on this island\n"
	.string "make it a dream! My Ribombee is having\l"
	.string "the time of her life gathering nectar\l"
	.string "and pollen from them all.\p"
	.string "Are you interested in buying any of the\n"
	.string "Nectar? Oricorio seem to love it!$"

MyrriniIsland_EventScript_Beauty_Text_2:
# 109 "data/maps/MyrriniIsland/scripts.pory"
	.string "Come again! I'll still be here with my\n"
	.string "sweet Ribombee.$"

MyrriniIsland_EventScript_Ribombee_Text_0:
# 127 "data/maps/MyrriniIsland/scripts.pory"
	.string "Ribombee$"

MyrriniIsland_EventScript_Ribombee_Text_1:
# 129 "data/maps/MyrriniIsland/scripts.pory"
	.string "Zee-ee-ee!$"

MyrriniIsland_EventScript_Camper_Text_0:
# 140 "data/maps/MyrriniIsland/scripts.pory"
	.string "Camper$"

MyrriniIsland_EventScript_Camper_Text_1:
# 146 "data/maps/MyrriniIsland/scripts.pory"
	.string "My allergies are all cleared up! Now I\n"
	.string "can fully enjoy Myrrini Island!$"

MyrriniIsland_EventScript_Camper_Text_2:
# 156 "data/maps/MyrriniIsland/scripts.pory"
	.string "The outdoors are great and all, but...\n"
	.string "ACHOO! SHNIFF! My allergies are acting\l"
	.string "up...\p"
	.string "You seem like you're doing alright, could\n"
	.string "you bring me a {COLOR GREEN}Full Heal{COLOR DARK_GRAY}? Maybe that'll\l"
	.string "help my allergies.$"

MyrriniIsland_EventScript_Camper_Text_3:
# 164 "data/maps/MyrriniIsland/scripts.pory"
	.string "ACHOO! H-hey... SHNIFFLE! Did you\n"
	.string "happen to bring a Full Heal...?$"

MyrriniIsland_EventScript_Camper_Text_4:
# 172 "data/maps/MyrriniIsland/scripts.pory"
	.string "Aww, but my nose is totally clogged.\p"
	.string "Bring me a {COLOR GREEN}Full Heal{COLOR DARK_GRAY} for my pollen\n"
	.string "allergy, please!$"

MyrriniIsland_EventScript_Camper_Text_5:
# 180 "data/maps/MyrriniIsland/scripts.pory"
	.string "Oh, you've got it! Let me just use this\n"
	.string "quick...$"

MyrriniIsland_EventScript_Camper_Text_6:
# 188 "data/maps/MyrriniIsland/scripts.pory"
	.string "Woah, what a difference that made! I\n"
	.string "can totally breathe now!\p"
	.string "Now I can have fun outside with the\n"
	.string "flowers. Thank you! Take this!$"

MyrriniIsland_EventScript_Girl2_Text_0:
# 207 "data/maps/MyrriniIsland/scripts.pory"
	.string "The crops and fruits grown on Myrrini\n"
	.string "Island are the best in Ilios! I think\l"
	.string "it's the sunlight and the warm weather.$"

MyrriniIsland_EventScript_Panpour_Text_0:
# 217 "data/maps/MyrriniIsland/scripts.pory"
	.string "Panpour$"

MyrriniIsland_EventScript_Panpour_Text_1:
# 219 "data/maps/MyrriniIsland/scripts.pory"
	.string "Hia hee ee!$"

MyrriniIsland_EventScript_BugCatcher_Text_0:
# 230 "data/maps/MyrriniIsland/scripts.pory"
	.string "Bug Catcher$"

MyrriniIsland_EventScript_BugCatcher_Text_1:
# 231 "data/maps/MyrriniIsland/scripts.pory"
	.string "These markets always attract a bunch\n"
	.string "of Pokémon. I'm looking for any\l"
	.string "Bug-type Pokémon that show up!$"

MyrriniIsland_EventScript_Woman_Text_0:
# 241 "data/maps/MyrriniIsland/scripts.pory"
	.string "Performer$"

MyrriniIsland_EventScript_Woman_Text_1:
# 242 "data/maps/MyrriniIsland/scripts.pory"
	.string "Can you smell it? The pollen in the air,\n"
	.string "the fruits, and the salt sea spray... I'm\l"
	.string "so glad I moved here!$"

MyrriniIsland_EventScript_Artist_Text_0:
# 252 "data/maps/MyrriniIsland/scripts.pory"
	.string "Artist$"

MyrriniIsland_EventScript_Artist_Text_1:
# 255 "data/maps/MyrriniIsland/scripts.pory"
	.string "Inflicting opposing Pokémon with\n"
	.string "status effects is a sure way to win\l"
	.string "Pokémon battles!$"

MyrriniIsland_EventScript_Artist_Text_2:
# 261 "data/maps/MyrriniIsland/scripts.pory"
	.string "The Gym Leader on Myrrini Island\n"
	.string "specializes in Poison-type moves, which\l"
	.string "can tear through teams by inflicting\l"
	.string "the Poison effect on your Pokémon. I\l"
	.string "created this TM based on those\l"
	.string "techniques!$"

MyrriniIsland_EventScript_Farmer1_Text_0:
# 275 "data/maps/MyrriniIsland/scripts.pory"
	.string "Farmer$"

MyrriniIsland_EventScript_Farmer1_Text_1:
# 276 "data/maps/MyrriniIsland/scripts.pory"
	.string "These fruit trees are blooming all\n"
	.string "across the island! We're gonna make a\l"
	.string "fortune selling all this!$"

MyrriniIsland_EventScript_Farmer2_Text_0:
# 287 "data/maps/MyrriniIsland/scripts.pory"
	.string "Lot'sa Pokémon come around to snack on\n"
	.string "the fruits growing here. We gather and\l"
	.string "sell the ones which native Pokémon\l"
	.string "don't get to first.$"

MyrriniIsland_EventScript_LittleGirl_Text_0:
# 297 "data/maps/MyrriniIsland/scripts.pory"
	.string "Little Girl$"

MyrriniIsland_EventScript_LittleGirl_Text_1:
# 298 "data/maps/MyrriniIsland/scripts.pory"
	.string "Sometimes, the nice people who run the\n"
	.string "Daycare let me play with the Pokémon!\l"
	.string "When I grow up, I wanna work there with\l"
	.string "them!$"

MyrriniIsland_EventScript_BattleGirl_Text_0:
# 308 "data/maps/MyrriniIsland/scripts.pory"
	.string "Battle Girl$"

MyrriniIsland_EventScript_BattleGirl_Text_1:
# 309 "data/maps/MyrriniIsland/scripts.pory"
	.string "Phew, I just got totally wiped out at\n"
	.string "the Battle Pavilion! It's just up the\l"
	.string "road to the north.\p"
	.string "In the Myrrini Battle Pavilion, Pokémon\n"
	.string "choose their own actions in battle. It's\l"
	.string "a whole other level of strategy!$"

MyrriniIsland_EventScript_HexManiac_Text_0:
# 318 "data/maps/MyrriniIsland/scripts.pory"
	.string "Crystal Girl$"

MyrriniIsland_EventScript_HexManiac_Text_1:
# 319 "data/maps/MyrriniIsland/scripts.pory"
	.string "Huff, huff... Come on, Zorua! We have to\n"
	.string "keep training!$"

MyrriniIsland_EventScript_HexManiac_Text_2:
# 332 "data/maps/MyrriniIsland/scripts.pory"
	.string "If you can do well in the Battle\n"
	.string "Pavilion, so can Zorua and I! We're\l"
	.string "gonna be the best!$"

MyrriniIsland_EventScript_HexManiac_Text_3:
# 342 "data/maps/MyrriniIsland/scripts.pory"
	.string "Oh! Sorry, we were in an intense training\n"
	.string "match. Zorua tried their best, but the\l"
	.string "Battle Pavilion proved to be too much\l"
	.string "for it.\p"
	.string "Honestly, I'm not convinced the Battle\n"
	.string "Pavilion is even possible! If you\l"
	.string "{COLOR GREEN}participate in the Myrrini Battle\l"
	.string "Pavilion{COLOR DARK_GRAY}, let me know what you think.$"

MyrriniIsland_EventScript_HexManiac_Text_4:
# 350 "data/maps/MyrriniIsland/scripts.pory"
	.string "Hey, you're back! Have you tried the\n"
	.string "Battle Pavilion on Myrrini Island yet?$"

MyrriniIsland_EventScript_HexManiac_Text_5:
# 357 "data/maps/MyrriniIsland/scripts.pory"
	.string "Oh, you actually did! And your Pokémon\n"
	.string "did alright?\p"
	.string "Okay, I'm convinced now! Zorua and I\n"
	.string "just need more training! Thanks for\l"
	.string "inspiring me. Take this!$"

MyrriniIsland_EventScript_HexManiac_Text_6:
# 369 "data/maps/MyrriniIsland/scripts.pory"
	.string "Not yet, huh? I know, it's super\n"
	.string "intimidating!\p"
	.string "Come back once you've tried the {COLOR GREEN}Myrrini\n"
	.string "Battle Pavilion{COLOR DARK_GRAY}. Anyway, back to\l"
	.string "training!$"

MyrriniIsland_EventScript_Zorua_Text_0:
# 381 "data/maps/MyrriniIsland/scripts.pory"
	.string "Zorua$"

MyrriniIsland_EventScript_Zorua_Text_1:
# 383 "data/maps/MyrriniIsland/scripts.pory"
	.string "Huaaa...$"

MyrriniIsland_EventScript_Scientist_Text_0:
# 394 "data/maps/MyrriniIsland/scripts.pory"
	.string "Scientist$"

MyrriniIsland_EventScript_Scientist_Text_1:
# 395 "data/maps/MyrriniIsland/scripts.pory"
	.string "I hear the Gym Leader on this island\n"
	.string "specializes in Poison-types and pulling\l"
	.string "tricks, like confusing opposing\l"
	.string "Pokémon. This is gonna be a hard battle\l"
	.string "to win, that's for sure...$"

MyrriniIsland_EventScript_Toucannon_Text_0:
# 405 "data/maps/MyrriniIsland/scripts.pory"
	.string "Toucannon$"

MyrriniIsland_EventScript_Toucannon_Text_1:
# 407 "data/maps/MyrriniIsland/scripts.pory"
	.string "Caww-aww!$"

MyrriniIsland_EventScript_Toucannon_Text_2:
# 411 "data/maps/MyrriniIsland/scripts.pory"
	.string "Woah, it's a Toucannon! It must have\n"
	.string "been flying by and stopped for fruit!$"

MyrriniIsland_EventScript_Kilowattrel_Text_0:
# 421 "data/maps/MyrriniIsland/scripts.pory"
	.string "Kilowattrel$"

MyrriniIsland_EventScript_Kilowattrel_Text_1:
# 423 "data/maps/MyrriniIsland/scripts.pory"
	.string "Eee! Kreee!$"

MyrriniIsland_EventScript_Kilowattrel_Text_2:
# 427 "data/maps/MyrriniIsland/scripts.pory"
	.string "Woah, it's a Kilowattrel! It must have\n"
	.string "been flying by and stopped for fruit!$"

MyrriniIsland_EventScript_Sailor_Text_0:
# 437 "data/maps/MyrriniIsland/scripts.pory"
	.string "Sailor$"

MyrriniIsland_EventScript_Sailor_Text_1:
# 438 "data/maps/MyrriniIsland/scripts.pory"
	.string "Ships from all over the Ilios Region\n"
	.string "stop here to trade. We're expecting a\l"
	.string "big shipment soon!$"

MyrriniIsland_EventScript_OldMan_Text_0:
# 448 "data/maps/MyrriniIsland/scripts.pory"
	.string "Old Man$"

MyrriniIsland_EventScript_OldMan_Text_1:
# 449 "data/maps/MyrriniIsland/scripts.pory"
	.string "Fwahaha, I love seeing Trainers come\n"
	.string "and go from the Battle Pavilion! I give\l"
	.string "them words of encouragement on the way\l"
	.string "in, and I console them if they lost when\l"
	.string "they leave.$"

MyrriniIsland_EventScript_BattlePavilionSign_Text_0:
# 458 "data/maps/MyrriniIsland/scripts.pory"
	.string "Myrrini Island Battle Pavilion\n"
	.string "Try a New Type of Battle!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_0:
# 470 "data/maps/MyrriniIsland/scripts.pory"
	.string "???$"

MyrriniIsland_EventScript_ChimeraEvent_Text_1:
# 471 "data/maps/MyrriniIsland/scripts.pory"
	.string "Hey, get away from me!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_2:
# 484 "data/maps/MyrriniIsland/scripts.pory"
	.string "Thyrsus$"

MyrriniIsland_EventScript_ChimeraEvent_Text_3:
# 485 "data/maps/MyrriniIsland/scripts.pory"
	.string "{PLAYER}, did you hear that? Sounds\n"
	.string "like someone's in trouble. No\l"
	.string "disruptions to the party on my Island!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_4:
# 494 "data/maps/MyrriniIsland/scripts.pory"
	.string "Rania$"

MyrriniIsland_EventScript_ChimeraEvent_Text_5:
# 495 "data/maps/MyrriniIsland/scripts.pory"
	.string "{PLAYER}, thank the Fates! I'm being\n"
	.string "swarmed with Team Chimera Admins!\l"
	.string "Please, give me some help here!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_6:
# 500 "data/maps/MyrriniIsland/scripts.pory"
	.string "HOLD IT!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_7:
# 508 "data/maps/MyrriniIsland/scripts.pory"
	.string "Team Chimera? On MY island?! No no no,\n"
	.string "this is all wrong! I don't appreciate\l"
	.string "party crashers here!\p"
	.string "Will you leave on your own? Or do I need\n"
	.string "my Hypno to throw you into the sea?$"

MyrriniIsland_EventScript_ChimeraEvent_Text_8:
# 512 "data/maps/MyrriniIsland/scripts.pory"
	.string "Chimera Admin 1$"

MyrriniIsland_EventScript_ChimeraEvent_Text_9:
# 513 "data/maps/MyrriniIsland/scripts.pory"
	.string "Kekeke, you think you can take us on?\n"
	.string "You're fools, all of you! Get ready to-$"

MyrriniIsland_EventScript_ChimeraEvent_Text_10:
# 519 "data/maps/MyrriniIsland/scripts.pory"
	.string "Chimera Admin 2$"

MyrriniIsland_EventScript_ChimeraEvent_Text_11:
# 520 "data/maps/MyrriniIsland/scripts.pory"
	.string "Hey, the Boss is coming! Get out of the\n"
	.string "way!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_12:
# 533 "data/maps/MyrriniIsland/scripts.pory"
	.string "Chimera Boss$"

MyrriniIsland_EventScript_ChimeraEvent_Text_13:
# 534 "data/maps/MyrriniIsland/scripts.pory"
	.string "Hm. Quite the party we have going on\n"
	.string "here, eh? A great, big circus, and all I\l"
	.string "see are clowns.$"

MyrriniIsland_EventScript_ChimeraEvent_Text_14:
# 539 "data/maps/MyrriniIsland/scripts.pory"
	.string "You two. The tip specifically told us\n"
	.string "MARMARO Island, not MYRRINI Island.\l"
	.string "But when I got to the mines, imagine my\l"
	.string "surprise to see you weren't there.\p"
	.string "Grr...! {COLOR RED}You FOOLS! This artifact is KEY\n"
	.string "to reawakening the Ancient Pokémon,\l"
	.string "but here you are on the WRONG ISLAND!{COLOR DARK_GRAY}$"

MyrriniIsland_EventScript_ChimeraEvent_Text_15:
# 541 "data/maps/MyrriniIsland/scripts.pory"
	.string "Chimera Admins$"

MyrriniIsland_EventScript_ChimeraEvent_Text_16:
# 542 "data/maps/MyrriniIsland/scripts.pory"
	.string "W-we-we're sorry, {COLOR GREEN}Miss Mara{COLOR DARK_GRAY}! We'll get to\n"
	.string "the {COLOR GREEN}Marmaro Mines{COLOR DARK_GRAY} right away!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_17:
# 553 "data/maps/MyrriniIsland/scripts.pory"
	.string "Miss Mara$"

MyrriniIsland_EventScript_ChimeraEvent_Text_18:
# 554 "data/maps/MyrriniIsland/scripts.pory"
	.string "Sigh... I apologize for losing my temper.\n"
	.string "Their repeated failures to fight you\l"
	.string "have brought shame to Team Chimera. In\l"
	.string "fact, if you fought again now, you'd\l"
	.string "likely win.\p"
	.string "My name is Mara. I am the {COLOR GREEN}leader of Team\n"
	.string "Chimera{COLOR DARK_GRAY}. Just listen to what I have to\l"
	.string "say, then I will leave Myrrini Island in\l"
	.string "peace.\p"
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
# 560 "data/maps/MyrriniIsland/scripts.pory"
	.string "But why?! Trafficking Pokémon and\n"
	.string "using the strongest to destroy the\l"
	.string "environment... how could that POSSIBLY\l"
	.string "be a good thing?$"

MyrriniIsland_EventScript_ChimeraEvent_Text_20:
# 565 "data/maps/MyrriniIsland/scripts.pory"
	.string "Money makes the world go 'round, you\n"
	.string "naive child. When I look at a forest\l"
	.string "filled with wildlife, all I see are dollar\l"
	.string "signs. The Pokémon, the lumber, and the\l"
	.string "fossil fuels in the ground below - all\l"
	.string "can be sold, so they must all be mine.$"

MyrriniIsland_EventScript_ChimeraEvent_Text_21:
# 570 "data/maps/MyrriniIsland/scripts.pory"
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
# 581 "data/maps/MyrriniIsland/scripts.pory"
	.string "There's been chatter between Gym\n"
	.string "Leaders about Team Chimera, but as far\l"
	.string "as I know, this is the first time the\l"
	.string "Boss herself has shown up. I'm just glad\l"
	.string "they're gone from Myrrini Island.\p"
	.string "The Boss, Mara, mentioned something\n"
	.string "about the {COLOR GREEN}Marmaro Island Mines{COLOR DARK_GRAY} to the\l"
	.string "Chimera Admins. If you're on the tail of\l"
	.string "Team Chimera, I'd go there. For now, I'll\l"
	.string "stay here and keep Myrrini Island safe.$"

MyrriniIsland_EventScript_ChimeraEvent_Text_23:
# 600 "data/maps/MyrriniIsland/scripts.pory"
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

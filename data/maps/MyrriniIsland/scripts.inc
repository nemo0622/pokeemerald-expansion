MyrriniIsland_MapScripts::
# 2 "data/maps/MyrriniIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 34 "data/maps/MyrriniIsland/scripts.pory"
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
	call Route117_OnTransition
	return

MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/MyrriniIsland/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 12 "data/maps/MyrriniIsland/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MyrriniIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 35 "data/maps/MyrriniIsland/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, MyrriniIsland_EventScript_TryChimeraEvent
	.2byte 0


MyrriniIsland_EventScript_TryChimeraEvent::
# 41 "data/maps/MyrriniIsland/scripts.pory"
	setvar VAR_TEMP_1, 1
# 42 "data/maps/MyrriniIsland/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MyrriniIsland_EventScript_TryChimeraEvent_3
MyrriniIsland_EventScript_TryChimeraEvent_1:
# 46 "data/maps/MyrriniIsland/scripts.pory"
	releaseall
	end

MyrriniIsland_EventScript_TryChimeraEvent_2:
# 44 "data/maps/MyrriniIsland/scripts.pory"
	goto MyrriniIsland_EventScript_ChimeraEvent
	goto MyrriniIsland_EventScript_TryChimeraEvent_1

MyrriniIsland_EventScript_TryChimeraEvent_3:
# 42 "data/maps/MyrriniIsland/scripts.pory"
	goto_if_unset FLAG_HIDE_CHIMERA_EVENT_MYRRINI_ISLAND, MyrriniIsland_EventScript_TryChimeraEvent_2
	goto MyrriniIsland_EventScript_TryChimeraEvent_1


MyrriniIsland_EventScript_DirectionSign::
# 52 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 53 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_DirectionSign_Text_0
# 54 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 55 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_Sign_GymSign::
# 61 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 62 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_Sign_GymSign_Text_0
# 63 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 64 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_BlackBelt::
# 70 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 71 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 72 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_BlackBelt_Text_0
# 73 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_BlackBelt_Text_1
# 74 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 75 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_PsychicM::
# 81 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 82 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 83 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_PsychicM_Text_0
# 84 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_PsychicM_Text_1
# 85 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 86 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Girl::
# 92 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 93 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 94 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Girl_Text_0
# 95 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Girl_Text_1
# 96 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 97 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_OldWoman::
# 103 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 104 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 105 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_OldWoman_Text_0
# 106 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_OldWoman_Text_1
# 107 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 108 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Beauty::
# 114 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 115 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 116 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Beauty_Text_0
# 117 "data/maps/MyrriniIsland/scripts.pory"
	message MyrriniIsland_EventScript_Beauty_Text_1
# 118 "data/maps/MyrriniIsland/scripts.pory"
	waitmessage
# 119 "data/maps/MyrriniIsland/scripts.pory"
	pokemart NectarMart
# 120 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 121 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 122 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Beauty_Text_0
# 123 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Beauty_Text_2
# 124 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 125 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


	.align 2
# 129 "data/maps/MyrriniIsland/scripts.pory"
NectarMart:
# 131 "data/maps/MyrriniIsland/scripts.pory"
	.2byte ITEM_RED_NECTAR
# 132 "data/maps/MyrriniIsland/scripts.pory"
	.2byte ITEM_YELLOW_NECTAR
# 133 "data/maps/MyrriniIsland/scripts.pory"
	.2byte ITEM_PINK_NECTAR
# 134 "data/maps/MyrriniIsland/scripts.pory"
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE

MyrriniIsland_EventScript_Ribombee::
# 139 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 140 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 141 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Ribombee_Text_0
# 142 "data/maps/MyrriniIsland/scripts.pory"
	playmoncry SPECIES_RIBOMBEE, CRY_MODE_NORMAL
# 143 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Ribombee_Text_1
# 144 "data/maps/MyrriniIsland/scripts.pory"
	waitmoncry
# 145 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 146 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Camper::
# 152 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 153 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 154 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Camper_Text_0
# 157 "data/maps/MyrriniIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_MYRRINI_ALLERGIES
# 158 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MyrriniIsland_EventScript_Camper_2
# 167 "data/maps/MyrriniIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_MYRRINI_ALLERGIES
# 168 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MyrriniIsland_EventScript_Camper_5
# 178 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_3
# 179 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 181 "data/maps/MyrriniIsland/scripts.pory"
	checkitem ITEM_FULL_HEAL
# 182 "data/maps/MyrriniIsland/scripts.pory"
	delay 30
# 183 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MyrriniIsland_EventScript_Camper_8
# 193 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Camper_Text_0
# 194 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_5
# 195 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 196 "data/maps/MyrriniIsland/scripts.pory"
	removeitem ITEM_FULL_HEAL
# 197 "data/maps/MyrriniIsland/scripts.pory"
	delay 30
# 198 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 23, Common_Movement_Heart
# 199 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 200 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 201 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Camper_Text_0
# 202 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_6
# 203 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 204 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 205 "data/maps/MyrriniIsland/scripts.pory"
	giveitem ITEM_SILK_SCARF
# 206 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 208 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 209 "data/maps/MyrriniIsland/scripts.pory"
	completequest QUEST_MYRRINI_ALLERGIES
MyrriniIsland_EventScript_Camper_4:
# 212 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_Camper_2:
# 160 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_1
# 161 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 162 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_Camper_5:
# 170 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_2
# 171 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 173 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 174 "data/maps/MyrriniIsland/scripts.pory"
	startquest QUEST_MYRRINI_ALLERGIES
	goto MyrriniIsland_EventScript_Camper_4

MyrriniIsland_EventScript_Camper_8:
# 185 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Camper_Text_0
# 186 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_4
# 187 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 188 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Girl2::
# 218 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 219 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 220 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Girl_Text_0
# 221 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Girl2_Text_0
# 222 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 223 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Panpour::
# 229 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 230 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 231 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Panpour_Text_0
# 232 "data/maps/MyrriniIsland/scripts.pory"
	playmoncry SPECIES_PANPOUR, CRY_MODE_NORMAL
# 233 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Panpour_Text_1
# 234 "data/maps/MyrriniIsland/scripts.pory"
	waitmoncry
# 235 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 236 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_BugCatcher::
# 242 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 243 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 244 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_BugCatcher_Text_0
# 245 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_BugCatcher_Text_1
# 246 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 247 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Woman::
# 253 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 254 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 255 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Woman_Text_0
# 256 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Woman_Text_1
# 257 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 258 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Artist::
# 264 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 265 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 266 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Artist_Text_0
# 267 "data/maps/MyrriniIsland/scripts.pory"
	goto_if_set FLAG_GOT_TM_POISON_FANG, MyrriniIsland_EventScript_Artist_2
# 274 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_GOT_TM_POISON_FANG
# 275 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Artist_Text_2
# 276 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 277 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 278 "data/maps/MyrriniIsland/scripts.pory"
	giveitem ITEM_TM_POISON_FANG
# 279 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
MyrriniIsland_EventScript_Artist_1:
# 281 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_Artist_2:
# 269 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Artist_Text_1
# 270 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
	goto MyrriniIsland_EventScript_Artist_1


MyrriniIsland_EventScript_Farmer1::
# 287 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 288 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 289 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Farmer1_Text_0
# 290 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Farmer1_Text_1
# 291 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 292 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Farmer2::
# 298 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 299 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 300 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Farmer1_Text_0
# 301 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Farmer2_Text_0
# 302 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 303 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_LittleGirl::
# 309 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 310 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 311 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_LittleGirl_Text_0
# 312 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_LittleGirl_Text_1
# 313 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 314 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_BattleGirl::
# 320 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 321 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 322 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_BattleGirl_Text_0
# 323 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_BattleGirl_Text_1
# 324 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 325 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_HexManiac::
# 331 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 332 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_HexManiac_Text_0
# 333 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_1
# 334 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 335 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 336 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 36, Common_Movement_ExclamationMark
# 337 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 338 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 339 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 340 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_HexManiac_Text_0
# 343 "data/maps/MyrriniIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_TRY_MYRRINI_BATTLE_PAVILION
# 344 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MyrriniIsland_EventScript_HexManiac_2
# 353 "data/maps/MyrriniIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_TRY_MYRRINI_BATTLE_PAVILION
# 354 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MyrriniIsland_EventScript_HexManiac_5
# 364 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_4
# 365 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 367 "data/maps/MyrriniIsland/scripts.pory"
	delay 30
# 368 "data/maps/MyrriniIsland/scripts.pory"
	goto_if_set FLAG_PLAYED_IN_MYRRINI_BATTLE_PAVILION, MyrriniIsland_EventScript_HexManiac_8
# 382 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_HexManiac_Text_0
# 383 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_6
# 384 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
MyrriniIsland_EventScript_HexManiac_4:
# 387 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_HexManiac_2:
# 346 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_2
# 347 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 348 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_HexManiac_5:
# 356 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_3
# 357 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 359 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 360 "data/maps/MyrriniIsland/scripts.pory"
	startquest QUEST_TRY_MYRRINI_BATTLE_PAVILION
	goto MyrriniIsland_EventScript_HexManiac_4

MyrriniIsland_EventScript_HexManiac_8:
# 370 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_HexManiac_Text_0
# 371 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_HexManiac_Text_5
# 372 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 373 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 374 "data/maps/MyrriniIsland/scripts.pory"
	giveitem ITEM_REAPER_CLOTH
# 375 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 377 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 378 "data/maps/MyrriniIsland/scripts.pory"
	completequest QUEST_TRY_MYRRINI_BATTLE_PAVILION
	goto MyrriniIsland_EventScript_HexManiac_4


MyrriniIsland_EventScript_Zorua::
# 393 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 394 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 395 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Zorua_Text_0
# 396 "data/maps/MyrriniIsland/scripts.pory"
	playmoncry SPECIES_ZORUA_HISUIAN, CRY_MODE_NORMAL
# 397 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Zorua_Text_1
# 398 "data/maps/MyrriniIsland/scripts.pory"
	waitmoncry
# 399 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 400 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Scientist::
# 406 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 407 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 408 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Scientist_Text_0
# 409 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Scientist_Text_1
# 410 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 411 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Toucannon::
# 417 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 418 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 419 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Toucannon_Text_0
# 420 "data/maps/MyrriniIsland/scripts.pory"
	playmoncry SPECIES_TOUCANNON, CRY_MODE_NORMAL
# 421 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Toucannon_Text_1
# 422 "data/maps/MyrriniIsland/scripts.pory"
	waitmoncry
# 423 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 424 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 425 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Toucannon_Text_2
# 426 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 427 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Kilowattrel::
# 433 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 434 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 435 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Kilowattrel_Text_0
# 436 "data/maps/MyrriniIsland/scripts.pory"
	playmoncry SPECIES_KILOWATTREL, CRY_MODE_NORMAL
# 437 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Kilowattrel_Text_1
# 438 "data/maps/MyrriniIsland/scripts.pory"
	waitmoncry
# 439 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 440 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 441 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Kilowattrel_Text_2
# 442 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 443 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Sailor::
# 449 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 450 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 451 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Sailor_Text_0
# 452 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Sailor_Text_1
# 453 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 454 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_OldMan::
# 460 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 461 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 462 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_OldMan_Text_0
# 463 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_OldMan_Text_1
# 464 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 465 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_BattlePavilionSign::
# 471 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 472 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_BattlePavilionSign_Text_0
# 473 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 474 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_ChimeraEvent::
# 480 "data/maps/MyrriniIsland/scripts.pory"
	setvar VAR_TEMP_1, 1
# 482 "data/maps/MyrriniIsland/scripts.pory"
	lockall
# 483 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 484 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_0
# 485 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_1
# 486 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 487 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 488 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 489 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 490 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 491 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 492 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 493 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 494 "data/maps/MyrriniIsland/scripts.pory"
	clearflag FLAG_HIDE_EUTERPE_DURING_CHIMERA_EVENT_MYRRINI_ISLAND
# 495 "data/maps/MyrriniIsland/scripts.pory"
	addobject 55
# 496 "data/maps/MyrriniIsland/scripts.pory"
	showobjectat 55, MAP_MYRRINI_ISLAND
# 497 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, Common_Movement_WalkDown
# 498 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_2
# 499 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_3
# 500 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 502 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MyrriniIsland_Movement_PlayerWalkDownToEvent
# 503 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, MyrriniIsland_Movement_EuterpeApproach
# 504 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 505 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 506 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 52, Common_Movement_FaceUp
# 507 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 508 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_4
# 509 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_5
# 510 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 511 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 513 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_2
# 514 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_6
# 515 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 516 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 517 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, MyrriniIsland_Movement_PlayerAndEuterpeReposition
# 518 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 519 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 53, Common_Movement_FaceUp
# 520 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 521 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_2
# 522 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_7
# 523 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 524 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 53, Common_Movement_JumpInPlaceUp
# 525 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 526 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_8
# 527 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_9
# 528 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 529 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 54, MyrriniIsland_Movement_AdminNoticesKalliope
# 530 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 531 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 53, Common_Movement_ExclamationMark
# 532 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 533 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_10
# 534 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_11
# 535 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 536 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 53, MyrriniIsland_Movement_AdminsMoveForBoss
# 537 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 54, MyrriniIsland_Movement_AdminsMoveForBoss
# 538 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 540 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MyrriniIsland_Movement_PlayerAndEuterpeReposition
# 541 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, MyrriniIsland_Movement_PlayerAndEuterpeReposition
# 542 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 52, Common_Movement_FaceDown
# 543 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 545 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, MyrriniIsland_Movement_KalliopeApproaches
# 546 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 547 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_12
# 548 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_13
# 549 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 550 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, Common_Movement_WalkRight
# 551 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 552 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_12
# 553 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_14
# 554 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 555 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_15
# 556 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_16
# 557 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 558 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 53, MyrriniIsland_Movement_AdminsFlee
# 559 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 54, MyrriniIsland_Movement_AdminsFlee
# 560 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 561 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 562 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, Common_Movement_WalkLeft
# 563 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 564 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, Common_Movement_FaceUp
# 565 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 567 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_17
# 568 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_18
# 569 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 570 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 571 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 52, Common_Movement_JumpInPlaceDown
# 572 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 573 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_4
# 574 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_19
# 575 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 576 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, Common_Movement_FaceLeft
# 577 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 578 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_17
# 579 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_20
# 580 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 581 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, Common_Movement_FaceUp
# 582 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 583 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_17
# 584 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_21
# 585 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 586 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 56, MyrriniIsland_Movement_KalliopeLeaves
# 587 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 588 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 590 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 52, Common_Movement_FaceRight
# 591 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 592 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, Common_Movement_FaceLeft
# 593 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 594 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_2
# 595 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_22
# 596 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 597 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 55, MyrriniIsland_Movement_EuterpeLeaves
# 598 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 604 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 605 "data/maps/MyrriniIsland/scripts.pory"
	startquest QUEST_FREE_MARMARO_MINES
# 606 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 607 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 609 "data/maps/MyrriniIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 610 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 611 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_ChimeraEvent_Text_4
# 612 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_ChimeraEvent_Text_23
# 613 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 614 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 52, MyrriniIsland_Movement_RaniaLeaves
# 615 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 617 "data/maps/MyrriniIsland/scripts.pory"
	removeobject 52
# 618 "data/maps/MyrriniIsland/scripts.pory"
	removeobject 53
# 619 "data/maps/MyrriniIsland/scripts.pory"
	removeobject 54
# 620 "data/maps/MyrriniIsland/scripts.pory"
	removeobject 55
# 621 "data/maps/MyrriniIsland/scripts.pory"
	removeobject 56
# 622 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_HIDE_CHIMERA_EVENT_MYRRINI_ISLAND
# 623 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_HIDE_EUTERPE_DURING_CHIMERA_EVENT_MYRRINI_ISLAND
# 624 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_HIDE_GRUNT_BLOCKING_MARMARO_MINES
# 625 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_VISITED_PENTEPETAL_CITY
# 630 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_HIDE_RANIA_ACRISIA_UNIVERSITY
# 631 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 632 "data/maps/MyrriniIsland/scripts.pory"
	startquest QUEST_VISIT_RANIA_PENTEPETAL
# 633 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 634 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 636 "data/maps/MyrriniIsland/scripts.pory"
	releaseall
	end


# 640 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_PlayerWalkDownToEvent:
# 642 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 642 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 642 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 642 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 643 "data/maps/MyrriniIsland/scripts.pory"
	emote_exclamation_mark
# 644 "data/maps/MyrriniIsland/scripts.pory"
	delay_16
# 645 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 645 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 645 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 645 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 645 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 645 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 646 "data/maps/MyrriniIsland/scripts.pory"
	jump_in_place_down
# 646 "data/maps/MyrriniIsland/scripts.pory"
	jump_in_place_down
# 647 "data/maps/MyrriniIsland/scripts.pory"
	face_down
# 648 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 650 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_EuterpeApproach:
# 652 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 652 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 652 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 652 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 653 "data/maps/MyrriniIsland/scripts.pory"
	delay_16
# 654 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 654 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 654 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 654 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 654 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 654 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_down
# 655 "data/maps/MyrriniIsland/scripts.pory"
	face_down
# 656 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 658 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_AdminNoticesKalliope:
# 660 "data/maps/MyrriniIsland/scripts.pory"
	face_down
# 661 "data/maps/MyrriniIsland/scripts.pory"
	delay_16
# 662 "data/maps/MyrriniIsland/scripts.pory"
	emote_exclamation_mark
# 663 "data/maps/MyrriniIsland/scripts.pory"
	delay_16
# 664 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 665 "data/maps/MyrriniIsland/scripts.pory"
	face_up
# 666 "data/maps/MyrriniIsland/scripts.pory"
	jump_in_place_up
# 667 "data/maps/MyrriniIsland/scripts.pory"
	face_up
# 668 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 670 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_AdminsMoveForBoss:
# 672 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 672 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 673 "data/maps/MyrriniIsland/scripts.pory"
	face_left
# 674 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 676 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_PlayerAndEuterpeReposition:
# 678 "data/maps/MyrriniIsland/scripts.pory"
	walk_right
# 679 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 680 "data/maps/MyrriniIsland/scripts.pory"
	face_down
# 681 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 683 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_KalliopeApproaches:
# 685 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 685 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 685 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 685 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 685 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 686 "data/maps/MyrriniIsland/scripts.pory"
	walk_right
# 687 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 688 "data/maps/MyrriniIsland/scripts.pory"
	face_up
# 689 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 691 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_AdminsFlee:
# 693 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 693 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 693 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 693 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 693 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 693 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 693 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 693 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 693 "data/maps/MyrriniIsland/scripts.pory"
	walk_fast_right
# 694 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 696 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_KalliopeLeaves:
# 698 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 699 "data/maps/MyrriniIsland/scripts.pory"
	walk_left
# 700 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 700 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 700 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 700 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 700 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 700 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 700 "data/maps/MyrriniIsland/scripts.pory"
	walk_down
# 701 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 703 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_EuterpeLeaves:
# 705 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 706 "data/maps/MyrriniIsland/scripts.pory"
	walk_left
# 706 "data/maps/MyrriniIsland/scripts.pory"
	walk_left
# 707 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 707 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 707 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 707 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 707 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 707 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 708 "data/maps/MyrriniIsland/scripts.pory"
	step_end

# 710 "data/maps/MyrriniIsland/scripts.pory"
MyrriniIsland_Movement_RaniaLeaves:
# 712 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 712 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 712 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 712 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 712 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 712 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 712 "data/maps/MyrriniIsland/scripts.pory"
	walk_up
# 713 "data/maps/MyrriniIsland/scripts.pory"
	step_end

MyrriniIsland_EventScript_WomanGivesEggDoll::
# 718 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 719 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 720 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_WomanGivesEggDoll_Text_0
# 721 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_WomanGivesEggDoll_Text_1
# 722 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 723 "data/maps/MyrriniIsland/scripts.pory"
	goto_if_unset FLAG_GOT_EGG_DOLL, MyrriniIsland_EventScript_WomanGivesEggDoll_2
MyrriniIsland_EventScript_WomanGivesEggDoll_1:
# 733 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_WomanGivesEggDoll_2:
# 725 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_WomanGivesEggDoll_Text_0
# 726 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_WomanGivesEggDoll_Text_2
# 727 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 728 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 729 "data/maps/MyrriniIsland/scripts.pory"
	givedecoration DECOR_EGG_DOLL
# 730 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 731 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_GOT_EGG_DOLL
	goto MyrriniIsland_EventScript_WomanGivesEggDoll_1


MyrriniIsland_EventScript_DirectionSign_Text_0:
# 53 "data/maps/MyrriniIsland/scripts.pory"
	.string "Myrrini Island\n"
	.string "The Island of Festivals\p"
	.string "{LEFT_ARROW} Sea of Asteri - East$"

MyrriniIsland_Sign_GymSign_Text_0:
# 62 "data/maps/MyrriniIsland/scripts.pory"
	.string "Gym Leader: Euterpe\n"
	.string "Muse of Parties and Poisons$"

MyrriniIsland_EventScript_BlackBelt_Text_0:
# 72 "data/maps/MyrriniIsland/scripts.pory"
	.string "Black Belt$"

MyrriniIsland_EventScript_BlackBelt_Text_1:
# 73 "data/maps/MyrriniIsland/scripts.pory"
	.string "Sometimes, you have to kick back and relax. Myrrini Island is perfect for that!$"

MyrriniIsland_EventScript_PsychicM_Text_0:
# 83 "data/maps/MyrriniIsland/scripts.pory"
	.string "Psychic$"

MyrriniIsland_EventScript_PsychicM_Text_1:
# 84 "data/maps/MyrriniIsland/scripts.pory"
	.string "This island has lots of grape vines,\n"
	.string "purple fruited trees, and purple\l"
	.string "buildings. Purple is my favorite color,\l"
	.string "so I love it!$"

MyrriniIsland_EventScript_Girl_Text_0:
# 94 "data/maps/MyrriniIsland/scripts.pory"
	.string "Girl$"

MyrriniIsland_EventScript_Girl_Text_1:
# 95 "data/maps/MyrriniIsland/scripts.pory"
	.string "Migratory Pokémon stop on Myrrini\n"
	.string "Island while they fly, like that Swanna\l"
	.string "on the roof! They join up with the\l"
	.string "native Oricorio found here to dance and\l"
	.string "sing.$"

MyrriniIsland_EventScript_OldWoman_Text_0:
# 105 "data/maps/MyrriniIsland/scripts.pory"
	.string "Old Woman$"

MyrriniIsland_EventScript_OldWoman_Text_1:
# 106 "data/maps/MyrriniIsland/scripts.pory"
	.string "Ahh, this is the life... I knew moving to\n"
	.string "Myrrini Island was the right choice. The\l"
	.string "folks here are nice, and that old sailor\l"
	.string "over there is nice on the eyes... ehehe!$"

MyrriniIsland_EventScript_Beauty_Text_0:
# 116 "data/maps/MyrriniIsland/scripts.pory"
	.string "Beauty$"

MyrriniIsland_EventScript_Beauty_Text_1:
# 117 "data/maps/MyrriniIsland/scripts.pory"
	.string "The wildflowers growing on this island\n"
	.string "make it a dream! My Ribombee is having\l"
	.string "the time of her life gathering nectar\l"
	.string "and pollen from them all.\p"
	.string "Are you interested in buying any of the\n"
	.string "Nectar? Oricorio seem to love it!$"

MyrriniIsland_EventScript_Beauty_Text_2:
# 123 "data/maps/MyrriniIsland/scripts.pory"
	.string "Come again! I'll still be here with my\n"
	.string "sweet Ribombee.$"

MyrriniIsland_EventScript_Ribombee_Text_0:
# 141 "data/maps/MyrriniIsland/scripts.pory"
	.string "Ribombee$"

MyrriniIsland_EventScript_Ribombee_Text_1:
# 143 "data/maps/MyrriniIsland/scripts.pory"
	.string "Zee-ee-ee!$"

MyrriniIsland_EventScript_Camper_Text_0:
# 154 "data/maps/MyrriniIsland/scripts.pory"
	.string "Camper$"

MyrriniIsland_EventScript_Camper_Text_1:
# 160 "data/maps/MyrriniIsland/scripts.pory"
	.string "My allergies are all cleared up! Now I\n"
	.string "can fully enjoy Myrrini Island!$"

MyrriniIsland_EventScript_Camper_Text_2:
# 170 "data/maps/MyrriniIsland/scripts.pory"
	.string "The outdoors are great and all, but...\n"
	.string "ACHOO! SHNIFF! My allergies are acting\l"
	.string "up...\p"
	.string "You seem like you're doing alright, could\n"
	.string "you bring me a {COLOR GREEN}Full Heal{COLOR DARK_GRAY}? Maybe that'll\l"
	.string "help my allergies.$"

MyrriniIsland_EventScript_Camper_Text_3:
# 178 "data/maps/MyrriniIsland/scripts.pory"
	.string "ACHOO! H-hey... SHNIFFLE! Did you\n"
	.string "happen to bring a Full Heal...?$"

MyrriniIsland_EventScript_Camper_Text_4:
# 186 "data/maps/MyrriniIsland/scripts.pory"
	.string "Aww, but my nose is totally clogged.\p"
	.string "Bring me a {COLOR GREEN}Full Heal{COLOR DARK_GRAY} for my pollen\n"
	.string "allergy, please!$"

MyrriniIsland_EventScript_Camper_Text_5:
# 194 "data/maps/MyrriniIsland/scripts.pory"
	.string "Oh, you've got it! Let me just use this\n"
	.string "quick...$"

MyrriniIsland_EventScript_Camper_Text_6:
# 202 "data/maps/MyrriniIsland/scripts.pory"
	.string "Woah, what a difference that made! I\n"
	.string "can totally breathe now!\p"
	.string "Now I can have fun outside with the\n"
	.string "flowers. Thank you! Take this!$"

MyrriniIsland_EventScript_Girl2_Text_0:
# 221 "data/maps/MyrriniIsland/scripts.pory"
	.string "The crops and fruits grown on Myrrini\n"
	.string "Island are the best in Ilios! I think\l"
	.string "it's the sunlight and the warm weather.$"

MyrriniIsland_EventScript_Panpour_Text_0:
# 231 "data/maps/MyrriniIsland/scripts.pory"
	.string "Panpour$"

MyrriniIsland_EventScript_Panpour_Text_1:
# 233 "data/maps/MyrriniIsland/scripts.pory"
	.string "Hia hee ee!$"

MyrriniIsland_EventScript_BugCatcher_Text_0:
# 244 "data/maps/MyrriniIsland/scripts.pory"
	.string "Bug Catcher$"

MyrriniIsland_EventScript_BugCatcher_Text_1:
# 245 "data/maps/MyrriniIsland/scripts.pory"
	.string "These markets always attract a bunch\n"
	.string "of Pokémon. I'm looking for any\l"
	.string "Bug-type Pokémon that show up!$"

MyrriniIsland_EventScript_Woman_Text_0:
# 255 "data/maps/MyrriniIsland/scripts.pory"
	.string "Performer$"

MyrriniIsland_EventScript_Woman_Text_1:
# 256 "data/maps/MyrriniIsland/scripts.pory"
	.string "Can you smell it? The pollen in the air,\n"
	.string "the fruits, and the salt sea spray... I'm\l"
	.string "so glad I moved here!$"

MyrriniIsland_EventScript_Artist_Text_0:
# 266 "data/maps/MyrriniIsland/scripts.pory"
	.string "Artist$"

MyrriniIsland_EventScript_Artist_Text_1:
# 269 "data/maps/MyrriniIsland/scripts.pory"
	.string "Inflicting opposing Pokémon with\n"
	.string "status effects is a sure way to win\l"
	.string "Pokémon battles!$"

MyrriniIsland_EventScript_Artist_Text_2:
# 275 "data/maps/MyrriniIsland/scripts.pory"
	.string "The Gym Leader on Myrrini Island\n"
	.string "specializes in Poison-type moves, which\l"
	.string "can tear through teams by inflicting\l"
	.string "the Poison effect on your Pokémon. I\l"
	.string "created this TM based on those\l"
	.string "techniques!$"

MyrriniIsland_EventScript_Farmer1_Text_0:
# 289 "data/maps/MyrriniIsland/scripts.pory"
	.string "Farmer$"

MyrriniIsland_EventScript_Farmer1_Text_1:
# 290 "data/maps/MyrriniIsland/scripts.pory"
	.string "These fruit trees are blooming all\n"
	.string "across the island! We're gonna make a\l"
	.string "fortune selling all this!$"

MyrriniIsland_EventScript_Farmer2_Text_0:
# 301 "data/maps/MyrriniIsland/scripts.pory"
	.string "Lot'sa Pokémon come around to snack on\n"
	.string "the fruits growing here. We gather and\l"
	.string "sell the ones which native Pokémon\l"
	.string "don't get to first.$"

MyrriniIsland_EventScript_LittleGirl_Text_0:
# 311 "data/maps/MyrriniIsland/scripts.pory"
	.string "Little Girl$"

MyrriniIsland_EventScript_LittleGirl_Text_1:
# 312 "data/maps/MyrriniIsland/scripts.pory"
	.string "Sometimes, the nice people who run the\n"
	.string "Daycare let me play with the Pokémon!\l"
	.string "When I grow up, I wanna work there with\l"
	.string "them!$"

MyrriniIsland_EventScript_BattleGirl_Text_0:
# 322 "data/maps/MyrriniIsland/scripts.pory"
	.string "Battle Girl$"

MyrriniIsland_EventScript_BattleGirl_Text_1:
# 323 "data/maps/MyrriniIsland/scripts.pory"
	.string "Phew, I just got totally wiped out at\n"
	.string "the Battle Pavilion! It's just up the\l"
	.string "road to the north.\p"
	.string "In the Myrrini Battle Pavilion, Pokémon\n"
	.string "choose their own actions in battle. It's\l"
	.string "a whole other level of strategy!$"

MyrriniIsland_EventScript_HexManiac_Text_0:
# 332 "data/maps/MyrriniIsland/scripts.pory"
	.string "Crystal Girl$"

MyrriniIsland_EventScript_HexManiac_Text_1:
# 333 "data/maps/MyrriniIsland/scripts.pory"
	.string "Huff, huff... Come on, Zorua! We have to\n"
	.string "keep training!$"

MyrriniIsland_EventScript_HexManiac_Text_2:
# 346 "data/maps/MyrriniIsland/scripts.pory"
	.string "If you can do well in the Battle\n"
	.string "Pavilion, so can Zorua and I! We're\l"
	.string "gonna be the best!$"

MyrriniIsland_EventScript_HexManiac_Text_3:
# 356 "data/maps/MyrriniIsland/scripts.pory"
	.string "Oh! Sorry, we were in an intense training\n"
	.string "match. Zorua tried their best, but the\l"
	.string "Battle Pavilion proved to be too much\l"
	.string "for it.\p"
	.string "Honestly, I'm not convinced the Battle\n"
	.string "Pavilion is even possible! If you\l"
	.string "{COLOR GREEN}participate in the Myrrini Battle\l"
	.string "Pavilion{COLOR DARK_GRAY}, let me know what you think.$"

MyrriniIsland_EventScript_HexManiac_Text_4:
# 364 "data/maps/MyrriniIsland/scripts.pory"
	.string "Hey, you're back! Have you tried the\n"
	.string "Battle Pavilion on Myrrini Island yet?$"

MyrriniIsland_EventScript_HexManiac_Text_5:
# 371 "data/maps/MyrriniIsland/scripts.pory"
	.string "Oh, you actually did! And your Pokémon\n"
	.string "did alright?\p"
	.string "Okay, I'm convinced now! Zorua and I\n"
	.string "just need more training! Thanks for\l"
	.string "inspiring me. Take this!$"

MyrriniIsland_EventScript_HexManiac_Text_6:
# 383 "data/maps/MyrriniIsland/scripts.pory"
	.string "Not yet, huh? I know, it's super\n"
	.string "intimidating!\p"
	.string "Come back once you've tried the {COLOR GREEN}Myrrini\n"
	.string "Battle Pavilion{COLOR DARK_GRAY}. Anyway, back to\l"
	.string "training!$"

MyrriniIsland_EventScript_Zorua_Text_0:
# 395 "data/maps/MyrriniIsland/scripts.pory"
	.string "Zorua$"

MyrriniIsland_EventScript_Zorua_Text_1:
# 397 "data/maps/MyrriniIsland/scripts.pory"
	.string "Huaaa...$"

MyrriniIsland_EventScript_Scientist_Text_0:
# 408 "data/maps/MyrriniIsland/scripts.pory"
	.string "Scientist$"

MyrriniIsland_EventScript_Scientist_Text_1:
# 409 "data/maps/MyrriniIsland/scripts.pory"
	.string "I hear the Gym Leader on this island\n"
	.string "specializes in Poison-types and pulling\l"
	.string "tricks, like confusing opposing\l"
	.string "Pokémon. This is gonna be a hard battle\l"
	.string "to win, that's for sure...$"

MyrriniIsland_EventScript_Toucannon_Text_0:
# 419 "data/maps/MyrriniIsland/scripts.pory"
	.string "Toucannon$"

MyrriniIsland_EventScript_Toucannon_Text_1:
# 421 "data/maps/MyrriniIsland/scripts.pory"
	.string "Caww-aww!$"

MyrriniIsland_EventScript_Toucannon_Text_2:
# 425 "data/maps/MyrriniIsland/scripts.pory"
	.string "Woah, it's a Toucannon! It must have\n"
	.string "been flying by and stopped for fruit!$"

MyrriniIsland_EventScript_Kilowattrel_Text_0:
# 435 "data/maps/MyrriniIsland/scripts.pory"
	.string "Kilowattrel$"

MyrriniIsland_EventScript_Kilowattrel_Text_1:
# 437 "data/maps/MyrriniIsland/scripts.pory"
	.string "Eee! Kreee!$"

MyrriniIsland_EventScript_Kilowattrel_Text_2:
# 441 "data/maps/MyrriniIsland/scripts.pory"
	.string "Woah, it's a Kilowattrel! It must have\n"
	.string "been flying by and stopped for fruit!$"

MyrriniIsland_EventScript_Sailor_Text_0:
# 451 "data/maps/MyrriniIsland/scripts.pory"
	.string "Sailor$"

MyrriniIsland_EventScript_Sailor_Text_1:
# 452 "data/maps/MyrriniIsland/scripts.pory"
	.string "Ships from all over the Ilios Region\n"
	.string "stop here to trade. We're expecting a\l"
	.string "big shipment soon!$"

MyrriniIsland_EventScript_OldMan_Text_0:
# 462 "data/maps/MyrriniIsland/scripts.pory"
	.string "Old Man$"

MyrriniIsland_EventScript_OldMan_Text_1:
# 463 "data/maps/MyrriniIsland/scripts.pory"
	.string "Fwahaha, I love seeing Trainers come\n"
	.string "and go from the Battle Pavilion! I give\l"
	.string "them words of encouragement on the way\l"
	.string "in, and I console them if they lost when\l"
	.string "they leave.$"

MyrriniIsland_EventScript_BattlePavilionSign_Text_0:
# 472 "data/maps/MyrriniIsland/scripts.pory"
	.string "Myrrini Island Battle Pavilion\n"
	.string "Try a New Type of Battle!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_0:
# 484 "data/maps/MyrriniIsland/scripts.pory"
	.string "???$"

MyrriniIsland_EventScript_ChimeraEvent_Text_1:
# 485 "data/maps/MyrriniIsland/scripts.pory"
	.string "Hey, get away from me!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_2:
# 498 "data/maps/MyrriniIsland/scripts.pory"
	.string "Euterpe$"

MyrriniIsland_EventScript_ChimeraEvent_Text_3:
# 499 "data/maps/MyrriniIsland/scripts.pory"
	.string "{PLAYER}, did you hear that? Sounds\n"
	.string "like someone's in trouble. No\l"
	.string "disruptions to the party on my Island!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_4:
# 508 "data/maps/MyrriniIsland/scripts.pory"
	.string "Rania$"

MyrriniIsland_EventScript_ChimeraEvent_Text_5:
# 509 "data/maps/MyrriniIsland/scripts.pory"
	.string "{PLAYER}, thank the Fates! I'm being\n"
	.string "swarmed with Team Chimera Admins!\l"
	.string "Please, give me some help here!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_6:
# 514 "data/maps/MyrriniIsland/scripts.pory"
	.string "HOLD IT!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_7:
# 522 "data/maps/MyrriniIsland/scripts.pory"
	.string "Team Chimera? On MY island?! No no no,\n"
	.string "this is all wrong! I don't appreciate\l"
	.string "party crashers here!\p"
	.string "Will you leave on your own? Or do I need\n"
	.string "my Hypno to throw you into the sea?$"

MyrriniIsland_EventScript_ChimeraEvent_Text_8:
# 526 "data/maps/MyrriniIsland/scripts.pory"
	.string "Chimera Admin 1$"

MyrriniIsland_EventScript_ChimeraEvent_Text_9:
# 527 "data/maps/MyrriniIsland/scripts.pory"
	.string "Kekeke, you think you can take us on?\n"
	.string "You're fools, all of you! Get ready to-$"

MyrriniIsland_EventScript_ChimeraEvent_Text_10:
# 533 "data/maps/MyrriniIsland/scripts.pory"
	.string "Chimera Admin 2$"

MyrriniIsland_EventScript_ChimeraEvent_Text_11:
# 534 "data/maps/MyrriniIsland/scripts.pory"
	.string "Hey, the Boss is coming! Get out of the\n"
	.string "way!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_12:
# 547 "data/maps/MyrriniIsland/scripts.pory"
	.string "Chimera Boss$"

MyrriniIsland_EventScript_ChimeraEvent_Text_13:
# 548 "data/maps/MyrriniIsland/scripts.pory"
	.string "Hm. Quite the party we have going on\n"
	.string "here, eh? A great, big circus, and all I\l"
	.string "see are clowns.$"

MyrriniIsland_EventScript_ChimeraEvent_Text_14:
# 553 "data/maps/MyrriniIsland/scripts.pory"
	.string "You two. The tip specifically told us\n"
	.string "MARMARO Island, not MYRRINI Island.\l"
	.string "But when I got to the mines, imagine my\l"
	.string "surprise to see you weren't there.\p"
	.string "Grr...! {COLOR RED}You FOOLS! This artifact is KEY\n"
	.string "to reawakening the Ancient Pokémon,\l"
	.string "but here you are on the WRONG ISLAND!{COLOR DARK_GRAY}$"

MyrriniIsland_EventScript_ChimeraEvent_Text_15:
# 555 "data/maps/MyrriniIsland/scripts.pory"
	.string "Chimera Admins$"

MyrriniIsland_EventScript_ChimeraEvent_Text_16:
# 556 "data/maps/MyrriniIsland/scripts.pory"
	.string "W-we-we're sorry, {COLOR RED}Miss Kalliope{COLOR DARK_GRAY}! We'll\n"
	.string "get to the {COLOR GREEN}Marmaro Mines{COLOR DARK_GRAY} right away!$"

MyrriniIsland_EventScript_ChimeraEvent_Text_17:
# 567 "data/maps/MyrriniIsland/scripts.pory"
	.string "Kalliope$"

MyrriniIsland_EventScript_ChimeraEvent_Text_18:
# 568 "data/maps/MyrriniIsland/scripts.pory"
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
# 574 "data/maps/MyrriniIsland/scripts.pory"
	.string "But why?! Trafficking Pokémon and\n"
	.string "using the strongest to destroy the\l"
	.string "environment... how could that POSSIBLY\l"
	.string "be a good thing?$"

MyrriniIsland_EventScript_ChimeraEvent_Text_20:
# 579 "data/maps/MyrriniIsland/scripts.pory"
	.string "Money makes the world go 'round, you\n"
	.string "naive child. When I look at a forest\l"
	.string "filled with wildlife, all I see are dollar\l"
	.string "signs. The Pokémon, the lumber, and the\l"
	.string "fossil fuels in the ground below - all\l"
	.string "can be sold, so they must all be mine.$"

MyrriniIsland_EventScript_ChimeraEvent_Text_21:
# 584 "data/maps/MyrriniIsland/scripts.pory"
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
# 595 "data/maps/MyrriniIsland/scripts.pory"
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
# 612 "data/maps/MyrriniIsland/scripts.pory"
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
# 720 "data/maps/MyrriniIsland/scripts.pory"
	.string "Woman$"

MyrriniIsland_EventScript_WomanGivesEggDoll_Text_1:
# 721 "data/maps/MyrriniIsland/scripts.pory"
	.string "People sometimes leave the Eggs their\n"
	.string "Pokémon lay here. I take those Eggs and\l"
	.string "care for them... I don't know how anyone\l"
	.string "could be so heartless!$"

MyrriniIsland_EventScript_WomanGivesEggDoll_Text_2:
# 726 "data/maps/MyrriniIsland/scripts.pory"
	.string "While I'm here, I like to crochet\n"
	.string "Pokémon dolls. Here's one I made to look\l"
	.string "like an Egg!$"

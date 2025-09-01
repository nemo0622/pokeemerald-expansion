PortPello_MapScripts::
# 2 "data/maps/PortPello/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PortPello_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PortPello_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PortPello/scripts.pory"
	setflag FLAG_VISITED_PORT_PELLO
# 5 "data/maps/PortPello/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 6 "data/maps/PortPello/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 7 "data/maps/PortPello/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 8 "data/maps/PortPello/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 9 "data/maps/PortPello/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 10 "data/maps/PortPello/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 11 "data/maps/PortPello/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 12 "data/maps/PortPello/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 13 "data/maps/PortPello/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 14 "data/maps/PortPello/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 15 "data/maps/PortPello/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 16 "data/maps/PortPello/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 17 "data/maps/PortPello/scripts.pory"
	setobjectaswildencounter 33, ENCOUNTER_LAND
# 18 "data/maps/PortPello/scripts.pory"
	setobjectaswildencounter 34, ENCOUNTER_LAND
# 19 "data/maps/PortPello/scripts.pory"
	setobjectaswildencounter 35, ENCOUNTER_LAND
# 20 "data/maps/PortPello/scripts.pory"
	setobjectaswildencounter 36, ENCOUNTER_LAND
	return


PortPello_EventScript_DirectionSign::
# 26 "data/maps/PortPello/scripts.pory"
	lock
# 27 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_DirectionSign_Text_0
# 28 "data/maps/PortPello/scripts.pory"
	closemessage
# 29 "data/maps/PortPello/scripts.pory"
	release
	end


PortPello_EventScript_Athlete::
# 35 "data/maps/PortPello/scripts.pory"
	lock
# 36 "data/maps/PortPello/scripts.pory"
	faceplayer
# 37 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_Athlete_Text_0
# 38 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_Athlete_Text_1
# 39 "data/maps/PortPello/scripts.pory"
	closemessage
# 40 "data/maps/PortPello/scripts.pory"
	release
	end


PortPello_EventScript_LittleGirlWithPyroar::
# 46 "data/maps/PortPello/scripts.pory"
	lock
# 47 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_LittleGirlWithPyroar_Text_0
# 48 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_LittleGirlWithPyroar_Text_1
# 49 "data/maps/PortPello/scripts.pory"
	closemessage
# 50 "data/maps/PortPello/scripts.pory"
	delay 10
# 51 "data/maps/PortPello/scripts.pory"
	applymovement 14, Common_Movement_JumpInPlaceLeft
# 52 "data/maps/PortPello/scripts.pory"
	waitmovement 0
# 53 "data/maps/PortPello/scripts.pory"
	delay 10
# 54 "data/maps/PortPello/scripts.pory"
	emote 13, EMOTE_HEART
# 55 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_LittleGirlWithPyroar_Text_0
# 56 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_LittleGirlWithPyroar_Text_2
# 57 "data/maps/PortPello/scripts.pory"
	closemessage
# 58 "data/maps/PortPello/scripts.pory"
	release
	end


PortPello_EventScript_Artist::
# 64 "data/maps/PortPello/scripts.pory"
	lock
# 65 "data/maps/PortPello/scripts.pory"
	faceplayer
# 66 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_Artist_Text_0
# 67 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_Artist_Text_1
# 68 "data/maps/PortPello/scripts.pory"
	closemessage
# 69 "data/maps/PortPello/scripts.pory"
	release
	end


PortPello_EventScript_OldManShopping::
# 75 "data/maps/PortPello/scripts.pory"
	lock
# 76 "data/maps/PortPello/scripts.pory"
	faceplayer
# 77 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_OldManShopping_Text_0
# 78 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_OldManShopping_Text_1
# 79 "data/maps/PortPello/scripts.pory"
	closemessage
# 80 "data/maps/PortPello/scripts.pory"
	release
	end


PortPello_EventScript_CyclingTriathleteM::
# 86 "data/maps/PortPello/scripts.pory"
	lock
# 87 "data/maps/PortPello/scripts.pory"
	faceplayer
# 88 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_CyclingTriathleteM_Text_0
# 91 "data/maps/PortPello/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_SHOW_CYCLIZAR_DEX_PORT_PELLO
# 92 "data/maps/PortPello/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PortPello_EventScript_CyclingTriathleteM_2
# 101 "data/maps/PortPello/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_SHOW_CYCLIZAR_DEX_PORT_PELLO
# 102 "data/maps/PortPello/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PortPello_EventScript_CyclingTriathleteM_5
# 111 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_CyclingTriathleteM_Text_3
# 112 "data/maps/PortPello/scripts.pory"
	closemessage
# 114 "data/maps/PortPello/scripts.pory"
	delay 30
# 115 "data/maps/PortPello/scripts.pory"
	getcaughtmon SPECIES_CYCLIZAR
# 116 "data/maps/PortPello/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PortPello_EventScript_CyclingTriathleteM_8
# 130 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_CyclingTriathleteM_Text_0
# 131 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_CyclingTriathleteM_Text_5
# 132 "data/maps/PortPello/scripts.pory"
	closemessage
PortPello_EventScript_CyclingTriathleteM_4:
# 135 "data/maps/PortPello/scripts.pory"
	release
	end

PortPello_EventScript_CyclingTriathleteM_2:
# 94 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_CyclingTriathleteM_Text_1
# 95 "data/maps/PortPello/scripts.pory"
	closemessage
# 96 "data/maps/PortPello/scripts.pory"
	release
	end

PortPello_EventScript_CyclingTriathleteM_5:
# 104 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_CyclingTriathleteM_Text_2
# 105 "data/maps/PortPello/scripts.pory"
	closemessage
# 106 "data/maps/PortPello/scripts.pory"
	delay 20
# 107 "data/maps/PortPello/scripts.pory"
	startquest QUEST_SHOW_CYCLIZAR_DEX_PORT_PELLO
	goto PortPello_EventScript_CyclingTriathleteM_4

PortPello_EventScript_CyclingTriathleteM_8:
# 118 "data/maps/PortPello/scripts.pory"
	emote 17, EMOTE_EXCLAM
# 119 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_CyclingTriathleteM_Text_0
# 120 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_CyclingTriathleteM_Text_4
# 121 "data/maps/PortPello/scripts.pory"
	closemessage
# 122 "data/maps/PortPello/scripts.pory"
	delay 5
# 123 "data/maps/PortPello/scripts.pory"
	giveitem ITEM_RARE_CANDY, 3
# 125 "data/maps/PortPello/scripts.pory"
	delay 20
# 126 "data/maps/PortPello/scripts.pory"
	completequest QUEST_SHOW_CYCLIZAR_DEX_PORT_PELLO
	goto PortPello_EventScript_CyclingTriathleteM_4


PortPello_EventScript_Hiker::
# 141 "data/maps/PortPello/scripts.pory"
	lock
# 142 "data/maps/PortPello/scripts.pory"
	faceplayer
# 143 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_Hiker_Text_0
# 144 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_Hiker_Text_1
# 145 "data/maps/PortPello/scripts.pory"
	closemessage
# 146 "data/maps/PortPello/scripts.pory"
	release
	end


PortPello_EventScript_Numel::
# 152 "data/maps/PortPello/scripts.pory"
	lock
# 153 "data/maps/PortPello/scripts.pory"
	faceplayer
# 154 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_Numel_Text_0
# 155 "data/maps/PortPello/scripts.pory"
	playmoncry SPECIES_NUMEL, CRY_MODE_NORMAL
# 156 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_Numel_Text_1
# 157 "data/maps/PortPello/scripts.pory"
	waitmoncry
# 158 "data/maps/PortPello/scripts.pory"
	closemessage
# 159 "data/maps/PortPello/scripts.pory"
	release
	end


PortPello_EventScript_Officer::
# 165 "data/maps/PortPello/scripts.pory"
	lock
# 166 "data/maps/PortPello/scripts.pory"
	faceplayer
# 167 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_Officer_Text_0
# 168 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_Officer_Text_1
# 169 "data/maps/PortPello/scripts.pory"
	closemessage
# 170 "data/maps/PortPello/scripts.pory"
	release
	end


PortPello_EventScript_Lass::
# 176 "data/maps/PortPello/scripts.pory"
	lock
# 177 "data/maps/PortPello/scripts.pory"
	faceplayer
# 178 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_Lass_Text_0
# 179 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_Lass_Text_1
# 180 "data/maps/PortPello/scripts.pory"
	closemessage
# 181 "data/maps/PortPello/scripts.pory"
	release
	end


PortPello_EventScript_Youngster::
# 187 "data/maps/PortPello/scripts.pory"
	lock
# 188 "data/maps/PortPello/scripts.pory"
	faceplayer
# 189 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_Youngster_Text_0
# 190 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_Youngster_Text_1
# 191 "data/maps/PortPello/scripts.pory"
	closemessage
# 192 "data/maps/PortPello/scripts.pory"
	release
	end


PortPello_EventScript_TropiusStatue::
# 198 "data/maps/PortPello/scripts.pory"
	lock
# 199 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_TropiusStatue_Text_0, MSGBOX_YESNO
# 200 "data/maps/PortPello/scripts.pory"
	closemessage
# 201 "data/maps/PortPello/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PortPello_EventScript_TropiusStatue_2
# 206 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_TropiusStatue_Text_1
# 207 "data/maps/PortPello/scripts.pory"
	closemessage
# 208 "data/maps/PortPello/scripts.pory"
	delay 30
# 209 "data/maps/PortPello/scripts.pory"
	emote OBJ_EVENT_ID_PLAYER, EMOTE_HEART
# 210 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_TropiusStatue_Text_2
# 211 "data/maps/PortPello/scripts.pory"
	closemessage
# 212 "data/maps/PortPello/scripts.pory"
	release
	end

PortPello_EventScript_TropiusStatue_2:
# 203 "data/maps/PortPello/scripts.pory"
	release
	end


PortPello_EventScript_HexManiac::
# 218 "data/maps/PortPello/scripts.pory"
	lock
# 219 "data/maps/PortPello/scripts.pory"
	faceplayer
# 220 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_HexManiac_Text_0
# 221 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_HexManiac_Text_1
# 222 "data/maps/PortPello/scripts.pory"
	closemessage
# 223 "data/maps/PortPello/scripts.pory"
	release
	end


PortPello_EventScript_FatMan::
# 229 "data/maps/PortPello/scripts.pory"
	lock
# 230 "data/maps/PortPello/scripts.pory"
	faceplayer
# 231 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_FatMan_Text_0
# 232 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_FatMan_Text_1
# 233 "data/maps/PortPello/scripts.pory"
	closemessage
# 234 "data/maps/PortPello/scripts.pory"
	release
	end


PortPello_EventScript_Fisherman::
# 240 "data/maps/PortPello/scripts.pory"
	lock
# 241 "data/maps/PortPello/scripts.pory"
	faceplayer
# 242 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_Fisherman_Text_0
# 243 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_Fisherman_Text_1
# 244 "data/maps/PortPello/scripts.pory"
	closemessage
# 245 "data/maps/PortPello/scripts.pory"
	release
	end


PortPello_EventScript_BoyWithCorphish::
# 251 "data/maps/PortPello/scripts.pory"
	lock
# 252 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_BoyWithCorphish_Text_0
# 253 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_BoyWithCorphish_Text_1
# 254 "data/maps/PortPello/scripts.pory"
	closemessage
# 255 "data/maps/PortPello/scripts.pory"
	release
	end


PortPello_EventScript_Corphish::
# 261 "data/maps/PortPello/scripts.pory"
	lock
# 262 "data/maps/PortPello/scripts.pory"
	faceplayer
# 263 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_Corphish_Text_0
# 264 "data/maps/PortPello/scripts.pory"
	playmoncry SPECIES_CORPHISH, CRY_MODE_NORMAL
# 265 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_Corphish_Text_1
# 266 "data/maps/PortPello/scripts.pory"
	waitmoncry
# 267 "data/maps/PortPello/scripts.pory"
	closemessage
# 268 "data/maps/PortPello/scripts.pory"
	release
	end


PortPello_EventScript_AceTrainer::
# 274 "data/maps/PortPello/scripts.pory"
	lock
# 275 "data/maps/PortPello/scripts.pory"
	faceplayer
# 276 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_AceTrainer_Text_0
# 277 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_AceTrainer_Text_1
# 278 "data/maps/PortPello/scripts.pory"
	closemessage
# 279 "data/maps/PortPello/scripts.pory"
	release
	end


PortPello_EventScript_Sailor::
# 285 "data/maps/PortPello/scripts.pory"
	lock
# 286 "data/maps/PortPello/scripts.pory"
	faceplayer
# 287 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_Sailor_Text_0
# 288 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_Sailor_Text_1
# 289 "data/maps/PortPello/scripts.pory"
	closemessage
# 290 "data/maps/PortPello/scripts.pory"
	release
	end


PortPello_EventScript_Beauty::
# 296 "data/maps/PortPello/scripts.pory"
	lock
# 297 "data/maps/PortPello/scripts.pory"
	faceplayer
# 298 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_Beauty_Text_0
# 299 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_Beauty_Text_1
# 300 "data/maps/PortPello/scripts.pory"
	closemessage
# 301 "data/maps/PortPello/scripts.pory"
	release
	end


PortPello_EventScript_BugCatcher::
# 307 "data/maps/PortPello/scripts.pory"
	lock
# 308 "data/maps/PortPello/scripts.pory"
	faceplayer
# 309 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_BugCatcher_Text_0
# 310 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_BugCatcher_Text_1
# 311 "data/maps/PortPello/scripts.pory"
	closemessage
# 312 "data/maps/PortPello/scripts.pory"
	release
	end


PortPello_EventScript_BattlePavilionSign::
# 318 "data/maps/PortPello/scripts.pory"
	lock
# 319 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_BattlePavilionSign_Text_0
# 320 "data/maps/PortPello/scripts.pory"
	closemessage
# 321 "data/maps/PortPello/scripts.pory"
	release
	end


PortPello_EventScript_RaniaChallengeTrigger::
# 330 "data/maps/PortPello/scripts.pory"
	lock
# 331 "data/maps/PortPello/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 332 "data/maps/PortPello/scripts.pory"
	waitmovement 0
# 333 "data/maps/PortPello/scripts.pory"
	goto PortPello_EventScript_RaniaChallengeScript
	end


PortPello_EventScript_RaniaChallengeScript::
# 339 "data/maps/PortPello/scripts.pory"
	lock
# 340 "data/maps/PortPello/scripts.pory"
	applymovement 31, Common_Movement_FacePlayer
# 341 "data/maps/PortPello/scripts.pory"
	waitmovement 0
# 342 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_RaniaChallengeScript_Text_0
# 343 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_RaniaChallengeScript_Text_1, MSGBOX_YESNO
# 344 "data/maps/PortPello/scripts.pory"
	closemessage
# 345 "data/maps/PortPello/scripts.pory"
	delay 5
# 346 "data/maps/PortPello/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PortPello_EventScript_RaniaChallengeScript_1
# 359 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_RaniaChallengeScript_Text_0
# 360 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_RaniaChallengeScript_Text_3
# 361 "data/maps/PortPello/scripts.pory"
	closemessage
# 364 "data/maps/PortPello/scripts.pory"
	goto_if_unset FLAG_HARD_MODE, PortPello_EventScript_RaniaChallengeScript_5
# 370 "data/maps/PortPello/scripts.pory"
	trainerbattle_no_intro TRAINER_PORTPELLO_RANIA_HARD, PortPello_Text_RaniaLose
PortPello_EventScript_RaniaChallengeScript_4:
# 373 "data/maps/PortPello/scripts.pory"
	delay 10
# 374 "data/maps/PortPello/scripts.pory"
	emote 31, EMOTE_EXCLAM
# 375 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_RaniaChallengeScript_Text_0
# 376 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_RaniaChallengeScript_Text_4
# 377 "data/maps/PortPello/scripts.pory"
	closemessage
# 380 "data/maps/PortPello/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 381 "data/maps/PortPello/scripts.pory"
	delay 15
# 382 "data/maps/PortPello/scripts.pory"
	setflag FLAG_HIDE_RANIA_PORT_PELLO
# 383 "data/maps/PortPello/scripts.pory"
	removeobject 31
# 384 "data/maps/PortPello/scripts.pory"
	delay 15
# 385 "data/maps/PortPello/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 386 "data/maps/PortPello/scripts.pory"
	delay 10
# 387 "data/maps/PortPello/scripts.pory"
	release
	end

PortPello_EventScript_RaniaChallengeScript_1:
# 348 "data/maps/PortPello/scripts.pory"
	speakername PortPello_EventScript_RaniaChallengeScript_Text_0
# 349 "data/maps/PortPello/scripts.pory"
	msgbox PortPello_EventScript_RaniaChallengeScript_Text_2
# 350 "data/maps/PortPello/scripts.pory"
	closemessage
# 351 "data/maps/PortPello/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 352 "data/maps/PortPello/scripts.pory"
	waitmovement 0
# 353 "data/maps/PortPello/scripts.pory"
	release
	end

PortPello_EventScript_RaniaChallengeScript_5:
# 366 "data/maps/PortPello/scripts.pory"
	trainerbattle_no_intro TRAINER_PORTPELLO_RANIA, PortPello_Text_RaniaLose
	goto PortPello_EventScript_RaniaChallengeScript_4


PortPello_EventScript_DirectionSign_Text_0:
# 27 "data/maps/PortPello/scripts.pory"
	.string "Port Pello\n"
	.string "Where Flowers Bloom\p"
	.string "{UP_ARROW} Corrin Crossing\n"
	.string "{DOWN_ARROW} The Nyx Trails$"

PortPello_EventScript_Athlete_Text_0:
# 37 "data/maps/PortPello/scripts.pory"
	.string "Athlete$"

PortPello_EventScript_Athlete_Text_1:
# 38 "data/maps/PortPello/scripts.pory"
	.string "Port Pello has some of the cleanest air\n"
	.string "in the Ilios Region. It's perfect for\l"
	.string "intense training!$"

PortPello_EventScript_LittleGirlWithPyroar_Text_0:
# 47 "data/maps/PortPello/scripts.pory"
	.string "Little Girl$"

PortPello_EventScript_LittleGirlWithPyroar_Text_1:
# 48 "data/maps/PortPello/scripts.pory"
	.string "Pye-pye, jump!$"

PortPello_EventScript_LittleGirlWithPyroar_Text_2:
# 56 "data/maps/PortPello/scripts.pory"
	.string "Good girl! Here's a Magikarp Biscuit!$"

PortPello_EventScript_Artist_Text_0:
# 66 "data/maps/PortPello/scripts.pory"
	.string "Artist$"

PortPello_EventScript_Artist_Text_1:
# 67 "data/maps/PortPello/scripts.pory"
	.string "The cherry trees of Port Pello are\n"
	.string "one-of-a-kind in Ilios.\p"
	.string "The style of buildings here used to be\n"
	.string "built in Areios Town, but since {COLOR RED}Team\l"
	.string "Chimera{COLOR DARK_GRAY} made it their {COLOR RED}Hideout{COLOR DARK_GRAY}, Port\l"
	.string "Pello is the last place where these\l"
	.string "buildings are still used.$"

PortPello_EventScript_OldManShopping_Text_0:
# 77 "data/maps/PortPello/scripts.pory"
	.string "Old Man$"

PortPello_EventScript_OldManShopping_Text_1:
# 78 "data/maps/PortPello/scripts.pory"
	.string "All the ships stopped coming after Team\n"
	.string "Chimera summoned Gouging Fire, Walking\l"
	.string "Wake, and Raging Bolt. The news called\l"
	.string "them the {COLOR RED}Legendary Beasts{COLOR DARK_GRAY}, as they\l"
	.string "were certainly more than standard\l"
	.string "Pokémon.\p"
	.string "But now that someone has been putting\n"
	.string "Team Chimera in their place, the ships\l"
	.string "have come back! The markets are full\l"
	.string "again.$"

PortPello_EventScript_CyclingTriathleteM_Text_0:
# 88 "data/maps/PortPello/scripts.pory"
	.string "Cyclist$"

PortPello_EventScript_CyclingTriathleteM_Text_1:
# 94 "data/maps/PortPello/scripts.pory"
	.string "Someday I'll take a cruise to the Fresco\n"
	.string "Isles and catch a Cyclizar for myself!$"

PortPello_EventScript_CyclingTriathleteM_Text_2:
# 104 "data/maps/PortPello/scripts.pory"
	.string "These roads are old and a little bumpy.\n"
	.string "Maybe I should be riding on a Cyclizar\l"
	.string "instead...\p"
	.string "Oh, are those Poké balls on your belt?\n"
	.string "You must be a Trainer! If you {COLOR GREEN}catch a\l"
	.string "Cyclizar{COLOR DARK_GRAY}, show me its {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} on\l"
	.string "your Rotom Phone. I need to know where\l"
	.string "to catch a Cyclizar!$"

PortPello_EventScript_CyclingTriathleteM_Text_3:
# 111 "data/maps/PortPello/scripts.pory"
	.string "You're back! Got any updates on my\n"
	.string "ride?$"

PortPello_EventScript_CyclingTriathleteM_Text_4:
# 120 "data/maps/PortPello/scripts.pory"
	.string "Ah, the {COLOR GREEN}Pokédex page{COLOR DARK_GRAY} of {COLOR GREEN}Cyclizar{COLOR DARK_GRAY}! This\n"
	.string "is just what I needed!\p"
	.string "Hmm... It looks like I can catch one for\n"
	.string "myself in the Fresco Isles. I'll have to\l"
	.string "visit there sometime! Here, I want you\l"
	.string "to have these.$"

PortPello_EventScript_CyclingTriathleteM_Text_5:
# 131 "data/maps/PortPello/scripts.pory"
	.string "Uhh... Nope, doesn't look like it's in your\n"
	.string "Rotom Phone's Pokédex.\p"
	.string "Show me the {COLOR GREEN}complete Pokédex page{COLOR DARK_GRAY} of\n"
	.string "{COLOR GREEN}Cyclizar{COLOR DARK_GRAY}, and I'll give you a reward!$"

PortPello_EventScript_Hiker_Text_0:
# 143 "data/maps/PortPello/scripts.pory"
	.string "Hiker$"

PortPello_EventScript_Hiker_Text_1:
# 144 "data/maps/PortPello/scripts.pory"
	.string "My Numel and I came all the way from\n"
	.string "Péntepetal City to see this town! Port\l"
	.string "Pello was always said to be among the\l"
	.string "most stunning views in Ilios.$"

PortPello_EventScript_Numel_Text_0:
# 154 "data/maps/PortPello/scripts.pory"
	.string "Numel$"

PortPello_EventScript_Numel_Text_1:
# 156 "data/maps/PortPello/scripts.pory"
	.string "Gwoot...!$"

PortPello_EventScript_Officer_Text_0:
# 167 "data/maps/PortPello/scripts.pory"
	.string "Officer$"

PortPello_EventScript_Officer_Text_1:
# 168 "data/maps/PortPello/scripts.pory"
	.string "Just because Port Pello is open again\n"
	.string "doesn't mean we're safe. Rumor has it\l"
	.string "that Team Chimera is {COLOR RED}regrouping in\l"
	.string "Areios Hideout{COLOR DARK_GRAY}, just south of here.$"

PortPello_EventScript_Lass_Text_0:
# 178 "data/maps/PortPello/scripts.pory"
	.string "Lass$"

PortPello_EventScript_Lass_Text_1:
# 179 "data/maps/PortPello/scripts.pory"
	.string "Hehehe, this city is so pretty! I'm so\n"
	.string "glad my family moved here.$"

PortPello_EventScript_Youngster_Text_0:
# 189 "data/maps/PortPello/scripts.pory"
	.string "Youngster$"

PortPello_EventScript_Youngster_Text_1:
# 190 "data/maps/PortPello/scripts.pory"
	.string "My book said that this city was founded\n"
	.string "by someone flying on the back of a\l"
	.string "Tropius. There's more information\l"
	.string "written on the statue, but I don't\l"
	.string "wanna read all that!$"

PortPello_EventScript_TropiusStatue_Text_0:
# 199 "data/maps/PortPello/scripts.pory"
	.string "It's a statue of a mighty Tropius. Read\n"
	.string "about it?$"

PortPello_EventScript_TropiusStatue_Text_1:
# 206 "data/maps/PortPello/scripts.pory"
	.string "In the ancient past, the Ilios Region\n"
	.string "was divided into warring city-states.\l"
	.string "After losing their family, a young\l"
	.string "traveler flew away on their Tropius in\l"
	.string "hopes of finding a new home.\p"
	.string "They flew around the entire region,\n"
	.string "unable to find a new home. Suddenly, the\l"
	.string "Tropius descended onto a barren\l"
	.string "stretch of land, unwanted by any\l"
	.string "nearby cities. The traveler chose to\l"
	.string "trust their partner and set up camp.\p"
	.string "In this exact spot, Tropius let out a\n"
	.string "mighty roar, transforming the barren\l"
	.string "lands into blooming forests. To show its\l"
	.string "love for its Trainer, Tropius created\l"
	.string "beautiful cherry blossom trees, which\l"
	.string "still shade the city today.$"

PortPello_EventScript_TropiusStatue_Text_2:
# 210 "data/maps/PortPello/scripts.pory"
	.string "Such a beautiful story about the bonds\n"
	.string "between Trainers and their Pokémon!$"

PortPello_EventScript_HexManiac_Text_0:
# 220 "data/maps/PortPello/scripts.pory"
	.string "Hex Maniac$"

PortPello_EventScript_HexManiac_Text_1:
# 221 "data/maps/PortPello/scripts.pory"
	.string "I lost most of my money in Trainer\n"
	.string "battles... I'm glad Pokémon Centers are\l"
	.string "free!$"

PortPello_EventScript_FatMan_Text_0:
# 231 "data/maps/PortPello/scripts.pory"
	.string "Man$"

PortPello_EventScript_FatMan_Text_1:
# 232 "data/maps/PortPello/scripts.pory"
	.string "My Scyther found a strange stone in\n"
	.string "the forest, and suddenly evolved into\l"
	.string "Kleavor! Isn't that an ancient\l"
	.string "Pokémon?$"

PortPello_EventScript_Fisherman_Text_0:
# 242 "data/maps/PortPello/scripts.pory"
	.string "Fisherman$"

PortPello_EventScript_Fisherman_Text_1:
# 243 "data/maps/PortPello/scripts.pory"
	.string "My family has been fishing in these\n"
	.string "waters for generations! My grandfather\l"
	.string "told me about some strange,\l"
	.string "Psychic-type fish Pokémon that lived\l"
	.string "around here, but I've never seen one\l"
	.string "myself.$"

PortPello_EventScript_BoyWithCorphish_Text_0:
# 252 "data/maps/PortPello/scripts.pory"
	.string "Boy$"

PortPello_EventScript_BoyWithCorphish_Text_1:
# 253 "data/maps/PortPello/scripts.pory"
	.string "Ahahaha! Come back here, Corphish!$"

PortPello_EventScript_Corphish_Text_0:
# 263 "data/maps/PortPello/scripts.pory"
	.string "Corphish$"

PortPello_EventScript_Corphish_Text_1:
# 265 "data/maps/PortPello/scripts.pory"
	.string "Ckh ckh ckh!$"

PortPello_EventScript_AceTrainer_Text_0:
# 276 "data/maps/PortPello/scripts.pory"
	.string "Ace Trainer$"

PortPello_EventScript_AceTrainer_Text_1:
# 277 "data/maps/PortPello/scripts.pory"
	.string "I came to Port Pello the moment it\n"
	.string "reopened. With my strong Pokémon, I can\l"
	.string "fight off Team Chimera grunts easily.$"

PortPello_EventScript_Sailor_Text_0:
# 287 "data/maps/PortPello/scripts.pory"
	.string "Sailor$"

PortPello_EventScript_Sailor_Text_1:
# 288 "data/maps/PortPello/scripts.pory"
	.string "Slowly but surely, life is coming back to\n"
	.string "Port Pello! A lot of folks are still\l"
	.string "scared of Team Chimera, though.\p"
	.string "For life to really come back to normal,\n"
	.string "Team Chimera needs to be wiped out for\l"
	.string "good.$"

PortPello_EventScript_Beauty_Text_0:
# 298 "data/maps/PortPello/scripts.pory"
	.string "Beauty$"

PortPello_EventScript_Beauty_Text_1:
# 299 "data/maps/PortPello/scripts.pory"
	.string "A city as gorgeous as Port Pello is\n"
	.string "perfect for me!$"

PortPello_EventScript_BugCatcher_Text_0:
# 309 "data/maps/PortPello/scripts.pory"
	.string "Bug Catcher$"

PortPello_EventScript_BugCatcher_Text_1:
# 310 "data/maps/PortPello/scripts.pory"
	.string "Achoo! The blooming trees are pretty,\n"
	.string "but they're not good for my allergies...$"

PortPello_EventScript_BattlePavilionSign_Text_0:
# 319 "data/maps/PortPello/scripts.pory"
	.string "Port Pello Battle Pavilion\n"
	.string "It's All or Nothing!$"

PortPello_EventScript_RaniaChallengeScript_Text_0:
# 342 "data/maps/PortPello/scripts.pory"
	.string "Rania$"

PortPello_EventScript_RaniaChallengeScript_Text_1:
# 343 "data/maps/PortPello/scripts.pory"
	.string "{PLAYER}, you've made it through Port\n"
	.string "Pello! I thought I saw you coming\l"
	.string "through.\p"
	.string "Just south of here are the {COLOR RED}Nyx Trails{COLOR DARK_GRAY},\n"
	.string "which wind their way down to {COLOR RED}Areios\l"
	.string "Hideout{COLOR DARK_GRAY}. Are you sure you're ready for\l"
	.string "that challenge?$"

PortPello_EventScript_RaniaChallengeScript_Text_2:
# 349 "data/maps/PortPello/scripts.pory"
	.string "Right. Like Niko said, it's the Pyroar's\n"
	.string "Den - the heart of {COLOR RED}Team Chimera{COLOR DARK_GRAY}.\p"
	.string "Come over here when your team is ready\n"
	.string "for a fight. I want to test you before I\l"
	.string "let you head south.$"

PortPello_EventScript_RaniaChallengeScript_Text_3:
# 360 "data/maps/PortPello/scripts.pory"
	.string "You better be ready to back up those\n"
	.string "words! I challenge you to a battle! Show\l"
	.string "me just how strong you've gotten!$"

PortPello_EventScript_RaniaChallengeScript_Text_4:
# 376 "data/maps/PortPello/scripts.pory"
	.string "Ehehe, I'm speechless! {PLAYER},\n"
	.string "you're totally ready to kick Team\l"
	.string "Chimera's butts!\p"
	.string "Oh, while I've got you here, I should tell\n"
	.string "you about our plans. I've been Flying\l"
	.string "around the Ilios Region, and it turns\l"
	.string "out, the {COLOR GREEN}Gym Leaders{COLOR DARK_GRAY} are working on a\l"
	.string "plan to take down Team Chimera too! A\l"
	.string "few of the Gym Leaders you've\l"
	.string "challenged are gathering to {COLOR GREEN}destroy\l"
	.string "Team Chimera{COLOR DARK_GRAY}.\p"
	.string "The only problem is time... {PLAYER},\n"
	.string "they've told me to send you forward\l"
	.string "without them - we can't afford to wait\l"
	.string "any longer. I just wanted to let you\l"
	.string "know that you're not alone in this\l"
	.string "fight!\p"
	.string "Alright, I'm going to head out and\n"
	.string "gather more Gym Leaders for the cause.\l"
	.string "Good luck, {PLAYER}! You can do this!$"

PortPello_Text_RaniaLose::
# 399 "data/maps/PortPello/scripts.pory"
	.string "You're the strongest Trainer I've met\n"
	.string "so far... You're ready!$"

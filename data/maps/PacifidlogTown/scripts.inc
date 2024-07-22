# 1 "data/maps/PacifidlogTown/scripts.pory"

# 2 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_MapScripts::
# 3 "data/maps/PacifidlogTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_OnTransition
# 4 "data/maps/PacifidlogTown/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PacifidlogTown_OnResume
# 5 "data/maps/PacifidlogTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PacifidlogTown_OnFrame
# 6 "data/maps/PacifidlogTown/scripts.pory"
	.byte 0
# 7 "data/maps/PacifidlogTown/scripts.pory"

# 8 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_OnFrame:
# 9 "data/maps/PacifidlogTown/scripts.pory"
	map_script_2 VAR_PACIFIDLOG_TOWN_STATE, 1, PacifidlogTown_EventScript_ExitDivingMinigame
# 10 "data/maps/PacifidlogTown/scripts.pory"
	map_script_2 VAR_PACIFIDLOG_TOWN_STATE, 2, PacifidlogTown_EventScript_ExitDivingMinigameAllPokemonFainted
# 11 "data/maps/PacifidlogTown/scripts.pory"
	.2byte 0
# 12 "data/maps/PacifidlogTown/scripts.pory"

# 13 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_OnTransition:
# 14 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
# 15 "data/maps/PacifidlogTown/scripts.pory"
	call_if_eq VAR_PACIFIDLOG_TOWN_STATE, 1, PacifidlogTown_SetCompetitorPositionsAfterMinigame
# 16 "data/maps/PacifidlogTown/scripts.pory"
	call_if_eq VAR_PACIFIDLOG_TOWN_STATE, 2, PacifidlogTown_ResetCompetitorFlagsFailsafe
# 17 "data/maps/PacifidlogTown/scripts.pory"
	end
# 18 "data/maps/PacifidlogTown/scripts.pory"

# 19 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_OnResume:
# 20 "data/maps/PacifidlogTown/scripts.pory"
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
# 21 "data/maps/PacifidlogTown/scripts.pory"
	end
# 22 "data/maps/PacifidlogTown/scripts.pory"

# 23 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_NinjaBoy::
# 24 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_NeatHousesOnWater, MSGBOX_NPC
# 25 "data/maps/PacifidlogTown/scripts.pory"
	end
# 26 "data/maps/PacifidlogTown/scripts.pory"

# 27 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Girl::
# 28 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_FastRunningCurrent, MSGBOX_NPC
# 29 "data/maps/PacifidlogTown/scripts.pory"
	end
# 30 "data/maps/PacifidlogTown/scripts.pory"

# 31 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Fisherman::
# 32 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_SkyPillarTooScary, MSGBOX_NPC
# 33 "data/maps/PacifidlogTown/scripts.pory"
	end
# 34 "data/maps/PacifidlogTown/scripts.pory"

# 35 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_TownSign::
# 36 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_TownSign, MSGBOX_SIGN
# 37 "data/maps/PacifidlogTown/scripts.pory"
	end
# 38 "data/maps/PacifidlogTown/scripts.pory"

# 39 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_FastRunningCurrent:
# 40 "data/maps/PacifidlogTown/scripts.pory"
	.string "The sea between PACIFIDLOG and\n"
# 41 "data/maps/PacifidlogTown/scripts.pory"
	.string "SLATEPORT has a fast-running tide.\p"
# 42 "data/maps/PacifidlogTown/scripts.pory"
	.string "If you decide to SURF, you could end\n"
# 43 "data/maps/PacifidlogTown/scripts.pory"
	.string "up swept away somewhere else.$"
# 44 "data/maps/PacifidlogTown/scripts.pory"

# 45 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_NeatHousesOnWater:
# 46 "data/maps/PacifidlogTown/scripts.pory"
	.string "See, isn't it neat?\n"
# 47 "data/maps/PacifidlogTown/scripts.pory"
	.string "These houses are on water!\p"
# 48 "data/maps/PacifidlogTown/scripts.pory"
	.string "I was born here!$"
# 49 "data/maps/PacifidlogTown/scripts.pory"

# 50 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_SkyPillarTooScary:
# 51 "data/maps/PacifidlogTown/scripts.pory"
	.string "The SKY PILLAR?\p"
# 52 "data/maps/PacifidlogTown/scripts.pory"
	.string "…Oh, you must mean that tall, tall\n"
# 53 "data/maps/PacifidlogTown/scripts.pory"
	.string "tower a little further out.\p"
# 54 "data/maps/PacifidlogTown/scripts.pory"
	.string "If you asked me, I wouldn't climb it.\n"
# 55 "data/maps/PacifidlogTown/scripts.pory"
	.string "It's too scary to get up that high.\p"
# 56 "data/maps/PacifidlogTown/scripts.pory"
	.string "Life at sea level in PACIFIDLOG,\n"
# 57 "data/maps/PacifidlogTown/scripts.pory"
	.string "that suits me fine.$"
# 58 "data/maps/PacifidlogTown/scripts.pory"

# 59 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_TownSign:
# 60 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG TOWN\p"
# 61 "data/maps/PacifidlogTown/scripts.pory"
	.string "“Where the morning sun smiles upon\n"
# 62 "data/maps/PacifidlogTown/scripts.pory"
	.string "the waters.”$"

PacifidlogTown_EventScript_Kirlia::
# 68 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 69 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 70 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_Kirlia_Text_0
# 71 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 72 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


PacifidlogTown_EventScript_TeleportMan::
# 78 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 79 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 80 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_TeleportMan_Text_0, MSGBOX_YESNO
# 82 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PacifidlogTown_EventScript_TeleportMan_2
# 91 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_TeleportMan_Text_2
# 92 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 93 "data/maps/PacifidlogTown/scripts.pory"
	warp MAP_SLATEPORT_CITY, 20, 21
# 94 "data/maps/PacifidlogTown/scripts.pory"
	waitstate
# 95 "data/maps/PacifidlogTown/scripts.pory"
	release
	end

# 98 "data/maps/PacifidlogTown/scripts.pory"
	release
	end

PacifidlogTown_EventScript_TeleportMan_2:
# 84 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_TeleportMan_Text_1
# 85 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 86 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


PacifidlogTown_EventScript_AppleSalesman::
# 104 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 105 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 106 "data/maps/PacifidlogTown/scripts.pory"
	message PacifidlogTown_EventScript_AppleSalesman_Text_0
# 107 "data/maps/PacifidlogTown/scripts.pory"
	waitmessage
# 108 "data/maps/PacifidlogTown/scripts.pory"
	pokemart PacifidlogTown_AppleMart
# 109 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_AppleSalesman_Text_1
# 110 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 111 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


	.align 2
# 115 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_AppleMart:
# 117 "data/maps/PacifidlogTown/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 118 "data/maps/PacifidlogTown/scripts.pory"
	.2byte ITEM_TART_APPLE
# 119 "data/maps/PacifidlogTown/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 120 "data/maps/PacifidlogTown/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
	.2byte ITEM_NONE

PacifidlogTown_EventScript_MinigameParticipant_LittleBoy::
# 125 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 126 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 127 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_MinigameParticipant_LittleBoy_Text_0
# 128 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 129 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 11, Common_Movement_FaceOriginalDirection
# 130 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 131 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


PacifidlogTown_EventScript_MinigameParticipant_LittleGirl::
# 136 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 137 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 138 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_MinigameParticipant_LittleGirl_Text_0
# 139 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 140 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 10, Common_Movement_FaceOriginalDirection
# 141 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 142 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


PacifidlogTown_EventScript_MinigameParticipant_TriatheleteM::
# 147 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 148 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 149 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_MinigameParticipant_TriatheleteM_Text_0
# 150 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 151 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 7, Common_Movement_FaceOriginalDirection
# 152 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 153 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


PacifidlogTown_EventScript_MinigameParticipant_TriatheleteF::
# 158 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 159 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 160 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_MinigameParticipant_TriatheleteF_Text_0
# 161 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 162 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 6, Common_Movement_FaceOriginalDirection
# 163 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 164 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


DivingMinigame_EventScript_CentralSign::
# 172 "data/maps/PacifidlogTown/scripts.pory"
	lockall
# 173 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_CentralSign_Text_0
# 174 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 175 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end


DivingMinigame_EventScript_NorthSign::
# 180 "data/maps/PacifidlogTown/scripts.pory"
	lockall
# 181 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_NorthSign_Text_0
# 182 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 183 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end


DivingMinigame_EventScript_EastSign::
# 188 "data/maps/PacifidlogTown/scripts.pory"
	lockall
# 189 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_EastSign_Text_0
# 190 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 191 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end


DivingMinigame_EventScript_SouthSign::
# 196 "data/maps/PacifidlogTown/scripts.pory"
	lockall
# 197 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_SouthSign_Text_0
# 198 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 199 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end


DivingMinigame_EventScript_WestSign::
# 204 "data/maps/PacifidlogTown/scripts.pory"
	lockall
# 205 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_WestSign_Text_0
# 206 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 207 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end


DivingMinigame_EventScript_SailorJudge::
# 213 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 214 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 215 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_SailorJudge_Text_0, MSGBOX_YESNO
# 217 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DivingMinigame_EventScript_SailorJudge_2
# 225 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_SailorJudge_Text_2
# 226 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 227 "data/maps/PacifidlogTown/scripts.pory"
	delay 60
# 228 "data/maps/PacifidlogTown/scripts.pory"
	goto DivingMinigame_EventScript_TimesUp
DivingMinigame_EventScript_SailorJudge_1:
# 231 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 232 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 233 "data/maps/PacifidlogTown/scripts.pory"
	release
	end

DivingMinigame_EventScript_SailorJudge_2:
# 219 "data/maps/PacifidlogTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_DIVING_MINIGAME_STEP_COUNT
# 220 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_SailorJudge_Text_1
# 221 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
	goto DivingMinigame_EventScript_SailorJudge_1


PacifidlogTown_EventScript_DivingMinigameNPC::
# 241 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 242 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 243 "data/maps/PacifidlogTown/scripts.pory"
	showmoneybox 0, 0
# 244 "data/maps/PacifidlogTown/scripts.pory"
	message PacifidlogTown_EventScript_DivingMinigameNPC_Text_0
# 245 "data/maps/PacifidlogTown/scripts.pory"
	waitmessage
# 247 "data/maps/PacifidlogTown/scripts.pory"
	multichoice 22, 6, MULTI_YESNOINFO, TRUE
# 249 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PacifidlogTown_EventScript_DivingMinigameNPC_2
# 257 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PacifidlogTown_EventScript_DivingMinigameNPC_3
# 375 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_DivingMinigameNPC_Text_5
# 376 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 377 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_DivingMinigameNPC_Text_6
# 378 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 379 "data/maps/PacifidlogTown/scripts.pory"
	goto PacifidlogTown_EventScript_DivingMinigameNPC
# 382 "data/maps/PacifidlogTown/scripts.pory"
	release
	end

PacifidlogTown_EventScript_DivingMinigameNPC_2:
# 251 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_DivingMinigameNPC_Text_1
# 252 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 253 "data/maps/PacifidlogTown/scripts.pory"
	hidemoneybox
# 254 "data/maps/PacifidlogTown/scripts.pory"
	release
	end

PacifidlogTown_EventScript_DivingMinigameNPC_3:
# 259 "data/maps/PacifidlogTown/scripts.pory"
	checkmoney 100
# 260 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PacifidlogTown_EventScript_DivingMinigameNPC_8
# 269 "data/maps/PacifidlogTown/scripts.pory"
	playse SE_SHOP
# 270 "data/maps/PacifidlogTown/scripts.pory"
	removemoney 100
# 271 "data/maps/PacifidlogTown/scripts.pory"
	updatemoneybox
# 272 "data/maps/PacifidlogTown/scripts.pory"
	delay 50
# 273 "data/maps/PacifidlogTown/scripts.pory"
	hidemoneybox
# 275 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_DivingMinigameNPC_Text_3
# 276 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 278 "data/maps/PacifidlogTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 279 "data/maps/PacifidlogTown/scripts.pory"
	delay 60
# 282 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_DOING_DIVING_MINIGAME
# 283 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_NEW_DIVING_GAME_HIGH_SCORE
# 284 "data/maps/PacifidlogTown/scripts.pory"
	special EnterDivingMinigame
# 287 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_1
# 288 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_2
# 289 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_3
# 290 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_4
# 293 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_1_UNDERWATER
# 294 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_2_UNDERWATER
# 295 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_3_UNDERWATER
# 296 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_4_UNDERWATER
# 299 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_1_UNDERWATER_INTRO
# 300 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_2_UNDERWATER_INTRO
# 301 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_3_UNDERWATER_INTRO
# 302 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_4_UNDERWATER_INTRO
# 306 "data/maps/PacifidlogTown/scripts.pory"
	randompercentage 50
# 307 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PacifidlogTown_EventScript_DivingMinigameNPC_11
# 316 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_SCUBA_COMPETITOR_4
# 317 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_4_UNDERWATER_INTRO
# 318 "data/maps/PacifidlogTown/scripts.pory"
	setobjectxy 11, 23, 14
# 319 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 11, Common_Movement_FaceUp
PacifidlogTown_EventScript_DivingMinigameNPC_10:
# 322 "data/maps/PacifidlogTown/scripts.pory"
	randompercentage 50
# 323 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PacifidlogTown_EventScript_DivingMinigameNPC_15
# 332 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_SCUBA_COMPETITOR_1
# 333 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_1_UNDERWATER_INTRO
# 334 "data/maps/PacifidlogTown/scripts.pory"
	setobjectxy 10, 25, 14
# 335 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
PacifidlogTown_EventScript_DivingMinigameNPC_14:
# 338 "data/maps/PacifidlogTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 339 "data/maps/PacifidlogTown/scripts.pory"
	delay 20
# 341 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_DivingMinigameNPC_Text_4
# 342 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 344 "data/maps/PacifidlogTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PacifidlogTown_Movement_CompetitorsExcited
# 345 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_1, PacifidlogTown_EventScript_DivingMinigameNPC_19
PacifidlogTown_EventScript_DivingMinigameNPC_18:
# 350 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_2, PacifidlogTown_EventScript_DivingMinigameNPC_22
PacifidlogTown_EventScript_DivingMinigameNPC_21:
# 355 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_3, PacifidlogTown_EventScript_DivingMinigameNPC_25
PacifidlogTown_EventScript_DivingMinigameNPC_24:
# 360 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_4, PacifidlogTown_EventScript_DivingMinigameNPC_28
PacifidlogTown_EventScript_DivingMinigameNPC_27:
# 366 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 367 "data/maps/PacifidlogTown/scripts.pory"
	delay 30
# 369 "data/maps/PacifidlogTown/scripts.pory"
	warp MAP_DIVING_MINIGAME, 4, 14
# 370 "data/maps/PacifidlogTown/scripts.pory"
	waitstate
	end

PacifidlogTown_EventScript_DivingMinigameNPC_8:
# 262 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_DivingMinigameNPC_Text_2
# 263 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 264 "data/maps/PacifidlogTown/scripts.pory"
	hidemoneybox
# 265 "data/maps/PacifidlogTown/scripts.pory"
	release
	end

PacifidlogTown_EventScript_DivingMinigameNPC_11:
# 309 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_SCUBA_COMPETITOR_3
# 310 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_3_UNDERWATER_INTRO
# 311 "data/maps/PacifidlogTown/scripts.pory"
	setobjectxy 7, 23, 14
# 312 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
	goto PacifidlogTown_EventScript_DivingMinigameNPC_10

PacifidlogTown_EventScript_DivingMinigameNPC_15:
# 325 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_SCUBA_COMPETITOR_2
# 326 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_2_UNDERWATER_INTRO
# 327 "data/maps/PacifidlogTown/scripts.pory"
	setobjectxy 6, 25, 14
# 328 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
	goto PacifidlogTown_EventScript_DivingMinigameNPC_14

PacifidlogTown_EventScript_DivingMinigameNPC_19:
# 347 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 10, PacifidlogTown_Movement_CompetitorsExcited
# 348 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_1_PACIFIDLOG
	goto PacifidlogTown_EventScript_DivingMinigameNPC_18

PacifidlogTown_EventScript_DivingMinigameNPC_22:
# 352 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 6, PacifidlogTown_Movement_CompetitorsExcited
# 353 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_2_PACIFIDLOG
	goto PacifidlogTown_EventScript_DivingMinigameNPC_21

PacifidlogTown_EventScript_DivingMinigameNPC_25:
# 357 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 7, PacifidlogTown_Movement_CompetitorsExcited
# 358 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_3_PACIFIDLOG
	goto PacifidlogTown_EventScript_DivingMinigameNPC_24

PacifidlogTown_EventScript_DivingMinigameNPC_28:
# 362 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 11, PacifidlogTown_Movement_CompetitorsExcited
# 363 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_4_PACIFIDLOG
	goto PacifidlogTown_EventScript_DivingMinigameNPC_27


# 386 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Movement_CompetitorsExcited:
# 388 "data/maps/PacifidlogTown/scripts.pory"
	jump_in_place_up
# 388 "data/maps/PacifidlogTown/scripts.pory"
	jump_in_place_up
# 389 "data/maps/PacifidlogTown/scripts.pory"
	walk_in_place_up
# 389 "data/maps/PacifidlogTown/scripts.pory"
	walk_in_place_up
# 390 "data/maps/PacifidlogTown/scripts.pory"
	step_end

# 393 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Movement_CompetitorsOutOfWater:
# 395 "data/maps/PacifidlogTown/scripts.pory"
	jump_down
# 395 "data/maps/PacifidlogTown/scripts.pory"
	jump_down
# 396 "data/maps/PacifidlogTown/scripts.pory"
	face_up
# 397 "data/maps/PacifidlogTown/scripts.pory"
	step_end

# 400 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Movement_JudgeChecksScoreLeft:
# 402 "data/maps/PacifidlogTown/scripts.pory"
	walk_left
# 403 "data/maps/PacifidlogTown/scripts.pory"
	walk_in_place_down
# 404 "data/maps/PacifidlogTown/scripts.pory"
	delay_16
# 405 "data/maps/PacifidlogTown/scripts.pory"
	emote_heart
# 406 "data/maps/PacifidlogTown/scripts.pory"
	delay_16
	step_end

# 408 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Movement_JudgeChecksScoreRight:
# 410 "data/maps/PacifidlogTown/scripts.pory"
	walk_right
# 410 "data/maps/PacifidlogTown/scripts.pory"
	walk_right
# 411 "data/maps/PacifidlogTown/scripts.pory"
	walk_in_place_down
# 412 "data/maps/PacifidlogTown/scripts.pory"
	delay_16
# 413 "data/maps/PacifidlogTown/scripts.pory"
	emote_heart
# 414 "data/maps/PacifidlogTown/scripts.pory"
	delay_16
	step_end

# 416 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Movement_JudgeChecksScorePlayer:
# 418 "data/maps/PacifidlogTown/scripts.pory"
	walk_left
# 419 "data/maps/PacifidlogTown/scripts.pory"
	walk_in_place_down
# 420 "data/maps/PacifidlogTown/scripts.pory"
	delay_16
# 421 "data/maps/PacifidlogTown/scripts.pory"
	emote_heart
# 422 "data/maps/PacifidlogTown/scripts.pory"
	delay_16
# 423 "data/maps/PacifidlogTown/scripts.pory"
	step_end

PacifidlogTown_ResetCompetitorFlagsFailsafe::
# 428 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_1_PACIFIDLOG
# 429 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_2_PACIFIDLOG
# 430 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_3_PACIFIDLOG
# 431 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_4_PACIFIDLOG
# 432 "data/maps/PacifidlogTown/scripts.pory"
	showobjectat 10, MAP_PACIFIDLOG_TOWN
# 433 "data/maps/PacifidlogTown/scripts.pory"
	showobjectat 6, MAP_PACIFIDLOG_TOWN
# 434 "data/maps/PacifidlogTown/scripts.pory"
	showobjectat 7, MAP_PACIFIDLOG_TOWN
# 435 "data/maps/PacifidlogTown/scripts.pory"
	showobjectat 11, MAP_PACIFIDLOG_TOWN
	return


PacifidlogTown_SetCompetitorPositionsAfterMinigame::
# 440 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_1_PACIFIDLOG
# 441 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_2_PACIFIDLOG
# 442 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_3_PACIFIDLOG
# 443 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_4_PACIFIDLOG
# 444 "data/maps/PacifidlogTown/scripts.pory"
	showobjectat 10, MAP_PACIFIDLOG_TOWN
# 445 "data/maps/PacifidlogTown/scripts.pory"
	showobjectat 6, MAP_PACIFIDLOG_TOWN
# 446 "data/maps/PacifidlogTown/scripts.pory"
	showobjectat 7, MAP_PACIFIDLOG_TOWN
# 447 "data/maps/PacifidlogTown/scripts.pory"
	showobjectat 11, MAP_PACIFIDLOG_TOWN
# 449 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_1, PacifidlogTown_SetCompetitorPositionsAfterMinigame_2
PacifidlogTown_SetCompetitorPositionsAfterMinigame_1:
# 455 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_2, PacifidlogTown_SetCompetitorPositionsAfterMinigame_5
PacifidlogTown_SetCompetitorPositionsAfterMinigame_4:
# 461 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_3, PacifidlogTown_SetCompetitorPositionsAfterMinigame_8
PacifidlogTown_SetCompetitorPositionsAfterMinigame_7:
# 467 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_4, PacifidlogTown_SetCompetitorPositionsAfterMinigame_10
	return

PacifidlogTown_SetCompetitorPositionsAfterMinigame_2:
# 451 "data/maps/PacifidlogTown/scripts.pory"
	setobjectxyperm 10, 25, 12
# 452 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 10, Common_Movement_WalkUp2
# 453 "data/maps/PacifidlogTown/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_DOWN
	goto PacifidlogTown_SetCompetitorPositionsAfterMinigame_1

PacifidlogTown_SetCompetitorPositionsAfterMinigame_5:
# 457 "data/maps/PacifidlogTown/scripts.pory"
	setobjectxyperm 6, 25, 12
# 458 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 6, Common_Movement_WalkUp2
# 459 "data/maps/PacifidlogTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
	goto PacifidlogTown_SetCompetitorPositionsAfterMinigame_4

PacifidlogTown_SetCompetitorPositionsAfterMinigame_8:
# 463 "data/maps/PacifidlogTown/scripts.pory"
	setobjectxyperm 7, 23, 12
# 464 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 7, Common_Movement_WalkUp2
# 465 "data/maps/PacifidlogTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
	goto PacifidlogTown_SetCompetitorPositionsAfterMinigame_7

PacifidlogTown_SetCompetitorPositionsAfterMinigame_10:
# 469 "data/maps/PacifidlogTown/scripts.pory"
	setobjectxyperm 11, 23, 12
# 470 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 11, Common_Movement_WalkUp2
# 471 "data/maps/PacifidlogTown/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_DOWN
	return


PacifidlogTown_EventScript_ExitDivingMinigame::
# 477 "data/maps/PacifidlogTown/scripts.pory"
	lockall
# 478 "data/maps/PacifidlogTown/scripts.pory"
	turnplayer DIR_NORTH
# 481 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_1, PacifidlogTown_EventScript_ExitDivingMinigame_2
PacifidlogTown_EventScript_ExitDivingMinigame_1:
# 485 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_2, PacifidlogTown_EventScript_ExitDivingMinigame_5
PacifidlogTown_EventScript_ExitDivingMinigame_4:
# 489 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_3, PacifidlogTown_EventScript_ExitDivingMinigame_8
PacifidlogTown_EventScript_ExitDivingMinigame_7:
# 493 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_4, PacifidlogTown_EventScript_ExitDivingMinigame_11
PacifidlogTown_EventScript_ExitDivingMinigame_10:
# 497 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 498 "data/maps/PacifidlogTown/scripts.pory"
	delay 30
# 501 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_0
# 502 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 504 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_3, PacifidlogTown_EventScript_ExitDivingMinigame_14
# 508 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_4, PacifidlogTown_EventScript_ExitDivingMinigame_15
PacifidlogTown_EventScript_ExitDivingMinigame_13:
# 514 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 5, PacifidlogTown_Movement_JudgeChecksScoreLeft
# 515 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 516 "data/maps/PacifidlogTown/scripts.pory"
	delay 20
# 517 "data/maps/PacifidlogTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_DIVING_MINIGAME_C1_SCORE
# 518 "data/maps/PacifidlogTown/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_DIVING_MINIGAME_C1_SPECIES
# 519 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_3
# 520 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 521 "data/maps/PacifidlogTown/scripts.pory"
	delay 20
# 524 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_1, PacifidlogTown_EventScript_ExitDivingMinigame_19
# 528 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_2, PacifidlogTown_EventScript_ExitDivingMinigame_20
PacifidlogTown_EventScript_ExitDivingMinigame_18:
# 534 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 5, PacifidlogTown_Movement_JudgeChecksScoreRight
# 535 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 536 "data/maps/PacifidlogTown/scripts.pory"
	delay 20
# 537 "data/maps/PacifidlogTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_DIVING_MINIGAME_C2_SCORE
# 538 "data/maps/PacifidlogTown/scripts.pory"
	bufferspeciesname STR_VAR_3, VAR_DIVING_MINIGAME_C2_SPECIES
# 539 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_6
# 540 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 541 "data/maps/PacifidlogTown/scripts.pory"
	delay 20
# 543 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 5, PacifidlogTown_Movement_JudgeChecksScorePlayer
# 544 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 545 "data/maps/PacifidlogTown/scripts.pory"
	delay 20
# 546 "data/maps/PacifidlogTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_DIVING_MINIGAME_SCORE
# 547 "data/maps/PacifidlogTown/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_DIVING_MINIGAME_PLAYER_SPECIES
# 548 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_DIVING_MINIGAME_SCORE, 0
	goto_if_gt PacifidlogTown_EventScript_ExitDivingMinigame_24
# 554 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_8
PacifidlogTown_EventScript_ExitDivingMinigame_23:
# 556 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 557 "data/maps/PacifidlogTown/scripts.pory"
	delay 40
# 559 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_TEMP_PLAYER_WIN_SCUBA
# 563 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_DIVING_MINIGAME_C1_SCORE, VAR_DIVING_MINIGAME_C2_SCORE
	goto_if_gt PacifidlogTown_EventScript_ExitDivingMinigame_28
PacifidlogTown_EventScript_ExitDivingMinigame_27:
# 594 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_DIVING_MINIGAME_C2_SCORE, VAR_DIVING_MINIGAME_C1_SCORE
	goto_if_gt PacifidlogTown_EventScript_ExitDivingMinigame_31
PacifidlogTown_EventScript_ExitDivingMinigame_30:
# 625 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_TEMP_PLAYER_WIN_SCUBA, PacifidlogTown_EventScript_ExitDivingMinigame_37
# 625 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_DIVING_MINIGAME_SCORE, VAR_DIVING_MINIGAME_C1_SCORE
	goto_if_ge PacifidlogTown_EventScript_ExitDivingMinigame_40
PacifidlogTown_EventScript_ExitDivingMinigame_36:
# 634 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_TEMP_PLAYER_WIN_SCUBA
# 635 "data/maps/PacifidlogTown/scripts.pory"
	delay 30
# 637 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_NEW_DIVING_GAME_HIGH_SCORE, PacifidlogTown_EventScript_ExitDivingMinigame_52
PacifidlogTown_EventScript_ExitDivingMinigame_51:
# 664 "data/maps/PacifidlogTown/scripts.pory"
	setvar VAR_PACIFIDLOG_TOWN_STATE, 0
# 665 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_NEW_DIVING_GAME_HIGH_SCORE
# 666 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_DOING_DIVING_MINIGAME
# 668 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_1
# 669 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_2
# 670 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_3
# 671 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_4
# 673 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_18
# 674 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 675 "data/maps/PacifidlogTown/scripts.pory"
	delay 30
# 677 "data/maps/PacifidlogTown/scripts.pory"
	warpsilent MAP_PACIFIDLOG_TOWN, 24, 14
# 678 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end

PacifidlogTown_EventScript_ExitDivingMinigame_2:
# 483 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 10, PacifidlogTown_Movement_CompetitorsOutOfWater
	goto PacifidlogTown_EventScript_ExitDivingMinigame_1

PacifidlogTown_EventScript_ExitDivingMinigame_5:
# 487 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 6, PacifidlogTown_Movement_CompetitorsOutOfWater
	goto PacifidlogTown_EventScript_ExitDivingMinigame_4

PacifidlogTown_EventScript_ExitDivingMinigame_8:
# 491 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 7, PacifidlogTown_Movement_CompetitorsOutOfWater
	goto PacifidlogTown_EventScript_ExitDivingMinigame_7

PacifidlogTown_EventScript_ExitDivingMinigame_11:
# 495 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 11, PacifidlogTown_Movement_CompetitorsOutOfWater
	goto PacifidlogTown_EventScript_ExitDivingMinigame_10

PacifidlogTown_EventScript_ExitDivingMinigame_14:
# 506 "data/maps/PacifidlogTown/scripts.pory"
	bufferstring STR_VAR_3, PacifidlogTown_EventScript_ExitDivingMinigame_Text_1
	goto PacifidlogTown_EventScript_ExitDivingMinigame_13

PacifidlogTown_EventScript_ExitDivingMinigame_15:
# 510 "data/maps/PacifidlogTown/scripts.pory"
	bufferstring STR_VAR_3, PacifidlogTown_EventScript_ExitDivingMinigame_Text_2
	goto PacifidlogTown_EventScript_ExitDivingMinigame_13

PacifidlogTown_EventScript_ExitDivingMinigame_19:
# 526 "data/maps/PacifidlogTown/scripts.pory"
	bufferstring STR_VAR_2, PacifidlogTown_EventScript_ExitDivingMinigame_Text_4
	goto PacifidlogTown_EventScript_ExitDivingMinigame_18

PacifidlogTown_EventScript_ExitDivingMinigame_20:
# 530 "data/maps/PacifidlogTown/scripts.pory"
	bufferstring STR_VAR_2, PacifidlogTown_EventScript_ExitDivingMinigame_Text_5
	goto PacifidlogTown_EventScript_ExitDivingMinigame_18

PacifidlogTown_EventScript_ExitDivingMinigame_24:
# 550 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_7
	goto PacifidlogTown_EventScript_ExitDivingMinigame_23

PacifidlogTown_EventScript_ExitDivingMinigame_28:
# 565 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_DIVING_MINIGAME_C1_SCORE, VAR_DIVING_MINIGAME_SCORE
	goto_if_gt PacifidlogTown_EventScript_ExitDivingMinigame_33
# 590 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_TEMP_PLAYER_WIN_SCUBA
	goto PacifidlogTown_EventScript_ExitDivingMinigame_27

PacifidlogTown_EventScript_ExitDivingMinigame_31:
# 596 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_DIVING_MINIGAME_C2_SCORE, VAR_DIVING_MINIGAME_SCORE
	goto_if_gt PacifidlogTown_EventScript_ExitDivingMinigame_43
# 621 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_TEMP_PLAYER_WIN_SCUBA
	goto PacifidlogTown_EventScript_ExitDivingMinigame_30

PacifidlogTown_EventScript_ExitDivingMinigame_33:
# 567 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_3, PacifidlogTown_EventScript_ExitDivingMinigame_47
# 571 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_4, PacifidlogTown_EventScript_ExitDivingMinigame_48
PacifidlogTown_EventScript_ExitDivingMinigame_46:
# 576 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_9
# 577 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 578 "data/maps/PacifidlogTown/scripts.pory"
	delay 30
# 579 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 580 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 581 "data/maps/PacifidlogTown/scripts.pory"
	delay 30
# 582 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_10
# 583 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 584 "data/maps/PacifidlogTown/scripts.pory"
	randomelement ITEM_PRETTY_FEATHER, ITEM_PEARL, ITEM_SITRUS_BERRY, ITEM_LUM_BERRY, ITEM_SILK_SCARF, ITEM_CHARCOAL, ITEM_MYSTIC_WATER, ITEM_MIRACLE_SEED, ITEM_MAGNET
# 585 "data/maps/PacifidlogTown/scripts.pory"
	giveitem VAR_RESULT
	goto PacifidlogTown_EventScript_ExitDivingMinigame_27

PacifidlogTown_EventScript_ExitDivingMinigame_37:
# 627 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_12
# 628 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 629 "data/maps/PacifidlogTown/scripts.pory"
	giveitem ITEM_BIG_PEARL
# 630 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_13
# 631 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
	goto PacifidlogTown_EventScript_ExitDivingMinigame_36

PacifidlogTown_EventScript_ExitDivingMinigame_40:
# 625 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_DIVING_MINIGAME_SCORE, VAR_DIVING_MINIGAME_C2_SCORE
	goto_if_ge PacifidlogTown_EventScript_ExitDivingMinigame_37
	goto PacifidlogTown_EventScript_ExitDivingMinigame_36

PacifidlogTown_EventScript_ExitDivingMinigame_43:
# 598 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_1, PacifidlogTown_EventScript_ExitDivingMinigame_55
# 602 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_2, PacifidlogTown_EventScript_ExitDivingMinigame_56
PacifidlogTown_EventScript_ExitDivingMinigame_54:
# 607 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_11
# 608 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 609 "data/maps/PacifidlogTown/scripts.pory"
	delay 30
# 610 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 611 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 612 "data/maps/PacifidlogTown/scripts.pory"
	delay 30
# 613 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_10
# 614 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 615 "data/maps/PacifidlogTown/scripts.pory"
	randomelement ITEM_PRETTY_FEATHER, ITEM_PEARL, ITEM_SITRUS_BERRY, ITEM_LUM_BERRY, ITEM_SILK_SCARF, ITEM_CHARCOAL, ITEM_MYSTIC_WATER, ITEM_MIRACLE_SEED, ITEM_MAGNET
# 616 "data/maps/PacifidlogTown/scripts.pory"
	giveitem VAR_RESULT
	goto PacifidlogTown_EventScript_ExitDivingMinigame_30

PacifidlogTown_EventScript_ExitDivingMinigame_47:
# 569 "data/maps/PacifidlogTown/scripts.pory"
	bufferstring STR_VAR_3, PacifidlogTown_EventScript_ExitDivingMinigame_Text_1
	goto PacifidlogTown_EventScript_ExitDivingMinigame_46

PacifidlogTown_EventScript_ExitDivingMinigame_48:
# 573 "data/maps/PacifidlogTown/scripts.pory"
	bufferstring STR_VAR_3, PacifidlogTown_EventScript_ExitDivingMinigame_Text_2
	goto PacifidlogTown_EventScript_ExitDivingMinigame_46

PacifidlogTown_EventScript_ExitDivingMinigame_52:
# 639 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_NEW_DIVING_GAME_HIGH_SCORE
# 641 "data/maps/PacifidlogTown/scripts.pory"
	checkitem ITEM_HM07
# 642 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PacifidlogTown_EventScript_ExitDivingMinigame_59
# 652 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_14
# 653 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 654 "data/maps/PacifidlogTown/scripts.pory"
	giveitem ITEM_HEART_SCALE, 5
# 655 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_16
# 656 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 657 "data/maps/PacifidlogTown/scripts.pory"
	randomelement ITEM_TM_DRAGON_CLAW, ITEM_TM_BULK_UP, ITEM_TM_ICE_BEAM, ITEM_TM_GIGA_DRAIN, ITEM_TM_THUNDERBOLT, ITEM_TM_EARTHQUAKE, ITEM_TM_RETURN, ITEM_TM_PSYCHIC, ITEM_TM_SHADOW_BALL, ITEM_TM_BRICK_BREAK, ITEM_TM_FLAMETHROWER, ITEM_TM57, ITEM_TM58, ITEM_EVIOLITE, ITEM_BIG_ROOT, ITEM_GRIP_CLAW, ITEM_BLACK_SLUDGE, ITEM_ROCKY_HELMET, ITEM_ZOOM_LENS, ITEM_EVIOLITE, ITEM_LEFTOVERS, ITEM_LEFTOVERS
# 658 "data/maps/PacifidlogTown/scripts.pory"
	giveitem VAR_RESULT
# 659 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_17
# 660 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
	goto PacifidlogTown_EventScript_ExitDivingMinigame_51

PacifidlogTown_EventScript_ExitDivingMinigame_55:
# 600 "data/maps/PacifidlogTown/scripts.pory"
	bufferstring STR_VAR_2, PacifidlogTown_EventScript_ExitDivingMinigame_Text_4
	goto PacifidlogTown_EventScript_ExitDivingMinigame_54

PacifidlogTown_EventScript_ExitDivingMinigame_56:
# 604 "data/maps/PacifidlogTown/scripts.pory"
	bufferstring STR_VAR_2, PacifidlogTown_EventScript_ExitDivingMinigame_Text_5
	goto PacifidlogTown_EventScript_ExitDivingMinigame_54

PacifidlogTown_EventScript_ExitDivingMinigame_59:
# 644 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_14
# 645 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 646 "data/maps/PacifidlogTown/scripts.pory"
	giveitem ITEM_HM07
# 647 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_15
# 648 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
	goto PacifidlogTown_EventScript_ExitDivingMinigame_51


PacifidlogTown_EventScript_ExitDivingMinigameAllPokemonFainted::
# 684 "data/maps/PacifidlogTown/scripts.pory"
	lockall
# 685 "data/maps/PacifidlogTown/scripts.pory"
	turnplayer DIR_NORTH
# 686 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigameAllPokemonFainted_Text_0
# 687 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 688 "data/maps/PacifidlogTown/scripts.pory"
	special HealPlayerParty
# 689 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigameAllPokemonFainted_Text_1
# 690 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 692 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_1
# 693 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_2
# 694 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_3
# 695 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_4
# 697 "data/maps/PacifidlogTown/scripts.pory"
	setvar VAR_PACIFIDLOG_TOWN_STATE, 0
# 698 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_NEW_DIVING_GAME_HIGH_SCORE
# 699 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_DOING_DIVING_MINIGAME
# 700 "data/maps/PacifidlogTown/scripts.pory"
	turnplayer DIR_SOUTH
# 701 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end


PacifidlogTown_EventScript_Kirlia_Text_0:
# 70 "data/maps/PacifidlogTown/scripts.pory"
	.string "KIRLIA: Shaaah!$"

PacifidlogTown_EventScript_TeleportMan_Text_0:
# 80 "data/maps/PacifidlogTown/scripts.pory"
	.string "I host a TELEPORT service to and from\n"
	.string "SLATEPORT CITY! Would you like a ride?$"

PacifidlogTown_EventScript_TeleportMan_Text_1:
# 84 "data/maps/PacifidlogTown/scripts.pory"
	.string "Come back when you want to TELEPORT!$"

PacifidlogTown_EventScript_TeleportMan_Text_2:
# 91 "data/maps/PacifidlogTown/scripts.pory"
	.string "Alright, here we go!$"

PacifidlogTown_EventScript_AppleSalesman_Text_0:
# 106 "data/maps/PacifidlogTown/scripts.pory"
	.string "Apples for sale! Come get your apples,\n"
	.string "fresh from the mainland!$"

PacifidlogTown_EventScript_AppleSalesman_Text_1:
# 109 "data/maps/PacifidlogTown/scripts.pory"
	.string "Come back soon!$"

PacifidlogTown_EventScript_MinigameParticipant_LittleBoy_Text_0:
# 127 "data/maps/PacifidlogTown/scripts.pory"
	.string "RUA: I can't wait for the next SCUBA\n"
	.string "SAFARI round! I've got a plan to win!$"

PacifidlogTown_EventScript_MinigameParticipant_LittleGirl_Text_0:
# 138 "data/maps/PacifidlogTown/scripts.pory"
	.string "PORA: My family moved here to scuba\n"
	.string "dive around the CORSOLA colonies\l"
	.string "nearby!\p"
	.string "I love watching the SCUBA SAFARI!$"

PacifidlogTown_EventScript_MinigameParticipant_TriatheleteM_Text_0:
# 149 "data/maps/PacifidlogTown/scripts.pory"
	.string "TAONGA: Huff huff... Gotta train...\n"
	.string "PACIFIDLOG TOWN honors it's seafaring\l"
	.string "roots through the SCUBA SAFARI\l"
	.string "competition! I need to do my best!$"

PacifidlogTown_EventScript_MinigameParticipant_TriatheleteF_Text_0:
# 160 "data/maps/PacifidlogTown/scripts.pory"
	.string "TAIKO: Huff huff... Have to train...\n"
	.string "I have to swim fast to find rare\l"
	.string "POKéMON in the competition, they'll get\l"
	.string "a higher score!$"

DivingMinigame_EventScript_CentralSign_Text_0:
# 173 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG SCUBA SAFARI AREA 1\n"
	.string "CENTRAL AREA\p"
	.string "An Introduction to Diving!$"

DivingMinigame_EventScript_NorthSign_Text_0:
# 181 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG SCUBA SAFARI AREA 2\n"
	.string "NORTH AREA\p"
	.string "Cool Temperatures, Cooler POKéMON!$"

DivingMinigame_EventScript_EastSign_Text_0:
# 189 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG SCUBA SAFARI AREA 3\n"
	.string "EAST AREA\p"
	.string "Mysterious POKéMON in Mysterious\n"
	.string "Ruins!$"

DivingMinigame_EventScript_SouthSign_Text_0:
# 197 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG SCUBA SAFARI AREA 4\n"
	.string "SOUTH AREA\p"
	.string "The Depths of the Seas!$"

DivingMinigame_EventScript_WestSign_Text_0:
# 205 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG SCUBA SAFARI AREA 5\n"
	.string "WEST AREA\p"
	.string "Shallow Pools where Land meets Sea!$"

DivingMinigame_EventScript_SailorJudge_Text_0:
# 215 "data/maps/PacifidlogTown/scripts.pory"
	.string "Yo ho ho, SCUBA SAFARI master! Are you\n"
	.string "ready to end your SCUBA SAFARI?$"

DivingMinigame_EventScript_SailorJudge_Text_1:
# 220 "data/maps/PacifidlogTown/scripts.pory"
	.string "Great, get back to it!\n"
	.string "You have {STR_VAR_1} tiles left to\l"
	.string "swim before time's up!$"

DivingMinigame_EventScript_SailorJudge_Text_2:
# 225 "data/maps/PacifidlogTown/scripts.pory"
	.string "Alrighty here, let me start the\n"
	.string "announcement!$"

PacifidlogTown_EventScript_DivingMinigameNPC_Text_0:
# 244 "data/maps/PacifidlogTown/scripts.pory"
	.string "Ahoy, TRAINER! Do you want to play the\n"
	.string "PACIFIDLOG SCUBA SAFARI? Just ¥100!$"

PacifidlogTown_EventScript_DivingMinigameNPC_Text_1:
# 251 "data/maps/PacifidlogTown/scripts.pory"
	.string "Alright! Come back soon!$"

PacifidlogTown_EventScript_DivingMinigameNPC_Text_2:
# 262 "data/maps/PacifidlogTown/scripts.pory"
	.string "Sorry, sailor! Looks like you're a bit low\n"
	.string "on funds.$"

PacifidlogTown_EventScript_DivingMinigameNPC_Text_3:
# 275 "data/maps/PacifidlogTown/scripts.pory"
	.string "Alrighty! Let's get a SCUBA GROUP\n"
	.string "together!$"

PacifidlogTown_EventScript_DivingMinigameNPC_Text_4:
# 341 "data/maps/PacifidlogTown/scripts.pory"
	.string "Looks like we've got a good crew going!\n"
	.string "Let's DIVE!$"

PacifidlogTown_EventScript_DivingMinigameNPC_Text_5:
# 375 "data/maps/PacifidlogTown/scripts.pory"
	.string "Ehehe, interested in the SCUBA SAFARI?\n"
	.string "Welcome! This is the pride and joy of\l"
	.string "PACIFIDLOG TOWN!\p"
	.string "The gist of the SCUBA SAFARI is DIVING\n"
	.string "down here and trying to catch the\l"
	.string "coolest, rarest POKéMON you can in a\l"
	.string "limited time. You can even find some\l"
	.string "cool treasures if you're lucky!\p"
	.string "There's a few basic rules. First, when\n"
	.string "you're down there, you only have {COLOR GREEN}200\l"
	.string "tiles of movement{COLOR DARK_GRAY} or {COLOR GREEN}five encounters{COLOR DARK_GRAY} to\l"
	.string "explore. After that, your POKéMON is\l"
	.string "scored based on level, stats, and\l"
	.string "rarity. You'll have a few competitors\l"
	.string "down there, so do your best to catch\l"
	.string "something cool!\p"
	.string "And remember, only the {COLOR RED}most recent{COLOR DARK_GRAY}\n"
	.string "POKéMON you catch counts for scoring.$"

PacifidlogTown_EventScript_DivingMinigameNPC_Text_6:
# 377 "data/maps/PacifidlogTown/scripts.pory"
	.string "...Phew, that was a lot! Oh right, and you\n"
	.string "don't even need the DIVE HM to play! We\l"
	.string "provide you with everything you need.\l"
	.string "Now, with that out of the way...$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_0:
# 501 "data/maps/PacifidlogTown/scripts.pory"
	.string "Welcome back, everyone! Time for\n"
	.string "scoring! Let's see your most recent\l"
	.string "catch...$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_1:
# 506 "data/maps/PacifidlogTown/scripts.pory"
	.string "Taonga$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_2:
# 510 "data/maps/PacifidlogTown/scripts.pory"
	.string "Rua$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_3:
# 519 "data/maps/PacifidlogTown/scripts.pory"
	.string "{STR_VAR_3}'s catch, a\n"
	.string "{STR_VAR_2}, scored {STR_VAR_1}!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_4:
# 526 "data/maps/PacifidlogTown/scripts.pory"
	.string "Pora$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_5:
# 530 "data/maps/PacifidlogTown/scripts.pory"
	.string "Taiko$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_6:
# 539 "data/maps/PacifidlogTown/scripts.pory"
	.string "{STR_VAR_2}'s catch, a\n"
	.string "{STR_VAR_3}, scored {STR_VAR_1}!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_7:
# 550 "data/maps/PacifidlogTown/scripts.pory"
	.string "{PLAYER}'s catch, a {STR_VAR_2},\n"
	.string "scored {STR_VAR_1}!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_8:
# 554 "data/maps/PacifidlogTown/scripts.pory"
	.string "{PLAYER}'s catch, a... huh? Looks like\n"
	.string "an unsuccessful dive! Make sure to\l"
	.string "keep track of your time down there!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_9:
# 576 "data/maps/PacifidlogTown/scripts.pory"
	.string "Looks like {STR_VAR_3} won! They'll\n"
	.string "be receiving the first place prize!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_10:
# 582 "data/maps/PacifidlogTown/scripts.pory"
	.string "...ah, don't fret! All participants in the\n"
	.string "SCUBA SAFARI receive a little\l"
	.string "something! Here!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_11:
# 607 "data/maps/PacifidlogTown/scripts.pory"
	.string "Looks like {STR_VAR_2} won! They'll\n"
	.string "be receiving the first place prize!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_12:
# 627 "data/maps/PacifidlogTown/scripts.pory"
	.string "Looks like {PLAYER} won! They'll be\n"
	.string "receiving the first place prize!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_13:
# 630 "data/maps/PacifidlogTown/scripts.pory"
	.string "All other participants will receive a\n"
	.string "smaller prize.$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_14:
# 644 "data/maps/PacifidlogTown/scripts.pory"
	.string "Looks like a new high score! Here's a\n"
	.string "special prize!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_15:
# 647 "data/maps/PacifidlogTown/scripts.pory"
	.string "It says on the manual here you need all\n"
	.string "8 GYM BADGES to use WATERFALL out of\l"
	.string "battle. Only true masters of the seas\l"
	.string "can have this HM!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_16:
# 655 "data/maps/PacifidlogTown/scripts.pory"
	.string "And here, take a nice rare item too!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_17:
# 659 "data/maps/PacifidlogTown/scripts.pory"
	.string "We find TMs, rare held items, and other\n"
	.string "stuff floating in the sea from time to\l"
	.string "time. It's important to clean up where\l"
	.string "we can!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_18:
# 673 "data/maps/PacifidlogTown/scripts.pory"
	.string "Please, come play again soon!$"

PacifidlogTown_EventScript_ExitDivingMinigameAllPokemonFainted_Text_0:
# 686 "data/maps/PacifidlogTown/scripts.pory"
	.string "Woah there! Looks like the POKéMON\n"
	.string "down there were a bit strong! I'll heal\l"
	.string "you up.$"

PacifidlogTown_EventScript_ExitDivingMinigameAllPokemonFainted_Text_1:
# 689 "data/maps/PacifidlogTown/scripts.pory"
	.string "Remember, the seas can be dangerous!\n"
	.string "I'd get my hands on a POKéMON with the\l"
	.string "RUN AWAY ability if I were you. They're\l"
	.string "great for getting out of rough\l"
	.string "situations!$"

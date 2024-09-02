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

PacifidlogTown_EventScript_Pelipper::
# 68 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 69 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 70 "data/maps/PacifidlogTown/scripts.pory"
	playmoncry SPECIES_PELIPPER, CRY_MODE_NORMAL
# 71 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_Pelipper_Text_0
# 72 "data/maps/PacifidlogTown/scripts.pory"
	waitmoncry
# 73 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 74 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 9, Common_Movement_FaceOriginalDirection
# 75 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 76 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


PacifidlogTown_EventScript_PelipperFlightMan::
# 82 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 83 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 84 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_PelipperFlightMan_Text_0, MSGBOX_YESNO
# 86 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PacifidlogTown_EventScript_PelipperFlightMan_2
# 95 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_PelipperFlightMan_Text_2
# 96 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 97 "data/maps/PacifidlogTown/scripts.pory"
	warp MAP_SLATEPORT_CITY, 20, 21
# 98 "data/maps/PacifidlogTown/scripts.pory"
	waitstate
# 99 "data/maps/PacifidlogTown/scripts.pory"
	release
	end

# 102 "data/maps/PacifidlogTown/scripts.pory"
	release
	end

PacifidlogTown_EventScript_PelipperFlightMan_2:
# 88 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_PelipperFlightMan_Text_1
# 89 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 90 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


PacifidlogTown_EventScript_AppleSalesman::
# 108 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 109 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 110 "data/maps/PacifidlogTown/scripts.pory"
	message PacifidlogTown_EventScript_AppleSalesman_Text_0
# 111 "data/maps/PacifidlogTown/scripts.pory"
	waitmessage
# 112 "data/maps/PacifidlogTown/scripts.pory"
	pokemart PacifidlogTown_AppleMart
# 113 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_AppleSalesman_Text_1
# 114 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 115 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


	.align 2
# 119 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_AppleMart:
# 121 "data/maps/PacifidlogTown/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 122 "data/maps/PacifidlogTown/scripts.pory"
	.2byte ITEM_TART_APPLE
# 123 "data/maps/PacifidlogTown/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 124 "data/maps/PacifidlogTown/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
	.2byte ITEM_NONE

PacifidlogTown_EventScript_MinigameParticipant_LittleBoy::
# 129 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 130 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 131 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_MinigameParticipant_LittleBoy_Text_0
# 132 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 133 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 11, Common_Movement_FaceOriginalDirection
# 134 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 135 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


PacifidlogTown_EventScript_MinigameParticipant_LittleGirl::
# 140 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 141 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 142 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_MinigameParticipant_LittleGirl_Text_0
# 143 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 144 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 10, Common_Movement_FaceOriginalDirection
# 145 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 146 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


PacifidlogTown_EventScript_MinigameParticipant_TriatheleteM::
# 151 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 152 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 153 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_MinigameParticipant_TriatheleteM_Text_0
# 154 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 155 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 7, Common_Movement_FaceOriginalDirection
# 156 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 157 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


PacifidlogTown_EventScript_MinigameParticipant_TriatheleteF::
# 162 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 163 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 164 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_MinigameParticipant_TriatheleteF_Text_0
# 165 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 166 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 6, Common_Movement_FaceOriginalDirection
# 167 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 168 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


DivingMinigame_EventScript_CentralSign::
# 176 "data/maps/PacifidlogTown/scripts.pory"
	lockall
# 177 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_CentralSign_Text_0
# 178 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 179 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end


DivingMinigame_EventScript_NorthSign::
# 184 "data/maps/PacifidlogTown/scripts.pory"
	lockall
# 185 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_NorthSign_Text_0
# 186 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 187 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end


DivingMinigame_EventScript_EastSign::
# 192 "data/maps/PacifidlogTown/scripts.pory"
	lockall
# 193 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_EastSign_Text_0
# 194 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 195 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end


DivingMinigame_EventScript_SouthSign::
# 200 "data/maps/PacifidlogTown/scripts.pory"
	lockall
# 201 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_SouthSign_Text_0
# 202 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 203 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end


DivingMinigame_EventScript_WestSign::
# 208 "data/maps/PacifidlogTown/scripts.pory"
	lockall
# 209 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_WestSign_Text_0
# 210 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 211 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end


DivingMinigame_EventScript_SailorJudge::
# 217 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 218 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 219 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_SailorJudge_Text_0, MSGBOX_YESNO
# 221 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DivingMinigame_EventScript_SailorJudge_2
# 229 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_SailorJudge_Text_2
# 230 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 231 "data/maps/PacifidlogTown/scripts.pory"
	delay 60
# 232 "data/maps/PacifidlogTown/scripts.pory"
	goto DivingMinigame_EventScript_TimesUp
DivingMinigame_EventScript_SailorJudge_1:
# 235 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 236 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 237 "data/maps/PacifidlogTown/scripts.pory"
	release
	end

DivingMinigame_EventScript_SailorJudge_2:
# 223 "data/maps/PacifidlogTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_DIVING_MINIGAME_STEP_COUNT
# 224 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_SailorJudge_Text_1
# 225 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
	goto DivingMinigame_EventScript_SailorJudge_1


PacifidlogTown_EventScript_DivingMinigameNPC::
# 245 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 246 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 247 "data/maps/PacifidlogTown/scripts.pory"
	showmoneybox 0, 0
# 248 "data/maps/PacifidlogTown/scripts.pory"
	message PacifidlogTown_EventScript_DivingMinigameNPC_Text_0
# 249 "data/maps/PacifidlogTown/scripts.pory"
	waitmessage
# 251 "data/maps/PacifidlogTown/scripts.pory"
	multichoice 22, 6, MULTI_YESNOINFO, TRUE
# 253 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PacifidlogTown_EventScript_DivingMinigameNPC_2
# 261 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PacifidlogTown_EventScript_DivingMinigameNPC_3
# 380 "data/maps/PacifidlogTown/scripts.pory"
	hidemoneybox
# 381 "data/maps/PacifidlogTown/scripts.pory"
	delay 10
# 382 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_DivingMinigameNPC_Text_5
# 383 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 384 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_DivingMinigameNPC_Text_6
# 385 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 386 "data/maps/PacifidlogTown/scripts.pory"
	goto PacifidlogTown_EventScript_DivingMinigameNPC
# 389 "data/maps/PacifidlogTown/scripts.pory"
	release
	end

PacifidlogTown_EventScript_DivingMinigameNPC_2:
# 255 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_DivingMinigameNPC_Text_1
# 256 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 257 "data/maps/PacifidlogTown/scripts.pory"
	hidemoneybox
# 258 "data/maps/PacifidlogTown/scripts.pory"
	release
	end

PacifidlogTown_EventScript_DivingMinigameNPC_3:
# 263 "data/maps/PacifidlogTown/scripts.pory"
	checkmoney 100
# 264 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PacifidlogTown_EventScript_DivingMinigameNPC_8
# 273 "data/maps/PacifidlogTown/scripts.pory"
	playse SE_SHOP
# 274 "data/maps/PacifidlogTown/scripts.pory"
	removemoney 100
# 275 "data/maps/PacifidlogTown/scripts.pory"
	updatemoneybox
# 276 "data/maps/PacifidlogTown/scripts.pory"
	delay 50
# 277 "data/maps/PacifidlogTown/scripts.pory"
	hidemoneybox
# 278 "data/maps/PacifidlogTown/scripts.pory"
	delay 10
# 280 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_DivingMinigameNPC_Text_3
# 281 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 283 "data/maps/PacifidlogTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 284 "data/maps/PacifidlogTown/scripts.pory"
	delay 60
# 287 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_DOING_DIVING_MINIGAME
# 288 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_NEW_DIVING_GAME_HIGH_SCORE
# 289 "data/maps/PacifidlogTown/scripts.pory"
	special EnterDivingMinigame
# 292 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_1
# 293 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_2
# 294 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_3
# 295 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_4
# 298 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_1_UNDERWATER
# 299 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_2_UNDERWATER
# 300 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_3_UNDERWATER
# 301 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_4_UNDERWATER
# 304 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_1_UNDERWATER_INTRO
# 305 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_2_UNDERWATER_INTRO
# 306 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_3_UNDERWATER_INTRO
# 307 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_4_UNDERWATER_INTRO
# 311 "data/maps/PacifidlogTown/scripts.pory"
	randompercentage 50
# 312 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PacifidlogTown_EventScript_DivingMinigameNPC_11
# 321 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_SCUBA_COMPETITOR_4
# 322 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_4_UNDERWATER_INTRO
# 323 "data/maps/PacifidlogTown/scripts.pory"
	setobjectxy 11, 23, 14
# 324 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 11, Common_Movement_FaceUp
PacifidlogTown_EventScript_DivingMinigameNPC_10:
# 327 "data/maps/PacifidlogTown/scripts.pory"
	randompercentage 50
# 328 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PacifidlogTown_EventScript_DivingMinigameNPC_15
# 337 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_SCUBA_COMPETITOR_1
# 338 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_1_UNDERWATER_INTRO
# 339 "data/maps/PacifidlogTown/scripts.pory"
	setobjectxy 10, 25, 14
# 340 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
PacifidlogTown_EventScript_DivingMinigameNPC_14:
# 343 "data/maps/PacifidlogTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 344 "data/maps/PacifidlogTown/scripts.pory"
	delay 20
# 346 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_DivingMinigameNPC_Text_4
# 347 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 349 "data/maps/PacifidlogTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PacifidlogTown_Movement_CompetitorsExcited
# 350 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_1, PacifidlogTown_EventScript_DivingMinigameNPC_19
PacifidlogTown_EventScript_DivingMinigameNPC_18:
# 355 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_2, PacifidlogTown_EventScript_DivingMinigameNPC_22
PacifidlogTown_EventScript_DivingMinigameNPC_21:
# 360 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_3, PacifidlogTown_EventScript_DivingMinigameNPC_25
PacifidlogTown_EventScript_DivingMinigameNPC_24:
# 365 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_4, PacifidlogTown_EventScript_DivingMinigameNPC_28
PacifidlogTown_EventScript_DivingMinigameNPC_27:
# 371 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 372 "data/maps/PacifidlogTown/scripts.pory"
	delay 30
# 374 "data/maps/PacifidlogTown/scripts.pory"
	warp MAP_DIVING_MINIGAME, 4, 14
# 375 "data/maps/PacifidlogTown/scripts.pory"
	waitstate
	end

PacifidlogTown_EventScript_DivingMinigameNPC_8:
# 266 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_DivingMinigameNPC_Text_2
# 267 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 268 "data/maps/PacifidlogTown/scripts.pory"
	hidemoneybox
# 269 "data/maps/PacifidlogTown/scripts.pory"
	release
	end

PacifidlogTown_EventScript_DivingMinigameNPC_11:
# 314 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_SCUBA_COMPETITOR_3
# 315 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_3_UNDERWATER_INTRO
# 316 "data/maps/PacifidlogTown/scripts.pory"
	setobjectxy 7, 23, 14
# 317 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
	goto PacifidlogTown_EventScript_DivingMinigameNPC_10

PacifidlogTown_EventScript_DivingMinigameNPC_15:
# 330 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_SCUBA_COMPETITOR_2
# 331 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_2_UNDERWATER_INTRO
# 332 "data/maps/PacifidlogTown/scripts.pory"
	setobjectxy 6, 25, 14
# 333 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
	goto PacifidlogTown_EventScript_DivingMinigameNPC_14

PacifidlogTown_EventScript_DivingMinigameNPC_19:
# 352 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 10, PacifidlogTown_Movement_CompetitorsExcited
# 353 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_1_PACIFIDLOG
	goto PacifidlogTown_EventScript_DivingMinigameNPC_18

PacifidlogTown_EventScript_DivingMinigameNPC_22:
# 357 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 6, PacifidlogTown_Movement_CompetitorsExcited
# 358 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_2_PACIFIDLOG
	goto PacifidlogTown_EventScript_DivingMinigameNPC_21

PacifidlogTown_EventScript_DivingMinigameNPC_25:
# 362 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 7, PacifidlogTown_Movement_CompetitorsExcited
# 363 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_3_PACIFIDLOG
	goto PacifidlogTown_EventScript_DivingMinigameNPC_24

PacifidlogTown_EventScript_DivingMinigameNPC_28:
# 367 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 11, PacifidlogTown_Movement_CompetitorsExcited
# 368 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_HIDE_COMPETITOR_4_PACIFIDLOG
	goto PacifidlogTown_EventScript_DivingMinigameNPC_27


# 393 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Movement_CompetitorsExcited:
# 395 "data/maps/PacifidlogTown/scripts.pory"
	jump_in_place_up
# 395 "data/maps/PacifidlogTown/scripts.pory"
	jump_in_place_up
# 396 "data/maps/PacifidlogTown/scripts.pory"
	walk_in_place_up
# 396 "data/maps/PacifidlogTown/scripts.pory"
	walk_in_place_up
# 397 "data/maps/PacifidlogTown/scripts.pory"
	step_end

# 400 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Movement_CompetitorsOutOfWater:
# 402 "data/maps/PacifidlogTown/scripts.pory"
	jump_down
# 402 "data/maps/PacifidlogTown/scripts.pory"
	jump_down
# 403 "data/maps/PacifidlogTown/scripts.pory"
	face_up
# 404 "data/maps/PacifidlogTown/scripts.pory"
	step_end

# 407 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Movement_JudgeChecksScoreLeft:
# 409 "data/maps/PacifidlogTown/scripts.pory"
	walk_left
# 410 "data/maps/PacifidlogTown/scripts.pory"
	walk_in_place_down
# 411 "data/maps/PacifidlogTown/scripts.pory"
	delay_16
# 412 "data/maps/PacifidlogTown/scripts.pory"
	emote_heart
# 413 "data/maps/PacifidlogTown/scripts.pory"
	delay_16
	step_end

# 415 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Movement_JudgeChecksScoreRight:
# 417 "data/maps/PacifidlogTown/scripts.pory"
	walk_right
# 417 "data/maps/PacifidlogTown/scripts.pory"
	walk_right
# 418 "data/maps/PacifidlogTown/scripts.pory"
	walk_in_place_down
# 419 "data/maps/PacifidlogTown/scripts.pory"
	delay_16
# 420 "data/maps/PacifidlogTown/scripts.pory"
	emote_heart
# 421 "data/maps/PacifidlogTown/scripts.pory"
	delay_16
	step_end

# 423 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Movement_JudgeChecksScorePlayer:
# 425 "data/maps/PacifidlogTown/scripts.pory"
	walk_left
# 426 "data/maps/PacifidlogTown/scripts.pory"
	walk_in_place_down
# 427 "data/maps/PacifidlogTown/scripts.pory"
	delay_16
# 428 "data/maps/PacifidlogTown/scripts.pory"
	emote_heart
# 429 "data/maps/PacifidlogTown/scripts.pory"
	delay_16
# 430 "data/maps/PacifidlogTown/scripts.pory"
	step_end

PacifidlogTown_ResetCompetitorFlagsFailsafe::
# 435 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_1_PACIFIDLOG
# 436 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_2_PACIFIDLOG
# 437 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_3_PACIFIDLOG
# 438 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_4_PACIFIDLOG
# 439 "data/maps/PacifidlogTown/scripts.pory"
	showobjectat 10, MAP_PACIFIDLOG_TOWN
# 440 "data/maps/PacifidlogTown/scripts.pory"
	showobjectat 6, MAP_PACIFIDLOG_TOWN
# 441 "data/maps/PacifidlogTown/scripts.pory"
	showobjectat 7, MAP_PACIFIDLOG_TOWN
# 442 "data/maps/PacifidlogTown/scripts.pory"
	showobjectat 11, MAP_PACIFIDLOG_TOWN
	return


PacifidlogTown_SetCompetitorPositionsAfterMinigame::
# 447 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_1_PACIFIDLOG
# 448 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_2_PACIFIDLOG
# 449 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_3_PACIFIDLOG
# 450 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_COMPETITOR_4_PACIFIDLOG
# 451 "data/maps/PacifidlogTown/scripts.pory"
	showobjectat 10, MAP_PACIFIDLOG_TOWN
# 452 "data/maps/PacifidlogTown/scripts.pory"
	showobjectat 6, MAP_PACIFIDLOG_TOWN
# 453 "data/maps/PacifidlogTown/scripts.pory"
	showobjectat 7, MAP_PACIFIDLOG_TOWN
# 454 "data/maps/PacifidlogTown/scripts.pory"
	showobjectat 11, MAP_PACIFIDLOG_TOWN
# 456 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_1, PacifidlogTown_SetCompetitorPositionsAfterMinigame_2
PacifidlogTown_SetCompetitorPositionsAfterMinigame_1:
# 462 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_2, PacifidlogTown_SetCompetitorPositionsAfterMinigame_5
PacifidlogTown_SetCompetitorPositionsAfterMinigame_4:
# 468 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_3, PacifidlogTown_SetCompetitorPositionsAfterMinigame_8
PacifidlogTown_SetCompetitorPositionsAfterMinigame_7:
# 474 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_4, PacifidlogTown_SetCompetitorPositionsAfterMinigame_10
	return

PacifidlogTown_SetCompetitorPositionsAfterMinigame_2:
# 458 "data/maps/PacifidlogTown/scripts.pory"
	setobjectxyperm 10, 25, 12
# 459 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 10, Common_Movement_WalkUp2
# 460 "data/maps/PacifidlogTown/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_DOWN
	goto PacifidlogTown_SetCompetitorPositionsAfterMinigame_1

PacifidlogTown_SetCompetitorPositionsAfterMinigame_5:
# 464 "data/maps/PacifidlogTown/scripts.pory"
	setobjectxyperm 6, 25, 12
# 465 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 6, Common_Movement_WalkUp2
# 466 "data/maps/PacifidlogTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
	goto PacifidlogTown_SetCompetitorPositionsAfterMinigame_4

PacifidlogTown_SetCompetitorPositionsAfterMinigame_8:
# 470 "data/maps/PacifidlogTown/scripts.pory"
	setobjectxyperm 7, 23, 12
# 471 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 7, Common_Movement_WalkUp2
# 472 "data/maps/PacifidlogTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
	goto PacifidlogTown_SetCompetitorPositionsAfterMinigame_7

PacifidlogTown_SetCompetitorPositionsAfterMinigame_10:
# 476 "data/maps/PacifidlogTown/scripts.pory"
	setobjectxyperm 11, 23, 12
# 477 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 11, Common_Movement_WalkUp2
# 478 "data/maps/PacifidlogTown/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_DOWN
	return


PacifidlogTown_EventScript_ExitDivingMinigame::
# 484 "data/maps/PacifidlogTown/scripts.pory"
	lockall
# 485 "data/maps/PacifidlogTown/scripts.pory"
	turnplayer DIR_NORTH
# 486 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 489 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_1, PacifidlogTown_EventScript_ExitDivingMinigame_2
PacifidlogTown_EventScript_ExitDivingMinigame_1:
# 493 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_2, PacifidlogTown_EventScript_ExitDivingMinigame_5
PacifidlogTown_EventScript_ExitDivingMinigame_4:
# 497 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_3, PacifidlogTown_EventScript_ExitDivingMinigame_8
PacifidlogTown_EventScript_ExitDivingMinigame_7:
# 501 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_4, PacifidlogTown_EventScript_ExitDivingMinigame_11
PacifidlogTown_EventScript_ExitDivingMinigame_10:
# 505 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 506 "data/maps/PacifidlogTown/scripts.pory"
	delay 30
# 509 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_0
# 510 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 512 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_3, PacifidlogTown_EventScript_ExitDivingMinigame_14
# 516 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_4, PacifidlogTown_EventScript_ExitDivingMinigame_15
PacifidlogTown_EventScript_ExitDivingMinigame_13:
# 522 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 5, PacifidlogTown_Movement_JudgeChecksScoreLeft
# 523 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 524 "data/maps/PacifidlogTown/scripts.pory"
	delay 20
# 525 "data/maps/PacifidlogTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_DIVING_MINIGAME_C1_SCORE
# 526 "data/maps/PacifidlogTown/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_DIVING_MINIGAME_C1_SPECIES
# 527 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_3
# 528 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 529 "data/maps/PacifidlogTown/scripts.pory"
	delay 20
# 532 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_1, PacifidlogTown_EventScript_ExitDivingMinigame_19
# 536 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_2, PacifidlogTown_EventScript_ExitDivingMinigame_20
PacifidlogTown_EventScript_ExitDivingMinigame_18:
# 542 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 5, PacifidlogTown_Movement_JudgeChecksScoreRight
# 543 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 544 "data/maps/PacifidlogTown/scripts.pory"
	delay 20
# 545 "data/maps/PacifidlogTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_DIVING_MINIGAME_C2_SCORE
# 546 "data/maps/PacifidlogTown/scripts.pory"
	bufferspeciesname STR_VAR_3, VAR_DIVING_MINIGAME_C2_SPECIES
# 547 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_6
# 548 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 549 "data/maps/PacifidlogTown/scripts.pory"
	delay 20
# 551 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 5, PacifidlogTown_Movement_JudgeChecksScorePlayer
# 552 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 553 "data/maps/PacifidlogTown/scripts.pory"
	delay 20
# 554 "data/maps/PacifidlogTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_DIVING_MINIGAME_SCORE
# 555 "data/maps/PacifidlogTown/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_DIVING_MINIGAME_PLAYER_SPECIES
# 556 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_DIVING_MINIGAME_SCORE, 0
	goto_if_gt PacifidlogTown_EventScript_ExitDivingMinigame_24
# 562 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_8
PacifidlogTown_EventScript_ExitDivingMinigame_23:
# 564 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 565 "data/maps/PacifidlogTown/scripts.pory"
	delay 40
# 567 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_TEMP_PLAYER_WIN_SCUBA
# 571 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_DIVING_MINIGAME_C1_SCORE, VAR_DIVING_MINIGAME_C2_SCORE
	goto_if_gt PacifidlogTown_EventScript_ExitDivingMinigame_28
PacifidlogTown_EventScript_ExitDivingMinigame_27:
# 609 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_DIVING_MINIGAME_C2_SCORE, VAR_DIVING_MINIGAME_C1_SCORE
	goto_if_gt PacifidlogTown_EventScript_ExitDivingMinigame_31
PacifidlogTown_EventScript_ExitDivingMinigame_30:
# 647 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_TEMP_PLAYER_WIN_SCUBA, PacifidlogTown_EventScript_ExitDivingMinigame_37
# 647 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_DIVING_MINIGAME_SCORE, VAR_DIVING_MINIGAME_C1_SCORE
	goto_if_ge PacifidlogTown_EventScript_ExitDivingMinigame_40
PacifidlogTown_EventScript_ExitDivingMinigame_36:
# 663 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_TEMP_PLAYER_WIN_SCUBA
# 664 "data/maps/PacifidlogTown/scripts.pory"
	delay 30
# 666 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_NEW_DIVING_GAME_HIGH_SCORE, PacifidlogTown_EventScript_ExitDivingMinigame_52
PacifidlogTown_EventScript_ExitDivingMinigame_51:
# 705 "data/maps/PacifidlogTown/scripts.pory"
	setvar VAR_PACIFIDLOG_TOWN_STATE, 0
# 706 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_NEW_DIVING_GAME_HIGH_SCORE
# 707 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_DOING_DIVING_MINIGAME
# 709 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_1
# 710 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_2
# 711 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_3
# 712 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_4
# 714 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_20
# 715 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 716 "data/maps/PacifidlogTown/scripts.pory"
	delay 30
# 718 "data/maps/PacifidlogTown/scripts.pory"
	warpsilent MAP_PACIFIDLOG_TOWN, 24, 14
# 719 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end

PacifidlogTown_EventScript_ExitDivingMinigame_2:
# 491 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 10, PacifidlogTown_Movement_CompetitorsOutOfWater
	goto PacifidlogTown_EventScript_ExitDivingMinigame_1

PacifidlogTown_EventScript_ExitDivingMinigame_5:
# 495 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 6, PacifidlogTown_Movement_CompetitorsOutOfWater
	goto PacifidlogTown_EventScript_ExitDivingMinigame_4

PacifidlogTown_EventScript_ExitDivingMinigame_8:
# 499 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 7, PacifidlogTown_Movement_CompetitorsOutOfWater
	goto PacifidlogTown_EventScript_ExitDivingMinigame_7

PacifidlogTown_EventScript_ExitDivingMinigame_11:
# 503 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 11, PacifidlogTown_Movement_CompetitorsOutOfWater
	goto PacifidlogTown_EventScript_ExitDivingMinigame_10

PacifidlogTown_EventScript_ExitDivingMinigame_14:
# 514 "data/maps/PacifidlogTown/scripts.pory"
	bufferstring STR_VAR_3, PacifidlogTown_EventScript_ExitDivingMinigame_Text_1
	goto PacifidlogTown_EventScript_ExitDivingMinigame_13

PacifidlogTown_EventScript_ExitDivingMinigame_15:
# 518 "data/maps/PacifidlogTown/scripts.pory"
	bufferstring STR_VAR_3, PacifidlogTown_EventScript_ExitDivingMinigame_Text_2
	goto PacifidlogTown_EventScript_ExitDivingMinigame_13

PacifidlogTown_EventScript_ExitDivingMinigame_19:
# 534 "data/maps/PacifidlogTown/scripts.pory"
	bufferstring STR_VAR_2, PacifidlogTown_EventScript_ExitDivingMinigame_Text_4
	goto PacifidlogTown_EventScript_ExitDivingMinigame_18

PacifidlogTown_EventScript_ExitDivingMinigame_20:
# 538 "data/maps/PacifidlogTown/scripts.pory"
	bufferstring STR_VAR_2, PacifidlogTown_EventScript_ExitDivingMinigame_Text_5
	goto PacifidlogTown_EventScript_ExitDivingMinigame_18

PacifidlogTown_EventScript_ExitDivingMinigame_24:
# 558 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_7
	goto PacifidlogTown_EventScript_ExitDivingMinigame_23

PacifidlogTown_EventScript_ExitDivingMinigame_28:
# 573 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_DIVING_MINIGAME_C1_SCORE, VAR_DIVING_MINIGAME_SCORE
	goto_if_gt PacifidlogTown_EventScript_ExitDivingMinigame_33
# 605 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_TEMP_PLAYER_WIN_SCUBA
	goto PacifidlogTown_EventScript_ExitDivingMinigame_27

PacifidlogTown_EventScript_ExitDivingMinigame_31:
# 611 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_DIVING_MINIGAME_C2_SCORE, VAR_DIVING_MINIGAME_SCORE
	goto_if_gt PacifidlogTown_EventScript_ExitDivingMinigame_43
# 643 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_TEMP_PLAYER_WIN_SCUBA
	goto PacifidlogTown_EventScript_ExitDivingMinigame_30

PacifidlogTown_EventScript_ExitDivingMinigame_33:
# 575 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_3, PacifidlogTown_EventScript_ExitDivingMinigame_47
# 579 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_4, PacifidlogTown_EventScript_ExitDivingMinigame_48
PacifidlogTown_EventScript_ExitDivingMinigame_46:
# 584 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_9
# 585 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 586 "data/maps/PacifidlogTown/scripts.pory"
	delay 30
# 587 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 588 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 589 "data/maps/PacifidlogTown/scripts.pory"
	delay 30
# 590 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_10
# 591 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 592 "data/maps/PacifidlogTown/scripts.pory"
	randomelement ITEM_PRETTY_FEATHER, ITEM_PEARL, ITEM_SITRUS_BERRY, ITEM_LUM_BERRY, ITEM_SILK_SCARF, ITEM_CHARCOAL, ITEM_MYSTIC_WATER, ITEM_MIRACLE_SEED, ITEM_MAGNET
# 593 "data/maps/PacifidlogTown/scripts.pory"
	giveitem VAR_RESULT
# 594 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PacifidlogTown_EventScript_ExitDivingMinigame_62
	goto PacifidlogTown_EventScript_ExitDivingMinigame_27

PacifidlogTown_EventScript_ExitDivingMinigame_37:
# 649 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_13
# 650 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 651 "data/maps/PacifidlogTown/scripts.pory"
	giveitem ITEM_BIG_PEARL
# 652 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PacifidlogTown_EventScript_ExitDivingMinigame_55
PacifidlogTown_EventScript_ExitDivingMinigame_54:
# 659 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_14
# 660 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
	goto PacifidlogTown_EventScript_ExitDivingMinigame_36

PacifidlogTown_EventScript_ExitDivingMinigame_40:
# 647 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_DIVING_MINIGAME_SCORE, VAR_DIVING_MINIGAME_C2_SCORE
	goto_if_ge PacifidlogTown_EventScript_ExitDivingMinigame_37
	goto PacifidlogTown_EventScript_ExitDivingMinigame_36

PacifidlogTown_EventScript_ExitDivingMinigame_43:
# 613 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_1, PacifidlogTown_EventScript_ExitDivingMinigame_58
# 617 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_SCUBA_COMPETITOR_2, PacifidlogTown_EventScript_ExitDivingMinigame_59
PacifidlogTown_EventScript_ExitDivingMinigame_57:
# 622 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_12
# 623 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 624 "data/maps/PacifidlogTown/scripts.pory"
	delay 30
# 625 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 626 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 627 "data/maps/PacifidlogTown/scripts.pory"
	delay 30
# 628 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_10
# 629 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 630 "data/maps/PacifidlogTown/scripts.pory"
	randomelement ITEM_PRETTY_FEATHER, ITEM_PEARL, ITEM_SITRUS_BERRY, ITEM_LUM_BERRY, ITEM_SILK_SCARF, ITEM_CHARCOAL, ITEM_MYSTIC_WATER, ITEM_MIRACLE_SEED, ITEM_MAGNET
# 631 "data/maps/PacifidlogTown/scripts.pory"
	giveitem VAR_RESULT
# 632 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PacifidlogTown_EventScript_ExitDivingMinigame_67
	goto PacifidlogTown_EventScript_ExitDivingMinigame_30

PacifidlogTown_EventScript_ExitDivingMinigame_47:
# 577 "data/maps/PacifidlogTown/scripts.pory"
	bufferstring STR_VAR_3, PacifidlogTown_EventScript_ExitDivingMinigame_Text_1
	goto PacifidlogTown_EventScript_ExitDivingMinigame_46

PacifidlogTown_EventScript_ExitDivingMinigame_48:
# 581 "data/maps/PacifidlogTown/scripts.pory"
	bufferstring STR_VAR_3, PacifidlogTown_EventScript_ExitDivingMinigame_Text_2
	goto PacifidlogTown_EventScript_ExitDivingMinigame_46

PacifidlogTown_EventScript_ExitDivingMinigame_52:
# 668 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_NEW_DIVING_GAME_HIGH_SCORE
# 670 "data/maps/PacifidlogTown/scripts.pory"
	checkitem ITEM_HM07
# 671 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PacifidlogTown_EventScript_ExitDivingMinigame_64
# 681 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_15
# 682 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 683 "data/maps/PacifidlogTown/scripts.pory"
	giveitem ITEM_HEART_SCALE, 5
# 684 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PacifidlogTown_EventScript_ExitDivingMinigame_70
PacifidlogTown_EventScript_ExitDivingMinigame_69:
# 691 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_17
# 692 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 693 "data/maps/PacifidlogTown/scripts.pory"
	randomelement ITEM_TM_DRAGON_CLAW, ITEM_TM_BULK_UP, ITEM_TM_ICE_BEAM, ITEM_TM_GIGA_DRAIN, ITEM_TM_THUNDERBOLT, ITEM_TM_EARTHQUAKE, ITEM_TM_RETURN, ITEM_TM_PSYCHIC, ITEM_TM_SHADOW_BALL, ITEM_TM_BRICK_BREAK, ITEM_TM_FLAMETHROWER, ITEM_TM57, ITEM_TM58, ITEM_EVIOLITE, ITEM_BIG_ROOT, ITEM_GRIP_CLAW, ITEM_BLACK_SLUDGE, ITEM_ROCKY_HELMET, ITEM_ZOOM_LENS, ITEM_EVIOLITE, ITEM_LEFTOVERS, ITEM_LEFTOVERS
# 694 "data/maps/PacifidlogTown/scripts.pory"
	giveitem VAR_RESULT
# 695 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PacifidlogTown_EventScript_ExitDivingMinigame_73
PacifidlogTown_EventScript_ExitDivingMinigame_72:
# 700 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_19
# 701 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
	goto PacifidlogTown_EventScript_ExitDivingMinigame_51

PacifidlogTown_EventScript_ExitDivingMinigame_55:
# 654 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_11
# 655 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 656 "data/maps/PacifidlogTown/scripts.pory"
	addmoney 2000
# 657 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
	goto PacifidlogTown_EventScript_ExitDivingMinigame_54

PacifidlogTown_EventScript_ExitDivingMinigame_58:
# 615 "data/maps/PacifidlogTown/scripts.pory"
	bufferstring STR_VAR_2, PacifidlogTown_EventScript_ExitDivingMinigame_Text_4
	goto PacifidlogTown_EventScript_ExitDivingMinigame_57

PacifidlogTown_EventScript_ExitDivingMinigame_59:
# 619 "data/maps/PacifidlogTown/scripts.pory"
	bufferstring STR_VAR_2, PacifidlogTown_EventScript_ExitDivingMinigame_Text_5
	goto PacifidlogTown_EventScript_ExitDivingMinigame_57

PacifidlogTown_EventScript_ExitDivingMinigame_62:
# 596 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_11
# 597 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 598 "data/maps/PacifidlogTown/scripts.pory"
	addmoney 200
# 599 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
	goto PacifidlogTown_EventScript_ExitDivingMinigame_27

PacifidlogTown_EventScript_ExitDivingMinigame_64:
# 673 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_15
# 674 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 675 "data/maps/PacifidlogTown/scripts.pory"
	giveitem ITEM_HM07
# 676 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_16
# 677 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
	goto PacifidlogTown_EventScript_ExitDivingMinigame_51

PacifidlogTown_EventScript_ExitDivingMinigame_67:
# 634 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_11
# 635 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 636 "data/maps/PacifidlogTown/scripts.pory"
	addmoney 200
# 637 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
	goto PacifidlogTown_EventScript_ExitDivingMinigame_30

PacifidlogTown_EventScript_ExitDivingMinigame_70:
# 686 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_11
# 687 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 688 "data/maps/PacifidlogTown/scripts.pory"
	addmoney 5000
# 689 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
	goto PacifidlogTown_EventScript_ExitDivingMinigame_69

PacifidlogTown_EventScript_ExitDivingMinigame_73:
# 697 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_18
# 698 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
	goto PacifidlogTown_EventScript_ExitDivingMinigame_72


PacifidlogTown_EventScript_ExitDivingMinigameAllPokemonFainted::
# 725 "data/maps/PacifidlogTown/scripts.pory"
	lockall
# 726 "data/maps/PacifidlogTown/scripts.pory"
	turnplayer DIR_NORTH
# 727 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 728 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigameAllPokemonFainted_Text_0
# 729 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 730 "data/maps/PacifidlogTown/scripts.pory"
	special HealPlayerParty
# 731 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigameAllPokemonFainted_Text_1
# 732 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 734 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_1
# 735 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_2
# 736 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_3
# 737 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_SCUBA_COMPETITOR_4
# 739 "data/maps/PacifidlogTown/scripts.pory"
	setvar VAR_PACIFIDLOG_TOWN_STATE, 0
# 740 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_NEW_DIVING_GAME_HIGH_SCORE
# 741 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_DOING_DIVING_MINIGAME
# 742 "data/maps/PacifidlogTown/scripts.pory"
	turnplayer DIR_SOUTH
# 743 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end


PacifidlogTown_EventScript_Pelipper_Text_0:
# 71 "data/maps/PacifidlogTown/scripts.pory"
	.string "PELIPPER: Skwaah!$"

PacifidlogTown_EventScript_PelipperFlightMan_Text_0:
# 84 "data/maps/PacifidlogTown/scripts.pory"
	.string "I host a PELIPPER FLIGHT service to\n"
	.string "and from SLATEPORT CITY! Would you like\l"
	.string "a ride?$"

PacifidlogTown_EventScript_PelipperFlightMan_Text_1:
# 88 "data/maps/PacifidlogTown/scripts.pory"
	.string "Why not? Come on, you got a problem with\n"
	.string "riding in a PELIPPER's mouth?$"

PacifidlogTown_EventScript_PelipperFlightMan_Text_2:
# 95 "data/maps/PacifidlogTown/scripts.pory"
	.string "Alright, here we go!$"

PacifidlogTown_EventScript_AppleSalesman_Text_0:
# 110 "data/maps/PacifidlogTown/scripts.pory"
	.string "Apples for sale! Come get your apples,\n"
	.string "fresh from the mainland!$"

PacifidlogTown_EventScript_AppleSalesman_Text_1:
# 113 "data/maps/PacifidlogTown/scripts.pory"
	.string "Come back soon!$"

PacifidlogTown_EventScript_MinigameParticipant_LittleBoy_Text_0:
# 131 "data/maps/PacifidlogTown/scripts.pory"
	.string "RUA: I can't wait for the next SCUBA\n"
	.string "SAFARI round! I've got a plan to win!$"

PacifidlogTown_EventScript_MinigameParticipant_LittleGirl_Text_0:
# 142 "data/maps/PacifidlogTown/scripts.pory"
	.string "PORA: My family moved here to scuba\n"
	.string "dive around the CORSOLA colonies\l"
	.string "nearby!\p"
	.string "I love watching the SCUBA SAFARI!$"

PacifidlogTown_EventScript_MinigameParticipant_TriatheleteM_Text_0:
# 153 "data/maps/PacifidlogTown/scripts.pory"
	.string "TAONGA: Huff huff... Gotta train...\n"
	.string "PACIFIDLOG TOWN honors its seafaring\l"
	.string "roots through the SCUBA SAFARI\l"
	.string "competition! I need to do my best!$"

PacifidlogTown_EventScript_MinigameParticipant_TriatheleteF_Text_0:
# 164 "data/maps/PacifidlogTown/scripts.pory"
	.string "TAIKO: Huff huff... Have to train...\n"
	.string "I have to swim fast to find rare\l"
	.string "POKéMON in the competition, they'll get\l"
	.string "a higher score!$"

DivingMinigame_EventScript_CentralSign_Text_0:
# 177 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG SCUBA SAFARI AREA 1\n"
	.string "CENTRAL AREA\p"
	.string "An Introduction to Diving!$"

DivingMinigame_EventScript_NorthSign_Text_0:
# 185 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG SCUBA SAFARI AREA 2\n"
	.string "NORTH AREA\p"
	.string "Cool Temperatures, Cooler POKéMON!$"

DivingMinigame_EventScript_EastSign_Text_0:
# 193 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG SCUBA SAFARI AREA 3\n"
	.string "EAST AREA\p"
	.string "Mysterious POKéMON in Mysterious\n"
	.string "Ruins!$"

DivingMinigame_EventScript_SouthSign_Text_0:
# 201 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG SCUBA SAFARI AREA 4\n"
	.string "SOUTH AREA\p"
	.string "The Depths of the Seas!$"

DivingMinigame_EventScript_WestSign_Text_0:
# 209 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG SCUBA SAFARI AREA 5\n"
	.string "WEST AREA\p"
	.string "Shallow Pools where Land meets Sea!$"

DivingMinigame_EventScript_SailorJudge_Text_0:
# 219 "data/maps/PacifidlogTown/scripts.pory"
	.string "Yo ho ho, SCUBA SAFARI master! Are you\n"
	.string "ready to end your SCUBA SAFARI?$"

DivingMinigame_EventScript_SailorJudge_Text_1:
# 224 "data/maps/PacifidlogTown/scripts.pory"
	.string "Great, get back to it!\n"
	.string "You have {STR_VAR_1} tiles left to\l"
	.string "swim before time's up!$"

DivingMinigame_EventScript_SailorJudge_Text_2:
# 229 "data/maps/PacifidlogTown/scripts.pory"
	.string "Alrighty here, let me start the\n"
	.string "announcement!$"

PacifidlogTown_EventScript_DivingMinigameNPC_Text_0:
# 248 "data/maps/PacifidlogTown/scripts.pory"
	.string "Ahoy, TRAINER! Do you want to play the\n"
	.string "PACIFIDLOG SCUBA SAFARI? Just ¥100!$"

PacifidlogTown_EventScript_DivingMinigameNPC_Text_1:
# 255 "data/maps/PacifidlogTown/scripts.pory"
	.string "Alright! Come back soon!$"

PacifidlogTown_EventScript_DivingMinigameNPC_Text_2:
# 266 "data/maps/PacifidlogTown/scripts.pory"
	.string "Sorry, sailor! Looks like you're a bit low\n"
	.string "on funds.$"

PacifidlogTown_EventScript_DivingMinigameNPC_Text_3:
# 280 "data/maps/PacifidlogTown/scripts.pory"
	.string "Alrighty! Let's get a SCUBA GROUP\n"
	.string "together!$"

PacifidlogTown_EventScript_DivingMinigameNPC_Text_4:
# 346 "data/maps/PacifidlogTown/scripts.pory"
	.string "Looks like we've got a good crew going!\n"
	.string "Let's DIVE!$"

PacifidlogTown_EventScript_DivingMinigameNPC_Text_5:
# 382 "data/maps/PacifidlogTown/scripts.pory"
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
# 384 "data/maps/PacifidlogTown/scripts.pory"
	.string "...Phew, that was a lot! Oh right, and you\n"
	.string "don't even need the DIVE HM to play! We\l"
	.string "provide you with everything you need.\l"
	.string "Now, with that out of the way...$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_0:
# 509 "data/maps/PacifidlogTown/scripts.pory"
	.string "Welcome back, everyone! Time for\n"
	.string "scoring! Let's see your most recent\l"
	.string "catch...$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_1:
# 514 "data/maps/PacifidlogTown/scripts.pory"
	.string "Taonga$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_2:
# 518 "data/maps/PacifidlogTown/scripts.pory"
	.string "Rua$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_3:
# 527 "data/maps/PacifidlogTown/scripts.pory"
	.string "{STR_VAR_3}'s catch, a\n"
	.string "{STR_VAR_2}, scored {STR_VAR_1}!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_4:
# 534 "data/maps/PacifidlogTown/scripts.pory"
	.string "Pora$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_5:
# 538 "data/maps/PacifidlogTown/scripts.pory"
	.string "Taiko$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_6:
# 547 "data/maps/PacifidlogTown/scripts.pory"
	.string "{STR_VAR_2}'s catch, a\n"
	.string "{STR_VAR_3}, scored {STR_VAR_1}!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_7:
# 558 "data/maps/PacifidlogTown/scripts.pory"
	.string "{PLAYER}'s catch, a {STR_VAR_2},\n"
	.string "scored {STR_VAR_1}!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_8:
# 562 "data/maps/PacifidlogTown/scripts.pory"
	.string "{PLAYER}'s catch, a... huh? Looks like\n"
	.string "an unsuccessful dive! Make sure to\l"
	.string "keep track of your time down there!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_9:
# 584 "data/maps/PacifidlogTown/scripts.pory"
	.string "Looks like {STR_VAR_3} won! They'll\n"
	.string "be receiving the first place prize!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_10:
# 590 "data/maps/PacifidlogTown/scripts.pory"
	.string "...ah, don't fret! All participants in the\n"
	.string "SCUBA SAFARI receive a little\l"
	.string "something! Here!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_11:
# 596 "data/maps/PacifidlogTown/scripts.pory"
	.string "Hm, looks like your bag is full of\n"
	.string "treasure! I'll give you a bit of cash,\l"
	.string "then.$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_12:
# 622 "data/maps/PacifidlogTown/scripts.pory"
	.string "Looks like {STR_VAR_2} won! They'll\n"
	.string "be receiving the first place prize!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_13:
# 649 "data/maps/PacifidlogTown/scripts.pory"
	.string "Looks like {PLAYER} won! They'll be\n"
	.string "receiving the first place prize!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_14:
# 659 "data/maps/PacifidlogTown/scripts.pory"
	.string "All other participants will receive a\n"
	.string "smaller prize.$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_15:
# 673 "data/maps/PacifidlogTown/scripts.pory"
	.string "Looks like a new high score! Here's a\n"
	.string "special prize!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_16:
# 676 "data/maps/PacifidlogTown/scripts.pory"
	.string "It says on the manual here you need all\n"
	.string "8 GYM BADGES to use WATERFALL out of\l"
	.string "battle. Only true masters of the seas\l"
	.string "can have this HM!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_17:
# 691 "data/maps/PacifidlogTown/scripts.pory"
	.string "And here, take a nice rare item too!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_18:
# 697 "data/maps/PacifidlogTown/scripts.pory"
	.string "...Oh, right. The full bag.$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_19:
# 700 "data/maps/PacifidlogTown/scripts.pory"
	.string "We find TMs, rare held items, and other\n"
	.string "stuff floating in the sea from time to\l"
	.string "time. It's important to clean up where\l"
	.string "we can!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_20:
# 714 "data/maps/PacifidlogTown/scripts.pory"
	.string "Please, come play again soon!$"

PacifidlogTown_EventScript_ExitDivingMinigameAllPokemonFainted_Text_0:
# 728 "data/maps/PacifidlogTown/scripts.pory"
	.string "Woah there! Looks like the POKéMON\n"
	.string "down there were a bit strong! I'll heal\l"
	.string "you up.$"

PacifidlogTown_EventScript_ExitDivingMinigameAllPokemonFainted_Text_1:
# 731 "data/maps/PacifidlogTown/scripts.pory"
	.string "Remember, the seas can be dangerous!\n"
	.string "I'd get my hands on a POKéMON with the\l"
	.string "RUN AWAY ability if I were you. They're\l"
	.string "great for getting out of rough\l"
	.string "situations!$"

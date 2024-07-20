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
	end
# 16 "data/maps/PacifidlogTown/scripts.pory"

# 17 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_OnResume:
# 18 "data/maps/PacifidlogTown/scripts.pory"
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
# 19 "data/maps/PacifidlogTown/scripts.pory"
	end
# 20 "data/maps/PacifidlogTown/scripts.pory"

# 21 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_NinjaBoy::
# 22 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_NeatHousesOnWater, MSGBOX_NPC
# 23 "data/maps/PacifidlogTown/scripts.pory"
	end
# 24 "data/maps/PacifidlogTown/scripts.pory"

# 25 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Girl::
# 26 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_FastRunningCurrent, MSGBOX_NPC
# 27 "data/maps/PacifidlogTown/scripts.pory"
	end
# 28 "data/maps/PacifidlogTown/scripts.pory"

# 29 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Fisherman::
# 30 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_SkyPillarTooScary, MSGBOX_NPC
# 31 "data/maps/PacifidlogTown/scripts.pory"
	end
# 32 "data/maps/PacifidlogTown/scripts.pory"

# 33 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_TownSign::
# 34 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_TownSign, MSGBOX_SIGN
# 35 "data/maps/PacifidlogTown/scripts.pory"
	end
# 36 "data/maps/PacifidlogTown/scripts.pory"

# 37 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_FastRunningCurrent:
# 38 "data/maps/PacifidlogTown/scripts.pory"
	.string "The sea between PACIFIDLOG and\n"
# 39 "data/maps/PacifidlogTown/scripts.pory"
	.string "SLATEPORT has a fast-running tide.\p"
# 40 "data/maps/PacifidlogTown/scripts.pory"
	.string "If you decide to SURF, you could end\n"
# 41 "data/maps/PacifidlogTown/scripts.pory"
	.string "up swept away somewhere else.$"
# 42 "data/maps/PacifidlogTown/scripts.pory"

# 43 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_NeatHousesOnWater:
# 44 "data/maps/PacifidlogTown/scripts.pory"
	.string "See, isn't it neat?\n"
# 45 "data/maps/PacifidlogTown/scripts.pory"
	.string "These houses are on water!\p"
# 46 "data/maps/PacifidlogTown/scripts.pory"
	.string "I was born here!$"
# 47 "data/maps/PacifidlogTown/scripts.pory"

# 48 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_SkyPillarTooScary:
# 49 "data/maps/PacifidlogTown/scripts.pory"
	.string "The SKY PILLAR?\p"
# 50 "data/maps/PacifidlogTown/scripts.pory"
	.string "…Oh, you must mean that tall, tall\n"
# 51 "data/maps/PacifidlogTown/scripts.pory"
	.string "tower a little further out.\p"
# 52 "data/maps/PacifidlogTown/scripts.pory"
	.string "If you asked me, I wouldn't climb it.\n"
# 53 "data/maps/PacifidlogTown/scripts.pory"
	.string "It's too scary to get up that high.\p"
# 54 "data/maps/PacifidlogTown/scripts.pory"
	.string "Life at sea level in PACIFIDLOG,\n"
# 55 "data/maps/PacifidlogTown/scripts.pory"
	.string "that suits me fine.$"
# 56 "data/maps/PacifidlogTown/scripts.pory"

# 57 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_TownSign:
# 58 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG TOWN\p"
# 59 "data/maps/PacifidlogTown/scripts.pory"
	.string "“Where the morning sun smiles upon\n"
# 60 "data/maps/PacifidlogTown/scripts.pory"
	.string "the waters.”$"

PacifidlogTown_EventScript_AppleSalesman::
# 66 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 67 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 68 "data/maps/PacifidlogTown/scripts.pory"
	message PacifidlogTown_EventScript_AppleSalesman_Text_0
# 69 "data/maps/PacifidlogTown/scripts.pory"
	waitmessage
# 70 "data/maps/PacifidlogTown/scripts.pory"
	pokemart PacifidlogTown_AppleMart
# 71 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_AppleSalesman_Text_1
# 72 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 73 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


	.align 2
# 77 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_AppleMart:
# 79 "data/maps/PacifidlogTown/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 80 "data/maps/PacifidlogTown/scripts.pory"
	.2byte ITEM_TART_APPLE
# 81 "data/maps/PacifidlogTown/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 82 "data/maps/PacifidlogTown/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
	.2byte ITEM_NONE

PacifidlogTown_EventScript_MinigameParticipant_SwimmerM::
# 87 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 88 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 89 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_MinigameParticipant_SwimmerM_Text_0
# 90 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 91 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


PacifidlogTown_EventScript_MinigameParticipant_SwimmerF::
# 96 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 97 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 98 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_MinigameParticipant_SwimmerF_Text_0
# 99 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 100 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


PacifidlogTown_EventScript_MinigameParticipant_LittleBoy::
# 105 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 106 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 107 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_MinigameParticipant_LittleBoy_Text_0
# 108 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 109 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


PacifidlogTown_EventScript_MinigameParticipant_LittleGirl::
# 114 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 115 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 116 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_MinigameParticipant_LittleGirl_Text_0
# 117 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 118 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


PacifidlogTown_EventScript_MinigameParticipant_TriatheleteM::
# 123 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 124 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 125 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_MinigameParticipant_TriatheleteM_Text_0
# 126 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 127 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


PacifidlogTown_EventScript_MinigameParticipant_TriatheleteF::
# 132 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 133 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 134 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_MinigameParticipant_TriatheleteF_Text_0
# 135 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 136 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


DivingMinigame_EventScript_CentralSign::
# 144 "data/maps/PacifidlogTown/scripts.pory"
	lockall
# 145 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_CentralSign_Text_0
# 146 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 147 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end


DivingMinigame_EventScript_NorthSign::
# 152 "data/maps/PacifidlogTown/scripts.pory"
	lockall
# 153 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_NorthSign_Text_0
# 154 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 155 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end


DivingMinigame_EventScript_EastSign::
# 160 "data/maps/PacifidlogTown/scripts.pory"
	lockall
# 161 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_EastSign_Text_0
# 162 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 163 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end


DivingMinigame_EventScript_SouthSign::
# 168 "data/maps/PacifidlogTown/scripts.pory"
	lockall
# 169 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_SouthSign_Text_0
# 170 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 171 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end


DivingMinigame_EventScript_WestSign::
# 176 "data/maps/PacifidlogTown/scripts.pory"
	lockall
# 177 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_WestSign_Text_0
# 178 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 179 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end


DivingMinigame_EventScript_SailorJudge::
# 185 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 186 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 187 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_SailorJudge_Text_0, MSGBOX_YESNO
# 189 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DivingMinigame_EventScript_SailorJudge_2
# 197 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_SailorJudge_Text_2
# 198 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 199 "data/maps/PacifidlogTown/scripts.pory"
	delay 60
# 200 "data/maps/PacifidlogTown/scripts.pory"
	goto DivingMinigame_EventScript_TimesUp
DivingMinigame_EventScript_SailorJudge_1:
# 203 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 204 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 205 "data/maps/PacifidlogTown/scripts.pory"
	release
	end

DivingMinigame_EventScript_SailorJudge_2:
# 191 "data/maps/PacifidlogTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_DIVING_MINIGAME_STEP_COUNT
# 192 "data/maps/PacifidlogTown/scripts.pory"
	msgbox DivingMinigame_EventScript_SailorJudge_Text_1
# 193 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
	goto DivingMinigame_EventScript_SailorJudge_1


PacifidlogTown_EventScript_DivingMinigameNPC::
# 213 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 214 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 215 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_DivingMinigameNPC_Text_0, MSGBOX_YESNO
# 217 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PacifidlogTown_EventScript_DivingMinigameNPC_2
# 226 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_DivingMinigameNPC_Text_2
# 227 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 228 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_DOING_DIVING_MINIGAME
# 229 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_NEW_DIVING_GAME_HIGH_SCORE
# 231 "data/maps/PacifidlogTown/scripts.pory"
	special EnterDivingMinigame
# 233 "data/maps/PacifidlogTown/scripts.pory"
	warp MAP_DIVING_MINIGAME, 8, 12
# 234 "data/maps/PacifidlogTown/scripts.pory"
	waitstate
	end

# 238 "data/maps/PacifidlogTown/scripts.pory"
	release
	end

PacifidlogTown_EventScript_DivingMinigameNPC_2:
# 219 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_DivingMinigameNPC_Text_1
# 220 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 221 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


PacifidlogTown_EventScript_ExitDivingMinigame::
# 244 "data/maps/PacifidlogTown/scripts.pory"
	lockall
# 245 "data/maps/PacifidlogTown/scripts.pory"
	turnplayer DIR_NORTH
# 247 "data/maps/PacifidlogTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_DIVING_MINIGAME_SCORE
# 249 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_0
# 250 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 252 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_NEW_DIVING_GAME_HIGH_SCORE, PacifidlogTown_EventScript_ExitDivingMinigame_2
PacifidlogTown_EventScript_ExitDivingMinigame_1:
# 279 "data/maps/PacifidlogTown/scripts.pory"
	setvar VAR_PACIFIDLOG_TOWN_STATE, 0
# 280 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_NEW_DIVING_GAME_HIGH_SCORE
# 281 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_DOING_DIVING_MINIGAME
# 283 "data/maps/PacifidlogTown/scripts.pory"
	turnplayer DIR_SOUTH
# 284 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end

PacifidlogTown_EventScript_ExitDivingMinigame_2:
# 254 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_NEW_DIVING_GAME_HIGH_SCORE
# 256 "data/maps/PacifidlogTown/scripts.pory"
	checkitem ITEM_HM07
# 257 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PacifidlogTown_EventScript_ExitDivingMinigame_4
# 267 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_1
# 268 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 269 "data/maps/PacifidlogTown/scripts.pory"
	giveitem ITEM_HEART_SCALE, 5
# 270 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_3
# 271 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 272 "data/maps/PacifidlogTown/scripts.pory"
	randomelement ITEM_TM_DRAGON_CLAW, ITEM_TM_BULK_UP, ITEM_TM_ICE_BEAM, ITEM_TM_GIGA_DRAIN, ITEM_TM_THUNDERBOLT, ITEM_TM_EARTHQUAKE, ITEM_TM_RETURN, ITEM_TM_PSYCHIC, ITEM_TM_SHADOW_BALL, ITEM_TM_BRICK_BREAK, ITEM_TM_FLAMETHROWER, ITEM_TM57, ITEM_TM58
# 273 "data/maps/PacifidlogTown/scripts.pory"
	giveitem VAR_RESULT
# 274 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_4
# 275 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
	goto PacifidlogTown_EventScript_ExitDivingMinigame_1

PacifidlogTown_EventScript_ExitDivingMinigame_4:
# 259 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_1
# 260 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 261 "data/maps/PacifidlogTown/scripts.pory"
	giveitem ITEM_HM07
# 262 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_2
# 263 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
	goto PacifidlogTown_EventScript_ExitDivingMinigame_1


PacifidlogTown_EventScript_ExitDivingMinigameAllPokemonFainted::
# 290 "data/maps/PacifidlogTown/scripts.pory"
	lockall
# 291 "data/maps/PacifidlogTown/scripts.pory"
	turnplayer DIR_NORTH
# 292 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigameAllPokemonFainted_Text_0
# 293 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 294 "data/maps/PacifidlogTown/scripts.pory"
	special HealPlayerParty
# 295 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigameAllPokemonFainted_Text_1
# 296 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 298 "data/maps/PacifidlogTown/scripts.pory"
	setvar VAR_PACIFIDLOG_TOWN_STATE, 0
# 299 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_NEW_DIVING_GAME_HIGH_SCORE
# 300 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_DOING_DIVING_MINIGAME
# 301 "data/maps/PacifidlogTown/scripts.pory"
	turnplayer DIR_SOUTH
# 302 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end


PacifidlogTown_EventScript_AppleSalesman_Text_0:
# 68 "data/maps/PacifidlogTown/scripts.pory"
	.string "Apples for sale! Come get your apples,\n"
	.string "fresh from the mainland!$"

PacifidlogTown_EventScript_AppleSalesman_Text_1:
# 71 "data/maps/PacifidlogTown/scripts.pory"
	.string "Come back soon!$"

PacifidlogTown_EventScript_MinigameParticipant_SwimmerM_Text_0:
# 89 "data/maps/PacifidlogTown/scripts.pory"
	.string "I'm getting ready to participate in the\n"
	.string "SCUBA SAFARI by practicing my swimming!$"

PacifidlogTown_EventScript_MinigameParticipant_SwimmerF_Text_0:
# 98 "data/maps/PacifidlogTown/scripts.pory"
	.string "Hehehe, I'm gonna crush it in the next\n"
	.string "SCUBA SAFARI competition!\l"
	.string "I hear rarer POKéMON are worth a higher\l"
	.string "score!$"

PacifidlogTown_EventScript_MinigameParticipant_LittleBoy_Text_0:
# 107 "data/maps/PacifidlogTown/scripts.pory"
	.string "I can't wait for the next SCUBA SAFARI\n"
	.string "round! My mommy is finally letting me\l"
	.string "play!$"

PacifidlogTown_EventScript_MinigameParticipant_LittleGirl_Text_0:
# 116 "data/maps/PacifidlogTown/scripts.pory"
	.string "My family moved here to scuba dive\n"
	.string "around the CORSOLA colonies nearby!$"

PacifidlogTown_EventScript_MinigameParticipant_TriatheleteM_Text_0:
# 125 "data/maps/PacifidlogTown/scripts.pory"
	.string "Huff huff... Gotta train...\n"
	.string "PACIFIDLOG TOWN honors it's seafaring\l"
	.string "roots through the SCUBA SAFARI\l"
	.string "competition! I need to do my best!$"

PacifidlogTown_EventScript_MinigameParticipant_TriatheleteF_Text_0:
# 134 "data/maps/PacifidlogTown/scripts.pory"
	.string "Huff huff... Have to train...\n"
	.string "I have to swim fast to find rare\l"
	.string "POKéMON in the competition, they'll get\l"
	.string "a higher score!$"

DivingMinigame_EventScript_CentralSign_Text_0:
# 145 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG SCUBA SAFARI AREA 1\n"
	.string "CENTRAL AREA\p"
	.string "An Introduction to Diving!$"

DivingMinigame_EventScript_NorthSign_Text_0:
# 153 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG SCUBA SAFARI AREA 2\n"
	.string "NORTH AREA\p"
	.string "Cool Temperatures, Cooler POKéMON!$"

DivingMinigame_EventScript_EastSign_Text_0:
# 161 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG SCUBA SAFARI AREA 3\n"
	.string "EAST AREA\p"
	.string "Mysterious POKéMON in Mysterious\n"
	.string "Ruins!$"

DivingMinigame_EventScript_SouthSign_Text_0:
# 169 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG SCUBA SAFARI AREA 4\n"
	.string "SOUTH AREA\p"
	.string "The Depths of the Seas!$"

DivingMinigame_EventScript_WestSign_Text_0:
# 177 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG SCUBA SAFARI AREA 5\n"
	.string "WEST AREA\p"
	.string "Shallow Pools where Land meets Sea!$"

DivingMinigame_EventScript_SailorJudge_Text_0:
# 187 "data/maps/PacifidlogTown/scripts.pory"
	.string "Yo ho ho, little SCUBA champ! Are you\n"
	.string "ready to end your SCUBA SAFARI?$"

DivingMinigame_EventScript_SailorJudge_Text_1:
# 192 "data/maps/PacifidlogTown/scripts.pory"
	.string "Great, get back to it!\n"
	.string "You have {STR_VAR_1} tiles left to\l"
	.string "swim before time's up!$"

DivingMinigame_EventScript_SailorJudge_Text_2:
# 197 "data/maps/PacifidlogTown/scripts.pory"
	.string "Alrighty here, let me start the\n"
	.string "announcement!$"

PacifidlogTown_EventScript_DivingMinigameNPC_Text_0:
# 215 "data/maps/PacifidlogTown/scripts.pory"
	.string "Ahoy, young TRAINER! Do you want to\n"
	.string "play the PACIFIDLOG SCUBA SAFARI?$"

PacifidlogTown_EventScript_DivingMinigameNPC_Text_1:
# 219 "data/maps/PacifidlogTown/scripts.pory"
	.string "Alright! Come back soon!$"

PacifidlogTown_EventScript_DivingMinigameNPC_Text_2:
# 226 "data/maps/PacifidlogTown/scripts.pory"
	.string "Alrighty! Let's get you down there!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_0:
# 249 "data/maps/PacifidlogTown/scripts.pory"
	.string "Looks good!\n"
	.string "Your score was {STR_VAR_1}!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_1:
# 259 "data/maps/PacifidlogTown/scripts.pory"
	.string "Looks like a new high score! Here's a\n"
	.string "special prize!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_2:
# 262 "data/maps/PacifidlogTown/scripts.pory"
	.string "It says on the manual here you need all\n"
	.string "8 GYM BADGES to use WATERFALL out of\l"
	.string "battle. Only true masters of the seas\l"
	.string "can have this HM!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_3:
# 270 "data/maps/PacifidlogTown/scripts.pory"
	.string "And here, take a nice TM too!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_4:
# 274 "data/maps/PacifidlogTown/scripts.pory"
	.string "We find TMs floating in the sea from\n"
	.string "time to time. It's important to clean up\l"
	.string "where we can!$"

PacifidlogTown_EventScript_ExitDivingMinigameAllPokemonFainted_Text_0:
# 292 "data/maps/PacifidlogTown/scripts.pory"
	.string "Woah there! Looks like the POKéMON\n"
	.string "down there were a bit strong! I'll heal\l"
	.string "you up.$"

PacifidlogTown_EventScript_ExitDivingMinigameAllPokemonFainted_Text_1:
# 295 "data/maps/PacifidlogTown/scripts.pory"
	.string "Remember, the seas can be dangerous!\n"
	.string "I'd get my hands on a POKéMON with the\l"
	.string "RUN AWAY ability if I were you. They're\l"
	.string "great for getting out of rough\l"
	.string "situations!$"

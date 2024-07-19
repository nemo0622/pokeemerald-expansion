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
	.2byte 0
# 11 "data/maps/PacifidlogTown/scripts.pory"

# 12 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_OnTransition:
# 13 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
# 14 "data/maps/PacifidlogTown/scripts.pory"
	end
# 15 "data/maps/PacifidlogTown/scripts.pory"

# 16 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_OnResume:
# 17 "data/maps/PacifidlogTown/scripts.pory"
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
# 18 "data/maps/PacifidlogTown/scripts.pory"
	end
# 19 "data/maps/PacifidlogTown/scripts.pory"

# 20 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_NinjaBoy::
# 21 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_NeatHousesOnWater, MSGBOX_NPC
# 22 "data/maps/PacifidlogTown/scripts.pory"
	end
# 23 "data/maps/PacifidlogTown/scripts.pory"

# 24 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Girl::
# 25 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_FastRunningCurrent, MSGBOX_NPC
# 26 "data/maps/PacifidlogTown/scripts.pory"
	end
# 27 "data/maps/PacifidlogTown/scripts.pory"

# 28 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Fisherman::
# 29 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_SkyPillarTooScary, MSGBOX_NPC
# 30 "data/maps/PacifidlogTown/scripts.pory"
	end
# 31 "data/maps/PacifidlogTown/scripts.pory"

# 32 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_TownSign::
# 33 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_TownSign, MSGBOX_SIGN
# 34 "data/maps/PacifidlogTown/scripts.pory"
	end
# 35 "data/maps/PacifidlogTown/scripts.pory"

# 36 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_FastRunningCurrent:
# 37 "data/maps/PacifidlogTown/scripts.pory"
	.string "The sea between PACIFIDLOG and\n"
# 38 "data/maps/PacifidlogTown/scripts.pory"
	.string "SLATEPORT has a fast-running tide.\p"
# 39 "data/maps/PacifidlogTown/scripts.pory"
	.string "If you decide to SURF, you could end\n"
# 40 "data/maps/PacifidlogTown/scripts.pory"
	.string "up swept away somewhere else.$"
# 41 "data/maps/PacifidlogTown/scripts.pory"

# 42 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_NeatHousesOnWater:
# 43 "data/maps/PacifidlogTown/scripts.pory"
	.string "See, isn't it neat?\n"
# 44 "data/maps/PacifidlogTown/scripts.pory"
	.string "These houses are on water!\p"
# 45 "data/maps/PacifidlogTown/scripts.pory"
	.string "I was born here!$"
# 46 "data/maps/PacifidlogTown/scripts.pory"

# 47 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_SkyPillarTooScary:
# 48 "data/maps/PacifidlogTown/scripts.pory"
	.string "The SKY PILLAR?\p"
# 49 "data/maps/PacifidlogTown/scripts.pory"
	.string "…Oh, you must mean that tall, tall\n"
# 50 "data/maps/PacifidlogTown/scripts.pory"
	.string "tower a little further out.\p"
# 51 "data/maps/PacifidlogTown/scripts.pory"
	.string "If you asked me, I wouldn't climb it.\n"
# 52 "data/maps/PacifidlogTown/scripts.pory"
	.string "It's too scary to get up that high.\p"
# 53 "data/maps/PacifidlogTown/scripts.pory"
	.string "Life at sea level in PACIFIDLOG,\n"
# 54 "data/maps/PacifidlogTown/scripts.pory"
	.string "that suits me fine.$"
# 55 "data/maps/PacifidlogTown/scripts.pory"

# 56 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_TownSign:
# 57 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG TOWN\p"
# 58 "data/maps/PacifidlogTown/scripts.pory"
	.string "“Where the morning sun smiles upon\n"
# 59 "data/maps/PacifidlogTown/scripts.pory"
	.string "the waters.”$"

PacifidlogTown_EventScript_AppleSalesman::
# 65 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 66 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 67 "data/maps/PacifidlogTown/scripts.pory"
	message PacifidlogTown_EventScript_AppleSalesman_Text_0
# 68 "data/maps/PacifidlogTown/scripts.pory"
	waitmessage
# 69 "data/maps/PacifidlogTown/scripts.pory"
	pokemart PacifidlogTown_AppleMart
# 70 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_AppleSalesman_Text_1
# 71 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 72 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


	.align 2
# 76 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_AppleMart:
# 78 "data/maps/PacifidlogTown/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 79 "data/maps/PacifidlogTown/scripts.pory"
	.2byte ITEM_TART_APPLE
# 80 "data/maps/PacifidlogTown/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 81 "data/maps/PacifidlogTown/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
	.2byte ITEM_NONE

PacifidlogTown_EventScript_DivingMinigameNPC::
# 86 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 87 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 88 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_DivingMinigameNPC_Text_0, MSGBOX_YESNO
# 90 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PacifidlogTown_EventScript_DivingMinigameNPC_2
# 99 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_DivingMinigameNPC_Text_2
# 100 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 101 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_DOING_DIVING_MINIGAME
# 102 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_NEW_DIVING_GAME_HIGH_SCORE
# 104 "data/maps/PacifidlogTown/scripts.pory"
	special EnterDivingMinigame
# 106 "data/maps/PacifidlogTown/scripts.pory"
	warp MAP_DIVING_MINIGAME, 8, 12
# 107 "data/maps/PacifidlogTown/scripts.pory"
	waitstate
	end

# 111 "data/maps/PacifidlogTown/scripts.pory"
	release
	end

PacifidlogTown_EventScript_DivingMinigameNPC_2:
# 92 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_DivingMinigameNPC_Text_1
# 93 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 94 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


PacifidlogTown_EventScript_ExitDivingMinigame::
# 117 "data/maps/PacifidlogTown/scripts.pory"
	lockall
# 118 "data/maps/PacifidlogTown/scripts.pory"
	turnplayer DIR_NORTH
# 120 "data/maps/PacifidlogTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_DIVING_MINIGAME_SCORE
# 122 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_0
# 123 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 125 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_NEW_DIVING_GAME_HIGH_SCORE, PacifidlogTown_EventScript_ExitDivingMinigame_2
PacifidlogTown_EventScript_ExitDivingMinigame_1:
# 152 "data/maps/PacifidlogTown/scripts.pory"
	setvar VAR_PACIFIDLOG_TOWN_STATE, 0
# 153 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_NEW_DIVING_GAME_HIGH_SCORE
# 154 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_DOING_DIVING_MINIGAME
# 156 "data/maps/PacifidlogTown/scripts.pory"
	turnplayer DIR_SOUTH
# 157 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end

PacifidlogTown_EventScript_ExitDivingMinigame_2:
# 127 "data/maps/PacifidlogTown/scripts.pory"
	clearflag FLAG_NEW_DIVING_GAME_HIGH_SCORE
# 129 "data/maps/PacifidlogTown/scripts.pory"
	checkitem ITEM_HM07
# 130 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PacifidlogTown_EventScript_ExitDivingMinigame_4
# 140 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_1
# 141 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 142 "data/maps/PacifidlogTown/scripts.pory"
	giveitem ITEM_HEART_SCALE, 5
# 143 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_3
# 144 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 145 "data/maps/PacifidlogTown/scripts.pory"
	randomelement ITEM_TM_DRAGON_CLAW, ITEM_TM_BULK_UP, ITEM_TM_ICE_BEAM, ITEM_TM_GIGA_DRAIN, ITEM_TM_THUNDERBOLT, ITEM_TM_EARTHQUAKE, ITEM_TM_RETURN, ITEM_TM_PSYCHIC, ITEM_TM_SHADOW_BALL, ITEM_TM_BRICK_BREAK, ITEM_TM_FLAMETHROWER, ITEM_TM57, ITEM_TM58
# 146 "data/maps/PacifidlogTown/scripts.pory"
	giveitem VAR_RESULT
# 147 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_4
# 148 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
	goto PacifidlogTown_EventScript_ExitDivingMinigame_1

PacifidlogTown_EventScript_ExitDivingMinigame_4:
# 132 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_1
# 133 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 134 "data/maps/PacifidlogTown/scripts.pory"
	giveitem ITEM_HM07
# 135 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_ExitDivingMinigame_Text_2
# 136 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
	goto PacifidlogTown_EventScript_ExitDivingMinigame_1


PacifidlogTown_EventScript_AppleSalesman_Text_0:
# 67 "data/maps/PacifidlogTown/scripts.pory"
	.string "Apples for sale! Come get your apples,\n"
	.string "fresh from the mainland!$"

PacifidlogTown_EventScript_AppleSalesman_Text_1:
# 70 "data/maps/PacifidlogTown/scripts.pory"
	.string "Come back soon!$"

PacifidlogTown_EventScript_DivingMinigameNPC_Text_0:
# 88 "data/maps/PacifidlogTown/scripts.pory"
	.string "Heya, young TRAINER! Do you want to\n"
	.string "play the PACIFIDLOG Diving Game?$"

PacifidlogTown_EventScript_DivingMinigameNPC_Text_1:
# 92 "data/maps/PacifidlogTown/scripts.pory"
	.string "Alright! Come back soon!$"

PacifidlogTown_EventScript_DivingMinigameNPC_Text_2:
# 99 "data/maps/PacifidlogTown/scripts.pory"
	.string "Alrighty! Let's get you down there!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_0:
# 122 "data/maps/PacifidlogTown/scripts.pory"
	.string "Looks good!\n"
	.string "Your score was {STR_VAR_1}!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_1:
# 132 "data/maps/PacifidlogTown/scripts.pory"
	.string "Looks like a new high score! Here's a\n"
	.string "special prize!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_2:
# 135 "data/maps/PacifidlogTown/scripts.pory"
	.string "It says on the manual here you need all\n"
	.string "8 GYM BADGES to use WATERFALL out of\l"
	.string "battle. Only true masters of the seas\l"
	.string "can have this HM!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_3:
# 143 "data/maps/PacifidlogTown/scripts.pory"
	.string "And here, take a nice TM too!$"

PacifidlogTown_EventScript_ExitDivingMinigame_Text_4:
# 147 "data/maps/PacifidlogTown/scripts.pory"
	.string "We find TMs floating in the sea from\n"
	.string "time to time. It's important to clean up\l"
	.string "where we can!$"

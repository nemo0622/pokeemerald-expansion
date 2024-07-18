# 1 "data/maps/PacifidlogTown/scripts.pory"

# 2 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_MapScripts::
# 3 "data/maps/PacifidlogTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_OnTransition
# 4 "data/maps/PacifidlogTown/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PacifidlogTown_OnResume
# 5 "data/maps/PacifidlogTown/scripts.pory"
	.byte 0
# 6 "data/maps/PacifidlogTown/scripts.pory"

# 7 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_OnTransition:
# 8 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
# 9 "data/maps/PacifidlogTown/scripts.pory"
	end
# 10 "data/maps/PacifidlogTown/scripts.pory"

# 11 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_OnResume:
# 12 "data/maps/PacifidlogTown/scripts.pory"
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
# 13 "data/maps/PacifidlogTown/scripts.pory"
	end
# 14 "data/maps/PacifidlogTown/scripts.pory"

# 15 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_NinjaBoy::
# 16 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_NeatHousesOnWater, MSGBOX_NPC
# 17 "data/maps/PacifidlogTown/scripts.pory"
	end
# 18 "data/maps/PacifidlogTown/scripts.pory"

# 19 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Girl::
# 20 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_FastRunningCurrent, MSGBOX_NPC
# 21 "data/maps/PacifidlogTown/scripts.pory"
	end
# 22 "data/maps/PacifidlogTown/scripts.pory"

# 23 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Fisherman::
# 24 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_SkyPillarTooScary, MSGBOX_NPC
# 25 "data/maps/PacifidlogTown/scripts.pory"
	end
# 26 "data/maps/PacifidlogTown/scripts.pory"

# 27 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_TownSign::
# 28 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_TownSign, MSGBOX_SIGN
# 29 "data/maps/PacifidlogTown/scripts.pory"
	end
# 30 "data/maps/PacifidlogTown/scripts.pory"

# 31 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_FastRunningCurrent:
# 32 "data/maps/PacifidlogTown/scripts.pory"
	.string "The sea between PACIFIDLOG and\n"
# 33 "data/maps/PacifidlogTown/scripts.pory"
	.string "SLATEPORT has a fast-running tide.\p"
# 34 "data/maps/PacifidlogTown/scripts.pory"
	.string "If you decide to SURF, you could end\n"
# 35 "data/maps/PacifidlogTown/scripts.pory"
	.string "up swept away somewhere else.$"
# 36 "data/maps/PacifidlogTown/scripts.pory"

# 37 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_NeatHousesOnWater:
# 38 "data/maps/PacifidlogTown/scripts.pory"
	.string "See, isn't it neat?\n"
# 39 "data/maps/PacifidlogTown/scripts.pory"
	.string "These houses are on water!\p"
# 40 "data/maps/PacifidlogTown/scripts.pory"
	.string "I was born here!$"
# 41 "data/maps/PacifidlogTown/scripts.pory"

# 42 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_SkyPillarTooScary:
# 43 "data/maps/PacifidlogTown/scripts.pory"
	.string "The SKY PILLAR?\p"
# 44 "data/maps/PacifidlogTown/scripts.pory"
	.string "…Oh, you must mean that tall, tall\n"
# 45 "data/maps/PacifidlogTown/scripts.pory"
	.string "tower a little further out.\p"
# 46 "data/maps/PacifidlogTown/scripts.pory"
	.string "If you asked me, I wouldn't climb it.\n"
# 47 "data/maps/PacifidlogTown/scripts.pory"
	.string "It's too scary to get up that high.\p"
# 48 "data/maps/PacifidlogTown/scripts.pory"
	.string "Life at sea level in PACIFIDLOG,\n"
# 49 "data/maps/PacifidlogTown/scripts.pory"
	.string "that suits me fine.$"
# 50 "data/maps/PacifidlogTown/scripts.pory"

# 51 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_TownSign:
# 52 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG TOWN\p"
# 53 "data/maps/PacifidlogTown/scripts.pory"
	.string "“Where the morning sun smiles upon\n"
# 54 "data/maps/PacifidlogTown/scripts.pory"
	.string "the waters.”$"

PacifidlogTown_EventScript_AppleSalesman::
# 60 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 61 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 62 "data/maps/PacifidlogTown/scripts.pory"
	message PacifidlogTown_EventScript_AppleSalesman_Text_0
# 63 "data/maps/PacifidlogTown/scripts.pory"
	waitmessage
# 64 "data/maps/PacifidlogTown/scripts.pory"
	pokemart PacifidlogTown_AppleMart
# 65 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_AppleSalesman_Text_1
# 66 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 67 "data/maps/PacifidlogTown/scripts.pory"
	release
	end


	.align 2
# 71 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_AppleMart:
# 73 "data/maps/PacifidlogTown/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 74 "data/maps/PacifidlogTown/scripts.pory"
	.2byte ITEM_TART_APPLE
# 75 "data/maps/PacifidlogTown/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 76 "data/maps/PacifidlogTown/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
	.2byte ITEM_NONE

PacifidlogTown_EventScript_AppleSalesman_Text_0:
# 62 "data/maps/PacifidlogTown/scripts.pory"
	.string "Apples for sale! Come get your apples,\n"
	.string "fresh from the mainland!$"

PacifidlogTown_EventScript_AppleSalesman_Text_1:
# 65 "data/maps/PacifidlogTown/scripts.pory"
	.string "Come back soon!$"

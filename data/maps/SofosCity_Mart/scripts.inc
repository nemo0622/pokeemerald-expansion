SofosCity_Mart_MapScripts::
	.byte 0


SofosCity_Mart_EventScript_MartEmployee::
# 5 "data/maps/SofosCity_Mart/scripts.pory"
	lock
# 6 "data/maps/SofosCity_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/SofosCity_Mart/scripts.pory"
	speakername SofosCity_Mart_EventScript_MartEmployee_Text_0
# 8 "data/maps/SofosCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/SofosCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/SofosCity_Mart/scripts.pory"
	pokemart SofosCity_Mart_Shop
# 11 "data/maps/SofosCity_Mart/scripts.pory"
	closemessage
# 12 "data/maps/SofosCity_Mart/scripts.pory"
	delay 1
# 13 "data/maps/SofosCity_Mart/scripts.pory"
	speakername SofosCity_Mart_EventScript_MartEmployee_Text_0
# 14 "data/maps/SofosCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 15 "data/maps/SofosCity_Mart/scripts.pory"
	release
	end


	.align 2
# 19 "data/maps/SofosCity_Mart/scripts.pory"
SofosCity_Mart_Shop:
# 21 "data/maps/SofosCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 22 "data/maps/SofosCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 23 "data/maps/SofosCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 24 "data/maps/SofosCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 25 "data/maps/SofosCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 26 "data/maps/SofosCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 27 "data/maps/SofosCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 28 "data/maps/SofosCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 29 "data/maps/SofosCity_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 30 "data/maps/SofosCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 31 "data/maps/SofosCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 32 "data/maps/SofosCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE

SofosCity_Mart_EventScript_ShoppingMan::
# 37 "data/maps/SofosCity_Mart/scripts.pory"
	lock
# 38 "data/maps/SofosCity_Mart/scripts.pory"
	faceplayer
# 39 "data/maps/SofosCity_Mart/scripts.pory"
	speakername SofosCity_Mart_EventScript_ShoppingMan_Text_0
# 40 "data/maps/SofosCity_Mart/scripts.pory"
	msgbox SofosCity_Mart_EventScript_ShoppingMan_Text_1
# 41 "data/maps/SofosCity_Mart/scripts.pory"
	closemessage
# 42 "data/maps/SofosCity_Mart/scripts.pory"
	release
	end


SofosCity_Mart_EventScript_WorkerMan::
# 48 "data/maps/SofosCity_Mart/scripts.pory"
	lock
# 49 "data/maps/SofosCity_Mart/scripts.pory"
	faceplayer
# 50 "data/maps/SofosCity_Mart/scripts.pory"
	speakername SofosCity_Mart_EventScript_WorkerMan_Text_0
# 51 "data/maps/SofosCity_Mart/scripts.pory"
	msgbox SofosCity_Mart_EventScript_WorkerMan_Text_1
# 52 "data/maps/SofosCity_Mart/scripts.pory"
	closemessage
# 53 "data/maps/SofosCity_Mart/scripts.pory"
	release
	end


SofosCity_Mart_EventScript_MartEmployee_Text_0:
# 7 "data/maps/SofosCity_Mart/scripts.pory"
	.string "Mart Employee$"

SofosCity_Mart_EventScript_ShoppingMan_Text_0:
# 39 "data/maps/SofosCity_Mart/scripts.pory"
	.string "Young Man$"

SofosCity_Mart_EventScript_ShoppingMan_Text_1:
# 40 "data/maps/SofosCity_Mart/scripts.pory"
	.string "There are some things that only\n"
	.string "official Marts have, but when I can, I\l"
	.string "like to stop by the Street Vendors of\l"
	.string "the city to see what they have.$"

SofosCity_Mart_EventScript_WorkerMan_Text_0:
# 50 "data/maps/SofosCity_Mart/scripts.pory"
	.string "Worker$"

SofosCity_Mart_EventScript_WorkerMan_Text_1:
# 51 "data/maps/SofosCity_Mart/scripts.pory"
	.string "Goods from all around the Ilios Region\n"
	.string "make their way to Sofos City. The only\l"
	.string "places that rival it in trade are\l"
	.string "Péntepetal City and Port Pello.$"

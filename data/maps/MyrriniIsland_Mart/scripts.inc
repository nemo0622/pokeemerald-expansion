MyrriniIsland_Mart_MapScripts::
	.byte 0


MyrriniIsland_Mart_EventScript_MartEmployee::
# 5 "data/maps/MyrriniIsland_Mart/scripts.pory"
	lock
# 6 "data/maps/MyrriniIsland_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/MyrriniIsland_Mart/scripts.pory"
	speakername MyrriniIsland_Mart_EventScript_MartEmployee_Text_0
# 8 "data/maps/MyrriniIsland_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/MyrriniIsland_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/MyrriniIsland_Mart/scripts.pory"
	pokemart MyrriniIsland_Mart_Shop
# 11 "data/maps/MyrriniIsland_Mart/scripts.pory"
	closemessage
# 12 "data/maps/MyrriniIsland_Mart/scripts.pory"
	delay 1
# 13 "data/maps/MyrriniIsland_Mart/scripts.pory"
	speakername MyrriniIsland_Mart_EventScript_MartEmployee_Text_0
# 14 "data/maps/MyrriniIsland_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 15 "data/maps/MyrriniIsland_Mart/scripts.pory"
	release
	end


	.align 2
# 19 "data/maps/MyrriniIsland_Mart/scripts.pory"
MyrriniIsland_Mart_Shop:
# 21 "data/maps/MyrriniIsland_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 22 "data/maps/MyrriniIsland_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 23 "data/maps/MyrriniIsland_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 24 "data/maps/MyrriniIsland_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 25 "data/maps/MyrriniIsland_Mart/scripts.pory"
	.2byte ITEM_POTION
# 26 "data/maps/MyrriniIsland_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 27 "data/maps/MyrriniIsland_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 28 "data/maps/MyrriniIsland_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 29 "data/maps/MyrriniIsland_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 30 "data/maps/MyrriniIsland_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 31 "data/maps/MyrriniIsland_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 32 "data/maps/MyrriniIsland_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 33 "data/maps/MyrriniIsland_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 34 "data/maps/MyrriniIsland_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 35 "data/maps/MyrriniIsland_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 36 "data/maps/MyrriniIsland_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

MyrriniIsland_Mart_EventScript_Man::
# 41 "data/maps/MyrriniIsland_Mart/scripts.pory"
	lock
# 42 "data/maps/MyrriniIsland_Mart/scripts.pory"
	faceplayer
# 43 "data/maps/MyrriniIsland_Mart/scripts.pory"
	speakername MyrriniIsland_Mart_EventScript_Man_Text_0
# 44 "data/maps/MyrriniIsland_Mart/scripts.pory"
	msgbox MyrriniIsland_Mart_EventScript_Man_Text_1
# 45 "data/maps/MyrriniIsland_Mart/scripts.pory"
	closemessage
# 46 "data/maps/MyrriniIsland_Mart/scripts.pory"
	release
	end


MyrriniIsland_Mart_EventScript_Picnicker::
# 52 "data/maps/MyrriniIsland_Mart/scripts.pory"
	lock
# 53 "data/maps/MyrriniIsland_Mart/scripts.pory"
	faceplayer
# 54 "data/maps/MyrriniIsland_Mart/scripts.pory"
	speakername MyrriniIsland_Mart_EventScript_Picnicker_Text_0
# 55 "data/maps/MyrriniIsland_Mart/scripts.pory"
	msgbox MyrriniIsland_Mart_EventScript_Picnicker_Text_1
# 56 "data/maps/MyrriniIsland_Mart/scripts.pory"
	closemessage
# 57 "data/maps/MyrriniIsland_Mart/scripts.pory"
	release
	end


MyrriniIsland_Mart_EventScript_MartEmployee_Text_0:
# 7 "data/maps/MyrriniIsland_Mart/scripts.pory"
	.string "Mart Employee$"

MyrriniIsland_Mart_EventScript_Man_Text_0:
# 43 "data/maps/MyrriniIsland_Mart/scripts.pory"
	.string "Man$"

MyrriniIsland_Mart_EventScript_Man_Text_1:
# 44 "data/maps/MyrriniIsland_Mart/scripts.pory"
	.string "If I could, I'd buy everything from the\n"
	.string "farmer's market outside. There are just\l"
	.string "some things that can only really be\l"
	.string "bought in Marts, though.$"

MyrriniIsland_Mart_EventScript_Picnicker_Text_0:
# 54 "data/maps/MyrriniIsland_Mart/scripts.pory"
	.string "Picnicker$"

MyrriniIsland_Mart_EventScript_Picnicker_Text_1:
# 55 "data/maps/MyrriniIsland_Mart/scripts.pory"
	.string "I'm stocking up on Repels before going\n"
	.string "out with my friends!$"

KalamiCity_Mart_MapScripts::
	.byte 0


KalamiCity_Mart_EventScript_MartEmployee::
# 5 "data/maps/KalamiCity_Mart/scripts.pory"
	lock
# 6 "data/maps/KalamiCity_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/KalamiCity_Mart/scripts.pory"
	speakername KalamiCity_Mart_EventScript_MartEmployee_Text_0
# 8 "data/maps/KalamiCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/KalamiCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/KalamiCity_Mart/scripts.pory"
	pokemart KalamiCity_Mart_Shop
# 11 "data/maps/KalamiCity_Mart/scripts.pory"
	closemessage
# 12 "data/maps/KalamiCity_Mart/scripts.pory"
	delay 1
# 13 "data/maps/KalamiCity_Mart/scripts.pory"
	speakername KalamiCity_Mart_EventScript_MartEmployee_Text_0
# 14 "data/maps/KalamiCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 15 "data/maps/KalamiCity_Mart/scripts.pory"
	release
	end


	.align 2
# 19 "data/maps/KalamiCity_Mart/scripts.pory"
KalamiCity_Mart_Shop:
# 21 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 22 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 23 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 24 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 25 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 26 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 27 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 28 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

KalamiCity_Mart_EventScript_BallMartEmployee::
# 33 "data/maps/KalamiCity_Mart/scripts.pory"
	lock
# 34 "data/maps/KalamiCity_Mart/scripts.pory"
	faceplayer
# 35 "data/maps/KalamiCity_Mart/scripts.pory"
	speakername KalamiCity_Mart_EventScript_MartEmployee_Text_0
# 36 "data/maps/KalamiCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 37 "data/maps/KalamiCity_Mart/scripts.pory"
	waitmessage
# 38 "data/maps/KalamiCity_Mart/scripts.pory"
	pokemart KalamiCity_Mart_BallShop
# 39 "data/maps/KalamiCity_Mart/scripts.pory"
	closemessage
# 40 "data/maps/KalamiCity_Mart/scripts.pory"
	delay 1
# 41 "data/maps/KalamiCity_Mart/scripts.pory"
	speakername KalamiCity_Mart_EventScript_MartEmployee_Text_0
# 42 "data/maps/KalamiCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 43 "data/maps/KalamiCity_Mart/scripts.pory"
	release
	end


	.align 2
# 47 "data/maps/KalamiCity_Mart/scripts.pory"
KalamiCity_Mart_BallShop:
# 49 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 50 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 51 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 52 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 53 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 54 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 55 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 56 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 57 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 58 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 59 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_LURE_BALL
# 60 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_MOON_BALL
# 61 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 62 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 63 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_FAST_BALL
# 64 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 65 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_NONE

KalamiCity_Mart_EventScript_HexManiac::
# 70 "data/maps/KalamiCity_Mart/scripts.pory"
	lock
# 71 "data/maps/KalamiCity_Mart/scripts.pory"
	faceplayer
# 72 "data/maps/KalamiCity_Mart/scripts.pory"
	speakername KalamiCity_Mart_EventScript_HexManiac_Text_0
# 73 "data/maps/KalamiCity_Mart/scripts.pory"
	msgbox KalamiCity_Mart_EventScript_HexManiac_Text_1
# 74 "data/maps/KalamiCity_Mart/scripts.pory"
	closemessage
# 75 "data/maps/KalamiCity_Mart/scripts.pory"
	release
	end


KalamiCity_Mart_EventScript_Girl::
# 81 "data/maps/KalamiCity_Mart/scripts.pory"
	lock
# 82 "data/maps/KalamiCity_Mart/scripts.pory"
	faceplayer
# 83 "data/maps/KalamiCity_Mart/scripts.pory"
	speakername KalamiCity_Mart_EventScript_Girl_Text_0
# 84 "data/maps/KalamiCity_Mart/scripts.pory"
	msgbox KalamiCity_Mart_EventScript_Girl_Text_1
# 85 "data/maps/KalamiCity_Mart/scripts.pory"
	closemessage
# 86 "data/maps/KalamiCity_Mart/scripts.pory"
	release
	end


KalamiCity_Mart_EventScript_MartEmployee_Text_0:
# 7 "data/maps/KalamiCity_Mart/scripts.pory"
	.string "Mart Employee$"

KalamiCity_Mart_EventScript_HexManiac_Text_0:
# 72 "data/maps/KalamiCity_Mart/scripts.pory"
	.string "Hex Maniac$"

KalamiCity_Mart_EventScript_HexManiac_Text_1:
# 73 "data/maps/KalamiCity_Mart/scripts.pory"
	.string "Mattaios and his Gym helps produce a\n"
	.string "ton of new Poké ball types! We have a\l"
	.string "shopkeeper dedicated to some of them\l"
	.string "here.$"

KalamiCity_Mart_EventScript_Girl_Text_0:
# 83 "data/maps/KalamiCity_Mart/scripts.pory"
	.string "Lass$"

KalamiCity_Mart_EventScript_Girl_Text_1:
# 84 "data/maps/KalamiCity_Mart/scripts.pory"
	.string "Ehh, do I really need a sweet treat?\p"
	.string "...Of course I do!$"

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
	speakername KalamiCity_Mart_EventScript_MartEmployee_Text_0
# 12 "data/maps/KalamiCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 13 "data/maps/KalamiCity_Mart/scripts.pory"
	release
	end


	.align 2
# 17 "data/maps/KalamiCity_Mart/scripts.pory"
KalamiCity_Mart_Shop:
# 19 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 20 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 21 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 22 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 23 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 24 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 25 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 26 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

KalamiCity_Mart_EventScript_BallMartEmployee::
# 31 "data/maps/KalamiCity_Mart/scripts.pory"
	lock
# 32 "data/maps/KalamiCity_Mart/scripts.pory"
	faceplayer
# 33 "data/maps/KalamiCity_Mart/scripts.pory"
	speakername KalamiCity_Mart_EventScript_MartEmployee_Text_0
# 34 "data/maps/KalamiCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 35 "data/maps/KalamiCity_Mart/scripts.pory"
	waitmessage
# 36 "data/maps/KalamiCity_Mart/scripts.pory"
	pokemart KalamiCity_Mart_BallShop
# 37 "data/maps/KalamiCity_Mart/scripts.pory"
	speakername KalamiCity_Mart_EventScript_MartEmployee_Text_0
# 38 "data/maps/KalamiCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 39 "data/maps/KalamiCity_Mart/scripts.pory"
	release
	end


	.align 2
# 43 "data/maps/KalamiCity_Mart/scripts.pory"
KalamiCity_Mart_BallShop:
# 45 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 46 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 47 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 48 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 49 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 50 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 51 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 52 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 53 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 54 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 55 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_LURE_BALL
# 56 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_MOON_BALL
# 57 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 58 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 59 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_FAST_BALL
# 60 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 61 "data/maps/KalamiCity_Mart/scripts.pory"
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_NONE

KalamiCity_Mart_EventScript_HexManiac::
# 66 "data/maps/KalamiCity_Mart/scripts.pory"
	lock
# 67 "data/maps/KalamiCity_Mart/scripts.pory"
	faceplayer
# 68 "data/maps/KalamiCity_Mart/scripts.pory"
	speakername KalamiCity_Mart_EventScript_HexManiac_Text_0
# 69 "data/maps/KalamiCity_Mart/scripts.pory"
	msgbox KalamiCity_Mart_EventScript_HexManiac_Text_1
# 70 "data/maps/KalamiCity_Mart/scripts.pory"
	closemessage
# 71 "data/maps/KalamiCity_Mart/scripts.pory"
	release
	end


KalamiCity_Mart_EventScript_Girl::
# 77 "data/maps/KalamiCity_Mart/scripts.pory"
	lock
# 78 "data/maps/KalamiCity_Mart/scripts.pory"
	faceplayer
# 79 "data/maps/KalamiCity_Mart/scripts.pory"
	speakername KalamiCity_Mart_EventScript_Girl_Text_0
# 80 "data/maps/KalamiCity_Mart/scripts.pory"
	msgbox KalamiCity_Mart_EventScript_Girl_Text_1
# 81 "data/maps/KalamiCity_Mart/scripts.pory"
	closemessage
# 82 "data/maps/KalamiCity_Mart/scripts.pory"
	release
	end


KalamiCity_Mart_EventScript_MartEmployee_Text_0:
# 7 "data/maps/KalamiCity_Mart/scripts.pory"
	.string "Mart Employee$"

KalamiCity_Mart_EventScript_HexManiac_Text_0:
# 68 "data/maps/KalamiCity_Mart/scripts.pory"
	.string "Hex Maniac$"

KalamiCity_Mart_EventScript_HexManiac_Text_1:
# 69 "data/maps/KalamiCity_Mart/scripts.pory"
	.string "Mattaios and his Gym helps produce a\n"
	.string "ton of new Poké ball types! We have a\l"
	.string "shopkeeper dedicated to some of them\l"
	.string "here.$"

KalamiCity_Mart_EventScript_Girl_Text_0:
# 79 "data/maps/KalamiCity_Mart/scripts.pory"
	.string "Lass$"

KalamiCity_Mart_EventScript_Girl_Text_1:
# 80 "data/maps/KalamiCity_Mart/scripts.pory"
	.string "Ehh, do I really need a sweet treat?\p"
	.string "...Of course I do!$"

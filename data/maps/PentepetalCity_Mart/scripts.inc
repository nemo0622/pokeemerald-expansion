PentepetalCity_Mart_MapScripts::
	.byte 0


PentepetalCity_Mart_EventScript_MartEmployee::
# 5 "data/maps/PentepetalCity_Mart/scripts.pory"
	lock
# 6 "data/maps/PentepetalCity_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/PentepetalCity_Mart/scripts.pory"
	speakername PentepetalCity_Mart_EventScript_MartEmployee_Text_0
# 8 "data/maps/PentepetalCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/PentepetalCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/PentepetalCity_Mart/scripts.pory"
	pokemart PentepetalCity_Mart_Shop
# 11 "data/maps/PentepetalCity_Mart/scripts.pory"
	closemessage
# 12 "data/maps/PentepetalCity_Mart/scripts.pory"
	delay 1
# 13 "data/maps/PentepetalCity_Mart/scripts.pory"
	speakername PentepetalCity_Mart_EventScript_MartEmployee_Text_0
# 14 "data/maps/PentepetalCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 15 "data/maps/PentepetalCity_Mart/scripts.pory"
	release
	end


	.align 2
# 19 "data/maps/PentepetalCity_Mart/scripts.pory"
PentepetalCity_Mart_Shop:
# 21 "data/maps/PentepetalCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 22 "data/maps/PentepetalCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 23 "data/maps/PentepetalCity_Mart/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 24 "data/maps/PentepetalCity_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 25 "data/maps/PentepetalCity_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 26 "data/maps/PentepetalCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 27 "data/maps/PentepetalCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 28 "data/maps/PentepetalCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 29 "data/maps/PentepetalCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 30 "data/maps/PentepetalCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 31 "data/maps/PentepetalCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 32 "data/maps/PentepetalCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 33 "data/maps/PentepetalCity_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 34 "data/maps/PentepetalCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 35 "data/maps/PentepetalCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 36 "data/maps/PentepetalCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 37 "data/maps/PentepetalCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 38 "data/maps/PentepetalCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

PentepetalCity_Mart_EventScript_Man::
# 43 "data/maps/PentepetalCity_Mart/scripts.pory"
	lock
# 44 "data/maps/PentepetalCity_Mart/scripts.pory"
	faceplayer
# 45 "data/maps/PentepetalCity_Mart/scripts.pory"
	speakername PentepetalCity_Mart_EventScript_Man_Text_0
# 46 "data/maps/PentepetalCity_Mart/scripts.pory"
	msgbox PentepetalCity_Mart_EventScript_Man_Text_1
# 47 "data/maps/PentepetalCity_Mart/scripts.pory"
	closemessage
# 48 "data/maps/PentepetalCity_Mart/scripts.pory"
	release
	end


PentepetalCity_Mart_EventScript_Performer::
# 54 "data/maps/PentepetalCity_Mart/scripts.pory"
	lock
# 55 "data/maps/PentepetalCity_Mart/scripts.pory"
	faceplayer
# 56 "data/maps/PentepetalCity_Mart/scripts.pory"
	speakername PentepetalCity_Mart_EventScript_Performer_Text_0
# 57 "data/maps/PentepetalCity_Mart/scripts.pory"
	msgbox PentepetalCity_Mart_EventScript_Performer_Text_1
# 58 "data/maps/PentepetalCity_Mart/scripts.pory"
	closemessage
# 59 "data/maps/PentepetalCity_Mart/scripts.pory"
	release
	end


PentepetalCity_Mart_EventScript_MartEmployee_Text_0:
# 7 "data/maps/PentepetalCity_Mart/scripts.pory"
	.string "Mart Employee$"

PentepetalCity_Mart_EventScript_Man_Text_0:
# 45 "data/maps/PentepetalCity_Mart/scripts.pory"
	.string "Man$"

PentepetalCity_Mart_EventScript_Man_Text_1:
# 46 "data/maps/PentepetalCity_Mart/scripts.pory"
	.string "These standard Marts have basic things\n"
	.string "like Poké balls and Repels. Specialty\l"
	.string "goods, like Decorations, are mostly sold\l"
	.string "at roadside stands.$"

PentepetalCity_Mart_EventScript_Performer_Text_0:
# 56 "data/maps/PentepetalCity_Mart/scripts.pory"
	.string "Performer$"

PentepetalCity_Mart_EventScript_Performer_Text_1:
# 57 "data/maps/PentepetalCity_Mart/scripts.pory"
	.string "I have an outdoor performance at an\n"
	.string "upcoming festival. I'm stocking up on\l"
	.string "Repels before then!$"

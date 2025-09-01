PortPello_Mart_MapScripts::
	.byte 0


PortPello_Mart_EventScript_MartEmployee::
# 5 "data/maps/PortPello_Mart/scripts.pory"
	lock
# 6 "data/maps/PortPello_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/PortPello_Mart/scripts.pory"
	speakername PortPello_Mart_EventScript_MartEmployee_Text_0
# 8 "data/maps/PortPello_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/PortPello_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/PortPello_Mart/scripts.pory"
	pokemart PortPello_Mart_Shop
# 11 "data/maps/PortPello_Mart/scripts.pory"
	closemessage
# 12 "data/maps/PortPello_Mart/scripts.pory"
	delay 1
# 13 "data/maps/PortPello_Mart/scripts.pory"
	speakername PortPello_Mart_EventScript_MartEmployee_Text_0
# 14 "data/maps/PortPello_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 15 "data/maps/PortPello_Mart/scripts.pory"
	release
	end


	.align 2
# 20 "data/maps/PortPello_Mart/scripts.pory"
PortPello_Mart_Shop:
# 22 "data/maps/PortPello_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 23 "data/maps/PortPello_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 24 "data/maps/PortPello_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 25 "data/maps/PortPello_Mart/scripts.pory"
	.2byte ITEM_POTION
# 26 "data/maps/PortPello_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 27 "data/maps/PortPello_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 28 "data/maps/PortPello_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 29 "data/maps/PortPello_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 30 "data/maps/PortPello_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 31 "data/maps/PortPello_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 32 "data/maps/PortPello_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 33 "data/maps/PortPello_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 34 "data/maps/PortPello_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 35 "data/maps/PortPello_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 36 "data/maps/PortPello_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 37 "data/maps/PortPello_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 38 "data/maps/PortPello_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

PortPello_Mart_EventScript_LittleBoy::
# 43 "data/maps/PortPello_Mart/scripts.pory"
	lock
# 44 "data/maps/PortPello_Mart/scripts.pory"
	faceplayer
# 45 "data/maps/PortPello_Mart/scripts.pory"
	speakername PortPello_Mart_EventScript_LittleBoy_Text_0
# 46 "data/maps/PortPello_Mart/scripts.pory"
	msgbox PortPello_Mart_EventScript_LittleBoy_Text_1
# 47 "data/maps/PortPello_Mart/scripts.pory"
	closemessage
# 48 "data/maps/PortPello_Mart/scripts.pory"
	release
	end


PortPello_Mart_EventScript_Maniac::
# 54 "data/maps/PortPello_Mart/scripts.pory"
	lock
# 55 "data/maps/PortPello_Mart/scripts.pory"
	faceplayer
# 56 "data/maps/PortPello_Mart/scripts.pory"
	speakername PortPello_Mart_EventScript_Maniac_Text_0
# 57 "data/maps/PortPello_Mart/scripts.pory"
	msgbox PortPello_Mart_EventScript_Maniac_Text_1
# 58 "data/maps/PortPello_Mart/scripts.pory"
	closemessage
# 59 "data/maps/PortPello_Mart/scripts.pory"
	release
	end


PortPello_Mart_EventScript_MartEmployee_Text_0:
# 7 "data/maps/PortPello_Mart/scripts.pory"
	.string "Mart Employee$"

PortPello_Mart_EventScript_LittleBoy_Text_0:
# 45 "data/maps/PortPello_Mart/scripts.pory"
	.string "Little Boy$"

PortPello_Mart_EventScript_LittleBoy_Text_1:
# 46 "data/maps/PortPello_Mart/scripts.pory"
	.string "Why are the best Potions the most\n"
	.string "expensive? I can't afford them on my\l"
	.string "allowance!$"

PortPello_Mart_EventScript_Maniac_Text_0:
# 56 "data/maps/PortPello_Mart/scripts.pory"
	.string "Collector$"

PortPello_Mart_EventScript_Maniac_Text_1:
# 57 "data/maps/PortPello_Mart/scripts.pory"
	.string "I'm trying to collect all the Pokémon in\n"
	.string "the Ilios Region. I don't even have a\l"
	.string "Rotom Phone, I just sketch all the\l"
	.string "Pokémon I catch!$"

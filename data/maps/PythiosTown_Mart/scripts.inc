PythiosTown_Mart_MapScripts::
	.byte 0


PythiosTown_Mart_EventScript_MartEmployee::
# 5 "data/maps/PythiosTown_Mart/scripts.pory"
	lock
# 6 "data/maps/PythiosTown_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/PythiosTown_Mart/scripts.pory"
	speakername PythiosTown_Mart_EventScript_MartEmployee_Text_0
# 8 "data/maps/PythiosTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/PythiosTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/PythiosTown_Mart/scripts.pory"
	pokemart PythiosTown_Mart_Shop
# 11 "data/maps/PythiosTown_Mart/scripts.pory"
	closemessage
# 12 "data/maps/PythiosTown_Mart/scripts.pory"
	delay 1
# 13 "data/maps/PythiosTown_Mart/scripts.pory"
	speakername PythiosTown_Mart_EventScript_MartEmployee_Text_0
# 14 "data/maps/PythiosTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 15 "data/maps/PythiosTown_Mart/scripts.pory"
	release
	end


	.align 2
# 19 "data/maps/PythiosTown_Mart/scripts.pory"
PythiosTown_Mart_Shop:
# 21 "data/maps/PythiosTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 22 "data/maps/PythiosTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 23 "data/maps/PythiosTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 24 "data/maps/PythiosTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 25 "data/maps/PythiosTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 26 "data/maps/PythiosTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 27 "data/maps/PythiosTown_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 28 "data/maps/PythiosTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

PythiosTown_Mart_EventScript_Picnicker::
# 33 "data/maps/PythiosTown_Mart/scripts.pory"
	lock
# 34 "data/maps/PythiosTown_Mart/scripts.pory"
	faceplayer
# 35 "data/maps/PythiosTown_Mart/scripts.pory"
	speakername PythiosTown_Mart_EventScript_Picnicker_Text_0
# 36 "data/maps/PythiosTown_Mart/scripts.pory"
	msgbox PythiosTown_Mart_EventScript_Picnicker_Text_1
# 37 "data/maps/PythiosTown_Mart/scripts.pory"
	closemessage
# 38 "data/maps/PythiosTown_Mart/scripts.pory"
	release
	end


PythiosTown_Mart_EventScript_Youngster::
# 44 "data/maps/PythiosTown_Mart/scripts.pory"
	lock
# 45 "data/maps/PythiosTown_Mart/scripts.pory"
	faceplayer
# 46 "data/maps/PythiosTown_Mart/scripts.pory"
	speakername PythiosTown_Mart_EventScript_Youngster_Text_0
# 47 "data/maps/PythiosTown_Mart/scripts.pory"
	msgbox PythiosTown_Mart_EventScript_Youngster_Text_1
# 48 "data/maps/PythiosTown_Mart/scripts.pory"
	closemessage
# 49 "data/maps/PythiosTown_Mart/scripts.pory"
	release
	end


PythiosTown_Mart_EventScript_MartEmployee_Text_0:
# 7 "data/maps/PythiosTown_Mart/scripts.pory"
	.string "Mart Employee$"

PythiosTown_Mart_EventScript_Picnicker_Text_0:
# 35 "data/maps/PythiosTown_Mart/scripts.pory"
	.string "Picnicker$"

PythiosTown_Mart_EventScript_Picnicker_Text_1:
# 36 "data/maps/PythiosTown_Mart/scripts.pory"
	.string "Any good Pokémon Trainer knows to stay\n"
	.string "stocked up on Great Balls!$"

PythiosTown_Mart_EventScript_Youngster_Text_0:
# 46 "data/maps/PythiosTown_Mart/scripts.pory"
	.string "Youngster$"

PythiosTown_Mart_EventScript_Youngster_Text_1:
# 47 "data/maps/PythiosTown_Mart/scripts.pory"
	.string "I love learning about the old Heroes of\n"
	.string "Ilios! They were the best Pokémon\l"
	.string "Trainers of all time!$"

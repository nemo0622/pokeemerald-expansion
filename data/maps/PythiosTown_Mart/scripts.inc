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
	speakername PythiosTown_Mart_EventScript_MartEmployee_Text_0
# 12 "data/maps/PythiosTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 13 "data/maps/PythiosTown_Mart/scripts.pory"
	release
	end


	.align 2
# 17 "data/maps/PythiosTown_Mart/scripts.pory"
PythiosTown_Mart_Shop:
# 19 "data/maps/PythiosTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 20 "data/maps/PythiosTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 21 "data/maps/PythiosTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 22 "data/maps/PythiosTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 23 "data/maps/PythiosTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 24 "data/maps/PythiosTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 25 "data/maps/PythiosTown_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 26 "data/maps/PythiosTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

PythiosTown_Mart_EventScript_Picnicker::
# 31 "data/maps/PythiosTown_Mart/scripts.pory"
	lock
# 32 "data/maps/PythiosTown_Mart/scripts.pory"
	faceplayer
# 33 "data/maps/PythiosTown_Mart/scripts.pory"
	speakername PythiosTown_Mart_EventScript_Picnicker_Text_0
# 34 "data/maps/PythiosTown_Mart/scripts.pory"
	msgbox PythiosTown_Mart_EventScript_Picnicker_Text_1
# 35 "data/maps/PythiosTown_Mart/scripts.pory"
	closemessage
# 36 "data/maps/PythiosTown_Mart/scripts.pory"
	release
	end


PythiosTown_Mart_EventScript_Youngster::
# 42 "data/maps/PythiosTown_Mart/scripts.pory"
	lock
# 43 "data/maps/PythiosTown_Mart/scripts.pory"
	faceplayer
# 44 "data/maps/PythiosTown_Mart/scripts.pory"
	speakername PythiosTown_Mart_EventScript_Youngster_Text_0
# 45 "data/maps/PythiosTown_Mart/scripts.pory"
	msgbox PythiosTown_Mart_EventScript_Youngster_Text_1
# 46 "data/maps/PythiosTown_Mart/scripts.pory"
	closemessage
# 47 "data/maps/PythiosTown_Mart/scripts.pory"
	release
	end


PythiosTown_Mart_EventScript_MartEmployee_Text_0:
# 7 "data/maps/PythiosTown_Mart/scripts.pory"
	.string "Mart Employee$"

PythiosTown_Mart_EventScript_Picnicker_Text_0:
# 33 "data/maps/PythiosTown_Mart/scripts.pory"
	.string "Picnicker$"

PythiosTown_Mart_EventScript_Picnicker_Text_1:
# 34 "data/maps/PythiosTown_Mart/scripts.pory"
	.string "Any good Pokémon Trainer knows to stay\n"
	.string "stocked up on Great Balls!$"

PythiosTown_Mart_EventScript_Youngster_Text_0:
# 44 "data/maps/PythiosTown_Mart/scripts.pory"
	.string "Youngster$"

PythiosTown_Mart_EventScript_Youngster_Text_1:
# 45 "data/maps/PythiosTown_Mart/scripts.pory"
	.string "I love learning about the old Heroes of\n"
	.string "Ilios! They were the best Pokémon\l"
	.string "Trainers of all time!$"

PalatiCity_Mart_MapScripts::
	.byte 0


PalatiCity_Mart_EventScript_MartEmployee::
# 5 "data/maps/PalatiCity_Mart/scripts.pory"
	lock
# 6 "data/maps/PalatiCity_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/PalatiCity_Mart/scripts.pory"
	speakername PalatiCity_Mart_EventScript_MartEmployee_Text_0
# 8 "data/maps/PalatiCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/PalatiCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/PalatiCity_Mart/scripts.pory"
	pokemart PalatiCity_Mart_Shop
# 11 "data/maps/PalatiCity_Mart/scripts.pory"
	closemessage
# 12 "data/maps/PalatiCity_Mart/scripts.pory"
	delay 1
# 13 "data/maps/PalatiCity_Mart/scripts.pory"
	speakername PalatiCity_Mart_EventScript_MartEmployee_Text_0
# 14 "data/maps/PalatiCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 15 "data/maps/PalatiCity_Mart/scripts.pory"
	release
	end


	.align 2
# 20 "data/maps/PalatiCity_Mart/scripts.pory"
PalatiCity_Mart_Shop:
# 22 "data/maps/PalatiCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 23 "data/maps/PalatiCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 24 "data/maps/PalatiCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 25 "data/maps/PalatiCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 26 "data/maps/PalatiCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 27 "data/maps/PalatiCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 28 "data/maps/PalatiCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 29 "data/maps/PalatiCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 30 "data/maps/PalatiCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 31 "data/maps/PalatiCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 32 "data/maps/PalatiCity_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 33 "data/maps/PalatiCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 34 "data/maps/PalatiCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 35 "data/maps/PalatiCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 36 "data/maps/PalatiCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 37 "data/maps/PalatiCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

PalatiCity_Mart_Athlete::
# 42 "data/maps/PalatiCity_Mart/scripts.pory"
	lock
# 43 "data/maps/PalatiCity_Mart/scripts.pory"
	faceplayer
# 44 "data/maps/PalatiCity_Mart/scripts.pory"
	speakername PalatiCity_Mart_Athlete_Text_0
# 45 "data/maps/PalatiCity_Mart/scripts.pory"
	msgbox PalatiCity_Mart_Athlete_Text_1
# 46 "data/maps/PalatiCity_Mart/scripts.pory"
	closemessage
# 47 "data/maps/PalatiCity_Mart/scripts.pory"
	release
	end


PalatiCity_Mart_PerformerM::
# 53 "data/maps/PalatiCity_Mart/scripts.pory"
	lock
# 54 "data/maps/PalatiCity_Mart/scripts.pory"
	faceplayer
# 55 "data/maps/PalatiCity_Mart/scripts.pory"
	speakername PalatiCity_Mart_PerformerM_Text_0
# 56 "data/maps/PalatiCity_Mart/scripts.pory"
	msgbox PalatiCity_Mart_PerformerM_Text_1
# 57 "data/maps/PalatiCity_Mart/scripts.pory"
	closemessage
# 58 "data/maps/PalatiCity_Mart/scripts.pory"
	release
	end


PalatiCity_Mart_EventScript_MartEmployee_Text_0:
# 7 "data/maps/PalatiCity_Mart/scripts.pory"
	.string "Mart Employee$"

PalatiCity_Mart_Athlete_Text_0:
# 44 "data/maps/PalatiCity_Mart/scripts.pory"
	.string "Athlete$"

PalatiCity_Mart_Athlete_Text_1:
# 45 "data/maps/PalatiCity_Mart/scripts.pory"
	.string "The Poké Mart and Pokémon Center are\n"
	.string "some of the only recently-made\l"
	.string "buildings in the city. All the other\l"
	.string "buildings are hundreds of years old.$"

PalatiCity_Mart_PerformerM_Text_0:
# 55 "data/maps/PalatiCity_Mart/scripts.pory"
	.string "Performer$"

PalatiCity_Mart_PerformerM_Text_1:
# 56 "data/maps/PalatiCity_Mart/scripts.pory"
	.string "Litleo can evolve into two different\n"
	.string "forms of Pyroar depending on its\l"
	.string "gender. Male Pyroar have higher\l"
	.string "physical Attack, while Female Pyroar\l"
	.string "have higher Special Attack.$"

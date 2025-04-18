KiposTown_Mart_MapScripts::
	.byte 0


KiposTown_Mart_EventScript_MartEmployee::
# 5 "data/maps/KiposTown_Mart/scripts.pory"
	lock
# 6 "data/maps/KiposTown_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/KiposTown_Mart/scripts.pory"
	speakername KiposTown_Mart_EventScript_MartEmployee_Text_0
# 8 "data/maps/KiposTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/KiposTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/KiposTown_Mart/scripts.pory"
	pokemart KiposTown_Mart_Shop
# 11 "data/maps/KiposTown_Mart/scripts.pory"
	closemessage
# 12 "data/maps/KiposTown_Mart/scripts.pory"
	delay 1
# 13 "data/maps/KiposTown_Mart/scripts.pory"
	speakername KiposTown_Mart_EventScript_MartEmployee_Text_0
# 14 "data/maps/KiposTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 15 "data/maps/KiposTown_Mart/scripts.pory"
	release
	end


	.align 2
# 19 "data/maps/KiposTown_Mart/scripts.pory"
KiposTown_Mart_Shop:
# 21 "data/maps/KiposTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 22 "data/maps/KiposTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 23 "data/maps/KiposTown_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 24 "data/maps/KiposTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 25 "data/maps/KiposTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 26 "data/maps/KiposTown_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 27 "data/maps/KiposTown_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 28 "data/maps/KiposTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 29 "data/maps/KiposTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 30 "data/maps/KiposTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 31 "data/maps/KiposTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 32 "data/maps/KiposTown_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 33 "data/maps/KiposTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 34 "data/maps/KiposTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE

KiposTown_Mart_EventScript_OldMan::
# 39 "data/maps/KiposTown_Mart/scripts.pory"
	lock
# 40 "data/maps/KiposTown_Mart/scripts.pory"
	faceplayer
# 41 "data/maps/KiposTown_Mart/scripts.pory"
	speakername KiposTown_Mart_EventScript_OldMan_Text_0
# 42 "data/maps/KiposTown_Mart/scripts.pory"
	msgbox KiposTown_Mart_EventScript_OldMan_Text_1
# 43 "data/maps/KiposTown_Mart/scripts.pory"
	closemessage
# 44 "data/maps/KiposTown_Mart/scripts.pory"
	release
	end


KiposTown_Mart_EventScript_Psychic::
# 50 "data/maps/KiposTown_Mart/scripts.pory"
	lock
# 51 "data/maps/KiposTown_Mart/scripts.pory"
	faceplayer
# 52 "data/maps/KiposTown_Mart/scripts.pory"
	speakername KiposTown_Mart_EventScript_Psychic_Text_0
# 53 "data/maps/KiposTown_Mart/scripts.pory"
	msgbox KiposTown_Mart_EventScript_Psychic_Text_1
# 54 "data/maps/KiposTown_Mart/scripts.pory"
	closemessage
# 55 "data/maps/KiposTown_Mart/scripts.pory"
	release
	end


KiposTown_Mart_EventScript_MartEmployee_Text_0:
# 7 "data/maps/KiposTown_Mart/scripts.pory"
	.string "Mart Employee$"

KiposTown_Mart_EventScript_OldMan_Text_0:
# 41 "data/maps/KiposTown_Mart/scripts.pory"
	.string "Old Man$"

KiposTown_Mart_EventScript_OldMan_Text_1:
# 42 "data/maps/KiposTown_Mart/scripts.pory"
	.string "They stock Repeat Balls at this Mart to\n"
	.string "encourage Trainers to catch multiples\l"
	.string "of the same Pokémon. Those could be\l"
	.string "donated to the Conservation Center if\l"
	.string "the Pokémon are in need.$"

KiposTown_Mart_EventScript_Psychic_Text_0:
# 52 "data/maps/KiposTown_Mart/scripts.pory"
	.string "Psychic$"

KiposTown_Mart_EventScript_Psychic_Text_1:
# 53 "data/maps/KiposTown_Mart/scripts.pory"
	.string "Certain Pokémon can control spiritual\n"
	.string "energy that science can't explain! My\l"
	.string "Drowzee can put people to sleep with a\l"
	.string "wag of a finger!$"

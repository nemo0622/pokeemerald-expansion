PentepetalCity_House1_MapScripts::
	.byte 0


PentepetalCity_House1_EventScript_Farmer::
# 5 "data/maps/PentepetalCity_House1/scripts.pory"
	lock
# 6 "data/maps/PentepetalCity_House1/scripts.pory"
	faceplayer
# 7 "data/maps/PentepetalCity_House1/scripts.pory"
	speakername PentepetalCity_House1_EventScript_Farmer_Text_0
# 8 "data/maps/PentepetalCity_House1/scripts.pory"
	msgbox PentepetalCity_House1_EventScript_Farmer_Text_1
# 9 "data/maps/PentepetalCity_House1/scripts.pory"
	closemessage
# 10 "data/maps/PentepetalCity_House1/scripts.pory"
	release
	end


PentepetalCity_House1_EventScript_Woman::
# 16 "data/maps/PentepetalCity_House1/scripts.pory"
	lock
# 17 "data/maps/PentepetalCity_House1/scripts.pory"
	faceplayer
# 18 "data/maps/PentepetalCity_House1/scripts.pory"
	speakername PentepetalCity_House1_EventScript_Woman_Text_0
# 19 "data/maps/PentepetalCity_House1/scripts.pory"
	msgbox PentepetalCity_House1_EventScript_Woman_Text_1
# 20 "data/maps/PentepetalCity_House1/scripts.pory"
	closemessage
# 21 "data/maps/PentepetalCity_House1/scripts.pory"
	release
	end


PentepetalCity_House1_EventScript_Jangmo_O::
# 27 "data/maps/PentepetalCity_House1/scripts.pory"
	lock
# 28 "data/maps/PentepetalCity_House1/scripts.pory"
	faceplayer
# 29 "data/maps/PentepetalCity_House1/scripts.pory"
	speakername PentepetalCity_House1_EventScript_Jangmo_O_Text_0
# 30 "data/maps/PentepetalCity_House1/scripts.pory"
	playmoncry SPECIES_JANGMO_O, CRY_MODE_NORMAL
# 31 "data/maps/PentepetalCity_House1/scripts.pory"
	msgbox PentepetalCity_House1_EventScript_Jangmo_O_Text_1
# 32 "data/maps/PentepetalCity_House1/scripts.pory"
	waitmoncry
# 33 "data/maps/PentepetalCity_House1/scripts.pory"
	closemessage
# 34 "data/maps/PentepetalCity_House1/scripts.pory"
	release
	end


PentepetalCity_House1_EventScript_Farmer_Text_0:
# 7 "data/maps/PentepetalCity_House1/scripts.pory"
	.string "Farmer$"

PentepetalCity_House1_EventScript_Farmer_Text_1:
# 8 "data/maps/PentepetalCity_House1/scripts.pory"
	.string "Some Pokémon can be found all over the\n"
	.string "Ilios Region, while others are only\l"
	.string "found on specific islands. For example,\l"
	.string "my Jangmo-o is pretty darn rare outside\l"
	.string "of the Sea of Asteri!$"

PentepetalCity_House1_EventScript_Woman_Text_0:
# 18 "data/maps/PentepetalCity_House1/scripts.pory"
	.string "Woman$"

PentepetalCity_House1_EventScript_Woman_Text_1:
# 19 "data/maps/PentepetalCity_House1/scripts.pory"
	.string "My husband is just obsessed with that\n"
	.string "Jangmo-o he caught on a trip out west.\l"
	.string "Ehehe, it's sweet!$"

PentepetalCity_House1_EventScript_Jangmo_O_Text_0:
# 29 "data/maps/PentepetalCity_House1/scripts.pory"
	.string "Jangmo-o$"

PentepetalCity_House1_EventScript_Jangmo_O_Text_1:
# 31 "data/maps/PentepetalCity_House1/scripts.pory"
	.string "Khraah!$"

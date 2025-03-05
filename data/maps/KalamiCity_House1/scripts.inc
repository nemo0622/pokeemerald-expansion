KalamiCity_House1_MapScripts::
	.byte 0


KalamiCity_House1_EventScript_Artist::
# 5 "data/maps/KalamiCity_House1/scripts.pory"
	lock
# 6 "data/maps/KalamiCity_House1/scripts.pory"
	faceplayer
# 7 "data/maps/KalamiCity_House1/scripts.pory"
	speakername KalamiCity_House1_EventScript_Artist_Text_0
# 8 "data/maps/KalamiCity_House1/scripts.pory"
	msgbox KalamiCity_House1_EventScript_Artist_Text_1
# 9 "data/maps/KalamiCity_House1/scripts.pory"
	closemessage
# 10 "data/maps/KalamiCity_House1/scripts.pory"
	release
	end


KalamiCity_House1_EventScript_Trapinch::
# 16 "data/maps/KalamiCity_House1/scripts.pory"
	lock
# 17 "data/maps/KalamiCity_House1/scripts.pory"
	faceplayer
# 18 "data/maps/KalamiCity_House1/scripts.pory"
	speakername KalamiCity_House1_EventScript_Trapinch_Text_0
# 19 "data/maps/KalamiCity_House1/scripts.pory"
	playmoncry SPECIES_TRAPINCH, CRY_MODE_NORMAL
# 20 "data/maps/KalamiCity_House1/scripts.pory"
	msgbox KalamiCity_House1_EventScript_Trapinch_Text_1
# 21 "data/maps/KalamiCity_House1/scripts.pory"
	waitmoncry
# 22 "data/maps/KalamiCity_House1/scripts.pory"
	closemessage
# 23 "data/maps/KalamiCity_House1/scripts.pory"
	release
	end


KalamiCity_House1_EventScript_Artist_Text_0:
# 7 "data/maps/KalamiCity_House1/scripts.pory"
	.string "Artist$"

KalamiCity_House1_EventScript_Artist_Text_1:
# 8 "data/maps/KalamiCity_House1/scripts.pory"
	.string "I'm a digital artist of Pokémon\n"
	.string "environments. In fact, I make a lot of\l"
	.string "the Pokémon art for Pokédex entries!$"

KalamiCity_House1_EventScript_Trapinch_Text_0:
# 18 "data/maps/KalamiCity_House1/scripts.pory"
	.string "Trapinch$"

KalamiCity_House1_EventScript_Trapinch_Text_1:
# 20 "data/maps/KalamiCity_House1/scripts.pory"
	.string "K-k-k-k.$"

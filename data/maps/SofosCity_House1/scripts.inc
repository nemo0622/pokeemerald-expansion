SofosCity_House1_MapScripts::
	.byte 0


SofosCity_House1_EventScript_Charcadet::
# 5 "data/maps/SofosCity_House1/scripts.pory"
	lock
# 6 "data/maps/SofosCity_House1/scripts.pory"
	faceplayer
# 7 "data/maps/SofosCity_House1/scripts.pory"
	speakername SofosCity_House1_EventScript_Charcadet_Text_0
# 8 "data/maps/SofosCity_House1/scripts.pory"
	playmoncry SPECIES_CHARCADET, CRY_MODE_NORMAL
# 9 "data/maps/SofosCity_House1/scripts.pory"
	msgbox SofosCity_House1_EventScript_Charcadet_Text_1
# 10 "data/maps/SofosCity_House1/scripts.pory"
	waitmoncry
# 11 "data/maps/SofosCity_House1/scripts.pory"
	closemessage
# 12 "data/maps/SofosCity_House1/scripts.pory"
	release
	end


SofosCity_House1_EventScript_Lass::
# 18 "data/maps/SofosCity_House1/scripts.pory"
	lock
# 19 "data/maps/SofosCity_House1/scripts.pory"
	faceplayer
# 20 "data/maps/SofosCity_House1/scripts.pory"
	speakername SofosCity_House1_EventScript_Lass_Text_0
# 21 "data/maps/SofosCity_House1/scripts.pory"
	msgbox SofosCity_House1_EventScript_Lass_Text_1
# 22 "data/maps/SofosCity_House1/scripts.pory"
	closemessage
# 23 "data/maps/SofosCity_House1/scripts.pory"
	release
	end


SofosCity_House1_EventScript_Charcadet_Text_0:
# 7 "data/maps/SofosCity_House1/scripts.pory"
	.string "Charcadet$"

SofosCity_House1_EventScript_Charcadet_Text_1:
# 9 "data/maps/SofosCity_House1/scripts.pory"
	.string "Ka! Chyeah!$"

SofosCity_House1_EventScript_Lass_Text_0:
# 20 "data/maps/SofosCity_House1/scripts.pory"
	.string "Lass$"

SofosCity_House1_EventScript_Lass_Text_1:
# 21 "data/maps/SofosCity_House1/scripts.pory"
	.string "Almost all buildings in Sofos City are\n"
	.string "actually huge apartment complexes!\l"
	.string "That's how so many people can live on\l"
	.string "this small cliffside.$"

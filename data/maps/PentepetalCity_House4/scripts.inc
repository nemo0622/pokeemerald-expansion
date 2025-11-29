PentepetalCity_House4_MapScripts::
	.byte 0


PentepetalCity_House4_EventScript_Picnicker::
# 5 "data/maps/PentepetalCity_House4/scripts.pory"
	lock
# 6 "data/maps/PentepetalCity_House4/scripts.pory"
	faceplayer
# 7 "data/maps/PentepetalCity_House4/scripts.pory"
	speakername PentepetalCity_House4_EventScript_Picnicker_Text_0
# 8 "data/maps/PentepetalCity_House4/scripts.pory"
	msgbox PentepetalCity_House4_EventScript_Picnicker_Text_1
# 9 "data/maps/PentepetalCity_House4/scripts.pory"
	closemessage
# 10 "data/maps/PentepetalCity_House4/scripts.pory"
	release
	end


PentepetalCity_House4_EventScript_Bellsprout::
# 16 "data/maps/PentepetalCity_House4/scripts.pory"
	lock
# 17 "data/maps/PentepetalCity_House4/scripts.pory"
	faceplayer
# 18 "data/maps/PentepetalCity_House4/scripts.pory"
	speakername PentepetalCity_House4_EventScript_Bellsprout_Text_0
# 19 "data/maps/PentepetalCity_House4/scripts.pory"
	playmoncry SPECIES_BELLSPROUT, CRY_MODE_NORMAL
# 20 "data/maps/PentepetalCity_House4/scripts.pory"
	msgbox PentepetalCity_House4_EventScript_Bellsprout_Text_1
# 21 "data/maps/PentepetalCity_House4/scripts.pory"
	waitmoncry
# 22 "data/maps/PentepetalCity_House4/scripts.pory"
	closemessage
# 23 "data/maps/PentepetalCity_House4/scripts.pory"
	release
	end


PentepetalCity_House4_EventScript_Picnicker_Text_0:
# 7 "data/maps/PentepetalCity_House4/scripts.pory"
	.string "Picnicker$"

PentepetalCity_House4_EventScript_Picnicker_Text_1:
# 8 "data/maps/PentepetalCity_House4/scripts.pory"
	.string "Flowers have special significance in\n"
	.string "Péntepetal City. Specific flowers used\l"
	.string "to have different meanings in Ancient\l"
	.string "Ilios, signaling safe spaces and\l"
	.string "romantic attractions. How poetic, how\l"
	.string "sweet!$"

PentepetalCity_House4_EventScript_Bellsprout_Text_0:
# 18 "data/maps/PentepetalCity_House4/scripts.pory"
	.string "Bellsprout$"

PentepetalCity_House4_EventScript_Bellsprout_Text_1:
# 20 "data/maps/PentepetalCity_House4/scripts.pory"
	.string "Chk chkee!$"

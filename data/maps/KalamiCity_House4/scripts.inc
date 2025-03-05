KalamiCity_House4_MapScripts::
	.byte 0


KalamiCity_House4_EventScript_Farmer::
# 5 "data/maps/KalamiCity_House4/scripts.pory"
	lock
# 6 "data/maps/KalamiCity_House4/scripts.pory"
	faceplayer
# 7 "data/maps/KalamiCity_House4/scripts.pory"
	speakername KalamiCity_House4_EventScript_Farmer_Text_0
# 8 "data/maps/KalamiCity_House4/scripts.pory"
	msgbox KalamiCity_House4_EventScript_Farmer_Text_1
# 9 "data/maps/KalamiCity_House4/scripts.pory"
	closemessage
# 10 "data/maps/KalamiCity_House4/scripts.pory"
	release
	end


KalamiCity_House4_EventScript_Woman::
# 16 "data/maps/KalamiCity_House4/scripts.pory"
	lock
# 17 "data/maps/KalamiCity_House4/scripts.pory"
	faceplayer
# 18 "data/maps/KalamiCity_House4/scripts.pory"
	speakername KalamiCity_House4_EventScript_Woman_Text_0
# 19 "data/maps/KalamiCity_House4/scripts.pory"
	msgbox KalamiCity_House4_EventScript_Woman_Text_1
# 20 "data/maps/KalamiCity_House4/scripts.pory"
	closemessage
# 21 "data/maps/KalamiCity_House4/scripts.pory"
	release
	end


KalamiCity_House4_EventScript_Farmer_Text_0:
# 7 "data/maps/KalamiCity_House4/scripts.pory"
	.string "Farmer$"

KalamiCity_House4_EventScript_Farmer_Text_1:
# 8 "data/maps/KalamiCity_House4/scripts.pory"
	.string "Most buildings on this side of Kalami\n"
	.string "City are actually storage warehouses,\l"
	.string "not homes. Pokémon from the swamp\l"
	.string "sneak in sometimes.$"

KalamiCity_House4_EventScript_Woman_Text_0:
# 18 "data/maps/KalamiCity_House4/scripts.pory"
	.string "Woman$"

KalamiCity_House4_EventScript_Woman_Text_1:
# 19 "data/maps/KalamiCity_House4/scripts.pory"
	.string "Some people make rafts which can float\n"
	.string "up and down the rivers here. I want to\l"
	.string "ride on one someday!$"

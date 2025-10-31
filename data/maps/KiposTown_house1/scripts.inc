KiposTown_house1_MapScripts::
	.byte 0


KiposTown_House1_EventScript_Woman::
# 5 "data/maps/KiposTown_house1/scripts.pory"
	lock
# 6 "data/maps/KiposTown_house1/scripts.pory"
	faceplayer
# 7 "data/maps/KiposTown_house1/scripts.pory"
	speakername KiposTown_House1_EventScript_Woman_Text_0
# 8 "data/maps/KiposTown_house1/scripts.pory"
	msgbox KiposTown_House1_EventScript_Woman_Text_1
# 9 "data/maps/KiposTown_house1/scripts.pory"
	closemessage
# 10 "data/maps/KiposTown_house1/scripts.pory"
	release
	end


KiposTown_House1_EventScript_Woman_Text_0:
# 7 "data/maps/KiposTown_house1/scripts.pory"
	.string "Woman$"

KiposTown_House1_EventScript_Woman_Text_1:
# 8 "data/maps/KiposTown_house1/scripts.pory"
	.string "Most of the buildings around here are\n"
	.string "made of local limestone. It gives the\l"
	.string "town a beige-yellow tint.$"

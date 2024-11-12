AcrisiaCity_House5_MapScripts::
	.byte 0


AcrisiaCity_House5_EventScript_Boy::
# 5 "data/maps/AcrisiaCity_House5/scripts.pory"
	lock
# 6 "data/maps/AcrisiaCity_House5/scripts.pory"
	faceplayer
# 7 "data/maps/AcrisiaCity_House5/scripts.pory"
	speakername AcrisiaCity_House5_EventScript_Boy_Text_0
# 8 "data/maps/AcrisiaCity_House5/scripts.pory"
	msgbox AcrisiaCity_House5_EventScript_Boy_Text_1
# 9 "data/maps/AcrisiaCity_House5/scripts.pory"
	closemessage
# 10 "data/maps/AcrisiaCity_House5/scripts.pory"
	release
	end


AcrisiaCity_House5_EventScript_Boy_Text_0:
# 7 "data/maps/AcrisiaCity_House5/scripts.pory"
	.string "Boy$"

AcrisiaCity_House5_EventScript_Boy_Text_1:
# 8 "data/maps/AcrisiaCity_House5/scripts.pory"
	.string "You can learn a lot from books! Look, it\n"
	.string "says here that some Pokémon in the\l"
	.string "Ilios Region have stats different from\l"
	.string "other areas. Neat!$"

KiposTown_House3_MapScripts::
	.byte 0


KiposTown_House3_EventScript_Boy::
# 5 "data/maps/KiposTown_House3/scripts.pory"
	lock
# 6 "data/maps/KiposTown_House3/scripts.pory"
	faceplayer
# 7 "data/maps/KiposTown_House3/scripts.pory"
	speakername KiposTown_House3_EventScript_Boy_Text_0
# 8 "data/maps/KiposTown_House3/scripts.pory"
	msgbox KiposTown_House3_EventScript_Boy_Text_1
# 9 "data/maps/KiposTown_House3/scripts.pory"
	closemessage
# 10 "data/maps/KiposTown_House3/scripts.pory"
	release
	end


KiposTown_House3_EventScript_Woman::
# 16 "data/maps/KiposTown_House3/scripts.pory"
	lock
# 17 "data/maps/KiposTown_House3/scripts.pory"
	faceplayer
# 18 "data/maps/KiposTown_House3/scripts.pory"
	speakername KiposTown_House3_EventScript_Woman_Text_0
# 19 "data/maps/KiposTown_House3/scripts.pory"
	msgbox KiposTown_House3_EventScript_Woman_Text_1
# 20 "data/maps/KiposTown_House3/scripts.pory"
	closemessage
# 21 "data/maps/KiposTown_House3/scripts.pory"
	release
	end


KiposTown_House3_EventScript_Boy_Text_0:
# 7 "data/maps/KiposTown_House3/scripts.pory"
	.string "Boy$"

KiposTown_House3_EventScript_Boy_Text_1:
# 8 "data/maps/KiposTown_House3/scripts.pory"
	.string "My mom is pretty upset about the\n"
	.string "Conservation Center, because tourism\l"
	.string "to Kipos Town dried up quick. No\l"
	.string "tourists means no selling things to\l"
	.string "them!$"

KiposTown_House3_EventScript_Woman_Text_0:
# 18 "data/maps/KiposTown_House3/scripts.pory"
	.string "Lady$"

KiposTown_House3_EventScript_Woman_Text_1:
# 19 "data/maps/KiposTown_House3/scripts.pory"
	.string "I brought in some bonus money by\n"
	.string "renting the extra bedroom to tourists,\l"
	.string "but a lot of the business has left. My\l"
	.string "son's pretty excited about getting an\l"
	.string "extra room now, though!$"

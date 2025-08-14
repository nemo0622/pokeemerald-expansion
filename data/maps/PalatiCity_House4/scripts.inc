PalatiCity_House4_MapScripts::
	.byte 0


PalatiCity_House4_EventScript_Man::
# 5 "data/maps/PalatiCity_House4/scripts.pory"
	lock
# 6 "data/maps/PalatiCity_House4/scripts.pory"
	faceplayer
# 7 "data/maps/PalatiCity_House4/scripts.pory"
	speakername PalatiCity_House4_EventScript_Man_Text_0
# 8 "data/maps/PalatiCity_House4/scripts.pory"
	msgbox PalatiCity_House4_EventScript_Man_Text_1
# 9 "data/maps/PalatiCity_House4/scripts.pory"
	closemessage
# 10 "data/maps/PalatiCity_House4/scripts.pory"
	release
	end


PalatiCity_House4_EventScript_Mudsdale::
# 16 "data/maps/PalatiCity_House4/scripts.pory"
	lock
# 17 "data/maps/PalatiCity_House4/scripts.pory"
	faceplayer
# 18 "data/maps/PalatiCity_House4/scripts.pory"
	speakername PalatiCity_House4_EventScript_Mudsdale_Text_0
# 19 "data/maps/PalatiCity_House4/scripts.pory"
	playmoncry SPECIES_MUDSDALE, CRY_MODE_NORMAL
# 20 "data/maps/PalatiCity_House4/scripts.pory"
	msgbox PalatiCity_House4_EventScript_Mudsdale_Text_1
# 21 "data/maps/PalatiCity_House4/scripts.pory"
	waitmoncry
# 22 "data/maps/PalatiCity_House4/scripts.pory"
	closemessage
# 23 "data/maps/PalatiCity_House4/scripts.pory"
	release
	end


PalatiCity_House4_EventScript_Man_Text_0:
# 7 "data/maps/PalatiCity_House4/scripts.pory"
	.string "Merchant Man$"

PalatiCity_House4_EventScript_Man_Text_1:
# 8 "data/maps/PalatiCity_House4/scripts.pory"
	.string "I was planning a trade journey to\n"
	.string "Areios Town, but Team Chimera took it\l"
	.string "over and made it their hideout. How\l"
	.string "dispicable.$"

PalatiCity_House4_EventScript_Mudsdale_Text_0:
# 18 "data/maps/PalatiCity_House4/scripts.pory"
	.string "Mudsdale$"

PalatiCity_House4_EventScript_Mudsdale_Text_1:
# 20 "data/maps/PalatiCity_House4/scripts.pory"
	.string "Brey-hey-hey!$"

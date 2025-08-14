PalatiCity_House2_MapScripts::
	.byte 0


PalatiCity_House2_EventScript_Girl::
# 5 "data/maps/PalatiCity_House2/scripts.pory"
	lock
# 6 "data/maps/PalatiCity_House2/scripts.pory"
	faceplayer
# 7 "data/maps/PalatiCity_House2/scripts.pory"
	speakername PalatiCity_House2_EventScript_Girl_Text_0
# 8 "data/maps/PalatiCity_House2/scripts.pory"
	msgbox PalatiCity_House2_EventScript_Girl_Text_1
# 9 "data/maps/PalatiCity_House2/scripts.pory"
	closemessage
# 10 "data/maps/PalatiCity_House2/scripts.pory"
	release
	end


PalatiCity_House2_EventScript_BlackBelt::
# 16 "data/maps/PalatiCity_House2/scripts.pory"
	lock
# 17 "data/maps/PalatiCity_House2/scripts.pory"
	faceplayer
# 18 "data/maps/PalatiCity_House2/scripts.pory"
	speakername PalatiCity_House2_EventScript_BlackBelt_Text_0
# 19 "data/maps/PalatiCity_House2/scripts.pory"
	msgbox PalatiCity_House2_EventScript_BlackBelt_Text_1
# 20 "data/maps/PalatiCity_House2/scripts.pory"
	closemessage
# 21 "data/maps/PalatiCity_House2/scripts.pory"
	release
	end


PalatiCity_House2_EventScript_Girl_Text_0:
# 7 "data/maps/PalatiCity_House2/scripts.pory"
	.string "Girl$"

PalatiCity_House2_EventScript_Girl_Text_1:
# 8 "data/maps/PalatiCity_House2/scripts.pory"
	.string "The buildings in Palati City have stood\n"
	.string "for over a thousand years, but the\l"
	.string "interiors are all pretty new!$"

PalatiCity_House2_EventScript_BlackBelt_Text_0:
# 18 "data/maps/PalatiCity_House2/scripts.pory"
	.string "Black Belt$"

PalatiCity_House2_EventScript_BlackBelt_Text_1:
# 19 "data/maps/PalatiCity_House2/scripts.pory"
	.string "Our house interior was recently\n"
	.string "remodeled! The city looks ancient, but\l"
	.string "it's perfectly suited for modern living.$"

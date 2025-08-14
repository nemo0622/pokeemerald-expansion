PalatiCity_House5_MapScripts::
	.byte 0


PalatiCity_House5_EventScript_Performer::
# 5 "data/maps/PalatiCity_House5/scripts.pory"
	lock
# 6 "data/maps/PalatiCity_House5/scripts.pory"
	faceplayer
# 7 "data/maps/PalatiCity_House5/scripts.pory"
	speakername PalatiCity_House5_EventScript_Performer_Text_0
# 8 "data/maps/PalatiCity_House5/scripts.pory"
	msgbox PalatiCity_House5_EventScript_Performer_Text_1
# 9 "data/maps/PalatiCity_House5/scripts.pory"
	closemessage
# 10 "data/maps/PalatiCity_House5/scripts.pory"
	release
	end


PalatiCity_House5_EventScript_Youngster::
# 16 "data/maps/PalatiCity_House5/scripts.pory"
	lock
# 17 "data/maps/PalatiCity_House5/scripts.pory"
	faceplayer
# 18 "data/maps/PalatiCity_House5/scripts.pory"
	speakername PalatiCity_House5_EventScript_Youngster_Text_0
# 19 "data/maps/PalatiCity_House5/scripts.pory"
	msgbox PalatiCity_House5_EventScript_Youngster_Text_1
# 20 "data/maps/PalatiCity_House5/scripts.pory"
	closemessage
# 21 "data/maps/PalatiCity_House5/scripts.pory"
	release
	end


PalatiCity_House5_EventScript_Performer_Text_0:
# 7 "data/maps/PalatiCity_House5/scripts.pory"
	.string "Performer$"

PalatiCity_House5_EventScript_Performer_Text_1:
# 8 "data/maps/PalatiCity_House5/scripts.pory"
	.string "I'm reading about the of theatre in\n"
	.string "Ilios. Maybe I'll visit the theatre in\l"
	.string "the Fresco Isles!$"

PalatiCity_House5_EventScript_Youngster_Text_0:
# 18 "data/maps/PalatiCity_House5/scripts.pory"
	.string "Youngster$"

PalatiCity_House5_EventScript_Youngster_Text_1:
# 19 "data/maps/PalatiCity_House5/scripts.pory"
	.string "Fennekin is my favorite Pokémon! Maybe\n"
	.string "it could be my Starter Pokémon when I'm\l"
	.string "old enough to be a Trainer!$"

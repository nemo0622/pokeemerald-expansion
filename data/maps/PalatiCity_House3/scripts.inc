PalatiCity_House3_MapScripts::
	.byte 0


PalatiCity_House3_EventScript_Athlete::
# 5 "data/maps/PalatiCity_House3/scripts.pory"
	lock
# 6 "data/maps/PalatiCity_House3/scripts.pory"
	faceplayer
# 7 "data/maps/PalatiCity_House3/scripts.pory"
	speakername PalatiCity_House3_EventScript_Athlete_Text_0
# 8 "data/maps/PalatiCity_House3/scripts.pory"
	msgbox PalatiCity_House3_EventScript_Athlete_Text_1
# 9 "data/maps/PalatiCity_House3/scripts.pory"
	closemessage
# 10 "data/maps/PalatiCity_House3/scripts.pory"
	release
	end


PalatiCity_House3_EventScript_Man::
# 16 "data/maps/PalatiCity_House3/scripts.pory"
	lock
# 17 "data/maps/PalatiCity_House3/scripts.pory"
	faceplayer
# 18 "data/maps/PalatiCity_House3/scripts.pory"
	speakername PalatiCity_House3_EventScript_Man_Text_0
# 19 "data/maps/PalatiCity_House3/scripts.pory"
	msgbox PalatiCity_House3_EventScript_Man_Text_1
# 20 "data/maps/PalatiCity_House3/scripts.pory"
	closemessage
# 21 "data/maps/PalatiCity_House3/scripts.pory"
	release
	end


PalatiCity_House3_EventScript_Athlete_Text_0:
# 7 "data/maps/PalatiCity_House3/scripts.pory"
	.string "Athlete$"

PalatiCity_House3_EventScript_Athlete_Text_1:
# 8 "data/maps/PalatiCity_House3/scripts.pory"
	.string "Huff huff... I just got back from a run\n"
	.string "around the island.$"

PalatiCity_House3_EventScript_Man_Text_0:
# 18 "data/maps/PalatiCity_House3/scripts.pory"
	.string "Man$"

PalatiCity_House3_EventScript_Man_Text_1:
# 19 "data/maps/PalatiCity_House3/scripts.pory"
	.string "The Gym Leader, Rhadine, is one of the\n"
	.string "most beautiful women in the region. If I\l"
	.string "catch a good Rock-type Pokémon, maybe\l"
	.string "I'll give the Gym a shot.$"

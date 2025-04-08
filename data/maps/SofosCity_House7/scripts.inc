SofosCity_House7_MapScripts::
	.byte 0


SofosCity_House7_EventScript_Girl::
# 5 "data/maps/SofosCity_House7/scripts.pory"
	lock
# 6 "data/maps/SofosCity_House7/scripts.pory"
	faceplayer
# 7 "data/maps/SofosCity_House7/scripts.pory"
	speakername SofosCity_House7_EventScript_Girl_Text_0
# 8 "data/maps/SofosCity_House7/scripts.pory"
	msgbox SofosCity_House7_EventScript_Girl_Text_1
# 9 "data/maps/SofosCity_House7/scripts.pory"
	closemessage
# 10 "data/maps/SofosCity_House7/scripts.pory"
	release
	end


SofosCity_House7_EventScript_Twin::
# 16 "data/maps/SofosCity_House7/scripts.pory"
	lock
# 17 "data/maps/SofosCity_House7/scripts.pory"
	faceplayer
# 18 "data/maps/SofosCity_House7/scripts.pory"
	speakername SofosCity_House7_EventScript_Twin_Text_0
# 19 "data/maps/SofosCity_House7/scripts.pory"
	msgbox SofosCity_House7_EventScript_Twin_Text_1
# 20 "data/maps/SofosCity_House7/scripts.pory"
	closemessage
# 21 "data/maps/SofosCity_House7/scripts.pory"
	release
	end


SofosCity_House7_EventScript_Girl_Text_0:
# 7 "data/maps/SofosCity_House7/scripts.pory"
	.string "Girl$"

SofosCity_House7_EventScript_Girl_Text_1:
# 8 "data/maps/SofosCity_House7/scripts.pory"
	.string "I don't leave the city limits very often.\n"
	.string "I can get everything I need right here,\l"
	.string "and the wild Pokémon in the grass\l"
	.string "outside scare me!$"

SofosCity_House7_EventScript_Twin_Text_0:
# 18 "data/maps/SofosCity_House7/scripts.pory"
	.string "Little Girl$"

SofosCity_House7_EventScript_Twin_Text_1:
# 19 "data/maps/SofosCity_House7/scripts.pory"
	.string "We moved here from Kalami City! It was\n"
	.string "nice there, but now I get to play with\l"
	.string "my friends at the arcade!$"

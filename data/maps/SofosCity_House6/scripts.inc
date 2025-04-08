SofosCity_House6_MapScripts::
	.byte 0


SofosCity_House6_EventScript_LittleGirl::
# 5 "data/maps/SofosCity_House6/scripts.pory"
	lock
# 6 "data/maps/SofosCity_House6/scripts.pory"
	faceplayer
# 7 "data/maps/SofosCity_House6/scripts.pory"
	speakername SofosCity_House6_EventScript_LittleGirl_Text_0
# 8 "data/maps/SofosCity_House6/scripts.pory"
	msgbox SofosCity_House6_EventScript_LittleGirl_Text_1
# 9 "data/maps/SofosCity_House6/scripts.pory"
	closemessage
# 10 "data/maps/SofosCity_House6/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 11 "data/maps/SofosCity_House6/scripts.pory"
	waitmovement 0
# 12 "data/maps/SofosCity_House6/scripts.pory"
	release
	end


SofosCity_House6_EventScript_Officer::
# 18 "data/maps/SofosCity_House6/scripts.pory"
	lock
# 19 "data/maps/SofosCity_House6/scripts.pory"
	faceplayer
# 20 "data/maps/SofosCity_House6/scripts.pory"
	speakername SofosCity_House6_EventScript_Officer_Text_0
# 21 "data/maps/SofosCity_House6/scripts.pory"
	msgbox SofosCity_House6_EventScript_Officer_Text_1
# 22 "data/maps/SofosCity_House6/scripts.pory"
	closemessage
# 23 "data/maps/SofosCity_House6/scripts.pory"
	release
	end


SofosCity_House6_EventScript_LittleGirl_Text_0:
# 7 "data/maps/SofosCity_House6/scripts.pory"
	.string "Little Girl$"

SofosCity_House6_EventScript_LittleGirl_Text_1:
# 8 "data/maps/SofosCity_House6/scripts.pory"
	.string "I'm playing Psyduck Life! Raising a\n"
	.string "digital Pokémon and playing racing\l"
	.string "games with it is so much fun!$"

SofosCity_House6_EventScript_Officer_Text_0:
# 20 "data/maps/SofosCity_House6/scripts.pory"
	.string "Officer$"

SofosCity_House6_EventScript_Officer_Text_1:
# 21 "data/maps/SofosCity_House6/scripts.pory"
	.string "All of her Pokémon and friends are\n"
	.string "online. Call me old-fashioned, but I\l"
	.string "just don't get it...$"

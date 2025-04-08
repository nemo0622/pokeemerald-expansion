SofosCity_House3_MapScripts::
	.byte 0


SofosCity_House3_EventScript_FatMan::
# 5 "data/maps/SofosCity_House3/scripts.pory"
	lock
# 6 "data/maps/SofosCity_House3/scripts.pory"
	faceplayer
# 7 "data/maps/SofosCity_House3/scripts.pory"
	speakername SofosCity_House3_EventScript_FatMan_Text_0
# 8 "data/maps/SofosCity_House3/scripts.pory"
	msgbox SofosCity_House3_EventScript_FatMan_Text_1
# 9 "data/maps/SofosCity_House3/scripts.pory"
	closemessage
# 10 "data/maps/SofosCity_House3/scripts.pory"
	release
	end


SofosCity_House3_EventScript_Hiker::
# 16 "data/maps/SofosCity_House3/scripts.pory"
	lock
# 17 "data/maps/SofosCity_House3/scripts.pory"
	faceplayer
# 18 "data/maps/SofosCity_House3/scripts.pory"
	speakername SofosCity_House3_EventScript_Hiker_Text_0
# 19 "data/maps/SofosCity_House3/scripts.pory"
	msgbox SofosCity_House3_EventScript_Hiker_Text_1
# 20 "data/maps/SofosCity_House3/scripts.pory"
	closemessage
# 21 "data/maps/SofosCity_House3/scripts.pory"
	release
	end


SofosCity_House3_EventScript_FatMan_Text_0:
# 7 "data/maps/SofosCity_House3/scripts.pory"
	.string "Fat Man$"

SofosCity_House3_EventScript_FatMan_Text_1:
# 8 "data/maps/SofosCity_House3/scripts.pory"
	.string "The food here is delicious! I'm so glad\n"
	.string "we moved to the city. The only problem\l"
	.string "is, our neighbors upstairs can get\l"
	.string "pretty loud.$"

SofosCity_House3_EventScript_Hiker_Text_0:
# 18 "data/maps/SofosCity_House3/scripts.pory"
	.string "Hiker$"

SofosCity_House3_EventScript_Hiker_Text_1:
# 19 "data/maps/SofosCity_House3/scripts.pory"
	.string "We moved here from a place way out in\n"
	.string "the countryside. The\l"
	.string "hustle-and-bustle of the city can be a\l"
	.string "lot to handle, but it was worth it for\l"
	.string "us. There's so much to see, so much to\l"
	.string "do!$"

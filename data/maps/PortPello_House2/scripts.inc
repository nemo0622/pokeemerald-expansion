PortPello_House2_MapScripts::
	.byte 0


PortPello_House2_EventScript_ConstructionWorker::
# 5 "data/maps/PortPello_House2/scripts.pory"
	lock
# 6 "data/maps/PortPello_House2/scripts.pory"
	faceplayer
# 7 "data/maps/PortPello_House2/scripts.pory"
	speakername PortPello_House2_EventScript_ConstructionWorker_Text_0
# 8 "data/maps/PortPello_House2/scripts.pory"
	msgbox PortPello_House2_EventScript_ConstructionWorker_Text_1
# 9 "data/maps/PortPello_House2/scripts.pory"
	closemessage
# 10 "data/maps/PortPello_House2/scripts.pory"
	release
	end


PortPello_House2_EventScript_Artist::
# 16 "data/maps/PortPello_House2/scripts.pory"
	lock
# 17 "data/maps/PortPello_House2/scripts.pory"
	faceplayer
# 18 "data/maps/PortPello_House2/scripts.pory"
	speakername PortPello_House2_EventScript_Artist_Text_0
# 19 "data/maps/PortPello_House2/scripts.pory"
	msgbox PortPello_House2_EventScript_Artist_Text_1
# 20 "data/maps/PortPello_House2/scripts.pory"
	closemessage
# 21 "data/maps/PortPello_House2/scripts.pory"
	release
	end


PortPello_House2_EventScript_ConstructionWorker_Text_0:
# 7 "data/maps/PortPello_House2/scripts.pory"
	.string "Worker$"

PortPello_House2_EventScript_ConstructionWorker_Text_1:
# 8 "data/maps/PortPello_House2/scripts.pory"
	.string "I built a couple of the homes in Port\n"
	.string "Pello myself! The lumber from these\l"
	.string "forests is especially well-suited for\l"
	.string "construction.$"

PortPello_House2_EventScript_Artist_Text_0:
# 18 "data/maps/PortPello_House2/scripts.pory"
	.string "Artist$"

PortPello_House2_EventScript_Artist_Text_1:
# 19 "data/maps/PortPello_House2/scripts.pory"
	.string "Behold, my masterpiece!\p"
	.string "...Alright, I'll admit that it's not that\n"
	.string "impressive. I'll always be proud of what\l"
	.string "I create, though.$"

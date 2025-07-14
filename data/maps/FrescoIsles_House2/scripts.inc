FrescoIsles_House2_MapScripts::
	.byte 0


FrescoIsles_House2_EventScript_Beauty::
# 5 "data/maps/FrescoIsles_House2/scripts.pory"
	lock
# 6 "data/maps/FrescoIsles_House2/scripts.pory"
	faceplayer
# 7 "data/maps/FrescoIsles_House2/scripts.pory"
	speakername FrescoIsles_House2_EventScript_Beauty_Text_0
# 8 "data/maps/FrescoIsles_House2/scripts.pory"
	msgbox FrescoIsles_House2_EventScript_Beauty_Text_1
# 9 "data/maps/FrescoIsles_House2/scripts.pory"
	closemessage
# 10 "data/maps/FrescoIsles_House2/scripts.pory"
	release
	end


FrescoIsles_House2_EventScript_Hiker::
# 16 "data/maps/FrescoIsles_House2/scripts.pory"
	lock
# 17 "data/maps/FrescoIsles_House2/scripts.pory"
	faceplayer
# 18 "data/maps/FrescoIsles_House2/scripts.pory"
	speakername FrescoIsles_House2_EventScript_Hiker_Text_0
# 19 "data/maps/FrescoIsles_House2/scripts.pory"
	msgbox FrescoIsles_House2_EventScript_Hiker_Text_1
# 20 "data/maps/FrescoIsles_House2/scripts.pory"
	closemessage
# 21 "data/maps/FrescoIsles_House2/scripts.pory"
	release
	end


FrescoIsles_House2_EventScript_Beauty_Text_0:
# 7 "data/maps/FrescoIsles_House2/scripts.pory"
	.string "Beauty$"

FrescoIsles_House2_EventScript_Beauty_Text_1:
# 8 "data/maps/FrescoIsles_House2/scripts.pory"
	.string "They say that the Fresco Isles used to\n"
	.string "be one big landmass, but a volcanic\l"
	.string "eruption made most of the land sink. I\l"
	.string "can't imagine how scary that must've\l"
	.string "been.$"

FrescoIsles_House2_EventScript_Hiker_Text_0:
# 18 "data/maps/FrescoIsles_House2/scripts.pory"
	.string "Hiker$"

FrescoIsles_House2_EventScript_Hiker_Text_1:
# 19 "data/maps/FrescoIsles_House2/scripts.pory"
	.string "The Fresco Isles volcano blew up over\n"
	.string "3,000 years ago. Legend says that a\l"
	.string "civilization was thriving on nearby\l"
	.string "islands, but the explosion led to their\l"
	.string "downfall.$"

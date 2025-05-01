MarmaroIsland_House1_MapScripts::
	.byte 0


MarmaroIsland_House1_EventScript_Artist::
# 5 "data/maps/MarmaroIsland_House1/scripts.pory"
	lock
# 6 "data/maps/MarmaroIsland_House1/scripts.pory"
	faceplayer
# 7 "data/maps/MarmaroIsland_House1/scripts.pory"
	speakername MarmaroIsland_House1_EventScript_Artist_Text_0
# 8 "data/maps/MarmaroIsland_House1/scripts.pory"
	msgbox MarmaroIsland_House1_EventScript_Artist_Text_1
# 9 "data/maps/MarmaroIsland_House1/scripts.pory"
	closemessage
# 10 "data/maps/MarmaroIsland_House1/scripts.pory"
	release
	end


MarmaroIsland_House1_EventScript_Duosion::
# 16 "data/maps/MarmaroIsland_House1/scripts.pory"
	lock
# 17 "data/maps/MarmaroIsland_House1/scripts.pory"
	faceplayer
# 18 "data/maps/MarmaroIsland_House1/scripts.pory"
	speakername MarmaroIsland_House1_EventScript_Duosion_Text_0
# 19 "data/maps/MarmaroIsland_House1/scripts.pory"
	playmoncry SPECIES_DUOSION, CRY_MODE_NORMAL
# 20 "data/maps/MarmaroIsland_House1/scripts.pory"
	msgbox MarmaroIsland_House1_EventScript_Duosion_Text_1
# 21 "data/maps/MarmaroIsland_House1/scripts.pory"
	waitmoncry
# 22 "data/maps/MarmaroIsland_House1/scripts.pory"
	closemessage
# 23 "data/maps/MarmaroIsland_House1/scripts.pory"
	release
	end


MarmaroIsland_House1_EventScript_Artist_Text_0:
# 7 "data/maps/MarmaroIsland_House1/scripts.pory"
	.string "Artist$"

MarmaroIsland_House1_EventScript_Artist_Text_1:
# 8 "data/maps/MarmaroIsland_House1/scripts.pory"
	.string "It's a popular vacation spot, but not\n"
	.string "many people actually live on Marmaro\l"
	.string "Island. People don't like the idea of\l"
	.string "minecarts whizzing over their heads\l"
	.string "every day.$"

MarmaroIsland_House1_EventScript_Duosion_Text_0:
# 18 "data/maps/MarmaroIsland_House1/scripts.pory"
	.string "Duosion$"

MarmaroIsland_House1_EventScript_Duosion_Text_1:
# 20 "data/maps/MarmaroIsland_House1/scripts.pory"
	.string "Hreee...!$"

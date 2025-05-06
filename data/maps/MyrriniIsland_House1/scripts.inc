MyrriniIsland_House1_MapScripts::
	.byte 0


MyrriniIsland_House1_EventScript_Gentleman::
# 5 "data/maps/MyrriniIsland_House1/scripts.pory"
	lock
# 6 "data/maps/MyrriniIsland_House1/scripts.pory"
	faceplayer
# 7 "data/maps/MyrriniIsland_House1/scripts.pory"
	speakername MyrriniIsland_House1_EventScript_Gentleman_Text_0
# 8 "data/maps/MyrriniIsland_House1/scripts.pory"
	msgbox MyrriniIsland_House1_EventScript_Gentleman_Text_1
# 9 "data/maps/MyrriniIsland_House1/scripts.pory"
	closemessage
# 10 "data/maps/MyrriniIsland_House1/scripts.pory"
	release
	end


MyrriniIsland_House1_EventScript_Woman::
# 16 "data/maps/MyrriniIsland_House1/scripts.pory"
	lock
# 17 "data/maps/MyrriniIsland_House1/scripts.pory"
	faceplayer
# 18 "data/maps/MyrriniIsland_House1/scripts.pory"
	speakername MyrriniIsland_House1_EventScript_Woman_Text_0
# 19 "data/maps/MyrriniIsland_House1/scripts.pory"
	msgbox MyrriniIsland_House1_EventScript_Woman_Text_1
# 20 "data/maps/MyrriniIsland_House1/scripts.pory"
	closemessage
# 21 "data/maps/MyrriniIsland_House1/scripts.pory"
	release
	end


MyrriniIsland_House1_EventScript_Gentleman_Text_0:
# 7 "data/maps/MyrriniIsland_House1/scripts.pory"
	.string "Gentleman$"

MyrriniIsland_House1_EventScript_Gentleman_Text_1:
# 8 "data/maps/MyrriniIsland_House1/scripts.pory"
	.string "Some of the sweetest, most flavorful\n"
	.string "wine in the world comes from Myrrini\l"
	.string "Island. Wine tasting festivals are held\l"
	.string "here all the time!$"

MyrriniIsland_House1_EventScript_Woman_Text_0:
# 18 "data/maps/MyrriniIsland_House1/scripts.pory"
	.string "Woman$"

MyrriniIsland_House1_EventScript_Woman_Text_1:
# 19 "data/maps/MyrriniIsland_House1/scripts.pory"
	.string "The architecture on Myrrini Island uses\n"
	.string "styles from ancient times. Most houses\l"
	.string "are made of intricately carved wood.$"

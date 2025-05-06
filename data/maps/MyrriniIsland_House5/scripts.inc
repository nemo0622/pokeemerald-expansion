MyrriniIsland_House5_MapScripts::
	.byte 0


MyrriniIsland_House5_EventScript_Maniac::
# 5 "data/maps/MyrriniIsland_House5/scripts.pory"
	lock
# 6 "data/maps/MyrriniIsland_House5/scripts.pory"
	faceplayer
# 7 "data/maps/MyrriniIsland_House5/scripts.pory"
	speakername MyrriniIsland_House5_EventScript_Maniac_Text_0
# 8 "data/maps/MyrriniIsland_House5/scripts.pory"
	msgbox MyrriniIsland_House5_EventScript_Maniac_Text_1
# 9 "data/maps/MyrriniIsland_House5/scripts.pory"
	closemessage
# 10 "data/maps/MyrriniIsland_House5/scripts.pory"
	release
	end


MyrriniIsland_House5_EventScript_Scientist::
# 16 "data/maps/MyrriniIsland_House5/scripts.pory"
	lock
# 17 "data/maps/MyrriniIsland_House5/scripts.pory"
	faceplayer
# 18 "data/maps/MyrriniIsland_House5/scripts.pory"
	speakername MyrriniIsland_House5_EventScript_Scientist_Text_0
# 19 "data/maps/MyrriniIsland_House5/scripts.pory"
	msgbox MyrriniIsland_House5_EventScript_Scientist_Text_1
# 20 "data/maps/MyrriniIsland_House5/scripts.pory"
	closemessage
# 21 "data/maps/MyrriniIsland_House5/scripts.pory"
	release
	end


MyrriniIsland_House5_EventScript_Maniac_Text_0:
# 7 "data/maps/MyrriniIsland_House5/scripts.pory"
	.string "Computer Maniac$"

MyrriniIsland_House5_EventScript_Maniac_Text_1:
# 8 "data/maps/MyrriniIsland_House5/scripts.pory"
	.string "We keep track of all ships coming in and\n"
	.string "out of Myrrini Island's port. It's hard,\l"
	.string "but it's honest work.$"

MyrriniIsland_House5_EventScript_Scientist_Text_0:
# 18 "data/maps/MyrriniIsland_House5/scripts.pory"
	.string "Scientist$"

MyrriniIsland_House5_EventScript_Scientist_Text_1:
# 19 "data/maps/MyrriniIsland_House5/scripts.pory"
	.string "Nobody thinks of all the moving parts\n"
	.string "behind-the-scenes of shipping. People\l"
	.string "as far as Hoenn have easy access to\l"
	.string "Myrrini wine and fruit. That takes so\l"
	.string "many people to operate!$"

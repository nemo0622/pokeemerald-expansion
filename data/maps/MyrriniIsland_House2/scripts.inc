MyrriniIsland_House2_MapScripts::
	.byte 0


MyrriniIsland_House2_EventScript_Man::
# 5 "data/maps/MyrriniIsland_House2/scripts.pory"
	lock
# 6 "data/maps/MyrriniIsland_House2/scripts.pory"
	faceplayer
# 7 "data/maps/MyrriniIsland_House2/scripts.pory"
	speakername MyrriniIsland_House2_EventScript_Man_Text_0
# 8 "data/maps/MyrriniIsland_House2/scripts.pory"
	msgbox MyrriniIsland_House2_EventScript_Man_Text_1
# 9 "data/maps/MyrriniIsland_House2/scripts.pory"
	closemessage
# 10 "data/maps/MyrriniIsland_House2/scripts.pory"
	release
	end


MyrriniIsland_House2_EventScript_Numel::
# 16 "data/maps/MyrriniIsland_House2/scripts.pory"
	lock
# 17 "data/maps/MyrriniIsland_House2/scripts.pory"
	faceplayer
# 18 "data/maps/MyrriniIsland_House2/scripts.pory"
	speakername MyrriniIsland_House2_EventScript_Numel_Text_0
# 19 "data/maps/MyrriniIsland_House2/scripts.pory"
	playmoncry SPECIES_NUMEL, CRY_MODE_NORMAL
# 20 "data/maps/MyrriniIsland_House2/scripts.pory"
	msgbox MyrriniIsland_House2_EventScript_Numel_Text_1
# 21 "data/maps/MyrriniIsland_House2/scripts.pory"
	waitmoncry
# 22 "data/maps/MyrriniIsland_House2/scripts.pory"
	closemessage
# 23 "data/maps/MyrriniIsland_House2/scripts.pory"
	release
	end


MyrriniIsland_House2_EventScript_Man_Text_0:
# 7 "data/maps/MyrriniIsland_House2/scripts.pory"
	.string "Man$"

MyrriniIsland_House2_EventScript_Man_Text_1:
# 8 "data/maps/MyrriniIsland_House2/scripts.pory"
	.string "I actually really don't like grapes, but\n"
	.string "you can't tell anyone I said that.$"

MyrriniIsland_House2_EventScript_Numel_Text_0:
# 18 "data/maps/MyrriniIsland_House2/scripts.pory"
	.string "Numel$"

MyrriniIsland_House2_EventScript_Numel_Text_1:
# 20 "data/maps/MyrriniIsland_House2/scripts.pory"
	.string "Guhhh!$"

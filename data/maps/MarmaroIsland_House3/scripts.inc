MarmaroIsland_House3_MapScripts::
	.byte 0


MarmaroIsland_House3_EventScript_PunkRocker::
# 5 "data/maps/MarmaroIsland_House3/scripts.pory"
	lock
# 6 "data/maps/MarmaroIsland_House3/scripts.pory"
	faceplayer
# 7 "data/maps/MarmaroIsland_House3/scripts.pory"
	speakername MarmaroIsland_House3_EventScript_PunkRocker_Text_0
# 8 "data/maps/MarmaroIsland_House3/scripts.pory"
	msgbox MarmaroIsland_House3_EventScript_PunkRocker_Text_1
# 9 "data/maps/MarmaroIsland_House3/scripts.pory"
	closemessage
# 10 "data/maps/MarmaroIsland_House3/scripts.pory"
	release
	end


MarmaroIsland_House3_EventScript_PerformerF::
# 16 "data/maps/MarmaroIsland_House3/scripts.pory"
	lock
# 17 "data/maps/MarmaroIsland_House3/scripts.pory"
	faceplayer
# 18 "data/maps/MarmaroIsland_House3/scripts.pory"
	speakername MarmaroIsland_House3_EventScript_PerformerF_Text_0
# 19 "data/maps/MarmaroIsland_House3/scripts.pory"
	msgbox MarmaroIsland_House3_EventScript_PerformerF_Text_1
# 20 "data/maps/MarmaroIsland_House3/scripts.pory"
	closemessage
# 21 "data/maps/MarmaroIsland_House3/scripts.pory"
	release
	end


MarmaroIsland_House3_EventScript_Lileep::
# 27 "data/maps/MarmaroIsland_House3/scripts.pory"
	lock
# 28 "data/maps/MarmaroIsland_House3/scripts.pory"
	faceplayer
# 29 "data/maps/MarmaroIsland_House3/scripts.pory"
	speakername MarmaroIsland_House3_EventScript_Lileep_Text_0
# 30 "data/maps/MarmaroIsland_House3/scripts.pory"
	playmoncry SPECIES_LILEEP, CRY_MODE_NORMAL
# 31 "data/maps/MarmaroIsland_House3/scripts.pory"
	msgbox MarmaroIsland_House3_EventScript_Lileep_Text_1
# 32 "data/maps/MarmaroIsland_House3/scripts.pory"
	waitmoncry
# 33 "data/maps/MarmaroIsland_House3/scripts.pory"
	closemessage
# 34 "data/maps/MarmaroIsland_House3/scripts.pory"
	release
	end


MarmaroIsland_House3_EventScript_PunkRocker_Text_0:
# 7 "data/maps/MarmaroIsland_House3/scripts.pory"
	.string "Punk Rocker$"

MarmaroIsland_House3_EventScript_PunkRocker_Text_1:
# 8 "data/maps/MarmaroIsland_House3/scripts.pory"
	.string "We used to live in Sofos City, but we\n"
	.string "moved here to be closer to the Lazarus\l"
	.string "Taxa around the island. Apparently, it's\l"
	.string "a hot-spot for Fossil Pokémon being\l"
	.string "rediscovered!$"

MarmaroIsland_House3_EventScript_PerformerF_Text_0:
# 18 "data/maps/MarmaroIsland_House3/scripts.pory"
	.string "Performer$"

MarmaroIsland_House3_EventScript_PerformerF_Text_1:
# 19 "data/maps/MarmaroIsland_House3/scripts.pory"
	.string "I'm totally obsessed with the Lazarus\n"
	.string "Pokémon species around here! When I\l"
	.string "was young, I grew up here and collected\l"
	.string "fossils for fun. Now, I can finally see\l"
	.string "the Fossil Pokémon come to life!$"

MarmaroIsland_House3_EventScript_Lileep_Text_0:
# 29 "data/maps/MarmaroIsland_House3/scripts.pory"
	.string "Lileep$"

MarmaroIsland_House3_EventScript_Lileep_Text_1:
# 31 "data/maps/MarmaroIsland_House3/scripts.pory"
	.string "Wiggle wig!$"

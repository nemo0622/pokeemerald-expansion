MarmaroIsland_House2_MapScripts::
	.byte 0


MarmaroIsland_House2_EventScript_Girl::
# 5 "data/maps/MarmaroIsland_House2/scripts.pory"
	lock
# 6 "data/maps/MarmaroIsland_House2/scripts.pory"
	faceplayer
# 7 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_Girl_Text_0
# 8 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_Girl_Text_1
# 9 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 10 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end


MarmaroIsland_House2_EventScript_Boy::
# 16 "data/maps/MarmaroIsland_House2/scripts.pory"
	lock
# 17 "data/maps/MarmaroIsland_House2/scripts.pory"
	faceplayer
# 18 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_Boy_Text_0
# 19 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_Boy_Text_1
# 20 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 21 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end


MarmaroIsland_House2_EventScript_Girl_Text_0:
# 7 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Girl$"

MarmaroIsland_House2_EventScript_Girl_Text_1:
# 8 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Apparently, Marmaro Island used to be a\n"
	.string "lot larger in Ancient Ilios. Over time,\l"
	.string "people mined too much from the outside\l"
	.string "of the island, so it started to shrink.$"

MarmaroIsland_House2_EventScript_Boy_Text_0:
# 18 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Boy$"

MarmaroIsland_House2_EventScript_Boy_Text_1:
# 19 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Pokémon everyone thought were extinct\n"
	.string "have been showing up a lot around here!\l"
	.string "Maybe it's because of all the fossils in\l"
	.string "the stone?$"

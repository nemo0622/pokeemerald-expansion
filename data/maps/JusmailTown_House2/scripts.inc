JusmailTown_House2_MapScripts::
	.byte 0


JusmailTown_House2_EventScript_Aipom::
# 5 "data/maps/JusmailTown_House2/scripts.pory"
	lock
# 6 "data/maps/JusmailTown_House2/scripts.pory"
	faceplayer
# 7 "data/maps/JusmailTown_House2/scripts.pory"
	speakername JusmailTown_House2_EventScript_Aipom_Text_0
# 8 "data/maps/JusmailTown_House2/scripts.pory"
	playmoncry SPECIES_AIPOM, CRY_MODE_NORMAL
# 9 "data/maps/JusmailTown_House2/scripts.pory"
	msgbox JusmailTown_House2_EventScript_Aipom_Text_1
# 10 "data/maps/JusmailTown_House2/scripts.pory"
	waitmoncry
# 11 "data/maps/JusmailTown_House2/scripts.pory"
	closemessage
# 12 "data/maps/JusmailTown_House2/scripts.pory"
	release
	end


JusmailTown_House2_EventScript_Farmer::
# 18 "data/maps/JusmailTown_House2/scripts.pory"
	lock
# 19 "data/maps/JusmailTown_House2/scripts.pory"
	faceplayer
# 20 "data/maps/JusmailTown_House2/scripts.pory"
	speakername JusmailTown_House2_EventScript_Farmer_Text_0
# 21 "data/maps/JusmailTown_House2/scripts.pory"
	msgbox JusmailTown_House2_EventScript_Farmer_Text_1
# 22 "data/maps/JusmailTown_House2/scripts.pory"
	closemessage
# 23 "data/maps/JusmailTown_House2/scripts.pory"
	release
	end


JusmailTown_House2_EventScript_PunkRocker::
# 29 "data/maps/JusmailTown_House2/scripts.pory"
	lock
# 30 "data/maps/JusmailTown_House2/scripts.pory"
	faceplayer
# 31 "data/maps/JusmailTown_House2/scripts.pory"
	speakername JusmailTown_House2_EventScript_PunkRocker_Text_0
# 32 "data/maps/JusmailTown_House2/scripts.pory"
	msgbox JusmailTown_House2_EventScript_PunkRocker_Text_1
# 33 "data/maps/JusmailTown_House2/scripts.pory"
	closemessage
# 34 "data/maps/JusmailTown_House2/scripts.pory"
	release
	end


JusmailTown_House2_EventScript_Aipom_Text_0:
# 7 "data/maps/JusmailTown_House2/scripts.pory"
	.string "Aipom$"

JusmailTown_House2_EventScript_Aipom_Text_1:
# 9 "data/maps/JusmailTown_House2/scripts.pory"
	.string "Skee hee hee!$"

JusmailTown_House2_EventScript_Farmer_Text_0:
# 20 "data/maps/JusmailTown_House2/scripts.pory"
	.string "Farmer$"

JusmailTown_House2_EventScript_Farmer_Text_1:
# 21 "data/maps/JusmailTown_House2/scripts.pory"
	.string "Lots of Pokémon found in Ilios weren't\n"
	.string "from here originally.\p"
	.string "For example, Aipom was introduced by\n"
	.string "traders from a region across the sea to\l"
	.string "the south. The Pikipek around here\l"
	.string "aren't native, either. Humans have had a\l"
	.string "big impact on the environment.$"

JusmailTown_House2_EventScript_PunkRocker_Text_0:
# 31 "data/maps/JusmailTown_House2/scripts.pory"
	.string "Punk Rocker$"

JusmailTown_House2_EventScript_PunkRocker_Text_1:
# 32 "data/maps/JusmailTown_House2/scripts.pory"
	.string "I'm trying to catch some rockin'\n"
	.string "Pokémon for my band, but there are\l"
	.string "mostly just cute Pokémon around here. I\l"
	.string "guess I could make a... 'cute' rock band?$"

PalatiCity_House1_MapScripts::
	.byte 0


PalatiCity_House1_EventScript_PerformerM::
# 5 "data/maps/PalatiCity_House1/scripts.pory"
	lock
# 6 "data/maps/PalatiCity_House1/scripts.pory"
	faceplayer
# 7 "data/maps/PalatiCity_House1/scripts.pory"
	speakername PalatiCity_House1_EventScript_PerformerM_Text_0
# 8 "data/maps/PalatiCity_House1/scripts.pory"
	msgbox PalatiCity_House1_EventScript_PerformerM_Text_1
# 9 "data/maps/PalatiCity_House1/scripts.pory"
	closemessage
# 10 "data/maps/PalatiCity_House1/scripts.pory"
	goto_if_unset FLAG_GOT_STRANGE_SOUVENIR_PALATI_CITY, PalatiCity_House1_EventScript_PerformerM_2
PalatiCity_House1_EventScript_PerformerM_1:
# 26 "data/maps/PalatiCity_House1/scripts.pory"
	release
	end

PalatiCity_House1_EventScript_PerformerM_2:
# 12 "data/maps/PalatiCity_House1/scripts.pory"
	delay 30
# 13 "data/maps/PalatiCity_House1/scripts.pory"
	emote 1, EMOTE_EXCLAM
# 14 "data/maps/PalatiCity_House1/scripts.pory"
	speakername PalatiCity_House1_EventScript_PerformerM_Text_0
# 15 "data/maps/PalatiCity_House1/scripts.pory"
	msgbox PalatiCity_House1_EventScript_PerformerM_Text_2
# 16 "data/maps/PalatiCity_House1/scripts.pory"
	closemessage
# 17 "data/maps/PalatiCity_House1/scripts.pory"
	delay 5
# 18 "data/maps/PalatiCity_House1/scripts.pory"
	giveitem ITEM_STRANGE_SOUVENIR
# 19 "data/maps/PalatiCity_House1/scripts.pory"
	setflag FLAG_GOT_STRANGE_SOUVENIR_PALATI_CITY
# 20 "data/maps/PalatiCity_House1/scripts.pory"
	closemessage
# 21 "data/maps/PalatiCity_House1/scripts.pory"
	delay 5
# 22 "data/maps/PalatiCity_House1/scripts.pory"
	speakername PalatiCity_House1_EventScript_PerformerM_Text_0
# 23 "data/maps/PalatiCity_House1/scripts.pory"
	msgbox PalatiCity_House1_EventScript_PerformerM_Text_3
# 24 "data/maps/PalatiCity_House1/scripts.pory"
	closemessage
	goto PalatiCity_House1_EventScript_PerformerM_1


PalatiCity_House1_EventScript_Crabrawler::
# 32 "data/maps/PalatiCity_House1/scripts.pory"
	lock
# 33 "data/maps/PalatiCity_House1/scripts.pory"
	faceplayer
# 34 "data/maps/PalatiCity_House1/scripts.pory"
	speakername PalatiCity_House1_EventScript_Crabrawler_Text_0
# 35 "data/maps/PalatiCity_House1/scripts.pory"
	playmoncry SPECIES_CRABRAWLER, CRY_MODE_NORMAL
# 36 "data/maps/PalatiCity_House1/scripts.pory"
	msgbox PalatiCity_House1_EventScript_Crabrawler_Text_1
# 37 "data/maps/PalatiCity_House1/scripts.pory"
	waitmoncry
# 38 "data/maps/PalatiCity_House1/scripts.pory"
	closemessage
# 39 "data/maps/PalatiCity_House1/scripts.pory"
	release
	end


PalatiCity_House1_EventScript_PerformerM_Text_0:
# 7 "data/maps/PalatiCity_House1/scripts.pory"
	.string "Performer$"

PalatiCity_House1_EventScript_PerformerM_Text_1:
# 8 "data/maps/PalatiCity_House1/scripts.pory"
	.string "My Crabrawler finds the strangest\n"
	.string "things in the sand. Things from all\l"
	.string "around the world wash up on our\l"
	.string "beaches!$"

PalatiCity_House1_EventScript_PerformerM_Text_2:
# 15 "data/maps/PalatiCity_House1/scripts.pory"
	.string "Oh, do you want to see something?\n"
	.string "Crabrawler found this sticking out of\l"
	.string "the sand the other day.$"

PalatiCity_House1_EventScript_PerformerM_Text_3:
# 23 "data/maps/PalatiCity_House1/scripts.pory"
	.string "I don't exactly know what it is, but it's\n"
	.string "definitely not from around here. Maybe\l"
	.string "it came all the way from the {COLOR GREEN}Alola\l"
	.string "Region{COLOR DARK_GRAY}?$"

PalatiCity_House1_EventScript_Crabrawler_Text_0:
# 34 "data/maps/PalatiCity_House1/scripts.pory"
	.string "Crabrawler$"

PalatiCity_House1_EventScript_Crabrawler_Text_1:
# 36 "data/maps/PalatiCity_House1/scripts.pory"
	.string "Kch kch!$"

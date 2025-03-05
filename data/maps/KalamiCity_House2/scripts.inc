KalamiCity_House2_MapScripts::
	.byte 0


KalamiCity_House2_EventScript_OldMan::
# 5 "data/maps/KalamiCity_House2/scripts.pory"
	lock
# 6 "data/maps/KalamiCity_House2/scripts.pory"
	faceplayer
# 7 "data/maps/KalamiCity_House2/scripts.pory"
	speakername KalamiCity_House2_EventScript_OldMan_Text_0
# 8 "data/maps/KalamiCity_House2/scripts.pory"
	msgbox KalamiCity_House2_EventScript_OldMan_Text_1
# 9 "data/maps/KalamiCity_House2/scripts.pory"
	closemessage
# 10 "data/maps/KalamiCity_House2/scripts.pory"
	release
	end


KalamiCity_House2_EventScript_OldWoman::
# 16 "data/maps/KalamiCity_House2/scripts.pory"
	lock
# 17 "data/maps/KalamiCity_House2/scripts.pory"
	faceplayer
# 18 "data/maps/KalamiCity_House2/scripts.pory"
	speakername KalamiCity_House2_EventScript_OldWoman_Text_0
# 19 "data/maps/KalamiCity_House2/scripts.pory"
	msgbox KalamiCity_House2_EventScript_OldWoman_Text_1
# 20 "data/maps/KalamiCity_House2/scripts.pory"
	closemessage
# 21 "data/maps/KalamiCity_House2/scripts.pory"
	release
	end


KalamiCity_House2_EventScript_Kabuto::
# 27 "data/maps/KalamiCity_House2/scripts.pory"
	lock
# 28 "data/maps/KalamiCity_House2/scripts.pory"
	faceplayer
# 29 "data/maps/KalamiCity_House2/scripts.pory"
	speakername KalamiCity_House2_EventScript_Kabuto_Text_0
# 30 "data/maps/KalamiCity_House2/scripts.pory"
	playmoncry SPECIES_KABUTO, CRY_MODE_NORMAL
# 31 "data/maps/KalamiCity_House2/scripts.pory"
	msgbox KalamiCity_House2_EventScript_Kabuto_Text_1
# 32 "data/maps/KalamiCity_House2/scripts.pory"
	waitmoncry
# 33 "data/maps/KalamiCity_House2/scripts.pory"
	closemessage
# 34 "data/maps/KalamiCity_House2/scripts.pory"
	release
	end


KalamiCity_House2_EventScript_OldMan_Text_0:
# 7 "data/maps/KalamiCity_House2/scripts.pory"
	.string "Old Man$"

KalamiCity_House2_EventScript_OldMan_Text_1:
# 8 "data/maps/KalamiCity_House2/scripts.pory"
	.string "We came here when we retired to be\n"
	.string "closer to nature. Walking through the\l"
	.string "shallow water keeps us active!$"

KalamiCity_House2_EventScript_OldWoman_Text_0:
# 18 "data/maps/KalamiCity_House2/scripts.pory"
	.string "Old Woman$"

KalamiCity_House2_EventScript_OldWoman_Text_1:
# 19 "data/maps/KalamiCity_House2/scripts.pory"
	.string "There are new rumors about\n"
	.string "rediscovered Pokémon species all the\l"
	.string "time in the Ilios Region. Our little\l"
	.string "Kabuto is one of them!$"

KalamiCity_House2_EventScript_Kabuto_Text_0:
# 29 "data/maps/KalamiCity_House2/scripts.pory"
	.string "Kabuto$"

KalamiCity_House2_EventScript_Kabuto_Text_1:
# 31 "data/maps/KalamiCity_House2/scripts.pory"
	.string "Shree!$"

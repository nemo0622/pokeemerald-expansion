KiposTown_House2_MapScripts::
	.byte 0


KiposTown_House2_EventScript_Man::
# 5 "data/maps/KiposTown_House2/scripts.pory"
	lock
# 6 "data/maps/KiposTown_House2/scripts.pory"
	faceplayer
# 7 "data/maps/KiposTown_House2/scripts.pory"
	speakername KiposTown_House2_EventScript_Man_Text_0
# 8 "data/maps/KiposTown_House2/scripts.pory"
	msgbox KiposTown_House2_EventScript_Man_Text_1
# 9 "data/maps/KiposTown_House2/scripts.pory"
	closemessage
# 10 "data/maps/KiposTown_House2/scripts.pory"
	delay 30
# 11 "data/maps/KiposTown_House2/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 12 "data/maps/KiposTown_House2/scripts.pory"
	waitmovement 0
# 13 "data/maps/KiposTown_House2/scripts.pory"
	delay 10
# 14 "data/maps/KiposTown_House2/scripts.pory"
	speakername KiposTown_House2_EventScript_Man_Text_0
# 15 "data/maps/KiposTown_House2/scripts.pory"
	msgbox KiposTown_House2_EventScript_Man_Text_2
# 16 "data/maps/KiposTown_House2/scripts.pory"
	closemessage
# 17 "data/maps/KiposTown_House2/scripts.pory"
	release
	end


KiposTown_House2_EventScript_Scientist::
# 23 "data/maps/KiposTown_House2/scripts.pory"
	lock
# 24 "data/maps/KiposTown_House2/scripts.pory"
	faceplayer
# 25 "data/maps/KiposTown_House2/scripts.pory"
	speakername KiposTown_House2_EventScript_Scientist_Text_0
# 26 "data/maps/KiposTown_House2/scripts.pory"
	msgbox KiposTown_House2_EventScript_Scientist_Text_1
# 27 "data/maps/KiposTown_House2/scripts.pory"
	closemessage
# 28 "data/maps/KiposTown_House2/scripts.pory"
	release
	end


KiposTown_House2_EventScript_Man_Text_0:
# 7 "data/maps/KiposTown_House2/scripts.pory"
	.string "Man$"

KiposTown_House2_EventScript_Man_Text_1:
# 8 "data/maps/KiposTown_House2/scripts.pory"
	.string "My husband volunteers at the Sunset\n"
	.string "Wildlife Conservation Center. He was\l"
	.string "attached to a lot of the Pokémon, so\l"
	.string "Team Chimera's attack hit us extra\l"
	.string "hard...$"

KiposTown_House2_EventScript_Man_Text_2:
# 15 "data/maps/KiposTown_House2/scripts.pory"
	.string "But hey, it's not all doom-and-gloom! I\n"
	.string "hear someone's been working with the\l"
	.string "Conservation Center to fill the Zoo\l"
	.string "again!$"

KiposTown_House2_EventScript_Scientist_Text_0:
# 25 "data/maps/KiposTown_House2/scripts.pory"
	.string "Scientist$"

KiposTown_House2_EventScript_Scientist_Text_1:
# 26 "data/maps/KiposTown_House2/scripts.pory"
	.string "After Team Chimera stole almost all the\n"
	.string "Pokémon from the Conservation Center,\l"
	.string "there was chaos for a few days. It took\l"
	.string "Mr. Russel a long time to get any\l"
	.string "officers to investigate, and by the\l"
	.string "time they tried, Team Chimera was long\l"
	.string "gone.$"

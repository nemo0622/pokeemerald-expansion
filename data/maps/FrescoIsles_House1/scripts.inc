FrescoIsles_House1_MapScripts::
	.byte 0


FrescoIsles_House1_EventScript_RunningTriathlete::
# 5 "data/maps/FrescoIsles_House1/scripts.pory"
	lock
# 6 "data/maps/FrescoIsles_House1/scripts.pory"
	faceplayer
# 7 "data/maps/FrescoIsles_House1/scripts.pory"
	speakername FrescoIsles_House1_EventScript_RunningTriathlete_Text_0
# 8 "data/maps/FrescoIsles_House1/scripts.pory"
	msgbox FrescoIsles_House1_EventScript_RunningTriathlete_Text_1
# 9 "data/maps/FrescoIsles_House1/scripts.pory"
	closemessage
# 10 "data/maps/FrescoIsles_House1/scripts.pory"
	release
	end


FrescoIsles_House1_EventScript_Sandslash::
# 16 "data/maps/FrescoIsles_House1/scripts.pory"
	lock
# 17 "data/maps/FrescoIsles_House1/scripts.pory"
	faceplayer
# 18 "data/maps/FrescoIsles_House1/scripts.pory"
	speakername FrescoIsles_House1_EventScript_Sandslash_Text_0
# 19 "data/maps/FrescoIsles_House1/scripts.pory"
	playmoncry SPECIES_SANDSLASH_ALOLAN, CRY_MODE_NORMAL
# 20 "data/maps/FrescoIsles_House1/scripts.pory"
	msgbox FrescoIsles_House1_EventScript_Sandslash_Text_1
# 21 "data/maps/FrescoIsles_House1/scripts.pory"
	waitmoncry
# 22 "data/maps/FrescoIsles_House1/scripts.pory"
	closemessage
# 23 "data/maps/FrescoIsles_House1/scripts.pory"
	release
	end


FrescoIsles_House1_EventScript_RunningTriathlete_Text_0:
# 7 "data/maps/FrescoIsles_House1/scripts.pory"
	.string "Triathlete$"

FrescoIsles_House1_EventScript_RunningTriathlete_Text_1:
# 8 "data/maps/FrescoIsles_House1/scripts.pory"
	.string "It gets sweltering hot here. My\n"
	.string "Alolan-breed Sandslash helps keep the\l"
	.string "house cool.$"

FrescoIsles_House1_EventScript_Sandslash_Text_0:
# 18 "data/maps/FrescoIsles_House1/scripts.pory"
	.string "Sandslash$"

FrescoIsles_House1_EventScript_Sandslash_Text_1:
# 20 "data/maps/FrescoIsles_House1/scripts.pory"
	.string "Creeh!$"

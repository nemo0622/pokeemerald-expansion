PalatiCity_House6_MapScripts::
	.byte 0


PalatiCity_House6_EventScript_ConstructionWorker::
# 5 "data/maps/PalatiCity_House6/scripts.pory"
	lock
# 6 "data/maps/PalatiCity_House6/scripts.pory"
	faceplayer
# 7 "data/maps/PalatiCity_House6/scripts.pory"
	speakername PalatiCity_House6_EventScript_ConstructionWorker_Text_0
# 8 "data/maps/PalatiCity_House6/scripts.pory"
	msgbox PalatiCity_House6_EventScript_ConstructionWorker_Text_1
# 9 "data/maps/PalatiCity_House6/scripts.pory"
	closemessage
# 10 "data/maps/PalatiCity_House6/scripts.pory"
	release
	end


PalatiCity_House6_EventScript_Woman::
# 16 "data/maps/PalatiCity_House6/scripts.pory"
	lock
# 17 "data/maps/PalatiCity_House6/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 18 "data/maps/PalatiCity_House6/scripts.pory"
	waitmovement 0
# 19 "data/maps/PalatiCity_House6/scripts.pory"
	speakername PalatiCity_House6_EventScript_Woman_Text_0
# 20 "data/maps/PalatiCity_House6/scripts.pory"
	msgbox PalatiCity_House6_EventScript_Woman_Text_1
# 21 "data/maps/PalatiCity_House6/scripts.pory"
	closemessage
# 22 "data/maps/PalatiCity_House6/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 23 "data/maps/PalatiCity_House6/scripts.pory"
	waitmovement 0
# 24 "data/maps/PalatiCity_House6/scripts.pory"
	release
	end


PalatiCity_House6_EventScript_Bewear::
# 30 "data/maps/PalatiCity_House6/scripts.pory"
	lock
# 31 "data/maps/PalatiCity_House6/scripts.pory"
	faceplayer
# 32 "data/maps/PalatiCity_House6/scripts.pory"
	speakername PalatiCity_House6_EventScript_Bewear_Text_0
# 33 "data/maps/PalatiCity_House6/scripts.pory"
	playmoncry SPECIES_BEWEAR, CRY_MODE_NORMAL
# 34 "data/maps/PalatiCity_House6/scripts.pory"
	msgbox PalatiCity_House6_EventScript_Bewear_Text_1
# 35 "data/maps/PalatiCity_House6/scripts.pory"
	waitmoncry
# 36 "data/maps/PalatiCity_House6/scripts.pory"
	closemessage
# 37 "data/maps/PalatiCity_House6/scripts.pory"
	delay 5
# 38 "data/maps/PalatiCity_House6/scripts.pory"
	msgbox PalatiCity_House6_EventScript_Bewear_Text_2
# 39 "data/maps/PalatiCity_House6/scripts.pory"
	closemessage
# 40 "data/maps/PalatiCity_House6/scripts.pory"
	applymovement 3, Common_Movement_FaceOriginalDirection
# 41 "data/maps/PalatiCity_House6/scripts.pory"
	waitmovement 0
# 42 "data/maps/PalatiCity_House6/scripts.pory"
	release
	end


PalatiCity_House6_EventScript_ConstructionWorker_Text_0:
# 7 "data/maps/PalatiCity_House6/scripts.pory"
	.string "Worker$"

PalatiCity_House6_EventScript_ConstructionWorker_Text_1:
# 8 "data/maps/PalatiCity_House6/scripts.pory"
	.string "I keep coming back here to do\n"
	.string "maintenance on this piano. Maybe if she\l"
	.string "didn't let her Pokémon play, the piano\l"
	.string "would stop getting damaged...$"

PalatiCity_House6_EventScript_Woman_Text_0:
# 19 "data/maps/PalatiCity_House6/scripts.pory"
	.string "Woman$"

PalatiCity_House6_EventScript_Woman_Text_1:
# 20 "data/maps/PalatiCity_House6/scripts.pory"
	.string "Ehehe, come on, Bewear! Let's hear your\n"
	.string "music!$"

PalatiCity_House6_EventScript_Bewear_Text_0:
# 32 "data/maps/PalatiCity_House6/scripts.pory"
	.string "Bewear$"

PalatiCity_House6_EventScript_Bewear_Text_1:
# 34 "data/maps/PalatiCity_House6/scripts.pory"
	.string "Braaur!$"

PalatiCity_House6_EventScript_Bewear_Text_2:
# 38 "data/maps/PalatiCity_House6/scripts.pory"
	.string "It definitely can't play the piano, but\n"
	.string "it looks like it's having fun!$"

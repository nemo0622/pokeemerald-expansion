AcrisiaCity_House3_MapScripts::
	.byte 0


AcrisiaCity_House3_EventScripts_Man::
# 5 "data/maps/AcrisiaCity_House3/scripts.pory"
	lock
# 6 "data/maps/AcrisiaCity_House3/scripts.pory"
	faceplayer
# 7 "data/maps/AcrisiaCity_House3/scripts.pory"
	speakername AcrisiaCity_House3_EventScripts_Man_Text_0
# 8 "data/maps/AcrisiaCity_House3/scripts.pory"
	msgbox AcrisiaCity_House3_EventScripts_Man_Text_1
# 9 "data/maps/AcrisiaCity_House3/scripts.pory"
	closemessage
# 10 "data/maps/AcrisiaCity_House3/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 11 "data/maps/AcrisiaCity_House3/scripts.pory"
	waitmovement 0
# 12 "data/maps/AcrisiaCity_House3/scripts.pory"
	release
	end


AcrisiaCity_House3_EventScript_Grimer::
# 18 "data/maps/AcrisiaCity_House3/scripts.pory"
	lock
# 19 "data/maps/AcrisiaCity_House3/scripts.pory"
	faceplayer
# 20 "data/maps/AcrisiaCity_House3/scripts.pory"
	speakername AcrisiaCity_House3_EventScript_Grimer_Text_0
# 21 "data/maps/AcrisiaCity_House3/scripts.pory"
	playmoncry SPECIES_GRIMER, CRY_MODE_NORMAL
# 22 "data/maps/AcrisiaCity_House3/scripts.pory"
	msgbox AcrisiaCity_House3_EventScript_Grimer_Text_1
# 23 "data/maps/AcrisiaCity_House3/scripts.pory"
	waitmoncry
# 24 "data/maps/AcrisiaCity_House3/scripts.pory"
	closemessage
# 25 "data/maps/AcrisiaCity_House3/scripts.pory"
	release
	end


AcrisiaCity_House3_EventScripts_Man_Text_0:
# 7 "data/maps/AcrisiaCity_House3/scripts.pory"
	.string "Hungry Man$"

AcrisiaCity_House3_EventScripts_Man_Text_1:
# 8 "data/maps/AcrisiaCity_House3/scripts.pory"
	.string "Hmm, what to eat... I should get a\n"
	.string "Pokémon like Tropius. You know, they\l"
	.string "grow fruit for Trainers they like!\p"
	.string "No offense to my Grimer! But I'm not\n"
	.string "about to go snacking on that slime trail\l"
	.string "it leaves behind...$"

AcrisiaCity_House3_EventScript_Grimer_Text_0:
# 20 "data/maps/AcrisiaCity_House3/scripts.pory"
	.string "Grimer$"

AcrisiaCity_House3_EventScript_Grimer_Text_1:
# 22 "data/maps/AcrisiaCity_House3/scripts.pory"
	.string "Gurgle?$"

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


AcrisiaCity_House3_EventScripts_Man_Text_0:
# 7 "data/maps/AcrisiaCity_House3/scripts.pory"
	.string "Complaining Man$"

AcrisiaCity_House3_EventScripts_Man_Text_1:
# 8 "data/maps/AcrisiaCity_House3/scripts.pory"
	.string "Dishes, dishes... I should get a Pokémon\n"
	.string "that can clean these for me.$"

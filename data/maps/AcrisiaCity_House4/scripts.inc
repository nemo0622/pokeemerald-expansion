AcrisiaCity_House4_MapScripts::
	.byte 0


AcrisiaCity_House4_EventScript_Hiker::
# 5 "data/maps/AcrisiaCity_House4/scripts.pory"
	lock
# 6 "data/maps/AcrisiaCity_House4/scripts.pory"
	faceplayer
# 7 "data/maps/AcrisiaCity_House4/scripts.pory"
	speakername AcrisiaCity_House4_EventScript_Hiker_Text_0
# 8 "data/maps/AcrisiaCity_House4/scripts.pory"
	msgbox AcrisiaCity_House4_EventScript_Hiker_Text_1
# 9 "data/maps/AcrisiaCity_House4/scripts.pory"
	closemessage
# 10 "data/maps/AcrisiaCity_House4/scripts.pory"
	release
	end


AcrisiaCity_House4_EventScript_Girl::
# 16 "data/maps/AcrisiaCity_House4/scripts.pory"
	lock
# 17 "data/maps/AcrisiaCity_House4/scripts.pory"
	faceplayer
# 18 "data/maps/AcrisiaCity_House4/scripts.pory"
	speakername AcrisiaCity_House4_EventScript_Girl_Text_0
# 19 "data/maps/AcrisiaCity_House4/scripts.pory"
	msgbox AcrisiaCity_House4_EventScript_Girl_Text_1
# 20 "data/maps/AcrisiaCity_House4/scripts.pory"
	closemessage
# 21 "data/maps/AcrisiaCity_House4/scripts.pory"
	release
	end


AcrisiaCity_House4_EventScript_Hiker_Text_0:
# 7 "data/maps/AcrisiaCity_House4/scripts.pory"
	.string "Father$"

AcrisiaCity_House4_EventScript_Hiker_Text_1:
# 8 "data/maps/AcrisiaCity_House4/scripts.pory"
	.string "All kids want to do is sit and watch TV!\n"
	.string "Where's your sense of exploration?$"

AcrisiaCity_House4_EventScript_Girl_Text_0:
# 18 "data/maps/AcrisiaCity_House4/scripts.pory"
	.string "Daughter$"

AcrisiaCity_House4_EventScript_Girl_Text_1:
# 19 "data/maps/AcrisiaCity_House4/scripts.pory"
	.string "My Dad won't give me a phone, so I'm just\n"
	.string "stuck watching TV all day.$"

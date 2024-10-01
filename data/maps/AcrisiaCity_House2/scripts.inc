AcrisiaCity_House2_MapScripts::
	.byte 0


AcrisiaCity_House2_EventScript_Lady::
# 5 "data/maps/AcrisiaCity_House2/scripts.pory"
	lock
# 6 "data/maps/AcrisiaCity_House2/scripts.pory"
	faceplayer
# 7 "data/maps/AcrisiaCity_House2/scripts.pory"
	speakername AcrisiaCity_House2_EventScript_Lady_Text_0
# 8 "data/maps/AcrisiaCity_House2/scripts.pory"
	msgbox AcrisiaCity_House2_EventScript_Lady_Text_1
# 9 "data/maps/AcrisiaCity_House2/scripts.pory"
	closemessage
# 10 "data/maps/AcrisiaCity_House2/scripts.pory"
	release
	end


AcrisiaCity_House2_EventScript_Lady_Text_0:
# 7 "data/maps/AcrisiaCity_House2/scripts.pory"
	.string "Lady$"

AcrisiaCity_House2_EventScript_Lady_Text_1:
# 8 "data/maps/AcrisiaCity_House2/scripts.pory"
	.string "Yia sou, hello, darling! The Agrias\n"
	.string "University keeps things busy in town.$"

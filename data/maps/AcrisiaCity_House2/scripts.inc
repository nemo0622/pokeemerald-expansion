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
# 11 "data/maps/AcrisiaCity_House2/scripts.pory"
	goto_if_unset FLAG_GOT_ARISIA_LUCKY_EGG, AcrisiaCity_House2_EventScript_Lady_2
AcrisiaCity_House2_EventScript_Lady_1:
# 20 "data/maps/AcrisiaCity_House2/scripts.pory"
	release
	end

AcrisiaCity_House2_EventScript_Lady_2:
# 13 "data/maps/AcrisiaCity_House2/scripts.pory"
	speakername AcrisiaCity_House2_EventScript_Lady_Text_0
# 14 "data/maps/AcrisiaCity_House2/scripts.pory"
	msgbox AcrisiaCity_House2_EventScript_Lady_Text_2
# 15 "data/maps/AcrisiaCity_House2/scripts.pory"
	closemessage
# 16 "data/maps/AcrisiaCity_House2/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 17 "data/maps/AcrisiaCity_House2/scripts.pory"
	setflag FLAG_GOT_ARISIA_LUCKY_EGG
	goto AcrisiaCity_House2_EventScript_Lady_1


AcrisiaCity_House2_EventScript_Lady_Text_0:
# 7 "data/maps/AcrisiaCity_House2/scripts.pory"
	.string "Lady$"

AcrisiaCity_House2_EventScript_Lady_Text_1:
# 8 "data/maps/AcrisiaCity_House2/scripts.pory"
	.string "Yia sou, hello, darling! The Agrias\n"
	.string "University keeps things busy in town.$"

AcrisiaCity_House2_EventScript_Lady_Text_2:
# 14 "data/maps/AcrisiaCity_House2/scripts.pory"
	.string "You're a new face! Thank the gods for\n"
	.string "that University bringing people in.\l"
	.string "Here, I'll give you something to help you\l"
	.string "out.$"

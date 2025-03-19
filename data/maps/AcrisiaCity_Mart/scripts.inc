AcrisiaCity_Mart_MapScripts::
	.byte 0


AcrisiaCity_Mart_EventScript_MartEmployee::
# 5 "data/maps/AcrisiaCity_Mart/scripts.pory"
	lock
# 6 "data/maps/AcrisiaCity_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/AcrisiaCity_Mart/scripts.pory"
	speakername AcrisiaCity_Mart_EventScript_MartEmployee_Text_0
# 8 "data/maps/AcrisiaCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/AcrisiaCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/AcrisiaCity_Mart/scripts.pory"
	pokemart AcrisiaCity_Mart_Shop
# 11 "data/maps/AcrisiaCity_Mart/scripts.pory"
	closemessage
# 12 "data/maps/AcrisiaCity_Mart/scripts.pory"
	delay 1
# 13 "data/maps/AcrisiaCity_Mart/scripts.pory"
	speakername AcrisiaCity_Mart_EventScript_MartEmployee_Text_0
# 14 "data/maps/AcrisiaCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 15 "data/maps/AcrisiaCity_Mart/scripts.pory"
	release
	end


	.align 2
# 19 "data/maps/AcrisiaCity_Mart/scripts.pory"
AcrisiaCity_Mart_Shop:
# 21 "data/maps/AcrisiaCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 22 "data/maps/AcrisiaCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 23 "data/maps/AcrisiaCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

AcrisiaCity_Mart_NPC_Beauty::
# 28 "data/maps/AcrisiaCity_Mart/scripts.pory"
	lock
# 29 "data/maps/AcrisiaCity_Mart/scripts.pory"
	faceplayer
# 30 "data/maps/AcrisiaCity_Mart/scripts.pory"
	speakername AcrisiaCity_Mart_NPC_Beauty_Text_0
# 31 "data/maps/AcrisiaCity_Mart/scripts.pory"
	msgbox AcrisiaCity_Mart_NPC_Beauty_Text_1
# 32 "data/maps/AcrisiaCity_Mart/scripts.pory"
	closemessage
# 33 "data/maps/AcrisiaCity_Mart/scripts.pory"
	release
	end


AcrisiaCity_Mart_NPC_GameboyKid::
# 39 "data/maps/AcrisiaCity_Mart/scripts.pory"
	lock
# 40 "data/maps/AcrisiaCity_Mart/scripts.pory"
	faceplayer
# 41 "data/maps/AcrisiaCity_Mart/scripts.pory"
	speakername AcrisiaCity_Mart_NPC_GameboyKid_Text_0
# 42 "data/maps/AcrisiaCity_Mart/scripts.pory"
	msgbox AcrisiaCity_Mart_NPC_GameboyKid_Text_1
# 43 "data/maps/AcrisiaCity_Mart/scripts.pory"
	closemessage
# 44 "data/maps/AcrisiaCity_Mart/scripts.pory"
	release
	end


AcrisiaCity_Mart_EventScript_MartEmployee_Text_0:
# 7 "data/maps/AcrisiaCity_Mart/scripts.pory"
	.string "Mart Employee$"

AcrisiaCity_Mart_NPC_Beauty_Text_0:
# 30 "data/maps/AcrisiaCity_Mart/scripts.pory"
	.string "Beauty$"

AcrisiaCity_Mart_NPC_Beauty_Text_1:
# 31 "data/maps/AcrisiaCity_Mart/scripts.pory"
	.string "I'm all for respecting service workers,\n"
	.string "but... this shop hardly has anything for\l"
	.string "sale!\p"
	.string "I guess that's the downside to being in\n"
	.string "such a remote area.$"

AcrisiaCity_Mart_NPC_GameboyKid_Text_0:
# 41 "data/maps/AcrisiaCity_Mart/scripts.pory"
	.string "Kid$"

AcrisiaCity_Mart_NPC_GameboyKid_Text_1:
# 42 "data/maps/AcrisiaCity_Mart/scripts.pory"
	.string "I'm just here to play my game. How about\n"
	.string "you?$"

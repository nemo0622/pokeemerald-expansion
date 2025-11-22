AcrisiaCity_House5_MapScripts::
	.byte 0


AcrisiaCity_House5_EventScript_Boy::
# 5 "data/maps/AcrisiaCity_House5/scripts.pory"
	lock
# 6 "data/maps/AcrisiaCity_House5/scripts.pory"
	faceplayer
# 7 "data/maps/AcrisiaCity_House5/scripts.pory"
	speakername AcrisiaCity_House5_EventScript_Boy_Text_0
# 8 "data/maps/AcrisiaCity_House5/scripts.pory"
	msgbox AcrisiaCity_House5_EventScript_Boy_Text_1
# 9 "data/maps/AcrisiaCity_House5/scripts.pory"
	closemessage
# 10 "data/maps/AcrisiaCity_House5/scripts.pory"
	release
	end


AcrisiaCity_House5_EventScript_PunkRocker::
# 16 "data/maps/AcrisiaCity_House5/scripts.pory"
	lock
# 17 "data/maps/AcrisiaCity_House5/scripts.pory"
	faceplayer
# 18 "data/maps/AcrisiaCity_House5/scripts.pory"
	speakername AcrisiaCity_House5_EventScript_PunkRocker_Text_0
# 21 "data/maps/AcrisiaCity_House5/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_CATCH_BLITZLE
# 22 "data/maps/AcrisiaCity_House5/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AcrisiaCity_House5_EventScript_PunkRocker_2
# 31 "data/maps/AcrisiaCity_House5/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_CATCH_BLITZLE
# 32 "data/maps/AcrisiaCity_House5/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_House5_EventScript_PunkRocker_5
# 42 "data/maps/AcrisiaCity_House5/scripts.pory"
	msgbox AcrisiaCity_House5_EventScript_PunkRocker_Text_3
# 43 "data/maps/AcrisiaCity_House5/scripts.pory"
	closemessage
# 44 "data/maps/AcrisiaCity_House5/scripts.pory"
	checkforspecies SPECIES_BLITZLE, OPEN_PARTY_SCREEN, AcrisiaCity_House5_EventScript_PunkRocker_ReactToBlitzle
# 46 "data/maps/AcrisiaCity_House5/scripts.pory"
	lock
# 47 "data/maps/AcrisiaCity_House5/scripts.pory"
	speakername AcrisiaCity_House5_EventScript_PunkRocker_Text_0
# 48 "data/maps/AcrisiaCity_House5/scripts.pory"
	msgbox AcrisiaCity_House5_EventScript_PunkRocker_Text_4
# 49 "data/maps/AcrisiaCity_House5/scripts.pory"
	closemessage
AcrisiaCity_House5_EventScript_PunkRocker_4:
# 51 "data/maps/AcrisiaCity_House5/scripts.pory"
	release
	end

AcrisiaCity_House5_EventScript_PunkRocker_2:
# 24 "data/maps/AcrisiaCity_House5/scripts.pory"
	msgbox AcrisiaCity_House5_EventScript_PunkRocker_Text_1
# 25 "data/maps/AcrisiaCity_House5/scripts.pory"
	closemessage
# 26 "data/maps/AcrisiaCity_House5/scripts.pory"
	release
	end

AcrisiaCity_House5_EventScript_PunkRocker_5:
# 34 "data/maps/AcrisiaCity_House5/scripts.pory"
	msgbox AcrisiaCity_House5_EventScript_PunkRocker_Text_2
# 35 "data/maps/AcrisiaCity_House5/scripts.pory"
	closemessage
# 37 "data/maps/AcrisiaCity_House5/scripts.pory"
	delay 20
# 38 "data/maps/AcrisiaCity_House5/scripts.pory"
	startquest QUEST_CATCH_BLITZLE
	goto AcrisiaCity_House5_EventScript_PunkRocker_4


AcrisiaCity_House5_EventScript_PunkRocker_ReactToBlitzle::
# 57 "data/maps/AcrisiaCity_House5/scripts.pory"
	delay 20
# 58 "data/maps/AcrisiaCity_House5/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 59 "data/maps/AcrisiaCity_House5/scripts.pory"
	waitmovement 0
# 60 "data/maps/AcrisiaCity_House5/scripts.pory"
	speakername AcrisiaCity_House5_EventScript_PunkRocker_Text_0
# 61 "data/maps/AcrisiaCity_House5/scripts.pory"
	msgbox AcrisiaCity_House5_EventScript_PunkRocker_ReactToBlitzle_Text_0
# 62 "data/maps/AcrisiaCity_House5/scripts.pory"
	closemessage
# 63 "data/maps/AcrisiaCity_House5/scripts.pory"
	delay 5
# 64 "data/maps/AcrisiaCity_House5/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 66 "data/maps/AcrisiaCity_House5/scripts.pory"
	delay 20
# 67 "data/maps/AcrisiaCity_House5/scripts.pory"
	completequest QUEST_CATCH_BLITZLE
	return


AcrisiaCity_House5_EventScript_Boy_Text_0:
# 7 "data/maps/AcrisiaCity_House5/scripts.pory"
	.string "Boy$"

AcrisiaCity_House5_EventScript_Boy_Text_1:
# 8 "data/maps/AcrisiaCity_House5/scripts.pory"
	.string "You can learn a lot from books! Look, it\n"
	.string "says here that some Pokémon in the\l"
	.string "Ilios Region have stats different from\l"
	.string "other areas. Neat!$"

AcrisiaCity_House5_EventScript_PunkRocker_Text_0:
# 18 "data/maps/AcrisiaCity_House5/scripts.pory"
	.string "Punk Rocker$"

AcrisiaCity_House5_EventScript_PunkRocker_Text_1:
# 24 "data/maps/AcrisiaCity_House5/scripts.pory"
	.string "That Blitzle was really rockin'! I think\n"
	.string "I'll go catch one for myself!$"

AcrisiaCity_House5_EventScript_PunkRocker_Text_2:
# 34 "data/maps/AcrisiaCity_House5/scripts.pory"
	.string "Everyone around here is so obsessed\n"
	.string "with Pokémon, but I'm more into my\l"
	.string "electric guitar. I just don't see the\l"
	.string "appeal of being a Trainer.\p"
	.string "Maybe I haven't met the right Pokémon\n"
	.string "yet. My brother's talked about {COLOR GREEN}Blitzle{COLOR DARK_GRAY},\l"
	.string "an Electric-type Pokémon with awesome\l"
	.string "stripes... Maybe if I {COLOR GREEN}see a Blitzle\l"
	.string "in-person{COLOR DARK_GRAY}, I'll understand what all the\l"
	.string "talk is about!$"

AcrisiaCity_House5_EventScript_PunkRocker_Text_3:
# 42 "data/maps/AcrisiaCity_House5/scripts.pory"
	.string "Chaire! By any chance, do you have a\n"
	.string "{COLOR GREEN}Blitzle{COLOR DARK_GRAY} in your party that you could\l"
	.string "show me?$"

AcrisiaCity_House5_EventScript_PunkRocker_Text_4:
# 48 "data/maps/AcrisiaCity_House5/scripts.pory"
	.string "No Blitzle to show, huh? I still don't\n"
	.string "get why people put so much effort into\l"
	.string "Pokémon training.\p"
	.string "Come show me a {COLOR GREEN}Blitzle to see in-person{COLOR DARK_GRAY}.\n"
	.string "I think that might change my mind.$"

AcrisiaCity_House5_EventScript_PunkRocker_ReactToBlitzle_Text_0:
# 61 "data/maps/AcrisiaCity_House5/scripts.pory"
	.string "Woah, a real Blitzle! It's so much cooler\n"
	.string "than I thought!\p"
	.string "I think I understand why people train\n"
	.string "Pokémon now. They're true partners, and\l"
	.string "it must be rewarding to see them grow\l"
	.string "for yourself.\p"
	.string "Speaking of rewards, I want you to have\n"
	.string "this!$"

SofosCity_House4_MapScripts::
	.byte 0


SofosCity_House4_EventScript_Pawmo::
# 5 "data/maps/SofosCity_House4/scripts.pory"
	lock
# 6 "data/maps/SofosCity_House4/scripts.pory"
	faceplayer
# 7 "data/maps/SofosCity_House4/scripts.pory"
	speakername SofosCity_House4_EventScript_Pawmo_Text_0
# 8 "data/maps/SofosCity_House4/scripts.pory"
	playmoncry SPECIES_PAWMO, CRY_MODE_NORMAL
# 9 "data/maps/SofosCity_House4/scripts.pory"
	msgbox SofosCity_House4_EventScript_Pawmo_Text_1
# 10 "data/maps/SofosCity_House4/scripts.pory"
	waitmoncry
# 11 "data/maps/SofosCity_House4/scripts.pory"
	closemessage
# 12 "data/maps/SofosCity_House4/scripts.pory"
	release
	end


SofosCity_House4_EventScript_ComputerGuy::
# 18 "data/maps/SofosCity_House4/scripts.pory"
	lock
# 19 "data/maps/SofosCity_House4/scripts.pory"
	faceplayer
# 20 "data/maps/SofosCity_House4/scripts.pory"
	speakername SofosCity_House4_EventScript_ComputerGuy_Text_0
# 23 "data/maps/SofosCity_House4/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_5_PINBALL_POINTS
# 24 "data/maps/SofosCity_House4/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SofosCity_House4_EventScript_ComputerGuy_2
# 35 "data/maps/SofosCity_House4/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_5_PINBALL_POINTS
# 36 "data/maps/SofosCity_House4/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_House4_EventScript_ComputerGuy_5
# 48 "data/maps/SofosCity_House4/scripts.pory"
	msgbox SofosCity_House4_EventScript_ComputerGuy_Text_3
# 49 "data/maps/SofosCity_House4/scripts.pory"
	closemessage
# 51 "data/maps/SofosCity_House4/scripts.pory"
	delay 30
# 52 "data/maps/SofosCity_House4/scripts.pory"
	compare VAR_PINBALL_POINTS, 5
	goto_if_lt SofosCity_House4_EventScript_ComputerGuy_8
# 59 "data/maps/SofosCity_House4/scripts.pory"
	emote 1, EMOTE_EXCLAM
# 60 "data/maps/SofosCity_House4/scripts.pory"
	msgbox SofosCity_House4_EventScript_ComputerGuy_Text_5
# 61 "data/maps/SofosCity_House4/scripts.pory"
	closemessage
# 62 "data/maps/SofosCity_House4/scripts.pory"
	delay 5
# 63 "data/maps/SofosCity_House4/scripts.pory"
	msgbox SofosCity_House4_EventScript_ComputerGuy_Text_6
# 64 "data/maps/SofosCity_House4/scripts.pory"
	closemessage
# 65 "data/maps/SofosCity_House4/scripts.pory"
	subvar VAR_PINBALL_POINTS, 5
# 66 "data/maps/SofosCity_House4/scripts.pory"
	delay 5
# 67 "data/maps/SofosCity_House4/scripts.pory"
	giveitem ITEM_COVERT_CLOAK
# 68 "data/maps/SofosCity_House4/scripts.pory"
	closemessage
# 69 "data/maps/SofosCity_House4/scripts.pory"
	delay 5
# 70 "data/maps/SofosCity_House4/scripts.pory"
	speakername SofosCity_House4_EventScript_ComputerGuy_Text_0
# 71 "data/maps/SofosCity_House4/scripts.pory"
	msgbox SofosCity_House4_EventScript_ComputerGuy_Text_7
# 72 "data/maps/SofosCity_House4/scripts.pory"
	closemessage
# 74 "data/maps/SofosCity_House4/scripts.pory"
	delay 20
# 75 "data/maps/SofosCity_House4/scripts.pory"
	completequest QUEST_5_PINBALL_POINTS
SofosCity_House4_EventScript_ComputerGuy_4:
# 78 "data/maps/SofosCity_House4/scripts.pory"
	release
	end

SofosCity_House4_EventScript_ComputerGuy_2:
# 26 "data/maps/SofosCity_House4/scripts.pory"
	msgbox SofosCity_House4_EventScript_ComputerGuy_Text_1
# 27 "data/maps/SofosCity_House4/scripts.pory"
	closemessage
# 28 "data/maps/SofosCity_House4/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 29 "data/maps/SofosCity_House4/scripts.pory"
	waitmovement 0
# 30 "data/maps/SofosCity_House4/scripts.pory"
	release
	end

SofosCity_House4_EventScript_ComputerGuy_5:
# 38 "data/maps/SofosCity_House4/scripts.pory"
	msgbox SofosCity_House4_EventScript_ComputerGuy_Text_2
# 39 "data/maps/SofosCity_House4/scripts.pory"
	closemessage
# 40 "data/maps/SofosCity_House4/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 41 "data/maps/SofosCity_House4/scripts.pory"
	waitmovement 0
# 43 "data/maps/SofosCity_House4/scripts.pory"
	delay 20
# 44 "data/maps/SofosCity_House4/scripts.pory"
	startquest QUEST_5_PINBALL_POINTS
	goto SofosCity_House4_EventScript_ComputerGuy_4

SofosCity_House4_EventScript_ComputerGuy_8:
# 54 "data/maps/SofosCity_House4/scripts.pory"
	msgbox SofosCity_House4_EventScript_ComputerGuy_Text_4
# 55 "data/maps/SofosCity_House4/scripts.pory"
	closemessage
	goto SofosCity_House4_EventScript_ComputerGuy_4


SofosCity_House4_EventScript_Pawmo_Text_0:
# 7 "data/maps/SofosCity_House4/scripts.pory"
	.string "Pawmo$"

SofosCity_House4_EventScript_Pawmo_Text_1:
# 9 "data/maps/SofosCity_House4/scripts.pory"
	.string "Brrzzz!$"

SofosCity_House4_EventScript_ComputerGuy_Text_0:
# 20 "data/maps/SofosCity_House4/scripts.pory"
	.string "Computer Guy$"

SofosCity_House4_EventScript_ComputerGuy_Text_1:
# 26 "data/maps/SofosCity_House4/scripts.pory"
	.string "My Pinball Protégé! You're always\n"
	.string "welcome in my house!\p"
	.string "{COLOR GREEN}Pinball Points{COLOR DARK_GRAY} might seem worthless,\n"
	.string "but they're very valuable to a select\l"
	.string "few around the Ilios Region. It never\l"
	.string "hurts to stop by the arcade when you're\l"
	.string "in town!$"

SofosCity_House4_EventScript_ComputerGuy_Text_2:
# 38 "data/maps/SofosCity_House4/scripts.pory"
	.string "Have you stopped by the Sofos City\n"
	.string "{COLOR GREEN}Arcade{COLOR DARK_GRAY} yet? They say the Pinball World\l"
	.string "Champion trained their skills in this\l"
	.string "very arcade. A game requiring such\l"
	.string "perfect strategy is right at home in\l"
	.string "Sofos City.\p"
	.string "Ehehe, sorry for rambling, I'm just so\n"
	.string "passionate about Pinball! When you\l"
	.string "play, you earn {COLOR GREEN}Pinball Points{COLOR DARK_GRAY}, which can\l"
	.string "be exchanged for exciting prizes.\p"
	.string "I have an idea! Come back to me when\n"
	.string "you've earned {COLOR GREEN}5 Pinball Points{COLOR DARK_GRAY}. I'll give\l"
	.string "you a better reward than anything they\l"
	.string "have in the arcade!$"

SofosCity_House4_EventScript_ComputerGuy_Text_3:
# 48 "data/maps/SofosCity_House4/scripts.pory"
	.string "Ah, if it isn't my Pinball Protégé! Have\n"
	.string "you earned {COLOR GREEN}5 Pinball Points{COLOR DARK_GRAY} and brought\l"
	.string "them to me?$"

SofosCity_House4_EventScript_ComputerGuy_Text_4:
# 54 "data/maps/SofosCity_House4/scripts.pory"
	.string "Mmm, looks like you need more time at\n"
	.string "the arcade. Becoming a Pinball Champion\l"
	.string "takes time and practice!\p"
	.string "Bring me {COLOR GREEN}5 Pinball Points{COLOR DARK_GRAY} to show me\n"
	.string "that you're improving at the games. I'll\l"
	.string "give you a great reward!$"

SofosCity_House4_EventScript_ComputerGuy_Text_5:
# 60 "data/maps/SofosCity_House4/scripts.pory"
	.string "I knew it! By earning these {COLOR GREEN}Pinball\n"
	.string "Points{COLOR DARK_GRAY}, you've shown me that you're\l"
	.string "playing Pinball and becoming great!\p"
	.string "I've got a reward for you. I'll just take\n"
	.string "those {COLOR GREEN}Pinball Points{COLOR DARK_GRAY} off your hands...\l"
	.string "hey, nothing comes for free!$"

SofosCity_House4_EventScript_ComputerGuy_Text_6:
# 63 "data/maps/SofosCity_House4/scripts.pory"
	.string "{PLAYER} gave away {COLOR GREEN}5 Pinball Points{COLOR DARK_GRAY}.$"

SofosCity_House4_EventScript_ComputerGuy_Text_7:
# 71 "data/maps/SofosCity_House4/scripts.pory"
	.string "A Pokémon holding the Covert Cloak\n"
	.string "becomes immune to secondary effects\l"
	.string "from opposing attacks. No more\l"
	.string "flinching during important battles!\l"
	.string "See, wasn't that worth the effort?$"

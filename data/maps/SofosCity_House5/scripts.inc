SofosCity_House5_MapScripts::
	.byte 0


SofosCity_House5_EventScript_Woman::
# 5 "data/maps/SofosCity_House5/scripts.pory"
	lock
# 6 "data/maps/SofosCity_House5/scripts.pory"
	faceplayer
# 7 "data/maps/SofosCity_House5/scripts.pory"
	speakername SofosCity_House5_EventScript_Woman_Text_0
# 10 "data/maps/SofosCity_House5/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_XATU_AND_NOCTOWL
# 11 "data/maps/SofosCity_House5/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SofosCity_House5_EventScript_Woman_2
# 20 "data/maps/SofosCity_House5/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_XATU_AND_NOCTOWL
# 21 "data/maps/SofosCity_House5/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_House5_EventScript_Woman_4
# 31 "data/maps/SofosCity_House5/scripts.pory"
	msgbox SofosCity_House5_EventScript_Woman_Text_3
# 32 "data/maps/SofosCity_House5/scripts.pory"
	closemessage
# 34 "data/maps/SofosCity_House5/scripts.pory"
	getcaughtmon SPECIES_XATU
# 35 "data/maps/SofosCity_House5/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SofosCity_House5_EventScript_Woman_8
SofosCity_House5_EventScript_Woman_7:
# 39 "data/maps/SofosCity_House5/scripts.pory"
	delay 30
# 42 "data/maps/SofosCity_House5/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_House5_EventScript_Woman_10
# 49 "data/maps/SofosCity_House5/scripts.pory"
	applymovement 1, Common_Movement_Heart
# 50 "data/maps/SofosCity_House5/scripts.pory"
	waitmovement 0
# 51 "data/maps/SofosCity_House5/scripts.pory"
	delay 15
# 52 "data/maps/SofosCity_House5/scripts.pory"
	speakername SofosCity_House5_EventScript_Woman_Text_0
# 53 "data/maps/SofosCity_House5/scripts.pory"
	msgbox SofosCity_House5_EventScript_Woman_Text_5
# 54 "data/maps/SofosCity_House5/scripts.pory"
	closemessage
# 55 "data/maps/SofosCity_House5/scripts.pory"
	delay 5
# 56 "data/maps/SofosCity_House5/scripts.pory"
	giveitem ITEM_WISE_GLASSES
# 57 "data/maps/SofosCity_House5/scripts.pory"
	closemessage
# 59 "data/maps/SofosCity_House5/scripts.pory"
	delay 20
# 60 "data/maps/SofosCity_House5/scripts.pory"
	completequest QUEST_XATU_AND_NOCTOWL
	return

SofosCity_House5_EventScript_Woman_2:
# 13 "data/maps/SofosCity_House5/scripts.pory"
	msgbox SofosCity_House5_EventScript_Woman_Text_1
# 14 "data/maps/SofosCity_House5/scripts.pory"
	closemessage
# 15 "data/maps/SofosCity_House5/scripts.pory"
	release
	end

SofosCity_House5_EventScript_Woman_4:
# 23 "data/maps/SofosCity_House5/scripts.pory"
	msgbox SofosCity_House5_EventScript_Woman_Text_2
# 24 "data/maps/SofosCity_House5/scripts.pory"
	closemessage
# 26 "data/maps/SofosCity_House5/scripts.pory"
	delay 20
# 27 "data/maps/SofosCity_House5/scripts.pory"
	startquest QUEST_XATU_AND_NOCTOWL
	return

SofosCity_House5_EventScript_Woman_8:
# 37 "data/maps/SofosCity_House5/scripts.pory"
	getcaughtmon SPECIES_NOCTOWL
	goto SofosCity_House5_EventScript_Woman_7

SofosCity_House5_EventScript_Woman_10:
# 44 "data/maps/SofosCity_House5/scripts.pory"
	msgbox SofosCity_House5_EventScript_Woman_Text_4
# 45 "data/maps/SofosCity_House5/scripts.pory"
	closemessage
	return


SofosCity_House5_EventScript_Natu::
# 67 "data/maps/SofosCity_House5/scripts.pory"
	lock
# 68 "data/maps/SofosCity_House5/scripts.pory"
	faceplayer
# 69 "data/maps/SofosCity_House5/scripts.pory"
	speakername SofosCity_House5_EventScript_Natu_Text_0
# 70 "data/maps/SofosCity_House5/scripts.pory"
	playmoncry SPECIES_NATU, CRY_MODE_NORMAL
# 71 "data/maps/SofosCity_House5/scripts.pory"
	msgbox SofosCity_House5_EventScript_Natu_Text_1
# 72 "data/maps/SofosCity_House5/scripts.pory"
	waitmoncry
# 73 "data/maps/SofosCity_House5/scripts.pory"
	closemessage
# 74 "data/maps/SofosCity_House5/scripts.pory"
	release
	end


SofosCity_House5_EventScript_Hoothoot::
# 80 "data/maps/SofosCity_House5/scripts.pory"
	lock
# 81 "data/maps/SofosCity_House5/scripts.pory"
	faceplayer
# 82 "data/maps/SofosCity_House5/scripts.pory"
	speakername SofosCity_House5_EventScript_Hoothoot_Text_0
# 83 "data/maps/SofosCity_House5/scripts.pory"
	playmoncry SPECIES_HOOTHOOT, CRY_MODE_NORMAL
# 84 "data/maps/SofosCity_House5/scripts.pory"
	msgbox SofosCity_House5_EventScript_Hoothoot_Text_1
# 85 "data/maps/SofosCity_House5/scripts.pory"
	waitmoncry
# 86 "data/maps/SofosCity_House5/scripts.pory"
	closemessage
# 87 "data/maps/SofosCity_House5/scripts.pory"
	release
	end


SofosCity_House5_EventScript_Woman_Text_0:
# 7 "data/maps/SofosCity_House5/scripts.pory"
	.string "Bird Lady$"

SofosCity_House5_EventScript_Woman_Text_1:
# 13 "data/maps/SofosCity_House5/scripts.pory"
	.string "Now I know so much more about Xatu and\n"
	.string "Noctowl. I feel a much deeper\l"
	.string "connection to the history of the city,\l"
	.string "and to my Pokémon!$"

SofosCity_House5_EventScript_Woman_Text_2:
# 23 "data/maps/SofosCity_House5/scripts.pory"
	.string "Sofos City was the center of\n"
	.string "philosophy and culture in the ancient\l"
	.string "world. Even though the Acropolis on the\l"
	.string "northeastern cliffs lay in ruins,\l"
	.string "modern-day Sofos City still pays\l"
	.string "homage to Xatu and Noctowl. They\l"
	.string "represent the concepts of knowledge\l"
	.string "and wisdom.\p"
	.string "I'm raising my own Natu and Hoothoot,\n"
	.string "but I want to know more about their\l"
	.string "evolutions. Can you show me {COLOR GREEN}complete\l"
	.string "Pokédex entries of Xatu and Noctowl{COLOR DARK_GRAY}?$"

SofosCity_House5_EventScript_Woman_Text_3:
# 31 "data/maps/SofosCity_House5/scripts.pory"
	.string "Chaire, hello! Did you go learn more\n"
	.string "about Xatu and Noctowl for me?$"

SofosCity_House5_EventScript_Woman_Text_4:
# 44 "data/maps/SofosCity_House5/scripts.pory"
	.string "It looks like your Pokédex doesn't have\n"
	.string "all their data yet.\p"
	.string "Let me know when you have {COLOR GREEN}completed\n"
	.string "Pokédex pages for Xatu and Noctowl{COLOR DARK_GRAY}! I'd\l"
	.string "love to learn more about the Pokémon\l"
	.string "I'm raising and the history of the city.$"

SofosCity_House5_EventScript_Woman_Text_5:
# 53 "data/maps/SofosCity_House5/scripts.pory"
	.string "Wow, their Pokédex pages have so much\n"
	.string "information, this is incredible! Xatu, a\l"
	.string "Pokémon burdened with infinite\l"
	.string "knowledge, and Noctowl, a Pokémon with\l"
	.string "endless wisdom...\p"
	.string "I'll stop gushing about them now, sorry.\n"
	.string "Point is, these Pokémon are super\l"
	.string "important to me, so thank you for\l"
	.string "showing me the Pokédex pages! Here, I\l"
	.string "want you to have this.$"

SofosCity_House5_EventScript_Natu_Text_0:
# 69 "data/maps/SofosCity_House5/scripts.pory"
	.string "Natu$"

SofosCity_House5_EventScript_Natu_Text_1:
# 71 "data/maps/SofosCity_House5/scripts.pory"
	.string "Chee...$"

SofosCity_House5_EventScript_Hoothoot_Text_0:
# 82 "data/maps/SofosCity_House5/scripts.pory"
	.string "Hoothoot$"

SofosCity_House5_EventScript_Hoothoot_Text_1:
# 84 "data/maps/SofosCity_House5/scripts.pory"
	.string "Hoo! Ooo!$"

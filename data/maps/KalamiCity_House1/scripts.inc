KalamiCity_House1_MapScripts::
	.byte 0


KalamiCity_House1_EventScript_Artist::
# 5 "data/maps/KalamiCity_House1/scripts.pory"
	lock
# 6 "data/maps/KalamiCity_House1/scripts.pory"
	faceplayer
# 7 "data/maps/KalamiCity_House1/scripts.pory"
	speakername KalamiCity_House1_EventScript_Artist_Text_0
# 8 "data/maps/KalamiCity_House1/scripts.pory"
	msgbox KalamiCity_House1_EventScript_Artist_Text_1
# 9 "data/maps/KalamiCity_House1/scripts.pory"
	closemessage
# 10 "data/maps/KalamiCity_House1/scripts.pory"
	release
	end


KalamiCity_House1_EventScript_Trapinch::
# 16 "data/maps/KalamiCity_House1/scripts.pory"
	lock
# 17 "data/maps/KalamiCity_House1/scripts.pory"
	faceplayer
# 18 "data/maps/KalamiCity_House1/scripts.pory"
	speakername KalamiCity_House1_EventScript_Trapinch_Text_0
# 19 "data/maps/KalamiCity_House1/scripts.pory"
	playmoncry SPECIES_TRAPINCH, CRY_MODE_NORMAL
# 20 "data/maps/KalamiCity_House1/scripts.pory"
	msgbox KalamiCity_House1_EventScript_Trapinch_Text_1
# 21 "data/maps/KalamiCity_House1/scripts.pory"
	waitmoncry
# 22 "data/maps/KalamiCity_House1/scripts.pory"
	closemessage
# 23 "data/maps/KalamiCity_House1/scripts.pory"
	release
	end


KalamiCity_House1_EventScript_Scientist::
# 29 "data/maps/KalamiCity_House1/scripts.pory"
	lock
# 30 "data/maps/KalamiCity_House1/scripts.pory"
	faceplayer
# 31 "data/maps/KalamiCity_House1/scripts.pory"
	speakername KalamiCity_House1_EventScript_Scientist_Text_0
# 34 "data/maps/KalamiCity_House1/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_KALAMI_EEVEE_POKEDEX
# 35 "data/maps/KalamiCity_House1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KalamiCity_House1_EventScript_Scientist_2
# 44 "data/maps/KalamiCity_House1/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_KALAMI_EEVEE_POKEDEX
# 45 "data/maps/KalamiCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KalamiCity_House1_EventScript_Scientist_5
# 55 "data/maps/KalamiCity_House1/scripts.pory"
	msgbox KalamiCity_House1_EventScript_Scientist_Text_3
# 56 "data/maps/KalamiCity_House1/scripts.pory"
	closemessage
# 58 "data/maps/KalamiCity_House1/scripts.pory"
	getcaughtmon SPECIES_EEVEE
# 59 "data/maps/KalamiCity_House1/scripts.pory"
	delay 30
# 61 "data/maps/KalamiCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KalamiCity_House1_EventScript_Scientist_8
# 69 "data/maps/KalamiCity_House1/scripts.pory"
	speakername KalamiCity_House1_EventScript_Scientist_Text_0
# 70 "data/maps/KalamiCity_House1/scripts.pory"
	msgbox KalamiCity_House1_EventScript_Scientist_Text_5
# 71 "data/maps/KalamiCity_House1/scripts.pory"
	closemessage
# 72 "data/maps/KalamiCity_House1/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 3
# 73 "data/maps/KalamiCity_House1/scripts.pory"
	closemessage
# 75 "data/maps/KalamiCity_House1/scripts.pory"
	delay 20
# 76 "data/maps/KalamiCity_House1/scripts.pory"
	completequest QUEST_KALAMI_EEVEE_POKEDEX
KalamiCity_House1_EventScript_Scientist_4:
# 79 "data/maps/KalamiCity_House1/scripts.pory"
	release
	end

KalamiCity_House1_EventScript_Scientist_2:
# 37 "data/maps/KalamiCity_House1/scripts.pory"
	msgbox KalamiCity_House1_EventScript_Scientist_Text_1
# 38 "data/maps/KalamiCity_House1/scripts.pory"
	closemessage
# 39 "data/maps/KalamiCity_House1/scripts.pory"
	release
	end

KalamiCity_House1_EventScript_Scientist_5:
# 47 "data/maps/KalamiCity_House1/scripts.pory"
	msgbox KalamiCity_House1_EventScript_Scientist_Text_2
# 48 "data/maps/KalamiCity_House1/scripts.pory"
	closemessage
# 50 "data/maps/KalamiCity_House1/scripts.pory"
	delay 20
# 51 "data/maps/KalamiCity_House1/scripts.pory"
	startquest QUEST_KALAMI_EEVEE_POKEDEX
	goto KalamiCity_House1_EventScript_Scientist_4

KalamiCity_House1_EventScript_Scientist_8:
# 63 "data/maps/KalamiCity_House1/scripts.pory"
	speakername KalamiCity_House1_EventScript_Scientist_Text_0
# 64 "data/maps/KalamiCity_House1/scripts.pory"
	msgbox KalamiCity_House1_EventScript_Scientist_Text_4
# 65 "data/maps/KalamiCity_House1/scripts.pory"
	closemessage
	goto KalamiCity_House1_EventScript_Scientist_4


KalamiCity_House1_EventScript_Artist_Text_0:
# 7 "data/maps/KalamiCity_House1/scripts.pory"
	.string "Artist$"

KalamiCity_House1_EventScript_Artist_Text_1:
# 8 "data/maps/KalamiCity_House1/scripts.pory"
	.string "I'm a digital artist of Pokémon\n"
	.string "environments. In fact, I make a lot of\l"
	.string "the Pokémon art for Pokédex entries!\l"
	.string "My boyfriend helps me gather data and\l"
	.string "reference images.$"

KalamiCity_House1_EventScript_Trapinch_Text_0:
# 18 "data/maps/KalamiCity_House1/scripts.pory"
	.string "Trapinch$"

KalamiCity_House1_EventScript_Trapinch_Text_1:
# 20 "data/maps/KalamiCity_House1/scripts.pory"
	.string "K-k-k-k.$"

KalamiCity_House1_EventScript_Scientist_Text_0:
# 31 "data/maps/KalamiCity_House1/scripts.pory"
	.string "Scientist$"

KalamiCity_House1_EventScript_Scientist_Text_1:
# 37 "data/maps/KalamiCity_House1/scripts.pory"
	.string "I learned a lot from your Eevee Pokédex\n"
	.string "entry! We'll definitely be able to make\l"
	.string "some good artwork now.$"

KalamiCity_House1_EventScript_Scientist_Text_2:
# 47 "data/maps/KalamiCity_House1/scripts.pory"
	.string "My boyfriend and I do freelance work\n"
	.string "for Acrisia University, making art for\l"
	.string "the Pokédex and other services. We're\l"
	.string "making good progress, but we need more\l"
	.string "information about {COLOR GREEN}Eevee{COLOR DARK_GRAY} and their\l"
	.string "evolutions.\p"
	.string "Hey, you're with the University! Can you\n"
	.string "show me the {COLOR GREEN}complete Pokédex page of\l"
	.string "Eevee{COLOR DARK_GRAY}? We'll learn a lot more about it\l"
	.string "like that!$"

KalamiCity_House1_EventScript_Scientist_Text_3:
# 55 "data/maps/KalamiCity_House1/scripts.pory"
	.string "Chaire, University Researcher! Have you\n"
	.string "learned more about Eevee yet?$"

KalamiCity_House1_EventScript_Scientist_Text_4:
# 64 "data/maps/KalamiCity_House1/scripts.pory"
	.string "Looks like you're still missing\n"
	.string "information on Eevee's Pokédex page.\p"
	.string "Show me the {COLOR GREEN}completed Pokédex page of\n"
	.string "Eevee{COLOR DARK_GRAY} if you get a chance, it'll help our\l"
	.string "University projects!$"

KalamiCity_House1_EventScript_Scientist_Text_5:
# 70 "data/maps/KalamiCity_House1/scripts.pory"
	.string "Oh! Look at that, it's the complete\n"
	.string "Pokédex page of Eevee! It can evolve\l"
	.string "into so many forms... this is all great\l"
	.string "information!\p"
	.string "Thank you for showing me this! Here, we\n"
	.string "got you a little something for your\l"
	.string "help.$"

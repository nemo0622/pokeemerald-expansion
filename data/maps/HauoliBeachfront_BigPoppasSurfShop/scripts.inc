HauoliBeachfront_BigPoppasSurfShop_MapScripts::
	.byte 0


HauoliBeachfront_BigPoppasSurfShop_NPC_BigPoppa::
# 5 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	lock
# 6 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	faceplayer
# 7 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	setspeaker HauoliBeachfront_BigPoppasSurfShop_NPC_BigPoppa_Text_0
# 10 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_BIG_POPPAS_FISH
# 11 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq HauoliBeachfront_BigPoppasSurfShop_NPC_BigPoppa_2
# 20 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_BIG_POPPAS_FISH
# 21 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq HauoliBeachfront_BigPoppasSurfShop_NPC_BigPoppa_5
# 31 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	msgbox HauoliBeachfront_BigPoppasSurfShop_NPC_BigPoppa_Text_3
# 32 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	closemessage
# 35 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	getcaughtmon SPECIES_WISHIWASHI
# 36 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	delay 30
# 38 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq HauoliBeachfront_BigPoppasSurfShop_NPC_BigPoppa_8
# 48 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_QUESTION
# 49 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	setspeaker HauoliBeachfront_BigPoppasSurfShop_NPC_BigPoppa_Text_0
# 50 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	msgbox HauoliBeachfront_BigPoppasSurfShop_NPC_BigPoppa_Text_5
# 51 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	closemessage
# 53 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	delay 5
# 54 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	giveitem ITEM_QUICK_BALL, 5
# 55 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	closemessage
# 57 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	delay 20
# 58 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	completequest QUEST_BIG_POPPAS_FISH
HauoliBeachfront_BigPoppasSurfShop_NPC_BigPoppa_4:
# 61 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	release
	end

HauoliBeachfront_BigPoppasSurfShop_NPC_BigPoppa_2:
# 13 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	msgbox HauoliBeachfront_BigPoppasSurfShop_NPC_BigPoppa_Text_1
# 14 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	closemessage
# 15 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	release
	end

HauoliBeachfront_BigPoppasSurfShop_NPC_BigPoppa_5:
# 23 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	msgbox HauoliBeachfront_BigPoppasSurfShop_NPC_BigPoppa_Text_2
# 24 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	closemessage
# 26 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	delay 20
# 27 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	startquest QUEST_BIG_POPPAS_FISH
	goto HauoliBeachfront_BigPoppasSurfShop_NPC_BigPoppa_4

HauoliBeachfront_BigPoppasSurfShop_NPC_BigPoppa_8:
# 40 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	setspeaker HauoliBeachfront_BigPoppasSurfShop_NPC_BigPoppa_Text_0
# 41 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	msgbox HauoliBeachfront_BigPoppasSurfShop_NPC_BigPoppa_Text_4
# 42 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	closemessage
# 43 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	release
	end


HauoliBeachfront_BigPoppasSurfShop_Pokemon_Cramorant::
# 67 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	lock
# 68 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	faceplayer
# 69 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	setspeaker HauoliBeachfront_BigPoppasSurfShop_Pokemon_Cramorant_Text_0
# 70 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	playmoncry SPECIES_CRAMORANT, CRY_MODE_NORMAL
# 71 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	msgbox HauoliBeachfront_BigPoppasSurfShop_Pokemon_Cramorant_Text_1
# 72 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	waitmoncry
# 73 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	closemessage
# 74 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	release
	end


HauoliBeachfront_BigPoppasSurfShop_NPC_Surfer::
# 80 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	lock
# 81 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	faceplayer
# 82 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	setspeaker HauoliBeachfront_BigPoppasSurfShop_NPC_Surfer_Text_0
# 83 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	msgbox HauoliBeachfront_BigPoppasSurfShop_NPC_Surfer_Text_1
# 84 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	closemessage
# 85 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	release
	end


HauoliBeachfront_BigPoppasSurfShop_NPC_BigPoppa_Text_0:
# 7 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	.string "Big Poppa$"

HauoliBeachfront_BigPoppasSurfShop_NPC_BigPoppa_Text_1:
# 13 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	.string "G'day, mate! You're always welcome in\n"
	.string "the Surf Shop!$"

HauoliBeachfront_BigPoppasSurfShop_NPC_BigPoppa_Text_2:
# 23 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	.string "G'day, mate! Welcome to the Surf Shop!\p"
	.string "Say, you look more like a Trainer than an\n"
	.string "average surfer. Maybe you can help me\l"
	.string "out.\p"
	.string "Y'see, people talk about {COLOR BLUE}Wishiwashi{COLOR DARK_GRAY} like\n"
	.string "it's a massive fish, but I only know them\l"
	.string "as little fellas!\p"
	.string "If you could show me a {COLOR GREEN}complete\n"
	.string "Pokédex page{COLOR DARK_GRAY} for {COLOR BLUE}Wishiwashi{COLOR DARK_GRAY}, I'll figure\l"
	.string "out the truth of this fish!$"

HauoliBeachfront_BigPoppasSurfShop_NPC_BigPoppa_Text_3:
# 31 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	.string "G'day, mate! You have a Pokédex page\n"
	.string "for me?$"

HauoliBeachfront_BigPoppasSurfShop_NPC_BigPoppa_Text_4:
# 41 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	.string "Hmm, doesn't look like it.\p"
	.string "Show me a {COLOR GREEN}complete Pokédex page{COLOR DARK_GRAY} for\n"
	.string "{COLOR BLUE}Wishiwashi{COLOR DARK_GRAY} so I can see how big they\l"
	.string "really get!$"

HauoliBeachfront_BigPoppasSurfShop_NPC_BigPoppa_Text_5:
# 50 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	.string "Eh? So {COLOR BLUE}Wishiwashi{COLOR DARK_GRAY} are small by\n"
	.string "themselves, but group together to grow\l"
	.string "stronger? There's a lesson in that,\l"
	.string "yeah!\p"
	.string "Thanks for teaching me, mate. Here's a\n"
	.string "little somethin' for the trouble.$"

HauoliBeachfront_BigPoppasSurfShop_Pokemon_Cramorant_Text_0:
# 69 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	.string "Cramorant$"

HauoliBeachfront_BigPoppasSurfShop_Pokemon_Cramorant_Text_1:
# 71 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	.string "Skwaw! G-lulp!$"

HauoliBeachfront_BigPoppasSurfShop_NPC_Surfer_Text_0:
# 82 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	.string "Surfer$"

HauoliBeachfront_BigPoppasSurfShop_NPC_Surfer_Text_1:
# 83 "data//maps/HauoliBeachfront_BigPoppasSurfShop/scripts.pory"
	.string "'Sup, dude? Big Poppa lets me come in\n"
	.string "and say hey to the {COLOR BLUE}Pyukumuku{COLOR DARK_GRAY}.\p"
	.string "Most people think they're annoying, but\n"
	.string "I have a soft spot for them.$"

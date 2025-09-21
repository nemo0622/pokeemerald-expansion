AsfalHills_House1_MapScripts::
	.byte 0


AsfalHills_House1_EventScript_LittleBoy::
# 5 "data/maps/AsfalHills_House1/scripts.pory"
	lock
# 6 "data/maps/AsfalHills_House1/scripts.pory"
	faceplayer
# 9 "data/maps/AsfalHills_House1/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_SHOW_BOY_GIRAFARIG
# 10 "data/maps/AsfalHills_House1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AsfalHills_House1_EventScript_LittleBoy_2
# 20 "data/maps/AsfalHills_House1/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_SHOW_BOY_GIRAFARIG
# 21 "data/maps/AsfalHills_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AsfalHills_House1_EventScript_LittleBoy_5
# 32 "data/maps/AsfalHills_House1/scripts.pory"
	speakername AsfalHills_House1_EventScript_LittleBoy_Text_0
# 33 "data/maps/AsfalHills_House1/scripts.pory"
	msgbox AsfalHills_House1_EventScript_LittleBoy_Text_3
# 34 "data/maps/AsfalHills_House1/scripts.pory"
	closemessage
# 36 "data/maps/AsfalHills_House1/scripts.pory"
	getcaughtmon SPECIES_GIRAFARIG
# 37 "data/maps/AsfalHills_House1/scripts.pory"
	delay 30
# 39 "data/maps/AsfalHills_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AsfalHills_House1_EventScript_LittleBoy_8
# 47 "data/maps/AsfalHills_House1/scripts.pory"
	emote 1, EMOTE_HEART
# 48 "data/maps/AsfalHills_House1/scripts.pory"
	speakername AsfalHills_House1_EventScript_LittleBoy_Text_0
# 49 "data/maps/AsfalHills_House1/scripts.pory"
	msgbox AsfalHills_House1_EventScript_LittleBoy_Text_5
# 50 "data/maps/AsfalHills_House1/scripts.pory"
	closemessage
# 51 "data/maps/AsfalHills_House1/scripts.pory"
	giveitem ITEM_TM_SHOCK_WAVE
# 52 "data/maps/AsfalHills_House1/scripts.pory"
	delay 5
# 53 "data/maps/AsfalHills_House1/scripts.pory"
	speakername AsfalHills_House1_EventScript_LittleBoy_Text_0
# 54 "data/maps/AsfalHills_House1/scripts.pory"
	msgbox AsfalHills_House1_EventScript_LittleBoy_Text_6
# 55 "data/maps/AsfalHills_House1/scripts.pory"
	closemessage
# 57 "data/maps/AsfalHills_House1/scripts.pory"
	delay 20
# 58 "data/maps/AsfalHills_House1/scripts.pory"
	completequest QUEST_SHOW_BOY_GIRAFARIG
AsfalHills_House1_EventScript_LittleBoy_4:
# 61 "data/maps/AsfalHills_House1/scripts.pory"
	release
	end

AsfalHills_House1_EventScript_LittleBoy_2:
# 12 "data/maps/AsfalHills_House1/scripts.pory"
	speakername AsfalHills_House1_EventScript_LittleBoy_Text_0
# 13 "data/maps/AsfalHills_House1/scripts.pory"
	msgbox AsfalHills_House1_EventScript_LittleBoy_Text_1
# 14 "data/maps/AsfalHills_House1/scripts.pory"
	closemessage
# 15 "data/maps/AsfalHills_House1/scripts.pory"
	release
	end

AsfalHills_House1_EventScript_LittleBoy_5:
# 23 "data/maps/AsfalHills_House1/scripts.pory"
	speakername AsfalHills_House1_EventScript_LittleBoy_Text_0
# 24 "data/maps/AsfalHills_House1/scripts.pory"
	msgbox AsfalHills_House1_EventScript_LittleBoy_Text_2
# 25 "data/maps/AsfalHills_House1/scripts.pory"
	closemessage
# 27 "data/maps/AsfalHills_House1/scripts.pory"
	delay 20
# 28 "data/maps/AsfalHills_House1/scripts.pory"
	startquest QUEST_SHOW_BOY_GIRAFARIG
	goto AsfalHills_House1_EventScript_LittleBoy_4

AsfalHills_House1_EventScript_LittleBoy_8:
# 41 "data/maps/AsfalHills_House1/scripts.pory"
	speakername AsfalHills_House1_EventScript_LittleBoy_Text_0
# 42 "data/maps/AsfalHills_House1/scripts.pory"
	msgbox AsfalHills_House1_EventScript_LittleBoy_Text_4
# 43 "data/maps/AsfalHills_House1/scripts.pory"
	closemessage
	goto AsfalHills_House1_EventScript_LittleBoy_4


AsfalHills_House1_EventScript_Artist::
# 67 "data/maps/AsfalHills_House1/scripts.pory"
	lock
# 68 "data/maps/AsfalHills_House1/scripts.pory"
	faceplayer
# 69 "data/maps/AsfalHills_House1/scripts.pory"
	speakername AsfalHills_House1_EventScript_Artist_Text_0
# 70 "data/maps/AsfalHills_House1/scripts.pory"
	msgbox AsfalHills_House1_EventScript_Artist_Text_1
# 71 "data/maps/AsfalHills_House1/scripts.pory"
	closemessage
# 72 "data/maps/AsfalHills_House1/scripts.pory"
	release
	end


AsfalHills_House1_EventScript_LittleBoy_Text_0:
# 12 "data/maps/AsfalHills_House1/scripts.pory"
	.string "Short Boy$"

AsfalHills_House1_EventScript_LittleBoy_Text_1:
# 13 "data/maps/AsfalHills_House1/scripts.pory"
	.string "That Girafarig picture inspired me! I'm\n"
	.string "gonna get as tall as that one day!$"

AsfalHills_House1_EventScript_LittleBoy_Text_2:
# 24 "data/maps/AsfalHills_House1/scripts.pory"
	.string "Woooahhh, you're... you're so tall! I\n"
	.string "wanna be tall like you someday!\p"
	.string "The problem is, I'm still short. My friend\n"
	.string "told me that {COLOR GREEN}Girafarig{COLOR DARK_GRAY} was the tallest\l"
	.string "Pokémon to ever exist EVER! If you find\l"
	.string "one, {COLOR GREEN}show me the picture on your\l"
	.string "Pokédex{COLOR DARK_GRAY}!$"

AsfalHills_House1_EventScript_LittleBoy_Text_3:
# 33 "data/maps/AsfalHills_House1/scripts.pory"
	.string "Chaire!! Did you bring me the {COLOR GREEN}Girafarig\n"
	.string "Pokédex page{COLOR DARK_GRAY}?$"

AsfalHills_House1_EventScript_LittleBoy_Text_4:
# 42 "data/maps/AsfalHills_House1/scripts.pory"
	.string "Aw, mannn! I wanna learn all about\n"
	.string "Girafarig, so the Pokédex page needs to\l"
	.string "be {COLOR GREEN}complete{COLOR DARK_GRAY}! Let me know when you\l"
	.string "catch one!$"

AsfalHills_House1_EventScript_LittleBoy_Text_5:
# 49 "data/maps/AsfalHills_House1/scripts.pory"
	.string "Wow, it's so cool! It really IS super\n"
	.string "tall!\p"
	.string "I'm gonna live like a Girafarig to get as\n"
	.string "tall as I can. My Dad says I should give\l"
	.string "gifts to people who help me, so here!$"

AsfalHills_House1_EventScript_LittleBoy_Text_6:
# 54 "data/maps/AsfalHills_House1/scripts.pory"
	.string "The move {COLOR GREEN}Shock Wave{COLOR DARK_GRAY} literally never\n"
	.string "misses! Like, never EVER!$"

AsfalHills_House1_EventScript_Artist_Text_0:
# 69 "data/maps/AsfalHills_House1/scripts.pory"
	.string "Artist$"

AsfalHills_House1_EventScript_Artist_Text_1:
# 70 "data/maps/AsfalHills_House1/scripts.pory"
	.string "My kid is growing up fast. He's so\n"
	.string "obsessed with getting taller and older,\l"
	.string "but I wish he'd appreciate how fun it is\l"
	.string "to be young.$"

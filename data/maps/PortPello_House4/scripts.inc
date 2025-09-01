PortPello_House4_MapScripts::
	.byte 0


PortPello_House4_EventScript_Picnicker::
# 5 "data/maps/PortPello_House4/scripts.pory"
	lock
# 6 "data/maps/PortPello_House4/scripts.pory"
	faceplayer
# 7 "data/maps/PortPello_House4/scripts.pory"
	speakername PortPello_House4_EventScript_Picnicker_Text_0
# 8 "data/maps/PortPello_House4/scripts.pory"
	msgbox PortPello_House4_EventScript_Picnicker_Text_1
# 9 "data/maps/PortPello_House4/scripts.pory"
	closemessage
# 10 "data/maps/PortPello_House4/scripts.pory"
	release
	end


PortPello_House4_EventScript_Sailor::
# 17 "data/maps/PortPello_House4/scripts.pory"
	lock
# 18 "data/maps/PortPello_House4/scripts.pory"
	faceplayer
# 19 "data/maps/PortPello_House4/scripts.pory"
	speakername PortPello_House4_EventScript_Sailor_Text_0
# 22 "data/maps/PortPello_House4/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_STRANGE_SOUVENIRS_FOR_SAILOR
# 23 "data/maps/PortPello_House4/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PortPello_House4_EventScript_Sailor_2
# 32 "data/maps/PortPello_House4/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_STRANGE_SOUVENIRS_FOR_SAILOR
# 33 "data/maps/PortPello_House4/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PortPello_House4_EventScript_Sailor_5
# 42 "data/maps/PortPello_House4/scripts.pory"
	msgbox PortPello_House4_EventScript_Sailor_Text_3
# 43 "data/maps/PortPello_House4/scripts.pory"
	closemessage
# 45 "data/maps/PortPello_House4/scripts.pory"
	delay 30
# 46 "data/maps/PortPello_House4/scripts.pory"
	checkitem ITEM_STRANGE_SOUVENIR
# 47 "data/maps/PortPello_House4/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PortPello_House4_EventScript_Sailor_8
# 55 "data/maps/PortPello_House4/scripts.pory"
	emote 2, EMOTE_EXCLAM
# 56 "data/maps/PortPello_House4/scripts.pory"
	speakername PortPello_House4_EventScript_Sailor_Text_0
# 57 "data/maps/PortPello_House4/scripts.pory"
	msgbox PortPello_House4_EventScript_Sailor_Text_5
# 58 "data/maps/PortPello_House4/scripts.pory"
	closemessage
# 59 "data/maps/PortPello_House4/scripts.pory"
	delay 5
# 66 "data/maps/PortPello_House4/scripts.pory"
	givemon SPECIES_COMFEY, 40, ITEM_POKE_BALL, NATURE_CALM, 1, MON_FEMALE, FEMALE, 0, 0, 0, 100, 152, 252, 31, 31, 31, 31, 31, 31, MOVE_PETAL_DANCE, MOVE_MATCHA_GOTCHA, MOVE_DRAINING_KISS, MOVE_BUZZY_BUZZ, TRUE
# 67 "data/maps/PortPello_House4/scripts.pory"
	closemessage
# 68 "data/maps/PortPello_House4/scripts.pory"
	delay 5
# 69 "data/maps/PortPello_House4/scripts.pory"
	speakername PortPello_House4_EventScript_Sailor_Text_0
# 70 "data/maps/PortPello_House4/scripts.pory"
	msgbox PortPello_House4_EventScript_Sailor_Text_6
# 71 "data/maps/PortPello_House4/scripts.pory"
	closemessage
# 72 "data/maps/PortPello_House4/scripts.pory"
	delay 20
# 73 "data/maps/PortPello_House4/scripts.pory"
	completequest QUEST_STRANGE_SOUVENIRS_FOR_SAILOR
PortPello_House4_EventScript_Sailor_4:
# 76 "data/maps/PortPello_House4/scripts.pory"
	release
	end

PortPello_House4_EventScript_Sailor_2:
# 25 "data/maps/PortPello_House4/scripts.pory"
	msgbox PortPello_House4_EventScript_Sailor_Text_1
# 26 "data/maps/PortPello_House4/scripts.pory"
	closemessage
# 27 "data/maps/PortPello_House4/scripts.pory"
	release
	end

PortPello_House4_EventScript_Sailor_5:
# 35 "data/maps/PortPello_House4/scripts.pory"
	msgbox PortPello_House4_EventScript_Sailor_Text_2
# 36 "data/maps/PortPello_House4/scripts.pory"
	closemessage
# 37 "data/maps/PortPello_House4/scripts.pory"
	delay 20
# 38 "data/maps/PortPello_House4/scripts.pory"
	startquest QUEST_STRANGE_SOUVENIRS_FOR_SAILOR
	goto PortPello_House4_EventScript_Sailor_4

PortPello_House4_EventScript_Sailor_8:
# 49 "data/maps/PortPello_House4/scripts.pory"
	speakername PortPello_House4_EventScript_Sailor_Text_0
# 50 "data/maps/PortPello_House4/scripts.pory"
	msgbox PortPello_House4_EventScript_Sailor_Text_4
# 51 "data/maps/PortPello_House4/scripts.pory"
	closemessage
	goto PortPello_House4_EventScript_Sailor_4


PortPello_House4_EventScript_Picnicker_Text_0:
# 7 "data/maps/PortPello_House4/scripts.pory"
	.string "Picnicker$"

PortPello_House4_EventScript_Picnicker_Text_1:
# 8 "data/maps/PortPello_House4/scripts.pory"
	.string "I'm looking into a cruise to the Alola\n"
	.string "Region! Now I just have to talk my dad\l"
	.string "into taking us...$"

PortPello_House4_EventScript_Sailor_Text_0:
# 19 "data/maps/PortPello_House4/scripts.pory"
	.string "Sailor$"

PortPello_House4_EventScript_Sailor_Text_1:
# 25 "data/maps/PortPello_House4/scripts.pory"
	.string "I bet my buddy in Sofos City will love\n"
	.string "those Strange Souvenirs. They're really\l"
	.string "interested in the {COLOR GREEN}Alola Region{COLOR DARK_GRAY}!$"

PortPello_House4_EventScript_Sailor_Text_2:
# 35 "data/maps/PortPello_House4/scripts.pory"
	.string "Welcome in! You look like you've got\n"
	.string "some exploring under your belt. Ever\l"
	.string "come across some rare items, maybe\l"
	.string "floating in the water?\p"
	.string "I'll cut to the chase. My buddy in Sofos\n"
	.string "City is working on a University paper,\l"
	.string "and I think some {COLOR GREEN}Alolan{COLOR DARK_GRAY} items might\l"
	.string "help. If you bring me {COLOR GREEN}3 Strange\l"
	.string "Souvenirs{COLOR DARK_GRAY}, which have floated here from\l"
	.string "Alola, I'll give you a {COLOR GREEN}Pokémon from Alola{COLOR DARK_GRAY}.\p"
	.string "I've heard that some folks can {COLOR GREEN}find\n"
	.string "great treasures{COLOR DARK_GRAY} while {COLOR GREEN}fishing with a\l"
	.string "Super Rod{COLOR DARK_GRAY}. Maybe that's how you can\l"
	.string "collect the Strange Souvenirs?$"

PortPello_House4_EventScript_Sailor_Text_3:
# 42 "data/maps/PortPello_House4/scripts.pory"
	.string "Oh, hey there! Have you collected those\n"
	.string "Alolan items yet?$"

PortPello_House4_EventScript_Sailor_Text_4:
# 50 "data/maps/PortPello_House4/scripts.pory"
	.string "Nope, doesn't look like it.\p"
	.string "Remember, I'm looking for {COLOR GREEN}3 Strange\n"
	.string "Souvenirs{COLOR DARK_GRAY}. I've heard that they can be\l"
	.string "found as {COLOR GREEN}treasures{COLOR DARK_GRAY} while {COLOR GREEN}fishing with a\l"
	.string "Super Rod{COLOR DARK_GRAY}. I'll give you a Pokémon from\l"
	.string "Alola if you can help me out!$"

PortPello_House4_EventScript_Sailor_Text_5:
# 57 "data/maps/PortPello_House4/scripts.pory"
	.string "Incredible! I didn't know if that was\n"
	.string "even possible!\p"
	.string "These'll help my friend in Sofos City for\n"
	.string "sure. As promised, here's a Pokémon from\l"
	.string "the Alola Region!$"

PortPello_House4_EventScript_Sailor_Text_6:
# 70 "data/maps/PortPello_House4/scripts.pory"
	.string "There's something {COLOR GREEN}special{COLOR DARK_GRAY} about that\n"
	.string "Comfey. Give it a look!$"

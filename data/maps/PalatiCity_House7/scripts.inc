PalatiCity_House7_MapScripts::
	.byte 0


PalatiCity_House7_EventScript_HexManiac::
# 5 "data/maps/PalatiCity_House7/scripts.pory"
	lock
# 6 "data/maps/PalatiCity_House7/scripts.pory"
	faceplayer
# 7 "data/maps/PalatiCity_House7/scripts.pory"
	speakername PalatiCity_House7_EventScript_HexManiac_Text_0
# 10 "data/maps/PalatiCity_House7/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FILL_RUINS_ZOO
# 11 "data/maps/PalatiCity_House7/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PalatiCity_House7_EventScript_HexManiac_2
# 20 "data/maps/PalatiCity_House7/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_FILL_RUINS_ZOO
# 21 "data/maps/PalatiCity_House7/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PalatiCity_House7_EventScript_HexManiac_5
# 35 "data/maps/PalatiCity_House7/scripts.pory"
	msgbox PalatiCity_House7_EventScript_HexManiac_Text_4
# 36 "data/maps/PalatiCity_House7/scripts.pory"
	closemessage
# 38 "data/maps/PalatiCity_House7/scripts.pory"
	delay 30
# 39 "data/maps/PalatiCity_House7/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_13_1, 0
	goto_if_gt PalatiCity_House7_EventScript_HexManiac_10
PalatiCity_House7_EventScript_HexManiac_9:
# 53 "data/maps/PalatiCity_House7/scripts.pory"
	speakername PalatiCity_House7_EventScript_HexManiac_Text_0
# 54 "data/maps/PalatiCity_House7/scripts.pory"
	msgbox PalatiCity_House7_EventScript_HexManiac_Text_6
# 55 "data/maps/PalatiCity_House7/scripts.pory"
	closemessage
PalatiCity_House7_EventScript_HexManiac_4:
# 58 "data/maps/PalatiCity_House7/scripts.pory"
	release
	end

PalatiCity_House7_EventScript_HexManiac_2:
# 13 "data/maps/PalatiCity_House7/scripts.pory"
	msgbox PalatiCity_House7_EventScript_HexManiac_Text_1
# 14 "data/maps/PalatiCity_House7/scripts.pory"
	closemessage
# 15 "data/maps/PalatiCity_House7/scripts.pory"
	release
	end

PalatiCity_House7_EventScript_HexManiac_5:
# 23 "data/maps/PalatiCity_House7/scripts.pory"
	msgbox PalatiCity_House7_EventScript_HexManiac_Text_2
# 24 "data/maps/PalatiCity_House7/scripts.pory"
	closemessage
# 25 "data/maps/PalatiCity_House7/scripts.pory"
	delay 20
# 26 "data/maps/PalatiCity_House7/scripts.pory"
	emote 1, EMOTE_EXCLAM
# 27 "data/maps/PalatiCity_House7/scripts.pory"
	speakername PalatiCity_House7_EventScript_HexManiac_Text_0
# 28 "data/maps/PalatiCity_House7/scripts.pory"
	msgbox PalatiCity_House7_EventScript_HexManiac_Text_3
# 29 "data/maps/PalatiCity_House7/scripts.pory"
	closemessage
# 30 "data/maps/PalatiCity_House7/scripts.pory"
	delay 20
# 31 "data/maps/PalatiCity_House7/scripts.pory"
	startquest QUEST_FILL_RUINS_ZOO
	goto PalatiCity_House7_EventScript_HexManiac_4

PalatiCity_House7_EventScript_HexManiac_8:
# 41 "data/maps/PalatiCity_House7/scripts.pory"
	emote 1, EMOTE_HEART
# 42 "data/maps/PalatiCity_House7/scripts.pory"
	speakername PalatiCity_House7_EventScript_HexManiac_Text_0
# 43 "data/maps/PalatiCity_House7/scripts.pory"
	msgbox PalatiCity_House7_EventScript_HexManiac_Text_5
# 44 "data/maps/PalatiCity_House7/scripts.pory"
	closemessage
# 45 "data/maps/PalatiCity_House7/scripts.pory"
	delay 5
# 46 "data/maps/PalatiCity_House7/scripts.pory"
	giveitem ITEM_TM58
# 47 "data/maps/PalatiCity_House7/scripts.pory"
	closemessage
# 48 "data/maps/PalatiCity_House7/scripts.pory"
	delay 20
# 49 "data/maps/PalatiCity_House7/scripts.pory"
	completequest QUEST_FILL_RUINS_ZOO
	goto PalatiCity_House7_EventScript_HexManiac_4

PalatiCity_House7_EventScript_HexManiac_10:
# 39 "data/maps/PalatiCity_House7/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_13_2, 0
	goto_if_gt PalatiCity_House7_EventScript_HexManiac_8
	goto PalatiCity_House7_EventScript_HexManiac_9


PalatiCity_House7_EventScript_Gastly::
# 64 "data/maps/PalatiCity_House7/scripts.pory"
	lock
# 65 "data/maps/PalatiCity_House7/scripts.pory"
	faceplayer
# 66 "data/maps/PalatiCity_House7/scripts.pory"
	speakername PalatiCity_House7_EventScript_Gastly_Text_0
# 67 "data/maps/PalatiCity_House7/scripts.pory"
	playmoncry SPECIES_GASTLY, CRY_MODE_NORMAL
# 68 "data/maps/PalatiCity_House7/scripts.pory"
	msgbox PalatiCity_House7_EventScript_Gastly_Text_1
# 69 "data/maps/PalatiCity_House7/scripts.pory"
	waitmoncry
# 70 "data/maps/PalatiCity_House7/scripts.pory"
	closemessage
# 71 "data/maps/PalatiCity_House7/scripts.pory"
	release
	end


PalatiCity_House7_EventScript_ZoruaHisui::
# 77 "data/maps/PalatiCity_House7/scripts.pory"
	lock
# 78 "data/maps/PalatiCity_House7/scripts.pory"
	faceplayer
# 79 "data/maps/PalatiCity_House7/scripts.pory"
	speakername PalatiCity_House7_EventScript_ZoruaHisui_Text_0
# 80 "data/maps/PalatiCity_House7/scripts.pory"
	playmoncry SPECIES_ZORUA_HISUI, CRY_MODE_NORMAL
# 81 "data/maps/PalatiCity_House7/scripts.pory"
	msgbox PalatiCity_House7_EventScript_ZoruaHisui_Text_1
# 82 "data/maps/PalatiCity_House7/scripts.pory"
	waitmoncry
# 83 "data/maps/PalatiCity_House7/scripts.pory"
	closemessage
# 84 "data/maps/PalatiCity_House7/scripts.pory"
	release
	end


PalatiCity_House7_EventScript_HexManiac_Text_0:
# 7 "data/maps/PalatiCity_House7/scripts.pory"
	.string "Hex Maniac$"

PalatiCity_House7_EventScript_HexManiac_Text_1:
# 13 "data/maps/PalatiCity_House7/scripts.pory"
	.string "I'm super excited for my trip to Kipos\n"
	.string "Zoo, all thanks to you!$"

PalatiCity_House7_EventScript_HexManiac_Text_2:
# 23 "data/maps/PalatiCity_House7/scripts.pory"
	.string "I'm getting ready for a trip to the\n"
	.string "Kipos Zoo, but I've heard rumors that a\l"
	.string "lot of the exhibits are empty. I really\l"
	.string "want to see the creepy Ghost-type\l"
	.string "Pokémon, but I won't go if they're not\l"
	.string "there...$"

PalatiCity_House7_EventScript_HexManiac_Text_3:
# 28 "data/maps/PalatiCity_House7/scripts.pory"
	.string "Wait, I saw you on the Kipos Zoo\n"
	.string "newsletter - you're the one donating\l"
	.string "Pokémon to the zoo!\p"
	.string "Please, donate Pokémon to the {COLOR GREEN}Ruins\n"
	.string "Exhibit{COLOR DARK_GRAY} at the {COLOR GREEN}Kipos Zoo{COLOR DARK_GRAY}! That would\l"
	.string "make my trip way better.$"

PalatiCity_House7_EventScript_HexManiac_Text_4:
# 35 "data/maps/PalatiCity_House7/scripts.pory"
	.string "I've been busy packing for my trip to\n"
	.string "the zoo in Kipos Town. Are there\l"
	.string "Pokémon in the Ruins Exhibit?$"

PalatiCity_House7_EventScript_HexManiac_Text_5:
# 43 "data/maps/PalatiCity_House7/scripts.pory"
	.string "Yay! I can't wait to see the creepy,\n"
	.string "crawly, cute Pokémon!\p"
	.string "Before I go, I'll give you something.\n"
	.string "Thanks for everything you do!$"

PalatiCity_House7_EventScript_HexManiac_Text_6:
# 54 "data/maps/PalatiCity_House7/scripts.pory"
	.string "No? Aw...\p"
	.string "Remember, before I go to Kipos Zoo, I\n"
	.string "want you to fill the {COLOR GREEN}Ruins Exhibit{COLOR DARK_GRAY} with\l"
	.string "cool Pokémon. I'll give you a TM for it!$"

PalatiCity_House7_EventScript_Gastly_Text_0:
# 66 "data/maps/PalatiCity_House7/scripts.pory"
	.string "Gastly$"

PalatiCity_House7_EventScript_Gastly_Text_1:
# 68 "data/maps/PalatiCity_House7/scripts.pory"
	.string "Kehehee...!$"

PalatiCity_House7_EventScript_ZoruaHisui_Text_0:
# 79 "data/maps/PalatiCity_House7/scripts.pory"
	.string "Zorua$"

PalatiCity_House7_EventScript_ZoruaHisui_Text_1:
# 81 "data/maps/PalatiCity_House7/scripts.pory"
	.string "Hreeow!$"

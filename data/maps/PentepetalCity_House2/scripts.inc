PentepetalCity_House2_MapScripts::
	.byte 0


PentepetalCity_House2_EventScript_Woman::
# 5 "data/maps/PentepetalCity_House2/scripts.pory"
	lock
# 6 "data/maps/PentepetalCity_House2/scripts.pory"
	faceplayer
# 7 "data/maps/PentepetalCity_House2/scripts.pory"
	speakername PentepetalCity_House2_EventScript_Woman_Text_0
# 10 "data/maps/PentepetalCity_House2/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_BRING_ARCANINE_DOLL_TO_WOMAN
# 11 "data/maps/PentepetalCity_House2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PentepetalCity_House2_EventScript_Woman_2
# 20 "data/maps/PentepetalCity_House2/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_BRING_ARCANINE_DOLL_TO_WOMAN
# 21 "data/maps/PentepetalCity_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PentepetalCity_House2_EventScript_Woman_5
# 31 "data/maps/PentepetalCity_House2/scripts.pory"
	msgbox PentepetalCity_House2_EventScript_Woman_Text_3
# 32 "data/maps/PentepetalCity_House2/scripts.pory"
	closemessage
# 34 "data/maps/PentepetalCity_House2/scripts.pory"
	checkdecor DECOR_ARCANINE_DOLL
# 35 "data/maps/PentepetalCity_House2/scripts.pory"
	delay 30
# 37 "data/maps/PentepetalCity_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PentepetalCity_House2_EventScript_Woman_8
# 45 "data/maps/PentepetalCity_House2/scripts.pory"
	removedecoration DECOR_ARCANINE_DOLL
# 47 "data/maps/PentepetalCity_House2/scripts.pory"
	speakername PentepetalCity_House2_EventScript_Woman_Text_0
# 48 "data/maps/PentepetalCity_House2/scripts.pory"
	msgbox PentepetalCity_House2_EventScript_Woman_Text_5
# 49 "data/maps/PentepetalCity_House2/scripts.pory"
	closemessage
# 50 "data/maps/PentepetalCity_House2/scripts.pory"
	givedecoration DECOR_DRAGON_POSTER
# 51 "data/maps/PentepetalCity_House2/scripts.pory"
	closemessage
# 53 "data/maps/PentepetalCity_House2/scripts.pory"
	delay 20
# 54 "data/maps/PentepetalCity_House2/scripts.pory"
	completequest QUEST_BRING_ARCANINE_DOLL_TO_WOMAN
PentepetalCity_House2_EventScript_Woman_4:
# 57 "data/maps/PentepetalCity_House2/scripts.pory"
	release
	end

PentepetalCity_House2_EventScript_Woman_2:
# 13 "data/maps/PentepetalCity_House2/scripts.pory"
	msgbox PentepetalCity_House2_EventScript_Woman_Text_1
# 14 "data/maps/PentepetalCity_House2/scripts.pory"
	closemessage
# 15 "data/maps/PentepetalCity_House2/scripts.pory"
	release
	end

PentepetalCity_House2_EventScript_Woman_5:
# 23 "data/maps/PentepetalCity_House2/scripts.pory"
	msgbox PentepetalCity_House2_EventScript_Woman_Text_2
# 24 "data/maps/PentepetalCity_House2/scripts.pory"
	closemessage
# 26 "data/maps/PentepetalCity_House2/scripts.pory"
	delay 20
# 27 "data/maps/PentepetalCity_House2/scripts.pory"
	startquest QUEST_BRING_ARCANINE_DOLL_TO_WOMAN
	goto PentepetalCity_House2_EventScript_Woman_4

PentepetalCity_House2_EventScript_Woman_8:
# 39 "data/maps/PentepetalCity_House2/scripts.pory"
	speakername PentepetalCity_House2_EventScript_Woman_Text_0
# 40 "data/maps/PentepetalCity_House2/scripts.pory"
	msgbox PentepetalCity_House2_EventScript_Woman_Text_4
# 41 "data/maps/PentepetalCity_House2/scripts.pory"
	closemessage
	goto PentepetalCity_House2_EventScript_Woman_4


PentepetalCity_House2_EventScript_Doll::
# 63 "data/maps/PentepetalCity_House2/scripts.pory"
	lock
# 64 "data/maps/PentepetalCity_House2/scripts.pory"
	msgbox PentepetalCity_House2_EventScript_Doll_Text_0
# 65 "data/maps/PentepetalCity_House2/scripts.pory"
	closemessage
# 66 "data/maps/PentepetalCity_House2/scripts.pory"
	release
	end


PentepetalCity_House2_EventScript_Woman_Text_0:
# 7 "data/maps/PentepetalCity_House2/scripts.pory"
	.string "Woman$"

PentepetalCity_House2_EventScript_Woman_Text_1:
# 13 "data/maps/PentepetalCity_House2/scripts.pory"
	.string "Ehehe, my girlfriend will love the\n"
	.string "Hisuian Arcanine Doll when she gets\l"
	.string "home! It'll be the peak of her\l"
	.string "collection.$"

PentepetalCity_House2_EventScript_Woman_Text_2:
# 23 "data/maps/PentepetalCity_House2/scripts.pory"
	.string "My girlfriend's birthday is coming soon,\n"
	.string "but I haven't been able to get her the\l"
	.string "gift she really wants...\p"
	.string "Maybe you can help me! She loves\n"
	.string "Hisuian Arcanine, so I want to get her\l"
	.string "the {COLOR GREEN}Hisuian Arcanine Doll{COLOR DARK_GRAY} from the\l"
	.string "Decor shop nearby. If you get one,\l"
	.string "please bring it to me!$"

PentepetalCity_House2_EventScript_Woman_Text_3:
# 31 "data/maps/PentepetalCity_House2/scripts.pory"
	.string "Hiya! Perfect timing, my girlfriend is\n"
	.string "out of town right now. Do you have the\l"
	.string "gift I want for her birthday?$"

PentepetalCity_House2_EventScript_Woman_Text_4:
# 40 "data/maps/PentepetalCity_House2/scripts.pory"
	.string "Aw, looks like you don't have a {COLOR GREEN}Hisuian\n"
	.string "Arcanine Doll{COLOR DARK_GRAY}. If you get one, let me\l"
	.string "know - my girlfriend would love one for\l"
	.string "her birthday!$"

PentepetalCity_House2_EventScript_Woman_Text_5:
# 48 "data/maps/PentepetalCity_House2/scripts.pory"
	.string "Wow, you actually got the {COLOR GREEN}Hisuian\n"
	.string "Arcanine Doll{COLOR DARK_GRAY}! This will go great with\l"
	.string "the rest of her collection.\p"
	.string "Wait, you should get something for this!\n"
	.string "I just finished painting this {COLOR GREEN}Dragon\l"
	.string "Poster Decoration{COLOR DARK_GRAY}, it's all yours!$"

PentepetalCity_House2_EventScript_Doll_Text_0:
# 64 "data/maps/PentepetalCity_House2/scripts.pory"
	.string "It's a cute Pokémon Doll! It's so cozy!$"

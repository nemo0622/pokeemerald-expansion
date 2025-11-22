PentepetalCity_House1_MapScripts::
	.byte 0


PentepetalCity_House1_EventScript_Farmer::
# 5 "data/maps/PentepetalCity_House1/scripts.pory"
	lock
# 6 "data/maps/PentepetalCity_House1/scripts.pory"
	faceplayer
# 7 "data/maps/PentepetalCity_House1/scripts.pory"
	speakername PentepetalCity_House1_EventScript_Farmer_Text_0
# 8 "data/maps/PentepetalCity_House1/scripts.pory"
	msgbox PentepetalCity_House1_EventScript_Farmer_Text_1
# 9 "data/maps/PentepetalCity_House1/scripts.pory"
	closemessage
# 10 "data/maps/PentepetalCity_House1/scripts.pory"
	release
	end


PentepetalCity_House1_EventScript_Woman::
# 16 "data/maps/PentepetalCity_House1/scripts.pory"
	lock
# 17 "data/maps/PentepetalCity_House1/scripts.pory"
	faceplayer
# 18 "data/maps/PentepetalCity_House1/scripts.pory"
	speakername PentepetalCity_House1_EventScript_Woman_Text_0
# 19 "data/maps/PentepetalCity_House1/scripts.pory"
	checkoutfitflag OUTFIT_PETAL
# 21 "data/maps/PentepetalCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PentepetalCity_House1_EventScript_Woman_2
# 71 "data/maps/PentepetalCity_House1/scripts.pory"
	msgbox PentepetalCity_House1_EventScript_Woman_Text_7
# 72 "data/maps/PentepetalCity_House1/scripts.pory"
	closemessage
PentepetalCity_House1_EventScript_Woman_1:
# 74 "data/maps/PentepetalCity_House1/scripts.pory"
	release
	end

PentepetalCity_House1_EventScript_Woman_2:
# 23 "data/maps/PentepetalCity_House1/scripts.pory"
	msgbox PentepetalCity_House1_EventScript_Woman_Text_1
# 24 "data/maps/PentepetalCity_House1/scripts.pory"
	closemessage
# 25 "data/maps/PentepetalCity_House1/scripts.pory"
	delay 5
# 26 "data/maps/PentepetalCity_House1/scripts.pory"
	showmoneybox 0, 0
# 27 "data/maps/PentepetalCity_House1/scripts.pory"
	speakername PentepetalCity_House1_EventScript_Woman_Text_0
# 28 "data/maps/PentepetalCity_House1/scripts.pory"
	msgbox PentepetalCity_House1_EventScript_Woman_Text_2, MSGBOX_YESNO
# 29 "data/maps/PentepetalCity_House1/scripts.pory"
	closemessage
# 30 "data/maps/PentepetalCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PentepetalCity_House1_EventScript_Woman_5
# 42 "data/maps/PentepetalCity_House1/scripts.pory"
	checkmoney 9000
# 43 "data/maps/PentepetalCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PentepetalCity_House1_EventScript_Woman_8
# 54 "data/maps/PentepetalCity_House1/scripts.pory"
	removemoney 9000
# 55 "data/maps/PentepetalCity_House1/scripts.pory"
	updatemoneybox
# 56 "data/maps/PentepetalCity_House1/scripts.pory"
	delay 5
# 57 "data/maps/PentepetalCity_House1/scripts.pory"
	unlockoutfit OUTFIT_PETAL
# 58 "data/maps/PentepetalCity_House1/scripts.pory"
	msgbox PentepetalCity_House1_EventScript_Woman_Text_5
# 59 "data/maps/PentepetalCity_House1/scripts.pory"
	delay 20
# 60 "data/maps/PentepetalCity_House1/scripts.pory"
	closemessage
# 61 "data/maps/PentepetalCity_House1/scripts.pory"
	hidemoneybox
# 62 "data/maps/PentepetalCity_House1/scripts.pory"
	delay 5
# 63 "data/maps/PentepetalCity_House1/scripts.pory"
	speakername PentepetalCity_House1_EventScript_Woman_Text_0
# 64 "data/maps/PentepetalCity_House1/scripts.pory"
	msgbox PentepetalCity_House1_EventScript_Woman_Text_6
# 65 "data/maps/PentepetalCity_House1/scripts.pory"
	closemessage
	goto PentepetalCity_House1_EventScript_Woman_1

PentepetalCity_House1_EventScript_Woman_5:
# 32 "data/maps/PentepetalCity_House1/scripts.pory"
	hidemoneybox
# 33 "data/maps/PentepetalCity_House1/scripts.pory"
	speakername PentepetalCity_House1_EventScript_Woman_Text_0
# 34 "data/maps/PentepetalCity_House1/scripts.pory"
	msgbox PentepetalCity_House1_EventScript_Woman_Text_3
# 35 "data/maps/PentepetalCity_House1/scripts.pory"
	closemessage
# 36 "data/maps/PentepetalCity_House1/scripts.pory"
	release
	end

PentepetalCity_House1_EventScript_Woman_8:
# 45 "data/maps/PentepetalCity_House1/scripts.pory"
	hidemoneybox
# 46 "data/maps/PentepetalCity_House1/scripts.pory"
	speakername PentepetalCity_House1_EventScript_Woman_Text_0
# 47 "data/maps/PentepetalCity_House1/scripts.pory"
	msgbox PentepetalCity_House1_EventScript_Woman_Text_4
# 48 "data/maps/PentepetalCity_House1/scripts.pory"
	closemessage
# 49 "data/maps/PentepetalCity_House1/scripts.pory"
	release
	end


PentepetalCity_House1_EventScript_Jangmo_O::
# 80 "data/maps/PentepetalCity_House1/scripts.pory"
	lock
# 81 "data/maps/PentepetalCity_House1/scripts.pory"
	faceplayer
# 82 "data/maps/PentepetalCity_House1/scripts.pory"
	speakername PentepetalCity_House1_EventScript_Jangmo_O_Text_0
# 83 "data/maps/PentepetalCity_House1/scripts.pory"
	playmoncry SPECIES_JANGMO_O, CRY_MODE_NORMAL
# 84 "data/maps/PentepetalCity_House1/scripts.pory"
	msgbox PentepetalCity_House1_EventScript_Jangmo_O_Text_1
# 85 "data/maps/PentepetalCity_House1/scripts.pory"
	waitmoncry
# 86 "data/maps/PentepetalCity_House1/scripts.pory"
	closemessage
# 87 "data/maps/PentepetalCity_House1/scripts.pory"
	release
	end


PentepetalCity_House1_EventScript_Farmer_Text_0:
# 7 "data/maps/PentepetalCity_House1/scripts.pory"
	.string "Farmer$"

PentepetalCity_House1_EventScript_Farmer_Text_1:
# 8 "data/maps/PentepetalCity_House1/scripts.pory"
	.string "Some Pokémon can be found all over the\n"
	.string "Ilios Region, while others are only\l"
	.string "found on specific islands. For example,\l"
	.string "my Jangmo-o is pretty darn rare outside\l"
	.string "of the Sea of Asteri!$"

PentepetalCity_House1_EventScript_Woman_Text_0:
# 18 "data/maps/PentepetalCity_House1/scripts.pory"
	.string "Fancy Lady$"

PentepetalCity_House1_EventScript_Woman_Text_1:
# 23 "data/maps/PentepetalCity_House1/scripts.pory"
	.string "We just do it differently in ol'\n"
	.string "Péntepetal City!$"

PentepetalCity_House1_EventScript_Woman_Text_2:
# 28 "data/maps/PentepetalCity_House1/scripts.pory"
	.string "I was inspired by the gorgeous\n"
	.string "wildflowers around the city! I'll give\l"
	.string "you this {COLOR GREEN}5-Petal Style Outfit{COLOR DARK_GRAY} for just\l"
	.string "¥9000. How about it?$"

PentepetalCity_House1_EventScript_Woman_Text_3:
# 34 "data/maps/PentepetalCity_House1/scripts.pory"
	.string "No? Do you not appreciate the beauty\n"
	.string "of flowers like I do?$"

PentepetalCity_House1_EventScript_Woman_Text_4:
# 47 "data/maps/PentepetalCity_House1/scripts.pory"
	.string "Hm, looks like you're just short on cash.\n"
	.string "Come back with a bit more money on you!$"

PentepetalCity_House1_EventScript_Woman_Text_5:
# 58 "data/maps/PentepetalCity_House1/scripts.pory"
	.string "The 5-Petal Style Outfit has been\n"
	.string "added to the Outfit Box!$"

PentepetalCity_House1_EventScript_Woman_Text_6:
# 64 "data/maps/PentepetalCity_House1/scripts.pory"
	.string "Ahaha, yay! Now everyone will see my\n"
	.string "gorgeous clothing!$"

PentepetalCity_House1_EventScript_Woman_Text_7:
# 71 "data/maps/PentepetalCity_House1/scripts.pory"
	.string "I made the 5-Petal Style Outfit myself,\n"
	.string "just for a Trainer like you!$"

PentepetalCity_House1_EventScript_Jangmo_O_Text_0:
# 82 "data/maps/PentepetalCity_House1/scripts.pory"
	.string "Jangmo-o$"

PentepetalCity_House1_EventScript_Jangmo_O_Text_1:
# 84 "data/maps/PentepetalCity_House1/scripts.pory"
	.string "Khraah!$"

KalamiCity_House4_MapScripts::
	.byte 0


KalamiCity_House4_EventScript_Farmer::
# 5 "data/maps/KalamiCity_House4/scripts.pory"
	lock
# 6 "data/maps/KalamiCity_House4/scripts.pory"
	faceplayer
# 7 "data/maps/KalamiCity_House4/scripts.pory"
	speakername KalamiCity_House4_EventScript_Farmer_Text_0
# 8 "data/maps/KalamiCity_House4/scripts.pory"
	msgbox KalamiCity_House4_EventScript_Farmer_Text_1
# 9 "data/maps/KalamiCity_House4/scripts.pory"
	closemessage
# 10 "data/maps/KalamiCity_House4/scripts.pory"
	release
	end


KalamiCity_House4_EventScript_Woman::
# 16 "data/maps/KalamiCity_House4/scripts.pory"
	lock
# 17 "data/maps/KalamiCity_House4/scripts.pory"
	faceplayer
# 18 "data/maps/KalamiCity_House4/scripts.pory"
	speakername KalamiCity_House4_EventScript_Woman_Text_0
# 19 "data/maps/KalamiCity_House4/scripts.pory"
	msgbox KalamiCity_House4_EventScript_Woman_Text_1
# 20 "data/maps/KalamiCity_House4/scripts.pory"
	closemessage
# 21 "data/maps/KalamiCity_House4/scripts.pory"
	release
	end


KalamiCity_House4_EventScript_Pikachu::
# 27 "data/maps/KalamiCity_House4/scripts.pory"
	lock
# 28 "data/maps/KalamiCity_House4/scripts.pory"
	faceplayer
# 29 "data/maps/KalamiCity_House4/scripts.pory"
	speakername KalamiCity_House4_EventScript_Pikachu_Text_0
# 30 "data/maps/KalamiCity_House4/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 31 "data/maps/KalamiCity_House4/scripts.pory"
	msgbox KalamiCity_House4_EventScript_Pikachu_Text_1
# 32 "data/maps/KalamiCity_House4/scripts.pory"
	waitmoncry
# 33 "data/maps/KalamiCity_House4/scripts.pory"
	closemessage
# 34 "data/maps/KalamiCity_House4/scripts.pory"
	release
	end


KalamiCity_House4_EventScript_TropicalYellowOutfitLady::
# 40 "data/maps/KalamiCity_House4/scripts.pory"
	lock
# 41 "data/maps/KalamiCity_House4/scripts.pory"
	faceplayer
# 42 "data/maps/KalamiCity_House4/scripts.pory"
	speakername KalamiCity_House4_EventScript_TropicalYellowOutfitLady_Text_0
# 43 "data/maps/KalamiCity_House4/scripts.pory"
	checkoutfitflag OUTFIT_TROPICS
# 45 "data/maps/KalamiCity_House4/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KalamiCity_House4_EventScript_TropicalYellowOutfitLady_2
# 95 "data/maps/KalamiCity_House4/scripts.pory"
	msgbox KalamiCity_House4_EventScript_TropicalYellowOutfitLady_Text_7
# 96 "data/maps/KalamiCity_House4/scripts.pory"
	closemessage
KalamiCity_House4_EventScript_TropicalYellowOutfitLady_1:
# 98 "data/maps/KalamiCity_House4/scripts.pory"
	release
	end

KalamiCity_House4_EventScript_TropicalYellowOutfitLady_2:
# 47 "data/maps/KalamiCity_House4/scripts.pory"
	msgbox KalamiCity_House4_EventScript_TropicalYellowOutfitLady_Text_1
# 48 "data/maps/KalamiCity_House4/scripts.pory"
	closemessage
# 49 "data/maps/KalamiCity_House4/scripts.pory"
	delay 5
# 50 "data/maps/KalamiCity_House4/scripts.pory"
	showmoneybox 0, 0
# 51 "data/maps/KalamiCity_House4/scripts.pory"
	speakername KalamiCity_House4_EventScript_TropicalYellowOutfitLady_Text_0
# 52 "data/maps/KalamiCity_House4/scripts.pory"
	msgbox KalamiCity_House4_EventScript_TropicalYellowOutfitLady_Text_2, MSGBOX_YESNO
# 53 "data/maps/KalamiCity_House4/scripts.pory"
	closemessage
# 54 "data/maps/KalamiCity_House4/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KalamiCity_House4_EventScript_TropicalYellowOutfitLady_5
# 66 "data/maps/KalamiCity_House4/scripts.pory"
	checkmoney 3000
# 67 "data/maps/KalamiCity_House4/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KalamiCity_House4_EventScript_TropicalYellowOutfitLady_8
# 78 "data/maps/KalamiCity_House4/scripts.pory"
	removemoney 3000
# 79 "data/maps/KalamiCity_House4/scripts.pory"
	updatemoneybox
# 80 "data/maps/KalamiCity_House4/scripts.pory"
	delay 5
# 81 "data/maps/KalamiCity_House4/scripts.pory"
	unlockoutfit OUTFIT_TROPICS
# 82 "data/maps/KalamiCity_House4/scripts.pory"
	msgbox KalamiCity_House4_EventScript_TropicalYellowOutfitLady_Text_5
# 83 "data/maps/KalamiCity_House4/scripts.pory"
	delay 20
# 84 "data/maps/KalamiCity_House4/scripts.pory"
	closemessage
# 85 "data/maps/KalamiCity_House4/scripts.pory"
	hidemoneybox
# 86 "data/maps/KalamiCity_House4/scripts.pory"
	delay 5
# 87 "data/maps/KalamiCity_House4/scripts.pory"
	speakername KalamiCity_House4_EventScript_TropicalYellowOutfitLady_Text_0
# 88 "data/maps/KalamiCity_House4/scripts.pory"
	msgbox KalamiCity_House4_EventScript_TropicalYellowOutfitLady_Text_6
# 89 "data/maps/KalamiCity_House4/scripts.pory"
	closemessage
	goto KalamiCity_House4_EventScript_TropicalYellowOutfitLady_1

KalamiCity_House4_EventScript_TropicalYellowOutfitLady_5:
# 56 "data/maps/KalamiCity_House4/scripts.pory"
	hidemoneybox
# 57 "data/maps/KalamiCity_House4/scripts.pory"
	speakername KalamiCity_House4_EventScript_TropicalYellowOutfitLady_Text_0
# 58 "data/maps/KalamiCity_House4/scripts.pory"
	msgbox KalamiCity_House4_EventScript_TropicalYellowOutfitLady_Text_3
# 59 "data/maps/KalamiCity_House4/scripts.pory"
	closemessage
# 60 "data/maps/KalamiCity_House4/scripts.pory"
	release
	end

KalamiCity_House4_EventScript_TropicalYellowOutfitLady_8:
# 69 "data/maps/KalamiCity_House4/scripts.pory"
	hidemoneybox
# 70 "data/maps/KalamiCity_House4/scripts.pory"
	speakername KalamiCity_House4_EventScript_TropicalYellowOutfitLady_Text_0
# 71 "data/maps/KalamiCity_House4/scripts.pory"
	msgbox KalamiCity_House4_EventScript_TropicalYellowOutfitLady_Text_4
# 72 "data/maps/KalamiCity_House4/scripts.pory"
	closemessage
# 73 "data/maps/KalamiCity_House4/scripts.pory"
	release
	end


KalamiCity_House4_EventScript_Farmer_Text_0:
# 7 "data/maps/KalamiCity_House4/scripts.pory"
	.string "Farmer$"

KalamiCity_House4_EventScript_Farmer_Text_1:
# 8 "data/maps/KalamiCity_House4/scripts.pory"
	.string "Most buildings on this side of Kalami\n"
	.string "City are actually storage warehouses,\l"
	.string "not homes. Pokémon from the swamp\l"
	.string "sneak in sometimes.$"

KalamiCity_House4_EventScript_Woman_Text_0:
# 18 "data/maps/KalamiCity_House4/scripts.pory"
	.string "Woman$"

KalamiCity_House4_EventScript_Woman_Text_1:
# 19 "data/maps/KalamiCity_House4/scripts.pory"
	.string "Some people make rafts which can float\n"
	.string "up and down the rivers here. I want to\l"
	.string "ride on one someday!$"

KalamiCity_House4_EventScript_Pikachu_Text_0:
# 29 "data/maps/KalamiCity_House4/scripts.pory"
	.string "Pikachu$"

KalamiCity_House4_EventScript_Pikachu_Text_1:
# 31 "data/maps/KalamiCity_House4/scripts.pory"
	.string "Chuuu!$"

KalamiCity_House4_EventScript_TropicalYellowOutfitLady_Text_0:
# 42 "data/maps/KalamiCity_House4/scripts.pory"
	.string "Sunny Lady$"

KalamiCity_House4_EventScript_TropicalYellowOutfitLady_Text_1:
# 47 "data/maps/KalamiCity_House4/scripts.pory"
	.string "Yellow, yellow, yellow! I love the color\n"
	.string "yellow!$"

KalamiCity_House4_EventScript_TropicalYellowOutfitLady_Text_2:
# 52 "data/maps/KalamiCity_House4/scripts.pory"
	.string "I was inspired by the beautiful, bright\n"
	.string "sun and yellow flowers of the forest.\l"
	.string "I'll give you this {COLOR GREEN}Tropical Yellow Outfit{COLOR DARK_GRAY}\l"
	.string "for just ¥3000. How about it?$"

KalamiCity_House4_EventScript_TropicalYellowOutfitLady_Text_3:
# 58 "data/maps/KalamiCity_House4/scripts.pory"
	.string "No? Do you not appreciate the beauty\n"
	.string "of yellow like I do?$"

KalamiCity_House4_EventScript_TropicalYellowOutfitLady_Text_4:
# 71 "data/maps/KalamiCity_House4/scripts.pory"
	.string "Hm, looks like you're just short on cash.\n"
	.string "Come back with a bit more money on you!$"

KalamiCity_House4_EventScript_TropicalYellowOutfitLady_Text_5:
# 82 "data/maps/KalamiCity_House4/scripts.pory"
	.string "The Tropical Yellow Outfit has been\n"
	.string "added to the Outfit Box!$"

KalamiCity_House4_EventScript_TropicalYellowOutfitLady_Text_6:
# 88 "data/maps/KalamiCity_House4/scripts.pory"
	.string "Ahaha, yay! Now everyone will see my\n"
	.string "sunny clothing!$"

KalamiCity_House4_EventScript_TropicalYellowOutfitLady_Text_7:
# 95 "data/maps/KalamiCity_House4/scripts.pory"
	.string "I made the Tropical Yellow Outfit\n"
	.string "myself, just for an active Trainer like\l"
	.string "you!$"

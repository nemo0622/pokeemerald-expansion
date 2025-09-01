PalatiCity_House3_MapScripts::
	.byte 0


PalatiCity_House3_EventScript_Athlete::
# 5 "data/maps/PalatiCity_House3/scripts.pory"
	lock
# 6 "data/maps/PalatiCity_House3/scripts.pory"
	faceplayer
# 7 "data/maps/PalatiCity_House3/scripts.pory"
	speakername PalatiCity_House3_EventScript_Athlete_Text_0
# 8 "data/maps/PalatiCity_House3/scripts.pory"
	msgbox PalatiCity_House3_EventScript_Athlete_Text_1
# 9 "data/maps/PalatiCity_House3/scripts.pory"
	closemessage
# 10 "data/maps/PalatiCity_House3/scripts.pory"
	release
	end


PalatiCity_House3_EventScript_Man::
# 16 "data/maps/PalatiCity_House3/scripts.pory"
	lock
# 17 "data/maps/PalatiCity_House3/scripts.pory"
	faceplayer
# 18 "data/maps/PalatiCity_House3/scripts.pory"
	speakername PalatiCity_House3_EventScript_Man_Text_0
# 19 "data/maps/PalatiCity_House3/scripts.pory"
	msgbox PalatiCity_House3_EventScript_Man_Text_1
# 20 "data/maps/PalatiCity_House3/scripts.pory"
	closemessage
# 21 "data/maps/PalatiCity_House3/scripts.pory"
	release
	end


PalatiCity_House3_EventScript_OldPalatiOutfitBeauty::
# 27 "data/maps/PalatiCity_House3/scripts.pory"
	lock
# 28 "data/maps/PalatiCity_House3/scripts.pory"
	faceplayer
# 29 "data/maps/PalatiCity_House3/scripts.pory"
	speakername PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_Text_0
# 30 "data/maps/PalatiCity_House3/scripts.pory"
	checkoutfitflag OUTFIT_PALATI
# 32 "data/maps/PalatiCity_House3/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_2
# 82 "data/maps/PalatiCity_House3/scripts.pory"
	msgbox PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_Text_7
# 83 "data/maps/PalatiCity_House3/scripts.pory"
	closemessage
PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_1:
# 85 "data/maps/PalatiCity_House3/scripts.pory"
	release
	end

PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_2:
# 34 "data/maps/PalatiCity_House3/scripts.pory"
	msgbox PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_Text_1
# 35 "data/maps/PalatiCity_House3/scripts.pory"
	closemessage
# 36 "data/maps/PalatiCity_House3/scripts.pory"
	delay 5
# 37 "data/maps/PalatiCity_House3/scripts.pory"
	showmoneybox 0, 0
# 38 "data/maps/PalatiCity_House3/scripts.pory"
	speakername PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_Text_0
# 39 "data/maps/PalatiCity_House3/scripts.pory"
	msgbox PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_Text_2, MSGBOX_YESNO
# 40 "data/maps/PalatiCity_House3/scripts.pory"
	closemessage
# 41 "data/maps/PalatiCity_House3/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_5
# 53 "data/maps/PalatiCity_House3/scripts.pory"
	checkmoney 15000
# 54 "data/maps/PalatiCity_House3/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_8
# 65 "data/maps/PalatiCity_House3/scripts.pory"
	removemoney 15000
# 66 "data/maps/PalatiCity_House3/scripts.pory"
	updatemoneybox
# 67 "data/maps/PalatiCity_House3/scripts.pory"
	delay 5
# 68 "data/maps/PalatiCity_House3/scripts.pory"
	unlockoutfit OUTFIT_PALATI
# 69 "data/maps/PalatiCity_House3/scripts.pory"
	msgbox PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_Text_5
# 70 "data/maps/PalatiCity_House3/scripts.pory"
	delay 20
# 71 "data/maps/PalatiCity_House3/scripts.pory"
	closemessage
# 72 "data/maps/PalatiCity_House3/scripts.pory"
	hidemoneybox
# 73 "data/maps/PalatiCity_House3/scripts.pory"
	delay 5
# 74 "data/maps/PalatiCity_House3/scripts.pory"
	speakername PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_Text_0
# 75 "data/maps/PalatiCity_House3/scripts.pory"
	msgbox PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_Text_6
# 76 "data/maps/PalatiCity_House3/scripts.pory"
	closemessage
	goto PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_1

PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_5:
# 43 "data/maps/PalatiCity_House3/scripts.pory"
	hidemoneybox
# 44 "data/maps/PalatiCity_House3/scripts.pory"
	speakername PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_Text_0
# 45 "data/maps/PalatiCity_House3/scripts.pory"
	msgbox PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_Text_3
# 46 "data/maps/PalatiCity_House3/scripts.pory"
	closemessage
# 47 "data/maps/PalatiCity_House3/scripts.pory"
	release
	end

PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_8:
# 56 "data/maps/PalatiCity_House3/scripts.pory"
	hidemoneybox
# 57 "data/maps/PalatiCity_House3/scripts.pory"
	speakername PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_Text_0
# 58 "data/maps/PalatiCity_House3/scripts.pory"
	msgbox PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_Text_4
# 59 "data/maps/PalatiCity_House3/scripts.pory"
	closemessage
# 60 "data/maps/PalatiCity_House3/scripts.pory"
	release
	end


PalatiCity_House3_EventScript_Athlete_Text_0:
# 7 "data/maps/PalatiCity_House3/scripts.pory"
	.string "Athlete$"

PalatiCity_House3_EventScript_Athlete_Text_1:
# 8 "data/maps/PalatiCity_House3/scripts.pory"
	.string "Huff huff... I just got back from a run\n"
	.string "around the island.$"

PalatiCity_House3_EventScript_Man_Text_0:
# 18 "data/maps/PalatiCity_House3/scripts.pory"
	.string "Man$"

PalatiCity_House3_EventScript_Man_Text_1:
# 19 "data/maps/PalatiCity_House3/scripts.pory"
	.string "The Gym Leader, Rhadine, is one of the\n"
	.string "most beautiful women in the region. If I\l"
	.string "catch a good Rock-type Pokémon, maybe\l"
	.string "I'll give the Gym a shot.$"

PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_Text_0:
# 29 "data/maps/PalatiCity_House3/scripts.pory"
	.string "Fashionista$"

PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_Text_1:
# 34 "data/maps/PalatiCity_House3/scripts.pory"
	.string "Ehehe, look at my little Tirtouga doll! I\n"
	.string "think it's fashionable in its own way.$"

PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_Text_2:
# 39 "data/maps/PalatiCity_House3/scripts.pory"
	.string "I can tell you have a sharp eye for\n"
	.string "fashion! I'll give you this {COLOR GREEN}Old Palati\l"
	.string "Style Outfit{COLOR DARK_GRAY} for just ¥15000. How about\l"
	.string "it?$"

PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_Text_3:
# 45 "data/maps/PalatiCity_House3/scripts.pory"
	.string "No? But I thought you were into\n"
	.string "fashion!$"

PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_Text_4:
# 58 "data/maps/PalatiCity_House3/scripts.pory"
	.string "Hey, you don't have the money for that!$"

PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_Text_5:
# 69 "data/maps/PalatiCity_House3/scripts.pory"
	.string "The Old Palati Style Outfit has been\n"
	.string "added to the Outfit Box!$"

PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_Text_6:
# 75 "data/maps/PalatiCity_House3/scripts.pory"
	.string "Sweet! The Old Palati Style Outfit is\n"
	.string "based on artwork of ancient people who\l"
	.string "once lived on this island. You can learn\l"
	.string "a lot about cultures through their\l"
	.string "fashion!$"

PalatiCity_House3_EventScript_OldPalatiOutfitBeauty_Text_7:
# 82 "data/maps/PalatiCity_House3/scripts.pory"
	.string "Have you tried on the Old Palati Style\n"
	.string "Outfit? It's one of my personal\l"
	.string "favorites, inspired by the ancient\l"
	.string "cultural traditions of this island!$"

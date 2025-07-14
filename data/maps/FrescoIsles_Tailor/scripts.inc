FrescoIsles_Tailor_MapScripts::
	.byte 0


FrescoIsles_Tailor_EventScript_Tailor::
# 5 "data/maps/FrescoIsles_Tailor/scripts.pory"
	lock
# 6 "data/maps/FrescoIsles_Tailor/scripts.pory"
	faceplayer
# 7 "data/maps/FrescoIsles_Tailor/scripts.pory"
	speakername FrescoIsles_Tailor_EventScript_Tailor_Text_0
# 9 "data/maps/FrescoIsles_Tailor/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_FRESCO_ISLES_TAILOR, FrescoIsles_Tailor_EventScript_Tailor_2
# 22 "data/maps/FrescoIsles_Tailor/scripts.pory"
	msgbox FrescoIsles_Tailor_EventScript_Tailor_Text_2
# 23 "data/maps/FrescoIsles_Tailor/scripts.pory"
	closemessage
# 24 "data/maps/FrescoIsles_Tailor/scripts.pory"
	delay 30
# 27 "data/maps/FrescoIsles_Tailor/scripts.pory"
	speakername FrescoIsles_Tailor_EventScript_Tailor_Text_0
# 28 "data/maps/FrescoIsles_Tailor/scripts.pory"
	getcaughtmon SPECIES_CHIKORITA
# 29 "data/maps/FrescoIsles_Tailor/scripts.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 30 "data/maps/FrescoIsles_Tailor/scripts.pory"
	getcaughtmon SPECIES_TOTODILE
# 31 "data/maps/FrescoIsles_Tailor/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 32 "data/maps/FrescoIsles_Tailor/scripts.pory"
	getcaughtmon SPECIES_CYNDAQUIL
# 33 "data/maps/FrescoIsles_Tailor/scripts.pory"
	copyvar VAR_TEMP_C, VAR_RESULT
# 34 "data/maps/FrescoIsles_Tailor/scripts.pory"
	compare VAR_TEMP_A, FALSE
	goto_if_eq FrescoIsles_Tailor_EventScript_Tailor_5
# 34 "data/maps/FrescoIsles_Tailor/scripts.pory"
	compare VAR_TEMP_B, FALSE
	goto_if_eq FrescoIsles_Tailor_EventScript_Tailor_5
# 34 "data/maps/FrescoIsles_Tailor/scripts.pory"
	compare VAR_TEMP_C, FALSE
	goto_if_eq FrescoIsles_Tailor_EventScript_Tailor_5
# 42 "data/maps/FrescoIsles_Tailor/scripts.pory"
	checkoutfitflag OUTFIT_JOHTO_FASHION
# 43 "data/maps/FrescoIsles_Tailor/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FrescoIsles_Tailor_EventScript_Tailor_20
# 53 "data/maps/FrescoIsles_Tailor/scripts.pory"
	msgbox FrescoIsles_Tailor_EventScript_Tailor_Text_5
# 54 "data/maps/FrescoIsles_Tailor/scripts.pory"
	closemessage
# 55 "data/maps/FrescoIsles_Tailor/scripts.pory"
	delay 30
FrescoIsles_Tailor_EventScript_Tailor_4:
# 60 "data/maps/FrescoIsles_Tailor/scripts.pory"
	speakername FrescoIsles_Tailor_EventScript_Tailor_Text_0
# 61 "data/maps/FrescoIsles_Tailor/scripts.pory"
	getcaughtmon SPECIES_CHESPIN
# 62 "data/maps/FrescoIsles_Tailor/scripts.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 63 "data/maps/FrescoIsles_Tailor/scripts.pory"
	getcaughtmon SPECIES_FROAKIE
# 64 "data/maps/FrescoIsles_Tailor/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 65 "data/maps/FrescoIsles_Tailor/scripts.pory"
	getcaughtmon SPECIES_CYNDAQUIL
# 66 "data/maps/FrescoIsles_Tailor/scripts.pory"
	copyvar VAR_TEMP_C, VAR_RESULT
# 67 "data/maps/FrescoIsles_Tailor/scripts.pory"
	compare VAR_TEMP_A, FALSE
	goto_if_eq FrescoIsles_Tailor_EventScript_Tailor_13
# 67 "data/maps/FrescoIsles_Tailor/scripts.pory"
	compare VAR_TEMP_B, FALSE
	goto_if_eq FrescoIsles_Tailor_EventScript_Tailor_13
# 67 "data/maps/FrescoIsles_Tailor/scripts.pory"
	compare VAR_TEMP_C, FALSE
	goto_if_eq FrescoIsles_Tailor_EventScript_Tailor_13
# 75 "data/maps/FrescoIsles_Tailor/scripts.pory"
	checkoutfitflag OUTFIT_KALOS_FASHION
# 76 "data/maps/FrescoIsles_Tailor/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FrescoIsles_Tailor_EventScript_Tailor_31
# 86 "data/maps/FrescoIsles_Tailor/scripts.pory"
	msgbox FrescoIsles_Tailor_EventScript_Tailor_Text_8
# 87 "data/maps/FrescoIsles_Tailor/scripts.pory"
	closemessage
# 88 "data/maps/FrescoIsles_Tailor/scripts.pory"
	delay 30
FrescoIsles_Tailor_EventScript_Tailor_12:
# 93 "data/maps/FrescoIsles_Tailor/scripts.pory"
	speakername FrescoIsles_Tailor_EventScript_Tailor_Text_0
# 94 "data/maps/FrescoIsles_Tailor/scripts.pory"
	getcaughtmon SPECIES_ROWLET
# 95 "data/maps/FrescoIsles_Tailor/scripts.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 96 "data/maps/FrescoIsles_Tailor/scripts.pory"
	getcaughtmon SPECIES_POPPLIO
# 97 "data/maps/FrescoIsles_Tailor/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 98 "data/maps/FrescoIsles_Tailor/scripts.pory"
	getcaughtmon SPECIES_LITTEN
# 99 "data/maps/FrescoIsles_Tailor/scripts.pory"
	copyvar VAR_TEMP_C, VAR_RESULT
# 100 "data/maps/FrescoIsles_Tailor/scripts.pory"
	compare VAR_TEMP_A, FALSE
	goto_if_eq FrescoIsles_Tailor_EventScript_Tailor_24
# 100 "data/maps/FrescoIsles_Tailor/scripts.pory"
	compare VAR_TEMP_B, FALSE
	goto_if_eq FrescoIsles_Tailor_EventScript_Tailor_24
# 100 "data/maps/FrescoIsles_Tailor/scripts.pory"
	compare VAR_TEMP_C, FALSE
	goto_if_eq FrescoIsles_Tailor_EventScript_Tailor_24
# 108 "data/maps/FrescoIsles_Tailor/scripts.pory"
	checkoutfitflag OUTFIT_ALOLA_FASHION
# 109 "data/maps/FrescoIsles_Tailor/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FrescoIsles_Tailor_EventScript_Tailor_42
# 119 "data/maps/FrescoIsles_Tailor/scripts.pory"
	msgbox FrescoIsles_Tailor_EventScript_Tailor_Text_11
# 120 "data/maps/FrescoIsles_Tailor/scripts.pory"
	closemessage
# 121 "data/maps/FrescoIsles_Tailor/scripts.pory"
	delay 30
FrescoIsles_Tailor_EventScript_Tailor_23:
# 126 "data/maps/FrescoIsles_Tailor/scripts.pory"
	speakername FrescoIsles_Tailor_EventScript_Tailor_Text_0
# 127 "data/maps/FrescoIsles_Tailor/scripts.pory"
	getcaughtmon SPECIES_SPRIGATITO
# 128 "data/maps/FrescoIsles_Tailor/scripts.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 129 "data/maps/FrescoIsles_Tailor/scripts.pory"
	getcaughtmon SPECIES_QUAXLY
# 130 "data/maps/FrescoIsles_Tailor/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 131 "data/maps/FrescoIsles_Tailor/scripts.pory"
	getcaughtmon SPECIES_FUECOCO
# 132 "data/maps/FrescoIsles_Tailor/scripts.pory"
	copyvar VAR_TEMP_C, VAR_RESULT
# 133 "data/maps/FrescoIsles_Tailor/scripts.pory"
	compare VAR_TEMP_A, FALSE
	goto_if_eq FrescoIsles_Tailor_EventScript_Tailor_35
# 133 "data/maps/FrescoIsles_Tailor/scripts.pory"
	compare VAR_TEMP_B, FALSE
	goto_if_eq FrescoIsles_Tailor_EventScript_Tailor_35
# 133 "data/maps/FrescoIsles_Tailor/scripts.pory"
	compare VAR_TEMP_C, FALSE
	goto_if_eq FrescoIsles_Tailor_EventScript_Tailor_35
# 141 "data/maps/FrescoIsles_Tailor/scripts.pory"
	checkoutfitflag OUTFIT_PALDEA_FASHION
# 142 "data/maps/FrescoIsles_Tailor/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FrescoIsles_Tailor_EventScript_Tailor_45
# 152 "data/maps/FrescoIsles_Tailor/scripts.pory"
	msgbox FrescoIsles_Tailor_EventScript_Tailor_Text_14
# 153 "data/maps/FrescoIsles_Tailor/scripts.pory"
	closemessage
# 154 "data/maps/FrescoIsles_Tailor/scripts.pory"
	delay 30
FrescoIsles_Tailor_EventScript_Tailor_34:
# 158 "data/maps/FrescoIsles_Tailor/scripts.pory"
	speakername FrescoIsles_Tailor_EventScript_Tailor_Text_0
# 159 "data/maps/FrescoIsles_Tailor/scripts.pory"
	msgbox FrescoIsles_Tailor_EventScript_Tailor_Text_15
# 160 "data/maps/FrescoIsles_Tailor/scripts.pory"
	closemessage
# 161 "data/maps/FrescoIsles_Tailor/scripts.pory"
	release
	end

FrescoIsles_Tailor_EventScript_Tailor_2:
# 11 "data/maps/FrescoIsles_Tailor/scripts.pory"
	msgbox FrescoIsles_Tailor_EventScript_Tailor_Text_1
# 12 "data/maps/FrescoIsles_Tailor/scripts.pory"
	closemessage
# 13 "data/maps/FrescoIsles_Tailor/scripts.pory"
	setflag FLAG_SPOKE_TO_FRESCO_ISLES_TAILOR
# 14 "data/maps/FrescoIsles_Tailor/scripts.pory"
	release
	end

FrescoIsles_Tailor_EventScript_Tailor_5:
# 36 "data/maps/FrescoIsles_Tailor/scripts.pory"
	msgbox FrescoIsles_Tailor_EventScript_Tailor_Text_3
# 37 "data/maps/FrescoIsles_Tailor/scripts.pory"
	closemessage
# 38 "data/maps/FrescoIsles_Tailor/scripts.pory"
	delay 30
	goto FrescoIsles_Tailor_EventScript_Tailor_4

FrescoIsles_Tailor_EventScript_Tailor_13:
# 69 "data/maps/FrescoIsles_Tailor/scripts.pory"
	msgbox FrescoIsles_Tailor_EventScript_Tailor_Text_6
# 70 "data/maps/FrescoIsles_Tailor/scripts.pory"
	closemessage
# 71 "data/maps/FrescoIsles_Tailor/scripts.pory"
	delay 30
	goto FrescoIsles_Tailor_EventScript_Tailor_12

FrescoIsles_Tailor_EventScript_Tailor_20:
# 45 "data/maps/FrescoIsles_Tailor/scripts.pory"
	msgbox FrescoIsles_Tailor_EventScript_Tailor_Text_4
# 46 "data/maps/FrescoIsles_Tailor/scripts.pory"
	closemessage
# 47 "data/maps/FrescoIsles_Tailor/scripts.pory"
	delay 5
# 48 "data/maps/FrescoIsles_Tailor/scripts.pory"
	unlockoutfit OUTFIT_JOHTO_FASHION
# 49 "data/maps/FrescoIsles_Tailor/scripts.pory"
	delay 30
	goto FrescoIsles_Tailor_EventScript_Tailor_4

FrescoIsles_Tailor_EventScript_Tailor_24:
# 102 "data/maps/FrescoIsles_Tailor/scripts.pory"
	msgbox FrescoIsles_Tailor_EventScript_Tailor_Text_9
# 103 "data/maps/FrescoIsles_Tailor/scripts.pory"
	closemessage
# 104 "data/maps/FrescoIsles_Tailor/scripts.pory"
	delay 30
	goto FrescoIsles_Tailor_EventScript_Tailor_23

FrescoIsles_Tailor_EventScript_Tailor_31:
# 78 "data/maps/FrescoIsles_Tailor/scripts.pory"
	msgbox FrescoIsles_Tailor_EventScript_Tailor_Text_7
# 79 "data/maps/FrescoIsles_Tailor/scripts.pory"
	closemessage
# 80 "data/maps/FrescoIsles_Tailor/scripts.pory"
	delay 5
# 81 "data/maps/FrescoIsles_Tailor/scripts.pory"
	unlockoutfit OUTFIT_KALOS_FASHION
# 82 "data/maps/FrescoIsles_Tailor/scripts.pory"
	delay 30
	goto FrescoIsles_Tailor_EventScript_Tailor_12

FrescoIsles_Tailor_EventScript_Tailor_35:
# 135 "data/maps/FrescoIsles_Tailor/scripts.pory"
	msgbox FrescoIsles_Tailor_EventScript_Tailor_Text_12
# 136 "data/maps/FrescoIsles_Tailor/scripts.pory"
	closemessage
# 137 "data/maps/FrescoIsles_Tailor/scripts.pory"
	delay 30
	goto FrescoIsles_Tailor_EventScript_Tailor_34

FrescoIsles_Tailor_EventScript_Tailor_42:
# 111 "data/maps/FrescoIsles_Tailor/scripts.pory"
	msgbox FrescoIsles_Tailor_EventScript_Tailor_Text_10
# 112 "data/maps/FrescoIsles_Tailor/scripts.pory"
	closemessage
# 113 "data/maps/FrescoIsles_Tailor/scripts.pory"
	delay 5
# 114 "data/maps/FrescoIsles_Tailor/scripts.pory"
	unlockoutfit OUTFIT_ALOLA_FASHION
# 115 "data/maps/FrescoIsles_Tailor/scripts.pory"
	delay 30
	goto FrescoIsles_Tailor_EventScript_Tailor_23

FrescoIsles_Tailor_EventScript_Tailor_45:
# 144 "data/maps/FrescoIsles_Tailor/scripts.pory"
	msgbox FrescoIsles_Tailor_EventScript_Tailor_Text_13
# 145 "data/maps/FrescoIsles_Tailor/scripts.pory"
	closemessage
# 146 "data/maps/FrescoIsles_Tailor/scripts.pory"
	delay 5
# 147 "data/maps/FrescoIsles_Tailor/scripts.pory"
	unlockoutfit OUTFIT_PALDEA_FASHION
# 148 "data/maps/FrescoIsles_Tailor/scripts.pory"
	delay 30
	goto FrescoIsles_Tailor_EventScript_Tailor_34


FrescoIsles_Tailor_EventScript_Yamper::
# 167 "data/maps/FrescoIsles_Tailor/scripts.pory"
	lock
# 168 "data/maps/FrescoIsles_Tailor/scripts.pory"
	faceplayer
# 169 "data/maps/FrescoIsles_Tailor/scripts.pory"
	speakername FrescoIsles_Tailor_EventScript_Yamper_Text_0
# 170 "data/maps/FrescoIsles_Tailor/scripts.pory"
	playmoncry SPECIES_YAMPER, CRY_MODE_NORMAL
# 171 "data/maps/FrescoIsles_Tailor/scripts.pory"
	msgbox FrescoIsles_Tailor_EventScript_Yamper_Text_1
# 172 "data/maps/FrescoIsles_Tailor/scripts.pory"
	waitmoncry
# 173 "data/maps/FrescoIsles_Tailor/scripts.pory"
	closemessage
# 174 "data/maps/FrescoIsles_Tailor/scripts.pory"
	release
	end


FrescoIsles_Tailor_EventScript_Tailor_Text_0:
# 7 "data/maps/FrescoIsles_Tailor/scripts.pory"
	.string "Tailor$"

FrescoIsles_Tailor_EventScript_Tailor_Text_1:
# 11 "data/maps/FrescoIsles_Tailor/scripts.pory"
	.string "Welcome, welcome. I can tell by your\n"
	.string "clothes... You're a Trainer, yes? I make\l"
	.string "{COLOR GREEN}special Outfits{COLOR DARK_GRAY} based on the {COLOR GREEN}fashion of\l"
	.string "other Regions{COLOR DARK_GRAY}, for those willing to meet\l"
	.string "my conditions.\p"
	.string "To unlock the Outfit of another Region,\n"
	.string "you must {COLOR GREEN}catch the Starter Pokémon{COLOR DARK_GRAY}\l"
	.string "native to those areas. Come back to me\l"
	.string "as you fill your Pokédex, and I will\l"
	.string "decide if you're worthy for my Outfits.$"

FrescoIsles_Tailor_EventScript_Tailor_Text_2:
# 22 "data/maps/FrescoIsles_Tailor/scripts.pory"
	.string "Welcome back, Trainer. Have you been\n"
	.string "{COLOR GREEN}collecting Starter Pokémon Trios{COLOR DARK_GRAY}? Let\l"
	.string "me appraise your collection...$"

FrescoIsles_Tailor_EventScript_Tailor_Text_3:
# 36 "data/maps/FrescoIsles_Tailor/scripts.pory"
	.string "You're missing part of the {COLOR GREEN}Johto Region{COLOR DARK_GRAY}\n"
	.string "Starter Trio.$"

FrescoIsles_Tailor_EventScript_Tailor_Text_4:
# 45 "data/maps/FrescoIsles_Tailor/scripts.pory"
	.string "It seems that you've caught {COLOR GREEN}all Johto\n"
	.string "Starter Pokémon{COLOR DARK_GRAY}! Here, I've assembled\l"
	.string "this Special Outfit for you.$"

FrescoIsles_Tailor_EventScript_Tailor_Text_5:
# 53 "data/maps/FrescoIsles_Tailor/scripts.pory"
	.string "You've already unlocked the {COLOR GREEN}Johto\n"
	.string "Outfit{COLOR DARK_GRAY}. Next on the list is...$"

FrescoIsles_Tailor_EventScript_Tailor_Text_6:
# 69 "data/maps/FrescoIsles_Tailor/scripts.pory"
	.string "You're missing part of the {COLOR GREEN}Kalos Region{COLOR DARK_GRAY}\n"
	.string "Starter Trio.$"

FrescoIsles_Tailor_EventScript_Tailor_Text_7:
# 78 "data/maps/FrescoIsles_Tailor/scripts.pory"
	.string "It seems that you've caught {COLOR GREEN}all Kalos\n"
	.string "Starter Pokémon{COLOR DARK_GRAY}! Here, I've assembled\l"
	.string "this Special Outfit for you.$"

FrescoIsles_Tailor_EventScript_Tailor_Text_8:
# 86 "data/maps/FrescoIsles_Tailor/scripts.pory"
	.string "You've already unlocked the {COLOR GREEN}Kalos\n"
	.string "Outfit{COLOR DARK_GRAY}. Next on the list is...$"

FrescoIsles_Tailor_EventScript_Tailor_Text_9:
# 102 "data/maps/FrescoIsles_Tailor/scripts.pory"
	.string "You're missing part of the {COLOR GREEN}Alola Region{COLOR DARK_GRAY}\n"
	.string "Starter Trio.$"

FrescoIsles_Tailor_EventScript_Tailor_Text_10:
# 111 "data/maps/FrescoIsles_Tailor/scripts.pory"
	.string "It seems that you've caught {COLOR GREEN}all Alolan\n"
	.string "Starter Pokémon{COLOR DARK_GRAY}! Here, I've assembled\l"
	.string "this Special Outfit for you.$"

FrescoIsles_Tailor_EventScript_Tailor_Text_11:
# 119 "data/maps/FrescoIsles_Tailor/scripts.pory"
	.string "You've already unlocked the {COLOR GREEN}Alolan\n"
	.string "Outfit{COLOR DARK_GRAY}. Next on the list is...$"

FrescoIsles_Tailor_EventScript_Tailor_Text_12:
# 135 "data/maps/FrescoIsles_Tailor/scripts.pory"
	.string "You're missing part of the {COLOR GREEN}Paldea\n"
	.string "Region{COLOR DARK_GRAY} Starter Trio.$"

FrescoIsles_Tailor_EventScript_Tailor_Text_13:
# 144 "data/maps/FrescoIsles_Tailor/scripts.pory"
	.string "It seems that you've caught {COLOR GREEN}all Paldean\n"
	.string "Starter Pokémon{COLOR DARK_GRAY}! Here, I've assembled\l"
	.string "this Special Outfit for you.$"

FrescoIsles_Tailor_EventScript_Tailor_Text_14:
# 152 "data/maps/FrescoIsles_Tailor/scripts.pory"
	.string "You've already unlocked the {COLOR GREEN}Paldean\n"
	.string "Outfit{COLOR DARK_GRAY}.$"

FrescoIsles_Tailor_EventScript_Tailor_Text_15:
# 159 "data/maps/FrescoIsles_Tailor/scripts.pory"
	.string "That's my full list of Special Outfits\n"
	.string "that would fit you. Come again soon.$"

FrescoIsles_Tailor_EventScript_Yamper_Text_0:
# 169 "data/maps/FrescoIsles_Tailor/scripts.pory"
	.string "Yamper$"

FrescoIsles_Tailor_EventScript_Yamper_Text_1:
# 171 "data/maps/FrescoIsles_Tailor/scripts.pory"
	.string "Arf arf!$"

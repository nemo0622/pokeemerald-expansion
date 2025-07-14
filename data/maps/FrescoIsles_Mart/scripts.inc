FrescoIsles_Mart_MapScripts::
	.byte 0


FrescoIsles_Mart_EventScript_MartEmployee::
# 5 "data/maps/FrescoIsles_Mart/scripts.pory"
	lock
# 6 "data/maps/FrescoIsles_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/FrescoIsles_Mart/scripts.pory"
	speakername FrescoIsles_Mart_EventScript_MartEmployee_Text_0
# 9 "data/maps/FrescoIsles_Mart/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_CALM_TWIN_MUSES
# 10 "data/maps/FrescoIsles_Mart/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FrescoIsles_Mart_EventScript_MartEmployee_2
# 22 "data/maps/FrescoIsles_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 23 "data/maps/FrescoIsles_Mart/scripts.pory"
	waitmessage
# 24 "data/maps/FrescoIsles_Mart/scripts.pory"
	pokemart FrescoIsles_Mart_Shop
# 25 "data/maps/FrescoIsles_Mart/scripts.pory"
	closemessage
# 26 "data/maps/FrescoIsles_Mart/scripts.pory"
	delay 1
# 27 "data/maps/FrescoIsles_Mart/scripts.pory"
	speakername FrescoIsles_Mart_EventScript_MartEmployee_Text_0
# 28 "data/maps/FrescoIsles_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
FrescoIsles_Mart_EventScript_MartEmployee_1:
# 30 "data/maps/FrescoIsles_Mart/scripts.pory"
	release
	end

FrescoIsles_Mart_EventScript_MartEmployee_2:
# 12 "data/maps/FrescoIsles_Mart/scripts.pory"
	msgbox FrescoIsles_Mart_EventScript_MartEmployee_Text_1
# 13 "data/maps/FrescoIsles_Mart/scripts.pory"
	closemessage
# 14 "data/maps/FrescoIsles_Mart/scripts.pory"
	delay 20
# 15 "data/maps/FrescoIsles_Mart/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 16 "data/maps/FrescoIsles_Mart/scripts.pory"
	speakername FrescoIsles_Mart_EventScript_MartEmployee_Text_0
# 17 "data/maps/FrescoIsles_Mart/scripts.pory"
	msgbox FrescoIsles_Mart_EventScript_MartEmployee_Text_2
# 18 "data/maps/FrescoIsles_Mart/scripts.pory"
	closemessage
	goto FrescoIsles_Mart_EventScript_MartEmployee_1


	.align 2
# 35 "data/maps/FrescoIsles_Mart/scripts.pory"
FrescoIsles_Mart_Shop:
# 37 "data/maps/FrescoIsles_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 38 "data/maps/FrescoIsles_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 39 "data/maps/FrescoIsles_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 40 "data/maps/FrescoIsles_Mart/scripts.pory"
	.2byte ITEM_POTION
# 41 "data/maps/FrescoIsles_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 42 "data/maps/FrescoIsles_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 43 "data/maps/FrescoIsles_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 44 "data/maps/FrescoIsles_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 45 "data/maps/FrescoIsles_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 46 "data/maps/FrescoIsles_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 47 "data/maps/FrescoIsles_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 48 "data/maps/FrescoIsles_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 49 "data/maps/FrescoIsles_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 50 "data/maps/FrescoIsles_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 51 "data/maps/FrescoIsles_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 52 "data/maps/FrescoIsles_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

FrescoIsles_Mart_EventScript_CooltrainerWithChocolates::
# 57 "data/maps/FrescoIsles_Mart/scripts.pory"
	lock
# 58 "data/maps/FrescoIsles_Mart/scripts.pory"
	faceplayer
# 59 "data/maps/FrescoIsles_Mart/scripts.pory"
	speakername FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_Text_0
# 61 "data/maps/FrescoIsles_Mart/scripts.pory"
	goto_if_set FLAG_BEAT_TRAINER_WITH_CHOCOLATES, FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_2
# 68 "data/maps/FrescoIsles_Mart/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_CALM_TWIN_MUSES
# 69 "data/maps/FrescoIsles_Mart/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_6
# 78 "data/maps/FrescoIsles_Mart/scripts.pory"
	msgbox FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_Text_3, MSGBOX_YESNO
# 79 "data/maps/FrescoIsles_Mart/scripts.pory"
	closemessage
# 80 "data/maps/FrescoIsles_Mart/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_8
# 91 "data/maps/FrescoIsles_Mart/scripts.pory"
	speakername FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_Text_0
# 92 "data/maps/FrescoIsles_Mart/scripts.pory"
	msgbox FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_Text_5
# 93 "data/maps/FrescoIsles_Mart/scripts.pory"
	closemessage
# 95 "data/maps/FrescoIsles_Mart/scripts.pory"
	trainerbattle_no_intro TRAINER_FRESCOISLES_STELLA, FrescoIsles_Mart_Text_StellaDefeat
# 97 "data/maps/FrescoIsles_Mart/scripts.pory"
	delay 5
# 98 "data/maps/FrescoIsles_Mart/scripts.pory"
	setflag FLAG_BEAT_TRAINER_WITH_CHOCOLATES
# 99 "data/maps/FrescoIsles_Mart/scripts.pory"
	giveitem ITEM_BOX_OF_CHOCOLATE
# 100 "data/maps/FrescoIsles_Mart/scripts.pory"
	closemessage
# 101 "data/maps/FrescoIsles_Mart/scripts.pory"
	delay 5
# 102 "data/maps/FrescoIsles_Mart/scripts.pory"
	speakername FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_Text_0
# 103 "data/maps/FrescoIsles_Mart/scripts.pory"
	msgbox FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_Text_6
# 104 "data/maps/FrescoIsles_Mart/scripts.pory"
	closemessage
FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_1:
# 108 "data/maps/FrescoIsles_Mart/scripts.pory"
	release
	end

FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_2:
# 63 "data/maps/FrescoIsles_Mart/scripts.pory"
	msgbox FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_Text_1
# 64 "data/maps/FrescoIsles_Mart/scripts.pory"
	closemessage
	goto FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_1

FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_6:
# 71 "data/maps/FrescoIsles_Mart/scripts.pory"
	msgbox FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_Text_2
# 72 "data/maps/FrescoIsles_Mart/scripts.pory"
	closemessage
# 73 "data/maps/FrescoIsles_Mart/scripts.pory"
	release
	end

FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_8:
# 82 "data/maps/FrescoIsles_Mart/scripts.pory"
	speakername FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_Text_0
# 83 "data/maps/FrescoIsles_Mart/scripts.pory"
	msgbox FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_Text_4
# 84 "data/maps/FrescoIsles_Mart/scripts.pory"
	closemessage
# 85 "data/maps/FrescoIsles_Mart/scripts.pory"
	release
	end


FrescoIsles_Mart_EventScript_Meganium::
# 119 "data/maps/FrescoIsles_Mart/scripts.pory"
	lock
# 120 "data/maps/FrescoIsles_Mart/scripts.pory"
	faceplayer
# 121 "data/maps/FrescoIsles_Mart/scripts.pory"
	speakername FrescoIsles_Mart_EventScript_Meganium_Text_0
# 122 "data/maps/FrescoIsles_Mart/scripts.pory"
	playmoncry SPECIES_MEGANIUM, CRY_MODE_NORMAL
# 123 "data/maps/FrescoIsles_Mart/scripts.pory"
	msgbox FrescoIsles_Mart_EventScript_Meganium_Text_1
# 124 "data/maps/FrescoIsles_Mart/scripts.pory"
	waitmoncry
# 125 "data/maps/FrescoIsles_Mart/scripts.pory"
	closemessage
# 126 "data/maps/FrescoIsles_Mart/scripts.pory"
	release
	end


FrescoIsles_Mart_EventScript_Officer::
# 132 "data/maps/FrescoIsles_Mart/scripts.pory"
	lock
# 133 "data/maps/FrescoIsles_Mart/scripts.pory"
	faceplayer
# 134 "data/maps/FrescoIsles_Mart/scripts.pory"
	speakername FrescoIsles_Mart_EventScript_Officer_Text_0
# 135 "data/maps/FrescoIsles_Mart/scripts.pory"
	msgbox FrescoIsles_Mart_EventScript_Officer_Text_1
# 136 "data/maps/FrescoIsles_Mart/scripts.pory"
	closemessage
# 137 "data/maps/FrescoIsles_Mart/scripts.pory"
	release
	end


FrescoIsles_Mart_EventScript_MartEmployee_Text_0:
# 7 "data/maps/FrescoIsles_Mart/scripts.pory"
	.string "Mart Employee$"

FrescoIsles_Mart_EventScript_MartEmployee_Text_1:
# 12 "data/maps/FrescoIsles_Mart/scripts.pory"
	.string "Welcome to the Fresco Isles Mart! How\n"
	.string "can I help you?$"

FrescoIsles_Mart_EventScript_MartEmployee_Text_2:
# 17 "data/maps/FrescoIsles_Mart/scripts.pory"
	.string "The Gym Leaders are fighting again?\n"
	.string "Normally, I'd give you their favorite\l"
	.string "food, a Box of Chocolate. I'm sorry, but\l"
	.string "I just sold our last boxes to {COLOR GREEN}that\l"
	.string "Trainer by the shelf{COLOR DARK_GRAY}. Maybe you could\l"
	.string "ask her for some?$"

FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_Text_0:
# 59 "data/maps/FrescoIsles_Mart/scripts.pory"
	.string "Cooltrainer$"

FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_Text_1:
# 63 "data/maps/FrescoIsles_Mart/scripts.pory"
	.string "Did you get the {COLOR GREEN}Box of Chocolate{COLOR DARK_GRAY} to the\n"
	.string "Gym Leaders? That should get them to\l"
	.string "stop fighting and head back to the Gym.$"

FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_Text_2:
# 71 "data/maps/FrescoIsles_Mart/scripts.pory"
	.string "Ehehe, I just bought a few delicious\n"
	.string "Boxes of Chocolate! I don't really need\l"
	.string "them all, but I figured I might as well\l"
	.string "get some extra.$"

FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_Text_3:
# 78 "data/maps/FrescoIsles_Mart/scripts.pory"
	.string "Hm? Are you here for one of the {COLOR GREEN}Boxes\n"
	.string "of Chocolate{COLOR DARK_GRAY} I bought? I suppose I\l"
	.string "could spare one... If you're willing to\l"
	.string "battle me for it!$"

FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_Text_4:
# 83 "data/maps/FrescoIsles_Mart/scripts.pory"
	.string "Come back and give me a good battle,\n"
	.string "and I'll let you have a {COLOR GREEN}Box of Chocolate{COLOR DARK_GRAY}.$"

FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_Text_5:
# 92 "data/maps/FrescoIsles_Mart/scripts.pory"
	.string "Bwahaha, yes! I've been itching for\n"
	.string "battle!$"

FrescoIsles_Mart_EventScript_CooltrainerWithChocolates_Text_6:
# 103 "data/maps/FrescoIsles_Mart/scripts.pory"
	.string "You're definitely ready for the Gym!\n"
	.string "Just bring that {COLOR GREEN}Box of Chocolate{COLOR DARK_GRAY} to the\l"
	.string "{COLOR GREEN}Gym Leaders{COLOR DARK_GRAY}. They'll share it and calm\l"
	.string "down, like always.$"

FrescoIsles_Mart_EventScript_Meganium_Text_0:
# 121 "data/maps/FrescoIsles_Mart/scripts.pory"
	.string "Meganium$"

FrescoIsles_Mart_EventScript_Meganium_Text_1:
# 123 "data/maps/FrescoIsles_Mart/scripts.pory"
	.string "Hwaaaahh!$"

FrescoIsles_Mart_EventScript_Officer_Text_0:
# 134 "data/maps/FrescoIsles_Mart/scripts.pory"
	.string "Officer$"

FrescoIsles_Mart_EventScript_Officer_Text_1:
# 135 "data/maps/FrescoIsles_Mart/scripts.pory"
	.string "Life's pretty slow on the Fresco Isles.\n"
	.string "I mostly run security for shows at the\l"
	.string "Theatre, as crime's rare here.\p"
	.string "Actually, there used to be concerns\n"
	.string "over Team Chimera nearby, but they've\l"
	.string "abandoned their place here.$"

FrescoIsles_Mart_Text_StellaDefeat::
# 112 "data/maps/FrescoIsles_Mart/scripts.pory"
	.string "Heh, what an amazing battle! You've\n"
	.string "earned this.$"

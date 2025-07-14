FrescoIsles_AbandonedLab_MapScripts::
# 2 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FrescoIsles_AbandonedLab_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FrescoIsles_AbandonedLab_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	setflashlevel 4
	return


FrescoIsles_AbandonedLab_Scientist::
# 9 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	lock
# 10 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	faceplayer
# 11 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	speakername FrescoIsles_AbandonedLab_Scientist_Text_0
# 14 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_BRING_BERRIES_TO_TYPE_NULL
# 15 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FrescoIsles_AbandonedLab_Scientist_2
# 37 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_BRING_BERRIES_TO_TYPE_NULL
# 38 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FrescoIsles_AbandonedLab_Scientist_5
# 60 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 61 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	msgbox FrescoIsles_AbandonedLab_Scientist_Text_1
# 62 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	closemessage
# 63 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	delay 5
# 64 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	speakername FrescoIsles_AbandonedLab_Scientist_Text_0
# 65 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	msgbox FrescoIsles_AbandonedLab_Scientist_Text_7
# 66 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	closemessage
# 68 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	delay 30
# 69 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	checkitem ITEM_SITRUS_BERRY, 12
# 70 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FrescoIsles_AbandonedLab_Scientist_8
# 78 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_HEART
# 79 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	speakername FrescoIsles_AbandonedLab_Scientist_Text_0
# 80 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	msgbox FrescoIsles_AbandonedLab_Scientist_Text_9
# 81 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	closemessage
# 82 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	removeitem ITEM_SITRUS_BERRY, 12
# 83 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	applymovement 1, FrescoIsles_AbandonedLab_Movement_ScientistFeedsTypeNull
# 84 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	waitmovement 0
# 85 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	speakername FrescoIsles_AbandonedLab_Scientist_Text_0
# 86 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	msgbox FrescoIsles_AbandonedLab_Scientist_Text_10
# 87 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	closemessage
# 88 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	delay 5
# 89 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	givemon SPECIES_TYPE_NULL, 30
# 90 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	closemessage
# 91 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	delay 5
# 92 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	speakername FrescoIsles_AbandonedLab_Scientist_Text_0
# 93 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	msgbox FrescoIsles_AbandonedLab_Scientist_Text_11
# 94 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	closemessage
# 96 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	delay 20
# 97 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	completequest QUEST_BRING_BERRIES_TO_TYPE_NULL
FrescoIsles_AbandonedLab_Scientist_4:
# 100 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	release
	end

FrescoIsles_AbandonedLab_Scientist_2:
# 17 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 18 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	msgbox FrescoIsles_AbandonedLab_Scientist_Text_1
# 19 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	closemessage
# 20 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	delay 5
# 21 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	speakername FrescoIsles_AbandonedLab_Scientist_Text_0
# 22 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	message FrescoIsles_AbandonedLab_Scientist_Text_2
# 23 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	waitmessage
# 24 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	pokemart FrescoIsles_AbandonedLab_SilvallyMemoryMart
# 25 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	closemessage
# 26 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	delay 1
# 27 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	speakername FrescoIsles_AbandonedLab_Scientist_Text_0
# 28 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	msgbox FrescoIsles_AbandonedLab_Scientist_Text_3
# 29 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	closemessage
# 30 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
# 31 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	waitmovement 0
# 32 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	release
	end

FrescoIsles_AbandonedLab_Scientist_5:
# 40 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	msgbox FrescoIsles_AbandonedLab_Scientist_Text_4
# 41 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	closemessage
# 42 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	delay 60
# 43 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_QUESTION
# 44 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	speakername FrescoIsles_AbandonedLab_Scientist_Text_0
# 45 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	msgbox FrescoIsles_AbandonedLab_Scientist_Text_5
# 46 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	closemessage
# 47 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	delay 60
# 48 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 49 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	speakername FrescoIsles_AbandonedLab_Scientist_Text_0
# 50 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	msgbox FrescoIsles_AbandonedLab_Scientist_Text_6
# 51 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	closemessage
# 52 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
# 53 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	waitmovement 0
# 55 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	delay 20
# 56 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	startquest QUEST_BRING_BERRIES_TO_TYPE_NULL
	goto FrescoIsles_AbandonedLab_Scientist_4

FrescoIsles_AbandonedLab_Scientist_8:
# 72 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	speakername FrescoIsles_AbandonedLab_Scientist_Text_0
# 73 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	msgbox FrescoIsles_AbandonedLab_Scientist_Text_8
# 74 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	closemessage
	goto FrescoIsles_AbandonedLab_Scientist_4


	.align 2
# 104 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
FrescoIsles_AbandonedLab_SilvallyMemoryMart:
# 106 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 107 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.2byte ITEM_FIRE_MEMORY
# 108 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.2byte ITEM_WATER_MEMORY
# 109 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.2byte ITEM_ELECTRIC_MEMORY
# 110 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.2byte ITEM_GRASS_MEMORY
# 111 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.2byte ITEM_ICE_MEMORY
# 112 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.2byte ITEM_FIGHTING_MEMORY
# 113 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.2byte ITEM_POISON_MEMORY
# 114 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.2byte ITEM_GROUND_MEMORY
# 115 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.2byte ITEM_FLYING_MEMORY
# 116 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.2byte ITEM_PSYCHIC_MEMORY
# 117 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.2byte ITEM_BUG_MEMORY
# 118 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.2byte ITEM_ROCK_MEMORY
# 119 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.2byte ITEM_GHOST_MEMORY
# 120 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.2byte ITEM_DRAGON_MEMORY
# 121 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.2byte ITEM_DARK_MEMORY
# 122 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.2byte ITEM_STEEL_MEMORY
# 123 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.2byte ITEM_FAIRY_MEMORY
	.2byte ITEM_NONE

# 126 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
FrescoIsles_AbandonedLab_Movement_ScientistFeedsTypeNull:
# 128 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	walk_down
# 129 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	walk_left
# 129 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	walk_left
# 129 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	walk_left
# 130 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	walk_up
# 130 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	walk_up
# 130 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	walk_up
# 131 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	delay_16
# 131 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	delay_16
# 132 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	walk_down
# 132 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	walk_down
# 132 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	walk_down
# 133 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	walk_right
# 133 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	walk_right
# 133 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	walk_right
# 134 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	walk_up
# 135 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	face_right
# 136 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	step_end

FrescoIsles_AbandonedLab_Scientist_Text_0:
# 11 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.string "Ex-Scientist$"

FrescoIsles_AbandonedLab_Scientist_Text_1:
# 18 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.string "WOAH! Oh, it's just you!$"

FrescoIsles_AbandonedLab_Scientist_Text_2:
# 22 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.string "Here for one of Silvally's Memories? I'll\n"
	.string "produce whatever you need.$"

FrescoIsles_AbandonedLab_Scientist_Text_3:
# 28 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.string "Take care of the Pokémon I gave you...\n"
	.string "It's special to me.$"

FrescoIsles_AbandonedLab_Scientist_Text_4:
# 40 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.string "Hm? H-hey! Nobody's supposed to come\n"
	.string "in here! I could've sworn I locked the\l"
	.string "door...$"

FrescoIsles_AbandonedLab_Scientist_Text_5:
# 45 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.string "Oh, you want to know what I'M doing\n"
	.string "here? Well now that you're in here, I\l"
	.string "suppose I can't hide my secrets any\l"
	.string "longer.\p"
	.string "I was once a Scientist with Team\n"
	.string "Chimera. They stole valuable research\l"
	.string "papers from the Alola Region, and in my\l"
	.string "haste for scientific glory, I joined\l"
	.string "them. This Lab was my base of\l"
	.string "operations, and after years of work, I\l"
	.string "finally succeeded in using the stolen\l"
	.string "information... To create a new Pokémon.\l"
	.string "{COLOR GREEN}Type: Null{COLOR DARK_GRAY}, a weapon of control, and the\l"
	.string "perfect Pokémon for high-ranking Team\l"
	.string "Chimera members.\p"
	.string "After bringing Type: Null to life, I... I\n"
	.string "realized the evil of my ways. I couldn't\l"
	.string "hand it over and let Team Chimera use it\l"
	.string "to harm innocent people. When the\l"
	.string "Chimera Admins attacked, Type: Null\l"
	.string "pushed them back, forcing them to flee\l"
	.string "and saving my life.$"

FrescoIsles_AbandonedLab_Scientist_Text_6:
# 50 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.string "Y-you're still here? Most people would\n"
	.string "run off and report me...\p"
	.string "I just want to protect Type: Null,\n"
	.string "however I can. I almost never leave this\l"
	.string "building, but we're running low on food.\l"
	.string "If you could {COLOR GREEN}bring a dozen Sitrus\l"
	.string "Berries{COLOR DARK_GRAY}, Type: Null's favorite food, I'd\l"
	.string "be eternally grateful.$"

FrescoIsles_AbandonedLab_Scientist_Text_7:
# 65 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.string "Have you gotten the {COLOR GREEN}Sitrus Berries{COLOR DARK_GRAY} for\n"
	.string "Type: Null and I?$"

FrescoIsles_AbandonedLab_Scientist_Text_8:
# 73 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.string "No? Please, hurry... I rarely leave the\n"
	.string "building, as Type: Null shouldn't be left\l"
	.string "alone for long.\p"
	.string "Type: Null's favorite food is {COLOR GREEN}Sitrus\n"
	.string "Berries{COLOR DARK_GRAY}. Please, bring {COLOR GREEN}a dozen{COLOR DARK_GRAY} for us!$"

FrescoIsles_AbandonedLab_Scientist_Text_9:
# 80 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.string "You have them! Please, hand them over.\n"
	.string "I'll feed them to Type: Null immediately.$"

FrescoIsles_AbandonedLab_Scientist_Text_10:
# 86 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.string "Type: Null ate its fill! Thank you, young\n"
	.string "Trainer.\p"
	.string "I've noticed your Gym Badges, and the\n"
	.string "Poké Balls at your side. You seem to be\l"
	.string "quite the Trainer... Even fighting back\l"
	.string "against Team Chimera, from what my\l"
	.string "remaining contacts have told me.\p"
	.string "Type: Null cannot stay here forever. An\n"
	.string "abandoned lab is no place for a Pokémon\l"
	.string "to live, but I'm not a skilled enough\l"
	.string "Trainer to help it in battle. Please, I\l"
	.string "want you to {COLOR GREEN}take Type: Null{COLOR DARK_GRAY} on your\l"
	.string "journey.$"

FrescoIsles_AbandonedLab_Scientist_Text_11:
# 93 "data/maps/FrescoIsles_AbandonedLab/scripts.pory"
	.string "You must do what I was never strong\n"
	.string "enough to: defeat Team Chimera once\l"
	.string "and for all. Type: Null is itching to see\l"
	.string "the world and fight loyally by a\l"
	.string "Trainer's side.\p"
	.string "One last thing... The stolen papers from\n"
	.string "Alola mentioned a Type: Null {COLOR GREEN}breaking\l"
	.string "free from their helmet{COLOR DARK_GRAY}, gaining full\l"
	.string "control over their {COLOR GREEN}type-changing RKS\l"
	.string "System{COLOR DARK_GRAY}. Return to me if this ever\l"
	.string "happens, and I will produce the\l"
	.string "necessary {COLOR GREEN}Memory items{COLOR DARK_GRAY} to change the\l"
	.string "Pokémon's type.$"

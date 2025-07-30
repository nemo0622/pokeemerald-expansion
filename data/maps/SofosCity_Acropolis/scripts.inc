SofosCity_Acropolis_MapScripts::
	.byte 0


SofosCity_Acropolis_EventScript_Sign1::
# 5 "data/maps/SofosCity_Acropolis/scripts.pory"
	lock
# 6 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_Sign1_Text_0
# 7 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_Sign1_Text_1
# 8 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 9 "data/maps/SofosCity_Acropolis/scripts.pory"
	release
	end


SofosCity_Acropolis_EventScript_Sign2::
# 14 "data/maps/SofosCity_Acropolis/scripts.pory"
	lock
# 15 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_Sign1_Text_0
# 16 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_Sign2_Text_0
# 17 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 18 "data/maps/SofosCity_Acropolis/scripts.pory"
	release
	end


SofosCity_Acropolis_EventScript_Man::
# 24 "data/maps/SofosCity_Acropolis/scripts.pory"
	lock
# 25 "data/maps/SofosCity_Acropolis/scripts.pory"
	faceplayer
# 26 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_Man_Text_0
# 27 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_Man_Text_1
# 28 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 29 "data/maps/SofosCity_Acropolis/scripts.pory"
	release
	end


SofosCity_Acropolis_EventScript_Camper::
# 34 "data/maps/SofosCity_Acropolis/scripts.pory"
	lock
# 35 "data/maps/SofosCity_Acropolis/scripts.pory"
	faceplayer
# 36 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_Camper_Text_0
# 37 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_Camper_Text_1
# 38 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 39 "data/maps/SofosCity_Acropolis/scripts.pory"
	release
	end


SofosCity_Acropolis_EventScript_Lass::
# 44 "data/maps/SofosCity_Acropolis/scripts.pory"
	lock
# 45 "data/maps/SofosCity_Acropolis/scripts.pory"
	faceplayer
# 46 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_Lass_Text_0
# 47 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_Lass_Text_1
# 48 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 49 "data/maps/SofosCity_Acropolis/scripts.pory"
	release
	end


SofosCity_Acropolis_EventScript_TogaGirl::
# 54 "data/maps/SofosCity_Acropolis/scripts.pory"
	lock
# 55 "data/maps/SofosCity_Acropolis/scripts.pory"
	faceplayer
# 56 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_TogaGirl_Text_0
# 57 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_TogaGirl_Text_1
# 58 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 59 "data/maps/SofosCity_Acropolis/scripts.pory"
	release
	end


SofosCity_Acropolis_EventScript_Sylveon::
# 65 "data/maps/SofosCity_Acropolis/scripts.pory"
	lock
# 66 "data/maps/SofosCity_Acropolis/scripts.pory"
	faceplayer
# 67 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_Sylveon_Text_0
# 68 "data/maps/SofosCity_Acropolis/scripts.pory"
	playmoncry SPECIES_SYLVEON, CRY_MODE_NORMAL
# 69 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_Sylveon_Text_1
# 70 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmoncry
# 71 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 72 "data/maps/SofosCity_Acropolis/scripts.pory"
	release
	end


SofosCity_EventScript_OldSofosOutfitBeauty::
# 78 "data/maps/SofosCity_Acropolis/scripts.pory"
	lock
# 79 "data/maps/SofosCity_Acropolis/scripts.pory"
	faceplayer
# 80 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_EventScript_OldSofosOutfitBeauty_Text_0
# 81 "data/maps/SofosCity_Acropolis/scripts.pory"
	checkoutfitflag OUTFIT_OLD_SOFOS
# 83 "data/maps/SofosCity_Acropolis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SofosCity_EventScript_OldSofosOutfitBeauty_2
# 133 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_EventScript_OldSofosOutfitBeauty_Text_7
# 134 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
SofosCity_EventScript_OldSofosOutfitBeauty_1:
# 136 "data/maps/SofosCity_Acropolis/scripts.pory"
	release
	end

SofosCity_EventScript_OldSofosOutfitBeauty_2:
# 85 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_EventScript_OldSofosOutfitBeauty_Text_1
# 86 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 87 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 5
# 88 "data/maps/SofosCity_Acropolis/scripts.pory"
	showmoneybox 0, 0
# 89 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_EventScript_OldSofosOutfitBeauty_Text_0
# 90 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_EventScript_OldSofosOutfitBeauty_Text_2, MSGBOX_YESNO
# 91 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 92 "data/maps/SofosCity_Acropolis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SofosCity_EventScript_OldSofosOutfitBeauty_5
# 104 "data/maps/SofosCity_Acropolis/scripts.pory"
	checkmoney 16900
# 105 "data/maps/SofosCity_Acropolis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SofosCity_EventScript_OldSofosOutfitBeauty_8
# 116 "data/maps/SofosCity_Acropolis/scripts.pory"
	removemoney 16900
# 117 "data/maps/SofosCity_Acropolis/scripts.pory"
	updatemoneybox
# 118 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 5
# 119 "data/maps/SofosCity_Acropolis/scripts.pory"
	unlockoutfit OUTFIT_OLD_SOFOS
# 120 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_EventScript_OldSofosOutfitBeauty_Text_5
# 121 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 20
# 122 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 123 "data/maps/SofosCity_Acropolis/scripts.pory"
	hidemoneybox
# 124 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 5
# 125 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_EventScript_OldSofosOutfitBeauty_Text_0
# 126 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_EventScript_OldSofosOutfitBeauty_Text_6
# 127 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
	goto SofosCity_EventScript_OldSofosOutfitBeauty_1

SofosCity_EventScript_OldSofosOutfitBeauty_5:
# 94 "data/maps/SofosCity_Acropolis/scripts.pory"
	hidemoneybox
# 95 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_EventScript_OldSofosOutfitBeauty_Text_0
# 96 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_EventScript_OldSofosOutfitBeauty_Text_3
# 97 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 98 "data/maps/SofosCity_Acropolis/scripts.pory"
	release
	end

SofosCity_EventScript_OldSofosOutfitBeauty_8:
# 107 "data/maps/SofosCity_Acropolis/scripts.pory"
	hidemoneybox
# 108 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_EventScript_OldSofosOutfitBeauty_Text_0
# 109 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_EventScript_OldSofosOutfitBeauty_Text_4
# 110 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 111 "data/maps/SofosCity_Acropolis/scripts.pory"
	release
	end


SofosCity_Acropolis_EventScript_Sign1_Text_0:
# 6 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Information Sign$"

SofosCity_Acropolis_EventScript_Sign1_Text_1:
# 7 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Welcome to the Sofos City Acropolis\n"
	.string "Temple, the oldest and best maintained\l"
	.string "Acropolis Temple still standing in the\l"
	.string "Ilios Region.\p"
	.string "Various statues of Pokémon with\n"
	.string "mythical origins are kept in this\l"
	.string "temple. It has become a common spot for\l"
	.string "Trainers and other tourists to come and\l"
	.string "pay respects, hoping for a blessing\l"
	.string "from these incredibly powerful Pokémon.\p"
	.string "To the left and right are statues of\n"
	.string "Archen, the First Bird Pokémon. It is\l"
	.string "thought to be the shared ancestor of\l"
	.string "all bird Pokémon.$"

SofosCity_Acropolis_EventScript_Sign2_Text_0:
# 16 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "These Pokémon are foundational to the\n"
	.string "mythology of the Ilios Region. {COLOR GREEN}Raikou{COLOR DARK_GRAY}\l"
	.string "channels the power of the sky, creating\l"
	.string "roaring thunderbolts that shake the\l"
	.string "world. {COLOR GREEN}Suicune{COLOR DARK_GRAY} embodies the power of\l"
	.string "the sea, controlling strong wakes of\l"
	.string "water. {COLOR GREEN}Entei{COLOR DARK_GRAY} holds the power of the\l"
	.string "land, blasting fire and lava to expand\l"
	.string "its territory.\p"
	.string "It is said that these three Pokémon\n"
	.string "roam the world to this day. Despite\l"
	.string "their immense power, they do not truly\l"
	.string "rule their domains. Ancient myths speak\l"
	.string "of {COLOR GREEN}godlike Pokémon{COLOR DARK_GRAY} lost to time, which\l"
	.string "are the true kings of land, sea, and sky.$"

SofosCity_Acropolis_EventScript_Man_Text_0:
# 26 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Tourist$"

SofosCity_Acropolis_EventScript_Man_Text_1:
# 27 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Archen, huh? They say it evolved from a\n"
	.string "branch of reptilian Pokémon, being the\l"
	.string "first to develop feathers and wings.\p"
	.string "Of course, there are two types of\n"
	.string "evolution - Pokémon Evolution are\l"
	.string "changes from leveling up, while\l"
	.string "Biological Evolution is a process of\l"
	.string "slight changes over the course of many\l"
	.string "generations.$"

SofosCity_Acropolis_EventScript_Camper_Text_0:
# 36 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Camper$"

SofosCity_Acropolis_EventScript_Camper_Text_1:
# 37 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Those Pokémon from the old myths... I\n"
	.string "wonder if they're real. There are lots of\l"
	.string "parallels with stories from Johto and\l"
	.string "Hoenn. I wonder if most regions have\l"
	.string "elemental Pokémon myths.$"

SofosCity_Acropolis_EventScript_Lass_Text_0:
# 46 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Lass$"

SofosCity_Acropolis_EventScript_Lass_Text_1:
# 47 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "My family and I took a boat here from\n"
	.string "Myrrini Island. I've never seen statues\l"
	.string "like this before!$"

SofosCity_Acropolis_EventScript_TogaGirl_Text_0:
# 56 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Toga Woman$"

SofosCity_Acropolis_EventScript_TogaGirl_Text_1:
# 57 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Welcome. We hope you enjoy the Sofos\n"
	.string "City Acropolis Temple. Please be\l"
	.string "respectful of the fragile statues and\l"
	.string "other visitors, and enjoy your time\l"
	.string "here!$"

SofosCity_Acropolis_EventScript_Sylveon_Text_0:
# 67 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Sylveon$"

SofosCity_Acropolis_EventScript_Sylveon_Text_1:
# 69 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Breow!$"

SofosCity_EventScript_OldSofosOutfitBeauty_Text_0:
# 80 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Fashionista$"

SofosCity_EventScript_OldSofosOutfitBeauty_Text_1:
# 85 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Wow, the ancient history of the Ilios\n"
	.string "Region is amazing!$"

SofosCity_EventScript_OldSofosOutfitBeauty_Text_2:
# 90 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "I've actually made an Outfit in the\n"
	.string "ancient Sofos City style! I'll give you\l"
	.string "this {COLOR GREEN}Old Sofos Toga Outfit{COLOR DARK_GRAY} for ¥16900.\l"
	.string "How about it?$"

SofosCity_EventScript_OldSofosOutfitBeauty_Text_3:
# 96 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "No? Aren't you interested in the\n"
	.string "history of the Ilios Region?$"

SofosCity_EventScript_OldSofosOutfitBeauty_Text_4:
# 109 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Hey, you don't have the money for that!$"

SofosCity_EventScript_OldSofosOutfitBeauty_Text_5:
# 120 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "The Old Sofos Toga Outfit has been\n"
	.string "added to the Outfit Box!$"

SofosCity_EventScript_OldSofosOutfitBeauty_Text_6:
# 126 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Thanks for your support! I hope you\n"
	.string "have fun trying out the ancient look!$"

SofosCity_EventScript_OldSofosOutfitBeauty_Text_7:
# 133 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "The Old Sofos Toga Outfit is a modern\n"
	.string "replica of an ancient style.\l"
	.string "Philosophers wore fashionable togas to\l"
	.string "important discussions.$"

# 1 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 2 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_MapScripts::
# 3 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.byte 0
# 4 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 5 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt15::
# 6 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAGMAGRUNTF
# 7 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	callnative DrawMugshot
# 8 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_15, MagmaHideout_2F_2R_Text_Grunt15Intro, MagmaHideout_2F_2R_Text_Grunt15Defeat
# 9 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	msgbox_mugshot MagmaHideout_2F_2R_Text_Grunt15PostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_MAGMAGRUNTF
# 10 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	end
# 11 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 12 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt6::
# 13 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAGMAGRUNTM
# 14 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	callnative DrawMugshot
# 15 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_6, MagmaHideout_2F_2R_Text_Grunt6Intro, MagmaHideout_2F_2R_Text_Grunt6Defeat
# 16 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	msgbox_mugshot MagmaHideout_2F_2R_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_MAGMAGRUNTM
# 17 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	end
# 18 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 19 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt7::
# 20 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAGMAGRUNTM
# 21 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	callnative DrawMugshot
# 22 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_7, MagmaHideout_2F_2R_Text_Grunt7Intro, MagmaHideout_2F_2R_Text_Grunt7Defeat
# 23 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	msgbox_mugshot MagmaHideout_2F_2R_Text_Grunt7PostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_MAGMAGRUNTM
# 24 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	end
# 25 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 26 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt8::
# 27 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAGMAGRUNTM
# 28 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	callnative DrawMugshot
# 29 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_8, MagmaHideout_2F_2R_Text_Grunt8Intro, MagmaHideout_2F_2R_Text_Grunt8Defeat
# 30 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	msgbox_mugshot MagmaHideout_2F_2R_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_MAGMAGRUNTM
# 31 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	end
# 32 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 33 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt15Intro:
# 34 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I don't have a bone to pick with you.\n"
# 35 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I'm just following orders!$"
# 36 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 37 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt15Defeat:
# 38 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I may have lost, but…$"
# 39 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 40 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt15PostBattle:
# 41 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "We dug up something beyond belief!\n"
# 42 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "And, we got the BLUE ORB!\p"
# 43 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "All that's left is for our leader to…\n"
# 44 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Fufufu… Fwahahaha!$"
# 45 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 46 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt6Intro:
# 47 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I can't stand heat. Maybe I should've\n"
# 48 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "joined TEAM AQUA instead…$"
# 49 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 50 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt6Defeat:
# 51 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Yeah, I really may not be right for\n"
# 52 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "TEAM MAGMA…$"
# 53 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 54 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt6PostBattle:
# 55 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Don't you get lonely for the sea\n"
# 56 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "being in a place like this?$"
# 57 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 58 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt7Intro:
# 59 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "You can hear tremors here sometimes.\p"
# 60 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Could it be the volcano rattling?\n"
# 61 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Or is it GROU…\p"
# 62 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Whoops!\n"
# 63 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "No, no, never mind!$"
# 64 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 65 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt7Defeat:
# 66 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "You're a fiery battler.\n"
# 67 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Just like a volcano!$"
# 68 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 69 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt7PostBattle:
# 70 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "You just happened to win this time,\n"
# 71 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "but that doesn't matter.\p"
# 72 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "TEAM MAGMA's goal is about to be\n"
# 73 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "reached!$"
# 74 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 75 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt8Intro:
# 76 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "One of our guys was freaking out that\n"
# 77 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "he lost his MAGMA EMBLEM…\p"
# 78 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Wait a minute!\n"
# 79 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Was it you who found it?$"
# 80 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 81 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt8Defeat:
# 82 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I'm having trouble believing this…$"
# 83 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 84 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt8PostBattle:
# 85 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I'm getting this feeling that our plan\n"
# 86 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "is going to end in failure…$"

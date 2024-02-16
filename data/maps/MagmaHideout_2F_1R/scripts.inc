# 1 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 2 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_MapScripts::
# 3 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.byte 0
# 4 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 5 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt14::
# 6 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAGMAGRUNTF
# 7 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	callnative DrawMugshot
# 8 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_14, MagmaHideout_2F_1R_Text_Grunt14Intro, MagmaHideout_2F_1R_Text_Grunt14Defeat
# 9 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	msgbox_mugshot MagmaHideout_2F_1R_Text_Grunt14PostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_MAGMAGRUNTF
# 10 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	end
# 11 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 12 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt3::
# 13 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAGMAGRUNTM
# 14 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	callnative DrawMugshot
# 15 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_3, MagmaHideout_2F_1R_Text_Grunt3Intro, MagmaHideout_2F_1R_Text_Grunt3Defeat
# 16 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	msgbox_mugshot MagmaHideout_2F_1R_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_MAGMAGRUNTM
# 17 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	end
# 18 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 19 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt4::
# 20 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAGMAGRUNTM
# 21 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	callnative DrawMugshot
# 22 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_4, MagmaHideout_2F_1R_Text_Grunt4Intro, MagmaHideout_2F_1R_Text_Grunt4Defeat
# 23 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	msgbox_mugshot MagmaHideout_2F_1R_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_MAGMAGRUNTM
# 24 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	end
# 25 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 26 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt5::
# 27 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAGMAGRUNTM
# 28 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	callnative DrawMugshot
# 29 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_5, MagmaHideout_2F_1R_Text_Grunt5Intro, MagmaHideout_2F_1R_Text_Grunt5Defeat
# 30 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	msgbox_mugshot MagmaHideout_2F_1R_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_MAGMAGRUNTM
# 31 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	end
# 32 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 33 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt14Intro:
# 34 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "What, what, what?\p"
# 35 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Only TEAM MAGMA members are supposed\n"
# 36 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "to be in here!\p"
# 37 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "But you're not dressed in TEAM MAGMA's\n"
# 38 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "uniform…\p"
# 39 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "You rouse my suspicion!\n"
# 40 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Battle with me!$"
# 41 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 42 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt14Defeat:
# 43 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Aiyiyi…\n"
# 44 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "My pride as a TEAM MAGMA member…$"
# 45 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 46 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt14PostBattle:
# 47 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "If you suffer from chills, you should\n"
# 48 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "join TEAM MAGMA.$"
# 49 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 50 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt3Intro:
# 51 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Hold it right there!\p"
# 52 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "You don't really expect me to keep\n"
# 53 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "my trap shut and let you waltz by me?$"
# 54 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 55 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt3Defeat:
# 56 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Ooh wow!\n"
# 57 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "I concede!$"
# 58 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 59 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt3PostBattle:
# 60 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Maybe it would've been better if I did\n"
# 61 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "just let you go unchallenged…$"
# 62 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 63 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt4Intro:
# 64 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Ahah!\n"
# 65 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "An intruder!$"
# 66 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 67 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt4Defeat:
# 68 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Graaah!$"
# 69 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 70 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt4PostBattle:
# 71 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "I've already lost.\p"
# 72 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Do I really need to keep running\n"
# 73 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "around in a circle?$"
# 74 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 75 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt5Intro:
# 76 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Oh, oh!\n"
# 77 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "An intruder!$"
# 78 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 79 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt5Defeat:
# 80 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Mutter…$"
# 81 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 82 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt5PostBattle:
# 83 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Actually, I'm no expert at battling…$"

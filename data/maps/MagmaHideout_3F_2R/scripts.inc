# 1 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 2 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_MapScripts::
# 3 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.byte 0
# 4 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 5 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_EventScript_Grunt10::
# 6 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAGMAGRUNTM
# 7 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	callnative DrawMugshot
# 8 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_10, MagmaHideout_3F_2R_Text_Grunt10Intro, MagmaHideout_3F_2R_Text_Grunt10Defeat
# 9 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	msgbox_mugshot MagmaHideout_3F_2R_Text_Grunt10PostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_MAGMAGRUNTM
# 10 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	end
# 11 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 12 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_Text_Grunt10Intro:
# 13 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "I understand everything our leader\n"
# 14 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "says. But you know what?\p"
# 15 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Doing stuff like digging up a super-\n"
# 16 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "ancient POKéMON and ripping off\l"
# 17 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "someone's METEORITE…\p"
# 18 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "I think we're going a little too far.\n"
# 19 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "What do you think?$"
# 20 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 21 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_Text_Grunt10Defeat:
# 22 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Yeah, I think we are doing something\n"
# 23 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "wrong somehow.$"
# 24 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 25 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_Text_Grunt10PostBattle:
# 26 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "You know, losing to you cleared my mind.\p"
# 27 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "The next time I see our leader,\n"
# 28 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "I'm going to ask him about what we do.$"

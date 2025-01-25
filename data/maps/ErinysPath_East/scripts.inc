ErinysPath_East_MapScripts::
	.byte 0


ErinysPath_East_EventScript_Basculin::
# 5 "data/maps/ErinysPath_East/scripts.pory"
	lock
# 6 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 7 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Basculin_Text_0
# 8 "data/maps/ErinysPath_East/scripts.pory"
	playmoncry SPECIES_BASCULIN_WHITE_STRIPED, CRY_MODE_NORMAL
# 9 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Basculin_Text_1
# 10 "data/maps/ErinysPath_East/scripts.pory"
	waitmoncry
# 11 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 12 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_Tauros::
# 18 "data/maps/ErinysPath_East/scripts.pory"
	lock
# 19 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 20 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Tauros_Text_0
# 21 "data/maps/ErinysPath_East/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEAN_AQUA_BREED, CRY_MODE_NORMAL
# 22 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Tauros_Text_1
# 23 "data/maps/ErinysPath_East/scripts.pory"
	waitmoncry
# 24 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 25 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_ChimeraWalrein::
# 31 "data/maps/ErinysPath_East/scripts.pory"
	lockall
# 32 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 33 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 34 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 35 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 36 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 37 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_ChimeraWalrein_Text_0
# 38 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_1
# 39 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 40 "data/maps/ErinysPath_East/scripts.pory"
	goto_if_set FLAG_GOT_BADGE_FOR_BARDAS, ErinysPath_East_EventScript_ChimeraWalrein_2
ErinysPath_East_EventScript_ChimeraWalrein_1:
# 96 "data/maps/ErinysPath_East/scripts.pory"
	releaseall
	end

ErinysPath_East_EventScript_ChimeraWalrein_2:
# 42 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 43 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 44 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 45 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 46 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_ChimeraWalrein_Text_0
# 47 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_2
# 48 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 49 "data/maps/ErinysPath_East/scripts.pory"
	compare VAR_DIFFICULTY, 0
	goto_if_eq ErinysPath_East_EventScript_ChimeraWalrein_5
# 55 "data/maps/ErinysPath_East/scripts.pory"
	trainerbattle_no_intro TRAINER_ERINYSPATH_CHIMERA_ADMIN_HARD, ErinysPath_East_Text_ChimeraAdminDefeated
ErinysPath_East_EventScript_ChimeraWalrein_4:
# 58 "data/maps/ErinysPath_East/scripts.pory"
	lockall
# 59 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 60 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 61 "data/maps/ErinysPath_East/scripts.pory"
	delay 20
# 62 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 2, ErinysPath_East_Movement_BasculinFlee
# 63 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 3, ErinysPath_East_Movement_TaurosFlee
# 64 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 65 "data/maps/ErinysPath_East/scripts.pory"
	delay 20
# 66 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_ChimeraWalrein_Text_0
# 67 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_3
# 68 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 70 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 1, ErinysPath_East_Movement_ChimeraAdminFlee
# 71 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 72 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 74 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 4, ErinysPath_East_Movement_BardasApproach
# 75 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 76 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_ChimeraWalrein_Text_4
# 77 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_5
# 78 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 79 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 4, ErinysPath_East_Movement_BardasExit
# 80 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 82 "data/maps/ErinysPath_East/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 83 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 84 "data/maps/ErinysPath_East/scripts.pory"
	removeobject 1
# 85 "data/maps/ErinysPath_East/scripts.pory"
	removeobject 2
# 86 "data/maps/ErinysPath_East/scripts.pory"
	removeobject 3
# 87 "data/maps/ErinysPath_East/scripts.pory"
	removeobject 4
# 88 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 89 "data/maps/ErinysPath_East/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 90 "data/maps/ErinysPath_East/scripts.pory"
	delay 20
# 92 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_6
# 93 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 94 "data/maps/ErinysPath_East/scripts.pory"
	setflag FLAG_HELPED_BARDAS_PYTHIOS_TOWN
	goto ErinysPath_East_EventScript_ChimeraWalrein_1

ErinysPath_East_EventScript_ChimeraWalrein_5:
# 51 "data/maps/ErinysPath_East/scripts.pory"
	trainerbattle_no_intro TRAINER_ERINYSPATH_CHIMERA_ADMIN, ErinysPath_East_Text_ChimeraAdminDefeated
	goto ErinysPath_East_EventScript_ChimeraWalrein_4


# 105 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_BasculinFlee:
# 107 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 107 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 108 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 108 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 108 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 108 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 108 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 108 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 108 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 108 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 109 "data/maps/ErinysPath_East/scripts.pory"
	step_end

# 112 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_TaurosFlee:
# 114 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 114 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 114 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 115 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 115 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 115 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 115 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 115 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 115 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 116 "data/maps/ErinysPath_East/scripts.pory"
	step_end

# 119 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_ChimeraAdminFlee:
# 121 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 121 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 121 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 121 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 122 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 122 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 123 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 123 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 123 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 123 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 124 "data/maps/ErinysPath_East/scripts.pory"
	step_end

# 127 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_BardasApproach:
# 129 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 129 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 129 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 129 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 129 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 129 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 129 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 130 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 130 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 131 "data/maps/ErinysPath_East/scripts.pory"
	step_end

# 134 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_BardasExit:
# 136 "data/maps/ErinysPath_East/scripts.pory"
	walk_down
# 137 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 137 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 137 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 137 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 138 "data/maps/ErinysPath_East/scripts.pory"
	step_end

ErinysPath_East_EventScript_Basculin_Text_0:
# 7 "data/maps/ErinysPath_East/scripts.pory"
	.string "Basculin$"

ErinysPath_East_EventScript_Basculin_Text_1:
# 9 "data/maps/ErinysPath_East/scripts.pory"
	.string "Raawwhhh!$"

ErinysPath_East_EventScript_Tauros_Text_0:
# 20 "data/maps/ErinysPath_East/scripts.pory"
	.string "Tauros$"

ErinysPath_East_EventScript_Tauros_Text_1:
# 22 "data/maps/ErinysPath_East/scripts.pory"
	.string "Grrr-huff!$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_0:
# 37 "data/maps/ErinysPath_East/scripts.pory"
	.string "Chimera Admin$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_1:
# 38 "data/maps/ErinysPath_East/scripts.pory"
	.string "Grrr, when I find that stupid Sailor, I\n"
	.string "swear I'll show him not to mess with\l"
	.string "Team Chimera!$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_2:
# 47 "data/maps/ErinysPath_East/scripts.pory"
	.string "Hold it right there... I've been scouting\n"
	.string "around Pythios Town, and I think I saw\l"
	.string "you hanging around that Bardas guy!\l"
	.string "That fool wouldn't donate his ratty\l"
	.string "little boat to our cause, then took a\l"
	.string "Team Chimera member by surprise!\p"
	.string "I'll destroy you, then I'll take down\n"
	.string "Bardas!$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_3:
# 67 "data/maps/ErinysPath_East/scripts.pory"
	.string "...Well, so much for team loyalty.\p"
	.string "Looks like you and Bardas are winning\n"
	.string "for now. Mark my words, Team Chimera will\l"
	.string "make you pay for this humiliation!$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_4:
# 76 "data/maps/ErinysPath_East/scripts.pory"
	.string "Bardas$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_5:
# 77 "data/maps/ErinysPath_East/scripts.pory"
	.string "Woah, I never thought I'd see that\n"
	.string "Chimera thug run like that! I was\l"
	.string "climbing up the cliff to ambush him, but\l"
	.string "looks like you beat me!\p"
	.string "Really, I owe you a lot, {PLAYER}.\n"
	.string "You've saved my ship, so I'll offer you\l"
	.string "what I can - my service.\p"
	.string "I'll stop at docks around {COLOR GREEN}coastal towns\n"
	.string "and islands{COLOR DARK_GRAY}. Talk to me if you want to\l"
	.string "{COLOR GREEN}sail with me{COLOR DARK_GRAY} and get places faster! You\l"
	.string "can also have {COLOR GREEN}your own room{COLOR DARK_GRAY} on The\l"
	.string "Delphis. Chaire!$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_6:
# 92 "data/maps/ErinysPath_East/scripts.pory"
	.string "You can now travel with {COLOR GREEN}Bardas{COLOR DARK_GRAY} on his\n"
	.string "ship, {COLOR GREEN}The Delphis{COLOR DARK_GRAY}!\p"
	.string "Some areas can only be reached via\n"
	.string "sailing with Bardas, unlocked based on\l"
	.string "{COLOR GREEN}Gym Badges{COLOR DARK_GRAY}. Sailing to a location is only\l"
	.string "unlocked {COLOR GREEN}after visiting it{COLOR DARK_GRAY} if accessible\l"
	.string "by Surf or walking.$"

ErinysPath_East_Text_ChimeraAdminDefeated::
# 100 "data/maps/ErinysPath_East/scripts.pory"
	.string "First Bardas, then you... Team Chimera is\n"
	.string "having real problems recently.$"

ErinysPath_East_MapScripts::
# 2 "data/maps/ErinysPath_East/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ErinysPath_East_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ErinysPath_East_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 4 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 5 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 6 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 7 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 8 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 9 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 10 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 11 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 12 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 13 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 14 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 15 "data/maps/ErinysPath_East/scripts.pory"
	setobjectaswildencounter 5, ENCOUNTER_LAND
# 16 "data/maps/ErinysPath_East/scripts.pory"
	setobjectaswildencounter 6, ENCOUNTER_LAND
# 17 "data/maps/ErinysPath_East/scripts.pory"
	setobjectaswildencounter 7, ENCOUNTER_LAND
# 18 "data/maps/ErinysPath_East/scripts.pory"
	setobjectaswildencounter 8, ENCOUNTER_LAND
# 21 "data/maps/ErinysPath_East/scripts.pory"
	goto_if_unset FLAG_HELPED_PIRAEUS_PYTHIOS_TOWN, ErinysPath_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ErinysPath_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 23 "data/maps/ErinysPath_East/scripts.pory"
	setflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
	return


ErinysPath_East_EventScript_Basculin::
# 30 "data/maps/ErinysPath_East/scripts.pory"
	lock
# 31 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 32 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Basculin_Text_0
# 33 "data/maps/ErinysPath_East/scripts.pory"
	playmoncry SPECIES_BASCULIN_WHITE_STRIPED, CRY_MODE_NORMAL
# 34 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Basculin_Text_1
# 35 "data/maps/ErinysPath_East/scripts.pory"
	waitmoncry
# 36 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 37 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_Tauros::
# 43 "data/maps/ErinysPath_East/scripts.pory"
	lock
# 44 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 45 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Tauros_Text_0
# 46 "data/maps/ErinysPath_East/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEAN_AQUA_BREED, CRY_MODE_NORMAL
# 47 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Tauros_Text_1
# 48 "data/maps/ErinysPath_East/scripts.pory"
	waitmoncry
# 49 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 50 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_ChimeraWalrein::
# 56 "data/maps/ErinysPath_East/scripts.pory"
	lockall
# 57 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 58 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 59 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 60 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 61 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 62 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_ChimeraWalrein_Text_0
# 63 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_1
# 64 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 65 "data/maps/ErinysPath_East/scripts.pory"
	goto_if_set FLAG_GOT_BADGE_FOR_PIRAEUS, ErinysPath_East_EventScript_ChimeraWalrein_2
ErinysPath_East_EventScript_ChimeraWalrein_1:
# 129 "data/maps/ErinysPath_East/scripts.pory"
	releaseall
	end

ErinysPath_East_EventScript_ChimeraWalrein_2:
# 67 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 68 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 69 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 70 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 71 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_ChimeraWalrein_Text_0
# 72 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_2
# 73 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 74 "data/maps/ErinysPath_East/scripts.pory"
	goto_if_unset FLAG_HARD_MODE, ErinysPath_East_EventScript_ChimeraWalrein_5
# 80 "data/maps/ErinysPath_East/scripts.pory"
	trainerbattle_no_intro TRAINER_ERINYSPATH_CHIMERA_ADMIN_HARD, ErinysPath_East_Text_ChimeraAdminDefeated
ErinysPath_East_EventScript_ChimeraWalrein_4:
# 83 "data/maps/ErinysPath_East/scripts.pory"
	lockall
# 84 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 85 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 86 "data/maps/ErinysPath_East/scripts.pory"
	delay 20
# 87 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 2, ErinysPath_East_Movement_BasculinFlee
# 88 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 3, ErinysPath_East_Movement_TaurosFlee
# 89 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 90 "data/maps/ErinysPath_East/scripts.pory"
	delay 20
# 91 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_ChimeraWalrein_Text_0
# 92 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_3
# 93 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 95 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 1, ErinysPath_East_Movement_ChimeraAdminFlee
# 96 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 97 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 99 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 4, ErinysPath_East_Movement_PIRAEUSApproach
# 100 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 101 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_ChimeraWalrein_Text_4
# 102 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_5
# 103 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 104 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 4, ErinysPath_East_Movement_PIRAEUSExit
# 105 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 107 "data/maps/ErinysPath_East/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 108 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 109 "data/maps/ErinysPath_East/scripts.pory"
	removeobject 1
# 110 "data/maps/ErinysPath_East/scripts.pory"
	removeobject 2
# 111 "data/maps/ErinysPath_East/scripts.pory"
	removeobject 3
# 112 "data/maps/ErinysPath_East/scripts.pory"
	removeobject 4
# 113 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 114 "data/maps/ErinysPath_East/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 115 "data/maps/ErinysPath_East/scripts.pory"
	delay 20
# 117 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_6
# 118 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 119 "data/maps/ErinysPath_East/scripts.pory"
	setflag FLAG_HELPED_PIRAEUS_PYTHIOS_TOWN
# 121 "data/maps/ErinysPath_East/scripts.pory"
	delay 20
# 122 "data/maps/ErinysPath_East/scripts.pory"
	special DoDomeConfetti
# 123 "data/maps/ErinysPath_East/scripts.pory"
	completequest QUEST_HELP_PIRAEUS
# 124 "data/maps/ErinysPath_East/scripts.pory"
	delay 20
# 126 "data/maps/ErinysPath_East/scripts.pory"
	warpsilent MAP_ERINYS_PATH_EAST, 8, 10
# 127 "data/maps/ErinysPath_East/scripts.pory"
	waitstate
	goto ErinysPath_East_EventScript_ChimeraWalrein_1

ErinysPath_East_EventScript_ChimeraWalrein_5:
# 76 "data/maps/ErinysPath_East/scripts.pory"
	trainerbattle_no_intro TRAINER_ERINYSPATH_CHIMERA_ADMIN, ErinysPath_East_Text_ChimeraAdminDefeated
	goto ErinysPath_East_EventScript_ChimeraWalrein_4


# 138 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_BasculinFlee:
# 140 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 140 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 141 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 141 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 141 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 141 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 141 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 141 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 141 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 141 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 142 "data/maps/ErinysPath_East/scripts.pory"
	step_end

# 145 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_TaurosFlee:
# 147 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 147 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 147 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 148 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 148 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 148 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 148 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 148 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 148 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 149 "data/maps/ErinysPath_East/scripts.pory"
	step_end

# 152 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_ChimeraAdminFlee:
# 154 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 154 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 154 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 154 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 155 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 155 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 156 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 156 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 156 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 156 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 157 "data/maps/ErinysPath_East/scripts.pory"
	step_end

# 160 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_PIRAEUSApproach:
# 162 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 162 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 162 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 162 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 162 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 162 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 162 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 163 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 163 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 164 "data/maps/ErinysPath_East/scripts.pory"
	step_end

# 167 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_PIRAEUSExit:
# 169 "data/maps/ErinysPath_East/scripts.pory"
	walk_down
# 170 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 170 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 170 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 170 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 171 "data/maps/ErinysPath_East/scripts.pory"
	step_end

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Lueroi::
# 179 "data/maps/ErinysPath_East/scripts.pory"
	trainerbattle_single TRAINER_ERINYSPATH_E_LUEROI, ErinysPath_East_Text_Trainer_ErinysPath_E_LueroiIntro, ErinysPath_East_Text_Trainer_ErinysPath_E_LueroiDefeat
# 180 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Trainer_ErinysPath_E_Lueroi_Text_0
# 181 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Trainer_ErinysPath_E_Lueroi_Text_1
# 182 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 183 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_Trainer_ErinysPath_E_Kayley::
# 197 "data/maps/ErinysPath_East/scripts.pory"
	trainerbattle_single TRAINER_ERINYSPATH_E_KAYLEY, ErinysPath_East_Text_Trainer_ErinysPath_E_KayleyIntro, ErinysPath_East_Text_Trainer_ErinysPath_E_KayleyDefeat
# 198 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Trainer_ErinysPath_E_Kayley_Text_0
# 199 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Trainer_ErinysPath_E_Kayley_Text_1
# 200 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 201 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_BugCatcher::
# 215 "data/maps/ErinysPath_East/scripts.pory"
	lock
# 216 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 217 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_BugCatcher_Text_0
# 218 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_BugCatcher_Text_1
# 219 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 220 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_Trainer_ErinysPath_E_Roger::
# 226 "data/maps/ErinysPath_East/scripts.pory"
	trainerbattle_single TRAINER_ERINYSPATH_E_ROGER, ErinysPath_East_Text_Trainer_ErinysPath_E_RogerIntro, ErinysPath_East_Text_Trainer_ErinysPath_E_RogerDefeat
# 227 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Trainer_ErinysPath_E_Roger_Text_0
# 228 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Trainer_ErinysPath_E_Roger_Text_1
# 229 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 230 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_Man2::
# 244 "data/maps/ErinysPath_East/scripts.pory"
	lock
# 245 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 246 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Man2_Text_0
# 247 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Man2_Text_1
# 248 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 249 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_Basculin_Text_0:
# 32 "data/maps/ErinysPath_East/scripts.pory"
	.string "Basculin$"

ErinysPath_East_EventScript_Basculin_Text_1:
# 34 "data/maps/ErinysPath_East/scripts.pory"
	.string "Raawwhhh!$"

ErinysPath_East_EventScript_Tauros_Text_0:
# 45 "data/maps/ErinysPath_East/scripts.pory"
	.string "Tauros$"

ErinysPath_East_EventScript_Tauros_Text_1:
# 47 "data/maps/ErinysPath_East/scripts.pory"
	.string "Grrr-huff!$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_0:
# 62 "data/maps/ErinysPath_East/scripts.pory"
	.string "Chimera Admin$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_1:
# 63 "data/maps/ErinysPath_East/scripts.pory"
	.string "Grrr, when I find that stupid Sailor, I\n"
	.string "swear I'll show him not to mess with\l"
	.string "Team Chimera!$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_2:
# 72 "data/maps/ErinysPath_East/scripts.pory"
	.string "Hold it right there... I've been scouting\n"
	.string "around Pythios Town, and I think I saw\l"
	.string "you hanging around that Piraeus guy!\l"
	.string "That fool wouldn't donate his ratty\l"
	.string "little boat to our cause, then took me\l"
	.string "by surprise!\p"
	.string "I'll destroy you, then I'll take down\n"
	.string "Piraeus!$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_3:
# 92 "data/maps/ErinysPath_East/scripts.pory"
	.string "...Well, so much for team loyalty.\p"
	.string "Team Chimera must control land, sea, and\n"
	.string "sky. It is our destiny to hold the world\l"
	.string "in our hands, and one day you'll see the\l"
	.string "truth of that. I'll get you for this!$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_4:
# 101 "data/maps/ErinysPath_East/scripts.pory"
	.string "Piraeus$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_5:
# 102 "data/maps/ErinysPath_East/scripts.pory"
	.string "Woah, I never thought I'd see a Team\n"
	.string "Chimera thug run like that! I was\l"
	.string "climbing up the cliff to ambush them,\l"
	.string "but looks like you beat me!\p"
	.string "Really, I owe you a lot, {PLAYER}.\n"
	.string "You've saved my ship, so I'll offer you\l"
	.string "what I can - my service.\p"
	.string "I'll stop at docks around {COLOR GREEN}coastal towns\n"
	.string "and islands{COLOR DARK_GRAY}. Talk to me if you want to\l"
	.string "{COLOR GREEN}sail with me{COLOR DARK_GRAY} and get places faster! You\l"
	.string "can also have {COLOR GREEN}your own room{COLOR DARK_GRAY} on The\l"
	.string "Delphis. Chaire!$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_6:
# 117 "data/maps/ErinysPath_East/scripts.pory"
	.string "You can now travel with {COLOR GREEN}Piraeus{COLOR DARK_GRAY} on his\n"
	.string "ship, {COLOR GREEN}The Delphis{COLOR DARK_GRAY}!\p"
	.string "Some areas can only be reached via\n"
	.string "sailing with Piraeus, unlocked based on\l"
	.string "{COLOR GREEN}Gym Badges{COLOR DARK_GRAY}.\p"
	.string "A {COLOR GREEN}customizable Cabin{COLOR DARK_GRAY} room is also\n"
	.string "reserved on The Delphis!$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Lueroi_Text_0:
# 180 "data/maps/ErinysPath_East/scripts.pory"
	.string "Lueroi$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Lueroi_Text_1:
# 181 "data/maps/ErinysPath_East/scripts.pory"
	.string "I'm originally from the Kanto Region.\n"
	.string "That's a long way from here!$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Kayley_Text_0:
# 198 "data/maps/ErinysPath_East/scripts.pory"
	.string "Kayley$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Kayley_Text_1:
# 199 "data/maps/ErinysPath_East/scripts.pory"
	.string "I hear they hold Pokémon Contests in\n"
	.string "the Hoenn Region. I wonder if they hold\l"
	.string "Contests in Ilios?$"

ErinysPath_East_EventScript_BugCatcher_Text_0:
# 217 "data/maps/ErinysPath_East/scripts.pory"
	.string "Bug Catcher$"

ErinysPath_East_EventScript_BugCatcher_Text_1:
# 218 "data/maps/ErinysPath_East/scripts.pory"
	.string "Some of the wild Pokémon here are...\n"
	.string "weird. They looked like one thing, but I\l"
	.string "caught it, and it turned into a\l"
	.string "different Pokémon!$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Roger_Text_0:
# 227 "data/maps/ErinysPath_East/scripts.pory"
	.string "Roger$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Roger_Text_1:
# 228 "data/maps/ErinysPath_East/scripts.pory"
	.string "Not many people pass through this way.\n"
	.string "Most trade goes from Sofos City, around\l"
	.string "the south of Ilios, into the port at\l"
	.string "Pythios Town.$"

ErinysPath_East_EventScript_Man2_Text_0:
# 246 "data/maps/ErinysPath_East/scripts.pory"
	.string "Man$"

ErinysPath_East_EventScript_Man2_Text_1:
# 247 "data/maps/ErinysPath_East/scripts.pory"
	.string "In some areas, totally different\n"
	.string "Pokémon come out during the day versus\l"
	.string "the night. For example, Solosis is only\l"
	.string "active in the day, but Gothita comes\l"
	.string "out at night!$"

ErinysPath_East_Text_ChimeraAdminDefeated::
# 133 "data/maps/ErinysPath_East/scripts.pory"
	.string "First Piraeus, then you... Team Chimera\n"
	.string "is having real problems recently.$"

ErinysPath_East_Text_Trainer_ErinysPath_E_LueroiIntro::
# 186 "data/maps/ErinysPath_East/scripts.pory"
	.string "It's a long road from here to Sofos\n"
	.string "City. The views are worth the journey,\l"
	.string "though!$"

ErinysPath_East_Text_Trainer_ErinysPath_E_LueroiDefeat::
# 190 "data/maps/ErinysPath_East/scripts.pory"
	.string "Back to the Pokémon Center for me.$"

ErinysPath_East_Text_Trainer_ErinysPath_E_KayleyIntro::
# 204 "data/maps/ErinysPath_East/scripts.pory"
	.string "I'm on the path to Sofos City. Help my\n"
	.string "Pokémon train for our show!$"

ErinysPath_East_Text_Trainer_ErinysPath_E_KayleyDefeat::
# 208 "data/maps/ErinysPath_East/scripts.pory"
	.string "Phew, great vocals!$"

ErinysPath_East_Text_Trainer_ErinysPath_E_RogerIntro::
# 233 "data/maps/ErinysPath_East/scripts.pory"
	.string "Gosh, this patrol is boring. Let's spice\n"
	.string "it up!$"

ErinysPath_East_Text_Trainer_ErinysPath_E_RogerDefeat::
# 237 "data/maps/ErinysPath_East/scripts.pory"
	.string "Darn! Out of energy!$"

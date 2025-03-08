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
	return


ErinysPath_East_EventScript_Basculin::
# 24 "data/maps/ErinysPath_East/scripts.pory"
	lock
# 25 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 26 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Basculin_Text_0
# 27 "data/maps/ErinysPath_East/scripts.pory"
	playmoncry SPECIES_BASCULIN_WHITE_STRIPED, CRY_MODE_NORMAL
# 28 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Basculin_Text_1
# 29 "data/maps/ErinysPath_East/scripts.pory"
	waitmoncry
# 30 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 31 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_Tauros::
# 37 "data/maps/ErinysPath_East/scripts.pory"
	lock
# 38 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 39 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Tauros_Text_0
# 40 "data/maps/ErinysPath_East/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEAN_AQUA_BREED, CRY_MODE_NORMAL
# 41 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Tauros_Text_1
# 42 "data/maps/ErinysPath_East/scripts.pory"
	waitmoncry
# 43 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 44 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_ChimeraWalrein::
# 50 "data/maps/ErinysPath_East/scripts.pory"
	lockall
# 51 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 52 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 53 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 54 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 55 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 56 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_ChimeraWalrein_Text_0
# 57 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_1
# 58 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 59 "data/maps/ErinysPath_East/scripts.pory"
	goto_if_set FLAG_GOT_BADGE_FOR_PIRAEUS, ErinysPath_East_EventScript_ChimeraWalrein_2
ErinysPath_East_EventScript_ChimeraWalrein_1:
# 115 "data/maps/ErinysPath_East/scripts.pory"
	releaseall
	end

ErinysPath_East_EventScript_ChimeraWalrein_2:
# 61 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 62 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 63 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 64 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 65 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_ChimeraWalrein_Text_0
# 66 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_2
# 67 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 68 "data/maps/ErinysPath_East/scripts.pory"
	compare VAR_DIFFICULTY, 0
	goto_if_eq ErinysPath_East_EventScript_ChimeraWalrein_5
# 74 "data/maps/ErinysPath_East/scripts.pory"
	trainerbattle_no_intro TRAINER_ERINYSPATH_CHIMERA_ADMIN_HARD, ErinysPath_East_Text_ChimeraAdminDefeated
ErinysPath_East_EventScript_ChimeraWalrein_4:
# 77 "data/maps/ErinysPath_East/scripts.pory"
	lockall
# 78 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 79 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 80 "data/maps/ErinysPath_East/scripts.pory"
	delay 20
# 81 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 2, ErinysPath_East_Movement_BasculinFlee
# 82 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 3, ErinysPath_East_Movement_TaurosFlee
# 83 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 84 "data/maps/ErinysPath_East/scripts.pory"
	delay 20
# 85 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_ChimeraWalrein_Text_0
# 86 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_3
# 87 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 89 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 1, ErinysPath_East_Movement_ChimeraAdminFlee
# 90 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 91 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 93 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 4, ErinysPath_East_Movement_PIRAEUSApproach
# 94 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 95 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_ChimeraWalrein_Text_4
# 96 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_5
# 97 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 98 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 4, ErinysPath_East_Movement_PIRAEUSExit
# 99 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 101 "data/maps/ErinysPath_East/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 102 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 103 "data/maps/ErinysPath_East/scripts.pory"
	removeobject 1
# 104 "data/maps/ErinysPath_East/scripts.pory"
	removeobject 2
# 105 "data/maps/ErinysPath_East/scripts.pory"
	removeobject 3
# 106 "data/maps/ErinysPath_East/scripts.pory"
	removeobject 4
# 107 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 108 "data/maps/ErinysPath_East/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 109 "data/maps/ErinysPath_East/scripts.pory"
	delay 20
# 111 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_6
# 112 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 113 "data/maps/ErinysPath_East/scripts.pory"
	setflag FLAG_HELPED_PIRAEUS_PYTHIOS_TOWN
	goto ErinysPath_East_EventScript_ChimeraWalrein_1

ErinysPath_East_EventScript_ChimeraWalrein_5:
# 70 "data/maps/ErinysPath_East/scripts.pory"
	trainerbattle_no_intro TRAINER_ERINYSPATH_CHIMERA_ADMIN, ErinysPath_East_Text_ChimeraAdminDefeated
	goto ErinysPath_East_EventScript_ChimeraWalrein_4


# 124 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_BasculinFlee:
# 126 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 126 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 127 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 127 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 127 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 127 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 127 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 127 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 127 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 127 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 128 "data/maps/ErinysPath_East/scripts.pory"
	step_end

# 131 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_TaurosFlee:
# 133 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 133 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 133 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 134 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 134 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 134 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 134 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 134 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 134 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 135 "data/maps/ErinysPath_East/scripts.pory"
	step_end

# 138 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_ChimeraAdminFlee:
# 140 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 140 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 140 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 140 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 141 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 141 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 142 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 142 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 142 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 142 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 143 "data/maps/ErinysPath_East/scripts.pory"
	step_end

# 146 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_PIRAEUSApproach:
# 148 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 148 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 148 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 148 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 148 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 148 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 148 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 149 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 149 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 150 "data/maps/ErinysPath_East/scripts.pory"
	step_end

# 153 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_PIRAEUSExit:
# 155 "data/maps/ErinysPath_East/scripts.pory"
	walk_down
# 156 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 156 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 156 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 156 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 157 "data/maps/ErinysPath_East/scripts.pory"
	step_end

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Lueroi::
# 165 "data/maps/ErinysPath_East/scripts.pory"
	trainerbattle_single TRAINER_ERINYSPATH_E_LUEROI, ErinysPath_East_Text_Trainer_ErinysPath_E_LueroiIntro, ErinysPath_East_Text_Trainer_ErinysPath_E_LueroiDefeat
# 166 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Trainer_ErinysPath_E_Lueroi_Text_0
# 167 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Trainer_ErinysPath_E_Lueroi_Text_1
# 168 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 169 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_Trainer_ErinysPath_E_Kayley::
# 183 "data/maps/ErinysPath_East/scripts.pory"
	trainerbattle_single TRAINER_ERINYSPATH_E_KAYLEY, ErinysPath_East_Text_Trainer_ErinysPath_E_KayleyIntro, ErinysPath_East_Text_Trainer_ErinysPath_E_KayleyDefeat
# 184 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Trainer_ErinysPath_E_Kayley_Text_0
# 185 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Trainer_ErinysPath_E_Kayley_Text_1
# 186 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 187 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_BugCatcher::
# 201 "data/maps/ErinysPath_East/scripts.pory"
	lock
# 202 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 203 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_BugCatcher_Text_0
# 204 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_BugCatcher_Text_1
# 205 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 206 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_Trainer_ErinysPath_E_Roger::
# 212 "data/maps/ErinysPath_East/scripts.pory"
	trainerbattle_single TRAINER_ERINYSPATH_E_ROGER, ErinysPath_East_Text_Trainer_ErinysPath_E_RogerIntro, ErinysPath_East_Text_Trainer_ErinysPath_E_RogerDefeat
# 213 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Trainer_ErinysPath_E_Roger_Text_0
# 214 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Trainer_ErinysPath_E_Roger_Text_1
# 215 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 216 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_Man2::
# 230 "data/maps/ErinysPath_East/scripts.pory"
	lock
# 231 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 232 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Man2_Text_0
# 233 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Man2_Text_1
# 234 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 235 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_Basculin_Text_0:
# 26 "data/maps/ErinysPath_East/scripts.pory"
	.string "Basculin$"

ErinysPath_East_EventScript_Basculin_Text_1:
# 28 "data/maps/ErinysPath_East/scripts.pory"
	.string "Raawwhhh!$"

ErinysPath_East_EventScript_Tauros_Text_0:
# 39 "data/maps/ErinysPath_East/scripts.pory"
	.string "Tauros$"

ErinysPath_East_EventScript_Tauros_Text_1:
# 41 "data/maps/ErinysPath_East/scripts.pory"
	.string "Grrr-huff!$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_0:
# 56 "data/maps/ErinysPath_East/scripts.pory"
	.string "Chimera Admin$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_1:
# 57 "data/maps/ErinysPath_East/scripts.pory"
	.string "Grrr, when I find that stupid Sailor, I\n"
	.string "swear I'll show him not to mess with\l"
	.string "Team Chimera!$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_2:
# 66 "data/maps/ErinysPath_East/scripts.pory"
	.string "Hold it right there... I've been scouting\n"
	.string "around Pythios Town, and I think I saw\l"
	.string "you hanging around that Piraeus guy!\l"
	.string "That fool wouldn't donate his ratty\l"
	.string "little boat to our cause, then took a\l"
	.string "Team Chimera member by surprise!\p"
	.string "I'll destroy you, then I'll take down\n"
	.string "Piraeus!$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_3:
# 86 "data/maps/ErinysPath_East/scripts.pory"
	.string "...Well, so much for team loyalty.\p"
	.string "Looks like you and Piraeus are winning\n"
	.string "for now. Mark my words, Team Chimera will\l"
	.string "make you pay for this humiliation!$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_4:
# 95 "data/maps/ErinysPath_East/scripts.pory"
	.string "Piraeus$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_5:
# 96 "data/maps/ErinysPath_East/scripts.pory"
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
# 111 "data/maps/ErinysPath_East/scripts.pory"
	.string "You can now travel with {COLOR GREEN}Piraeus{COLOR DARK_GRAY} on his\n"
	.string "ship, {COLOR GREEN}The Delphis{COLOR DARK_GRAY}!\p"
	.string "Some areas can only be reached via\n"
	.string "sailing with Piraeus, unlocked based on\l"
	.string "{COLOR GREEN}Gym Badges{COLOR DARK_GRAY}.\p"
	.string "A {COLOR GREEN}customizable Cabin{COLOR DARK_GRAY} room is also\n"
	.string "reserved on The Delphis!$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Lueroi_Text_0:
# 166 "data/maps/ErinysPath_East/scripts.pory"
	.string "Lueroi$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Lueroi_Text_1:
# 167 "data/maps/ErinysPath_East/scripts.pory"
	.string "I'm originally from the Kanto Region.\n"
	.string "That's a long way from here!$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Kayley_Text_0:
# 184 "data/maps/ErinysPath_East/scripts.pory"
	.string "Kayley$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Kayley_Text_1:
# 185 "data/maps/ErinysPath_East/scripts.pory"
	.string "I hear they hold Pokémon Contests in\n"
	.string "the Hoenn Region. I wonder if they hold\l"
	.string "Contests in Ilios?$"

ErinysPath_East_EventScript_BugCatcher_Text_0:
# 203 "data/maps/ErinysPath_East/scripts.pory"
	.string "Bug Catcher$"

ErinysPath_East_EventScript_BugCatcher_Text_1:
# 204 "data/maps/ErinysPath_East/scripts.pory"
	.string "Some of the wild Pokémon here are...\n"
	.string "weird. They looked like one thing, but I\l"
	.string "caught it, and it turned into a\l"
	.string "different Pokémon!$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Roger_Text_0:
# 213 "data/maps/ErinysPath_East/scripts.pory"
	.string "Roger$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Roger_Text_1:
# 214 "data/maps/ErinysPath_East/scripts.pory"
	.string "Not many people pass through this way.\n"
	.string "Most trade goes from Sofos City, around\l"
	.string "the south of Ilios, into the port at\l"
	.string "Pythios Town.$"

ErinysPath_East_EventScript_Man2_Text_0:
# 232 "data/maps/ErinysPath_East/scripts.pory"
	.string "Man$"

ErinysPath_East_EventScript_Man2_Text_1:
# 233 "data/maps/ErinysPath_East/scripts.pory"
	.string "In some areas, totally different\n"
	.string "Pokémon come out during the day versus\l"
	.string "the night. For example, Solosis is only\l"
	.string "active in the day, but Gothita comes\l"
	.string "out at night!$"

ErinysPath_East_Text_ChimeraAdminDefeated::
# 119 "data/maps/ErinysPath_East/scripts.pory"
	.string "First Piraeus, then you... Team Chimera\n"
	.string "is having real problems recently.$"

ErinysPath_East_Text_Trainer_ErinysPath_E_LueroiIntro::
# 172 "data/maps/ErinysPath_East/scripts.pory"
	.string "It's a long road from here to Sofos\n"
	.string "City. The views are worth the journey,\l"
	.string "though!$"

ErinysPath_East_Text_Trainer_ErinysPath_E_LueroiDefeat::
# 176 "data/maps/ErinysPath_East/scripts.pory"
	.string "Back to the Pokémon Center for me.$"

ErinysPath_East_Text_Trainer_ErinysPath_E_KayleyIntro::
# 190 "data/maps/ErinysPath_East/scripts.pory"
	.string "Help my Pokémon train for our show!$"

ErinysPath_East_Text_Trainer_ErinysPath_E_KayleyDefeat::
# 194 "data/maps/ErinysPath_East/scripts.pory"
	.string "Phew, great vocals!$"

ErinysPath_East_Text_Trainer_ErinysPath_E_RogerIntro::
# 219 "data/maps/ErinysPath_East/scripts.pory"
	.string "Gosh, this patrol is boring. Let's spice\n"
	.string "it up!$"

ErinysPath_East_Text_Trainer_ErinysPath_E_RogerDefeat::
# 223 "data/maps/ErinysPath_East/scripts.pory"
	.string "Darn! Out of energy!$"

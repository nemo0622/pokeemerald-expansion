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


ErinysPath_East_EventScript_UniversityStudentRouteCheck::
# 30 "data/maps/ErinysPath_East/scripts.pory"
	lock
# 31 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 32 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_UniversityStudentRouteCheck_Text_0
# 34 "data/maps/ErinysPath_East/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_ERINYS_PATH, ErinysPath_East_EventScript_UniversityStudentRouteCheck_2
# 41 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_UniversityStudentRouteCheck_Text_2
# 42 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 43 "data/maps/ErinysPath_East/scripts.pory"
	special CheckRouteCaptureProgress
# 44 "data/maps/ErinysPath_East/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ErinysPath_East_EventScript_UniversityStudentRouteCheck_5
ErinysPath_East_EventScript_UniversityStudentRouteCheck_1:
# 61 "data/maps/ErinysPath_East/scripts.pory"
	release
	end

ErinysPath_East_EventScript_UniversityStudentRouteCheck_2:
# 36 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_UniversityStudentRouteCheck_Text_1
# 37 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
	goto ErinysPath_East_EventScript_UniversityStudentRouteCheck_1

ErinysPath_East_EventScript_UniversityStudentRouteCheck_5:
# 46 "data/maps/ErinysPath_East/scripts.pory"
	delay 20
# 47 "data/maps/ErinysPath_East/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 48 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_UniversityStudentRouteCheck_Text_0
# 49 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_UniversityStudentRouteCheck_Text_3
# 50 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 51 "data/maps/ErinysPath_East/scripts.pory"
	delay 5
# 54 "data/maps/ErinysPath_East/scripts.pory"
	giveitem ITEM_FOCUS_SASH, 2
# 55 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 57 "data/maps/ErinysPath_East/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_ERINYS_PATH
	goto ErinysPath_East_EventScript_UniversityStudentRouteCheck_1


ErinysPath_East_EventScript_DirectionSign::
# 67 "data/maps/ErinysPath_East/scripts.pory"
	lock
# 68 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_DirectionSign_Text_0
# 69 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 70 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_Basculin::
# 76 "data/maps/ErinysPath_East/scripts.pory"
	lock
# 77 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 78 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Basculin_Text_0
# 79 "data/maps/ErinysPath_East/scripts.pory"
	playmoncry SPECIES_BASCULIN_WHITE_STRIPED, CRY_MODE_NORMAL
# 80 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Basculin_Text_1
# 81 "data/maps/ErinysPath_East/scripts.pory"
	waitmoncry
# 82 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 83 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_Tauros::
# 89 "data/maps/ErinysPath_East/scripts.pory"
	lock
# 90 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 91 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Tauros_Text_0
# 92 "data/maps/ErinysPath_East/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEAN_AQUA_BREED, CRY_MODE_NORMAL
# 93 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Tauros_Text_1
# 94 "data/maps/ErinysPath_East/scripts.pory"
	waitmoncry
# 95 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 96 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_ChimeraWalrein::
# 102 "data/maps/ErinysPath_East/scripts.pory"
	lockall
# 103 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 104 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 105 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 106 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 107 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 108 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_ChimeraWalrein_Text_0
# 109 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_1
# 110 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 111 "data/maps/ErinysPath_East/scripts.pory"
	goto_if_set FLAG_GOT_BADGE_FOR_PIRAEUS, ErinysPath_East_EventScript_ChimeraWalrein_2
ErinysPath_East_EventScript_ChimeraWalrein_1:
# 175 "data/maps/ErinysPath_East/scripts.pory"
	releaseall
	end

ErinysPath_East_EventScript_ChimeraWalrein_2:
# 113 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 114 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 115 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 116 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 117 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_ChimeraWalrein_Text_0
# 118 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_2
# 119 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 120 "data/maps/ErinysPath_East/scripts.pory"
	goto_if_unset FLAG_HARD_MODE, ErinysPath_East_EventScript_ChimeraWalrein_5
# 126 "data/maps/ErinysPath_East/scripts.pory"
	trainerbattle_no_intro TRAINER_ERINYSPATH_CHIMERA_ADMIN_HARD, ErinysPath_East_Text_ChimeraAdminDefeated
ErinysPath_East_EventScript_ChimeraWalrein_4:
# 129 "data/maps/ErinysPath_East/scripts.pory"
	lockall
# 130 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 131 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 132 "data/maps/ErinysPath_East/scripts.pory"
	delay 20
# 133 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 2, ErinysPath_East_Movement_BasculinFlee
# 134 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 3, ErinysPath_East_Movement_TaurosFlee
# 135 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 136 "data/maps/ErinysPath_East/scripts.pory"
	delay 20
# 137 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_ChimeraWalrein_Text_0
# 138 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_3
# 139 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 141 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 1, ErinysPath_East_Movement_ChimeraAdminFlee
# 142 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 143 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 145 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 4, ErinysPath_East_Movement_PIRAEUSApproach
# 146 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 147 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_ChimeraWalrein_Text_4
# 148 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_5
# 149 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 150 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 4, ErinysPath_East_Movement_PIRAEUSExit
# 151 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 153 "data/maps/ErinysPath_East/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 154 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 155 "data/maps/ErinysPath_East/scripts.pory"
	removeobject 1
# 156 "data/maps/ErinysPath_East/scripts.pory"
	removeobject 2
# 157 "data/maps/ErinysPath_East/scripts.pory"
	removeobject 3
# 158 "data/maps/ErinysPath_East/scripts.pory"
	removeobject 4
# 159 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 160 "data/maps/ErinysPath_East/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 161 "data/maps/ErinysPath_East/scripts.pory"
	delay 20
# 163 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_6
# 164 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 165 "data/maps/ErinysPath_East/scripts.pory"
	setflag FLAG_HELPED_PIRAEUS_PYTHIOS_TOWN
# 167 "data/maps/ErinysPath_East/scripts.pory"
	delay 20
# 168 "data/maps/ErinysPath_East/scripts.pory"
	special DoDomeConfetti
# 169 "data/maps/ErinysPath_East/scripts.pory"
	completequest QUEST_HELP_PIRAEUS
# 170 "data/maps/ErinysPath_East/scripts.pory"
	delay 20
# 172 "data/maps/ErinysPath_East/scripts.pory"
	warpsilent MAP_ERINYS_PATH_EAST, 8, 10
# 173 "data/maps/ErinysPath_East/scripts.pory"
	waitstate
	goto ErinysPath_East_EventScript_ChimeraWalrein_1

ErinysPath_East_EventScript_ChimeraWalrein_5:
# 122 "data/maps/ErinysPath_East/scripts.pory"
	trainerbattle_no_intro TRAINER_ERINYSPATH_CHIMERA_ADMIN, ErinysPath_East_Text_ChimeraAdminDefeated
	goto ErinysPath_East_EventScript_ChimeraWalrein_4


# 184 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_BasculinFlee:
# 186 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 186 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 187 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 187 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 187 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 187 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 187 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 187 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 187 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 187 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 188 "data/maps/ErinysPath_East/scripts.pory"
	step_end

# 191 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_TaurosFlee:
# 193 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 193 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 193 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 194 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 194 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 194 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 194 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 194 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 194 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 195 "data/maps/ErinysPath_East/scripts.pory"
	step_end

# 198 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_ChimeraAdminFlee:
# 200 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 200 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 200 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 200 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 201 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 201 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 202 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 202 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 202 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 202 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 203 "data/maps/ErinysPath_East/scripts.pory"
	step_end

# 206 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_PIRAEUSApproach:
# 208 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 208 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 208 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 208 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 208 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 208 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 208 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 209 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 209 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 210 "data/maps/ErinysPath_East/scripts.pory"
	step_end

# 213 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_PIRAEUSExit:
# 215 "data/maps/ErinysPath_East/scripts.pory"
	walk_down
# 216 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 216 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 216 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 216 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 217 "data/maps/ErinysPath_East/scripts.pory"
	step_end

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Lueroi::
# 225 "data/maps/ErinysPath_East/scripts.pory"
	trainerbattle_single TRAINER_ERINYSPATH_E_LUEROI, ErinysPath_East_Text_Trainer_ErinysPath_E_LueroiIntro, ErinysPath_East_Text_Trainer_ErinysPath_E_LueroiDefeat
# 226 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Trainer_ErinysPath_E_Lueroi_Text_0
# 227 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Trainer_ErinysPath_E_Lueroi_Text_1
# 228 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 229 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_Trainer_ErinysPath_E_Kayley::
# 243 "data/maps/ErinysPath_East/scripts.pory"
	trainerbattle_single TRAINER_ERINYSPATH_E_KAYLEY, ErinysPath_East_Text_Trainer_ErinysPath_E_KayleyIntro, ErinysPath_East_Text_Trainer_ErinysPath_E_KayleyDefeat
# 244 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Trainer_ErinysPath_E_Kayley_Text_0
# 245 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Trainer_ErinysPath_E_Kayley_Text_1
# 246 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 247 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_BugCatcher::
# 261 "data/maps/ErinysPath_East/scripts.pory"
	lock
# 262 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 263 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_BugCatcher_Text_0
# 264 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_BugCatcher_Text_1
# 265 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 266 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_Trainer_ErinysPath_E_Roger::
# 272 "data/maps/ErinysPath_East/scripts.pory"
	trainerbattle_single TRAINER_ERINYSPATH_E_ROGER, ErinysPath_East_Text_Trainer_ErinysPath_E_RogerIntro, ErinysPath_East_Text_Trainer_ErinysPath_E_RogerDefeat
# 273 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Trainer_ErinysPath_E_Roger_Text_0
# 274 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Trainer_ErinysPath_E_Roger_Text_1
# 275 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 276 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_Man2::
# 290 "data/maps/ErinysPath_East/scripts.pory"
	lock
# 291 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 292 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Man2_Text_0
# 293 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Man2_Text_1
# 294 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 295 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_UniversityStudentRouteCheck_Text_0:
# 32 "data/maps/ErinysPath_East/scripts.pory"
	.string "Uni. Student$"

ErinysPath_East_EventScript_UniversityStudentRouteCheck_Text_1:
# 36 "data/maps/ErinysPath_East/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

ErinysPath_East_EventScript_UniversityStudentRouteCheck_Text_2:
# 41 "data/maps/ErinysPath_East/scripts.pory"
	.string "Chaire! I'm a student from the Acrisia\n"
	.string "University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in East and West Erinys\l"
	.string "Path. If you've caught all the Pokémon\l"
	.string "here, please let me know.$"

ErinysPath_East_EventScript_UniversityStudentRouteCheck_Text_3:
# 49 "data/maps/ErinysPath_East/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

ErinysPath_East_EventScript_DirectionSign_Text_0:
# 68 "data/maps/ErinysPath_East/scripts.pory"
	.string "Erinys Path - West\n"
	.string "Where Red Leaves Fall\p"
	.string "{LEFT_ARROW} Pythios Town\n"
	.string "Erinys Path - East {RIGHT_ARROW}$"

ErinysPath_East_EventScript_Basculin_Text_0:
# 78 "data/maps/ErinysPath_East/scripts.pory"
	.string "Basculin$"

ErinysPath_East_EventScript_Basculin_Text_1:
# 80 "data/maps/ErinysPath_East/scripts.pory"
	.string "Raawwhhh!$"

ErinysPath_East_EventScript_Tauros_Text_0:
# 91 "data/maps/ErinysPath_East/scripts.pory"
	.string "Tauros$"

ErinysPath_East_EventScript_Tauros_Text_1:
# 93 "data/maps/ErinysPath_East/scripts.pory"
	.string "Grrr-huff!$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_0:
# 108 "data/maps/ErinysPath_East/scripts.pory"
	.string "Chimera Admin$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_1:
# 109 "data/maps/ErinysPath_East/scripts.pory"
	.string "Grrr, when I find that stupid Sailor, I\n"
	.string "swear I'll show him not to mess with\l"
	.string "Team Chimera!$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_2:
# 118 "data/maps/ErinysPath_East/scripts.pory"
	.string "Hold it right there... I've been scouting\n"
	.string "around Pythios Town, and I think I saw\l"
	.string "you hanging around that Piraeus guy!\l"
	.string "That fool wouldn't donate his ratty\l"
	.string "little boat to our cause, then took me\l"
	.string "by surprise!\p"
	.string "I'll destroy you, then I'll take down\n"
	.string "Piraeus!$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_3:
# 138 "data/maps/ErinysPath_East/scripts.pory"
	.string "...Well, so much for team loyalty.\p"
	.string "Team Chimera must control land, sea, and\n"
	.string "sky. It is our destiny to hold the world\l"
	.string "in our hands, and one day you'll see the\l"
	.string "truth of that. I'll get you for this!$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_4:
# 147 "data/maps/ErinysPath_East/scripts.pory"
	.string "Piraeus$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_5:
# 148 "data/maps/ErinysPath_East/scripts.pory"
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
# 163 "data/maps/ErinysPath_East/scripts.pory"
	.string "You can now travel with {COLOR GREEN}Piraeus{COLOR DARK_GRAY} on his\n"
	.string "ship, {COLOR GREEN}The Delphis{COLOR DARK_GRAY}!\p"
	.string "Some areas can only be reached via\n"
	.string "sailing with Piraeus, unlocked based on\l"
	.string "{COLOR GREEN}Gym Badges{COLOR DARK_GRAY}.\p"
	.string "A {COLOR GREEN}customizable Cabin{COLOR DARK_GRAY} room is also\n"
	.string "reserved on The Delphis!$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Lueroi_Text_0:
# 226 "data/maps/ErinysPath_East/scripts.pory"
	.string "Lueroi$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Lueroi_Text_1:
# 227 "data/maps/ErinysPath_East/scripts.pory"
	.string "I'm originally from the Kanto Region.\n"
	.string "That's a long way from here!$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Kayley_Text_0:
# 244 "data/maps/ErinysPath_East/scripts.pory"
	.string "Kayley$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Kayley_Text_1:
# 245 "data/maps/ErinysPath_East/scripts.pory"
	.string "I hear they hold Pokémon Contests in\n"
	.string "the Hoenn Region. I wonder if they hold\l"
	.string "Contests in Ilios?$"

ErinysPath_East_EventScript_BugCatcher_Text_0:
# 263 "data/maps/ErinysPath_East/scripts.pory"
	.string "Bug Catcher$"

ErinysPath_East_EventScript_BugCatcher_Text_1:
# 264 "data/maps/ErinysPath_East/scripts.pory"
	.string "Some of the wild Pokémon here are...\n"
	.string "weird. They looked like one thing, but I\l"
	.string "caught it, and it turned into a\l"
	.string "different Pokémon!$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Roger_Text_0:
# 273 "data/maps/ErinysPath_East/scripts.pory"
	.string "Roger$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Roger_Text_1:
# 274 "data/maps/ErinysPath_East/scripts.pory"
	.string "Not many people pass through this way.\n"
	.string "Most trade goes from Sofos City, around\l"
	.string "the south of Ilios, into the port at\l"
	.string "Pythios Town.$"

ErinysPath_East_EventScript_Man2_Text_0:
# 292 "data/maps/ErinysPath_East/scripts.pory"
	.string "Man$"

ErinysPath_East_EventScript_Man2_Text_1:
# 293 "data/maps/ErinysPath_East/scripts.pory"
	.string "In some areas, totally different\n"
	.string "Pokémon come out during the day versus\l"
	.string "the night. For example, Solosis is only\l"
	.string "active in the day, but Gothita comes\l"
	.string "out at night!$"

ErinysPath_East_Text_ChimeraAdminDefeated::
# 179 "data/maps/ErinysPath_East/scripts.pory"
	.string "First Piraeus, then you... Team Chimera\n"
	.string "is having real problems recently.$"

ErinysPath_East_Text_Trainer_ErinysPath_E_LueroiIntro::
# 232 "data/maps/ErinysPath_East/scripts.pory"
	.string "It's a long road from here to Sofos\n"
	.string "City. The views are worth the journey,\l"
	.string "though!$"

ErinysPath_East_Text_Trainer_ErinysPath_E_LueroiDefeat::
# 236 "data/maps/ErinysPath_East/scripts.pory"
	.string "Back to the Pokémon Center for me.$"

ErinysPath_East_Text_Trainer_ErinysPath_E_KayleyIntro::
# 250 "data/maps/ErinysPath_East/scripts.pory"
	.string "I'm on the path to Sofos City. Help my\n"
	.string "Pokémon train for our show!$"

ErinysPath_East_Text_Trainer_ErinysPath_E_KayleyDefeat::
# 254 "data/maps/ErinysPath_East/scripts.pory"
	.string "Phew, great vocals!$"

ErinysPath_East_Text_Trainer_ErinysPath_E_RogerIntro::
# 279 "data/maps/ErinysPath_East/scripts.pory"
	.string "Gosh, this patrol is boring. Let's spice\n"
	.string "it up!$"

ErinysPath_East_Text_Trainer_ErinysPath_E_RogerDefeat::
# 283 "data/maps/ErinysPath_East/scripts.pory"
	.string "Darn! Out of energy!$"

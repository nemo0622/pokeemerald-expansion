ErinysPath_East_MapScripts::
# 2 "data/maps/ErinysPath_East/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ErinysPath_East_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ErinysPath_East_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ErinysPath_East/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, ErinysPath_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ErinysPath_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 9 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 10 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 11 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 12 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 13 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 14 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 15 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 16 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 17 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 18 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 19 "data/maps/ErinysPath_East/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 20 "data/maps/ErinysPath_East/scripts.pory"
	setobjectaswildencounter 5, ENCOUNTER_LAND
# 21 "data/maps/ErinysPath_East/scripts.pory"
	setobjectaswildencounter 6, ENCOUNTER_LAND
# 22 "data/maps/ErinysPath_East/scripts.pory"
	setobjectaswildencounter 7, ENCOUNTER_LAND
# 23 "data/maps/ErinysPath_East/scripts.pory"
	setobjectaswildencounter 8, ENCOUNTER_LAND
# 26 "data/maps/ErinysPath_East/scripts.pory"
	goto_if_unset FLAG_HELPED_PIRAEUS_PYTHIOS_TOWN, ErinysPath_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

ErinysPath_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/ErinysPath_East/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto ErinysPath_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ErinysPath_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 28 "data/maps/ErinysPath_East/scripts.pory"
	setflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
	return


ErinysPath_East_EventScript_UniversityStudentRouteCheck::
# 35 "data/maps/ErinysPath_East/scripts.pory"
	lock
# 36 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 37 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_UniversityStudentRouteCheck_Text_0
# 39 "data/maps/ErinysPath_East/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_ERINYS_PATH, ErinysPath_East_EventScript_UniversityStudentRouteCheck_2
# 46 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_UniversityStudentRouteCheck_Text_2
# 47 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 48 "data/maps/ErinysPath_East/scripts.pory"
	special CheckRouteCaptureProgress
# 49 "data/maps/ErinysPath_East/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ErinysPath_East_EventScript_UniversityStudentRouteCheck_5
ErinysPath_East_EventScript_UniversityStudentRouteCheck_1:
# 66 "data/maps/ErinysPath_East/scripts.pory"
	release
	end

ErinysPath_East_EventScript_UniversityStudentRouteCheck_2:
# 41 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_UniversityStudentRouteCheck_Text_1
# 42 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
	goto ErinysPath_East_EventScript_UniversityStudentRouteCheck_1

ErinysPath_East_EventScript_UniversityStudentRouteCheck_5:
# 51 "data/maps/ErinysPath_East/scripts.pory"
	delay 20
# 52 "data/maps/ErinysPath_East/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 53 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_UniversityStudentRouteCheck_Text_0
# 54 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_UniversityStudentRouteCheck_Text_3
# 55 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 56 "data/maps/ErinysPath_East/scripts.pory"
	delay 5
# 59 "data/maps/ErinysPath_East/scripts.pory"
	giveitem ITEM_FOCUS_SASH, 2
# 60 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 62 "data/maps/ErinysPath_East/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_ERINYS_PATH
	goto ErinysPath_East_EventScript_UniversityStudentRouteCheck_1


ErinysPath_East_EventScript_DirectionSign::
# 72 "data/maps/ErinysPath_East/scripts.pory"
	lock
# 73 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_DirectionSign_Text_0
# 74 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 75 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_Basculin::
# 81 "data/maps/ErinysPath_East/scripts.pory"
	lock
# 82 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 83 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Basculin_Text_0
# 84 "data/maps/ErinysPath_East/scripts.pory"
	playmoncry SPECIES_BASCULIN_WHITE_STRIPED, CRY_MODE_NORMAL
# 85 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Basculin_Text_1
# 86 "data/maps/ErinysPath_East/scripts.pory"
	waitmoncry
# 87 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 88 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_Tauros::
# 94 "data/maps/ErinysPath_East/scripts.pory"
	lock
# 95 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 96 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Tauros_Text_0
# 97 "data/maps/ErinysPath_East/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEAN_AQUA_BREED, CRY_MODE_NORMAL
# 98 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Tauros_Text_1
# 99 "data/maps/ErinysPath_East/scripts.pory"
	waitmoncry
# 100 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 101 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_ChimeraWalrein::
# 107 "data/maps/ErinysPath_East/scripts.pory"
	lockall
# 108 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 109 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 110 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 111 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 112 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 113 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_ChimeraWalrein_Text_0
# 114 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_1
# 115 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 116 "data/maps/ErinysPath_East/scripts.pory"
	goto_if_set FLAG_GOT_BADGE_FOR_PIRAEUS, ErinysPath_East_EventScript_ChimeraWalrein_2
ErinysPath_East_EventScript_ChimeraWalrein_1:
# 180 "data/maps/ErinysPath_East/scripts.pory"
	releaseall
	end

ErinysPath_East_EventScript_ChimeraWalrein_2:
# 118 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 119 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 120 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 121 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 122 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_ChimeraWalrein_Text_0
# 123 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_2
# 124 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 125 "data/maps/ErinysPath_East/scripts.pory"
	goto_if_unset FLAG_HARD_MODE, ErinysPath_East_EventScript_ChimeraWalrein_5
# 131 "data/maps/ErinysPath_East/scripts.pory"
	trainerbattle_no_intro TRAINER_ERINYSPATH_CHIMERA_ADMIN_HARD, ErinysPath_East_Text_ChimeraAdminDefeated
ErinysPath_East_EventScript_ChimeraWalrein_4:
# 134 "data/maps/ErinysPath_East/scripts.pory"
	lockall
# 135 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 136 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 137 "data/maps/ErinysPath_East/scripts.pory"
	delay 20
# 138 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 2, ErinysPath_East_Movement_BasculinFlee
# 139 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 3, ErinysPath_East_Movement_TaurosFlee
# 140 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 141 "data/maps/ErinysPath_East/scripts.pory"
	delay 20
# 142 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_ChimeraWalrein_Text_0
# 143 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_3
# 144 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 146 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 1, ErinysPath_East_Movement_ChimeraAdminFlee
# 147 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 148 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 150 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 4, ErinysPath_East_Movement_PIRAEUSApproach
# 151 "data/maps/ErinysPath_East/scripts.pory"
	waitmovement 0
# 152 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_ChimeraWalrein_Text_4
# 153 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_5
# 154 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 155 "data/maps/ErinysPath_East/scripts.pory"
	applymovement 4, ErinysPath_East_Movement_PIRAEUSExit
# 156 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 158 "data/maps/ErinysPath_East/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 159 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 160 "data/maps/ErinysPath_East/scripts.pory"
	removeobject 1
# 161 "data/maps/ErinysPath_East/scripts.pory"
	removeobject 2
# 162 "data/maps/ErinysPath_East/scripts.pory"
	removeobject 3
# 163 "data/maps/ErinysPath_East/scripts.pory"
	removeobject 4
# 164 "data/maps/ErinysPath_East/scripts.pory"
	delay 30
# 165 "data/maps/ErinysPath_East/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 166 "data/maps/ErinysPath_East/scripts.pory"
	delay 20
# 168 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_ChimeraWalrein_Text_6
# 169 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 170 "data/maps/ErinysPath_East/scripts.pory"
	setflag FLAG_HELPED_PIRAEUS_PYTHIOS_TOWN
# 172 "data/maps/ErinysPath_East/scripts.pory"
	delay 20
# 173 "data/maps/ErinysPath_East/scripts.pory"
	special DoDomeConfetti
# 174 "data/maps/ErinysPath_East/scripts.pory"
	completequest QUEST_HELP_PIRAEUS
# 175 "data/maps/ErinysPath_East/scripts.pory"
	delay 20
# 177 "data/maps/ErinysPath_East/scripts.pory"
	warpsilent MAP_ERINYS_PATH_EAST, 8, 10
# 178 "data/maps/ErinysPath_East/scripts.pory"
	waitstate
	goto ErinysPath_East_EventScript_ChimeraWalrein_1

ErinysPath_East_EventScript_ChimeraWalrein_5:
# 127 "data/maps/ErinysPath_East/scripts.pory"
	trainerbattle_no_intro TRAINER_ERINYSPATH_CHIMERA_ADMIN, ErinysPath_East_Text_ChimeraAdminDefeated
	goto ErinysPath_East_EventScript_ChimeraWalrein_4


# 189 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_BasculinFlee:
# 191 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 191 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 192 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 192 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 192 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 192 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 192 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 192 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 192 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 192 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 193 "data/maps/ErinysPath_East/scripts.pory"
	step_end

# 196 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_TaurosFlee:
# 198 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 198 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 198 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 199 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 199 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 199 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 199 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 199 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 199 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 200 "data/maps/ErinysPath_East/scripts.pory"
	step_end

# 203 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_ChimeraAdminFlee:
# 205 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 205 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 205 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 205 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 206 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 206 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_down
# 207 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 207 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 207 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 207 "data/maps/ErinysPath_East/scripts.pory"
	walk_fast_right
# 208 "data/maps/ErinysPath_East/scripts.pory"
	step_end

# 211 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_PIRAEUSApproach:
# 213 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 213 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 213 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 213 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 213 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 213 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 213 "data/maps/ErinysPath_East/scripts.pory"
	walk_up
# 214 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 214 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 215 "data/maps/ErinysPath_East/scripts.pory"
	step_end

# 218 "data/maps/ErinysPath_East/scripts.pory"
ErinysPath_East_Movement_PIRAEUSExit:
# 220 "data/maps/ErinysPath_East/scripts.pory"
	walk_down
# 221 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 221 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 221 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 221 "data/maps/ErinysPath_East/scripts.pory"
	walk_left
# 222 "data/maps/ErinysPath_East/scripts.pory"
	step_end

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Lueroi::
# 230 "data/maps/ErinysPath_East/scripts.pory"
	trainerbattle_single TRAINER_ERINYSPATH_E_LUEROI, ErinysPath_East_Text_Trainer_ErinysPath_E_LueroiIntro, ErinysPath_East_Text_Trainer_ErinysPath_E_LueroiDefeat
# 231 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Trainer_ErinysPath_E_Lueroi_Text_0
# 232 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Trainer_ErinysPath_E_Lueroi_Text_1
# 233 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 234 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_Trainer_ErinysPath_E_Kayley::
# 248 "data/maps/ErinysPath_East/scripts.pory"
	trainerbattle_single TRAINER_ERINYSPATH_E_KAYLEY, ErinysPath_East_Text_Trainer_ErinysPath_E_KayleyIntro, ErinysPath_East_Text_Trainer_ErinysPath_E_KayleyDefeat
# 249 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Trainer_ErinysPath_E_Kayley_Text_0
# 250 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Trainer_ErinysPath_E_Kayley_Text_1
# 251 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 252 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_BugCatcher::
# 266 "data/maps/ErinysPath_East/scripts.pory"
	lock
# 267 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 268 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_BugCatcher_Text_0
# 269 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_BugCatcher_Text_1
# 270 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 271 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_Trainer_ErinysPath_E_Roger::
# 277 "data/maps/ErinysPath_East/scripts.pory"
	trainerbattle_single TRAINER_ERINYSPATH_E_ROGER, ErinysPath_East_Text_Trainer_ErinysPath_E_RogerIntro, ErinysPath_East_Text_Trainer_ErinysPath_E_RogerDefeat
# 278 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Trainer_ErinysPath_E_Roger_Text_0
# 279 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Trainer_ErinysPath_E_Roger_Text_1
# 280 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 281 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_Man2::
# 295 "data/maps/ErinysPath_East/scripts.pory"
	lock
# 296 "data/maps/ErinysPath_East/scripts.pory"
	faceplayer
# 297 "data/maps/ErinysPath_East/scripts.pory"
	speakername ErinysPath_East_EventScript_Man2_Text_0
# 298 "data/maps/ErinysPath_East/scripts.pory"
	msgbox ErinysPath_East_EventScript_Man2_Text_1
# 299 "data/maps/ErinysPath_East/scripts.pory"
	closemessage
# 300 "data/maps/ErinysPath_East/scripts.pory"
	release
	end


ErinysPath_East_EventScript_UniversityStudentRouteCheck_Text_0:
# 37 "data/maps/ErinysPath_East/scripts.pory"
	.string "Uni. Student$"

ErinysPath_East_EventScript_UniversityStudentRouteCheck_Text_1:
# 41 "data/maps/ErinysPath_East/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

ErinysPath_East_EventScript_UniversityStudentRouteCheck_Text_2:
# 46 "data/maps/ErinysPath_East/scripts.pory"
	.string "Chaire! I'm a student from the Acrisia\n"
	.string "University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in East and West Erinys\l"
	.string "Path. If you've caught all the Pokémon\l"
	.string "here, please let me know.$"

ErinysPath_East_EventScript_UniversityStudentRouteCheck_Text_3:
# 54 "data/maps/ErinysPath_East/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

ErinysPath_East_EventScript_DirectionSign_Text_0:
# 73 "data/maps/ErinysPath_East/scripts.pory"
	.string "Erinys Path - West\n"
	.string "Where Red Leaves Fall\p"
	.string "{LEFT_ARROW} Pythios Town\n"
	.string "Erinys Path - East {RIGHT_ARROW}$"

ErinysPath_East_EventScript_Basculin_Text_0:
# 83 "data/maps/ErinysPath_East/scripts.pory"
	.string "Basculin$"

ErinysPath_East_EventScript_Basculin_Text_1:
# 85 "data/maps/ErinysPath_East/scripts.pory"
	.string "Raawwhhh!$"

ErinysPath_East_EventScript_Tauros_Text_0:
# 96 "data/maps/ErinysPath_East/scripts.pory"
	.string "Tauros$"

ErinysPath_East_EventScript_Tauros_Text_1:
# 98 "data/maps/ErinysPath_East/scripts.pory"
	.string "Grrr-huff!$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_0:
# 113 "data/maps/ErinysPath_East/scripts.pory"
	.string "Chimera Admin$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_1:
# 114 "data/maps/ErinysPath_East/scripts.pory"
	.string "Grrr, when I find that stupid Sailor, I\n"
	.string "swear I'll show him not to mess with\l"
	.string "Team Chimera!$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_2:
# 123 "data/maps/ErinysPath_East/scripts.pory"
	.string "Hold it right there... I've been scouting\n"
	.string "around Pythios Town, and I think I saw\l"
	.string "you hanging around that Piraeus guy!\l"
	.string "That fool wouldn't donate his ratty\l"
	.string "little boat to our cause, then took me\l"
	.string "by surprise!\p"
	.string "I'll destroy you, then I'll take down\n"
	.string "Piraeus!$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_3:
# 143 "data/maps/ErinysPath_East/scripts.pory"
	.string "...Well, so much for team loyalty.\p"
	.string "Team Chimera must control land, sea, and\n"
	.string "sky. It is our destiny to hold the world\l"
	.string "in our hands, and one day you'll see the\l"
	.string "truth of that. I'll get you for this!$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_4:
# 152 "data/maps/ErinysPath_East/scripts.pory"
	.string "Piraeus$"

ErinysPath_East_EventScript_ChimeraWalrein_Text_5:
# 153 "data/maps/ErinysPath_East/scripts.pory"
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
# 168 "data/maps/ErinysPath_East/scripts.pory"
	.string "You can now travel with {COLOR GREEN}Piraeus{COLOR DARK_GRAY} on his\n"
	.string "ship, {COLOR GREEN}The Delphis{COLOR DARK_GRAY}!\p"
	.string "Some areas can only be reached via\n"
	.string "sailing with Piraeus, unlocked based on\l"
	.string "{COLOR GREEN}Gym Badges{COLOR DARK_GRAY}.\p"
	.string "A {COLOR GREEN}customizable Cabin{COLOR DARK_GRAY} room is also\n"
	.string "reserved on The Delphis!$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Lueroi_Text_0:
# 231 "data/maps/ErinysPath_East/scripts.pory"
	.string "Lueroi$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Lueroi_Text_1:
# 232 "data/maps/ErinysPath_East/scripts.pory"
	.string "I'm originally from the Kanto Region.\n"
	.string "That's a long way from here!$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Kayley_Text_0:
# 249 "data/maps/ErinysPath_East/scripts.pory"
	.string "Kayley$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Kayley_Text_1:
# 250 "data/maps/ErinysPath_East/scripts.pory"
	.string "I hear they hold Pokémon Contests in\n"
	.string "the Hoenn Region. I wonder if they hold\l"
	.string "Contests in Ilios?$"

ErinysPath_East_EventScript_BugCatcher_Text_0:
# 268 "data/maps/ErinysPath_East/scripts.pory"
	.string "Bug Catcher$"

ErinysPath_East_EventScript_BugCatcher_Text_1:
# 269 "data/maps/ErinysPath_East/scripts.pory"
	.string "Some of the wild Pokémon here are...\n"
	.string "weird. They looked like one thing, but I\l"
	.string "caught it, and it turned into a\l"
	.string "different Pokémon!$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Roger_Text_0:
# 278 "data/maps/ErinysPath_East/scripts.pory"
	.string "Roger$"

ErinysPath_East_EventScript_Trainer_ErinysPath_E_Roger_Text_1:
# 279 "data/maps/ErinysPath_East/scripts.pory"
	.string "Not many people pass through this way.\n"
	.string "Most trade goes from Sofos City, around\l"
	.string "the south of Ilios, into the port at\l"
	.string "Pythios Town.$"

ErinysPath_East_EventScript_Man2_Text_0:
# 297 "data/maps/ErinysPath_East/scripts.pory"
	.string "Man$"

ErinysPath_East_EventScript_Man2_Text_1:
# 298 "data/maps/ErinysPath_East/scripts.pory"
	.string "In some areas, totally different\n"
	.string "Pokémon come out during the day versus\l"
	.string "the night. For example, Solosis is only\l"
	.string "active in the day, but Gothita comes\l"
	.string "out at night!$"

ErinysPath_East_Text_ChimeraAdminDefeated::
# 184 "data/maps/ErinysPath_East/scripts.pory"
	.string "First Piraeus, then you... Team Chimera\n"
	.string "is having real problems recently.$"

ErinysPath_East_Text_Trainer_ErinysPath_E_LueroiIntro::
# 237 "data/maps/ErinysPath_East/scripts.pory"
	.string "It's a long road from here to Sofos\n"
	.string "City. The views are worth the journey,\l"
	.string "though!$"

ErinysPath_East_Text_Trainer_ErinysPath_E_LueroiDefeat::
# 241 "data/maps/ErinysPath_East/scripts.pory"
	.string "Back to the Pokémon Center for me.$"

ErinysPath_East_Text_Trainer_ErinysPath_E_KayleyIntro::
# 255 "data/maps/ErinysPath_East/scripts.pory"
	.string "I'm on the path to Sofos City. Help my\n"
	.string "Pokémon train for our show!$"

ErinysPath_East_Text_Trainer_ErinysPath_E_KayleyDefeat::
# 259 "data/maps/ErinysPath_East/scripts.pory"
	.string "Phew, great vocals!$"

ErinysPath_East_Text_Trainer_ErinysPath_E_RogerIntro::
# 284 "data/maps/ErinysPath_East/scripts.pory"
	.string "Gosh, this patrol is boring. Let's spice\n"
	.string "it up!$"

ErinysPath_East_Text_Trainer_ErinysPath_E_RogerDefeat::
# 288 "data/maps/ErinysPath_East/scripts.pory"
	.string "Darn! Out of energy!$"

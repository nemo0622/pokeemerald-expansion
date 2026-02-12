WakewaterIsle_MapScripts::
# 2 "data/maps/WakewaterIsle/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WakewaterIsle_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

WakewaterIsle_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_VISITED_WAKEWATER_ISLE
# 4 "data/maps/WakewaterIsle/scripts.pory"
	special LoadWakewaterPlayerMonGfx
# 5 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_ITEM_HIDE_OPPONENT_MON_WAKEWATER
# 6 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_ITEM_HIDE_PLAYER_MON_WAKEWATER
# 7 "data/maps/WakewaterIsle/scripts.pory"
	call WakewaterIsle_EventScript_HideAllTrainers
	return


WakewaterIsle_EventScript_Vaporeon::
# 13 "data/maps/WakewaterIsle/scripts.pory"
	lock
# 14 "data/maps/WakewaterIsle/scripts.pory"
	faceplayer
# 15 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_Vaporeon_Text_0
# 16 "data/maps/WakewaterIsle/scripts.pory"
	playmoncry SPECIES_VAPOREON, CRY_MODE_NORMAL
# 17 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_Vaporeon_Text_1
# 18 "data/maps/WakewaterIsle/scripts.pory"
	waitmoncry
# 19 "data/maps/WakewaterIsle/scripts.pory"
	closemessage
# 20 "data/maps/WakewaterIsle/scripts.pory"
	delay 5
# 21 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_Vaporeon_Text_2
# 22 "data/maps/WakewaterIsle/scripts.pory"
	closemessage
# 23 "data/maps/WakewaterIsle/scripts.pory"
	release
	end


WakewaterIsle_EventScript_ChampionBattleSign::
# 29 "data/maps/WakewaterIsle/scripts.pory"
	lock
# 30 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChampionBattleSign_Text_0
# 31 "data/maps/WakewaterIsle/scripts.pory"
	closemessage
# 32 "data/maps/WakewaterIsle/scripts.pory"
	release
	end


WakewaterIsle_EventScript_Boy::
# 38 "data/maps/WakewaterIsle/scripts.pory"
	lock
# 39 "data/maps/WakewaterIsle/scripts.pory"
	faceplayer
# 40 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_Boy_Text_0
# 41 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_Boy_Text_1
# 42 "data/maps/WakewaterIsle/scripts.pory"
	closemessage
# 43 "data/maps/WakewaterIsle/scripts.pory"
	release
	end


WakewaterIsle_EventScript_Artist::
# 49 "data/maps/WakewaterIsle/scripts.pory"
	lock
# 50 "data/maps/WakewaterIsle/scripts.pory"
	faceplayer
# 51 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_Artist_Text_0
# 52 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_Artist_Text_1
# 53 "data/maps/WakewaterIsle/scripts.pory"
	closemessage
# 54 "data/maps/WakewaterIsle/scripts.pory"
	release
	end


WakewaterIsle_EventScript_Woman::
# 60 "data/maps/WakewaterIsle/scripts.pory"
	lock
# 61 "data/maps/WakewaterIsle/scripts.pory"
	faceplayer
# 62 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_Woman_Text_0
# 63 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_Woman_Text_1
# 64 "data/maps/WakewaterIsle/scripts.pory"
	closemessage
# 65 "data/maps/WakewaterIsle/scripts.pory"
	release
	end


WakewaterIsle_EventScript_Sailor::
# 71 "data/maps/WakewaterIsle/scripts.pory"
	lock
# 72 "data/maps/WakewaterIsle/scripts.pory"
	faceplayer
# 73 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_Sailor_Text_0
# 74 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_Sailor_Text_1
# 75 "data/maps/WakewaterIsle/scripts.pory"
	closemessage
# 76 "data/maps/WakewaterIsle/scripts.pory"
	release
	end


WakewaterIsle_EventScript_BeginChampionsDefense::
# 85 "data/maps/WakewaterIsle/scripts.pory"
	lockall
# 86 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 87 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_BeginChampionsDefense_Text_0, MSGBOX_YESNO
# 88 "data/maps/WakewaterIsle/scripts.pory"
	closemessage
# 89 "data/maps/WakewaterIsle/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq WakewaterIsle_EventScript_BeginChampionsDefense_2
# 97 "data/maps/WakewaterIsle/scripts.pory"
	warpcontinuescript MAP_WAKEWATER_ISLE, 29, 19, WakewaterIsle_EventScript_ChampionDefenseScript
WakewaterIsle_EventScript_BeginChampionsDefense_1:
# 99 "data/maps/WakewaterIsle/scripts.pory"
	releaseall
	end

WakewaterIsle_EventScript_BeginChampionsDefense_2:
# 91 "data/maps/WakewaterIsle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 92 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 93 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	goto WakewaterIsle_EventScript_BeginChampionsDefense_1


WakewaterIsle_EventScript_ChampionDefenseScript::
# 105 "data/maps/WakewaterIsle/scripts.pory"
	lockall
# 107 "data/maps/WakewaterIsle/scripts.pory"
	addobject 16
# 108 "data/maps/WakewaterIsle/scripts.pory"
	special LoadWakewaterPlayerMonGfx
# 109 "data/maps/WakewaterIsle/scripts.pory"
	addobject 16
# 110 "data/maps/WakewaterIsle/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 112 "data/maps/WakewaterIsle/scripts.pory"
	delay 15
# 113 "data/maps/WakewaterIsle/scripts.pory"
	special HealPlayerParty
# 114 "data/maps/WakewaterIsle/scripts.pory"
	call WakewaterIsle_EventScript_ChooseRandomTrainer
# 116 "data/maps/WakewaterIsle/scripts.pory"
	delay 20
# 117 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChampionDefenseScript_Text_0
# 118 "data/maps/WakewaterIsle/scripts.pory"
	closemessage
# 119 "data/maps/WakewaterIsle/scripts.pory"
	delay 20
# 120 "data/maps/WakewaterIsle/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 121 "data/maps/WakewaterIsle/scripts.pory"
	delay 15
# 122 "data/maps/WakewaterIsle/scripts.pory"
	call WakewaterIsle_EventScript_HideAllTrainers
# 123 "data/maps/WakewaterIsle/scripts.pory"
	special HealPlayerParty
# 124 "data/maps/WakewaterIsle/scripts.pory"
	delay 15
# 125 "data/maps/WakewaterIsle/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 126 "data/maps/WakewaterIsle/scripts.pory"
	delay 15
# 128 "data/maps/WakewaterIsle/scripts.pory"
	call WakewaterIsle_EventScript_ChooseRandomTrainer
# 130 "data/maps/WakewaterIsle/scripts.pory"
	delay 20
# 131 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChampionDefenseScript_Text_1
# 132 "data/maps/WakewaterIsle/scripts.pory"
	closemessage
# 133 "data/maps/WakewaterIsle/scripts.pory"
	delay 20
# 134 "data/maps/WakewaterIsle/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 135 "data/maps/WakewaterIsle/scripts.pory"
	delay 15
# 136 "data/maps/WakewaterIsle/scripts.pory"
	call WakewaterIsle_EventScript_HideAllTrainers
# 137 "data/maps/WakewaterIsle/scripts.pory"
	special HealPlayerParty
# 138 "data/maps/WakewaterIsle/scripts.pory"
	delay 15
# 139 "data/maps/WakewaterIsle/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 140 "data/maps/WakewaterIsle/scripts.pory"
	delay 15
# 142 "data/maps/WakewaterIsle/scripts.pory"
	call WakewaterIsle_EventScript_ChooseRandomTrainer
# 144 "data/maps/WakewaterIsle/scripts.pory"
	delay 20
# 145 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChampionDefenseScript_Text_2
# 146 "data/maps/WakewaterIsle/scripts.pory"
	closemessage
# 149 "data/maps/WakewaterIsle/scripts.pory"
	randomelement ITEM_NUGGET, ITEM_BIG_NUGGET, ITEM_MASTER_BALL, ITEM_PEARL
# 150 "data/maps/WakewaterIsle/scripts.pory"
	giveitem VAR_RESULT
# 151 "data/maps/WakewaterIsle/scripts.pory"
	closemessage
# 153 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 154 "data/maps/WakewaterIsle/scripts.pory"
	warp MAP_WAKEWATER_ISLE, 30, 22
# 155 "data/maps/WakewaterIsle/scripts.pory"
	waitstate
# 156 "data/maps/WakewaterIsle/scripts.pory"
	releaseall
	end


WakewaterIsle_EventScript_ChooseRandomTrainer::
# 163 "data/maps/WakewaterIsle/scripts.pory"
	randomelement TRAINER_WAKEWATER_SAMANTHA, TRAINER_WAKEWATER_MAURA, TRAINER_WAKEWATER_PIRAEUS, TRAINER_WAKEWATER_LEXIE, TRAINER_WAKEWATER_ALEXANDER, TRAINER_WAKEWATER_KASSA, TRAINER_WAKEWATER_POLYMNIA, TRAINER_WAKEWATER_OURANI, TRAINER_WAKEWATER_KLEIO, TRAINER_WAKEWATER_TERPSIKORE, TRAINER_WAKEWATER_EUTERPE, TRAINER_WAKEWATER_THALIA_AND_MELPOMENE, TRAINER_WAKEWATER_RHADINE, TRAINER_WAKEWATER_KALLIOPE, TRAINER_WAKEWATER_CHIMERA_ADMIN_M, TRAINER_WAKEWATER_CHIMERA_ADMIN_F, TRAINER_WAKEWATER_ANYALIOS, TRAINER_WAKEWATER_RANIA, TRAINER_WAKEWATER_MICHAH, TRAINER_WAKEWATER_DRAKE, TRAINER_WAKEWATER_SASHA, TRAINER_WAKEWATER_CONNIE, TRAINER_WAKEWATER_SHIA, TRAINER_WAKEWATER_OLIVIA, TRAINER_WAKEWATER_KYLE, TRAINER_WAKEWATER_NEMO, TRAINER_WAKEWATER_CASSIE, TRAINER_WAKEWATER_JARED, TRAINER_WAKEWATER_CAIDEN, TRAINER_WAKEWATER_SEBASTIAN, TRAINER_WAKEWATER_BRODY, TRAINER_WAKEWATER_JERRY, TRAINER_WAKEWATER_ERIKOV, TRAINER_WAKEWATER_SNAD, TRAINER_WAKEWATER_MISSINGNOVGC, TRAINER_WAKEWATER_AMY, TRAINER_WAKEWATER_GEORGIA, TRAINER_WAKEWATER_NOB, TRAINER_WAKEWATER_DALE, TRAINER_WAKEWATER_ALLEN
# 164 "data/maps/WakewaterIsle/scripts.pory"
	copyvar VAR_CHOSEN_WAKEWATER_CHALLENGER, VAR_RESULT
# 166 "data/maps/WakewaterIsle/scripts.pory"
	switch VAR_CHOSEN_WAKEWATER_CHALLENGER
# 169 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_SAMANTHA, WakewaterIsle_EventScript_ChooseRandomTrainer_2
# 177 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_MAURA, WakewaterIsle_EventScript_ChooseRandomTrainer_3
# 185 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_PIRAEUS, WakewaterIsle_EventScript_ChooseRandomTrainer_4
# 195 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_LEXIE, WakewaterIsle_EventScript_ChooseRandomTrainer_5
# 203 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_ALEXANDER, WakewaterIsle_EventScript_ChooseRandomTrainer_6
# 211 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_KASSA, WakewaterIsle_EventScript_ChooseRandomTrainer_7
# 219 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_POLYMNIA, WakewaterIsle_EventScript_ChooseRandomTrainer_8
# 229 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_OURANI, WakewaterIsle_EventScript_ChooseRandomTrainer_9
# 239 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_KLEIO, WakewaterIsle_EventScript_ChooseRandomTrainer_10
# 249 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_TERPSIKORE, WakewaterIsle_EventScript_ChooseRandomTrainer_11
# 259 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_EUTERPE, WakewaterIsle_EventScript_ChooseRandomTrainer_12
# 269 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_THALIA_AND_MELPOMENE, WakewaterIsle_EventScript_ChooseRandomTrainer_13
# 279 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_RHADINE, WakewaterIsle_EventScript_ChooseRandomTrainer_14
# 289 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_KALLIOPE, WakewaterIsle_EventScript_ChooseRandomTrainer_15
# 299 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_CHIMERA_ADMIN_M, WakewaterIsle_EventScript_ChooseRandomTrainer_16
# 307 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_CHIMERA_ADMIN_F, WakewaterIsle_EventScript_ChooseRandomTrainer_17
# 315 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_ANYALIOS, WakewaterIsle_EventScript_ChooseRandomTrainer_18
# 325 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_RANIA, WakewaterIsle_EventScript_ChooseRandomTrainer_19
# 333 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_MICHAH, WakewaterIsle_EventScript_ChooseRandomTrainer_20
# 341 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_DRAKE, WakewaterIsle_EventScript_ChooseRandomTrainer_21
# 349 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_SASHA, WakewaterIsle_EventScript_ChooseRandomTrainer_22
# 357 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_CONNIE, WakewaterIsle_EventScript_ChooseRandomTrainer_23
# 365 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_SHIA, WakewaterIsle_EventScript_ChooseRandomTrainer_24
# 373 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_OLIVIA, WakewaterIsle_EventScript_ChooseRandomTrainer_25
# 381 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_KYLE, WakewaterIsle_EventScript_ChooseRandomTrainer_26
# 389 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_NEMO, WakewaterIsle_EventScript_ChooseRandomTrainer_27
# 397 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_CASSIE, WakewaterIsle_EventScript_ChooseRandomTrainer_28
# 405 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_JARED, WakewaterIsle_EventScript_ChooseRandomTrainer_29
# 413 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_CAIDEN, WakewaterIsle_EventScript_ChooseRandomTrainer_30
# 421 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_SEBASTIAN, WakewaterIsle_EventScript_ChooseRandomTrainer_31
# 429 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_BRODY, WakewaterIsle_EventScript_ChooseRandomTrainer_32
# 437 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_JERRY, WakewaterIsle_EventScript_ChooseRandomTrainer_33
# 445 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_ERIKOV, WakewaterIsle_EventScript_ChooseRandomTrainer_34
# 453 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_SNAD, WakewaterIsle_EventScript_ChooseRandomTrainer_35
# 461 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_MISSINGNOVGC, WakewaterIsle_EventScript_ChooseRandomTrainer_36
# 469 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_AMY, WakewaterIsle_EventScript_ChooseRandomTrainer_37
# 477 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_GEORGIA, WakewaterIsle_EventScript_ChooseRandomTrainer_38
# 485 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_NOB, WakewaterIsle_EventScript_ChooseRandomTrainer_39
# 493 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_DALE, WakewaterIsle_EventScript_ChooseRandomTrainer_40
# 501 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_ALLEN, WakewaterIsle_EventScript_ChooseRandomTrainer_41
WakewaterIsle_EventScript_ChooseRandomTrainer_2:
# 170 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_01
# 171 "data/maps/WakewaterIsle/scripts.pory"
	addobject 14
# 172 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 14, WakewaterIsle_Movement_TrainerApproachesPlayer
# 173 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 174 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_0
# 175 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_1
# 176 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_SAMANTHA, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_2
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_3:
# 178 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_02
# 179 "data/maps/WakewaterIsle/scripts.pory"
	addobject 15
# 180 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 15, WakewaterIsle_Movement_TrainerApproachesPlayer
# 181 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 182 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_3
# 183 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_4
# 184 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_MAURA, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_5
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_4:
# 186 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_03
# 189 "data/maps/WakewaterIsle/scripts.pory"
	addobject 18
# 190 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 18, WakewaterIsle_Movement_TrainerApproachesPlayer
# 191 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 192 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_6
# 193 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_7
# 194 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_PIRAEUS, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_8
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_5:
# 196 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_04
# 197 "data/maps/WakewaterIsle/scripts.pory"
	addobject 19
# 198 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 19, WakewaterIsle_Movement_TrainerApproachesPlayer
# 199 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 200 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_9
# 201 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_10
# 202 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_LEXIE, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_11
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_6:
# 204 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_05
# 205 "data/maps/WakewaterIsle/scripts.pory"
	addobject 20
# 206 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 20, WakewaterIsle_Movement_TrainerApproachesPlayer
# 207 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 208 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_12
# 209 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_13
# 210 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_ALEXANDER, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_14
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_7:
# 212 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_06
# 213 "data/maps/WakewaterIsle/scripts.pory"
	addobject 21
# 214 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 21, WakewaterIsle_Movement_TrainerApproachesPlayer
# 215 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 216 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_15
# 217 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_16
# 218 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_ALEXANDER, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_17
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_8:
# 220 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_07
# 223 "data/maps/WakewaterIsle/scripts.pory"
	addobject 23
# 224 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 23, WakewaterIsle_Movement_TrainerApproachesPlayer
# 225 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 226 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_18
# 227 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_19
# 228 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_POLYMNIA, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_20
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_9:
# 230 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_08
# 233 "data/maps/WakewaterIsle/scripts.pory"
	addobject 25
# 234 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 25, WakewaterIsle_Movement_TrainerApproachesPlayer
# 235 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 236 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_21
# 237 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_22
# 238 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_OURANI, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_23
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_10:
# 240 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_09
# 243 "data/maps/WakewaterIsle/scripts.pory"
	addobject 27
# 244 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 27, WakewaterIsle_Movement_TrainerApproachesPlayer
# 245 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 246 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_24
# 247 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_25
# 248 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_KLEIO, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_26
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_11:
# 250 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_10
# 253 "data/maps/WakewaterIsle/scripts.pory"
	addobject 29
# 254 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 29, WakewaterIsle_Movement_TrainerApproachesPlayer
# 255 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 256 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_27
# 257 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_28
# 258 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_TERPSIKORE, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_29
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_12:
# 260 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_11
# 263 "data/maps/WakewaterIsle/scripts.pory"
	addobject 31
# 264 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 31, WakewaterIsle_Movement_TrainerApproachesPlayer
# 265 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 266 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_30
# 267 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_31
# 268 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_EUTERPE, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_32
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_13:
# 270 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_12
# 273 "data/maps/WakewaterIsle/scripts.pory"
	addobject 33
# 274 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 33, WakewaterIsle_Movement_TrainerApproachesPlayer
# 275 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 276 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_33
# 277 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_34
# 278 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_THALIA_AND_MELPOMENE, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_32
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_14:
# 280 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_13
# 283 "data/maps/WakewaterIsle/scripts.pory"
	addobject 35
# 284 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 35, WakewaterIsle_Movement_TrainerApproachesPlayer
# 285 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 286 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_35
# 287 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_36
# 288 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_RHADINE, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_37
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_15:
# 290 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_14
# 293 "data/maps/WakewaterIsle/scripts.pory"
	addobject 37
# 294 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 37, WakewaterIsle_Movement_TrainerApproachesPlayer
# 295 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 296 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_38
# 297 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_39
# 298 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_KALLIOPE, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_40
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_16:
# 300 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_15
# 301 "data/maps/WakewaterIsle/scripts.pory"
	addobject 38
# 302 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 38, WakewaterIsle_Movement_TrainerApproachesPlayer
# 303 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 304 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_41
# 305 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_42
# 306 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_CHIMERA_ADMIN_M, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_43
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_17:
# 308 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_16
# 309 "data/maps/WakewaterIsle/scripts.pory"
	addobject 39
# 310 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 39, WakewaterIsle_Movement_TrainerApproachesPlayer
# 311 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 312 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_41
# 313 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_44
# 314 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_CHIMERA_ADMIN_F, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_45
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_18:
# 316 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_17
# 319 "data/maps/WakewaterIsle/scripts.pory"
	addobject 41
# 320 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 41, WakewaterIsle_Movement_TrainerApproachesPlayer
# 321 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 322 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_46
# 323 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_47
# 324 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_ANYALIOS, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_48
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_19:
# 326 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_18
# 327 "data/maps/WakewaterIsle/scripts.pory"
	addobject 42
# 328 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 42, WakewaterIsle_Movement_TrainerApproachesPlayer
# 329 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 330 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_49
# 331 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_50
# 332 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_RANIA, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_51
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_20:
# 334 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_19
# 335 "data/maps/WakewaterIsle/scripts.pory"
	addobject 43
# 336 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 43, WakewaterIsle_Movement_TrainerApproachesPlayer
# 337 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 338 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_52
# 339 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_53
# 340 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_MICHAH, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_54
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_21:
# 342 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_20
# 343 "data/maps/WakewaterIsle/scripts.pory"
	addobject 44
# 344 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 44, WakewaterIsle_Movement_TrainerApproachesPlayer
# 345 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 346 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_55
# 347 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_56
# 348 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_DRAKE, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_57
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_22:
# 350 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_21
# 351 "data/maps/WakewaterIsle/scripts.pory"
	addobject 45
# 352 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 45, WakewaterIsle_Movement_TrainerApproachesPlayer
# 353 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 354 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_58
# 355 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_59
# 356 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_SASHA, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_60
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_23:
# 358 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_22
# 359 "data/maps/WakewaterIsle/scripts.pory"
	addobject 46
# 360 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 46, WakewaterIsle_Movement_TrainerApproachesPlayer
# 361 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 362 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_61
# 363 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_62
# 364 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_CONNIE, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_63
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_24:
# 366 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_23
# 367 "data/maps/WakewaterIsle/scripts.pory"
	addobject 47
# 368 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 47, WakewaterIsle_Movement_TrainerApproachesPlayer
# 369 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 370 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_64
# 371 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_65
# 372 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_SHIA, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_66
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_25:
# 374 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_24
# 375 "data/maps/WakewaterIsle/scripts.pory"
	addobject 48
# 376 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 48, WakewaterIsle_Movement_TrainerApproachesPlayer
# 377 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 378 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_67
# 379 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_68
# 380 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_OLIVIA, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_69
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_26:
# 382 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_25
# 383 "data/maps/WakewaterIsle/scripts.pory"
	addobject 49
# 384 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 49, WakewaterIsle_Movement_TrainerApproachesPlayer
# 385 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 386 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_70
# 387 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_71
# 388 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_KYLE, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_72
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_27:
# 390 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_26
# 391 "data/maps/WakewaterIsle/scripts.pory"
	addobject 50
# 392 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 50, WakewaterIsle_Movement_TrainerApproachesPlayer
# 393 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 394 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_73
# 395 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_74
# 396 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_NEMO, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_75
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_28:
# 398 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_27
# 399 "data/maps/WakewaterIsle/scripts.pory"
	addobject 51
# 400 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 51, WakewaterIsle_Movement_TrainerApproachesPlayer
# 401 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 402 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_76
# 403 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_77
# 404 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_CASSIE, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_78
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_29:
# 406 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_28
# 407 "data/maps/WakewaterIsle/scripts.pory"
	addobject 52
# 408 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 52, WakewaterIsle_Movement_TrainerApproachesPlayer
# 409 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 410 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_79
# 411 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_80
# 412 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_JARED, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_81
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_30:
# 414 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_29
# 415 "data/maps/WakewaterIsle/scripts.pory"
	addobject 53
# 416 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 53, WakewaterIsle_Movement_TrainerApproachesPlayer
# 417 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 418 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_82
# 419 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_83
# 420 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_CAIDEN, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_84
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_31:
# 422 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_30
# 423 "data/maps/WakewaterIsle/scripts.pory"
	addobject 54
# 424 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 54, WakewaterIsle_Movement_TrainerApproachesPlayer
# 425 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 426 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_85
# 427 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_86
# 428 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_SEBASTIAN, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_87
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_32:
# 430 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_31
# 431 "data/maps/WakewaterIsle/scripts.pory"
	addobject 55
# 432 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 55, WakewaterIsle_Movement_TrainerApproachesPlayer
# 433 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 434 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_88
# 435 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_89
# 436 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_BRODY, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_90
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_33:
# 438 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_32
# 439 "data/maps/WakewaterIsle/scripts.pory"
	addobject 56
# 440 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 56, WakewaterIsle_Movement_TrainerApproachesPlayer
# 441 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 442 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_91
# 443 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_92
# 444 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_JERRY, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_93
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_34:
# 446 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_33
# 447 "data/maps/WakewaterIsle/scripts.pory"
	addobject 57
# 448 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 57, WakewaterIsle_Movement_TrainerApproachesPlayer
# 449 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 450 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_94
# 451 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_95
# 452 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_ERIKOV, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_96
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_35:
# 454 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_34
# 455 "data/maps/WakewaterIsle/scripts.pory"
	addobject 58
# 456 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 58, WakewaterIsle_Movement_TrainerApproachesPlayer
# 457 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 458 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_97
# 459 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_98
# 460 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_SNAD, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_99
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_36:
# 462 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_35
# 463 "data/maps/WakewaterIsle/scripts.pory"
	addobject 59
# 464 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 59, WakewaterIsle_Movement_TrainerApproachesPlayer
# 465 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 466 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_100
# 467 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_101
# 468 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_MISSINGNOVGC, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_102
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_37:
# 470 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_36
# 471 "data/maps/WakewaterIsle/scripts.pory"
	addobject 60
# 472 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 60, WakewaterIsle_Movement_TrainerApproachesPlayer
# 473 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 474 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_103
# 475 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_104
# 476 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_AMY, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_105
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_38:
# 478 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_37
# 479 "data/maps/WakewaterIsle/scripts.pory"
	addobject 61
# 480 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 61, WakewaterIsle_Movement_TrainerApproachesPlayer
# 481 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 482 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_106
# 483 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_107
# 484 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_GEORGIA, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_108
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_39:
# 486 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_38
# 487 "data/maps/WakewaterIsle/scripts.pory"
	addobject 62
# 488 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 62, WakewaterIsle_Movement_TrainerApproachesPlayer
# 489 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 490 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_109
# 491 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_110
# 492 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_NOB, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_111
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_40:
# 494 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_39
# 495 "data/maps/WakewaterIsle/scripts.pory"
	addobject 63
# 496 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 63, WakewaterIsle_Movement_TrainerApproachesPlayer
# 497 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 498 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_112
# 499 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_113
# 500 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_DALE, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_114
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_41:
# 502 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_40
# 503 "data/maps/WakewaterIsle/scripts.pory"
	addobject 64
# 504 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 64, WakewaterIsle_Movement_TrainerApproachesPlayer
# 505 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 506 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_115
# 507 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_116
# 508 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_ALLEN, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_117
	return


WakewaterIsle_EventScript_HideAllTrainers::
# 515 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_01
# 516 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_02
# 517 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_03
# 518 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_04
# 519 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_05
# 520 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_06
# 521 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_07
# 522 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_08
# 523 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_09
# 524 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_10
# 525 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_11
# 526 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_12
# 527 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_13
# 528 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_14
# 529 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_15
# 530 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_16
# 531 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_17
# 532 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_18
# 533 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_19
# 534 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_20
# 535 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_21
# 536 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_22
# 537 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_23
# 538 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_24
# 539 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_25
# 540 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_26
# 541 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_27
# 542 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_28
# 543 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_29
# 544 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_30
# 545 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_31
# 546 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_32
# 547 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_33
# 548 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_34
# 549 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_35
# 550 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_36
# 551 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_37
# 552 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_38
# 553 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_39
# 554 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_40
# 556 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 14
# 557 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 15
# 558 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 18
# 559 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 19
# 560 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 20
# 561 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 21
# 562 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 23
# 563 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 25
# 564 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 27
# 565 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 29
# 566 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 31
# 567 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 33
# 568 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 35
# 569 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 37
# 570 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 38
# 571 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 39
# 572 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 41
# 573 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 42
# 574 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 43
# 575 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 44
# 576 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 45
# 577 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 46
# 578 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 47
# 579 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 48
# 580 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 49
# 581 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 50
# 582 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 51
# 583 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 52
# 584 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 53
# 585 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 54
# 586 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 55
# 587 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 56
# 588 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 57
# 589 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 58
# 590 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 59
# 591 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 60
# 592 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 61
# 593 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 62
# 594 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 63
# 595 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 64
# 597 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 17
# 598 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 22
# 599 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 24
# 600 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 26
# 601 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 28
# 602 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 30
# 603 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 32
# 604 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 34
# 605 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 36
# 606 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 40
# 607 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_ITEM_HIDE_OPPONENT_MON_WAKEWATER
	return


# 610 "data/maps/WakewaterIsle/scripts.pory"
WakewaterIsle_Movement_TrainerApproachesPlayer:
# 612 "data/maps/WakewaterIsle/scripts.pory"
	walk_up
# 612 "data/maps/WakewaterIsle/scripts.pory"
	walk_up
# 612 "data/maps/WakewaterIsle/scripts.pory"
	walk_up
# 612 "data/maps/WakewaterIsle/scripts.pory"
	walk_up
# 613 "data/maps/WakewaterIsle/scripts.pory"
	face_up
# 614 "data/maps/WakewaterIsle/scripts.pory"
	step_end

WakewaterIsle_EventScript_Vaporeon_Text_0:
# 15 "data/maps/WakewaterIsle/scripts.pory"
	.string "Vaporeon$"

WakewaterIsle_EventScript_Vaporeon_Text_1:
# 17 "data/maps/WakewaterIsle/scripts.pory"
	.string "Blubburr!$"

WakewaterIsle_EventScript_Vaporeon_Text_2:
# 21 "data/maps/WakewaterIsle/scripts.pory"
	.string "Piraeus' Vaporeon looks excited to be\n"
	.string "here!$"

WakewaterIsle_EventScript_ChampionBattleSign_Text_0:
# 30 "data/maps/WakewaterIsle/scripts.pory"
	.string "Champion's Defense\n"
	.string "Prove that You're the Best!$"

WakewaterIsle_EventScript_Boy_Text_0:
# 40 "data/maps/WakewaterIsle/scripts.pory"
	.string "Boy$"

WakewaterIsle_EventScript_Boy_Text_1:
# 41 "data/maps/WakewaterIsle/scripts.pory"
	.string "This is where Champion-ranked Trainers\n"
	.string "come to hone their skills! It's one of\l"
	.string "the only places that other Trainers can\l"
	.string "freely challenge them.$"

WakewaterIsle_EventScript_Artist_Text_0:
# 51 "data/maps/WakewaterIsle/scripts.pory"
	.string "Artist$"

WakewaterIsle_EventScript_Artist_Text_1:
# 52 "data/maps/WakewaterIsle/scripts.pory"
	.string "I'm planning to watch all of today's\n"
	.string "battles. It'll inspire my new artwork!$"

WakewaterIsle_EventScript_Woman_Text_0:
# 62 "data/maps/WakewaterIsle/scripts.pory"
	.string "Woman$"

WakewaterIsle_EventScript_Woman_Text_1:
# 63 "data/maps/WakewaterIsle/scripts.pory"
	.string "Trainers here use {COLOR GREEN}Level Scaling{COLOR DARK_GRAY}. They'll\n"
	.string "usually match the average level of your\l"
	.string "Pokémon.$"

WakewaterIsle_EventScript_Sailor_Text_0:
# 73 "data/maps/WakewaterIsle/scripts.pory"
	.string "Sailor$"

WakewaterIsle_EventScript_Sailor_Text_1:
# 74 "data/maps/WakewaterIsle/scripts.pory"
	.string "The waters around Wakewater Isle are\n"
	.string "so rough, Surfing and Fishing are\l"
	.string "basically impossible. Only large boats\l"
	.string "are strong enough to bring people here.$"

WakewaterIsle_EventScript_BeginChampionsDefense_Text_0:
# 87 "data/maps/WakewaterIsle/scripts.pory"
	.string "Step up to the {COLOR GREEN}Champion's Defense\n"
	.string "Challenge{COLOR DARK_GRAY}? You will face {COLOR GREEN}3 Trainers{COLOR DARK_GRAY}\l"
	.string "back-to-back. Your Pokémon will be\l"
	.string "healed between each battle.$"

WakewaterIsle_EventScript_ChampionDefenseScript_Text_0:
# 117 "data/maps/WakewaterIsle/scripts.pory"
	.string "The first Trainer has been defeated!\n"
	.string "Your Pokémon will be healed while you\l"
	.string "wait for the second Trainer.$"

WakewaterIsle_EventScript_ChampionDefenseScript_Text_1:
# 131 "data/maps/WakewaterIsle/scripts.pory"
	.string "The second Trainer has been defeated!\n"
	.string "Your Pokémon will be healed while you\l"
	.string "wait for the third Trainer.$"

WakewaterIsle_EventScript_ChampionDefenseScript_Text_2:
# 145 "data/maps/WakewaterIsle/scripts.pory"
	.string "All three Trainers have been defeated!\n"
	.string "Congratulations, Champion!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_0:
# 174 "data/maps/WakewaterIsle/scripts.pory"
	.string "Samantha$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_1:
# 175 "data/maps/WakewaterIsle/scripts.pory"
	.string "Everyone underestimates me because\n"
	.string "I'm cute. I always prove them wrong!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_2:
# 176 "data/maps/WakewaterIsle/scripts.pory"
	.string "No! My sweet, strong Pokémon!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_3:
# 182 "data/maps/WakewaterIsle/scripts.pory"
	.string "Maura$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_4:
# 183 "data/maps/WakewaterIsle/scripts.pory"
	.string "My Pokémon and I all have psychic\n"
	.string "powers.$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_5:
# 184 "data/maps/WakewaterIsle/scripts.pory"
	.string "Our psychic powers... They've failed us!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_6:
# 192 "data/maps/WakewaterIsle/scripts.pory"
	.string "Piraeus$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_7:
# 193 "data/maps/WakewaterIsle/scripts.pory"
	.string "Bwahaha, you're not the only strong\n"
	.string "Trainer to sail The Delphis! Let's see\l"
	.string "what you've got!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_8:
# 194 "data/maps/WakewaterIsle/scripts.pory"
	.string "Ohoho, we'd better sail away!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_9:
# 200 "data/maps/WakewaterIsle/scripts.pory"
	.string "Lexie$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_10:
# 201 "data/maps/WakewaterIsle/scripts.pory"
	.string "My Pokémon and I are gonna kick your\n"
	.string "butt!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_11:
# 202 "data/maps/WakewaterIsle/scripts.pory"
	.string "No! We got OUR butts kicked!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_12:
# 208 "data/maps/WakewaterIsle/scripts.pory"
	.string "Alexander$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_13:
# 209 "data/maps/WakewaterIsle/scripts.pory"
	.string "Get ready for my ultimate performance!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_14:
# 210 "data/maps/WakewaterIsle/scripts.pory"
	.string "Aww, my performace was a failure.$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_15:
# 216 "data/maps/WakewaterIsle/scripts.pory"
	.string "Kassa$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_16:
# 217 "data/maps/WakewaterIsle/scripts.pory"
	.string "Heh, you could never compete against\n"
	.string "me.$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_17:
# 218 "data/maps/WakewaterIsle/scripts.pory"
	.string "Hey, I still have more money than you!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_18:
# 226 "data/maps/WakewaterIsle/scripts.pory"
	.string "Polymnia$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_19:
# 227 "data/maps/WakewaterIsle/scripts.pory"
	.string "I'm looking to find new farming talent\n"
	.string "for Jusmail Town, and I thought I'd stop\l"
	.string "by. Care for a battle?$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_20:
# 228 "data/maps/WakewaterIsle/scripts.pory"
	.string "Ehehe, you're as bold as ever!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_21:
# 236 "data/maps/WakewaterIsle/scripts.pory"
	.string "Ourani$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_22:
# 237 "data/maps/WakewaterIsle/scripts.pory"
	.string "'aven't seen ya in a bit, {PLAYER}!\n"
	.string "Wanna battle?$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_23:
# 238 "data/maps/WakewaterIsle/scripts.pory"
	.string "As strong as stone, this one!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_24:
# 246 "data/maps/WakewaterIsle/scripts.pory"
	.string "Kleio$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_25:
# 247 "data/maps/WakewaterIsle/scripts.pory"
	.string "{PLAYER}, I've seen your journey in my\n"
	.string "visions... Please, let me see your\l"
	.string "battles for myself!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_26:
# 248 "data/maps/WakewaterIsle/scripts.pory"
	.string "Stronger than any Trainer before...$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_27:
# 256 "data/maps/WakewaterIsle/scripts.pory"
	.string "Terpsikore$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_28:
# 257 "data/maps/WakewaterIsle/scripts.pory"
	.string "I'm in the mood for a dance! I challenge\n"
	.string "you!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_29:
# 258 "data/maps/WakewaterIsle/scripts.pory"
	.string "I always enjoy our dances, {PLAYER}!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_30:
# 266 "data/maps/WakewaterIsle/scripts.pory"
	.string "Euterpe$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_31:
# 267 "data/maps/WakewaterIsle/scripts.pory"
	.string "I'm here for a party! Let's give it our\n"
	.string "all, {PLAYER}!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_32:
# 268 "data/maps/WakewaterIsle/scripts.pory"
	.string "Kehehe! Always a pleasure!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_33:
# 276 "data/maps/WakewaterIsle/scripts.pory"
	.string "Thal & Mel$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_34:
# 277 "data/maps/WakewaterIsle/scripts.pory"
	.string "We're here to settle another argument\n"
	.string "by battling it out together. We\l"
	.string "challenge you!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_35:
# 286 "data/maps/WakewaterIsle/scripts.pory"
	.string "Rhadine$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_36:
# 287 "data/maps/WakewaterIsle/scripts.pory"
	.string "Ehehe, you know why I'm here,\n"
	.string "{PLAYER}! Give it your all!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_37:
# 288 "data/maps/WakewaterIsle/scripts.pory"
	.string "As fiery as always!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_38:
# 296 "data/maps/WakewaterIsle/scripts.pory"
	.string "Kalliope$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_39:
# 297 "data/maps/WakewaterIsle/scripts.pory"
	.string "{PLAYER}... I'm here to settle a\n"
	.string "grudge. I'll finally crush you!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_40:
# 298 "data/maps/WakewaterIsle/scripts.pory"
	.string "No... HOW?!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_41:
# 304 "data/maps/WakewaterIsle/scripts.pory"
	.string "Chimera Admin$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_42:
# 305 "data/maps/WakewaterIsle/scripts.pory"
	.string "Grr... I'm back to prove myself! Get\n"
	.string "ready to fall!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_43:
# 306 "data/maps/WakewaterIsle/scripts.pory"
	.string "I'm still not strong enough?!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_44:
# 313 "data/maps/WakewaterIsle/scripts.pory"
	.string "I've come to challenge you, {PLAYER}.\n"
	.string "I need to see how strong you've grown.$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_45:
# 314 "data/maps/WakewaterIsle/scripts.pory"
	.string "Hm... No wonder we failed to stop you.$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_46:
# 322 "data/maps/WakewaterIsle/scripts.pory"
	.string "Anyalios$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_47:
# 323 "data/maps/WakewaterIsle/scripts.pory"
	.string "Heya, new Champ! I'm here to reclaim my\n"
	.string "title!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_48:
# 324 "data/maps/WakewaterIsle/scripts.pory"
	.string "Bwahaha! Still too strong!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_49:
# 330 "data/maps/WakewaterIsle/scripts.pory"
	.string "Rania$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_50:
# 331 "data/maps/WakewaterIsle/scripts.pory"
	.string "Chaire! I thought it would be fun to\n"
	.string "stop by and try to battle you. Let's go!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_51:
# 332 "data/maps/WakewaterIsle/scripts.pory"
	.string "Woah, you're tough, {PLAYER}!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_52:
# 338 "data/maps/WakewaterIsle/scripts.pory"
	.string "Michah$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_53:
# 339 "data/maps/WakewaterIsle/scripts.pory"
	.string "Heh, sailing here was no problem for me.\n"
	.string "I'm ready to fight!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_54:
# 340 "data/maps/WakewaterIsle/scripts.pory"
	.string "You sunk me!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_55:
# 346 "data/maps/WakewaterIsle/scripts.pory"
	.string "Drake$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_56:
# 347 "data/maps/WakewaterIsle/scripts.pory"
	.string "Huh? There aren't any mountains on this\n"
	.string "island?$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_57:
# 348 "data/maps/WakewaterIsle/scripts.pory"
	.string "Woah!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_58:
# 354 "data/maps/WakewaterIsle/scripts.pory"
	.string "Sasha$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_59:
# 355 "data/maps/WakewaterIsle/scripts.pory"
	.string "My Pokémon have taken me so far!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_60:
# 356 "data/maps/WakewaterIsle/scripts.pory"
	.string "Looks like we have farther to go...$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_61:
# 362 "data/maps/WakewaterIsle/scripts.pory"
	.string "Connie$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_62:
# 363 "data/maps/WakewaterIsle/scripts.pory"
	.string "Wealth can take you anywhere!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_63:
# 364 "data/maps/WakewaterIsle/scripts.pory"
	.string "Aw, I guess money doesn't get you\n"
	.string "everything.$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_64:
# 370 "data/maps/WakewaterIsle/scripts.pory"
	.string "Shia$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_65:
# 371 "data/maps/WakewaterIsle/scripts.pory"
	.string "I raised all my Pokémon from Eggs!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_66:
# 372 "data/maps/WakewaterIsle/scripts.pory"
	.string "No, my poor Pokémon!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_67:
# 378 "data/maps/WakewaterIsle/scripts.pory"
	.string "Olivia$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_68:
# 379 "data/maps/WakewaterIsle/scripts.pory"
	.string "My Pokémon are just as cool as me!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_69:
# 380 "data/maps/WakewaterIsle/scripts.pory"
	.string "Hey, I'm still cooler than you!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_70:
# 386 "data/maps/WakewaterIsle/scripts.pory"
	.string "Kyle$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_71:
# 387 "data/maps/WakewaterIsle/scripts.pory"
	.string "Nobody's stronger 'an me!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_72:
# 388 "data/maps/WakewaterIsle/scripts.pory"
	.string "Well, I can still eat more than you!\n"
	.string "Bwahaha!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_73:
# 394 "data/maps/WakewaterIsle/scripts.pory"
	.string "Nemo$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_74:
# 395 "data/maps/WakewaterIsle/scripts.pory"
	.string "Are you still having fun in Ilios? Lemme\n"
	.string "see your team!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_75:
# 396 "data/maps/WakewaterIsle/scripts.pory"
	.string "Dang, you're good!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_76:
# 402 "data/maps/WakewaterIsle/scripts.pory"
	.string "Cassie$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_77:
# 403 "data/maps/WakewaterIsle/scripts.pory"
	.string "My new perfume will help me win!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_78:
# 404 "data/maps/WakewaterIsle/scripts.pory"
	.string "No!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_79:
# 410 "data/maps/WakewaterIsle/scripts.pory"
	.string "Jared$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_80:
# 411 "data/maps/WakewaterIsle/scripts.pory"
	.string "I fished up a lot of my best Pokémon.$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_81:
# 412 "data/maps/WakewaterIsle/scripts.pory"
	.string "My little guys!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_82:
# 418 "data/maps/WakewaterIsle/scripts.pory"
	.string "Caiden$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_83:
# 419 "data/maps/WakewaterIsle/scripts.pory"
	.string "Nobody swims faster than me!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_84:
# 420 "data/maps/WakewaterIsle/scripts.pory"
	.string "I'm still a faster swimmer...!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_85:
# 426 "data/maps/WakewaterIsle/scripts.pory"
	.string "Sebastian$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_86:
# 427 "data/maps/WakewaterIsle/scripts.pory"
	.string "Bahaha, new album coming out soon!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_87:
# 428 "data/maps/WakewaterIsle/scripts.pory"
	.string "Stream my new song!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_88:
# 434 "data/maps/WakewaterIsle/scripts.pory"
	.string "Brody$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_89:
# 435 "data/maps/WakewaterIsle/scripts.pory"
	.string "Look at my sweet Pokémon team!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_90:
# 436 "data/maps/WakewaterIsle/scripts.pory"
	.string "I have more training to do.$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_91:
# 442 "data/maps/WakewaterIsle/scripts.pory"
	.string "Jerry$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_92:
# 443 "data/maps/WakewaterIsle/scripts.pory"
	.string "I'm learning all about Pokémon in\n"
	.string "school!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_93:
# 444 "data/maps/WakewaterIsle/scripts.pory"
	.string "B-but I've learned so much!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_94:
# 450 "data/maps/WakewaterIsle/scripts.pory"
	.string "Erikov$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_95:
# 451 "data/maps/WakewaterIsle/scripts.pory"
	.string "I'll show you what high society battling\n"
	.string "looks like.$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_96:
# 452 "data/maps/WakewaterIsle/scripts.pory"
	.string "Remarkable!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_97:
# 458 "data/maps/WakewaterIsle/scripts.pory"
	.string "Snad$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_98:
# 459 "data/maps/WakewaterIsle/scripts.pory"
	.string "My bugs have some special moves to\n"
	.string "crush you!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_99:
# 460 "data/maps/WakewaterIsle/scripts.pory"
	.string "My Wurmple are still way cooler...$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_100:
# 466 "data/maps/WakewaterIsle/scripts.pory"
	.string "MissingNoVGC$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_101:
# 467 "data/maps/WakewaterIsle/scripts.pory"
	.string "You'd challenge someone with VGC in\n"
	.string "their name? I'm MADE for battles!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_102:
# 468 "data/maps/WakewaterIsle/scripts.pory"
	.string "Heh, not bad!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_103:
# 474 "data/maps/WakewaterIsle/scripts.pory"
	.string "Amy$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_104:
# 475 "data/maps/WakewaterIsle/scripts.pory"
	.string "My parents loaned me their strongest\n"
	.string "Pokémon!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_105:
# 476 "data/maps/WakewaterIsle/scripts.pory"
	.string "I'd better get back home...$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_106:
# 482 "data/maps/WakewaterIsle/scripts.pory"
	.string "Georgia$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_107:
# 483 "data/maps/WakewaterIsle/scripts.pory"
	.string "This'll be the show of a lifetime!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_108:
# 484 "data/maps/WakewaterIsle/scripts.pory"
	.string "What a fight!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_109:
# 490 "data/maps/WakewaterIsle/scripts.pory"
	.string "Nob$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_110:
# 491 "data/maps/WakewaterIsle/scripts.pory"
	.string "Huff, huff... I finally made it...!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_111:
# 492 "data/maps/WakewaterIsle/scripts.pory"
	.string "Aw, it's over already?$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_112:
# 498 "data/maps/WakewaterIsle/scripts.pory"
	.string "Dale$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_113:
# 499 "data/maps/WakewaterIsle/scripts.pory"
	.string "Hup! Hyah! Hiya!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_114:
# 500 "data/maps/WakewaterIsle/scripts.pory"
	.string "My awesome karate forms barely\n"
	.string "helped?!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_115:
# 506 "data/maps/WakewaterIsle/scripts.pory"
	.string "Allen$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_116:
# 507 "data/maps/WakewaterIsle/scripts.pory"
	.string "My Dragon Pokémon are the best to ever\n"
	.string "live!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_117:
# 508 "data/maps/WakewaterIsle/scripts.pory"
	.string "Second best isn't so bad.$"

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
	randomelement ITEM_NUGGET, ITEM_BIG_NUGGET
# 150 "data/maps/WakewaterIsle/scripts.pory"
	giveitem VAR_RESULT
# 151 "data/maps/WakewaterIsle/scripts.pory"
	closemessage
# 152 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 153 "data/maps/WakewaterIsle/scripts.pory"
	warp MAP_WAKEWATER_ISLE, 30, 22
# 154 "data/maps/WakewaterIsle/scripts.pory"
	waitstate
# 155 "data/maps/WakewaterIsle/scripts.pory"
	releaseall
	end


WakewaterIsle_EventScript_ChooseRandomTrainer::
# 162 "data/maps/WakewaterIsle/scripts.pory"
	randomelement TRAINER_WAKEWATER_SAMANTHA, TRAINER_WAKEWATER_MAURA, TRAINER_WAKEWATER_PIRAEUS, TRAINER_WAKEWATER_LEXIE, TRAINER_WAKEWATER_ALEXANDER, TRAINER_WAKEWATER_KASSA, TRAINER_WAKEWATER_POLYMNIA, TRAINER_WAKEWATER_OURANI, TRAINER_WAKEWATER_KLEIO, TRAINER_WAKEWATER_TERPSIKORE, TRAINER_WAKEWATER_EUTERPE, TRAINER_WAKEWATER_THALIA_AND_MELPOMENE, TRAINER_WAKEWATER_RHADINE, TRAINER_WAKEWATER_KALLIOPE, TRAINER_WAKEWATER_CHIMERA_ADMIN_M, TRAINER_WAKEWATER_CHIMERA_ADMIN_F, TRAINER_WAKEWATER_ANYALIOS, TRAINER_WAKEWATER_RANIA, TRAINER_WAKEWATER_MICHAH, TRAINER_WAKEWATER_DRAKE, TRAINER_WAKEWATER_SASHA, TRAINER_WAKEWATER_CONNIE, TRAINER_WAKEWATER_SHIA, TRAINER_WAKEWATER_OLIVIA, TRAINER_WAKEWATER_KYLE, TRAINER_WAKEWATER_NEMO, TRAINER_WAKEWATER_CASSIE, TRAINER_WAKEWATER_JARED, TRAINER_WAKEWATER_CAIDEN, TRAINER_WAKEWATER_SEBASTIAN, TRAINER_WAKEWATER_BRODY, TRAINER_WAKEWATER_JERRY, TRAINER_WAKEWATER_ERIKOV, TRAINER_WAKEWATER_RAJ, TRAINER_WAKEWATER_BITA, TRAINER_WAKEWATER_AMY, TRAINER_WAKEWATER_GEORGIA, TRAINER_WAKEWATER_NOB, TRAINER_WAKEWATER_DALE, TRAINER_WAKEWATER_ALLEN
# 163 "data/maps/WakewaterIsle/scripts.pory"
	copyvar VAR_CHOSEN_WAKEWATER_CHALLENGER, VAR_RESULT
# 165 "data/maps/WakewaterIsle/scripts.pory"
	switch VAR_CHOSEN_WAKEWATER_CHALLENGER
# 168 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_SAMANTHA, WakewaterIsle_EventScript_ChooseRandomTrainer_2
# 176 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_MAURA, WakewaterIsle_EventScript_ChooseRandomTrainer_3
# 184 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_PIRAEUS, WakewaterIsle_EventScript_ChooseRandomTrainer_4
# 194 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_LEXIE, WakewaterIsle_EventScript_ChooseRandomTrainer_5
# 202 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_ALEXANDER, WakewaterIsle_EventScript_ChooseRandomTrainer_6
# 210 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_KASSA, WakewaterIsle_EventScript_ChooseRandomTrainer_7
# 218 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_POLYMNIA, WakewaterIsle_EventScript_ChooseRandomTrainer_8
# 228 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_OURANI, WakewaterIsle_EventScript_ChooseRandomTrainer_9
# 238 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_KLEIO, WakewaterIsle_EventScript_ChooseRandomTrainer_10
# 248 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_TERPSIKORE, WakewaterIsle_EventScript_ChooseRandomTrainer_11
# 258 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_EUTERPE, WakewaterIsle_EventScript_ChooseRandomTrainer_12
# 268 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_THALIA_AND_MELPOMENE, WakewaterIsle_EventScript_ChooseRandomTrainer_13
# 278 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_RHADINE, WakewaterIsle_EventScript_ChooseRandomTrainer_14
# 288 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_KALLIOPE, WakewaterIsle_EventScript_ChooseRandomTrainer_15
# 298 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_CHIMERA_ADMIN_M, WakewaterIsle_EventScript_ChooseRandomTrainer_16
# 306 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_CHIMERA_ADMIN_F, WakewaterIsle_EventScript_ChooseRandomTrainer_17
# 314 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_ANYALIOS, WakewaterIsle_EventScript_ChooseRandomTrainer_18
# 324 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_RANIA, WakewaterIsle_EventScript_ChooseRandomTrainer_19
# 332 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_MICHAH, WakewaterIsle_EventScript_ChooseRandomTrainer_20
# 340 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_DRAKE, WakewaterIsle_EventScript_ChooseRandomTrainer_21
# 348 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_SASHA, WakewaterIsle_EventScript_ChooseRandomTrainer_22
# 356 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_CONNIE, WakewaterIsle_EventScript_ChooseRandomTrainer_23
# 364 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_SHIA, WakewaterIsle_EventScript_ChooseRandomTrainer_24
# 372 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_OLIVIA, WakewaterIsle_EventScript_ChooseRandomTrainer_25
# 380 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_KYLE, WakewaterIsle_EventScript_ChooseRandomTrainer_26
# 388 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_NEMO, WakewaterIsle_EventScript_ChooseRandomTrainer_27
# 396 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_CASSIE, WakewaterIsle_EventScript_ChooseRandomTrainer_28
# 404 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_JARED, WakewaterIsle_EventScript_ChooseRandomTrainer_29
# 412 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_CAIDEN, WakewaterIsle_EventScript_ChooseRandomTrainer_30
# 420 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_SEBASTIAN, WakewaterIsle_EventScript_ChooseRandomTrainer_31
# 428 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_BRODY, WakewaterIsle_EventScript_ChooseRandomTrainer_32
# 436 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_JERRY, WakewaterIsle_EventScript_ChooseRandomTrainer_33
# 444 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_ERIKOV, WakewaterIsle_EventScript_ChooseRandomTrainer_34
# 452 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_RAJ, WakewaterIsle_EventScript_ChooseRandomTrainer_35
# 460 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_BITA, WakewaterIsle_EventScript_ChooseRandomTrainer_36
# 468 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_AMY, WakewaterIsle_EventScript_ChooseRandomTrainer_37
# 476 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_GEORGIA, WakewaterIsle_EventScript_ChooseRandomTrainer_38
# 484 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_NOB, WakewaterIsle_EventScript_ChooseRandomTrainer_39
# 492 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_DALE, WakewaterIsle_EventScript_ChooseRandomTrainer_40
# 500 "data/maps/WakewaterIsle/scripts.pory"
	case TRAINER_WAKEWATER_ALLEN, WakewaterIsle_EventScript_ChooseRandomTrainer_41
WakewaterIsle_EventScript_ChooseRandomTrainer_2:
# 169 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_01
# 170 "data/maps/WakewaterIsle/scripts.pory"
	addobject 14
# 171 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 14, WakewaterIsle_Movement_TrainerApproachesPlayer
# 172 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 173 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_0
# 174 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_1
# 175 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_SAMANTHA, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_2
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_3:
# 177 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_02
# 178 "data/maps/WakewaterIsle/scripts.pory"
	addobject 15
# 179 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 15, WakewaterIsle_Movement_TrainerApproachesPlayer
# 180 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 181 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_3
# 182 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_4
# 183 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_MAURA, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_5
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_4:
# 185 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_03
# 186 "data/maps/WakewaterIsle/scripts.pory"
	addobject 17
# 187 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 17, WakewaterIsle_Movement_TrainerApproachesPlayer
# 188 "data/maps/WakewaterIsle/scripts.pory"
	addobject 18
# 189 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 18, WakewaterIsle_Movement_TrainerApproachesPlayer
# 190 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 191 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_6
# 192 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_7
# 193 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_PIRAEUS, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_8
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_5:
# 195 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_04
# 196 "data/maps/WakewaterIsle/scripts.pory"
	addobject 19
# 197 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 19, WakewaterIsle_Movement_TrainerApproachesPlayer
# 198 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 199 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_9
# 200 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_10
# 201 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_LEXIE, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_11
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_6:
# 203 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_05
# 204 "data/maps/WakewaterIsle/scripts.pory"
	addobject 20
# 205 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 20, WakewaterIsle_Movement_TrainerApproachesPlayer
# 206 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 207 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_12
# 208 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_13
# 209 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_ALEXANDER, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_14
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_7:
# 211 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_06
# 212 "data/maps/WakewaterIsle/scripts.pory"
	addobject 21
# 213 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 21, WakewaterIsle_Movement_TrainerApproachesPlayer
# 214 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 215 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_15
# 216 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_16
# 217 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_ALEXANDER, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_17
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_8:
# 219 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_07
# 220 "data/maps/WakewaterIsle/scripts.pory"
	addobject 22
# 221 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 22, WakewaterIsle_Movement_TrainerApproachesPlayer
# 222 "data/maps/WakewaterIsle/scripts.pory"
	addobject 23
# 223 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 23, WakewaterIsle_Movement_TrainerApproachesPlayer
# 224 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 225 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_18
# 226 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_19
# 227 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_POLYMNIA, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_20
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_9:
# 229 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_08
# 230 "data/maps/WakewaterIsle/scripts.pory"
	addobject 24
# 231 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 24, WakewaterIsle_Movement_TrainerApproachesPlayer
# 232 "data/maps/WakewaterIsle/scripts.pory"
	addobject 25
# 233 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 25, WakewaterIsle_Movement_TrainerApproachesPlayer
# 234 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 235 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_21
# 236 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_22
# 237 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_OURANI, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_23
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_10:
# 239 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_09
# 240 "data/maps/WakewaterIsle/scripts.pory"
	addobject 26
# 241 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 26, WakewaterIsle_Movement_TrainerApproachesPlayer
# 242 "data/maps/WakewaterIsle/scripts.pory"
	addobject 27
# 243 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 27, WakewaterIsle_Movement_TrainerApproachesPlayer
# 244 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 245 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_24
# 246 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_25
# 247 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_KLEIO, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_26
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_11:
# 249 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_10
# 250 "data/maps/WakewaterIsle/scripts.pory"
	addobject 28
# 251 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 28, WakewaterIsle_Movement_TrainerApproachesPlayer
# 252 "data/maps/WakewaterIsle/scripts.pory"
	addobject 29
# 253 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 29, WakewaterIsle_Movement_TrainerApproachesPlayer
# 254 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 255 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_27
# 256 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_28
# 257 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_TERPSIKORE, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_29
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_12:
# 259 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_11
# 260 "data/maps/WakewaterIsle/scripts.pory"
	addobject 30
# 261 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 30, WakewaterIsle_Movement_TrainerApproachesPlayer
# 262 "data/maps/WakewaterIsle/scripts.pory"
	addobject 31
# 263 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 31, WakewaterIsle_Movement_TrainerApproachesPlayer
# 264 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 265 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_30
# 266 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_31
# 267 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_EUTERPE, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_32
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_13:
# 269 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_12
# 270 "data/maps/WakewaterIsle/scripts.pory"
	addobject 32
# 271 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 32, WakewaterIsle_Movement_TrainerApproachesPlayer
# 272 "data/maps/WakewaterIsle/scripts.pory"
	addobject 33
# 273 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 33, WakewaterIsle_Movement_TrainerApproachesPlayer
# 274 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 275 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_33
# 276 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_34
# 277 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_THALIA_AND_MELPOMENE, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_32
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_14:
# 279 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_13
# 280 "data/maps/WakewaterIsle/scripts.pory"
	addobject 34
# 281 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 34, WakewaterIsle_Movement_TrainerApproachesPlayer
# 282 "data/maps/WakewaterIsle/scripts.pory"
	addobject 35
# 283 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 35, WakewaterIsle_Movement_TrainerApproachesPlayer
# 284 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 285 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_35
# 286 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_36
# 287 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_RHADINE, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_37
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_15:
# 289 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_14
# 290 "data/maps/WakewaterIsle/scripts.pory"
	addobject 36
# 291 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 36, WakewaterIsle_Movement_TrainerApproachesPlayer
# 292 "data/maps/WakewaterIsle/scripts.pory"
	addobject 37
# 293 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 37, WakewaterIsle_Movement_TrainerApproachesPlayer
# 294 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 295 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_38
# 296 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_39
# 297 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_KALLIOPE, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_40
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_16:
# 299 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_15
# 300 "data/maps/WakewaterIsle/scripts.pory"
	addobject 38
# 301 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 38, WakewaterIsle_Movement_TrainerApproachesPlayer
# 302 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 303 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_41
# 304 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_42
# 305 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_CHIMERA_ADMIN_M, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_43
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_17:
# 307 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_16
# 308 "data/maps/WakewaterIsle/scripts.pory"
	addobject 39
# 309 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 39, WakewaterIsle_Movement_TrainerApproachesPlayer
# 310 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 311 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_41
# 312 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_44
# 313 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_CHIMERA_ADMIN_F, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_45
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_18:
# 315 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_17
# 316 "data/maps/WakewaterIsle/scripts.pory"
	addobject 40
# 317 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 40, WakewaterIsle_Movement_TrainerApproachesPlayer
# 318 "data/maps/WakewaterIsle/scripts.pory"
	addobject 41
# 319 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 41, WakewaterIsle_Movement_TrainerApproachesPlayer
# 320 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 321 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_46
# 322 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_47
# 323 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_ANYALIOS, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_48
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_19:
# 325 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_18
# 326 "data/maps/WakewaterIsle/scripts.pory"
	addobject 42
# 327 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 42, WakewaterIsle_Movement_TrainerApproachesPlayer
# 328 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 329 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_49
# 330 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_50
# 331 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_RANIA, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_51
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_20:
# 333 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_19
# 334 "data/maps/WakewaterIsle/scripts.pory"
	addobject 43
# 335 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 43, WakewaterIsle_Movement_TrainerApproachesPlayer
# 336 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 337 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_52
# 338 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_53
# 339 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_MICHAH, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_54
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_21:
# 341 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_20
# 342 "data/maps/WakewaterIsle/scripts.pory"
	addobject 44
# 343 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 44, WakewaterIsle_Movement_TrainerApproachesPlayer
# 344 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 345 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_55
# 346 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_56
# 347 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_DRAKE, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_57
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_22:
# 349 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_21
# 350 "data/maps/WakewaterIsle/scripts.pory"
	addobject 45
# 351 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 45, WakewaterIsle_Movement_TrainerApproachesPlayer
# 352 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 353 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_58
# 354 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_59
# 355 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_SASHA, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_60
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_23:
# 357 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_22
# 358 "data/maps/WakewaterIsle/scripts.pory"
	addobject 46
# 359 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 46, WakewaterIsle_Movement_TrainerApproachesPlayer
# 360 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 361 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_61
# 362 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_62
# 363 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_CONNIE, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_63
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_24:
# 365 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_23
# 366 "data/maps/WakewaterIsle/scripts.pory"
	addobject 47
# 367 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 47, WakewaterIsle_Movement_TrainerApproachesPlayer
# 368 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 369 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_64
# 370 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_65
# 371 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_SHIA, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_66
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_25:
# 373 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_24
# 374 "data/maps/WakewaterIsle/scripts.pory"
	addobject 48
# 375 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 48, WakewaterIsle_Movement_TrainerApproachesPlayer
# 376 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 377 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_67
# 378 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_68
# 379 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_OLIVIA, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_69
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_26:
# 381 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_25
# 382 "data/maps/WakewaterIsle/scripts.pory"
	addobject 49
# 383 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 49, WakewaterIsle_Movement_TrainerApproachesPlayer
# 384 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 385 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_70
# 386 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_71
# 387 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_KYLE, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_72
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_27:
# 389 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_26
# 390 "data/maps/WakewaterIsle/scripts.pory"
	addobject 50
# 391 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 50, WakewaterIsle_Movement_TrainerApproachesPlayer
# 392 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 393 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_73
# 394 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_74
# 395 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_NEMO, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_75
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_28:
# 397 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_27
# 398 "data/maps/WakewaterIsle/scripts.pory"
	addobject 51
# 399 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 51, WakewaterIsle_Movement_TrainerApproachesPlayer
# 400 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 401 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_76
# 402 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_77
# 403 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_CASSIE, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_78
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_29:
# 405 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_28
# 406 "data/maps/WakewaterIsle/scripts.pory"
	addobject 52
# 407 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 52, WakewaterIsle_Movement_TrainerApproachesPlayer
# 408 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 409 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_79
# 410 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_80
# 411 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_JARED, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_81
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_30:
# 413 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_29
# 414 "data/maps/WakewaterIsle/scripts.pory"
	addobject 53
# 415 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 53, WakewaterIsle_Movement_TrainerApproachesPlayer
# 416 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 417 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_82
# 418 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_83
# 419 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_CAIDEN, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_84
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_31:
# 421 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_30
# 422 "data/maps/WakewaterIsle/scripts.pory"
	addobject 54
# 423 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 54, WakewaterIsle_Movement_TrainerApproachesPlayer
# 424 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 425 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_85
# 426 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_86
# 427 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_SEBASTIAN, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_87
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_32:
# 429 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_31
# 430 "data/maps/WakewaterIsle/scripts.pory"
	addobject 55
# 431 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 55, WakewaterIsle_Movement_TrainerApproachesPlayer
# 432 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 433 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_88
# 434 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_89
# 435 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_BRODY, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_90
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_33:
# 437 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_32
# 438 "data/maps/WakewaterIsle/scripts.pory"
	addobject 56
# 439 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 56, WakewaterIsle_Movement_TrainerApproachesPlayer
# 440 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 441 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_91
# 442 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_92
# 443 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_JERRY, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_93
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_34:
# 445 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_33
# 446 "data/maps/WakewaterIsle/scripts.pory"
	addobject 57
# 447 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 57, WakewaterIsle_Movement_TrainerApproachesPlayer
# 448 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 449 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_94
# 450 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_95
# 451 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_ERIKOV, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_96
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_35:
# 453 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_34
# 454 "data/maps/WakewaterIsle/scripts.pory"
	addobject 58
# 455 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 58, WakewaterIsle_Movement_TrainerApproachesPlayer
# 456 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 457 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_97
# 458 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_98
# 459 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_RAJ, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_99
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_36:
# 461 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_35
# 462 "data/maps/WakewaterIsle/scripts.pory"
	addobject 59
# 463 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 59, WakewaterIsle_Movement_TrainerApproachesPlayer
# 464 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 465 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_100
# 466 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_101
# 467 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_BITA, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_102
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_37:
# 469 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_36
# 470 "data/maps/WakewaterIsle/scripts.pory"
	addobject 60
# 471 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 60, WakewaterIsle_Movement_TrainerApproachesPlayer
# 472 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 473 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_103
# 474 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_104
# 475 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_AMY, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_105
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_38:
# 477 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_37
# 478 "data/maps/WakewaterIsle/scripts.pory"
	addobject 61
# 479 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 61, WakewaterIsle_Movement_TrainerApproachesPlayer
# 480 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 481 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_106
# 482 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_107
# 483 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_GEORGIA, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_108
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_39:
# 485 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_38
# 486 "data/maps/WakewaterIsle/scripts.pory"
	addobject 62
# 487 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 62, WakewaterIsle_Movement_TrainerApproachesPlayer
# 488 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 489 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_109
# 490 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_110
# 491 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_NOB, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_111
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_40:
# 493 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_39
# 494 "data/maps/WakewaterIsle/scripts.pory"
	addobject 63
# 495 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 63, WakewaterIsle_Movement_TrainerApproachesPlayer
# 496 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 497 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_112
# 498 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_113
# 499 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_DALE, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_114
	return

WakewaterIsle_EventScript_ChooseRandomTrainer_41:
# 501 "data/maps/WakewaterIsle/scripts.pory"
	clearflag FLAG_HIDE_WAKEWATER_TRAINER_40
# 502 "data/maps/WakewaterIsle/scripts.pory"
	addobject 64
# 503 "data/maps/WakewaterIsle/scripts.pory"
	applymovement 64, WakewaterIsle_Movement_TrainerApproachesPlayer
# 504 "data/maps/WakewaterIsle/scripts.pory"
	waitmovement 0
# 505 "data/maps/WakewaterIsle/scripts.pory"
	speakername WakewaterIsle_EventScript_ChooseRandomTrainer_Text_115
# 506 "data/maps/WakewaterIsle/scripts.pory"
	msgbox WakewaterIsle_EventScript_ChooseRandomTrainer_Text_116
# 507 "data/maps/WakewaterIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKEWATER_ALLEN, WakewaterIsle_EventScript_ChooseRandomTrainer_Text_117
	return


WakewaterIsle_EventScript_HideAllTrainers::
# 514 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_01
# 515 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_02
# 516 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_03
# 517 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_04
# 518 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_05
# 519 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_06
# 520 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_07
# 521 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_08
# 522 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_09
# 523 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_10
# 524 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_11
# 525 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_12
# 526 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_13
# 527 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_14
# 528 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_15
# 529 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_16
# 530 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_17
# 531 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_18
# 532 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_19
# 533 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_20
# 534 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_21
# 535 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_22
# 536 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_23
# 537 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_24
# 538 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_25
# 539 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_26
# 540 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_27
# 541 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_28
# 542 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_29
# 543 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_30
# 544 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_31
# 545 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_32
# 546 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_33
# 547 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_34
# 548 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_35
# 549 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_36
# 550 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_37
# 551 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_38
# 552 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_39
# 553 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_HIDE_WAKEWATER_TRAINER_40
# 555 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 14
# 556 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 15
# 557 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 18
# 558 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 19
# 559 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 20
# 560 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 21
# 561 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 23
# 562 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 25
# 563 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 27
# 564 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 29
# 565 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 31
# 566 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 33
# 567 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 35
# 568 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 37
# 569 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 38
# 570 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 39
# 571 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 41
# 572 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 42
# 573 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 43
# 574 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 44
# 575 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 45
# 576 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 46
# 577 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 47
# 578 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 48
# 579 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 49
# 580 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 50
# 581 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 51
# 582 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 52
# 583 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 53
# 584 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 54
# 585 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 55
# 586 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 56
# 587 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 57
# 588 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 58
# 589 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 59
# 590 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 60
# 591 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 61
# 592 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 62
# 593 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 63
# 594 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 64
# 596 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 17
# 597 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 22
# 598 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 24
# 599 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 26
# 600 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 28
# 601 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 30
# 602 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 32
# 603 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 34
# 604 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 36
# 605 "data/maps/WakewaterIsle/scripts.pory"
	removeobject 40
# 606 "data/maps/WakewaterIsle/scripts.pory"
	setflag FLAG_ITEM_HIDE_OPPONENT_MON_WAKEWATER
	return


# 609 "data/maps/WakewaterIsle/scripts.pory"
WakewaterIsle_Movement_TrainerApproachesPlayer:
# 611 "data/maps/WakewaterIsle/scripts.pory"
	walk_up
# 611 "data/maps/WakewaterIsle/scripts.pory"
	walk_up
# 611 "data/maps/WakewaterIsle/scripts.pory"
	walk_up
# 611 "data/maps/WakewaterIsle/scripts.pory"
	walk_up
# 612 "data/maps/WakewaterIsle/scripts.pory"
	face_up
# 613 "data/maps/WakewaterIsle/scripts.pory"
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
	.string "I think I'll try challenging a\n"
	.string "Champion-ranked Trainer here soon. My\l"
	.string "Pokémon are ready for a real battle!$"

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
# 173 "data/maps/WakewaterIsle/scripts.pory"
	.string "Samantha$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_1:
# 174 "data/maps/WakewaterIsle/scripts.pory"
	.string "Everyone underestimates me because\n"
	.string "I'm cute. I always prove them wrong!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_2:
# 175 "data/maps/WakewaterIsle/scripts.pory"
	.string "No! My sweet, strong Pokémon!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_3:
# 181 "data/maps/WakewaterIsle/scripts.pory"
	.string "Maura$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_4:
# 182 "data/maps/WakewaterIsle/scripts.pory"
	.string "My Pokémon and I all have psychic\n"
	.string "powers.$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_5:
# 183 "data/maps/WakewaterIsle/scripts.pory"
	.string "Our psychic powers... They've failed us!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_6:
# 191 "data/maps/WakewaterIsle/scripts.pory"
	.string "Piraeus$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_7:
# 192 "data/maps/WakewaterIsle/scripts.pory"
	.string "Bwahaha, you're not the only strong\n"
	.string "Trainer to sail The Delphis! Let's see\l"
	.string "what you've got!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_8:
# 193 "data/maps/WakewaterIsle/scripts.pory"
	.string "Ohoho, we'd better sail away!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_9:
# 199 "data/maps/WakewaterIsle/scripts.pory"
	.string "Lexie$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_10:
# 200 "data/maps/WakewaterIsle/scripts.pory"
	.string "My Pokémon and I are gonna kick your\n"
	.string "butt!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_11:
# 201 "data/maps/WakewaterIsle/scripts.pory"
	.string "No! We got OUR butts kicked!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_12:
# 207 "data/maps/WakewaterIsle/scripts.pory"
	.string "Alexander$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_13:
# 208 "data/maps/WakewaterIsle/scripts.pory"
	.string "Get ready for my ultimate performance!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_14:
# 209 "data/maps/WakewaterIsle/scripts.pory"
	.string "Aww, my performace was a failure.$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_15:
# 215 "data/maps/WakewaterIsle/scripts.pory"
	.string "Kassa$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_16:
# 216 "data/maps/WakewaterIsle/scripts.pory"
	.string "Heh, you could never compete against\n"
	.string "me.$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_17:
# 217 "data/maps/WakewaterIsle/scripts.pory"
	.string "Hey, I still have more money than you!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_18:
# 225 "data/maps/WakewaterIsle/scripts.pory"
	.string "Polymnia$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_19:
# 226 "data/maps/WakewaterIsle/scripts.pory"
	.string "I'm looking to find new farming talent\n"
	.string "for Jusmail Town, and I thought I'd stop\l"
	.string "by. Care for a battle?$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_20:
# 227 "data/maps/WakewaterIsle/scripts.pory"
	.string "Ehehe, you're as bold as ever!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_21:
# 235 "data/maps/WakewaterIsle/scripts.pory"
	.string "Ourani$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_22:
# 236 "data/maps/WakewaterIsle/scripts.pory"
	.string "'aven't seen ya in a bit, {PLAYER}!\n"
	.string "Wanna battle?$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_23:
# 237 "data/maps/WakewaterIsle/scripts.pory"
	.string "As strong as stone, this one!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_24:
# 245 "data/maps/WakewaterIsle/scripts.pory"
	.string "Kleio$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_25:
# 246 "data/maps/WakewaterIsle/scripts.pory"
	.string "{PLAYER}, I've seen your journey in my\n"
	.string "visions... Please, let me see your\l"
	.string "battles for myself!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_26:
# 247 "data/maps/WakewaterIsle/scripts.pory"
	.string "Stronger than any Trainer before...$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_27:
# 255 "data/maps/WakewaterIsle/scripts.pory"
	.string "Terpsikore$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_28:
# 256 "data/maps/WakewaterIsle/scripts.pory"
	.string "I'm in the mood for a dance! I challenge\n"
	.string "you!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_29:
# 257 "data/maps/WakewaterIsle/scripts.pory"
	.string "I always enjoy our dances, {PLAYER}!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_30:
# 265 "data/maps/WakewaterIsle/scripts.pory"
	.string "Euterpe$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_31:
# 266 "data/maps/WakewaterIsle/scripts.pory"
	.string "I'm here for a party! Let's give it our\n"
	.string "all, {PLAYER}!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_32:
# 267 "data/maps/WakewaterIsle/scripts.pory"
	.string "Kehehe! Always a pleasure!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_33:
# 275 "data/maps/WakewaterIsle/scripts.pory"
	.string "Thal & Mel$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_34:
# 276 "data/maps/WakewaterIsle/scripts.pory"
	.string "We're here to settle another argument\n"
	.string "by battling it out together. We\l"
	.string "challenge you!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_35:
# 285 "data/maps/WakewaterIsle/scripts.pory"
	.string "Rhadine$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_36:
# 286 "data/maps/WakewaterIsle/scripts.pory"
	.string "Ehehe, you know why I'm here,\n"
	.string "{PLAYER}! Give it your all!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_37:
# 287 "data/maps/WakewaterIsle/scripts.pory"
	.string "As fiery as always!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_38:
# 295 "data/maps/WakewaterIsle/scripts.pory"
	.string "Kalliope$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_39:
# 296 "data/maps/WakewaterIsle/scripts.pory"
	.string "{PLAYER}... I'm here to settle a\n"
	.string "grudge. I'll finally crush you!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_40:
# 297 "data/maps/WakewaterIsle/scripts.pory"
	.string "No... HOW?!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_41:
# 303 "data/maps/WakewaterIsle/scripts.pory"
	.string "Chimera Admin$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_42:
# 304 "data/maps/WakewaterIsle/scripts.pory"
	.string "Grr... I'm back to prove myself! Get\n"
	.string "ready to fall!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_43:
# 305 "data/maps/WakewaterIsle/scripts.pory"
	.string "I'm still not strong enough?!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_44:
# 312 "data/maps/WakewaterIsle/scripts.pory"
	.string "I've come to challenge you, {PLAYER}.\n"
	.string "I need to see how strong you've grown.$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_45:
# 313 "data/maps/WakewaterIsle/scripts.pory"
	.string "Hm... No wonder we failed to stop you.$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_46:
# 321 "data/maps/WakewaterIsle/scripts.pory"
	.string "Anyalios$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_47:
# 322 "data/maps/WakewaterIsle/scripts.pory"
	.string "Heya, new Champ! I'm here to reclaim my\n"
	.string "title!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_48:
# 323 "data/maps/WakewaterIsle/scripts.pory"
	.string "Bwahaha! Still too strong!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_49:
# 329 "data/maps/WakewaterIsle/scripts.pory"
	.string "Rania$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_50:
# 330 "data/maps/WakewaterIsle/scripts.pory"
	.string "Chaire! I thought it would be fun to\n"
	.string "stop by and try to battle you. Let's go!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_51:
# 331 "data/maps/WakewaterIsle/scripts.pory"
	.string "Woah, you're tough, {PLAYER}!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_52:
# 337 "data/maps/WakewaterIsle/scripts.pory"
	.string "Michah$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_53:
# 338 "data/maps/WakewaterIsle/scripts.pory"
	.string "Heh, sailing here was no problem for me.\n"
	.string "I'm ready to fight!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_54:
# 339 "data/maps/WakewaterIsle/scripts.pory"
	.string "You sunk me!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_55:
# 345 "data/maps/WakewaterIsle/scripts.pory"
	.string "Drake$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_56:
# 346 "data/maps/WakewaterIsle/scripts.pory"
	.string "Huh? There aren't any mountains on this\n"
	.string "island?$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_57:
# 347 "data/maps/WakewaterIsle/scripts.pory"
	.string "Woah!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_58:
# 353 "data/maps/WakewaterIsle/scripts.pory"
	.string "Sasha$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_59:
# 354 "data/maps/WakewaterIsle/scripts.pory"
	.string "My Pokémon have taken me so far!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_60:
# 355 "data/maps/WakewaterIsle/scripts.pory"
	.string "Looks like we have farther to go...$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_61:
# 361 "data/maps/WakewaterIsle/scripts.pory"
	.string "Connie$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_62:
# 362 "data/maps/WakewaterIsle/scripts.pory"
	.string "Wealth can take you anywhere!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_63:
# 363 "data/maps/WakewaterIsle/scripts.pory"
	.string "Aw, I guess money doesn't get you\n"
	.string "everything.$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_64:
# 369 "data/maps/WakewaterIsle/scripts.pory"
	.string "Shia$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_65:
# 370 "data/maps/WakewaterIsle/scripts.pory"
	.string "I raised all my Pokémon from Eggs!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_66:
# 371 "data/maps/WakewaterIsle/scripts.pory"
	.string "No, my poor Pokémon!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_67:
# 377 "data/maps/WakewaterIsle/scripts.pory"
	.string "Olivia$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_68:
# 378 "data/maps/WakewaterIsle/scripts.pory"
	.string "My Pokémon are just as cool as me!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_69:
# 379 "data/maps/WakewaterIsle/scripts.pory"
	.string "Hey, I'm still cooler than you!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_70:
# 385 "data/maps/WakewaterIsle/scripts.pory"
	.string "Kyle$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_71:
# 386 "data/maps/WakewaterIsle/scripts.pory"
	.string "Nobody's stronger 'an me!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_72:
# 387 "data/maps/WakewaterIsle/scripts.pory"
	.string "Well, I can still eat more than you!\n"
	.string "Bwahaha!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_73:
# 393 "data/maps/WakewaterIsle/scripts.pory"
	.string "Nemo$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_74:
# 394 "data/maps/WakewaterIsle/scripts.pory"
	.string "Are you still having fun in Ilios? Lemme\n"
	.string "see your team!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_75:
# 395 "data/maps/WakewaterIsle/scripts.pory"
	.string "Dang, you're good!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_76:
# 401 "data/maps/WakewaterIsle/scripts.pory"
	.string "Cassie$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_77:
# 402 "data/maps/WakewaterIsle/scripts.pory"
	.string "My new perfume will help me win!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_78:
# 403 "data/maps/WakewaterIsle/scripts.pory"
	.string "No!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_79:
# 409 "data/maps/WakewaterIsle/scripts.pory"
	.string "Jared$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_80:
# 410 "data/maps/WakewaterIsle/scripts.pory"
	.string "I fished up a lot of my best Pokémon.$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_81:
# 411 "data/maps/WakewaterIsle/scripts.pory"
	.string "My little guys!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_82:
# 417 "data/maps/WakewaterIsle/scripts.pory"
	.string "Caiden$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_83:
# 418 "data/maps/WakewaterIsle/scripts.pory"
	.string "Nobody swims faster than me!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_84:
# 419 "data/maps/WakewaterIsle/scripts.pory"
	.string "I'm still a faster swimmer...!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_85:
# 425 "data/maps/WakewaterIsle/scripts.pory"
	.string "Sebastian$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_86:
# 426 "data/maps/WakewaterIsle/scripts.pory"
	.string "Bahaha, new album coming out soon!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_87:
# 427 "data/maps/WakewaterIsle/scripts.pory"
	.string "Stream my new song!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_88:
# 433 "data/maps/WakewaterIsle/scripts.pory"
	.string "Brody$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_89:
# 434 "data/maps/WakewaterIsle/scripts.pory"
	.string "Look at my sweet Pokémon team!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_90:
# 435 "data/maps/WakewaterIsle/scripts.pory"
	.string "I have more training to do.$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_91:
# 441 "data/maps/WakewaterIsle/scripts.pory"
	.string "Jerry$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_92:
# 442 "data/maps/WakewaterIsle/scripts.pory"
	.string "I'm learning all about Pokémon in\n"
	.string "school!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_93:
# 443 "data/maps/WakewaterIsle/scripts.pory"
	.string "B-but I've learned so much!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_94:
# 449 "data/maps/WakewaterIsle/scripts.pory"
	.string "Erikov$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_95:
# 450 "data/maps/WakewaterIsle/scripts.pory"
	.string "I'll show you what high society battling\n"
	.string "looks like.$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_96:
# 451 "data/maps/WakewaterIsle/scripts.pory"
	.string "Remarkable!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_97:
# 457 "data/maps/WakewaterIsle/scripts.pory"
	.string "Raj$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_98:
# 458 "data/maps/WakewaterIsle/scripts.pory"
	.string "My team is the coolest!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_99:
# 459 "data/maps/WakewaterIsle/scripts.pory"
	.string "Your team is... COOLER than mine?!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_100:
# 465 "data/maps/WakewaterIsle/scripts.pory"
	.string "Bita$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_101:
# 466 "data/maps/WakewaterIsle/scripts.pory"
	.string "Come on, it's time to battle!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_102:
# 467 "data/maps/WakewaterIsle/scripts.pory"
	.string "You're in another league.$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_103:
# 473 "data/maps/WakewaterIsle/scripts.pory"
	.string "Amy$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_104:
# 474 "data/maps/WakewaterIsle/scripts.pory"
	.string "My parents loaned me their strongest\n"
	.string "Pokémon!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_105:
# 475 "data/maps/WakewaterIsle/scripts.pory"
	.string "I'd better get back home...$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_106:
# 481 "data/maps/WakewaterIsle/scripts.pory"
	.string "Georgia$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_107:
# 482 "data/maps/WakewaterIsle/scripts.pory"
	.string "This'll be the show of a lifetime!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_108:
# 483 "data/maps/WakewaterIsle/scripts.pory"
	.string "What a fight!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_109:
# 489 "data/maps/WakewaterIsle/scripts.pory"
	.string "Nob$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_110:
# 490 "data/maps/WakewaterIsle/scripts.pory"
	.string "Huff, huff... I finally made it...!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_111:
# 491 "data/maps/WakewaterIsle/scripts.pory"
	.string "Aw, it's over already?$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_112:
# 497 "data/maps/WakewaterIsle/scripts.pory"
	.string "Dale$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_113:
# 498 "data/maps/WakewaterIsle/scripts.pory"
	.string "Hup! Hyah! Hiya!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_114:
# 499 "data/maps/WakewaterIsle/scripts.pory"
	.string "My awesome karate forms barely\n"
	.string "helped?!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_115:
# 505 "data/maps/WakewaterIsle/scripts.pory"
	.string "Allen$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_116:
# 506 "data/maps/WakewaterIsle/scripts.pory"
	.string "My Dragon Pokémon are the best to ever\n"
	.string "live!$"

WakewaterIsle_EventScript_ChooseRandomTrainer_Text_117:
# 507 "data/maps/WakewaterIsle/scripts.pory"
	.string "Second best isn't so bad.$"

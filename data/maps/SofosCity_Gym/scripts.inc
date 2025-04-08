SofosCity_Gym_MapScripts::
# 2 "data/maps/SofosCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SofosCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SofosCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SofosCity_Gym/scripts.pory"
	clearflag FLAG_SOFOS_GYM_GAUNTLET_ACTIVE
	return


SofosCity_Gym_EventScript_GymStatue::
# 9 "data/maps/SofosCity_Gym/scripts.pory"
	lock
# 10 "data/maps/SofosCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SofosCity_Gym_EventScript_GymStatue_2
# 16 "data/maps/SofosCity_Gym/scripts.pory"
	msgbox SofosCity_Gym_EventScript_GymStatue_Text_1
SofosCity_Gym_EventScript_GymStatue_1:
# 18 "data/maps/SofosCity_Gym/scripts.pory"
	closemessage
# 19 "data/maps/SofosCity_Gym/scripts.pory"
	release
	end

SofosCity_Gym_EventScript_GymStatue_2:
# 12 "data/maps/SofosCity_Gym/scripts.pory"
	msgbox SofosCity_Gym_EventScript_GymStatue_Text_0
	goto SofosCity_Gym_EventScript_GymStatue_1


SofosCity_Gym_EventScript_GymMan::
# 25 "data/maps/SofosCity_Gym/scripts.pory"
	lock
# 26 "data/maps/SofosCity_Gym/scripts.pory"
	faceplayer
# 27 "data/maps/SofosCity_Gym/scripts.pory"
	speakername SofosCity_Gym_EventScript_GymMan_Text_0
# 28 "data/maps/SofosCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SofosCity_Gym_EventScript_GymMan_2
# 34 "data/maps/SofosCity_Gym/scripts.pory"
	msgbox SofosCity_Gym_EventScript_GymMan_Text_2
SofosCity_Gym_EventScript_GymMan_1:
# 36 "data/maps/SofosCity_Gym/scripts.pory"
	closemessage
# 37 "data/maps/SofosCity_Gym/scripts.pory"
	release
	end

SofosCity_Gym_EventScript_GymMan_2:
# 30 "data/maps/SofosCity_Gym/scripts.pory"
	msgbox SofosCity_Gym_EventScript_GymMan_Text_1
	goto SofosCity_Gym_EventScript_GymMan_1


SofosCity_Gym_Trigger_GauntletWarning::
# 43 "data/maps/SofosCity_Gym/scripts.pory"
	lockall
# 44 "data/maps/SofosCity_Gym/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 45 "data/maps/SofosCity_Gym/scripts.pory"
	waitmovement 0
# 46 "data/maps/SofosCity_Gym/scripts.pory"
	delay 15
# 47 "data/maps/SofosCity_Gym/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 48 "data/maps/SofosCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 49 "data/maps/SofosCity_Gym/scripts.pory"
	waitmovement 0
# 52 "data/maps/SofosCity_Gym/scripts.pory"
	goto_if_set FLAG_SOFOS_GYM_GAUNTLET_ACTIVE, SofosCity_Gym_Trigger_GauntletWarning_2
# 85 "data/maps/SofosCity_Gym/scripts.pory"
	speakername SofosCity_Gym_EventScript_GymMan_Text_0
# 86 "data/maps/SofosCity_Gym/scripts.pory"
	msgbox SofosCity_Gym_Trigger_GauntletWarning_Text_3, MSGBOX_YESNO
# 87 "data/maps/SofosCity_Gym/scripts.pory"
	closemessage
# 88 "data/maps/SofosCity_Gym/scripts.pory"
	delay 5
# 89 "data/maps/SofosCity_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_Gym_Trigger_GauntletWarning_5
# 103 "data/maps/SofosCity_Gym/scripts.pory"
	speakername SofosCity_Gym_EventScript_GymMan_Text_0
# 104 "data/maps/SofosCity_Gym/scripts.pory"
	msgbox SofosCity_Gym_Trigger_GauntletWarning_Text_5
# 105 "data/maps/SofosCity_Gym/scripts.pory"
	closemessage
# 106 "data/maps/SofosCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 107 "data/maps/SofosCity_Gym/scripts.pory"
	waitmovement 0
# 108 "data/maps/SofosCity_Gym/scripts.pory"
	delay 10
# 109 "data/maps/SofosCity_Gym/scripts.pory"
	setflag FLAG_SOFOS_GYM_GAUNTLET_ACTIVE
# 112 "data/maps/SofosCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_SOFOSGYM_BROOKE
# 113 "data/maps/SofosCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_SOFOSGYM_TYRIEN
# 114 "data/maps/SofosCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_SOFOSGYM_SAPPHA
# 115 "data/maps/SofosCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_SOFOSGYM_ARISTO
# 117 "data/maps/SofosCity_Gym/scripts.pory"
	releaseall
	end

SofosCity_Gym_Trigger_GauntletWarning_2:
# 54 "data/maps/SofosCity_Gym/scripts.pory"
	speakername SofosCity_Gym_EventScript_GymMan_Text_0
# 55 "data/maps/SofosCity_Gym/scripts.pory"
	msgbox SofosCity_Gym_Trigger_GauntletWarning_Text_0, MSGBOX_YESNO
# 56 "data/maps/SofosCity_Gym/scripts.pory"
	closemessage
# 57 "data/maps/SofosCity_Gym/scripts.pory"
	delay 5
# 58 "data/maps/SofosCity_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_Gym_Trigger_GauntletWarning_8
# 72 "data/maps/SofosCity_Gym/scripts.pory"
	speakername SofosCity_Gym_EventScript_GymMan_Text_0
# 73 "data/maps/SofosCity_Gym/scripts.pory"
	msgbox SofosCity_Gym_Trigger_GauntletWarning_Text_2
# 74 "data/maps/SofosCity_Gym/scripts.pory"
	closemessage
# 75 "data/maps/SofosCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 76 "data/maps/SofosCity_Gym/scripts.pory"
	waitmovement 0
# 77 "data/maps/SofosCity_Gym/scripts.pory"
	delay 10
# 78 "data/maps/SofosCity_Gym/scripts.pory"
	clearflag FLAG_SOFOS_GYM_GAUNTLET_ACTIVE
# 79 "data/maps/SofosCity_Gym/scripts.pory"
	releaseall
	end

# 120 "data/maps/SofosCity_Gym/scripts.pory"
	releaseall
	end

SofosCity_Gym_Trigger_GauntletWarning_5:
# 91 "data/maps/SofosCity_Gym/scripts.pory"
	speakername SofosCity_Gym_EventScript_GymMan_Text_0
# 92 "data/maps/SofosCity_Gym/scripts.pory"
	msgbox SofosCity_Gym_Trigger_GauntletWarning_Text_4
# 93 "data/maps/SofosCity_Gym/scripts.pory"
	closemessage
# 94 "data/maps/SofosCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 95 "data/maps/SofosCity_Gym/scripts.pory"
	waitmovement 0
# 96 "data/maps/SofosCity_Gym/scripts.pory"
	delay 10
# 97 "data/maps/SofosCity_Gym/scripts.pory"
	clearflag FLAG_SOFOS_GYM_GAUNTLET_ACTIVE
# 98 "data/maps/SofosCity_Gym/scripts.pory"
	releaseall
	end

SofosCity_Gym_Trigger_GauntletWarning_8:
# 60 "data/maps/SofosCity_Gym/scripts.pory"
	speakername SofosCity_Gym_EventScript_GymMan_Text_0
# 61 "data/maps/SofosCity_Gym/scripts.pory"
	msgbox SofosCity_Gym_Trigger_GauntletWarning_Text_1
# 62 "data/maps/SofosCity_Gym/scripts.pory"
	closemessage
# 63 "data/maps/SofosCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 64 "data/maps/SofosCity_Gym/scripts.pory"
	waitmovement 0
# 65 "data/maps/SofosCity_Gym/scripts.pory"
	delay 10
# 66 "data/maps/SofosCity_Gym/scripts.pory"
	setflag FLAG_SOFOS_GYM_GAUNTLET_ACTIVE
# 67 "data/maps/SofosCity_Gym/scripts.pory"
	releaseall
	end


SofosCity_Gym_EventScript_PokemonBusyTraining::
# 126 "data/maps/SofosCity_Gym/scripts.pory"
	lock
# 127 "data/maps/SofosCity_Gym/scripts.pory"
	msgbox SofosCity_Gym_EventScript_PokemonBusyTraining_Text_0
# 128 "data/maps/SofosCity_Gym/scripts.pory"
	closemessage
# 129 "data/maps/SofosCity_Gym/scripts.pory"
	release
	end


SofosCity_Gym_EventScript_PokemonBusyLearning::
# 134 "data/maps/SofosCity_Gym/scripts.pory"
	lock
# 135 "data/maps/SofosCity_Gym/scripts.pory"
	msgbox SofosCity_Gym_EventScript_PokemonBusyLearning_Text_0
# 136 "data/maps/SofosCity_Gym/scripts.pory"
	closemessage
# 137 "data/maps/SofosCity_Gym/scripts.pory"
	release
	end


SofosCity_Gym_EventScript_Mienfoo::
# 143 "data/maps/SofosCity_Gym/scripts.pory"
	lock
# 144 "data/maps/SofosCity_Gym/scripts.pory"
	faceplayer
# 145 "data/maps/SofosCity_Gym/scripts.pory"
	speakername SofosCity_Gym_EventScript_Mienfoo_Text_0
# 146 "data/maps/SofosCity_Gym/scripts.pory"
	playmoncry SPECIES_MIENFOO, CRY_MODE_NORMAL
# 147 "data/maps/SofosCity_Gym/scripts.pory"
	msgbox SofosCity_Gym_EventScript_Mienfoo_Text_1
# 148 "data/maps/SofosCity_Gym/scripts.pory"
	waitmoncry
# 149 "data/maps/SofosCity_Gym/scripts.pory"
	closemessage
# 150 "data/maps/SofosCity_Gym/scripts.pory"
	msgbox SofosCity_Gym_EventScript_Mienfoo_Text_2
# 151 "data/maps/SofosCity_Gym/scripts.pory"
	closemessage
# 152 "data/maps/SofosCity_Gym/scripts.pory"
	release
	end


SofosCity_Gym_EventScript_Trainer_SofosGym_Brooke::
# 158 "data/maps/SofosCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SOFOSGYM_BROOKE, SofosCity_Gym_Text_Trainer_SofosGym_BrookeIntro, SofosCity_Gym_Text_Trainer_SofosGym_BrookeDefeat
# 159 "data/maps/SofosCity_Gym/scripts.pory"
	speakername SofosCity_Gym_EventScript_Trainer_SofosGym_Brooke_Text_0
# 160 "data/maps/SofosCity_Gym/scripts.pory"
	msgbox SofosCity_Gym_EventScript_Trainer_SofosGym_Brooke_Text_1
# 161 "data/maps/SofosCity_Gym/scripts.pory"
	closemessage
# 162 "data/maps/SofosCity_Gym/scripts.pory"
	release
	end


SofosCity_Gym_EventScript_Trainer_SofosGym_Tyrien::
# 176 "data/maps/SofosCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SOFOSGYM_TYRIEN, SofosCity_Gym_Text_Trainer_SofosGym_TyrienIntro, SofosCity_Gym_Text_Trainer_SofosGym_TyrienDefeat
# 177 "data/maps/SofosCity_Gym/scripts.pory"
	speakername SofosCity_Gym_EventScript_Trainer_SofosGym_Tyrien_Text_0
# 178 "data/maps/SofosCity_Gym/scripts.pory"
	msgbox SofosCity_Gym_EventScript_Trainer_SofosGym_Tyrien_Text_1
# 179 "data/maps/SofosCity_Gym/scripts.pory"
	closemessage
# 180 "data/maps/SofosCity_Gym/scripts.pory"
	release
	end


SofosCity_Gym_EventScript_Trainer_SofosGym_Sappha::
# 194 "data/maps/SofosCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SOFOSGYM_SAPPHA, SofosCity_Gym_Text_Trainer_SofosGym_SapphaIntro, SofosCity_Gym_Text_Trainer_SofosGym_SapphaDefeat
# 195 "data/maps/SofosCity_Gym/scripts.pory"
	speakername SofosCity_Gym_EventScript_Trainer_SofosGym_Sappha_Text_0
# 196 "data/maps/SofosCity_Gym/scripts.pory"
	msgbox SofosCity_Gym_EventScript_Trainer_SofosGym_Sappha_Text_1
# 197 "data/maps/SofosCity_Gym/scripts.pory"
	closemessage
# 198 "data/maps/SofosCity_Gym/scripts.pory"
	release
	end


SofosCity_Gym_EventScript_Trainer_SofosGym_Aristo::
# 212 "data/maps/SofosCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SOFOSGYM_ARISTO, SofosCity_Gym_Text_Trainer_SofosGym_AristoIntro, SofosCity_Gym_Text_Trainer_SofosGym_AristoDefeat
# 213 "data/maps/SofosCity_Gym/scripts.pory"
	speakername SofosCity_Gym_EventScript_Trainer_SofosGym_Aristo_Text_0
# 214 "data/maps/SofosCity_Gym/scripts.pory"
	msgbox SofosCity_Gym_EventScript_Trainer_SofosGym_Aristo_Text_1
# 215 "data/maps/SofosCity_Gym/scripts.pory"
	closemessage
# 216 "data/maps/SofosCity_Gym/scripts.pory"
	release
	end


SofosCity_Gym_EventScript_Meneswo::
# 230 "data/maps/SofosCity_Gym/scripts.pory"
	lock
# 231 "data/maps/SofosCity_Gym/scripts.pory"
	faceplayer
# 234 "data/maps/SofosCity_Gym/scripts.pory"
	goto_if_unset 0x55E, SofosCity_Gym_EventScript_Meneswo_2
# 234 "data/maps/SofosCity_Gym/scripts.pory"
	goto_if_unset 0x55F, SofosCity_Gym_EventScript_Meneswo_2
# 234 "data/maps/SofosCity_Gym/scripts.pory"
	goto_if_unset 0x560, SofosCity_Gym_EventScript_Meneswo_2
# 234 "data/maps/SofosCity_Gym/scripts.pory"
	goto_if_unset 0x561, SofosCity_Gym_EventScript_Meneswo_2
# 243 "data/maps/SofosCity_Gym/scripts.pory"
	goto_if_unset FLAG_HARD_MODE, SofosCity_Gym_EventScript_Meneswo_11
# 249 "data/maps/SofosCity_Gym/scripts.pory"
	goto SofosCity_Gym_EventScript_Meneswo_HardDifficulty
SofosCity_Gym_EventScript_Meneswo_10:
# 251 "data/maps/SofosCity_Gym/scripts.pory"
	release
	end

SofosCity_Gym_EventScript_Meneswo_2:
# 236 "data/maps/SofosCity_Gym/scripts.pory"
	speakername SofosCity_Gym_EventScript_Meneswo_Text_0
# 237 "data/maps/SofosCity_Gym/scripts.pory"
	msgbox SofosCity_Gym_EventScript_Meneswo_Text_1
# 238 "data/maps/SofosCity_Gym/scripts.pory"
	closemessage
# 239 "data/maps/SofosCity_Gym/scripts.pory"
	release
	end

SofosCity_Gym_EventScript_Meneswo_11:
# 245 "data/maps/SofosCity_Gym/scripts.pory"
	goto SofosCity_Gym_EventScript_Meneswo_NormalDifficulty
	goto SofosCity_Gym_EventScript_Meneswo_10


SofosCity_Gym_EventScript_Meneswo_NormalDifficulty::
# 257 "data/maps/SofosCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_MENESWO, SofosCity_Gym_Text_MeneswoIntro, SofosCity_Gym_Text_MeneswoDefeat, SofosCity_Gym_EventScript_Meneswo_DefeatedScript, NO_MUSIC
# 258 "data/maps/SofosCity_Gym/scripts.pory"
	speakername SofosCity_Gym_EventScript_Meneswo_Text_0
# 259 "data/maps/SofosCity_Gym/scripts.pory"
	msgbox SofosCity_Gym_EventScript_Meneswo_NormalDifficulty_Text_0
# 260 "data/maps/SofosCity_Gym/scripts.pory"
	closemessage
# 261 "data/maps/SofosCity_Gym/scripts.pory"
	release
	end


SofosCity_Gym_EventScript_Meneswo_HardDifficulty::
# 266 "data/maps/SofosCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_MENESWO_HARD, SofosCity_Gym_Text_MeneswoIntro, SofosCity_Gym_Text_MeneswoDefeat, SofosCity_Gym_EventScript_Meneswo_DefeatedScript, NO_MUSIC
# 267 "data/maps/SofosCity_Gym/scripts.pory"
	speakername SofosCity_Gym_EventScript_Meneswo_Text_0
# 268 "data/maps/SofosCity_Gym/scripts.pory"
	msgbox SofosCity_Gym_EventScript_Meneswo_NormalDifficulty_Text_0
# 269 "data/maps/SofosCity_Gym/scripts.pory"
	closemessage
# 270 "data/maps/SofosCity_Gym/scripts.pory"
	release
	end


SofosCity_Gym_EventScript_Meneswo_DefeatedScript::
# 284 "data/maps/SofosCity_Gym/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 285 "data/maps/SofosCity_Gym/scripts.pory"
	message SofosCity_Gym_EventScript_Meneswo_DefeatedScript_Text_0
# 286 "data/maps/SofosCity_Gym/scripts.pory"
	waitmessage
# 287 "data/maps/SofosCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 290 "data/maps/SofosCity_Gym/scripts.pory"
	setflag FLAG_BADGE04_GET
# 292 "data/maps/SofosCity_Gym/scripts.pory"
	settrainerflag TRAINER_SOFOSGYM_BROOKE
# 293 "data/maps/SofosCity_Gym/scripts.pory"
	settrainerflag TRAINER_SOFOSGYM_TYRIEN
# 294 "data/maps/SofosCity_Gym/scripts.pory"
	settrainerflag TRAINER_SOFOSGYM_SAPPHA
# 295 "data/maps/SofosCity_Gym/scripts.pory"
	settrainerflag TRAINER_SOFOSGYM_ARISTO
# 298 "data/maps/SofosCity_Gym/scripts.pory"
	speakername SofosCity_Gym_EventScript_Meneswo_Text_0
# 299 "data/maps/SofosCity_Gym/scripts.pory"
	msgbox SofosCity_Gym_EventScript_Meneswo_DefeatedScript_Text_1
# 300 "data/maps/SofosCity_Gym/scripts.pory"
	closemessage
# 303 "data/maps/SofosCity_Gym/scripts.pory"
	giveitem ITEM_TM53
# 304 "data/maps/SofosCity_Gym/scripts.pory"
	speakername SofosCity_Gym_EventScript_Meneswo_Text_0
# 305 "data/maps/SofosCity_Gym/scripts.pory"
	msgbox SofosCity_Gym_EventScript_Meneswo_DefeatedScript_Text_2
# 306 "data/maps/SofosCity_Gym/scripts.pory"
	closemessage
# 309 "data/maps/SofosCity_Gym/scripts.pory"
	delay 20
# 310 "data/maps/SofosCity_Gym/scripts.pory"
	completequest QUEST_GYM_4
# 311 "data/maps/SofosCity_Gym/scripts.pory"
	delay 20
# 312 "data/maps/SofosCity_Gym/scripts.pory"
	startquest QUEST_GYM_5
# 315 "data/maps/SofosCity_Gym/scripts.pory"
	setvar VAR_RANIA_STATE, 7
# 317 "data/maps/SofosCity_Gym/scripts.pory"
	release
	end


SofosCity_Gym_EventScript_GymStatue_Text_0:
# 12 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Sofos City Pokémon Gym\p"
	.string "Recent Victors: Rania, {PLAYER}$"

SofosCity_Gym_EventScript_GymStatue_Text_1:
# 16 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Sofos City Pokémon Gym\p"
	.string "Recent Victors: Rania$"

SofosCity_Gym_EventScript_GymMan_Text_0:
# 27 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Gym Guide$"

SofosCity_Gym_EventScript_GymMan_Text_1:
# 30 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Incredible! You're a rising star! Keep it\n"
	.string "up, future Champ!$"

SofosCity_Gym_EventScript_GymMan_Text_2:
# 34 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Welcome to the Sofos City Gym!\p"
	.string "Meneswo, the Gym Leader, fuses the raw\n"
	.string "power of Fighting-type Pokémon and the\l"
	.string "intelligence of Psychic-type Pokémon.\l"
	.string "To win, you'll need a master strategy!$"

SofosCity_Gym_Trigger_GauntletWarning_Text_0:
# 55 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Wait there, challenger! If you leave\n"
	.string "before completing the Trainer Gauntlet,\l"
	.string "{COLOR RED}all Trainer progress will reset{COLOR DARK_GRAY}. Do you\l"
	.string "still want to leave?$"

SofosCity_Gym_Trigger_GauntletWarning_Text_1:
# 61 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Phew! Please step up and continue the\n"
	.string "challenge.$"

SofosCity_Gym_Trigger_GauntletWarning_Text_2:
# 73 "data/maps/SofosCity_Gym/scripts.pory"
	.string "That's too bad. Please come back soon,\n"
	.string "with a new strategy to win!$"

SofosCity_Gym_Trigger_GauntletWarning_Text_3:
# 86 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Hold your Ponytas! Before you enter\n"
	.string "the Gym, I have to let you know the\l"
	.string "rules.\p"
	.string "This Gym is unique, as it is a {COLOR RED}Trainer\n"
	.string "Gauntlet{COLOR DARK_GRAY}. Once you enter, you {COLOR RED}cannot\l"
	.string "leave until all Trainers and the Gym\l"
	.string "Leader are defeated{COLOR DARK_GRAY}. If you try to\l"
	.string "leave, {COLOR RED}all Trainers will reset{COLOR DARK_GRAY}.\p"
	.string "Are you prepared for the challenge?$"

SofosCity_Gym_Trigger_GauntletWarning_Text_4:
# 92 "data/maps/SofosCity_Gym/scripts.pory"
	.string "That's alright, it's certainly an\n"
	.string "intimidating challenge. {COLOR GREEN}Meneswo{COLOR DARK_GRAY} says\l"
	.string "it's the ultimate test of strategy!\p"
	.string "Come back when you're ready to face\n"
	.string "this {COLOR RED}Trainer Gauntlet{COLOR DARK_GRAY}.$"

SofosCity_Gym_Trigger_GauntletWarning_Text_5:
# 104 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Great! Good luck, and remember to heal\n"
	.string "up with Potions and strategize your\l"
	.string "moves!$"

SofosCity_Gym_EventScript_PokemonBusyTraining_Text_0:
# 127 "data/maps/SofosCity_Gym/scripts.pory"
	.string "The Pokémon is too busy training to\n"
	.string "notice you!$"

SofosCity_Gym_EventScript_PokemonBusyLearning_Text_0:
# 135 "data/maps/SofosCity_Gym/scripts.pory"
	.string "The Pokémon is too deep in thought to\n"
	.string "notice you.$"

SofosCity_Gym_EventScript_Mienfoo_Text_0:
# 145 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Mienfoo$"

SofosCity_Gym_EventScript_Mienfoo_Text_1:
# 147 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Hiaah!$"

SofosCity_Gym_EventScript_Mienfoo_Text_2:
# 150 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Mienfoo is perfectly balanced on one\n"
	.string "foot!$"

SofosCity_Gym_EventScript_Trainer_SofosGym_Brooke_Text_0:
# 159 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Brooke$"

SofosCity_Gym_EventScript_Trainer_SofosGym_Brooke_Text_1:
# 160 "data/maps/SofosCity_Gym/scripts.pory"
	.string "The left half of this Gym is for\n"
	.string "physical training, and the right half is\l"
	.string "for mental training. It's perfectly\l"
	.string "balanced.$"

SofosCity_Gym_EventScript_Trainer_SofosGym_Tyrien_Text_0:
# 177 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Tyrien$"

SofosCity_Gym_EventScript_Trainer_SofosGym_Tyrien_Text_1:
# 178 "data/maps/SofosCity_Gym/scripts.pory"
	.string "This side of the Gym is for raw power!\n"
	.string "It's perfect for me and my Gurdurr!$"

SofosCity_Gym_EventScript_Trainer_SofosGym_Sappha_Text_0:
# 195 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Sappha$"

SofosCity_Gym_EventScript_Trainer_SofosGym_Sappha_Text_1:
# 196 "data/maps/SofosCity_Gym/scripts.pory"
	.string "I'm studying the movement of celestial\n"
	.string "bodies. We can see through the\l"
	.string "telescopes thanks to gaps in the\l"
	.string "ceiling!$"

SofosCity_Gym_EventScript_Trainer_SofosGym_Aristo_Text_0:
# 213 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Aristo$"

SofosCity_Gym_EventScript_Trainer_SofosGym_Aristo_Text_1:
# 214 "data/maps/SofosCity_Gym/scripts.pory"
	.string "My Oranguru is able to read books\n"
	.string "written in Ancient Ilian script. It's\l"
	.string "helping me translate lost texts.$"

SofosCity_Gym_EventScript_Meneswo_Text_0:
# 236 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Meneswo$"

SofosCity_Gym_EventScript_Meneswo_Text_1:
# 237 "data/maps/SofosCity_Gym/scripts.pory"
	.string "I've been watching, you know! You still\n"
	.string "have some Trainers left to battle\l"
	.string "before me.\p"
	.string "After beating the {COLOR GREEN}4 Gym Trainers{COLOR DARK_GRAY}, come\n"
	.string "here and face me. Your strategy must be\l"
	.string "perfect!$"

SofosCity_Gym_EventScript_Meneswo_NormalDifficulty_Text_0:
# 259 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Your strategic prowess in battle is\n"
	.string "unmatched! I know you'll go far.$"

SofosCity_Gym_EventScript_Meneswo_DefeatedScript_Text_0:
# 285 "data/maps/SofosCity_Gym/scripts.pory"
	.string "{PLAYER} received the Wisdom Badge\n"
	.string "from Meneswo.$"

SofosCity_Gym_EventScript_Meneswo_DefeatedScript_Text_1:
# 299 "data/maps/SofosCity_Gym/scripts.pory"
	.string "The Widsom Badge represents your\n"
	.string "ability to create plans in battle,\l"
	.string "rather than rushing head-first into\l"
	.string "danger. It also allows you to use the {COLOR GREEN}HM\l"
	.string "Surf{COLOR DARK_GRAY} outside of battle.\p"
	.string "Right, take this with you!$"

SofosCity_Gym_EventScript_Meneswo_DefeatedScript_Text_2:
# 305 "data/maps/SofosCity_Gym/scripts.pory"
	.string "That TM contains the move {COLOR GREEN}Power-Up\n"
	.string "Punch{COLOR DARK_GRAY}, which boosts the Attack stat\l"
	.string "while dealing damage. Talk about\l"
	.string "strategy!\p"
	.string "You should be able to handle the {COLOR GREEN}Seas\n"
	.string "of Ilios{COLOR DARK_GRAY} with your Pokémon. Your next\l"
	.string "badge is {COLOR GREEN}east{COLOR DARK_GRAY}, past Marmaro Island to\l"
	.string "the sister {COLOR GREEN}island of Myrrini{COLOR DARK_GRAY}.$"

SofosCity_Gym_Text_Trainer_SofosGym_BrookeIntro::
# 165 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Come on! We're about to hit our personal\n"
	.string "lift record!$"

SofosCity_Gym_Text_Trainer_SofosGym_BrookeDefeat::
# 169 "data/maps/SofosCity_Gym/scripts.pory"
	.string "So close!$"

SofosCity_Gym_Text_Trainer_SofosGym_TyrienIntro::
# 183 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Let's go! We're unstoppable!$"

SofosCity_Gym_Text_Trainer_SofosGym_TyrienDefeat::
# 187 "data/maps/SofosCity_Gym/scripts.pory"
	.string "How'd you do that?!$"

SofosCity_Gym_Text_Trainer_SofosGym_SapphaIntro::
# 201 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Hm, listen to them brawling and shouting\n"
	.string "over there. This side of the Gym is for\l"
	.string "those of us with... sharper minds.$"

SofosCity_Gym_Text_Trainer_SofosGym_SapphaDefeat::
# 205 "data/maps/SofosCity_Gym/scripts.pory"
	.string "I need to read more!$"

SofosCity_Gym_Text_Trainer_SofosGym_AristoIntro::
# 219 "data/maps/SofosCity_Gym/scripts.pory"
	.string "...oh? I didn't hear you approach. You\n"
	.string "want a battle, huh? I suppose my\l"
	.string "Oranguru and I could use a break from\l"
	.string "our books!$"

SofosCity_Gym_Text_Trainer_SofosGym_AristoDefeat::
# 223 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Such magnificent moves!$"

SofosCity_Gym_Text_MeneswoIntro::
# 273 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Oh, it looks like you've completed my\n"
	.string "Trainer Gauntlet! Only truly impressive\l"
	.string "Trainers are able to do that and still\l"
	.string "approach me.\p"
	.string "After seeing your moves in Satyr's Lair,\n"
	.string "I've been wanting to face you in battle.\l"
	.string "Let's see if you're all you're cracked up\l"
	.string "to be!$"

SofosCity_Gym_Text_MeneswoDefeat::
# 277 "data/maps/SofosCity_Gym/scripts.pory"
	.string "Incredible! Your strategy, your\n"
	.string "combination of power and mind... it's\l"
	.string "fantastic!$"

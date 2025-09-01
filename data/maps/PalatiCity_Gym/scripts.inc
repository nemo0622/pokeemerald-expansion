PalatiCity_Gym_MapScripts::
# 2 "data/maps/PalatiCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalatiCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PalatiCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PalatiCity_Gym/scripts.pory"
	setflashlevel 1
	return


PalatiGym_EventScript_Torch1::
# 9 "data/maps/PalatiCity_Gym/scripts.pory"
	lock
# 10 "data/maps/PalatiCity_Gym/scripts.pory"
	goto_if_set FLAG_TEMP_5, PalatiGym_EventScript_Torch1_2
# 17 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiGym_EventScript_Torch1_Text_1
# 18 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
# 19 "data/maps/PalatiCity_Gym/scripts.pory"
	setflag FLAG_TEMP_5
PalatiGym_EventScript_Torch1_1:
# 21 "data/maps/PalatiCity_Gym/scripts.pory"
	release
	end

PalatiGym_EventScript_Torch1_2:
# 12 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiGym_EventScript_Torch1_Text_0
# 13 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
	goto PalatiGym_EventScript_Torch1_1


PalatiGym_EventScript_Torch2::
# 27 "data/maps/PalatiCity_Gym/scripts.pory"
	lock
# 28 "data/maps/PalatiCity_Gym/scripts.pory"
	goto_if_set FLAG_TEMP_6, PalatiGym_EventScript_Torch2_2
# 35 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiGym_EventScript_Torch1_Text_1
# 36 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
# 37 "data/maps/PalatiCity_Gym/scripts.pory"
	setflag FLAG_TEMP_6
PalatiGym_EventScript_Torch2_1:
# 39 "data/maps/PalatiCity_Gym/scripts.pory"
	release
	end

PalatiGym_EventScript_Torch2_2:
# 30 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiGym_EventScript_Torch1_Text_0
# 31 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
	goto PalatiGym_EventScript_Torch2_1


PalatiGym_EventScript_Torch3::
# 45 "data/maps/PalatiCity_Gym/scripts.pory"
	lock
# 46 "data/maps/PalatiCity_Gym/scripts.pory"
	goto_if_set FLAG_TEMP_7, PalatiGym_EventScript_Torch3_2
# 53 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiGym_EventScript_Torch1_Text_1
# 54 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
# 55 "data/maps/PalatiCity_Gym/scripts.pory"
	setflag FLAG_TEMP_7
PalatiGym_EventScript_Torch3_1:
# 57 "data/maps/PalatiCity_Gym/scripts.pory"
	release
	end

PalatiGym_EventScript_Torch3_2:
# 48 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiGym_EventScript_Torch1_Text_0
# 49 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
	goto PalatiGym_EventScript_Torch3_1


PalatiGym_EventScript_GymMan::
# 63 "data/maps/PalatiCity_Gym/scripts.pory"
	lock
# 64 "data/maps/PalatiCity_Gym/scripts.pory"
	faceplayer
# 65 "data/maps/PalatiCity_Gym/scripts.pory"
	speakername PalatiGym_EventScript_GymMan_Text_0
# 66 "data/maps/PalatiCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, PalatiGym_EventScript_GymMan_2
# 72 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiGym_EventScript_GymMan_Text_2
PalatiGym_EventScript_GymMan_1:
# 74 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
# 75 "data/maps/PalatiCity_Gym/scripts.pory"
	release
	end

PalatiGym_EventScript_GymMan_2:
# 68 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiGym_EventScript_GymMan_Text_1
	goto PalatiGym_EventScript_GymMan_1


PalatiGym_EventScript_GymManWarnsPlayer::
# 81 "data/maps/PalatiCity_Gym/scripts.pory"
	lock
# 82 "data/maps/PalatiCity_Gym/scripts.pory"
	faceplayer
# 83 "data/maps/PalatiCity_Gym/scripts.pory"
	emote 1, EMOTE_EXCLAM
# 84 "data/maps/PalatiCity_Gym/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 85 "data/maps/PalatiCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 86 "data/maps/PalatiCity_Gym/scripts.pory"
	waitmovement 0
# 87 "data/maps/PalatiCity_Gym/scripts.pory"
	speakername PalatiGym_EventScript_GymMan_Text_0
# 88 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiGym_EventScript_GymManWarnsPlayer_Text_0
# 89 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
# 90 "data/maps/PalatiCity_Gym/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 91 "data/maps/PalatiCity_Gym/scripts.pory"
	waitmovement 0
# 92 "data/maps/PalatiCity_Gym/scripts.pory"
	setflag FLAG_PALATI_GYM_INTRODUCED
# 93 "data/maps/PalatiCity_Gym/scripts.pory"
	releaseall
	end


PalatiCity_Gym_EventScript_Trainer_PalatiGym_Mukhin::
# 99 "data/maps/PalatiCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PALATIGYM_MUKHIN, PalatiCity_Gym_Text_Trainer_PalatiGym_MukhinIntro, PalatiCity_Gym_Text_Trainer_PalatiGym_MukhinDefeat
# 100 "data/maps/PalatiCity_Gym/scripts.pory"
	speakername PalatiCity_Gym_EventScript_Trainer_PalatiGym_Mukhin_Text_0
# 101 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiCity_Gym_EventScript_Trainer_PalatiGym_Mukhin_Text_1
# 102 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
# 103 "data/maps/PalatiCity_Gym/scripts.pory"
	release
	end


PalatiCity_Gym_EventScript_Trainer_PalatiGym_Raimund::
# 117 "data/maps/PalatiCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PALATIGYM_RAIMUND, PalatiCity_Gym_Text_Trainer_PalatiGym_RaimundIntro, PalatiCity_Gym_Text_Trainer_PalatiGym_RaimundDefeat
# 118 "data/maps/PalatiCity_Gym/scripts.pory"
	speakername PalatiCity_Gym_EventScript_Trainer_PalatiGym_Raimund_Text_0
# 119 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiCity_Gym_EventScript_Trainer_PalatiGym_Raimund_Text_1
# 120 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
# 121 "data/maps/PalatiCity_Gym/scripts.pory"
	release
	end


PalatiCity_Gym_EventScript_Trainer_PalatiGym_Melina::
# 135 "data/maps/PalatiCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PALATIGYM_MELINA, PalatiCity_Gym_Text_Trainer_PalatiGym_MelinaIntro, PalatiCity_Gym_Text_Trainer_PalatiGym_MelinaDefeat
# 136 "data/maps/PalatiCity_Gym/scripts.pory"
	speakername PalatiCity_Gym_EventScript_Trainer_PalatiGym_Melina_Text_0
# 137 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiCity_Gym_EventScript_Trainer_PalatiGym_Melina_Text_1
# 138 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
# 139 "data/maps/PalatiCity_Gym/scripts.pory"
	release
	end


PalatiCity_Gym_EventScript_Trainer_PalatiGym_Julie::
# 153 "data/maps/PalatiCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PALATIGYM_JULIE, PalatiCity_Gym_Text_Trainer_PalatiGym_JulieIntro, PalatiCity_Gym_Text_Trainer_PalatiGym_JulieDefeat
# 154 "data/maps/PalatiCity_Gym/scripts.pory"
	speakername PalatiCity_Gym_EventScript_Trainer_PalatiGym_Julie_Text_0
# 155 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiCity_Gym_EventScript_Trainer_PalatiGym_Julie_Text_1
# 156 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
# 157 "data/maps/PalatiCity_Gym/scripts.pory"
	release
	end


PalatiCity_Gym_EventScript_Trainer_PalatiGym_Colette::
# 171 "data/maps/PalatiCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PALATIGYM_COLETTE, PalatiCity_Gym_Text_Trainer_PalatiGym_ColetteIntro, PalatiCity_Gym_Text_Trainer_PalatiGym_ColetteDefeat
# 172 "data/maps/PalatiCity_Gym/scripts.pory"
	speakername PalatiCity_Gym_EventScript_Trainer_PalatiGym_Colette_Text_0
# 173 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiCity_Gym_EventScript_Trainer_PalatiGym_Colette_Text_1
# 174 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
# 175 "data/maps/PalatiCity_Gym/scripts.pory"
	release
	end


PalatiCity_Gym_EventScript_Toucannon::
# 191 "data/maps/PalatiCity_Gym/scripts.pory"
	lock
# 192 "data/maps/PalatiCity_Gym/scripts.pory"
	faceplayer
# 193 "data/maps/PalatiCity_Gym/scripts.pory"
	speakername PalatiCity_Gym_EventScript_Toucannon_Text_0
# 194 "data/maps/PalatiCity_Gym/scripts.pory"
	playmoncry SPECIES_TOUCANNON, CRY_MODE_NORMAL
# 195 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiCity_Gym_EventScript_Toucannon_Text_1
# 196 "data/maps/PalatiCity_Gym/scripts.pory"
	waitmoncry
# 197 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
# 198 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiCity_Gym_EventScript_Toucannon_Text_2
# 199 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
# 200 "data/maps/PalatiCity_Gym/scripts.pory"
	release
	end


PalatiCity_Gym_EventScript_Rhadine::
# 206 "data/maps/PalatiCity_Gym/scripts.pory"
	lock
# 207 "data/maps/PalatiCity_Gym/scripts.pory"
	faceplayer
# 209 "data/maps/PalatiCity_Gym/scripts.pory"
	goto_if_unset FLAG_TEMP_5, PalatiCity_Gym_EventScript_Rhadine_2
# 209 "data/maps/PalatiCity_Gym/scripts.pory"
	goto_if_unset FLAG_TEMP_6, PalatiCity_Gym_EventScript_Rhadine_2
# 209 "data/maps/PalatiCity_Gym/scripts.pory"
	goto_if_unset FLAG_TEMP_7, PalatiCity_Gym_EventScript_Rhadine_2
# 218 "data/maps/PalatiCity_Gym/scripts.pory"
	goto_if_unset FLAG_HARD_MODE, PalatiCity_Gym_EventScript_Rhadine_9
# 224 "data/maps/PalatiCity_Gym/scripts.pory"
	goto PalatiCity_Gym_EventScript_Rhadine_HardDifficulty
PalatiCity_Gym_EventScript_Rhadine_8:
# 226 "data/maps/PalatiCity_Gym/scripts.pory"
	release
	end

PalatiCity_Gym_EventScript_Rhadine_2:
# 211 "data/maps/PalatiCity_Gym/scripts.pory"
	speakername PalatiCity_Gym_EventScript_Rhadine_Text_0
# 212 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiCity_Gym_EventScript_Rhadine_Text_1
# 213 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
# 214 "data/maps/PalatiCity_Gym/scripts.pory"
	release
	end

PalatiCity_Gym_EventScript_Rhadine_9:
# 220 "data/maps/PalatiCity_Gym/scripts.pory"
	goto PalatiCity_Gym_EventScript_Rhadine_NormalDifficulty
	goto PalatiCity_Gym_EventScript_Rhadine_8


PalatiCity_Gym_EventScript_Rhadine_NormalDifficulty::
# 232 "data/maps/PalatiCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_RHADINE, PalatiCity_Gym_Text_RhadineIntro, PalatiCity_Gym_Text_RhadineDefeat, PalatiCity_Gym_EventScript_Rhadine_DefeatedScript, NO_MUSIC
# 233 "data/maps/PalatiCity_Gym/scripts.pory"
	speakername PalatiCity_Gym_EventScript_Rhadine_Text_0
# 234 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiCity_Gym_EventScript_Rhadine_NormalDifficulty_Text_0
# 235 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
# 236 "data/maps/PalatiCity_Gym/scripts.pory"
	release
	end


PalatiCity_Gym_EventScript_Rhadine_HardDifficulty::
# 241 "data/maps/PalatiCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_RHADINE_HARD, PalatiCity_Gym_Text_RhadineIntro, PalatiCity_Gym_Text_RhadineDefeat, PalatiCity_Gym_EventScript_Rhadine_DefeatedScript, NO_MUSIC
# 242 "data/maps/PalatiCity_Gym/scripts.pory"
	speakername PalatiCity_Gym_EventScript_Rhadine_Text_0
# 243 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiCity_Gym_EventScript_Rhadine_NormalDifficulty_Text_0
# 244 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
# 245 "data/maps/PalatiCity_Gym/scripts.pory"
	release
	end


PalatiCity_Gym_EventScript_Rhadine_DefeatedScript::
# 259 "data/maps/PalatiCity_Gym/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 260 "data/maps/PalatiCity_Gym/scripts.pory"
	message PalatiCity_Gym_EventScript_Rhadine_DefeatedScript_Text_0
# 261 "data/maps/PalatiCity_Gym/scripts.pory"
	waitmessage
# 262 "data/maps/PalatiCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 265 "data/maps/PalatiCity_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 267 "data/maps/PalatiCity_Gym/scripts.pory"
	settrainerflag TRAINER_PALATIGYM_MUKHIN
# 268 "data/maps/PalatiCity_Gym/scripts.pory"
	settrainerflag TRAINER_PALATIGYM_RAIMUND
# 269 "data/maps/PalatiCity_Gym/scripts.pory"
	settrainerflag TRAINER_PALATIGYM_MELINA
# 270 "data/maps/PalatiCity_Gym/scripts.pory"
	settrainerflag TRAINER_PALATIGYM_JULIE
# 271 "data/maps/PalatiCity_Gym/scripts.pory"
	settrainerflag TRAINER_PALATIGYM_COLETTE
# 274 "data/maps/PalatiCity_Gym/scripts.pory"
	speakername PalatiCity_Gym_EventScript_Rhadine_Text_0
# 275 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiCity_Gym_EventScript_Rhadine_DefeatedScript_Text_1
# 276 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
# 279 "data/maps/PalatiCity_Gym/scripts.pory"
	giveitem ITEM_TM_FLAMETHROWER
# 280 "data/maps/PalatiCity_Gym/scripts.pory"
	speakername PalatiCity_Gym_EventScript_Rhadine_Text_0
# 281 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiCity_Gym_EventScript_Rhadine_DefeatedScript_Text_2
# 282 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
# 283 "data/maps/PalatiCity_Gym/scripts.pory"
	emote OBJ_EVENT_ID_PLAYER, EMOTE_EXCLAM
# 284 "data/maps/PalatiCity_Gym/scripts.pory"
	speakername PalatiCity_Gym_EventScript_Rhadine_Text_0
# 285 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiCity_Gym_EventScript_Rhadine_DefeatedScript_Text_3
# 286 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
# 287 "data/maps/PalatiCity_Gym/scripts.pory"
	delay 5
# 288 "data/maps/PalatiCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 289 "data/maps/PalatiCity_Gym/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 290 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiCity_Gym_EventScript_Rhadine_DefeatedScript_Text_4
# 291 "data/maps/PalatiCity_Gym/scripts.pory"
	waitmovement 0
# 292 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
# 293 "data/maps/PalatiCity_Gym/scripts.pory"
	delay 5
# 294 "data/maps/PalatiCity_Gym/scripts.pory"
	speakername PalatiCity_Gym_EventScript_Rhadine_Text_0
# 295 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiCity_Gym_EventScript_Rhadine_DefeatedScript_Text_5
# 296 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
# 299 "data/maps/PalatiCity_Gym/scripts.pory"
	delay 20
# 300 "data/maps/PalatiCity_Gym/scripts.pory"
	completequest QUEST_GYM_7
# 301 "data/maps/PalatiCity_Gym/scripts.pory"
	setflag FLAG_CHIMERA_WEATHER_ACTIVE
# 302 "data/maps/PalatiCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_RHADINE_PALATI_CITY
# 303 "data/maps/PalatiCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_ACROPOLIS_LEGENDARY_DOGS
# 304 "data/maps/PalatiCity_Gym/scripts.pory"
	setflag FLAG_HIDE_SOFOS_ACROPOLIS_NPCS
# 305 "data/maps/PalatiCity_Gym/scripts.pory"
	setflag FLAG_HIDE_ACROPOLIS_LEGENDARY_BEASTS
# 306 "data/maps/PalatiCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_ACROPOLIS_CHIMERA_MEMBERS
# 307 "data/maps/PalatiCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 309 "data/maps/PalatiCity_Gym/scripts.pory"
	warp MAP_PALATI_CITY, 41, 37
# 310 "data/maps/PalatiCity_Gym/scripts.pory"
	waitstate
# 312 "data/maps/PalatiCity_Gym/scripts.pory"
	release
	end


PalatiCity_Gym_EventScript_GymStatue::
# 318 "data/maps/PalatiCity_Gym/scripts.pory"
	lock
# 319 "data/maps/PalatiCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, PalatiCity_Gym_EventScript_GymStatue_2
# 325 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiCity_Gym_EventScript_GymStatue_Text_1
PalatiCity_Gym_EventScript_GymStatue_1:
# 327 "data/maps/PalatiCity_Gym/scripts.pory"
	closemessage
# 328 "data/maps/PalatiCity_Gym/scripts.pory"
	release
	end

PalatiCity_Gym_EventScript_GymStatue_2:
# 321 "data/maps/PalatiCity_Gym/scripts.pory"
	msgbox PalatiCity_Gym_EventScript_GymStatue_Text_0
	goto PalatiCity_Gym_EventScript_GymStatue_1


PalatiGym_EventScript_Torch1_Text_0:
# 12 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "The torch is glowing brightly, pulsing\n"
	.string "with heat.$"

PalatiGym_EventScript_Torch1_Text_1:
# 17 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "It's one of Rhadine's Torches!\p"
	.string "You took an Ember from the torch. To\n"
	.string "face Rhadine, Embers from {COLOR GREEN}all 3 torches{COLOR DARK_GRAY}\l"
	.string "must be taken.$"

PalatiGym_EventScript_GymMan_Text_0:
# 65 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Gym Guide$"

PalatiGym_EventScript_GymMan_Text_1:
# 68 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Incredible! You're a rising star! Keep it\n"
	.string "up, future Champ!$"

PalatiGym_EventScript_GymMan_Text_2:
# 72 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Welcome to the Palati City Gym!\p"
	.string "Rhadine, the Gym Leader, uses {COLOR GREEN}Fire and\n"
	.string "Flying-type{COLOR DARK_GRAY} Pokémon. She only accepts\l"
	.string "challengers who bring her {COLOR GREEN}fresh Embers\l"
	.string "from all 3 torches around the Gym{COLOR DARK_GRAY}. If\l"
	.string "you leave the Gym, the Embers will {COLOR RED}burn\l"
	.string "out{COLOR DARK_GRAY}, and you'll have to collect them\l"
	.string "again.$"

PalatiGym_EventScript_GymManWarnsPlayer_Text_0:
# 88 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Hold up! You need to know how this Gym\n"
	.string "works first!\p"
	.string "{COLOR GREEN}Rhadine{COLOR DARK_GRAY} only accepts Trainers who can\n"
	.string "follow their hearts through the maze.\l"
	.string "To challenge her, you must find {COLOR GREEN}3\l"
	.string "torches{COLOR DARK_GRAY} around the Gym and {COLOR GREEN}collect\l"
	.string "Embers{COLOR DARK_GRAY} from them.\p"
	.string "Be careful though! If you leave the\n"
	.string "Gym, your Embers will {COLOR RED}burn out{COLOR DARK_GRAY}, and\l"
	.string "you'll have to collect them all again. If\l"
	.string "you're not prepared, maybe you could\l"
	.string "{COLOR GREEN}explore Kaptara Island{COLOR DARK_GRAY} and do some\l"
	.string "training. Good luck!$"

PalatiCity_Gym_EventScript_Trainer_PalatiGym_Mukhin_Text_0:
# 100 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Mukhin$"

PalatiCity_Gym_EventScript_Trainer_PalatiGym_Mukhin_Text_1:
# 101 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Supposedly, there was once a labrynth\n"
	.string "on Kaptara Island which was home to a\l"
	.string "horrifying, mutated Tauros. But that's\l"
	.string "all a myth.$"

PalatiCity_Gym_EventScript_Trainer_PalatiGym_Raimund_Text_0:
# 118 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Raimund$"

PalatiCity_Gym_EventScript_Trainer_PalatiGym_Raimund_Text_1:
# 119 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "There are arrows on the ground to mark\n"
	.string "passage entrances and exits. That\l"
	.string "helps me get around!$"

PalatiCity_Gym_EventScript_Trainer_PalatiGym_Melina_Text_0:
# 136 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Melina$"

PalatiCity_Gym_EventScript_Trainer_PalatiGym_Melina_Text_1:
# 137 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "If you leave the Gym, you'll need to\n"
	.string "revisit each of Rhadine's Torches and\l"
	.string "collect Embers again.$"

PalatiCity_Gym_EventScript_Trainer_PalatiGym_Julie_Text_0:
# 154 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Julie$"

PalatiCity_Gym_EventScript_Trainer_PalatiGym_Julie_Text_1:
# 155 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Rhadine only challenges Trainers who\n"
	.string "can collect Embers from all around the\l"
	.string "Gym. It can be quite the challenge!$"

PalatiCity_Gym_EventScript_Trainer_PalatiGym_Colette_Text_0:
# 172 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Colette$"

PalatiCity_Gym_EventScript_Trainer_PalatiGym_Colette_Text_1:
# 173 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Rhadine waits for Trainers at the\n"
	.string "deepest part of the maze. She's super\l"
	.string "tough, so you'd better be ready!$"

PalatiCity_Gym_EventScript_Toucannon_Text_0:
# 193 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Toucannon$"

PalatiCity_Gym_EventScript_Toucannon_Text_1:
# 195 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Kyaah!$"

PalatiCity_Gym_EventScript_Toucannon_Text_2:
# 198 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Rhadine's Toucannon is resting on a\n"
	.string "nest, and Pikipek chirps are coming from\l"
	.string "behind it. Is a whole family of birds\l"
	.string "living here?$"

PalatiCity_Gym_EventScript_Rhadine_Text_0:
# 211 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Rhadine$"

PalatiCity_Gym_EventScript_Rhadine_Text_1:
# 212 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Welcome to the Palati City Gym! I'm\n"
	.string "Rhadine, the Gym Leader.\p"
	.string "Before you challenge me, you must\n"
	.string "collect {COLOR GREEN}Embers from the 3 torches\l"
	.string "around the Gym{COLOR DARK_GRAY}. That'll prove your\l"
	.string "resolve!$"

PalatiCity_Gym_EventScript_Rhadine_NormalDifficulty_Text_0:
# 234 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Kehehe, your flames burn just as hot as\n"
	.string "mine!$"

PalatiCity_Gym_EventScript_Rhadine_DefeatedScript_Text_0:
# 260 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "{PLAYER} received the Passion Badge\n"
	.string "from Rhadine.$"

PalatiCity_Gym_EventScript_Rhadine_DefeatedScript_Text_1:
# 275 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Kehehe, even in here, the Passion Badge\n"
	.string "shines like the sun! With this\l"
	.string "achievement, you'll be able to use the\l"
	.string "{COLOR GREEN}HM Fly{COLOR DARK_GRAY} to cross the region in an\l"
	.string "instant.\p"
	.string "Before you go, please, take this!$"

PalatiCity_Gym_EventScript_Rhadine_DefeatedScript_Text_2:
# 281 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "That TM contains the move\n"
	.string "{COLOR GREEN}Flamethrower{COLOR DARK_GRAY}! It's one of the most\l"
	.string "reliable, powerful Fire-type moves a\l"
	.string "Pokémon can learn.\p"
	.string "Normally, I'd send Trainers on their way\n"
	.string "to the 8th Gym, but the Gym Leader has\l"
	.string "gone missing. No, that's not quite right.\l"
	.string "Euterpe told me what happened on\l"
	.string "{COLOR GREEN}Myrrini Island{COLOR DARK_GRAY}. {COLOR RED}Kalliope{COLOR DARK_GRAY}, the 8th Gym\l"
	.string "Leader, is the {COLOR RED}leader of Team Chimera{COLOR DARK_GRAY}.\p"
	.string "To tell the truth, I've been hearing\n"
	.string "about you from the other Gym Leaders,\l"
	.string "{PLAYER}.$"

PalatiCity_Gym_EventScript_Rhadine_DefeatedScript_Text_3:
# 285 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Ehehe, come now, it's not that\n"
	.string "surprising! You've been sweeping\l"
	.string "through the Gyms and teaching Team\l"
	.string "Chimera lessons as you go. How could I\l"
	.string "NOT hear about you?\p"
	.string "Us Gym Leaders have been planning a way\n"
	.string "to {COLOR GREEN}strike back against Team Chimera{COLOR DARK_GRAY}. We\l"
	.string "have to stop them before their plans\l"
	.string "come to fruition, and we could use your\l"
	.string "help! We'll surround them at Areios\l"
	.string "Hideo-$"

PalatiCity_Gym_EventScript_Rhadine_DefeatedScript_Text_4:
# 290 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "BA-BOOOM!!!$"

PalatiCity_Gym_EventScript_Rhadine_DefeatedScript_Text_5:
# 295 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Was that... {PLAYER}, that was a\n"
	.string "thunderclap! But that can only mean...\p"
	.string "Quick! Come with me!$"

PalatiCity_Gym_EventScript_GymStatue_Text_0:
# 321 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Palati City Pokémon Gym\p"
	.string "Recent Victors: Rania, {PLAYER}$"

PalatiCity_Gym_EventScript_GymStatue_Text_1:
# 325 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Palati City Pokémon Gym\p"
	.string "Recent Victors: Rania$"

PalatiCity_Gym_Text_Trainer_PalatiGym_MukhinIntro::
# 106 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "They say this Gym is based on a\n"
	.string "legendary labrynth. I'm legendarily\l"
	.string "lost!$"

PalatiCity_Gym_Text_Trainer_PalatiGym_MukhinDefeat::
# 110 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Uh oh!$"

PalatiCity_Gym_Text_Trainer_PalatiGym_RaimundIntro::
# 124 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "I found this nice little corner to sit\n"
	.string "in. I'll wait here until someone shows me\l"
	.string "the way out!$"

PalatiCity_Gym_Text_Trainer_PalatiGym_RaimundDefeat::
# 128 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Ah, I remember now!$"

PalatiCity_Gym_Text_Trainer_PalatiGym_MelinaIntro::
# 142 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Oh, you found one of Rhadine's Torches,\n"
	.string "too!$"

PalatiCity_Gym_Text_Trainer_PalatiGym_MelinaDefeat::
# 146 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "My Ember! It burnt out!$"

PalatiCity_Gym_Text_Trainer_PalatiGym_JulieIntro::
# 160 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "This is the end of this side of the maze.\n"
	.string "At least another torch is here!$"

PalatiCity_Gym_Text_Trainer_PalatiGym_JulieDefeat::
# 164 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Where do I go from here?$"

PalatiCity_Gym_Text_Trainer_PalatiGym_ColetteIntro::
# 178 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "You'll need this torch to battle\n"
	.string "Rhadine. Show me you deserve it!$"

PalatiCity_Gym_Text_Trainer_PalatiGym_ColetteDefeat::
# 182 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Fine, fine, you can take an Ember.$"

PalatiCity_Gym_Text_RhadineIntro::
# 248 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Yes, I can feel the heat radiating from\n"
	.string "you. You've collected Embers from all 3\l"
	.string "torches and completed the labrynth!\p"
	.string "I'm Rhadine, Muse of Passion and\n"
	.string "Freedom. I only accept challenges from\l"
	.string "the most driven Trainers, and here you\l"
	.string "are, shining before me! Show me the love\l"
	.string "you share with your Pokémon!$"

PalatiCity_Gym_Text_RhadineDefeat::
# 252 "data/maps/PalatiCity_Gym/scripts.pory"
	.string "Beautiful! I'd expect nothing less from\n"
	.string "you!$"

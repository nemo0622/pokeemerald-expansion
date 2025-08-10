FrescoIsles_Gym_MapScripts::
	.byte 0


FrescoIsles_Gym_EventScript_GymStatue::
# 5 "data/maps/FrescoIsles_Gym/scripts.pory"
	lock
# 6 "data/maps/FrescoIsles_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FrescoIsles_Gym_EventScript_GymStatue_2
# 12 "data/maps/FrescoIsles_Gym/scripts.pory"
	msgbox FrescoIsles_Gym_EventScript_GymStatue_Text_1
FrescoIsles_Gym_EventScript_GymStatue_1:
# 14 "data/maps/FrescoIsles_Gym/scripts.pory"
	closemessage
# 15 "data/maps/FrescoIsles_Gym/scripts.pory"
	release
	end

FrescoIsles_Gym_EventScript_GymStatue_2:
# 8 "data/maps/FrescoIsles_Gym/scripts.pory"
	msgbox FrescoIsles_Gym_EventScript_GymStatue_Text_0
	goto FrescoIsles_Gym_EventScript_GymStatue_1


FrescoIsles_Gym_EventScript_GymMan::
# 21 "data/maps/FrescoIsles_Gym/scripts.pory"
	lock
# 22 "data/maps/FrescoIsles_Gym/scripts.pory"
	faceplayer
# 23 "data/maps/FrescoIsles_Gym/scripts.pory"
	speakername FrescoIsles_Gym_EventScript_GymMan_Text_0
# 24 "data/maps/FrescoIsles_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FrescoIsles_Gym_EventScript_GymMan_2
# 30 "data/maps/FrescoIsles_Gym/scripts.pory"
	msgbox FrescoIsles_Gym_EventScript_GymMan_Text_2
FrescoIsles_Gym_EventScript_GymMan_1:
# 32 "data/maps/FrescoIsles_Gym/scripts.pory"
	closemessage
# 33 "data/maps/FrescoIsles_Gym/scripts.pory"
	release
	end

FrescoIsles_Gym_EventScript_GymMan_2:
# 26 "data/maps/FrescoIsles_Gym/scripts.pory"
	msgbox FrescoIsles_Gym_EventScript_GymMan_Text_1
	goto FrescoIsles_Gym_EventScript_GymMan_1


FrescoIsles_Gym_EventScript_Raichu::
# 39 "data/maps/FrescoIsles_Gym/scripts.pory"
	lock
# 40 "data/maps/FrescoIsles_Gym/scripts.pory"
	faceplayer
# 41 "data/maps/FrescoIsles_Gym/scripts.pory"
	speakername FrescoIsles_Gym_EventScript_Raichu_Text_0
# 42 "data/maps/FrescoIsles_Gym/scripts.pory"
	playmoncry SPECIES_RAICHU_ALOLAN, CRY_MODE_NORMAL
# 43 "data/maps/FrescoIsles_Gym/scripts.pory"
	msgbox FrescoIsles_Gym_EventScript_Raichu_Text_1
# 44 "data/maps/FrescoIsles_Gym/scripts.pory"
	waitmoncry
# 45 "data/maps/FrescoIsles_Gym/scripts.pory"
	closemessage
# 46 "data/maps/FrescoIsles_Gym/scripts.pory"
	msgbox FrescoIsles_Gym_EventScript_Raichu_Text_2
# 47 "data/maps/FrescoIsles_Gym/scripts.pory"
	closemessage
# 48 "data/maps/FrescoIsles_Gym/scripts.pory"
	release
	end


FrescoIsles_Gym_EventScript_Steelix::
# 54 "data/maps/FrescoIsles_Gym/scripts.pory"
	lock
# 55 "data/maps/FrescoIsles_Gym/scripts.pory"
	faceplayer
# 56 "data/maps/FrescoIsles_Gym/scripts.pory"
	speakername FrescoIsles_Gym_EventScript_Steelix_Text_0
# 57 "data/maps/FrescoIsles_Gym/scripts.pory"
	playmoncry SPECIES_STEELIX, CRY_MODE_NORMAL
# 58 "data/maps/FrescoIsles_Gym/scripts.pory"
	msgbox FrescoIsles_Gym_EventScript_Steelix_Text_1
# 59 "data/maps/FrescoIsles_Gym/scripts.pory"
	waitmoncry
# 60 "data/maps/FrescoIsles_Gym/scripts.pory"
	closemessage
# 61 "data/maps/FrescoIsles_Gym/scripts.pory"
	msgbox FrescoIsles_Gym_EventScript_Steelix_Text_2
# 62 "data/maps/FrescoIsles_Gym/scripts.pory"
	closemessage
# 63 "data/maps/FrescoIsles_Gym/scripts.pory"
	release
	end


FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Gideon::
# 69 "data/maps/FrescoIsles_Gym/scripts.pory"
	trainerbattle_single TRAINER_FRESCOGYM_GIDEON, FrescoIsles_Gym_Text_Trainer_FrescoGym_GideonIntro, FrescoIsles_Gym_Text_Trainer_FrescoGym_GideonDefeat
# 70 "data/maps/FrescoIsles_Gym/scripts.pory"
	speakername FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Gideon_Text_0
# 71 "data/maps/FrescoIsles_Gym/scripts.pory"
	msgbox FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Gideon_Text_1
# 72 "data/maps/FrescoIsles_Gym/scripts.pory"
	closemessage
# 73 "data/maps/FrescoIsles_Gym/scripts.pory"
	release
	end


FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Melody::
# 87 "data/maps/FrescoIsles_Gym/scripts.pory"
	trainerbattle_single TRAINER_FRESCOGYM_MELODY, FrescoIsles_Gym_Text_Trainer_FrescoGym_MelodyIntro, FrescoIsles_Gym_Text_Trainer_FrescoGym_MelodyDefeat
# 88 "data/maps/FrescoIsles_Gym/scripts.pory"
	speakername FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Melody_Text_0
# 89 "data/maps/FrescoIsles_Gym/scripts.pory"
	msgbox FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Melody_Text_1
# 90 "data/maps/FrescoIsles_Gym/scripts.pory"
	closemessage
# 91 "data/maps/FrescoIsles_Gym/scripts.pory"
	release
	end


FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Maisie::
# 105 "data/maps/FrescoIsles_Gym/scripts.pory"
	trainerbattle_single TRAINER_FRESCOGYM_MAISIE, FrescoIsles_Gym_Text_Trainer_FrescoGym_MaisieIntro, FrescoIsles_Gym_Text_Trainer_FrescoGym_MaisieDefeat
# 106 "data/maps/FrescoIsles_Gym/scripts.pory"
	speakername FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Maisie_Text_0
# 107 "data/maps/FrescoIsles_Gym/scripts.pory"
	msgbox FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Maisie_Text_1
# 108 "data/maps/FrescoIsles_Gym/scripts.pory"
	closemessage
# 109 "data/maps/FrescoIsles_Gym/scripts.pory"
	release
	end


FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Aziz::
# 123 "data/maps/FrescoIsles_Gym/scripts.pory"
	trainerbattle_single TRAINER_FRESCOGYM_AZIZ, FrescoIsles_Gym_Text_Trainer_FrescoGym_AzizIntro, FrescoIsles_Gym_Text_Trainer_FrescoGym_AzizDefeat
# 124 "data/maps/FrescoIsles_Gym/scripts.pory"
	speakername FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Aziz_Text_0
# 125 "data/maps/FrescoIsles_Gym/scripts.pory"
	msgbox FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Aziz_Text_1
# 126 "data/maps/FrescoIsles_Gym/scripts.pory"
	closemessage
# 127 "data/maps/FrescoIsles_Gym/scripts.pory"
	release
	end


FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Frida::
# 141 "data/maps/FrescoIsles_Gym/scripts.pory"
	trainerbattle_single TRAINER_FRESCOGYM_FRIDA, FrescoIsles_Gym_Text_Trainer_FrescoGym_FridaIntro, FrescoIsles_Gym_Text_Trainer_FrescoGym_FridaDefeat
# 142 "data/maps/FrescoIsles_Gym/scripts.pory"
	speakername FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Frida_Text_0
# 143 "data/maps/FrescoIsles_Gym/scripts.pory"
	msgbox FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Frida_Text_1
# 144 "data/maps/FrescoIsles_Gym/scripts.pory"
	closemessage
# 145 "data/maps/FrescoIsles_Gym/scripts.pory"
	release
	end


FrescoIsles_Gym_EventScript_ThaliaAndMelpomene::
# 161 "data/maps/FrescoIsles_Gym/scripts.pory"
	lock
# 162 "data/maps/FrescoIsles_Gym/scripts.pory"
	faceplayer
# 165 "data/maps/FrescoIsles_Gym/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 166 "data/maps/FrescoIsles_Gym/scripts.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_2
FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_1:
# 174 "data/maps/FrescoIsles_Gym/scripts.pory"
	goto_if_unset FLAG_HARD_MODE, FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_5
# 180 "data/maps/FrescoIsles_Gym/scripts.pory"
	goto FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_HardDifficulty
FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_4:
# 182 "data/maps/FrescoIsles_Gym/scripts.pory"
	release
	end

FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_2:
# 168 "data/maps/FrescoIsles_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 169 "data/maps/FrescoIsles_Gym/scripts.pory"
	waitmovement 0
# 170 "data/maps/FrescoIsles_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 171 "data/maps/FrescoIsles_Gym/scripts.pory"
	waitmovement 0
	goto FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_1

FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_5:
# 176 "data/maps/FrescoIsles_Gym/scripts.pory"
	goto FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_NormalDifficulty
	goto FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_4


FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_NormalDifficulty::
# 188 "data/maps/FrescoIsles_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_THALIAANDMELPOMENE, FrescoIsles_Gym_Text_ThaliaAndMelpomeneIntro, FrescoIsles_Gym_Text_ThaliaAndMelpomeneDefeat, FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_DefeatedScript, NO_MUSIC
# 189 "data/maps/FrescoIsles_Gym/scripts.pory"
	speakername FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_NormalDifficulty_Text_0
# 190 "data/maps/FrescoIsles_Gym/scripts.pory"
	msgbox FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_NormalDifficulty_Text_1
# 191 "data/maps/FrescoIsles_Gym/scripts.pory"
	closemessage
# 192 "data/maps/FrescoIsles_Gym/scripts.pory"
	applymovement 2, FrescoIsles_Gym_Movement_MelpomeneTalkToPlayer
# 193 "data/maps/FrescoIsles_Gym/scripts.pory"
	waitmovement 0
# 194 "data/maps/FrescoIsles_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 195 "data/maps/FrescoIsles_Gym/scripts.pory"
	waitmovement 0
# 196 "data/maps/FrescoIsles_Gym/scripts.pory"
	speakername FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_NormalDifficulty_Text_2
# 197 "data/maps/FrescoIsles_Gym/scripts.pory"
	msgbox FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_NormalDifficulty_Text_3
# 198 "data/maps/FrescoIsles_Gym/scripts.pory"
	closemessage
# 199 "data/maps/FrescoIsles_Gym/scripts.pory"
	applymovement 2, FrescoIsles_Gym_Movement_MelpomeneBackToSpot
# 200 "data/maps/FrescoIsles_Gym/scripts.pory"
	waitmovement 0
# 201 "data/maps/FrescoIsles_Gym/scripts.pory"
	release
	end


FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_HardDifficulty::
# 206 "data/maps/FrescoIsles_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_THALIAANDMELPOMENE_HARD, FrescoIsles_Gym_Text_ThaliaAndMelpomeneIntro, FrescoIsles_Gym_Text_ThaliaAndMelpomeneDefeat, FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_DefeatedScript, NO_MUSIC
# 207 "data/maps/FrescoIsles_Gym/scripts.pory"
	speakername FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_NormalDifficulty_Text_0
# 208 "data/maps/FrescoIsles_Gym/scripts.pory"
	msgbox FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_NormalDifficulty_Text_1
# 209 "data/maps/FrescoIsles_Gym/scripts.pory"
	closemessage
# 210 "data/maps/FrescoIsles_Gym/scripts.pory"
	applymovement 2, FrescoIsles_Gym_Movement_MelpomeneTalkToPlayer
# 211 "data/maps/FrescoIsles_Gym/scripts.pory"
	waitmovement 0
# 212 "data/maps/FrescoIsles_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 213 "data/maps/FrescoIsles_Gym/scripts.pory"
	waitmovement 0
# 214 "data/maps/FrescoIsles_Gym/scripts.pory"
	speakername FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_NormalDifficulty_Text_2
# 215 "data/maps/FrescoIsles_Gym/scripts.pory"
	msgbox FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_NormalDifficulty_Text_3
# 216 "data/maps/FrescoIsles_Gym/scripts.pory"
	closemessage
# 217 "data/maps/FrescoIsles_Gym/scripts.pory"
	applymovement 2, FrescoIsles_Gym_Movement_MelpomeneBackToSpot
# 218 "data/maps/FrescoIsles_Gym/scripts.pory"
	waitmovement 0
# 219 "data/maps/FrescoIsles_Gym/scripts.pory"
	release
	end


FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_DefeatedScript::
# 233 "data/maps/FrescoIsles_Gym/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 234 "data/maps/FrescoIsles_Gym/scripts.pory"
	message FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_DefeatedScript_Text_0
# 235 "data/maps/FrescoIsles_Gym/scripts.pory"
	waitmessage
# 236 "data/maps/FrescoIsles_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 239 "data/maps/FrescoIsles_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 241 "data/maps/FrescoIsles_Gym/scripts.pory"
	settrainerflag TRAINER_FRESCOGYM_GIDEON
# 242 "data/maps/FrescoIsles_Gym/scripts.pory"
	settrainerflag TRAINER_FRESCOGYM_MELODY
# 243 "data/maps/FrescoIsles_Gym/scripts.pory"
	settrainerflag TRAINER_FRESCOGYM_MAISIE
# 244 "data/maps/FrescoIsles_Gym/scripts.pory"
	settrainerflag TRAINER_FRESCOGYM_AZIZ
# 245 "data/maps/FrescoIsles_Gym/scripts.pory"
	settrainerflag TRAINER_FRESCOGYM_FRIDA
# 248 "data/maps/FrescoIsles_Gym/scripts.pory"
	speakername FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_NormalDifficulty_Text_0
# 249 "data/maps/FrescoIsles_Gym/scripts.pory"
	msgbox FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_DefeatedScript_Text_1
# 250 "data/maps/FrescoIsles_Gym/scripts.pory"
	closemessage
# 253 "data/maps/FrescoIsles_Gym/scripts.pory"
	giveitem ITEM_TM_BULLDOZE
# 254 "data/maps/FrescoIsles_Gym/scripts.pory"
	closemessage
# 255 "data/maps/FrescoIsles_Gym/scripts.pory"
	applymovement 2, FrescoIsles_Gym_Movement_MelpomeneTalkToPlayer
# 256 "data/maps/FrescoIsles_Gym/scripts.pory"
	waitmovement 0
# 257 "data/maps/FrescoIsles_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 258 "data/maps/FrescoIsles_Gym/scripts.pory"
	waitmovement 0
# 259 "data/maps/FrescoIsles_Gym/scripts.pory"
	speakername FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_NormalDifficulty_Text_2
# 260 "data/maps/FrescoIsles_Gym/scripts.pory"
	msgbox FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_DefeatedScript_Text_2
# 261 "data/maps/FrescoIsles_Gym/scripts.pory"
	closemessage
# 262 "data/maps/FrescoIsles_Gym/scripts.pory"
	applymovement 2, FrescoIsles_Gym_Movement_MelpomeneBackToSpot
# 263 "data/maps/FrescoIsles_Gym/scripts.pory"
	waitmovement 0
# 266 "data/maps/FrescoIsles_Gym/scripts.pory"
	delay 20
# 267 "data/maps/FrescoIsles_Gym/scripts.pory"
	completequest QUEST_GYM_6
# 268 "data/maps/FrescoIsles_Gym/scripts.pory"
	delay 20
# 269 "data/maps/FrescoIsles_Gym/scripts.pory"
	startquest QUEST_GYM_7
# 272 "data/maps/FrescoIsles_Gym/scripts.pory"
	setvar VAR_NIKO_STATE, 11
# 273 "data/maps/FrescoIsles_Gym/scripts.pory"
	setvar VAR_RANIA_STATE, 10
# 275 "data/maps/FrescoIsles_Gym/scripts.pory"
	release
	end


# 279 "data/maps/FrescoIsles_Gym/scripts.pory"
FrescoIsles_Gym_Movement_MelpomeneTalkToPlayer:
# 281 "data/maps/FrescoIsles_Gym/scripts.pory"
	walk_down
# 282 "data/maps/FrescoIsles_Gym/scripts.pory"
	face_left
# 283 "data/maps/FrescoIsles_Gym/scripts.pory"
	step_end

# 285 "data/maps/FrescoIsles_Gym/scripts.pory"
FrescoIsles_Gym_Movement_MelpomeneBackToSpot:
# 287 "data/maps/FrescoIsles_Gym/scripts.pory"
	walk_up
# 288 "data/maps/FrescoIsles_Gym/scripts.pory"
	face_down
# 289 "data/maps/FrescoIsles_Gym/scripts.pory"
	step_end

FrescoIsles_Gym_EventScript_GymStatue_Text_0:
# 8 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Fresco Isles Pokémon Gym\p"
	.string "Recent Victors: Rania, {PLAYER}$"

FrescoIsles_Gym_EventScript_GymStatue_Text_1:
# 12 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Fresco Isles Pokémon Gym\p"
	.string "Recent Victors: Rania$"

FrescoIsles_Gym_EventScript_GymMan_Text_0:
# 23 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Gym Guide$"

FrescoIsles_Gym_EventScript_GymMan_Text_1:
# 26 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Incredible! You're a rising star! Keep it\n"
	.string "up, future Champ!$"

FrescoIsles_Gym_EventScript_GymMan_Text_2:
# 30 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Welcome to the Fresco Isles Gym!\p"
	.string "Thalia and Melpomene are the Twin Muses\n"
	.string "of Comedy and Tragedy who run this Gym.\l"
	.string "They are opposites in many ways,\l"
	.string "including which Pokémon they use.\l"
	.string "Thalia uses energetic {COLOR GREEN}Electric-type{COLOR DARK_GRAY}\l"
	.string "Pokémon, while Melpomene uses slow,\l"
	.string "somber {COLOR GREEN}Ground-type{COLOR DARK_GRAY} Pokémon. Although\l"
	.string "their Pokémon are opposites, they make\l"
	.string "quite the duo!$"

FrescoIsles_Gym_EventScript_Raichu_Text_0:
# 41 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Raichu$"

FrescoIsles_Gym_EventScript_Raichu_Text_1:
# 43 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Squee!$"

FrescoIsles_Gym_EventScript_Raichu_Text_2:
# 46 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Raichu is hovering around Thalia,\n"
	.string "sparking with energy!$"

FrescoIsles_Gym_EventScript_Steelix_Text_0:
# 56 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Steelix$"

FrescoIsles_Gym_EventScript_Steelix_Text_1:
# 58 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Kruuuaaah...!$"

FrescoIsles_Gym_EventScript_Steelix_Text_2:
# 61 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Steelix looks serious... That might just\n"
	.string "be how a Steelix looks, though.$"

FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Gideon_Text_0:
# 70 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Gideon$"

FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Gideon_Text_1:
# 71 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Thalia and Melpomene keep me on my\n"
	.string "toes, that's for sure.$"

FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Melody_Text_0:
# 88 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Melody$"

FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Melody_Text_1:
# 89 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Some of us Gym Trainers specialize in\n"
	.string "Ground-types, while others have more\l"
	.string "Electric-type Pokémon. All of us\l"
	.string "reflect the division of Thalia and\l"
	.string "Melpomene.$"

FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Maisie_Text_0:
# 106 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Maisie$"

FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Maisie_Text_1:
# 107 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Thalia is my type of gal! She loves\n"
	.string "high-energy fun, just like me.$"

FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Aziz_Text_0:
# 124 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Aziz$"

FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Aziz_Text_1:
# 125 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Heh, this Gym is a real challenge for\n"
	.string "some Trainers. How is one person\l"
	.string "supposed to beat two opposite types at\l"
	.string "once?$"

FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Frida_Text_0:
# 142 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Frida$"

FrescoIsles_Gym_EventScript_Trainer_FrescoGym_Frida_Text_1:
# 143 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Sometimes, it's important to try new\n"
	.string "Pokémon in battle, especially if your\l"
	.string "current team isn't quite working out.$"

FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_NormalDifficulty_Text_0:
# 189 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Thalia$"

FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_NormalDifficulty_Text_1:
# 190 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Ohoho, you turned my team into a\n"
	.string "comedy!$"

FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_NormalDifficulty_Text_2:
# 196 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Melpomene$"

FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_NormalDifficulty_Text_3:
# 197 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Yeah, you taught our Pokémon a new\n"
	.string "level of strength. I solemnly swear\l"
	.string "that one day, we will reach this level.$"

FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_DefeatedScript_Text_0:
# 234 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "{PLAYER} received the Theatrical\n"
	.string "Badge from Thalia and Melpomene.$"

FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_DefeatedScript_Text_1:
# 249 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "The Theatrical Badge shows that you're\n"
	.string "able to dance with some of the best\l"
	.string "Trainers in Ilios. With it, you should be\l"
	.string "able to use the {COLOR GREEN}HM Strength{COLOR DARK_GRAY} outside of\l"
	.string "battle.\p"
	.string "Mel and I have been talking, and we want\n"
	.string "to give you this!$"

FrescoIsles_Gym_EventScript_ThaliaAndMelpomene_DefeatedScript_Text_2:
# 260 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "That TM contains the move {COLOR GREEN}Bulldoze{COLOR DARK_GRAY}.\n"
	.string "It's a great utility move, striking all\l"
	.string "opponents and slowing them down.\p"
	.string "The 7th Gym Challenge is located\n"
	.string "{COLOR GREEN}southwest{COLOR DARK_GRAY} of here, in {COLOR GREEN}Palati City{COLOR DARK_GRAY}. They\l"
	.string "say the first civilization of Ilios was\l"
	.string "born there, so maybe you'll find\l"
	.string "something interesting among the ruins.$"

FrescoIsles_Gym_Text_Trainer_FrescoGym_GideonIntro::
# 76 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Ack! The Gym Leaders turned on their\n"
	.string "Sandstorm Machine!$"

FrescoIsles_Gym_Text_Trainer_FrescoGym_GideonDefeat::
# 80 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "It's way harder to battle in this\n"
	.string "storm...$"

FrescoIsles_Gym_Text_Trainer_FrescoGym_MelodyIntro::
# 94 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "My Pokémon are inspired by Melpomene,\n"
	.string "grounded and true.$"

FrescoIsles_Gym_Text_Trainer_FrescoGym_MelodyDefeat::
# 98 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "...Get it? Grounded?$"

FrescoIsles_Gym_Text_Trainer_FrescoGym_MaisieIntro::
# 112 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Ahaha, it's time to get wild!$"

FrescoIsles_Gym_Text_Trainer_FrescoGym_MaisieDefeat::
# 116 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Too wild for me!$"

FrescoIsles_Gym_Text_Trainer_FrescoGym_AzizIntro::
# 130 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Let's have an honorable battle.$"

FrescoIsles_Gym_Text_Trainer_FrescoGym_AzizDefeat::
# 134 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Amazing...$"

FrescoIsles_Gym_Text_Trainer_FrescoGym_FridaIntro::
# 148 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "My Pokémon are raring to go!$"

FrescoIsles_Gym_Text_Trainer_FrescoGym_FridaDefeat::
# 152 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Back to the teambuilding data sheets.$"

FrescoIsles_Gym_Text_ThaliaAndMelpomeneIntro::
# 222 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Hey, it's {PLAYER}! Thanks again for\n"
	.string "the Chocolates. There's nothing like a\l"
	.string "good snack to bring people together.\p"
	.string "You're not here to talk feelings though,\n"
	.string "are you? Come on, show us your moves!\l"
	.string "Let's make this a world-class show!$"

FrescoIsles_Gym_Text_ThaliaAndMelpomeneDefeat::
# 226 "data/maps/FrescoIsles_Gym/scripts.pory"
	.string "Woah! Have you ever thought about\n"
	.string "joining the Theatre?$"

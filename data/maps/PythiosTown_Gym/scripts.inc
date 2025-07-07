PythiosTown_Gym_MapScripts::
# 2 "data/maps/PythiosTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PythiosTown_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PythiosTown_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PythiosTown_Gym/scripts.pory"
	setflashlevel 1
	return


PythiosTown_Gym_EventScript_GymStatue::
# 9 "data/maps/PythiosTown_Gym/scripts.pory"
	lock
# 10 "data/maps/PythiosTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, PythiosTown_Gym_EventScript_GymStatue_2
# 16 "data/maps/PythiosTown_Gym/scripts.pory"
	msgbox PythiosTown_Gym_EventScript_GymStatue_Text_1
PythiosTown_Gym_EventScript_GymStatue_1:
# 18 "data/maps/PythiosTown_Gym/scripts.pory"
	closemessage
# 19 "data/maps/PythiosTown_Gym/scripts.pory"
	release
	end

PythiosTown_Gym_EventScript_GymStatue_2:
# 12 "data/maps/PythiosTown_Gym/scripts.pory"
	msgbox PythiosTown_Gym_EventScript_GymStatue_Text_0
	goto PythiosTown_Gym_EventScript_GymStatue_1


PythiosTown_Gym_EventScript_GymMan::
# 25 "data/maps/PythiosTown_Gym/scripts.pory"
	lock
# 26 "data/maps/PythiosTown_Gym/scripts.pory"
	faceplayer
# 27 "data/maps/PythiosTown_Gym/scripts.pory"
	speakername PythiosTown_Gym_EventScript_GymMan_Text_0
# 28 "data/maps/PythiosTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, PythiosTown_Gym_EventScript_GymMan_2
# 34 "data/maps/PythiosTown_Gym/scripts.pory"
	msgbox PythiosTown_Gym_EventScript_GymMan_Text_2
PythiosTown_Gym_EventScript_GymMan_1:
# 36 "data/maps/PythiosTown_Gym/scripts.pory"
	closemessage
# 37 "data/maps/PythiosTown_Gym/scripts.pory"
	release
	end

PythiosTown_Gym_EventScript_GymMan_2:
# 30 "data/maps/PythiosTown_Gym/scripts.pory"
	msgbox PythiosTown_Gym_EventScript_GymMan_Text_1
	goto PythiosTown_Gym_EventScript_GymMan_1


PythiosTown_Gym_EventScript_Mimikyu::
# 43 "data/maps/PythiosTown_Gym/scripts.pory"
	lock
# 44 "data/maps/PythiosTown_Gym/scripts.pory"
	faceplayer
# 45 "data/maps/PythiosTown_Gym/scripts.pory"
	speakername PythiosTown_Gym_EventScript_Mimikyu_Text_0
# 46 "data/maps/PythiosTown_Gym/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_NORMAL
# 47 "data/maps/PythiosTown_Gym/scripts.pory"
	msgbox PythiosTown_Gym_EventScript_Mimikyu_Text_1
# 48 "data/maps/PythiosTown_Gym/scripts.pory"
	waitmoncry
# 49 "data/maps/PythiosTown_Gym/scripts.pory"
	closemessage
# 50 "data/maps/PythiosTown_Gym/scripts.pory"
	msgbox PythiosTown_Gym_EventScript_Mimikyu_Text_2
# 51 "data/maps/PythiosTown_Gym/scripts.pory"
	closemessage
# 52 "data/maps/PythiosTown_Gym/scripts.pory"
	release
	end


PythiosTown_Gym_EventScript_Trainer_PythiosGym_Rosara::
# 58 "data/maps/PythiosTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSGYM_ROSARA, PythiosTown_Gym_Text_Trainer_PythiosGym_RosaraIntro, PythiosTown_Gym_Text_Trainer_PythiosGym_RosaraDefeat
# 59 "data/maps/PythiosTown_Gym/scripts.pory"
	speakername PythiosTown_Gym_EventScript_Trainer_PythiosGym_Rosara_Text_0
# 60 "data/maps/PythiosTown_Gym/scripts.pory"
	msgbox PythiosTown_Gym_EventScript_Trainer_PythiosGym_Rosara_Text_1
# 61 "data/maps/PythiosTown_Gym/scripts.pory"
	closemessage
# 62 "data/maps/PythiosTown_Gym/scripts.pory"
	release
	end


PythiosTown_Gym_EventScript_Trainer_PythiosGym_Tafos::
# 76 "data/maps/PythiosTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSGYM_TAFOS, PythiosTown_Gym_Text_Trainer_PythiosGym_TafosIntro, PythiosTown_Gym_Text_Trainer_PythiosGym_TafosDefeat
# 77 "data/maps/PythiosTown_Gym/scripts.pory"
	speakername PythiosTown_Gym_EventScript_Trainer_PythiosGym_Tafos_Text_0
# 78 "data/maps/PythiosTown_Gym/scripts.pory"
	msgbox PythiosTown_Gym_EventScript_Trainer_PythiosGym_Tafos_Text_1
# 79 "data/maps/PythiosTown_Gym/scripts.pory"
	closemessage
# 80 "data/maps/PythiosTown_Gym/scripts.pory"
	release
	end


PythiosTown_Gym_EventScript_Trainer_PythiosGym_Addonis::
# 94 "data/maps/PythiosTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSGYM_ADDONIS, PythiosTown_Gym_Text_Trainer_PythiosGym_AddonisIntro, PythiosTown_Gym_Text_Trainer_PythiosGym_AddonisDefeat
# 95 "data/maps/PythiosTown_Gym/scripts.pory"
	speakername PythiosTown_Gym_EventScript_Trainer_PythiosGym_Addonis_Text_0
# 96 "data/maps/PythiosTown_Gym/scripts.pory"
	msgbox PythiosTown_Gym_EventScript_Trainer_PythiosGym_Addonis_Text_1
# 97 "data/maps/PythiosTown_Gym/scripts.pory"
	closemessage
# 98 "data/maps/PythiosTown_Gym/scripts.pory"
	release
	end


PythiosTown_Gym_EventScript_Trainer_PythiosGym_Geroni::
# 112 "data/maps/PythiosTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSGYM_GERONI, PythiosTown_Gym_Text_Trainer_PythiosGym_GeroniIntro, PythiosTown_Gym_Text_Trainer_PythiosGym_GeroniDefeat
# 113 "data/maps/PythiosTown_Gym/scripts.pory"
	speakername PythiosTown_Gym_EventScript_Trainer_PythiosGym_Geroni_Text_0
# 114 "data/maps/PythiosTown_Gym/scripts.pory"
	msgbox PythiosTown_Gym_EventScript_Trainer_PythiosGym_Geroni_Text_1
# 115 "data/maps/PythiosTown_Gym/scripts.pory"
	closemessage
# 116 "data/maps/PythiosTown_Gym/scripts.pory"
	release
	end


PythiosTown_Gym_EventScript_Trainer_PythiosGym_Yanna::
# 130 "data/maps/PythiosTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSGYM_YANNA, PythiosTown_Gym_Text_Trainer_PythiosGym_YannaIntro, PythiosTown_Gym_Text_Trainer_PythiosGym_YannaDefeat
# 131 "data/maps/PythiosTown_Gym/scripts.pory"
	speakername PythiosTown_Gym_EventScript_Trainer_PythiosGym_Yanna_Text_0
# 132 "data/maps/PythiosTown_Gym/scripts.pory"
	msgbox PythiosTown_Gym_EventScript_Trainer_PythiosGym_Yanna_Text_1
# 133 "data/maps/PythiosTown_Gym/scripts.pory"
	closemessage
# 134 "data/maps/PythiosTown_Gym/scripts.pory"
	release
	end


PythiosTown_Gym_EventScript_Kleio::
# 150 "data/maps/PythiosTown_Gym/scripts.pory"
	lock
# 151 "data/maps/PythiosTown_Gym/scripts.pory"
	faceplayer
# 152 "data/maps/PythiosTown_Gym/scripts.pory"
	goto_if_unset FLAG_HARD_MODE, PythiosTown_Gym_EventScript_Kleio_2
# 158 "data/maps/PythiosTown_Gym/scripts.pory"
	goto PythiosTown_Gym_EventScript_Kleio_HardDifficulty
PythiosTown_Gym_EventScript_Kleio_1:
# 160 "data/maps/PythiosTown_Gym/scripts.pory"
	release
	end

PythiosTown_Gym_EventScript_Kleio_2:
# 154 "data/maps/PythiosTown_Gym/scripts.pory"
	goto PythiosTown_Gym_EventScript_Kleio_NormalDifficulty
	goto PythiosTown_Gym_EventScript_Kleio_1


PythiosTown_Gym_EventScript_Kleio_NormalDifficulty::
# 166 "data/maps/PythiosTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_KLEIO, PythiosTown_Gym_Text_KleioIntro, PythiosTown_Gym_Text_KleioDefeat, PythiosTown_Gym_EventScript_Kleio_DefeatedScript, NO_MUSIC
# 167 "data/maps/PythiosTown_Gym/scripts.pory"
	speakername PythiosTown_Gym_EventScript_Kleio_NormalDifficulty_Text_0
# 168 "data/maps/PythiosTown_Gym/scripts.pory"
	msgbox PythiosTown_Gym_EventScript_Kleio_NormalDifficulty_Text_1
# 169 "data/maps/PythiosTown_Gym/scripts.pory"
	closemessage
# 170 "data/maps/PythiosTown_Gym/scripts.pory"
	release
	end


PythiosTown_Gym_EventScript_Kleio_HardDifficulty::
# 175 "data/maps/PythiosTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_KLEIO_HARD, PythiosTown_Gym_Text_KleioIntro, PythiosTown_Gym_Text_KleioDefeat, PythiosTown_Gym_EventScript_Kleio_DefeatedScript, NO_MUSIC
# 176 "data/maps/PythiosTown_Gym/scripts.pory"
	speakername PythiosTown_Gym_EventScript_Kleio_NormalDifficulty_Text_0
# 177 "data/maps/PythiosTown_Gym/scripts.pory"
	msgbox PythiosTown_Gym_EventScript_Kleio_NormalDifficulty_Text_1
# 178 "data/maps/PythiosTown_Gym/scripts.pory"
	closemessage
# 179 "data/maps/PythiosTown_Gym/scripts.pory"
	release
	end


PythiosTown_Gym_EventScript_Kleio_DefeatedScript::
# 193 "data/maps/PythiosTown_Gym/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 194 "data/maps/PythiosTown_Gym/scripts.pory"
	message PythiosTown_Gym_EventScript_Kleio_DefeatedScript_Text_0
# 195 "data/maps/PythiosTown_Gym/scripts.pory"
	waitmessage
# 196 "data/maps/PythiosTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 199 "data/maps/PythiosTown_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 201 "data/maps/PythiosTown_Gym/scripts.pory"
	settrainerflag TRAINER_PYTHIOSGYM_ROSARA
# 202 "data/maps/PythiosTown_Gym/scripts.pory"
	settrainerflag TRAINER_PYTHIOSGYM_TAFOS
# 203 "data/maps/PythiosTown_Gym/scripts.pory"
	settrainerflag TRAINER_PYTHIOSGYM_ADDONIS
# 204 "data/maps/PythiosTown_Gym/scripts.pory"
	settrainerflag TRAINER_PYTHIOSGYM_GERONI
# 205 "data/maps/PythiosTown_Gym/scripts.pory"
	settrainerflag TRAINER_PYTHIOSGYM_YANNA
# 210 "data/maps/PythiosTown_Gym/scripts.pory"
	speakername PythiosTown_Gym_EventScript_Kleio_NormalDifficulty_Text_0
# 211 "data/maps/PythiosTown_Gym/scripts.pory"
	msgbox PythiosTown_Gym_EventScript_Kleio_DefeatedScript_Text_1
# 212 "data/maps/PythiosTown_Gym/scripts.pory"
	closemessage
# 215 "data/maps/PythiosTown_Gym/scripts.pory"
	giveitem ITEM_TM_CALM_MIND
# 216 "data/maps/PythiosTown_Gym/scripts.pory"
	speakername PythiosTown_Gym_EventScript_Kleio_NormalDifficulty_Text_0
# 217 "data/maps/PythiosTown_Gym/scripts.pory"
	msgbox PythiosTown_Gym_EventScript_Kleio_DefeatedScript_Text_2
# 218 "data/maps/PythiosTown_Gym/scripts.pory"
	closemessage
# 221 "data/maps/PythiosTown_Gym/scripts.pory"
	delay 20
# 222 "data/maps/PythiosTown_Gym/scripts.pory"
	completequest QUEST_GYM_3
# 223 "data/maps/PythiosTown_Gym/scripts.pory"
	delay 20
# 224 "data/maps/PythiosTown_Gym/scripts.pory"
	startquest QUEST_GYM_4
# 227 "data/maps/PythiosTown_Gym/scripts.pory"
	setvar VAR_NIKO_STATE, 6
# 228 "data/maps/PythiosTown_Gym/scripts.pory"
	setvar VAR_RANIA_STATE, 5
# 230 "data/maps/PythiosTown_Gym/scripts.pory"
	release
	end


PythiosTown_Gym_EventScript_GymStatue_Text_0:
# 12 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Pythios Town Pokémon Gym\p"
	.string "Recent Victors: Niko, {PLAYER}$"

PythiosTown_Gym_EventScript_GymStatue_Text_1:
# 16 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Pythios Town Pokémon Gym\p"
	.string "Recent Victors: Niko$"

PythiosTown_Gym_EventScript_GymMan_Text_0:
# 27 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Gym Guide$"

PythiosTown_Gym_EventScript_GymMan_Text_1:
# 30 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Incredible! You're a rising star! Keep it\n"
	.string "up, future Champ!$"

PythiosTown_Gym_EventScript_GymMan_Text_2:
# 34 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Welcome to the Pythios Town Gym!\p"
	.string "The Gym Leader, Kleio, has designed this\n"
	.string "building as a paradise for Ghost-type\l"
	.string "and other spiritually-inclined Pokémon.\l"
	.string "Of course, that makes it seem pretty\l"
	.string "creepy to me...$"

PythiosTown_Gym_EventScript_Mimikyu_Text_0:
# 45 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Mimikyu$"

PythiosTown_Gym_EventScript_Mimikyu_Text_1:
# 47 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Kk... ooouuuuhhh!$"

PythiosTown_Gym_EventScript_Mimikyu_Text_2:
# 50 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Mimikyu seems tired.$"

PythiosTown_Gym_EventScript_Trainer_PythiosGym_Rosara_Text_0:
# 59 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Rosara$"

PythiosTown_Gym_EventScript_Trainer_PythiosGym_Rosara_Text_1:
# 60 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Some people say that Ghost-type\n"
	.string "Pokémon are lost souls reincarnated.$"

PythiosTown_Gym_EventScript_Trainer_PythiosGym_Tafos_Text_0:
# 77 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Tafos$"

PythiosTown_Gym_EventScript_Trainer_PythiosGym_Tafos_Text_1:
# 78 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Kleio is guarded by two older folks who\n"
	.string "will try to start a Double Battle. Be\l"
	.string "ready for that!$"

PythiosTown_Gym_EventScript_Trainer_PythiosGym_Addonis_Text_0:
# 95 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Addonis$"

PythiosTown_Gym_EventScript_Trainer_PythiosGym_Addonis_Text_1:
# 96 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "I feel the spirits in this room... They're\n"
	.string "here...!$"

PythiosTown_Gym_EventScript_Trainer_PythiosGym_Geroni_Text_0:
# 113 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Geroni$"

PythiosTown_Gym_EventScript_Trainer_PythiosGym_Geroni_Text_1:
# 114 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "We make sure only the strongest,\n"
	.string "smartest Pokémon Trainers make it to\l"
	.string "Kleio.$"

PythiosTown_Gym_EventScript_Trainer_PythiosGym_Yanna_Text_0:
# 131 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Yanna$"

PythiosTown_Gym_EventScript_Trainer_PythiosGym_Yanna_Text_1:
# 132 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Many Pokémon Trainers come to Kleio,\n"
	.string "but very few are worthy.$"

PythiosTown_Gym_EventScript_Kleio_NormalDifficulty_Text_0:
# 167 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Kleio$"

PythiosTown_Gym_EventScript_Kleio_NormalDifficulty_Text_1:
# 168 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "As I saw in my visions, you were a worthy\n"
	.string "challenger. One day, we shall meet again,\l"
	.string "{PLAYER}.$"

PythiosTown_Gym_EventScript_Kleio_DefeatedScript_Text_0:
# 194 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "{PLAYER} received the Grave Badge\n"
	.string "from Kleio.$"

PythiosTown_Gym_EventScript_Kleio_DefeatedScript_Text_1:
# 211 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "The Grave Badge proves your skills of\n"
	.string "connecting to the hearts and souls of\l"
	.string "your Pokémon. You'll also be able to use\l"
	.string "the {COLOR GREEN}HM Flash{COLOR DARK_GRAY} outside of battle.\p"
	.string "Please, take this before you leave.$"

PythiosTown_Gym_EventScript_Kleio_DefeatedScript_Text_2:
# 217 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "That TM contains the move {COLOR GREEN}Calm Mind{COLOR DARK_GRAY},\n"
	.string "which will boost your Pokémon's stats.\p"
	.string "I see the open ocean in your future...\n"
	.string "make sure you speak with a {COLOR GREEN}strange\l"
	.string "sailor{COLOR DARK_GRAY} on the beach. Then you'll be\l"
	.string "ready to head east, through the caves\l"
	.string "to {COLOR GREEN}Sofos City{COLOR DARK_GRAY}. We will meet again.$"

PythiosTown_Gym_Text_Trainer_PythiosGym_RosaraIntro::
# 65 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "I come in here to sing for lost Pokémon.\n"
	.string "Are you here for battle?$"

PythiosTown_Gym_Text_Trainer_PythiosGym_RosaraDefeat::
# 69 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Oh, well. Back to singing.$"

PythiosTown_Gym_Text_Trainer_PythiosGym_TafosIntro::
# 83 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Each Gym in Ilios gets stronger and\n"
	.string "stronger. Are you sure you're ready for\l"
	.string "this one?$"

PythiosTown_Gym_Text_Trainer_PythiosGym_TafosDefeat::
# 87 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "You might have a shot at beating Kleio!$"

PythiosTown_Gym_Text_Trainer_PythiosGym_AddonisIntro::
# 101 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Ouuhhh... ARRRUUUUUUUHHHHH!!$"

PythiosTown_Gym_Text_Trainer_PythiosGym_AddonisDefeat::
# 105 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Huff, huff, huff...$"

PythiosTown_Gym_Text_Trainer_PythiosGym_GeroniIntro::
# 119 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Fwahaha, get ready for the fight of a\n"
	.string "lifetime!$"

PythiosTown_Gym_Text_Trainer_PythiosGym_GeroniDefeat::
# 123 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "You're definitely ready!$"

PythiosTown_Gym_Text_Trainer_PythiosGym_YannaIntro::
# 137 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Hold it right there! You must prove\n"
	.string "yourself, young Trainer!$"

PythiosTown_Gym_Text_Trainer_PythiosGym_YannaDefeat::
# 141 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "It seems you are worthy of Kleio.$"

PythiosTown_Gym_Text_KleioIntro::
# 182 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "Chaire. I knew you were coming,\n"
	.string "{PLAYER}. I am the Muse of the Past,\l"
	.string "the Present, and the Future, so I knew\l"
	.string "of your coming long before you arrived\l"
	.string "in Ilios.\p"
	.string "The Fates have led us here for a great\n"
	.string "battle. Let us follow our destiny, here\l"
	.string "and now!$"

PythiosTown_Gym_Text_KleioDefeat::
# 186 "data/maps/PythiosTown_Gym/scripts.pory"
	.string "You will surely be spoken of in the\n"
	.string "histories of our region.$"

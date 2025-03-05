DiscusForge_MapScripts::
	.byte 0


AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Lana::
# 5 "data/maps/DiscusForge/scripts.pory"
	trainerbattle_single TRAINER_ACRISIACAVES_F1_LANA, AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_LanaIntro, AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_LanaDefeat
# 6 "data/maps/DiscusForge/scripts.pory"
	speakername AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Lana_Text_0
# 7 "data/maps/DiscusForge/scripts.pory"
	msgbox AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Lana_Text_1
# 8 "data/maps/DiscusForge/scripts.pory"
	closemessage
# 9 "data/maps/DiscusForge/scripts.pory"
	release
	end


AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Fraia::
# 23 "data/maps/DiscusForge/scripts.pory"
	trainerbattle_single TRAINER_ACRISIACAVES_F1_FRAIA, AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_FraiaIntro, AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_FraiaDefeat
# 24 "data/maps/DiscusForge/scripts.pory"
	speakername AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Fraia_Text_0
# 25 "data/maps/DiscusForge/scripts.pory"
	msgbox AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Fraia_Text_1
# 26 "data/maps/DiscusForge/scripts.pory"
	closemessage
# 27 "data/maps/DiscusForge/scripts.pory"
	release
	end


AcrisiaCaves_F1_EventScript_ScientistBlockingLadder::
# 41 "data/maps/DiscusForge/scripts.pory"
	lock
# 42 "data/maps/DiscusForge/scripts.pory"
	faceplayer
# 43 "data/maps/DiscusForge/scripts.pory"
	speakername AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_Text_0
# 44 "data/maps/DiscusForge/scripts.pory"
	msgbox AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_Text_1
# 45 "data/maps/DiscusForge/scripts.pory"
	closemessage
# 46 "data/maps/DiscusForge/scripts.pory"
	goto_if_set FLAG_SOLVED_KABUTO_PUZZLE, AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_3
AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_1:
# 60 "data/maps/DiscusForge/scripts.pory"
	release
	end

AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_2:
# 48 "data/maps/DiscusForge/scripts.pory"
	setflag FLAG_SOLVED_ACRISIA_MOUNTAIN_PUZZLE
# 49 "data/maps/DiscusForge/scripts.pory"
	speakername AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_Text_0
# 50 "data/maps/DiscusForge/scripts.pory"
	msgbox AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_Text_2
# 51 "data/maps/DiscusForge/scripts.pory"
	closemessage
# 52 "data/maps/DiscusForge/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 53 "data/maps/DiscusForge/scripts.pory"
	delay 30
# 54 "data/maps/DiscusForge/scripts.pory"
	removeobject 3
# 55 "data/maps/DiscusForge/scripts.pory"
	removeobject 4
# 56 "data/maps/DiscusForge/scripts.pory"
	delay 30
# 57 "data/maps/DiscusForge/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 58 "data/maps/DiscusForge/scripts.pory"
	delay 20
	goto AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_1

AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_3:
# 46 "data/maps/DiscusForge/scripts.pory"
	goto_if_set FLAG_SOLVED_OMANYTE_PUZZLE, AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_2
	goto AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_1


AcrisiaCaves_F1_EventScript_Statue::
# 66 "data/maps/DiscusForge/scripts.pory"
	lock
# 67 "data/maps/DiscusForge/scripts.pory"
	msgbox AcrisiaCaves_F1_EventScript_Statue_Text_0
# 68 "data/maps/DiscusForge/scripts.pory"
	closemessage
# 69 "data/maps/DiscusForge/scripts.pory"
	release
	end


AcrisiaCaves_F1_EventScript_KabutoDescription::
# 75 "data/maps/DiscusForge/scripts.pory"
	lock
# 76 "data/maps/DiscusForge/scripts.pory"
	msgbox AcrisiaCaves_F1_EventScript_KabutoDescription_Text_0
# 77 "data/maps/DiscusForge/scripts.pory"
	closemessage
# 78 "data/maps/DiscusForge/scripts.pory"
	release
	end


AcrisiaCaves_F1_EventScript_OmanyteDescription::
# 84 "data/maps/DiscusForge/scripts.pory"
	lock
# 85 "data/maps/DiscusForge/scripts.pory"
	msgbox AcrisiaCaves_F1_EventScript_OmanyteDescription_Text_0
# 86 "data/maps/DiscusForge/scripts.pory"
	closemessage
# 87 "data/maps/DiscusForge/scripts.pory"
	release
	end


EventScript_KabutoPuzzle::
# 96 "data/maps/DiscusForge/scripts.pory"
	lockall
# 97 "data/maps/DiscusForge/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 98 "data/maps/DiscusForge/scripts.pory"
	delay 30
# 99 "data/maps/DiscusForge/scripts.pory"
	goto_if_set FLAG_SOLVED_KABUTO_PUZZLE, EventScript_KabutoPuzzle_2
# 105 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8005, FALSE
EventScript_KabutoPuzzle_1:
# 107 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8004, SLIDING_PUZZLE_KABUTO
# 108 "data/maps/DiscusForge/scripts.pory"
	special DoSlidingPuzzle
# 109 "data/maps/DiscusForge/scripts.pory"
	waitstate
# 110 "data/maps/DiscusForge/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_KabutoPuzzle_7
EventScript_KabutoPuzzle_5:
# 125 "data/maps/DiscusForge/scripts.pory"
	releaseall
	end

EventScript_KabutoPuzzle_2:
# 101 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8005, TRUE
	goto EventScript_KabutoPuzzle_1

EventScript_KabutoPuzzle_6:
# 112 "data/maps/DiscusForge/scripts.pory"
	setflag FLAG_SOLVED_KABUTO_PUZZLE
# 113 "data/maps/DiscusForge/scripts.pory"
	delay 30
# 114 "data/maps/DiscusForge/scripts.pory"
	playse SE_BANG
# 115 "data/maps/DiscusForge/scripts.pory"
	delay 30
# 116 "data/maps/DiscusForge/scripts.pory"
	goto_if_unset FLAG_SOLVED_OMANYTE_PUZZLE, EventScript_KabutoPuzzle_10
# 122 "data/maps/DiscusForge/scripts.pory"
	msgbox EventScript_KabutoPuzzle_Text_1
	goto EventScript_KabutoPuzzle_5

EventScript_KabutoPuzzle_7:
# 110 "data/maps/DiscusForge/scripts.pory"
	goto_if_unset FLAG_SOLVED_KABUTO_PUZZLE, EventScript_KabutoPuzzle_6
	goto EventScript_KabutoPuzzle_5

EventScript_KabutoPuzzle_10:
# 118 "data/maps/DiscusForge/scripts.pory"
	msgbox EventScript_KabutoPuzzle_Text_0
	goto EventScript_KabutoPuzzle_5


EventScript_AerodactylPuzzle::
# 131 "data/maps/DiscusForge/scripts.pory"
	lockall
# 132 "data/maps/DiscusForge/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 133 "data/maps/DiscusForge/scripts.pory"
	delay 30
# 134 "data/maps/DiscusForge/scripts.pory"
	goto_if_set FLAG_SOLVED_AERODACTYL_PUZZLE, EventScript_AerodactylPuzzle_2
# 140 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8005, FALSE
EventScript_AerodactylPuzzle_1:
# 142 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8004, SLIDING_PUZZLE_AERODACTYL
# 143 "data/maps/DiscusForge/scripts.pory"
	special DoSlidingPuzzle
# 144 "data/maps/DiscusForge/scripts.pory"
	waitstate
# 145 "data/maps/DiscusForge/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_AerodactylPuzzle_7
EventScript_AerodactylPuzzle_5:
# 150 "data/maps/DiscusForge/scripts.pory"
	releaseall
	end

EventScript_AerodactylPuzzle_2:
# 136 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8005, TRUE
	goto EventScript_AerodactylPuzzle_1

EventScript_AerodactylPuzzle_6:
# 147 "data/maps/DiscusForge/scripts.pory"
	setflag FLAG_SOLVED_AERODACTYL_PUZZLE
# 148 "data/maps/DiscusForge/scripts.pory"
	giveitem ITEM_ULTRA_BALL
	goto EventScript_AerodactylPuzzle_5

EventScript_AerodactylPuzzle_7:
# 145 "data/maps/DiscusForge/scripts.pory"
	goto_if_unset FLAG_SOLVED_AERODACTYL_PUZZLE, EventScript_AerodactylPuzzle_6
	goto EventScript_AerodactylPuzzle_5


EventScript_OmanytePuzzle::
# 156 "data/maps/DiscusForge/scripts.pory"
	lockall
# 157 "data/maps/DiscusForge/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 158 "data/maps/DiscusForge/scripts.pory"
	delay 30
# 159 "data/maps/DiscusForge/scripts.pory"
	goto_if_set FLAG_SOLVED_OMANYTE_PUZZLE, EventScript_OmanytePuzzle_2
# 165 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8005, FALSE
EventScript_OmanytePuzzle_1:
# 167 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8004, SLIDING_PUZZLE_OMANYTE
# 168 "data/maps/DiscusForge/scripts.pory"
	special DoSlidingPuzzle
# 169 "data/maps/DiscusForge/scripts.pory"
	waitstate
# 170 "data/maps/DiscusForge/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_OmanytePuzzle_7
EventScript_OmanytePuzzle_5:
# 185 "data/maps/DiscusForge/scripts.pory"
	releaseall
	end

EventScript_OmanytePuzzle_2:
# 161 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8005, TRUE
	goto EventScript_OmanytePuzzle_1

EventScript_OmanytePuzzle_6:
# 172 "data/maps/DiscusForge/scripts.pory"
	setflag FLAG_SOLVED_OMANYTE_PUZZLE
# 173 "data/maps/DiscusForge/scripts.pory"
	delay 30
# 174 "data/maps/DiscusForge/scripts.pory"
	playse SE_BANG
# 175 "data/maps/DiscusForge/scripts.pory"
	delay 30
# 176 "data/maps/DiscusForge/scripts.pory"
	goto_if_unset FLAG_SOLVED_KABUTO_PUZZLE, EventScript_OmanytePuzzle_10
# 182 "data/maps/DiscusForge/scripts.pory"
	msgbox EventScript_KabutoPuzzle_Text_1
	goto EventScript_OmanytePuzzle_5

EventScript_OmanytePuzzle_7:
# 170 "data/maps/DiscusForge/scripts.pory"
	goto_if_unset FLAG_SOLVED_OMANYTE_PUZZLE, EventScript_OmanytePuzzle_6
	goto EventScript_OmanytePuzzle_5

EventScript_OmanytePuzzle_10:
# 178 "data/maps/DiscusForge/scripts.pory"
	msgbox EventScript_KabutoPuzzle_Text_0
	goto EventScript_OmanytePuzzle_5


EventScript_HoOhPuzzle::
# 191 "data/maps/DiscusForge/scripts.pory"
	lockall
# 192 "data/maps/DiscusForge/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 193 "data/maps/DiscusForge/scripts.pory"
	delay 30
# 194 "data/maps/DiscusForge/scripts.pory"
	goto_if_set FLAG_SOLVED_HO_OH_PUZZLE, EventScript_HoOhPuzzle_2
# 200 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8005, FALSE
EventScript_HoOhPuzzle_1:
# 202 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8004, SLIDING_PUZZLE_HO_OH
# 203 "data/maps/DiscusForge/scripts.pory"
	special DoSlidingPuzzle
# 204 "data/maps/DiscusForge/scripts.pory"
	waitstate
# 205 "data/maps/DiscusForge/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_HoOhPuzzle_7
EventScript_HoOhPuzzle_5:
# 210 "data/maps/DiscusForge/scripts.pory"
	releaseall
	end

EventScript_HoOhPuzzle_2:
# 196 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8005, TRUE
	goto EventScript_HoOhPuzzle_1

EventScript_HoOhPuzzle_6:
# 207 "data/maps/DiscusForge/scripts.pory"
	setflag FLAG_SOLVED_HO_OH_PUZZLE
# 208 "data/maps/DiscusForge/scripts.pory"
	giveitem ITEM_ULTRA_BALL
	goto EventScript_HoOhPuzzle_5

EventScript_HoOhPuzzle_7:
# 205 "data/maps/DiscusForge/scripts.pory"
	goto_if_unset FLAG_SOLVED_HO_OH_PUZZLE, EventScript_HoOhPuzzle_6
	goto EventScript_HoOhPuzzle_5


AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Lana_Text_0:
# 6 "data/maps/DiscusForge/scripts.pory"
	.string "Lana$"

AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Lana_Text_1:
# 7 "data/maps/DiscusForge/scripts.pory"
	.string "I guess it's not so bad in here. At least\n"
	.string "the Pokémon are cool.$"

AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Fraia_Text_0:
# 24 "data/maps/DiscusForge/scripts.pory"
	.string "Fraia$"

AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Fraia_Text_1:
# 25 "data/maps/DiscusForge/scripts.pory"
	.string "I though my Pokémon could fight their\n"
	.string "way through the cave...$"

AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_Text_0:
# 43 "data/maps/DiscusForge/scripts.pory"
	.string "Elder Follower$"

AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_Text_1:
# 44 "data/maps/DiscusForge/scripts.pory"
	.string "To pass into the deeper level of the\n"
	.string "cave, you must {COLOR GREEN}solve these Ruin\l"
	.string "Puzzles{COLOR DARK_GRAY}.\p"
	.string "The Elder believes that only those wise\n"
	.string "enough to understand the past should\l"
	.string "be allowed to train with him.$"

AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_Text_2:
# 50 "data/maps/DiscusForge/scripts.pory"
	.string "Could it be...? You solved the Ruin\n"
	.string "Puzzles!\p"
	.string "Please, follow the ladder up to the top\n"
	.string "of the mountain.$"

AcrisiaCaves_F1_EventScript_Statue_Text_0:
# 67 "data/maps/DiscusForge/scripts.pory"
	.string "An imposing form looms down from the\n"
	.string "pedestal. It seems to resemble an\l"
	.string "ancient Pokémon.$"

AcrisiaCaves_F1_EventScript_KabutoDescription_Text_0:
# 76 "data/maps/DiscusForge/scripts.pory"
	.string "It looks like this Pokémon used to\n"
	.string "scuttle along the sea floor in oceans\l"
	.string "around the world. It was only known\l"
	.string "from fossils until living specimens were\l"
	.string "recently found in the Ilios Region.$"

AcrisiaCaves_F1_EventScript_OmanyteDescription_Text_0:
# 85 "data/maps/DiscusForge/scripts.pory"
	.string "It looks like this Pokémon used to\n"
	.string "float through the ocean in ancient\l"
	.string "times, using internal pumps to shoot\l"
	.string "water and propel itself. Living\l"
	.string "individuals can only be found in the\l"
	.string "Ilios Region.$"

EventScript_KabutoPuzzle_Text_0:
# 118 "data/maps/DiscusForge/scripts.pory"
	.string "The puzzle has been solved! The other\n"
	.string "puzzle must still be completed.$"

EventScript_KabutoPuzzle_Text_1:
# 122 "data/maps/DiscusForge/scripts.pory"
	.string "The puzzles have been solved! Time to\n"
	.string "let the {COLOR GREEN}Elder Followers{COLOR DARK_GRAY} know.$"

AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_LanaIntro::
# 12 "data/maps/DiscusForge/scripts.pory"
	.string "This cave is all dusty and icky. Get me\n"
	.string "outta here!$"

AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_LanaDefeat::
# 16 "data/maps/DiscusForge/scripts.pory"
	.string "Argh, nothing is going right!$"

AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_FraiaIntro::
# 30 "data/maps/DiscusForge/scripts.pory"
	.string "I hear there's an old man keeping cool\n"
	.string "secrets at the end of the cave! I wanna\l"
	.string "see!$"

AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_FraiaDefeat::
# 34 "data/maps/DiscusForge/scripts.pory"
	.string "I guess I'm not ready yet.$"

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


AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Umber::
# 41 "data/maps/DiscusForge/scripts.pory"
	trainerbattle_single TRAINER_ACRISIACAVES_F1_UMBER, AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_UmberIntro, AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_UmberDefeat
# 42 "data/maps/DiscusForge/scripts.pory"
	speakername AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Umber_Text_0
# 43 "data/maps/DiscusForge/scripts.pory"
	msgbox AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Umber_Text_1
# 44 "data/maps/DiscusForge/scripts.pory"
	closemessage
# 45 "data/maps/DiscusForge/scripts.pory"
	release
	end


AcrisiaCaves_F1_EventScript_ScientistBlockingLadder::
# 59 "data/maps/DiscusForge/scripts.pory"
	lock
# 60 "data/maps/DiscusForge/scripts.pory"
	faceplayer
# 61 "data/maps/DiscusForge/scripts.pory"
	speakername AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_Text_0
# 62 "data/maps/DiscusForge/scripts.pory"
	msgbox AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_Text_1
# 63 "data/maps/DiscusForge/scripts.pory"
	closemessage
# 64 "data/maps/DiscusForge/scripts.pory"
	goto_if_set FLAG_SOLVED_KABUTO_PUZZLE, AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_3
AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_1:
# 78 "data/maps/DiscusForge/scripts.pory"
	release
	end

AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_2:
# 66 "data/maps/DiscusForge/scripts.pory"
	setflag FLAG_SOLVED_GYM_2_PUZZLE
# 67 "data/maps/DiscusForge/scripts.pory"
	speakername AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_Text_0
# 68 "data/maps/DiscusForge/scripts.pory"
	msgbox AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_Text_2
# 69 "data/maps/DiscusForge/scripts.pory"
	closemessage
# 70 "data/maps/DiscusForge/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 71 "data/maps/DiscusForge/scripts.pory"
	delay 30
# 72 "data/maps/DiscusForge/scripts.pory"
	removeobject 3
# 73 "data/maps/DiscusForge/scripts.pory"
	removeobject 4
# 74 "data/maps/DiscusForge/scripts.pory"
	delay 30
# 75 "data/maps/DiscusForge/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 76 "data/maps/DiscusForge/scripts.pory"
	delay 20
	goto AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_1

AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_3:
# 64 "data/maps/DiscusForge/scripts.pory"
	goto_if_set FLAG_SOLVED_OMANYTE_PUZZLE, AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_2
	goto AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_1


AcrisiaCaves_F1_EventScript_Statue::
# 84 "data/maps/DiscusForge/scripts.pory"
	lock
# 85 "data/maps/DiscusForge/scripts.pory"
	msgbox AcrisiaCaves_F1_EventScript_Statue_Text_0
# 86 "data/maps/DiscusForge/scripts.pory"
	closemessage
# 87 "data/maps/DiscusForge/scripts.pory"
	release
	end


AcrisiaCaves_F1_EventScript_KabutoDescription::
# 93 "data/maps/DiscusForge/scripts.pory"
	lock
# 94 "data/maps/DiscusForge/scripts.pory"
	msgbox AcrisiaCaves_F1_EventScript_KabutoDescription_Text_0
# 95 "data/maps/DiscusForge/scripts.pory"
	closemessage
# 96 "data/maps/DiscusForge/scripts.pory"
	release
	end


AcrisiaCaves_F1_EventScript_OmanyteDescription::
# 102 "data/maps/DiscusForge/scripts.pory"
	lock
# 103 "data/maps/DiscusForge/scripts.pory"
	msgbox AcrisiaCaves_F1_EventScript_OmanyteDescription_Text_0
# 104 "data/maps/DiscusForge/scripts.pory"
	closemessage
# 105 "data/maps/DiscusForge/scripts.pory"
	release
	end


EventScript_KabutoPuzzle::
# 114 "data/maps/DiscusForge/scripts.pory"
	lockall
# 115 "data/maps/DiscusForge/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 116 "data/maps/DiscusForge/scripts.pory"
	delay 30
# 117 "data/maps/DiscusForge/scripts.pory"
	goto_if_set FLAG_SOLVED_KABUTO_PUZZLE, EventScript_KabutoPuzzle_2
# 123 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8005, FALSE
EventScript_KabutoPuzzle_1:
# 125 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8004, SLIDING_PUZZLE_KABUTO
# 126 "data/maps/DiscusForge/scripts.pory"
	special DoSlidingPuzzle
# 127 "data/maps/DiscusForge/scripts.pory"
	waitstate
# 128 "data/maps/DiscusForge/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_KabutoPuzzle_7
EventScript_KabutoPuzzle_5:
# 143 "data/maps/DiscusForge/scripts.pory"
	releaseall
	end

EventScript_KabutoPuzzle_2:
# 119 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8005, TRUE
	goto EventScript_KabutoPuzzle_1

EventScript_KabutoPuzzle_6:
# 130 "data/maps/DiscusForge/scripts.pory"
	setflag FLAG_SOLVED_KABUTO_PUZZLE
# 131 "data/maps/DiscusForge/scripts.pory"
	delay 30
# 132 "data/maps/DiscusForge/scripts.pory"
	playse SE_BANG
# 133 "data/maps/DiscusForge/scripts.pory"
	delay 30
# 134 "data/maps/DiscusForge/scripts.pory"
	goto_if_unset FLAG_SOLVED_OMANYTE_PUZZLE, EventScript_KabutoPuzzle_10
# 140 "data/maps/DiscusForge/scripts.pory"
	msgbox EventScript_KabutoPuzzle_Text_1
	goto EventScript_KabutoPuzzle_5

EventScript_KabutoPuzzle_7:
# 128 "data/maps/DiscusForge/scripts.pory"
	goto_if_unset FLAG_SOLVED_KABUTO_PUZZLE, EventScript_KabutoPuzzle_6
	goto EventScript_KabutoPuzzle_5

EventScript_KabutoPuzzle_10:
# 136 "data/maps/DiscusForge/scripts.pory"
	msgbox EventScript_KabutoPuzzle_Text_0
	goto EventScript_KabutoPuzzle_5


EventScript_AerodactylPuzzle::
# 149 "data/maps/DiscusForge/scripts.pory"
	lockall
# 150 "data/maps/DiscusForge/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 151 "data/maps/DiscusForge/scripts.pory"
	delay 30
# 152 "data/maps/DiscusForge/scripts.pory"
	goto_if_set FLAG_SOLVED_AERODACTYL_PUZZLE, EventScript_AerodactylPuzzle_2
# 158 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8005, FALSE
EventScript_AerodactylPuzzle_1:
# 160 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8004, SLIDING_PUZZLE_AERODACTYL
# 161 "data/maps/DiscusForge/scripts.pory"
	special DoSlidingPuzzle
# 162 "data/maps/DiscusForge/scripts.pory"
	waitstate
# 163 "data/maps/DiscusForge/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_AerodactylPuzzle_7
EventScript_AerodactylPuzzle_5:
# 168 "data/maps/DiscusForge/scripts.pory"
	releaseall
	end

EventScript_AerodactylPuzzle_2:
# 154 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8005, TRUE
	goto EventScript_AerodactylPuzzle_1

EventScript_AerodactylPuzzle_6:
# 165 "data/maps/DiscusForge/scripts.pory"
	setflag FLAG_SOLVED_AERODACTYL_PUZZLE
# 166 "data/maps/DiscusForge/scripts.pory"
	giveitem ITEM_ULTRA_BALL
	goto EventScript_AerodactylPuzzle_5

EventScript_AerodactylPuzzle_7:
# 163 "data/maps/DiscusForge/scripts.pory"
	goto_if_unset FLAG_SOLVED_AERODACTYL_PUZZLE, EventScript_AerodactylPuzzle_6
	goto EventScript_AerodactylPuzzle_5


EventScript_OmanytePuzzle::
# 174 "data/maps/DiscusForge/scripts.pory"
	lockall
# 175 "data/maps/DiscusForge/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 176 "data/maps/DiscusForge/scripts.pory"
	delay 30
# 177 "data/maps/DiscusForge/scripts.pory"
	goto_if_set FLAG_SOLVED_OMANYTE_PUZZLE, EventScript_OmanytePuzzle_2
# 183 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8005, FALSE
EventScript_OmanytePuzzle_1:
# 185 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8004, SLIDING_PUZZLE_OMANYTE
# 186 "data/maps/DiscusForge/scripts.pory"
	special DoSlidingPuzzle
# 187 "data/maps/DiscusForge/scripts.pory"
	waitstate
# 188 "data/maps/DiscusForge/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_OmanytePuzzle_7
EventScript_OmanytePuzzle_5:
# 203 "data/maps/DiscusForge/scripts.pory"
	releaseall
	end

EventScript_OmanytePuzzle_2:
# 179 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8005, TRUE
	goto EventScript_OmanytePuzzle_1

EventScript_OmanytePuzzle_6:
# 190 "data/maps/DiscusForge/scripts.pory"
	setflag FLAG_SOLVED_OMANYTE_PUZZLE
# 191 "data/maps/DiscusForge/scripts.pory"
	delay 30
# 192 "data/maps/DiscusForge/scripts.pory"
	playse SE_BANG
# 193 "data/maps/DiscusForge/scripts.pory"
	delay 30
# 194 "data/maps/DiscusForge/scripts.pory"
	goto_if_unset FLAG_SOLVED_KABUTO_PUZZLE, EventScript_OmanytePuzzle_10
# 200 "data/maps/DiscusForge/scripts.pory"
	msgbox EventScript_KabutoPuzzle_Text_1
	goto EventScript_OmanytePuzzle_5

EventScript_OmanytePuzzle_7:
# 188 "data/maps/DiscusForge/scripts.pory"
	goto_if_unset FLAG_SOLVED_OMANYTE_PUZZLE, EventScript_OmanytePuzzle_6
	goto EventScript_OmanytePuzzle_5

EventScript_OmanytePuzzle_10:
# 196 "data/maps/DiscusForge/scripts.pory"
	msgbox EventScript_KabutoPuzzle_Text_0
	goto EventScript_OmanytePuzzle_5


EventScript_HoOhPuzzle::
# 209 "data/maps/DiscusForge/scripts.pory"
	lockall
# 210 "data/maps/DiscusForge/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 211 "data/maps/DiscusForge/scripts.pory"
	delay 30
# 212 "data/maps/DiscusForge/scripts.pory"
	goto_if_set FLAG_SOLVED_HO_OH_PUZZLE, EventScript_HoOhPuzzle_2
# 218 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8005, FALSE
EventScript_HoOhPuzzle_1:
# 220 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8004, SLIDING_PUZZLE_HO_OH
# 221 "data/maps/DiscusForge/scripts.pory"
	special DoSlidingPuzzle
# 222 "data/maps/DiscusForge/scripts.pory"
	waitstate
# 223 "data/maps/DiscusForge/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_HoOhPuzzle_7
EventScript_HoOhPuzzle_5:
# 228 "data/maps/DiscusForge/scripts.pory"
	releaseall
	end

EventScript_HoOhPuzzle_2:
# 214 "data/maps/DiscusForge/scripts.pory"
	setvar VAR_0x8005, TRUE
	goto EventScript_HoOhPuzzle_1

EventScript_HoOhPuzzle_6:
# 225 "data/maps/DiscusForge/scripts.pory"
	setflag FLAG_SOLVED_HO_OH_PUZZLE
# 226 "data/maps/DiscusForge/scripts.pory"
	giveitem ITEM_ULTRA_BALL
	goto EventScript_HoOhPuzzle_5

EventScript_HoOhPuzzle_7:
# 223 "data/maps/DiscusForge/scripts.pory"
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
	.string "My Steel-type Pokémon should be a good\n"
	.string "counter to Mattaios' Rock-type\l"
	.string "Pokémon!$"

AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Umber_Text_0:
# 42 "data/maps/DiscusForge/scripts.pory"
	.string "Umber$"

AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Umber_Text_1:
# 43 "data/maps/DiscusForge/scripts.pory"
	.string "I was hoping my Pokémon was magic\n"
	.string "somehow!$"

AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_Text_0:
# 61 "data/maps/DiscusForge/scripts.pory"
	.string "Researcher$"

AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_Text_1:
# 62 "data/maps/DiscusForge/scripts.pory"
	.string "To pass into the deeper level of the\n"
	.string "cave, you must {COLOR GREEN}solve these Ruin\l"
	.string "Puzzles{COLOR DARK_GRAY}.\p"
	.string "Our Gym Leader believes that only those\n"
	.string "who understand the past should be\l"
	.string "considered worthy of earning his Gym\l"
	.string "Badge.$"

AcrisiaCaves_F1_EventScript_ScientistBlockingLadder_Text_2:
# 68 "data/maps/DiscusForge/scripts.pory"
	.string "Could it be...? You solved the Ruin\n"
	.string "Puzzles!\p"
	.string "Climb down the ladder behind us to\n"
	.string "continue your Gym Challenge. Good luck!$"

AcrisiaCaves_F1_EventScript_Statue_Text_0:
# 85 "data/maps/DiscusForge/scripts.pory"
	.string "An imposing form looms down from the\n"
	.string "pedestal. It seems to resemble an\l"
	.string "ancient Pokémon.$"

AcrisiaCaves_F1_EventScript_KabutoDescription_Text_0:
# 94 "data/maps/DiscusForge/scripts.pory"
	.string "It looks like this Pokémon used to\n"
	.string "scuttle along the sea floor in oceans\l"
	.string "around the world. It was only known\l"
	.string "from fossils until living specimens were\l"
	.string "recently found in the Ilios Region.$"

AcrisiaCaves_F1_EventScript_OmanyteDescription_Text_0:
# 103 "data/maps/DiscusForge/scripts.pory"
	.string "It looks like this Pokémon used to\n"
	.string "float through the ocean in ancient\l"
	.string "times, using internal pumps to shoot\l"
	.string "water and propel itself. Living\l"
	.string "individuals can only be found in the\l"
	.string "Ilios Region.$"

EventScript_KabutoPuzzle_Text_0:
# 136 "data/maps/DiscusForge/scripts.pory"
	.string "The puzzle has been solved! The other\n"
	.string "puzzle must still be completed.$"

EventScript_KabutoPuzzle_Text_1:
# 140 "data/maps/DiscusForge/scripts.pory"
	.string "The puzzles have been solved! Time to\n"
	.string "let the {COLOR GREEN}Researchers{COLOR DARK_GRAY} know.$"

AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_LanaIntro::
# 12 "data/maps/DiscusForge/scripts.pory"
	.string "This cave is all dusty and icky. Get me\n"
	.string "outta here!$"

AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_LanaDefeat::
# 16 "data/maps/DiscusForge/scripts.pory"
	.string "Argh, nothing is going right!$"

AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_FraiaIntro::
# 30 "data/maps/DiscusForge/scripts.pory"
	.string "I'm gonna challenge Mattaios soon, just\n"
	.string "you wait!$"

AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_FraiaDefeat::
# 34 "data/maps/DiscusForge/scripts.pory"
	.string "I guess I'm not ready yet.$"

AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_UmberIntro::
# 48 "data/maps/DiscusForge/scripts.pory"
	.string "Don't freak out, but... I think my\n"
	.string "Pokémon is from space.$"

AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_UmberDefeat::
# 52 "data/maps/DiscusForge/scripts.pory"
	.string "I couldn't even win using the powers of\n"
	.string "space?!$"

PythiosCemetery_MapScripts::
# 2 "data/maps/PythiosCemetery/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PythiosCemetery_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PythiosCemetery_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PythiosCemetery/scripts.pory"
	setflashlevel 4
# 4 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 5 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 6 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 7 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 8 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 9 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 10 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 11 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 12 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 13 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 14 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 15 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 16 "data/maps/PythiosCemetery/scripts.pory"
	setobjectaswildencounter 13, ENCOUNTER_LAND
# 17 "data/maps/PythiosCemetery/scripts.pory"
	setobjectaswildencounter 14, ENCOUNTER_LAND
# 18 "data/maps/PythiosCemetery/scripts.pory"
	setobjectaswildencounter 15, ENCOUNTER_LAND
# 19 "data/maps/PythiosCemetery/scripts.pory"
	setobjectaswildencounter 16, ENCOUNTER_LAND
# 20 "data/maps/PythiosCemetery/scripts.pory"
	setobjectaswildencounter 17, ENCOUNTER_LAND
	return


EventScript_KabutoPuzzle::
# 27 "data/maps/PythiosCemetery/scripts.pory"
	lockall
# 28 "data/maps/PythiosCemetery/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 29 "data/maps/PythiosCemetery/scripts.pory"
	delay 30
# 30 "data/maps/PythiosCemetery/scripts.pory"
	goto_if_set FLAG_SOLVED_KABUTO_PUZZLE, EventScript_KabutoPuzzle_2
# 36 "data/maps/PythiosCemetery/scripts.pory"
	setvar VAR_0x8005, FALSE
EventScript_KabutoPuzzle_1:
# 38 "data/maps/PythiosCemetery/scripts.pory"
	setvar VAR_0x8004, SLIDING_PUZZLE_KABUTO
# 39 "data/maps/PythiosCemetery/scripts.pory"
	special DoSlidingPuzzle
# 40 "data/maps/PythiosCemetery/scripts.pory"
	waitstate
# 41 "data/maps/PythiosCemetery/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_KabutoPuzzle_7
EventScript_KabutoPuzzle_5:
# 46 "data/maps/PythiosCemetery/scripts.pory"
	releaseall
	end

EventScript_KabutoPuzzle_2:
# 32 "data/maps/PythiosCemetery/scripts.pory"
	setvar VAR_0x8005, TRUE
	goto EventScript_KabutoPuzzle_1

EventScript_KabutoPuzzle_6:
# 43 "data/maps/PythiosCemetery/scripts.pory"
	setflag FLAG_SOLVED_KABUTO_PUZZLE
# 44 "data/maps/PythiosCemetery/scripts.pory"
	giveitem ITEM_ULTRA_BALL
	goto EventScript_KabutoPuzzle_5

EventScript_KabutoPuzzle_7:
# 41 "data/maps/PythiosCemetery/scripts.pory"
	goto_if_unset FLAG_SOLVED_KABUTO_PUZZLE, EventScript_KabutoPuzzle_6
	goto EventScript_KabutoPuzzle_5


EventScript_AerodactylPuzzle::
# 52 "data/maps/PythiosCemetery/scripts.pory"
	lockall
# 53 "data/maps/PythiosCemetery/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 54 "data/maps/PythiosCemetery/scripts.pory"
	delay 30
# 55 "data/maps/PythiosCemetery/scripts.pory"
	goto_if_set FLAG_SOLVED_AERODACTYL_PUZZLE, EventScript_AerodactylPuzzle_2
# 61 "data/maps/PythiosCemetery/scripts.pory"
	setvar VAR_0x8005, FALSE
EventScript_AerodactylPuzzle_1:
# 63 "data/maps/PythiosCemetery/scripts.pory"
	setvar VAR_0x8004, SLIDING_PUZZLE_AERODACTYL
# 64 "data/maps/PythiosCemetery/scripts.pory"
	special DoSlidingPuzzle
# 65 "data/maps/PythiosCemetery/scripts.pory"
	waitstate
# 66 "data/maps/PythiosCemetery/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_AerodactylPuzzle_7
EventScript_AerodactylPuzzle_5:
# 71 "data/maps/PythiosCemetery/scripts.pory"
	releaseall
	end

EventScript_AerodactylPuzzle_2:
# 57 "data/maps/PythiosCemetery/scripts.pory"
	setvar VAR_0x8005, TRUE
	goto EventScript_AerodactylPuzzle_1

EventScript_AerodactylPuzzle_6:
# 68 "data/maps/PythiosCemetery/scripts.pory"
	setflag FLAG_SOLVED_AERODACTYL_PUZZLE
# 69 "data/maps/PythiosCemetery/scripts.pory"
	giveitem ITEM_ULTRA_BALL
	goto EventScript_AerodactylPuzzle_5

EventScript_AerodactylPuzzle_7:
# 66 "data/maps/PythiosCemetery/scripts.pory"
	goto_if_unset FLAG_SOLVED_AERODACTYL_PUZZLE, EventScript_AerodactylPuzzle_6
	goto EventScript_AerodactylPuzzle_5


EventScript_OmanytePuzzle::
# 77 "data/maps/PythiosCemetery/scripts.pory"
	lockall
# 78 "data/maps/PythiosCemetery/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 79 "data/maps/PythiosCemetery/scripts.pory"
	delay 30
# 80 "data/maps/PythiosCemetery/scripts.pory"
	goto_if_set FLAG_SOLVED_OMANYTE_PUZZLE, EventScript_OmanytePuzzle_2
# 86 "data/maps/PythiosCemetery/scripts.pory"
	setvar VAR_0x8005, FALSE
EventScript_OmanytePuzzle_1:
# 88 "data/maps/PythiosCemetery/scripts.pory"
	setvar VAR_0x8004, SLIDING_PUZZLE_OMANYTE
# 89 "data/maps/PythiosCemetery/scripts.pory"
	special DoSlidingPuzzle
# 90 "data/maps/PythiosCemetery/scripts.pory"
	waitstate
# 91 "data/maps/PythiosCemetery/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_OmanytePuzzle_7
EventScript_OmanytePuzzle_5:
# 96 "data/maps/PythiosCemetery/scripts.pory"
	releaseall
	end

EventScript_OmanytePuzzle_2:
# 82 "data/maps/PythiosCemetery/scripts.pory"
	setvar VAR_0x8005, TRUE
	goto EventScript_OmanytePuzzle_1

EventScript_OmanytePuzzle_6:
# 93 "data/maps/PythiosCemetery/scripts.pory"
	setflag FLAG_SOLVED_OMANYTE_PUZZLE
# 94 "data/maps/PythiosCemetery/scripts.pory"
	giveitem ITEM_ULTRA_BALL
	goto EventScript_OmanytePuzzle_5

EventScript_OmanytePuzzle_7:
# 91 "data/maps/PythiosCemetery/scripts.pory"
	goto_if_unset FLAG_SOLVED_OMANYTE_PUZZLE, EventScript_OmanytePuzzle_6
	goto EventScript_OmanytePuzzle_5


EventScript_HoOhPuzzle::
# 102 "data/maps/PythiosCemetery/scripts.pory"
	lockall
# 103 "data/maps/PythiosCemetery/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 104 "data/maps/PythiosCemetery/scripts.pory"
	delay 30
# 105 "data/maps/PythiosCemetery/scripts.pory"
	goto_if_set FLAG_SOLVED_HO_OH_PUZZLE, EventScript_HoOhPuzzle_2
# 111 "data/maps/PythiosCemetery/scripts.pory"
	setvar VAR_0x8005, FALSE
EventScript_HoOhPuzzle_1:
# 113 "data/maps/PythiosCemetery/scripts.pory"
	setvar VAR_0x8004, SLIDING_PUZZLE_HO_OH
# 114 "data/maps/PythiosCemetery/scripts.pory"
	special DoSlidingPuzzle
# 115 "data/maps/PythiosCemetery/scripts.pory"
	waitstate
# 116 "data/maps/PythiosCemetery/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_HoOhPuzzle_7
EventScript_HoOhPuzzle_5:
# 121 "data/maps/PythiosCemetery/scripts.pory"
	releaseall
	end

EventScript_HoOhPuzzle_2:
# 107 "data/maps/PythiosCemetery/scripts.pory"
	setvar VAR_0x8005, TRUE
	goto EventScript_HoOhPuzzle_1

EventScript_HoOhPuzzle_6:
# 118 "data/maps/PythiosCemetery/scripts.pory"
	setflag FLAG_SOLVED_HO_OH_PUZZLE
# 119 "data/maps/PythiosCemetery/scripts.pory"
	giveitem ITEM_ULTRA_BALL
	goto EventScript_HoOhPuzzle_5

EventScript_HoOhPuzzle_7:
# 116 "data/maps/PythiosCemetery/scripts.pory"
	goto_if_unset FLAG_SOLVED_HO_OH_PUZZLE, EventScript_HoOhPuzzle_6
	goto EventScript_HoOhPuzzle_5


PythiosCemetery_EventScript_Linoone::
# 127 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 128 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 129 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Linoone_Text_0
# 130 "data/maps/PythiosCemetery/scripts.pory"
	playmoncry SPECIES_LINOONE_GALARIAN, CRY_MODE_NORMAL
# 131 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Linoone_Text_1
# 132 "data/maps/PythiosCemetery/scripts.pory"
	waitmoncry
# 133 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 134 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1::
# 140 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_CHIMERA_GRUNT_1, PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt1Intro, PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt1Defeat
# 141 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_0
# 142 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_1
# 143 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 144 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt2::
# 158 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_CHIMERA_GRUNT_2, PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt2Intro, PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt2Defeat
# 159 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_0
# 160 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt2_Text_0
# 161 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 162 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin::
# 176 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 177 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 178 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_0
# 179 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_1
# 180 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 181 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_no_intro TRAINER_PYTHIOSCEMETERY_CHIMERA_ADMIN, PythiosCemetery_Text_Trainer_PythiosCemetery_AdminDefeat
# 183 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 184 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 185 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_0
# 186 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_2
# 187 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 188 "data/maps/PythiosCemetery/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 189 "data/maps/PythiosCemetery/scripts.pory"
	delay 30
# 190 "data/maps/PythiosCemetery/scripts.pory"
	removeobject 4
# 191 "data/maps/PythiosCemetery/scripts.pory"
	removeobject 5
# 192 "data/maps/PythiosCemetery/scripts.pory"
	removeobject 6
# 193 "data/maps/PythiosCemetery/scripts.pory"
	removeobject 7
# 194 "data/maps/PythiosCemetery/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 195 "data/maps/PythiosCemetery/scripts.pory"
	delay 30
# 196 "data/maps/PythiosCemetery/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 197 "data/maps/PythiosCemetery/scripts.pory"
	delay 20
# 198 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_3
# 199 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 200 "data/maps/PythiosCemetery/scripts.pory"
	giveitem ITEM_HM_FLASH
# 201 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Artist::
# 211 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 212 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 213 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Artist_Text_0
# 214 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Artist_Text_1
# 215 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 216 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria::
# 222 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_MARIA, PythiosCemetery_Text_Trainer_PythiosCemetery_MariaIntro, PythiosCemetery_Text_Trainer_PythiosCemetery_MariaDefeat
# 223 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria_Text_0
# 224 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria_Text_1
# 225 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 226 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos::
# 240 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_ARKOS, PythiosCemetery_Text_Trainer_PythiosCemetery_ArkosIntro, PythiosCemetery_Text_Trainer_PythiosCemetery_ArkosDefeat
# 241 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos_Text_0
# 242 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos_Text_1
# 243 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 244 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Galei::
# 258 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_GALEI, PythiosCemetery_Text_Trainer_PythiosCemetery_GaleiIntro, PythiosCemetery_Text_Trainer_PythiosCemetery_GaleiDefeat
# 259 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Galei_Text_0
# 260 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos_Text_1
# 261 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 262 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_OldWoman::
# 276 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 277 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 278 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_OldWoman_Text_0
# 279 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_OldWoman_Text_1
# 280 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 281 "data/maps/PythiosCemetery/scripts.pory"
	applymovement 12, Common_Movement_FaceUp
# 282 "data/maps/PythiosCemetery/scripts.pory"
	waitmovement 0
# 283 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Linoone_Text_0:
# 129 "data/maps/PythiosCemetery/scripts.pory"
	.string "Linoone$"

PythiosCemetery_EventScript_Linoone_Text_1:
# 131 "data/maps/PythiosCemetery/scripts.pory"
	.string "Hissss!$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_0:
# 141 "data/maps/PythiosCemetery/scripts.pory"
	.string "Grunt$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_1:
# 142 "data/maps/PythiosCemetery/scripts.pory"
	.string "Look, just leave and don't cause\n"
	.string "trouble.$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt2_Text_0:
# 160 "data/maps/PythiosCemetery/scripts.pory"
	.string "I hope the Admin didn't see me lose like\n"
	.string "that.$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_0:
# 178 "data/maps/PythiosCemetery/scripts.pory"
	.string "Chimera Admin$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_1:
# 179 "data/maps/PythiosCemetery/scripts.pory"
	.string "Wh-what? How did you reach us? I\n"
	.string "thought that we were the only ones who\l"
	.string "could get through the Cemetery, thanks\l"
	.string "to our {COLOR GREEN}Flash HM{COLOR DARK_GRAY}.\p"
	.string "No matter. I'd recognize the Trainer\n"
	.string "messing up our plans anywhere, even in\l"
	.string "the dark. I'll stop you, here and now!$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_2:
# 186 "data/maps/PythiosCemetery/scripts.pory"
	.string "Eek! We'd better scram!$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_3:
# 198 "data/maps/PythiosCemetery/scripts.pory"
	.string "The Team Chimera members dropped\n"
	.string "something while they ran...$"

PythiosCemetery_EventScript_Artist_Text_0:
# 213 "data/maps/PythiosCemetery/scripts.pory"
	.string "Artist$"

PythiosCemetery_EventScript_Artist_Text_1:
# 214 "data/maps/PythiosCemetery/scripts.pory"
	.string "I'd love to make paintings of the\n"
	.string "Pythios Cemetery, but it's so dark and\l"
	.string "rainy that I can't see!$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria_Text_0:
# 223 "data/maps/PythiosCemetery/scripts.pory"
	.string "Maria$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria_Text_1:
# 224 "data/maps/PythiosCemetery/scripts.pory"
	.string "I wonder if there are new, cute Pokémon\n"
	.string "to catch here.$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos_Text_0:
# 241 "data/maps/PythiosCemetery/scripts.pory"
	.string "Arkos$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos_Text_1:
# 242 "data/maps/PythiosCemetery/scripts.pory"
	.string "That battle cheered me up a bit.$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Galei_Text_0:
# 259 "data/maps/PythiosCemetery/scripts.pory"
	.string "Galei$"

PythiosCemetery_EventScript_OldWoman_Text_0:
# 278 "data/maps/PythiosCemetery/scripts.pory"
	.string "Old Woman$"

PythiosCemetery_EventScript_OldWoman_Text_1:
# 279 "data/maps/PythiosCemetery/scripts.pory"
	.string "People tend to stay away from\n"
	.string "cemeteries, so the graves fall into\l"
	.string "ruin. I'm trying to clean some of them\l"
	.string "up.$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt1Intro::
# 147 "data/maps/PythiosCemetery/scripts.pory"
	.string "Hey, you! This is our private Team\n"
	.string "Chimera meeting spot!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt1Defeat::
# 151 "data/maps/PythiosCemetery/scripts.pory"
	.string "Darn, we might get cleaned out!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt2Intro::
# 165 "data/maps/PythiosCemetery/scripts.pory"
	.string "You'll never reach the Admin!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt2Defeat::
# 169 "data/maps/PythiosCemetery/scripts.pory"
	.string "Okay, you might reach the Admin...$"

PythiosCemetery_Text_Trainer_PythiosCemetery_AdminDefeat::
# 204 "data/maps/PythiosCemetery/scripts.pory"
	.string "Uh oh, this isn't good...!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_MariaIntro::
# 229 "data/maps/PythiosCemetery/scripts.pory"
	.string "My poor Pokémon are getting lost in\n"
	.string "this darkness!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_MariaDefeat::
# 233 "data/maps/PythiosCemetery/scripts.pory"
	.string "Where'd they go?$"

PythiosCemetery_Text_Trainer_PythiosCemetery_ArkosIntro::
# 247 "data/maps/PythiosCemetery/scripts.pory"
	.string "I'm here to sulk...$"

PythiosCemetery_Text_Trainer_PythiosCemetery_ArkosDefeat::
# 251 "data/maps/PythiosCemetery/scripts.pory"
	.string "I can't even sulk in peace, huh?$"

PythiosCemetery_Text_Trainer_PythiosCemetery_GaleiIntro::
# 265 "data/maps/PythiosCemetery/scripts.pory"
	.string "I'm here to sulk...$"

PythiosCemetery_Text_Trainer_PythiosCemetery_GaleiDefeat::
# 269 "data/maps/PythiosCemetery/scripts.pory"
	.string "I can't even sulk in peace, huh?$"

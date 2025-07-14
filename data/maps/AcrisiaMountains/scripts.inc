AcrisiaMountains_MapScripts::
# 2 "data/maps/AcrisiaMountains/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AcrisiaMountains_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AcrisiaMountains_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 4 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 5 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 6 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 7 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 8 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 9 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 10 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 11 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 12 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 13 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 14 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 15 "data/maps/AcrisiaMountains/scripts.pory"
	setobjectaswildencounter 15, ENCOUNTER_LAND
# 16 "data/maps/AcrisiaMountains/scripts.pory"
	setobjectaswildencounter 16, ENCOUNTER_LAND
# 17 "data/maps/AcrisiaMountains/scripts.pory"
	setobjectaswildencounter 17, ENCOUNTER_LAND
# 18 "data/maps/AcrisiaMountains/scripts.pory"
	setobjectaswildencounter 18, ENCOUNTER_LAND
# 19 "data/maps/AcrisiaMountains/scripts.pory"
	setobjectaswildencounter 19, ENCOUNTER_LAND
	return


AcrisiaMountains_EventScript_DirectionSign::
# 25 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 26 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_DirectionSign_Text_0
# 27 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 28 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_UniversityStudentRouteCheck::
# 34 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 35 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 36 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_UniversityStudentRouteCheck_Text_0
# 38 "data/maps/AcrisiaMountains/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_ACRISIA_MTNS, AcrisiaMountains_EventScript_UniversityStudentRouteCheck_2
# 45 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_UniversityStudentRouteCheck_Text_2
# 46 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 47 "data/maps/AcrisiaMountains/scripts.pory"
	special CheckRouteCaptureProgress
# 48 "data/maps/AcrisiaMountains/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AcrisiaMountains_EventScript_UniversityStudentRouteCheck_5
AcrisiaMountains_EventScript_UniversityStudentRouteCheck_1:
# 65 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end

AcrisiaMountains_EventScript_UniversityStudentRouteCheck_2:
# 40 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_UniversityStudentRouteCheck_Text_1
# 41 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
	goto AcrisiaMountains_EventScript_UniversityStudentRouteCheck_1

AcrisiaMountains_EventScript_UniversityStudentRouteCheck_5:
# 50 "data/maps/AcrisiaMountains/scripts.pory"
	delay 20
# 51 "data/maps/AcrisiaMountains/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 52 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_UniversityStudentRouteCheck_Text_0
# 53 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_UniversityStudentRouteCheck_Text_3
# 54 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 55 "data/maps/AcrisiaMountains/scripts.pory"
	delay 5
# 58 "data/maps/AcrisiaMountains/scripts.pory"
	giveitem ITEM_MOON_BALL, 15
# 59 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 61 "data/maps/AcrisiaMountains/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_ACRISIA_MTNS
	goto AcrisiaMountains_EventScript_UniversityStudentRouteCheck_1


AcrisiaMountains_EventScript_RailCrossingSign::
# 71 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 72 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_RailCrossingSign_Text_0
# 73 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 74 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_RockExploringHiker::
# 80 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 81 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 82 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_RockExploringHiker_Text_0
# 83 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_RockExploringHiker_Text_1
# 84 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 85 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_OuraniTraining::
# 91 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 92 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_OuraniTraining_Text_0
# 93 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_OuraniTraining_Text_1
# 94 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 95 "data/maps/AcrisiaMountains/scripts.pory"
	delay 5
# 96 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_OuraniTraining_Text_2
# 97 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 98 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Larvitar::
# 104 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 105 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Larvitar_Text_0
# 106 "data/maps/AcrisiaMountains/scripts.pory"
	playmoncry SPECIES_LARVITAR, CRY_MODE_NORMAL
# 107 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Larvitar_Text_1
# 108 "data/maps/AcrisiaMountains/scripts.pory"
	waitmoncry
# 109 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 110 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Boy3::
# 116 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 117 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 118 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Boy3_Text_0
# 119 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Boy3_Text_1
# 120 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 121 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_MachoBraceMan::
# 127 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 128 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 129 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_MachoBraceMan_Text_0
# 130 "data/maps/AcrisiaMountains/scripts.pory"
	goto_if_set FLAG_GOT_MACHO_BRACE, AcrisiaMountains_EventScript_MachoBraceMan_2
# 137 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_MachoBraceMan_Text_2
# 138 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 139 "data/maps/AcrisiaMountains/scripts.pory"
	giveitem ITEM_MACHO_BRACE
# 140 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_MachoBraceMan_Text_0
# 141 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_MachoBraceMan_Text_3
# 142 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 143 "data/maps/AcrisiaMountains/scripts.pory"
	setflag FLAG_GOT_MACHO_BRACE
AcrisiaMountains_EventScript_MachoBraceMan_1:
# 145 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end

AcrisiaMountains_EventScript_MachoBraceMan_2:
# 132 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_MachoBraceMan_Text_1
# 133 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
	goto AcrisiaMountains_EventScript_MachoBraceMan_1


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre::
# 151 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_TYRE, AcrisiaMountains_Text_Trainer_AcrisiaMtns_TyreIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_TyreDefeat
# 152 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre_Text_0
# 153 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre_Text_1
# 154 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 155 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa::
# 169 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_ELISSA, AcrisiaMountains_Text_Trainer_AcrisiaMtns_ElissaIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_ElissaDefeat
# 170 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa_Text_0
# 171 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa_Text_1
# 172 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 173 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf::
# 187 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_ULF, AcrisiaMountains_Text_Trainer_AcrisiaMtns_UlfIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_UlfDefeat
# 188 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf_Text_0
# 189 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf_Text_1
# 190 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 191 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma::
# 205 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_JAMMA, AcrisiaMountains_Text_Trainer_AcrisiaMtns_JammaIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_JammaDefeat
# 206 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma_Text_0
# 207 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma_Text_1
# 208 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 209 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg::
# 223 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_GREG, AcrisiaMountains_Text_Trainer_AcrisiaMtns_GregIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_GregDefeat
# 224 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg_Text_0
# 225 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg_Text_1
# 226 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 227 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_BugCatcherBoy::
# 241 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 242 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 243 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_BugCatcherBoy_Text_0
# 244 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_BugCatcherBoy_Text_1
# 245 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 246 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh::
# 252 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_HUGH, AcrisiaMountains_Text_Trainer_AcrisiaMtns_HughIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_HughDefeat
# 253 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh_Text_0
# 254 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh_Text_1
# 255 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 256 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_LassExploringRuins::
# 270 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 271 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 272 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_LassExploringRuins_Text_0
# 273 "data/maps/AcrisiaMountains/scripts.pory"
	goto_if_unset FLAG_SHOWED_LASS_BALTOY_IN_MOUNTAINS, AcrisiaMountains_EventScript_LassExploringRuins_2
# 306 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_LassExploringRuins_Text_3
# 307 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
AcrisiaMountains_EventScript_LassExploringRuins_1:
# 309 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end

AcrisiaMountains_EventScript_LassExploringRuins_2:
# 275 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_LassExploringRuins_Text_1
# 276 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 278 "data/maps/AcrisiaMountains/scripts.pory"
	getcaughtmon SPECIES_BALTOY
# 279 "data/maps/AcrisiaMountains/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AcrisiaMountains_EventScript_LassExploringRuins_5
# 296 "data/maps/AcrisiaMountains/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_BALTOY_DUSK_STONE
# 297 "data/maps/AcrisiaMountains/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaMountains_EventScript_LassExploringRuins_8
	goto AcrisiaMountains_EventScript_LassExploringRuins_1

AcrisiaMountains_EventScript_LassExploringRuins_5:
# 281 "data/maps/AcrisiaMountains/scripts.pory"
	delay 30
# 282 "data/maps/AcrisiaMountains/scripts.pory"
	applymovement 20, Common_Movement_ExclamationMark
# 283 "data/maps/AcrisiaMountains/scripts.pory"
	waitmovement 0
# 284 "data/maps/AcrisiaMountains/scripts.pory"
	delay 20
# 285 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_LassExploringRuins_Text_0
# 286 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_LassExploringRuins_Text_2
# 287 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 288 "data/maps/AcrisiaMountains/scripts.pory"
	giveitem ITEM_DUSK_STONE
# 289 "data/maps/AcrisiaMountains/scripts.pory"
	setflag FLAG_SHOWED_LASS_BALTOY_IN_MOUNTAINS
# 291 "data/maps/AcrisiaMountains/scripts.pory"
	delay 20
# 292 "data/maps/AcrisiaMountains/scripts.pory"
	completequest QUEST_BALTOY_DUSK_STONE
	goto AcrisiaMountains_EventScript_LassExploringRuins_1

AcrisiaMountains_EventScript_LassExploringRuins_8:
# 299 "data/maps/AcrisiaMountains/scripts.pory"
	delay 20
# 300 "data/maps/AcrisiaMountains/scripts.pory"
	startquest QUEST_BALTOY_DUSK_STONE
	goto AcrisiaMountains_EventScript_LassExploringRuins_1


AcrisiaMountains_EventScript_DirectionSign_Text_0:
# 26 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Acrisia Mountains\n"
	.string "A Rocky, Untamed Wilderness\p"
	.string "Acrisia City {RIGHT_ARROW}$"

AcrisiaMountains_EventScript_UniversityStudentRouteCheck_Text_0:
# 36 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Uni. Student$"

AcrisiaMountains_EventScript_UniversityStudentRouteCheck_Text_1:
# 40 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

AcrisiaMountains_EventScript_UniversityStudentRouteCheck_Text_2:
# 45 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Chaire (Hyeh-rei)! I'm a student from\n"
	.string "the Acrisia University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in the Acrisia Mountains.\l"
	.string "If you've caught all the Pokémon here,\l"
	.string "please let me know.$"

AcrisiaMountains_EventScript_UniversityStudentRouteCheck_Text_3:
# 53 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

AcrisiaMountains_EventScript_RailCrossingSign_Text_0:
# 72 "data/maps/AcrisiaMountains/scripts.pory"
	.string "A Note for Passing Trainers\n"
	.string "The Minecart Railway is now open for\l"
	.string "pedestrians! Walk along the historic\l"
	.string "tracks to {COLOR GREEN}cross over Acrisia City{COLOR DARK_GRAY},\l"
	.string "towards Riverwalk Trail and {COLOR GREEN}Kalami City{COLOR DARK_GRAY}\l"
	.string "to the east.$"

AcrisiaMountains_EventScript_RockExploringHiker_Text_0:
# 82 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Archaeologist$"

AcrisiaMountains_EventScript_RockExploringHiker_Text_1:
# 83 "data/maps/AcrisiaMountains/scripts.pory"
	.string "The ruins of bygone times are haunting.\n"
	.string "Ilios is covered in them, and some are\l"
	.string "thousands of years old. You never know\l"
	.string "what you'll find hiding under a rock!$"

AcrisiaMountains_EventScript_OuraniTraining_Text_0:
# 92 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Ourani$"

AcrisiaMountains_EventScript_OuraniTraining_Text_1:
# 93 "data/maps/AcrisiaMountains/scripts.pory"
	.string "C'mon, Larvitar! There's a whole new\n"
	.string "batch of University Students coming\l"
	.string "through the Gym Challenge. We need to\l"
	.string "be strong enough to give 'em a real\l"
	.string "battle!$"

AcrisiaMountains_EventScript_OuraniTraining_Text_2:
# 96 "data/maps/AcrisiaMountains/scripts.pory"
	.string "She's too focused on training to move...$"

AcrisiaMountains_EventScript_Larvitar_Text_0:
# 105 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Larvitar$"

AcrisiaMountains_EventScript_Larvitar_Text_1:
# 107 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Graahhh!$"

AcrisiaMountains_EventScript_Boy3_Text_0:
# 118 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Fit Man$"

AcrisiaMountains_EventScript_Boy3_Text_1:
# 119 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Climbing this mountain is good exercise!\n"
	.string "But wow, there are so many trainers\l"
	.string "further on. I hear shouts and battles\l"
	.string "from up in the caves!$"

AcrisiaMountains_EventScript_MachoBraceMan_Text_0:
# 129 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Muscleman$"

AcrisiaMountains_EventScript_MachoBraceMan_Text_1:
# 132 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Use that Macho Brace ta get yer\n"
	.string "Pokémon nice 'n strong!$"

AcrisiaMountains_EventScript_MachoBraceMan_Text_2:
# 137 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Chaire, little buddy! Ya think ya can\n"
	.string "swim up that waterfall? I've been tryin'\l"
	.string "every day.\p"
	.string "I've been holdin' this, but it hasn't\n"
	.string "made me stronger. Maybe it'll help ya\l"
	.string "with somethin'.$"

AcrisiaMountains_EventScript_MachoBraceMan_Text_3:
# 141 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Pokémon holding that Macho Brace get\n"
	.string "nice 'n strong! I guess it doesn't work\l"
	.string "on people, though.$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre_Text_0:
# 152 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Tyre$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre_Text_1:
# 153 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Pokémon have plenty of skills outside\n"
	.string "of battle. For example, to reach this\l"
	.string "area your Pokémon had to be able to cut\l"
	.string "through those shrubs.$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa_Text_0:
# 170 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Elissa$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa_Text_1:
# 171 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I've got to replace Hypnosis in\n"
	.string "Drowzee's moveset.$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf_Text_0:
# 188 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Ulf$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf_Text_1:
# 189 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Look kid, I'm not gonna be the one to\n"
	.string "fix up the rails. I just mean that\l"
	.string "someone should... someone else, that is!$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma_Text_0:
# 206 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Jamma$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma_Text_1:
# 207 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I'm always up for a battle, but my\n"
	.string "Pokémon aren't. They just need more\l"
	.string "training!$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg_Text_0:
# 224 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Greg$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg_Text_1:
# 225 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I'm hoping to find more rare Pokémon up\n"
	.string "here. Have you seen any?$"

AcrisiaMountains_EventScript_BugCatcherBoy_Text_0:
# 243 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Bug Catcher$"

AcrisiaMountains_EventScript_BugCatcherBoy_Text_1:
# 244 "data/maps/AcrisiaMountains/scripts.pory"
	.string "So... like, where are all the bugs?\p"
	.string "I found a Klawf earlier, but I'm not sure\n"
	.string "if that's a bug. I guess it has\l"
	.string "'bug-eyes' though, ehehe!$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh_Text_0:
# 253 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Hugh$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh_Text_1:
# 254 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Good luck in the Acrisia Caves. You've\n"
	.string "certainly got potential, based on our\l"
	.string "battle!$"

AcrisiaMountains_EventScript_LassExploringRuins_Text_0:
# 272 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Lass$"

AcrisiaMountains_EventScript_LassExploringRuins_Text_1:
# 275 "data/maps/AcrisiaMountains/scripts.pory"
	.string "There are lots of ancient ruins this far\n"
	.string "up the mountains. I wish we knew more\l"
	.string "about what came before us...\p"
	.string "The Pokémon {COLOR GREEN}Baltoy{COLOR DARK_GRAY} is said to be from\n"
	.string "an old civilization. I've always wanted\l"
	.string "to see one!$"

AcrisiaMountains_EventScript_LassExploringRuins_Text_2:
# 286 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Hey! That's the Pokédex entry for\n"
	.string "Baltoy!\p"
	.string "Thanks for showing me. Maybe I'll check\n"
	.string "out the University for more Pokédex\l"
	.string "information. Here, take this cool stone\l"
	.string "I found around the Mountains.$"

AcrisiaMountains_EventScript_LassExploringRuins_Text_3:
# 306 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I can't wait to check out the\n"
	.string "University and learn more about Baltoy!\l"
	.string "I want to figure out everything about\l"
	.string "the past.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_TyreIntro::
# 158 "data/maps/AcrisiaMountains/scripts.pory"
	.string "My Pokémon are training to throw rocks\n"
	.string "using their Psychic powers!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_TyreDefeat::
# 162 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Looks like they need more work.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_ElissaIntro::
# 176 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Zzz... augh, my Pokémon keeps putting me\n"
	.string "to sleep...$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_ElissaDefeat::
# 180 "data/maps/AcrisiaMountains/scripts.pory"
	.string "...zzz...$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_UlfIntro::
# 194 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Someone should really clean up these\n"
	.string "old rails.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_UlfDefeat::
# 198 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Nothing to be done, then.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_JammaIntro::
# 212 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Hyah! Hrah! Come on, fight me!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_JammaDefeat::
# 216 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Uh oh! Looks like I'd better hike back\n"
	.string "to a Pokémon Center.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_GregIntro::
# 230 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Ehehe, I bet you've never seen THESE\n"
	.string "Pokémon!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_GregDefeat::
# 234 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Well, I guess I stand corrected.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_HughIntro::
# 259 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I make sure no weak trainers get into\n"
	.string "the Acrisia Caves. Let's see if you're\l"
	.string "strong enough!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_HughDefeat::
# 263 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Wow, you're ready!$"

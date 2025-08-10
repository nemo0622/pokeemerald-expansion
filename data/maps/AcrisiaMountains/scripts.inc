AcrisiaMountains_MapScripts::
# 2 "data/maps/AcrisiaMountains/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AcrisiaMountains_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AcrisiaMountains_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/AcrisiaMountains/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, AcrisiaMountains_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
AcrisiaMountains_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 9 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 10 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 11 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 12 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 13 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 14 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 15 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 16 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 17 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 18 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 19 "data/maps/AcrisiaMountains/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 20 "data/maps/AcrisiaMountains/scripts.pory"
	setobjectaswildencounter 15, ENCOUNTER_LAND
# 21 "data/maps/AcrisiaMountains/scripts.pory"
	setobjectaswildencounter 16, ENCOUNTER_LAND
# 22 "data/maps/AcrisiaMountains/scripts.pory"
	setobjectaswildencounter 17, ENCOUNTER_LAND
# 23 "data/maps/AcrisiaMountains/scripts.pory"
	setobjectaswildencounter 18, ENCOUNTER_LAND
# 24 "data/maps/AcrisiaMountains/scripts.pory"
	setobjectaswildencounter 19, ENCOUNTER_LAND
	return

AcrisiaMountains_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/AcrisiaMountains/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto AcrisiaMountains_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


AcrisiaMountains_EventScript_DirectionSign::
# 30 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 31 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_DirectionSign_Text_0
# 32 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 33 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_UniversityStudentRouteCheck::
# 39 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 40 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 41 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_UniversityStudentRouteCheck_Text_0
# 43 "data/maps/AcrisiaMountains/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_ACRISIA_MTNS, AcrisiaMountains_EventScript_UniversityStudentRouteCheck_2
# 50 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_UniversityStudentRouteCheck_Text_2
# 51 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 52 "data/maps/AcrisiaMountains/scripts.pory"
	special CheckRouteCaptureProgress
# 53 "data/maps/AcrisiaMountains/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AcrisiaMountains_EventScript_UniversityStudentRouteCheck_5
AcrisiaMountains_EventScript_UniversityStudentRouteCheck_1:
# 70 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end

AcrisiaMountains_EventScript_UniversityStudentRouteCheck_2:
# 45 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_UniversityStudentRouteCheck_Text_1
# 46 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
	goto AcrisiaMountains_EventScript_UniversityStudentRouteCheck_1

AcrisiaMountains_EventScript_UniversityStudentRouteCheck_5:
# 55 "data/maps/AcrisiaMountains/scripts.pory"
	delay 20
# 56 "data/maps/AcrisiaMountains/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 57 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_UniversityStudentRouteCheck_Text_0
# 58 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_UniversityStudentRouteCheck_Text_3
# 59 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 60 "data/maps/AcrisiaMountains/scripts.pory"
	delay 5
# 63 "data/maps/AcrisiaMountains/scripts.pory"
	giveitem ITEM_MOON_BALL, 15
# 64 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 66 "data/maps/AcrisiaMountains/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_ACRISIA_MTNS
	goto AcrisiaMountains_EventScript_UniversityStudentRouteCheck_1


AcrisiaMountains_EventScript_RailCrossingSign::
# 76 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 77 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_RailCrossingSign_Text_0
# 78 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 79 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_RockExploringHiker::
# 85 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 86 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 87 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_RockExploringHiker_Text_0
# 88 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_RockExploringHiker_Text_1
# 89 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 90 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_OuraniTraining::
# 96 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 97 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_OuraniTraining_Text_0
# 98 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_OuraniTraining_Text_1
# 99 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 100 "data/maps/AcrisiaMountains/scripts.pory"
	delay 5
# 101 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_OuraniTraining_Text_2
# 102 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 103 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Larvitar::
# 109 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 110 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Larvitar_Text_0
# 111 "data/maps/AcrisiaMountains/scripts.pory"
	playmoncry SPECIES_LARVITAR, CRY_MODE_NORMAL
# 112 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Larvitar_Text_1
# 113 "data/maps/AcrisiaMountains/scripts.pory"
	waitmoncry
# 114 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 115 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Boy3::
# 121 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 122 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 123 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Boy3_Text_0
# 124 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Boy3_Text_1
# 125 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 126 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_MachoBraceMan::
# 132 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 133 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 134 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_MachoBraceMan_Text_0
# 135 "data/maps/AcrisiaMountains/scripts.pory"
	goto_if_set FLAG_GOT_MACHO_BRACE, AcrisiaMountains_EventScript_MachoBraceMan_2
# 142 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_MachoBraceMan_Text_2
# 143 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 144 "data/maps/AcrisiaMountains/scripts.pory"
	giveitem ITEM_MACHO_BRACE
# 145 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_MachoBraceMan_Text_0
# 146 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_MachoBraceMan_Text_3
# 147 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 148 "data/maps/AcrisiaMountains/scripts.pory"
	setflag FLAG_GOT_MACHO_BRACE
AcrisiaMountains_EventScript_MachoBraceMan_1:
# 150 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end

AcrisiaMountains_EventScript_MachoBraceMan_2:
# 137 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_MachoBraceMan_Text_1
# 138 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
	goto AcrisiaMountains_EventScript_MachoBraceMan_1


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre::
# 156 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_TYRE, AcrisiaMountains_Text_Trainer_AcrisiaMtns_TyreIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_TyreDefeat
# 157 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre_Text_0
# 158 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre_Text_1
# 159 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 160 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa::
# 174 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_ELISSA, AcrisiaMountains_Text_Trainer_AcrisiaMtns_ElissaIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_ElissaDefeat
# 175 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa_Text_0
# 176 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa_Text_1
# 177 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 178 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf::
# 192 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_ULF, AcrisiaMountains_Text_Trainer_AcrisiaMtns_UlfIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_UlfDefeat
# 193 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf_Text_0
# 194 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf_Text_1
# 195 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 196 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma::
# 210 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_JAMMA, AcrisiaMountains_Text_Trainer_AcrisiaMtns_JammaIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_JammaDefeat
# 211 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma_Text_0
# 212 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma_Text_1
# 213 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 214 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg::
# 228 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_GREG, AcrisiaMountains_Text_Trainer_AcrisiaMtns_GregIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_GregDefeat
# 229 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg_Text_0
# 230 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg_Text_1
# 231 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 232 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_BugCatcherBoy::
# 246 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 247 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 248 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_BugCatcherBoy_Text_0
# 249 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_BugCatcherBoy_Text_1
# 250 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 251 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh::
# 257 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_HUGH, AcrisiaMountains_Text_Trainer_AcrisiaMtns_HughIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_HughDefeat
# 258 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh_Text_0
# 259 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh_Text_1
# 260 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 261 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_LassExploringRuins::
# 275 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 276 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 277 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_LassExploringRuins_Text_0
# 278 "data/maps/AcrisiaMountains/scripts.pory"
	goto_if_unset FLAG_SHOWED_LASS_BALTOY_IN_MOUNTAINS, AcrisiaMountains_EventScript_LassExploringRuins_2
# 311 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_LassExploringRuins_Text_3
# 312 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
AcrisiaMountains_EventScript_LassExploringRuins_1:
# 314 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end

AcrisiaMountains_EventScript_LassExploringRuins_2:
# 280 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_LassExploringRuins_Text_1
# 281 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 283 "data/maps/AcrisiaMountains/scripts.pory"
	getcaughtmon SPECIES_BALTOY
# 284 "data/maps/AcrisiaMountains/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AcrisiaMountains_EventScript_LassExploringRuins_5
# 301 "data/maps/AcrisiaMountains/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_BALTOY_DUSK_STONE
# 302 "data/maps/AcrisiaMountains/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaMountains_EventScript_LassExploringRuins_8
	goto AcrisiaMountains_EventScript_LassExploringRuins_1

AcrisiaMountains_EventScript_LassExploringRuins_5:
# 286 "data/maps/AcrisiaMountains/scripts.pory"
	delay 30
# 287 "data/maps/AcrisiaMountains/scripts.pory"
	applymovement 20, Common_Movement_ExclamationMark
# 288 "data/maps/AcrisiaMountains/scripts.pory"
	waitmovement 0
# 289 "data/maps/AcrisiaMountains/scripts.pory"
	delay 20
# 290 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_LassExploringRuins_Text_0
# 291 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_LassExploringRuins_Text_2
# 292 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 293 "data/maps/AcrisiaMountains/scripts.pory"
	giveitem ITEM_DUSK_STONE
# 294 "data/maps/AcrisiaMountains/scripts.pory"
	setflag FLAG_SHOWED_LASS_BALTOY_IN_MOUNTAINS
# 296 "data/maps/AcrisiaMountains/scripts.pory"
	delay 20
# 297 "data/maps/AcrisiaMountains/scripts.pory"
	completequest QUEST_BALTOY_DUSK_STONE
	goto AcrisiaMountains_EventScript_LassExploringRuins_1

AcrisiaMountains_EventScript_LassExploringRuins_8:
# 304 "data/maps/AcrisiaMountains/scripts.pory"
	delay 20
# 305 "data/maps/AcrisiaMountains/scripts.pory"
	startquest QUEST_BALTOY_DUSK_STONE
	goto AcrisiaMountains_EventScript_LassExploringRuins_1


AcrisiaMountains_EventScript_DirectionSign_Text_0:
# 31 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Acrisia Mountains\n"
	.string "A Rocky, Untamed Wilderness\p"
	.string "Acrisia City {RIGHT_ARROW}$"

AcrisiaMountains_EventScript_UniversityStudentRouteCheck_Text_0:
# 41 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Uni. Student$"

AcrisiaMountains_EventScript_UniversityStudentRouteCheck_Text_1:
# 45 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

AcrisiaMountains_EventScript_UniversityStudentRouteCheck_Text_2:
# 50 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Chaire (Hyeh-rei)! I'm a student from\n"
	.string "the Acrisia University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in the Acrisia Mountains.\l"
	.string "If you've caught all the Pokémon here,\l"
	.string "please let me know.$"

AcrisiaMountains_EventScript_UniversityStudentRouteCheck_Text_3:
# 58 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

AcrisiaMountains_EventScript_RailCrossingSign_Text_0:
# 77 "data/maps/AcrisiaMountains/scripts.pory"
	.string "A Note for Passing Trainers\n"
	.string "The Minecart Railway is now open for\l"
	.string "pedestrians! Walk along the historic\l"
	.string "tracks to {COLOR GREEN}cross over Acrisia City{COLOR DARK_GRAY},\l"
	.string "towards Riverwalk Trail and {COLOR GREEN}Kalami City{COLOR DARK_GRAY}\l"
	.string "to the east.$"

AcrisiaMountains_EventScript_RockExploringHiker_Text_0:
# 87 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Archaeologist$"

AcrisiaMountains_EventScript_RockExploringHiker_Text_1:
# 88 "data/maps/AcrisiaMountains/scripts.pory"
	.string "The ruins of bygone times are haunting.\n"
	.string "Ilios is covered in them, and some are\l"
	.string "thousands of years old. You never know\l"
	.string "what you'll find hiding under a rock!$"

AcrisiaMountains_EventScript_OuraniTraining_Text_0:
# 97 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Ourani$"

AcrisiaMountains_EventScript_OuraniTraining_Text_1:
# 98 "data/maps/AcrisiaMountains/scripts.pory"
	.string "C'mon, Larvitar! There's a whole new\n"
	.string "batch of University Students coming\l"
	.string "through the Gym Challenge. We need to\l"
	.string "be strong enough to give 'em a real\l"
	.string "battle!$"

AcrisiaMountains_EventScript_OuraniTraining_Text_2:
# 101 "data/maps/AcrisiaMountains/scripts.pory"
	.string "She's too focused on training to move...$"

AcrisiaMountains_EventScript_Larvitar_Text_0:
# 110 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Larvitar$"

AcrisiaMountains_EventScript_Larvitar_Text_1:
# 112 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Graahhh!$"

AcrisiaMountains_EventScript_Boy3_Text_0:
# 123 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Fit Man$"

AcrisiaMountains_EventScript_Boy3_Text_1:
# 124 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Climbing this mountain is good exercise!\n"
	.string "But wow, there are so many trainers\l"
	.string "further on. I hear shouts and battles\l"
	.string "from up in the caves!$"

AcrisiaMountains_EventScript_MachoBraceMan_Text_0:
# 134 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Muscleman$"

AcrisiaMountains_EventScript_MachoBraceMan_Text_1:
# 137 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Use that Macho Brace ta get yer\n"
	.string "Pokémon nice 'n strong!$"

AcrisiaMountains_EventScript_MachoBraceMan_Text_2:
# 142 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Chaire, little buddy! Ya think ya can\n"
	.string "swim up that waterfall? I've been tryin'\l"
	.string "every day.\p"
	.string "I've been holdin' this, but it hasn't\n"
	.string "made me stronger. Maybe it'll help ya\l"
	.string "with somethin'.$"

AcrisiaMountains_EventScript_MachoBraceMan_Text_3:
# 146 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Pokémon holding that Macho Brace get\n"
	.string "nice 'n strong! I guess it doesn't work\l"
	.string "on people, though.$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre_Text_0:
# 157 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Tyre$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre_Text_1:
# 158 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Pokémon have plenty of skills outside\n"
	.string "of battle. For example, to reach this\l"
	.string "area your Pokémon had to be able to cut\l"
	.string "through those shrubs.$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa_Text_0:
# 175 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Elissa$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa_Text_1:
# 176 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I've got to replace Hypnosis in\n"
	.string "Drowzee's moveset.$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf_Text_0:
# 193 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Ulf$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf_Text_1:
# 194 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Look kid, I'm not gonna be the one to\n"
	.string "fix up the rails. I just mean that\l"
	.string "someone should... someone else, that is!$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma_Text_0:
# 211 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Jamma$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma_Text_1:
# 212 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I'm always up for a battle, but my\n"
	.string "Pokémon aren't. They just need more\l"
	.string "training!$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg_Text_0:
# 229 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Greg$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg_Text_1:
# 230 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I'm hoping to find more rare Pokémon up\n"
	.string "here. Have you seen any?$"

AcrisiaMountains_EventScript_BugCatcherBoy_Text_0:
# 248 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Bug Catcher$"

AcrisiaMountains_EventScript_BugCatcherBoy_Text_1:
# 249 "data/maps/AcrisiaMountains/scripts.pory"
	.string "So... like, where are all the bugs?\p"
	.string "I found a Klawf earlier, but I'm not sure\n"
	.string "if that's a bug. I guess it has\l"
	.string "'bug-eyes' though, ehehe!$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh_Text_0:
# 258 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Hugh$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh_Text_1:
# 259 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Good luck in the Acrisia Caves. You've\n"
	.string "certainly got potential, based on our\l"
	.string "battle!$"

AcrisiaMountains_EventScript_LassExploringRuins_Text_0:
# 277 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Lass$"

AcrisiaMountains_EventScript_LassExploringRuins_Text_1:
# 280 "data/maps/AcrisiaMountains/scripts.pory"
	.string "There are lots of ancient ruins this far\n"
	.string "up the mountains. I wish we knew more\l"
	.string "about what came before us...\p"
	.string "The Pokémon {COLOR GREEN}Baltoy{COLOR DARK_GRAY} is said to be from\n"
	.string "an old civilization. I've always wanted\l"
	.string "to see one!$"

AcrisiaMountains_EventScript_LassExploringRuins_Text_2:
# 291 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Hey! That's the Pokédex entry for\n"
	.string "Baltoy!\p"
	.string "Thanks for showing me. Maybe I'll check\n"
	.string "out the University for more Pokédex\l"
	.string "information. Here, take this cool stone\l"
	.string "I found around the Mountains.$"

AcrisiaMountains_EventScript_LassExploringRuins_Text_3:
# 311 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I can't wait to check out the\n"
	.string "University and learn more about Baltoy!\l"
	.string "I want to figure out everything about\l"
	.string "the past.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_TyreIntro::
# 163 "data/maps/AcrisiaMountains/scripts.pory"
	.string "My Pokémon are training to throw rocks\n"
	.string "using their Psychic powers!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_TyreDefeat::
# 167 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Looks like they need more work.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_ElissaIntro::
# 181 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Zzz... augh, my Pokémon keeps putting me\n"
	.string "to sleep...$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_ElissaDefeat::
# 185 "data/maps/AcrisiaMountains/scripts.pory"
	.string "...zzz...$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_UlfIntro::
# 199 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Someone should really clean up these\n"
	.string "old rails.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_UlfDefeat::
# 203 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Nothing to be done, then.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_JammaIntro::
# 217 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Hyah! Hrah! Come on, fight me!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_JammaDefeat::
# 221 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Uh oh! Looks like I'd better hike back\n"
	.string "to a Pokémon Center.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_GregIntro::
# 235 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Ehehe, I bet you've never seen THESE\n"
	.string "Pokémon!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_GregDefeat::
# 239 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Well, I guess I stand corrected.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_HughIntro::
# 264 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I make sure no weak trainers get into\n"
	.string "the Acrisia Caves. Let's see if you're\l"
	.string "strong enough!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_HughDefeat::
# 268 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Wow, you're ready!$"

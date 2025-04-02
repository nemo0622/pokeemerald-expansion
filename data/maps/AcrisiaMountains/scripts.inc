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


AcrisiaMountains_EventScript_RockExploringHiker::
# 34 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 35 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 36 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_RockExploringHiker_Text_0
# 37 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_RockExploringHiker_Text_1
# 38 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 39 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_MattaiosTraining::
# 45 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 46 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_MattaiosTraining_Text_0
# 47 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_MattaiosTraining_Text_1
# 48 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 49 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Larvitar::
# 55 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 56 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Larvitar_Text_0
# 57 "data/maps/AcrisiaMountains/scripts.pory"
	playmoncry SPECIES_LARVITAR, CRY_MODE_NORMAL
# 58 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Larvitar_Text_1
# 59 "data/maps/AcrisiaMountains/scripts.pory"
	waitmoncry
# 60 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 61 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Boy3::
# 67 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 68 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 69 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Boy3_Text_0
# 70 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Boy3_Text_1
# 71 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 72 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_MachoBraceMan::
# 78 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 79 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 80 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_MachoBraceMan_Text_0
# 81 "data/maps/AcrisiaMountains/scripts.pory"
	goto_if_set FLAG_GOT_MACHO_BRACE, AcrisiaMountains_EventScript_MachoBraceMan_2
# 88 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_MachoBraceMan_Text_2
# 89 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 90 "data/maps/AcrisiaMountains/scripts.pory"
	giveitem ITEM_MACHO_BRACE
# 91 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_MachoBraceMan_Text_0
# 92 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_MachoBraceMan_Text_3
# 93 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 94 "data/maps/AcrisiaMountains/scripts.pory"
	setflag FLAG_GOT_MACHO_BRACE
AcrisiaMountains_EventScript_MachoBraceMan_1:
# 96 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end

AcrisiaMountains_EventScript_MachoBraceMan_2:
# 83 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_MachoBraceMan_Text_1
# 84 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
	goto AcrisiaMountains_EventScript_MachoBraceMan_1


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre::
# 102 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_TYRE, AcrisiaMountains_Text_Trainer_AcrisiaMtns_TyreIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_TyreDefeat
# 103 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre_Text_0
# 104 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre_Text_1
# 105 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 106 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa::
# 120 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_ELISSA, AcrisiaMountains_Text_Trainer_AcrisiaMtns_ElissaIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_ElissaDefeat
# 121 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa_Text_0
# 122 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa_Text_1
# 123 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 124 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf::
# 138 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_ULF, AcrisiaMountains_Text_Trainer_AcrisiaMtns_UlfIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_UlfDefeat
# 139 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf_Text_0
# 140 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf_Text_1
# 141 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 142 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma::
# 156 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_JAMMA, AcrisiaMountains_Text_Trainer_AcrisiaMtns_JammaIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_JammaDefeat
# 157 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma_Text_0
# 158 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma_Text_1
# 159 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 160 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg::
# 174 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_GREG, AcrisiaMountains_Text_Trainer_AcrisiaMtns_GregIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_GregDefeat
# 175 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg_Text_0
# 176 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg_Text_1
# 177 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 178 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_BugCatcherBoy::
# 192 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 193 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 194 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_BugCatcherBoy_Text_0
# 195 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_BugCatcherBoy_Text_1
# 196 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 197 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh::
# 203 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_HUGH, AcrisiaMountains_Text_Trainer_AcrisiaMtns_HughIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_HughDefeat
# 204 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh_Text_0
# 205 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh_Text_1
# 206 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 207 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_LassExploringRuins::
# 221 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 222 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 223 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_LassExploringRuins_Text_0
# 224 "data/maps/AcrisiaMountains/scripts.pory"
	goto_if_unset FLAG_SHOWED_LASS_BALTOY_IN_MOUNTAINS, AcrisiaMountains_EventScript_LassExploringRuins_2
# 257 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_LassExploringRuins_Text_3
# 258 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
AcrisiaMountains_EventScript_LassExploringRuins_1:
# 260 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end

AcrisiaMountains_EventScript_LassExploringRuins_2:
# 226 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_LassExploringRuins_Text_1
# 227 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 229 "data/maps/AcrisiaMountains/scripts.pory"
	getcaughtmon SPECIES_BALTOY
# 230 "data/maps/AcrisiaMountains/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AcrisiaMountains_EventScript_LassExploringRuins_5
# 247 "data/maps/AcrisiaMountains/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_BALTOY_DUSK_STONE
# 248 "data/maps/AcrisiaMountains/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaMountains_EventScript_LassExploringRuins_8
	goto AcrisiaMountains_EventScript_LassExploringRuins_1

AcrisiaMountains_EventScript_LassExploringRuins_5:
# 232 "data/maps/AcrisiaMountains/scripts.pory"
	delay 30
# 233 "data/maps/AcrisiaMountains/scripts.pory"
	applymovement 20, Common_Movement_ExclamationMark
# 234 "data/maps/AcrisiaMountains/scripts.pory"
	waitmovement 0
# 235 "data/maps/AcrisiaMountains/scripts.pory"
	delay 20
# 236 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_LassExploringRuins_Text_0
# 237 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_LassExploringRuins_Text_2
# 238 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 239 "data/maps/AcrisiaMountains/scripts.pory"
	giveitem ITEM_DUSK_STONE
# 240 "data/maps/AcrisiaMountains/scripts.pory"
	setflag FLAG_SHOWED_LASS_BALTOY_IN_MOUNTAINS
# 242 "data/maps/AcrisiaMountains/scripts.pory"
	delay 20
# 243 "data/maps/AcrisiaMountains/scripts.pory"
	completequest QUEST_BALTOY_DUSK_STONE
	goto AcrisiaMountains_EventScript_LassExploringRuins_1

AcrisiaMountains_EventScript_LassExploringRuins_8:
# 250 "data/maps/AcrisiaMountains/scripts.pory"
	delay 20
# 251 "data/maps/AcrisiaMountains/scripts.pory"
	startquest QUEST_BALTOY_DUSK_STONE
	goto AcrisiaMountains_EventScript_LassExploringRuins_1


AcrisiaMountains_EventScript_DirectionSign_Text_0:
# 26 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Acrisia Mountains\n"
	.string "A Rocky, Untamed Wilderness\p"
	.string "Acrisia City {RIGHT_ARROW}$"

AcrisiaMountains_EventScript_RockExploringHiker_Text_0:
# 36 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Archaeologist$"

AcrisiaMountains_EventScript_RockExploringHiker_Text_1:
# 37 "data/maps/AcrisiaMountains/scripts.pory"
	.string "The ruins of bygone times are haunting.\n"
	.string "Ilios is covered in them, and some are\l"
	.string "thousands of years old. You never know\l"
	.string "what you'll find hiding under a rock!$"

AcrisiaMountains_EventScript_MattaiosTraining_Text_0:
# 46 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Mattaios$"

AcrisiaMountains_EventScript_MattaiosTraining_Text_1:
# 47 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Huff huff huff...\p"
	.string "Always training, always working... Come\n"
	.string "on Larvitar, help me get stronger!$"

AcrisiaMountains_EventScript_Larvitar_Text_0:
# 56 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Larvitar$"

AcrisiaMountains_EventScript_Larvitar_Text_1:
# 58 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Graahhh!$"

AcrisiaMountains_EventScript_Boy3_Text_0:
# 69 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Fit Man$"

AcrisiaMountains_EventScript_Boy3_Text_1:
# 70 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Climbing this mountain is good exercise!\n"
	.string "But wow, there are so many trainers\l"
	.string "further on. I hear shouts and battles\l"
	.string "from up in the caves!$"

AcrisiaMountains_EventScript_MachoBraceMan_Text_0:
# 80 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Muscleman$"

AcrisiaMountains_EventScript_MachoBraceMan_Text_1:
# 83 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Use that Macho Brace ta get yer\n"
	.string "Pokémon nice 'n strong!$"

AcrisiaMountains_EventScript_MachoBraceMan_Text_2:
# 88 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Chaire, little buddy! Ya think ya can\n"
	.string "swim up that waterfall? I've been tryin'\l"
	.string "every day.\p"
	.string "I've been holdin' this, but it hasn't\n"
	.string "made me stronger. Maybe it'll help ya\l"
	.string "with somethin'.$"

AcrisiaMountains_EventScript_MachoBraceMan_Text_3:
# 92 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Pokémon holding that Macho Brace get\n"
	.string "nice 'n strong! I guess it doesn't work\l"
	.string "on people, though.$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre_Text_0:
# 103 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Tyre$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre_Text_1:
# 104 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Pokémon have plenty of skills outside\n"
	.string "of battle. For example, to reach this\l"
	.string "area your Pokémon had to be able to cut\l"
	.string "through those shrubs.$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa_Text_0:
# 121 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Elissa$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa_Text_1:
# 122 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I've got to replace Hypnosis in\n"
	.string "Drowzee's moveset.$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf_Text_0:
# 139 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Ulf$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf_Text_1:
# 140 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Look kid, I'm not gonna be the one to\n"
	.string "fix up the rails. I just mean that\l"
	.string "someone should... someone else, that is!$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma_Text_0:
# 157 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Jamma$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma_Text_1:
# 158 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I'm always up for a battle, but my\n"
	.string "Pokémon aren't. They just need more\l"
	.string "training!$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg_Text_0:
# 175 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Greg$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg_Text_1:
# 176 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I'm hoping to find more rare Pokémon up\n"
	.string "here. Have you seen any?$"

AcrisiaMountains_EventScript_BugCatcherBoy_Text_0:
# 194 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Bug Catcher$"

AcrisiaMountains_EventScript_BugCatcherBoy_Text_1:
# 195 "data/maps/AcrisiaMountains/scripts.pory"
	.string "So... like, where are all the bugs?\p"
	.string "I found a Klawf earlier, but I'm not sure\n"
	.string "if that's a bug. I guess it has\l"
	.string "'bug-eyes' though, ehehe!$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh_Text_0:
# 204 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Hugh$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh_Text_1:
# 205 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Good luck in the Acrisia Caves. You've\n"
	.string "certainly got potential, based on our\l"
	.string "battle!$"

AcrisiaMountains_EventScript_LassExploringRuins_Text_0:
# 223 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Lass$"

AcrisiaMountains_EventScript_LassExploringRuins_Text_1:
# 226 "data/maps/AcrisiaMountains/scripts.pory"
	.string "There are lots of ancient ruins this far\n"
	.string "up the mountains. I wish we knew more\l"
	.string "about what came before us...\p"
	.string "The Pokémon {COLOR GREEN}Baltoy{COLOR DARK_GRAY} is said to be from\n"
	.string "an old civilization. I've always wanted\l"
	.string "to see one!$"

AcrisiaMountains_EventScript_LassExploringRuins_Text_2:
# 237 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Hey! That's the Pokédex entry for\n"
	.string "Baltoy!\p"
	.string "Thanks for showing me. Maybe I'll check\n"
	.string "out the University for more Pokédex\l"
	.string "information. Here, take this cool stone\l"
	.string "I found around the Mountains.$"

AcrisiaMountains_EventScript_LassExploringRuins_Text_3:
# 257 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I can't wait to check out the\n"
	.string "University and learn more about Baltoy!\l"
	.string "I want to figure out everything about\l"
	.string "the past.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_TyreIntro::
# 109 "data/maps/AcrisiaMountains/scripts.pory"
	.string "My Pokémon are training to throw rocks\n"
	.string "using their Psychic powers!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_TyreDefeat::
# 113 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Looks like they need more work.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_ElissaIntro::
# 127 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Zzz... augh, my Pokémon keeps putting me\n"
	.string "to sleep...$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_ElissaDefeat::
# 131 "data/maps/AcrisiaMountains/scripts.pory"
	.string "...zzz...$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_UlfIntro::
# 145 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Someone should really clean up these\n"
	.string "old rails.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_UlfDefeat::
# 149 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Nothing to be done, then.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_JammaIntro::
# 163 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Hyah! Hrah! Come on, fight me!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_JammaDefeat::
# 167 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Uh oh! Looks like I'd better hike back\n"
	.string "to a Pokémon Center.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_GregIntro::
# 181 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Ehehe, I bet you've never seen THESE\n"
	.string "Pokémon!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_GregDefeat::
# 185 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Well, I guess I stand corrected.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_HughIntro::
# 210 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I make sure no weak trainers get into\n"
	.string "the Acrisia Caves. Let's see if you're\l"
	.string "strong enough!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_HughDefeat::
# 214 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Wow, you're ready!$"

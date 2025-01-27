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
	setobjectaswildencounter 17, ENCOUNTER_LAND
# 16 "data/maps/AcrisiaMountains/scripts.pory"
	setobjectaswildencounter 18, ENCOUNTER_LAND
# 17 "data/maps/AcrisiaMountains/scripts.pory"
	setobjectaswildencounter 19, ENCOUNTER_LAND
# 18 "data/maps/AcrisiaMountains/scripts.pory"
	setobjectaswildencounter 20, ENCOUNTER_LAND
# 19 "data/maps/AcrisiaMountains/scripts.pory"
	setobjectaswildencounter 21, ENCOUNTER_LAND
	return


AcrisiaMountains_Sign_GymSign::
# 25 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 26 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_Sign_GymSign_Text_0
# 27 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 28 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_FishingGuru::
# 34 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 35 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 37 "data/maps/AcrisiaMountains/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, AcrisiaMountains_EventScript_FishingGuru_2
# 45 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_FishingGuru_Text_0
# 46 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_FishingGuru_Text_2, MSGBOX_YESNO
# 47 "data/maps/AcrisiaMountains/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaMountains_EventScript_FishingGuru_5
# 55 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_FishingGuru_Text_0
# 56 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_FishingGuru_Text_4
# 57 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 58 "data/maps/AcrisiaMountains/scripts.pory"
	giveitem ITEM_OLD_ROD
# 59 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_FishingGuru_Text_0
# 60 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_FishingGuru_Text_5
# 61 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 62 "data/maps/AcrisiaMountains/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
AcrisiaMountains_EventScript_FishingGuru_1:
# 66 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end

AcrisiaMountains_EventScript_FishingGuru_2:
# 39 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_FishingGuru_Text_0
# 40 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_FishingGuru_Text_1
# 41 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
	goto AcrisiaMountains_EventScript_FishingGuru_1

AcrisiaMountains_EventScript_FishingGuru_5:
# 49 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_FishingGuru_Text_0
# 50 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_FishingGuru_Text_3
# 51 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
	goto AcrisiaMountains_EventScript_FishingGuru_1


AcrisiaMountains_EventScript_RockExploringHiker::
# 72 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 73 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 74 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_RockExploringHiker_Text_0
# 75 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_RockExploringHiker_Text_1
# 76 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 77 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_MattaiosTraining::
# 83 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 84 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_MattaiosTraining_Text_0
# 85 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_MattaiosTraining_Text_1
# 86 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 87 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Larvitar::
# 93 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 94 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Larvitar_Text_0
# 95 "data/maps/AcrisiaMountains/scripts.pory"
	playmoncry SPECIES_LARVITAR, CRY_MODE_NORMAL
# 96 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Larvitar_Text_1
# 97 "data/maps/AcrisiaMountains/scripts.pory"
	waitmoncry
# 98 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 99 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Boy3::
# 105 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 106 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 107 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Boy3_Text_0
# 108 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Boy3_Text_1
# 109 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 110 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_MachoBraceMan::
# 116 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 117 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 118 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_MachoBraceMan_Text_0
# 119 "data/maps/AcrisiaMountains/scripts.pory"
	goto_if_set FLAG_GOT_MACHO_BRACE, AcrisiaMountains_EventScript_MachoBraceMan_2
# 126 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_MachoBraceMan_Text_2
# 127 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 128 "data/maps/AcrisiaMountains/scripts.pory"
	giveitem ITEM_MACHO_BRACE
# 129 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_MachoBraceMan_Text_0
# 130 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_MachoBraceMan_Text_3
# 131 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 132 "data/maps/AcrisiaMountains/scripts.pory"
	setflag FLAG_GOT_MACHO_BRACE
AcrisiaMountains_EventScript_MachoBraceMan_1:
# 134 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end

AcrisiaMountains_EventScript_MachoBraceMan_2:
# 121 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_MachoBraceMan_Text_1
# 122 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
	goto AcrisiaMountains_EventScript_MachoBraceMan_1


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre::
# 140 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_TYRE, AcrisiaMountains_Text_Trainer_AcrisiaMtns_TyreIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_TyreDefeat
# 141 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre_Text_0
# 142 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre_Text_1
# 143 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 144 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa::
# 158 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_ELISSA, AcrisiaMountains_Text_Trainer_AcrisiaMtns_ElissaIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_ElissaDefeat
# 159 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa_Text_0
# 160 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa_Text_1
# 161 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 162 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Josua::
# 176 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_JOSUA, AcrisiaMountains_Text_Trainer_AcrisiaMtns_JosuaIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_JosuaDefeat
# 177 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Josua_Text_0
# 178 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Josua_Text_1
# 179 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 180 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf::
# 194 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_ULF, AcrisiaMountains_Text_Trainer_AcrisiaMtns_UlfIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_UlfDefeat
# 195 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf_Text_0
# 196 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf_Text_1
# 197 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 198 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma::
# 212 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_JAMMA, AcrisiaMountains_Text_Trainer_AcrisiaMtns_JammaIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_JammaDefeat
# 213 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma_Text_0
# 214 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma_Text_1
# 215 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 216 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg::
# 230 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_GREG, AcrisiaMountains_Text_Trainer_AcrisiaMtns_GregIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_GregDefeat
# 231 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg_Text_0
# 232 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg_Text_1
# 233 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 234 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_BugCatcherBoy::
# 248 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 249 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 250 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_BugCatcherBoy_Text_0
# 251 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_BugCatcherBoy_Text_1
# 252 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 253 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh::
# 259 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_HUGH, AcrisiaMountains_Text_Trainer_AcrisiaMtns_HughIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_HughDefeat
# 260 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh_Text_0
# 261 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh_Text_1
# 262 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 263 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_Sign_GymSign_Text_0:
# 26 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Welcome to the Acrisia Caverns.\p"
	.string "Gym Leader: Mattaios\n"
	.string "The Ever-Working Rocksmith$"

AcrisiaMountains_EventScript_FishingGuru_Text_0:
# 39 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Fishing Guru$"

AcrisiaMountains_EventScript_FishingGuru_Text_1:
# 40 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Plenty of good Pokémon can be fished\n"
	.string "up! Make sure to cast a rod a few times\l"
	.string "in each pond you see!$"

AcrisiaMountains_EventScript_FishingGuru_Text_2:
# 46 "data/maps/AcrisiaMountains/scripts.pory"
	.string "You! Yes, you! Tell me, do you like to\n"
	.string "fish?$"

AcrisiaMountains_EventScript_FishingGuru_Text_3:
# 50 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Oh. Well, okay then.$"

AcrisiaMountains_EventScript_FishingGuru_Text_4:
# 56 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Grand! We can be great friends. Here, I\n"
	.string "want you to take this.$"

AcrisiaMountains_EventScript_FishingGuru_Text_5:
# 60 "data/maps/AcrisiaMountains/scripts.pory"
	.string "The Ilios Region has extremely diverse\n"
	.string "water life! Make sure to fish every day.$"

AcrisiaMountains_EventScript_RockExploringHiker_Text_0:
# 74 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Archaeologist$"

AcrisiaMountains_EventScript_RockExploringHiker_Text_1:
# 75 "data/maps/AcrisiaMountains/scripts.pory"
	.string "The ruins of bygone times are haunting.\n"
	.string "Ilios is covered in them, and some are\l"
	.string "thousands of years old. You never know\l"
	.string "what you'll find hiding under a rock!$"

AcrisiaMountains_EventScript_MattaiosTraining_Text_0:
# 84 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Mattaios$"

AcrisiaMountains_EventScript_MattaiosTraining_Text_1:
# 85 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Huff huff huff...\p"
	.string "Always training, always working... Come\n"
	.string "on Larvitar, help me get stronger!$"

AcrisiaMountains_EventScript_Larvitar_Text_0:
# 94 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Larvitar$"

AcrisiaMountains_EventScript_Larvitar_Text_1:
# 96 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Graahhh!$"

AcrisiaMountains_EventScript_Boy3_Text_0:
# 107 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Fit Man$"

AcrisiaMountains_EventScript_Boy3_Text_1:
# 108 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Climbing this mountain is good exercise!\n"
	.string "But wow, there are so many trainers\l"
	.string "further on. I hear shouts and battles\l"
	.string "from up in the caves!$"

AcrisiaMountains_EventScript_MachoBraceMan_Text_0:
# 118 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Muscleman$"

AcrisiaMountains_EventScript_MachoBraceMan_Text_1:
# 121 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Use that Macho Brace ta get yer\n"
	.string "Pokémon nice 'n strong!$"

AcrisiaMountains_EventScript_MachoBraceMan_Text_2:
# 126 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Yia sou, little buddy! Ya think ya can\n"
	.string "swim up that waterfall? I've been tryin'\l"
	.string "every day.\p"
	.string "I've been holdin' this, but it hasn't\n"
	.string "made me stronger. Maybe it'll help ya\l"
	.string "with somethin'.$"

AcrisiaMountains_EventScript_MachoBraceMan_Text_3:
# 130 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Pokémon holding that Macho Brace get\n"
	.string "nice 'n strong! I guess it doesn't work\l"
	.string "on people, though.$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre_Text_0:
# 141 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Tyre$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre_Text_1:
# 142 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Pokémon have plenty of skills outside\n"
	.string "of battle. For example, to reach this\l"
	.string "area your Pokémon had to be able to cut\l"
	.string "through those shrubs.$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa_Text_0:
# 159 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Elissa$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa_Text_1:
# 160 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I've got to replace Hypnosis in\n"
	.string "Drowzee's moveset.$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Josua_Text_0:
# 177 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Josua$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Josua_Text_1:
# 178 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I just came here to explore the hills,\n"
	.string "not to fight so many trainers...$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf_Text_0:
# 195 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Ulf$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf_Text_1:
# 196 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Look kid, I'm not gonna be the one to\n"
	.string "fix up the rails. I just mean that\l"
	.string "someone should... someone else, that is!$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma_Text_0:
# 213 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Jamma$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma_Text_1:
# 214 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I'm always up for a battle, but my\n"
	.string "Pokémon aren't. They just need more\l"
	.string "training!$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg_Text_0:
# 231 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Greg$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg_Text_1:
# 232 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I'm hoping to find more rare Pokémon up\n"
	.string "here. Have you seen any?$"

AcrisiaMountains_EventScript_BugCatcherBoy_Text_0:
# 250 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Bug Catcher$"

AcrisiaMountains_EventScript_BugCatcherBoy_Text_1:
# 251 "data/maps/AcrisiaMountains/scripts.pory"
	.string "So... like, where are all the bugs?\p"
	.string "I found a Klawf earlier, but I'm not sure\n"
	.string "if that's a bug. I guess it has\l"
	.string "'bug-eyes' though, ehehe!$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh_Text_0:
# 260 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Hugh$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh_Text_1:
# 261 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Good luck in the Acrisia Caves. You've\n"
	.string "certainly got potential, based on our\l"
	.string "battle!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_TyreIntro::
# 147 "data/maps/AcrisiaMountains/scripts.pory"
	.string "My Pokémon are training to throw rocks\n"
	.string "using their Psychic powers!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_TyreDefeat::
# 151 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Looks like they need more work.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_ElissaIntro::
# 165 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Zzz... augh, my Pokémon keeps putting me\n"
	.string "to sleep...$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_ElissaDefeat::
# 169 "data/maps/AcrisiaMountains/scripts.pory"
	.string "...zzz...$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_JosuaIntro::
# 183 "data/maps/AcrisiaMountains/scripts.pory"
	.string "These hills are so steep and cramped,\n"
	.string "there's hardly room for a good battle!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_JosuaDefeat::
# 187 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Fwahaha, looks like you made do!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_UlfIntro::
# 201 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Someone should really clean up these\n"
	.string "old rails.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_UlfDefeat::
# 205 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Nothing to be done, then.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_JammaIntro::
# 219 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Hyah! Hrah! Come on, fight me!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_JammaDefeat::
# 223 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Uh oh! Looks like I'd better hike back\n"
	.string "to a Pokémon Center.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_GregIntro::
# 237 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Ehehe, I bet you've never seen THESE\n"
	.string "Pokémon!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_GregDefeat::
# 241 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Well, I guess I stand corrected.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_HughIntro::
# 266 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I make sure no weak trainers get into\n"
	.string "the Acrisia Caves. Let's see if you're\l"
	.string "strong enough!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_HughDefeat::
# 270 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Wow, you're ready!$"

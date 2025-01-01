AcrisiaMountains_MapScripts::
	.byte 0


AcrisiaMountains_Sign_GymSign::
# 5 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 6 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_Sign_GymSign_Text_0
# 7 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 8 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_FishingGuru::
# 14 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 15 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 17 "data/maps/AcrisiaMountains/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, AcrisiaMountains_EventScript_FishingGuru_2
# 25 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_FishingGuru_Text_0
# 26 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_FishingGuru_Text_2, MSGBOX_YESNO
# 27 "data/maps/AcrisiaMountains/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaMountains_EventScript_FishingGuru_5
# 35 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_FishingGuru_Text_0
# 36 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_FishingGuru_Text_4
# 37 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 38 "data/maps/AcrisiaMountains/scripts.pory"
	giveitem ITEM_OLD_ROD
# 39 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_FishingGuru_Text_0
# 40 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_FishingGuru_Text_5
# 41 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 42 "data/maps/AcrisiaMountains/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
AcrisiaMountains_EventScript_FishingGuru_1:
# 46 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end

AcrisiaMountains_EventScript_FishingGuru_2:
# 19 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_FishingGuru_Text_0
# 20 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_FishingGuru_Text_1
# 21 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
	goto AcrisiaMountains_EventScript_FishingGuru_1

AcrisiaMountains_EventScript_FishingGuru_5:
# 29 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_FishingGuru_Text_0
# 30 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_FishingGuru_Text_3
# 31 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
	goto AcrisiaMountains_EventScript_FishingGuru_1


AcrisiaMountains_EventScript_RockExploringHiker::
# 52 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 53 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 54 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_RockExploringHiker_Text_0
# 55 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_RockExploringHiker_Text_1
# 56 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 57 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_MattaiosTraining::
# 63 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 64 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_MattaiosTraining_Text_0
# 65 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_MattaiosTraining_Text_1
# 66 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 67 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Larvitar::
# 73 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 74 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Larvitar_Text_0
# 75 "data/maps/AcrisiaMountains/scripts.pory"
	playmoncry SPECIES_LARVITAR, CRY_MODE_NORMAL
# 76 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Larvitar_Text_1
# 77 "data/maps/AcrisiaMountains/scripts.pory"
	waitmoncry
# 78 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 79 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Boy3::
# 85 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 86 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 87 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Boy3_Text_0
# 88 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Boy3_Text_1
# 89 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 90 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_MachoBraceMan::
# 96 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 97 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 98 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_MachoBraceMan_Text_0
# 99 "data/maps/AcrisiaMountains/scripts.pory"
	goto_if_set FLAG_GOT_MACHO_BRACE, AcrisiaMountains_EventScript_MachoBraceMan_2
# 106 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_MachoBraceMan_Text_2
# 107 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 108 "data/maps/AcrisiaMountains/scripts.pory"
	giveitem ITEM_MACHO_BRACE
# 109 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_MachoBraceMan_Text_0
# 110 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_MachoBraceMan_Text_3
# 111 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 112 "data/maps/AcrisiaMountains/scripts.pory"
	setflag FLAG_GOT_MACHO_BRACE
AcrisiaMountains_EventScript_MachoBraceMan_1:
# 114 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end

AcrisiaMountains_EventScript_MachoBraceMan_2:
# 101 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_MachoBraceMan_Text_1
# 102 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
	goto AcrisiaMountains_EventScript_MachoBraceMan_1


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre::
# 120 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_TYRE, AcrisiaMountains_Text_Trainer_AcrisiaMtns_TyreIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_TyreDefeat
# 121 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre_Text_0
# 122 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre_Text_1
# 123 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 124 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa::
# 138 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_ELISSA, AcrisiaMountains_Text_Trainer_AcrisiaMtns_ElissaIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_ElissaDefeat
# 139 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa_Text_0
# 140 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa_Text_1
# 141 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 142 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Josua::
# 156 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_JOSUA, AcrisiaMountains_Text_Trainer_AcrisiaMtns_JosuaIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_JosuaDefeat
# 157 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Josua_Text_0
# 158 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Josua_Text_1
# 159 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 160 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf::
# 174 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_ULF, AcrisiaMountains_Text_Trainer_AcrisiaMtns_UlfIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_UlfDefeat
# 175 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf_Text_0
# 176 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf_Text_1
# 177 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 178 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma::
# 192 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_JAMMA, AcrisiaMountains_Text_Trainer_AcrisiaMtns_JammaIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_JammaDefeat
# 193 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma_Text_0
# 194 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma_Text_1
# 195 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 196 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg::
# 210 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_GREG, AcrisiaMountains_Text_Trainer_AcrisiaMtns_GregIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_GregDefeat
# 211 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg_Text_0
# 212 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg_Text_1
# 213 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 214 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_BugCatcherBoy::
# 228 "data/maps/AcrisiaMountains/scripts.pory"
	lock
# 229 "data/maps/AcrisiaMountains/scripts.pory"
	faceplayer
# 230 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_BugCatcherBoy_Text_0
# 231 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_BugCatcherBoy_Text_1
# 232 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 233 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh::
# 239 "data/maps/AcrisiaMountains/scripts.pory"
	trainerbattle_single TRAINER_ACRISIAMTNS_HUGH, AcrisiaMountains_Text_Trainer_AcrisiaMtns_HughIntro, AcrisiaMountains_Text_Trainer_AcrisiaMtns_HughDefeat
# 240 "data/maps/AcrisiaMountains/scripts.pory"
	speakername AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh_Text_0
# 241 "data/maps/AcrisiaMountains/scripts.pory"
	msgbox AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh_Text_1
# 242 "data/maps/AcrisiaMountains/scripts.pory"
	closemessage
# 243 "data/maps/AcrisiaMountains/scripts.pory"
	release
	end


AcrisiaMountains_Sign_GymSign_Text_0:
# 6 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Welcome to the Acrisia Caverns.\p"
	.string "Gym Leader: Mattaios\n"
	.string "The Ever-Working Rocksmith$"

AcrisiaMountains_EventScript_FishingGuru_Text_0:
# 19 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Fishing Guru$"

AcrisiaMountains_EventScript_FishingGuru_Text_1:
# 20 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Plenty of good Pokémon can be fished\n"
	.string "up! Make sure to cast a rod a few times\l"
	.string "in each pond you see!$"

AcrisiaMountains_EventScript_FishingGuru_Text_2:
# 26 "data/maps/AcrisiaMountains/scripts.pory"
	.string "You! Yes, you! Tell me, do you like to\n"
	.string "fish?$"

AcrisiaMountains_EventScript_FishingGuru_Text_3:
# 30 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Oh. Well, okay then.$"

AcrisiaMountains_EventScript_FishingGuru_Text_4:
# 36 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Grand! We can be great friends. Here, I\n"
	.string "want you to take this.$"

AcrisiaMountains_EventScript_FishingGuru_Text_5:
# 40 "data/maps/AcrisiaMountains/scripts.pory"
	.string "The Ilios Region has extremely diverse\n"
	.string "water life! Make sure to fish every day.$"

AcrisiaMountains_EventScript_RockExploringHiker_Text_0:
# 54 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Archaeologist$"

AcrisiaMountains_EventScript_RockExploringHiker_Text_1:
# 55 "data/maps/AcrisiaMountains/scripts.pory"
	.string "The ruins of bygone times are haunting.\n"
	.string "Ilios is covered in them, and some are\l"
	.string "thousands of years old. You never know\l"
	.string "what you'll find hiding under a rock!$"

AcrisiaMountains_EventScript_MattaiosTraining_Text_0:
# 64 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Mattaios$"

AcrisiaMountains_EventScript_MattaiosTraining_Text_1:
# 65 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Huff huff huff...\p"
	.string "Always training, always working... Come\n"
	.string "on Larvitar, help me get stronger!$"

AcrisiaMountains_EventScript_Larvitar_Text_0:
# 74 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Larvitar$"

AcrisiaMountains_EventScript_Larvitar_Text_1:
# 76 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Graahhh!$"

AcrisiaMountains_EventScript_Boy3_Text_0:
# 87 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Fit Man$"

AcrisiaMountains_EventScript_Boy3_Text_1:
# 88 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Climbing this mountain is good exercise!\n"
	.string "But wow, there are so many trainers\l"
	.string "further on. I hear shouts and battles\l"
	.string "from up in the caves!$"

AcrisiaMountains_EventScript_MachoBraceMan_Text_0:
# 98 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Muscleman$"

AcrisiaMountains_EventScript_MachoBraceMan_Text_1:
# 101 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Use that Macho Brace ta get yer\n"
	.string "Pokémon nice 'n strong!$"

AcrisiaMountains_EventScript_MachoBraceMan_Text_2:
# 106 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Yia sou, little buddy! Ya think ya can\n"
	.string "swim up that waterfall? I've been tryin'\l"
	.string "every day.\p"
	.string "I've been holdin' this, but it hasn't\n"
	.string "made me stronger. Maybe it'll help ya\l"
	.string "with somethin'.$"

AcrisiaMountains_EventScript_MachoBraceMan_Text_3:
# 110 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Pokémon holding that Macho Brace get\n"
	.string "nice 'n strong! I guess it doesn't work\l"
	.string "on people, though.$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre_Text_0:
# 121 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Tyre$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Tyre_Text_1:
# 122 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Pokémon have plenty of skills outside\n"
	.string "of battle. For example, to reach this\l"
	.string "area your Pokémon had to be able to cut\l"
	.string "through those shrubs.$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa_Text_0:
# 139 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Elissa$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Elissa_Text_1:
# 140 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I've got to replace Hypnosis in\n"
	.string "Drowzee's moveset.$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Josua_Text_0:
# 157 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Josua$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Josua_Text_1:
# 158 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I just came here to explore the hills,\n"
	.string "not to fight so many trainers...$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf_Text_0:
# 175 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Ulf$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Ulf_Text_1:
# 176 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Look kid, I'm not gonna be the one to\n"
	.string "fix up the rails. I just mean that\l"
	.string "someone should... someone else, that is!$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma_Text_0:
# 193 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Jamma$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Jamma_Text_1:
# 194 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I'm always up for a battle, but my\n"
	.string "Pokémon aren't. They just need more\l"
	.string "training!$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg_Text_0:
# 211 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Greg$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Greg_Text_1:
# 212 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I'm hoping to find more rare Pokémon up\n"
	.string "here. Have you seen any?$"

AcrisiaMountains_EventScript_BugCatcherBoy_Text_0:
# 230 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Bug Catcher$"

AcrisiaMountains_EventScript_BugCatcherBoy_Text_1:
# 231 "data/maps/AcrisiaMountains/scripts.pory"
	.string "So... like, where are all the bugs?\p"
	.string "I found a Klawf earlier, but I'm not sure\n"
	.string "if that's a bug. I guess it has\l"
	.string "'bug-eyes' though, ehehe!$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh_Text_0:
# 240 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Hugh$"

AcrisiaMountains_EventScript_Trainer_AcrisiaMtns_Hugh_Text_1:
# 241 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Good luck in the Acrisia Caves. You've\n"
	.string "certainly got potential, based on our\l"
	.string "battle!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_TyreIntro::
# 127 "data/maps/AcrisiaMountains/scripts.pory"
	.string "My Pokémon are training to throw rocks\n"
	.string "using their Psychic powers!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_TyreDefeat::
# 131 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Looks like they need more work.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_ElissaIntro::
# 145 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Zzz... augh, my Pokémon keeps putting me\n"
	.string "to sleep...$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_ElissaDefeat::
# 149 "data/maps/AcrisiaMountains/scripts.pory"
	.string "...zzz...$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_JosuaIntro::
# 163 "data/maps/AcrisiaMountains/scripts.pory"
	.string "These hills are so steep and cramped,\n"
	.string "there's hardly room for a good battle!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_JosuaDefeat::
# 167 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Fwahaha, looks like you made do!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_UlfIntro::
# 181 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Someone should really clean up these\n"
	.string "old rails.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_UlfDefeat::
# 185 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Nothing to be done, then.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_JammaIntro::
# 199 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Hyah! Hrah! Come on, fight me!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_JammaDefeat::
# 203 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Uh oh! Looks like I'd better hike back\n"
	.string "to a Pokémon Center.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_GregIntro::
# 217 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Ehehe, I bet you've never seen THESE\n"
	.string "Pokémon!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_GregDefeat::
# 221 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Well, I guess I stand corrected.$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_HughIntro::
# 246 "data/maps/AcrisiaMountains/scripts.pory"
	.string "I make sure no weak trainers get into\n"
	.string "the Acrisia Caves. Let's see if you're\l"
	.string "strong enough!$"

AcrisiaMountains_Text_Trainer_AcrisiaMtns_HughDefeat::
# 250 "data/maps/AcrisiaMountains/scripts.pory"
	.string "Wow, you're ready!$"

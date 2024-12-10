AcrisiaCaves_BF1_MapScripts::
# 2 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AcrisiaCaves_BF1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AcrisiaCaves_BF1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	setflashlevel 5
	return


AcrisiaCaves_BF1_EventScript_GymStatue::
# 9 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	lock
# 10 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, AcrisiaCaves_BF1_EventScript_GymStatue_2
# 16 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaCaves_BF1_EventScript_GymStatue_Text_1
AcrisiaCaves_BF1_EventScript_GymStatue_1:
# 18 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 19 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	release
	end

AcrisiaCaves_BF1_EventScript_GymStatue_2:
# 12 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaCaves_BF1_EventScript_GymStatue_Text_0
	goto AcrisiaCaves_BF1_EventScript_GymStatue_1


AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Berkley::
# 25 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	trainerbattle_single TRAINER_ACRISIACAVES_BF1_BERKLEY, AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_BerkleyIntro, AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_BerkleyDefeat
# 26 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Berkley_Text_0
# 27 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Berkley_Text_1
# 28 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 29 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	release
	end


AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Margarey::
# 43 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	trainerbattle_single TRAINER_ACRISIACAVES_BF1_MARGAREY, AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_MargareyIntro, AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_MargareyDefeat
# 44 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Margarey_Text_0
# 45 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Margarey_Text_1
# 46 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 47 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	release
	end


AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Kylon::
# 61 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	trainerbattle_single TRAINER_ACRISIACAVES_BF1_KYLON, AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_KylonIntro, AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_KylonDefeat
# 62 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Kylon_Text_0
# 63 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Kylon_Text_1
# 64 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 65 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	release
	end


AcrisiaCaves_BF1_EventScript_Mattaios::
# 81 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	lock
# 82 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	faceplayer
# 83 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	compare VAR_DIFFICULTY, 0
	goto_if_eq AcrisiaCaves_BF1_EventScript_Mattaios_2
# 89 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	goto AcrisiaCaves_BF1_EventScript_MattaiosHard
AcrisiaCaves_BF1_EventScript_Mattaios_1:
# 91 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	release
	end

AcrisiaCaves_BF1_EventScript_Mattaios_2:
# 85 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	goto AcrisiaCaves_BF1_EventScript_MattaiosNormal
	goto AcrisiaCaves_BF1_EventScript_Mattaios_1


AcrisiaCaves_BF1_EventScript_MattaiosNormal::
# 97 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	trainerbattle_single TRAINER_LEADER_MATTAIOS, AcrisiaCaves_BF1_Text_MattaiosIntro, AcrisiaCaves_BF1_Text_MattaiosDefeat, AcrisiaCaves_BF1_EventScript_MattaiosDefeatScript, NO_MUSIC
# 98 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaCaves_BF1_EventScript_MattaiosNormal_Text_0
# 99 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaCaves_BF1_EventScript_MattaiosNormal_Text_1
# 100 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 101 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	release
	end


AcrisiaCaves_BF1_EventScript_MattaiosHard::
# 106 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	trainerbattle_single TRAINER_LEADER_MATTAIOS_HARD, AcrisiaCaves_BF1_Text_MattaiosIntro, AcrisiaCaves_BF1_Text_MattaiosDefeat, AcrisiaCaves_BF1_EventScript_MattaiosDefeatScript, NO_MUSIC
# 107 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaCaves_BF1_EventScript_MattaiosNormal_Text_0
# 108 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaCaves_BF1_EventScript_MattaiosNormal_Text_1
# 109 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 110 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	release
	end


AcrisiaCaves_BF1_EventScript_MattaiosDefeatScript::
# 125 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 126 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	message AcrisiaCaves_BF1_EventScript_MattaiosDefeatScript_Text_0
# 127 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	waitmessage
# 128 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 131 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	setflag FLAG_BADGE02_GET
# 133 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	settrainerflag TRAINER_ACRISIACAVES_F1_UMBER
# 134 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	settrainerflag TRAINER_ACRISIACAVES_BF1_BERKLEY
# 135 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	settrainerflag TRAINER_ACRISIACAVES_BF1_MARGAREY
# 136 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	settrainerflag TRAINER_ACRISIACAVES_BF1_KYLON
# 138 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	setvar VAR_RANIA_STATE, 2
# 139 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	setvar VAR_NIKO_STATE, 3
# 142 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaCaves_BF1_EventScript_MattaiosNormal_Text_0
# 143 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaCaves_BF1_EventScript_MattaiosDefeatScript_Text_1
# 144 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 147 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 148 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaCaves_BF1_EventScript_MattaiosNormal_Text_0
# 149 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaCaves_BF1_EventScript_MattaiosDefeatScript_Text_2
# 150 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 152 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	release
	end


AcrisiaCaves_BF1_EventScript_Larvitar::
# 158 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	lock
# 159 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	faceplayer
# 160 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaCaves_BF1_EventScript_Larvitar_Text_0
# 161 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	playmoncry SPECIES_LARVITAR, CRY_MODE_NORMAL
# 162 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaCaves_BF1_EventScript_Larvitar_Text_1
# 163 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	waitmoncry
# 164 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 165 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaCaves_BF1_EventScript_Larvitar_Text_2
# 166 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 167 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	release
	end


AcrisiaCaves_BF1_EventScript_GymStatue_Text_0:
# 12 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Acrisia Caves Pokémon Gym\p"
	.string "Recent Victors: Niko, {PLAYER}$"

AcrisiaCaves_BF1_EventScript_GymStatue_Text_1:
# 16 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Acrisia Caves Pokémon Gym\p"
	.string "Recent Victors: Niko$"

AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Berkley_Text_0:
# 26 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Berkley$"

AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Berkley_Text_1:
# 27 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "I hear fire crackling to the right, could\n"
	.string "that be where Mattaios is...?$"

AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Margarey_Text_0:
# 44 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Margarey$"

AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Margarey_Text_1:
# 45 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "This Gym is unique, because... well, it's\n"
	.string "not really a Gym at all! Mattaios spends\l"
	.string "all his time digging down here.$"

AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Kylon_Text_0:
# 62 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Kylon$"

AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Kylon_Text_1:
# 63 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "You'll just weaken Mattaios up, that'll\n"
	.string "help me win!$"

AcrisiaCaves_BF1_EventScript_MattaiosNormal_Text_0:
# 98 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Mattaios$"

AcrisiaCaves_BF1_EventScript_MattaiosNormal_Text_1:
# 99 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Now that our battle's over, I should get\n"
	.string "back to work. Expandin' the caves and\l"
	.string "looking fer gems never stops fer me.$"

AcrisiaCaves_BF1_EventScript_MattaiosDefeatScript_Text_0:
# 126 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "{PLAYER} received the Gemstone\n"
	.string "Badge from Mattaios.$"

AcrisiaCaves_BF1_EventScript_MattaiosDefeatScript_Text_1:
# 143 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "The Gemstone Badge marks yer second\n"
	.string "completed Gym, eh? After two Badges,\l"
	.string "most trainers are fit to explore more of\l"
	.string "Ilios. Yer certainly strong enough!\l"
	.string "You'll also be able to use the {COLOR GREEN}HM Rock\l"
	.string "Smash{COLOR DARK_GRAY} outside battle.\p"
	.string "Fwahaha, there's more fer ya!$"

AcrisiaCaves_BF1_EventScript_MattaiosDefeatScript_Text_2:
# 149 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "That's the TM fer {COLOR GREEN}Rock Tomb{COLOR DARK_GRAY}! My\n"
	.string "Larvitar here learned this after\l"
	.string "gettin' rocks dropped on us one-too\l"
	.string "many times, fwahaha!\p"
	.string "Y'know, another Acrisia University\n"
	.string "student just passed through here. If I\l"
	.string "were you, I'd hightail it {COLOR GREEN}back to the\l"
	.string "University{COLOR DARK_GRAY} to see what's what!$"

AcrisiaCaves_BF1_EventScript_Larvitar_Text_0:
# 160 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Larvitar$"

AcrisiaCaves_BF1_EventScript_Larvitar_Text_1:
# 162 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Gwaah.$"

AcrisiaCaves_BF1_EventScript_Larvitar_Text_2:
# 165 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Larvitar is happy to take a break.$"

AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_BerkleyIntro::
# 32 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "I want to challenge Mattaios, but I\n"
	.string "can't find him in this darkness!$"

AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_BerkleyDefeat::
# 36 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "I'll never reach him at this rate!$"

AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_MargareyIntro::
# 50 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "My Pokémon can punch through these\n"
	.string "quartz gems!$"

AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_MargareyDefeat::
# 54 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "I bet yours can too.$"

AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_KylonIntro::
# 68 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Nuh uh, Mattaios is gonna fight ME next!$"

AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_KylonDefeat::
# 72 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Sniffle... this isn't fair!$"

AcrisiaCaves_BF1_Text_MattaiosIntro::
# 114 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Found yer way down here, eh?\p"
	.string "Most Gym Leaders have their fancy\n"
	.string "buildings, with their fancy lights and\l"
	.string "walls. Not me. I dig away down here,\l"
	.string "always diggin', always in the dark...\p"
	.string "Well, this'll be my break. C'mon!$"

AcrisiaCaves_BF1_Text_MattaiosDefeat::
# 118 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Yer stronger than me, even after all\n"
	.string "this diggin'!$"

AcrisiaCaves_BF1_MapScripts::
# 2 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AcrisiaCaves_BF1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AcrisiaCaves_BF1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	setflashlevel 5
	return


AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Berkley::
# 9 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	trainerbattle_single TRAINER_ACRISIACAVES_BF1_BERKLEY, AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_BerkleyIntro, AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_BerkleyDefeat
# 10 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Berkley_Text_0
# 11 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Berkley_Text_1
# 12 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 13 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	release
	end


AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Margarey::
# 27 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	trainerbattle_single TRAINER_ACRISIACAVES_BF1_MARGAREY, AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_MargareyIntro, AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_MargareyDefeat
# 28 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Margarey_Text_0
# 29 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Margarey_Text_1
# 30 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 31 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	release
	end


AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Kylon::
# 45 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	trainerbattle_single TRAINER_ACRISIACAVES_BF1_KYLON, AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_KylonIntro, AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_KylonDefeat
# 46 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Kylon_Text_0
# 47 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Kylon_Text_1
# 48 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 49 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	release
	end


AcrisiaCaves_BF1_EventScript_Mattaios::
# 65 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	lock
# 66 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	faceplayer
# 67 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	compare VAR_DIFFICULTY, 0
	goto_if_eq AcrisiaCaves_BF1_EventScript_Mattaios_2
# 73 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	goto AcrisiaCaves_BF1_EventScript_MattaiosHard
AcrisiaCaves_BF1_EventScript_Mattaios_1:
# 75 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	release
	end

AcrisiaCaves_BF1_EventScript_Mattaios_2:
# 69 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	goto AcrisiaCaves_BF1_EventScript_MattaiosNormal
	goto AcrisiaCaves_BF1_EventScript_Mattaios_1


AcrisiaCaves_BF1_EventScript_MattaiosNormal::
# 81 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	trainerbattle_single TRAINER_LEADER_MATTAIOS, AcrisiaCaves_BF1_Text_MattaiosIntro, AcrisiaCaves_BF1_Text_MattaiosDefeat, AcrisiaCaves_BF1_EventScript_MattaiosDefeatScript, NO_MUSIC
# 82 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaCaves_BF1_EventScript_MattaiosNormal_Text_0
# 83 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaCaves_BF1_EventScript_MattaiosNormal_Text_1
# 84 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 85 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	release
	end


AcrisiaCaves_BF1_EventScript_MattaiosHard::
# 90 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	trainerbattle_single TRAINER_LEADER_MATTAIOS_HARD, AcrisiaCaves_BF1_Text_MattaiosIntro, AcrisiaCaves_BF1_Text_MattaiosDefeat, AcrisiaCaves_BF1_EventScript_MattaiosDefeatScript, NO_MUSIC
# 91 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaCaves_BF1_EventScript_MattaiosNormal_Text_0
# 92 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaCaves_BF1_EventScript_MattaiosNormal_Text_1
# 93 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 94 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	release
	end


AcrisiaCaves_BF1_EventScript_MattaiosDefeatScript::
# 109 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 110 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	message AcrisiaCaves_BF1_EventScript_MattaiosDefeatScript_Text_0
# 111 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	waitmessage
# 112 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 115 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	setflag FLAG_BADGE02_GET
# 117 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	settrainerflag TRAINER_ACRISIACAVES_F1_UMBER
# 118 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	settrainerflag TRAINER_ACRISIACAVES_BF1_BERKLEY
# 119 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	settrainerflag TRAINER_ACRISIACAVES_BF1_MARGAREY
# 120 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	settrainerflag TRAINER_ACRISIACAVES_BF1_KYLON
# 123 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaCaves_BF1_EventScript_MattaiosNormal_Text_0
# 124 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaCaves_BF1_EventScript_MattaiosDefeatScript_Text_1
# 125 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 128 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 129 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaCaves_BF1_EventScript_MattaiosNormal_Text_0
# 130 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaCaves_BF1_EventScript_MattaiosDefeatScript_Text_2
# 131 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 133 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	release
	end


AcrisiaCaves_BF1_EventScript_Larvitar::
# 139 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	lock
# 140 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	faceplayer
# 141 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	speakername AcrisiaCaves_BF1_EventScript_Larvitar_Text_0
# 142 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	playmoncry SPECIES_LARVITAR, CRY_MODE_NORMAL
# 143 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaCaves_BF1_EventScript_Larvitar_Text_1
# 144 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	waitmoncry
# 145 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 146 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	msgbox AcrisiaCaves_BF1_EventScript_Larvitar_Text_2
# 147 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	closemessage
# 148 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	release
	end


AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Berkley_Text_0:
# 10 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Berkley$"

AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Berkley_Text_1:
# 11 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "I hear fire crackling to the right, could\n"
	.string "that be where Mattaios is...?$"

AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Margarey_Text_0:
# 28 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Margarey$"

AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Margarey_Text_1:
# 29 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "This Gym is unique, because... well, it's\n"
	.string "not really a Gym at all! Mattaios spends\l"
	.string "all his time digging down here.$"

AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Kylon_Text_0:
# 46 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Kylon$"

AcrisiaCaves_BF1_EventScript_Trainer_AcrisiaCaves_BF1_Kylon_Text_1:
# 47 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "You'll just weaken Mattaios up, that'll\n"
	.string "help me win!$"

AcrisiaCaves_BF1_EventScript_MattaiosNormal_Text_0:
# 82 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Mattaios$"

AcrisiaCaves_BF1_EventScript_MattaiosNormal_Text_1:
# 83 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Now that our battle's over, I should get\n"
	.string "back to work. Expandin' the caves and\l"
	.string "looking fer gems never stops fer me.$"

AcrisiaCaves_BF1_EventScript_MattaiosDefeatScript_Text_0:
# 110 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "{PLAYER} received the Gemstone\n"
	.string "Badge from Mattaios.$"

AcrisiaCaves_BF1_EventScript_MattaiosDefeatScript_Text_1:
# 124 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "The Gemstone Badge marks yer second\n"
	.string "completed Gym, eh? After two Badges,\l"
	.string "most trainers are fit to explore more of\l"
	.string "Ilios. Yer certainly strong enough!\l"
	.string "You'll also be able to use the {COLOR GREEN}HM Rock\l"
	.string "Smash{COLOR DARK_GRAY} outside battle.\p"
	.string "Fwahaha, there's more fer ya!$"

AcrisiaCaves_BF1_EventScript_MattaiosDefeatScript_Text_2:
# 130 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "That's the TM fer {COLOR GREEN}Rock Tomb{COLOR DARK_GRAY}! My\n"
	.string "Larvitar here learned this after\l"
	.string "gettin' rocks dropped on us one-too\l"
	.string "many times, fwahaha!\p"
	.string "Y'know, another Acrisia University\n"
	.string "student just passed through here. If I\l"
	.string "were you, I'd hightail it {COLOR GREEN}back to the\l"
	.string "University{COLOR DARK_GRAY} to see what's what!$"

AcrisiaCaves_BF1_EventScript_Larvitar_Text_0:
# 141 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Larvitar$"

AcrisiaCaves_BF1_EventScript_Larvitar_Text_1:
# 143 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Gwaah.$"

AcrisiaCaves_BF1_EventScript_Larvitar_Text_2:
# 146 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Larvitar is happy to take a break.$"

AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_BerkleyIntro::
# 16 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "I want to challenge Mattaios, but I\n"
	.string "can't find him in this darkness!$"

AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_BerkleyDefeat::
# 20 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "I'll never reach him at this rate!$"

AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_MargareyIntro::
# 34 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "My Pokémon can punch through these\n"
	.string "quartz gems!$"

AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_MargareyDefeat::
# 38 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "I bet yours can too.$"

AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_KylonIntro::
# 52 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Nuh uh, Mattaios is gonna fight ME next!$"

AcrisiaCaves_BF1_Text_Trainer_AcrisiaCaves_BF1_KylonDefeat::
# 56 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Sniffle... this isn't fair!$"

AcrisiaCaves_BF1_Text_MattaiosIntro::
# 98 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Found yer way down here, eh?\p"
	.string "Most Gym Leaders have their fancy\n"
	.string "buildings, with their fancy lights and\l"
	.string "walls. Not me. I dig away down here,\l"
	.string "always diggin', always in the dark...\p"
	.string "Well, this'll be my break. C'mon!$"

AcrisiaCaves_BF1_Text_MattaiosDefeat::
# 102 "data/maps/AcrisiaCaves_BF1/scripts.pory"
	.string "Yer stronger than me, even after all\n"
	.string "this diggin'!$"

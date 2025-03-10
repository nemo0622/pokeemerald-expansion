KalamiCity_Gym_MapScripts::
	.byte 0


KalamiCity_Gym_EventScript_GymStatue::
# 5 "data/maps/KalamiCity_Gym/scripts.pory"
	lock
# 6 "data/maps/KalamiCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, KalamiCity_Gym_EventScript_GymStatue_2
# 12 "data/maps/KalamiCity_Gym/scripts.pory"
	msgbox KalamiCity_Gym_EventScript_GymStatue_Text_1
KalamiCity_Gym_EventScript_GymStatue_1:
# 14 "data/maps/KalamiCity_Gym/scripts.pory"
	closemessage
# 15 "data/maps/KalamiCity_Gym/scripts.pory"
	release
	end

KalamiCity_Gym_EventScript_GymStatue_2:
# 8 "data/maps/KalamiCity_Gym/scripts.pory"
	msgbox KalamiCity_Gym_EventScript_GymStatue_Text_0
	goto KalamiCity_Gym_EventScript_GymStatue_1


KalamiCity_Gym_EventScript_GymMan::
# 21 "data/maps/KalamiCity_Gym/scripts.pory"
	lock
# 22 "data/maps/KalamiCity_Gym/scripts.pory"
	faceplayer
# 23 "data/maps/KalamiCity_Gym/scripts.pory"
	speakername KalamiCity_Gym_EventScript_GymMan_Text_0
# 24 "data/maps/KalamiCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, KalamiCity_Gym_EventScript_GymMan_2
# 30 "data/maps/KalamiCity_Gym/scripts.pory"
	msgbox KalamiCity_Gym_EventScript_GymMan_Text_2
KalamiCity_Gym_EventScript_GymMan_1:
# 32 "data/maps/KalamiCity_Gym/scripts.pory"
	closemessage
# 33 "data/maps/KalamiCity_Gym/scripts.pory"
	release
	end

KalamiCity_Gym_EventScript_GymMan_2:
# 26 "data/maps/KalamiCity_Gym/scripts.pory"
	msgbox KalamiCity_Gym_EventScript_GymMan_Text_1
	goto KalamiCity_Gym_EventScript_GymMan_1


KalamiCity_Gym_EventScript_Mattaios::
# 39 "data/maps/KalamiCity_Gym/scripts.pory"
	lock
# 40 "data/maps/KalamiCity_Gym/scripts.pory"
	faceplayer
# 41 "data/maps/KalamiCity_Gym/scripts.pory"
	goto_if_unset FLAG_HARD_MODE, KalamiCity_Gym_EventScript_Mattaios_2
# 47 "data/maps/KalamiCity_Gym/scripts.pory"
	goto KalamiCity_Gym_EventScript_MattaiosHard
KalamiCity_Gym_EventScript_Mattaios_1:
# 49 "data/maps/KalamiCity_Gym/scripts.pory"
	release
	end

KalamiCity_Gym_EventScript_Mattaios_2:
# 43 "data/maps/KalamiCity_Gym/scripts.pory"
	goto KalamiCity_Gym_EventScript_MattaiosNormal
	goto KalamiCity_Gym_EventScript_Mattaios_1


KalamiCity_Gym_EventScript_MattaiosNormal::
# 55 "data/maps/KalamiCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_MATTAIOS, KalamiCity_Gym_Text_MattaiosIntro, KalamiCity_Gym_Text_MattaiosDefeat, KalamiCity_Gym_EventScript_MattaiosDefeatScript, NO_MUSIC
# 56 "data/maps/KalamiCity_Gym/scripts.pory"
	speakername KalamiCity_Gym_EventScript_MattaiosNormal_Text_0
# 57 "data/maps/KalamiCity_Gym/scripts.pory"
	msgbox KalamiCity_Gym_EventScript_MattaiosNormal_Text_1
# 58 "data/maps/KalamiCity_Gym/scripts.pory"
	closemessage
# 59 "data/maps/KalamiCity_Gym/scripts.pory"
	release
	end


KalamiCity_Gym_EventScript_MattaiosHard::
# 64 "data/maps/KalamiCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_MATTAIOS_HARD, KalamiCity_Gym_Text_MattaiosIntro, KalamiCity_Gym_Text_MattaiosDefeat, KalamiCity_Gym_EventScript_MattaiosDefeatScript, NO_MUSIC
# 65 "data/maps/KalamiCity_Gym/scripts.pory"
	speakername KalamiCity_Gym_EventScript_MattaiosNormal_Text_0
# 66 "data/maps/KalamiCity_Gym/scripts.pory"
	msgbox KalamiCity_Gym_EventScript_MattaiosNormal_Text_1
# 67 "data/maps/KalamiCity_Gym/scripts.pory"
	closemessage
# 68 "data/maps/KalamiCity_Gym/scripts.pory"
	release
	end


KalamiCity_Gym_EventScript_MattaiosDefeatScript::
# 83 "data/maps/KalamiCity_Gym/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 84 "data/maps/KalamiCity_Gym/scripts.pory"
	message KalamiCity_Gym_EventScript_MattaiosDefeatScript_Text_0
# 85 "data/maps/KalamiCity_Gym/scripts.pory"
	waitmessage
# 86 "data/maps/KalamiCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 89 "data/maps/KalamiCity_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 91 "data/maps/KalamiCity_Gym/scripts.pory"
	settrainerflag TRAINER_KALAMI_GYM_REX
# 92 "data/maps/KalamiCity_Gym/scripts.pory"
	settrainerflag TRAINER_KALAMI_GYM_DANIEL
# 93 "data/maps/KalamiCity_Gym/scripts.pory"
	settrainerflag TRAINER_KALAMI_GYM_TASOULA
# 95 "data/maps/KalamiCity_Gym/scripts.pory"
	setvar VAR_RANIA_STATE, 2
# 96 "data/maps/KalamiCity_Gym/scripts.pory"
	setvar VAR_NIKO_STATE, 3
# 99 "data/maps/KalamiCity_Gym/scripts.pory"
	speakername KalamiCity_Gym_EventScript_MattaiosNormal_Text_0
# 100 "data/maps/KalamiCity_Gym/scripts.pory"
	msgbox KalamiCity_Gym_EventScript_MattaiosDefeatScript_Text_1
# 101 "data/maps/KalamiCity_Gym/scripts.pory"
	closemessage
# 104 "data/maps/KalamiCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 105 "data/maps/KalamiCity_Gym/scripts.pory"
	speakername KalamiCity_Gym_EventScript_MattaiosNormal_Text_0
# 106 "data/maps/KalamiCity_Gym/scripts.pory"
	msgbox KalamiCity_Gym_EventScript_MattaiosDefeatScript_Text_2
# 107 "data/maps/KalamiCity_Gym/scripts.pory"
	closemessage
# 109 "data/maps/KalamiCity_Gym/scripts.pory"
	release
	end


KalamiCity_Gym_EventScript_Larvitar::
# 115 "data/maps/KalamiCity_Gym/scripts.pory"
	lock
# 116 "data/maps/KalamiCity_Gym/scripts.pory"
	faceplayer
# 117 "data/maps/KalamiCity_Gym/scripts.pory"
	speakername KalamiCity_Gym_EventScript_Larvitar_Text_0
# 118 "data/maps/KalamiCity_Gym/scripts.pory"
	playmoncry SPECIES_LARVITAR, CRY_MODE_NORMAL
# 119 "data/maps/KalamiCity_Gym/scripts.pory"
	msgbox KalamiCity_Gym_EventScript_Larvitar_Text_1
# 120 "data/maps/KalamiCity_Gym/scripts.pory"
	waitmoncry
# 121 "data/maps/KalamiCity_Gym/scripts.pory"
	closemessage
# 122 "data/maps/KalamiCity_Gym/scripts.pory"
	msgbox KalamiCity_Gym_EventScript_Larvitar_Text_2
# 123 "data/maps/KalamiCity_Gym/scripts.pory"
	closemessage
# 124 "data/maps/KalamiCity_Gym/scripts.pory"
	release
	end


KalamiCity_Gym_EventScript_Trainer_Kalami_Gym_Rex::
# 133 "data/maps/KalamiCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KALAMI_GYM_REX, KalamiCity_Gym_Text_Trainer_Kalami_Gym_RexIntro, KalamiCity_Gym_Text_Trainer_Kalami_Gym_RexDefeat
# 134 "data/maps/KalamiCity_Gym/scripts.pory"
	speakername KalamiCity_Gym_EventScript_Trainer_Kalami_Gym_Rex_Text_0
# 135 "data/maps/KalamiCity_Gym/scripts.pory"
	msgbox KalamiCity_Gym_EventScript_Trainer_Kalami_Gym_Rex_Text_1
# 136 "data/maps/KalamiCity_Gym/scripts.pory"
	closemessage
# 137 "data/maps/KalamiCity_Gym/scripts.pory"
	release
	end


KalamiCity_Gym_EventScript_Trainer_Kalami_Gym_Daniel::
# 151 "data/maps/KalamiCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KALAMI_GYM_DANIEL, KalamiCity_Gym_Text_Trainer_Kalami_Gym_DanielIntro, KalamiCity_Gym_Text_Trainer_Kalami_Gym_DanielDefeat
# 152 "data/maps/KalamiCity_Gym/scripts.pory"
	speakername KalamiCity_Gym_EventScript_Trainer_Kalami_Gym_Daniel_Text_0
# 153 "data/maps/KalamiCity_Gym/scripts.pory"
	msgbox KalamiCity_Gym_EventScript_Trainer_Kalami_Gym_Daniel_Text_1
# 154 "data/maps/KalamiCity_Gym/scripts.pory"
	closemessage
# 155 "data/maps/KalamiCity_Gym/scripts.pory"
	release
	end


KalamiCity_Gym_EventScript_Trainer_Kalami_Gym_Tasoula::
# 169 "data/maps/KalamiCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KALAMI_GYM_TASOULA, KalamiCity_Gym_Text_Trainer_Kalami_Gym_TasoulaIntro, KalamiCity_Gym_Text_Trainer_Kalami_Gym_TasoulaDefeat
# 170 "data/maps/KalamiCity_Gym/scripts.pory"
	speakername KalamiCity_Gym_EventScript_Trainer_Kalami_Gym_Tasoula_Text_0
# 171 "data/maps/KalamiCity_Gym/scripts.pory"
	msgbox KalamiCity_Gym_EventScript_Trainer_Kalami_Gym_Daniel_Text_1
# 172 "data/maps/KalamiCity_Gym/scripts.pory"
	closemessage
# 173 "data/maps/KalamiCity_Gym/scripts.pory"
	release
	end


KalamiCity_Gym_EventScript_GymStatue_Text_0:
# 8 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "Acrisia Caves Pokémon Gym\p"
	.string "Recent Victors: Niko, {PLAYER}$"

KalamiCity_Gym_EventScript_GymStatue_Text_1:
# 12 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "Acrisia Caves Pokémon Gym\p"
	.string "Recent Victors: Niko$"

KalamiCity_Gym_EventScript_GymMan_Text_0:
# 23 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "Gym Guide$"

KalamiCity_Gym_EventScript_GymMan_Text_1:
# 26 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "Incredible! You're a rising star! Keep it\n"
	.string "up, future Champ!$"

KalamiCity_Gym_EventScript_GymMan_Text_2:
# 30 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "Welcome to the Kalami City Gym!\p"
	.string "The Gym Leader, Mattaios, oversees\n"
	.string "production of industrial goods here.\l"
	.string "Expect plenty of tough Pokémon, with\l"
	.string "Rock, Steel, or Electric types!$"

KalamiCity_Gym_EventScript_MattaiosNormal_Text_0:
# 56 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "Mattaios$"

KalamiCity_Gym_EventScript_MattaiosNormal_Text_1:
# 57 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "Now that our battle's over, I should get\n"
	.string "back to work. Bendin' steel and making\l"
	.string "Poké balls never stops!$"

KalamiCity_Gym_EventScript_MattaiosDefeatScript_Text_0:
# 84 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "{PLAYER} received the Gemstone\n"
	.string "Badge from Mattaios.$"

KalamiCity_Gym_EventScript_MattaiosDefeatScript_Text_1:
# 100 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "The Gemstone Badge marks yer second\n"
	.string "completed Gym, eh? After two Badges,\l"
	.string "most trainers are fit to explore more of\l"
	.string "Ilios. Yer certainly strong enough!\l"
	.string "You'll also be able to use the {COLOR GREEN}HM Rock\l"
	.string "Smash{COLOR DARK_GRAY} outside battle.\p"
	.string "Fwahaha, there's more fer ya!$"

KalamiCity_Gym_EventScript_MattaiosDefeatScript_Text_2:
# 106 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "That's the TM fer {COLOR GREEN}Rock Tomb{COLOR DARK_GRAY}! My\n"
	.string "Larvitar here learned this from digging\l"
	.string "around for metals.\p"
	.string "Y'know, another Acrisia University\n"
	.string "student just passed through here. If I\l"
	.string "were you, I'd hightail it {COLOR GREEN}back to the\l"
	.string "University{COLOR DARK_GRAY} to see what's what!$"

KalamiCity_Gym_EventScript_Larvitar_Text_0:
# 117 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "Larvitar$"

KalamiCity_Gym_EventScript_Larvitar_Text_1:
# 119 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "Gwaah.$"

KalamiCity_Gym_EventScript_Larvitar_Text_2:
# 122 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "Larvitar is happy to take a break from\n"
	.string "working.$"

KalamiCity_Gym_EventScript_Trainer_Kalami_Gym_Rex_Text_0:
# 134 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "Rex$"

KalamiCity_Gym_EventScript_Trainer_Kalami_Gym_Rex_Text_1:
# 135 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "We make a bunch goods here that we ship\n"
	.string "across the region.\p"
	.string "...I realize it's a mess in here. We're at\n"
	.string "work, darn it!$"

KalamiCity_Gym_EventScript_Trainer_Kalami_Gym_Daniel_Text_0:
# 152 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "Daniel$"

KalamiCity_Gym_EventScript_Trainer_Kalami_Gym_Daniel_Text_1:
# 153 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "Our Gym produces Poké balls and other\n"
	.string "helpful items for Trainers. We make\l"
	.string "Kalami City a major exporter!$"

KalamiCity_Gym_EventScript_Trainer_Kalami_Gym_Tasoula_Text_0:
# 170 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "Tasoula$"

KalamiCity_Gym_Text_MattaiosIntro::
# 72 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "Got past my workers, eh? Welcome to my\n"
	.string "humble factory-turned-Gym!\p"
	.string "My Larvitar and I train hard every day.\n"
	.string "We're so strong, we can bend metal all by\l"
	.string "'rselves. Now, help us get stronger!$"

KalamiCity_Gym_Text_MattaiosDefeat::
# 76 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "Woah, you darn-near broke my\n"
	.string "flashlight!$"

KalamiCity_Gym_Text_Trainer_Kalami_Gym_RexIntro::
# 140 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "Woah woah, watch yourself! We're at\n"
	.string "work here!$"

KalamiCity_Gym_Text_Trainer_Kalami_Gym_RexDefeat::
# 144 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "Hmph, I guess you can get past.$"

KalamiCity_Gym_Text_Trainer_Kalami_Gym_DanielIntro::
# 158 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "Excuse the mess, we're hard at work!$"

KalamiCity_Gym_Text_Trainer_Kalami_Gym_DanielDefeat::
# 162 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "Well, back to work.$"

KalamiCity_Gym_Text_Trainer_Kalami_Gym_TasoulaIntro::
# 176 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "Excuse the mess, we're hard at work!$"

KalamiCity_Gym_Text_Trainer_Kalami_Gym_TasoulaDefeat::
# 180 "data/maps/KalamiCity_Gym/scripts.pory"
	.string "Well, back to work.$"

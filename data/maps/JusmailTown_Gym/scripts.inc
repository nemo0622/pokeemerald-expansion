JusmailTown_Gym_MapScripts::
	.byte 0


JusmailTown_Gym_EventScript_GymStatue::
# 5 "data/maps/JusmailTown_Gym/scripts.pory"
	lock
# 6 "data/maps/JusmailTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, JusmailTown_Gym_EventScript_GymStatue_2
# 12 "data/maps/JusmailTown_Gym/scripts.pory"
	msgbox JusmailTown_Gym_EventScript_GymStatue_Text_1
JusmailTown_Gym_EventScript_GymStatue_1:
# 14 "data/maps/JusmailTown_Gym/scripts.pory"
	closemessage
# 15 "data/maps/JusmailTown_Gym/scripts.pory"
	release
	end

JusmailTown_Gym_EventScript_GymStatue_2:
# 8 "data/maps/JusmailTown_Gym/scripts.pory"
	msgbox JusmailTown_Gym_EventScript_GymStatue_Text_0
	goto JusmailTown_Gym_EventScript_GymStatue_1


JusmailTown_Gym_EventScript_GymMan::
# 21 "data/maps/JusmailTown_Gym/scripts.pory"
	lock
# 22 "data/maps/JusmailTown_Gym/scripts.pory"
	faceplayer
# 23 "data/maps/JusmailTown_Gym/scripts.pory"
	speakername JusmailTown_Gym_EventScript_GymMan_Text_0
# 24 "data/maps/JusmailTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, JusmailTown_Gym_EventScript_GymMan_2
# 30 "data/maps/JusmailTown_Gym/scripts.pory"
	msgbox JusmailTown_Gym_EventScript_GymMan_Text_2
JusmailTown_Gym_EventScript_GymMan_1:
# 32 "data/maps/JusmailTown_Gym/scripts.pory"
	closemessage
# 33 "data/maps/JusmailTown_Gym/scripts.pory"
	release
	end

JusmailTown_Gym_EventScript_GymMan_2:
# 26 "data/maps/JusmailTown_Gym/scripts.pory"
	msgbox JusmailTown_Gym_EventScript_GymMan_Text_1
	goto JusmailTown_Gym_EventScript_GymMan_1


JusmailTown_Gym_EventScript_Skiddo::
# 39 "data/maps/JusmailTown_Gym/scripts.pory"
	lock
# 40 "data/maps/JusmailTown_Gym/scripts.pory"
	faceplayer
# 41 "data/maps/JusmailTown_Gym/scripts.pory"
	speakername JusmailTown_Gym_EventScript_Skiddo_Text_0
# 42 "data/maps/JusmailTown_Gym/scripts.pory"
	playmoncry SPECIES_SKIDDO, CRY_MODE_NORMAL
# 43 "data/maps/JusmailTown_Gym/scripts.pory"
	msgbox JusmailTown_Gym_EventScript_Skiddo_Text_1
# 44 "data/maps/JusmailTown_Gym/scripts.pory"
	waitmoncry
# 45 "data/maps/JusmailTown_Gym/scripts.pory"
	closemessage
# 46 "data/maps/JusmailTown_Gym/scripts.pory"
	msgbox JusmailTown_Gym_EventScript_Skiddo_Text_2
# 47 "data/maps/JusmailTown_Gym/scripts.pory"
	closemessage
# 48 "data/maps/JusmailTown_Gym/scripts.pory"
	release
	end


JusmailTown_Gym_EventScript_Polymnia::
# 54 "data/maps/JusmailTown_Gym/scripts.pory"
	lock
# 55 "data/maps/JusmailTown_Gym/scripts.pory"
	faceplayer
# 56 "data/maps/JusmailTown_Gym/scripts.pory"
	goto_if_unset FLAG_HARD_MODE, JusmailTown_Gym_EventScript_Polymnia_2
# 62 "data/maps/JusmailTown_Gym/scripts.pory"
	goto JusmailTown_Gym_EventScript_Polymnia_HardDifficulty
JusmailTown_Gym_EventScript_Polymnia_1:
# 64 "data/maps/JusmailTown_Gym/scripts.pory"
	release
	end

JusmailTown_Gym_EventScript_Polymnia_2:
# 58 "data/maps/JusmailTown_Gym/scripts.pory"
	goto JusmailTown_Gym_EventScript_Polymnia_NormalDifficulty
	goto JusmailTown_Gym_EventScript_Polymnia_1


JusmailTown_Gym_EventScript_Polymnia_NormalDifficulty::
# 70 "data/maps/JusmailTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_POLYMNIA, JusmailTown_Gym_Text_PolymniaIntro, JusmailTown_Gym_Text_PolymniaDefeat, JusmailTown_Gym_EventScript_Polymnia_DefeatedScript, NO_MUSIC
# 71 "data/maps/JusmailTown_Gym/scripts.pory"
	speakername JusmailTown_Gym_EventScript_Polymnia_NormalDifficulty_Text_0
# 72 "data/maps/JusmailTown_Gym/scripts.pory"
	msgbox JusmailTown_Gym_EventScript_Polymnia_NormalDifficulty_Text_1
# 73 "data/maps/JusmailTown_Gym/scripts.pory"
	closemessage
# 74 "data/maps/JusmailTown_Gym/scripts.pory"
	release
	end


JusmailTown_Gym_EventScript_Polymnia_HardDifficulty::
# 79 "data/maps/JusmailTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_POLYMNIA_HARD, JusmailTown_Gym_Text_PolymniaIntro, JusmailTown_Gym_Text_PolymniaDefeat, JusmailTown_Gym_EventScript_Polymnia_DefeatedScript, NO_MUSIC
# 80 "data/maps/JusmailTown_Gym/scripts.pory"
	speakername JusmailTown_Gym_EventScript_Polymnia_NormalDifficulty_Text_0
# 81 "data/maps/JusmailTown_Gym/scripts.pory"
	msgbox JusmailTown_Gym_EventScript_Polymnia_NormalDifficulty_Text_1
# 82 "data/maps/JusmailTown_Gym/scripts.pory"
	closemessage
# 83 "data/maps/JusmailTown_Gym/scripts.pory"
	release
	end


JusmailTown_Gym_EventScript_Polymnia_DefeatedScript::
# 97 "data/maps/JusmailTown_Gym/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 98 "data/maps/JusmailTown_Gym/scripts.pory"
	message JusmailTown_Gym_EventScript_Polymnia_DefeatedScript_Text_0
# 99 "data/maps/JusmailTown_Gym/scripts.pory"
	waitmessage
# 100 "data/maps/JusmailTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 103 "data/maps/JusmailTown_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 105 "data/maps/JusmailTown_Gym/scripts.pory"
	settrainerflag TRAINER_JUSMAILGYM_KARI
# 106 "data/maps/JusmailTown_Gym/scripts.pory"
	settrainerflag TRAINER_JUSMAILGYM_IASON
# 107 "data/maps/JusmailTown_Gym/scripts.pory"
	settrainerflag TRAINER_JUSMAILGYM_BRYCE
# 108 "data/maps/JusmailTown_Gym/scripts.pory"
	settrainerflag TRAINER_JUSMAILGYM_ADEL
# 110 "data/maps/JusmailTown_Gym/scripts.pory"
	clearflag FLAG_HIDE_RANIA_JUSMAIL
# 111 "data/maps/JusmailTown_Gym/scripts.pory"
	setrespawn HEAL_LOCATION_JUSMAIL_TOWN
# 114 "data/maps/JusmailTown_Gym/scripts.pory"
	speakername JusmailTown_Gym_EventScript_Polymnia_NormalDifficulty_Text_0
# 115 "data/maps/JusmailTown_Gym/scripts.pory"
	msgbox JusmailTown_Gym_EventScript_Polymnia_DefeatedScript_Text_1
# 116 "data/maps/JusmailTown_Gym/scripts.pory"
	closemessage
# 119 "data/maps/JusmailTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 120 "data/maps/JusmailTown_Gym/scripts.pory"
	speakername JusmailTown_Gym_EventScript_Polymnia_NormalDifficulty_Text_0
# 121 "data/maps/JusmailTown_Gym/scripts.pory"
	msgbox JusmailTown_Gym_EventScript_Polymnia_DefeatedScript_Text_2
# 122 "data/maps/JusmailTown_Gym/scripts.pory"
	closemessage
# 124 "data/maps/JusmailTown_Gym/scripts.pory"
	delay 20
# 125 "data/maps/JusmailTown_Gym/scripts.pory"
	completequest QUEST_GYM_1
# 126 "data/maps/JusmailTown_Gym/scripts.pory"
	delay 20
# 127 "data/maps/JusmailTown_Gym/scripts.pory"
	startquest QUEST_CHECK_AFTER_GYM_1
# 129 "data/maps/JusmailTown_Gym/scripts.pory"
	release
	end


JusmailTown_Gym_EventScript_Trainer_JusmailGym_Kari::
# 137 "data/maps/JusmailTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUSMAILGYM_KARI, JusmailTown_Gym_Text_Trainer_JusmailGym_KariIntro, JusmailTown_Gym_Text_Trainer_JusmailGym_KariDefeat
# 138 "data/maps/JusmailTown_Gym/scripts.pory"
	speakername JusmailTown_Gym_EventScript_Trainer_JusmailGym_Kari_Text_0
# 139 "data/maps/JusmailTown_Gym/scripts.pory"
	msgbox JusmailTown_Gym_EventScript_Trainer_JusmailGym_Kari_Text_1
# 140 "data/maps/JusmailTown_Gym/scripts.pory"
	closemessage
# 141 "data/maps/JusmailTown_Gym/scripts.pory"
	release
	end


JusmailTown_Gym_EventScript_Trainer_JusmailGym_Iason::
# 155 "data/maps/JusmailTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUSMAILGYM_IASON, JusmailTown_Gym_Text_Trainer_JusmailGym_IasonIntro, JusmailTown_Gym_Text_Trainer_JusmailGym_IasonDefeat
# 156 "data/maps/JusmailTown_Gym/scripts.pory"
	speakername JusmailTown_Gym_EventScript_Trainer_JusmailGym_Iason_Text_0
# 157 "data/maps/JusmailTown_Gym/scripts.pory"
	msgbox JusmailTown_Gym_EventScript_Trainer_JusmailGym_Iason_Text_1
# 158 "data/maps/JusmailTown_Gym/scripts.pory"
	closemessage
# 159 "data/maps/JusmailTown_Gym/scripts.pory"
	release
	end


JusmailTown_Gym_EventScript_Trainer_JusmailGym_Bryce::
# 173 "data/maps/JusmailTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUSMAILGYM_BRYCE, JusmailTown_Gym_Text_Trainer_JusmailGym_BryceIntro, JusmailTown_Gym_Text_Trainer_JusmailGym_BryceDefeat
# 174 "data/maps/JusmailTown_Gym/scripts.pory"
	speakername JusmailTown_Gym_EventScript_Trainer_JusmailGym_Bryce_Text_0
# 175 "data/maps/JusmailTown_Gym/scripts.pory"
	msgbox JusmailTown_Gym_EventScript_Trainer_JusmailGym_Bryce_Text_1
# 176 "data/maps/JusmailTown_Gym/scripts.pory"
	closemessage
# 177 "data/maps/JusmailTown_Gym/scripts.pory"
	release
	end


JusmailTown_Gym_EventScript_Trainer_JusmailGym_Adel::
# 191 "data/maps/JusmailTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUSMAILGYM_ADEL, JusmailTown_Gym_Text_Trainer_JusmailGym_AdelIntro, JusmailTown_Gym_Text_Trainer_JusmailGym_AdelDefeat
# 192 "data/maps/JusmailTown_Gym/scripts.pory"
	speakername JusmailTown_Gym_EventScript_Trainer_JusmailGym_Adel_Text_0
# 193 "data/maps/JusmailTown_Gym/scripts.pory"
	msgbox JusmailTown_Gym_EventScript_Trainer_JusmailGym_Adel_Text_1
# 194 "data/maps/JusmailTown_Gym/scripts.pory"
	closemessage
# 195 "data/maps/JusmailTown_Gym/scripts.pory"
	release
	end


JusmailTown_Gym_EventScript_GymStatue_Text_0:
# 8 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "Jusmail Town Pokémon Gym\p"
	.string "Recent Victors: {PLAYER}$"

JusmailTown_Gym_EventScript_GymStatue_Text_1:
# 12 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "Jusmail Town Pokémon Gym$"

JusmailTown_Gym_EventScript_GymMan_Text_0:
# 23 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "Gym Guide$"

JusmailTown_Gym_EventScript_GymMan_Text_1:
# 26 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "Incredible! You're a rising star! Keep it\n"
	.string "up, future Champ!$"

JusmailTown_Gym_EventScript_GymMan_Text_2:
# 30 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "Welcome to the Jusmail Town Gym!\p"
	.string "The Gym Leader, Polymnia, designed this\n"
	.string "building to be a home for her Grass and\l"
	.string "Bug-type Pokémon. It's becoming a bit\l"
	.string "of a maze!$"

JusmailTown_Gym_EventScript_Skiddo_Text_0:
# 41 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "Skiddo$"

JusmailTown_Gym_EventScript_Skiddo_Text_1:
# 43 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "Bwaa-ah!$"

JusmailTown_Gym_EventScript_Skiddo_Text_2:
# 46 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "Skiddo is excited to be challenged!$"

JusmailTown_Gym_EventScript_Polymnia_NormalDifficulty_Text_0:
# 71 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "Polymnia$"

JusmailTown_Gym_EventScript_Polymnia_NormalDifficulty_Text_1:
# 72 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "Skiddo and I are most comfortable here\n"
	.string "in Jusmail Town. The world can be scary,\l"
	.string "so it's best to find somewhere you love\l"
	.string "and put down your roots.$"

JusmailTown_Gym_EventScript_Polymnia_DefeatedScript_Text_0:
# 98 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "{PLAYER} received the Harvest Badge\n"
	.string "from Polymnia.$"

JusmailTown_Gym_EventScript_Polymnia_DefeatedScript_Text_1:
# 115 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "The Harvest Badge is a sign of an\n"
	.string "up-and-coming trainer. You've proven\l"
	.string "that you can form a close bond with\l"
	.string "your Pokémon. You'll also be able to use\l"
	.string "the {COLOR GREEN}HM Cut{COLOR DARK_GRAY} outside of battle.\p"
	.string "Ah, how forgetful of me! Take this\n"
	.string "before you go!$"

JusmailTown_Gym_EventScript_Polymnia_DefeatedScript_Text_2:
# 121 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "That TM contains the move {COLOR GREEN}Bullet Seed{COLOR DARK_GRAY}!\n"
	.string "That's a move my Pokémon practiced by\l"
	.string "shooting seeds from the farms around\l"
	.string "here.\p"
	.string "You're an Acrisia University researcher,\n"
	.string "yes? You should {COLOR GREEN}return to the\l"
	.string "University{COLOR DARK_GRAY} and {COLOR GREEN}speak to the Professor{COLOR DARK_GRAY}\l"
	.string "about what to do next.$"

JusmailTown_Gym_EventScript_Trainer_JusmailGym_Kari_Text_0:
# 138 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "Kari$"

JusmailTown_Gym_EventScript_Trainer_JusmailGym_Kari_Text_1:
# 139 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "The fruits on these trees are so yummy!$"

JusmailTown_Gym_EventScript_Trainer_JusmailGym_Iason_Text_0:
# 156 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "Iason$"

JusmailTown_Gym_EventScript_Trainer_JusmailGym_Iason_Text_1:
# 157 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "My Pokémon help maintain the plants in\n"
	.string "this building.$"

JusmailTown_Gym_EventScript_Trainer_JusmailGym_Bryce_Text_0:
# 174 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "Bryce$"

JusmailTown_Gym_EventScript_Trainer_JusmailGym_Bryce_Text_1:
# 175 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "Looking for bugs is making me tired...$"

JusmailTown_Gym_EventScript_Trainer_JusmailGym_Adel_Text_0:
# 192 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "Adel$"

JusmailTown_Gym_EventScript_Trainer_JusmailGym_Adel_Text_1:
# 193 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "I guess using Grass-type Pokémon in\n"
	.string "the Grass-type Gym made me a little\l"
	.string "predictable.$"

JusmailTown_Gym_Text_PolymniaIntro::
# 86 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "Welcome, welcome! I'm Polymnia, Muse of\n"
	.string "Hymns and Agriculture. I see this is\l"
	.string "your first Gym Battle, hm? Wonderful!\p"
	.string "My Pokémon are all caught and raised on\n"
	.string "farms around the Ilios Region. Think\l"
	.string "you can beat them?$"

JusmailTown_Gym_Text_PolymniaDefeat::
# 90 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "Your battling is as moving as a hymn.\n"
	.string "You've earned your first Badge!$"

JusmailTown_Gym_Text_Trainer_JusmailGym_KariIntro::
# 144 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "I like it better in here than outside.\n"
	.string "It's temperature-controlled inside!$"

JusmailTown_Gym_Text_Trainer_JusmailGym_KariDefeat::
# 148 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "Guess I should've trained outside\n"
	.string "more...$"

JusmailTown_Gym_Text_Trainer_JusmailGym_IasonIntro::
# 162 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "I planted some of these trees. Try the\n"
	.string "fruit!$"

JusmailTown_Gym_Text_Trainer_JusmailGym_IasonDefeat::
# 166 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "You might be able to beat Polymnia!$"

JusmailTown_Gym_Text_Trainer_JusmailGym_BryceIntro::
# 180 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "There are some bugs hiding in the trees\n"
	.string "around here... come on out, little bugs!$"

JusmailTown_Gym_Text_Trainer_JusmailGym_BryceDefeat::
# 184 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "Rats! You scared all the bugs away.$"

JusmailTown_Gym_Text_Trainer_JusmailGym_AdelIntro::
# 198 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "I'm training to take on the Pokémon Gym\n"
	.string "challenge. Help me get stronger!$"

JusmailTown_Gym_Text_Trainer_JusmailGym_AdelDefeat::
# 202 "data/maps/JusmailTown_Gym/scripts.pory"
	.string "I'll keep your strategies in mind.$"

MyrriniIsland_Gym_MapScripts::
	.byte 0


MyrriniIsland_Gym_EventScript_GymStatue::
# 5 "data/maps/MyrriniIsland_Gym/scripts.pory"
	lock
# 6 "data/maps/MyrriniIsland_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MyrriniIsland_Gym_EventScript_GymStatue_2
# 12 "data/maps/MyrriniIsland_Gym/scripts.pory"
	msgbox MyrriniIsland_Gym_EventScript_GymStatue_Text_1
MyrriniIsland_Gym_EventScript_GymStatue_1:
# 14 "data/maps/MyrriniIsland_Gym/scripts.pory"
	closemessage
# 15 "data/maps/MyrriniIsland_Gym/scripts.pory"
	release
	end

MyrriniIsland_Gym_EventScript_GymStatue_2:
# 8 "data/maps/MyrriniIsland_Gym/scripts.pory"
	msgbox MyrriniIsland_Gym_EventScript_GymStatue_Text_0
	goto MyrriniIsland_Gym_EventScript_GymStatue_1


MyrriniIsland_Gym_EventScript_GymMan::
# 21 "data/maps/MyrriniIsland_Gym/scripts.pory"
	lock
# 22 "data/maps/MyrriniIsland_Gym/scripts.pory"
	faceplayer
# 23 "data/maps/MyrriniIsland_Gym/scripts.pory"
	speakername MyrriniIsland_Gym_EventScript_GymMan_Text_0
# 24 "data/maps/MyrriniIsland_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MyrriniIsland_Gym_EventScript_GymMan_2
# 30 "data/maps/MyrriniIsland_Gym/scripts.pory"
	msgbox MyrriniIsland_Gym_EventScript_GymMan_Text_2
MyrriniIsland_Gym_EventScript_GymMan_1:
# 32 "data/maps/MyrriniIsland_Gym/scripts.pory"
	closemessage
# 33 "data/maps/MyrriniIsland_Gym/scripts.pory"
	release
	end

MyrriniIsland_Gym_EventScript_GymMan_2:
# 26 "data/maps/MyrriniIsland_Gym/scripts.pory"
	msgbox MyrriniIsland_Gym_EventScript_GymMan_Text_1
	goto MyrriniIsland_Gym_EventScript_GymMan_1


MyrriniIsland_Gym_EventScript_Tentacruel::
# 39 "data/maps/MyrriniIsland_Gym/scripts.pory"
	lock
# 40 "data/maps/MyrriniIsland_Gym/scripts.pory"
	faceplayer
# 41 "data/maps/MyrriniIsland_Gym/scripts.pory"
	speakername MyrriniIsland_Gym_EventScript_Tentacruel_Text_0
# 42 "data/maps/MyrriniIsland_Gym/scripts.pory"
	playmoncry SPECIES_TENTACRUEL, CRY_MODE_NORMAL
# 43 "data/maps/MyrriniIsland_Gym/scripts.pory"
	msgbox MyrriniIsland_Gym_EventScript_Tentacruel_Text_1
# 44 "data/maps/MyrriniIsland_Gym/scripts.pory"
	waitmoncry
# 45 "data/maps/MyrriniIsland_Gym/scripts.pory"
	closemessage
# 46 "data/maps/MyrriniIsland_Gym/scripts.pory"
	msgbox MyrriniIsland_Gym_EventScript_Tentacruel_Text_2
# 47 "data/maps/MyrriniIsland_Gym/scripts.pory"
	closemessage
# 48 "data/maps/MyrriniIsland_Gym/scripts.pory"
	release
	end


MyrriniIsland_Gym_EventScript_Trainer_MyrriniGym_Hailey::
# 54 "data/maps/MyrriniIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_MYRRINIGYM_HAILEY, MyrriniIsland_Gym_Text_Trainer_MyrriniGym_HaileyIntro, MyrriniIsland_Gym_Text_Trainer_MyrriniGym_HaileyDefeat
# 55 "data/maps/MyrriniIsland_Gym/scripts.pory"
	speakername MyrriniIsland_Gym_EventScript_Trainer_MyrriniGym_Hailey_Text_0
# 56 "data/maps/MyrriniIsland_Gym/scripts.pory"
	msgbox MyrriniIsland_Gym_EventScript_Trainer_MyrriniGym_Hailey_Text_1
# 57 "data/maps/MyrriniIsland_Gym/scripts.pory"
	closemessage
# 58 "data/maps/MyrriniIsland_Gym/scripts.pory"
	release
	end


MyrriniIsland_Gym_EventScript_Trainer_MyrriniGym_Tasos::
# 72 "data/maps/MyrriniIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_MYRRINIGYM_TASOS, MyrriniIsland_Gym_Text_Trainer_MyrriniGym_TasosIntro, MyrriniIsland_Gym_Text_Trainer_MyrriniGym_TasosDefeat
# 73 "data/maps/MyrriniIsland_Gym/scripts.pory"
	speakername MyrriniIsland_Gym_EventScript_Trainer_MyrriniGym_Tasos_Text_0
# 74 "data/maps/MyrriniIsland_Gym/scripts.pory"
	msgbox MyrriniIsland_Gym_EventScript_Trainer_MyrriniGym_Tasos_Text_1
# 75 "data/maps/MyrriniIsland_Gym/scripts.pory"
	closemessage
# 76 "data/maps/MyrriniIsland_Gym/scripts.pory"
	release
	end


MyrriniIsland_Gym_EventScript_Trainer_MyrriniGym_Remigio::
# 90 "data/maps/MyrriniIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_MYRRINIGYM_REMIGIO, MyrriniIsland_Gym_Text_Trainer_MyrriniGym_RemigioIntro, MyrriniIsland_Gym_Text_Trainer_MyrriniGym_RemigioDefeat
# 91 "data/maps/MyrriniIsland_Gym/scripts.pory"
	speakername MyrriniIsland_Gym_EventScript_Trainer_MyrriniGym_Remigio_Text_0
# 92 "data/maps/MyrriniIsland_Gym/scripts.pory"
	msgbox MyrriniIsland_Gym_EventScript_Trainer_MyrriniGym_Remigio_Text_1
# 93 "data/maps/MyrriniIsland_Gym/scripts.pory"
	closemessage
# 94 "data/maps/MyrriniIsland_Gym/scripts.pory"
	release
	end


MyrriniIsland_Gym_EventScript_Trainer_MyrriniGym_Alma::
# 108 "data/maps/MyrriniIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_MYRRINIGYM_ALMA, MyrriniIsland_Gym_Text_Trainer_MyrriniGym_AlmaIntro, MyrriniIsland_Gym_Text_Trainer_MyrriniGym_AlmaDefeat
# 109 "data/maps/MyrriniIsland_Gym/scripts.pory"
	speakername MyrriniIsland_Gym_EventScript_Trainer_MyrriniGym_Alma_Text_0
# 110 "data/maps/MyrriniIsland_Gym/scripts.pory"
	msgbox MyrriniIsland_Gym_EventScript_Trainer_MyrriniGym_Alma_Text_1
# 111 "data/maps/MyrriniIsland_Gym/scripts.pory"
	closemessage
# 112 "data/maps/MyrriniIsland_Gym/scripts.pory"
	release
	end


MyrriniIsland_Gym_EventScript_Euterpe::
# 128 "data/maps/MyrriniIsland_Gym/scripts.pory"
	lock
# 129 "data/maps/MyrriniIsland_Gym/scripts.pory"
	faceplayer
# 130 "data/maps/MyrriniIsland_Gym/scripts.pory"
	goto_if_unset FLAG_HARD_MODE, MyrriniIsland_Gym_EventScript_Euterpe_2
# 136 "data/maps/MyrriniIsland_Gym/scripts.pory"
	goto MyrriniIsland_Gym_EventScript_Euterpe_HardDifficulty
MyrriniIsland_Gym_EventScript_Euterpe_1:
# 138 "data/maps/MyrriniIsland_Gym/scripts.pory"
	release
	end

MyrriniIsland_Gym_EventScript_Euterpe_2:
# 132 "data/maps/MyrriniIsland_Gym/scripts.pory"
	goto MyrriniIsland_Gym_EventScript_Euterpe_NormalDifficulty
	goto MyrriniIsland_Gym_EventScript_Euterpe_1


MyrriniIsland_Gym_EventScript_Euterpe_NormalDifficulty::
# 144 "data/maps/MyrriniIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_EUTERPE, MyrriniIsland_Gym_Text_EuterpeIntro, MyrriniIsland_Gym_Text_EuterpeDefeat, MyrriniIsland_Gym_EventScript_Euterpe_DefeatedScript, NO_MUSIC
# 145 "data/maps/MyrriniIsland_Gym/scripts.pory"
	speakername MyrriniIsland_Gym_EventScript_Euterpe_NormalDifficulty_Text_0
# 146 "data/maps/MyrriniIsland_Gym/scripts.pory"
	msgbox MyrriniIsland_Gym_EventScript_Euterpe_NormalDifficulty_Text_1
# 147 "data/maps/MyrriniIsland_Gym/scripts.pory"
	closemessage
# 148 "data/maps/MyrriniIsland_Gym/scripts.pory"
	release
	end


MyrriniIsland_Gym_EventScript_Euterpe_HardDifficulty::
# 153 "data/maps/MyrriniIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_EUTERPE_HARD, MyrriniIsland_Gym_Text_EuterpeIntro, MyrriniIsland_Gym_Text_EuterpeDefeat, MyrriniIsland_Gym_EventScript_Euterpe_DefeatedScript, NO_MUSIC
# 154 "data/maps/MyrriniIsland_Gym/scripts.pory"
	speakername MyrriniIsland_Gym_EventScript_Euterpe_NormalDifficulty_Text_0
# 155 "data/maps/MyrriniIsland_Gym/scripts.pory"
	msgbox MyrriniIsland_Gym_EventScript_Euterpe_NormalDifficulty_Text_1
# 156 "data/maps/MyrriniIsland_Gym/scripts.pory"
	closemessage
# 157 "data/maps/MyrriniIsland_Gym/scripts.pory"
	release
	end


MyrriniIsland_Gym_EventScript_Euterpe_DefeatedScript::
# 171 "data/maps/MyrriniIsland_Gym/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 172 "data/maps/MyrriniIsland_Gym/scripts.pory"
	message MyrriniIsland_Gym_EventScript_Euterpe_DefeatedScript_Text_0
# 173 "data/maps/MyrriniIsland_Gym/scripts.pory"
	waitmessage
# 174 "data/maps/MyrriniIsland_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 177 "data/maps/MyrriniIsland_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 179 "data/maps/MyrriniIsland_Gym/scripts.pory"
	settrainerflag TRAINER_MYRRINIGYM_HAILEY
# 180 "data/maps/MyrriniIsland_Gym/scripts.pory"
	settrainerflag TRAINER_MYRRINIGYM_TASOS
# 181 "data/maps/MyrriniIsland_Gym/scripts.pory"
	settrainerflag TRAINER_MYRRINIGYM_REMIGIO
# 182 "data/maps/MyrriniIsland_Gym/scripts.pory"
	settrainerflag TRAINER_MYRRINIGYM_ALMA
# 185 "data/maps/MyrriniIsland_Gym/scripts.pory"
	speakername MyrriniIsland_Gym_EventScript_Euterpe_NormalDifficulty_Text_0
# 186 "data/maps/MyrriniIsland_Gym/scripts.pory"
	msgbox MyrriniIsland_Gym_EventScript_Euterpe_DefeatedScript_Text_1
# 187 "data/maps/MyrriniIsland_Gym/scripts.pory"
	closemessage
# 190 "data/maps/MyrriniIsland_Gym/scripts.pory"
	giveitem ITEM_TM_ACID_SPRAY
# 191 "data/maps/MyrriniIsland_Gym/scripts.pory"
	speakername MyrriniIsland_Gym_EventScript_Euterpe_NormalDifficulty_Text_0
# 192 "data/maps/MyrriniIsland_Gym/scripts.pory"
	msgbox MyrriniIsland_Gym_EventScript_Euterpe_DefeatedScript_Text_2
# 193 "data/maps/MyrriniIsland_Gym/scripts.pory"
	closemessage
# 196 "data/maps/MyrriniIsland_Gym/scripts.pory"
	delay 20
# 197 "data/maps/MyrriniIsland_Gym/scripts.pory"
	completequest QUEST_GYM_5
# 198 "data/maps/MyrriniIsland_Gym/scripts.pory"
	delay 20
# 199 "data/maps/MyrriniIsland_Gym/scripts.pory"
	startquest QUEST_GYM_6
# 202 "data/maps/MyrriniIsland_Gym/scripts.pory"
	setvar VAR_NIKO_STATE, 9
# 203 "data/maps/MyrriniIsland_Gym/scripts.pory"
	setvar VAR_RANIA_STATE, 9
# 204 "data/maps/MyrriniIsland_Gym/scripts.pory"
	clearflag FLAG_HIDE_CHIMERA_EVENT_MYRRINI_ISLAND
# 206 "data/maps/MyrriniIsland_Gym/scripts.pory"
	release
	end


MyrriniIsland_Gym_EventScript_GymStatue_Text_0:
# 8 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "Myrrini Island Pokémon Gym\p"
	.string "Recent Victors: Rania, {PLAYER}$"

MyrriniIsland_Gym_EventScript_GymStatue_Text_1:
# 12 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "Myrrini Island Pokémon Gym\p"
	.string "Recent Victors: Rania$"

MyrriniIsland_Gym_EventScript_GymMan_Text_0:
# 23 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "Gym Guide$"

MyrriniIsland_Gym_EventScript_GymMan_Text_1:
# 26 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "Incredible! You're a rising star! Keep it\n"
	.string "up, future Champ!$"

MyrriniIsland_Gym_EventScript_GymMan_Text_2:
# 30 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "Welcome to the Myrrini Island Gym!\p"
	.string "The Gym Leader you'll be facing is\n"
	.string "Euterpe, the Muse of Parties and\l"
	.string "Poisons. Naturally, she uses\l"
	.string "{COLOR GREEN}Poison-type{COLOR DARK_GRAY} Pokémon and {COLOR GREEN}Status\l"
	.string "conditions{COLOR DARK_GRAY} to her advantage. Make sure\l"
	.string "to stock up on status-healing items!$"

MyrriniIsland_Gym_EventScript_Tentacruel_Text_0:
# 41 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "Tentacruel$"

MyrriniIsland_Gym_EventScript_Tentacruel_Text_1:
# 43 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "Blurble!$"

MyrriniIsland_Gym_EventScript_Tentacruel_Text_2:
# 46 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "Tentacruel looks intimidating, but you\n"
	.string "can tell it's actually playful. Euterpe\l"
	.string "even has toys for it to play with!$"

MyrriniIsland_Gym_EventScript_Trainer_MyrriniGym_Hailey_Text_0:
# 55 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "Hailey$"

MyrriniIsland_Gym_EventScript_Trainer_MyrriniGym_Hailey_Text_1:
# 56 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "There's enough food, wine, and juice in\n"
	.string "here to last a lifetime. Of course, with\l"
	.string "the parties Euterpe throws, it might\l"
	.string "only last a week!$"

MyrriniIsland_Gym_EventScript_Trainer_MyrriniGym_Tasos_Text_0:
# 73 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "Tasos$"

MyrriniIsland_Gym_EventScript_Trainer_MyrriniGym_Tasos_Text_1:
# 74 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "Even though my party spirit is up, I\n"
	.string "can't help but admit... it's so messy in\l"
	.string "this building!$"

MyrriniIsland_Gym_EventScript_Trainer_MyrriniGym_Remigio_Text_0:
# 91 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "Remigio$"

MyrriniIsland_Gym_EventScript_Trainer_MyrriniGym_Remigio_Text_1:
# 92 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "I help ship barrels of Myrrini wine\n"
	.string "across the world. If I take a sample\l"
	.string "here and there, who can blame me?$"

MyrriniIsland_Gym_EventScript_Trainer_MyrriniGym_Alma_Text_0:
# 109 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "Alma$"

MyrriniIsland_Gym_EventScript_Trainer_MyrriniGym_Alma_Text_1:
# 110 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "Honestly, I've always been a better\n"
	.string "singer than a Trainer.$"

MyrriniIsland_Gym_EventScript_Euterpe_NormalDifficulty_Text_0:
# 145 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "Euterpe$"

MyrriniIsland_Gym_EventScript_Euterpe_NormalDifficulty_Text_1:
# 146 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "Looks like I have some competition as\n"
	.string "Muse of Parties, {PLAYER}!$"

MyrriniIsland_Gym_EventScript_Euterpe_DefeatedScript_Text_0:
# 172 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "{PLAYER} received the Festival Badge\n"
	.string "from Euterpe.$"

MyrriniIsland_Gym_EventScript_Euterpe_DefeatedScript_Text_1:
# 186 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "The Festival Badge looks great on you!\n"
	.string "People around Ilios will recognize it as\l"
	.string "a symbol of strength and skill. You'll\l"
	.string "also be able to use the {COLOR GREEN}HM Dive{COLOR DARK_GRAY} outside\l"
	.string "of battle.\p"
	.string "Woah, hey, I almost forgot in the\n"
	.string "excitement - take this!$"

MyrriniIsland_Gym_EventScript_Euterpe_DefeatedScript_Text_2:
# 192 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "That TM contains the move {COLOR GREEN}Acid Spray{COLOR DARK_GRAY}.\n"
	.string "It's a bit weak by itself, but combined\l"
	.string "with the Special Defense drops it\l"
	.string "causes, it can get painful fast!\p"
	.string "You've got a few options ahead of you.\n"
	.string "You could sail north to {COLOR GREEN}Péntepetal City{COLOR DARK_GRAY}\l"
	.string "and try out Pokémon Contests, or you\l"
	.string "can head southeast to the {COLOR GREEN}Fresco Isles{COLOR DARK_GRAY}\l"
	.string "for the next Gym. Either way, remember\l"
	.string "to have fun!$"

MyrriniIsland_Gym_Text_Trainer_MyrriniGym_HaileyIntro::
# 61 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "Ehehe, welcome to the party-prep hall!\n"
	.string "We've got food and drinks to share!$"

MyrriniIsland_Gym_Text_Trainer_MyrriniGym_HaileyDefeat::
# 65 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "Aren't you interested?$"

MyrriniIsland_Gym_Text_Trainer_MyrriniGym_TasosIntro::
# 79 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "I've been working hard for months on\n"
	.string "art projects. It's time to let loose for\l"
	.string "a change!$"

MyrriniIsland_Gym_Text_Trainer_MyrriniGym_TasosDefeat::
# 83 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "Losing can't bring me down!$"

MyrriniIsland_Gym_Text_Trainer_MyrriniGym_RemigioIntro::
# 97 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "I've traveled around the world. I can\n"
	.string "say that Myrrini Island has the best\l"
	.string "parties!$"

MyrriniIsland_Gym_Text_Trainer_MyrriniGym_RemigioDefeat::
# 101 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "Now the party's starting!$"

MyrriniIsland_Gym_Text_Trainer_MyrriniGym_AlmaIntro::
# 115 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "Euterpe hired me to perform. Get ready\n"
	.string "for this!$"

MyrriniIsland_Gym_Text_Trainer_MyrriniGym_AlmaDefeat::
# 119 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "It's already over?!$"

MyrriniIsland_Gym_Text_EuterpeIntro::
# 160 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "Opa, opa! A Trainer's finally reached me!\p"
	.string "I'm Euterpe, Muse of Parties, Poisons,\n"
	.string "and this Gym. It's been so long since a\l"
	.string "worthy Trainer has battled me, I've\l"
	.string "started to get bored. Come on, show me\l"
	.string "how you party!$"

MyrriniIsland_Gym_Text_EuterpeDefeat::
# 164 "data/maps/MyrriniIsland_Gym/scripts.pory"
	.string "Ahaha, perfect! I'm truly entertained!$"

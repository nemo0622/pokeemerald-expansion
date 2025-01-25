PythiosCemetery_MapScripts::
# 2 "data/maps/PythiosCemetery/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PythiosCemetery_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PythiosCemetery_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PythiosCemetery/scripts.pory"
	setflashlevel 4
	return


PythiosCemetery_EventScript_Linoone::
# 9 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 10 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 11 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Linoone_Text_0
# 12 "data/maps/PythiosCemetery/scripts.pory"
	playmoncry SPECIES_LINOONE_GALARIAN, CRY_MODE_NORMAL
# 13 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Linoone_Text_1
# 14 "data/maps/PythiosCemetery/scripts.pory"
	waitmoncry
# 15 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 16 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1::
# 22 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_CHIMERA_GRUNT_1, PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt1Intro, PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt1Defeat
# 23 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_0
# 24 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_1
# 25 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 26 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt2::
# 40 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_CHIMERA_GRUNT_2, PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt2Intro, PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt2Defeat
# 41 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_0
# 42 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt2_Text_0
# 43 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 44 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin::
# 58 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 59 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 60 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_0
# 61 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_1
# 62 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 63 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_no_intro TRAINER_PYTHIOSCEMETERY_CHIMERA_ADMIN, PythiosCemetery_Text_Trainer_PythiosCemetery_AdminDefeat
# 65 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 66 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 67 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_0
# 68 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_2
# 69 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 70 "data/maps/PythiosCemetery/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 71 "data/maps/PythiosCemetery/scripts.pory"
	delay 30
# 72 "data/maps/PythiosCemetery/scripts.pory"
	removeobject 4
# 73 "data/maps/PythiosCemetery/scripts.pory"
	removeobject 5
# 74 "data/maps/PythiosCemetery/scripts.pory"
	removeobject 6
# 75 "data/maps/PythiosCemetery/scripts.pory"
	removeobject 7
# 76 "data/maps/PythiosCemetery/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 77 "data/maps/PythiosCemetery/scripts.pory"
	delay 30
# 78 "data/maps/PythiosCemetery/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 79 "data/maps/PythiosCemetery/scripts.pory"
	delay 20
# 80 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_3
# 81 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 82 "data/maps/PythiosCemetery/scripts.pory"
	giveitem ITEM_HM_FLASH
# 83 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Artist::
# 93 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 94 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 95 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Artist_Text_0
# 96 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Artist_Text_1
# 97 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 98 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria::
# 104 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_MARIA, PythiosCemetery_Text_Trainer_PythiosCemetery_MariaIntro, PythiosCemetery_Text_Trainer_PythiosCemetery_MariaDefeat
# 105 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria_Text_0
# 106 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria_Text_1
# 107 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 108 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos::
# 122 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_ARKOS, PythiosCemetery_Text_Trainer_PythiosCemetery_ArkosIntro, PythiosCemetery_Text_Trainer_PythiosCemetery_ArkosDefeat
# 123 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos_Text_0
# 124 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos_Text_1
# 125 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 126 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Galei::
# 140 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_GALEI, PythiosCemetery_Text_Trainer_PythiosCemetery_GaleiIntro, PythiosCemetery_Text_Trainer_PythiosCemetery_GaleiDefeat
# 141 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Galei_Text_0
# 142 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos_Text_1
# 143 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 144 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_OldWoman::
# 158 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 159 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 160 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_OldWoman_Text_0
# 161 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_OldWoman_Text_1
# 162 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 163 "data/maps/PythiosCemetery/scripts.pory"
	applymovement 12, Common_Movement_FaceUp
# 164 "data/maps/PythiosCemetery/scripts.pory"
	waitmovement 0
# 165 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Linoone_Text_0:
# 11 "data/maps/PythiosCemetery/scripts.pory"
	.string "Linoone$"

PythiosCemetery_EventScript_Linoone_Text_1:
# 13 "data/maps/PythiosCemetery/scripts.pory"
	.string "Hissss!$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_0:
# 23 "data/maps/PythiosCemetery/scripts.pory"
	.string "Grunt$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_1:
# 24 "data/maps/PythiosCemetery/scripts.pory"
	.string "Look, just leave and don't cause\n"
	.string "trouble.$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt2_Text_0:
# 42 "data/maps/PythiosCemetery/scripts.pory"
	.string "I hope the Admin didn't see me lose like\n"
	.string "that.$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_0:
# 60 "data/maps/PythiosCemetery/scripts.pory"
	.string "Chimera Admin$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_1:
# 61 "data/maps/PythiosCemetery/scripts.pory"
	.string "Wh-what? How did you reach us? I\n"
	.string "thought that we were the only ones who\l"
	.string "could get through the Cemetery, thanks\l"
	.string "to our {COLOR GREEN}Flash HM{COLOR DARK_GRAY}.\p"
	.string "No matter. I'd recognize the Trainer\n"
	.string "messing up our plans anywhere, even in\l"
	.string "the dark. I'll stop you, here and now!$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_2:
# 68 "data/maps/PythiosCemetery/scripts.pory"
	.string "Eek! We'd better scram!$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_3:
# 80 "data/maps/PythiosCemetery/scripts.pory"
	.string "The Team Chimera members dropped\n"
	.string "something while they ran...$"

PythiosCemetery_EventScript_Artist_Text_0:
# 95 "data/maps/PythiosCemetery/scripts.pory"
	.string "Artist$"

PythiosCemetery_EventScript_Artist_Text_1:
# 96 "data/maps/PythiosCemetery/scripts.pory"
	.string "I'd love to make paintings of the\n"
	.string "Pythios Cemetery, but it's so dark and\l"
	.string "rainy that I can't see!$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria_Text_0:
# 105 "data/maps/PythiosCemetery/scripts.pory"
	.string "Maria$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria_Text_1:
# 106 "data/maps/PythiosCemetery/scripts.pory"
	.string "I wonder if there are new, cute Pokémon\n"
	.string "to catch here.$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos_Text_0:
# 123 "data/maps/PythiosCemetery/scripts.pory"
	.string "Arkos$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos_Text_1:
# 124 "data/maps/PythiosCemetery/scripts.pory"
	.string "That battle cheered me up a bit.$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Galei_Text_0:
# 141 "data/maps/PythiosCemetery/scripts.pory"
	.string "Galei$"

PythiosCemetery_EventScript_OldWoman_Text_0:
# 160 "data/maps/PythiosCemetery/scripts.pory"
	.string "Old Woman$"

PythiosCemetery_EventScript_OldWoman_Text_1:
# 161 "data/maps/PythiosCemetery/scripts.pory"
	.string "People tend to stay away from\n"
	.string "cemeteries, so the graves fall into\l"
	.string "ruin. I'm trying to clean some of them\l"
	.string "up.$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt1Intro::
# 29 "data/maps/PythiosCemetery/scripts.pory"
	.string "Hey, you! This is our private Team\n"
	.string "Chimera meeting spot!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt1Defeat::
# 33 "data/maps/PythiosCemetery/scripts.pory"
	.string "Darn, we might get cleaned out!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt2Intro::
# 47 "data/maps/PythiosCemetery/scripts.pory"
	.string "You'll never reach the Admin!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt2Defeat::
# 51 "data/maps/PythiosCemetery/scripts.pory"
	.string "Okay, you might reach the Admin...$"

PythiosCemetery_Text_Trainer_PythiosCemetery_AdminDefeat::
# 86 "data/maps/PythiosCemetery/scripts.pory"
	.string "Uh oh, this isn't good...!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_MariaIntro::
# 111 "data/maps/PythiosCemetery/scripts.pory"
	.string "My poor Pokémon are getting lost in\n"
	.string "this darkness!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_MariaDefeat::
# 115 "data/maps/PythiosCemetery/scripts.pory"
	.string "Where'd they go?$"

PythiosCemetery_Text_Trainer_PythiosCemetery_ArkosIntro::
# 129 "data/maps/PythiosCemetery/scripts.pory"
	.string "I'm here to sulk...$"

PythiosCemetery_Text_Trainer_PythiosCemetery_ArkosDefeat::
# 133 "data/maps/PythiosCemetery/scripts.pory"
	.string "I can't even sulk in peace, huh?$"

PythiosCemetery_Text_Trainer_PythiosCemetery_GaleiIntro::
# 147 "data/maps/PythiosCemetery/scripts.pory"
	.string "I'm here to sulk...$"

PythiosCemetery_Text_Trainer_PythiosCemetery_GaleiDefeat::
# 151 "data/maps/PythiosCemetery/scripts.pory"
	.string "I can't even sulk in peace, huh?$"

PythiosCemetery_MapScripts::
# 2 "data/maps/PythiosCemetery/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PythiosCemetery_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PythiosCemetery_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PythiosCemetery/scripts.pory"
	setflashlevel 4
# 4 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 5 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 6 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 7 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 8 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 9 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 10 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 11 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 12 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 13 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 14 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 15 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 16 "data/maps/PythiosCemetery/scripts.pory"
	setobjectaswildencounter 13, ENCOUNTER_LAND
# 17 "data/maps/PythiosCemetery/scripts.pory"
	setobjectaswildencounter 14, ENCOUNTER_LAND
# 18 "data/maps/PythiosCemetery/scripts.pory"
	setobjectaswildencounter 15, ENCOUNTER_LAND
# 19 "data/maps/PythiosCemetery/scripts.pory"
	setobjectaswildencounter 16, ENCOUNTER_LAND
# 20 "data/maps/PythiosCemetery/scripts.pory"
	setobjectaswildencounter 17, ENCOUNTER_LAND
	return


PythiosCemetery_EventScript_Linoone::
# 26 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 27 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 28 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Linoone_Text_0
# 29 "data/maps/PythiosCemetery/scripts.pory"
	playmoncry SPECIES_LINOONE_GALARIAN, CRY_MODE_NORMAL
# 30 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Linoone_Text_1
# 31 "data/maps/PythiosCemetery/scripts.pory"
	waitmoncry
# 32 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 33 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1::
# 39 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_CHIMERA_GRUNT_1, PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt1Intro, PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt1Defeat
# 40 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_0
# 41 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_1
# 42 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 43 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt2::
# 57 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_CHIMERA_GRUNT_2, PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt2Intro, PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt2Defeat
# 58 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_0
# 59 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt2_Text_0
# 60 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 61 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin::
# 75 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 76 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 77 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_0
# 78 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_1
# 79 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 80 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_no_intro TRAINER_PYTHIOSCEMETERY_CHIMERA_ADMIN, PythiosCemetery_Text_Trainer_PythiosCemetery_AdminDefeat
# 82 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 83 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 84 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_0
# 85 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_2
# 86 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 87 "data/maps/PythiosCemetery/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 88 "data/maps/PythiosCemetery/scripts.pory"
	delay 30
# 89 "data/maps/PythiosCemetery/scripts.pory"
	removeobject 4
# 90 "data/maps/PythiosCemetery/scripts.pory"
	removeobject 5
# 91 "data/maps/PythiosCemetery/scripts.pory"
	removeobject 6
# 92 "data/maps/PythiosCemetery/scripts.pory"
	removeobject 7
# 93 "data/maps/PythiosCemetery/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 94 "data/maps/PythiosCemetery/scripts.pory"
	delay 30
# 95 "data/maps/PythiosCemetery/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 96 "data/maps/PythiosCemetery/scripts.pory"
	delay 20
# 97 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_3
# 98 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 99 "data/maps/PythiosCemetery/scripts.pory"
	giveitem ITEM_HM_FLASH
# 100 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Artist::
# 110 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 111 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 112 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Artist_Text_0
# 113 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Artist_Text_1
# 114 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 115 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria::
# 121 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_MARIA, PythiosCemetery_Text_Trainer_PythiosCemetery_MariaIntro, PythiosCemetery_Text_Trainer_PythiosCemetery_MariaDefeat
# 122 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria_Text_0
# 123 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria_Text_1
# 124 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 125 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos::
# 139 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_ARKOS, PythiosCemetery_Text_Trainer_PythiosCemetery_ArkosIntro, PythiosCemetery_Text_Trainer_PythiosCemetery_ArkosDefeat
# 140 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos_Text_0
# 141 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos_Text_1
# 142 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 143 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Galei::
# 157 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_GALEI, PythiosCemetery_Text_Trainer_PythiosCemetery_GaleiIntro, PythiosCemetery_Text_Trainer_PythiosCemetery_GaleiDefeat
# 158 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Galei_Text_0
# 159 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos_Text_1
# 160 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 161 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_OldWoman::
# 175 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 176 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 177 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_OldWoman_Text_0
# 178 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_OldWoman_Text_1
# 179 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 180 "data/maps/PythiosCemetery/scripts.pory"
	applymovement 12, Common_Movement_FaceUp
# 181 "data/maps/PythiosCemetery/scripts.pory"
	waitmovement 0
# 182 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Linoone_Text_0:
# 28 "data/maps/PythiosCemetery/scripts.pory"
	.string "Linoone$"

PythiosCemetery_EventScript_Linoone_Text_1:
# 30 "data/maps/PythiosCemetery/scripts.pory"
	.string "Hissss!$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_0:
# 40 "data/maps/PythiosCemetery/scripts.pory"
	.string "Grunt$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_1:
# 41 "data/maps/PythiosCemetery/scripts.pory"
	.string "Look, just leave and don't cause\n"
	.string "trouble.$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt2_Text_0:
# 59 "data/maps/PythiosCemetery/scripts.pory"
	.string "I hope the Admin didn't see me lose like\n"
	.string "that.$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_0:
# 77 "data/maps/PythiosCemetery/scripts.pory"
	.string "Chimera Admin$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_1:
# 78 "data/maps/PythiosCemetery/scripts.pory"
	.string "Wh-what? How did you reach us? I\n"
	.string "thought that we were the only ones who\l"
	.string "could get through the Cemetery, thanks\l"
	.string "to our {COLOR GREEN}Flash HM{COLOR DARK_GRAY}.\p"
	.string "No matter. I'd recognize the Trainer\n"
	.string "messing up our plans anywhere, even in\l"
	.string "the dark. I'll stop you, here and now!$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_2:
# 85 "data/maps/PythiosCemetery/scripts.pory"
	.string "Eek! We'd better scram!$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_3:
# 97 "data/maps/PythiosCemetery/scripts.pory"
	.string "The Team Chimera members dropped\n"
	.string "something while they ran...$"

PythiosCemetery_EventScript_Artist_Text_0:
# 112 "data/maps/PythiosCemetery/scripts.pory"
	.string "Artist$"

PythiosCemetery_EventScript_Artist_Text_1:
# 113 "data/maps/PythiosCemetery/scripts.pory"
	.string "I'd love to make paintings of the\n"
	.string "Pythios Cemetery, but it's so dark and\l"
	.string "rainy that I can't see!$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria_Text_0:
# 122 "data/maps/PythiosCemetery/scripts.pory"
	.string "Maria$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria_Text_1:
# 123 "data/maps/PythiosCemetery/scripts.pory"
	.string "I wonder if there are new, cute Pokémon\n"
	.string "to catch here.$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos_Text_0:
# 140 "data/maps/PythiosCemetery/scripts.pory"
	.string "Arkos$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos_Text_1:
# 141 "data/maps/PythiosCemetery/scripts.pory"
	.string "That battle cheered me up a bit.$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Galei_Text_0:
# 158 "data/maps/PythiosCemetery/scripts.pory"
	.string "Galei$"

PythiosCemetery_EventScript_OldWoman_Text_0:
# 177 "data/maps/PythiosCemetery/scripts.pory"
	.string "Old Woman$"

PythiosCemetery_EventScript_OldWoman_Text_1:
# 178 "data/maps/PythiosCemetery/scripts.pory"
	.string "People tend to stay away from\n"
	.string "cemeteries, so the graves fall into\l"
	.string "ruin. I'm trying to clean some of them\l"
	.string "up.$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt1Intro::
# 46 "data/maps/PythiosCemetery/scripts.pory"
	.string "Hey, you! This is our private Team\n"
	.string "Chimera meeting spot!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt1Defeat::
# 50 "data/maps/PythiosCemetery/scripts.pory"
	.string "Darn, we might get cleaned out!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt2Intro::
# 64 "data/maps/PythiosCemetery/scripts.pory"
	.string "You'll never reach the Admin!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt2Defeat::
# 68 "data/maps/PythiosCemetery/scripts.pory"
	.string "Okay, you might reach the Admin...$"

PythiosCemetery_Text_Trainer_PythiosCemetery_AdminDefeat::
# 103 "data/maps/PythiosCemetery/scripts.pory"
	.string "Uh oh, this isn't good...!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_MariaIntro::
# 128 "data/maps/PythiosCemetery/scripts.pory"
	.string "My poor Pokémon are getting lost in\n"
	.string "this darkness!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_MariaDefeat::
# 132 "data/maps/PythiosCemetery/scripts.pory"
	.string "Where'd they go?$"

PythiosCemetery_Text_Trainer_PythiosCemetery_ArkosIntro::
# 146 "data/maps/PythiosCemetery/scripts.pory"
	.string "I'm here to sulk...$"

PythiosCemetery_Text_Trainer_PythiosCemetery_ArkosDefeat::
# 150 "data/maps/PythiosCemetery/scripts.pory"
	.string "I can't even sulk in peace, huh?$"

PythiosCemetery_Text_Trainer_PythiosCemetery_GaleiIntro::
# 164 "data/maps/PythiosCemetery/scripts.pory"
	.string "I'm here to sulk...$"

PythiosCemetery_Text_Trainer_PythiosCemetery_GaleiDefeat::
# 168 "data/maps/PythiosCemetery/scripts.pory"
	.string "I can't even sulk in peace, huh?$"

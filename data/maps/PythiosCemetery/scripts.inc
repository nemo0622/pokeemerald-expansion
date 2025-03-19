PythiosCemetery_MapScripts::
# 2 "data/maps/PythiosCemetery/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PythiosCemetery_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PythiosCemetery_MapScripts_MAP_SCRIPT_ON_TRANSITION:
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
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_0
# 78 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_0
# 79 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 80 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_no_intro TRAINER_PYTHIOSCEMETERY_CHIMERA_GRUNT_3, PythiosCemetery_Text_Trainer_PythiosCemetery_AdminDefeat
# 82 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 83 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 84 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_0
# 85 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_1
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
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_2
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
	goto_if_unset FLAG_SHOWED_CEMETERY_LADY_SNOM, PythiosCemetery_EventScript_OldWoman_2
# 207 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_OldWoman_Text_4
# 208 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
PythiosCemetery_EventScript_OldWoman_1:
# 210 "data/maps/PythiosCemetery/scripts.pory"
	applymovement 12, Common_Movement_FaceUp
# 211 "data/maps/PythiosCemetery/scripts.pory"
	waitmovement 0
# 212 "data/maps/PythiosCemetery/scripts.pory"
	release
	end

PythiosCemetery_EventScript_OldWoman_2:
# 180 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_OldWoman_Text_1
# 181 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 183 "data/maps/PythiosCemetery/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_SNOM_ICE_STONE
# 184 "data/maps/PythiosCemetery/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PythiosCemetery_EventScript_OldWoman_5
# 191 "data/maps/PythiosCemetery/scripts.pory"
	getcaughtmon SPECIES_SNOM
# 192 "data/maps/PythiosCemetery/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PythiosCemetery_EventScript_OldWoman_8
	goto PythiosCemetery_EventScript_OldWoman_1

PythiosCemetery_EventScript_OldWoman_5:
# 186 "data/maps/PythiosCemetery/scripts.pory"
	delay 20
# 187 "data/maps/PythiosCemetery/scripts.pory"
	startquest QUEST_SNOM_ICE_STONE
	goto PythiosCemetery_EventScript_OldWoman_1

PythiosCemetery_EventScript_OldWoman_8:
# 194 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_OldWoman_Text_0
# 195 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_OldWoman_Text_2
# 196 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 197 "data/maps/PythiosCemetery/scripts.pory"
	checkforspecies SPECIES_SNOM, OPEN_PARTY_SCREEN, PythiosCemetery_EventScript_OldWoman_ReactToSnom
# 199 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_OldWoman_Text_0
# 200 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_OldWoman_Text_3
# 201 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
	goto PythiosCemetery_EventScript_OldWoman_1


PythiosCemetery_EventScript_OldWoman_ReactToSnom::
# 218 "data/maps/PythiosCemetery/scripts.pory"
	delay 20
# 219 "data/maps/PythiosCemetery/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 220 "data/maps/PythiosCemetery/scripts.pory"
	waitmovement 0
# 221 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_OldWoman_Text_0
# 222 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_OldWoman_ReactToSnom_Text_0
# 223 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 224 "data/maps/PythiosCemetery/scripts.pory"
	giveitem ITEM_ICE_STONE
# 225 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_OldWoman_Text_0
# 226 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_OldWoman_ReactToSnom_Text_1
# 227 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 228 "data/maps/PythiosCemetery/scripts.pory"
	setflag FLAG_SHOWED_CEMETERY_LADY_SNOM
# 230 "data/maps/PythiosCemetery/scripts.pory"
	delay 20
# 231 "data/maps/PythiosCemetery/scripts.pory"
	completequest QUEST_SNOM_ICE_STONE
# 233 "data/maps/PythiosCemetery/scripts.pory"
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
	.string "I hope the other Grunts didn't see me\n"
	.string "lose like that.$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_0:
# 78 "data/maps/PythiosCemetery/scripts.pory"
	.string "Wh-what? How did you reach us? I\n"
	.string "thought that we were the only ones who\l"
	.string "could get through the Cemetery, thanks\l"
	.string "to our {COLOR GREEN}Flash HM{COLOR DARK_GRAY}.\p"
	.string "No matter. I'd recognize the Trainer\n"
	.string "messing up our plans anywhere, even in\l"
	.string "the dark. I'll stop you, here and now!$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_1:
# 85 "data/maps/PythiosCemetery/scripts.pory"
	.string "Lazarus Taxa, the\n"
	.string "once-thought-extinct Pokémon\l"
	.string "species, coming back to the world is a\l"
	.string "sign. Change is coming, and only Team\l"
	.string "Chimera is strong enough to control it!$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_2:
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
	.string "rainy that my paint keeps running!$"

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
# 180 "data/maps/PythiosCemetery/scripts.pory"
	.string "People tend to stay away from\n"
	.string "cemeteries, so the graves fall into\l"
	.string "ruin. I'm trying to clean some of them\l"
	.string "up.\p"
	.string "There's an {COLOR GREEN}Ice-type Bug Pokémon{COLOR DARK_GRAY} that\n"
	.string "especially likes to creep around the\l"
	.string "graves {COLOR GREEN}at night{COLOR DARK_GRAY}. If you help catch one,\l"
	.string "let me know.$"

PythiosCemetery_EventScript_OldWoman_Text_2:
# 195 "data/maps/PythiosCemetery/scripts.pory"
	.string "I can see it on your face... have you\n"
	.string "found the Ice-type Bug for me?$"

PythiosCemetery_EventScript_OldWoman_Text_3:
# 200 "data/maps/PythiosCemetery/scripts.pory"
	.string "I suppose not. Bring me the Ice-type\n"
	.string "Bug Pokémon you've caught!$"

PythiosCemetery_EventScript_OldWoman_Text_4:
# 207 "data/maps/PythiosCemetery/scripts.pory"
	.string "Thank you for helping with my Snom\n"
	.string "problem, young Trainer. Now the Snom\l"
	.string "can go on an adventure with you, and I\l"
	.string "can be left to continue cleaning the\l"
	.string "area.$"

PythiosCemetery_EventScript_OldWoman_ReactToSnom_Text_0:
# 222 "data/maps/PythiosCemetery/scripts.pory"
	.string "A Snom! Ah, this makes sense!\p"
	.string "I found this strange, cold stone in the\n"
	.string "rocks nearby. Maybe this is what\l"
	.string "attracted the Snom!$"

PythiosCemetery_EventScript_OldWoman_ReactToSnom_Text_1:
# 226 "data/maps/PythiosCemetery/scripts.pory"
	.string "Snom living in the Ilios Region can\n"
	.string "evolve using an Ice Stone. Perhaps the\l"
	.string "Snom is looking for a life of adventure?$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt1Intro::
# 46 "data/maps/PythiosCemetery/scripts.pory"
	.string "Hey, you! This is our private Team\n"
	.string "Chimera meeting spot!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt1Defeat::
# 50 "data/maps/PythiosCemetery/scripts.pory"
	.string "Darn, we might get cleaned out!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt2Intro::
# 64 "data/maps/PythiosCemetery/scripts.pory"
	.string "You'll never reach the other Grunts!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt2Defeat::
# 68 "data/maps/PythiosCemetery/scripts.pory"
	.string "Okay, you might beat us...$"

PythiosCemetery_Text_Trainer_PythiosCemetery_AdminDefeat::
# 103 "data/maps/PythiosCemetery/scripts.pory"
	.string "No! The Pythios Cemetery was supposed\n"
	.string "to be our next new meeting ground!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_MariaIntro::
# 128 "data/maps/PythiosCemetery/scripts.pory"
	.string "My poor Pokémon are getting lost in the\n"
	.string "rainy weather!$"

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

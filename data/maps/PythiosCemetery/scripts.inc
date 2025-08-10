PythiosCemetery_MapScripts::
# 2 "data/maps/PythiosCemetery/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PythiosCemetery_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PythiosCemetery_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PythiosCemetery/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, PythiosCemetery_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
PythiosCemetery_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 10 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 11 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 12 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 13 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 14 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 15 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 16 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 17 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 18 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 19 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 20 "data/maps/PythiosCemetery/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 21 "data/maps/PythiosCemetery/scripts.pory"
	setobjectaswildencounter 13, ENCOUNTER_LAND
# 22 "data/maps/PythiosCemetery/scripts.pory"
	setobjectaswildencounter 14, ENCOUNTER_LAND
# 23 "data/maps/PythiosCemetery/scripts.pory"
	setobjectaswildencounter 15, ENCOUNTER_LAND
# 24 "data/maps/PythiosCemetery/scripts.pory"
	setobjectaswildencounter 16, ENCOUNTER_LAND
# 25 "data/maps/PythiosCemetery/scripts.pory"
	setobjectaswildencounter 17, ENCOUNTER_LAND
	return

PythiosCemetery_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/PythiosCemetery/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto PythiosCemetery_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


PythiosCemetery_EventScript_DirectionSign::
# 31 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 32 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_DirectionSign_Text_0
# 33 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 34 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Linoone::
# 40 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 41 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 42 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Linoone_Text_0
# 43 "data/maps/PythiosCemetery/scripts.pory"
	playmoncry SPECIES_LINOONE_GALARIAN, CRY_MODE_NORMAL
# 44 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Linoone_Text_1
# 45 "data/maps/PythiosCemetery/scripts.pory"
	waitmoncry
# 46 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 47 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1::
# 53 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_CHIMERA_GRUNT_1, PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt1Intro, PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt1Defeat
# 54 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_0
# 55 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_1
# 56 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 57 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt2::
# 71 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_CHIMERA_GRUNT_2, PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt2Intro, PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt2Defeat
# 72 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_0
# 73 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt2_Text_0
# 74 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 75 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin::
# 89 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 90 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 91 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_0
# 92 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_0
# 93 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 94 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_no_intro TRAINER_PYTHIOSCEMETERY_CHIMERA_GRUNT_3, PythiosCemetery_Text_Trainer_PythiosCemetery_AdminDefeat
# 96 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 97 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 98 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_0
# 99 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_1
# 100 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 101 "data/maps/PythiosCemetery/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 102 "data/maps/PythiosCemetery/scripts.pory"
	delay 30
# 103 "data/maps/PythiosCemetery/scripts.pory"
	removeobject 4
# 104 "data/maps/PythiosCemetery/scripts.pory"
	removeobject 5
# 105 "data/maps/PythiosCemetery/scripts.pory"
	removeobject 6
# 106 "data/maps/PythiosCemetery/scripts.pory"
	removeobject 7
# 107 "data/maps/PythiosCemetery/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 108 "data/maps/PythiosCemetery/scripts.pory"
	delay 30
# 109 "data/maps/PythiosCemetery/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 110 "data/maps/PythiosCemetery/scripts.pory"
	delay 20
# 111 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_2
# 112 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 113 "data/maps/PythiosCemetery/scripts.pory"
	giveitem ITEM_HM_FLASH
# 114 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Artist::
# 124 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 125 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 126 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Artist_Text_0
# 127 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Artist_Text_1
# 128 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 129 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria::
# 135 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_MARIA, PythiosCemetery_Text_Trainer_PythiosCemetery_MariaIntro, PythiosCemetery_Text_Trainer_PythiosCemetery_MariaDefeat
# 136 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria_Text_0
# 137 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria_Text_1
# 138 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 139 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos::
# 153 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_ARKOS, PythiosCemetery_Text_Trainer_PythiosCemetery_ArkosIntro, PythiosCemetery_Text_Trainer_PythiosCemetery_ArkosDefeat
# 154 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos_Text_0
# 155 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos_Text_1
# 156 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 157 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Galei::
# 171 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_GALEI, PythiosCemetery_Text_Trainer_PythiosCemetery_GaleiIntro, PythiosCemetery_Text_Trainer_PythiosCemetery_GaleiDefeat
# 172 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Galei_Text_0
# 173 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Galei_Text_1
# 174 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 175 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_OldWoman::
# 189 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 190 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 191 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_OldWoman_Text_0
# 192 "data/maps/PythiosCemetery/scripts.pory"
	goto_if_unset FLAG_SHOWED_CEMETERY_LADY_SNOM, PythiosCemetery_EventScript_OldWoman_2
# 221 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_OldWoman_Text_4
# 222 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
PythiosCemetery_EventScript_OldWoman_1:
# 224 "data/maps/PythiosCemetery/scripts.pory"
	applymovement 12, Common_Movement_FaceUp
# 225 "data/maps/PythiosCemetery/scripts.pory"
	waitmovement 0
# 226 "data/maps/PythiosCemetery/scripts.pory"
	release
	end

PythiosCemetery_EventScript_OldWoman_2:
# 194 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_OldWoman_Text_1
# 195 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 197 "data/maps/PythiosCemetery/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_SNOM_ICE_STONE
# 198 "data/maps/PythiosCemetery/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PythiosCemetery_EventScript_OldWoman_5
# 205 "data/maps/PythiosCemetery/scripts.pory"
	getcaughtmon SPECIES_SNOM
# 206 "data/maps/PythiosCemetery/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PythiosCemetery_EventScript_OldWoman_8
	goto PythiosCemetery_EventScript_OldWoman_1

PythiosCemetery_EventScript_OldWoman_5:
# 200 "data/maps/PythiosCemetery/scripts.pory"
	delay 20
# 201 "data/maps/PythiosCemetery/scripts.pory"
	startquest QUEST_SNOM_ICE_STONE
	goto PythiosCemetery_EventScript_OldWoman_1

PythiosCemetery_EventScript_OldWoman_8:
# 208 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_OldWoman_Text_0
# 209 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_OldWoman_Text_2
# 210 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 211 "data/maps/PythiosCemetery/scripts.pory"
	checkforspecies SPECIES_SNOM, OPEN_PARTY_SCREEN, PythiosCemetery_EventScript_OldWoman_ReactToSnom
# 213 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_OldWoman_Text_0
# 214 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_OldWoman_Text_3
# 215 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
	goto PythiosCemetery_EventScript_OldWoman_1


PythiosCemetery_EventScript_OldWoman_ReactToSnom::
# 232 "data/maps/PythiosCemetery/scripts.pory"
	delay 20
# 233 "data/maps/PythiosCemetery/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 234 "data/maps/PythiosCemetery/scripts.pory"
	waitmovement 0
# 235 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_OldWoman_Text_0
# 236 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_OldWoman_ReactToSnom_Text_0
# 237 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 238 "data/maps/PythiosCemetery/scripts.pory"
	giveitem ITEM_ICE_STONE
# 239 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_OldWoman_Text_0
# 240 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_OldWoman_ReactToSnom_Text_1
# 241 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 242 "data/maps/PythiosCemetery/scripts.pory"
	setflag FLAG_SHOWED_CEMETERY_LADY_SNOM
# 244 "data/maps/PythiosCemetery/scripts.pory"
	delay 20
# 245 "data/maps/PythiosCemetery/scripts.pory"
	completequest QUEST_SNOM_ICE_STONE
# 247 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_DirectionSign_Text_0:
# 32 "data/maps/PythiosCemetery/scripts.pory"
	.string "Pythios Cemetery\n"
	.string "The Resting Place of the West\p"
	.string "Pythios Town {RIGHT_ARROW}$"

PythiosCemetery_EventScript_Linoone_Text_0:
# 42 "data/maps/PythiosCemetery/scripts.pory"
	.string "Linoone$"

PythiosCemetery_EventScript_Linoone_Text_1:
# 44 "data/maps/PythiosCemetery/scripts.pory"
	.string "Hissss!$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_0:
# 54 "data/maps/PythiosCemetery/scripts.pory"
	.string "Grunt$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_1:
# 55 "data/maps/PythiosCemetery/scripts.pory"
	.string "Look, just leave and don't cause\n"
	.string "trouble.$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt2_Text_0:
# 73 "data/maps/PythiosCemetery/scripts.pory"
	.string "I hope the other Grunts didn't see me\n"
	.string "lose like that.$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_0:
# 92 "data/maps/PythiosCemetery/scripts.pory"
	.string "Wh-what? I thought those other Grunts\n"
	.string "would hold back any intruders! We were\l"
	.string "tasked with finding this {COLOR GREEN}Flash HM{COLOR DARK_GRAY} and\l"
	.string "bringing it to the Boss...\p"
	.string "No matter. I'd recognize the Trainer\n"
	.string "messing up our plans anywhere, even in\l"
	.string "the pouring rain. I'll stop you, here and\l"
	.string "now!$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_1:
# 99 "data/maps/PythiosCemetery/scripts.pory"
	.string "Darn it, we needed this plan to work!\n"
	.string "Lazarus Taxa, the\l"
	.string "once-thought-extinct Pokémon\l"
	.string "species, coming back to the world is a\l"
	.string "sign. Change is coming, and only Team\l"
	.string "Chimera is strong enough to control it!$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_2:
# 111 "data/maps/PythiosCemetery/scripts.pory"
	.string "The Team Chimera members dropped\n"
	.string "something while they ran...$"

PythiosCemetery_EventScript_Artist_Text_0:
# 126 "data/maps/PythiosCemetery/scripts.pory"
	.string "Artist$"

PythiosCemetery_EventScript_Artist_Text_1:
# 127 "data/maps/PythiosCemetery/scripts.pory"
	.string "I'd love to make paintings of the\n"
	.string "Pythios Cemetery, but it's so dark and\l"
	.string "rainy that my paint keeps running!$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria_Text_0:
# 136 "data/maps/PythiosCemetery/scripts.pory"
	.string "Maria$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria_Text_1:
# 137 "data/maps/PythiosCemetery/scripts.pory"
	.string "I wonder if there are new, cute Pokémon\n"
	.string "to catch here.$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos_Text_0:
# 154 "data/maps/PythiosCemetery/scripts.pory"
	.string "Arkos$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos_Text_1:
# 155 "data/maps/PythiosCemetery/scripts.pory"
	.string "That battle cheered me up a bit.$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Galei_Text_0:
# 172 "data/maps/PythiosCemetery/scripts.pory"
	.string "Galei$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Galei_Text_1:
# 173 "data/maps/PythiosCemetery/scripts.pory"
	.string "Looks like I lost our battle. I should\n"
	.string "probably just stick to comedy...$"

PythiosCemetery_EventScript_OldWoman_Text_0:
# 191 "data/maps/PythiosCemetery/scripts.pory"
	.string "Old Woman$"

PythiosCemetery_EventScript_OldWoman_Text_1:
# 194 "data/maps/PythiosCemetery/scripts.pory"
	.string "People tend to stay away from\n"
	.string "cemeteries, so the graves fall into\l"
	.string "ruin. I'm trying to clean some of them\l"
	.string "up.\p"
	.string "There's an {COLOR GREEN}Ice-type Bug Pokémon{COLOR DARK_GRAY} that\n"
	.string "especially likes to creep around the\l"
	.string "graves {COLOR GREEN}at night{COLOR DARK_GRAY}. If you help catch one,\l"
	.string "let me know.$"

PythiosCemetery_EventScript_OldWoman_Text_2:
# 209 "data/maps/PythiosCemetery/scripts.pory"
	.string "I can see it on your face... have you\n"
	.string "found the Ice-type Bug for me?$"

PythiosCemetery_EventScript_OldWoman_Text_3:
# 214 "data/maps/PythiosCemetery/scripts.pory"
	.string "I suppose not. Bring me the Ice-type\n"
	.string "Bug Pokémon you've caught!$"

PythiosCemetery_EventScript_OldWoman_Text_4:
# 221 "data/maps/PythiosCemetery/scripts.pory"
	.string "Thank you for helping with my Snom\n"
	.string "problem, young Trainer. Now the Snom\l"
	.string "can go on an adventure with you, and I\l"
	.string "can be left to continue cleaning the\l"
	.string "area.$"

PythiosCemetery_EventScript_OldWoman_ReactToSnom_Text_0:
# 236 "data/maps/PythiosCemetery/scripts.pory"
	.string "A Snom! Ah, this makes sense!\p"
	.string "I found this strange, cold stone in the\n"
	.string "rocks nearby. Maybe this is what\l"
	.string "attracted the Snom!$"

PythiosCemetery_EventScript_OldWoman_ReactToSnom_Text_1:
# 240 "data/maps/PythiosCemetery/scripts.pory"
	.string "Snom living in the Ilios Region can\n"
	.string "evolve using an Ice Stone. Perhaps the\l"
	.string "Snom is looking for a life of adventure?$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt1Intro::
# 60 "data/maps/PythiosCemetery/scripts.pory"
	.string "Hey, you! This is our private Team\n"
	.string "Chimera meeting spot!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt1Defeat::
# 64 "data/maps/PythiosCemetery/scripts.pory"
	.string "Darn, we might get cleaned out!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt2Intro::
# 78 "data/maps/PythiosCemetery/scripts.pory"
	.string "You'll never reach the other Grunts!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt2Defeat::
# 82 "data/maps/PythiosCemetery/scripts.pory"
	.string "Okay, you might beat us...$"

PythiosCemetery_Text_Trainer_PythiosCemetery_AdminDefeat::
# 117 "data/maps/PythiosCemetery/scripts.pory"
	.string "No! The Pythios Cemetery was supposed\n"
	.string "to be our next new meeting ground!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_MariaIntro::
# 142 "data/maps/PythiosCemetery/scripts.pory"
	.string "My poor Pokémon are getting lost in the\n"
	.string "rainy weather!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_MariaDefeat::
# 146 "data/maps/PythiosCemetery/scripts.pory"
	.string "Where'd they go?$"

PythiosCemetery_Text_Trainer_PythiosCemetery_ArkosIntro::
# 160 "data/maps/PythiosCemetery/scripts.pory"
	.string "I'm here to sulk...$"

PythiosCemetery_Text_Trainer_PythiosCemetery_ArkosDefeat::
# 164 "data/maps/PythiosCemetery/scripts.pory"
	.string "I can't even sulk in peace, huh?$"

PythiosCemetery_Text_Trainer_PythiosCemetery_GaleiIntro::
# 178 "data/maps/PythiosCemetery/scripts.pory"
	.string "I'm on the lookout for new jokes. Do you\n"
	.string "have any?$"

PythiosCemetery_Text_Trainer_PythiosCemetery_GaleiDefeat::
# 182 "data/maps/PythiosCemetery/scripts.pory"
	.string "Looks like the joke's on me!$"

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


PythiosCemetery_EventScript_DirectionSign::
# 26 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 27 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_DirectionSign_Text_0
# 28 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 29 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Linoone::
# 35 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 36 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 37 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Linoone_Text_0
# 38 "data/maps/PythiosCemetery/scripts.pory"
	playmoncry SPECIES_LINOONE_GALARIAN, CRY_MODE_NORMAL
# 39 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Linoone_Text_1
# 40 "data/maps/PythiosCemetery/scripts.pory"
	waitmoncry
# 41 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 42 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1::
# 48 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_CHIMERA_GRUNT_1, PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt1Intro, PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt1Defeat
# 49 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_0
# 50 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_1
# 51 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 52 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt2::
# 66 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_CHIMERA_GRUNT_2, PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt2Intro, PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt2Defeat
# 67 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_0
# 68 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt2_Text_0
# 69 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 70 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin::
# 84 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 85 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 86 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_0
# 87 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_0
# 88 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 89 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_no_intro TRAINER_PYTHIOSCEMETERY_CHIMERA_GRUNT_3, PythiosCemetery_Text_Trainer_PythiosCemetery_AdminDefeat
# 91 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 92 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 93 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_0
# 94 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_1
# 95 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 96 "data/maps/PythiosCemetery/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 97 "data/maps/PythiosCemetery/scripts.pory"
	delay 30
# 98 "data/maps/PythiosCemetery/scripts.pory"
	removeobject 4
# 99 "data/maps/PythiosCemetery/scripts.pory"
	removeobject 5
# 100 "data/maps/PythiosCemetery/scripts.pory"
	removeobject 6
# 101 "data/maps/PythiosCemetery/scripts.pory"
	removeobject 7
# 102 "data/maps/PythiosCemetery/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 103 "data/maps/PythiosCemetery/scripts.pory"
	delay 30
# 104 "data/maps/PythiosCemetery/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 105 "data/maps/PythiosCemetery/scripts.pory"
	delay 20
# 106 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_2
# 107 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 108 "data/maps/PythiosCemetery/scripts.pory"
	giveitem ITEM_HM_FLASH
# 109 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Artist::
# 119 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 120 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 121 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Artist_Text_0
# 122 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Artist_Text_1
# 123 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 124 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria::
# 130 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_MARIA, PythiosCemetery_Text_Trainer_PythiosCemetery_MariaIntro, PythiosCemetery_Text_Trainer_PythiosCemetery_MariaDefeat
# 131 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria_Text_0
# 132 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria_Text_1
# 133 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 134 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos::
# 148 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_ARKOS, PythiosCemetery_Text_Trainer_PythiosCemetery_ArkosIntro, PythiosCemetery_Text_Trainer_PythiosCemetery_ArkosDefeat
# 149 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos_Text_0
# 150 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos_Text_1
# 151 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 152 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_Trainer_PythiosCemetery_Galei::
# 166 "data/maps/PythiosCemetery/scripts.pory"
	trainerbattle_single TRAINER_PYTHIOSCEMETERY_GALEI, PythiosCemetery_Text_Trainer_PythiosCemetery_GaleiIntro, PythiosCemetery_Text_Trainer_PythiosCemetery_GaleiDefeat
# 167 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_Trainer_PythiosCemetery_Galei_Text_0
# 168 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_Trainer_PythiosCemetery_Galei_Text_1
# 169 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 170 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_OldWoman::
# 184 "data/maps/PythiosCemetery/scripts.pory"
	lock
# 185 "data/maps/PythiosCemetery/scripts.pory"
	faceplayer
# 186 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_OldWoman_Text_0
# 187 "data/maps/PythiosCemetery/scripts.pory"
	goto_if_unset FLAG_SHOWED_CEMETERY_LADY_SNOM, PythiosCemetery_EventScript_OldWoman_2
# 216 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_OldWoman_Text_4
# 217 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
PythiosCemetery_EventScript_OldWoman_1:
# 219 "data/maps/PythiosCemetery/scripts.pory"
	applymovement 12, Common_Movement_FaceUp
# 220 "data/maps/PythiosCemetery/scripts.pory"
	waitmovement 0
# 221 "data/maps/PythiosCemetery/scripts.pory"
	release
	end

PythiosCemetery_EventScript_OldWoman_2:
# 189 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_OldWoman_Text_1
# 190 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 192 "data/maps/PythiosCemetery/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_SNOM_ICE_STONE
# 193 "data/maps/PythiosCemetery/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PythiosCemetery_EventScript_OldWoman_5
# 200 "data/maps/PythiosCemetery/scripts.pory"
	getcaughtmon SPECIES_SNOM
# 201 "data/maps/PythiosCemetery/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PythiosCemetery_EventScript_OldWoman_8
	goto PythiosCemetery_EventScript_OldWoman_1

PythiosCemetery_EventScript_OldWoman_5:
# 195 "data/maps/PythiosCemetery/scripts.pory"
	delay 20
# 196 "data/maps/PythiosCemetery/scripts.pory"
	startquest QUEST_SNOM_ICE_STONE
	goto PythiosCemetery_EventScript_OldWoman_1

PythiosCemetery_EventScript_OldWoman_8:
# 203 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_OldWoman_Text_0
# 204 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_OldWoman_Text_2
# 205 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 206 "data/maps/PythiosCemetery/scripts.pory"
	checkforspecies SPECIES_SNOM, OPEN_PARTY_SCREEN, PythiosCemetery_EventScript_OldWoman_ReactToSnom
# 208 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_OldWoman_Text_0
# 209 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_OldWoman_Text_3
# 210 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
	goto PythiosCemetery_EventScript_OldWoman_1


PythiosCemetery_EventScript_OldWoman_ReactToSnom::
# 227 "data/maps/PythiosCemetery/scripts.pory"
	delay 20
# 228 "data/maps/PythiosCemetery/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 229 "data/maps/PythiosCemetery/scripts.pory"
	waitmovement 0
# 230 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_OldWoman_Text_0
# 231 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_OldWoman_ReactToSnom_Text_0
# 232 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 233 "data/maps/PythiosCemetery/scripts.pory"
	giveitem ITEM_ICE_STONE
# 234 "data/maps/PythiosCemetery/scripts.pory"
	speakername PythiosCemetery_EventScript_OldWoman_Text_0
# 235 "data/maps/PythiosCemetery/scripts.pory"
	msgbox PythiosCemetery_EventScript_OldWoman_ReactToSnom_Text_1
# 236 "data/maps/PythiosCemetery/scripts.pory"
	closemessage
# 237 "data/maps/PythiosCemetery/scripts.pory"
	setflag FLAG_SHOWED_CEMETERY_LADY_SNOM
# 239 "data/maps/PythiosCemetery/scripts.pory"
	delay 20
# 240 "data/maps/PythiosCemetery/scripts.pory"
	completequest QUEST_SNOM_ICE_STONE
# 242 "data/maps/PythiosCemetery/scripts.pory"
	release
	end


PythiosCemetery_EventScript_DirectionSign_Text_0:
# 27 "data/maps/PythiosCemetery/scripts.pory"
	.string "Pythios Cemetery\n"
	.string "The Resting Place of the West\p"
	.string "Pythios Town {RIGHT_ARROW}$"

PythiosCemetery_EventScript_Linoone_Text_0:
# 37 "data/maps/PythiosCemetery/scripts.pory"
	.string "Linoone$"

PythiosCemetery_EventScript_Linoone_Text_1:
# 39 "data/maps/PythiosCemetery/scripts.pory"
	.string "Hissss!$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_0:
# 49 "data/maps/PythiosCemetery/scripts.pory"
	.string "Grunt$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt1_Text_1:
# 50 "data/maps/PythiosCemetery/scripts.pory"
	.string "Look, just leave and don't cause\n"
	.string "trouble.$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Grunt2_Text_0:
# 68 "data/maps/PythiosCemetery/scripts.pory"
	.string "I hope the other Grunts didn't see me\n"
	.string "lose like that.$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_0:
# 87 "data/maps/PythiosCemetery/scripts.pory"
	.string "Wh-what? I thought those other Grunts\n"
	.string "would hold back any intruders! We were\l"
	.string "tasked with finding this {COLOR GREEN}Flash HM{COLOR DARK_GRAY} and\l"
	.string "bringing it to the Boss...\p"
	.string "No matter. I'd recognize the Trainer\n"
	.string "messing up our plans anywhere, even in\l"
	.string "the pouring rain. I'll stop you, here and\l"
	.string "now!$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_1:
# 94 "data/maps/PythiosCemetery/scripts.pory"
	.string "Darn it, we needed this plan to work!\n"
	.string "Lazarus Taxa, the\l"
	.string "once-thought-extinct Pokémon\l"
	.string "species, coming back to the world is a\l"
	.string "sign. Change is coming, and only Team\l"
	.string "Chimera is strong enough to control it!$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Admin_Text_2:
# 106 "data/maps/PythiosCemetery/scripts.pory"
	.string "The Team Chimera members dropped\n"
	.string "something while they ran...$"

PythiosCemetery_EventScript_Artist_Text_0:
# 121 "data/maps/PythiosCemetery/scripts.pory"
	.string "Artist$"

PythiosCemetery_EventScript_Artist_Text_1:
# 122 "data/maps/PythiosCemetery/scripts.pory"
	.string "I'd love to make paintings of the\n"
	.string "Pythios Cemetery, but it's so dark and\l"
	.string "rainy that my paint keeps running!$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria_Text_0:
# 131 "data/maps/PythiosCemetery/scripts.pory"
	.string "Maria$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Maria_Text_1:
# 132 "data/maps/PythiosCemetery/scripts.pory"
	.string "I wonder if there are new, cute Pokémon\n"
	.string "to catch here.$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos_Text_0:
# 149 "data/maps/PythiosCemetery/scripts.pory"
	.string "Arkos$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Arkos_Text_1:
# 150 "data/maps/PythiosCemetery/scripts.pory"
	.string "That battle cheered me up a bit.$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Galei_Text_0:
# 167 "data/maps/PythiosCemetery/scripts.pory"
	.string "Galei$"

PythiosCemetery_EventScript_Trainer_PythiosCemetery_Galei_Text_1:
# 168 "data/maps/PythiosCemetery/scripts.pory"
	.string "Looks like I lost our battle. I should\n"
	.string "probably just stick to comedy...$"

PythiosCemetery_EventScript_OldWoman_Text_0:
# 186 "data/maps/PythiosCemetery/scripts.pory"
	.string "Old Woman$"

PythiosCemetery_EventScript_OldWoman_Text_1:
# 189 "data/maps/PythiosCemetery/scripts.pory"
	.string "People tend to stay away from\n"
	.string "cemeteries, so the graves fall into\l"
	.string "ruin. I'm trying to clean some of them\l"
	.string "up.\p"
	.string "There's an {COLOR GREEN}Ice-type Bug Pokémon{COLOR DARK_GRAY} that\n"
	.string "especially likes to creep around the\l"
	.string "graves {COLOR GREEN}at night{COLOR DARK_GRAY}. If you help catch one,\l"
	.string "let me know.$"

PythiosCemetery_EventScript_OldWoman_Text_2:
# 204 "data/maps/PythiosCemetery/scripts.pory"
	.string "I can see it on your face... have you\n"
	.string "found the Ice-type Bug for me?$"

PythiosCemetery_EventScript_OldWoman_Text_3:
# 209 "data/maps/PythiosCemetery/scripts.pory"
	.string "I suppose not. Bring me the Ice-type\n"
	.string "Bug Pokémon you've caught!$"

PythiosCemetery_EventScript_OldWoman_Text_4:
# 216 "data/maps/PythiosCemetery/scripts.pory"
	.string "Thank you for helping with my Snom\n"
	.string "problem, young Trainer. Now the Snom\l"
	.string "can go on an adventure with you, and I\l"
	.string "can be left to continue cleaning the\l"
	.string "area.$"

PythiosCemetery_EventScript_OldWoman_ReactToSnom_Text_0:
# 231 "data/maps/PythiosCemetery/scripts.pory"
	.string "A Snom! Ah, this makes sense!\p"
	.string "I found this strange, cold stone in the\n"
	.string "rocks nearby. Maybe this is what\l"
	.string "attracted the Snom!$"

PythiosCemetery_EventScript_OldWoman_ReactToSnom_Text_1:
# 235 "data/maps/PythiosCemetery/scripts.pory"
	.string "Snom living in the Ilios Region can\n"
	.string "evolve using an Ice Stone. Perhaps the\l"
	.string "Snom is looking for a life of adventure?$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt1Intro::
# 55 "data/maps/PythiosCemetery/scripts.pory"
	.string "Hey, you! This is our private Team\n"
	.string "Chimera meeting spot!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt1Defeat::
# 59 "data/maps/PythiosCemetery/scripts.pory"
	.string "Darn, we might get cleaned out!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt2Intro::
# 73 "data/maps/PythiosCemetery/scripts.pory"
	.string "You'll never reach the other Grunts!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_Grunt2Defeat::
# 77 "data/maps/PythiosCemetery/scripts.pory"
	.string "Okay, you might beat us...$"

PythiosCemetery_Text_Trainer_PythiosCemetery_AdminDefeat::
# 112 "data/maps/PythiosCemetery/scripts.pory"
	.string "No! The Pythios Cemetery was supposed\n"
	.string "to be our next new meeting ground!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_MariaIntro::
# 137 "data/maps/PythiosCemetery/scripts.pory"
	.string "My poor Pokémon are getting lost in the\n"
	.string "rainy weather!$"

PythiosCemetery_Text_Trainer_PythiosCemetery_MariaDefeat::
# 141 "data/maps/PythiosCemetery/scripts.pory"
	.string "Where'd they go?$"

PythiosCemetery_Text_Trainer_PythiosCemetery_ArkosIntro::
# 155 "data/maps/PythiosCemetery/scripts.pory"
	.string "I'm here to sulk...$"

PythiosCemetery_Text_Trainer_PythiosCemetery_ArkosDefeat::
# 159 "data/maps/PythiosCemetery/scripts.pory"
	.string "I can't even sulk in peace, huh?$"

PythiosCemetery_Text_Trainer_PythiosCemetery_GaleiIntro::
# 173 "data/maps/PythiosCemetery/scripts.pory"
	.string "I'm on the lookout for new jokes. Do you\n"
	.string "have any?$"

PythiosCemetery_Text_Trainer_PythiosCemetery_GaleiDefeat::
# 177 "data/maps/PythiosCemetery/scripts.pory"
	.string "Looks like the joke's on me!$"

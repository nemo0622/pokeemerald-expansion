FroslassCavern_Floor3_MapScripts::
# 2 "data/maps/FroslassCavern_Floor3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FroslassCavern_Floor3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FroslassCavern_Floor3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FroslassCavern_Floor3/scripts.pory"
	setflashlevel 4
# 5 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 6 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 7 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 8 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 9 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 10 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 11 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 12 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 13 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 14 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 15 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 16 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 17 "data/maps/FroslassCavern_Floor3/scripts.pory"
	setobjectaswildencounter 6, ENCOUNTER_LAND
# 18 "data/maps/FroslassCavern_Floor3/scripts.pory"
	setobjectaswildencounter 7, ENCOUNTER_LAND
# 19 "data/maps/FroslassCavern_Floor3/scripts.pory"
	setobjectaswildencounter 8, ENCOUNTER_LAND
	return


FroslassCavern_F3_EventScript_LittleGirl::
# 25 "data/maps/FroslassCavern_Floor3/scripts.pory"
	lock
# 26 "data/maps/FroslassCavern_Floor3/scripts.pory"
	faceplayer
# 29 "data/maps/FroslassCavern_Floor3/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_BEAT_FROSLASS
# 30 "data/maps/FroslassCavern_Floor3/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FroslassCavern_F3_EventScript_LittleGirl_2
# 40 "data/maps/FroslassCavern_Floor3/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_BEAT_FROSLASS
# 41 "data/maps/FroslassCavern_Floor3/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FroslassCavern_F3_EventScript_LittleGirl_5
# 58 "data/maps/FroslassCavern_Floor3/scripts.pory"
	speakername FroslassCavern_F3_EventScript_LittleGirl_Text_0
# 59 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_LittleGirl_Text_4
# 60 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
# 63 "data/maps/FroslassCavern_Floor3/scripts.pory"
	goto_if_set FLAG_HIDE_FROSLASS, FroslassCavern_F3_EventScript_LittleGirl_9
FroslassCavern_F3_EventScript_LittleGirl_8:
# 69 "data/maps/FroslassCavern_Floor3/scripts.pory"
	delay 30
# 70 "data/maps/FroslassCavern_Floor3/scripts.pory"
	speakername FroslassCavern_F3_EventScript_LittleGirl_Text_0
# 71 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_LittleGirl_Text_5
# 72 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
FroslassCavern_F3_EventScript_LittleGirl_4:
# 74 "data/maps/FroslassCavern_Floor3/scripts.pory"
	release
	end

FroslassCavern_F3_EventScript_LittleGirl_2:
# 32 "data/maps/FroslassCavern_Floor3/scripts.pory"
	speakername FroslassCavern_F3_EventScript_LittleGirl_Text_0
# 33 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_LittleGirl_Text_1
# 34 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
# 35 "data/maps/FroslassCavern_Floor3/scripts.pory"
	release
	end

FroslassCavern_F3_EventScript_LittleGirl_5:
# 43 "data/maps/FroslassCavern_Floor3/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 44 "data/maps/FroslassCavern_Floor3/scripts.pory"
	waitmovement 0
# 45 "data/maps/FroslassCavern_Floor3/scripts.pory"
	speakername FroslassCavern_F3_EventScript_LittleGirl_Text_0
# 46 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_LittleGirl_Text_2
# 47 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
# 48 "data/maps/FroslassCavern_Floor3/scripts.pory"
	delay 20
# 49 "data/maps/FroslassCavern_Floor3/scripts.pory"
	speakername FroslassCavern_F3_EventScript_LittleGirl_Text_0
# 50 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_LittleGirl_Text_3
# 51 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
# 53 "data/maps/FroslassCavern_Floor3/scripts.pory"
	delay 20
# 54 "data/maps/FroslassCavern_Floor3/scripts.pory"
	startquest QUEST_BEAT_FROSLASS
	goto FroslassCavern_F3_EventScript_LittleGirl_4

FroslassCavern_F3_EventScript_LittleGirl_9:
# 65 "data/maps/FroslassCavern_Floor3/scripts.pory"
	checkforspecies SPECIES_FROSLASS, FALSE, FroslassCavern_F3_EventScript_LittleGirlMeetsFroslass
	goto FroslassCavern_F3_EventScript_LittleGirl_8


FroslassCavern_F3_EventScript_LittleGirlMeetsFroslass::
# 80 "data/maps/FroslassCavern_Floor3/scripts.pory"
	lock
# 81 "data/maps/FroslassCavern_Floor3/scripts.pory"
	delay 30
# 82 "data/maps/FroslassCavern_Floor3/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 83 "data/maps/FroslassCavern_Floor3/scripts.pory"
	waitmovement 0
# 84 "data/maps/FroslassCavern_Floor3/scripts.pory"
	speakername FroslassCavern_F3_EventScript_LittleGirl_Text_0
# 85 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_LittleGirlMeetsFroslass_Text_0
# 86 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
# 87 "data/maps/FroslassCavern_Floor3/scripts.pory"
	delay 20
# 88 "data/maps/FroslassCavern_Floor3/scripts.pory"
	applymovement 2, Common_Movement_Heart
# 89 "data/maps/FroslassCavern_Floor3/scripts.pory"
	waitmovement 0
# 90 "data/maps/FroslassCavern_Floor3/scripts.pory"
	delay 10
# 91 "data/maps/FroslassCavern_Floor3/scripts.pory"
	speakername FroslassCavern_F3_EventScript_LittleGirl_Text_0
# 92 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_LittleGirlMeetsFroslass_Text_1
# 93 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
# 94 "data/maps/FroslassCavern_Floor3/scripts.pory"
	giveitem ITEM_EXP_CANDY_M, 3
# 96 "data/maps/FroslassCavern_Floor3/scripts.pory"
	delay 20
# 97 "data/maps/FroslassCavern_Floor3/scripts.pory"
	completequest QUEST_BEAT_FROSLASS
# 99 "data/maps/FroslassCavern_Floor3/scripts.pory"
	release
	end


FroslassCavern_F3_EventScript_Froslass::
# 105 "data/maps/FroslassCavern_Floor3/scripts.pory"
	lock
# 106 "data/maps/FroslassCavern_Floor3/scripts.pory"
	faceplayer
# 107 "data/maps/FroslassCavern_Floor3/scripts.pory"
	playmoncry SPECIES_FROSLASS, CRY_MODE_ENCOUNTER
# 108 "data/maps/FroslassCavern_Floor3/scripts.pory"
	delay 30
# 109 "data/maps/FroslassCavern_Floor3/scripts.pory"
	waitmoncry
# 110 "data/maps/FroslassCavern_Floor3/scripts.pory"
	delay 60
# 111 "data/maps/FroslassCavern_Floor3/scripts.pory"
	seteventmon SPECIES_FROSLASS, 35, ITEM_AMULET_COIN
# 112 "data/maps/FroslassCavern_Floor3/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 113 "data/maps/FroslassCavern_Floor3/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 114 "data/maps/FroslassCavern_Floor3/scripts.pory"
	waitstate
# 115 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 118 "data/maps/FroslassCavern_Floor3/scripts.pory"
	removeobject 1
# 119 "data/maps/FroslassCavern_Floor3/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 120 "data/maps/FroslassCavern_Floor3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq FroslassCavern_F3_EventScript_Froslass_2
# 127 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_Froslass_Text_1
# 128 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
FroslassCavern_F3_EventScript_Froslass_1:
# 131 "data/maps/FroslassCavern_Floor3/scripts.pory"
	setflag FLAG_HIDE_FROSLASS
# 132 "data/maps/FroslassCavern_Floor3/scripts.pory"
	releaseall
	end

FroslassCavern_F3_EventScript_Froslass_2:
# 122 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_Froslass_Text_0
# 123 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
	goto FroslassCavern_F3_EventScript_Froslass_1


FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Beatrice::
# 138 "data/maps/FroslassCavern_Floor3/scripts.pory"
	trainerbattle_single TRAINER_FROSLASSCAVERN_F3_BEATRICE, FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_BeatriceIntro, FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_BeatriceDefeat
# 139 "data/maps/FroslassCavern_Floor3/scripts.pory"
	speakername FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Beatrice_Text_0
# 140 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Beatrice_Text_1
# 141 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
# 142 "data/maps/FroslassCavern_Floor3/scripts.pory"
	release
	end


FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Kauros::
# 156 "data/maps/FroslassCavern_Floor3/scripts.pory"
	trainerbattle_single TRAINER_FROSLASSCAVERN_F3_KAUROS, FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_KaurosIntro, FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_KaurosDefeat
# 157 "data/maps/FroslassCavern_Floor3/scripts.pory"
	speakername FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Kauros_Text_0
# 158 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Kauros_Text_1
# 159 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
# 160 "data/maps/FroslassCavern_Floor3/scripts.pory"
	release
	end


FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Maxilla::
# 174 "data/maps/FroslassCavern_Floor3/scripts.pory"
	trainerbattle_single TRAINER_FROSLASSCAVERN_F3_MAXILLA, FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_MaxillaIntro, FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_MaxillaDefeat
# 175 "data/maps/FroslassCavern_Floor3/scripts.pory"
	speakername FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Maxilla_Text_0
# 176 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Maxilla_Text_1
# 177 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
# 178 "data/maps/FroslassCavern_Floor3/scripts.pory"
	release
	end


FroslassCavern_F3_EventScript_LittleGirl_Text_0:
# 32 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Little Girl$"

FroslassCavern_F3_EventScript_LittleGirl_Text_1:
# 33 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "This cave is a little scary, but the\n"
	.string "Froslass was so friendly! I'll catch a\l"
	.string "Snorunt and raise it all by myself\l"
	.string "someday!$"

FroslassCavern_F3_EventScript_LittleGirl_Text_2:
# 46 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Eek! Don't haunt me!!$"

FroslassCavern_F3_EventScript_LittleGirl_Text_3:
# 50 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Oh, sorry. I thought you were a\n"
	.string "Ghost-type Pokémon!\p"
	.string "People say there's a huge {COLOR GREEN}wild Froslass{COLOR DARK_GRAY}\n"
	.string "somewhere in this cave. I want to find\l"
	.string "it and be friends with it, but I'm too\l"
	.string "scared...\p"
	.string "Wait, you're a grown up, you can help me!\n"
	.string "Can you {COLOR GREEN}find and catch a Froslass{COLOR DARK_GRAY} in\l"
	.string "the cave for me?$"

FroslassCavern_F3_EventScript_LittleGirl_Text_4:
# 59 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Oh, hi! Did you {COLOR GREEN}bring me the Froslass to\n"
	.string "see{COLOR DARK_GRAY}?$"

FroslassCavern_F3_EventScript_LittleGirl_Text_5:
# 71 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Sniff... I guess not.\p"
	.string "I'm scared of the Froslass, but I kinda\n"
	.string "want to be friends with it! Lemme know\l"
	.string "when you {COLOR GREEN}have the Froslass for me{COLOR DARK_GRAY}.$"

FroslassCavern_F3_EventScript_LittleGirlMeetsFroslass_Text_0:
# 85 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Woah, a real Froslass! Can I hold the\n"
	.string "Poké ball for a minute?$"

FroslassCavern_F3_EventScript_LittleGirlMeetsFroslass_Text_1:
# 92 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Wow, she's so pretty! Nothing to be\n"
	.string "afraid of...!\p"
	.string "Here's her Poké ball back. I'm gonna\n"
	.string "catch a Snorunt someday, and I'll raise\l"
	.string "it to be just like Froslass! Thanks for\l"
	.string "showing me!$"

FroslassCavern_F3_EventScript_Froslass_Text_0:
# 122 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Froslass vanishes through the walls,\n"
	.string "sending a chill down your spine...$"

FroslassCavern_F3_EventScript_Froslass_Text_1:
# 127 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Froslass bows her head to you, and the\n"
	.string "cave warms a litte.$"

FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Beatrice_Text_0:
# 139 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Beatrice$"

FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Beatrice_Text_1:
# 140 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "The powers of winter are stronger here\n"
	.string "than anywhere else in the Ilios Region.$"

FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Kauros_Text_0:
# 157 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Kauros$"

FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Kauros_Text_1:
# 158 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "I make the hike from Sofos City to train\n"
	.string "here every day. It's hard, but it makes\l"
	.string "my Pokémon strong!$"

FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Maxilla_Text_0:
# 175 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Maxilla$"

FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Maxilla_Text_1:
# 176 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "My Amaura and Kauros' Tyrunt are both\n"
	.string "considered Lazarus Taxa. Apparently,\l"
	.string "they were thought to be extinct until\l"
	.string "recently.$"

FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_BeatriceIntro::
# 145 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "The icy walls... they're closing in!$"

FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_BeatriceDefeat::
# 149 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "It was just an illusion!$"

FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_KaurosIntro::
# 163 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "We only let strong Trainers get past us.\n"
	.string "Let's see what you're worth!$"

FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_KaurosDefeat::
# 167 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "You're definitely strong enough.$"

FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_MaxillaIntro::
# 181 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Our Pokémon are made to work together!$"

FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_MaxillaDefeat::
# 185 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "We need more practice with teamwork.$"

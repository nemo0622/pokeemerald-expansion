FroslassCavern_Floor3_MapScripts::
# 2 "data/maps/FroslassCavern_Floor3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FroslassCavern_Floor3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FroslassCavern_Floor3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 4 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 5 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 6 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 7 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 8 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 9 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 10 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 11 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 12 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 13 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 14 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 15 "data/maps/FroslassCavern_Floor3/scripts.pory"
	setobjectaswildencounter 6, ENCOUNTER_LAND
# 16 "data/maps/FroslassCavern_Floor3/scripts.pory"
	setobjectaswildencounter 7, ENCOUNTER_LAND
# 17 "data/maps/FroslassCavern_Floor3/scripts.pory"
	setobjectaswildencounter 8, ENCOUNTER_LAND
	return


FroslassCavern_F3_EventScript_LittleGirl::
# 23 "data/maps/FroslassCavern_Floor3/scripts.pory"
	lock
# 24 "data/maps/FroslassCavern_Floor3/scripts.pory"
	faceplayer
# 27 "data/maps/FroslassCavern_Floor3/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_BEAT_FROSLASS
# 28 "data/maps/FroslassCavern_Floor3/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FroslassCavern_F3_EventScript_LittleGirl_2
# 38 "data/maps/FroslassCavern_Floor3/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_BEAT_FROSLASS
# 39 "data/maps/FroslassCavern_Floor3/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FroslassCavern_F3_EventScript_LittleGirl_5
# 56 "data/maps/FroslassCavern_Floor3/scripts.pory"
	speakername FroslassCavern_F3_EventScript_LittleGirl_Text_0
# 57 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_LittleGirl_Text_4
# 58 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
# 61 "data/maps/FroslassCavern_Floor3/scripts.pory"
	goto_if_set FLAG_HIDE_FROSLASS, FroslassCavern_F3_EventScript_LittleGirl_9
FroslassCavern_F3_EventScript_LittleGirl_8:
# 67 "data/maps/FroslassCavern_Floor3/scripts.pory"
	delay 30
# 68 "data/maps/FroslassCavern_Floor3/scripts.pory"
	speakername FroslassCavern_F3_EventScript_LittleGirl_Text_0
# 69 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_LittleGirl_Text_5
# 70 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
FroslassCavern_F3_EventScript_LittleGirl_4:
# 72 "data/maps/FroslassCavern_Floor3/scripts.pory"
	release
	end

FroslassCavern_F3_EventScript_LittleGirl_2:
# 30 "data/maps/FroslassCavern_Floor3/scripts.pory"
	speakername FroslassCavern_F3_EventScript_LittleGirl_Text_0
# 31 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_LittleGirl_Text_1
# 32 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
# 33 "data/maps/FroslassCavern_Floor3/scripts.pory"
	release
	end

FroslassCavern_F3_EventScript_LittleGirl_5:
# 41 "data/maps/FroslassCavern_Floor3/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 42 "data/maps/FroslassCavern_Floor3/scripts.pory"
	waitmovement 0
# 43 "data/maps/FroslassCavern_Floor3/scripts.pory"
	speakername FroslassCavern_F3_EventScript_LittleGirl_Text_0
# 44 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_LittleGirl_Text_2
# 45 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
# 46 "data/maps/FroslassCavern_Floor3/scripts.pory"
	delay 20
# 47 "data/maps/FroslassCavern_Floor3/scripts.pory"
	speakername FroslassCavern_F3_EventScript_LittleGirl_Text_0
# 48 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_LittleGirl_Text_3
# 49 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
# 51 "data/maps/FroslassCavern_Floor3/scripts.pory"
	delay 20
# 52 "data/maps/FroslassCavern_Floor3/scripts.pory"
	startquest QUEST_BEAT_FROSLASS
	goto FroslassCavern_F3_EventScript_LittleGirl_4

FroslassCavern_F3_EventScript_LittleGirl_9:
# 63 "data/maps/FroslassCavern_Floor3/scripts.pory"
	checkforspecies SPECIES_FROSLASS, FALSE, FroslassCavern_F3_EventScript_LittleGirlMeetsFroslass
	goto FroslassCavern_F3_EventScript_LittleGirl_8


FroslassCavern_F3_EventScript_LittleGirlMeetsFroslass::
# 78 "data/maps/FroslassCavern_Floor3/scripts.pory"
	lock
# 79 "data/maps/FroslassCavern_Floor3/scripts.pory"
	delay 30
# 80 "data/maps/FroslassCavern_Floor3/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 81 "data/maps/FroslassCavern_Floor3/scripts.pory"
	waitmovement 0
# 82 "data/maps/FroslassCavern_Floor3/scripts.pory"
	speakername FroslassCavern_F3_EventScript_LittleGirl_Text_0
# 83 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_LittleGirlMeetsFroslass_Text_0
# 84 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
# 85 "data/maps/FroslassCavern_Floor3/scripts.pory"
	delay 20
# 86 "data/maps/FroslassCavern_Floor3/scripts.pory"
	applymovement 2, Common_Movement_Heart
# 87 "data/maps/FroslassCavern_Floor3/scripts.pory"
	waitmovement 0
# 88 "data/maps/FroslassCavern_Floor3/scripts.pory"
	delay 10
# 89 "data/maps/FroslassCavern_Floor3/scripts.pory"
	speakername FroslassCavern_F3_EventScript_LittleGirl_Text_0
# 90 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_LittleGirlMeetsFroslass_Text_1
# 91 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
# 92 "data/maps/FroslassCavern_Floor3/scripts.pory"
	giveitem ITEM_EXP_CANDY_M, 3
# 94 "data/maps/FroslassCavern_Floor3/scripts.pory"
	delay 20
# 95 "data/maps/FroslassCavern_Floor3/scripts.pory"
	completequest QUEST_BEAT_FROSLASS
# 97 "data/maps/FroslassCavern_Floor3/scripts.pory"
	release
	end


FroslassCavern_F3_EventScript_Froslass::
# 103 "data/maps/FroslassCavern_Floor3/scripts.pory"
	lock
# 104 "data/maps/FroslassCavern_Floor3/scripts.pory"
	faceplayer
# 105 "data/maps/FroslassCavern_Floor3/scripts.pory"
	playmoncry SPECIES_FROSLASS, CRY_MODE_ENCOUNTER
# 106 "data/maps/FroslassCavern_Floor3/scripts.pory"
	delay 30
# 107 "data/maps/FroslassCavern_Floor3/scripts.pory"
	waitmoncry
# 108 "data/maps/FroslassCavern_Floor3/scripts.pory"
	delay 60
# 109 "data/maps/FroslassCavern_Floor3/scripts.pory"
	seteventmon SPECIES_FROSLASS, 35, ITEM_AMULET_COIN
# 110 "data/maps/FroslassCavern_Floor3/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 111 "data/maps/FroslassCavern_Floor3/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 112 "data/maps/FroslassCavern_Floor3/scripts.pory"
	waitstate
# 113 "data/maps/FroslassCavern_Floor3/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 116 "data/maps/FroslassCavern_Floor3/scripts.pory"
	removeobject 1
# 117 "data/maps/FroslassCavern_Floor3/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 118 "data/maps/FroslassCavern_Floor3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq FroslassCavern_F3_EventScript_Froslass_2
# 125 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_Froslass_Text_1
# 126 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
FroslassCavern_F3_EventScript_Froslass_1:
# 129 "data/maps/FroslassCavern_Floor3/scripts.pory"
	setflag FLAG_HIDE_FROSLASS
# 130 "data/maps/FroslassCavern_Floor3/scripts.pory"
	releaseall
	end

FroslassCavern_F3_EventScript_Froslass_2:
# 120 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_Froslass_Text_0
# 121 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
	goto FroslassCavern_F3_EventScript_Froslass_1


FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Beatrice::
# 136 "data/maps/FroslassCavern_Floor3/scripts.pory"
	trainerbattle_single TRAINER_FROSLASSCAVERN_F3_BEATRICE, FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_BeatriceIntro, FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_BeatriceDefeat
# 137 "data/maps/FroslassCavern_Floor3/scripts.pory"
	speakername FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Beatrice_Text_0
# 138 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Beatrice_Text_1
# 139 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
# 140 "data/maps/FroslassCavern_Floor3/scripts.pory"
	release
	end


FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Kauros::
# 154 "data/maps/FroslassCavern_Floor3/scripts.pory"
	trainerbattle_single TRAINER_FROSLASSCAVERN_F3_KAUROS, FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_KaurosIntro, FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_KaurosDefeat
# 155 "data/maps/FroslassCavern_Floor3/scripts.pory"
	speakername FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Kauros_Text_0
# 156 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Kauros_Text_1
# 157 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
# 158 "data/maps/FroslassCavern_Floor3/scripts.pory"
	release
	end


FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Maxilla::
# 172 "data/maps/FroslassCavern_Floor3/scripts.pory"
	trainerbattle_single TRAINER_FROSLASSCAVERN_F3_MAXILLA, FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_MaxillaIntro, FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_MaxillaDefeat
# 173 "data/maps/FroslassCavern_Floor3/scripts.pory"
	speakername FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Maxilla_Text_0
# 174 "data/maps/FroslassCavern_Floor3/scripts.pory"
	msgbox FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Maxilla_Text_1
# 175 "data/maps/FroslassCavern_Floor3/scripts.pory"
	closemessage
# 176 "data/maps/FroslassCavern_Floor3/scripts.pory"
	release
	end


FroslassCavern_F3_EventScript_LittleGirl_Text_0:
# 30 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Little Girl$"

FroslassCavern_F3_EventScript_LittleGirl_Text_1:
# 31 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "This cave is a little scary, but the\n"
	.string "Froslass was so friendly! I'll catch a\l"
	.string "Snorunt and raise it all by myself\l"
	.string "someday!$"

FroslassCavern_F3_EventScript_LittleGirl_Text_2:
# 44 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Eek! Don't haunt me!!$"

FroslassCavern_F3_EventScript_LittleGirl_Text_3:
# 48 "data/maps/FroslassCavern_Floor3/scripts.pory"
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
# 57 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Oh, hi! Did you {COLOR GREEN}bring me the Froslass to\n"
	.string "see{COLOR DARK_GRAY}?$"

FroslassCavern_F3_EventScript_LittleGirl_Text_5:
# 69 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Sniff... I guess not.\p"
	.string "I'm scared of the Froslass, but I kinda\n"
	.string "want to be friends with it! Lemme know\l"
	.string "when you {COLOR GREEN}have the Froslass for me{COLOR DARK_GRAY}.$"

FroslassCavern_F3_EventScript_LittleGirlMeetsFroslass_Text_0:
# 83 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Woah, a real Froslass! Can I hold the\n"
	.string "Poké ball for a minute?$"

FroslassCavern_F3_EventScript_LittleGirlMeetsFroslass_Text_1:
# 90 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Wow, she's so pretty! Nothing to be\n"
	.string "afraid of...!\p"
	.string "Here's her Poké ball back. I'm gonna\n"
	.string "catch a Snorunt someday, and I'll raise\l"
	.string "it to be just like Froslass! Thanks for\l"
	.string "showing me!$"

FroslassCavern_F3_EventScript_Froslass_Text_0:
# 120 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Froslass vanishes through the walls,\n"
	.string "sending a chill down your spine...$"

FroslassCavern_F3_EventScript_Froslass_Text_1:
# 125 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Froslass bows her head to you, and the\n"
	.string "cave warms a litte.$"

FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Beatrice_Text_0:
# 137 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Beatrice$"

FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Beatrice_Text_1:
# 138 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "The powers of winter are stronger here\n"
	.string "than anywhere else in the Ilios Region.$"

FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Kauros_Text_0:
# 155 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Kauros$"

FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Kauros_Text_1:
# 156 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "I make the hike from Sofos City to train\n"
	.string "here every day. It's hard, but it makes\l"
	.string "my Pokémon strong!$"

FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Maxilla_Text_0:
# 173 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Maxilla$"

FroslassCavern_F3_EventScript_Trainer_FroslassCavern_F3_Maxilla_Text_1:
# 174 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "My Amaura and Kauros' Tyrunt are both\n"
	.string "considered Lazarus Taxa. Apparently,\l"
	.string "they were thought to be extinct until\l"
	.string "recently.$"

FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_BeatriceIntro::
# 143 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "The icy walls... they're closing in!$"

FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_BeatriceDefeat::
# 147 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "It was just an illusion!$"

FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_KaurosIntro::
# 161 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "We only let strong Trainers get past us.\n"
	.string "Let's see what you're worth!$"

FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_KaurosDefeat::
# 165 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "You're definitely strong enough.$"

FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_MaxillaIntro::
# 179 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "Our Pokémon are made to work together!$"

FroslassCavern_F3_Text_Trainer_FroslassCavern_F3_MaxillaDefeat::
# 183 "data/maps/FroslassCavern_Floor3/scripts.pory"
	.string "We need more practice with teamwork.$"

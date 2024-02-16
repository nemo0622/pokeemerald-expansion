# 1 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 2 "data/maps/CaveOfOrigin_B1F/scripts.pory"
.set LOCALID_WALLACE, 1
# 3 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 4 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_MapScripts::
# 5 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.byte 0
# 6 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 7 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_Wallace::
# 8 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	lock
# 9 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	faceplayer
# 10 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox_mugshot CaveOfOrigin_B1F_Text_WallaceStory, MSGBOX_DEFAULT, MUGSHOT_WALLACE
# 11 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 12 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 13 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 14 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 60
# 15 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_PIN
# 16 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_ExclamationMark
# 17 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 18 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_Delay48
# 19 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 20 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 30
# 21 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_FacePlayer
# 22 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 23 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_WALLACE
# 24 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	callnative DrawMugshot
# 25 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_WhereIsRayquaza
# 26 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 27 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 28 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 29 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_WheresRayquaza::
# 30 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	multichoice 0, 0, MULTI_WHERES_RAYQUAZA, FALSE
# 31 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 0, CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin
# 33 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 1, CaveOfOrigin_B1F_EventScript_AtMtPyre
# 34 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 2, CaveOfOrigin_B1F_EventScript_AtSkyPillar
# 35 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 3, CaveOfOrigin_B1F_EventScript_DontRemember
# 36 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_DontRemember
# 37 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	end
# 38 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 39 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin::
# 40 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin
# 41 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 42 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 43 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 44 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtMtPyre::
# 45 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat
# 46 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 47 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 48 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 49 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_DontRemember::
# 50 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_CantYouRememberSomehow
# 51 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 52 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 53 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 54 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtSkyPillar::
# 55 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox_mugshot CaveOfOrigin_B1F_Text_WellHeadToSkyPillar, MSGBOX_DEFAULT, MUGSHOT_WALLACE
# 56 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 57 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_EXIT
# 58 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 59 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setflag FLAG_WALLACE_GOES_TO_SKY_PILLAR
# 60 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 3
# 61 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	removeobject LOCALID_WALLACE
# 62 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_WALLACE
# 63 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 64 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	release
# 65 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	end
# 66 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 67 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WallaceStory:
# 68 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Ah, so you are {PLAYER}{KUN}?\n"
# 69 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I've heard tales of your exploits.\p"
# 70 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "My name is WALLACE.\p"
# 71 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I was once the GYM LEADER of\n"
# 72 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "SOOTOPOLIS, but something came up.\p"
# 73 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "So now, I've entrusted my mentor JUAN\n"
# 74 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "with the GYM's operation.\p"
# 75 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "… … … … … …\n"
# 76 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "… … … … … …\p"
# 77 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "GROUDON and KYOGRE, the two POKéMON\n"
# 78 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "wreaking havoc here, are considered\l"
# 79 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "to be super-ancient POKéMON.\p"
# 80 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But there aren't just two super-\n"
# 81 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "ancient POKéMON.\p"
# 82 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "There is one more somewhere.\p"
# 83 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Somewhere, there is a super-\n"
# 84 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "ancient POKéMON named RAYQUAZA.\p"
# 85 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "It's said that it was RAYQUAZA that\n"
# 86 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "becalmed the two combatants in\l"
# 87 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "the distant past.\p"
# 88 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But even I have no clue as to\n"
# 89 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "RAYQUAZA's whereabouts…$"
# 90 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 91 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WhereIsRayquaza:
# 92 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}, do you perhaps\n"
# 93 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "know where RAYQUAZA is now?\p"
# 94 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "If you do, please tell me.$"
# 95 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 96 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin:
# 97 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: The CAVE OF ORIGIN?\p"
# 98 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But that's right here!\n"
# 99 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I need you to do better than that!\p"
# 100 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Please, I need you to think about\n"
# 101 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "where RAYQUAZA might be right now.$"
# 102 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 103 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat:
# 104 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: MT. PYRE?\p"
# 105 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But when I met the old lady there\n"
# 106 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "earlier, she made no mention of it.\p"
# 107 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I very much doubt that the old lady\n"
# 108 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "would try to hide something from me…\p"
# 109 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "{PLAYER}{KUN}, could you think about this\n"
# 110 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "more carefully for me?$"
# 111 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 112 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_CantYouRememberSomehow:
# 113 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: Huh? You don't remember?\n"
# 114 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Hmm… That's a problem…\p"
# 115 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Can't you remember somehow?$"
# 116 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 117 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WellHeadToSkyPillar:
# 118 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: The SKY PILLAR?\p"
# 119 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "That's it!\n"
# 120 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "It must be the SKY PILLAR!\p"
# 121 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "{PLAYER}{KUN}, there's not a moment to lose!\n"
# 122 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "We'll head to the SKY PILLAR right away!$"

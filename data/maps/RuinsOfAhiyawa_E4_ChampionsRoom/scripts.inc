RuinsOfAhiyawa_E4_ChampionsRoom_MapScripts::
	.byte 0


RuinsOfAhiyawa_E4_ChampionsRoom_EnterRoom::
# 5 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	lockall
# 6 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 7 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	waitmovement 0
# 8 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 9 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAhiyawa_E4_ChampionsRoom_PlayerWalkUp
# 10 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	waitmovement 0
# 11 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	releaseall
	end


# 15 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
RuinsOfAhiyawa_E4_ChampionsRoom_PlayerWalkUp:
# 17 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	walk_up
# 17 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	walk_up
# 17 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	walk_up
# 17 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	walk_up
# 17 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	walk_up
# 17 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	walk_up
# 18 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	face_up
# 19 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	step_end

RuinsOfAhiyawa_EliteFour_EventScript_Ceruledge::
# 27 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	lock
# 28 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	faceplayer
# 29 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	speakername RuinsOfAhiyawa_EliteFour_EventScript_Ceruledge_Text_0
# 30 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	playmoncry SPECIES_CERULEDGE, CRY_MODE_NORMAL
# 31 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_EventScript_Ceruledge_Text_1
# 32 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	waitmoncry
# 33 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	closemessage
# 34 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	release
	end


RuinsOfAhiyawa_EliteFour_EventScript_Cyclizar::
# 40 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	lock
# 41 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	faceplayer
# 42 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	speakername RuinsOfAhiyawa_EliteFour_EventScript_Cyclizar_Text_0
# 43 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	playmoncry SPECIES_CYCLIZAR, CRY_MODE_NORMAL
# 44 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_EventScript_Cyclizar_Text_1
# 45 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	waitmoncry
# 46 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	closemessage
# 47 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	release
	end


RuinsOfAhiyawa_E4_ChampionsRoom_Anyalios::
# 53 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	lock
# 54 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	faceplayer
# 55 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	speakername RuinsOfAhiyawa_E4_ChampionsRoom_Anyalios_Text_0
# 56 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	msgbox RuinsOfAhiyawa_E4_ChampionsRoom_Anyalios_Text_1
# 57 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	closemessage
# 59 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	goto_if_unset FLAG_HARD_MODE, RuinsOfAhiyawa_E4_ChampionsRoom_Anyalios_2
# 65 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITEFOUR_ANYALIOS_HARD, RuinsOfAhiyawa_E4_ChampionsRoom_AnyaliosLoseText
RuinsOfAhiyawa_E4_ChampionsRoom_Anyalios_1:
# 68 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	delay 10
# 69 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	speakername RuinsOfAhiyawa_E4_ChampionsRoom_Anyalios_Text_0
# 70 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	msgbox RuinsOfAhiyawa_E4_ChampionsRoom_Anyalios_Text_2
# 71 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	closemessage
# 72 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	delay 20
# 75 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 76 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	clearflag FLAG_HIDE_PIRAEUS_ACRISIA_CITY
# 77 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	setvar VAR_INTRO_STATE, 7
# 78 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	clearflag FLAG_HIDE_RANIA_ACRISIA_UNIVERSITY
# 79 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	clearflag FLAG_HIDE_NIKO_ACRISIA_UNIVERSITY
# 80 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	setflag FLAG_HIDE_RANIA_AHIYAWA_INDOOR
# 81 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	setvar VAR_RANIA_STATE, 12
# 82 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	setvar VAR_NIKO_STATE, 15
# 83 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	setfakertcmorning
# 85 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	special DoDomeConfetti
# 86 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	completequest QUEST_CHAMPION
# 87 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	setrespawn HEAL_LOCATION_ACRISIA_CITY
# 88 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 89 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
# 90 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	special GameClear
# 91 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	waitstate
# 92 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	releaseall
	end

RuinsOfAhiyawa_E4_ChampionsRoom_Anyalios_2:
# 61 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITEFOUR_ANYALIOS, RuinsOfAhiyawa_E4_ChampionsRoom_AnyaliosLoseText
	goto RuinsOfAhiyawa_E4_ChampionsRoom_Anyalios_1


RuinsOfAhiyawa_EliteFour_EventScript_Ceruledge_Text_0:
# 29 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	.string "Ceruledge$"

RuinsOfAhiyawa_EliteFour_EventScript_Ceruledge_Text_1:
# 31 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	.string "Hyah yeh!$"

RuinsOfAhiyawa_EliteFour_EventScript_Cyclizar_Text_0:
# 42 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	.string "Cyclizar$"

RuinsOfAhiyawa_EliteFour_EventScript_Cyclizar_Text_1:
# 44 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	.string "Krr-klee!$"

RuinsOfAhiyawa_E4_ChampionsRoom_Anyalios_Text_0:
# 55 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	.string "Anyalios$"

RuinsOfAhiyawa_E4_ChampionsRoom_Anyalios_Text_1:
# 56 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	.string "BWAHAHA! 'Ey there, uh... {PLAYER},\n"
	.string "right? I thought the Trainer sweeping\l"
	.string "the Ilios Region Gyms would be, well, a\l"
	.string "little more intimidating. You're just a\l"
	.string "pipsqueak!\p"
	.string "Look, kid, I beat the last Elite Four so\n"
	.string "bad, they ended up disbanding! Once I\l"
	.string "left Ilios, those Team Chimera losers\l"
	.string "started getting bold. Hah! I had better\l"
	.string "things to do than fight a bunch of\l"
	.string "thugs!\p"
	.string "Well, I'm back now to defend my title as\n"
	.string "the strongest Trainer in Ilios. Let's\l"
	.string "get this over with!$"

RuinsOfAhiyawa_E4_ChampionsRoom_Anyalios_Text_2:
# 70 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	.string "Gehehe... BAHAHAHA! I can't believe it!\n"
	.string "{PLAYER}, you're actually stronger\l"
	.string "than me!\p"
	.string "I guess I have to be all professional\n"
	.string "now, hm? I officially grant you the\l"
	.string "{COLOR GREEN}title of Champion{COLOR DARK_GRAY}! Let's get you\l"
	.string "registered in the {COLOR GREEN}Hall of Fame{COLOR DARK_GRAY}.\l"
	.string "Congratulations!$"

RuinsOfAhiyawa_E4_ChampionsRoom_AnyaliosLoseText::
# 96 "data/maps/RuinsOfAhiyawa_E4_ChampionsRoom/scripts.pory"
	.string "You... I... WHAT?!$"

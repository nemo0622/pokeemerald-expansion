# 1 "data/maps/Route102/scripts.pory"

# 2 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 3 "data/maps/Route102/scripts.pory"
	.byte 0
# 4 "data/maps/Route102/scripts.pory"

# 5 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 6 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 7 "data/maps/Route102/scripts.pory"
	end
# 8 "data/maps/Route102/scripts.pory"

# 9 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 10 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 11 "data/maps/Route102/scripts.pory"
	end
# 12 "data/maps/Route102/scripts.pory"

# 13 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 14 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 15 "data/maps/Route102/scripts.pory"
	end
# 16 "data/maps/Route102/scripts.pory"

# 17 "data/maps/Route102/scripts.pory"
Route102_EventScript_Boy::
# 18 "data/maps/Route102/scripts.pory"
	msgbox_mugshot Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC, MUGSHOT_BOY1
# 19 "data/maps/Route102/scripts.pory"
	end
# 20 "data/maps/Route102/scripts.pory"

# 21 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 22 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 23 "data/maps/Route102/scripts.pory"
	callnative ClearMugshot
# 24 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 25 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 26 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 27 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 28 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 29 "data/maps/Route102/scripts.pory"
	msgbox_mugshot Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT, MUGSHOT_YOUNGSTER
# 30 "data/maps/Route102/scripts.pory"
	release
# 31 "data/maps/Route102/scripts.pory"
	end
# 32 "data/maps/Route102/scripts.pory"

# 33 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 34 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 35 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 37 "data/maps/Route102/scripts.pory"
	release
# 38 "data/maps/Route102/scripts.pory"
	end
# 39 "data/maps/Route102/scripts.pory"

# 40 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 41 "data/maps/Route102/scripts.pory"
	msgbox_mugshot Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT, MUGSHOT_YOUNGSTER
# 42 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 43 "data/maps/Route102/scripts.pory"
	release
# 44 "data/maps/Route102/scripts.pory"
	end
# 45 "data/maps/Route102/scripts.pory"

# 46 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 47 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 48 "data/maps/Route102/scripts.pory"
	msgbox_mugshot Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT, MUGSHOT_YOUNGSTER
# 49 "data/maps/Route102/scripts.pory"
	release
# 50 "data/maps/Route102/scripts.pory"
	end
# 51 "data/maps/Route102/scripts.pory"

# 52 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 53 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 54 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 55 "data/maps/Route102/scripts.pory"
	release
# 56 "data/maps/Route102/scripts.pory"
	end
# 57 "data/maps/Route102/scripts.pory"

# 58 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 59 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 60 "data/maps/Route102/scripts.pory"
	msgbox_mugshot Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_YOUNGSTER
# 61 "data/maps/Route102/scripts.pory"
	end
# 62 "data/maps/Route102/scripts.pory"

# 63 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 64 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 65 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 66 "data/maps/Route102/scripts.pory"
	end
# 67 "data/maps/Route102/scripts.pory"

# 68 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 69 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 70 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 71 "data/maps/Route102/scripts.pory"
	end
# 72 "data/maps/Route102/scripts.pory"

# 73 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 74 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 75 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 76 "data/maps/Route102/scripts.pory"
	end
# 77 "data/maps/Route102/scripts.pory"

# 78 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 79 "data/maps/Route102/scripts.pory"
	.string "WALLY: {PLAYER}…\n"
# 80 "data/maps/Route102/scripts.pory"
	.string "POKéMON hide in tall grass like this,\l"
# 81 "data/maps/Route102/scripts.pory"
	.string "don't they?\p"
# 82 "data/maps/Route102/scripts.pory"
	.string "Please watch me and see if I can\n"
# 83 "data/maps/Route102/scripts.pory"
	.string "catch one properly.\p"
# 84 "data/maps/Route102/scripts.pory"
	.string "…Whoa!$"
# 85 "data/maps/Route102/scripts.pory"

# 86 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 87 "data/maps/Route102/scripts.pory"
	.string "WALLY: I did it… It's my…\n"
# 88 "data/maps/Route102/scripts.pory"
	.string "My POKéMON!$"
# 89 "data/maps/Route102/scripts.pory"

# 90 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 91 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 92 "data/maps/Route102/scripts.pory"
	.string "Let's go back to the GYM!$"
# 93 "data/maps/Route102/scripts.pory"

# 94 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 95 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 96 "data/maps/Route102/scripts.pory"
	.string "into tall grass.\p"
# 97 "data/maps/Route102/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 98 "data/maps/Route102/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 99 "data/maps/Route102/scripts.pory"
	.string "Fwatchoo!$"
# 100 "data/maps/Route102/scripts.pory"

# 101 "data/maps/Route102/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 102 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 103 "data/maps/Route102/scripts.pory"
	.string "POKéMON!$"
# 104 "data/maps/Route102/scripts.pory"

# 105 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignOldale:
# 106 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 107 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} OLDALE TOWN$"
# 108 "data/maps/Route102/scripts.pory"

# 109 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 110 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 111 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} PETALBURG CITY$"

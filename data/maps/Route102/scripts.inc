# 1 "data/maps/Route102/scripts.pory"

# 2 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 3 "data/maps/Route102/scripts.pory"
	.byte 0
# 4 "data/maps/Route102/scripts.pory"

# 5 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 6 "data/maps/Route102/scripts.pory"
	msgbox_mugshot Route102_Text_ImNotVeryTall, MSGBOX_NPC, MUGSHOT_LITTLEBOY
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
	msgbox_mugshot Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_BUG_CATCHER
# 66 "data/maps/Route102/scripts.pory"
	end
# 67 "data/maps/Route102/scripts.pory"

# 68 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 69 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 70 "data/maps/Route102/scripts.pory"
	msgbox_mugshot Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_LASS
# 71 "data/maps/Route102/scripts.pory"
	end
# 72 "data/maps/Route102/scripts.pory"

# 73 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 74 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 75 "data/maps/Route102/scripts.pory"
	msgbox_mugshot Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_YOUNGSTER
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

Route102_Pokemon_Farfetchd::
# 116 "data/maps/Route102/scripts.pory"
	lock
# 117 "data/maps/Route102/scripts.pory"
	faceplayer
# 118 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_FARFETCHD, CRY_MODE_NORMAL
# 119 "data/maps/Route102/scripts.pory"
	msgbox Route102_Pokemon_Farfetchd_Text_0
# 120 "data/maps/Route102/scripts.pory"
	waitmoncry
# 121 "data/maps/Route102/scripts.pory"
	closemessage
# 122 "data/maps/Route102/scripts.pory"
	release
	end


Route102_Pokemon_Poliwag::
# 128 "data/maps/Route102/scripts.pory"
	lock
# 129 "data/maps/Route102/scripts.pory"
	faceplayer
# 130 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_POLIWAG, CRY_MODE_NORMAL
# 131 "data/maps/Route102/scripts.pory"
	msgbox Route102_Pokemon_Poliwag_Text_0
# 132 "data/maps/Route102/scripts.pory"
	waitmoncry
# 133 "data/maps/Route102/scripts.pory"
	closemessage
# 134 "data/maps/Route102/scripts.pory"
	release
	end


Route102_Zinnia_Trigger1::
# 140 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_1, 1
# 141 "data/maps/Route102/scripts.pory"
	goto Route102_Zinnia
	return


Route102_Zinnia_Trigger2::
# 146 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_1, 2
# 147 "data/maps/Route102/scripts.pory"
	goto Route102_Zinnia
	return


Route102_Zinnia::
# 152 "data/maps/Route102/scripts.pory"
	lockall
# 153 "data/maps/Route102/scripts.pory"
	applymovement 12, Route102_Zinnia_FrustratedWalkInPlace
# 154 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 155 "data/maps/Route102/scripts.pory"
	msgbox_mugshot Route102_Zinnia_Text_0, MSGBOX_NPC, MUGSHOT_ZINNIA
# 156 "data/maps/Route102/scripts.pory"
	closemessage
# 157 "data/maps/Route102/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 158 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 160 "data/maps/Route102/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Route102_Zinnia_2
# 166 "data/maps/Route102/scripts.pory"
	applymovement 12, Route102_Zinnia_WalkToPlayer2
Route102_Zinnia_1:
# 169 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 170 "data/maps/Route102/scripts.pory"
	msgbox_mugshot Route102_Zinnia_Text_1, MSGBOX_NPC, MUGSHOT_ZINNIA
# 171 "data/maps/Route102/scripts.pory"
	closemessage
# 173 "data/maps/Route102/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Route102_Zinnia_6
# 179 "data/maps/Route102/scripts.pory"
	applymovement 12, Route102_Zinnia_WalkAway2
Route102_Zinnia_5:
# 182 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 183 "data/maps/Route102/scripts.pory"
	removeobject 12
# 184 "data/maps/Route102/scripts.pory"
	setflag FLAG_ROUTE102_ZINNIA_VANISHED
# 185 "data/maps/Route102/scripts.pory"
	setvar VAR_ZINNIA_STORY_STATE, 1
# 186 "data/maps/Route102/scripts.pory"
	releaseall
	end

Route102_Zinnia_2:
# 162 "data/maps/Route102/scripts.pory"
	applymovement 12, Route102_Zinnia_WalkToPlayer1
	goto Route102_Zinnia_1

Route102_Zinnia_6:
# 175 "data/maps/Route102/scripts.pory"
	applymovement 12, Route102_Zinnia_WalkAway1
	goto Route102_Zinnia_5


# 190 "data/maps/Route102/scripts.pory"
Route102_Zinnia_FrustratedWalkInPlace:
# 192 "data/maps/Route102/scripts.pory"
	walk_in_place_up
# 192 "data/maps/Route102/scripts.pory"
	walk_in_place_up
# 192 "data/maps/Route102/scripts.pory"
	walk_in_place_up
# 193 "data/maps/Route102/scripts.pory"
	step_end

# 196 "data/maps/Route102/scripts.pory"
Route102_Zinnia_WalkToPlayer1:
# 198 "data/maps/Route102/scripts.pory"
	walk_left
# 198 "data/maps/Route102/scripts.pory"
	walk_left
# 198 "data/maps/Route102/scripts.pory"
	walk_left
# 198 "data/maps/Route102/scripts.pory"
	walk_left
# 198 "data/maps/Route102/scripts.pory"
	walk_left
# 198 "data/maps/Route102/scripts.pory"
	walk_left
# 199 "data/maps/Route102/scripts.pory"
	walk_in_place_down
# 200 "data/maps/Route102/scripts.pory"
	step_end

# 203 "data/maps/Route102/scripts.pory"
Route102_Zinnia_WalkToPlayer2:
# 205 "data/maps/Route102/scripts.pory"
	walk_left
# 205 "data/maps/Route102/scripts.pory"
	walk_left
# 205 "data/maps/Route102/scripts.pory"
	walk_left
# 205 "data/maps/Route102/scripts.pory"
	walk_left
# 205 "data/maps/Route102/scripts.pory"
	walk_left
# 206 "data/maps/Route102/scripts.pory"
	walk_in_place_down
# 207 "data/maps/Route102/scripts.pory"
	step_end

# 210 "data/maps/Route102/scripts.pory"
Route102_Zinnia_WalkAway1:
# 212 "data/maps/Route102/scripts.pory"
	walk_left
# 212 "data/maps/Route102/scripts.pory"
	walk_left
# 212 "data/maps/Route102/scripts.pory"
	walk_left
# 212 "data/maps/Route102/scripts.pory"
	walk_left
# 212 "data/maps/Route102/scripts.pory"
	walk_left
# 212 "data/maps/Route102/scripts.pory"
	walk_left
# 212 "data/maps/Route102/scripts.pory"
	walk_left
# 212 "data/maps/Route102/scripts.pory"
	walk_left
# 213 "data/maps/Route102/scripts.pory"
	step_end

# 216 "data/maps/Route102/scripts.pory"
Route102_Zinnia_WalkAway2:
# 218 "data/maps/Route102/scripts.pory"
	walk_left
# 218 "data/maps/Route102/scripts.pory"
	walk_left
# 218 "data/maps/Route102/scripts.pory"
	walk_left
# 218 "data/maps/Route102/scripts.pory"
	walk_left
# 218 "data/maps/Route102/scripts.pory"
	walk_left
# 218 "data/maps/Route102/scripts.pory"
	walk_left
# 218 "data/maps/Route102/scripts.pory"
	walk_left
# 218 "data/maps/Route102/scripts.pory"
	walk_left
# 219 "data/maps/Route102/scripts.pory"
	step_end

Route102_Pokemon_Farfetchd_Text_0:
# 119 "data/maps/Route102/scripts.pory"
	.string "Kree!$"

Route102_Pokemon_Poliwag_Text_0:
# 131 "data/maps/Route102/scripts.pory"
	.string "Blub blub blub!$"

Route102_Zinnia_Text_0:
# 155 "data/maps/Route102/scripts.pory"
	.string "Hmm...$"

Route102_Zinnia_Text_1:
# 170 "data/maps/Route102/scripts.pory"
	.string "YOU! You see it too, right? The berry\n"
	.string "trees looking... unusual?!\l"
	.string "Of course you do! The energy in this\l"
	.string "region is shifting, the plants can feel\l"
	.string "it.\l"
	.string "I'm not crazy!$"

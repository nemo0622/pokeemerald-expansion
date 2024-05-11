# 1 "data/maps/Route106/scripts.pory"

# 2 "data/maps/Route106/scripts.pory"
Route106_MapScripts::
# 3 "data/maps/Route106/scripts.pory"
	.byte 0
# 4 "data/maps/Route106/scripts.pory"

# 5 "data/maps/Route106/scripts.pory"
Route106_EventScript_TrainerTipsSign::
# 6 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_TrainerTips, MSGBOX_SIGN
# 7 "data/maps/Route106/scripts.pory"
	end
# 8 "data/maps/Route106/scripts.pory"

# 9 "data/maps/Route106/scripts.pory"
Route106_EventScript_Douglas::
# 10 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_DOUGLAS, Route106_Text_DouglasIntro, Route106_Text_DouglasDefeated
# 11 "data/maps/Route106/scripts.pory"
	msgbox_mugshot Route106_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_SWIMMERM
# 12 "data/maps/Route106/scripts.pory"
	end
# 13 "data/maps/Route106/scripts.pory"

# 14 "data/maps/Route106/scripts.pory"
Route106_EventScript_Kyla::
# 15 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_KYLA, Route106_Text_KylaIntro, Route106_Text_KylaDefeated
# 16 "data/maps/Route106/scripts.pory"
	msgbox_mugshot Route106_Text_KylaPostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_SWIMMERF
# 17 "data/maps/Route106/scripts.pory"
	end
# 18 "data/maps/Route106/scripts.pory"

# 19 "data/maps/Route106/scripts.pory"
Route106_EventScript_Elliot::
# 20 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_ELLIOT_1, Route106_Text_ElliotIntro, Route106_Text_ElliotDefeated, Route106_EventScript_ElliotRegisterMatchCallAfterBattle
# 21 "data/maps/Route106/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 22 "data/maps/Route106/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route106_EventScript_ElliotRematch
# 23 "data/maps/Route106/scripts.pory"
	msgbox_mugshot Route106_Text_ElliotPostBattle, MSGBOX_DEFAULT, MUGSHOT_FISHERMAN
# 24 "data/maps/Route106/scripts.pory"
	release
# 25 "data/maps/Route106/scripts.pory"
	end
# 26 "data/maps/Route106/scripts.pory"

# 27 "data/maps/Route106/scripts.pory"
Route106_EventScript_ElliotRegisterMatchCallAfterBattle::
# 28 "data/maps/Route106/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 29 "data/maps/Route106/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route106/scripts.pory"
	msgbox_mugshot Route106_Text_ElliotRegister, MSGBOX_DEFAULT, MUGSHOT_FISHERMAN
# 31 "data/maps/Route106/scripts.pory"
	register_matchcall TRAINER_ELLIOT_1
# 32 "data/maps/Route106/scripts.pory"
	release
# 33 "data/maps/Route106/scripts.pory"
	end
# 34 "data/maps/Route106/scripts.pory"

# 35 "data/maps/Route106/scripts.pory"
Route106_EventScript_ElliotRematch::
# 36 "data/maps/Route106/scripts.pory"
	trainerbattle_rematch TRAINER_ELLIOT_1, Route106_Text_ElliotRematchIntro, Route106_Text_ElliotRematchDefeated
# 37 "data/maps/Route106/scripts.pory"
	msgbox_mugshot Route106_Text_ElliotRematchPostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_FISHERMAN
# 38 "data/maps/Route106/scripts.pory"
	end
# 39 "data/maps/Route106/scripts.pory"

# 40 "data/maps/Route106/scripts.pory"
Route106_EventScript_Ned::
# 41 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_NED, Route106_Text_NedIntro, Route106_Text_NedDefeated
# 42 "data/maps/Route106/scripts.pory"
	msgbox_mugshot Route106_Text_NedPostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_FISHERMAN
# 43 "data/maps/Route106/scripts.pory"
	end
# 44 "data/maps/Route106/scripts.pory"

# 45 "data/maps/Route106/scripts.pory"
Route106_Text_TrainerTips:
# 46 "data/maps/Route106/scripts.pory"
	.string "TRAINER TIPS\p"
# 47 "data/maps/Route106/scripts.pory"
	.string "Advice on catching POKéMON with a ROD:\n"
# 48 "data/maps/Route106/scripts.pory"
	.string "Press the A Button if you get a bite.$"

Route106_Pokemon_Horsea::
# 54 "data/maps/Route106/scripts.pory"
	lock
# 55 "data/maps/Route106/scripts.pory"
	faceplayer
# 56 "data/maps/Route106/scripts.pory"
	playmoncry SPECIES_HORSEA, CRY_MODE_NORMAL
# 57 "data/maps/Route106/scripts.pory"
	msgbox Route106_Pokemon_Horsea_Text_0
# 58 "data/maps/Route106/scripts.pory"
	waitmoncry
# 59 "data/maps/Route106/scripts.pory"
	closemessage
# 60 "data/maps/Route106/scripts.pory"
	release
	end


Route106_Pokemon_Psyduck::
# 65 "data/maps/Route106/scripts.pory"
	lock
# 66 "data/maps/Route106/scripts.pory"
	faceplayer
# 67 "data/maps/Route106/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 68 "data/maps/Route106/scripts.pory"
	msgbox Route106_Pokemon_Psyduck_Text_0
# 69 "data/maps/Route106/scripts.pory"
	waitmoncry
# 70 "data/maps/Route106/scripts.pory"
	closemessage
# 71 "data/maps/Route106/scripts.pory"
	release
	end


Route106_Pokemon_Spheal::
# 76 "data/maps/Route106/scripts.pory"
	lock
# 77 "data/maps/Route106/scripts.pory"
	faceplayer
# 78 "data/maps/Route106/scripts.pory"
	playmoncry SPECIES_SPHEAL, CRY_MODE_NORMAL
# 79 "data/maps/Route106/scripts.pory"
	msgbox Route106_Pokemon_Spheal_Text_0
# 80 "data/maps/Route106/scripts.pory"
	waitmoncry
# 81 "data/maps/Route106/scripts.pory"
	closemessage
# 82 "data/maps/Route106/scripts.pory"
	release
	end


Route106_Pokemon_Horsea_Text_0:
# 57 "data/maps/Route106/scripts.pory"
	.string "Blublublub!$"

Route106_Pokemon_Psyduck_Text_0:
# 68 "data/maps/Route106/scripts.pory"
	.string "Qwaak!$"

Route106_Pokemon_Spheal_Text_0:
# 79 "data/maps/Route106/scripts.pory"
	.string "Clap clap!$"

AcrisiaCity_PokemonCenter_MapScripts::
	.byte 0


AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse::
# 5 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	lock
# 6 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	faceplayer
# 7 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	speakername AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 8 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_1, MSGBOX_YESNO
# 9 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_2
# 17 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	speakername AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 18 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_3
# 19 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
# 20 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	ballfollowingmon
# 21 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 22 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	waitmovement 0
# 23 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 24 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 26 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	waitmovement 0
# 27 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	callnative UpdateFollowingPokemon
# 29 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	speakername AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 30 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_4
# 31 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
# 34 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_ACRISIA_CITY
AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_1:
# 36 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	release
	end

AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_2:
# 11 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	speakername AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 12 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_2
# 13 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
	goto AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_1


AcrisiaCity_PokemonCenter_EventScript_Togetic::
# 42 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	lock
# 43 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	faceplayer
# 44 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	speakername AcrisiaCity_PokemonCenter_EventScript_Togetic_Text_0
# 45 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	playmoncry SPECIES_TOGETIC, CRY_MODE_NORMAL
# 46 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox AcrisiaCity_PokemonCenter_EventScript_Togetic_Text_1
# 47 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	waitmoncry
# 48 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
# 49 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	release
	end


AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0:
# 7 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Nurse$"

AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_1:
# 8 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Welcome to the Acrisia City Pokémon\n"
	.string "Center! Would you like to heal your\l"
	.string "Pokémon?$"

AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_2:
# 12 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "We hope to see you again!$"

AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_3:
# 18 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Okay, I'll take your Pokémon for a few\n"
	.string "seconds!$"

AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_4:
# 30 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Your Pokémon are happy and healthy! We\n"
	.string "hope to see you again!$"

AcrisiaCity_PokemonCenter_EventScript_Togetic_Text_0:
# 44 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Togetic$"

AcrisiaCity_PokemonCenter_EventScript_Togetic_Text_1:
# 46 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Bee-eh!$"

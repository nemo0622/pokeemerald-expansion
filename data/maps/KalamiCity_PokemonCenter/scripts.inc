KalamiCity_PokemonCenter_MapScripts::
	.byte 0


KalamiCity_PokemonCenter_EventScript_PkmnCenterNurse::
# 5 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	lock
# 6 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	faceplayer
# 7 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	speakername KalamiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 8 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	msgbox KalamiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_1, MSGBOX_YESNO
# 9 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KalamiCity_PokemonCenter_EventScript_PkmnCenterNurse_2
# 17 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	speakername KalamiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 18 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	msgbox KalamiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_3
# 19 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	closemessage
# 20 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	ballfollowingmon
# 21 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 22 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	waitmovement 0
# 23 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 24 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 26 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	waitmovement 0
# 27 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	callnative UpdateFollowingPokemon
# 29 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	speakername KalamiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 30 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	msgbox KalamiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_4
# 31 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	closemessage
# 34 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_KALAMI_CITY
KalamiCity_PokemonCenter_EventScript_PkmnCenterNurse_1:
# 36 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	release
	end

KalamiCity_PokemonCenter_EventScript_PkmnCenterNurse_2:
# 11 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	speakername KalamiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 12 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	msgbox KalamiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_2
# 13 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	closemessage
	goto KalamiCity_PokemonCenter_EventScript_PkmnCenterNurse_1


KalamiCity_PokemonCenter_EventScript_Togetic::
# 42 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	lock
# 43 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	faceplayer
# 44 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	speakername KalamiCity_PokemonCenter_EventScript_Togetic_Text_0
# 45 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	playmoncry SPECIES_TOGETIC, CRY_MODE_NORMAL
# 46 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	msgbox KalamiCity_PokemonCenter_EventScript_Togetic_Text_1
# 47 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	waitmoncry
# 48 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	closemessage
# 49 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	release
	end


KalamiCity_PokemonCenter_EventScript_FatMan::
# 55 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	lock
# 56 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	faceplayer
# 57 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	speakername KalamiCity_PokemonCenter_EventScript_FatMan_Text_0
# 58 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	msgbox KalamiCity_PokemonCenter_EventScript_FatMan_Text_1
# 59 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	closemessage
# 60 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	release
	end


KalamiCity_PokemonCenter_EventScript_PokefanF::
# 66 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	lock
# 67 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	faceplayer
# 68 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	speakername KalamiCity_PokemonCenter_EventScript_PokefanF_Text_0
# 69 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	msgbox KalamiCity_PokemonCenter_EventScript_PokefanF_Text_1
# 70 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	closemessage
# 71 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	release
	end


KalamiCity_PokemonCenter_EventScript_Trumbeak::
# 77 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	lock
# 78 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	faceplayer
# 79 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	speakername KalamiCity_PokemonCenter_EventScript_Trumbeak_Text_0
# 80 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	playmoncry SPECIES_TRUMBEAK, CRY_MODE_NORMAL
# 81 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	msgbox KalamiCity_PokemonCenter_EventScript_Trumbeak_Text_1
# 82 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	waitmoncry
# 83 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	closemessage
# 84 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	release
	end


KalamiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0:
# 7 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	.string "Nurse$"

KalamiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_1:
# 8 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	.string "Welcome to the Kalami City Pokémon\n"
	.string "Center! Would you like to heal your\l"
	.string "Pokémon?$"

KalamiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_2:
# 12 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	.string "We hope to see you again!$"

KalamiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_3:
# 18 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	.string "Okay, I'll take your Pokémon for a few\n"
	.string "seconds!$"

KalamiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_4:
# 30 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	.string "Your Pokémon are happy and healthy! We\n"
	.string "hope to see you again!$"

KalamiCity_PokemonCenter_EventScript_Togetic_Text_0:
# 44 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	.string "Togetic$"

KalamiCity_PokemonCenter_EventScript_Togetic_Text_1:
# 46 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	.string "Bee-eh!$"

KalamiCity_PokemonCenter_EventScript_FatMan_Text_0:
# 57 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	.string "Man$"

KalamiCity_PokemonCenter_EventScript_FatMan_Text_1:
# 58 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	.string "Ourani, the Gym Leader that lives here,\n"
	.string "is constantly working. Does she ever\l"
	.string "take a break?$"

KalamiCity_PokemonCenter_EventScript_PokefanF_Text_0:
# 68 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	.string "Pokéfan$"

KalamiCity_PokemonCenter_EventScript_PokefanF_Text_1:
# 69 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	.string "My Trumbeak flies letters to my friends\n"
	.string "across the region!$"

KalamiCity_PokemonCenter_EventScript_Trumbeak_Text_0:
# 79 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	.string "Trumbeak$"

KalamiCity_PokemonCenter_EventScript_Trumbeak_Text_1:
# 81 "data/maps/KalamiCity_PokemonCenter/scripts.pory"
	.string "Caw!$"

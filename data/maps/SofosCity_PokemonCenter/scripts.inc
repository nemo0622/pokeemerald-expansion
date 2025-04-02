SofosCity_PokemonCenter_MapScripts::
	.byte 0


SofosCity_PokemonCenter_EventScript_PkmnCenterNurse::
# 5 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	lock
# 6 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	faceplayer
# 7 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	speakername SofosCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 8 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	msgbox SofosCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_1, MSGBOX_YESNO
# 9 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_PokemonCenter_EventScript_PkmnCenterNurse_2
# 17 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	speakername SofosCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 18 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	msgbox SofosCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_3
# 19 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	closemessage
# 20 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	ballfollowingmon
# 21 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 22 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	waitmovement 0
# 23 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 24 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 26 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	waitmovement 0
# 27 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	callnative UpdateFollowingPokemon
# 29 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	speakername SofosCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 30 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	msgbox SofosCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_4
# 31 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	closemessage
# 34 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_SOFOS_CITY
SofosCity_PokemonCenter_EventScript_PkmnCenterNurse_1:
# 36 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	release
	end

SofosCity_PokemonCenter_EventScript_PkmnCenterNurse_2:
# 11 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	speakername SofosCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 12 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	msgbox SofosCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_2
# 13 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	closemessage
	goto SofosCity_PokemonCenter_EventScript_PkmnCenterNurse_1


SofosCity_PokemonCenter_EventScript_Togetic::
# 42 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	lock
# 43 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	faceplayer
# 44 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	speakername SofosCity_PokemonCenter_EventScript_Togetic_Text_0
# 45 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	playmoncry SPECIES_TOGETIC, CRY_MODE_NORMAL
# 46 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	msgbox SofosCity_PokemonCenter_EventScript_Togetic_Text_1
# 47 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	waitmoncry
# 48 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	closemessage
# 49 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	release
	end


SofosCity_PokemonCenter_EventScript_Flabebe::
# 55 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	lock
# 56 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	faceplayer
# 57 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	speakername SofosCity_PokemonCenter_EventScript_Flabebe_Text_0
# 58 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	playmoncry SPECIES_FLABEBE_ORANGE_FLOWER, CRY_MODE_NORMAL
# 59 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	msgbox SofosCity_PokemonCenter_EventScript_Flabebe_Text_1
# 60 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	waitmoncry
# 61 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	closemessage
# 62 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	release
	end


SofosCity_PokemonCenter_EventScript_OldWoman::
# 68 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	lock
# 69 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	faceplayer
# 70 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	speakername SofosCity_PokemonCenter_EventScript_OldWoman_Text_0
# 71 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	msgbox SofosCity_PokemonCenter_EventScript_OldWoman_Text_1
# 72 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	closemessage
# 73 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	release
	end


SofosCity_PokemonCenter_EventScript_GameboyKid::
# 79 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	lock
# 80 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	faceplayer
# 81 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	speakername SofosCity_PokemonCenter_EventScript_GameboyKid_Text_0
# 82 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	msgbox SofosCity_PokemonCenter_EventScript_GameboyKid_Text_1
# 83 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	closemessage
# 84 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	release
	end


SofosCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0:
# 7 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "Nurse$"

SofosCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_1:
# 8 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "Welcome to the Sofos City Pokémon\n"
	.string "Center! Would you like to heal your\l"
	.string "Pokémon?$"

SofosCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_2:
# 12 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "We hope to see you again!$"

SofosCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_3:
# 18 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "Okay, I'll take your Pokémon for a few\n"
	.string "seconds!$"

SofosCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_4:
# 30 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "Your Pokémon are happy and healthy! We\n"
	.string "hope to see you again!$"

SofosCity_PokemonCenter_EventScript_Togetic_Text_0:
# 44 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "Togetic$"

SofosCity_PokemonCenter_EventScript_Togetic_Text_1:
# 46 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "Bee-eh!$"

SofosCity_PokemonCenter_EventScript_Flabebe_Text_0:
# 57 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "Flabébé$"

SofosCity_PokemonCenter_EventScript_Flabebe_Text_1:
# 59 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "Twee!$"

SofosCity_PokemonCenter_EventScript_OldWoman_Text_0:
# 70 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "Old Woman$"

SofosCity_PokemonCenter_EventScript_OldWoman_Text_1:
# 71 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "I've had my Flabébé since I was young.\n"
	.string "Some Pokémon have lifespans that rival\l"
	.string "humans. I've even heard that a few\l"
	.string "Pokémon can live for centuries!$"

SofosCity_PokemonCenter_EventScript_GameboyKid_Text_0:
# 81 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "Gamer Kid$"

SofosCity_PokemonCenter_EventScript_GameboyKid_Text_1:
# 82 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "I put my Pokémon's data on my portable\n"
	.string "device! Now it can follow me wherever I\l"
	.string "go digitally!$"

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


SofosCity_PokemonCenter_EventScript_UniversityStudentRouteCheck::
# 55 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	lock
# 56 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	faceplayer
# 57 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	speakername SofosCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0
# 59 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_SOFOS_CITY, SofosCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_2
# 66 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	msgbox SofosCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_2
# 67 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	closemessage
# 68 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	special CheckRouteCaptureProgress
# 69 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SofosCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_5
SofosCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_1:
# 94 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	release
	end

SofosCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_2:
# 61 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	msgbox SofosCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_1
# 62 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	closemessage
	goto SofosCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_1

SofosCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_5:
# 71 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	delay 20
# 72 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 73 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	speakername SofosCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0
# 74 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	msgbox SofosCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_3
# 75 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	closemessage
# 76 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	delay 5
# 79 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	giveitem ITEM_AMULET_COIN
# 80 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	closemessage
# 81 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	checkoutfitflag OUTFIT_OLD_SOFOS
# 82 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SofosCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_8
SofosCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_7:
# 90 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_SOFOS_CITY
	goto SofosCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_1

SofosCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_8:
# 84 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	unlockoutfit OUTFIT_OLD_SOFOS
# 85 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	msgbox SofosCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_4
# 86 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	delay 20
# 87 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	closemessage
	goto SofosCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_7


SofosCity_PokemonCenter_EventScript_Flabebe::
# 100 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	lock
# 101 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	faceplayer
# 102 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	speakername SofosCity_PokemonCenter_EventScript_Flabebe_Text_0
# 103 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	playmoncry SPECIES_FLABEBE_ORANGE_FLOWER, CRY_MODE_NORMAL
# 104 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	msgbox SofosCity_PokemonCenter_EventScript_Flabebe_Text_1
# 105 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	waitmoncry
# 106 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	closemessage
# 107 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	release
	end


SofosCity_PokemonCenter_EventScript_OldWoman::
# 113 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	lock
# 114 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	faceplayer
# 115 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	speakername SofosCity_PokemonCenter_EventScript_OldWoman_Text_0
# 116 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	msgbox SofosCity_PokemonCenter_EventScript_OldWoman_Text_1
# 117 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	closemessage
# 118 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	release
	end


SofosCity_PokemonCenter_EventScript_GameboyKid::
# 124 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	lock
# 125 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	faceplayer
# 126 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	speakername SofosCity_PokemonCenter_EventScript_GameboyKid_Text_0
# 127 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	msgbox SofosCity_PokemonCenter_EventScript_GameboyKid_Text_1
# 128 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	closemessage
# 129 "data/maps/SofosCity_PokemonCenter/scripts.pory"
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

SofosCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0:
# 57 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "Uni. Student$"

SofosCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_1:
# 61 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

SofosCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_2:
# 66 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "Chaire! I'm a student from the Acrisia\n"
	.string "University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "and Water Pokémon{COLOR DARK_GRAY} found in Sofos City.\l"
	.string "If you've caught all the Pokémon here,\l"
	.string "please let me know.$"

SofosCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_3:
# 74 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

SofosCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_4:
# 85 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "The Old Sofos Toga Outfit has been\n"
	.string "added to the Outfit Box!$"

SofosCity_PokemonCenter_EventScript_Flabebe_Text_0:
# 102 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "Flabébé$"

SofosCity_PokemonCenter_EventScript_Flabebe_Text_1:
# 104 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "Twee!$"

SofosCity_PokemonCenter_EventScript_OldWoman_Text_0:
# 115 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "Old Woman$"

SofosCity_PokemonCenter_EventScript_OldWoman_Text_1:
# 116 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "I've had my Flabébé since I was young.\n"
	.string "Some Pokémon have lifespans that rival\l"
	.string "humans. I've even heard that a few\l"
	.string "Pokémon can live for centuries!$"

SofosCity_PokemonCenter_EventScript_GameboyKid_Text_0:
# 126 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "Gamer Kid$"

SofosCity_PokemonCenter_EventScript_GameboyKid_Text_1:
# 127 "data/maps/SofosCity_PokemonCenter/scripts.pory"
	.string "I put my Pokémon's data on my portable\n"
	.string "device! Now it can follow me wherever I\l"
	.string "go digitally!$"

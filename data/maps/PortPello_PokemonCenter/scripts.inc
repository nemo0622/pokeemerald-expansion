PortPello_PokemonCenter_MapScripts::
	.byte 0


PortPello_PokemonCenter_EventScript_PkmnCenterNurse::
# 5 "data/maps/PortPello_PokemonCenter/scripts.pory"
	lock
# 6 "data/maps/PortPello_PokemonCenter/scripts.pory"
	faceplayer
# 7 "data/maps/PortPello_PokemonCenter/scripts.pory"
	speakername PortPello_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 8 "data/maps/PortPello_PokemonCenter/scripts.pory"
	msgbox PortPello_PokemonCenter_EventScript_PkmnCenterNurse_Text_1, MSGBOX_YESNO
# 9 "data/maps/PortPello_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PortPello_PokemonCenter_EventScript_PkmnCenterNurse_2
# 17 "data/maps/PortPello_PokemonCenter/scripts.pory"
	speakername PortPello_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 18 "data/maps/PortPello_PokemonCenter/scripts.pory"
	msgbox PortPello_PokemonCenter_EventScript_PkmnCenterNurse_Text_3
# 19 "data/maps/PortPello_PokemonCenter/scripts.pory"
	closemessage
# 20 "data/maps/PortPello_PokemonCenter/scripts.pory"
	ballfollowingmon
# 21 "data/maps/PortPello_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 22 "data/maps/PortPello_PokemonCenter/scripts.pory"
	waitmovement 0
# 23 "data/maps/PortPello_PokemonCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 24 "data/maps/PortPello_PokemonCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/PortPello_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 26 "data/maps/PortPello_PokemonCenter/scripts.pory"
	waitmovement 0
# 27 "data/maps/PortPello_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/PortPello_PokemonCenter/scripts.pory"
	callnative UpdateFollowingPokemon
# 29 "data/maps/PortPello_PokemonCenter/scripts.pory"
	speakername PortPello_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 30 "data/maps/PortPello_PokemonCenter/scripts.pory"
	msgbox PortPello_PokemonCenter_EventScript_PkmnCenterNurse_Text_4
# 31 "data/maps/PortPello_PokemonCenter/scripts.pory"
	closemessage
# 34 "data/maps/PortPello_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_PORT_PELLO
PortPello_PokemonCenter_EventScript_PkmnCenterNurse_1:
# 36 "data/maps/PortPello_PokemonCenter/scripts.pory"
	release
	end

PortPello_PokemonCenter_EventScript_PkmnCenterNurse_2:
# 11 "data/maps/PortPello_PokemonCenter/scripts.pory"
	speakername PortPello_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 12 "data/maps/PortPello_PokemonCenter/scripts.pory"
	msgbox PortPello_PokemonCenter_EventScript_PkmnCenterNurse_Text_2
# 13 "data/maps/PortPello_PokemonCenter/scripts.pory"
	closemessage
	goto PortPello_PokemonCenter_EventScript_PkmnCenterNurse_1


PortPello_PokemonCenter_EventScript_UniversityStudentRouteCheck::
# 42 "data/maps/PortPello_PokemonCenter/scripts.pory"
	lock
# 43 "data/maps/PortPello_PokemonCenter/scripts.pory"
	faceplayer
# 44 "data/maps/PortPello_PokemonCenter/scripts.pory"
	speakername PortPello_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0
# 46 "data/maps/PortPello_PokemonCenter/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_PORT_PELLO, PortPello_PokemonCenter_EventScript_UniversityStudentRouteCheck_2
# 53 "data/maps/PortPello_PokemonCenter/scripts.pory"
	msgbox PortPello_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_2
# 54 "data/maps/PortPello_PokemonCenter/scripts.pory"
	closemessage
# 55 "data/maps/PortPello_PokemonCenter/scripts.pory"
	special CheckRouteCaptureProgress
# 56 "data/maps/PortPello_PokemonCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PortPello_PokemonCenter_EventScript_UniversityStudentRouteCheck_5
PortPello_PokemonCenter_EventScript_UniversityStudentRouteCheck_1:
# 75 "data/maps/PortPello_PokemonCenter/scripts.pory"
	release
	end

PortPello_PokemonCenter_EventScript_UniversityStudentRouteCheck_2:
# 48 "data/maps/PortPello_PokemonCenter/scripts.pory"
	msgbox PortPello_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_1
# 49 "data/maps/PortPello_PokemonCenter/scripts.pory"
	closemessage
	goto PortPello_PokemonCenter_EventScript_UniversityStudentRouteCheck_1

PortPello_PokemonCenter_EventScript_UniversityStudentRouteCheck_5:
# 58 "data/maps/PortPello_PokemonCenter/scripts.pory"
	delay 20
# 59 "data/maps/PortPello_PokemonCenter/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 60 "data/maps/PortPello_PokemonCenter/scripts.pory"
	speakername PortPello_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0
# 61 "data/maps/PortPello_PokemonCenter/scripts.pory"
	msgbox PortPello_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_3
# 62 "data/maps/PortPello_PokemonCenter/scripts.pory"
	closemessage
# 63 "data/maps/PortPello_PokemonCenter/scripts.pory"
	delay 5
# 66 "data/maps/PortPello_PokemonCenter/scripts.pory"
	unlockoutfit OUTFIT_ANCIENT
# 67 "data/maps/PortPello_PokemonCenter/scripts.pory"
	msgbox PortPello_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_4
# 68 "data/maps/PortPello_PokemonCenter/scripts.pory"
	delay 20
# 69 "data/maps/PortPello_PokemonCenter/scripts.pory"
	closemessage
# 71 "data/maps/PortPello_PokemonCenter/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_PORT_PELLO
	goto PortPello_PokemonCenter_EventScript_UniversityStudentRouteCheck_1


PortPello_PokemonCenter_EventScript_Girl::
# 81 "data/maps/PortPello_PokemonCenter/scripts.pory"
	lock
# 82 "data/maps/PortPello_PokemonCenter/scripts.pory"
	faceplayer
# 83 "data/maps/PortPello_PokemonCenter/scripts.pory"
	speakername PortPello_PokemonCenter_EventScript_Girl_Text_0
# 84 "data/maps/PortPello_PokemonCenter/scripts.pory"
	msgbox PortPello_PokemonCenter_EventScript_Girl_Text_1
# 85 "data/maps/PortPello_PokemonCenter/scripts.pory"
	closemessage
# 86 "data/maps/PortPello_PokemonCenter/scripts.pory"
	release
	end


PortPello_PokemonCenter_EventScript_Worker::
# 92 "data/maps/PortPello_PokemonCenter/scripts.pory"
	lock
# 93 "data/maps/PortPello_PokemonCenter/scripts.pory"
	faceplayer
# 94 "data/maps/PortPello_PokemonCenter/scripts.pory"
	speakername PortPello_PokemonCenter_EventScript_Worker_Text_0
# 95 "data/maps/PortPello_PokemonCenter/scripts.pory"
	msgbox PortPello_PokemonCenter_EventScript_Worker_Text_1
# 96 "data/maps/PortPello_PokemonCenter/scripts.pory"
	closemessage
# 97 "data/maps/PortPello_PokemonCenter/scripts.pory"
	release
	end


PortPello_PokemonCenter_EventScript_Heliolisk::
# 103 "data/maps/PortPello_PokemonCenter/scripts.pory"
	lock
# 104 "data/maps/PortPello_PokemonCenter/scripts.pory"
	faceplayer
# 105 "data/maps/PortPello_PokemonCenter/scripts.pory"
	speakername PortPello_PokemonCenter_EventScript_Heliolisk_Text_0
# 106 "data/maps/PortPello_PokemonCenter/scripts.pory"
	playmoncry SPECIES_HELIOLISK, CRY_MODE_NORMAL
# 107 "data/maps/PortPello_PokemonCenter/scripts.pory"
	msgbox PortPello_PokemonCenter_EventScript_Heliolisk_Text_1
# 108 "data/maps/PortPello_PokemonCenter/scripts.pory"
	waitmoncry
# 109 "data/maps/PortPello_PokemonCenter/scripts.pory"
	closemessage
# 110 "data/maps/PortPello_PokemonCenter/scripts.pory"
	release
	end


PortPello_PokemonCenter_EventScript_PkmnCenterNurse_Text_0:
# 7 "data/maps/PortPello_PokemonCenter/scripts.pory"
	.string "Nurse$"

PortPello_PokemonCenter_EventScript_PkmnCenterNurse_Text_1:
# 8 "data/maps/PortPello_PokemonCenter/scripts.pory"
	.string "Welcome to the Port Pello Pokémon\n"
	.string "Center! Would you like to heal your\l"
	.string "Pokémon?$"

PortPello_PokemonCenter_EventScript_PkmnCenterNurse_Text_2:
# 12 "data/maps/PortPello_PokemonCenter/scripts.pory"
	.string "We hope to see you again!$"

PortPello_PokemonCenter_EventScript_PkmnCenterNurse_Text_3:
# 18 "data/maps/PortPello_PokemonCenter/scripts.pory"
	.string "Okay, I'll take your Pokémon for a few\n"
	.string "seconds!$"

PortPello_PokemonCenter_EventScript_PkmnCenterNurse_Text_4:
# 30 "data/maps/PortPello_PokemonCenter/scripts.pory"
	.string "Your Pokémon are happy and healthy! We\n"
	.string "hope to see you again!$"

PortPello_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0:
# 44 "data/maps/PortPello_PokemonCenter/scripts.pory"
	.string "Uni. Student$"

PortPello_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_1:
# 48 "data/maps/PortPello_PokemonCenter/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

PortPello_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_2:
# 53 "data/maps/PortPello_PokemonCenter/scripts.pory"
	.string "Chaire! I'm a student from the Acrisia\n"
	.string "University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in Port Pello. If you've\l"
	.string "caught all the Pokémon here, please let\l"
	.string "me know.$"

PortPello_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_3:
# 61 "data/maps/PortPello_PokemonCenter/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

PortPello_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_4:
# 67 "data/maps/PortPello_PokemonCenter/scripts.pory"
	.string "The Ancient War Armor Outfit has been\n"
	.string "added to the Outfit Box!$"

PortPello_PokemonCenter_EventScript_Girl_Text_0:
# 83 "data/maps/PortPello_PokemonCenter/scripts.pory"
	.string "Girl$"

PortPello_PokemonCenter_EventScript_Girl_Text_1:
# 84 "data/maps/PortPello_PokemonCenter/scripts.pory"
	.string "Lots of strong Pokémon live around\n"
	.string "here. I'm glad there's a Pokémon Center\l"
	.string "nearby!$"

PortPello_PokemonCenter_EventScript_Worker_Text_0:
# 94 "data/maps/PortPello_PokemonCenter/scripts.pory"
	.string "Worker$"

PortPello_PokemonCenter_EventScript_Worker_Text_1:
# 95 "data/maps/PortPello_PokemonCenter/scripts.pory"
	.string "My Heliolisk is strong enough to power\n"
	.string "multiple buildings here. It makes my job\l"
	.string "a lot easier!$"

PortPello_PokemonCenter_EventScript_Heliolisk_Text_0:
# 105 "data/maps/PortPello_PokemonCenter/scripts.pory"
	.string "Heliolisk$"

PortPello_PokemonCenter_EventScript_Heliolisk_Text_1:
# 107 "data/maps/PortPello_PokemonCenter/scripts.pory"
	.string "Breahh!$"

PythiosTown_PokemonCenter_MapScripts::
	.byte 0


PythiosTown_PokemonCenter_EventScript_PkmnCenterNurse::
# 5 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	lock
# 6 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	faceplayer
# 7 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	speakername PythiosTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 8 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	msgbox PythiosTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_1, MSGBOX_YESNO
# 9 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PythiosTown_PokemonCenter_EventScript_PkmnCenterNurse_2
# 17 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	speakername PythiosTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 18 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	msgbox PythiosTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_3
# 19 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	closemessage
# 20 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	ballfollowingmon
# 21 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 22 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 23 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 24 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 26 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 27 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	callnative UpdateFollowingPokemon
# 29 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	speakername PythiosTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 30 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	msgbox PythiosTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_4
# 31 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	closemessage
# 34 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_PYTHIOS_TOWN
PythiosTown_PokemonCenter_EventScript_PkmnCenterNurse_1:
# 36 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	release
	end

PythiosTown_PokemonCenter_EventScript_PkmnCenterNurse_2:
# 11 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	speakername PythiosTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 12 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	msgbox PythiosTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_2
# 13 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	closemessage
	goto PythiosTown_PokemonCenter_EventScript_PkmnCenterNurse_1


PythiosTown_PokemonCenter_EventScript_Togetic::
# 42 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	lock
# 43 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	faceplayer
# 44 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	speakername PythiosTown_PokemonCenter_EventScript_Togetic_Text_0
# 45 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	playmoncry SPECIES_TOGETIC, CRY_MODE_NORMAL
# 46 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	msgbox PythiosTown_PokemonCenter_EventScript_Togetic_Text_1
# 47 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	waitmoncry
# 48 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	closemessage
# 49 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	release
	end


PythiosTown_PokemonCenter_EventScript_UniversityStudentRouteCheck::
# 55 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	lock
# 56 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	faceplayer
# 57 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	speakername PythiosTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0
# 59 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_PYTHIOS_TOWN, PythiosTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_2
# 66 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	msgbox PythiosTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_2
# 67 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	closemessage
# 68 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	special CheckRouteCaptureProgress
# 69 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PythiosTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_5
PythiosTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_1:
# 90 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	release
	end

PythiosTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_2:
# 61 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	msgbox PythiosTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_1
# 62 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	closemessage
	goto PythiosTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_1

PythiosTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_5:
# 71 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	delay 20
# 72 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 73 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	speakername PythiosTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0
# 74 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	msgbox PythiosTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_3
# 75 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	closemessage
# 76 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	delay 5
# 81 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	unlockoutfit OUTFIT_TRADITIONAL
# 82 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	msgbox PythiosTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_4
# 83 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	delay 20
# 84 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	closemessage
# 86 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_PYTHIOS_TOWN
	goto PythiosTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_1


PythiosTown_PokemonCenter_Camper::
# 96 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	lock
# 97 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	faceplayer
# 98 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	speakername PythiosTown_PokemonCenter_Camper_Text_0
# 99 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	msgbox PythiosTown_PokemonCenter_Camper_Text_1
# 100 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	closemessage
# 101 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	release
	end


PythiosTown_PokemonCenter_Lass::
# 107 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	lock
# 108 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	faceplayer
# 109 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	speakername PythiosTown_PokemonCenter_Lass_Text_0
# 110 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	msgbox PythiosTown_PokemonCenter_Lass_Text_1
# 111 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	closemessage
# 112 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	release
	end


PythiosTown_PokemonCenter_NinjaBoy::
# 118 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	lock
# 119 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	faceplayer
# 120 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	speakername PythiosTown_PokemonCenter_NinjaBoy_Text_0
# 121 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	msgbox PythiosTown_PokemonCenter_NinjaBoy_Text_1
# 122 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	closemessage
# 123 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	release
	end


PythiosTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_0:
# 7 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	.string "Nurse$"

PythiosTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_1:
# 8 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	.string "Welcome to the Pythios Town Pokémon\n"
	.string "Center! Would you like to heal your\l"
	.string "Pokémon?$"

PythiosTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_2:
# 12 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	.string "We hope to see you again!$"

PythiosTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_3:
# 18 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	.string "Okay, I'll take your Pokémon for a few\n"
	.string "seconds!$"

PythiosTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_4:
# 30 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	.string "Your Pokémon are happy and healthy! We\n"
	.string "hope to see you again!$"

PythiosTown_PokemonCenter_EventScript_Togetic_Text_0:
# 44 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	.string "Togetic$"

PythiosTown_PokemonCenter_EventScript_Togetic_Text_1:
# 46 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	.string "Bee-eh!$"

PythiosTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0:
# 57 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	.string "Uni. Student$"

PythiosTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_1:
# 61 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

PythiosTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_2:
# 66 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	.string "Chaire! I'm a student from the Acrisia\n"
	.string "University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in Pythios Town. If\l"
	.string "you've caught all the Pokémon here,\l"
	.string "please let me know.$"

PythiosTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_3:
# 74 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

PythiosTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_4:
# 82 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	.string "The Traditional Outfit has been added\n"
	.string "to the Outfit Box!$"

PythiosTown_PokemonCenter_Camper_Text_0:
# 98 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	.string "Camper$"

PythiosTown_PokemonCenter_Camper_Text_1:
# 99 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	.string "The western half of Ilios is perfect for\n"
	.string "camping! The further east you go, the\l"
	.string "more development there is.$"

PythiosTown_PokemonCenter_Lass_Text_0:
# 109 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	.string "Lass$"

PythiosTown_PokemonCenter_Lass_Text_1:
# 110 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	.string "Ghost-type Pokémon are a little scary,\n"
	.string "but they're so cute at the same time!$"

PythiosTown_PokemonCenter_NinjaBoy_Text_0:
# 120 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	.string "Little Boy$"

PythiosTown_PokemonCenter_NinjaBoy_Text_1:
# 121 "data/maps/PythiosTown_PokemonCenter/scripts.pory"
	.string "Hey, hey! I wanna battle the Gym here!\p"
	.string "...I need to beat two other Gyms first!?\n"
	.string "How am I supposed to do that?$"

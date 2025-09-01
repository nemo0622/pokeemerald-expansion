PentepetalCity_PokemonCenter_MapScripts::
	.byte 0


PentepetalCity_PokemonCenter_EventScript_PkmnCenterNurse::
# 5 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	lock
# 6 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	faceplayer
# 7 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	speakername PentepetalCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 8 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	msgbox PentepetalCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_1, MSGBOX_YESNO
# 9 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PentepetalCity_PokemonCenter_EventScript_PkmnCenterNurse_2
# 17 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	speakername PentepetalCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 18 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	msgbox PentepetalCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_3
# 19 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	closemessage
# 20 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	ballfollowingmon
# 21 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 22 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	waitmovement 0
# 23 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 24 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 26 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	waitmovement 0
# 27 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	callnative UpdateFollowingPokemon
# 29 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	speakername PentepetalCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 30 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	msgbox PentepetalCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_4
# 31 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	closemessage
# 34 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_PENTEPETAL_CITY
PentepetalCity_PokemonCenter_EventScript_PkmnCenterNurse_1:
# 36 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	release
	end

PentepetalCity_PokemonCenter_EventScript_PkmnCenterNurse_2:
# 11 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	speakername PentepetalCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 12 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	msgbox PentepetalCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_2
# 13 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	closemessage
	goto PentepetalCity_PokemonCenter_EventScript_PkmnCenterNurse_1


PentepetalCity_PokemonCenter_EventScript_BlackBelt::
# 42 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	lock
# 43 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	faceplayer
# 44 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	speakername PentepetalCity_PokemonCenter_EventScript_BlackBelt_Text_0
# 45 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	msgbox PentepetalCity_PokemonCenter_EventScript_BlackBelt_Text_1
# 46 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	closemessage
# 47 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	release
	end


PentepetalCity_PokemonCenter_EventScript_PunkRocker::
# 53 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	lock
# 54 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	faceplayer
# 55 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	speakername PentepetalCity_PokemonCenter_EventScript_PunkRocker_Text_0
# 56 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	msgbox PentepetalCity_PokemonCenter_EventScript_PunkRocker_Text_1
# 57 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	closemessage
# 58 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	release
	end


PentepetalCity_PokemonCenter_EventScript_UniversityStudentRouteCheck::
# 64 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	lock
# 65 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	faceplayer
# 66 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	speakername PentepetalCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0
# 68 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_PENTEPETAL_CITY, PentepetalCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_2
# 75 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	msgbox PentepetalCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_2
# 76 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	closemessage
# 77 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	special CheckRouteCaptureProgress
# 78 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PentepetalCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_5
PentepetalCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_1:
# 96 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	release
	end

PentepetalCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_2:
# 70 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	msgbox PentepetalCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_1
# 71 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	closemessage
	goto PentepetalCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_1

PentepetalCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_5:
# 80 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	delay 20
# 81 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 82 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	speakername PentepetalCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0
# 83 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	msgbox PentepetalCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_3
# 84 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	closemessage
# 85 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	delay 5
# 88 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	givedecoration DECOR_LAPRAS_DOLL
# 89 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	closemessage
# 90 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	delay 5
# 92 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_PENTEPETAL_CITY
	goto PentepetalCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_1


PentepetalCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0:
# 7 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	.string "Nurse$"

PentepetalCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_1:
# 8 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	.string "Welcome to the Péntepetal City Pokémon\n"
	.string "Center! Would you like to heal your\l"
	.string "Pokémon?$"

PentepetalCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_2:
# 12 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	.string "We hope to see you again!$"

PentepetalCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_3:
# 18 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	.string "Okay, I'll take your Pokémon for a few\n"
	.string "seconds!$"

PentepetalCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_4:
# 30 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	.string "Your Pokémon are happy and healthy! We\n"
	.string "hope to see you again!$"

PentepetalCity_PokemonCenter_EventScript_BlackBelt_Text_0:
# 44 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	.string "Black Belt$"

PentepetalCity_PokemonCenter_EventScript_BlackBelt_Text_1:
# 45 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	.string "Heh, check out this Crabrawler Doll I\n"
	.string "bought recently! This will be perfect\l"
	.string "for my training room.$"

PentepetalCity_PokemonCenter_EventScript_PunkRocker_Text_0:
# 55 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	.string "Punk Rocker$"

PentepetalCity_PokemonCenter_EventScript_PunkRocker_Text_1:
# 56 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	.string "These Pokémon Dolls are so rad! I\n"
	.string "should buy some for my house, too.$"

PentepetalCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0:
# 66 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	.string "Uni. Student$"

PentepetalCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_1:
# 70 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

PentepetalCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_2:
# 75 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	.string "Chaire (Hyeh-rei)! I'm a student from\n"
	.string "the Acrisia University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in Péntepetal City. If\l"
	.string "you've caught all the Pokémon here,\l"
	.string "please let me know.$"

PentepetalCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_3:
# 83 "data/maps/PentepetalCity_PokemonCenter/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

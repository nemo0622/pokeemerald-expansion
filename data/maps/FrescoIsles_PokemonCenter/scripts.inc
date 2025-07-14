FrescoIsles_PokemonCenter_MapScripts::
	.byte 0


FrescoIsles_PokemonCenter_EventScript_PkmnCenterNurse::
# 5 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	lock
# 6 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	faceplayer
# 7 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	speakername FrescoIsles_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 8 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	msgbox FrescoIsles_PokemonCenter_EventScript_PkmnCenterNurse_Text_1, MSGBOX_YESNO
# 9 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FrescoIsles_PokemonCenter_EventScript_PkmnCenterNurse_2
# 17 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	speakername FrescoIsles_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 18 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	msgbox FrescoIsles_PokemonCenter_EventScript_PkmnCenterNurse_Text_3
# 19 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	closemessage
# 20 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	ballfollowingmon
# 21 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 22 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	waitmovement 0
# 23 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 24 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 26 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	waitmovement 0
# 27 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	callnative UpdateFollowingPokemon
# 29 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	speakername FrescoIsles_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 30 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	msgbox FrescoIsles_PokemonCenter_EventScript_PkmnCenterNurse_Text_4
# 31 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	closemessage
# 34 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_FRESCO_ISLAND
FrescoIsles_PokemonCenter_EventScript_PkmnCenterNurse_1:
# 36 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	release
	end

FrescoIsles_PokemonCenter_EventScript_PkmnCenterNurse_2:
# 11 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	speakername FrescoIsles_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 12 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	msgbox FrescoIsles_PokemonCenter_EventScript_PkmnCenterNurse_Text_2
# 13 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	closemessage
	goto FrescoIsles_PokemonCenter_EventScript_PkmnCenterNurse_1


FrescoIsles_PokemonCenter_EventScript_UniversityStudentRouteCheck::
# 42 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	lock
# 43 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	faceplayer
# 44 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	speakername FrescoIsles_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0
# 46 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_FRESCO_ISLES, FrescoIsles_PokemonCenter_EventScript_UniversityStudentRouteCheck_2
# 53 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	msgbox FrescoIsles_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_2
# 54 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	closemessage
# 55 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	special CheckRouteCaptureProgress
# 56 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FrescoIsles_PokemonCenter_EventScript_UniversityStudentRouteCheck_5
FrescoIsles_PokemonCenter_EventScript_UniversityStudentRouteCheck_1:
# 73 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	release
	end

FrescoIsles_PokemonCenter_EventScript_UniversityStudentRouteCheck_2:
# 48 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	msgbox FrescoIsles_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_1
# 49 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	closemessage
	goto FrescoIsles_PokemonCenter_EventScript_UniversityStudentRouteCheck_1

FrescoIsles_PokemonCenter_EventScript_UniversityStudentRouteCheck_5:
# 58 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	delay 20
# 59 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 60 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	speakername FrescoIsles_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0
# 61 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	msgbox FrescoIsles_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_3
# 62 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	closemessage
# 63 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	delay 5
# 66 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	giveitem ITEM_SAFETY_GOGGLES
# 67 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	closemessage
# 69 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_FRESCO_ISLES
	goto FrescoIsles_PokemonCenter_EventScript_UniversityStudentRouteCheck_1


FrescoIsles_PokemonCenter_EventScript_Sailor::
# 79 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	lock
# 80 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	faceplayer
# 81 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	speakername FrescoIsles_PokemonCenter_EventScript_Sailor_Text_0
# 82 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	msgbox FrescoIsles_PokemonCenter_EventScript_Sailor_Text_1
# 83 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	closemessage
# 84 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	release
	end


FrescoIsles_PokemonCenter_EventScript_LittleGirl::
# 90 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	lock
# 91 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	faceplayer
# 92 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	speakername FrescoIsles_PokemonCenter_EventScript_LittleGirl_Text_0
# 93 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	msgbox FrescoIsles_PokemonCenter_EventScript_LittleGirl_Text_1
# 94 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	closemessage
# 95 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	release
	end


FrescoIsles_PokemonCenter_EventScript_PkmnCenterNurse_Text_0:
# 7 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	.string "Nurse$"

FrescoIsles_PokemonCenter_EventScript_PkmnCenterNurse_Text_1:
# 8 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	.string "Welcome to the Fresco Isles Pokémon\n"
	.string "Center! Would you like to heal your\l"
	.string "Pokémon?$"

FrescoIsles_PokemonCenter_EventScript_PkmnCenterNurse_Text_2:
# 12 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	.string "We hope to see you again!$"

FrescoIsles_PokemonCenter_EventScript_PkmnCenterNurse_Text_3:
# 18 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	.string "Okay, I'll take your Pokémon for a few\n"
	.string "seconds!$"

FrescoIsles_PokemonCenter_EventScript_PkmnCenterNurse_Text_4:
# 30 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	.string "Your Pokémon are happy and healthy! We\n"
	.string "hope to see you again!$"

FrescoIsles_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0:
# 44 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	.string "Uni. Student$"

FrescoIsles_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_1:
# 48 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

FrescoIsles_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_2:
# 53 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	.string "Chaire! I'm a student from the Acrisia\n"
	.string "University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found on the Fresco Isles. If\l"
	.string "you've caught all the Pokémon here,\l"
	.string "please let me know.$"

FrescoIsles_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_3:
# 61 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

FrescoIsles_PokemonCenter_EventScript_Sailor_Text_0:
# 81 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	.string "Sailor$"

FrescoIsles_PokemonCenter_EventScript_Sailor_Text_1:
# 82 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	.string "I've been running into University\n"
	.string "Students all over Ilios. Seems like\l"
	.string "everyone is working on gathering\l"
	.string "Pokédex data.$"

FrescoIsles_PokemonCenter_EventScript_LittleGirl_Text_0:
# 92 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	.string "Little Girl$"

FrescoIsles_PokemonCenter_EventScript_LittleGirl_Text_1:
# 93 "data/maps/FrescoIsles_PokemonCenter/scripts.pory"
	.string "When I grow up, I'm gonna sail all around\n"
	.string "the world! I wonder what's at Port\l"
	.string "Pello... Oh, but Sofos City is where all\l"
	.string "the celebrities live!$"

PalatiCity_PokemonCenter_MapScripts::
	.byte 0


PalatiCity_PokemonCenter_EventScript_PkmnCenterNurse::
# 5 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	lock
# 6 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	faceplayer
# 7 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	speakername PalatiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 8 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	msgbox PalatiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_1, MSGBOX_YESNO
# 9 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PalatiCity_PokemonCenter_EventScript_PkmnCenterNurse_2
# 17 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	speakername PalatiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 18 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	msgbox PalatiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_3
# 19 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	closemessage
# 20 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	ballfollowingmon
# 21 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 22 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	waitmovement 0
# 23 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 24 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 26 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	waitmovement 0
# 27 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	callnative UpdateFollowingPokemon
# 29 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	speakername PalatiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 30 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	msgbox PalatiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_4
# 31 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	closemessage
# 34 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_PALATI_CITY
PalatiCity_PokemonCenter_EventScript_PkmnCenterNurse_1:
# 36 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	release
	end

PalatiCity_PokemonCenter_EventScript_PkmnCenterNurse_2:
# 11 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	speakername PalatiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 12 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	msgbox PalatiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_2
# 13 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	closemessage
	goto PalatiCity_PokemonCenter_EventScript_PkmnCenterNurse_1


PalatiCity_PokemonCenter_EventScript_UniversityStudentRouteCheck::
# 42 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	lock
# 43 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	faceplayer
# 44 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	speakername PalatiCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0
# 46 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_PALATI_CITY, PalatiCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_2
# 53 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	msgbox PalatiCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_2
# 54 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	closemessage
# 55 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	special CheckRouteCaptureProgress
# 56 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PalatiCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_5
PalatiCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_1:
# 73 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	release
	end

PalatiCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_2:
# 48 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	msgbox PalatiCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_1
# 49 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	closemessage
	goto PalatiCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_1

PalatiCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_5:
# 58 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	delay 20
# 59 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 60 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	speakername PalatiCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0
# 61 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	msgbox PalatiCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_3
# 62 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	closemessage
# 63 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	delay 5
# 66 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	giveitem ITEM_TM57
# 67 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	closemessage
# 69 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_PALATI_CITY
	goto PalatiCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_1


PalatiCity_PokemonCenter_EventScript_LittleBoy::
# 79 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	lock
# 80 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	faceplayer
# 81 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	speakername PalatiCity_PokemonCenter_EventScript_LittleBoy_Text_0
# 82 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	msgbox PalatiCity_PokemonCenter_EventScript_LittleBoy_Text_1
# 83 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	closemessage
# 84 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	release
	end


PalatiCity_PokemonCenter_EventScript_PunkRocker::
# 90 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	lock
# 91 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	faceplayer
# 92 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	speakername PalatiCity_PokemonCenter_EventScript_PunkRocker_Text_0
# 93 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	msgbox PalatiCity_PokemonCenter_EventScript_PunkRocker_Text_1
# 94 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	closemessage
# 95 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	release
	end


PalatiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0:
# 7 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	.string "Nurse$"

PalatiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_1:
# 8 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	.string "Welcome to the Palati City Pokémon\n"
	.string "Center! Would you like to heal your\l"
	.string "Pokémon?$"

PalatiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_2:
# 12 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	.string "We hope to see you again!$"

PalatiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_3:
# 18 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	.string "Okay, I'll take your Pokémon for a few\n"
	.string "seconds!$"

PalatiCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_4:
# 30 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	.string "Your Pokémon are happy and healthy! We\n"
	.string "hope to see you again!$"

PalatiCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0:
# 44 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	.string "Uni. Student$"

PalatiCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_1:
# 48 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

PalatiCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_2:
# 53 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	.string "Chaire! I'm a student from the Acrisia\n"
	.string "University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all\n"
	.string "Pokémon{COLOR DARK_GRAY} found in Palati City. If you've\l"
	.string "caught all the Pokémon here, please let\l"
	.string "me know.$"

PalatiCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_3:
# 61 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

PalatiCity_PokemonCenter_EventScript_LittleBoy_Text_0:
# 81 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	.string "Little Boy$"

PalatiCity_PokemonCenter_EventScript_LittleBoy_Text_1:
# 82 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	.string "I was playing with my Pokémon, but I\n"
	.string "scraped my knee. The Pokémon Center\l"
	.string "gave me a cool bandage though!$"

PalatiCity_PokemonCenter_EventScript_PunkRocker_Text_0:
# 92 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	.string "Punk Rocker$"

PalatiCity_PokemonCenter_EventScript_PunkRocker_Text_1:
# 93 "data/maps/PalatiCity_PokemonCenter/scripts.pory"
	.string "I think reading and learning about the\n"
	.string "world is pretty punk rock, myself.\p"
	.string "What? Hey, it is!$"

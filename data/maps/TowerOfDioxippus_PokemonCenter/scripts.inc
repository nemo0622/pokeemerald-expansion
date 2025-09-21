TowerOfDioxippus_PokemonCenter_MapScripts::
	.byte 0


TowerOfDioxippus_PokemonCenter_EventScript_PkmnCenterNurse::
# 5 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	lock
# 6 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	faceplayer
# 7 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	speakername TowerOfDioxippus_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 8 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	msgbox TowerOfDioxippus_PokemonCenter_EventScript_PkmnCenterNurse_Text_1, MSGBOX_YESNO
# 9 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TowerOfDioxippus_PokemonCenter_EventScript_PkmnCenterNurse_2
# 17 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	speakername TowerOfDioxippus_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 18 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	msgbox TowerOfDioxippus_PokemonCenter_EventScript_PkmnCenterNurse_Text_3
# 19 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	closemessage
# 20 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	ballfollowingmon
# 21 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 22 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	waitmovement 0
# 23 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 24 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 26 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	waitmovement 0
# 27 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	callnative UpdateFollowingPokemon
# 29 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	speakername TowerOfDioxippus_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 30 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	msgbox TowerOfDioxippus_PokemonCenter_EventScript_PkmnCenterNurse_Text_4
# 31 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	closemessage
# 34 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_TOWER_OF_DIOXIPPUS
TowerOfDioxippus_PokemonCenter_EventScript_PkmnCenterNurse_1:
# 36 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	release
	end

TowerOfDioxippus_PokemonCenter_EventScript_PkmnCenterNurse_2:
# 11 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	speakername TowerOfDioxippus_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 12 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	msgbox TowerOfDioxippus_PokemonCenter_EventScript_PkmnCenterNurse_Text_2
# 13 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	closemessage
	goto TowerOfDioxippus_PokemonCenter_EventScript_PkmnCenterNurse_1


TowerOfDioxippus_PokemonCenter_EventScript_UniversityStudentRouteCheck::
# 42 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	lock
# 43 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	faceplayer
# 44 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	speakername TowerOfDioxippus_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0
# 46 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_TOWER_OF_DIOXIPPUS, TowerOfDioxippus_PokemonCenter_EventScript_UniversityStudentRouteCheck_2
# 53 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	msgbox TowerOfDioxippus_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_2
# 54 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	closemessage
# 55 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	special CheckRouteCaptureProgress
# 56 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TowerOfDioxippus_PokemonCenter_EventScript_UniversityStudentRouteCheck_5
TowerOfDioxippus_PokemonCenter_EventScript_UniversityStudentRouteCheck_1:
# 74 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	release
	end

TowerOfDioxippus_PokemonCenter_EventScript_UniversityStudentRouteCheck_2:
# 48 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	msgbox TowerOfDioxippus_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_1
# 49 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	closemessage
	goto TowerOfDioxippus_PokemonCenter_EventScript_UniversityStudentRouteCheck_1

TowerOfDioxippus_PokemonCenter_EventScript_UniversityStudentRouteCheck_5:
# 58 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	delay 20
# 59 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 60 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	speakername TowerOfDioxippus_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0
# 61 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	msgbox TowerOfDioxippus_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_3
# 62 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	closemessage
# 63 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	delay 5
# 66 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	givedecoration DECOR_GYARADOS_DOLL
# 67 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	closemessage
# 68 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	delay 5
# 70 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_TOWER_OF_DIOXIPPUS
	goto TowerOfDioxippus_PokemonCenter_EventScript_UniversityStudentRouteCheck_1


TowerOfDioxippus_PokemonCenter_EventScript_Lass::
# 80 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	lock
# 81 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	faceplayer
# 82 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	speakername TowerOfDioxippus_PokemonCenter_EventScript_Lass_Text_0
# 83 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	msgbox TowerOfDioxippus_PokemonCenter_EventScript_Lass_Text_1
# 84 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	closemessage
# 85 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	release
	end


TowerOfDioxippus_PokemonCenter_EventScript_PkmnCenterNurse_Text_0:
# 7 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	.string "Nurse$"

TowerOfDioxippus_PokemonCenter_EventScript_PkmnCenterNurse_Text_1:
# 8 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	.string "Welcome to the Tower of Dioxippus\n"
	.string "Pokémon Center! Would you like to heal\l"
	.string "your Pokémon?$"

TowerOfDioxippus_PokemonCenter_EventScript_PkmnCenterNurse_Text_2:
# 12 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	.string "We hope to see you again!$"

TowerOfDioxippus_PokemonCenter_EventScript_PkmnCenterNurse_Text_3:
# 18 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	.string "Okay, I'll take your Pokémon for a few\n"
	.string "seconds!$"

TowerOfDioxippus_PokemonCenter_EventScript_PkmnCenterNurse_Text_4:
# 30 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	.string "Your Pokémon are happy and healthy! We\n"
	.string "hope to see you again!$"

TowerOfDioxippus_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0:
# 44 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	.string "Uni. Student$"

TowerOfDioxippus_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_1:
# 48 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

TowerOfDioxippus_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_2:
# 53 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	.string "Chaire (Hyeh-rei)! I'm a student from\n"
	.string "the Acrisia University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found around the Tower of\l"
	.string "Dioxippus. If you've caught all the\l"
	.string "Pokémon here, please let me know.$"

TowerOfDioxippus_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_3:
# 61 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

TowerOfDioxippus_PokemonCenter_EventScript_Lass_Text_0:
# 82 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	.string "Lass$"

TowerOfDioxippus_PokemonCenter_EventScript_Lass_Text_1:
# 83 "data/maps/TowerOfDioxippus_PokemonCenter/scripts.pory"
	.string "I'm taking my Mimikyu doll all over the\n"
	.string "Ilios Region! I can't wait to catch a\l"
	.string "real Mimikyu someday.$"

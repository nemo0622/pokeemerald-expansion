KiposTown_PokemonCenter_MapScripts::
	.byte 0


KiposTown_PokemonCenter_EventScript_PkmnCenterNurse::
# 5 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	lock
# 6 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	faceplayer
# 7 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	speakername KiposTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 8 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	msgbox KiposTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_1, MSGBOX_YESNO
# 9 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KiposTown_PokemonCenter_EventScript_PkmnCenterNurse_2
# 17 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	speakername KiposTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 18 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	msgbox KiposTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_3
# 19 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	closemessage
# 20 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	ballfollowingmon
# 21 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 22 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 23 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 24 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 26 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 27 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	callnative UpdateFollowingPokemon
# 29 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	speakername KiposTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 30 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	msgbox KiposTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_4
# 31 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	closemessage
# 34 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_KIPOS_TOWN
KiposTown_PokemonCenter_EventScript_PkmnCenterNurse_1:
# 36 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	release
	end

KiposTown_PokemonCenter_EventScript_PkmnCenterNurse_2:
# 11 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	speakername KiposTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 12 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	msgbox KiposTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_2
# 13 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	closemessage
	goto KiposTown_PokemonCenter_EventScript_PkmnCenterNurse_1


KiposTown_PokemonCenter_EventScript_Hiker::
# 42 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	lock
# 43 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	faceplayer
# 44 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	speakername KiposTown_PokemonCenter_EventScript_Hiker_Text_0
# 45 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	msgbox KiposTown_PokemonCenter_EventScript_Hiker_Text_1
# 46 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	closemessage
# 47 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	release
	end


KiposTown_PokemonCenter_EventScript_Tyrunt::
# 52 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	lock
# 53 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	faceplayer
# 54 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	speakername KiposTown_PokemonCenter_EventScript_Tyrunt_Text_0
# 55 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	playmoncry SPECIES_TYRUNT, CRY_MODE_NORMAL
# 56 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	msgbox KiposTown_PokemonCenter_EventScript_Tyrunt_Text_1
# 57 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	waitmoncry
# 58 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	closemessage
# 59 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	release
	end


KiposTown_PokemonCenter_EventScript_PerformerF::
# 65 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	lock
# 66 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	faceplayer
# 67 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	speakername KiposTown_PokemonCenter_EventScript_PerformerF_Text_0
# 68 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	msgbox KiposTown_PokemonCenter_EventScript_PerformerF_Text_1
# 69 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	closemessage
# 70 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	release
	end


KiposTown_PokemonCenter_EventScript_UniversityStudentRouteCheck::
# 76 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	lock
# 77 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	faceplayer
# 78 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	speakername KiposTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0
# 80 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_KIPOS_TOWN, KiposTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_2
# 87 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	msgbox KiposTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_2
# 88 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	closemessage
# 89 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	special CheckRouteCaptureProgress
# 90 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq KiposTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_5
KiposTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_1:
# 107 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	release
	end

KiposTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_2:
# 82 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	msgbox KiposTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_1
# 83 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	closemessage
	goto KiposTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_1

KiposTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_5:
# 92 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	delay 20
# 93 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 94 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	speakername KiposTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0
# 95 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	msgbox KiposTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_3
# 96 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	closemessage
# 97 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	delay 5
# 100 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	giveitem ITEM_LEFTOVERS
# 101 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	closemessage
# 103 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_KIPOS_TOWN
	goto KiposTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_1


KiposTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_0:
# 7 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	.string "Nurse$"

KiposTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_1:
# 8 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	.string "Welcome to the Kipos Town Pokémon\n"
	.string "Center! Would you like to heal your\l"
	.string "Pokémon?$"

KiposTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_2:
# 12 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	.string "We hope to see you again!$"

KiposTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_3:
# 18 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	.string "Okay, I'll take your Pokémon for a few\n"
	.string "seconds!$"

KiposTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_4:
# 30 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	.string "Your Pokémon are happy and healthy! We\n"
	.string "hope to see you again!$"

KiposTown_PokemonCenter_EventScript_Hiker_Text_0:
# 44 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	.string "Hiker$"

KiposTown_PokemonCenter_EventScript_Hiker_Text_1:
# 45 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	.string "I was on the paleontology team that\n"
	.string "helped excavate the Tyrantrum bones\l"
	.string "we have in town. It took a dozen people\l"
	.string "to get the skull out alone!\p"
	.string "Now, just a few years later, I have a pet\n"
	.string "Tyrunt which lives with me. The world\l"
	.string "sure changes fast.$"

KiposTown_PokemonCenter_EventScript_Tyrunt_Text_0:
# 54 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	.string "Tyrunt$"

KiposTown_PokemonCenter_EventScript_Tyrunt_Text_1:
# 56 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	.string "Rrr... RAH!$"

KiposTown_PokemonCenter_EventScript_PerformerF_Text_0:
# 67 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	.string "Performer$"

KiposTown_PokemonCenter_EventScript_PerformerF_Text_1:
# 68 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	.string "The Conservation Center, the Tyrantrum\n"
	.string "fossils... Kipos Town really is the\l"
	.string "center of ecology in Ilios. Maybe I'll\l"
	.string "write a song about it!$"

KiposTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0:
# 78 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	.string "Uni. Student$"

KiposTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_1:
# 82 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

KiposTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_2:
# 87 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	.string "Chaire! I'm a student from the Acrisia\n"
	.string "University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in Kipos Town. If you've\l"
	.string "caught all the Pokémon here, please let\l"
	.string "me know.$"

KiposTown_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_3:
# 95 "data/maps/KiposTown_PokemonCenter/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

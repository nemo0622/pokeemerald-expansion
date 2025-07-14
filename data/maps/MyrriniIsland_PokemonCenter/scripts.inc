MyrriniIsland_PokemonCenter_MapScripts::
	.byte 0


MyrriniIsland_PokemonCenter_EventScript_PkmnCenterNurse::
# 5 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	lock
# 6 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	faceplayer
# 7 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	speakername MyrriniIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 8 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	msgbox MyrriniIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_1, MSGBOX_YESNO
# 9 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MyrriniIsland_PokemonCenter_EventScript_PkmnCenterNurse_2
# 17 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	speakername MyrriniIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 18 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	msgbox MyrriniIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_3
# 19 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	closemessage
# 20 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	ballfollowingmon
# 21 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 22 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	waitmovement 0
# 23 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 24 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 26 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	waitmovement 0
# 27 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	callnative UpdateFollowingPokemon
# 29 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	speakername MyrriniIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 30 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	msgbox MyrriniIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_4
# 31 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	closemessage
# 34 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_MYRRINI_ISLAND
MyrriniIsland_PokemonCenter_EventScript_PkmnCenterNurse_1:
# 36 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	release
	end

MyrriniIsland_PokemonCenter_EventScript_PkmnCenterNurse_2:
# 11 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	speakername MyrriniIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 12 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	msgbox MyrriniIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_2
# 13 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	closemessage
	goto MyrriniIsland_PokemonCenter_EventScript_PkmnCenterNurse_1


MyrriniIsland_PokemonCenter_EventScript_FatMan::
# 42 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	lock
# 43 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	faceplayer
# 44 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	speakername MyrriniIsland_PokemonCenter_EventScript_FatMan_Text_0
# 45 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	msgbox MyrriniIsland_PokemonCenter_EventScript_FatMan_Text_1
# 46 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	closemessage
# 47 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	release
	end


MyrriniIsland_PokemonCenter_EventScript_Woman::
# 53 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	lock
# 54 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	faceplayer
# 55 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	speakername MyrriniIsland_PokemonCenter_EventScript_Woman_Text_0
# 56 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	msgbox MyrriniIsland_PokemonCenter_EventScript_Woman_Text_1
# 57 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	closemessage
# 58 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	release
	end


MyrriniIsland_PokemonCenter_EventScript_UniversityStudentRouteCheck::
# 64 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	lock
# 65 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	faceplayer
# 66 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	speakername MyrriniIsland_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0
# 68 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_MYRRINI_ISLAND, MyrriniIsland_PokemonCenter_EventScript_UniversityStudentRouteCheck_2
# 75 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	msgbox MyrriniIsland_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_2
# 76 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	closemessage
# 77 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	special CheckRouteCaptureProgress
# 78 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MyrriniIsland_PokemonCenter_EventScript_UniversityStudentRouteCheck_5
MyrriniIsland_PokemonCenter_EventScript_UniversityStudentRouteCheck_1:
# 95 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	release
	end

MyrriniIsland_PokemonCenter_EventScript_UniversityStudentRouteCheck_2:
# 70 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	msgbox MyrriniIsland_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_1
# 71 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	closemessage
	goto MyrriniIsland_PokemonCenter_EventScript_UniversityStudentRouteCheck_1

MyrriniIsland_PokemonCenter_EventScript_UniversityStudentRouteCheck_5:
# 80 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	delay 20
# 81 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 82 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	speakername MyrriniIsland_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0
# 83 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	msgbox MyrriniIsland_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_3
# 84 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	closemessage
# 85 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	delay 5
# 88 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	giveitem ITEM_TM_POISON_JAB
# 89 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	closemessage
# 91 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_MYRRINI_ISLAND
	goto MyrriniIsland_PokemonCenter_EventScript_UniversityStudentRouteCheck_1


MyrriniIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_0:
# 7 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	.string "Nurse$"

MyrriniIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_1:
# 8 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	.string "Welcome to the Myrrini Island Pokémon\n"
	.string "Center! Would you like to heal your\l"
	.string "Pokémon?$"

MyrriniIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_2:
# 12 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	.string "We hope to see you again!$"

MyrriniIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_3:
# 18 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	.string "Okay, I'll take your Pokémon for a few\n"
	.string "seconds!$"

MyrriniIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_4:
# 30 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	.string "Your Pokémon are happy and healthy! We\n"
	.string "hope to see you again!$"

MyrriniIsland_PokemonCenter_EventScript_FatMan_Text_0:
# 44 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	.string "Fat Man$"

MyrriniIsland_PokemonCenter_EventScript_FatMan_Text_1:
# 45 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	.string "Oughh... I think I had a little too much\n"
	.string "fun last night... Myrrini parties are the\l"
	.string "best parties, but woah, sometimes you\l"
	.string "hit your limit.$"

MyrriniIsland_PokemonCenter_EventScript_Woman_Text_0:
# 55 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	.string "Woman$"

MyrriniIsland_PokemonCenter_EventScript_Woman_Text_1:
# 56 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	.string "Pokémon Centers aren't just places to\n"
	.string "heal your Pokémon! They also have big\l"
	.string "collections of books, the Inn service,\l"
	.string "and even a helpful Region Map!$"

MyrriniIsland_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0:
# 66 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	.string "Uni. Student$"

MyrriniIsland_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_1:
# 70 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

MyrriniIsland_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_2:
# 75 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	.string "Chaire! I'm a student from the Acrisia\n"
	.string "University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found on Myrrini Island. If\l"
	.string "you've caught all the Pokémon here,\l"
	.string "please let me know.$"

MyrriniIsland_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_3:
# 83 "data/maps/MyrriniIsland_PokemonCenter/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

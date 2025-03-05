JusmailTown_PokemonCenter_MapScripts::
	.byte 0


JusmailTown_PokemonCenter_EventScript_PkmnCenterNurse::
# 5 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	lock
# 6 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	faceplayer
# 7 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	speakername JusmailTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 8 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	msgbox JusmailTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_1, MSGBOX_YESNO
# 9 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JusmailTown_PokemonCenter_EventScript_PkmnCenterNurse_2
# 17 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	speakername JusmailTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 18 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	msgbox JusmailTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_3
# 19 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	closemessage
# 20 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	ballfollowingmon
# 21 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 22 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 23 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 24 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 26 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 27 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	callnative UpdateFollowingPokemon
# 29 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	speakername JusmailTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 30 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	msgbox JusmailTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_4
# 31 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	closemessage
# 34 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_JUSMAIL_TOWN
JusmailTown_PokemonCenter_EventScript_PkmnCenterNurse_1:
# 36 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	release
	end

JusmailTown_PokemonCenter_EventScript_PkmnCenterNurse_2:
# 11 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	speakername JusmailTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 12 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	msgbox JusmailTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_2
# 13 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	closemessage
	goto JusmailTown_PokemonCenter_EventScript_PkmnCenterNurse_1


JusmailTown_PokemonCenter_EventScript_Togetic::
# 42 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	lock
# 43 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	faceplayer
# 44 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	speakername JusmailTown_PokemonCenter_EventScript_Togetic_Text_0
# 45 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	playmoncry SPECIES_TOGETIC, CRY_MODE_NORMAL
# 46 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	msgbox JusmailTown_PokemonCenter_EventScript_Togetic_Text_1
# 47 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	waitmoncry
# 48 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	closemessage
# 49 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	release
	end


JusmailTown_PokemonCenter_EventScript_Farmer::
# 55 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	lock
# 56 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	faceplayer
# 57 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	speakername JusmailTown_PokemonCenter_EventScript_Farmer_Text_0
# 58 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	msgbox JusmailTown_PokemonCenter_EventScript_Farmer_Text_1
# 59 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	closemessage
# 60 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	release
	end


JusmailTown_PokemonCenter_EventScript_Woman::
# 66 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	lock
# 67 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	faceplayer
# 68 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	speakername JusmailTown_PokemonCenter_EventScript_Woman_Text_0
# 69 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	msgbox JusmailTown_PokemonCenter_EventScript_Woman_Text_1
# 70 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	closemessage
# 71 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	release
	end


JusmailTown_PokemonCenter_EventScript_FatMan::
# 77 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	lock
# 78 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	faceplayer
# 79 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	speakername JusmailTown_PokemonCenter_EventScript_FatMan_Text_0
# 80 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	msgbox JusmailTown_PokemonCenter_EventScript_FatMan_Text_1
# 81 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	closemessage
# 82 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	release
	end


JusmailTown_PokemonCenter_EventScript_Mudbray::
# 88 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	lock
# 89 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	faceplayer
# 90 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	speakername JusmailTown_PokemonCenter_EventScript_Mudbray_Text_0
# 91 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	playmoncry SPECIES_MUDBRAY, CRY_MODE_NORMAL
# 92 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	msgbox JusmailTown_PokemonCenter_EventScript_Mudbray_Text_1
# 93 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	waitmoncry
# 94 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	closemessage
# 95 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	release
	end


JusmailTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_0:
# 7 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	.string "Nurse$"

JusmailTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_1:
# 8 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	.string "Welcome to the Jusmail Town Pokémon\n"
	.string "Center! Would you like to heal your\l"
	.string "Pokémon?$"

JusmailTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_2:
# 12 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	.string "We hope to see you again!$"

JusmailTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_3:
# 18 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	.string "Okay, I'll take your Pokémon for a few\n"
	.string "seconds!$"

JusmailTown_PokemonCenter_EventScript_PkmnCenterNurse_Text_4:
# 30 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	.string "Your Pokémon are happy and healthy! We\n"
	.string "hope to see you again!$"

JusmailTown_PokemonCenter_EventScript_Togetic_Text_0:
# 44 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	.string "Togetic$"

JusmailTown_PokemonCenter_EventScript_Togetic_Text_1:
# 46 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	.string "Bee-eh!$"

JusmailTown_PokemonCenter_EventScript_Farmer_Text_0:
# 57 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	.string "Farmer$"

JusmailTown_PokemonCenter_EventScript_Farmer_Text_1:
# 58 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	.string "After a hard day of work, I come here\n"
	.string "with my Pokémon to get some rest. I talk\l"
	.string "with the townsfolk while they heal up.$"

JusmailTown_PokemonCenter_EventScript_Woman_Text_0:
# 68 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	.string "Woman$"

JusmailTown_PokemonCenter_EventScript_Woman_Text_1:
# 69 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	.string "These Pokémon Centers are\n"
	.string "standardized across the Ilios Region!\l"
	.string "Make sure to talk to everyone, some\l"
	.string "people might be able to help you out.$"

JusmailTown_PokemonCenter_EventScript_FatMan_Text_0:
# 79 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	.string "Man$"

JusmailTown_PokemonCenter_EventScript_FatMan_Text_1:
# 80 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	.string "My Mudbray has a neat ability! Every\n"
	.string "time it gets hit, their Defense stat\l"
	.string "raises. Pokémon Abilities sure seem\l"
	.string "important!$"

JusmailTown_PokemonCenter_EventScript_Mudbray_Text_0:
# 90 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	.string "Mudbray$"

JusmailTown_PokemonCenter_EventScript_Mudbray_Text_1:
# 92 "data/maps/JusmailTown_PokemonCenter/scripts.pory"
	.string "Greeeeh!$"

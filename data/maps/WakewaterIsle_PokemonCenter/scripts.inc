WakewaterIsle_PokemonCenter_MapScripts::
	.byte 0


WakewaterIsle_PokemonCenter_EventScript_PkmnCenterNurse::
# 5 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	lock
# 6 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	faceplayer
# 7 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	speakername WakewaterIsle_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 8 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	msgbox WakewaterIsle_PokemonCenter_EventScript_PkmnCenterNurse_Text_1, MSGBOX_YESNO
# 9 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WakewaterIsle_PokemonCenter_EventScript_PkmnCenterNurse_2
# 17 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	speakername WakewaterIsle_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 18 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	msgbox WakewaterIsle_PokemonCenter_EventScript_PkmnCenterNurse_Text_3
# 19 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	closemessage
# 20 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	ballfollowingmon
# 21 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 22 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	waitmovement 0
# 23 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 24 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 26 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	waitmovement 0
# 27 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	callnative UpdateFollowingPokemon
# 29 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	speakername WakewaterIsle_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 30 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	msgbox WakewaterIsle_PokemonCenter_EventScript_PkmnCenterNurse_Text_4
# 31 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	closemessage
# 34 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_WAKEWATER_ISLE
WakewaterIsle_PokemonCenter_EventScript_PkmnCenterNurse_1:
# 36 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	release
	end

WakewaterIsle_PokemonCenter_EventScript_PkmnCenterNurse_2:
# 11 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	speakername WakewaterIsle_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 12 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	msgbox WakewaterIsle_PokemonCenter_EventScript_PkmnCenterNurse_Text_2
# 13 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	closemessage
	goto WakewaterIsle_PokemonCenter_EventScript_PkmnCenterNurse_1


WakewaterIsle_PokemonCenter_EventScript_Hiker::
# 42 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	lock
# 43 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	faceplayer
# 44 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	speakername WakewaterIsle_PokemonCenter_EventScript_Hiker_Text_0
# 45 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	msgbox WakewaterIsle_PokemonCenter_EventScript_Hiker_Text_1
# 46 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	closemessage
# 47 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	release
	end


WakewaterIsle_PokemonCenter_EventScript_Youngster::
# 53 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	lock
# 54 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	faceplayer
# 55 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	speakername WakewaterIsle_PokemonCenter_EventScript_Youngster_Text_0
# 56 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	msgbox WakewaterIsle_PokemonCenter_EventScript_Youngster_Text_1
# 57 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	closemessage
# 58 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	release
	end


WakewaterIsle_PokemonCenter_EventScript_PkmnCenterNurse_Text_0:
# 7 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	.string "Nurse$"

WakewaterIsle_PokemonCenter_EventScript_PkmnCenterNurse_Text_1:
# 8 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	.string "Welcome to the Wakewater Isle Pokémon\n"
	.string "Center! Would you like to heal your\l"
	.string "Pokémon?$"

WakewaterIsle_PokemonCenter_EventScript_PkmnCenterNurse_Text_2:
# 12 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	.string "We hope to see you again!$"

WakewaterIsle_PokemonCenter_EventScript_PkmnCenterNurse_Text_3:
# 18 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	.string "Okay, I'll take your Pokémon for a few\n"
	.string "seconds!$"

WakewaterIsle_PokemonCenter_EventScript_PkmnCenterNurse_Text_4:
# 30 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	.string "Your Pokémon are happy and healthy! We\n"
	.string "hope to see you again!$"

WakewaterIsle_PokemonCenter_EventScript_Hiker_Text_0:
# 44 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	.string "Hiker$"

WakewaterIsle_PokemonCenter_EventScript_Hiker_Text_1:
# 45 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	.string "The journey here is hard for all but the\n"
	.string "best sailors. Only truly motivated\l"
	.string "Trainers can visit!$"

WakewaterIsle_PokemonCenter_EventScript_Youngster_Text_0:
# 55 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	.string "Youngster$"

WakewaterIsle_PokemonCenter_EventScript_Youngster_Text_1:
# 56 "data/maps/WakewaterIsle_PokemonCenter/scripts.pory"
	.string "I finally found a ship headed to\n"
	.string "Wakewater Isle, but now I'm too scared\l"
	.string "to compete against other Trainers...$"

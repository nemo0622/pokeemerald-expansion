MarmaroIsland_PokemonCenter_MapScripts::
	.byte 0


MarmaroIsland_PokemonCenter_EventScript_PkmnCenterNurse::
# 5 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	lock
# 6 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	faceplayer
# 7 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	speakername MarmaroIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 8 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	msgbox MarmaroIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_1, MSGBOX_YESNO
# 9 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MarmaroIsland_PokemonCenter_EventScript_PkmnCenterNurse_2
# 17 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	speakername MarmaroIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 18 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	msgbox MarmaroIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_3
# 19 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	closemessage
# 20 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	ballfollowingmon
# 21 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 22 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	waitmovement 0
# 23 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 24 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 26 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	waitmovement 0
# 27 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	callnative UpdateFollowingPokemon
# 29 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	speakername MarmaroIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 30 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	msgbox MarmaroIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_4
# 31 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	closemessage
# 34 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_MARMARO_ISLAND
MarmaroIsland_PokemonCenter_EventScript_PkmnCenterNurse_1:
# 36 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	release
	end

MarmaroIsland_PokemonCenter_EventScript_PkmnCenterNurse_2:
# 11 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	speakername MarmaroIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 12 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	msgbox MarmaroIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_2
# 13 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	closemessage
	goto MarmaroIsland_PokemonCenter_EventScript_PkmnCenterNurse_1


MarmaroIsland_PokemonCenter_EventScript_GameboyKid::
# 42 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	lock
# 43 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	faceplayer
# 44 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	speakername MarmaroIsland_PokemonCenter_EventScript_GameboyKid_Text_0
# 45 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	msgbox MarmaroIsland_PokemonCenter_EventScript_GameboyKid_Text_1
# 46 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	closemessage
# 47 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 48 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	waitmovement 0
# 49 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	release
	end


MarmaroIsland_PokemonCenter_EventScript_Farmer::
# 55 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	lock
# 56 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	faceplayer
# 57 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	speakername MarmaroIsland_PokemonCenter_EventScript_Farmer_Text_0
# 58 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	msgbox MarmaroIsland_PokemonCenter_EventScript_Farmer_Text_1
# 59 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	closemessage
# 60 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	release
	end


MarmaroIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_0:
# 7 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	.string "Nurse$"

MarmaroIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_1:
# 8 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	.string "Welcome to the Marmaro Island Pokémon\n"
	.string "Center! Would you like to heal your\l"
	.string "Pokémon?$"

MarmaroIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_2:
# 12 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	.string "We hope to see you again!$"

MarmaroIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_3:
# 18 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	.string "Okay, I'll take your Pokémon for a few\n"
	.string "seconds!$"

MarmaroIsland_PokemonCenter_EventScript_PkmnCenterNurse_Text_4:
# 30 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	.string "Your Pokémon are happy and healthy! We\n"
	.string "hope to see you again!$"

MarmaroIsland_PokemonCenter_EventScript_GameboyKid_Text_0:
# 44 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	.string "Gameboy Kid$"

MarmaroIsland_PokemonCenter_EventScript_GameboyKid_Text_1:
# 45 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	.string "Mudbray Kong is super hard! I can't jump\n"
	.string "over the barrels it kicks down at me!$"

MarmaroIsland_PokemonCenter_EventScript_Farmer_Text_0:
# 57 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	.string "Farmer$"

MarmaroIsland_PokemonCenter_EventScript_Farmer_Text_1:
# 58 "data/maps/MarmaroIsland_PokemonCenter/scripts.pory"
	.string "I'll admit it, I spend most money I make\n"
	.string "selling crops on buying Pokémon Dolls.\l"
	.string "What can I say, they're just so cute!$"

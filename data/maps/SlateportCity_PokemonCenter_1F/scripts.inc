# 1 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_OnTransition:
# 10 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
# 11 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Sailor::
# 23 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon, MSGBOX_NPC
# 24 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Woman::
# 27 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend, MSGBOX_NPC
# 28 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 29 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon:
# 31 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Want a tip for battling?\p"
# 32 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "I'd say it's raising different kinds\n"
# 33 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "of POKéMON in a balanced manner.\p"
# 34 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "It's no good to make just one\n"
# 35 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON strong.\p"
# 36 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "If it has a type disadvantage,\n"
# 37 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "it might not stand a chance.$"
# 38 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 39 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend:
# 40 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "I trade POKéMON with my friends.\p"
# 41 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "If a traded POKéMON is holding an\n"
# 42 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "item, it makes me twice as happy!$"

SlateportCity_PokemonCenter_PokemonBoxLinkScientist::
# 49 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	lock
# 50 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 52 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, SlateportCity_PokemonCenter_PokemonBoxLinkScientist_2
# 59 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, SlateportCity_PokemonCenter_PokemonBoxLinkScientist_8
SlateportCity_PokemonCenter_PokemonBoxLinkScientist_6:
# 70 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, SlateportCity_PokemonCenter_PokemonBoxLinkScientist_5
SlateportCity_PokemonCenter_PokemonBoxLinkScientist_1:
# 78 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	release
	end

SlateportCity_PokemonCenter_PokemonBoxLinkScientist_2:
# 54 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_PokemonBoxLinkScientist_Text_0
# 55 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 56 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	release
	end

SlateportCity_PokemonCenter_PokemonBoxLinkScientist_3:
# 61 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_PokemonBoxLinkScientist_Text_1
# 62 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 63 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_POKEMON_BOX_LINK
# 64 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_PokemonBoxLinkScientist_Text_2
# 65 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 66 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_GOT_PKMN_BOX_LINK
# 67 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	release
	end

SlateportCity_PokemonCenter_PokemonBoxLinkScientist_4:
# 72 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_PokemonBoxLinkScientist_Text_3
# 73 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 74 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	release
	end

SlateportCity_PokemonCenter_PokemonBoxLinkScientist_5:
# 70 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_GOT_PKMN_BOX_LINK, SlateportCity_PokemonCenter_PokemonBoxLinkScientist_4
	goto SlateportCity_PokemonCenter_PokemonBoxLinkScientist_1

SlateportCity_PokemonCenter_PokemonBoxLinkScientist_8:
# 59 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_GOT_PKMN_BOX_LINK, SlateportCity_PokemonCenter_PokemonBoxLinkScientist_3
	goto SlateportCity_PokemonCenter_PokemonBoxLinkScientist_6


SlateportCity_PokemonCenter_PokemonBoxLinkScientist_Text_0:
# 54 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Hmm... mhm, mhm...\p"
	.string "Yep! You're definitely an up-and-coming\n"
	.string "POKéMON TRAINER! I'm working on a cool\l"
	.string "new tool for TRAINERS like you. Come\l"
	.string "back to me after you've beaten the\l"
	.string "MAUVILLE CITY GYM!$"

SlateportCity_PokemonCenter_PokemonBoxLinkScientist_Text_1:
# 61 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Woah, hey! You've earned WATTSON's GYM\n"
	.string "BADGE! If you can beat him, you're\l"
	.string "strong enough to represent my new\l"
	.string "technology: the {PKMN} Box Link!$"

SlateportCity_PokemonCenter_PokemonBoxLinkScientist_Text_2:
# 64 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "With the {PKMN} Box Link, you can connect\n"
	.string "to your PC box from anywhere, no need\l"
	.string "to trek back to a POKéMON CENTER! Cool,\l"
	.string "huh?$"

SlateportCity_PokemonCenter_PokemonBoxLinkScientist_Text_3:
# 72 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "How's the {PKMN} Box Link working?$"

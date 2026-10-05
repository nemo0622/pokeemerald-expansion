HauoliShoppingDistrict_PokemonCenter_MapScripts::
	.byte 0


HauoliShoppingDistrict_PokemonCenter_NPC_AlolanNurse::
# 5 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	lock
# 6 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	faceplayer
# 7 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_PokemonCenter_NPC_AlolanNurse_Text_0
# 8 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_PokemonCenter_NPC_AlolanNurse_Text_1
# 9 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	waitmessage
# 10 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_PokemonCenter_NPC_AlolanNurse_Text_0
# 11 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_PokemonCenter_NPC_AlolanNurse_Text_2, MSGBOX_YESNO
# 12 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HauoliShoppingDistrict_PokemonCenter_NPC_AlolanNurse_2
# 34 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_PokemonCenter_NPC_AlolanNurse_Text_0
# 35 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_PokemonCenter_NPC_AlolanNurse_Text_5
# 36 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	closemessage
HauoliShoppingDistrict_PokemonCenter_NPC_AlolanNurse_1:
# 38 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	release
	end

HauoliShoppingDistrict_PokemonCenter_NPC_AlolanNurse_2:
# 14 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_PokemonCenter_NPC_AlolanNurse_Text_0
# 15 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_PokemonCenter_NPC_AlolanNurse_Text_3
# 16 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	closemessage
# 17 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	applymovement VAR_LAST_TALKED, HauoliShoppingDistrict_PokemonCenter_NPC_AlolanNurse_Movement_0
# 18 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	waitmovement 0
# 19 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 20 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	callnative UpdateFollowingPokemon
# 21 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	delay 10
# 24 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_HAUOLI_SHOPPING_DISTRICT
# 26 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_PkmnCenterNurse_Bow
# 27 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	waitmovement 0
# 28 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_PokemonCenter_NPC_AlolanNurse_Text_0
# 29 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_PokemonCenter_NPC_AlolanNurse_Text_4
# 30 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	closemessage
	goto HauoliShoppingDistrict_PokemonCenter_NPC_AlolanNurse_1


HauoliCity_PokemonCenter_NPC_MartClerk::
# 44 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	lock
# 45 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	setspeaker HauoliCity_PokemonCenter_NPC_MartClerk_Text_0
# 46 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	message HauoliCity_PokemonCenter_NPC_MartClerk_Text_1
# 47 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	waitmessage
# 48 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	pokemart Mart_HauoliCity
# 49 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	setspeaker HauoliCity_PokemonCenter_NPC_MartClerk_Text_0
# 50 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	msgbox HauoliCity_PokemonCenter_NPC_MartClerk_Text_2
# 51 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	release
	end


	.align 2
# 55 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
Mart_HauoliCity:
# 56 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.2byte ITEM_POKE_BALL
# 57 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.2byte ITEM_POTION
# 58 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 59 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 60 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.2byte ITEM_AWAKENING
# 61 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 62 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 63 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

HauoliCity_PokemonCenter_NPC_CafeStaff::
# 68 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	lock
# 69 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	setspeaker HauoliCity_PokemonCenter_NPC_CafeStaff_Text_0
# 70 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	message HauoliCity_PokemonCenter_NPC_CafeStaff_Text_1
# 71 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	waitmessage
# 72 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	pokemart Cafe_HauoliCity
# 73 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	setspeaker HauoliCity_PokemonCenter_NPC_CafeStaff_Text_0
# 74 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	msgbox HauoliCity_PokemonCenter_NPC_MartClerk_Text_2
# 75 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	release
	end


	.align 2
# 79 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
Cafe_HauoliCity:
# 80 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 81 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.2byte ITEM_SODA_POP
# 82 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.2byte ITEM_LEMONADE
# 83 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_NONE

HauoliShoppingDistrict_PokemonCenter_NPC_AetherFoundation::
# 88 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	lock
# 89 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	faceplayer
# 90 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_PokemonCenter_NPC_AetherFoundation_Text_0
# 91 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_PokemonCenter_NPC_AetherFoundation_Text_1
# 92 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	closemessage
# 93 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	release
	end


HauoliShoppingDistrict_PokemonCenter_Pokemon_Geodude::
# 98 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	lock
# 99 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	faceplayer
# 100 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_PokemonCenter_Pokemon_Geodude_Text_0
# 101 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	playmoncry SPECIES_GEODUDE_ALOLA, CRY_MODE_NORMAL
# 102 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_PokemonCenter_Pokemon_Geodude_Text_1
# 103 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	waitmoncry
# 104 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	closemessage
# 105 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	release
	end


HauoliShoppingDistrict_PokemonCenter_NPC_Veteran::
# 111 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	lock
# 112 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	faceplayer
# 113 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_PokemonCenter_NPC_Veteran_Text_0
# 114 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_PokemonCenter_NPC_Veteran_Text_1
# 115 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	closemessage
# 116 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	release
	end


HauoliShoppingDistrict_PokemonCenter_NPC_AceTrainer::
# 122 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	lock
# 123 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	faceplayer
# 124 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_PokemonCenter_NPC_AceTrainer_Text_0
# 125 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_PokemonCenter_NPC_AceTrainer_Text_1
# 126 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	closemessage
# 127 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	release
	end


# 17 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
HauoliShoppingDistrict_PokemonCenter_NPC_AlolanNurse_Movement_0:
# 17 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	walk_in_place_slow_left
# 17 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	walk_in_place_slow_left
# 17 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	walk_in_place_slow_left
# 17 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	delay_16
# 17 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	face_down
# 17 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	step_end

HauoliShoppingDistrict_PokemonCenter_NPC_AlolanNurse_Text_0:
# 7 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.string "Nurse$"

HauoliShoppingDistrict_PokemonCenter_NPC_AlolanNurse_Text_1:
# 8 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.string "Alola, welcome to the Hau'oli City\n"
	.string "Pokémon Center!$"

HauoliShoppingDistrict_PokemonCenter_NPC_AlolanNurse_Text_2:
# 11 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.string "Would you like to heal your Pokémon?$"

HauoliShoppingDistrict_PokemonCenter_NPC_AlolanNurse_Text_3:
# 15 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.string "Great! I'll take your Pokémon for a\n"
	.string "moment...$"

HauoliShoppingDistrict_PokemonCenter_NPC_AlolanNurse_Text_4:
# 29 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.string "Your Pokémon are feeling better. Have a\n"
	.string "good day!$"

HauoliShoppingDistrict_PokemonCenter_NPC_AlolanNurse_Text_5:
# 35 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.string "Come back soon!$"

HauoliCity_PokemonCenter_NPC_MartClerk_Text_0:
# 45 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.string "Clerk$"

HauoliCity_PokemonCenter_NPC_MartClerk_Text_1:
# 46 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.string "Welcome How can I help you?$"

HauoliCity_PokemonCenter_NPC_MartClerk_Text_2:
# 50 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.string "Come on back now!$"

HauoliCity_PokemonCenter_NPC_CafeStaff_Text_0:
# 69 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.string "Cafe Staff$"

HauoliCity_PokemonCenter_NPC_CafeStaff_Text_1:
# 70 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.string "Alola, cuz! How can I help ya?$"

HauoliShoppingDistrict_PokemonCenter_NPC_AetherFoundation_Text_0:
# 90 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.string "Aether Employee$"

HauoliShoppingDistrict_PokemonCenter_NPC_AetherFoundation_Text_1:
# 91 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.string "I've been sent here by the Aether\n"
	.string "Foundation to look for Pokémon that\l"
	.string "need support.\p"
	.string "Aether Foundation controversy? I\n"
	.string "haven't left this building since I got\l"
	.string "here, so I wouldn't know!$"

HauoliShoppingDistrict_PokemonCenter_Pokemon_Geodude_Text_0:
# 100 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.string "Geodude$"

HauoliShoppingDistrict_PokemonCenter_Pokemon_Geodude_Text_1:
# 102 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.string "Cr-ah-ah-ha!$"

HauoliShoppingDistrict_PokemonCenter_NPC_Veteran_Text_0:
# 113 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.string "Veteran$"

HauoliShoppingDistrict_PokemonCenter_NPC_Veteran_Text_1:
# 114 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.string "Back in the day, Pokémon Centers and\n"
	.string "Poké Marts used to be separate.\l"
	.string "Combining them saves space in our\l"
	.string "towns!$"

HauoliShoppingDistrict_PokemonCenter_NPC_AceTrainer_Text_0:
# 124 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.string "Ace Trainer$"

HauoliShoppingDistrict_PokemonCenter_NPC_AceTrainer_Text_1:
# 125 "data//maps/HauoliShoppingDistrict_PokemonCenter/scripts.pory"
	.string "Island Challenge Amulets are only given\n"
	.string "to Trainers who show great potential.\l"
	.string "Kahuna Hala is an expert at finding\l"
	.string "promising Trainers, and so is Professor\l"
	.string "Kukui if the rumors are true!$"

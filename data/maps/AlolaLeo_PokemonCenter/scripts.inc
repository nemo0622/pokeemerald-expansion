AlolaLeo_PokemonCenter_MapScripts::
	.byte 0


AlolaLeo_PokemonCenter_NPC_AlolanNurse::
# 5 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	lock
# 6 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	faceplayer
# 7 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker AlolaLeo_PokemonCenter_NPC_AlolanNurse_Text_0
# 8 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox AlolaLeo_PokemonCenter_NPC_AlolanNurse_Text_1
# 9 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	waitmessage
# 10 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker AlolaLeo_PokemonCenter_NPC_AlolanNurse_Text_0
# 11 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox AlolaLeo_PokemonCenter_NPC_AlolanNurse_Text_2, MSGBOX_YESNO
# 12 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AlolaLeo_PokemonCenter_NPC_AlolanNurse_2
# 34 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker AlolaLeo_PokemonCenter_NPC_AlolanNurse_Text_0
# 35 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox AlolaLeo_PokemonCenter_NPC_AlolanNurse_Text_5
# 36 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
AlolaLeo_PokemonCenter_NPC_AlolanNurse_1:
# 38 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	release
	end

AlolaLeo_PokemonCenter_NPC_AlolanNurse_2:
# 14 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker AlolaLeo_PokemonCenter_NPC_AlolanNurse_Text_0
# 15 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox AlolaLeo_PokemonCenter_NPC_AlolanNurse_Text_3
# 16 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
# 17 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	applymovement VAR_LAST_TALKED, AlolaLeo_PokemonCenter_NPC_AlolanNurse_Movement_0
# 18 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	waitmovement 0
# 19 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 20 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	callnative UpdateFollowingPokemon
# 21 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	delay 10
# 24 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_ALOLA_LEO_ROAD
# 26 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_PkmnCenterNurse_Bow
# 27 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	waitmovement 0
# 28 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker AlolaLeo_PokemonCenter_NPC_AlolanNurse_Text_0
# 29 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox AlolaLeo_PokemonCenter_NPC_AlolanNurse_Text_4
# 30 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
	goto AlolaLeo_PokemonCenter_NPC_AlolanNurse_1


NPC_Pokemon_Comfey::
# 44 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	lock
# 45 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	faceplayer
# 46 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker NPC_Pokemon_Comfey_Text_0
# 47 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	playmoncry SPECIES_COMFEY, CRY_MODE_NORMAL
# 48 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox NPC_Pokemon_Comfey_Text_1
# 49 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	waitmoncry
# 50 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
# 51 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	createplayerfieldmugshot
# 52 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox NPC_Pokemon_Comfey_Text_2
# 53 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
# 54 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	release
	end


AlolaLeo_PokemonCenter_NPC_MartClerk::
# 62 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	lock
# 63 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker AlolaLeo_PokemonCenter_NPC_MartClerk_Text_0
# 64 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	message AlolaLeo_PokemonCenter_NPC_MartClerk_Text_1
# 65 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	waitmessage
# 66 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	pokemart Mart_AlolaLeo
# 67 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker AlolaLeo_PokemonCenter_NPC_MartClerk_Text_0
# 68 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox AlolaLeo_PokemonCenter_NPC_MartClerk_Text_2
# 69 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	release
	end


	.align 2
# 73 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
Mart_AlolaLeo:
# 74 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_POKE_BALL
# 75 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_POTION
# 76 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 77 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 78 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_AWAKENING
# 79 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 80 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 81 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

AlolaLeo_PokemonCenter_NPC_CafeStaff::
# 86 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	lock
# 87 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker AlolaLeo_PokemonCenter_NPC_CafeStaff_Text_0
# 88 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	message AlolaLeo_PokemonCenter_NPC_CafeStaff_Text_1
# 89 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	waitmessage
# 90 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	pokemart Cafe_AlolaLeo
# 91 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker AlolaLeo_PokemonCenter_NPC_CafeStaff_Text_0
# 92 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox AlolaLeo_PokemonCenter_NPC_MartClerk_Text_2
# 93 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	release
	end


	.align 2
# 97 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
Cafe_AlolaLeo:
# 98 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 99 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_SODA_POP
# 100 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_LEMONADE
# 101 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_NONE

AlolaLeo_PokemonCenter_NPC_Lady::
# 108 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	lock
# 109 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	faceplayer
# 110 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker AlolaLeo_PokemonCenter_NPC_Lady_Text_0
# 111 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox AlolaLeo_PokemonCenter_NPC_Lady_Text_1
# 112 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
# 113 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	release
	end


AlolaLeo_PokemonCenter_NPC_Singer::
# 119 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	lock
# 120 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	faceplayer
# 121 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker AlolaLeo_PokemonCenter_NPC_Singer_Text_0
# 122 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox AlolaLeo_PokemonCenter_NPC_Singer_Text_1
# 123 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
# 124 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	release
	end


AlolaLeo_PokemonCenter_NPC_FarmerF::
# 130 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	lock
# 131 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	faceplayer
# 132 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker AlolaLeo_PokemonCenter_NPC_FarmerF_Text_0
# 133 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox AlolaLeo_PokemonCenter_NPC_FarmerF_Text_1
# 134 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
# 135 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	release
	end


AlolaLeo_PokemonCenter_NPC_SightseerByMap::
# 141 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	lock
# 142 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	faceplayer
# 143 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker AlolaLeo_PokemonCenter_NPC_SightseerByMap_Text_0
# 144 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox AlolaLeo_PokemonCenter_NPC_SightseerByMap_Text_1
# 145 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
# 146 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	release
	end


AlolaLeo_PokemonCenter_Pokemon_Herdier::
# 152 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	lock
# 153 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	faceplayer
# 154 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker AlolaLeo_PokemonCenter_Pokemon_Herdier_Text_0
# 155 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	playmoncry SPECIES_HERDIER, CRY_MODE_NORMAL
# 156 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox AlolaLeo_PokemonCenter_Pokemon_Herdier_Text_1
# 157 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	waitmoncry
# 158 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
# 159 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox AlolaLeo_PokemonCenter_Pokemon_Herdier_Text_2, MSGBOX_YESNO
# 160 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
# 161 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AlolaLeo_PokemonCenter_Pokemon_Herdier_2
AlolaLeo_PokemonCenter_Pokemon_Herdier_1:
# 180 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	release
	end

AlolaLeo_PokemonCenter_Pokemon_Herdier_2:
# 163 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_1
# 164 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	compare VAR_TEMP_1, DIR_NORTH
	goto_if_eq AlolaLeo_PokemonCenter_Pokemon_Herdier_5
# 170 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, AlolaLeo_PokemonCenter_Pokemon_Herdier_Movement_1
AlolaLeo_PokemonCenter_Pokemon_Herdier_4:
# 172 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	waitmovement 0
# 173 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	delay 10
# 174 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_HEART
# 175 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	delay 10
# 176 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	createplayerfieldmugshot
# 177 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox AlolaLeo_PokemonCenter_Pokemon_Herdier_Text_3
# 178 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
	goto AlolaLeo_PokemonCenter_Pokemon_Herdier_1

AlolaLeo_PokemonCenter_Pokemon_Herdier_5:
# 166 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, AlolaLeo_PokemonCenter_Pokemon_Herdier_Movement_0
	goto AlolaLeo_PokemonCenter_Pokemon_Herdier_4


# 17 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
AlolaLeo_PokemonCenter_NPC_AlolanNurse_Movement_0:
# 17 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	walk_in_place_slow_left
# 17 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	walk_in_place_slow_left
# 17 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	walk_in_place_slow_left
# 17 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	delay_16
# 17 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	face_down
# 17 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	step_end

# 166 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
AlolaLeo_PokemonCenter_Pokemon_Herdier_Movement_0:
# 166 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	walk_in_place_slow_up
# 166 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	walk_in_place_slow_up
# 166 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	step_end

# 170 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
AlolaLeo_PokemonCenter_Pokemon_Herdier_Movement_1:
# 170 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	walk_in_place_slow_right
# 170 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	walk_in_place_slow_right
# 170 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	step_end

AlolaLeo_PokemonCenter_NPC_AlolanNurse_Text_0:
# 7 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Nurse$"

AlolaLeo_PokemonCenter_NPC_AlolanNurse_Text_1:
# 8 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Alola, welcome to the Alola Leo School\n"
	.string "Pokémon Center!$"

AlolaLeo_PokemonCenter_NPC_AlolanNurse_Text_2:
# 11 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Would you like to heal your Pokémon?$"

AlolaLeo_PokemonCenter_NPC_AlolanNurse_Text_3:
# 15 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Great! I'll take your Pokémon for a\n"
	.string "moment...$"

AlolaLeo_PokemonCenter_NPC_AlolanNurse_Text_4:
# 29 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Your Pokémon are feeling better. Have a\n"
	.string "good day!$"

AlolaLeo_PokemonCenter_NPC_AlolanNurse_Text_5:
# 35 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Come back soon!$"

NPC_Pokemon_Comfey_Text_0:
# 46 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Comfey$"

NPC_Pokemon_Comfey_Text_1:
# 48 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Bree-ey!$"

NPC_Pokemon_Comfey_Text_2:
# 52 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Hey there, {COLOR BLUE}Comfey{COLOR DARK_GRAY}! Thanks for lending\n"
	.string "us your healing aura!$"

AlolaLeo_PokemonCenter_NPC_MartClerk_Text_0:
# 63 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Clerk$"

AlolaLeo_PokemonCenter_NPC_MartClerk_Text_1:
# 64 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Welcome How can I help you?$"

AlolaLeo_PokemonCenter_NPC_MartClerk_Text_2:
# 68 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Come on back now!$"

AlolaLeo_PokemonCenter_NPC_CafeStaff_Text_0:
# 87 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Cafe Staff$"

AlolaLeo_PokemonCenter_NPC_CafeStaff_Text_1:
# 88 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Alola, cuz! How can I help ya?$"

AlolaLeo_PokemonCenter_NPC_Lady_Text_0:
# 110 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Lady$"

AlolaLeo_PokemonCenter_NPC_Lady_Text_1:
# 111 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Every Pokémon Center has a Café, and\n"
	.string "each Café has a unique drink. One day,\l"
	.string "I'll try them all!$"

AlolaLeo_PokemonCenter_NPC_Singer_Text_0:
# 121 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Singer$"

AlolaLeo_PokemonCenter_NPC_Singer_Text_1:
# 122 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "I come down to the Pokémon Center\n"
	.string "every day. It's a lot quieter out here\l"
	.string "than in Hau'oli City.$"

AlolaLeo_PokemonCenter_NPC_FarmerF_Text_0:
# 132 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Farmer$"

AlolaLeo_PokemonCenter_NPC_FarmerF_Text_1:
# 133 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "My family's been ranching in Paniola\n"
	.string "Town for generations. I was riding\l"
	.string "{COLOR BLUE}Tauros{COLOR DARK_GRAY} before I could walk!$"

AlolaLeo_PokemonCenter_NPC_SightseerByMap_Text_0:
# 143 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Sightseer$"

AlolaLeo_PokemonCenter_NPC_SightseerByMap_Text_1:
# 144 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Look at this incredible map of the Alola\n"
	.string "Region! It's so pretty, I can't contain\l"
	.string "myself!\p"
	.string "I think most Pokémon Centers around\n"
	.string "Alola have them... I can't wait to look at\l"
	.string "them all!$"

AlolaLeo_PokemonCenter_Pokemon_Herdier_Text_0:
# 154 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Herdier$"

AlolaLeo_PokemonCenter_Pokemon_Herdier_Text_1:
# 156 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Bwouf!$"

AlolaLeo_PokemonCenter_Pokemon_Herdier_Text_2:
# 159 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Pet the {COLOR BLUE}Herdier{COLOR DARK_GRAY}?$"

AlolaLeo_PokemonCenter_Pokemon_Herdier_Text_3:
# 177 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Aw, good little buddy!$"

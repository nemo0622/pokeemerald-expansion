AlolaLeo_PokemonCenter_MapScripts::
	.byte 0


NPC_AlolanNurse::
# 5 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	lock
# 6 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	faceplayer
# 7 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker NPC_AlolanNurse_Text_0
# 8 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox NPC_AlolanNurse_Text_1, MSGBOX_YESNO
# 9 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq NPC_AlolanNurse_2
# 26 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker NPC_AlolanNurse_Text_0
# 27 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox NPC_AlolanNurse_Text_4
# 28 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
NPC_AlolanNurse_1:
# 30 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	release
	end

NPC_AlolanNurse_2:
# 11 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker NPC_AlolanNurse_Text_0
# 12 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox NPC_AlolanNurse_Text_2
# 13 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
# 14 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	applymovement VAR_LAST_TALKED, NPC_AlolanNurse_Movement_0
# 15 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	waitmovement 0
# 16 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 17 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	delay 10
# 18 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_PkmnCenterNurse_Bow
# 19 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	waitmovement 0
# 20 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker NPC_AlolanNurse_Text_0
# 21 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox NPC_AlolanNurse_Text_3
# 22 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
	goto NPC_AlolanNurse_1


NPC_Pokemon_Comfey::
# 36 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	lock
# 37 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	faceplayer
# 38 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker NPC_Pokemon_Comfey_Text_0
# 39 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	playmoncry SPECIES_COMFEY, CRY_MODE_NORMAL
# 40 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox NPC_Pokemon_Comfey_Text_1
# 41 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	waitmoncry
# 42 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
# 43 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	createplayerfieldmugshot
# 44 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox NPC_Pokemon_Comfey_Text_2
# 45 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
# 46 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	release
	end


AlolaLeo_PokemonCenter_NPC_MartClerk::
# 54 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	lock
# 55 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker AlolaLeo_PokemonCenter_NPC_MartClerk_Text_0
# 56 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	message AlolaLeo_PokemonCenter_NPC_MartClerk_Text_1
# 57 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	waitmessage
# 58 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	pokemart Mart_AlolaLeo
# 59 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker AlolaLeo_PokemonCenter_NPC_MartClerk_Text_0
# 60 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox AlolaLeo_PokemonCenter_NPC_MartClerk_Text_2
# 61 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	release
	end


	.align 2
# 65 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
Mart_AlolaLeo:
# 66 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_POKE_BALL
# 67 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_POTION
# 68 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 69 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 70 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_AWAKENING
# 71 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 72 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 73 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

AlolaLeo_PokemonCenter_NPC_CafeStaff::
# 78 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	lock
# 79 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker AlolaLeo_PokemonCenter_NPC_CafeStaff_Text_0
# 80 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	message AlolaLeo_PokemonCenter_NPC_MartClerk_Text_1
# 81 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	waitmessage
# 82 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	pokemart Cafe_AlolaLeo
# 83 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker AlolaLeo_PokemonCenter_NPC_CafeStaff_Text_0
# 84 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox AlolaLeo_PokemonCenter_NPC_MartClerk_Text_2
# 85 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	release
	end


	.align 2
# 89 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
Cafe_AlolaLeo:
# 90 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 91 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_SODA_POP
# 92 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_LEMONADE
# 93 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_NONE

AlolaLeo_PokemonCenter_NPC_Lady::
# 100 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	lock
# 101 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	faceplayer
# 102 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker AlolaLeo_PokemonCenter_NPC_Lady_Text_0
# 103 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox AlolaLeo_PokemonCenter_NPC_Lady_Text_1
# 104 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
# 105 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	release
	end


AlolaLeo_PokemonCenter_NPC_Singer::
# 111 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	lock
# 112 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	faceplayer
# 113 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker AlolaLeo_PokemonCenter_NPC_Singer_Text_0
# 114 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox AlolaLeo_PokemonCenter_NPC_Singer_Text_1
# 115 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
# 116 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	release
	end


AlolaLeo_PokemonCenter_NPC_FarmerF::
# 122 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	lock
# 123 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	faceplayer
# 124 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker AlolaLeo_PokemonCenter_NPC_FarmerF_Text_0
# 125 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox AlolaLeo_PokemonCenter_NPC_FarmerF_Text_1
# 126 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
# 127 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	release
	end


AlolaLeo_PokemonCenter_NPC_SightseerByMap::
# 133 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	lock
# 134 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	faceplayer
# 135 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker AlolaLeo_PokemonCenter_NPC_SightseerByMap_Text_0
# 136 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox AlolaLeo_PokemonCenter_NPC_SightseerByMap_Text_1
# 137 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
# 138 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	release
	end


AlolaLeo_PokemonCenter_Pokemon_Herdier::
# 144 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	lock
# 145 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	faceplayer
# 146 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	setspeaker AlolaLeo_PokemonCenter_Pokemon_Herdier_Text_0
# 147 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	playmoncry SPECIES_HERDIER, CRY_MODE_NORMAL
# 148 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox AlolaLeo_PokemonCenter_Pokemon_Herdier_Text_1
# 149 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	waitmoncry
# 150 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
# 151 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox AlolaLeo_PokemonCenter_Pokemon_Herdier_Text_2, MSGBOX_YESNO
# 152 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
# 153 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AlolaLeo_PokemonCenter_Pokemon_Herdier_2
AlolaLeo_PokemonCenter_Pokemon_Herdier_1:
# 172 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	release
	end

AlolaLeo_PokemonCenter_Pokemon_Herdier_2:
# 155 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_1
# 156 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	compare VAR_TEMP_1, DIR_NORTH
	goto_if_eq AlolaLeo_PokemonCenter_Pokemon_Herdier_5
# 162 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, AlolaLeo_PokemonCenter_Pokemon_Herdier_Movement_1
AlolaLeo_PokemonCenter_Pokemon_Herdier_4:
# 164 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	waitmovement 0
# 165 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	delay 10
# 166 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_HEART
# 167 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	delay 10
# 168 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	createplayerfieldmugshot
# 169 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	msgbox AlolaLeo_PokemonCenter_Pokemon_Herdier_Text_3
# 170 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	closemessage
	goto AlolaLeo_PokemonCenter_Pokemon_Herdier_1

AlolaLeo_PokemonCenter_Pokemon_Herdier_5:
# 158 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, AlolaLeo_PokemonCenter_Pokemon_Herdier_Movement_0
	goto AlolaLeo_PokemonCenter_Pokemon_Herdier_4


# 14 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
NPC_AlolanNurse_Movement_0:
# 14 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	walk_in_place_slow_left
# 14 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	walk_in_place_slow_left
# 14 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	walk_in_place_slow_left
# 14 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	delay_16
# 14 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	face_down
# 14 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	step_end

# 158 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
AlolaLeo_PokemonCenter_Pokemon_Herdier_Movement_0:
# 158 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	walk_in_place_slow_up
# 158 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	walk_in_place_slow_up
# 158 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	step_end

# 162 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
AlolaLeo_PokemonCenter_Pokemon_Herdier_Movement_1:
# 162 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	walk_in_place_slow_right
# 162 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	walk_in_place_slow_right
# 162 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	step_end

NPC_AlolanNurse_Text_0:
# 7 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Nurse$"

NPC_AlolanNurse_Text_1:
# 8 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Alola, welcome to our Pokémon Center!\n"
	.string "Would you like to heal your Pokémon?$"

NPC_AlolanNurse_Text_2:
# 12 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Great! I'll take your Pokémon for a\n"
	.string "moment...$"

NPC_AlolanNurse_Text_3:
# 21 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Your Pokémon are feeling better. Have a\n"
	.string "good day!$"

NPC_AlolanNurse_Text_4:
# 27 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Come back soon!$"

NPC_Pokemon_Comfey_Text_0:
# 38 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Comfey$"

NPC_Pokemon_Comfey_Text_1:
# 40 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Bree-ey!$"

NPC_Pokemon_Comfey_Text_2:
# 44 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Hey there, {COLOR BLUE}Comfey{COLOR DARK_GRAY}! Thanks for lending\n"
	.string "us your healing aura!$"

AlolaLeo_PokemonCenter_NPC_MartClerk_Text_0:
# 55 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Clerk$"

AlolaLeo_PokemonCenter_NPC_MartClerk_Text_1:
# 56 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Alola, cuz! How can I help ya?$"

AlolaLeo_PokemonCenter_NPC_MartClerk_Text_2:
# 60 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Come on back now!$"

AlolaLeo_PokemonCenter_NPC_CafeStaff_Text_0:
# 79 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Cafe Staff$"

AlolaLeo_PokemonCenter_NPC_Lady_Text_0:
# 102 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Lady$"

AlolaLeo_PokemonCenter_NPC_Lady_Text_1:
# 103 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Every Pokémon Center has a Café, and\n"
	.string "each Café has a unique drink. One day,\l"
	.string "I'll try them all!$"

AlolaLeo_PokemonCenter_NPC_Singer_Text_0:
# 113 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Singer$"

AlolaLeo_PokemonCenter_NPC_Singer_Text_1:
# 114 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "I come down to the Pokémon Center\n"
	.string "every day. It's a lot quieter out here\l"
	.string "than in Hau'oli City.$"

AlolaLeo_PokemonCenter_NPC_FarmerF_Text_0:
# 124 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Farmer$"

AlolaLeo_PokemonCenter_NPC_FarmerF_Text_1:
# 125 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "My family's been ranching in Paniola\n"
	.string "Town for generations. I was riding\l"
	.string "{COLOR BLUE}Tauros{COLOR DARK_GRAY} before I could walk!$"

AlolaLeo_PokemonCenter_NPC_SightseerByMap_Text_0:
# 135 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Sightseer$"

AlolaLeo_PokemonCenter_NPC_SightseerByMap_Text_1:
# 136 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Look at this incredible map of the Alola\n"
	.string "Region! It's so pretty, I can't contain\l"
	.string "myself!\p"
	.string "I think most Pokémon Centers around\n"
	.string "Alola have them... I can't wait to look at\l"
	.string "them all!$"

AlolaLeo_PokemonCenter_Pokemon_Herdier_Text_0:
# 146 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Herdier$"

AlolaLeo_PokemonCenter_Pokemon_Herdier_Text_1:
# 148 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Bwouf!$"

AlolaLeo_PokemonCenter_Pokemon_Herdier_Text_2:
# 151 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "Pet the {COLOR BLUE}Herdier{COLOR DARK_GRAY}?$"

AlolaLeo_PokemonCenter_Pokemon_Herdier_Text_3:
# 169 "data//maps/AlolaLeo_PokemonCenter/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Aw, good little buddy!$"

HauoliShoppingDistrict_MalasadaShop_MapScripts::
	.byte 0


HauoliShoppingDistrict_MalasadaShop_Pokemon_Pichu::
# 5 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	lock
# 6 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	faceplayer
# 7 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	setspeaker HauoliShoppingDistrict_MalasadaShop_Pokemon_Pichu_Text_0
# 8 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 9 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	msgbox HauoliShoppingDistrict_MalasadaShop_Pokemon_Pichu_Text_1
# 10 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	waitmoncry
# 11 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	closemessage
# 12 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	msgbox HauoliShoppingDistrict_MalasadaShop_Pokemon_Pichu_Text_2
# 13 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	closemessage
# 14 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	release
	end


HauoliShoppingDistrict_MalasadaShop_NPC_Employee::
# 20 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	lock
# 21 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	faceplayer
# 22 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	setspeaker HauoliShoppingDistrict_MalasadaShop_NPC_Employee_Text_0
# 23 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	msgbox HauoliShoppingDistrict_MalasadaShop_NPC_Employee_Text_1
# 24 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	waitmessage
# 25 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	pokemart Mart_HauoliShoppingDistrict_MalasadaShop
# 27 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	setspeaker HauoliShoppingDistrict_MalasadaShop_NPC_Employee_Text_0
# 28 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	msgbox HauoliShoppingDistrict_MalasadaShop_NPC_Employee_Text_2
# 29 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	release
	end


	.align 2
# 33 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
Mart_HauoliShoppingDistrict_MalasadaShop:
# 34 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	.2byte ITEM_BIG_MALASADA
# 35 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	.2byte ITEM_CASTELIACONE
	.2byte ITEM_NONE

HauoliShoppingDistrict_MalasadaShop_NPC_Hiker::
# 42 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	lock
# 43 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	faceplayer
# 44 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	setspeaker HauoliShoppingDistrict_MalasadaShop_NPC_Hiker_Text_0
# 45 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	msgbox HauoliShoppingDistrict_MalasadaShop_NPC_Hiker_Text_1
# 46 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	closemessage
# 47 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 48 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	waitmovement 0
# 49 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	release
	end


HauoliShoppingDistrict_MalasadaShop_NPC_Backpacker::
# 55 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	lock
# 56 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	faceplayer
# 57 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	setspeaker HauoliShoppingDistrict_MalasadaShop_NPC_Backpacker_Text_0
# 58 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	msgbox HauoliShoppingDistrict_MalasadaShop_NPC_Backpacker_Text_1
# 59 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	closemessage
# 60 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 61 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	waitmovement 0
# 62 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	release
	end


HauoliShoppingDistrict_MalasadaShop_NPC_SchoolBoy::
# 68 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	lock
# 69 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	faceplayer
# 70 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	setspeaker HauoliShoppingDistrict_MalasadaShop_NPC_SchoolBoy_Text_0
# 71 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	msgbox HauoliShoppingDistrict_MalasadaShop_NPC_SchoolBoy_Text_1
# 72 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	closemessage
# 73 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 74 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	waitmovement 0
# 75 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	release
	end


HauoliShoppingDistrict_MalasadaShop_Pokemon_Impidimp::
# 81 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	lock
# 82 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	faceplayer
# 83 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	setspeaker HauoliShoppingDistrict_MalasadaShop_Pokemon_Impidimp_Text_0
# 84 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	playmoncry SPECIES_IMPIDIMP, CRY_MODE_NORMAL
# 85 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	msgbox HauoliShoppingDistrict_MalasadaShop_Pokemon_Impidimp_Text_1
# 86 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	waitmoncry
# 87 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	closemessage
# 88 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	msgbox HauoliShoppingDistrict_MalasadaShop_Pokemon_Impidimp_Text_2
# 89 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	closemessage
# 90 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 91 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	waitmovement 0
# 92 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	release
	end


HauoliShoppingDistrict_MalasadaShop_NPC_BlackBelt::
# 98 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	lock
# 99 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	faceplayer
# 100 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	setspeaker HauoliShoppingDistrict_MalasadaShop_NPC_BlackBelt_Text_0
# 101 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	msgbox HauoliShoppingDistrict_MalasadaShop_NPC_BlackBelt_Text_1
# 102 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	closemessage
# 103 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 104 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	waitmovement 0
# 105 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	release
	end


HauoliShoppingDistrict_MalasadaShop_NPC_Woman::
# 111 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	lock
# 112 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	faceplayer
# 113 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	setspeaker HauoliShoppingDistrict_MalasadaShop_NPC_Woman_Text_0
# 114 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	msgbox HauoliShoppingDistrict_MalasadaShop_NPC_Woman_Text_1
# 115 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	closemessage
# 116 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 117 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	waitmovement 0
# 118 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	release
	end


HauoliShoppingDistrict_MalasadaShop_Pokemon_Pichu_Text_0:
# 7 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	.string "Pichu$"

HauoliShoppingDistrict_MalasadaShop_Pokemon_Pichu_Text_1:
# 9 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	.string "Chuu!$"

HauoliShoppingDistrict_MalasadaShop_Pokemon_Pichu_Text_2:
# 12 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	.string "{COLOR BLUE}Pichu{COLOR DARK_GRAY} has a Malasada in its mouth!$"

HauoliShoppingDistrict_MalasadaShop_NPC_Employee_Text_0:
# 22 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	.string "Waitress$"

HauoliShoppingDistrict_MalasadaShop_NPC_Employee_Text_1:
# 23 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	.string "Alola! Would you like to try our food\n"
	.string "today?$"

HauoliShoppingDistrict_MalasadaShop_NPC_Employee_Text_2:
# 28 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	.string "Until next time!$"

HauoliShoppingDistrict_MalasadaShop_NPC_Hiker_Text_0:
# 44 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	.string "Hiker$"

HauoliShoppingDistrict_MalasadaShop_NPC_Hiker_Text_1:
# 45 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	.string "These Malasadas are delicious! If I\n"
	.string "were a Pokémon, I bet I'd still love\l"
	.string "them!$"

HauoliShoppingDistrict_MalasadaShop_NPC_Backpacker_Text_0:
# 57 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	.string "Backpacker$"

HauoliShoppingDistrict_MalasadaShop_NPC_Backpacker_Text_1:
# 58 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	.string "There's nothing better than sharing a\n"
	.string "platter of Malasadas with someone.$"

HauoliShoppingDistrict_MalasadaShop_NPC_SchoolBoy_Text_0:
# 70 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	.string "School Boy$"

HauoliShoppingDistrict_MalasadaShop_NPC_SchoolBoy_Text_1:
# 71 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	.string "Ehehe, look! My {COLOR BLUE}Impidimp{COLOR DARK_GRAY}'s gobbling up a\n"
	.string "Malasada!$"

HauoliShoppingDistrict_MalasadaShop_Pokemon_Impidimp_Text_0:
# 83 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	.string "Impidimp$"

HauoliShoppingDistrict_MalasadaShop_Pokemon_Impidimp_Text_1:
# 85 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	.string "Monch cronch cronch!$"

HauoliShoppingDistrict_MalasadaShop_Pokemon_Impidimp_Text_2:
# 88 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	.string "{COLOR BLUE}Impidimp{COLOR DARK_GRAY} is tearing through Malasadas!$"

HauoliShoppingDistrict_MalasadaShop_NPC_BlackBelt_Text_0:
# 100 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	.string "Black Belt$"

HauoliShoppingDistrict_MalasadaShop_NPC_BlackBelt_Text_1:
# 101 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	.string "I've been comin' here since I was a kid!\n"
	.string "Their ice cream is as delicious as I\l"
	.string "remember!$"

HauoliShoppingDistrict_MalasadaShop_NPC_Woman_Text_0:
# 113 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	.string "Woman$"

HauoliShoppingDistrict_MalasadaShop_NPC_Woman_Text_1:
# 114 "data//maps/HauoliShoppingDistrict_MalasadaShop/scripts.pory"
	.string "These foods sure make me happy. I\n"
	.string "wonder if Pokémon would like them, too?$"

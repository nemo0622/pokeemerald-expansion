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

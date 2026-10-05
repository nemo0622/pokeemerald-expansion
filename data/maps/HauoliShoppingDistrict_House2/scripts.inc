HauoliShoppingDistrict_House2_MapScripts::
	.byte 0


HauoliShoppingDistrict_House2_NPC_Backpacker::
# 5 "data//maps/HauoliShoppingDistrict_House2/scripts.pory"
	lock
# 6 "data//maps/HauoliShoppingDistrict_House2/scripts.pory"
	faceplayer
# 7 "data//maps/HauoliShoppingDistrict_House2/scripts.pory"
	setspeaker HauoliShoppingDistrict_House2_NPC_Backpacker_Text_0
# 8 "data//maps/HauoliShoppingDistrict_House2/scripts.pory"
	msgbox HauoliShoppingDistrict_House2_NPC_Backpacker_Text_1
# 9 "data//maps/HauoliShoppingDistrict_House2/scripts.pory"
	closemessage
# 10 "data//maps/HauoliShoppingDistrict_House2/scripts.pory"
	release
	end


HauoliShoppingDistrict_House2_NPC_Pilot::
# 16 "data//maps/HauoliShoppingDistrict_House2/scripts.pory"
	lock
# 17 "data//maps/HauoliShoppingDistrict_House2/scripts.pory"
	faceplayer
# 18 "data//maps/HauoliShoppingDistrict_House2/scripts.pory"
	setspeaker HauoliShoppingDistrict_House2_NPC_Pilot_Text_0
# 19 "data//maps/HauoliShoppingDistrict_House2/scripts.pory"
	msgbox HauoliShoppingDistrict_House2_NPC_Pilot_Text_1
# 20 "data//maps/HauoliShoppingDistrict_House2/scripts.pory"
	closemessage
# 21 "data//maps/HauoliShoppingDistrict_House2/scripts.pory"
	release
	end


HauoliShoppingDistrict_House2_NPC_Backpacker_Text_0:
# 7 "data//maps/HauoliShoppingDistrict_House2/scripts.pory"
	.string "Backpacker$"

HauoliShoppingDistrict_House2_NPC_Backpacker_Text_1:
# 8 "data//maps/HauoliShoppingDistrict_House2/scripts.pory"
	.string "People hear that Alola is a tropical\n"
	.string "island chain and assume there aren't\l"
	.string "diverse environments.\p"
	.string "They're wrong, though! Some of the\n"
	.string "taller mountains have snow!$"

HauoliShoppingDistrict_House2_NPC_Pilot_Text_0:
# 18 "data//maps/HauoliShoppingDistrict_House2/scripts.pory"
	.string "Pilot$"

HauoliShoppingDistrict_House2_NPC_Pilot_Text_1:
# 19 "data//maps/HauoliShoppingDistrict_House2/scripts.pory"
	.string "Flying over the Alola Region is the best\n"
	.string "part of my job. Every island has unique\l"
	.string "flora and habitats.$"

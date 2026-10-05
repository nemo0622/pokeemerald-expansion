HauoliShoppingDistrict_House1_MapScripts::
	.byte 0


HauoliShoppingDistrict_House1_NPC_Man::
# 5 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	lock
# 6 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	faceplayer
# 7 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	setspeaker HauoliShoppingDistrict_House1_NPC_Man_Text_0
# 8 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	msgbox HauoliShoppingDistrict_House1_NPC_Man_Text_1
# 9 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	closemessage
# 10 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	release
	end


HauoliShoppingDistrict_House1_NPC_Farmer::
# 16 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	lock
# 17 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	faceplayer
# 18 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	setspeaker HauoliShoppingDistrict_House1_NPC_Farmer_Text_0
# 19 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	msgbox HauoliShoppingDistrict_House1_NPC_Farmer_Text_1
# 20 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	closemessage
# 21 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	release
	end


HauoliShoppingDistrict_House1_Pokemon_Mudbray::
# 26 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	lock
# 27 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	faceplayer
# 28 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	setspeaker HauoliShoppingDistrict_House1_Pokemon_Mudbray_Text_0
# 29 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	playmoncry SPECIES_MUDBRAY, CRY_MODE_NORMAL
# 30 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	msgbox HauoliShoppingDistrict_House1_Pokemon_Mudbray_Text_1
# 31 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	waitmoncry
# 32 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	closemessage
# 33 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	release
	end


HauoliShoppingDistrict_House1_NPC_SchoolBoy::
# 39 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	lock
# 40 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	faceplayer
# 41 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	setspeaker HauoliShoppingDistrict_House1_NPC_SchoolBoy_Text_0
# 42 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	msgbox HauoliShoppingDistrict_House1_NPC_SchoolBoy_Text_1
# 43 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	closemessage
# 44 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	release
	end


HauoliShoppingDistrict_House1_NPC_Man_Text_0:
# 7 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	.string "Man$"

HauoliShoppingDistrict_House1_NPC_Man_Text_1:
# 8 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	.string "It's not cheap to have a house right in\n"
	.string "Hau'oli City, but it's worth it. We live\l"
	.string "right next to the Shopping Center!$"

HauoliShoppingDistrict_House1_NPC_Farmer_Text_0:
# 18 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	.string "Farmer$"

HauoliShoppingDistrict_House1_NPC_Farmer_Text_1:
# 19 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	.string "Our Pokémon help us run a farm in Route\n"
	.string "2. {COLOR BLUE}Mudbray{COLOR DARK_GRAY} here helps us till the\l"
	.string "ground!$"

HauoliShoppingDistrict_House1_Pokemon_Mudbray_Text_0:
# 28 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	.string "Mudbray$"

HauoliShoppingDistrict_House1_Pokemon_Mudbray_Text_1:
# 30 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	.string "Bray-yy!$"

HauoliShoppingDistrict_House1_NPC_SchoolBoy_Text_0:
# 41 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	.string "School Boy$"

HauoliShoppingDistrict_House1_NPC_SchoolBoy_Text_1:
# 42 "data//maps/HauoliShoppingDistrict_House1/scripts.pory"
	.string "Computers are great! On my personal\n"
	.string "computer, I can put in special codes\l"
	.string "that do fun things.\p"
	.string "You should try on your own computer!$"

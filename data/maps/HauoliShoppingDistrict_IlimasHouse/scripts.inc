HauoliShoppingDistrict_IlimasHouse_MapScripts::
	.byte 0


HauoliShoppingDistrict_IlimasHouse_IlimasDad::
# 5 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	lock
# 6 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	faceplayer
# 7 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	setspeaker HauoliShoppingDistrict_IlimasHouse_IlimasDad_Text_0
# 8 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	msgbox HauoliShoppingDistrict_IlimasHouse_IlimasDad_Text_1
# 9 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	closemessage
# 10 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	release
	end


HauoliShoppingDistrict_IlimasHouse_IlimasMom::
# 16 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	lock
# 17 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	faceplayer
# 18 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	setspeaker HauoliShoppingDistrict_IlimasHouse_IlimasMom_Text_0
# 19 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	msgbox HauoliShoppingDistrict_IlimasHouse_IlimasMom_Text_1
# 20 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	closemessage
# 21 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	release
	end


HauoliShoppingDistrict_IlimasHouse_Pokemon_Deerling::
# 27 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	lock
# 28 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	faceplayer
# 29 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	setspeaker HauoliShoppingDistrict_IlimasHouse_Pokemon_Deerling_Text_0
# 30 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	playmoncry SPECIES_DEERLING, CRY_MODE_NORMAL
# 31 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	msgbox HauoliShoppingDistrict_IlimasHouse_Pokemon_Deerling_Text_1
# 32 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	waitmoncry
# 33 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	closemessage
# 34 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	release
	end


HauoliShoppingDistrict_IlimasHouse_NPC_IlimasSister::
# 40 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	lock
# 41 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	faceplayer
# 42 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	setspeaker HauoliShoppingDistrict_IlimasHouse_NPC_IlimasSister_Text_0
# 43 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	msgbox HauoliShoppingDistrict_IlimasHouse_NPC_IlimasSister_Text_1
# 44 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	closemessage
# 45 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	release
	end


HauoliShoppingDistrict_IlimasHouse_IlimasDad_Text_0:
# 7 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	.string "Big Man$"

HauoliShoppingDistrict_IlimasHouse_IlimasDad_Text_1:
# 8 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	.string "Believe it or not, I'm Captain Ilima's\n"
	.string "father.\p"
	.string "He got his looks and Pokémon battle\n"
	.string "skills from his mother. When he tamed\l"
	.string "that {COLOR BLUE}Totem Pokémon{COLOR DARK_GRAY}... I was so afraid, I\l"
	.string "couldn't move!$"

HauoliShoppingDistrict_IlimasHouse_IlimasMom_Text_0:
# 18 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	.string "Lady$"

HauoliShoppingDistrict_IlimasHouse_IlimasMom_Text_1:
# 19 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	.string "Welcome in! I'm Captain Ilima's mother.\p"
	.string "I see you're taking on the Island\n"
	.string "Challenge! You'll need to face Ilima and\l"
	.string "his Trial in order to proceed. He's\l"
	.string "always in that Verdant Cavern, up on\l"
	.string "Route 2.$"

HauoliShoppingDistrict_IlimasHouse_Pokemon_Deerling_Text_0:
# 29 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	.string "Deerling$"

HauoliShoppingDistrict_IlimasHouse_Pokemon_Deerling_Text_1:
# 31 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	.string "Beeh!$"

HauoliShoppingDistrict_IlimasHouse_NPC_IlimasSister_Text_0:
# 42 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	.string "Little Girl$"

HauoliShoppingDistrict_IlimasHouse_NPC_IlimasSister_Text_1:
# 43 "data//maps/HauoliShoppingDistrict_IlimasHouse/scripts.pory"
	.string "I'm Ilima's sister! Look at my Pokémon!\p"
	.string "{COLOR BLUE}Deerling{COLOR DARK_GRAY} have different forms based on\n"
	.string "their environment. When they evolve,\l"
	.string "some forms even change their type!\p"
	.string "Summer-form {COLOR BLUE}Deerling{COLOR DARK_GRAY} stays part\n"
	.string "Normal-type after evolving. I think\l"
	.string "Ilima would like that best.$"

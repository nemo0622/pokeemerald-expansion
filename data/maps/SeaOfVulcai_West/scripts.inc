SeaOfVulcai_West_MapScripts::
	.byte 0


VulcaiSea_EventScript_Trainer_VulcaiSea_Freddy::
# 5 "data/maps/SeaOfVulcai_West/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_FREDDY, VulcaiSea_Text_Trainer_VulcaiSea_FreddyIntro, VulcaiSea_Text_Trainer_VulcaiSea_FreddyDefeat
# 6 "data/maps/SeaOfVulcai_West/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Freddy_Text_0
# 7 "data/maps/SeaOfVulcai_West/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Freddy_Text_1
# 8 "data/maps/SeaOfVulcai_West/scripts.pory"
	closemessage
# 9 "data/maps/SeaOfVulcai_West/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Sabrina::
# 23 "data/maps/SeaOfVulcai_West/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_SABRINA, VulcaiSea_Text_Trainer_VulcaiSea_SabrinaIntro, VulcaiSea_Text_Trainer_VulcaiSea_SabrinaDefeat
# 24 "data/maps/SeaOfVulcai_West/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Sabrina_Text_0
# 25 "data/maps/SeaOfVulcai_West/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Sabrina_Text_1
# 26 "data/maps/SeaOfVulcai_West/scripts.pory"
	closemessage
# 27 "data/maps/SeaOfVulcai_West/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Freddy_Text_0:
# 6 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Freddy$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Freddy_Text_1:
# 7 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Looks like only reeds and small plants\n"
	.string "will grow around here. No room for a good\l"
	.string "farm.$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Sabrina_Text_0:
# 24 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Sabrina$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Sabrina_Text_1:
# 25 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "My Pokémon all have super strong\n"
	.string "fighting spirits! Don't you forget that!$"

VulcaiSea_Text_Trainer_VulcaiSea_FreddyIntro::
# 12 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Hmm... nope, no farms here!$"

VulcaiSea_Text_Trainer_VulcaiSea_FreddyDefeat::
# 16 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "So why am I out here again?$"

VulcaiSea_Text_Trainer_VulcaiSea_SabrinaIntro::
# 30 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Whoo-hoo! I'm all fired up for a fight!$"

VulcaiSea_Text_Trainer_VulcaiSea_SabrinaDefeat::
# 34 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "It's over already?!$"

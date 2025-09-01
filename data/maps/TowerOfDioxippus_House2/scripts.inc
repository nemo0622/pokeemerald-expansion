TowerOfDioxippus_House2_MapScripts::
	.byte 0


TowerOfDioxippus_House2_EventScript_FatMan::
# 5 "data/maps/TowerOfDioxippus_House2/scripts.pory"
	lock
# 6 "data/maps/TowerOfDioxippus_House2/scripts.pory"
	faceplayer
# 7 "data/maps/TowerOfDioxippus_House2/scripts.pory"
	speakername TowerOfDioxippus_House2_EventScript_FatMan_Text_0
# 8 "data/maps/TowerOfDioxippus_House2/scripts.pory"
	msgbox TowerOfDioxippus_House2_EventScript_FatMan_Text_1
# 9 "data/maps/TowerOfDioxippus_House2/scripts.pory"
	closemessage
# 10 "data/maps/TowerOfDioxippus_House2/scripts.pory"
	release
	end


TowerOfDioxippus_House2_EventScript_Swoobat::
# 16 "data/maps/TowerOfDioxippus_House2/scripts.pory"
	lock
# 17 "data/maps/TowerOfDioxippus_House2/scripts.pory"
	faceplayer
# 18 "data/maps/TowerOfDioxippus_House2/scripts.pory"
	speakername TowerOfDioxippus_House2_EventScript_Swoobat_Text_0
# 19 "data/maps/TowerOfDioxippus_House2/scripts.pory"
	playmoncry SPECIES_SWOOBAT, CRY_MODE_NORMAL
# 20 "data/maps/TowerOfDioxippus_House2/scripts.pory"
	msgbox TowerOfDioxippus_House2_EventScript_Swoobat_Text_1
# 21 "data/maps/TowerOfDioxippus_House2/scripts.pory"
	waitmoncry
# 22 "data/maps/TowerOfDioxippus_House2/scripts.pory"
	closemessage
# 23 "data/maps/TowerOfDioxippus_House2/scripts.pory"
	release
	end


TowerOfDioxippus_House2_EventScript_FatMan_Text_0:
# 7 "data/maps/TowerOfDioxippus_House2/scripts.pory"
	.string "Man$"

TowerOfDioxippus_House2_EventScript_FatMan_Text_1:
# 8 "data/maps/TowerOfDioxippus_House2/scripts.pory"
	.string "My father used to tell me about\n"
	.string "Rayquaza, the ultimate Pokémon of the\l"
	.string "sky, coming down to earth one day. I'd\l"
	.string "love to see that.$"

TowerOfDioxippus_House2_EventScript_Swoobat_Text_0:
# 18 "data/maps/TowerOfDioxippus_House2/scripts.pory"
	.string "Swoobat$"

TowerOfDioxippus_House2_EventScript_Swoobat_Text_1:
# 20 "data/maps/TowerOfDioxippus_House2/scripts.pory"
	.string "Whoo-o!$"

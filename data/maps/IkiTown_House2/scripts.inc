IkiTown_House2_MapScripts::
	.byte 0


IkiTown_House2_NPC_Man::
# 5 "data//maps/IkiTown_House2/scripts.pory"
	lock
# 6 "data//maps/IkiTown_House2/scripts.pory"
	faceplayer
# 7 "data//maps/IkiTown_House2/scripts.pory"
	setspeaker IkiTown_House2_NPC_Man_Text_0
# 8 "data//maps/IkiTown_House2/scripts.pory"
	msgbox IkiTown_House2_NPC_Man_Text_1
# 9 "data//maps/IkiTown_House2/scripts.pory"
	closemessage
# 10 "data//maps/IkiTown_House2/scripts.pory"
	release
	end


IkiTown_House2_NPC_Woman::
# 16 "data//maps/IkiTown_House2/scripts.pory"
	lock
# 17 "data//maps/IkiTown_House2/scripts.pory"
	faceplayer
# 18 "data//maps/IkiTown_House2/scripts.pory"
	setspeaker IkiTown_House2_NPC_Woman_Text_0
# 19 "data//maps/IkiTown_House2/scripts.pory"
	msgbox IkiTown_House2_NPC_Woman_Text_1
# 20 "data//maps/IkiTown_House2/scripts.pory"
	closemessage
# 21 "data//maps/IkiTown_House2/scripts.pory"
	release
	end


IkiTown_House2_NPC_Man_Text_0:
# 7 "data//maps/IkiTown_House2/scripts.pory"
	.string "Man$"

IkiTown_House2_NPC_Man_Text_1:
# 8 "data//maps/IkiTown_House2/scripts.pory"
	.string "It's said that ancient peoples rode\n"
	.string "over the waves and seas together with\l"
	.string "their Pokémon to settle the Alola\l"
	.string "Region.$"

IkiTown_House2_NPC_Woman_Text_0:
# 18 "data//maps/IkiTown_House2/scripts.pory"
	.string "Woman$"

IkiTown_House2_NPC_Woman_Text_1:
# 19 "data//maps/IkiTown_House2/scripts.pory"
	.string "Different people interact with Pokémon\n"
	.string "in their own different ways. Some may\l"
	.string "seem them as allies in battle, while\l"
	.string "others just enjoy sharing their lives\l"
	.string "with them.$"

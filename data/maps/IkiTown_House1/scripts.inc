IkiTown_House1_MapScripts::
	.byte 0


IkiTown_House1_NPC_Woman::
# 5 "data//maps/IkiTown_House1/scripts.pory"
	lock
# 6 "data//maps/IkiTown_House1/scripts.pory"
	faceplayer
# 7 "data//maps/IkiTown_House1/scripts.pory"
	setspeaker IkiTown_House1_NPC_Woman_Text_0
# 8 "data//maps/IkiTown_House1/scripts.pory"
	msgbox IkiTown_House1_NPC_Woman_Text_1
# 9 "data//maps/IkiTown_House1/scripts.pory"
	closemessage
# 10 "data//maps/IkiTown_House1/scripts.pory"
	release
	end


IkiTown_House1_NPC_Woman_Text_0:
# 7 "data//maps/IkiTown_House1/scripts.pory"
	.string "Woman$"

IkiTown_House1_NPC_Woman_Text_1:
# 8 "data//maps/IkiTown_House1/scripts.pory"
	.string "More Pokémon are always being found in\n"
	.string "Alola! I hear there are over 450 species\l"
	.string "that live on our islands!$"

IkiTown_House3_MapScripts::
	.byte 0


IkiTown_House3_NPC_OldMan::
# 5 "data//maps/IkiTown_House3/scripts.pory"
	lock
# 6 "data//maps/IkiTown_House3/scripts.pory"
	faceplayer
# 7 "data//maps/IkiTown_House3/scripts.pory"
	setspeaker IkiTown_House3_NPC_OldMan_Text_0
# 8 "data//maps/IkiTown_House3/scripts.pory"
	msgbox IkiTown_House3_NPC_OldMan_Text_1
# 9 "data//maps/IkiTown_House3/scripts.pory"
	closemessage
# 10 "data//maps/IkiTown_House3/scripts.pory"
	release
	end


IkiTown_House3_NPC_OldWoman::
# 16 "data//maps/IkiTown_House3/scripts.pory"
	lock
# 17 "data//maps/IkiTown_House3/scripts.pory"
	faceplayer
# 18 "data//maps/IkiTown_House3/scripts.pory"
	setspeaker IkiTown_House3_NPC_OldWoman_Text_0
# 19 "data//maps/IkiTown_House3/scripts.pory"
	msgbox IkiTown_House3_NPC_OldWoman_Text_1
# 20 "data//maps/IkiTown_House3/scripts.pory"
	closemessage
# 21 "data//maps/IkiTown_House3/scripts.pory"
	release
	end


IkiTown_House3_NPC_OldMan_Text_0:
# 7 "data//maps/IkiTown_House3/scripts.pory"
	.string "Old Man$"

IkiTown_House3_NPC_OldMan_Text_1:
# 8 "data//maps/IkiTown_House3/scripts.pory"
	.string "Open windows let in the night. When\n"
	.string "night comes around, it's best to get to\l"
	.string "bed.$"

IkiTown_House3_NPC_OldWoman_Text_0:
# 18 "data//maps/IkiTown_House3/scripts.pory"
	.string "Old Woman$"

IkiTown_House3_NPC_OldWoman_Text_1:
# 19 "data//maps/IkiTown_House3/scripts.pory"
	.string "Ah... On lovely calm days like this one, I\n"
	.string "always think of my brother... When we\l"
	.string "were young, he always worked so hard to\l"
	.string "collect sand from the beach.\p"
	.string "Where could he be now?\n"
	.string "What must he be doing?$"

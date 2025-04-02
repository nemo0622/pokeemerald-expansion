AsfalHills_House3_MapScripts::
	.byte 0


AsfalHills_House3_EventScript_Worker::
# 5 "data/maps/AsfalHills_House3/scripts.pory"
	lock
# 6 "data/maps/AsfalHills_House3/scripts.pory"
	faceplayer
# 7 "data/maps/AsfalHills_House3/scripts.pory"
	speakername AsfalHills_House3_EventScript_Worker_Text_0
# 8 "data/maps/AsfalHills_House3/scripts.pory"
	msgbox AsfalHills_House3_EventScript_Worker_Text_1
# 9 "data/maps/AsfalHills_House3/scripts.pory"
	closemessage
# 10 "data/maps/AsfalHills_House3/scripts.pory"
	release
	end


AsfalHills_House3_EventScript_Pichu::
# 16 "data/maps/AsfalHills_House3/scripts.pory"
	lock
# 17 "data/maps/AsfalHills_House3/scripts.pory"
	faceplayer
# 18 "data/maps/AsfalHills_House3/scripts.pory"
	speakername AsfalHills_House3_EventScript_Pichu_Text_0
# 19 "data/maps/AsfalHills_House3/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 20 "data/maps/AsfalHills_House3/scripts.pory"
	msgbox AsfalHills_House3_EventScript_Pichu_Text_1
# 21 "data/maps/AsfalHills_House3/scripts.pory"
	waitmoncry
# 22 "data/maps/AsfalHills_House3/scripts.pory"
	closemessage
# 23 "data/maps/AsfalHills_House3/scripts.pory"
	release
	end


AsfalHills_House3_EventScript_Worker_Text_0:
# 7 "data/maps/AsfalHills_House3/scripts.pory"
	.string "Worker$"

AsfalHills_House3_EventScript_Worker_Text_1:
# 8 "data/maps/AsfalHills_House3/scripts.pory"
	.string "I live out here with my Pokémon to get\n"
	.string "away from the city noise. It's like\l"
	.string "another world on the other side of the\l"
	.string "city walls!$"

AsfalHills_House3_EventScript_Pichu_Text_0:
# 18 "data/maps/AsfalHills_House3/scripts.pory"
	.string "Pichu$"

AsfalHills_House3_EventScript_Pichu_Text_1:
# 20 "data/maps/AsfalHills_House3/scripts.pory"
	.string "Pii-i!$"

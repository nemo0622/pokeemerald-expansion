PythiosTown_House2_MapScripts::
	.byte 0


PythiosTown_House2_EventScript_LittleGirl::
# 5 "data/maps/PythiosTown_House2/scripts.pory"
	lock
# 6 "data/maps/PythiosTown_House2/scripts.pory"
	faceplayer
# 7 "data/maps/PythiosTown_House2/scripts.pory"
	speakername PythiosTown_House2_EventScript_LittleGirl_Text_0
# 8 "data/maps/PythiosTown_House2/scripts.pory"
	msgbox PythiosTown_House2_EventScript_LittleGirl_Text_1
# 9 "data/maps/PythiosTown_House2/scripts.pory"
	closemessage
# 10 "data/maps/PythiosTown_House2/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 11 "data/maps/PythiosTown_House2/scripts.pory"
	waitmovement 0
# 12 "data/maps/PythiosTown_House2/scripts.pory"
	release
	end


PythiosTown_House2_EventScript_Man::
# 18 "data/maps/PythiosTown_House2/scripts.pory"
	lock
# 19 "data/maps/PythiosTown_House2/scripts.pory"
	faceplayer
# 20 "data/maps/PythiosTown_House2/scripts.pory"
	speakername PythiosTown_House2_EventScript_Man_Text_0
# 21 "data/maps/PythiosTown_House2/scripts.pory"
	msgbox PythiosTown_House2_EventScript_Man_Text_1
# 22 "data/maps/PythiosTown_House2/scripts.pory"
	closemessage
# 23 "data/maps/PythiosTown_House2/scripts.pory"
	release
	end


PythiosTown_House2_EventScript_OldWoman::
# 29 "data/maps/PythiosTown_House2/scripts.pory"
	lock
# 30 "data/maps/PythiosTown_House2/scripts.pory"
	faceplayer
# 31 "data/maps/PythiosTown_House2/scripts.pory"
	speakername PythiosTown_House2_EventScript_OldWoman_Text_0
# 32 "data/maps/PythiosTown_House2/scripts.pory"
	msgbox PythiosTown_House2_EventScript_OldWoman_Text_1
# 33 "data/maps/PythiosTown_House2/scripts.pory"
	closemessage
# 34 "data/maps/PythiosTown_House2/scripts.pory"
	release
	end


PythiosTown_House2_EventScript_LittleGirl_Text_0:
# 7 "data/maps/PythiosTown_House2/scripts.pory"
	.string "Little Girl$"

PythiosTown_House2_EventScript_LittleGirl_Text_1:
# 8 "data/maps/PythiosTown_House2/scripts.pory"
	.string "Cartoons are so cool! I can't just sit\n"
	.string "on the couch, I have to be right up in\l"
	.string "front of the TV!$"

PythiosTown_House2_EventScript_Man_Text_0:
# 20 "data/maps/PythiosTown_House2/scripts.pory"
	.string "Man$"

PythiosTown_House2_EventScript_Man_Text_1:
# 21 "data/maps/PythiosTown_House2/scripts.pory"
	.string "Don't tell my daughter, but I also like\n"
	.string "the cartoons she watches. I guess\l"
	.string "animation really IS for all ages!$"

PythiosTown_House2_EventScript_OldWoman_Text_0:
# 31 "data/maps/PythiosTown_House2/scripts.pory"
	.string "Old Woman$"

PythiosTown_House2_EventScript_OldWoman_Text_1:
# 32 "data/maps/PythiosTown_House2/scripts.pory"
	.string "In my prime, I used to go into these\n"
	.string "woods and catch Pokémon for fun. I'm a\l"
	.string "bit too old now for adventures, but the\l"
	.string "walks are still nice.$"

PythiosTown_House1_MapScripts::
	.byte 0


PythiosTown_House1_EventScript_BlackBelt::
# 5 "data/maps/PythiosTown_House1/scripts.pory"
	lock
# 6 "data/maps/PythiosTown_House1/scripts.pory"
	faceplayer
# 7 "data/maps/PythiosTown_House1/scripts.pory"
	speakername PythiosTown_House1_EventScript_BlackBelt_Text_0
# 8 "data/maps/PythiosTown_House1/scripts.pory"
	msgbox PythiosTown_House1_EventScript_BlackBelt_Text_1
# 9 "data/maps/PythiosTown_House1/scripts.pory"
	closemessage
# 10 "data/maps/PythiosTown_House1/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_REST, PythiosTown_House1_EventScript_BlackBelt_2
PythiosTown_House1_EventScript_BlackBelt_1:
# 18 "data/maps/PythiosTown_House1/scripts.pory"
	release
	end

PythiosTown_House1_EventScript_BlackBelt_2:
# 12 "data/maps/PythiosTown_House1/scripts.pory"
	speakername PythiosTown_House1_EventScript_BlackBelt_Text_0
# 13 "data/maps/PythiosTown_House1/scripts.pory"
	msgbox PythiosTown_House1_EventScript_BlackBelt_Text_2
# 14 "data/maps/PythiosTown_House1/scripts.pory"
	closemessage
# 15 "data/maps/PythiosTown_House1/scripts.pory"
	giveitem ITEM_TM_REST
# 16 "data/maps/PythiosTown_House1/scripts.pory"
	setflag FLAG_RECEIVED_TM_REST
	goto PythiosTown_House1_EventScript_BlackBelt_1


PythiosTown_House1_EventScript_Beauty::
# 24 "data/maps/PythiosTown_House1/scripts.pory"
	lock
# 25 "data/maps/PythiosTown_House1/scripts.pory"
	faceplayer
# 26 "data/maps/PythiosTown_House1/scripts.pory"
	speakername PythiosTown_House1_EventScript_Beauty_Text_0
# 27 "data/maps/PythiosTown_House1/scripts.pory"
	msgbox PythiosTown_House1_EventScript_Beauty_Text_1
# 28 "data/maps/PythiosTown_House1/scripts.pory"
	closemessage
# 29 "data/maps/PythiosTown_House1/scripts.pory"
	release
	end


PythiosTown_House1_EventScript_BlackBelt_Text_0:
# 7 "data/maps/PythiosTown_House1/scripts.pory"
	.string "Black Belt$"

PythiosTown_House1_EventScript_BlackBelt_Text_1:
# 8 "data/maps/PythiosTown_House1/scripts.pory"
	.string "Ahh, it's nice to take a load off after a\n"
	.string "long day of training...$"

PythiosTown_House1_EventScript_BlackBelt_Text_2:
# 13 "data/maps/PythiosTown_House1/scripts.pory"
	.string "Hey, it looks like you could use a rest,\n"
	.string "too. A little on the nose, but take this!$"

PythiosTown_House1_EventScript_Beauty_Text_0:
# 26 "data/maps/PythiosTown_House1/scripts.pory"
	.string "Beauty$"

PythiosTown_House1_EventScript_Beauty_Text_1:
# 27 "data/maps/PythiosTown_House1/scripts.pory"
	.string "I've made a few pearl and seashell\n"
	.string "necklaces from what I find on the\l"
	.string "beach!\p"
	.string "I know places like Sofos City have\n"
	.string "larger beaches, but there's something\l"
	.string "so comfortable about Pythios Town.$"

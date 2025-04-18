KiposTown_house1_MapScripts::
	.byte 0


KiposTown_House1_EventScript_Woman::
# 5 "data/maps/KiposTown_house1/scripts.pory"
	lock
# 6 "data/maps/KiposTown_house1/scripts.pory"
	faceplayer
# 7 "data/maps/KiposTown_house1/scripts.pory"
	speakername KiposTown_House1_EventScript_Woman_Text_0
# 8 "data/maps/KiposTown_house1/scripts.pory"
	msgbox KiposTown_House1_EventScript_Woman_Text_1
# 9 "data/maps/KiposTown_house1/scripts.pory"
	closemessage
# 10 "data/maps/KiposTown_house1/scripts.pory"
	goto_if_unset FLAG_GIVEN_TERA_SHARD_KIPOS, KiposTown_House1_EventScript_Woman_2
KiposTown_House1_EventScript_Woman_1:
# 18 "data/maps/KiposTown_house1/scripts.pory"
	release
	end

KiposTown_House1_EventScript_Woman_2:
# 12 "data/maps/KiposTown_house1/scripts.pory"
	speakername KiposTown_House1_EventScript_Woman_Text_0
# 13 "data/maps/KiposTown_house1/scripts.pory"
	msgbox KiposTown_House1_EventScript_Woman_Text_2
# 14 "data/maps/KiposTown_house1/scripts.pory"
	closemessage
# 15 "data/maps/KiposTown_house1/scripts.pory"
	giveitem ITEM_ELECTRIC_TERA_SHARD
# 16 "data/maps/KiposTown_house1/scripts.pory"
	setflag FLAG_GIVEN_TERA_SHARD_KIPOS
	goto KiposTown_House1_EventScript_Woman_1


KiposTown_House1_EventScript_Woman_Text_0:
# 7 "data/maps/KiposTown_house1/scripts.pory"
	.string "Woman$"

KiposTown_House1_EventScript_Woman_Text_1:
# 8 "data/maps/KiposTown_house1/scripts.pory"
	.string "Most of the buildings around here are\n"
	.string "made of local limestone. It gives the\l"
	.string "town a beige-yellow tint.$"

KiposTown_House1_EventScript_Woman_Text_2:
# 13 "data/maps/KiposTown_house1/scripts.pory"
	.string "A few of these weird shards were found\n"
	.string "with the limestone, actually. Here,\l"
	.string "maybe it can be used for something.$"

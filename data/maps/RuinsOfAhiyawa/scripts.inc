RuinsOfAhiyawa_MapScripts::
# 2 "data/maps/RuinsOfAhiyawa/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RuinsOfAhiyawa_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

RuinsOfAhiyawa_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/RuinsOfAhiyawa/scripts.pory"
	setflag FLAG_VISITED_RUINS_OF_AHIYAWA
	return


RuinsOfAhiyawa_EventScript_WelcomeSign::
# 9 "data/maps/RuinsOfAhiyawa/scripts.pory"
	lock
# 10 "data/maps/RuinsOfAhiyawa/scripts.pory"
	msgbox RuinsOfAhiyawa_EventScript_WelcomeSign_Text_0
# 11 "data/maps/RuinsOfAhiyawa/scripts.pory"
	closemessage
# 12 "data/maps/RuinsOfAhiyawa/scripts.pory"
	release
	end


RuinsOfAhiyawa_EventScript_WelcomeSign_Text_0:
# 10 "data/maps/RuinsOfAhiyawa/scripts.pory"
	.string "Ruins of Ahiyawa\n"
	.string "Site of Ancient Glory, Home of the Elite\l"
	.string "Four$"

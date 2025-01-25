SofosCity_MapScripts::
# 2 "data/maps/SofosCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SofosCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SofosCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SofosCity/scripts.pory"
	setflag FLAG_VISITED_SOFOS_CITY
	return


SofosCity_EventScript_GameCornerSign::
# 9 "data/maps/SofosCity/scripts.pory"
	lock
# 10 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GameCornerSign_Text_0
# 11 "data/maps/SofosCity/scripts.pory"
	closemessage
# 12 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_GameCornerSign_Text_0:
# 10 "data/maps/SofosCity/scripts.pory"
	.string "Sofos City Game Corner\p"
	.string "Play Pinball, Get Prizes!$"

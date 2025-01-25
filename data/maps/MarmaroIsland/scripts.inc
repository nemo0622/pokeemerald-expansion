MarmaroIsland_MapScripts::
# 2 "data/maps/MarmaroIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MarmaroIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MarmaroIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MarmaroIsland/scripts.pory"
	setflag FLAG_VISITED_MARMARO_ISLAND
	return


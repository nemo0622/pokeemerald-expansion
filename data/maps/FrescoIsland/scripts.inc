FrescoIsland_MapScripts::
# 2 "data/maps/FrescoIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FrescoIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FrescoIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FrescoIsland/scripts.pory"
	setflag FLAG_VISITED_FRESCO_ISLAND
	return


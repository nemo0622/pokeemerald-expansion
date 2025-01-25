PalatiCity_MapScripts::
# 2 "data/maps/PalatiCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalatiCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PalatiCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PalatiCity/scripts.pory"
	setflag FLAG_VISITED_PALATI_CITY
	return


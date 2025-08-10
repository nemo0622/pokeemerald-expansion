KaptaraIsland_West_MapScripts::
# 2 "data/maps/KaptaraIsland_West/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KaptaraIsland_West_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

KaptaraIsland_West_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/KaptaraIsland_West/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, KaptaraIsland_West_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

KaptaraIsland_West_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/KaptaraIsland_West/scripts.pory"
	setweather WEATHER_ABNORMAL
	return


ChampionsPeak_Outside_MapScripts::
# 2 "data/maps/ChampionsPeak_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ChampionsPeak_Outside_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ChampionsPeak_Outside_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ChampionsPeak_Outside/scripts.pory"
	setflag FLAG_VISITED_CHAMPIONS_PEAK
	return


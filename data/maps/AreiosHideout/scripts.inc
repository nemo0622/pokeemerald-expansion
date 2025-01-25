AreiosHideout_MapScripts::
# 2 "data/maps/AreiosHideout/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AreiosHideout_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AreiosHideout_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/AreiosHideout/scripts.pory"
	setflag FLAG_VISITED_AREIOS_HIDEOUT
	return


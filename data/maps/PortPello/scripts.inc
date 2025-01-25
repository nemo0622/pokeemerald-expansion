PortPello_MapScripts::
# 2 "data/maps/PortPello/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PortPello_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PortPello_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PortPello/scripts.pory"
	setflag FLAG_VISITED_PORT_PELLO
	return


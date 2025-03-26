AcrisiaMountain_Peak_MapScripts::
# 2 "data/maps/AcrisiaMountain_Peak/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AcrisiaMountain_Peak_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AcrisiaMountain_Peak_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/AcrisiaMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 4 "data/maps/AcrisiaMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 5 "data/maps/AcrisiaMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 6 "data/maps/AcrisiaMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 7 "data/maps/AcrisiaMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 8 "data/maps/AcrisiaMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 9 "data/maps/AcrisiaMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 10 "data/maps/AcrisiaMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 11 "data/maps/AcrisiaMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 12 "data/maps/AcrisiaMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 13 "data/maps/AcrisiaMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 14 "data/maps/AcrisiaMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 15 "data/maps/AcrisiaMountain_Peak/scripts.pory"
	setobjectaswildencounter 3, ENCOUNTER_LAND
# 16 "data/maps/AcrisiaMountain_Peak/scripts.pory"
	setobjectaswildencounter 4, ENCOUNTER_LAND
	return


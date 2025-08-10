RiverwalkTrail_South_MapScripts::
# 2 "data/maps/RiverwalkTrail_South/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RiverwalkTrail_South_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

RiverwalkTrail_South_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/RiverwalkTrail_South/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, RiverwalkTrail_South_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
RiverwalkTrail_South_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 9 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 10 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 11 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 12 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 13 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 14 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 15 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 16 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 17 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 18 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 19 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 20 "data/maps/RiverwalkTrail_South/scripts.pory"
	setobjectaswildencounter 1, ENCOUNTER_LAND
# 21 "data/maps/RiverwalkTrail_South/scripts.pory"
	setobjectaswildencounter 2, ENCOUNTER_LAND
# 22 "data/maps/RiverwalkTrail_South/scripts.pory"
	setobjectaswildencounter 3, ENCOUNTER_LAND
# 23 "data/maps/RiverwalkTrail_South/scripts.pory"
	setobjectaswildencounter 4, ENCOUNTER_LAND
# 24 "data/maps/RiverwalkTrail_South/scripts.pory"
	setobjectaswildencounter 5, ENCOUNTER_SURF
# 25 "data/maps/RiverwalkTrail_South/scripts.pory"
	setobjectaswildencounter 6, ENCOUNTER_SURF
	return

RiverwalkTrail_South_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/RiverwalkTrail_South/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto RiverwalkTrail_South_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


RiverwalkTrail_South_EventScript_DirectionSign::
# 31 "data/maps/RiverwalkTrail_South/scripts.pory"
	lock
# 32 "data/maps/RiverwalkTrail_South/scripts.pory"
	msgbox RiverwalkTrail_South_EventScript_DirectionSign_Text_0
# 33 "data/maps/RiverwalkTrail_South/scripts.pory"
	closemessage
# 34 "data/maps/RiverwalkTrail_South/scripts.pory"
	release
	end


RiverwalkTrail_SOUTH_EventScript_Trainer_RiverwalkTrail_SOUTH_Berkley::
# 40 "data/maps/RiverwalkTrail_South/scripts.pory"
	trainerbattle_single TRAINER_RIVERWALK_TRAIL_S_BERKLEY, RiverwalkTrail_SOUTH_Text_Trainer_RiverwalkTrail_SOUTH_BerkleyIntro, RiverwalkTrail_SOUTH_Text_Trainer_RiverwalkTrail_SOUTH_BerkleyDefeat
# 41 "data/maps/RiverwalkTrail_South/scripts.pory"
	speakername RiverwalkTrail_SOUTH_EventScript_Trainer_RiverwalkTrail_SOUTH_Berkley_Text_0
# 42 "data/maps/RiverwalkTrail_South/scripts.pory"
	msgbox RiverwalkTrail_SOUTH_EventScript_Trainer_RiverwalkTrail_SOUTH_Berkley_Text_1
# 43 "data/maps/RiverwalkTrail_South/scripts.pory"
	closemessage
# 44 "data/maps/RiverwalkTrail_South/scripts.pory"
	release
	end


RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Markus::
# 58 "data/maps/RiverwalkTrail_South/scripts.pory"
	trainerbattle_single TRAINER_RIVERWALK_TRAIL_S_MARKUS, RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_MarkusIntro, RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_MarkusDefeat
# 59 "data/maps/RiverwalkTrail_South/scripts.pory"
	speakername RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Markus_Text_0
# 60 "data/maps/RiverwalkTrail_South/scripts.pory"
	msgbox RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Markus_Text_1
# 61 "data/maps/RiverwalkTrail_South/scripts.pory"
	closemessage
# 62 "data/maps/RiverwalkTrail_South/scripts.pory"
	release
	end


RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Tina::
# 76 "data/maps/RiverwalkTrail_South/scripts.pory"
	trainerbattle_single TRAINER_RIVERWALK_TRAIL_S_TINA, RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_TinaIntro, RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_TinasDefeat
# 77 "data/maps/RiverwalkTrail_South/scripts.pory"
	speakername RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Tina_Text_0
# 78 "data/maps/RiverwalkTrail_South/scripts.pory"
	msgbox RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Tina_Text_1
# 79 "data/maps/RiverwalkTrail_South/scripts.pory"
	closemessage
# 80 "data/maps/RiverwalkTrail_South/scripts.pory"
	release
	end


RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Gianna::
# 94 "data/maps/RiverwalkTrail_South/scripts.pory"
	trainerbattle_single TRAINER_RIVERWALK_TRAIL_S_GIANNA, RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_GiannaIntro, RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_GiannasDefeat
# 95 "data/maps/RiverwalkTrail_South/scripts.pory"
	speakername RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Gianna_Text_0
# 96 "data/maps/RiverwalkTrail_South/scripts.pory"
	msgbox RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Gianna_Text_1
# 97 "data/maps/RiverwalkTrail_South/scripts.pory"
	closemessage
# 98 "data/maps/RiverwalkTrail_South/scripts.pory"
	release
	end


RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Barnett::
# 112 "data/maps/RiverwalkTrail_South/scripts.pory"
	trainerbattle_single TRAINER_RIVERWALK_TRAIL_S_BARNETT, RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_BarnettIntro, RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_BarnettsDefeat
# 113 "data/maps/RiverwalkTrail_South/scripts.pory"
	speakername RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Barnett_Text_0
# 114 "data/maps/RiverwalkTrail_South/scripts.pory"
	msgbox RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Barnett_Text_1
# 115 "data/maps/RiverwalkTrail_South/scripts.pory"
	closemessage
# 116 "data/maps/RiverwalkTrail_South/scripts.pory"
	release
	end


RiverwalkTrail_South_EventScript_DirectionSign_Text_0:
# 32 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Riverwalk Trail - South\n"
	.string "The Reed Road\p"
	.string "{UP_ARROW} Riverwalk Trail - West\n"
	.string "Kalami City {DOWN_ARROW}$"

RiverwalkTrail_SOUTH_EventScript_Trainer_RiverwalkTrail_SOUTH_Berkley_Text_0:
# 41 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Berkley$"

RiverwalkTrail_SOUTH_EventScript_Trainer_RiverwalkTrail_SOUTH_Berkley_Text_1:
# 42 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "I can see myself in the puddles! My\n"
	.string "muscles look good, right?$"

RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Markus_Text_0:
# 59 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Markus$"

RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Markus_Text_1:
# 60 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Some Pokémon you can only find by\n"
	.string "Surfing can come up into the shallow\l"
	.string "water to fight. Keep an eye out!$"

RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Tina_Text_0:
# 77 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Tina$"

RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Tina_Text_1:
# 78 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "I hear that a small population of\n"
	.string "Tropius can be found here. Maybe one of\l"
	.string "them would help me get stronger!$"

RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Gianna_Text_0:
# 95 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Gianna$"

RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Gianna_Text_1:
# 96 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Pokémon that come out of the grass and\n"
	.string "show themselves can be Shiny. Make sure\l"
	.string "to check whenever you see them!$"

RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Barnett_Text_0:
# 113 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Barnett$"

RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Barnett_Text_1:
# 114 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "I'm on the lookout for Team Chimera\n"
	.string "grunts. They're on the rise!$"

RiverwalkTrail_SOUTH_Text_Trainer_RiverwalkTrail_SOUTH_BerkleyIntro::
# 47 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "I could splash through these puddles\n"
	.string "all day! Huh? A battle?$"

RiverwalkTrail_SOUTH_Text_Trainer_RiverwalkTrail_SOUTH_BerkleyDefeat::
# 51 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "My head wasn't in the game!$"

RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_MarkusIntro::
# 65 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Some water-dwelling Pokémon come out\n"
	.string "of the water into the shallows for a\l"
	.string "fight!$"

RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_MarkusDefeat::
# 69 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Wow, I'd better crawl back into the\n"
	.string "water.$"

RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_TinaIntro::
# 83 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "My Pokémon will rule the swamp!$"

RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_TinasDefeat::
# 87 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Well, we COULD rule the swamp someday!$"

RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_GiannaIntro::
# 101 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "I'm studying Pokémon wetland\n"
	.string "environments! Help me learn more!$"

RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_GiannasDefeat::
# 105 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "I guess strong Trainers are found in\n"
	.string "wetlands, too.$"

RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_BarnettIntro::
# 119 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Hey, you! No Team Chimera members can\n"
	.string "get past me!$"

RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_BarnettsDefeat::
# 123 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Oh, you're not with Team Chimera? ...Hm.$"

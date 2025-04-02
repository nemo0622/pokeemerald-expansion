RiverwalkTrail_South_MapScripts::
# 2 "data/maps/RiverwalkTrail_South/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RiverwalkTrail_South_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

RiverwalkTrail_South_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 4 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 5 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 6 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 7 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 8 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 9 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 10 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 11 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 12 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 13 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 14 "data/maps/RiverwalkTrail_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 15 "data/maps/RiverwalkTrail_South/scripts.pory"
	setobjectaswildencounter 1, ENCOUNTER_LAND
# 16 "data/maps/RiverwalkTrail_South/scripts.pory"
	setobjectaswildencounter 2, ENCOUNTER_LAND
# 17 "data/maps/RiverwalkTrail_South/scripts.pory"
	setobjectaswildencounter 3, ENCOUNTER_LAND
# 18 "data/maps/RiverwalkTrail_South/scripts.pory"
	setobjectaswildencounter 4, ENCOUNTER_LAND
# 19 "data/maps/RiverwalkTrail_South/scripts.pory"
	setobjectaswildencounter 5, ENCOUNTER_SURF
# 20 "data/maps/RiverwalkTrail_South/scripts.pory"
	setobjectaswildencounter 6, ENCOUNTER_SURF
	return


RiverwalkTrail_South_EventScript_DirectionSign::
# 26 "data/maps/RiverwalkTrail_South/scripts.pory"
	lock
# 27 "data/maps/RiverwalkTrail_South/scripts.pory"
	msgbox RiverwalkTrail_South_EventScript_DirectionSign_Text_0
# 28 "data/maps/RiverwalkTrail_South/scripts.pory"
	closemessage
# 29 "data/maps/RiverwalkTrail_South/scripts.pory"
	release
	end


RiverwalkTrail_SOUTH_EventScript_Trainer_RiverwalkTrail_SOUTH_Berkley::
# 35 "data/maps/RiverwalkTrail_South/scripts.pory"
	trainerbattle_single TRAINER_RIVERWALK_TRAIL_S_BERKLEY, RiverwalkTrail_SOUTH_Text_Trainer_RiverwalkTrail_SOUTH_BerkleyIntro, RiverwalkTrail_SOUTH_Text_Trainer_RiverwalkTrail_SOUTH_BerkleyDefeat
# 36 "data/maps/RiverwalkTrail_South/scripts.pory"
	speakername RiverwalkTrail_SOUTH_EventScript_Trainer_RiverwalkTrail_SOUTH_Berkley_Text_0
# 37 "data/maps/RiverwalkTrail_South/scripts.pory"
	msgbox RiverwalkTrail_SOUTH_EventScript_Trainer_RiverwalkTrail_SOUTH_Berkley_Text_1
# 38 "data/maps/RiverwalkTrail_South/scripts.pory"
	closemessage
# 39 "data/maps/RiverwalkTrail_South/scripts.pory"
	release
	end


RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Markus::
# 53 "data/maps/RiverwalkTrail_South/scripts.pory"
	trainerbattle_single TRAINER_RIVERWALK_TRAIL_S_MARKUS, RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_MarkusIntro, RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_MarkusDefeat
# 54 "data/maps/RiverwalkTrail_South/scripts.pory"
	speakername RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Markus_Text_0
# 55 "data/maps/RiverwalkTrail_South/scripts.pory"
	msgbox RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Markus_Text_1
# 56 "data/maps/RiverwalkTrail_South/scripts.pory"
	closemessage
# 57 "data/maps/RiverwalkTrail_South/scripts.pory"
	release
	end


RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Tina::
# 71 "data/maps/RiverwalkTrail_South/scripts.pory"
	trainerbattle_single TRAINER_RIVERWALK_TRAIL_S_TINA, RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_TinaIntro, RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_TinasDefeat
# 72 "data/maps/RiverwalkTrail_South/scripts.pory"
	speakername RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Tina_Text_0
# 73 "data/maps/RiverwalkTrail_South/scripts.pory"
	msgbox RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Tina_Text_1
# 74 "data/maps/RiverwalkTrail_South/scripts.pory"
	closemessage
# 75 "data/maps/RiverwalkTrail_South/scripts.pory"
	release
	end


RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Gianna::
# 89 "data/maps/RiverwalkTrail_South/scripts.pory"
	trainerbattle_single TRAINER_RIVERWALK_TRAIL_S_GIANNA, RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_GiannaIntro, RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_GiannasDefeat
# 90 "data/maps/RiverwalkTrail_South/scripts.pory"
	speakername RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Gianna_Text_0
# 91 "data/maps/RiverwalkTrail_South/scripts.pory"
	msgbox RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Gianna_Text_1
# 92 "data/maps/RiverwalkTrail_South/scripts.pory"
	closemessage
# 93 "data/maps/RiverwalkTrail_South/scripts.pory"
	release
	end


RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Barnett::
# 107 "data/maps/RiverwalkTrail_South/scripts.pory"
	trainerbattle_single TRAINER_RIVERWALK_TRAIL_S_BARNETT, RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_BarnettIntro, RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_BarnettsDefeat
# 108 "data/maps/RiverwalkTrail_South/scripts.pory"
	speakername RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Barnett_Text_0
# 109 "data/maps/RiverwalkTrail_South/scripts.pory"
	msgbox RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Barnett_Text_1
# 110 "data/maps/RiverwalkTrail_South/scripts.pory"
	closemessage
# 111 "data/maps/RiverwalkTrail_South/scripts.pory"
	release
	end


RiverwalkTrail_South_EventScript_DirectionSign_Text_0:
# 27 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Riverwalk Trail - South\n"
	.string "The Reed Road\p"
	.string "{UP_ARROW} Riverwalk Trail - West\n"
	.string "Kalami City {DOWN_ARROW}$"

RiverwalkTrail_SOUTH_EventScript_Trainer_RiverwalkTrail_SOUTH_Berkley_Text_0:
# 36 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Berkley$"

RiverwalkTrail_SOUTH_EventScript_Trainer_RiverwalkTrail_SOUTH_Berkley_Text_1:
# 37 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "I can see myself in the puddles! My\n"
	.string "muscles look good, right?$"

RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Markus_Text_0:
# 54 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Markus$"

RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Markus_Text_1:
# 55 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Some Pokémon you can only find by\n"
	.string "Surfing can come up into the shallow\l"
	.string "water to fight. Keep an eye out!$"

RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Tina_Text_0:
# 72 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Tina$"

RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Tina_Text_1:
# 73 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "I hear that a small population of\n"
	.string "Tropius can be found here. Maybe one of\l"
	.string "them would help me get stronger!$"

RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Gianna_Text_0:
# 90 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Gianna$"

RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Gianna_Text_1:
# 91 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Pokémon that come out of the grass and\n"
	.string "show themselves can be Shiny. Make sure\l"
	.string "to check whenever you see them!$"

RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Barnett_Text_0:
# 108 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Barnett$"

RiverwalkTrail_South_EventScript_Trainer_Riverwalk_Trail_S_Barnett_Text_1:
# 109 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "I'm on the lookout for Team Chimera\n"
	.string "grunts. They're on the rise!$"

RiverwalkTrail_SOUTH_Text_Trainer_RiverwalkTrail_SOUTH_BerkleyIntro::
# 42 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "I could splash through these puddles\n"
	.string "all day! Huh? A battle?$"

RiverwalkTrail_SOUTH_Text_Trainer_RiverwalkTrail_SOUTH_BerkleyDefeat::
# 46 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "My head wasn't in the game!$"

RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_MarkusIntro::
# 60 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Some water-dwelling Pokémon come out\n"
	.string "of the water into the shallows for a\l"
	.string "fight!$"

RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_MarkusDefeat::
# 64 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Wow, I'd better crawl back into the\n"
	.string "water.$"

RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_TinaIntro::
# 78 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "My Pokémon will rule the swamp!$"

RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_TinasDefeat::
# 82 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Well, we COULD rule the swamp someday!$"

RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_GiannaIntro::
# 96 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "I'm studying Pokémon wetland\n"
	.string "environments! Help me learn more!$"

RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_GiannasDefeat::
# 100 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "I guess strong Trainers are found in\n"
	.string "wetlands, too.$"

RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_BarnettIntro::
# 114 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Hey, you! No Team Chimera members can\n"
	.string "get past me!$"

RiverwalkTrail_South_Text_Trainer_Riverwalk_Trail_S_BarnettsDefeat::
# 118 "data/maps/RiverwalkTrail_South/scripts.pory"
	.string "Oh, you're not with Team Chimera? ...Hm.$"

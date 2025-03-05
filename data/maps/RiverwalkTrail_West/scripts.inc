RiverwalkTrail_West_MapScripts::
# 2 "data/maps/RiverwalkTrail_West/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RiverwalkTrail_West_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

RiverwalkTrail_West_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 4 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 5 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 6 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 7 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 8 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 9 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 10 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 11 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 12 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 13 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 14 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 15 "data/maps/RiverwalkTrail_West/scripts.pory"
	setobjectaswildencounter 10, ENCOUNTER_LAND
# 16 "data/maps/RiverwalkTrail_West/scripts.pory"
	setobjectaswildencounter 11, ENCOUNTER_LAND
# 17 "data/maps/RiverwalkTrail_West/scripts.pory"
	setobjectaswildencounter 12, ENCOUNTER_LAND
# 18 "data/maps/RiverwalkTrail_West/scripts.pory"
	setobjectaswildencounter 13, ENCOUNTER_LAND
# 19 "data/maps/RiverwalkTrail_West/scripts.pory"
	setobjectaswildencounter 14, ENCOUNTER_LAND
	return


RiverwalkTrail_West_EventScript_ManCrossedBridge::
# 25 "data/maps/RiverwalkTrail_West/scripts.pory"
	lock
# 26 "data/maps/RiverwalkTrail_West/scripts.pory"
	faceplayer
# 27 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_West_EventScript_ManCrossedBridge_Text_0
# 28 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_West_EventScript_ManCrossedBridge_Text_1
# 29 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 30 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end


RiverwalkTrail_West_EventScript_TRAINER_RIVERWALK_TRAIL_W_JOSUA::
# 36 "data/maps/RiverwalkTrail_West/scripts.pory"
	trainerbattle_single TRAINER_RIVERWALK_TRAIL_W_JOSUA, RiverwalkTrail_West_Text_TRAINER_RIVERWALK_TRAIL_W_JOSUAIntro, RiverwalkTrail_West_Text_TRAINER_RIVERWALK_TRAIL_W_JOSUADefeat
# 37 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_West_EventScript_TRAINER_RIVERWALK_TRAIL_W_JOSUA_Text_0
# 38 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_West_EventScript_TRAINER_RIVERWALK_TRAIL_W_JOSUA_Text_1
# 39 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 40 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end


RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Umber::
# 54 "data/maps/RiverwalkTrail_West/scripts.pory"
	trainerbattle_single TRAINER_RIVERWALK_TRAIL_W_UMBER, RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_UmberIntro, RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_UmberDefeat
# 55 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Umber_Text_0
# 56 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Umber_Text_1
# 57 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 58 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end


RiverwalkTrail_West_EventScript_Athlete::
# 72 "data/maps/RiverwalkTrail_West/scripts.pory"
	lock
# 73 "data/maps/RiverwalkTrail_West/scripts.pory"
	faceplayer
# 74 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_West_EventScript_Athlete_Text_0
# 75 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_West_EventScript_Athlete_Text_1
# 76 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 77 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end


RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Margarey::
# 83 "data/maps/RiverwalkTrail_West/scripts.pory"
	trainerbattle_single TRAINER_RIVERWALK_TRAIL_W_MARGAREY, RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_MargareyIntro, RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_MargareyDefeat
# 84 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Margarey_Text_0
# 85 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Margarey_Text_1
# 86 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 87 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end


RiverwalkTrail_West_EventScript_Fisherman::
# 101 "data/maps/RiverwalkTrail_West/scripts.pory"
	lock
# 102 "data/maps/RiverwalkTrail_West/scripts.pory"
	faceplayer
# 103 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_West_EventScript_Fisherman_Text_0
# 104 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_West_EventScript_Fisherman_Text_1
# 105 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 106 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end


RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Kylon::
# 112 "data/maps/RiverwalkTrail_West/scripts.pory"
	trainerbattle_single TRAINER_RIVERWALK_TRAIL_W_KYLON, RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_KylonIntro, RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_KylonDefeat
# 113 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Kylon_Text_0
# 114 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Kylon_Text_1
# 115 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 116 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end


RiverwalkTrail_West_EventScript_ManCrossedBridge_Text_0:
# 27 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "PokéManiac$"

RiverwalkTrail_West_EventScript_ManCrossedBridge_Text_1:
# 28 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Ahahaha, yes! I did it! I crossed the\n"
	.string "bridge and found a new area to catch\l"
	.string "Pokémon!\p"
	.string "This trail leads into a marshland and\n"
	.string "Kalami City. Who knows what I'll find!$"

RiverwalkTrail_West_EventScript_TRAINER_RIVERWALK_TRAIL_W_JOSUA_Text_0:
# 37 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Josua$"

RiverwalkTrail_West_EventScript_TRAINER_RIVERWALK_TRAIL_W_JOSUA_Text_1:
# 38 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "People often go to the Acrisia\n"
	.string "Mountains to train. The Trainers there\l"
	.string "can help prepare your Pokémon for\l"
	.string "Riverwalk Trail.$"

RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Umber_Text_0:
# 55 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Umber$"

RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Umber_Text_1:
# 56 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "I was hoping my Pokémon was magic\n"
	.string "somehow!$"

RiverwalkTrail_West_EventScript_Athlete_Text_0:
# 74 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Athlete$"

RiverwalkTrail_West_EventScript_Athlete_Text_1:
# 75 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "This way down from Acrisia City is super\n"
	.string "steep! It's quite the hike down the\l"
	.string "mountains, but the nice sights make it\l"
	.string "more fun.$"

RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Margarey_Text_0:
# 84 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Margarey$"

RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Margarey_Text_1:
# 85 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "I've heard of a special Pokémon which\n"
	.string "can be ridden. I wonder how you get\l"
	.string "that...$"

RiverwalkTrail_West_EventScript_Fisherman_Text_0:
# 103 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Fisherman$"

RiverwalkTrail_West_EventScript_Fisherman_Text_1:
# 104 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Multiple rivers flow down from the\n"
	.string "mountains towards Kalami City and the\l"
	.string "sea beyond. Lots of Water-type\l"
	.string "Pokémon make this area their home!$"

RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Kylon_Text_0:
# 113 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Kylon$"

RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Kylon_Text_1:
# 114 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "My mom says that Ghost-type Corsola\n"
	.string "are only found in polluted waters.$"

RiverwalkTrail_West_Text_TRAINER_RIVERWALK_TRAIL_W_JOSUAIntro::
# 43 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "I'm a step above the Trainers in the\n"
	.string "Bronze Fields! I hope you've been\l"
	.string "training!$"

RiverwalkTrail_West_Text_TRAINER_RIVERWALK_TRAIL_W_JOSUADefeat::
# 47 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Wow! Have you been to the Acrisia\n"
	.string "Mountains yet?$"

RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_UmberIntro::
# 61 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Don't freak out, but... I think my\n"
	.string "Pokémon is from space.$"

RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_UmberDefeat::
# 65 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "I couldn't even win using the powers of\n"
	.string "space?!$"

RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_MargareyIntro::
# 90 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "My Pokémon are used to rocky\n"
	.string "conditions. Let me show you!$"

RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_MargareyDefeat::
# 94 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Phew, your Pokémon might be tougher\n"
	.string "than mine!$"

RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_KylonIntro::
# 119 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "My Pokémon is old and wise, it can't\n"
	.string "lose!$"

RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_KylonDefeat::
# 123 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Maybe it's not so wise after all...$"

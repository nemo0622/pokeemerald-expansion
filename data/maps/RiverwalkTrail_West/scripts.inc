RiverwalkTrail_West_MapScripts::
# 2 "data/maps/RiverwalkTrail_West/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RiverwalkTrail_West_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

RiverwalkTrail_West_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/RiverwalkTrail_West/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, RiverwalkTrail_West_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
RiverwalkTrail_West_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 9 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 10 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 11 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 12 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 13 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 14 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 15 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 16 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 17 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 18 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 19 "data/maps/RiverwalkTrail_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 20 "data/maps/RiverwalkTrail_West/scripts.pory"
	setobjectaswildencounter 8, ENCOUNTER_LAND
# 21 "data/maps/RiverwalkTrail_West/scripts.pory"
	setobjectaswildencounter 9, ENCOUNTER_LAND
# 22 "data/maps/RiverwalkTrail_West/scripts.pory"
	setobjectaswildencounter 10, ENCOUNTER_LAND
# 23 "data/maps/RiverwalkTrail_West/scripts.pory"
	setobjectaswildencounter 11, ENCOUNTER_LAND
# 24 "data/maps/RiverwalkTrail_West/scripts.pory"
	setobjectaswildencounter 12, ENCOUNTER_LAND
	return

RiverwalkTrail_West_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/RiverwalkTrail_West/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto RiverwalkTrail_West_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


RiverwalkTrail_West_EventScript_DirectionSign::
# 30 "data/maps/RiverwalkTrail_West/scripts.pory"
	lock
# 31 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_West_EventScript_DirectionSign_Text_0
# 32 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 33 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end


RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck::
# 39 "data/maps/RiverwalkTrail_West/scripts.pory"
	lock
# 40 "data/maps/RiverwalkTrail_West/scripts.pory"
	faceplayer
# 41 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_Text_0
# 43 "data/maps/RiverwalkTrail_West/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_RIVERWALK, RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_2
# 50 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_Text_2
# 51 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 52 "data/maps/RiverwalkTrail_West/scripts.pory"
	special CheckRouteCaptureProgress
# 53 "data/maps/RiverwalkTrail_West/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_5
RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_1:
# 70 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end

RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_2:
# 45 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_Text_1
# 46 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
	goto RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_1

RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_5:
# 55 "data/maps/RiverwalkTrail_West/scripts.pory"
	delay 20
# 56 "data/maps/RiverwalkTrail_West/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 57 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_Text_0
# 58 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_Text_3
# 59 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 60 "data/maps/RiverwalkTrail_West/scripts.pory"
	delay 5
# 63 "data/maps/RiverwalkTrail_West/scripts.pory"
	giveitem ITEM_EVIOLITE
# 64 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 66 "data/maps/RiverwalkTrail_West/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_RIVERWALK
	goto RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_1


RiverwalkTrail_West_EventScript_ManCrossedBridge::
# 76 "data/maps/RiverwalkTrail_West/scripts.pory"
	lock
# 77 "data/maps/RiverwalkTrail_West/scripts.pory"
	faceplayer
# 78 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_West_EventScript_ManCrossedBridge_Text_0
# 79 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_West_EventScript_ManCrossedBridge_Text_1
# 80 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 81 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end


RiverwalkTrail_West_EventScript_TRAINER_RIVERWALK_TRAIL_W_JOSUA::
# 87 "data/maps/RiverwalkTrail_West/scripts.pory"
	trainerbattle_single TRAINER_RIVERWALK_TRAIL_W_JOSUA, RiverwalkTrail_West_Text_TRAINER_RIVERWALK_TRAIL_W_JOSUAIntro, RiverwalkTrail_West_Text_TRAINER_RIVERWALK_TRAIL_W_JOSUADefeat
# 88 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_West_EventScript_TRAINER_RIVERWALK_TRAIL_W_JOSUA_Text_0
# 89 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_West_EventScript_TRAINER_RIVERWALK_TRAIL_W_JOSUA_Text_1
# 90 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 91 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end


RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Umber::
# 105 "data/maps/RiverwalkTrail_West/scripts.pory"
	trainerbattle_single TRAINER_RIVERWALK_TRAIL_W_UMBER, RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_UmberIntro, RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_UmberDefeat
# 106 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Umber_Text_0
# 107 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Umber_Text_1
# 108 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 109 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end


RiverwalkTrail_West_EventScript_Athlete::
# 123 "data/maps/RiverwalkTrail_West/scripts.pory"
	lock
# 124 "data/maps/RiverwalkTrail_West/scripts.pory"
	faceplayer
# 125 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_West_EventScript_Athlete_Text_0
# 126 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_West_EventScript_Athlete_Text_1
# 127 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 128 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end


RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Margarey::
# 134 "data/maps/RiverwalkTrail_West/scripts.pory"
	trainerbattle_single TRAINER_RIVERWALK_TRAIL_W_MARGAREY, RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_MargareyIntro, RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_MargareyDefeat
# 135 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Margarey_Text_0
# 136 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Margarey_Text_1
# 137 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 138 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end


RiverwalkTrail_West_EventScript_Fisherman::
# 152 "data/maps/RiverwalkTrail_West/scripts.pory"
	lock
# 153 "data/maps/RiverwalkTrail_West/scripts.pory"
	faceplayer
# 154 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_West_EventScript_Fisherman_Text_0
# 155 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_West_EventScript_Fisherman_Text_1
# 156 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 157 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end


RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Kylon::
# 163 "data/maps/RiverwalkTrail_West/scripts.pory"
	trainerbattle_single TRAINER_RIVERWALK_TRAIL_W_KYLON, RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_KylonIntro, RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_KylonDefeat
# 164 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Kylon_Text_0
# 165 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Kylon_Text_1
# 166 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 167 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end


RiverwalkTrail_West_EventScript_DirectionSign_Text_0:
# 31 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Riverwalk Trail - West\n"
	.string "The Steep Hiking Trail\p"
	.string "{LEFT_ARROW} Acrisia City\n"
	.string "Riverwalk Trail - South {DOWN_ARROW}$"

RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_Text_0:
# 41 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Uni. Student$"

RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_Text_1:
# 45 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_Text_2:
# 50 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Chaire! I'm a student from the Acrisia\n"
	.string "University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in the Riverwalk Trail\l"
	.string "West and South areas. If you've caught\l"
	.string "all the Pokémon here, please let me\l"
	.string "know.$"

RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_Text_3:
# 58 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

RiverwalkTrail_West_EventScript_ManCrossedBridge_Text_0:
# 78 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "PokéManiac$"

RiverwalkTrail_West_EventScript_ManCrossedBridge_Text_1:
# 79 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Ahahaha, yes! I did it! I crossed the\n"
	.string "bridge and found a new area to catch\l"
	.string "Pokémon!\p"
	.string "This trail leads into a marshland and\n"
	.string "Kalami City. Who knows what I'll find!$"

RiverwalkTrail_West_EventScript_TRAINER_RIVERWALK_TRAIL_W_JOSUA_Text_0:
# 88 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Josua$"

RiverwalkTrail_West_EventScript_TRAINER_RIVERWALK_TRAIL_W_JOSUA_Text_1:
# 89 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "People often go to the Acrisia\n"
	.string "Mountains to train. The Trainers there\l"
	.string "can help prepare your Pokémon for\l"
	.string "Riverwalk Trail.$"

RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Umber_Text_0:
# 106 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Umber$"

RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Umber_Text_1:
# 107 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "I was hoping my Pokémon was magic\n"
	.string "somehow!$"

RiverwalkTrail_West_EventScript_Athlete_Text_0:
# 125 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Athlete$"

RiverwalkTrail_West_EventScript_Athlete_Text_1:
# 126 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "This way down from Acrisia City is super\n"
	.string "steep! It's quite the hike down the\l"
	.string "mountains, but the nice sights make it\l"
	.string "more fun.$"

RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Margarey_Text_0:
# 135 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Margarey$"

RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Margarey_Text_1:
# 136 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "I've heard of a special Pokémon which\n"
	.string "can be ridden. I wonder how you get\l"
	.string "that...$"

RiverwalkTrail_West_EventScript_Fisherman_Text_0:
# 154 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Fisherman$"

RiverwalkTrail_West_EventScript_Fisherman_Text_1:
# 155 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Multiple rivers flow down from the\n"
	.string "mountains towards Kalami City and the\l"
	.string "sea beyond. Lots of Water-type\l"
	.string "Pokémon make this area their home!$"

RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Kylon_Text_0:
# 164 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Kylon$"

RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Kylon_Text_1:
# 165 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "My mom says that Ghost-type Corsola\n"
	.string "are only found in polluted waters.$"

RiverwalkTrail_West_Text_TRAINER_RIVERWALK_TRAIL_W_JOSUAIntro::
# 94 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "I'm a step above the Trainers in the\n"
	.string "Bronze Fields! I hope you've been\l"
	.string "training!$"

RiverwalkTrail_West_Text_TRAINER_RIVERWALK_TRAIL_W_JOSUADefeat::
# 98 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Wow! Have you been to the Acrisia\n"
	.string "Mountains yet?$"

RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_UmberIntro::
# 112 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Don't freak out, but... I think my\n"
	.string "Pokémon is from space.$"

RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_UmberDefeat::
# 116 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "I couldn't even win using the powers of\n"
	.string "space?!$"

RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_MargareyIntro::
# 141 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "My Pokémon are used to rocky\n"
	.string "conditions. Let me show you!$"

RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_MargareyDefeat::
# 145 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Phew, your Pokémon might be tougher\n"
	.string "than mine!$"

RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_KylonIntro::
# 170 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "My Pokémon is old and wise, it can't\n"
	.string "lose!$"

RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_KylonDefeat::
# 174 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Maybe it's not so wise after all...$"

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


RiverwalkTrail_West_EventScript_DirectionSign::
# 25 "data/maps/RiverwalkTrail_West/scripts.pory"
	lock
# 26 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_West_EventScript_DirectionSign_Text_0
# 27 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 28 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end


RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck::
# 34 "data/maps/RiverwalkTrail_West/scripts.pory"
	lock
# 35 "data/maps/RiverwalkTrail_West/scripts.pory"
	faceplayer
# 36 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_Text_0
# 38 "data/maps/RiverwalkTrail_West/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_RIVERWALK, RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_2
# 45 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_Text_2
# 46 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 47 "data/maps/RiverwalkTrail_West/scripts.pory"
	special CheckRouteCaptureProgress
# 48 "data/maps/RiverwalkTrail_West/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_5
RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_1:
# 65 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end

RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_2:
# 40 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_Text_1
# 41 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
	goto RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_1

RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_5:
# 50 "data/maps/RiverwalkTrail_West/scripts.pory"
	delay 20
# 51 "data/maps/RiverwalkTrail_West/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 52 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_Text_0
# 53 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_Text_3
# 54 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 55 "data/maps/RiverwalkTrail_West/scripts.pory"
	delay 5
# 58 "data/maps/RiverwalkTrail_West/scripts.pory"
	giveitem ITEM_EVIOLITE
# 59 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 61 "data/maps/RiverwalkTrail_West/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_RIVERWALK
	goto RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_1


RiverwalkTrail_West_EventScript_ManCrossedBridge::
# 71 "data/maps/RiverwalkTrail_West/scripts.pory"
	lock
# 72 "data/maps/RiverwalkTrail_West/scripts.pory"
	faceplayer
# 73 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_West_EventScript_ManCrossedBridge_Text_0
# 74 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_West_EventScript_ManCrossedBridge_Text_1
# 75 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 76 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end


RiverwalkTrail_West_EventScript_TRAINER_RIVERWALK_TRAIL_W_JOSUA::
# 82 "data/maps/RiverwalkTrail_West/scripts.pory"
	trainerbattle_single TRAINER_RIVERWALK_TRAIL_W_JOSUA, RiverwalkTrail_West_Text_TRAINER_RIVERWALK_TRAIL_W_JOSUAIntro, RiverwalkTrail_West_Text_TRAINER_RIVERWALK_TRAIL_W_JOSUADefeat
# 83 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_West_EventScript_TRAINER_RIVERWALK_TRAIL_W_JOSUA_Text_0
# 84 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_West_EventScript_TRAINER_RIVERWALK_TRAIL_W_JOSUA_Text_1
# 85 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 86 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end


RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Umber::
# 100 "data/maps/RiverwalkTrail_West/scripts.pory"
	trainerbattle_single TRAINER_RIVERWALK_TRAIL_W_UMBER, RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_UmberIntro, RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_UmberDefeat
# 101 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Umber_Text_0
# 102 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Umber_Text_1
# 103 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 104 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end


RiverwalkTrail_West_EventScript_Athlete::
# 118 "data/maps/RiverwalkTrail_West/scripts.pory"
	lock
# 119 "data/maps/RiverwalkTrail_West/scripts.pory"
	faceplayer
# 120 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_West_EventScript_Athlete_Text_0
# 121 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_West_EventScript_Athlete_Text_1
# 122 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 123 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end


RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Margarey::
# 129 "data/maps/RiverwalkTrail_West/scripts.pory"
	trainerbattle_single TRAINER_RIVERWALK_TRAIL_W_MARGAREY, RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_MargareyIntro, RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_MargareyDefeat
# 130 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Margarey_Text_0
# 131 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Margarey_Text_1
# 132 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 133 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end


RiverwalkTrail_West_EventScript_Fisherman::
# 147 "data/maps/RiverwalkTrail_West/scripts.pory"
	lock
# 148 "data/maps/RiverwalkTrail_West/scripts.pory"
	faceplayer
# 149 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_West_EventScript_Fisherman_Text_0
# 150 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_West_EventScript_Fisherman_Text_1
# 151 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 152 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end


RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Kylon::
# 158 "data/maps/RiverwalkTrail_West/scripts.pory"
	trainerbattle_single TRAINER_RIVERWALK_TRAIL_W_KYLON, RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_KylonIntro, RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_KylonDefeat
# 159 "data/maps/RiverwalkTrail_West/scripts.pory"
	speakername RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Kylon_Text_0
# 160 "data/maps/RiverwalkTrail_West/scripts.pory"
	msgbox RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Kylon_Text_1
# 161 "data/maps/RiverwalkTrail_West/scripts.pory"
	closemessage
# 162 "data/maps/RiverwalkTrail_West/scripts.pory"
	release
	end


RiverwalkTrail_West_EventScript_DirectionSign_Text_0:
# 26 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Riverwalk Trail - West\n"
	.string "The Steep Hiking Trail\p"
	.string "{LEFT_ARROW} Acrisia City\n"
	.string "Riverwalk Trail - South {DOWN_ARROW}$"

RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_Text_0:
# 36 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Uni. Student$"

RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_Text_1:
# 40 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_Text_2:
# 45 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Chaire! I'm a student from the Acrisia\n"
	.string "University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in the Riverwalk Trail\l"
	.string "West and South areas. If you've caught\l"
	.string "all the Pokémon here, please let me\l"
	.string "know.$"

RiverwalkTrail_West_EventScript_UniversityStudentRouteCheck_Text_3:
# 53 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

RiverwalkTrail_West_EventScript_ManCrossedBridge_Text_0:
# 73 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "PokéManiac$"

RiverwalkTrail_West_EventScript_ManCrossedBridge_Text_1:
# 74 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Ahahaha, yes! I did it! I crossed the\n"
	.string "bridge and found a new area to catch\l"
	.string "Pokémon!\p"
	.string "This trail leads into a marshland and\n"
	.string "Kalami City. Who knows what I'll find!$"

RiverwalkTrail_West_EventScript_TRAINER_RIVERWALK_TRAIL_W_JOSUA_Text_0:
# 83 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Josua$"

RiverwalkTrail_West_EventScript_TRAINER_RIVERWALK_TRAIL_W_JOSUA_Text_1:
# 84 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "People often go to the Acrisia\n"
	.string "Mountains to train. The Trainers there\l"
	.string "can help prepare your Pokémon for\l"
	.string "Riverwalk Trail.$"

RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Umber_Text_0:
# 101 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Umber$"

RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Umber_Text_1:
# 102 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "I was hoping my Pokémon was magic\n"
	.string "somehow!$"

RiverwalkTrail_West_EventScript_Athlete_Text_0:
# 120 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Athlete$"

RiverwalkTrail_West_EventScript_Athlete_Text_1:
# 121 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "This way down from Acrisia City is super\n"
	.string "steep! It's quite the hike down the\l"
	.string "mountains, but the nice sights make it\l"
	.string "more fun.$"

RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Margarey_Text_0:
# 130 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Margarey$"

RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Margarey_Text_1:
# 131 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "I've heard of a special Pokémon which\n"
	.string "can be ridden. I wonder how you get\l"
	.string "that...$"

RiverwalkTrail_West_EventScript_Fisherman_Text_0:
# 149 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Fisherman$"

RiverwalkTrail_West_EventScript_Fisherman_Text_1:
# 150 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Multiple rivers flow down from the\n"
	.string "mountains towards Kalami City and the\l"
	.string "sea beyond. Lots of Water-type\l"
	.string "Pokémon make this area their home!$"

RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Kylon_Text_0:
# 159 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Kylon$"

RiverwalkTrail_WEST_EventScript_Trainer_RiverwalkTrail_WEST_Kylon_Text_1:
# 160 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "My mom says that Ghost-type Corsola\n"
	.string "are only found in polluted waters.$"

RiverwalkTrail_West_Text_TRAINER_RIVERWALK_TRAIL_W_JOSUAIntro::
# 89 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "I'm a step above the Trainers in the\n"
	.string "Bronze Fields! I hope you've been\l"
	.string "training!$"

RiverwalkTrail_West_Text_TRAINER_RIVERWALK_TRAIL_W_JOSUADefeat::
# 93 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Wow! Have you been to the Acrisia\n"
	.string "Mountains yet?$"

RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_UmberIntro::
# 107 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Don't freak out, but... I think my\n"
	.string "Pokémon is from space.$"

RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_UmberDefeat::
# 111 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "I couldn't even win using the powers of\n"
	.string "space?!$"

RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_MargareyIntro::
# 136 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "My Pokémon are used to rocky\n"
	.string "conditions. Let me show you!$"

RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_MargareyDefeat::
# 140 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Phew, your Pokémon might be tougher\n"
	.string "than mine!$"

RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_KylonIntro::
# 165 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "My Pokémon is old and wise, it can't\n"
	.string "lose!$"

RiverwalkTrail_WEST_Text_Trainer_RiverwalkTrail_WEST_KylonDefeat::
# 169 "data/maps/RiverwalkTrail_West/scripts.pory"
	.string "Maybe it's not so wise after all...$"

TowerOfDioxippus_MapScripts::
# 2 "data/maps/TowerOfDioxippus/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TowerOfDioxippus_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 27 "data/maps/TowerOfDioxippus/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TowerOfDioxippus_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TowerOfDioxippus_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/TowerOfDioxippus/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, TowerOfDioxippus_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
TowerOfDioxippus_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/TowerOfDioxippus/scripts.pory"
	setflag FLAG_VISITED_TOWER_OF_DIOXIPPUS
# 10 "data/maps/TowerOfDioxippus/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 11 "data/maps/TowerOfDioxippus/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 12 "data/maps/TowerOfDioxippus/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 13 "data/maps/TowerOfDioxippus/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 14 "data/maps/TowerOfDioxippus/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 15 "data/maps/TowerOfDioxippus/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 16 "data/maps/TowerOfDioxippus/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 17 "data/maps/TowerOfDioxippus/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 18 "data/maps/TowerOfDioxippus/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 19 "data/maps/TowerOfDioxippus/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 20 "data/maps/TowerOfDioxippus/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 21 "data/maps/TowerOfDioxippus/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 22 "data/maps/TowerOfDioxippus/scripts.pory"
	setobjectaswildencounter 13, ENCOUNTER_LAND
# 23 "data/maps/TowerOfDioxippus/scripts.pory"
	setobjectaswildencounter 14, ENCOUNTER_LAND
# 24 "data/maps/TowerOfDioxippus/scripts.pory"
	setobjectaswildencounter 15, ENCOUNTER_LAND
	return

TowerOfDioxippus_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/TowerOfDioxippus/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto TowerOfDioxippus_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

TowerOfDioxippus_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 28 "data/maps/TowerOfDioxippus/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, TowerOfDioxippus_EventScript_CheckForEvent
	.2byte 0


TowerOfDioxippus_EventScript_CheckForEvent::
# 34 "data/maps/TowerOfDioxippus/scripts.pory"
	setvar VAR_TEMP_1, 1
# 35 "data/maps/TowerOfDioxippus/scripts.pory"
	goto_if_set FLAG_DEFEATED_KALLIOPE_DIOXIPPUS, TowerOfDioxippus_EventScript_CheckForEvent_3
TowerOfDioxippus_EventScript_CheckForEvent_1:
# 39 "data/maps/TowerOfDioxippus/scripts.pory"
	releaseall
	end

TowerOfDioxippus_EventScript_CheckForEvent_2:
# 37 "data/maps/TowerOfDioxippus/scripts.pory"
	goto TowerOfDioxippus_EventScript_RaniaAndNikoEvent
	goto TowerOfDioxippus_EventScript_CheckForEvent_1

TowerOfDioxippus_EventScript_CheckForEvent_3:
# 35 "data/maps/TowerOfDioxippus/scripts.pory"
	goto_if_unset FLAG_DID_RANIA_NIKO_POST_DIOXIPPUS_EVENT, TowerOfDioxippus_EventScript_CheckForEvent_2
	goto TowerOfDioxippus_EventScript_CheckForEvent_1


TowerOfDioxippus_EventScript_RaniaAndNikoEvent::
# 45 "data/maps/TowerOfDioxippus/scripts.pory"
	lockall
# 46 "data/maps/TowerOfDioxippus/scripts.pory"
	delay 20
# 47 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_0
# 48 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_1
# 49 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 50 "data/maps/TowerOfDioxippus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 51 "data/maps/TowerOfDioxippus/scripts.pory"
	applymovement 17, TowerOfDioxippus_Movement_RaniaApproachPlayer
# 52 "data/maps/TowerOfDioxippus/scripts.pory"
	applymovement 16, TowerOfDioxippus_Movement_NikoApproachPlayer
# 53 "data/maps/TowerOfDioxippus/scripts.pory"
	waitmovement 0
# 54 "data/maps/TowerOfDioxippus/scripts.pory"
	delay 10
# 55 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_2
# 56 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_3
# 57 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 58 "data/maps/TowerOfDioxippus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 59 "data/maps/TowerOfDioxippus/scripts.pory"
	waitmovement 0
# 60 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_4
# 61 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_5
# 62 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 63 "data/maps/TowerOfDioxippus/scripts.pory"
	delay 30
# 64 "data/maps/TowerOfDioxippus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 65 "data/maps/TowerOfDioxippus/scripts.pory"
	applymovement 17, Common_Movement_JumpInPlaceUp
# 66 "data/maps/TowerOfDioxippus/scripts.pory"
	waitmovement 0
# 67 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_2
# 68 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_6
# 69 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 70 "data/maps/TowerOfDioxippus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 71 "data/maps/TowerOfDioxippus/scripts.pory"
	waitmovement 0
# 72 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_4
# 73 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_7
# 74 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 75 "data/maps/TowerOfDioxippus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 76 "data/maps/TowerOfDioxippus/scripts.pory"
	waitmovement 0
# 77 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_2
# 78 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_8
# 79 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 80 "data/maps/TowerOfDioxippus/scripts.pory"
	delay 10
# 81 "data/maps/TowerOfDioxippus/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 82 "data/maps/TowerOfDioxippus/scripts.pory"
	delay 15
# 83 "data/maps/TowerOfDioxippus/scripts.pory"
	setflag FLAG_HIDE_RANIA_AND_NIKO_DIOXIPPUS
# 84 "data/maps/TowerOfDioxippus/scripts.pory"
	setflag FLAG_DID_RANIA_NIKO_POST_DIOXIPPUS_EVENT
# 85 "data/maps/TowerOfDioxippus/scripts.pory"
	removeobject 16
# 86 "data/maps/TowerOfDioxippus/scripts.pory"
	removeobject 17
# 87 "data/maps/TowerOfDioxippus/scripts.pory"
	delay 15
# 88 "data/maps/TowerOfDioxippus/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 89 "data/maps/TowerOfDioxippus/scripts.pory"
	delay 20
# 90 "data/maps/TowerOfDioxippus/scripts.pory"
	startquest QUEST_GYM_8
# 91 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 93 "data/maps/TowerOfDioxippus/scripts.pory"
	setflag FLAG_HIDE_CORRIN_CROSSING_ROADBLOCK
# 94 "data/maps/TowerOfDioxippus/scripts.pory"
	setflag FLAG_HIDE_RANIA_ACRISIA_UNIVERSITY
# 95 "data/maps/TowerOfDioxippus/scripts.pory"
	setvar VAR_NIKO_STATE, 13
# 97 "data/maps/TowerOfDioxippus/scripts.pory"
	release
	end


# 101 "data/maps/TowerOfDioxippus/scripts.pory"
TowerOfDioxippus_Movement_RaniaApproachPlayer:
# 103 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_up
# 103 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_up
# 103 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_up
# 103 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_up
# 104 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 104 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 104 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 104 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 104 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 104 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 105 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_up
# 106 "data/maps/TowerOfDioxippus/scripts.pory"
	face_up
# 107 "data/maps/TowerOfDioxippus/scripts.pory"
	step_end

# 109 "data/maps/TowerOfDioxippus/scripts.pory"
TowerOfDioxippus_Movement_NikoApproachPlayer:
# 111 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_up
# 111 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_up
# 111 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_up
# 111 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_up
# 112 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 112 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 112 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 112 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 112 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 112 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 113 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_up
# 113 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_up
# 114 "data/maps/TowerOfDioxippus/scripts.pory"
	face_right
# 115 "data/maps/TowerOfDioxippus/scripts.pory"
	step_end

TowerOfDioxippus_EventScript_LittleGirl::
# 120 "data/maps/TowerOfDioxippus/scripts.pory"
	lock
# 121 "data/maps/TowerOfDioxippus/scripts.pory"
	faceplayer
# 122 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_LittleGirl_Text_0
# 123 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_LittleGirl_Text_1
# 124 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 125 "data/maps/TowerOfDioxippus/scripts.pory"
	release
	end


TowerOfDioxippus_EventScript_Maniac::
# 131 "data/maps/TowerOfDioxippus/scripts.pory"
	lock
# 132 "data/maps/TowerOfDioxippus/scripts.pory"
	faceplayer
# 133 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_Maniac_Text_0
# 134 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_Maniac_Text_1
# 135 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 136 "data/maps/TowerOfDioxippus/scripts.pory"
	release
	end


TowerOfDioxippus_EventScript_Armaldo::
# 142 "data/maps/TowerOfDioxippus/scripts.pory"
	lock
# 143 "data/maps/TowerOfDioxippus/scripts.pory"
	faceplayer
# 144 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_Armaldo_Text_0
# 145 "data/maps/TowerOfDioxippus/scripts.pory"
	playmoncry SPECIES_ARMALDO, CRY_MODE_NORMAL
# 146 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_Armaldo_Text_1
# 147 "data/maps/TowerOfDioxippus/scripts.pory"
	waitmoncry
# 148 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 149 "data/maps/TowerOfDioxippus/scripts.pory"
	release
	end


TowerOfDioxippus_EventScript_HexManiac::
# 155 "data/maps/TowerOfDioxippus/scripts.pory"
	lock
# 156 "data/maps/TowerOfDioxippus/scripts.pory"
	faceplayer
# 157 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_HexManiac_Text_0
# 158 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_HexManiac_Text_1
# 159 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 160 "data/maps/TowerOfDioxippus/scripts.pory"
	release
	end


TowerOfDioxippus_EventScript_OldWoman::
# 166 "data/maps/TowerOfDioxippus/scripts.pory"
	lock
# 167 "data/maps/TowerOfDioxippus/scripts.pory"
	faceplayer
# 168 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_OldWoman_Text_0
# 169 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_OldWoman_Text_1
# 170 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 171 "data/maps/TowerOfDioxippus/scripts.pory"
	release
	end


TowerOfDioxippus_EventScript_Hiker::
# 177 "data/maps/TowerOfDioxippus/scripts.pory"
	lock
# 178 "data/maps/TowerOfDioxippus/scripts.pory"
	faceplayer
# 179 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_Hiker_Text_0
# 180 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_Hiker_Text_1
# 181 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 182 "data/maps/TowerOfDioxippus/scripts.pory"
	release
	end


TowerOfDioxippus_EventScript_TowerSign::
# 188 "data/maps/TowerOfDioxippus/scripts.pory"
	lock
# 189 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_TowerSign_Text_0
# 190 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 191 "data/maps/TowerOfDioxippus/scripts.pory"
	release
	end


TowerOfDioxippus_EventScript_DirectionSign::
# 197 "data/maps/TowerOfDioxippus/scripts.pory"
	lock
# 198 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_DirectionSign_Text_0
# 199 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 200 "data/maps/TowerOfDioxippus/scripts.pory"
	release
	end


TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_0:
# 47 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "???$"

TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_1:
# 48 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "It's {PLAYER}! Come on!$"

TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_2:
# 55 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Rania$"

TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_3:
# 56 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "The {COLOR GREEN}weather across Ilios is back to\n"
	.string "normal{COLOR DARK_GRAY}! Did you really save Kyogre and\l"
	.string "Groudon from Team Chimera?$"

TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_4:
# 60 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Niko$"

TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_5:
# 61 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Once the weather started to lighten up,\n"
	.string "we came here as fast as we could. We saw\l"
	.string "attacks flying around the Tower of\l"
	.string "Dioxippus and heard Rayquaza roar... So,\l"
	.string "are you okay? Tell us everything!$"

TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_6:
# 68 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "You defeated {COLOR RED}Kalliope{COLOR DARK_GRAY}?! Even as she\n"
	.string "used {COLOR RED}Raging Bolt{COLOR DARK_GRAY}?! Then it's true,\l"
	.string "you've saved the Ilios Region!$"

TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_7:
# 73 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Not so fast, Rania. {PLAYER} said that\n"
	.string "Team Chimera is going to retreat to\l"
	.string "{COLOR RED}Areios Hideout{COLOR DARK_GRAY}... That's the Pyroar's\l"
	.string "Den - the heart of Team Chimera,\l"
	.string "crawling with Chimera Grunts.\p"
	.string "To {COLOR GREEN}truly defeat Team Chimera{COLOR DARK_GRAY}, {COLOR RED}Areios\n"
	.string "Hideout{COLOR DARK_GRAY} needs to fall. {PLAYER}, you\l"
	.string "should be able to follow the road south\l"
	.string "of Asfal Hills to {COLOR GREEN}Port Pello{COLOR DARK_GRAY}, the closest\l"
	.string "remaining town to Areios Hideout. From\l"
	.string "there, you can reach their Hideout and\l"
	.string "take down Team Chimera for good!$"

TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_8:
# 78 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "{COLOR RED}Areios Hideout{COLOR DARK_GRAY} used to be a small town,\n"
	.string "before Team Chimera took over. In fact,\l"
	.string "{COLOR RED}Kalliope was the Gym Leader{COLOR DARK_GRAY} there... I'd\l"
	.string "bet you anything that she's {COLOR GREEN}hiding in\l"
	.string "the remnants of her Gym{COLOR DARK_GRAY}.\p"
	.string "We need to report back to the\n"
	.string "University. Good luck!$"

TowerOfDioxippus_EventScript_LittleGirl_Text_0:
# 122 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Little Girl$"

TowerOfDioxippus_EventScript_LittleGirl_Text_1:
# 123 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Not many people live here. Some people\n"
	.string "visit, but even then, it's a quiet area.$"

TowerOfDioxippus_EventScript_Maniac_Text_0:
# 133 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Collector$"

TowerOfDioxippus_EventScript_Maniac_Text_1:
# 134 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "My Armaldo is a Lazarus Taxa, which\n"
	.string "means it was thought to be extinct\l"
	.string "until recently. That means it's\l"
	.string "extra-rare!$"

TowerOfDioxippus_EventScript_Armaldo_Text_0:
# 144 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Armaldo$"

TowerOfDioxippus_EventScript_Armaldo_Text_1:
# 146 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Khree-ah-ah!$"

TowerOfDioxippus_EventScript_HexManiac_Text_0:
# 157 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Hex Maniac$"

TowerOfDioxippus_EventScript_HexManiac_Text_1:
# 158 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Dioxippus was a great Trainer from a\n"
	.string "distant clan who lived in ancient Ilios,\l"
	.string "if you believe the stories. He tamed\l"
	.string "Rayquaza and unlocked its Mega\l"
	.string "Evolution, rising to be so powerful that\l"
	.string "no Trainers challenged him. The great\l"
	.string "Tower of Dioxippus was raised in his\l"
	.string "honor.$"

TowerOfDioxippus_EventScript_OldWoman_Text_0:
# 168 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Old Woman$"

TowerOfDioxippus_EventScript_OldWoman_Text_1:
# 169 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "This is one of the most isolated areas\n"
	.string "of the Ilios Region. It's perfect for\l"
	.string "elderly folks like me.$"

TowerOfDioxippus_EventScript_Hiker_Text_0:
# 179 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Hiker$"

TowerOfDioxippus_EventScript_Hiker_Text_1:
# 180 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "I've come all the way from the Hoenn\n"
	.string "Region to visit the Tower of Dioxippus!\p"
	.string "In Hoenn, we continue to revere the\n"
	.string "{COLOR GREEN}Weather Legendary Trio{COLOR DARK_GRAY}, which were\l"
	.string "largely forgotten in Ilios. Only the\l"
	.string "Tower of Dioxippus remains as tribute\l"
	.string "to them, and it looks to be falling into\l"
	.string "disrepair...$"

TowerOfDioxippus_EventScript_TowerSign_Text_0:
# 189 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Tower Of Dioxippus\n"
	.string "The Great Tower of Rayquaza$"

TowerOfDioxippus_EventScript_DirectionSign_Text_0:
# 198 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Tower of Dioxippus\n"
	.string "Paying Respects to Rayquaza\p"
	.string "{UP_ARROW} Lastlight Road$"

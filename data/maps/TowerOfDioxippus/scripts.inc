TowerOfDioxippus_MapScripts::
# 2 "data/maps/TowerOfDioxippus/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TowerOfDioxippus_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 32 "data/maps/TowerOfDioxippus/scripts.pory"
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
# 26 "data/maps/TowerOfDioxippus/scripts.pory"
	goto_if_unset FLAG_DEFEATED_KALLIOPE_DIOXIPPUS, TowerOfDioxippus_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 26 "data/maps/TowerOfDioxippus/scripts.pory"
	goto_if_set FLAG_DEFEATED_KALLIOPE_DIOXIPPUS, TowerOfDioxippus_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

TowerOfDioxippus_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/TowerOfDioxippus/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto TowerOfDioxippus_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

TowerOfDioxippus_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 28 "data/maps/TowerOfDioxippus/scripts.pory"
	setvar VAR_TEMP_1, 1
	return

TowerOfDioxippus_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 26 "data/maps/TowerOfDioxippus/scripts.pory"
	goto_if_set FLAG_DID_RANIA_NIKO_POST_DIOXIPPUS_EVENT, TowerOfDioxippus_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

TowerOfDioxippus_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 33 "data/maps/TowerOfDioxippus/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, TowerOfDioxippus_EventScript_CheckForEvent
	.2byte 0


TowerOfDioxippus_EventScript_CheckForEvent::
# 39 "data/maps/TowerOfDioxippus/scripts.pory"
	setvar VAR_TEMP_1, 1
# 40 "data/maps/TowerOfDioxippus/scripts.pory"
	goto_if_set FLAG_DEFEATED_KALLIOPE_DIOXIPPUS, TowerOfDioxippus_EventScript_CheckForEvent_3
TowerOfDioxippus_EventScript_CheckForEvent_1:
# 44 "data/maps/TowerOfDioxippus/scripts.pory"
	releaseall
	end

TowerOfDioxippus_EventScript_CheckForEvent_2:
# 42 "data/maps/TowerOfDioxippus/scripts.pory"
	goto TowerOfDioxippus_EventScript_RaniaAndNikoEvent
	goto TowerOfDioxippus_EventScript_CheckForEvent_1

TowerOfDioxippus_EventScript_CheckForEvent_3:
# 40 "data/maps/TowerOfDioxippus/scripts.pory"
	goto_if_unset FLAG_DID_RANIA_NIKO_POST_DIOXIPPUS_EVENT, TowerOfDioxippus_EventScript_CheckForEvent_2
	goto TowerOfDioxippus_EventScript_CheckForEvent_1


TowerOfDioxippus_EventScript_RaniaAndNikoEvent::
# 50 "data/maps/TowerOfDioxippus/scripts.pory"
	lockall
# 51 "data/maps/TowerOfDioxippus/scripts.pory"
	delay 20
# 52 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_0
# 53 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_1
# 54 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 55 "data/maps/TowerOfDioxippus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 56 "data/maps/TowerOfDioxippus/scripts.pory"
	applymovement 17, TowerOfDioxippus_Movement_RaniaApproachPlayer
# 57 "data/maps/TowerOfDioxippus/scripts.pory"
	applymovement 16, TowerOfDioxippus_Movement_NikoApproachPlayer
# 58 "data/maps/TowerOfDioxippus/scripts.pory"
	waitmovement 0
# 59 "data/maps/TowerOfDioxippus/scripts.pory"
	delay 10
# 60 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_2
# 61 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_3
# 62 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 63 "data/maps/TowerOfDioxippus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 64 "data/maps/TowerOfDioxippus/scripts.pory"
	waitmovement 0
# 65 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_4
# 66 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_5
# 67 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 68 "data/maps/TowerOfDioxippus/scripts.pory"
	delay 30
# 69 "data/maps/TowerOfDioxippus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 70 "data/maps/TowerOfDioxippus/scripts.pory"
	applymovement 17, Common_Movement_JumpInPlaceUp
# 71 "data/maps/TowerOfDioxippus/scripts.pory"
	waitmovement 0
# 72 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_2
# 73 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_6
# 74 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 75 "data/maps/TowerOfDioxippus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 76 "data/maps/TowerOfDioxippus/scripts.pory"
	waitmovement 0
# 77 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_4
# 78 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_7
# 79 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 80 "data/maps/TowerOfDioxippus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 81 "data/maps/TowerOfDioxippus/scripts.pory"
	waitmovement 0
# 82 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_2
# 83 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_8
# 84 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 85 "data/maps/TowerOfDioxippus/scripts.pory"
	delay 10
# 86 "data/maps/TowerOfDioxippus/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 87 "data/maps/TowerOfDioxippus/scripts.pory"
	delay 15
# 88 "data/maps/TowerOfDioxippus/scripts.pory"
	setflag FLAG_HIDE_RANIA_AND_NIKO_DIOXIPPUS
# 89 "data/maps/TowerOfDioxippus/scripts.pory"
	setflag FLAG_DID_RANIA_NIKO_POST_DIOXIPPUS_EVENT
# 90 "data/maps/TowerOfDioxippus/scripts.pory"
	removeobject 16
# 91 "data/maps/TowerOfDioxippus/scripts.pory"
	removeobject 17
# 92 "data/maps/TowerOfDioxippus/scripts.pory"
	delay 15
# 93 "data/maps/TowerOfDioxippus/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 94 "data/maps/TowerOfDioxippus/scripts.pory"
	delay 20
# 95 "data/maps/TowerOfDioxippus/scripts.pory"
	startquest QUEST_GYM_8
# 96 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 98 "data/maps/TowerOfDioxippus/scripts.pory"
	setflag FLAG_HIDE_CORRIN_CROSSING_ROADBLOCK
# 99 "data/maps/TowerOfDioxippus/scripts.pory"
	setflag FLAG_HIDE_RANIA_ACRISIA_UNIVERSITY
# 100 "data/maps/TowerOfDioxippus/scripts.pory"
	setvar VAR_NIKO_STATE, 13
# 102 "data/maps/TowerOfDioxippus/scripts.pory"
	release
	end


# 106 "data/maps/TowerOfDioxippus/scripts.pory"
TowerOfDioxippus_Movement_RaniaApproachPlayer:
# 108 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_up
# 108 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_up
# 108 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_up
# 108 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_up
# 109 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 109 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 109 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 109 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 109 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 109 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 110 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_up
# 111 "data/maps/TowerOfDioxippus/scripts.pory"
	face_up
# 112 "data/maps/TowerOfDioxippus/scripts.pory"
	step_end

# 114 "data/maps/TowerOfDioxippus/scripts.pory"
TowerOfDioxippus_Movement_NikoApproachPlayer:
# 116 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_up
# 116 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_up
# 116 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_up
# 116 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_up
# 117 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 117 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 117 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 117 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 117 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 117 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_right
# 118 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_up
# 118 "data/maps/TowerOfDioxippus/scripts.pory"
	walk_fast_up
# 119 "data/maps/TowerOfDioxippus/scripts.pory"
	face_right
# 120 "data/maps/TowerOfDioxippus/scripts.pory"
	step_end

TowerOfDioxippus_EventScript_LittleGirl::
# 125 "data/maps/TowerOfDioxippus/scripts.pory"
	lock
# 126 "data/maps/TowerOfDioxippus/scripts.pory"
	faceplayer
# 127 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_LittleGirl_Text_0
# 128 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_LittleGirl_Text_1
# 129 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 130 "data/maps/TowerOfDioxippus/scripts.pory"
	release
	end


TowerOfDioxippus_EventScript_Maniac::
# 136 "data/maps/TowerOfDioxippus/scripts.pory"
	lock
# 137 "data/maps/TowerOfDioxippus/scripts.pory"
	faceplayer
# 138 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_Maniac_Text_0
# 139 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_Maniac_Text_1
# 140 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 141 "data/maps/TowerOfDioxippus/scripts.pory"
	release
	end


TowerOfDioxippus_EventScript_Armaldo::
# 147 "data/maps/TowerOfDioxippus/scripts.pory"
	lock
# 148 "data/maps/TowerOfDioxippus/scripts.pory"
	faceplayer
# 149 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_Armaldo_Text_0
# 150 "data/maps/TowerOfDioxippus/scripts.pory"
	playmoncry SPECIES_ARMALDO, CRY_MODE_NORMAL
# 151 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_Armaldo_Text_1
# 152 "data/maps/TowerOfDioxippus/scripts.pory"
	waitmoncry
# 153 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 154 "data/maps/TowerOfDioxippus/scripts.pory"
	release
	end


TowerOfDioxippus_EventScript_HexManiac::
# 160 "data/maps/TowerOfDioxippus/scripts.pory"
	lock
# 161 "data/maps/TowerOfDioxippus/scripts.pory"
	faceplayer
# 162 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_HexManiac_Text_0
# 163 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_HexManiac_Text_1
# 164 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 165 "data/maps/TowerOfDioxippus/scripts.pory"
	release
	end


TowerOfDioxippus_EventScript_OldWoman::
# 171 "data/maps/TowerOfDioxippus/scripts.pory"
	lock
# 172 "data/maps/TowerOfDioxippus/scripts.pory"
	faceplayer
# 173 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_OldWoman_Text_0
# 174 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_OldWoman_Text_1
# 175 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 176 "data/maps/TowerOfDioxippus/scripts.pory"
	release
	end


TowerOfDioxippus_EventScript_Hiker::
# 182 "data/maps/TowerOfDioxippus/scripts.pory"
	lock
# 183 "data/maps/TowerOfDioxippus/scripts.pory"
	faceplayer
# 184 "data/maps/TowerOfDioxippus/scripts.pory"
	speakername TowerOfDioxippus_EventScript_Hiker_Text_0
# 185 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_Hiker_Text_1
# 186 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 187 "data/maps/TowerOfDioxippus/scripts.pory"
	release
	end


TowerOfDioxippus_EventScript_TowerSign::
# 193 "data/maps/TowerOfDioxippus/scripts.pory"
	lock
# 194 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_TowerSign_Text_0
# 195 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 196 "data/maps/TowerOfDioxippus/scripts.pory"
	release
	end


TowerOfDioxippus_EventScript_DirectionSign::
# 202 "data/maps/TowerOfDioxippus/scripts.pory"
	lock
# 203 "data/maps/TowerOfDioxippus/scripts.pory"
	msgbox TowerOfDioxippus_EventScript_DirectionSign_Text_0
# 204 "data/maps/TowerOfDioxippus/scripts.pory"
	closemessage
# 205 "data/maps/TowerOfDioxippus/scripts.pory"
	release
	end


TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_0:
# 52 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "???$"

TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_1:
# 53 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "It's {PLAYER}! Come on!$"

TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_2:
# 60 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Rania$"

TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_3:
# 61 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "The {COLOR GREEN}weather across Ilios is back to\n"
	.string "normal{COLOR DARK_GRAY}! Did you really save Kyogre and\l"
	.string "Groudon from Team Chimera?$"

TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_4:
# 65 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Niko$"

TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_5:
# 66 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Once the weather started to lighten up,\n"
	.string "we came here as fast as we could. We saw\l"
	.string "attacks flying around the Tower of\l"
	.string "Dioxippus and heard Rayquaza roar... So,\l"
	.string "are you okay? Tell us everything!$"

TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_6:
# 73 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "You defeated {COLOR RED}Kalliope{COLOR DARK_GRAY}?! Even as she\n"
	.string "used {COLOR RED}Raging Bolt{COLOR DARK_GRAY}?! Then it's true,\l"
	.string "you've saved the Ilios Region!$"

TowerOfDioxippus_EventScript_RaniaAndNikoEvent_Text_7:
# 78 "data/maps/TowerOfDioxippus/scripts.pory"
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
# 83 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "{COLOR RED}Areios Hideout{COLOR DARK_GRAY} used to be a small town,\n"
	.string "before Team Chimera took over. In fact,\l"
	.string "{COLOR RED}Kalliope was the Gym Leader{COLOR DARK_GRAY} there... I'd\l"
	.string "bet you anything that she's {COLOR GREEN}hiding in\l"
	.string "the remnants of her Gym{COLOR DARK_GRAY}.\p"
	.string "We need to report back to the\n"
	.string "University. Good luck!$"

TowerOfDioxippus_EventScript_LittleGirl_Text_0:
# 127 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Little Girl$"

TowerOfDioxippus_EventScript_LittleGirl_Text_1:
# 128 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Not many people live here. Some people\n"
	.string "visit, but even then, it's a quiet area.$"

TowerOfDioxippus_EventScript_Maniac_Text_0:
# 138 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Collector$"

TowerOfDioxippus_EventScript_Maniac_Text_1:
# 139 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "My Armaldo is a Lazarus Taxa, which\n"
	.string "means it was thought to be extinct\l"
	.string "until recently. That means it's\l"
	.string "extra-rare!$"

TowerOfDioxippus_EventScript_Armaldo_Text_0:
# 149 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Armaldo$"

TowerOfDioxippus_EventScript_Armaldo_Text_1:
# 151 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Khree-ah-ah!$"

TowerOfDioxippus_EventScript_HexManiac_Text_0:
# 162 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Hex Maniac$"

TowerOfDioxippus_EventScript_HexManiac_Text_1:
# 163 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Dioxippus was a great Trainer from a\n"
	.string "distant clan who lived in ancient Ilios,\l"
	.string "if you believe the stories. He tamed\l"
	.string "Rayquaza and unlocked its Mega\l"
	.string "Evolution, rising to be so powerful that\l"
	.string "no Trainers challenged him. The great\l"
	.string "Tower of Dioxippus was raised in his\l"
	.string "honor.$"

TowerOfDioxippus_EventScript_OldWoman_Text_0:
# 173 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Old Woman$"

TowerOfDioxippus_EventScript_OldWoman_Text_1:
# 174 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "This is one of the most isolated areas\n"
	.string "of the Ilios Region. It's perfect for\l"
	.string "elderly folks like me.$"

TowerOfDioxippus_EventScript_Hiker_Text_0:
# 184 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Hiker$"

TowerOfDioxippus_EventScript_Hiker_Text_1:
# 185 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "I've come all the way from the Hoenn\n"
	.string "Region to visit the Tower of Dioxippus!\p"
	.string "In Hoenn, we continue to revere the\n"
	.string "{COLOR GREEN}Weather Legendary Trio{COLOR DARK_GRAY}, which were\l"
	.string "largely forgotten in Ilios. Only the\l"
	.string "Tower of Dioxippus remains as tribute\l"
	.string "to them, and it looks to be falling into\l"
	.string "disrepair...$"

TowerOfDioxippus_EventScript_TowerSign_Text_0:
# 194 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Tower Of Dioxippus\n"
	.string "The Great Tower of Rayquaza$"

TowerOfDioxippus_EventScript_DirectionSign_Text_0:
# 203 "data/maps/TowerOfDioxippus/scripts.pory"
	.string "Tower of Dioxippus\n"
	.string "Paying Respects to Rayquaza\p"
	.string "{UP_ARROW} Lastlight Road$"

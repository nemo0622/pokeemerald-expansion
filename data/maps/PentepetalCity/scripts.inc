PentepetalCity_MapScripts::
# 2 "data/maps/PentepetalCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PentepetalCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PentepetalCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_VISITED_PENTEPETAL_CITY
# 5 "data/maps/PentepetalCity/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, PentepetalCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
PentepetalCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 11 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 12 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 13 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 14 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 15 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 16 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 17 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 18 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 19 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 20 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 21 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 22 "data/maps/PentepetalCity/scripts.pory"
	setobjectaswildencounter 40, ENCOUNTER_LAND
# 23 "data/maps/PentepetalCity/scripts.pory"
	setobjectaswildencounter 41, ENCOUNTER_LAND
# 24 "data/maps/PentepetalCity/scripts.pory"
	setobjectaswildencounter 42, ENCOUNTER_LAND
# 25 "data/maps/PentepetalCity/scripts.pory"
	setobjectaswildencounter 43, ENCOUNTER_LAND
# 26 "data/maps/PentepetalCity/scripts.pory"
	setobjectaswildencounter 44, ENCOUNTER_LAND
# 27 "data/maps/PentepetalCity/scripts.pory"
	setobjectaswildencounter 45, ENCOUNTER_SURF
# 28 "data/maps/PentepetalCity/scripts.pory"
	setobjectaswildencounter 46, ENCOUNTER_SURF
	return

PentepetalCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/PentepetalCity/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto PentepetalCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


PentepetalCity_Trigger_RaniaChimeraEvent::
# 34 "data/maps/PentepetalCity/scripts.pory"
	lockall
# 35 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 36 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 37 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 38 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 39 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_Trigger_RaniaChimeraEvent_Text_1
# 40 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 41 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 42 "data/maps/PentepetalCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 44 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_HIDE_NIKO_PENTEPETAL_CITY
# 45 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 46 "data/maps/PentepetalCity/scripts.pory"
	removeobject 20
# 47 "data/maps/PentepetalCity/scripts.pory"
	warpcontinuescript MAP_PENTEPETAL_CITY, 20, 26, PentepetalCity_EventScript_RaniaChimeraEvent
	end


PentepetalCity_EventScript_RaniaChimeraEvent::
# 53 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 54 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 55 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 56 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 57 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 58 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PentepetalCity_Movement_PlayerApproachesRania
# 59 "data/maps/PentepetalCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 60 "data/maps/PentepetalCity/scripts.pory"
	delay 30
# 62 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 63 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_0
# 64 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 65 "data/maps/PentepetalCity/scripts.pory"
	special HealPlayerParty
# 66 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 67 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, PentepetalCity_Movement_RaniaGoesToClearing
# 68 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PentepetalCity_Movement_PlayerFollowsToClearing
# 69 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 70 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 71 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 72 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_1
# 73 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 75 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PentepetalCity_Movement_PlayerApproachesChimeraGrunt
# 76 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, PentepetalCity_Movement_RaniaRunsToCranidos
# 77 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 78 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 79 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 80 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_2
# 81 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 83 "data/maps/PentepetalCity/scripts.pory"
	applymovement 19, PentepetalCity_Movement_GruntApproachesRania
# 84 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 85 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 86 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 87 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_3
# 88 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_4
# 89 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 90 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 91 "data/maps/PentepetalCity/scripts.pory"
	applymovement 19, Common_Movement_FaceRight
# 92 "data/maps/PentepetalCity/scripts.pory"
	applymovement 18, PentepetalCity_Movement_SpiritombApproachesPlayer
# 93 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 94 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_3
# 95 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_5
# 96 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 99 "data/maps/PentepetalCity/scripts.pory"
	trainerbattle_no_intro TRAINER_PENTEPETAL_CHIMERA_GRUNT, PentepetalCity_Text_GruntLose
# 101 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 102 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_3
# 103 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_6
# 104 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 105 "data/maps/PentepetalCity/scripts.pory"
	applymovement 19, PentepetalCity_Movement_GruntFlees
# 106 "data/maps/PentepetalCity/scripts.pory"
	applymovement 18, PentepetalCity_Movement_SpiritombFlees
# 107 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 108 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 110 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 111 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 112 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 113 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 114 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_7
# 115 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 117 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_NIKO_PENTEPETAL_CITY
# 118 "data/maps/PentepetalCity/scripts.pory"
	addobject 20
# 119 "data/maps/PentepetalCity/scripts.pory"
	applymovement 20, PentepetalCity_Movement_NikoApproaches
# 120 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 121 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 122 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 123 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_8
# 124 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_9
# 125 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 126 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 127 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_10
# 128 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 129 "data/maps/PentepetalCity/scripts.pory"
	applymovement 20, PentepetalCity_Movement_NikoChecksPokemon
# 130 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 132 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_8
# 133 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_11
# 134 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 135 "data/maps/PentepetalCity/scripts.pory"
	applymovement 20, Common_Movement_WalkRight
# 136 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 137 "data/maps/PentepetalCity/scripts.pory"
	applymovement 20, Common_Movement_FaceUp
# 138 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 139 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 140 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_8
# 141 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_12
# 142 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 143 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 145 "data/maps/PentepetalCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 146 "data/maps/PentepetalCity/scripts.pory"
	delay 30
# 147 "data/maps/PentepetalCity/scripts.pory"
	removeobject 20
# 148 "data/maps/PentepetalCity/scripts.pory"
	removeobject 16
# 149 "data/maps/PentepetalCity/scripts.pory"
	removeobject 17
# 150 "data/maps/PentepetalCity/scripts.pory"
	removeobject 18
# 151 "data/maps/PentepetalCity/scripts.pory"
	removeobject 19
# 152 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_HIDE_NIKO_PENTEPETAL_CITY
# 153 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_HIDE_CHIMERA_PENTEPETAL_CITY
# 154 "data/maps/PentepetalCity/scripts.pory"
	delay 30
# 155 "data/maps/PentepetalCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 156 "data/maps/PentepetalCity/scripts.pory"
	delay 20
# 158 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 159 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 160 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 161 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 162 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_13
# 163 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 164 "data/maps/PentepetalCity/scripts.pory"
	delay 20
# 165 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 166 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 167 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 168 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 169 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_14
# 170 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 171 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 172 "data/maps/PentepetalCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 173 "data/maps/PentepetalCity/scripts.pory"
	message PentepetalCity_EventScript_RaniaChimeraEvent_Text_15
# 174 "data/maps/PentepetalCity/scripts.pory"
	waitmessage
# 175 "data/maps/PentepetalCity/scripts.pory"
	waitfanfare
# 176 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 177 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 178 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 179 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_16
# 180 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 182 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, PentepetalCity_Movement_RaniaLeaves
# 183 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 184 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_HIDE_RANIA_PENTEPETAL_CITY
# 185 "data/maps/PentepetalCity/scripts.pory"
	removeobject 9
# 188 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_UNLOCKED_WILD_NATURE_VIEW
# 190 "data/maps/PentepetalCity/scripts.pory"
	setvar VAR_NIKO_STATE, 10
# 191 "data/maps/PentepetalCity/scripts.pory"
	setvar VAR_RANIA_STATE, 9
# 192 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_RANIA_ACRISIA_UNIVERSITY
# 194 "data/maps/PentepetalCity/scripts.pory"
	delay 20
# 195 "data/maps/PentepetalCity/scripts.pory"
	completequest QUEST_VISIT_RANIA_PENTEPETAL
# 197 "data/maps/PentepetalCity/scripts.pory"
	releaseall
	end


# 201 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_PlayerApproachesRania:
# 203 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 203 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 203 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 204 "data/maps/PentepetalCity/scripts.pory"
	face_left
# 205 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 207 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_RaniaGoesToClearing:
# 209 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 209 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 210 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 210 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 210 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 210 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 210 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 211 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 211 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 211 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 211 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 211 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 211 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 211 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 212 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 213 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 214 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 214 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 214 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 215 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 215 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 216 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 216 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 216 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 217 "data/maps/PentepetalCity/scripts.pory"
	emote_exclamation_mark
# 218 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 219 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 221 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_PlayerFollowsToClearing:
# 223 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 223 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 223 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 224 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 224 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 224 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 224 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 224 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 225 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 225 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 225 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 225 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 225 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 225 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 225 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 226 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 227 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 228 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 228 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 228 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 229 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 229 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 230 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 230 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 231 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 232 "data/maps/PentepetalCity/scripts.pory"
	delay_16
# 233 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 235 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_RaniaRunsToCranidos:
# 237 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 237 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 238 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_left
# 238 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_left
# 239 "data/maps/PentepetalCity/scripts.pory"
	jump_in_place_up
# 239 "data/maps/PentepetalCity/scripts.pory"
	jump_in_place_up
# 240 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 241 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 243 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_PlayerApproachesChimeraGrunt:
# 245 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 245 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 245 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 246 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 247 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 249 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_GruntApproachesRania:
# 251 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 252 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 253 "data/maps/PentepetalCity/scripts.pory"
	face_left
# 254 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 256 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_SpiritombApproachesPlayer:
# 258 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 259 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 259 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 260 "data/maps/PentepetalCity/scripts.pory"
	face_down
# 261 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 263 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_GruntFlees:
# 265 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 265 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 265 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 266 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_right
# 267 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 267 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 267 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 268 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_right
# 269 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 269 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 269 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 270 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 272 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_SpiritombFlees:
# 274 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 275 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 275 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 275 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 275 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 276 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 277 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 277 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 277 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 278 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 279 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 279 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 280 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 282 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_NikoApproaches:
# 284 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 285 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_left
# 285 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_left
# 286 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 286 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 286 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 286 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 287 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_left
# 288 "data/maps/PentepetalCity/scripts.pory"
	jump_in_place_up
# 288 "data/maps/PentepetalCity/scripts.pory"
	jump_in_place_up
# 289 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 290 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 292 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_NikoChecksPokemon:
# 294 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 295 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 296 "data/maps/PentepetalCity/scripts.pory"
	delay_16
# 296 "data/maps/PentepetalCity/scripts.pory"
	delay_16
# 297 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 298 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 298 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 298 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 299 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 299 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 299 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 300 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 301 "data/maps/PentepetalCity/scripts.pory"
	face_left
# 302 "data/maps/PentepetalCity/scripts.pory"
	delay_16
# 302 "data/maps/PentepetalCity/scripts.pory"
	delay_16
# 303 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 304 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 304 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 304 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 305 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 305 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 306 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 307 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 309 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_RaniaLeaves:
# 311 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 312 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 313 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 313 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 313 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 313 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 314 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 315 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 315 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 316 "data/maps/PentepetalCity/scripts.pory"
	step_end

PentepetalCity_EventScript_DirectionSign::
# 328 "data/maps/PentepetalCity/scripts.pory"
	lock
# 329 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_DirectionSign_Text_0
# 330 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 331 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_DollDecorScript::
# 337 "data/maps/PentepetalCity/scripts.pory"
	lock
# 338 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_DollDecorScript_Text_0
# 339 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 340 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_DollStreetVendor::
# 346 "data/maps/PentepetalCity/scripts.pory"
	lock
# 347 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 348 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 349 "data/maps/PentepetalCity/scripts.pory"
	message PentepetalCity_EventScript_DollStreetVendor_Text_1
# 350 "data/maps/PentepetalCity/scripts.pory"
	waitmessage
# 351 "data/maps/PentepetalCity/scripts.pory"
	pokemartdecoration PentepetalCity_DollDecorShop
# 352 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 353 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 354 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 355 "data/maps/PentepetalCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 356 "data/maps/PentepetalCity/scripts.pory"
	release
	end


# 360 "data/maps/PentepetalCity/scripts.pory"

# 361 "data/maps/PentepetalCity/scripts.pory"
    .align 2
# 362 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_DollDecorShop:
# 363 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_MIMIKYU_DOLL
# 364 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_JIGGLYPUFF_DOLL
# 365 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_IMPIDIMP_DOLL
# 366 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_DUSKULL_DOLL
# 367 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ARCHEN_DOLL
# 368 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_TIRTOUGA_DOLL
# 369 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SKIDDO_DOLL
# 370 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_BALTOY_DOLL
# 371 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_KECLEON_DOLL
# 372 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_APPLIN_DOLL
# 373 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SWABLU_DOLL
# 374 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ROCKRUFF_DOLL
# 375 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_TOUCANNON_DOLL
# 376 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ARCANINE_DOLL
# 377 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_KOMMO_O_DOLL
# 378 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_NONE
# 379 "data/maps/PentepetalCity/scripts.pory"
	release
# 380 "data/maps/PentepetalCity/scripts.pory"
	end

PentepetalCity_EventScript_OrnamentalDecorStreetVendor::
# 385 "data/maps/PentepetalCity/scripts.pory"
	lock
# 386 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 387 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 388 "data/maps/PentepetalCity/scripts.pory"
	message PentepetalCity_EventScript_OrnamentalDecorStreetVendor_Text_0
# 389 "data/maps/PentepetalCity/scripts.pory"
	waitmessage
# 390 "data/maps/PentepetalCity/scripts.pory"
	pokemartdecoration PentepetalCity_OrnamentDecorShop
# 391 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 392 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 393 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 394 "data/maps/PentepetalCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 395 "data/maps/PentepetalCity/scripts.pory"
	release
	end


# 399 "data/maps/PentepetalCity/scripts.pory"

# 400 "data/maps/PentepetalCity/scripts.pory"
    .align 2
# 401 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_OrnamentDecorShop:
# 402 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_HEAVY_DESK
# 403 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_RAGGED_DESK
# 404 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_COMFORT_DESK
# 405 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_BOOK_AND_QUILL
# 406 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_HEAVY_CHAIR
# 407 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_RAGGED_CHAIR
# 408 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_COMFORT_CHAIR
# 409 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_RED_PLANT
# 410 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_TROPICAL_PLANT
# 411 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_COLORFUL_PLANT
# 412 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SHRINE
# 413 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SLIDE
# 414 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_STAND
# 415 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_BREAKABLE_DOOR
# 416 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_TV
# 417 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_PATTERNED_BED
# 418 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_NONE
# 419 "data/maps/PentepetalCity/scripts.pory"
	release
# 420 "data/maps/PentepetalCity/scripts.pory"
	end

PentepetalCity_EventScript_FloorDecorStreetVendor::
# 425 "data/maps/PentepetalCity/scripts.pory"
	lock
# 426 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 427 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 428 "data/maps/PentepetalCity/scripts.pory"
	message PentepetalCity_EventScript_FloorDecorStreetVendor_Text_0
# 429 "data/maps/PentepetalCity/scripts.pory"
	waitmessage
# 430 "data/maps/PentepetalCity/scripts.pory"
	pokemartdecoration PentepetalCity_FloorDecorShop
# 431 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 432 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 433 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 434 "data/maps/PentepetalCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 435 "data/maps/PentepetalCity/scripts.pory"
	release
	end


# 439 "data/maps/PentepetalCity/scripts.pory"

# 440 "data/maps/PentepetalCity/scripts.pory"
    .align 2
# 441 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_FloorDecorShop:
# 442 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_DOLL_SQUARE
# 443 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_WOOD_MAT
# 444 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_GLITTER_MAT
# 445 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_JUMP_MAT
# 446 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SPIN_MAT
# 447 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_FIRE_BLAST_MAT
# 448 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_POWDER_SNOW_MAT
# 449 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ATTRACT_MAT
# 450 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_FISSURE_MAT
# 451 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SPIKES_MAT
# 452 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_PUPPY_POSTER
# 453 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SEA_POSTER
# 454 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SKY_POSTER
# 455 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_PIKA_CUSHION
# 456 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ROUND_CUSHION
# 457 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_KISS_CUSHION
# 458 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ZIGZAG_CUSHION
# 459 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SPIN_CUSHION
# 460 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_DIAMOND_CUSHION
# 461 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_BALL_CUSHION
# 462 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_NONE
# 463 "data/maps/PentepetalCity/scripts.pory"
	release
# 464 "data/maps/PentepetalCity/scripts.pory"
	end

PentepetalCity_EventScript_MusicDecorStreetVendor::
# 469 "data/maps/PentepetalCity/scripts.pory"
	lock
# 470 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 471 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 472 "data/maps/PentepetalCity/scripts.pory"
	message PentepetalCity_EventScript_MusicDecorStreetVendor_Text_0
# 473 "data/maps/PentepetalCity/scripts.pory"
	waitmessage
# 474 "data/maps/PentepetalCity/scripts.pory"
	pokemartdecoration PentepetalCity_MusicDecorShop
# 475 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 476 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 477 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 478 "data/maps/PentepetalCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 479 "data/maps/PentepetalCity/scripts.pory"
	release
	end


# 483 "data/maps/PentepetalCity/scripts.pory"

# 484 "data/maps/PentepetalCity/scripts.pory"
    .align 2
# 485 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_MusicDecorShop:
# 486 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 487 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 488 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 489 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 490 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 491 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 492 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 493 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 494 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_NONE
# 495 "data/maps/PentepetalCity/scripts.pory"
	release
# 496 "data/maps/PentepetalCity/scripts.pory"
	end

PentepetalCity_EventScript_NinjaBoy::
# 501 "data/maps/PentepetalCity/scripts.pory"
	lock
# 502 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 503 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_NinjaBoy_Text_0
# 504 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_NinjaBoy_Text_1
# 505 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 506 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_DecorShopSign::
# 512 "data/maps/PentepetalCity/scripts.pory"
	lock
# 513 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_DecorShopSign_Text_0
# 514 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 515 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Beauty::
# 521 "data/maps/PentepetalCity/scripts.pory"
	lock
# 522 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 523 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Beauty_Text_0
# 524 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Beauty_Text_1
# 525 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 526 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Gentleman::
# 532 "data/maps/PentepetalCity/scripts.pory"
	lock
# 533 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 534 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Gentleman_Text_0
# 535 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Gentleman_Text_1
# 536 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 537 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Man::
# 543 "data/maps/PentepetalCity/scripts.pory"
	lock
# 544 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 545 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Man_Text_0
# 546 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Man_Text_1
# 547 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 548 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Woman::
# 554 "data/maps/PentepetalCity/scripts.pory"
	lock
# 555 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 556 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Woman_Text_0
# 557 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Woman_Text_1
# 558 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 559 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_BlackBelt::
# 565 "data/maps/PentepetalCity/scripts.pory"
	lock
# 566 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 567 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_BlackBelt_Text_0
# 568 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_BlackBelt_Text_1
# 569 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 570 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Breloom::
# 576 "data/maps/PentepetalCity/scripts.pory"
	lock
# 577 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 578 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Breloom_Text_0
# 579 "data/maps/PentepetalCity/scripts.pory"
	playmoncry SPECIES_BRELOOM, CRY_MODE_NORMAL
# 580 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Breloom_Text_1
# 581 "data/maps/PentepetalCity/scripts.pory"
	waitmoncry
# 582 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 583 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Lass::
# 589 "data/maps/PentepetalCity/scripts.pory"
	lock
# 590 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 591 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Lass_Text_0
# 592 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Lass_Text_1
# 593 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 594 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_TuberM::
# 600 "data/maps/PentepetalCity/scripts.pory"
	lock
# 601 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 602 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_TuberM_Text_0
# 603 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_TuberM_Text_1
# 604 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 605 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Magikarp::
# 611 "data/maps/PentepetalCity/scripts.pory"
	lock
# 612 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 613 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Magikarp_Text_0
# 614 "data/maps/PentepetalCity/scripts.pory"
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
# 615 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Magikarp_Text_1
# 616 "data/maps/PentepetalCity/scripts.pory"
	waitmoncry
# 617 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 618 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_OldWoman::
# 624 "data/maps/PentepetalCity/scripts.pory"
	lock
# 625 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 626 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_OldWoman_Text_0
# 627 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_OldWoman_Text_1
# 628 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 629 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Artist::
# 635 "data/maps/PentepetalCity/scripts.pory"
	lock
# 636 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 637 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Artist_Text_0
# 640 "data/maps/PentepetalCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_SHOW_RIBBON_TO_ARTIST
# 641 "data/maps/PentepetalCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PentepetalCity_EventScript_Artist_2
# 650 "data/maps/PentepetalCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_SHOW_RIBBON_TO_ARTIST
# 651 "data/maps/PentepetalCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PentepetalCity_EventScript_Artist_5
# 661 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Artist_Text_3
# 662 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 664 "data/maps/PentepetalCity/scripts.pory"
	special CheckIfAnyMonsHaveRibbons
# 665 "data/maps/PentepetalCity/scripts.pory"
	delay 30
# 667 "data/maps/PentepetalCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PentepetalCity_EventScript_Artist_8
# 685 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Artist_Text_0
# 686 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Artist_Text_5
# 687 "data/maps/PentepetalCity/scripts.pory"
	closemessage
PentepetalCity_EventScript_Artist_4:
# 690 "data/maps/PentepetalCity/scripts.pory"
	release
	end

PentepetalCity_EventScript_Artist_2:
# 643 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Artist_Text_1
# 644 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 645 "data/maps/PentepetalCity/scripts.pory"
	release
	end

PentepetalCity_EventScript_Artist_5:
# 653 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Artist_Text_2
# 654 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 656 "data/maps/PentepetalCity/scripts.pory"
	delay 20
# 657 "data/maps/PentepetalCity/scripts.pory"
	startquest QUEST_SHOW_RIBBON_TO_ARTIST
	goto PentepetalCity_EventScript_Artist_4

PentepetalCity_EventScript_Artist_8:
# 669 "data/maps/PentepetalCity/scripts.pory"
	applymovement 32, Common_Movement_Heart
# 670 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 671 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 672 "data/maps/PentepetalCity/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 673 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Artist_Text_0
# 674 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Artist_Text_4
# 675 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 677 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 678 "data/maps/PentepetalCity/scripts.pory"
	giveitem ITEM_TM_DRAINING_KISS
# 679 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 680 "data/maps/PentepetalCity/scripts.pory"
	delay 20
# 681 "data/maps/PentepetalCity/scripts.pory"
	completequest QUEST_SHOW_RIBBON_TO_ARTIST
	goto PentepetalCity_EventScript_Artist_4


PentepetalCity_EventScript_Girl::
# 696 "data/maps/PentepetalCity/scripts.pory"
	lock
# 697 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 698 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Girl_Text_0
# 699 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Girl_Text_1
# 700 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 701 "data/maps/PentepetalCity/scripts.pory"
	applymovement 35, Common_Movement_FaceRight
# 702 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 703 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Gothitelle::
# 709 "data/maps/PentepetalCity/scripts.pory"
	lock
# 710 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 711 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Gothitelle_Text_0
# 712 "data/maps/PentepetalCity/scripts.pory"
	playmoncry SPECIES_GOTHITELLE, CRY_MODE_NORMAL
# 713 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Gothitelle_Text_1
# 714 "data/maps/PentepetalCity/scripts.pory"
	waitmoncry
# 715 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 716 "data/maps/PentepetalCity/scripts.pory"
	applymovement 36, Common_Movement_FaceLeft
# 717 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 718 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_FatMan::
# 724 "data/maps/PentepetalCity/scripts.pory"
	lock
# 725 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 726 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_FatMan_Text_0
# 727 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_FatMan_Text_1
# 728 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 729 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Appletun::
# 735 "data/maps/PentepetalCity/scripts.pory"
	lock
# 736 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 737 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Appletun_Text_0
# 738 "data/maps/PentepetalCity/scripts.pory"
	playmoncry SPECIES_APPLETUN, CRY_MODE_NORMAL
# 739 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Appletun_Text_1
# 740 "data/maps/PentepetalCity/scripts.pory"
	waitmoncry
# 741 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 742 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Hiker::
# 748 "data/maps/PentepetalCity/scripts.pory"
	lock
# 749 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 750 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Hiker_Text_0
# 751 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Hiker_Text_1
# 752 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 753 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_PickUpRandomFossil::
# 759 "data/maps/PentepetalCity/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_PENTEPETAL_FOSSIL, PentepetalCity_EventScript_PickUpRandomFossil_2
PentepetalCity_EventScript_PickUpRandomFossil_1:
# 770 "data/maps/PentepetalCity/scripts.pory"
	release
	end

PentepetalCity_EventScript_PickUpRandomFossil_2:
# 761 "data/maps/PentepetalCity/scripts.pory"
	lock
# 762 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_PickUpRandomFossil_Text_0
# 763 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 764 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 765 "data/maps/PentepetalCity/scripts.pory"
	randomelement ITEM_SKULL_FOSSIL, ITEM_ARMOR_FOSSIL
# 766 "data/maps/PentepetalCity/scripts.pory"
	giveitem VAR_RESULT
# 767 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 768 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_PENTEPETAL_FOSSIL
	goto PentepetalCity_EventScript_PickUpRandomFossil_1


PentepetalCity_Trigger_RaniaChimeraEvent_Text_0:
# 38 "data/maps/PentepetalCity/scripts.pory"
	.string "Rania$"

PentepetalCity_Trigger_RaniaChimeraEvent_Text_1:
# 39 "data/maps/PentepetalCity/scripts.pory"
	.string "{PLAYER}! Over here, come quick!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_0:
# 63 "data/maps/PentepetalCity/scripts.pory"
	.string "So, like, remember how I came to\n"
	.string "Péntepetal City just to rest and get\l"
	.string "away from Team Chimera? Well, I can say\l"
	.string "goodbye to those plans.\p"
	.string "Two new {COLOR GREEN}Lazarus Taxa{COLOR DARK_GRAY}, Cranidos and\n"
	.string "Shieldon, were just found in the woods\l"
	.string "nearby. The second the news got out,\l"
	.string "Team Chimera swept in and started to\l"
	.string "steal them all! I found a clearing where\l"
	.string "they're hiding, come help me fight them!\l"
	.string "I'll heal your Pokémon before we go.$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_1:
# 72 "data/maps/PentepetalCity/scripts.pory"
	.string "Oh no, the rumors were true!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_2:
# 80 "data/maps/PentepetalCity/scripts.pory"
	.string "It's just like they were saying in town!\n"
	.string "Cranidos and Shieldon live here, but\l"
	.string "they're being rounded up by Team\l"
	.string "Chimera!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_3:
# 87 "data/maps/PentepetalCity/scripts.pory"
	.string "Chimera Grunt$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_4:
# 88 "data/maps/PentepetalCity/scripts.pory"
	.string "Fwahaha, you're too late! These are the\n"
	.string "last living Cranidos and Shieldon\l"
	.string "anywhere on the island. We've rounded\l"
	.string "up all the rest to be sold to the\l"
	.string "highest bidder!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_5:
# 95 "data/maps/PentepetalCity/scripts.pory"
	.string "What, are you gonna try to stop me? A\n"
	.string "couple of lame, weak activists? Heh, do\l"
	.string "your worst!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_6:
# 103 "data/maps/PentepetalCity/scripts.pory"
	.string "Well... I suppose Team Chimera will be\n"
	.string "fine without one or two extra Pokémon.\l"
	.string "But don't be surprised when we show up\l"
	.string "with teams of Rampardos and Bastiodon!\l"
	.string "Fwahaha!\p"
	.string "Time to make our escape! Spiritomb,\n"
	.string "let's get outta here!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_7:
# 114 "data/maps/PentepetalCity/scripts.pory"
	.string "Thanks for saving me again,\n"
	.string "{PLAYER}... I just can't believe Team\l"
	.string "Chimera would do this. Almost all living\l"
	.string "Cranidos and Shieldon, rounded up and\l"
	.string "sold? How awful...\p"
	.string "While you took care of that Grunt, I\n"
	.string "called Niko for help. He's the expert in\l"
	.string "Pokémon care, after all. He should be\l"
	.string "here any mi-$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_8:
# 123 "data/maps/PentepetalCity/scripts.pory"
	.string "Niko$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_9:
# 124 "data/maps/PentepetalCity/scripts.pory"
	.string "RANIA! RANIA! Huff, huff... I flew here\n"
	.string "on my Braviary as fast as I could! Is\l"
	.string "everyone okay?!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_10:
# 127 "data/maps/PentepetalCity/scripts.pory"
	.string "We're okay, Niko, but these Pokémon look\n"
	.string "hurt. Please, make sure they're\l"
	.string "alright... they might be the last of\l"
	.string "their kind in the wild!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_11:
# 133 "data/maps/PentepetalCity/scripts.pory"
	.string "Cranidos and Shieldon, huh? This must\n"
	.string "be another case of Lazarus Taxa being\l"
	.string "rediscovered. Looks like Team Chimera\l"
	.string "got to them before conservationists\l"
	.string "could, though...\p"
	.string "I'll take them back to the University\n"
	.string "with me. We'll reach out to the Sunset\l"
	.string "Wildlife Conservation Center in Kipos\l"
	.string "Town for advice on how to care for them.\l"
	.string "It's too dangerous to release them\l"
	.string "while Team Chimera is hunting them down.$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_12:
# 141 "data/maps/PentepetalCity/scripts.pory"
	.string "{PLAYER}, thanks to you, we might be\n"
	.string "able to save these species and learn\l"
	.string "more about them.\p"
	.string "Team Chimera has been rounding up\n"
	.string "Pokémon across the Ilios Region, doing\l"
	.string "whatever they can to gain power and\l"
	.string "money. Clearly, they're {COLOR GREEN}planning\l"
	.string "something big with Lazarus Taxa{COLOR DARK_GRAY} and\l"
	.string "other Pokémon they're stolen. If you\l"
	.string "want to be strong enough to stop them,\l"
	.string "you should head down the {COLOR GREEN}Sea of Vulcai{COLOR DARK_GRAY}\l"
	.string "to the {COLOR GREEN}Fresco Isles{COLOR DARK_GRAY}. You'll need the {COLOR GREEN}HM\l"
	.string "Dive{COLOR DARK_GRAY} to get south, but that's where the\l"
	.string "sixth Pokémon Gym is located.\p"
	.string "I'm off to the University with Cranidos\n"
	.string "and Shieldon. Take care, and thanks\l"
	.string "again for your help!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_13:
# 162 "data/maps/PentepetalCity/scripts.pory"
	.string "Jeez, I hope those poor Pokémon will be\n"
	.string "okay... I can't imagine how it must feel\l"
	.string "to be one of the last living members of\l"
	.string "a species.$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_14:
# 169 "data/maps/PentepetalCity/scripts.pory"
	.string "Oh, while I've got you here, I actually\n"
	.string "have something for you! I made a\l"
	.string "Training Guide to teach you how to\l"
	.string "{COLOR GREEN}identify Wild Pokémon Natures{COLOR DARK_GRAY} when you\l"
	.string "encounter them. Check this out!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_15:
# 173 "data/maps/PentepetalCity/scripts.pory"
	.string "You learned how to identify Wild\n"
	.string "Pokémon Natures!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_16:
# 179 "data/maps/PentepetalCity/scripts.pory"
	.string "I hope that serves as a thank-you for\n"
	.string "helping me save those Pokémon.\p"
	.string "If I thought I was exhausted on Myrrini\n"
	.string "Island, now I'm REALLY wiped out! I'm\l"
	.string "gonna head back to the University with\l"
	.string "Niko. Stay safe, {PLAYER}!$"

PentepetalCity_EventScript_DirectionSign_Text_0:
# 329 "data/maps/PentepetalCity/scripts.pory"
	.string "Péntepetal City\n"
	.string "The City of Beauty\p"
	.string "Pollen Road {RIGHT_ARROW}$"

PentepetalCity_DollDecorScript_Text_0:
# 338 "data/maps/PentepetalCity/scripts.pory"
	.string "It's a cute Pokémon Doll! This would be\n"
	.string "perfect for the Cabin on The Delphis!$"

PentepetalCity_EventScript_DollStreetVendor_Text_0:
# 348 "data/maps/PentepetalCity/scripts.pory"
	.string "Street Vendor$"

PentepetalCity_EventScript_DollStreetVendor_Text_1:
# 349 "data/maps/PentepetalCity/scripts.pory"
	.string "Welcome! I sell Pokémon Doll\n"
	.string "Decorations. How can I help you?$"

PentepetalCity_EventScript_OrnamentalDecorStreetVendor_Text_0:
# 388 "data/maps/PentepetalCity/scripts.pory"
	.string "Welcome! I sell Desks and Ornamental\n"
	.string "Room Decorations. How can I help you?$"

PentepetalCity_EventScript_FloorDecorStreetVendor_Text_0:
# 428 "data/maps/PentepetalCity/scripts.pory"
	.string "Welcome! I sell Floor and Wall\n"
	.string "Decorations. How can I help you?$"

PentepetalCity_EventScript_MusicDecorStreetVendor_Text_0:
# 472 "data/maps/PentepetalCity/scripts.pory"
	.string "Hey! I'm selling Note Mats for private\n"
	.string "Rooms. How can I help you?$"

PentepetalCity_EventScript_NinjaBoy_Text_0:
# 503 "data/maps/PentepetalCity/scripts.pory"
	.string "Ninja Boy$"

PentepetalCity_EventScript_NinjaBoy_Text_1:
# 504 "data/maps/PentepetalCity/scripts.pory"
	.string "I wonder what cool decorations I can\n"
	.string "get for my room here! Maybe I can fight\l"
	.string "some of them!$"

PentepetalCity_EventScript_DecorShopSign_Text_0:
# 513 "data/maps/PentepetalCity/scripts.pory"
	.string "Péntepetal City Decorations\n"
	.string "The Best Decor in Ilios!$"

PentepetalCity_EventScript_Beauty_Text_0:
# 523 "data/maps/PentepetalCity/scripts.pory"
	.string "Beauty$"

PentepetalCity_EventScript_Beauty_Text_1:
# 524 "data/maps/PentepetalCity/scripts.pory"
	.string "Empires and Kingdoms used to battle\n"
	.string "over this island. Now that the Ilios\l"
	.string "Region is united, it's a lot more\l"
	.string "peaceful.$"

PentepetalCity_EventScript_Gentleman_Text_0:
# 534 "data/maps/PentepetalCity/scripts.pory"
	.string "Gentleman$"

PentepetalCity_EventScript_Gentleman_Text_1:
# 535 "data/maps/PentepetalCity/scripts.pory"
	.string "I'm on vacation here with my daughter.\n"
	.string "She's obsessed with Pokémon Contests...\l"
	.string "I don't really get it, but they make her\l"
	.string "happy!$"

PentepetalCity_EventScript_Man_Text_0:
# 545 "data/maps/PentepetalCity/scripts.pory"
	.string "Man$"

PentepetalCity_EventScript_Man_Text_1:
# 546 "data/maps/PentepetalCity/scripts.pory"
	.string "Péntepetal City is known for a long\n"
	.string "history of poetry. Maybe writers of the\l"
	.string "past will inspire me!$"

PentepetalCity_EventScript_Woman_Text_0:
# 556 "data/maps/PentepetalCity/scripts.pory"
	.string "Woman$"

PentepetalCity_EventScript_Woman_Text_1:
# 557 "data/maps/PentepetalCity/scripts.pory"
	.string "When Pokémon compete in Contests, they\n"
	.string "can earn Ribbons! They can slightly\l"
	.string "raise certain battle stats. For example,\l"
	.string "Ribbons from Toughness Contests make\l"
	.string "Pokémon a bit physically stronger!$"

PentepetalCity_EventScript_BlackBelt_Text_0:
# 567 "data/maps/PentepetalCity/scripts.pory"
	.string "Black Belt$"

PentepetalCity_EventScript_BlackBelt_Text_1:
# 568 "data/maps/PentepetalCity/scripts.pory"
	.string "Heh, my Breloom is getting faster and\n"
	.string "stronger! There's not a Gym to fight in\l"
	.string "Péntepetal City, but it's worth coming\l"
	.string "by to train!$"

PentepetalCity_EventScript_Breloom_Text_0:
# 578 "data/maps/PentepetalCity/scripts.pory"
	.string "Breloom$"

PentepetalCity_EventScript_Breloom_Text_1:
# 580 "data/maps/PentepetalCity/scripts.pory"
	.string "Hek keh!$"

PentepetalCity_EventScript_Lass_Text_0:
# 591 "data/maps/PentepetalCity/scripts.pory"
	.string "Lass$"

PentepetalCity_EventScript_Lass_Text_1:
# 592 "data/maps/PentepetalCity/scripts.pory"
	.string "The water gets rocky and shallow\n"
	.string "nearby, which makes swimming hard.\l"
	.string "Sometimes ocean Pokémon come up and\l"
	.string "play on the beach!$"

PentepetalCity_EventScript_TuberM_Text_0:
# 602 "data/maps/PentepetalCity/scripts.pory"
	.string "Tuber$"

PentepetalCity_EventScript_TuberM_Text_1:
# 603 "data/maps/PentepetalCity/scripts.pory"
	.string "Look at this awesome Pokémon I just\n"
	.string "caught! It must be one of the\l"
	.string "strongest out there, just look at how\l"
	.string "it bounces!$"

PentepetalCity_EventScript_Magikarp_Text_0:
# 613 "data/maps/PentepetalCity/scripts.pory"
	.string "Magikarp$"

PentepetalCity_EventScript_Magikarp_Text_1:
# 615 "data/maps/PentepetalCity/scripts.pory"
	.string "Plep?$"

PentepetalCity_EventScript_OldWoman_Text_0:
# 626 "data/maps/PentepetalCity/scripts.pory"
	.string "Old Woman$"

PentepetalCity_EventScript_OldWoman_Text_1:
# 627 "data/maps/PentepetalCity/scripts.pory"
	.string "I hear they found wild Cranidos and\n"
	.string "Shieldon here. I found some a few\l"
	.string "months ago, but I haven't seen any\l"
	.string "recently... I hope they're okay.$"

PentepetalCity_EventScript_Artist_Text_0:
# 637 "data/maps/PentepetalCity/scripts.pory"
	.string "Artist$"

PentepetalCity_EventScript_Artist_Text_1:
# 643 "data/maps/PentepetalCity/scripts.pory"
	.string "Your Pokémon has inspired me with their\n"
	.string "talents! I can see why it wins Ribbons.$"

PentepetalCity_EventScript_Artist_Text_2:
# 653 "data/maps/PentepetalCity/scripts.pory"
	.string "I'm looking for the perfect Pokémon to\n"
	.string "paint... I want a winning art piece, so I\l"
	.string "need to see a Contest-winning Pokémon!\p"
	.string "Talk to me when you have a {COLOR GREEN}Pokémon with\n"
	.string "a Ribbon{COLOR DARK_GRAY} to inspire my art.$"

PentepetalCity_EventScript_Artist_Text_3:
# 661 "data/maps/PentepetalCity/scripts.pory"
	.string "Chaire! Have you won any Pokémon\n"
	.string "Contests yet? I'd like to see a {COLOR GREEN}Pokémon\l"
	.string "with a Ribbon{COLOR DARK_GRAY}.$"

PentepetalCity_EventScript_Artist_Text_4:
# 674 "data/maps/PentepetalCity/scripts.pory"
	.string "Your {STR_VAR_1} has a stunning\n"
	.string "Ribbon! It must be a Pokémon Contest\l"
	.string "winner, this will make for a perfect\l"
	.string "painting!\p"
	.string "You have my inspiration flowing. Please,\n"
	.string "take this!$"

PentepetalCity_EventScript_Artist_Text_5:
# 686 "data/maps/PentepetalCity/scripts.pory"
	.string "Hm, still working on the Pokémon\n"
	.string "Contests, huh? That's okay, I haven't\l"
	.string "won any either.\p"
	.string "Come to me when you have a {COLOR GREEN}Pokémon with\n"
	.string "a Contest Ribbon{COLOR DARK_GRAY}. I'll give you a reward\l"
	.string "for your effort!$"

PentepetalCity_EventScript_Girl_Text_0:
# 698 "data/maps/PentepetalCity/scripts.pory"
	.string "Girl$"

PentepetalCity_EventScript_Girl_Text_1:
# 699 "data/maps/PentepetalCity/scripts.pory"
	.string "My Gothitelle is almost ready to\n"
	.string "compete in a Contest! Nobody can beat\l"
	.string "her in a Beauty competition!$"

PentepetalCity_EventScript_Gothitelle_Text_0:
# 711 "data/maps/PentepetalCity/scripts.pory"
	.string "Gothitelle$"

PentepetalCity_EventScript_Gothitelle_Text_1:
# 713 "data/maps/PentepetalCity/scripts.pory"
	.string "Bree-ei!$"

PentepetalCity_EventScript_FatMan_Text_0:
# 726 "data/maps/PentepetalCity/scripts.pory"
	.string "Fat Man$"

PentepetalCity_EventScript_FatMan_Text_1:
# 727 "data/maps/PentepetalCity/scripts.pory"
	.string "Ehehe, look at my Shiny Appletun! I\n"
	.string "found a bright green Applin when I was\l"
	.string "young, and I'v been riding that\l"
	.string "excitement high ever since!$"

PentepetalCity_EventScript_Appletun_Text_0:
# 737 "data/maps/PentepetalCity/scripts.pory"
	.string "Appletun$"

PentepetalCity_EventScript_Appletun_Text_1:
# 739 "data/maps/PentepetalCity/scripts.pory"
	.string "Huu-ahh.$"

PentepetalCity_EventScript_Hiker_Text_0:
# 750 "data/maps/PentepetalCity/scripts.pory"
	.string "Hiker$"

PentepetalCity_EventScript_Hiker_Text_1:
# 751 "data/maps/PentepetalCity/scripts.pory"
	.string "I came by to see the wild Cranidos and\n"
	.string "Shieldon folks have been talking about.\l"
	.string "Now that I'm here, it seems like they're\l"
	.string "all gone...$"

PentepetalCity_EventScript_PickUpRandomFossil_Text_0:
# 762 "data/maps/PentepetalCity/scripts.pory"
	.string "Hm? There's a strange-looking rock in\n"
	.string "this bag abandoned by Team Chimera!$"

PentepetalCity_Text_GruntLose::
# 318 "data/maps/PentepetalCity/scripts.pory"
	.string "No! How can we keep losing to the likes\n"
	.string "of you?!$"

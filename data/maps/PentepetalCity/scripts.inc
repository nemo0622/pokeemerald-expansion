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
# 65 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 66 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_0
# 67 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 69 "data/maps/PentepetalCity/scripts.pory"
	trainerbattle_no_intro TRAINER_PENTEPETAL_RANIA, PentepetalCity_Text_RaniaLose
# 71 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 72 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 73 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_1
# 74 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 75 "data/maps/PentepetalCity/scripts.pory"
	special HealPlayerParty
# 76 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 77 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, PentepetalCity_Movement_RaniaGoesToClearing
# 78 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PentepetalCity_Movement_PlayerFollowsToClearing
# 79 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 80 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 81 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 82 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_2
# 83 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 85 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PentepetalCity_Movement_PlayerApproachesChimeraGrunt
# 86 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, PentepetalCity_Movement_RaniaRunsToCranidos
# 87 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 88 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 89 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 90 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_3
# 91 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 93 "data/maps/PentepetalCity/scripts.pory"
	applymovement 19, PentepetalCity_Movement_GruntApproachesRania
# 94 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 95 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 96 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 97 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_4
# 98 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_5
# 99 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 100 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 101 "data/maps/PentepetalCity/scripts.pory"
	applymovement 19, Common_Movement_FaceRight
# 102 "data/maps/PentepetalCity/scripts.pory"
	applymovement 18, PentepetalCity_Movement_SpiritombApproachesPlayer
# 103 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 104 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_4
# 105 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_6
# 106 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 109 "data/maps/PentepetalCity/scripts.pory"
	trainerbattle_no_intro TRAINER_PENTEPETAL_CHIMERA_GRUNT, PentepetalCity_Text_GruntLose
# 111 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 112 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_4
# 113 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_7
# 114 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 115 "data/maps/PentepetalCity/scripts.pory"
	applymovement 19, PentepetalCity_Movement_GruntFlees
# 116 "data/maps/PentepetalCity/scripts.pory"
	applymovement 18, PentepetalCity_Movement_SpiritombFlees
# 117 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 118 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 120 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 121 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 122 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 123 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 124 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_8
# 125 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 127 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_NIKO_PENTEPETAL_CITY
# 128 "data/maps/PentepetalCity/scripts.pory"
	addobject 20
# 129 "data/maps/PentepetalCity/scripts.pory"
	applymovement 20, PentepetalCity_Movement_NikoApproaches
# 130 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 131 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 132 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 133 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_9
# 134 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_10
# 135 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 136 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 137 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_11
# 138 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 139 "data/maps/PentepetalCity/scripts.pory"
	applymovement 20, PentepetalCity_Movement_NikoChecksPokemon
# 140 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 142 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_9
# 143 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_12
# 144 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 145 "data/maps/PentepetalCity/scripts.pory"
	applymovement 20, Common_Movement_WalkRight
# 146 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 147 "data/maps/PentepetalCity/scripts.pory"
	applymovement 20, Common_Movement_FaceUp
# 148 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 149 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 150 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_9
# 151 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_13
# 152 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 153 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 155 "data/maps/PentepetalCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 156 "data/maps/PentepetalCity/scripts.pory"
	delay 30
# 157 "data/maps/PentepetalCity/scripts.pory"
	removeobject 20
# 158 "data/maps/PentepetalCity/scripts.pory"
	removeobject 16
# 159 "data/maps/PentepetalCity/scripts.pory"
	removeobject 17
# 160 "data/maps/PentepetalCity/scripts.pory"
	removeobject 18
# 161 "data/maps/PentepetalCity/scripts.pory"
	removeobject 19
# 162 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_HIDE_NIKO_PENTEPETAL_CITY
# 163 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_HIDE_CHIMERA_PENTEPETAL_CITY
# 164 "data/maps/PentepetalCity/scripts.pory"
	delay 30
# 165 "data/maps/PentepetalCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 166 "data/maps/PentepetalCity/scripts.pory"
	delay 20
# 168 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 169 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 170 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 171 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 172 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_14
# 173 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 174 "data/maps/PentepetalCity/scripts.pory"
	delay 20
# 175 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 176 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 177 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 178 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 179 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_15
# 180 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 181 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 182 "data/maps/PentepetalCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 183 "data/maps/PentepetalCity/scripts.pory"
	message PentepetalCity_EventScript_RaniaChimeraEvent_Text_16
# 184 "data/maps/PentepetalCity/scripts.pory"
	waitmessage
# 185 "data/maps/PentepetalCity/scripts.pory"
	waitfanfare
# 186 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 187 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 188 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 189 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_17
# 190 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 192 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, PentepetalCity_Movement_RaniaLeaves
# 193 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 194 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_HIDE_RANIA_PENTEPETAL_CITY
# 195 "data/maps/PentepetalCity/scripts.pory"
	removeobject 9
# 198 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_UNLOCKED_WILD_NATURE_VIEW
# 200 "data/maps/PentepetalCity/scripts.pory"
	setvar VAR_NIKO_STATE, 10
# 201 "data/maps/PentepetalCity/scripts.pory"
	setvar VAR_RANIA_STATE, 9
# 202 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_RANIA_ACRISIA_UNIVERSITY
# 204 "data/maps/PentepetalCity/scripts.pory"
	delay 20
# 205 "data/maps/PentepetalCity/scripts.pory"
	completequest QUEST_VISIT_RANIA_PENTEPETAL
# 207 "data/maps/PentepetalCity/scripts.pory"
	releaseall
	end


# 211 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_PlayerApproachesRania:
# 213 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 213 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 213 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 214 "data/maps/PentepetalCity/scripts.pory"
	face_left
# 215 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 217 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_RaniaGoesToClearing:
# 219 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 219 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 220 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 220 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 220 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 220 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 220 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 221 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 221 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 221 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 221 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 221 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 221 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 221 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 222 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 223 "data/maps/PentepetalCity/scripts.pory"
	walk_left
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
# 226 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 226 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 226 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 227 "data/maps/PentepetalCity/scripts.pory"
	emote_exclamation_mark
# 228 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 229 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 231 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_PlayerFollowsToClearing:
# 233 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 233 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 233 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 234 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 234 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 234 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 234 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 234 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 235 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 235 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 235 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 235 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 235 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 235 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 235 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 236 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 237 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 238 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 238 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 238 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 239 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 239 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 240 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 240 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 241 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 242 "data/maps/PentepetalCity/scripts.pory"
	delay_16
# 243 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 245 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_RaniaRunsToCranidos:
# 247 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 247 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 248 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_left
# 248 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_left
# 249 "data/maps/PentepetalCity/scripts.pory"
	jump_in_place_up
# 249 "data/maps/PentepetalCity/scripts.pory"
	jump_in_place_up
# 250 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 251 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 253 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_PlayerApproachesChimeraGrunt:
# 255 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 255 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 255 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 256 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 257 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 259 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_GruntApproachesRania:
# 261 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 262 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 263 "data/maps/PentepetalCity/scripts.pory"
	face_left
# 264 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 266 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_SpiritombApproachesPlayer:
# 268 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 269 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 269 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 270 "data/maps/PentepetalCity/scripts.pory"
	face_down
# 271 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 273 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_GruntFlees:
# 275 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 275 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 275 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 276 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_right
# 277 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 277 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 277 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 278 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_right
# 279 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 279 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 279 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 280 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 282 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_SpiritombFlees:
# 284 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 285 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 285 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 285 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 285 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 286 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 287 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 287 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 287 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 288 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 289 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 289 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 290 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 292 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_NikoApproaches:
# 294 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 295 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_left
# 295 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_left
# 296 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 296 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 296 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 296 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 297 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_left
# 298 "data/maps/PentepetalCity/scripts.pory"
	jump_in_place_up
# 298 "data/maps/PentepetalCity/scripts.pory"
	jump_in_place_up
# 299 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 300 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 302 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_NikoChecksPokemon:
# 304 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 305 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 306 "data/maps/PentepetalCity/scripts.pory"
	delay_16
# 306 "data/maps/PentepetalCity/scripts.pory"
	delay_16
# 307 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 308 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 308 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 308 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 309 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 309 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 309 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 310 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 311 "data/maps/PentepetalCity/scripts.pory"
	face_left
# 312 "data/maps/PentepetalCity/scripts.pory"
	delay_16
# 312 "data/maps/PentepetalCity/scripts.pory"
	delay_16
# 313 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 314 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 314 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 314 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 315 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 315 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 316 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 317 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 319 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_RaniaLeaves:
# 321 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 322 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 323 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 323 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 323 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 323 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 324 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 325 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 325 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 326 "data/maps/PentepetalCity/scripts.pory"
	step_end

PentepetalCity_EventScript_DirectionSign::
# 342 "data/maps/PentepetalCity/scripts.pory"
	lock
# 343 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_DirectionSign_Text_0
# 344 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 345 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_DollDecorScript::
# 351 "data/maps/PentepetalCity/scripts.pory"
	lock
# 352 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_DollDecorScript_Text_0
# 353 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 354 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_DollStreetVendor::
# 360 "data/maps/PentepetalCity/scripts.pory"
	lock
# 361 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 362 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 363 "data/maps/PentepetalCity/scripts.pory"
	message PentepetalCity_EventScript_DollStreetVendor_Text_1
# 364 "data/maps/PentepetalCity/scripts.pory"
	waitmessage
# 365 "data/maps/PentepetalCity/scripts.pory"
	pokemartdecoration PentepetalCity_DollDecorShop
# 366 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 367 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 368 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 369 "data/maps/PentepetalCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 370 "data/maps/PentepetalCity/scripts.pory"
	release
	end


# 374 "data/maps/PentepetalCity/scripts.pory"

# 375 "data/maps/PentepetalCity/scripts.pory"
    .align 2
# 376 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_DollDecorShop:
# 377 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_MIMIKYU_DOLL
# 378 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_JIGGLYPUFF_DOLL
# 379 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_IMPIDIMP_DOLL
# 380 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_DUSKULL_DOLL
# 381 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ARCHEN_DOLL
# 382 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_TIRTOUGA_DOLL
# 383 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SKIDDO_DOLL
# 384 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_BALTOY_DOLL
# 385 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_KECLEON_DOLL
# 386 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_APPLIN_DOLL
# 387 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SWABLU_DOLL
# 388 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ROCKRUFF_DOLL
# 389 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_TOUCANNON_DOLL
# 390 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ARCANINE_DOLL
# 391 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_KOMMO_O_DOLL
# 392 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_NONE
# 393 "data/maps/PentepetalCity/scripts.pory"
	release
# 394 "data/maps/PentepetalCity/scripts.pory"
	end

PentepetalCity_EventScript_OrnamentalDecorStreetVendor::
# 399 "data/maps/PentepetalCity/scripts.pory"
	lock
# 400 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 401 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 402 "data/maps/PentepetalCity/scripts.pory"
	message PentepetalCity_EventScript_OrnamentalDecorStreetVendor_Text_0
# 403 "data/maps/PentepetalCity/scripts.pory"
	waitmessage
# 404 "data/maps/PentepetalCity/scripts.pory"
	pokemartdecoration PentepetalCity_OrnamentDecorShop
# 405 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 406 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 407 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 408 "data/maps/PentepetalCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 409 "data/maps/PentepetalCity/scripts.pory"
	release
	end


# 413 "data/maps/PentepetalCity/scripts.pory"

# 414 "data/maps/PentepetalCity/scripts.pory"
    .align 2
# 415 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_OrnamentDecorShop:
# 416 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_HEAVY_DESK
# 417 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_RAGGED_DESK
# 418 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_COMFORT_DESK
# 419 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_BOOK_AND_QUILL
# 420 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_HEAVY_CHAIR
# 421 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_RAGGED_CHAIR
# 422 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_COMFORT_CHAIR
# 423 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_RED_PLANT
# 424 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_TROPICAL_PLANT
# 425 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_COLORFUL_PLANT
# 426 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SHRINE
# 427 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SLIDE
# 428 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_STAND
# 429 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_BREAKABLE_DOOR
# 430 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_TV
# 431 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_PATTERNED_BED
# 432 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_NONE
# 433 "data/maps/PentepetalCity/scripts.pory"
	release
# 434 "data/maps/PentepetalCity/scripts.pory"
	end

PentepetalCity_EventScript_FloorDecorStreetVendor::
# 439 "data/maps/PentepetalCity/scripts.pory"
	lock
# 440 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 441 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 442 "data/maps/PentepetalCity/scripts.pory"
	message PentepetalCity_EventScript_FloorDecorStreetVendor_Text_0
# 443 "data/maps/PentepetalCity/scripts.pory"
	waitmessage
# 444 "data/maps/PentepetalCity/scripts.pory"
	pokemartdecoration PentepetalCity_FloorDecorShop
# 445 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 446 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 447 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 448 "data/maps/PentepetalCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 449 "data/maps/PentepetalCity/scripts.pory"
	release
	end


# 453 "data/maps/PentepetalCity/scripts.pory"

# 454 "data/maps/PentepetalCity/scripts.pory"
    .align 2
# 455 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_FloorDecorShop:
# 456 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_DOLL_SQUARE
# 457 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_WOOD_MAT
# 458 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_GLITTER_MAT
# 459 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_JUMP_MAT
# 460 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SPIN_MAT
# 461 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_FIRE_BLAST_MAT
# 462 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_POWDER_SNOW_MAT
# 463 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ATTRACT_MAT
# 464 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_FISSURE_MAT
# 465 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SPIKES_MAT
# 466 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_PUPPY_POSTER
# 467 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SEA_POSTER
# 468 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SKY_POSTER
# 469 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_PIKA_CUSHION
# 470 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ROUND_CUSHION
# 471 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_KISS_CUSHION
# 472 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ZIGZAG_CUSHION
# 473 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SPIN_CUSHION
# 474 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_DIAMOND_CUSHION
# 475 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_BALL_CUSHION
# 476 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_NONE
# 477 "data/maps/PentepetalCity/scripts.pory"
	release
# 478 "data/maps/PentepetalCity/scripts.pory"
	end

PentepetalCity_EventScript_MusicDecorStreetVendor::
# 483 "data/maps/PentepetalCity/scripts.pory"
	lock
# 484 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 485 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 486 "data/maps/PentepetalCity/scripts.pory"
	message PentepetalCity_EventScript_MusicDecorStreetVendor_Text_0
# 487 "data/maps/PentepetalCity/scripts.pory"
	waitmessage
# 488 "data/maps/PentepetalCity/scripts.pory"
	pokemartdecoration PentepetalCity_MusicDecorShop
# 489 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 490 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 491 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 492 "data/maps/PentepetalCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 493 "data/maps/PentepetalCity/scripts.pory"
	release
	end


# 497 "data/maps/PentepetalCity/scripts.pory"

# 498 "data/maps/PentepetalCity/scripts.pory"
    .align 2
# 499 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_MusicDecorShop:
# 500 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 501 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 502 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 503 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 504 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 505 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 506 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 507 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 508 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_NONE
# 509 "data/maps/PentepetalCity/scripts.pory"
	release
# 510 "data/maps/PentepetalCity/scripts.pory"
	end

PentepetalCity_EventScript_NinjaBoy::
# 515 "data/maps/PentepetalCity/scripts.pory"
	lock
# 516 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 517 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_NinjaBoy_Text_0
# 518 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_NinjaBoy_Text_1
# 519 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 520 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_DecorShopSign::
# 526 "data/maps/PentepetalCity/scripts.pory"
	lock
# 527 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_DecorShopSign_Text_0
# 528 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 529 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Beauty::
# 535 "data/maps/PentepetalCity/scripts.pory"
	lock
# 536 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 537 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Beauty_Text_0
# 538 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Beauty_Text_1
# 539 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 540 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Gentleman::
# 546 "data/maps/PentepetalCity/scripts.pory"
	lock
# 547 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 548 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Gentleman_Text_0
# 549 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Gentleman_Text_1
# 550 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 551 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Man::
# 557 "data/maps/PentepetalCity/scripts.pory"
	lock
# 558 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 559 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Man_Text_0
# 560 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Man_Text_1
# 561 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 562 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Woman::
# 568 "data/maps/PentepetalCity/scripts.pory"
	lock
# 569 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 570 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Woman_Text_0
# 571 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Woman_Text_1
# 572 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 573 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_BlackBelt::
# 579 "data/maps/PentepetalCity/scripts.pory"
	lock
# 580 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 581 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_BlackBelt_Text_0
# 582 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_BlackBelt_Text_1
# 583 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 584 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Breloom::
# 590 "data/maps/PentepetalCity/scripts.pory"
	lock
# 591 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 592 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Breloom_Text_0
# 593 "data/maps/PentepetalCity/scripts.pory"
	playmoncry SPECIES_BRELOOM, CRY_MODE_NORMAL
# 594 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Breloom_Text_1
# 595 "data/maps/PentepetalCity/scripts.pory"
	waitmoncry
# 596 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 597 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Lass::
# 603 "data/maps/PentepetalCity/scripts.pory"
	lock
# 604 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 605 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Lass_Text_0
# 606 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Lass_Text_1
# 607 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 608 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_TuberM::
# 614 "data/maps/PentepetalCity/scripts.pory"
	lock
# 615 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 616 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_TuberM_Text_0
# 617 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_TuberM_Text_1
# 618 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 619 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Magikarp::
# 625 "data/maps/PentepetalCity/scripts.pory"
	lock
# 626 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 627 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Magikarp_Text_0
# 628 "data/maps/PentepetalCity/scripts.pory"
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
# 629 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Magikarp_Text_1
# 630 "data/maps/PentepetalCity/scripts.pory"
	waitmoncry
# 631 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 632 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_OldWoman::
# 638 "data/maps/PentepetalCity/scripts.pory"
	lock
# 639 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 640 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_OldWoman_Text_0
# 641 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_OldWoman_Text_1
# 642 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 643 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Artist::
# 649 "data/maps/PentepetalCity/scripts.pory"
	lock
# 650 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 651 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Artist_Text_0
# 654 "data/maps/PentepetalCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_SHOW_RIBBON_TO_ARTIST
# 655 "data/maps/PentepetalCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PentepetalCity_EventScript_Artist_2
# 664 "data/maps/PentepetalCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_SHOW_RIBBON_TO_ARTIST
# 665 "data/maps/PentepetalCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PentepetalCity_EventScript_Artist_5
# 675 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Artist_Text_3
# 676 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 678 "data/maps/PentepetalCity/scripts.pory"
	special CheckIfAnyMonsHaveRibbons
# 679 "data/maps/PentepetalCity/scripts.pory"
	delay 30
# 681 "data/maps/PentepetalCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PentepetalCity_EventScript_Artist_8
# 699 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Artist_Text_0
# 700 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Artist_Text_5
# 701 "data/maps/PentepetalCity/scripts.pory"
	closemessage
PentepetalCity_EventScript_Artist_4:
# 704 "data/maps/PentepetalCity/scripts.pory"
	release
	end

PentepetalCity_EventScript_Artist_2:
# 657 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Artist_Text_1
# 658 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 659 "data/maps/PentepetalCity/scripts.pory"
	release
	end

PentepetalCity_EventScript_Artist_5:
# 667 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Artist_Text_2
# 668 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 670 "data/maps/PentepetalCity/scripts.pory"
	delay 20
# 671 "data/maps/PentepetalCity/scripts.pory"
	startquest QUEST_SHOW_RIBBON_TO_ARTIST
	goto PentepetalCity_EventScript_Artist_4

PentepetalCity_EventScript_Artist_8:
# 683 "data/maps/PentepetalCity/scripts.pory"
	applymovement 32, Common_Movement_Heart
# 684 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 685 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 686 "data/maps/PentepetalCity/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 687 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Artist_Text_0
# 688 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Artist_Text_4
# 689 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 691 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 692 "data/maps/PentepetalCity/scripts.pory"
	giveitem ITEM_TM_DRAINING_KISS
# 693 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 694 "data/maps/PentepetalCity/scripts.pory"
	delay 20
# 695 "data/maps/PentepetalCity/scripts.pory"
	completequest QUEST_SHOW_RIBBON_TO_ARTIST
	goto PentepetalCity_EventScript_Artist_4


PentepetalCity_EventScript_Girl::
# 710 "data/maps/PentepetalCity/scripts.pory"
	lock
# 711 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 712 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Girl_Text_0
# 713 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Girl_Text_1
# 714 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 715 "data/maps/PentepetalCity/scripts.pory"
	applymovement 35, Common_Movement_FaceRight
# 716 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 717 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Gothitelle::
# 723 "data/maps/PentepetalCity/scripts.pory"
	lock
# 724 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 725 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Gothitelle_Text_0
# 726 "data/maps/PentepetalCity/scripts.pory"
	playmoncry SPECIES_GOTHITELLE, CRY_MODE_NORMAL
# 727 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Gothitelle_Text_1
# 728 "data/maps/PentepetalCity/scripts.pory"
	waitmoncry
# 729 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 730 "data/maps/PentepetalCity/scripts.pory"
	applymovement 36, Common_Movement_FaceLeft
# 731 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 732 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_FatMan::
# 738 "data/maps/PentepetalCity/scripts.pory"
	lock
# 739 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 740 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_FatMan_Text_0
# 741 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_FatMan_Text_1
# 742 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 743 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Appletun::
# 749 "data/maps/PentepetalCity/scripts.pory"
	lock
# 750 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 751 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Appletun_Text_0
# 752 "data/maps/PentepetalCity/scripts.pory"
	playmoncry SPECIES_APPLETUN, CRY_MODE_NORMAL
# 753 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Appletun_Text_1
# 754 "data/maps/PentepetalCity/scripts.pory"
	waitmoncry
# 755 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 756 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Hiker::
# 762 "data/maps/PentepetalCity/scripts.pory"
	lock
# 763 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 764 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Hiker_Text_0
# 765 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Hiker_Text_1
# 766 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 767 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_PickUpRandomFossil::
# 773 "data/maps/PentepetalCity/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_PENTEPETAL_FOSSIL, PentepetalCity_EventScript_PickUpRandomFossil_2
PentepetalCity_EventScript_PickUpRandomFossil_1:
# 784 "data/maps/PentepetalCity/scripts.pory"
	release
	end

PentepetalCity_EventScript_PickUpRandomFossil_2:
# 775 "data/maps/PentepetalCity/scripts.pory"
	lock
# 776 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_PickUpRandomFossil_Text_0
# 777 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 778 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 779 "data/maps/PentepetalCity/scripts.pory"
	randomelement ITEM_SKULL_FOSSIL, ITEM_ARMOR_FOSSIL
# 780 "data/maps/PentepetalCity/scripts.pory"
	giveitem VAR_RESULT
# 781 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 782 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_PENTEPETAL_FOSSIL
	goto PentepetalCity_EventScript_PickUpRandomFossil_1


PentepetalCity_EventScript_BlockPollenPath::
# 790 "data/maps/PentepetalCity/scripts.pory"
	lockall
# 791 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_BlockPollenPath_Text_0
# 792 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 793 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 794 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 795 "data/maps/PentepetalCity/scripts.pory"
	releaseall
	end


PentepetalCity_Trigger_RaniaChimeraEvent_Text_0:
# 38 "data/maps/PentepetalCity/scripts.pory"
	.string "Rania$"

PentepetalCity_Trigger_RaniaChimeraEvent_Text_1:
# 39 "data/maps/PentepetalCity/scripts.pory"
	.string "{PLAYER}! Over here, come quick!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_0:
# 66 "data/maps/PentepetalCity/scripts.pory"
	.string "So, like, remember how I came to\n"
	.string "Péntepetal City just to rest and get\l"
	.string "away from Team Chimera? Well, I can say\l"
	.string "goodbye to those plans.\p"
	.string "Two new {COLOR GREEN}Lazarus Taxa{COLOR DARK_GRAY}, Cranidos and\n"
	.string "Shieldon, were just found in the woods\l"
	.string "nearby. The second the news got out,\l"
	.string "Team Chimera swept in and started to\l"
	.string "steal them all! I need your help to save\l"
	.string "whatever Pokémon we can.\p"
	.string "Before we do that, I need to know that\n"
	.string "you're capable of this. Let's have a\l"
	.string "quick Pokémon battle!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_1:
# 73 "data/maps/PentepetalCity/scripts.pory"
	.string "You're an incredible Trainer,\n"
	.string "{PLAYER}! You'll be able to handle\l"
	.string "these Team Chimera thugs, no problem.\p"
	.string "Here, let me heal your Pokémon. Then\n"
	.string "follow me to where Team Chimera is\l"
	.string "hiding!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_2:
# 82 "data/maps/PentepetalCity/scripts.pory"
	.string "Oh no, the rumors were true!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_3:
# 90 "data/maps/PentepetalCity/scripts.pory"
	.string "It's just like they were saying in town!\n"
	.string "Cranidos and Shieldon live here, but\l"
	.string "they're being rounded up by Team\l"
	.string "Chimera!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_4:
# 97 "data/maps/PentepetalCity/scripts.pory"
	.string "Chimera Grunt$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_5:
# 98 "data/maps/PentepetalCity/scripts.pory"
	.string "Fwahaha, you're too late! These are the\n"
	.string "last living Cranidos and Shieldon\l"
	.string "anywhere on the island. We've rounded\l"
	.string "up all the rest to be sold to the\l"
	.string "highest bidder!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_6:
# 105 "data/maps/PentepetalCity/scripts.pory"
	.string "What, are you gonna try to stop me? A\n"
	.string "couple of lame, weak activists? Heh, do\l"
	.string "your worst!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_7:
# 113 "data/maps/PentepetalCity/scripts.pory"
	.string "Well... I suppose Team Chimera will be\n"
	.string "fine without one or two extra Pokémon.\l"
	.string "But don't be surprised when we show up\l"
	.string "with teams of Rampardos and Bastiodon!\l"
	.string "Fwahaha!\p"
	.string "Time to make our escape! Spiritomb,\n"
	.string "let's get outta here!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_8:
# 124 "data/maps/PentepetalCity/scripts.pory"
	.string "Thanks for saving me again,\n"
	.string "{PLAYER}... I just can't believe Team\l"
	.string "Chimera would do this. Almost all living\l"
	.string "Cranidos and Shieldon, rounded up and\l"
	.string "sold? How awful...\p"
	.string "While you took care of that Grunt, I\n"
	.string "called Niko for help. He's the expert in\l"
	.string "Pokémon care, after all. He should be\l"
	.string "here any mi-$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_9:
# 133 "data/maps/PentepetalCity/scripts.pory"
	.string "Niko$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_10:
# 134 "data/maps/PentepetalCity/scripts.pory"
	.string "RANIA! RANIA! Huff, huff... I flew here\n"
	.string "on my Braviary as fast as I could! Is\l"
	.string "everyone okay?!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_11:
# 137 "data/maps/PentepetalCity/scripts.pory"
	.string "We're okay, Niko, but these Pokémon look\n"
	.string "hurt. Please, make sure they're\l"
	.string "alright... they might be the last of\l"
	.string "their kind in the wild!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_12:
# 143 "data/maps/PentepetalCity/scripts.pory"
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

PentepetalCity_EventScript_RaniaChimeraEvent_Text_13:
# 151 "data/maps/PentepetalCity/scripts.pory"
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

PentepetalCity_EventScript_RaniaChimeraEvent_Text_14:
# 172 "data/maps/PentepetalCity/scripts.pory"
	.string "Jeez, I hope those poor Pokémon will be\n"
	.string "okay... I can't imagine how it must feel\l"
	.string "to be one of the last living members of\l"
	.string "a species.$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_15:
# 179 "data/maps/PentepetalCity/scripts.pory"
	.string "Oh, while I've got you here, I actually\n"
	.string "have something for you! I made a\l"
	.string "Training Guide to teach you how to\l"
	.string "{COLOR GREEN}identify Wild Pokémon Natures{COLOR DARK_GRAY} when you\l"
	.string "encounter them. Check this out!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_16:
# 183 "data/maps/PentepetalCity/scripts.pory"
	.string "You learned how to identify Wild\n"
	.string "Pokémon Natures!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_17:
# 189 "data/maps/PentepetalCity/scripts.pory"
	.string "I hope that serves as a thank-you for\n"
	.string "helping me save those Pokémon.\p"
	.string "If I thought I was exhausted on Myrrini\n"
	.string "Island, now I'm REALLY wiped out! I'm\l"
	.string "gonna head back to the University with\l"
	.string "Niko. Stay safe, {PLAYER}!$"

PentepetalCity_EventScript_DirectionSign_Text_0:
# 343 "data/maps/PentepetalCity/scripts.pory"
	.string "Péntepetal City\n"
	.string "The City of Beauty\p"
	.string "Pollen Road {RIGHT_ARROW}$"

PentepetalCity_DollDecorScript_Text_0:
# 352 "data/maps/PentepetalCity/scripts.pory"
	.string "It's a cute Pokémon Doll! This would be\n"
	.string "perfect for the Cabin on The Delphis!$"

PentepetalCity_EventScript_DollStreetVendor_Text_0:
# 362 "data/maps/PentepetalCity/scripts.pory"
	.string "Street Vendor$"

PentepetalCity_EventScript_DollStreetVendor_Text_1:
# 363 "data/maps/PentepetalCity/scripts.pory"
	.string "Welcome! I sell Pokémon Doll\n"
	.string "Decorations. How can I help you?$"

PentepetalCity_EventScript_OrnamentalDecorStreetVendor_Text_0:
# 402 "data/maps/PentepetalCity/scripts.pory"
	.string "Welcome! I sell Desks and Ornamental\n"
	.string "Room Decorations. How can I help you?$"

PentepetalCity_EventScript_FloorDecorStreetVendor_Text_0:
# 442 "data/maps/PentepetalCity/scripts.pory"
	.string "Welcome! I sell Floor and Wall\n"
	.string "Decorations. How can I help you?$"

PentepetalCity_EventScript_MusicDecorStreetVendor_Text_0:
# 486 "data/maps/PentepetalCity/scripts.pory"
	.string "Hey! I'm selling Note Mats for private\n"
	.string "Rooms. How can I help you?$"

PentepetalCity_EventScript_NinjaBoy_Text_0:
# 517 "data/maps/PentepetalCity/scripts.pory"
	.string "Ninja Boy$"

PentepetalCity_EventScript_NinjaBoy_Text_1:
# 518 "data/maps/PentepetalCity/scripts.pory"
	.string "I wonder what cool decorations I can\n"
	.string "get for my room here! Maybe I can fight\l"
	.string "some of them!$"

PentepetalCity_EventScript_DecorShopSign_Text_0:
# 527 "data/maps/PentepetalCity/scripts.pory"
	.string "Péntepetal City Decorations\n"
	.string "The Best Decor in Ilios!$"

PentepetalCity_EventScript_Beauty_Text_0:
# 537 "data/maps/PentepetalCity/scripts.pory"
	.string "Beauty$"

PentepetalCity_EventScript_Beauty_Text_1:
# 538 "data/maps/PentepetalCity/scripts.pory"
	.string "Empires and Kingdoms used to battle\n"
	.string "over this island. Now that the Ilios\l"
	.string "Region is united, it's a lot more\l"
	.string "peaceful.$"

PentepetalCity_EventScript_Gentleman_Text_0:
# 548 "data/maps/PentepetalCity/scripts.pory"
	.string "Gentleman$"

PentepetalCity_EventScript_Gentleman_Text_1:
# 549 "data/maps/PentepetalCity/scripts.pory"
	.string "I'm on vacation here with my daughter.\n"
	.string "She's obsessed with Pokémon Contests...\l"
	.string "I don't really get it, but they make her\l"
	.string "happy!$"

PentepetalCity_EventScript_Man_Text_0:
# 559 "data/maps/PentepetalCity/scripts.pory"
	.string "Man$"

PentepetalCity_EventScript_Man_Text_1:
# 560 "data/maps/PentepetalCity/scripts.pory"
	.string "Péntepetal City is known for a long\n"
	.string "history of poetry. Maybe writers of the\l"
	.string "past will inspire me!$"

PentepetalCity_EventScript_Woman_Text_0:
# 570 "data/maps/PentepetalCity/scripts.pory"
	.string "Woman$"

PentepetalCity_EventScript_Woman_Text_1:
# 571 "data/maps/PentepetalCity/scripts.pory"
	.string "When Pokémon compete in Contests, they\n"
	.string "can earn Ribbons! They can slightly\l"
	.string "raise certain battle stats. For example,\l"
	.string "Ribbons from Toughness Contests make\l"
	.string "Pokémon a bit physically stronger!$"

PentepetalCity_EventScript_BlackBelt_Text_0:
# 581 "data/maps/PentepetalCity/scripts.pory"
	.string "Black Belt$"

PentepetalCity_EventScript_BlackBelt_Text_1:
# 582 "data/maps/PentepetalCity/scripts.pory"
	.string "Heh, my Breloom is getting faster and\n"
	.string "stronger! There's not a Gym to fight in\l"
	.string "Péntepetal City, but it's worth coming\l"
	.string "by to train!$"

PentepetalCity_EventScript_Breloom_Text_0:
# 592 "data/maps/PentepetalCity/scripts.pory"
	.string "Breloom$"

PentepetalCity_EventScript_Breloom_Text_1:
# 594 "data/maps/PentepetalCity/scripts.pory"
	.string "Hek keh!$"

PentepetalCity_EventScript_Lass_Text_0:
# 605 "data/maps/PentepetalCity/scripts.pory"
	.string "Lass$"

PentepetalCity_EventScript_Lass_Text_1:
# 606 "data/maps/PentepetalCity/scripts.pory"
	.string "The water gets rocky and shallow\n"
	.string "nearby, which makes swimming hard.\l"
	.string "Sometimes ocean Pokémon come up and\l"
	.string "play on the beach!$"

PentepetalCity_EventScript_TuberM_Text_0:
# 616 "data/maps/PentepetalCity/scripts.pory"
	.string "Tuber$"

PentepetalCity_EventScript_TuberM_Text_1:
# 617 "data/maps/PentepetalCity/scripts.pory"
	.string "Look at this awesome Pokémon I just\n"
	.string "caught! It must be one of the\l"
	.string "strongest out there, just look at how\l"
	.string "it bounces!$"

PentepetalCity_EventScript_Magikarp_Text_0:
# 627 "data/maps/PentepetalCity/scripts.pory"
	.string "Magikarp$"

PentepetalCity_EventScript_Magikarp_Text_1:
# 629 "data/maps/PentepetalCity/scripts.pory"
	.string "Plep?$"

PentepetalCity_EventScript_OldWoman_Text_0:
# 640 "data/maps/PentepetalCity/scripts.pory"
	.string "Old Woman$"

PentepetalCity_EventScript_OldWoman_Text_1:
# 641 "data/maps/PentepetalCity/scripts.pory"
	.string "I hear they found wild Cranidos and\n"
	.string "Shieldon here. I found some a few\l"
	.string "months ago, but I haven't seen any\l"
	.string "recently... I hope they're okay.$"

PentepetalCity_EventScript_Artist_Text_0:
# 651 "data/maps/PentepetalCity/scripts.pory"
	.string "Artist$"

PentepetalCity_EventScript_Artist_Text_1:
# 657 "data/maps/PentepetalCity/scripts.pory"
	.string "Your Pokémon has inspired me with their\n"
	.string "talents! I can see why it wins Ribbons.$"

PentepetalCity_EventScript_Artist_Text_2:
# 667 "data/maps/PentepetalCity/scripts.pory"
	.string "I'm looking for the perfect Pokémon to\n"
	.string "paint... I want a winning art piece, so I\l"
	.string "need to see a Contest-winning Pokémon!\p"
	.string "Talk to me when you have a {COLOR GREEN}Pokémon with\n"
	.string "a Ribbon{COLOR DARK_GRAY} to inspire my art.$"

PentepetalCity_EventScript_Artist_Text_3:
# 675 "data/maps/PentepetalCity/scripts.pory"
	.string "Chaire! Have you won any Pokémon\n"
	.string "Contests yet? I'd like to see a {COLOR GREEN}Pokémon\l"
	.string "with a Ribbon{COLOR DARK_GRAY}.$"

PentepetalCity_EventScript_Artist_Text_4:
# 688 "data/maps/PentepetalCity/scripts.pory"
	.string "Your {STR_VAR_1} has a stunning\n"
	.string "Ribbon! It must be a Pokémon Contest\l"
	.string "winner, this will make for a perfect\l"
	.string "painting!\p"
	.string "You have my inspiration flowing. Please,\n"
	.string "take this!$"

PentepetalCity_EventScript_Artist_Text_5:
# 700 "data/maps/PentepetalCity/scripts.pory"
	.string "Hm, still working on the Pokémon\n"
	.string "Contests, huh? That's okay, I haven't\l"
	.string "won any either.\p"
	.string "Come to me when you have a {COLOR GREEN}Pokémon with\n"
	.string "a Contest Ribbon{COLOR DARK_GRAY}. I'll give you a reward\l"
	.string "for your effort!$"

PentepetalCity_EventScript_Girl_Text_0:
# 712 "data/maps/PentepetalCity/scripts.pory"
	.string "Girl$"

PentepetalCity_EventScript_Girl_Text_1:
# 713 "data/maps/PentepetalCity/scripts.pory"
	.string "My Gothitelle is almost ready to\n"
	.string "compete in a Contest! Nobody can beat\l"
	.string "her in a Beauty competition!$"

PentepetalCity_EventScript_Gothitelle_Text_0:
# 725 "data/maps/PentepetalCity/scripts.pory"
	.string "Gothitelle$"

PentepetalCity_EventScript_Gothitelle_Text_1:
# 727 "data/maps/PentepetalCity/scripts.pory"
	.string "Bree-ei!$"

PentepetalCity_EventScript_FatMan_Text_0:
# 740 "data/maps/PentepetalCity/scripts.pory"
	.string "Fat Man$"

PentepetalCity_EventScript_FatMan_Text_1:
# 741 "data/maps/PentepetalCity/scripts.pory"
	.string "Ehehe, look at my Shiny Appletun! I\n"
	.string "found a bright green Applin when I was\l"
	.string "young, and I'v been riding that\l"
	.string "excitement high ever since!$"

PentepetalCity_EventScript_Appletun_Text_0:
# 751 "data/maps/PentepetalCity/scripts.pory"
	.string "Appletun$"

PentepetalCity_EventScript_Appletun_Text_1:
# 753 "data/maps/PentepetalCity/scripts.pory"
	.string "Huu-ahh.$"

PentepetalCity_EventScript_Hiker_Text_0:
# 764 "data/maps/PentepetalCity/scripts.pory"
	.string "Hiker$"

PentepetalCity_EventScript_Hiker_Text_1:
# 765 "data/maps/PentepetalCity/scripts.pory"
	.string "I came by to see the wild Cranidos and\n"
	.string "Shieldon folks have been talking about.\l"
	.string "Now that I'm here, it seems like they're\l"
	.string "all gone...$"

PentepetalCity_EventScript_PickUpRandomFossil_Text_0:
# 776 "data/maps/PentepetalCity/scripts.pory"
	.string "Hm? There's a strange-looking rock in\n"
	.string "this bag abandoned by Team Chimera!$"

PentepetalCity_EventScript_BlockPollenPath_Text_0:
# 791 "data/maps/PentepetalCity/scripts.pory"
	.string "This way leads to the {COLOR GREEN}Ruins of Ahiyawa{COLOR DARK_GRAY},\n"
	.string "where the {COLOR GREEN}Elite Four{COLOR DARK_GRAY} used to reside.\l"
	.string "It's been abandoned for years, so it\l"
	.string "wouldn't be safe to go this way.$"

PentepetalCity_Text_GruntLose::
# 328 "data/maps/PentepetalCity/scripts.pory"
	.string "No! How can we keep losing to the likes\n"
	.string "of you?!$"

PentepetalCity_Text_RaniaLose::
# 332 "data/maps/PentepetalCity/scripts.pory"
	.string "Woah! You can definitely handle this.$"

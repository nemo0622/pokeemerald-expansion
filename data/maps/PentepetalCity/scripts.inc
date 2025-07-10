PentepetalCity_MapScripts::
# 2 "data/maps/PentepetalCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PentepetalCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PentepetalCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_VISITED_PENTEPETAL_CITY
# 5 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 6 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 7 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 8 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 9 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 10 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 11 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 12 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 13 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 14 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 15 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 16 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 17 "data/maps/PentepetalCity/scripts.pory"
	setobjectaswildencounter 40, ENCOUNTER_LAND
# 18 "data/maps/PentepetalCity/scripts.pory"
	setobjectaswildencounter 41, ENCOUNTER_LAND
# 19 "data/maps/PentepetalCity/scripts.pory"
	setobjectaswildencounter 42, ENCOUNTER_LAND
# 20 "data/maps/PentepetalCity/scripts.pory"
	setobjectaswildencounter 43, ENCOUNTER_LAND
# 21 "data/maps/PentepetalCity/scripts.pory"
	setobjectaswildencounter 44, ENCOUNTER_LAND
# 22 "data/maps/PentepetalCity/scripts.pory"
	setobjectaswildencounter 45, ENCOUNTER_SURF
# 23 "data/maps/PentepetalCity/scripts.pory"
	setobjectaswildencounter 46, ENCOUNTER_SURF
	return


PentepetalCity_Trigger_RaniaChimeraEvent::
# 29 "data/maps/PentepetalCity/scripts.pory"
	lockall
# 30 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 31 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 32 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 33 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 34 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_Trigger_RaniaChimeraEvent_Text_1
# 35 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 36 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 37 "data/maps/PentepetalCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 39 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_HIDE_NIKO_PENTEPETAL_CITY
# 40 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 41 "data/maps/PentepetalCity/scripts.pory"
	removeobject 20
# 42 "data/maps/PentepetalCity/scripts.pory"
	warpcontinuescript MAP_PENTEPETAL_CITY, 20, 26, PentepetalCity_EventScript_RaniaChimeraEvent
	end


PentepetalCity_EventScript_RaniaChimeraEvent::
# 48 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 49 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 50 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 51 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 52 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 53 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PentepetalCity_Movement_PlayerApproachesRania
# 54 "data/maps/PentepetalCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 55 "data/maps/PentepetalCity/scripts.pory"
	delay 30
# 57 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 58 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_0
# 59 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 60 "data/maps/PentepetalCity/scripts.pory"
	special HealPlayerParty
# 61 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 62 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, PentepetalCity_Movement_RaniaGoesToClearing
# 63 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PentepetalCity_Movement_PlayerFollowsToClearing
# 64 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 65 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 66 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 67 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_1
# 68 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 70 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PentepetalCity_Movement_PlayerApproachesChimeraGrunt
# 71 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, PentepetalCity_Movement_RaniaRunsToCranidos
# 72 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 73 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 74 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 75 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_2
# 76 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 78 "data/maps/PentepetalCity/scripts.pory"
	applymovement 19, PentepetalCity_Movement_GruntApproachesRania
# 79 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 80 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 81 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_3
# 83 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_4
# 84 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 85 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 86 "data/maps/PentepetalCity/scripts.pory"
	applymovement 19, Common_Movement_FaceRight
# 87 "data/maps/PentepetalCity/scripts.pory"
	applymovement 18, PentepetalCity_Movement_SpiritombApproachesPlayer
# 88 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 89 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_3
# 90 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_5
# 91 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 94 "data/maps/PentepetalCity/scripts.pory"
	trainerbattle_no_intro TRAINER_PENTEPETAL_CHIMERA_GRUNT, PentepetalCity_Text_GruntLose
# 96 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 97 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_3
# 98 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_6
# 99 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 100 "data/maps/PentepetalCity/scripts.pory"
	applymovement 19, PentepetalCity_Movement_GruntFlees
# 101 "data/maps/PentepetalCity/scripts.pory"
	applymovement 18, PentepetalCity_Movement_SpiritombFlees
# 102 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 103 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 105 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 106 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 107 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 108 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 109 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_7
# 110 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 112 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_NIKO_PENTEPETAL_CITY
# 113 "data/maps/PentepetalCity/scripts.pory"
	addobject 20
# 114 "data/maps/PentepetalCity/scripts.pory"
	applymovement 20, PentepetalCity_Movement_NikoApproaches
# 115 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 116 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 117 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 118 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_8
# 119 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_9
# 120 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 121 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 122 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_10
# 123 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 124 "data/maps/PentepetalCity/scripts.pory"
	applymovement 20, PentepetalCity_Movement_NikoChecksPokemon
# 125 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 127 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_8
# 128 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_11
# 129 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 130 "data/maps/PentepetalCity/scripts.pory"
	applymovement 20, Common_Movement_WalkRight
# 131 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 132 "data/maps/PentepetalCity/scripts.pory"
	applymovement 20, Common_Movement_FaceUp
# 133 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 134 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 135 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_8
# 136 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_12
# 137 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 138 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 140 "data/maps/PentepetalCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 141 "data/maps/PentepetalCity/scripts.pory"
	delay 30
# 142 "data/maps/PentepetalCity/scripts.pory"
	removeobject 20
# 143 "data/maps/PentepetalCity/scripts.pory"
	removeobject 16
# 144 "data/maps/PentepetalCity/scripts.pory"
	removeobject 17
# 145 "data/maps/PentepetalCity/scripts.pory"
	removeobject 18
# 146 "data/maps/PentepetalCity/scripts.pory"
	removeobject 19
# 147 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_HIDE_NIKO_PENTEPETAL_CITY
# 148 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_HIDE_CHIMERA_PENTEPETAL_CITY
# 149 "data/maps/PentepetalCity/scripts.pory"
	delay 30
# 150 "data/maps/PentepetalCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 151 "data/maps/PentepetalCity/scripts.pory"
	delay 20
# 153 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 154 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 155 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 156 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 157 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_13
# 158 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 159 "data/maps/PentepetalCity/scripts.pory"
	delay 20
# 160 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 161 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 162 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 163 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 164 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_14
# 165 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 166 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 167 "data/maps/PentepetalCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 168 "data/maps/PentepetalCity/scripts.pory"
	message PentepetalCity_EventScript_RaniaChimeraEvent_Text_15
# 169 "data/maps/PentepetalCity/scripts.pory"
	waitmessage
# 170 "data/maps/PentepetalCity/scripts.pory"
	waitfanfare
# 171 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 172 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 173 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 174 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_16
# 175 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 177 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, PentepetalCity_Movement_RaniaLeaves
# 178 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 179 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_HIDE_RANIA_PENTEPETAL_CITY
# 180 "data/maps/PentepetalCity/scripts.pory"
	removeobject 9
# 183 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_UNLOCKED_WILD_NATURE_VIEW
# 185 "data/maps/PentepetalCity/scripts.pory"
	setvar VAR_NIKO_STATE, 10
# 186 "data/maps/PentepetalCity/scripts.pory"
	setvar VAR_RANIA_STATE, 9
# 187 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_RANIA_ACRISIA_UNIVERSITY
# 189 "data/maps/PentepetalCity/scripts.pory"
	delay 20
# 190 "data/maps/PentepetalCity/scripts.pory"
	completequest QUEST_VISIT_RANIA_PENTEPETAL
# 192 "data/maps/PentepetalCity/scripts.pory"
	releaseall
	end


# 196 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_PlayerApproachesRania:
# 198 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 198 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 198 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 199 "data/maps/PentepetalCity/scripts.pory"
	face_left
# 200 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 202 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_RaniaGoesToClearing:
# 204 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 204 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 205 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 205 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 205 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 205 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 205 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 206 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 206 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 206 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 206 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 206 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 206 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 206 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 207 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 208 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 209 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 209 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 209 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 210 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 210 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 211 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 211 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 211 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 212 "data/maps/PentepetalCity/scripts.pory"
	emote_exclamation_mark
# 213 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 214 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 216 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_PlayerFollowsToClearing:
# 218 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 218 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 218 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 219 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 219 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 219 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 219 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 219 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 220 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 220 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 220 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 220 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 220 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 220 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 220 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 221 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 222 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 223 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 223 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 223 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 224 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 224 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 225 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 225 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 226 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 227 "data/maps/PentepetalCity/scripts.pory"
	delay_16
# 228 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 230 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_RaniaRunsToCranidos:
# 232 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 232 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 233 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_left
# 233 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_left
# 234 "data/maps/PentepetalCity/scripts.pory"
	jump_in_place_up
# 234 "data/maps/PentepetalCity/scripts.pory"
	jump_in_place_up
# 235 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 236 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 238 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_PlayerApproachesChimeraGrunt:
# 240 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 240 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 240 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 241 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 242 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 244 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_GruntApproachesRania:
# 246 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 247 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 248 "data/maps/PentepetalCity/scripts.pory"
	face_left
# 249 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 251 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_SpiritombApproachesPlayer:
# 253 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 254 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 254 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 255 "data/maps/PentepetalCity/scripts.pory"
	face_down
# 256 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 258 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_GruntFlees:
# 260 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 260 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 260 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 261 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_right
# 262 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 262 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 262 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 263 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_right
# 264 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 264 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 264 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 265 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 267 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_SpiritombFlees:
# 269 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 270 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 270 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 270 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 270 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 271 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 272 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 272 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 272 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 273 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 274 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 274 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 275 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 277 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_NikoApproaches:
# 279 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 280 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_left
# 280 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_left
# 281 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 281 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 281 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 281 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 282 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_left
# 283 "data/maps/PentepetalCity/scripts.pory"
	jump_in_place_up
# 283 "data/maps/PentepetalCity/scripts.pory"
	jump_in_place_up
# 284 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 285 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 287 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_NikoChecksPokemon:
# 289 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 290 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 291 "data/maps/PentepetalCity/scripts.pory"
	delay_16
# 291 "data/maps/PentepetalCity/scripts.pory"
	delay_16
# 292 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 293 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 293 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 293 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 294 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 294 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 294 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 295 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 296 "data/maps/PentepetalCity/scripts.pory"
	face_left
# 297 "data/maps/PentepetalCity/scripts.pory"
	delay_16
# 297 "data/maps/PentepetalCity/scripts.pory"
	delay_16
# 298 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 299 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 299 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 299 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 300 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 300 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 301 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 302 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 304 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_RaniaLeaves:
# 306 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 307 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 308 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 308 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 308 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 308 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 309 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 310 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 310 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 311 "data/maps/PentepetalCity/scripts.pory"
	step_end

PentepetalCity_EventScript_DirectionSign::
# 323 "data/maps/PentepetalCity/scripts.pory"
	lock
# 324 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_DirectionSign_Text_0
# 325 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 326 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_DollDecorScript::
# 332 "data/maps/PentepetalCity/scripts.pory"
	lock
# 333 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_DollDecorScript_Text_0
# 334 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 335 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_DollStreetVendor::
# 341 "data/maps/PentepetalCity/scripts.pory"
	lock
# 342 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 343 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 344 "data/maps/PentepetalCity/scripts.pory"
	message PentepetalCity_EventScript_DollStreetVendor_Text_1
# 345 "data/maps/PentepetalCity/scripts.pory"
	waitmessage
# 346 "data/maps/PentepetalCity/scripts.pory"
	pokemartdecoration PentepetalCity_DollDecorShop
# 347 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 348 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 349 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 350 "data/maps/PentepetalCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 351 "data/maps/PentepetalCity/scripts.pory"
	release
	end


# 355 "data/maps/PentepetalCity/scripts.pory"

# 356 "data/maps/PentepetalCity/scripts.pory"
    .align 2
# 357 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_DollDecorShop:
# 358 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_MIMIKYU_DOLL
# 359 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_JIGGLYPUFF_DOLL
# 360 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_IMPIDIMP_DOLL
# 361 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_DUSKULL_DOLL
# 362 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ARCHEN_DOLL
# 363 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_TIRTOUGA_DOLL
# 364 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SKIDDO_DOLL
# 365 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_BALTOY_DOLL
# 366 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_KECLEON_DOLL
# 367 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_APPLIN_DOLL
# 368 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SWABLU_DOLL
# 369 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ROCKRUFF_DOLL
# 370 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_TOUCANNON_DOLL
# 371 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ARCANINE_DOLL
# 372 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_KOMMO_O_DOLL
# 373 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_NONE
# 374 "data/maps/PentepetalCity/scripts.pory"
	release
# 375 "data/maps/PentepetalCity/scripts.pory"
	end

PentepetalCity_EventScript_OrnamentalDecorStreetVendor::
# 380 "data/maps/PentepetalCity/scripts.pory"
	lock
# 381 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 382 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 383 "data/maps/PentepetalCity/scripts.pory"
	message PentepetalCity_EventScript_OrnamentalDecorStreetVendor_Text_0
# 384 "data/maps/PentepetalCity/scripts.pory"
	waitmessage
# 385 "data/maps/PentepetalCity/scripts.pory"
	pokemartdecoration PentepetalCity_OrnamentDecorShop
# 386 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 387 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 388 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 389 "data/maps/PentepetalCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 390 "data/maps/PentepetalCity/scripts.pory"
	release
	end


# 394 "data/maps/PentepetalCity/scripts.pory"

# 395 "data/maps/PentepetalCity/scripts.pory"
    .align 2
# 396 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_OrnamentDecorShop:
# 397 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_HEAVY_DESK
# 398 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_RAGGED_DESK
# 399 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_COMFORT_DESK
# 400 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_BOOK_AND_QUILL
# 401 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_HEAVY_CHAIR
# 402 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_RAGGED_CHAIR
# 403 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_COMFORT_CHAIR
# 404 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_RED_PLANT
# 405 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_TROPICAL_PLANT
# 406 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_COLORFUL_PLANT
# 407 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SHRINE
# 408 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SLIDE
# 409 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_STAND
# 410 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_BREAKABLE_DOOR
# 411 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_TV
# 412 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_PATTERNED_BED
# 413 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_NONE
# 414 "data/maps/PentepetalCity/scripts.pory"
	release
# 415 "data/maps/PentepetalCity/scripts.pory"
	end

PentepetalCity_EventScript_FloorDecorStreetVendor::
# 420 "data/maps/PentepetalCity/scripts.pory"
	lock
# 421 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 422 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 423 "data/maps/PentepetalCity/scripts.pory"
	message PentepetalCity_EventScript_FloorDecorStreetVendor_Text_0
# 424 "data/maps/PentepetalCity/scripts.pory"
	waitmessage
# 425 "data/maps/PentepetalCity/scripts.pory"
	pokemartdecoration PentepetalCity_FloorDecorShop
# 426 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 427 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 428 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 429 "data/maps/PentepetalCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 430 "data/maps/PentepetalCity/scripts.pory"
	release
	end


# 434 "data/maps/PentepetalCity/scripts.pory"

# 435 "data/maps/PentepetalCity/scripts.pory"
    .align 2
# 436 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_FloorDecorShop:
# 437 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_DOLL_SQUARE
# 438 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_WOOD_MAT
# 439 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_GLITTER_MAT
# 440 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_JUMP_MAT
# 441 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SPIN_MAT
# 442 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_FIRE_BLAST_MAT
# 443 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_POWDER_SNOW_MAT
# 444 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ATTRACT_MAT
# 445 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_FISSURE_MAT
# 446 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SPIKES_MAT
# 447 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_PUPPY_POSTER
# 448 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SEA_POSTER
# 449 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SKY_POSTER
# 450 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_PIKA_CUSHION
# 451 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ROUND_CUSHION
# 452 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_KISS_CUSHION
# 453 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ZIGZAG_CUSHION
# 454 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SPIN_CUSHION
# 455 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_DIAMOND_CUSHION
# 456 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_BALL_CUSHION
# 457 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_NONE
# 458 "data/maps/PentepetalCity/scripts.pory"
	release
# 459 "data/maps/PentepetalCity/scripts.pory"
	end

PentepetalCity_EventScript_MusicDecorStreetVendor::
# 464 "data/maps/PentepetalCity/scripts.pory"
	lock
# 465 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 466 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 467 "data/maps/PentepetalCity/scripts.pory"
	message PentepetalCity_EventScript_MusicDecorStreetVendor_Text_0
# 468 "data/maps/PentepetalCity/scripts.pory"
	waitmessage
# 469 "data/maps/PentepetalCity/scripts.pory"
	pokemartdecoration PentepetalCity_MusicDecorShop
# 470 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 471 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 472 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 473 "data/maps/PentepetalCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 474 "data/maps/PentepetalCity/scripts.pory"
	release
	end


# 478 "data/maps/PentepetalCity/scripts.pory"

# 479 "data/maps/PentepetalCity/scripts.pory"
    .align 2
# 480 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_MusicDecorShop:
# 481 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 482 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 483 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 484 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 485 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 486 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 487 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 488 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 489 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_NONE
# 490 "data/maps/PentepetalCity/scripts.pory"
	release
# 491 "data/maps/PentepetalCity/scripts.pory"
	end

PentepetalCity_EventScript_NinjaBoy::
# 496 "data/maps/PentepetalCity/scripts.pory"
	lock
# 497 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 498 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_NinjaBoy_Text_0
# 499 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_NinjaBoy_Text_1
# 500 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 501 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_DecorShopSign::
# 507 "data/maps/PentepetalCity/scripts.pory"
	lock
# 508 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_DecorShopSign_Text_0
# 509 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 510 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Beauty::
# 516 "data/maps/PentepetalCity/scripts.pory"
	lock
# 517 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 518 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Beauty_Text_0
# 519 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Beauty_Text_1
# 520 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 521 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Gentleman::
# 527 "data/maps/PentepetalCity/scripts.pory"
	lock
# 528 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 529 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Gentleman_Text_0
# 530 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Gentleman_Text_1
# 531 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 532 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Man::
# 538 "data/maps/PentepetalCity/scripts.pory"
	lock
# 539 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 540 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Man_Text_0
# 541 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Man_Text_1
# 542 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 543 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Woman::
# 549 "data/maps/PentepetalCity/scripts.pory"
	lock
# 550 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 551 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Woman_Text_0
# 552 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Woman_Text_1
# 553 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 554 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_BlackBelt::
# 560 "data/maps/PentepetalCity/scripts.pory"
	lock
# 561 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 562 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_BlackBelt_Text_0
# 563 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_BlackBelt_Text_1
# 564 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 565 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Breloom::
# 571 "data/maps/PentepetalCity/scripts.pory"
	lock
# 572 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 573 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Breloom_Text_0
# 574 "data/maps/PentepetalCity/scripts.pory"
	playmoncry SPECIES_BRELOOM, CRY_MODE_NORMAL
# 575 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Breloom_Text_1
# 576 "data/maps/PentepetalCity/scripts.pory"
	waitmoncry
# 577 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 578 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Lass::
# 584 "data/maps/PentepetalCity/scripts.pory"
	lock
# 585 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 586 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Lass_Text_0
# 587 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Lass_Text_1
# 588 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 589 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_TuberM::
# 595 "data/maps/PentepetalCity/scripts.pory"
	lock
# 596 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 597 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_TuberM_Text_0
# 598 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_TuberM_Text_1
# 599 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 600 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Magikarp::
# 606 "data/maps/PentepetalCity/scripts.pory"
	lock
# 607 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 608 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Magikarp_Text_0
# 609 "data/maps/PentepetalCity/scripts.pory"
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
# 610 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Magikarp_Text_1
# 611 "data/maps/PentepetalCity/scripts.pory"
	waitmoncry
# 612 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 613 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_OldWoman::
# 619 "data/maps/PentepetalCity/scripts.pory"
	lock
# 620 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 621 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_OldWoman_Text_0
# 622 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_OldWoman_Text_1
# 623 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 624 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Artist::
# 630 "data/maps/PentepetalCity/scripts.pory"
	lock
# 631 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 632 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Artist_Text_0
# 635 "data/maps/PentepetalCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_SHOW_RIBBON_TO_ARTIST
# 636 "data/maps/PentepetalCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PentepetalCity_EventScript_Artist_2
# 645 "data/maps/PentepetalCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_SHOW_RIBBON_TO_ARTIST
# 646 "data/maps/PentepetalCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PentepetalCity_EventScript_Artist_5
# 656 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Artist_Text_3
# 657 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 659 "data/maps/PentepetalCity/scripts.pory"
	special CheckIfAnyMonsHaveRibbons
# 660 "data/maps/PentepetalCity/scripts.pory"
	delay 30
# 662 "data/maps/PentepetalCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PentepetalCity_EventScript_Artist_8
# 680 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Artist_Text_0
# 681 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Artist_Text_5
# 682 "data/maps/PentepetalCity/scripts.pory"
	closemessage
PentepetalCity_EventScript_Artist_4:
# 685 "data/maps/PentepetalCity/scripts.pory"
	release
	end

PentepetalCity_EventScript_Artist_2:
# 638 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Artist_Text_1
# 639 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 640 "data/maps/PentepetalCity/scripts.pory"
	release
	end

PentepetalCity_EventScript_Artist_5:
# 648 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Artist_Text_2
# 649 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 651 "data/maps/PentepetalCity/scripts.pory"
	delay 20
# 652 "data/maps/PentepetalCity/scripts.pory"
	startquest QUEST_SHOW_RIBBON_TO_ARTIST
	goto PentepetalCity_EventScript_Artist_4

PentepetalCity_EventScript_Artist_8:
# 664 "data/maps/PentepetalCity/scripts.pory"
	applymovement 32, Common_Movement_Heart
# 665 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 666 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 667 "data/maps/PentepetalCity/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 668 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Artist_Text_0
# 669 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Artist_Text_4
# 670 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 672 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 673 "data/maps/PentepetalCity/scripts.pory"
	giveitem ITEM_TM_DRAINING_KISS
# 674 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 675 "data/maps/PentepetalCity/scripts.pory"
	delay 20
# 676 "data/maps/PentepetalCity/scripts.pory"
	completequest QUEST_SHOW_RIBBON_TO_ARTIST
	goto PentepetalCity_EventScript_Artist_4


PentepetalCity_EventScript_Girl::
# 691 "data/maps/PentepetalCity/scripts.pory"
	lock
# 692 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 693 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Girl_Text_0
# 694 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Girl_Text_1
# 695 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 696 "data/maps/PentepetalCity/scripts.pory"
	applymovement 35, Common_Movement_FaceRight
# 697 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 698 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Gothitelle::
# 704 "data/maps/PentepetalCity/scripts.pory"
	lock
# 705 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 706 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Gothitelle_Text_0
# 707 "data/maps/PentepetalCity/scripts.pory"
	playmoncry SPECIES_GOTHITELLE, CRY_MODE_NORMAL
# 708 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Gothitelle_Text_1
# 709 "data/maps/PentepetalCity/scripts.pory"
	waitmoncry
# 710 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 711 "data/maps/PentepetalCity/scripts.pory"
	applymovement 36, Common_Movement_FaceLeft
# 712 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 713 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_FatMan::
# 719 "data/maps/PentepetalCity/scripts.pory"
	lock
# 720 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 721 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_FatMan_Text_0
# 722 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_FatMan_Text_1
# 723 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 724 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Appletun::
# 730 "data/maps/PentepetalCity/scripts.pory"
	lock
# 731 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 732 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Appletun_Text_0
# 733 "data/maps/PentepetalCity/scripts.pory"
	playmoncry SPECIES_APPLETUN, CRY_MODE_NORMAL
# 734 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Appletun_Text_1
# 735 "data/maps/PentepetalCity/scripts.pory"
	waitmoncry
# 736 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 737 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_Hiker::
# 743 "data/maps/PentepetalCity/scripts.pory"
	lock
# 744 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 745 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_Hiker_Text_0
# 746 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_Hiker_Text_1
# 747 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 748 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_PickUpRandomFossil::
# 754 "data/maps/PentepetalCity/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_PENTEPETAL_FOSSIL, PentepetalCity_EventScript_PickUpRandomFossil_2
PentepetalCity_EventScript_PickUpRandomFossil_1:
# 765 "data/maps/PentepetalCity/scripts.pory"
	release
	end

PentepetalCity_EventScript_PickUpRandomFossil_2:
# 756 "data/maps/PentepetalCity/scripts.pory"
	lock
# 757 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_PickUpRandomFossil_Text_0
# 758 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 759 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 760 "data/maps/PentepetalCity/scripts.pory"
	randomelement ITEM_SKULL_FOSSIL, ITEM_ARMOR_FOSSIL
# 761 "data/maps/PentepetalCity/scripts.pory"
	giveitem VAR_RESULT
# 762 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 763 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_PENTEPETAL_FOSSIL
	goto PentepetalCity_EventScript_PickUpRandomFossil_1


PentepetalCity_Trigger_RaniaChimeraEvent_Text_0:
# 33 "data/maps/PentepetalCity/scripts.pory"
	.string "Rania$"

PentepetalCity_Trigger_RaniaChimeraEvent_Text_1:
# 34 "data/maps/PentepetalCity/scripts.pory"
	.string "{PLAYER}! Over here, come quick!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_0:
# 58 "data/maps/PentepetalCity/scripts.pory"
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
# 67 "data/maps/PentepetalCity/scripts.pory"
	.string "Oh no, the rumors were true!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_2:
# 75 "data/maps/PentepetalCity/scripts.pory"
	.string "It's just like they were saying in town!\n"
	.string "Cranidos and Shieldon live here, but\l"
	.string "they're being rounded up by Team\l"
	.string "Chimera!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_3:
# 82 "data/maps/PentepetalCity/scripts.pory"
	.string "Chimera Grunt$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_4:
# 83 "data/maps/PentepetalCity/scripts.pory"
	.string "Fwahaha, you're too late! These are the\n"
	.string "last living Cranidos and Shieldon\l"
	.string "anywhere on the island. We've rounded\l"
	.string "up all the rest to be sold to the\l"
	.string "highest bidder!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_5:
# 90 "data/maps/PentepetalCity/scripts.pory"
	.string "What, are you gonna try to stop me? A\n"
	.string "couple of lame, weak activists? Heh, do\l"
	.string "your worst!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_6:
# 98 "data/maps/PentepetalCity/scripts.pory"
	.string "Well... I suppose Team Chimera will be\n"
	.string "fine without one or two extra Pokémon.\l"
	.string "But don't be surprised when we show up\l"
	.string "with teams of Rampardos and Bastiodon!\l"
	.string "Fwahaha!\p"
	.string "Time to make our escape! Spiritomb,\n"
	.string "let's get outta here!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_7:
# 109 "data/maps/PentepetalCity/scripts.pory"
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
# 118 "data/maps/PentepetalCity/scripts.pory"
	.string "Niko$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_9:
# 119 "data/maps/PentepetalCity/scripts.pory"
	.string "RANIA! RANIA! Huff, huff... I flew here\n"
	.string "on my Braviary as fast as I could! Is\l"
	.string "everyone okay?!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_10:
# 122 "data/maps/PentepetalCity/scripts.pory"
	.string "We're okay, Niko, but these Pokémon look\n"
	.string "hurt. Please, make sure they're\l"
	.string "alright... they might be the last of\l"
	.string "their kind in the wild!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_11:
# 128 "data/maps/PentepetalCity/scripts.pory"
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
# 136 "data/maps/PentepetalCity/scripts.pory"
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
# 157 "data/maps/PentepetalCity/scripts.pory"
	.string "Jeez, I hope those poor Pokémon will be\n"
	.string "okay... I can't imagine how it must feel\l"
	.string "to be one of the last living members of\l"
	.string "a species.$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_14:
# 164 "data/maps/PentepetalCity/scripts.pory"
	.string "Oh, while I've got you here, I actually\n"
	.string "have something for you! I made a\l"
	.string "Training Guide to teach you how to\l"
	.string "{COLOR GREEN}identify Wild Pokémon Natures{COLOR DARK_GRAY} when you\l"
	.string "encounter them. Check this out!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_15:
# 168 "data/maps/PentepetalCity/scripts.pory"
	.string "You learned how to identify Wild\n"
	.string "Pokémon Natures!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_16:
# 174 "data/maps/PentepetalCity/scripts.pory"
	.string "I hope that serves as a thank-you for\n"
	.string "helping me save those Pokémon.\p"
	.string "If I thought I was exhausted on Myrrini\n"
	.string "Island, now I'm REALLY wiped out! I'm\l"
	.string "gonna head back to the University with\l"
	.string "Niko. Stay safe, {PLAYER}!$"

PentepetalCity_EventScript_DirectionSign_Text_0:
# 324 "data/maps/PentepetalCity/scripts.pory"
	.string "Péntepetal City\n"
	.string "The City of Beauty\p"
	.string "Pollen Road {RIGHT_ARROW}$"

PentepetalCity_DollDecorScript_Text_0:
# 333 "data/maps/PentepetalCity/scripts.pory"
	.string "It's a cute Pokémon Doll! This would be\n"
	.string "perfect for the Cabin on The Delphis!$"

PentepetalCity_EventScript_DollStreetVendor_Text_0:
# 343 "data/maps/PentepetalCity/scripts.pory"
	.string "Street Vendor$"

PentepetalCity_EventScript_DollStreetVendor_Text_1:
# 344 "data/maps/PentepetalCity/scripts.pory"
	.string "Welcome! I sell Pokémon Doll\n"
	.string "Decorations. How can I help you?$"

PentepetalCity_EventScript_OrnamentalDecorStreetVendor_Text_0:
# 383 "data/maps/PentepetalCity/scripts.pory"
	.string "Welcome! I sell Desks and Ornamental\n"
	.string "Room Decorations. How can I help you?$"

PentepetalCity_EventScript_FloorDecorStreetVendor_Text_0:
# 423 "data/maps/PentepetalCity/scripts.pory"
	.string "Welcome! I sell Floor and Wall\n"
	.string "Decorations. How can I help you?$"

PentepetalCity_EventScript_MusicDecorStreetVendor_Text_0:
# 467 "data/maps/PentepetalCity/scripts.pory"
	.string "Hey! I'm selling Note Mats for private\n"
	.string "Rooms. How can I help you?$"

PentepetalCity_EventScript_NinjaBoy_Text_0:
# 498 "data/maps/PentepetalCity/scripts.pory"
	.string "Ninja Boy$"

PentepetalCity_EventScript_NinjaBoy_Text_1:
# 499 "data/maps/PentepetalCity/scripts.pory"
	.string "I wonder what cool decorations I can\n"
	.string "get for my room here! Maybe I can fight\l"
	.string "some of them!$"

PentepetalCity_EventScript_DecorShopSign_Text_0:
# 508 "data/maps/PentepetalCity/scripts.pory"
	.string "Péntepetal City Decorations\n"
	.string "The Best Decor in Ilios!$"

PentepetalCity_EventScript_Beauty_Text_0:
# 518 "data/maps/PentepetalCity/scripts.pory"
	.string "Beauty$"

PentepetalCity_EventScript_Beauty_Text_1:
# 519 "data/maps/PentepetalCity/scripts.pory"
	.string "Empires and Kingdoms used to battle\n"
	.string "over this island. Now that the Ilios\l"
	.string "Region is united, it's a lot more\l"
	.string "peaceful.$"

PentepetalCity_EventScript_Gentleman_Text_0:
# 529 "data/maps/PentepetalCity/scripts.pory"
	.string "Gentleman$"

PentepetalCity_EventScript_Gentleman_Text_1:
# 530 "data/maps/PentepetalCity/scripts.pory"
	.string "I'm on vacation here with my daughter.\n"
	.string "She's obsessed with Pokémon Contests...\l"
	.string "I don't really get it, but they make her\l"
	.string "happy!$"

PentepetalCity_EventScript_Man_Text_0:
# 540 "data/maps/PentepetalCity/scripts.pory"
	.string "Man$"

PentepetalCity_EventScript_Man_Text_1:
# 541 "data/maps/PentepetalCity/scripts.pory"
	.string "Péntepetal City is known for a long\n"
	.string "history of poetry. Maybe writers of the\l"
	.string "past will inspire me!$"

PentepetalCity_EventScript_Woman_Text_0:
# 551 "data/maps/PentepetalCity/scripts.pory"
	.string "Woman$"

PentepetalCity_EventScript_Woman_Text_1:
# 552 "data/maps/PentepetalCity/scripts.pory"
	.string "When Pokémon compete in Contests, they\n"
	.string "can earn Ribbons! They can slightly\l"
	.string "raise certain battle stats. For example,\l"
	.string "Ribbons from Toughness Contests make\l"
	.string "Pokémon a bit physically stronger!$"

PentepetalCity_EventScript_BlackBelt_Text_0:
# 562 "data/maps/PentepetalCity/scripts.pory"
	.string "Black Belt$"

PentepetalCity_EventScript_BlackBelt_Text_1:
# 563 "data/maps/PentepetalCity/scripts.pory"
	.string "Heh, my Breloom is getting faster and\n"
	.string "stronger! There's not a Gym to fight in\l"
	.string "Péntepetal City, but it's worth coming\l"
	.string "by to train!$"

PentepetalCity_EventScript_Breloom_Text_0:
# 573 "data/maps/PentepetalCity/scripts.pory"
	.string "Breloom$"

PentepetalCity_EventScript_Breloom_Text_1:
# 575 "data/maps/PentepetalCity/scripts.pory"
	.string "Hek keh!$"

PentepetalCity_EventScript_Lass_Text_0:
# 586 "data/maps/PentepetalCity/scripts.pory"
	.string "Lass$"

PentepetalCity_EventScript_Lass_Text_1:
# 587 "data/maps/PentepetalCity/scripts.pory"
	.string "The water gets rocky and shallow\n"
	.string "nearby, which makes swimming hard.\l"
	.string "Sometimes ocean Pokémon come up and\l"
	.string "play on the beach!$"

PentepetalCity_EventScript_TuberM_Text_0:
# 597 "data/maps/PentepetalCity/scripts.pory"
	.string "Tuber$"

PentepetalCity_EventScript_TuberM_Text_1:
# 598 "data/maps/PentepetalCity/scripts.pory"
	.string "Look at this awesome Pokémon I just\n"
	.string "caught! It must be one of the\l"
	.string "strongest out there, just look at how\l"
	.string "it bounces!$"

PentepetalCity_EventScript_Magikarp_Text_0:
# 608 "data/maps/PentepetalCity/scripts.pory"
	.string "Magikarp$"

PentepetalCity_EventScript_Magikarp_Text_1:
# 610 "data/maps/PentepetalCity/scripts.pory"
	.string "Plep?$"

PentepetalCity_EventScript_OldWoman_Text_0:
# 621 "data/maps/PentepetalCity/scripts.pory"
	.string "Old Woman$"

PentepetalCity_EventScript_OldWoman_Text_1:
# 622 "data/maps/PentepetalCity/scripts.pory"
	.string "I hear they found wild Cranidos and\n"
	.string "Shieldon here. I found some a few\l"
	.string "months ago, but I haven't seen any\l"
	.string "recently... I hope they're okay.$"

PentepetalCity_EventScript_Artist_Text_0:
# 632 "data/maps/PentepetalCity/scripts.pory"
	.string "Artist$"

PentepetalCity_EventScript_Artist_Text_1:
# 638 "data/maps/PentepetalCity/scripts.pory"
	.string "Your Pokémon has inspired me with their\n"
	.string "talents! I can see why it wins Ribbons.$"

PentepetalCity_EventScript_Artist_Text_2:
# 648 "data/maps/PentepetalCity/scripts.pory"
	.string "I'm looking for the perfect Pokémon to\n"
	.string "paint... I want a winning art piece, so I\l"
	.string "need to see a Contest-winning Pokémon!\p"
	.string "Talk to me when you have a {COLOR GREEN}Pokémon with\n"
	.string "a Ribbon{COLOR DARK_GRAY} to inspire my art.$"

PentepetalCity_EventScript_Artist_Text_3:
# 656 "data/maps/PentepetalCity/scripts.pory"
	.string "Chaire! Have you won any Pokémon\n"
	.string "Contests yet? I'd like to see a {COLOR GREEN}Pokémon\l"
	.string "with a Ribbon{COLOR DARK_GRAY}.$"

PentepetalCity_EventScript_Artist_Text_4:
# 669 "data/maps/PentepetalCity/scripts.pory"
	.string "Your {STR_VAR_1} has a stunning\n"
	.string "Ribbon! It must be a Pokémon Contest\l"
	.string "winner, this will make for a perfect\l"
	.string "painting!\p"
	.string "You have my inspiration flowing. Please,\n"
	.string "take this!$"

PentepetalCity_EventScript_Artist_Text_5:
# 681 "data/maps/PentepetalCity/scripts.pory"
	.string "Hm, still working on the Pokémon\n"
	.string "Contests, huh? That's okay, I haven't\l"
	.string "won any either.\p"
	.string "Come to me when you have a {COLOR GREEN}Pokémon with\n"
	.string "a Contest Ribbon{COLOR DARK_GRAY}. I'll give you a reward\l"
	.string "for your effort!$"

PentepetalCity_EventScript_Girl_Text_0:
# 693 "data/maps/PentepetalCity/scripts.pory"
	.string "Girl$"

PentepetalCity_EventScript_Girl_Text_1:
# 694 "data/maps/PentepetalCity/scripts.pory"
	.string "My Gothitelle is almost ready to\n"
	.string "compete in a Contest! Nobody can beat\l"
	.string "her in a Beauty competition!$"

PentepetalCity_EventScript_Gothitelle_Text_0:
# 706 "data/maps/PentepetalCity/scripts.pory"
	.string "Gothitelle$"

PentepetalCity_EventScript_Gothitelle_Text_1:
# 708 "data/maps/PentepetalCity/scripts.pory"
	.string "Bree-ei!$"

PentepetalCity_EventScript_FatMan_Text_0:
# 721 "data/maps/PentepetalCity/scripts.pory"
	.string "Fat Man$"

PentepetalCity_EventScript_FatMan_Text_1:
# 722 "data/maps/PentepetalCity/scripts.pory"
	.string "Ehehe, look at my Shiny Appletun! I\n"
	.string "found a bright green Applin when I was\l"
	.string "young, and I'v been riding that\l"
	.string "excitement high ever since!$"

PentepetalCity_EventScript_Appletun_Text_0:
# 732 "data/maps/PentepetalCity/scripts.pory"
	.string "Appletun$"

PentepetalCity_EventScript_Appletun_Text_1:
# 734 "data/maps/PentepetalCity/scripts.pory"
	.string "Huu-ahh.$"

PentepetalCity_EventScript_Hiker_Text_0:
# 745 "data/maps/PentepetalCity/scripts.pory"
	.string "Hiker$"

PentepetalCity_EventScript_Hiker_Text_1:
# 746 "data/maps/PentepetalCity/scripts.pory"
	.string "I came by to see the wild Cranidos and\n"
	.string "Shieldon folks have been talking about.\l"
	.string "Now that I'm here, it seems like they're\l"
	.string "all gone...$"

PentepetalCity_EventScript_PickUpRandomFossil_Text_0:
# 757 "data/maps/PentepetalCity/scripts.pory"
	.string "Hm? There's a strange-looking rock in\n"
	.string "this bag abandoned by Team Chimera!$"

PentepetalCity_Text_GruntLose::
# 313 "data/maps/PentepetalCity/scripts.pory"
	.string "No! How can we keep losing to the likes\n"
	.string "of you?!$"

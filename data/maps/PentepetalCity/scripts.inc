PentepetalCity_MapScripts::
# 2 "data/maps/PentepetalCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PentepetalCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PentepetalCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_VISITED_PENTEPETAL_CITY
	return


PentepetalCity_Trigger_RaniaChimeraEvent::
# 9 "data/maps/PentepetalCity/scripts.pory"
	lockall
# 10 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 11 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 12 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 13 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 14 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_Trigger_RaniaChimeraEvent_Text_1
# 15 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 16 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 17 "data/maps/PentepetalCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 19 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_HIDE_NIKO_PENTEPETAL_CITY
# 20 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 21 "data/maps/PentepetalCity/scripts.pory"
	removeobject 20
# 22 "data/maps/PentepetalCity/scripts.pory"
	warpcontinuescript MAP_PENTEPETAL_CITY, 20, 26, PentepetalCity_EventScript_RaniaChimeraEvent
	end


PentepetalCity_EventScript_RaniaChimeraEvent::
# 28 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 29 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 30 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 31 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 32 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 33 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PentepetalCity_Movement_PlayerApproachesRania
# 34 "data/maps/PentepetalCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 35 "data/maps/PentepetalCity/scripts.pory"
	delay 30
# 37 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 38 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_0
# 39 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 40 "data/maps/PentepetalCity/scripts.pory"
	special HealPlayerParty
# 41 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 42 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, PentepetalCity_Movement_RaniaGoesToClearing
# 43 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PentepetalCity_Movement_PlayerFollowsToClearing
# 44 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 45 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 46 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 47 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_1
# 48 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 50 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PentepetalCity_Movement_PlayerApproachesChimeraGrunt
# 51 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, PentepetalCity_Movement_RaniaRunsToCranidos
# 52 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 53 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 54 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 55 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_2
# 56 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 58 "data/maps/PentepetalCity/scripts.pory"
	applymovement 19, PentepetalCity_Movement_GruntApproachesRania
# 59 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 60 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 61 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 62 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_3
# 63 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_4
# 64 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 65 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 66 "data/maps/PentepetalCity/scripts.pory"
	applymovement 19, Common_Movement_FaceRight
# 67 "data/maps/PentepetalCity/scripts.pory"
	applymovement 18, PentepetalCity_Movement_SpiritombApproachesPlayer
# 68 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 69 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_3
# 70 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_5
# 71 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 74 "data/maps/PentepetalCity/scripts.pory"
	trainerbattle_no_intro TRAINER_PENTEPETAL_CHIMERA_GRUNT, PentepetalCity_Text_GruntLose
# 76 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 77 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_3
# 78 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_6
# 79 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 80 "data/maps/PentepetalCity/scripts.pory"
	applymovement 19, PentepetalCity_Movement_GruntFlees
# 81 "data/maps/PentepetalCity/scripts.pory"
	applymovement 18, PentepetalCity_Movement_SpiritombFlees
# 82 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 83 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 85 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 86 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 87 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 88 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 89 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_7
# 90 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 92 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_NIKO_PENTEPETAL_CITY
# 93 "data/maps/PentepetalCity/scripts.pory"
	addobject 20
# 94 "data/maps/PentepetalCity/scripts.pory"
	applymovement 20, PentepetalCity_Movement_NikoApproaches
# 95 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 96 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 97 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 98 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_8
# 99 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_9
# 100 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 101 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 102 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_10
# 103 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 104 "data/maps/PentepetalCity/scripts.pory"
	applymovement 20, PentepetalCity_Movement_NikoChecksPokemon
# 105 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 107 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_8
# 108 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_11
# 109 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 110 "data/maps/PentepetalCity/scripts.pory"
	applymovement 20, Common_Movement_WalkRight
# 111 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 112 "data/maps/PentepetalCity/scripts.pory"
	applymovement 20, Common_Movement_FaceUp
# 113 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 114 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 115 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_RaniaChimeraEvent_Text_8
# 116 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_12
# 117 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 118 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 120 "data/maps/PentepetalCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 121 "data/maps/PentepetalCity/scripts.pory"
	delay 30
# 122 "data/maps/PentepetalCity/scripts.pory"
	removeobject 20
# 123 "data/maps/PentepetalCity/scripts.pory"
	removeobject 16
# 124 "data/maps/PentepetalCity/scripts.pory"
	removeobject 17
# 125 "data/maps/PentepetalCity/scripts.pory"
	removeobject 18
# 126 "data/maps/PentepetalCity/scripts.pory"
	removeobject 19
# 127 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_HIDE_NIKO_PENTEPETAL_CITY
# 128 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_HIDE_CHIMERA_PENTEPETAL_CITY
# 129 "data/maps/PentepetalCity/scripts.pory"
	delay 30
# 130 "data/maps/PentepetalCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 131 "data/maps/PentepetalCity/scripts.pory"
	delay 20
# 133 "data/maps/PentepetalCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 134 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 135 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 136 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 137 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_13
# 138 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 139 "data/maps/PentepetalCity/scripts.pory"
	delay 20
# 140 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 141 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 142 "data/maps/PentepetalCity/scripts.pory"
	delay 10
# 143 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 144 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_14
# 145 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 146 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 147 "data/maps/PentepetalCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 148 "data/maps/PentepetalCity/scripts.pory"
	message PentepetalCity_EventScript_RaniaChimeraEvent_Text_15
# 149 "data/maps/PentepetalCity/scripts.pory"
	waitmessage
# 150 "data/maps/PentepetalCity/scripts.pory"
	waitfanfare
# 151 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 152 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 153 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_Trigger_RaniaChimeraEvent_Text_0
# 154 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_EventScript_RaniaChimeraEvent_Text_16
# 155 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 157 "data/maps/PentepetalCity/scripts.pory"
	applymovement 9, PentepetalCity_Movement_RaniaLeaves
# 158 "data/maps/PentepetalCity/scripts.pory"
	waitmovement 0
# 159 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_HIDE_RANIA_PENTEPETAL_CITY
# 160 "data/maps/PentepetalCity/scripts.pory"
	removeobject 9
# 163 "data/maps/PentepetalCity/scripts.pory"
	setflag FLAG_UNLOCKED_WILD_NATURE_VIEW
# 165 "data/maps/PentepetalCity/scripts.pory"
	setvar VAR_NIKO_STATE, 10
# 166 "data/maps/PentepetalCity/scripts.pory"
	setvar VAR_RANIA_STATE, 9
# 167 "data/maps/PentepetalCity/scripts.pory"
	clearflag FLAG_HIDE_RANIA_ACRISIA_UNIVERSITY
# 169 "data/maps/PentepetalCity/scripts.pory"
	delay 20
# 170 "data/maps/PentepetalCity/scripts.pory"
	completequest QUEST_VISIT_RANIA_PENTEPETAL
# 172 "data/maps/PentepetalCity/scripts.pory"
	releaseall
	end


# 176 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_PlayerApproachesRania:
# 178 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 178 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 178 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 179 "data/maps/PentepetalCity/scripts.pory"
	face_left
# 180 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 182 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_RaniaGoesToClearing:
# 184 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 184 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 185 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 185 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 185 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 185 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 185 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 186 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 186 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 186 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 186 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 186 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 186 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 186 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 187 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 188 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 189 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 189 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 189 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 190 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 190 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 191 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 191 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 191 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 192 "data/maps/PentepetalCity/scripts.pory"
	emote_exclamation_mark
# 193 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 194 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 196 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_PlayerFollowsToClearing:
# 198 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 198 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 198 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 199 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 199 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 199 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 199 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 199 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 200 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 200 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 200 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 200 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 200 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 200 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 200 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 201 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 202 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 203 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 203 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 203 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 204 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 204 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 205 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 205 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 206 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 207 "data/maps/PentepetalCity/scripts.pory"
	delay_16
# 208 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 210 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_RaniaRunsToCranidos:
# 212 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 212 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 213 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_left
# 213 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_left
# 214 "data/maps/PentepetalCity/scripts.pory"
	jump_in_place_up
# 214 "data/maps/PentepetalCity/scripts.pory"
	jump_in_place_up
# 215 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 216 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 218 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_PlayerApproachesChimeraGrunt:
# 220 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 220 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 220 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 221 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 222 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 224 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_GruntApproachesRania:
# 226 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 227 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 228 "data/maps/PentepetalCity/scripts.pory"
	face_left
# 229 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 231 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_SpiritombApproachesPlayer:
# 233 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 234 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 234 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 235 "data/maps/PentepetalCity/scripts.pory"
	face_down
# 236 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 238 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_GruntFlees:
# 240 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 240 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 240 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 241 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_right
# 242 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 242 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 242 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 243 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_right
# 244 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 244 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 244 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_down
# 245 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 247 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_SpiritombFlees:
# 249 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 250 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 250 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 250 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 250 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 251 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 252 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 252 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 252 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 253 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 254 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 254 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 255 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 257 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_NikoApproaches:
# 259 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 260 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_left
# 260 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_left
# 261 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 261 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 261 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 261 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_up
# 262 "data/maps/PentepetalCity/scripts.pory"
	walk_fast_left
# 263 "data/maps/PentepetalCity/scripts.pory"
	jump_in_place_up
# 263 "data/maps/PentepetalCity/scripts.pory"
	jump_in_place_up
# 264 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 265 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 267 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_NikoChecksPokemon:
# 269 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 270 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 271 "data/maps/PentepetalCity/scripts.pory"
	delay_16
# 271 "data/maps/PentepetalCity/scripts.pory"
	delay_16
# 272 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 273 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 273 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 273 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 274 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 274 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 274 "data/maps/PentepetalCity/scripts.pory"
	walk_up
# 275 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 276 "data/maps/PentepetalCity/scripts.pory"
	face_left
# 277 "data/maps/PentepetalCity/scripts.pory"
	delay_16
# 277 "data/maps/PentepetalCity/scripts.pory"
	delay_16
# 278 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 279 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 279 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 279 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 280 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 280 "data/maps/PentepetalCity/scripts.pory"
	walk_left
# 281 "data/maps/PentepetalCity/scripts.pory"
	face_up
# 282 "data/maps/PentepetalCity/scripts.pory"
	step_end

# 284 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_Movement_RaniaLeaves:
# 286 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 287 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 288 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 288 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 288 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 288 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 289 "data/maps/PentepetalCity/scripts.pory"
	walk_right
# 290 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 290 "data/maps/PentepetalCity/scripts.pory"
	walk_down
# 291 "data/maps/PentepetalCity/scripts.pory"
	step_end

PentepetalCity_DollDecorScript::
# 303 "data/maps/PentepetalCity/scripts.pory"
	lock
# 304 "data/maps/PentepetalCity/scripts.pory"
	msgbox PentepetalCity_DollDecorScript_Text_0
# 305 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 306 "data/maps/PentepetalCity/scripts.pory"
	release
	end


PentepetalCity_EventScript_DollStreetVendor::
# 312 "data/maps/PentepetalCity/scripts.pory"
	lock
# 313 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 314 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 315 "data/maps/PentepetalCity/scripts.pory"
	message PentepetalCity_EventScript_DollStreetVendor_Text_1
# 316 "data/maps/PentepetalCity/scripts.pory"
	waitmessage
# 317 "data/maps/PentepetalCity/scripts.pory"
	pokemartdecoration PentepetalCity_DollDecorShop
# 318 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 319 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 320 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 321 "data/maps/PentepetalCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 322 "data/maps/PentepetalCity/scripts.pory"
	release
	end


# 326 "data/maps/PentepetalCity/scripts.pory"

# 327 "data/maps/PentepetalCity/scripts.pory"
    .align 2
# 328 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_DollDecorShop:
# 329 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_MIMIKYU_DOLL
# 330 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_JIGGLYPUFF_DOLL
# 331 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_IMPIDIMP_DOLL
# 332 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_DUSKULL_DOLL
# 333 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ARCHEN_DOLL
# 334 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_TIRTOUGA_DOLL
# 335 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SKIDDO_DOLL
# 336 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_BALTOY_DOLL
# 337 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_KECLEON_DOLL
# 338 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_APPLIN_DOLL
# 339 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SWABLU_DOLL
# 340 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ROCKRUFF_DOLL
# 341 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_TOUCANNON_DOLL
# 342 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ARCANINE_DOLL
# 343 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_KOMMO_O_DOLL
# 344 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_NONE
# 345 "data/maps/PentepetalCity/scripts.pory"
	release
# 346 "data/maps/PentepetalCity/scripts.pory"
	end

PentepetalCity_EventScript_OrnamentalDecorStreetVendor::
# 351 "data/maps/PentepetalCity/scripts.pory"
	lock
# 352 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 353 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 354 "data/maps/PentepetalCity/scripts.pory"
	message PentepetalCity_EventScript_OrnamentalDecorStreetVendor_Text_0
# 355 "data/maps/PentepetalCity/scripts.pory"
	waitmessage
# 356 "data/maps/PentepetalCity/scripts.pory"
	pokemartdecoration PentepetalCity_OrnamentDecorShop
# 357 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 358 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 359 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 360 "data/maps/PentepetalCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 361 "data/maps/PentepetalCity/scripts.pory"
	release
	end


# 365 "data/maps/PentepetalCity/scripts.pory"

# 366 "data/maps/PentepetalCity/scripts.pory"
    .align 2
# 367 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_OrnamentDecorShop:
# 368 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_HEAVY_DESK
# 369 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_RAGGED_DESK
# 370 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_COMFORT_DESK
# 371 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_BOOK_AND_QUILL
# 372 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_HEAVY_CHAIR
# 373 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_RAGGED_CHAIR
# 374 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_COMFORT_CHAIR
# 375 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_RED_PLANT
# 376 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_TROPICAL_PLANT
# 377 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_COLORFUL_PLANT
# 378 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SHRINE
# 379 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SLIDE
# 380 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_STAND
# 381 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_BREAKABLE_DOOR
# 382 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_TV
# 383 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_PATTERNED_BED
# 384 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_NONE
# 385 "data/maps/PentepetalCity/scripts.pory"
	release
# 386 "data/maps/PentepetalCity/scripts.pory"
	end

PentepetalCity_EventScript_FloorDecorStreetVendor::
# 391 "data/maps/PentepetalCity/scripts.pory"
	lock
# 392 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 393 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 394 "data/maps/PentepetalCity/scripts.pory"
	message PentepetalCity_EventScript_FloorDecorStreetVendor_Text_0
# 395 "data/maps/PentepetalCity/scripts.pory"
	waitmessage
# 396 "data/maps/PentepetalCity/scripts.pory"
	pokemartdecoration PentepetalCity_FloorDecorShop
# 397 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 398 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 399 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 400 "data/maps/PentepetalCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 401 "data/maps/PentepetalCity/scripts.pory"
	release
	end


# 405 "data/maps/PentepetalCity/scripts.pory"

# 406 "data/maps/PentepetalCity/scripts.pory"
    .align 2
# 407 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_FloorDecorShop:
# 408 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_DOLL_SQUARE
# 409 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_WOOD_MAT
# 410 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_GLITTER_MAT
# 411 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_JUMP_MAT
# 412 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SPIN_MAT
# 413 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_FIRE_BLAST_MAT
# 414 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_POWDER_SNOW_MAT
# 415 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ATTRACT_MAT
# 416 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_FISSURE_MAT
# 417 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SPIKES_MAT
# 418 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_PUPPY_POSTER
# 419 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SEA_POSTER
# 420 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SKY_POSTER
# 421 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_PIKA_CUSHION
# 422 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ROUND_CUSHION
# 423 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_KISS_CUSHION
# 424 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_ZIGZAG_CUSHION
# 425 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_SPIN_CUSHION
# 426 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_DIAMOND_CUSHION
# 427 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_BALL_CUSHION
# 428 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_NONE
# 429 "data/maps/PentepetalCity/scripts.pory"
	release
# 430 "data/maps/PentepetalCity/scripts.pory"
	end

PentepetalCity_EventScript_MusicDecorStreetVendor::
# 435 "data/maps/PentepetalCity/scripts.pory"
	lock
# 436 "data/maps/PentepetalCity/scripts.pory"
	faceplayer
# 437 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 438 "data/maps/PentepetalCity/scripts.pory"
	message PentepetalCity_EventScript_MusicDecorStreetVendor_Text_0
# 439 "data/maps/PentepetalCity/scripts.pory"
	waitmessage
# 440 "data/maps/PentepetalCity/scripts.pory"
	pokemartdecoration PentepetalCity_MusicDecorShop
# 441 "data/maps/PentepetalCity/scripts.pory"
	closemessage
# 442 "data/maps/PentepetalCity/scripts.pory"
	delay 5
# 443 "data/maps/PentepetalCity/scripts.pory"
	speakername PentepetalCity_EventScript_DollStreetVendor_Text_0
# 444 "data/maps/PentepetalCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 445 "data/maps/PentepetalCity/scripts.pory"
	release
	end


# 449 "data/maps/PentepetalCity/scripts.pory"

# 450 "data/maps/PentepetalCity/scripts.pory"
    .align 2
# 451 "data/maps/PentepetalCity/scripts.pory"
PentepetalCity_MusicDecorShop:
# 452 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 453 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 454 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 455 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 456 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 457 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 458 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 459 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 460 "data/maps/PentepetalCity/scripts.pory"
	.2byte DECOR_NONE
# 461 "data/maps/PentepetalCity/scripts.pory"
	release
# 462 "data/maps/PentepetalCity/scripts.pory"
	end

PentepetalCity_Trigger_RaniaChimeraEvent_Text_0:
# 13 "data/maps/PentepetalCity/scripts.pory"
	.string "Rania$"

PentepetalCity_Trigger_RaniaChimeraEvent_Text_1:
# 14 "data/maps/PentepetalCity/scripts.pory"
	.string "{PLAYER}! Over here, come quick!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_0:
# 38 "data/maps/PentepetalCity/scripts.pory"
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
# 47 "data/maps/PentepetalCity/scripts.pory"
	.string "Oh no, the rumors were true!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_2:
# 55 "data/maps/PentepetalCity/scripts.pory"
	.string "It's just like they were saying in town!\n"
	.string "Cranidos and Shieldon live here, but\l"
	.string "they're being rounded up by Team\l"
	.string "Chimera!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_3:
# 62 "data/maps/PentepetalCity/scripts.pory"
	.string "Chimera Grunt$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_4:
# 63 "data/maps/PentepetalCity/scripts.pory"
	.string "Fwahaha, you're too late! These are the\n"
	.string "last living Cranidos and Shieldon\l"
	.string "anywhere on the island. We've rounded\l"
	.string "up all the rest to be sold to the\l"
	.string "highest bidder!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_5:
# 70 "data/maps/PentepetalCity/scripts.pory"
	.string "What, are you gonna try to stop me? A\n"
	.string "couple of lame, weak activists? Heh, do\l"
	.string "your worst!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_6:
# 78 "data/maps/PentepetalCity/scripts.pory"
	.string "Well... I suppose Team Chimera will be\n"
	.string "fine without one or two extra Pokémon.\l"
	.string "But don't be surprised when we show up\l"
	.string "with teams of Rampardos and Bastiodon!\l"
	.string "Fwahaha!\p"
	.string "Time to make our escape! Spiritomb,\n"
	.string "let's get outta here!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_7:
# 89 "data/maps/PentepetalCity/scripts.pory"
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
# 98 "data/maps/PentepetalCity/scripts.pory"
	.string "Niko$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_9:
# 99 "data/maps/PentepetalCity/scripts.pory"
	.string "RANIA! RANIA! Huff, huff... I flew here\n"
	.string "on my Braviary as fast as I could! Is\l"
	.string "everyone okay?!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_10:
# 102 "data/maps/PentepetalCity/scripts.pory"
	.string "We're okay, Niko, but these Pokémon look\n"
	.string "hurt. Please, make sure they're\l"
	.string "alright... they might be the last of\l"
	.string "their kind in the wild!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_11:
# 108 "data/maps/PentepetalCity/scripts.pory"
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
# 116 "data/maps/PentepetalCity/scripts.pory"
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
# 137 "data/maps/PentepetalCity/scripts.pory"
	.string "Jeez, I hope those poor Pokémon will be\n"
	.string "okay... I can't imagine how it must feel\l"
	.string "to be one of the last living members of\l"
	.string "a species.$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_14:
# 144 "data/maps/PentepetalCity/scripts.pory"
	.string "Oh, while I've got you here, I actually\n"
	.string "have something for you! I made a\l"
	.string "Training Guide to teach you how to\l"
	.string "{COLOR GREEN}identify Wild Pokémon Natures{COLOR DARK_GRAY} when you\l"
	.string "encounter them. Check this out!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_15:
# 148 "data/maps/PentepetalCity/scripts.pory"
	.string "You learned how to identify Wild\n"
	.string "Pokémon Natures!$"

PentepetalCity_EventScript_RaniaChimeraEvent_Text_16:
# 154 "data/maps/PentepetalCity/scripts.pory"
	.string "I hope that serves as a thank-you for\n"
	.string "helping me save those Pokémon.\p"
	.string "If I thought I was exhausted on Myrrini\n"
	.string "Island, now I'm REALLY wiped out! I'm\l"
	.string "gonna head back to the University with\l"
	.string "Niko. Stay safe, {PLAYER}!$"

PentepetalCity_DollDecorScript_Text_0:
# 304 "data/maps/PentepetalCity/scripts.pory"
	.string "It's a cute Pokémon Doll! This would be\n"
	.string "perfect for the Cabin on The Delphis!$"

PentepetalCity_EventScript_DollStreetVendor_Text_0:
# 314 "data/maps/PentepetalCity/scripts.pory"
	.string "Street Vendor$"

PentepetalCity_EventScript_DollStreetVendor_Text_1:
# 315 "data/maps/PentepetalCity/scripts.pory"
	.string "Welcome! I sell Pokémon Doll\n"
	.string "Decorations. How can I help you?$"

PentepetalCity_EventScript_OrnamentalDecorStreetVendor_Text_0:
# 354 "data/maps/PentepetalCity/scripts.pory"
	.string "Welcome! I sell Desks and Ornamental\n"
	.string "Room Decorations. How can I help you?$"

PentepetalCity_EventScript_FloorDecorStreetVendor_Text_0:
# 394 "data/maps/PentepetalCity/scripts.pory"
	.string "Welcome! I sell Floor and Wall\n"
	.string "Decorations. How can I help you?$"

PentepetalCity_EventScript_MusicDecorStreetVendor_Text_0:
# 438 "data/maps/PentepetalCity/scripts.pory"
	.string "Hey! I'm selling Note Mats for private\n"
	.string "Rooms. How can I help you?$"

PentepetalCity_Text_GruntLose::
# 293 "data/maps/PentepetalCity/scripts.pory"
	.string "No! How can we keep losing to the likes\n"
	.string "of you?!$"

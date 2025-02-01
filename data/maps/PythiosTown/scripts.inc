PythiosTown_MapScripts::
# 2 "data/maps/PythiosTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_VISITED_PYTHIOS_TOWN
# 4 "data/maps/PythiosTown/scripts.pory"
	random 3
# 5 "data/maps/PythiosTown/scripts.pory"
	switch VAR_RESULT
# 6 "data/maps/PythiosTown/scripts.pory"
	case 0, PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 7 "data/maps/PythiosTown/scripts.pory"
	case 1, PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 8 "data/maps/PythiosTown/scripts.pory"
	case 2, PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 12 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 13 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 14 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 15 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 16 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 17 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 18 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 19 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 20 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 21 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 22 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 23 "data/maps/PythiosTown/scripts.pory"
	setobjectaswildencounter 21, ENCOUNTER_LAND
	return

PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 6 "data/maps/PythiosTown/scripts.pory"
	setweather WEATHER_NONE
	goto PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 7 "data/maps/PythiosTown/scripts.pory"
	setweather WEATHER_NONE
	goto PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 8 "data/maps/PythiosTown/scripts.pory"
	setweather WEATHER_RAIN
	goto PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


PythiosTown_EventScripts_NPC_Gentleman::
# 29 "data/maps/PythiosTown/scripts.pory"
	lock
# 30 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 31 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Gentleman_Text_0
# 32 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Gentleman_Text_1
# 33 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 34 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_GOT_WILL_O_WISP, PythiosTown_EventScripts_NPC_Gentleman_2
PythiosTown_EventScripts_NPC_Gentleman_1:
# 42 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Gentleman_2:
# 36 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Gentleman_Text_0
# 37 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Gentleman_Text_2
# 38 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 39 "data/maps/PythiosTown/scripts.pory"
	giveitem ITEM_TM51
# 40 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_GOT_WILL_O_WISP
	goto PythiosTown_EventScripts_NPC_Gentleman_1


PythiosTown_EventScripts_NPC_Woman::
# 48 "data/maps/PythiosTown/scripts.pory"
	lock
# 49 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 50 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Woman_Text_0
# 51 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Woman_Text_1
# 52 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 53 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_OldWoman::
# 59 "data/maps/PythiosTown/scripts.pory"
	lock
# 60 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 61 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_OldWoman_Text_0
# 62 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_OldWoman_Text_1
# 63 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 64 "data/maps/PythiosTown/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 65 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 66 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_OldMan::
# 72 "data/maps/PythiosTown/scripts.pory"
	lock
# 73 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 74 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_OldMan_Text_0
# 75 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_OldMan_Text_1
# 76 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 77 "data/maps/PythiosTown/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 78 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 79 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_Artist::
# 85 "data/maps/PythiosTown/scripts.pory"
	lock
# 86 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_MOVE_RELEARNER, PythiosTown_EventScripts_NPC_Artist_2
# 101 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_UNLOCKED_MOVE_RELEARNER, PythiosTown_EventScripts_NPC_Artist_3
# 147 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FacePlayer
# 148 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 149 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 150 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_8, MSGBOX_YESNO
# 151 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_10
# 159 "data/maps/PythiosTown/scripts.pory"
	special ChooseMonForMoveRelearner
# 160 "data/maps/PythiosTown/scripts.pory"
	waitstate
# 161 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_14
# 171 "data/maps/PythiosTown/scripts.pory"
	special IsSelectedMonEgg
# 172 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_17
# 182 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_20
# 192 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 193 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_13
# 194 "data/maps/PythiosTown/scripts.pory"
	special TeachMoveRelearnerMove
# 195 "data/maps/PythiosTown/scripts.pory"
	waitstate
# 196 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_22
# 208 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 209 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_14
# 210 "data/maps/PythiosTown/scripts.pory"
	closemessage
PythiosTown_EventScripts_NPC_Artist_1:
# 215 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 216 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 217 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_2:
# 88 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 89 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_1
# 90 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 91 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 92 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 93 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 94 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FacePlayer
# 95 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 96 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 97 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_2
# 98 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 99 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_SPOKE_TO_MOVE_RELEARNER
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_3:
# 103 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FacePlayer
# 104 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 105 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 106 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_3
# 107 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 109 "data/maps/PythiosTown/scripts.pory"
	setvar VAR_0x8004, 0
# 110 "data/maps/PythiosTown/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 111 "data/maps/PythiosTown/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 112 "data/maps/PythiosTown/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 113 "data/maps/PythiosTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 114 "data/maps/PythiosTown/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 115 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 116 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 117 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_4
# 118 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 119 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 121 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8009, 20
	goto_if_ge PythiosTown_EventScripts_NPC_Artist_7
# 140 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 141 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_7
# 142 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_7:
# 123 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 124 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 125 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_JumpInPlaceRight
# 126 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 127 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 128 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_5
# 129 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 130 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 131 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FacePlayer
# 132 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 133 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 134 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_6
# 135 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 136 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_UNLOCKED_MOVE_RELEARNER
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_10:
# 153 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 154 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_9
# 155 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_14:
# 163 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 164 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_10
# 165 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 166 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 167 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 168 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_17:
# 174 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 175 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_11
# 176 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 177 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 178 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 179 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_20:
# 184 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 185 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_12
# 186 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 187 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 188 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 189 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_22:
# 198 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 199 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_10
# 200 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 201 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 202 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 203 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_Woman2::
# 223 "data/maps/PythiosTown/scripts.pory"
	lock
# 224 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 225 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Woman_Text_0
# 226 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Woman2_Text_0
# 227 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 228 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Hoothoot::
# 234 "data/maps/PythiosTown/scripts.pory"
	lock
# 235 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 236 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Hoothoot_Text_0
# 237 "data/maps/PythiosTown/scripts.pory"
	playmoncry SPECIES_HOOTHOOT, CRY_MODE_NORMAL
# 238 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Hoothoot_Text_1
# 239 "data/maps/PythiosTown/scripts.pory"
	waitmoncry
# 240 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 241 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Drowzee::
# 247 "data/maps/PythiosTown/scripts.pory"
	lock
# 248 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 249 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Drowzee_Text_0
# 250 "data/maps/PythiosTown/scripts.pory"
	playmoncry SPECIES_DROWZEE, CRY_MODE_NORMAL
# 251 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Drowzee_Text_1
# 252 "data/maps/PythiosTown/scripts.pory"
	waitmoncry
# 253 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 254 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Dwebble::
# 260 "data/maps/PythiosTown/scripts.pory"
	lock
# 261 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 262 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Dwebble_Text_0
# 263 "data/maps/PythiosTown/scripts.pory"
	playmoncry SPECIES_DWEBBLE, CRY_MODE_NORMAL
# 264 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Dwebble_Text_1
# 265 "data/maps/PythiosTown/scripts.pory"
	waitmoncry
# 266 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 267 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Trigger_SabellaIntroductionEvent::
# 273 "data/maps/PythiosTown/scripts.pory"
	lockall
# 274 "data/maps/PythiosTown/scripts.pory"
	applymovement 15, Common_Movement_ExclamationMark
# 275 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 276 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 277 "data/maps/PythiosTown/scripts.pory"
	applymovement 15, PythiosTown_Movement_FirstSabellaFanWalksToPlayer
# 278 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 279 "data/maps/PythiosTown/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 280 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 281 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_0
# 282 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_1
# 283 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 284 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 285 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 286 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 287 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 288 "data/maps/PythiosTown/scripts.pory"
	applymovement 15, PythiosTown_Movement_FirstSabellaFanWalksAway
# 289 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 290 "data/maps/PythiosTown/scripts.pory"
	delay 60
# 292 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PythiosTown_Movement_PlayerApproachesLine
# 293 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 294 "data/maps/PythiosTown/scripts.pory"
	delay 60
# 295 "data/maps/PythiosTown/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 296 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 297 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 298 "data/maps/PythiosTown/scripts.pory"
	applymovement 16, Common_Movement_FaceDown
# 299 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 300 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_2
# 301 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_3
# 302 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 303 "data/maps/PythiosTown/scripts.pory"
	applymovement 16, PythiosTown_Movement_SecondSabellaFanWalksAway
# 304 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 305 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 306 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 307 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 310 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_4
# 311 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_5
# 312 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 314 "data/maps/PythiosTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 315 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 316 "data/maps/PythiosTown/scripts.pory"
	removeobject 15
# 317 "data/maps/PythiosTown/scripts.pory"
	removeobject 16
# 318 "data/maps/PythiosTown/scripts.pory"
	removeobject 3
# 319 "data/maps/PythiosTown/scripts.pory"
	removeobject 17
# 320 "data/maps/PythiosTown/scripts.pory"
	removeobject 19
# 321 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_MET_SABELLA_PYTHIOS_TOWN
# 322 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 323 "data/maps/PythiosTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 324 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 326 "data/maps/PythiosTown/scripts.pory"
	releaseall
	end


# 330 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_FirstSabellaFanWalksToPlayer:
# 332 "data/maps/PythiosTown/scripts.pory"
	walk_fast_left
# 333 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 333 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 334 "data/maps/PythiosTown/scripts.pory"
	step_end

# 337 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_FirstSabellaFanWalksAway:
# 339 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 339 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 339 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 339 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 339 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 339 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 340 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 340 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 340 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 340 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 340 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 340 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 340 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 340 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 341 "data/maps/PythiosTown/scripts.pory"
	step_end

# 344 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_PlayerApproachesLine:
# 346 "data/maps/PythiosTown/scripts.pory"
	walk_right
# 347 "data/maps/PythiosTown/scripts.pory"
	walk_up
# 347 "data/maps/PythiosTown/scripts.pory"
	walk_up
# 348 "data/maps/PythiosTown/scripts.pory"
	walk_right
# 349 "data/maps/PythiosTown/scripts.pory"
	face_up
# 350 "data/maps/PythiosTown/scripts.pory"
	step_end

# 353 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_SecondSabellaFanWalksAway:
# 355 "data/maps/PythiosTown/scripts.pory"
	walk_fast_left
# 356 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 356 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 356 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 356 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 356 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 356 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 356 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 356 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 356 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 357 "data/maps/PythiosTown/scripts.pory"
	step_end

PythiosTown_EventScripts_NPC_OldMan2::
# 362 "data/maps/PythiosTown/scripts.pory"
	lock
# 363 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 364 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_OldMan_Text_0
# 365 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_OldMan2_Text_0
# 366 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 367 "data/maps/PythiosTown/scripts.pory"
	applymovement 13, Common_Movement_FaceLeft
# 368 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 369 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_PsychicM::
# 375 "data/maps/PythiosTown/scripts.pory"
	lock
# 376 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 377 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_PsychicM_Text_0
# 378 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_PsychicM_Text_1
# 379 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 380 "data/maps/PythiosTown/scripts.pory"
	applymovement 14, Common_Movement_FaceRight
# 381 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 382 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_ManBlockingGym::
# 388 "data/maps/PythiosTown/scripts.pory"
	lock
# 389 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 390 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_ManBlockingGym_Text_0
# 391 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_ManBlockingGym_Text_1
# 392 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 393 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_PIRAEUS::
# 399 "data/maps/PythiosTown/scripts.pory"
	lock
# 400 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 401 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_MET_PIRAEUS_PYTHIOS_TOWN, PythiosTown_EventScripts_PIRAEUS_2
# 410 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_MET_PIRAEUS_PYTHIOS_TOWN, PythiosTown_EventScripts_PIRAEUS_10
PythiosTown_EventScripts_PIRAEUS_8:
# 441 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_GOT_BADGE_FOR_PIRAEUS, PythiosTown_EventScripts_PIRAEUS_7
PythiosTown_EventScripts_PIRAEUS_6:
# 449 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_HELPED_PIRAEUS_PYTHIOS_TOWN, PythiosTown_EventScripts_PIRAEUS_5
PythiosTown_EventScripts_PIRAEUS_1:
# 552 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_PIRAEUS_2:
# 403 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_0
# 404 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_1
# 405 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 406 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_MET_PIRAEUS_PYTHIOS_TOWN
# 407 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_PIRAEUS_3:
# 412 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_0
# 413 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_2
# 414 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 415 "data/maps/PythiosTown/scripts.pory"
	delay 60
# 416 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, PythiosTown_EventScripts_PIRAEUS_14
# 426 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_0
# 427 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_4
# 428 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 429 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_GOT_BADGE_FOR_PIRAEUS
# 430 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 431 "data/maps/PythiosTown/scripts.pory"
	applymovement 20, Common_Movement_ExclamationMark
# 432 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 433 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 434 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_5
# 435 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_6
# 436 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 437 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_PIRAEUS_4:
# 443 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_5
# 444 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_7
# 445 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 446 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_PIRAEUS_5:
# 451 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_5
# 452 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_8
# 455 "data/maps/PythiosTown/scripts.pory"
	dynmultipush PythiosTown_EventScripts_PIRAEUS_Text_9, 0
# 456 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_VISITED_PYTHIOS_TOWN, PythiosTown_EventScripts_PIRAEUS_18
PythiosTown_EventScripts_PIRAEUS_17:
# 459 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_VISITED_SOFOS_CITY, PythiosTown_EventScripts_PIRAEUS_21
PythiosTown_EventScripts_PIRAEUS_20:
# 462 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_VISITED_MARMARO_ISLAND, PythiosTown_EventScripts_PIRAEUS_24
PythiosTown_EventScripts_PIRAEUS_23:
# 465 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_VISITED_MYRRINI_ISLAND, PythiosTown_EventScripts_PIRAEUS_27
PythiosTown_EventScripts_PIRAEUS_26:
# 468 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_VISITED_FRESCO_ISLAND, PythiosTown_EventScripts_PIRAEUS_30
PythiosTown_EventScripts_PIRAEUS_29:
# 471 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_VISITED_PALATI_CITY, PythiosTown_EventScripts_PIRAEUS_33
PythiosTown_EventScripts_PIRAEUS_32:
# 474 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_VISITED_PORT_PELLO, PythiosTown_EventScripts_PIRAEUS_36
PythiosTown_EventScripts_PIRAEUS_35:
# 477 "data/maps/PythiosTown/scripts.pory"
	dynmultistack 100, 0, TRUE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 480 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PythiosTown_EventScripts_PIRAEUS_38
# 499 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PythiosTown_EventScripts_PIRAEUS_46
# 506 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PythiosTown_EventScripts_PIRAEUS_47
# 513 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PythiosTown_EventScripts_PIRAEUS_48
# 520 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PythiosTown_EventScripts_PIRAEUS_49
# 527 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq PythiosTown_EventScripts_PIRAEUS_50
# 534 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PythiosTown_EventScripts_PIRAEUS_51
# 541 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq PythiosTown_EventScripts_PIRAEUS_52
PythiosTown_EventScripts_PIRAEUS_45:
# 548 "data/maps/PythiosTown/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 3
# 549 "data/maps/PythiosTown/scripts.pory"
	waitstate
	goto PythiosTown_EventScripts_PIRAEUS_1

PythiosTown_EventScripts_PIRAEUS_7:
# 441 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_HELPED_PIRAEUS_PYTHIOS_TOWN, PythiosTown_EventScripts_PIRAEUS_4
	goto PythiosTown_EventScripts_PIRAEUS_6

PythiosTown_EventScripts_PIRAEUS_10:
# 410 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_GOT_BADGE_FOR_PIRAEUS, PythiosTown_EventScripts_PIRAEUS_3
	goto PythiosTown_EventScripts_PIRAEUS_8

PythiosTown_EventScripts_PIRAEUS_14:
# 418 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_0
# 419 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_3
# 420 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 421 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_PIRAEUS_18:
# 457 "data/maps/PythiosTown/scripts.pory"
	dynmultipush PythiosTown_EventScripts_PIRAEUS_Text_10, 1
	goto PythiosTown_EventScripts_PIRAEUS_17

PythiosTown_EventScripts_PIRAEUS_21:
# 460 "data/maps/PythiosTown/scripts.pory"
	dynmultipush PythiosTown_EventScripts_PIRAEUS_Text_11, 2
	goto PythiosTown_EventScripts_PIRAEUS_20

PythiosTown_EventScripts_PIRAEUS_24:
# 463 "data/maps/PythiosTown/scripts.pory"
	dynmultipush PythiosTown_EventScripts_PIRAEUS_Text_12, 3
	goto PythiosTown_EventScripts_PIRAEUS_23

PythiosTown_EventScripts_PIRAEUS_27:
# 466 "data/maps/PythiosTown/scripts.pory"
	dynmultipush PythiosTown_EventScripts_PIRAEUS_Text_13, 4
	goto PythiosTown_EventScripts_PIRAEUS_26

PythiosTown_EventScripts_PIRAEUS_30:
# 469 "data/maps/PythiosTown/scripts.pory"
	dynmultipush PythiosTown_EventScripts_PIRAEUS_Text_14, 5
	goto PythiosTown_EventScripts_PIRAEUS_29

PythiosTown_EventScripts_PIRAEUS_33:
# 472 "data/maps/PythiosTown/scripts.pory"
	dynmultipush PythiosTown_EventScripts_PIRAEUS_Text_15, 6
	goto PythiosTown_EventScripts_PIRAEUS_32

PythiosTown_EventScripts_PIRAEUS_36:
# 475 "data/maps/PythiosTown/scripts.pory"
	dynmultipush PythiosTown_EventScripts_PIRAEUS_Text_16, 7
	goto PythiosTown_EventScripts_PIRAEUS_35

PythiosTown_EventScripts_PIRAEUS_38:
# 482 "data/maps/PythiosTown/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 0
# 483 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_5
# 484 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PythiosTown_EventScripts_PIRAEUS_42
# 491 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_18
# 492 "data/maps/PythiosTown/scripts.pory"
	closemessage
PythiosTown_EventScripts_PIRAEUS_41:
# 494 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_PIRAEUS_42:
# 486 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_17
# 487 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_PIRAEUS_41

PythiosTown_EventScripts_PIRAEUS_46:
# 501 "data/maps/PythiosTown/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 1
# 502 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_5
# 503 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_19
# 504 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_PIRAEUS_45

PythiosTown_EventScripts_PIRAEUS_47:
# 508 "data/maps/PythiosTown/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 2
# 509 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_5
# 510 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_20
# 511 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_PIRAEUS_45

PythiosTown_EventScripts_PIRAEUS_48:
# 515 "data/maps/PythiosTown/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 3
# 516 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_5
# 517 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_21
# 518 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_PIRAEUS_45

PythiosTown_EventScripts_PIRAEUS_49:
# 522 "data/maps/PythiosTown/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 4
# 523 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_5
# 524 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_22
# 525 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_PIRAEUS_45

PythiosTown_EventScripts_PIRAEUS_50:
# 529 "data/maps/PythiosTown/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 5
# 530 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_5
# 531 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_23
# 532 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_PIRAEUS_45

PythiosTown_EventScripts_PIRAEUS_51:
# 536 "data/maps/PythiosTown/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 6
# 537 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_5
# 538 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_24
# 539 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_PIRAEUS_45

PythiosTown_EventScripts_PIRAEUS_52:
# 543 "data/maps/PythiosTown/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 7
# 544 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_5
# 545 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_25
# 546 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_PIRAEUS_45


PythiosTown_EventScripts_NPC_Gentleman_Text_0:
# 31 "data/maps/PythiosTown/scripts.pory"
	.string "Gentleman$"

PythiosTown_EventScripts_NPC_Gentleman_Text_1:
# 32 "data/maps/PythiosTown/scripts.pory"
	.string "Pythios Town is famous for the\n"
	.string "concentration of spiritual energy here.\l"
	.string "It attracts Ghost-type and\l"
	.string "Psychic-type Pokémon.\p"
	.string "Folktales say that the spirits have\n"
	.string "turned the plants orange, putting the\l"
	.string "area into a permanent Autumn.\p"
	.string "People flock from all over to hear\n"
	.string "Sabella, the Gym Leader, predict the\l"
	.string "future. Some say she has a magic gift...$"

PythiosTown_EventScripts_NPC_Gentleman_Text_2:
# 37 "data/maps/PythiosTown/scripts.pory"
	.string "Thanks for listening to me ramble. Here,\n"
	.string "take this {COLOR GREEN}TM Will-O-Wisp{COLOR DARK_GRAY}. It feels like\l"
	.string "it's connected to this strange town.$"

PythiosTown_EventScripts_NPC_Woman_Text_0:
# 50 "data/maps/PythiosTown/scripts.pory"
	.string "Woman$"

PythiosTown_EventScripts_NPC_Woman_Text_1:
# 51 "data/maps/PythiosTown/scripts.pory"
	.string "Ruins dot the areas around Pythios\n"
	.string "Town. I grew up exploring them!\p"
	.string "The Ilios Region has a rich history\n"
	.string "stretching back thousands of years.\l"
	.string "Keep an eye out for hidden lore and\l"
	.string "items!$"

PythiosTown_EventScripts_NPC_OldWoman_Text_0:
# 61 "data/maps/PythiosTown/scripts.pory"
	.string "Old Woman$"

PythiosTown_EventScripts_NPC_OldWoman_Text_1:
# 62 "data/maps/PythiosTown/scripts.pory"
	.string "People come from all over to hear from\n"
	.string "Sabella, the Gym Leader and spiritual\l"
	.string "guide of Pythios Town.\p"
	.string "Me? I moved here with my husband to\n"
	.string "watch the water and feel the energy.$"

PythiosTown_EventScripts_NPC_OldMan_Text_0:
# 74 "data/maps/PythiosTown/scripts.pory"
	.string "Old Man$"

PythiosTown_EventScripts_NPC_OldMan_Text_1:
# 75 "data/maps/PythiosTown/scripts.pory"
	.string "The graves around Pythios Town are for\n"
	.string "old heroes of the Ilios Region. Them and\l"
	.string "their Pokémon helped win wars and\l"
	.string "fought in great battles.\p"
	.string "Nowadays, people prefer Pokémon\n"
	.string "battling for entertainment. That's\l"
	.string "probably for the best.$"

PythiosTown_EventScripts_NPC_Artist_Text_0:
# 88 "data/maps/PythiosTown/scripts.pory"
	.string "Artist$"

PythiosTown_EventScripts_NPC_Artist_Text_1:
# 89 "data/maps/PythiosTown/scripts.pory"
	.string "A stoic man staring off to the\n"
	.string "distance...\p"
	.string "Think of the story this statue tells...\n"
	.string "A hero, lost to time...\p"
	.string "I need inspiration, a modern hero!$"

PythiosTown_EventScripts_NPC_Artist_Text_2:
# 97 "data/maps/PythiosTown/scripts.pory"
	.string "Oh? And you, are you a young trainer? A\n"
	.string "new hero in-the-making?\p"
	.string "I see a Pokédex on you. Speak to me\n"
	.string "when you have {COLOR GREEN}20 Pokémon{COLOR DARK_GRAY} registered in\l"
	.string "your Pokédex. If you can give me\l"
	.string "inspiration, I can {COLOR GREEN}help your Pokémon{COLOR DARK_GRAY}!$"

PythiosTown_EventScripts_NPC_Artist_Text_3:
# 106 "data/maps/PythiosTown/scripts.pory"
	.string "Chaire, my young hero! I wonder, will we\n"
	.string "make statues of you someday?\p"
	.string "Have you completed my task? Let me see\n"
	.string "your Pokédex.$"

PythiosTown_EventScripts_NPC_Artist_Text_4:
# 117 "data/maps/PythiosTown/scripts.pory"
	.string "You've caught and recorded data on\n"
	.string "{STR_VAR_2} Pokémon.$"

PythiosTown_EventScripts_NPC_Artist_Text_5:
# 128 "data/maps/PythiosTown/scripts.pory"
	.string "Oh, visions of Pokémon and beauty flow\n"
	.string "through me! Be still, my beating heart!\p"
	.string "Calm me, sweet statue...$"

PythiosTown_EventScripts_NPC_Artist_Text_6:
# 134 "data/maps/PythiosTown/scripts.pory"
	.string "Splendid! Fantastic! You've shown me\n"
	.string "more than I ever could have hoped!\p"
	.string "Please, young hero, allow me to help you.\n"
	.string "I can draw move directions, which can\l"
	.string "help {COLOR GREEN}Pokémon relearn old moves{COLOR DARK_GRAY}. Come\l"
	.string "visit me whenever you need!$"

PythiosTown_EventScripts_NPC_Artist_Text_7:
# 141 "data/maps/PythiosTown/scripts.pory"
	.string "Mmm... I'm just not quite inspired. Show\n"
	.string "me {COLOR GREEN}20 complete Pokédex entries{COLOR DARK_GRAY} of\l"
	.string "caught Pokémon. I must see more of\l"
	.string "Ilios!$"

PythiosTown_EventScripts_NPC_Artist_Text_8:
# 150 "data/maps/PythiosTown/scripts.pory"
	.string "Chaire, young hero! Are you here for\n"
	.string "move drawings? They can help Pokémon\l"
	.string "{COLOR GREEN}relearn old moves{COLOR DARK_GRAY}!$"

PythiosTown_EventScripts_NPC_Artist_Text_9:
# 154 "data/maps/PythiosTown/scripts.pory"
	.string "Understood. I'll stay here and practice\n"
	.string "my art with this incredible statue.\l"
	.string "Andio, goodbye!$"

PythiosTown_EventScripts_NPC_Artist_Text_10:
# 164 "data/maps/PythiosTown/scripts.pory"
	.string "Not today? That's okay, it's your\n"
	.string "journey! Come back when you want a\l"
	.string "Pokémon to remember a move.$"

PythiosTown_EventScripts_NPC_Artist_Text_11:
# 175 "data/maps/PythiosTown/scripts.pory"
	.string "Ah, ever the hero, rushing right into\n"
	.string "things! I'm sorry, but I cannot teach an\l"
	.string "Egg to do anything more than sit there.\l"
	.string "Let me know when it hatches though,\l"
	.string "perhaps I can draw moves for it as it\l"
	.string "grows older!$"

PythiosTown_EventScripts_NPC_Artist_Text_12:
# 185 "data/maps/PythiosTown/scripts.pory"
	.string "Hmm... ehehe, this is a little\n"
	.string "embarrassing, young hero... but I don't\l"
	.string "have anything to teach this Pokémon!\l"
	.string "It doesn't respond to any of my move\l"
	.string "drawings.\p"
	.string "Come back with another Pokémon! Andio,\n"
	.string "goodbye, hero!$"

PythiosTown_EventScripts_NPC_Artist_Text_13:
# 193 "data/maps/PythiosTown/scripts.pory"
	.string "Splendid! Now, what move should this\n"
	.string "Pokémon learn?$"

PythiosTown_EventScripts_NPC_Artist_Text_14:
# 209 "data/maps/PythiosTown/scripts.pory"
	.string "It was a complete success! Your\n"
	.string "Pokémon recognized my drawings and\l"
	.string "relearned the move.\p"
	.string "Come back when you want another move\n"
	.string "relearned, my young hero!$"

PythiosTown_EventScripts_NPC_Woman2_Text_0:
# 226 "data/maps/PythiosTown/scripts.pory"
	.string "It's nice living in a small place like\n"
	.string "this. Areas like Sofos City and the\l"
	.string "islands in the eastern sea are too busy\l"
	.string "for me.\p"
	.string "Of course, places like that have more to\n"
	.string "do... Ugh, now I can't decide which is\l"
	.string "better!$"

PythiosTown_EventScript_Hoothoot_Text_0:
# 236 "data/maps/PythiosTown/scripts.pory"
	.string "Hoothoot$"

PythiosTown_EventScript_Hoothoot_Text_1:
# 238 "data/maps/PythiosTown/scripts.pory"
	.string "Craaww!$"

PythiosTown_EventScript_Drowzee_Text_0:
# 249 "data/maps/PythiosTown/scripts.pory"
	.string "Drowzee$"

PythiosTown_EventScript_Drowzee_Text_1:
# 251 "data/maps/PythiosTown/scripts.pory"
	.string "Hoooonk!$"

PythiosTown_EventScript_Dwebble_Text_0:
# 262 "data/maps/PythiosTown/scripts.pory"
	.string "Dwebble$"

PythiosTown_EventScript_Dwebble_Text_1:
# 264 "data/maps/PythiosTown/scripts.pory"
	.string "Chk chk chk.$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_0:
# 281 "data/maps/PythiosTown/scripts.pory"
	.string "Mystical Woman$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_1:
# 282 "data/maps/PythiosTown/scripts.pory"
	.string "YES!! Sabella said I'm guarenteed to win\n"
	.string "my next Pokémon battle! She's never\l"
	.string "wrong!$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_2:
# 300 "data/maps/PythiosTown/scripts.pory"
	.string "Worker$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_3:
# 301 "data/maps/PythiosTown/scripts.pory"
	.string "Sabella just read my future! She told me\n"
	.string "'a big shake-up at work is coming'...\l"
	.string "that probably means a raise!\p"
	.string "...Probably!$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_4:
# 310 "data/maps/PythiosTown/scripts.pory"
	.string "Sabella$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_5:
# 311 "data/maps/PythiosTown/scripts.pory"
	.string "Ah... {PLAYER}, yes?\p"
	.string "How do I know your name? I know much\n"
	.string "and more, young trainer. My name is\l"
	.string "Sabella, the spiritual guide and {COLOR GREEN}Gym\l"
	.string "Leader of Pythios Town{COLOR DARK_GRAY}.\p"
	.string "You're here for your third Gym\n"
	.string "Challenge. I sense a great battle on\l"
	.string "the horizon... I shall be {COLOR GREEN}in my Gym{COLOR DARK_GRAY}. I\l"
	.string "await your challenge.$"

PythiosTown_EventScripts_NPC_OldMan2_Text_0:
# 365 "data/maps/PythiosTown/scripts.pory"
	.string "Everyone seems to believe in Sabella\n"
	.string "and her visions. I'm not so sure, but my\l"
	.string "wife comes around to talk to her all the\l"
	.string "time. I'm waiting for her here.$"

PythiosTown_EventScripts_NPC_PsychicM_Text_0:
# 377 "data/maps/PythiosTown/scripts.pory"
	.string "Psychic$"

PythiosTown_EventScripts_NPC_PsychicM_Text_1:
# 378 "data/maps/PythiosTown/scripts.pory"
	.string "I promise, Sabella's powers are real! She\n"
	.string "has the same powers as her\l"
	.string "Psychic-type and Ghost-type Pokémon!$"

PythiosTown_EventScripts_NPC_ManBlockingGym_Text_0:
# 390 "data/maps/PythiosTown/scripts.pory"
	.string "Gym Guide$"

PythiosTown_EventScripts_NPC_ManBlockingGym_Text_1:
# 391 "data/maps/PythiosTown/scripts.pory"
	.string "Welcome to the Pythios Town Pokémon\n"
	.string "Gym!\p"
	.string "Well... that's what I would say, if the\n"
	.string "{COLOR GREEN}Gym Leader, Sabella{COLOR DARK_GRAY}, was here. She's\l"
	.string "probably meeting with people in the\l"
	.string "{COLOR GREEN}east of town{COLOR DARK_GRAY}.$"

PythiosTown_EventScripts_PIRAEUS_Text_0:
# 403 "data/maps/PythiosTown/scripts.pory"
	.string "Strange Sailor$"

PythiosTown_EventScripts_PIRAEUS_Text_1:
# 404 "data/maps/PythiosTown/scripts.pory"
	.string "Yia sou! Hey! I need a strong Trainer to\n"
	.string "help me out of a bind.\p"
	.string "Come to me when you have the {COLOR GREEN}Pythios\n"
	.string "Town Gym Badge{COLOR DARK_GRAY}... please!$"

PythiosTown_EventScripts_PIRAEUS_Text_2:
# 413 "data/maps/PythiosTown/scripts.pory"
	.string "Thanks for coming back, I thought you\n"
	.string "might've left for good! Lemme check\l"
	.string "your {COLOR GREEN}Badges{COLOR DARK_GRAY}...$"

PythiosTown_EventScripts_PIRAEUS_Text_3:
# 419 "data/maps/PythiosTown/scripts.pory"
	.string "Nope, only 2 Gym Badges. That might not\n"
	.string "be enough.\p"
	.string "Come back when you have the {COLOR GREEN}Pythios\n"
	.string "Town Gym Badge{COLOR DARK_GRAY}, I need to mke sure\l"
	.string "you're a strong Trainer.$"

PythiosTown_EventScripts_PIRAEUS_Text_4:
# 427 "data/maps/PythiosTown/scripts.pory"
	.string "Hey, you got the Gym Badge! You must be\n"
	.string "pretty strong.\p"
	.string "So look, here's my situation. Some Team\n"
	.string "Chimera thugs wanted to take my\l"
	.string "precious, gorgeous, perfect boat! I\l"
	.string "took one down with my Pokémon, but they\l"
	.string "called for backup from an Admin, so now\l"
	.string "I'm stuck hiding out here.\p"
	.string "Last I saw, the Team Chimera Admin was\n"
	.string "waiting to catch me leaving {COLOR GREEN}east of\l"
	.string "Pythios Town{COLOR DARK_GRAY}. Please, help me out here!$"

PythiosTown_EventScripts_PIRAEUS_Text_5:
# 434 "data/maps/PythiosTown/scripts.pory"
	.string "PIRAEUS$"

PythiosTown_EventScripts_PIRAEUS_Text_6:
# 435 "data/maps/PythiosTown/scripts.pory"
	.string "Oh, and tell 'em {COLOR GREEN}PIRAEUS{COLOR DARK_GRAY} sent you!\n"
	.string "PIRAEUS the Strong! No, PIRAEUS the\l"
	.string "Wise... maybe even PIRAEUS the Great!\l"
	.string "Fwahaha!$"

PythiosTown_EventScripts_PIRAEUS_Text_7:
# 444 "data/maps/PythiosTown/scripts.pory"
	.string "The Team Chimera Admin is {COLOR GREEN}east of\n"
	.string "Pythios Town{COLOR DARK_GRAY}, last I saw. Let me know\l"
	.string "when you've taken care of them!$"

PythiosTown_EventScripts_PIRAEUS_Text_8:
# 452 "data/maps/PythiosTown/scripts.pory"
	.string "Chaire, {PLAYER}! Where are we going\n"
	.string "today?$"

PythiosTown_EventScripts_PIRAEUS_Text_9:
# 455 "data/maps/PythiosTown/scripts.pory"
	.string "Just chatting!$"

PythiosTown_EventScripts_PIRAEUS_Text_10:
# 457 "data/maps/PythiosTown/scripts.pory"
	.string "Pythios Town$"

PythiosTown_EventScripts_PIRAEUS_Text_11:
# 460 "data/maps/PythiosTown/scripts.pory"
	.string "Sofos City$"

PythiosTown_EventScripts_PIRAEUS_Text_12:
# 463 "data/maps/PythiosTown/scripts.pory"
	.string "Marmaro Island$"

PythiosTown_EventScripts_PIRAEUS_Text_13:
# 466 "data/maps/PythiosTown/scripts.pory"
	.string "Myrrini Island$"

PythiosTown_EventScripts_PIRAEUS_Text_14:
# 469 "data/maps/PythiosTown/scripts.pory"
	.string "Fresco Isles$"

PythiosTown_EventScripts_PIRAEUS_Text_15:
# 472 "data/maps/PythiosTown/scripts.pory"
	.string "Palati City$"

PythiosTown_EventScripts_PIRAEUS_Text_16:
# 475 "data/maps/PythiosTown/scripts.pory"
	.string "Port Pello$"

PythiosTown_EventScripts_PIRAEUS_Text_17:
# 486 "data/maps/PythiosTown/scripts.pory"
	.string "Ehehe, glad to see the Champion still\n"
	.string "hangs around with the likes of me!$"

PythiosTown_EventScripts_PIRAEUS_Text_18:
# 491 "data/maps/PythiosTown/scripts.pory"
	.string "How's the ol' adventure going,\n"
	.string "{PLAYER}? You still winning Gym\l"
	.string "Badges and knocking Team Chimera\l"
	.string "heads? Fwahaha!$"

PythiosTown_EventScripts_PIRAEUS_Text_19:
# 503 "data/maps/PythiosTown/scripts.pory"
	.string "Pythios Town, eh? I've still got bad\n"
	.string "memories from that place, after my\l"
	.string "run-in with Team Chimera. Let's make\l"
	.string "this a quick trip, ehehe!$"

PythiosTown_EventScripts_PIRAEUS_Text_20:
# 510 "data/maps/PythiosTown/scripts.pory"
	.string "Sofos City, eh? The heart of the Ilios\n"
	.string "Region! While you keep adventuring, I\l"
	.string "may play a little Pinball. I'm not good,\l"
	.string "but it's fun!$"

PythiosTown_EventScripts_PIRAEUS_Text_21:
# 517 "data/maps/PythiosTown/scripts.pory"
	.string "Marmaro Island! A beautiful little spot.\n"
	.string "Their marble helped build structures\l"
	.string "across the ancient Ilios Region. Let's\l"
	.string "check it out!$"

PythiosTown_EventScripts_PIRAEUS_Text_22:
# 524 "data/maps/PythiosTown/scripts.pory"
	.string "Hey, I love Myrrini Island! Maybe I'll do\n"
	.string "some walking around while I'm there! You\l"
	.string "know what they say, Myrrini parties are\l"
	.string "the best parties!$"

PythiosTown_EventScripts_PIRAEUS_Text_23:
# 531 "data/maps/PythiosTown/scripts.pory"
	.string "The Fresco Isles, eh? For a group of\n"
	.string "islands, it gets awful dry there. Maybe\l"
	.string "you'll find some unique Pokémon there!$"

PythiosTown_EventScripts_PIRAEUS_Text_24:
# 538 "data/maps/PythiosTown/scripts.pory"
	.string "Palati City! That's on Kaptara Island,\n"
	.string "right? That place is covered with\l"
	.string "gorgeous ruins... maybe I'll do a little\l"
	.string "exploring when we get there!$"

PythiosTown_EventScripts_PIRAEUS_Text_25:
# 545 "data/maps/PythiosTown/scripts.pory"
	.string "Port Pello! Their cherry trees are\n"
	.string "world-famous! They say the gods\l"
	.string "blessed the lands. How about we see it\l"
	.string "for ourselves?$"

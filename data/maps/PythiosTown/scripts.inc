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
	setobjectaswildencounter 19, ENCOUNTER_LAND
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


PythiosTown_Sign_GymSign::
# 29 "data/maps/PythiosTown/scripts.pory"
	lock
# 30 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_Sign_GymSign_Text_0
# 31 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 32 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_Gentleman::
# 38 "data/maps/PythiosTown/scripts.pory"
	lock
# 39 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 40 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Gentleman_Text_0
# 41 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Gentleman_Text_1
# 42 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 43 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_GOT_WILL_O_WISP, PythiosTown_EventScripts_NPC_Gentleman_2
PythiosTown_EventScripts_NPC_Gentleman_1:
# 51 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Gentleman_2:
# 45 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Gentleman_Text_0
# 46 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Gentleman_Text_2
# 47 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 48 "data/maps/PythiosTown/scripts.pory"
	giveitem ITEM_TM51
# 49 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_GOT_WILL_O_WISP
	goto PythiosTown_EventScripts_NPC_Gentleman_1


PythiosTown_EventScripts_NPC_Woman::
# 57 "data/maps/PythiosTown/scripts.pory"
	lock
# 58 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 59 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Woman_Text_0
# 60 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Woman_Text_1
# 61 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 62 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_OldWoman::
# 68 "data/maps/PythiosTown/scripts.pory"
	lock
# 69 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 70 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_OldWoman_Text_0
# 71 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_OldWoman_Text_1
# 72 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 73 "data/maps/PythiosTown/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 74 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 75 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_OldMan::
# 81 "data/maps/PythiosTown/scripts.pory"
	lock
# 82 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 83 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_OldMan_Text_0
# 84 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_OldMan_Text_1
# 85 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 86 "data/maps/PythiosTown/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 87 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 88 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_Artist::
# 94 "data/maps/PythiosTown/scripts.pory"
	lock
# 95 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_MOVE_RELEARNER, PythiosTown_EventScripts_NPC_Artist_2
# 110 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_UNLOCKED_MOVE_RELEARNER, PythiosTown_EventScripts_NPC_Artist_3
# 156 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FacePlayer
# 157 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 158 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 159 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_8, MSGBOX_YESNO
# 160 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_10
# 168 "data/maps/PythiosTown/scripts.pory"
	special ChooseMonForMoveRelearner
# 169 "data/maps/PythiosTown/scripts.pory"
	waitstate
# 170 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_14
# 180 "data/maps/PythiosTown/scripts.pory"
	special IsSelectedMonEgg
# 181 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_17
# 191 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_20
# 201 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 202 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_13
# 203 "data/maps/PythiosTown/scripts.pory"
	special TeachMoveRelearnerMove
# 204 "data/maps/PythiosTown/scripts.pory"
	waitstate
# 205 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_22
# 217 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 218 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_14
# 219 "data/maps/PythiosTown/scripts.pory"
	closemessage
PythiosTown_EventScripts_NPC_Artist_1:
# 224 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 225 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 226 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_2:
# 97 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 98 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_1
# 99 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 100 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 101 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 102 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 103 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FacePlayer
# 104 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 105 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 106 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_2
# 107 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 108 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_SPOKE_TO_MOVE_RELEARNER
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_3:
# 112 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FacePlayer
# 113 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 114 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 115 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_3
# 116 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 118 "data/maps/PythiosTown/scripts.pory"
	setvar VAR_0x8004, 0
# 119 "data/maps/PythiosTown/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 120 "data/maps/PythiosTown/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 121 "data/maps/PythiosTown/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 122 "data/maps/PythiosTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 123 "data/maps/PythiosTown/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 124 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 125 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 126 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_4
# 127 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 128 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 130 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8009, 20
	goto_if_ge PythiosTown_EventScripts_NPC_Artist_7
# 149 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 150 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_7
# 151 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_7:
# 132 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 133 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 134 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_JumpInPlaceRight
# 135 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 136 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 137 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_5
# 138 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 139 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 140 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FacePlayer
# 141 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 142 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 143 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_6
# 144 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 145 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_UNLOCKED_MOVE_RELEARNER
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_10:
# 162 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 163 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_9
# 164 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_14:
# 172 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 173 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_10
# 174 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 175 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 176 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 177 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_17:
# 183 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 184 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_11
# 185 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 186 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 187 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 188 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_20:
# 193 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 194 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_12
# 195 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 196 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 197 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 198 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_22:
# 207 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 208 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_10
# 209 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 210 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 211 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 212 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_Woman2::
# 232 "data/maps/PythiosTown/scripts.pory"
	lock
# 233 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 234 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Woman_Text_0
# 235 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Woman2_Text_0
# 236 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 237 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Hoothoot::
# 243 "data/maps/PythiosTown/scripts.pory"
	lock
# 244 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 245 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Hoothoot_Text_0
# 246 "data/maps/PythiosTown/scripts.pory"
	playmoncry SPECIES_HOOTHOOT, CRY_MODE_NORMAL
# 247 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Hoothoot_Text_1
# 248 "data/maps/PythiosTown/scripts.pory"
	waitmoncry
# 249 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 250 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Drowzee::
# 256 "data/maps/PythiosTown/scripts.pory"
	lock
# 257 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 258 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Drowzee_Text_0
# 259 "data/maps/PythiosTown/scripts.pory"
	playmoncry SPECIES_DROWZEE, CRY_MODE_NORMAL
# 260 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Drowzee_Text_1
# 261 "data/maps/PythiosTown/scripts.pory"
	waitmoncry
# 262 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 263 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Dwebble::
# 269 "data/maps/PythiosTown/scripts.pory"
	lock
# 270 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 271 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Dwebble_Text_0
# 272 "data/maps/PythiosTown/scripts.pory"
	playmoncry SPECIES_DWEBBLE, CRY_MODE_NORMAL
# 273 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Dwebble_Text_1
# 274 "data/maps/PythiosTown/scripts.pory"
	waitmoncry
# 275 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 276 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Trigger_SabellaIntroductionEvent::
# 282 "data/maps/PythiosTown/scripts.pory"
	lockall
# 283 "data/maps/PythiosTown/scripts.pory"
	applymovement 13, Common_Movement_ExclamationMark
# 284 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 285 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 286 "data/maps/PythiosTown/scripts.pory"
	applymovement 13, PythiosTown_Movement_FirstSabellaFanWalksToPlayer
# 287 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 288 "data/maps/PythiosTown/scripts.pory"
	applymovement 14, Common_Movement_WalkUp
# 289 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 290 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_0
# 291 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_1
# 292 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 293 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 294 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 295 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 296 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 297 "data/maps/PythiosTown/scripts.pory"
	applymovement 13, PythiosTown_Movement_FirstSabellaFanWalksAway
# 298 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 299 "data/maps/PythiosTown/scripts.pory"
	delay 60
# 301 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PythiosTown_Movement_PlayerApproachesLine
# 302 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 303 "data/maps/PythiosTown/scripts.pory"
	delay 60
# 304 "data/maps/PythiosTown/scripts.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 305 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 306 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 307 "data/maps/PythiosTown/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 308 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 309 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_2
# 310 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_3
# 311 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 312 "data/maps/PythiosTown/scripts.pory"
	applymovement 14, PythiosTown_Movement_SecondSabellaFanWalksAway
# 313 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 314 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 315 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 316 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 319 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_4
# 320 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_5
# 321 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 323 "data/maps/PythiosTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 324 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 325 "data/maps/PythiosTown/scripts.pory"
	removeobject 13
# 326 "data/maps/PythiosTown/scripts.pory"
	removeobject 14
# 327 "data/maps/PythiosTown/scripts.pory"
	removeobject 3
# 328 "data/maps/PythiosTown/scripts.pory"
	removeobject 15
# 329 "data/maps/PythiosTown/scripts.pory"
	removeobject 16
# 330 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_MET_SABELLA_PYTHIOS_TOWN
# 331 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 332 "data/maps/PythiosTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 333 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 335 "data/maps/PythiosTown/scripts.pory"
	releaseall
	end


# 339 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_FirstSabellaFanWalksToPlayer:
# 341 "data/maps/PythiosTown/scripts.pory"
	walk_fast_left
# 342 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 342 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 343 "data/maps/PythiosTown/scripts.pory"
	step_end

# 346 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_FirstSabellaFanWalksAway:
# 348 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 348 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 348 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 348 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 348 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 348 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 349 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 349 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 349 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 349 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 349 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 349 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 349 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 349 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 350 "data/maps/PythiosTown/scripts.pory"
	step_end

# 353 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_PlayerApproachesLine:
# 355 "data/maps/PythiosTown/scripts.pory"
	walk_right
# 356 "data/maps/PythiosTown/scripts.pory"
	walk_up
# 356 "data/maps/PythiosTown/scripts.pory"
	walk_up
# 357 "data/maps/PythiosTown/scripts.pory"
	walk_right
# 358 "data/maps/PythiosTown/scripts.pory"
	face_up
# 359 "data/maps/PythiosTown/scripts.pory"
	step_end

# 362 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_SecondSabellaFanWalksAway:
# 364 "data/maps/PythiosTown/scripts.pory"
	walk_fast_left
# 365 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 365 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 365 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 365 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 365 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 365 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 365 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 365 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 365 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 366 "data/maps/PythiosTown/scripts.pory"
	step_end

PythiosTown_EventScripts_NPC_OldMan2::
# 371 "data/maps/PythiosTown/scripts.pory"
	lock
# 372 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 373 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_OldMan_Text_0
# 374 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_OldMan2_Text_0
# 375 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 376 "data/maps/PythiosTown/scripts.pory"
	applymovement 11, Common_Movement_FaceLeft
# 377 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 378 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_PsychicM::
# 384 "data/maps/PythiosTown/scripts.pory"
	lock
# 385 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 386 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_PsychicM_Text_0
# 387 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_PsychicM_Text_1
# 388 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 389 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 390 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 391 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_ManBlockingGym::
# 397 "data/maps/PythiosTown/scripts.pory"
	lock
# 398 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 399 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_ManBlockingGym_Text_0
# 400 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_ManBlockingGym_Text_1
# 401 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 402 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_PIRAEUS::
# 408 "data/maps/PythiosTown/scripts.pory"
	lock
# 409 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 410 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_MET_PIRAEUS_PYTHIOS_TOWN, PythiosTown_EventScripts_PIRAEUS_2
# 419 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_MET_PIRAEUS_PYTHIOS_TOWN, PythiosTown_EventScripts_PIRAEUS_10
PythiosTown_EventScripts_PIRAEUS_8:
# 450 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_GOT_BADGE_FOR_PIRAEUS, PythiosTown_EventScripts_PIRAEUS_7
PythiosTown_EventScripts_PIRAEUS_6:
# 458 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_HELPED_PIRAEUS_PYTHIOS_TOWN, PythiosTown_EventScripts_PIRAEUS_5
PythiosTown_EventScripts_PIRAEUS_1:
# 462 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_PIRAEUS_2:
# 412 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_0
# 413 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_1
# 414 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 415 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_MET_PIRAEUS_PYTHIOS_TOWN
# 416 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_PIRAEUS_3:
# 421 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_0
# 422 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_2
# 423 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 424 "data/maps/PythiosTown/scripts.pory"
	delay 60
# 425 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, PythiosTown_EventScripts_PIRAEUS_14
# 435 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_0
# 436 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_4
# 437 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 438 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_GOT_BADGE_FOR_PIRAEUS
# 439 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 440 "data/maps/PythiosTown/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 441 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 442 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 443 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_5
# 444 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_6
# 445 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 446 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_PIRAEUS_4:
# 452 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_5
# 453 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_7
# 454 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 455 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_PIRAEUS_5:
# 460 "data/maps/PythiosTown/scripts.pory"
	goto Common_EventScript_Piraeus
	goto PythiosTown_EventScripts_PIRAEUS_1

PythiosTown_EventScripts_PIRAEUS_7:
# 450 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_HELPED_PIRAEUS_PYTHIOS_TOWN, PythiosTown_EventScripts_PIRAEUS_4
	goto PythiosTown_EventScripts_PIRAEUS_6

PythiosTown_EventScripts_PIRAEUS_10:
# 419 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_GOT_BADGE_FOR_PIRAEUS, PythiosTown_EventScripts_PIRAEUS_3
	goto PythiosTown_EventScripts_PIRAEUS_8

PythiosTown_EventScripts_PIRAEUS_14:
# 427 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_0
# 428 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_3
# 429 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 430 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_Sign_GymSign_Text_0:
# 30 "data/maps/PythiosTown/scripts.pory"
	.string "Gym Leader: Sabella\n"
	.string "The Oracle of Ilios$"

PythiosTown_EventScripts_NPC_Gentleman_Text_0:
# 40 "data/maps/PythiosTown/scripts.pory"
	.string "Gentleman$"

PythiosTown_EventScripts_NPC_Gentleman_Text_1:
# 41 "data/maps/PythiosTown/scripts.pory"
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
# 46 "data/maps/PythiosTown/scripts.pory"
	.string "Thanks for listening to me ramble. Here,\n"
	.string "take this {COLOR GREEN}TM Will-O-Wisp{COLOR DARK_GRAY}. It feels like\l"
	.string "it's connected to this strange town.$"

PythiosTown_EventScripts_NPC_Woman_Text_0:
# 59 "data/maps/PythiosTown/scripts.pory"
	.string "Woman$"

PythiosTown_EventScripts_NPC_Woman_Text_1:
# 60 "data/maps/PythiosTown/scripts.pory"
	.string "Ruins dot the areas around Pythios\n"
	.string "Town. I grew up exploring them!\p"
	.string "The Ilios Region has a rich history\n"
	.string "stretching back thousands of years.\l"
	.string "Keep an eye out for hidden lore and\l"
	.string "items!$"

PythiosTown_EventScripts_NPC_OldWoman_Text_0:
# 70 "data/maps/PythiosTown/scripts.pory"
	.string "Old Woman$"

PythiosTown_EventScripts_NPC_OldWoman_Text_1:
# 71 "data/maps/PythiosTown/scripts.pory"
	.string "People come from all over to hear from\n"
	.string "Sabella, the Gym Leader and spiritual\l"
	.string "guide of Pythios Town.\p"
	.string "Me? I moved here with my husband to\n"
	.string "watch the water and feel the energy.$"

PythiosTown_EventScripts_NPC_OldMan_Text_0:
# 83 "data/maps/PythiosTown/scripts.pory"
	.string "Old Man$"

PythiosTown_EventScripts_NPC_OldMan_Text_1:
# 84 "data/maps/PythiosTown/scripts.pory"
	.string "The graves around Pythios Town are for\n"
	.string "old heroes of the Ilios Region. Them and\l"
	.string "their Pokémon helped win wars and\l"
	.string "fought in great battles.\p"
	.string "Nowadays, people prefer Pokémon\n"
	.string "battling for entertainment. That's\l"
	.string "probably for the best.$"

PythiosTown_EventScripts_NPC_Artist_Text_0:
# 97 "data/maps/PythiosTown/scripts.pory"
	.string "Artist$"

PythiosTown_EventScripts_NPC_Artist_Text_1:
# 98 "data/maps/PythiosTown/scripts.pory"
	.string "A stoic man staring off to the\n"
	.string "distance...\p"
	.string "Think of the story this statue tells...\n"
	.string "A hero, lost to time...\p"
	.string "I need inspiration, a modern hero!$"

PythiosTown_EventScripts_NPC_Artist_Text_2:
# 106 "data/maps/PythiosTown/scripts.pory"
	.string "Oh? And you, are you a young trainer? A\n"
	.string "new hero in-the-making?\p"
	.string "I see a Pokédex on you. Speak to me\n"
	.string "when you have {COLOR GREEN}20 Pokémon{COLOR DARK_GRAY} registered in\l"
	.string "your Pokédex. If you can give me\l"
	.string "inspiration, I can {COLOR GREEN}help your Pokémon{COLOR DARK_GRAY}!$"

PythiosTown_EventScripts_NPC_Artist_Text_3:
# 115 "data/maps/PythiosTown/scripts.pory"
	.string "Chaire, my young hero! I wonder, will we\n"
	.string "make statues of you someday?\p"
	.string "Have you completed my task? Let me see\n"
	.string "your Pokédex.$"

PythiosTown_EventScripts_NPC_Artist_Text_4:
# 126 "data/maps/PythiosTown/scripts.pory"
	.string "You've caught and recorded data on\n"
	.string "{STR_VAR_2} Pokémon.$"

PythiosTown_EventScripts_NPC_Artist_Text_5:
# 137 "data/maps/PythiosTown/scripts.pory"
	.string "Oh, visions of Pokémon and beauty flow\n"
	.string "through me! Be still, my beating heart!\p"
	.string "Calm me, sweet statue...$"

PythiosTown_EventScripts_NPC_Artist_Text_6:
# 143 "data/maps/PythiosTown/scripts.pory"
	.string "Splendid! Fantastic! You've shown me\n"
	.string "more than I ever could have hoped!\p"
	.string "Please, young hero, allow me to help you.\n"
	.string "I can draw move directions, which can\l"
	.string "help {COLOR GREEN}Pokémon relearn old moves{COLOR DARK_GRAY}. Come\l"
	.string "visit me whenever you need!$"

PythiosTown_EventScripts_NPC_Artist_Text_7:
# 150 "data/maps/PythiosTown/scripts.pory"
	.string "Mmm... I'm just not quite inspired. Show\n"
	.string "me {COLOR GREEN}20 complete Pokédex entries{COLOR DARK_GRAY} of\l"
	.string "caught Pokémon. I must see more of\l"
	.string "Ilios!$"

PythiosTown_EventScripts_NPC_Artist_Text_8:
# 159 "data/maps/PythiosTown/scripts.pory"
	.string "Chaire, young hero! Are you here for\n"
	.string "move drawings? They can help Pokémon\l"
	.string "{COLOR GREEN}relearn old moves{COLOR DARK_GRAY}!$"

PythiosTown_EventScripts_NPC_Artist_Text_9:
# 163 "data/maps/PythiosTown/scripts.pory"
	.string "Understood. I'll stay here and practice\n"
	.string "my art with this incredible statue.\l"
	.string "Andio, goodbye!$"

PythiosTown_EventScripts_NPC_Artist_Text_10:
# 173 "data/maps/PythiosTown/scripts.pory"
	.string "Not today? That's okay, it's your\n"
	.string "journey! Come back when you want a\l"
	.string "Pokémon to remember a move.$"

PythiosTown_EventScripts_NPC_Artist_Text_11:
# 184 "data/maps/PythiosTown/scripts.pory"
	.string "Ah, ever the hero, rushing right into\n"
	.string "things! I'm sorry, but I cannot teach an\l"
	.string "Egg to do anything more than sit there.\l"
	.string "Let me know when it hatches though,\l"
	.string "perhaps I can draw moves for it as it\l"
	.string "grows older!$"

PythiosTown_EventScripts_NPC_Artist_Text_12:
# 194 "data/maps/PythiosTown/scripts.pory"
	.string "Hmm... ehehe, this is a little\n"
	.string "embarrassing, young hero... but I don't\l"
	.string "have anything to teach this Pokémon!\l"
	.string "It doesn't respond to any of my move\l"
	.string "drawings.\p"
	.string "Come back with another Pokémon! Andio,\n"
	.string "goodbye, hero!$"

PythiosTown_EventScripts_NPC_Artist_Text_13:
# 202 "data/maps/PythiosTown/scripts.pory"
	.string "Splendid! Now, what move should this\n"
	.string "Pokémon learn?$"

PythiosTown_EventScripts_NPC_Artist_Text_14:
# 218 "data/maps/PythiosTown/scripts.pory"
	.string "It was a complete success! Your\n"
	.string "Pokémon recognized my drawings and\l"
	.string "relearned the move.\p"
	.string "Come back when you want another move\n"
	.string "relearned, my young hero!$"

PythiosTown_EventScripts_NPC_Woman2_Text_0:
# 235 "data/maps/PythiosTown/scripts.pory"
	.string "It's nice living in a small place like\n"
	.string "this. Areas like Sofos City and the\l"
	.string "islands in the eastern sea are too busy\l"
	.string "for me.\p"
	.string "Of course, places like that have more to\n"
	.string "do... Ugh, now I can't decide which is\l"
	.string "better!$"

PythiosTown_EventScript_Hoothoot_Text_0:
# 245 "data/maps/PythiosTown/scripts.pory"
	.string "Hoothoot$"

PythiosTown_EventScript_Hoothoot_Text_1:
# 247 "data/maps/PythiosTown/scripts.pory"
	.string "Craaww!$"

PythiosTown_EventScript_Drowzee_Text_0:
# 258 "data/maps/PythiosTown/scripts.pory"
	.string "Drowzee$"

PythiosTown_EventScript_Drowzee_Text_1:
# 260 "data/maps/PythiosTown/scripts.pory"
	.string "Hoooonk!$"

PythiosTown_EventScript_Dwebble_Text_0:
# 271 "data/maps/PythiosTown/scripts.pory"
	.string "Dwebble$"

PythiosTown_EventScript_Dwebble_Text_1:
# 273 "data/maps/PythiosTown/scripts.pory"
	.string "Chk chk chk.$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_0:
# 290 "data/maps/PythiosTown/scripts.pory"
	.string "Mystical Woman$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_1:
# 291 "data/maps/PythiosTown/scripts.pory"
	.string "YES!! Sabella said I'm guarenteed to win\n"
	.string "my next Pokémon battle! She's never\l"
	.string "wrong!$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_2:
# 309 "data/maps/PythiosTown/scripts.pory"
	.string "Worker$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_3:
# 310 "data/maps/PythiosTown/scripts.pory"
	.string "Sabella just read my future! She told me\n"
	.string "'a big shake-up at work is coming'...\l"
	.string "that probably means a raise!\p"
	.string "...Probably!$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_4:
# 319 "data/maps/PythiosTown/scripts.pory"
	.string "Sabella$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_5:
# 320 "data/maps/PythiosTown/scripts.pory"
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
# 374 "data/maps/PythiosTown/scripts.pory"
	.string "Everyone seems to believe in Sabella\n"
	.string "and her visions. I'm not so sure, but my\l"
	.string "wife comes around to talk to her all the\l"
	.string "time. I'm waiting for her here.$"

PythiosTown_EventScripts_NPC_PsychicM_Text_0:
# 386 "data/maps/PythiosTown/scripts.pory"
	.string "Psychic$"

PythiosTown_EventScripts_NPC_PsychicM_Text_1:
# 387 "data/maps/PythiosTown/scripts.pory"
	.string "I promise, Sabella's powers are real! She\n"
	.string "has the same powers as her\l"
	.string "Psychic-type and Ghost-type Pokémon!$"

PythiosTown_EventScripts_NPC_ManBlockingGym_Text_0:
# 399 "data/maps/PythiosTown/scripts.pory"
	.string "Gym Guide$"

PythiosTown_EventScripts_NPC_ManBlockingGym_Text_1:
# 400 "data/maps/PythiosTown/scripts.pory"
	.string "Welcome to the Pythios Town Pokémon\n"
	.string "Gym!\p"
	.string "Well... that's what I would say, if the\n"
	.string "{COLOR GREEN}Gym Leader, Sabella{COLOR DARK_GRAY}, was here. She's\l"
	.string "probably meeting with people in the\l"
	.string "{COLOR GREEN}east of town{COLOR DARK_GRAY}.$"

PythiosTown_EventScripts_PIRAEUS_Text_0:
# 412 "data/maps/PythiosTown/scripts.pory"
	.string "Strange Sailor$"

PythiosTown_EventScripts_PIRAEUS_Text_1:
# 413 "data/maps/PythiosTown/scripts.pory"
	.string "Chaire! Hey! I need a strong Trainer to\n"
	.string "help me out of a bind.\p"
	.string "Come to me when you have the {COLOR GREEN}Pythios\n"
	.string "Town Gym Badge{COLOR DARK_GRAY}... please!$"

PythiosTown_EventScripts_PIRAEUS_Text_2:
# 422 "data/maps/PythiosTown/scripts.pory"
	.string "Thanks for coming back, I thought you\n"
	.string "might've left for good! Lemme check\l"
	.string "your {COLOR GREEN}Badges{COLOR DARK_GRAY}...$"

PythiosTown_EventScripts_PIRAEUS_Text_3:
# 428 "data/maps/PythiosTown/scripts.pory"
	.string "Nope, only 2 Gym Badges. That might not\n"
	.string "be enough.\p"
	.string "Come back when you have the {COLOR GREEN}Pythios\n"
	.string "Town Gym Badge{COLOR DARK_GRAY}, I need to mke sure\l"
	.string "you're a strong Trainer.$"

PythiosTown_EventScripts_PIRAEUS_Text_4:
# 436 "data/maps/PythiosTown/scripts.pory"
	.string "Hey, you got the Gym Badge! You must be\n"
	.string "pretty strong.\p"
	.string "So look, here's my situation. Some Team\n"
	.string "Chimera thugs wanted to take my\l"
	.string "precious, gorgeous, perfect boat! I\l"
	.string "fought with the Admin and took down\l"
	.string "their strongest Pokémon, but I lost and\l"
	.string "had to run. Now I'm hiding here, doing\l"
	.string "what I can to protect my boat.\p"
	.string "Last I saw, the Team Chimera Admin was\n"
	.string "waiting to catch me leaving {COLOR GREEN}east of\l"
	.string "Pythios Town{COLOR DARK_GRAY}. Please, help me out here!$"

PythiosTown_EventScripts_PIRAEUS_Text_5:
# 443 "data/maps/PythiosTown/scripts.pory"
	.string "Piraeus$"

PythiosTown_EventScripts_PIRAEUS_Text_6:
# 444 "data/maps/PythiosTown/scripts.pory"
	.string "Oh, and tell 'em {COLOR GREEN}Piraeus{COLOR DARK_GRAY} sent you!\n"
	.string "Piraeus the Strong! No, Piraeus the\l"
	.string "Wise... maybe even Piraeus the Great!\l"
	.string "Fwahaha!$"

PythiosTown_EventScripts_PIRAEUS_Text_7:
# 453 "data/maps/PythiosTown/scripts.pory"
	.string "The Team Chimera Admin is {COLOR GREEN}east of\n"
	.string "Pythios Town{COLOR DARK_GRAY}, last I saw. Let me know\l"
	.string "when you've taken care of them!$"

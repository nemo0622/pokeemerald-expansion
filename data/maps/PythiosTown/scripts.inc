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


PythiosTown_EventScript_DirectionSign::
# 29 "data/maps/PythiosTown/scripts.pory"
	lock
# 30 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_DirectionSign_Text_0
# 31 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 32 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_Sign_GymSign::
# 38 "data/maps/PythiosTown/scripts.pory"
	lock
# 39 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_Sign_GymSign_Text_0
# 40 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 41 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_Gentleman::
# 47 "data/maps/PythiosTown/scripts.pory"
	lock
# 48 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 49 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Gentleman_Text_0
# 50 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Gentleman_Text_1
# 51 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 52 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_GOT_WILL_O_WISP, PythiosTown_EventScripts_NPC_Gentleman_2
PythiosTown_EventScripts_NPC_Gentleman_1:
# 60 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Gentleman_2:
# 54 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Gentleman_Text_0
# 55 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Gentleman_Text_2
# 56 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 57 "data/maps/PythiosTown/scripts.pory"
	giveitem ITEM_TM51
# 58 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_GOT_WILL_O_WISP
	goto PythiosTown_EventScripts_NPC_Gentleman_1


PythiosTown_EventScripts_NPC_Woman::
# 66 "data/maps/PythiosTown/scripts.pory"
	lock
# 67 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 68 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Woman_Text_0
# 69 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Woman_Text_1
# 70 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 71 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_OldWoman::
# 77 "data/maps/PythiosTown/scripts.pory"
	lock
# 78 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 79 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_OldWoman_Text_0
# 80 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_OldWoman_Text_1
# 81 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 82 "data/maps/PythiosTown/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 83 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 84 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_OldMan::
# 90 "data/maps/PythiosTown/scripts.pory"
	lock
# 91 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 92 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_OldMan_Text_0
# 93 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_OldMan_Text_1
# 94 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 95 "data/maps/PythiosTown/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 96 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 97 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_Artist::
# 103 "data/maps/PythiosTown/scripts.pory"
	lock
# 104 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_MOVE_RELEARNER, PythiosTown_EventScripts_NPC_Artist_2
# 119 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_UNLOCKED_MOVE_RELEARNER, PythiosTown_EventScripts_NPC_Artist_3
# 165 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FacePlayer
# 166 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 167 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 168 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_8, MSGBOX_YESNO
# 169 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_10
# 177 "data/maps/PythiosTown/scripts.pory"
	special ChooseMonForMoveRelearner
# 178 "data/maps/PythiosTown/scripts.pory"
	waitstate
# 179 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_14
# 189 "data/maps/PythiosTown/scripts.pory"
	special IsSelectedMonEgg
# 190 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_17
# 200 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_20
# 210 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 211 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_13
# 212 "data/maps/PythiosTown/scripts.pory"
	special TeachMoveRelearnerMove
# 213 "data/maps/PythiosTown/scripts.pory"
	waitstate
# 214 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_22
# 226 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 227 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_14
# 228 "data/maps/PythiosTown/scripts.pory"
	closemessage
PythiosTown_EventScripts_NPC_Artist_1:
# 233 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 234 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 235 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_2:
# 106 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 107 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_1
# 108 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 109 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 110 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 111 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 112 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FacePlayer
# 113 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 114 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 115 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_2
# 116 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 117 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_SPOKE_TO_MOVE_RELEARNER
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_3:
# 121 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FacePlayer
# 122 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 123 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 124 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_3
# 125 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 127 "data/maps/PythiosTown/scripts.pory"
	setvar VAR_0x8004, 0
# 128 "data/maps/PythiosTown/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 129 "data/maps/PythiosTown/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 130 "data/maps/PythiosTown/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 131 "data/maps/PythiosTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 132 "data/maps/PythiosTown/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 133 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 134 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 135 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_4
# 136 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 137 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 139 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8009, 20
	goto_if_ge PythiosTown_EventScripts_NPC_Artist_7
# 158 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 159 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_7
# 160 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_7:
# 141 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 142 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 143 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_JumpInPlaceRight
# 144 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 145 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 146 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_5
# 147 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 148 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 149 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FacePlayer
# 150 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 151 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 152 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_6
# 153 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 154 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_UNLOCKED_MOVE_RELEARNER
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_10:
# 171 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 172 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_9
# 173 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_14:
# 181 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 182 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_10
# 183 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 184 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 185 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 186 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_17:
# 192 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 193 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_11
# 194 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 195 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 196 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 197 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_20:
# 202 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 203 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_12
# 204 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 205 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 206 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 207 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_22:
# 216 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 217 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_10
# 218 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 219 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 220 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 221 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_Woman2::
# 241 "data/maps/PythiosTown/scripts.pory"
	lock
# 242 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 243 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Woman_Text_0
# 244 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Woman2_Text_0
# 245 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 246 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Hoothoot::
# 252 "data/maps/PythiosTown/scripts.pory"
	lock
# 253 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 254 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Hoothoot_Text_0
# 255 "data/maps/PythiosTown/scripts.pory"
	playmoncry SPECIES_HOOTHOOT, CRY_MODE_NORMAL
# 256 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Hoothoot_Text_1
# 257 "data/maps/PythiosTown/scripts.pory"
	waitmoncry
# 258 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 259 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Drowzee::
# 265 "data/maps/PythiosTown/scripts.pory"
	lock
# 266 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 267 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Drowzee_Text_0
# 268 "data/maps/PythiosTown/scripts.pory"
	playmoncry SPECIES_DROWZEE, CRY_MODE_NORMAL
# 269 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Drowzee_Text_1
# 270 "data/maps/PythiosTown/scripts.pory"
	waitmoncry
# 271 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 272 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Dwebble::
# 278 "data/maps/PythiosTown/scripts.pory"
	lock
# 279 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 280 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Dwebble_Text_0
# 281 "data/maps/PythiosTown/scripts.pory"
	playmoncry SPECIES_DWEBBLE, CRY_MODE_NORMAL
# 282 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Dwebble_Text_1
# 283 "data/maps/PythiosTown/scripts.pory"
	waitmoncry
# 284 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 285 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Trigger_SabellaIntroductionEvent::
# 291 "data/maps/PythiosTown/scripts.pory"
	lockall
# 292 "data/maps/PythiosTown/scripts.pory"
	applymovement 13, Common_Movement_ExclamationMark
# 293 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 294 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 295 "data/maps/PythiosTown/scripts.pory"
	applymovement 13, PythiosTown_Movement_FirstSabellaFanWalksToPlayer
# 296 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 297 "data/maps/PythiosTown/scripts.pory"
	applymovement 14, Common_Movement_WalkUp
# 298 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 299 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_0
# 300 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_1
# 301 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 302 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 303 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 304 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 305 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 306 "data/maps/PythiosTown/scripts.pory"
	applymovement 13, PythiosTown_Movement_FirstSabellaFanWalksAway
# 307 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 308 "data/maps/PythiosTown/scripts.pory"
	delay 60
# 310 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PythiosTown_Movement_PlayerApproachesLine
# 311 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 312 "data/maps/PythiosTown/scripts.pory"
	delay 60
# 313 "data/maps/PythiosTown/scripts.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 314 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 315 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 316 "data/maps/PythiosTown/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 317 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 318 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_2
# 319 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_3
# 320 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 321 "data/maps/PythiosTown/scripts.pory"
	applymovement 14, PythiosTown_Movement_SecondSabellaFanWalksAway
# 322 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 323 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 324 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 325 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 328 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_4
# 329 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_5
# 330 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 332 "data/maps/PythiosTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 333 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 334 "data/maps/PythiosTown/scripts.pory"
	removeobject 13
# 335 "data/maps/PythiosTown/scripts.pory"
	removeobject 14
# 336 "data/maps/PythiosTown/scripts.pory"
	removeobject 3
# 337 "data/maps/PythiosTown/scripts.pory"
	removeobject 15
# 338 "data/maps/PythiosTown/scripts.pory"
	removeobject 16
# 339 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_MET_SABELLA_PYTHIOS_TOWN
# 340 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 341 "data/maps/PythiosTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 342 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 344 "data/maps/PythiosTown/scripts.pory"
	releaseall
	end


# 348 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_FirstSabellaFanWalksToPlayer:
# 350 "data/maps/PythiosTown/scripts.pory"
	walk_fast_left
# 351 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 351 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 352 "data/maps/PythiosTown/scripts.pory"
	step_end

# 355 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_FirstSabellaFanWalksAway:
# 357 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 357 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 357 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 357 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 357 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 357 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 358 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 358 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 358 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 358 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 358 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 358 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 358 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 358 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 359 "data/maps/PythiosTown/scripts.pory"
	step_end

# 362 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_PlayerApproachesLine:
# 364 "data/maps/PythiosTown/scripts.pory"
	walk_right
# 365 "data/maps/PythiosTown/scripts.pory"
	walk_up
# 365 "data/maps/PythiosTown/scripts.pory"
	walk_up
# 366 "data/maps/PythiosTown/scripts.pory"
	walk_right
# 367 "data/maps/PythiosTown/scripts.pory"
	face_up
# 368 "data/maps/PythiosTown/scripts.pory"
	step_end

# 371 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_SecondSabellaFanWalksAway:
# 373 "data/maps/PythiosTown/scripts.pory"
	walk_fast_left
# 374 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 374 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 374 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 374 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 374 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 374 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 374 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 374 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 374 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 375 "data/maps/PythiosTown/scripts.pory"
	step_end

PythiosTown_EventScripts_NPC_OldMan2::
# 380 "data/maps/PythiosTown/scripts.pory"
	lock
# 381 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 382 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_OldMan_Text_0
# 383 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_OldMan2_Text_0
# 384 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 385 "data/maps/PythiosTown/scripts.pory"
	applymovement 11, Common_Movement_FaceLeft
# 386 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 387 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_PsychicM::
# 393 "data/maps/PythiosTown/scripts.pory"
	lock
# 394 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 395 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_PsychicM_Text_0
# 396 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_PsychicM_Text_1
# 397 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 398 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 399 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 400 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_ManBlockingGym::
# 406 "data/maps/PythiosTown/scripts.pory"
	lock
# 407 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 408 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_ManBlockingGym_Text_0
# 409 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_ManBlockingGym_Text_1
# 410 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 411 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Athlete::
# 417 "data/maps/PythiosTown/scripts.pory"
	lock
# 418 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 419 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Athlete_Text_0
# 422 "data/maps/PythiosTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_PYTHIOS_REQUEST_QUICK_BALL
# 423 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PythiosTown_EventScript_Athlete_2
# 432 "data/maps/PythiosTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_PYTHIOS_REQUEST_QUICK_BALL
# 433 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PythiosTown_EventScript_Athlete_4
# 443 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Athlete_Text_3
# 444 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 446 "data/maps/PythiosTown/scripts.pory"
	checkitem ITEM_QUICK_BALL, 3
# 447 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 449 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PythiosTown_EventScript_Athlete_7
# 457 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Athlete_Text_0
# 458 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Athlete_Text_5
# 459 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 460 "data/maps/PythiosTown/scripts.pory"
	removeitem ITEM_QUICK_BALL, 3
# 461 "data/maps/PythiosTown/scripts.pory"
	giveitem ITEM_ULTRA_BALL, 3
# 462 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 464 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 465 "data/maps/PythiosTown/scripts.pory"
	completequest QUEST_PYTHIOS_REQUEST_QUICK_BALL
	return

PythiosTown_EventScript_Athlete_2:
# 425 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Athlete_Text_1
# 426 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 427 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScript_Athlete_4:
# 435 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Athlete_Text_2
# 436 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 438 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 439 "data/maps/PythiosTown/scripts.pory"
	startquest QUEST_PYTHIOS_REQUEST_QUICK_BALL
	return

PythiosTown_EventScript_Athlete_7:
# 451 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Athlete_Text_0
# 452 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Athlete_Text_4
# 453 "data/maps/PythiosTown/scripts.pory"
	closemessage
	return


PythiosTown_EventScripts_PIRAEUS::
# 472 "data/maps/PythiosTown/scripts.pory"
	lock
# 473 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 474 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_MET_PIRAEUS_PYTHIOS_TOWN, PythiosTown_EventScripts_PIRAEUS_2
# 483 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_MET_PIRAEUS_PYTHIOS_TOWN, PythiosTown_EventScripts_PIRAEUS_10
PythiosTown_EventScripts_PIRAEUS_8:
# 518 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_GOT_BADGE_FOR_PIRAEUS, PythiosTown_EventScripts_PIRAEUS_7
PythiosTown_EventScripts_PIRAEUS_6:
# 526 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_HELPED_PIRAEUS_PYTHIOS_TOWN, PythiosTown_EventScripts_PIRAEUS_5
PythiosTown_EventScripts_PIRAEUS_1:
# 530 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_PIRAEUS_2:
# 476 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_0
# 477 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_1
# 478 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 479 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_MET_PIRAEUS_PYTHIOS_TOWN
# 480 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_PIRAEUS_3:
# 485 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_0
# 486 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_2
# 487 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 488 "data/maps/PythiosTown/scripts.pory"
	delay 60
# 489 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, PythiosTown_EventScripts_PIRAEUS_14
# 499 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_0
# 500 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_4
# 501 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 502 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_GOT_BADGE_FOR_PIRAEUS
# 503 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 504 "data/maps/PythiosTown/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 505 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 506 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 507 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_5
# 508 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_6
# 509 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 511 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 512 "data/maps/PythiosTown/scripts.pory"
	startquest QUEST_HELP_PIRAEUS
# 514 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_PIRAEUS_4:
# 520 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_5
# 521 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_7
# 522 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 523 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_PIRAEUS_5:
# 528 "data/maps/PythiosTown/scripts.pory"
	goto Common_EventScript_Piraeus
	goto PythiosTown_EventScripts_PIRAEUS_1

PythiosTown_EventScripts_PIRAEUS_7:
# 518 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_HELPED_PIRAEUS_PYTHIOS_TOWN, PythiosTown_EventScripts_PIRAEUS_4
	goto PythiosTown_EventScripts_PIRAEUS_6

PythiosTown_EventScripts_PIRAEUS_10:
# 483 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_GOT_BADGE_FOR_PIRAEUS, PythiosTown_EventScripts_PIRAEUS_3
	goto PythiosTown_EventScripts_PIRAEUS_8

PythiosTown_EventScripts_PIRAEUS_14:
# 491 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_0
# 492 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_3
# 493 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 494 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_DirectionSign_Text_0:
# 30 "data/maps/PythiosTown/scripts.pory"
	.string "Pythios Town\n"
	.string "Where the Future can be Seen\p"
	.string "{UP_ARROW} Wanderers' Woods\n"
	.string "Erinys Path - West {RIGHT_ARROW}\n"
	.string "{LEFT_ARROW} Pythios Cemetery$"

PythiosTown_Sign_GymSign_Text_0:
# 39 "data/maps/PythiosTown/scripts.pory"
	.string "Gym Leader: Sabella\n"
	.string "The Oracle of Ilios$"

PythiosTown_EventScripts_NPC_Gentleman_Text_0:
# 49 "data/maps/PythiosTown/scripts.pory"
	.string "Gentleman$"

PythiosTown_EventScripts_NPC_Gentleman_Text_1:
# 50 "data/maps/PythiosTown/scripts.pory"
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
# 55 "data/maps/PythiosTown/scripts.pory"
	.string "Thanks for listening to me ramble. Here,\n"
	.string "take this {COLOR GREEN}TM Will-O-Wisp{COLOR DARK_GRAY}. It feels like\l"
	.string "it's connected to this strange town.$"

PythiosTown_EventScripts_NPC_Woman_Text_0:
# 68 "data/maps/PythiosTown/scripts.pory"
	.string "Woman$"

PythiosTown_EventScripts_NPC_Woman_Text_1:
# 69 "data/maps/PythiosTown/scripts.pory"
	.string "Ruins dot the areas around Pythios\n"
	.string "Town. I grew up exploring them!\p"
	.string "The Ilios Region has a rich history\n"
	.string "stretching back thousands of years.\l"
	.string "Keep an eye out for hidden lore and\l"
	.string "items!$"

PythiosTown_EventScripts_NPC_OldWoman_Text_0:
# 79 "data/maps/PythiosTown/scripts.pory"
	.string "Old Woman$"

PythiosTown_EventScripts_NPC_OldWoman_Text_1:
# 80 "data/maps/PythiosTown/scripts.pory"
	.string "People come from all over to hear from\n"
	.string "Sabella, the Gym Leader and spiritual\l"
	.string "guide of Pythios Town.\p"
	.string "Me? I moved here with my husband to\n"
	.string "watch the water and feel the energy.$"

PythiosTown_EventScripts_NPC_OldMan_Text_0:
# 92 "data/maps/PythiosTown/scripts.pory"
	.string "Old Man$"

PythiosTown_EventScripts_NPC_OldMan_Text_1:
# 93 "data/maps/PythiosTown/scripts.pory"
	.string "The graves around Pythios Town are for\n"
	.string "old heroes of the Ilios Region. Them and\l"
	.string "their Pokémon helped win wars and\l"
	.string "fought in great battles.\p"
	.string "Nowadays, people prefer Pokémon\n"
	.string "battling for entertainment. That's\l"
	.string "probably for the best.$"

PythiosTown_EventScripts_NPC_Artist_Text_0:
# 106 "data/maps/PythiosTown/scripts.pory"
	.string "Artist$"

PythiosTown_EventScripts_NPC_Artist_Text_1:
# 107 "data/maps/PythiosTown/scripts.pory"
	.string "A stoic man staring off to the\n"
	.string "distance...\p"
	.string "Think of the story this statue tells...\n"
	.string "A hero, lost to time...\p"
	.string "I need inspiration, a modern hero!$"

PythiosTown_EventScripts_NPC_Artist_Text_2:
# 115 "data/maps/PythiosTown/scripts.pory"
	.string "Oh? And you, are you a young trainer? A\n"
	.string "new hero in-the-making?\p"
	.string "I see a Pokédex on you. Speak to me\n"
	.string "when you have {COLOR GREEN}20 Pokémon{COLOR DARK_GRAY} registered in\l"
	.string "your Pokédex. If you can give me\l"
	.string "inspiration, I can {COLOR GREEN}help your Pokémon{COLOR DARK_GRAY}!$"

PythiosTown_EventScripts_NPC_Artist_Text_3:
# 124 "data/maps/PythiosTown/scripts.pory"
	.string "Chaire, my young hero! I wonder, will we\n"
	.string "make statues of you someday?\p"
	.string "Have you completed my task? Let me see\n"
	.string "your Pokédex.$"

PythiosTown_EventScripts_NPC_Artist_Text_4:
# 135 "data/maps/PythiosTown/scripts.pory"
	.string "You've caught and recorded data on\n"
	.string "{STR_VAR_2} Pokémon.$"

PythiosTown_EventScripts_NPC_Artist_Text_5:
# 146 "data/maps/PythiosTown/scripts.pory"
	.string "Oh, visions of Pokémon and beauty flow\n"
	.string "through me! Be still, my beating heart!\p"
	.string "Calm me, sweet statue...$"

PythiosTown_EventScripts_NPC_Artist_Text_6:
# 152 "data/maps/PythiosTown/scripts.pory"
	.string "Splendid! Fantastic! You've shown me\n"
	.string "more than I ever could have hoped!\p"
	.string "Please, young hero, allow me to help you.\n"
	.string "I can draw move directions, which can\l"
	.string "help {COLOR GREEN}Pokémon relearn old moves{COLOR DARK_GRAY}. Come\l"
	.string "visit me whenever you need!$"

PythiosTown_EventScripts_NPC_Artist_Text_7:
# 159 "data/maps/PythiosTown/scripts.pory"
	.string "Mmm... I'm just not quite inspired. Show\n"
	.string "me {COLOR GREEN}20 complete Pokédex entries{COLOR DARK_GRAY} of\l"
	.string "caught Pokémon. I must see more of\l"
	.string "Ilios!$"

PythiosTown_EventScripts_NPC_Artist_Text_8:
# 168 "data/maps/PythiosTown/scripts.pory"
	.string "Chaire, young hero! Are you here for\n"
	.string "move drawings? They can help Pokémon\l"
	.string "{COLOR GREEN}relearn old moves{COLOR DARK_GRAY}!$"

PythiosTown_EventScripts_NPC_Artist_Text_9:
# 172 "data/maps/PythiosTown/scripts.pory"
	.string "Understood. I'll stay here and practice\n"
	.string "my art with this incredible statue.\l"
	.string "Andio, goodbye!$"

PythiosTown_EventScripts_NPC_Artist_Text_10:
# 182 "data/maps/PythiosTown/scripts.pory"
	.string "Not today? That's okay, it's your\n"
	.string "journey! Come back when you want a\l"
	.string "Pokémon to remember a move.$"

PythiosTown_EventScripts_NPC_Artist_Text_11:
# 193 "data/maps/PythiosTown/scripts.pory"
	.string "Ah, ever the hero, rushing right into\n"
	.string "things! I'm sorry, but I cannot teach an\l"
	.string "Egg to do anything more than sit there.\l"
	.string "Let me know when it hatches though,\l"
	.string "perhaps I can draw moves for it as it\l"
	.string "grows older!$"

PythiosTown_EventScripts_NPC_Artist_Text_12:
# 203 "data/maps/PythiosTown/scripts.pory"
	.string "Hmm... ehehe, this is a little\n"
	.string "embarrassing, young hero... but I don't\l"
	.string "have anything to teach this Pokémon!\l"
	.string "It doesn't respond to any of my move\l"
	.string "drawings.\p"
	.string "Come back with another Pokémon! Andio,\n"
	.string "goodbye, hero!$"

PythiosTown_EventScripts_NPC_Artist_Text_13:
# 211 "data/maps/PythiosTown/scripts.pory"
	.string "Splendid! Now, what move should this\n"
	.string "Pokémon learn?$"

PythiosTown_EventScripts_NPC_Artist_Text_14:
# 227 "data/maps/PythiosTown/scripts.pory"
	.string "It was a complete success! Your\n"
	.string "Pokémon recognized my drawings and\l"
	.string "relearned the move.\p"
	.string "Come back when you want another move\n"
	.string "relearned, my young hero!$"

PythiosTown_EventScripts_NPC_Woman2_Text_0:
# 244 "data/maps/PythiosTown/scripts.pory"
	.string "It's nice living in a small place like\n"
	.string "this. Areas like Sofos City and the\l"
	.string "islands in the eastern sea are too busy\l"
	.string "for me.\p"
	.string "Of course, places like that have more to\n"
	.string "do... Ugh, now I can't decide which is\l"
	.string "better!$"

PythiosTown_EventScript_Hoothoot_Text_0:
# 254 "data/maps/PythiosTown/scripts.pory"
	.string "Hoothoot$"

PythiosTown_EventScript_Hoothoot_Text_1:
# 256 "data/maps/PythiosTown/scripts.pory"
	.string "Craaww!$"

PythiosTown_EventScript_Drowzee_Text_0:
# 267 "data/maps/PythiosTown/scripts.pory"
	.string "Drowzee$"

PythiosTown_EventScript_Drowzee_Text_1:
# 269 "data/maps/PythiosTown/scripts.pory"
	.string "Hoooonk!$"

PythiosTown_EventScript_Dwebble_Text_0:
# 280 "data/maps/PythiosTown/scripts.pory"
	.string "Dwebble$"

PythiosTown_EventScript_Dwebble_Text_1:
# 282 "data/maps/PythiosTown/scripts.pory"
	.string "Chk chk chk.$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_0:
# 299 "data/maps/PythiosTown/scripts.pory"
	.string "Mystical Woman$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_1:
# 300 "data/maps/PythiosTown/scripts.pory"
	.string "YES!! Sabella said I'm guarenteed to win\n"
	.string "my next Pokémon battle! She's never\l"
	.string "wrong!$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_2:
# 318 "data/maps/PythiosTown/scripts.pory"
	.string "Worker$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_3:
# 319 "data/maps/PythiosTown/scripts.pory"
	.string "Sabella just read my future! She told me\n"
	.string "'a big shake-up at work is coming'...\l"
	.string "that probably means a raise!\p"
	.string "...Probably!$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_4:
# 328 "data/maps/PythiosTown/scripts.pory"
	.string "Sabella$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_5:
# 329 "data/maps/PythiosTown/scripts.pory"
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
# 383 "data/maps/PythiosTown/scripts.pory"
	.string "Everyone seems to believe in Sabella\n"
	.string "and her visions. I'm not so sure, but my\l"
	.string "wife comes around to talk to her all the\l"
	.string "time. I'm waiting for her here.$"

PythiosTown_EventScripts_NPC_PsychicM_Text_0:
# 395 "data/maps/PythiosTown/scripts.pory"
	.string "Psychic$"

PythiosTown_EventScripts_NPC_PsychicM_Text_1:
# 396 "data/maps/PythiosTown/scripts.pory"
	.string "I promise, Sabella's powers are real! She\n"
	.string "has the same powers as her\l"
	.string "Psychic-type and Ghost-type Pokémon!$"

PythiosTown_EventScripts_NPC_ManBlockingGym_Text_0:
# 408 "data/maps/PythiosTown/scripts.pory"
	.string "Gym Guide$"

PythiosTown_EventScripts_NPC_ManBlockingGym_Text_1:
# 409 "data/maps/PythiosTown/scripts.pory"
	.string "Welcome to the Pythios Town Pokémon\n"
	.string "Gym!\p"
	.string "Well... that's what I would say, if the\n"
	.string "{COLOR GREEN}Gym Leader, Sabella{COLOR DARK_GRAY}, was here. She's\l"
	.string "probably meeting with people in the\l"
	.string "{COLOR GREEN}east of town{COLOR DARK_GRAY}.$"

PythiosTown_EventScript_Athlete_Text_0:
# 419 "data/maps/PythiosTown/scripts.pory"
	.string "Athlete$"

PythiosTown_EventScript_Athlete_Text_1:
# 425 "data/maps/PythiosTown/scripts.pory"
	.string "Thanks to those Quick Balls, I'll be able\n"
	.string "to catch Pokémon while I run!$"

PythiosTown_EventScript_Athlete_Text_2:
# 435 "data/maps/PythiosTown/scripts.pory"
	.string "I'm not having any luck catching\n"
	.string "Pokémon on my daily runs. I only have\l"
	.string "time to throw a single Poké ball, but\l"
	.string "they never stay in!\p"
	.string "{COLOR GREEN}Quick Balls{COLOR DARK_GRAY} would be perfect for me! If\n"
	.string "you could bring me {COLOR GREEN}3 Quick Balls{COLOR DARK_GRAY}, that\l"
	.string "would be great!$"

PythiosTown_EventScript_Athlete_Text_3:
# 443 "data/maps/PythiosTown/scripts.pory"
	.string "Did you bring me those {COLOR GREEN}3 Quick Balls{COLOR DARK_GRAY}?$"

PythiosTown_EventScript_Athlete_Text_4:
# 452 "data/maps/PythiosTown/scripts.pory"
	.string "Doesn't look like it, that's a shame.\p"
	.string "Let me know if you have {COLOR GREEN}3 Quick Balls{COLOR DARK_GRAY}. I\n"
	.string "want to catch Pokémon faster while I\l"
	.string "run!$"

PythiosTown_EventScript_Athlete_Text_5:
# 458 "data/maps/PythiosTown/scripts.pory"
	.string "Oh, great! I'll take those... thanks!\p"
	.string "Hm? Ah, right, I'll give you a little\n"
	.string "something. These are some of the Ultra\l"
	.string "Balls I was trying to use before. Maybe\l"
	.string "they'll work for you!$"

PythiosTown_EventScripts_PIRAEUS_Text_0:
# 476 "data/maps/PythiosTown/scripts.pory"
	.string "Strange Sailor$"

PythiosTown_EventScripts_PIRAEUS_Text_1:
# 477 "data/maps/PythiosTown/scripts.pory"
	.string "Chaire! Hey! I need a strong Trainer to\n"
	.string "help me out of a bind.\p"
	.string "Come to me when you have the {COLOR GREEN}Pythios\n"
	.string "Town Gym Badge{COLOR DARK_GRAY}... please!$"

PythiosTown_EventScripts_PIRAEUS_Text_2:
# 486 "data/maps/PythiosTown/scripts.pory"
	.string "Thanks for coming back, I thought you\n"
	.string "might've left for good! Lemme check\l"
	.string "your {COLOR GREEN}Badges{COLOR DARK_GRAY}...$"

PythiosTown_EventScripts_PIRAEUS_Text_3:
# 492 "data/maps/PythiosTown/scripts.pory"
	.string "Nope, only 2 Gym Badges. That might not\n"
	.string "be enough.\p"
	.string "Come back when you have the {COLOR GREEN}Pythios\n"
	.string "Town Gym Badge{COLOR DARK_GRAY}, I need to make sure\l"
	.string "you're a strong Trainer.$"

PythiosTown_EventScripts_PIRAEUS_Text_4:
# 500 "data/maps/PythiosTown/scripts.pory"
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
# 507 "data/maps/PythiosTown/scripts.pory"
	.string "Piraeus$"

PythiosTown_EventScripts_PIRAEUS_Text_6:
# 508 "data/maps/PythiosTown/scripts.pory"
	.string "Oh, and tell 'em {COLOR GREEN}Piraeus{COLOR DARK_GRAY} sent you!\n"
	.string "Piraeus the Strong! No, Piraeus the\l"
	.string "Wise... maybe even Piraeus the Great!\l"
	.string "Fwahaha!$"

PythiosTown_EventScripts_PIRAEUS_Text_7:
# 521 "data/maps/PythiosTown/scripts.pory"
	.string "The Team Chimera Admin is {COLOR GREEN}east of\n"
	.string "Pythios Town{COLOR DARK_GRAY}, last I saw. Let me know\l"
	.string "when you've taken care of them!$"

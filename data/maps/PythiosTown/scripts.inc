PythiosTown_MapScripts::
# 2 "data/maps/PythiosTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_VISITED_PYTHIOS_TOWN
# 5 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 11 "data/maps/PythiosTown/scripts.pory"
	random 3
# 12 "data/maps/PythiosTown/scripts.pory"
	switch VAR_RESULT
# 13 "data/maps/PythiosTown/scripts.pory"
	case 0, PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 14 "data/maps/PythiosTown/scripts.pory"
	case 1, PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 15 "data/maps/PythiosTown/scripts.pory"
	case 2, PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 19 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 20 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 21 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 22 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 23 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 24 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 25 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 26 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 27 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 28 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 29 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 30 "data/maps/PythiosTown/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 31 "data/maps/PythiosTown/scripts.pory"
	setobjectaswildencounter 19, ENCOUNTER_LAND
	return

PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/PythiosTown/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 13 "data/maps/PythiosTown/scripts.pory"
	setweather WEATHER_NONE
	goto PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 14 "data/maps/PythiosTown/scripts.pory"
	setweather WEATHER_NONE
	goto PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 15 "data/maps/PythiosTown/scripts.pory"
	setweather WEATHER_RAIN
	goto PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


PythiosTown_EventScript_DirectionSign::
# 37 "data/maps/PythiosTown/scripts.pory"
	lock
# 38 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_DirectionSign_Text_0
# 39 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 40 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_Sign_GymSign::
# 46 "data/maps/PythiosTown/scripts.pory"
	lock
# 47 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_Sign_GymSign_Text_0
# 48 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 49 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_Gentleman::
# 55 "data/maps/PythiosTown/scripts.pory"
	lock
# 56 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 57 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Gentleman_Text_0
# 58 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Gentleman_Text_1
# 59 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 60 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_GOT_WILL_O_WISP, PythiosTown_EventScripts_NPC_Gentleman_2
PythiosTown_EventScripts_NPC_Gentleman_1:
# 68 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Gentleman_2:
# 62 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Gentleman_Text_0
# 63 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Gentleman_Text_2
# 64 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 65 "data/maps/PythiosTown/scripts.pory"
	giveitem ITEM_TM51
# 66 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_GOT_WILL_O_WISP
	goto PythiosTown_EventScripts_NPC_Gentleman_1


PythiosTown_EventScripts_NPC_Woman::
# 74 "data/maps/PythiosTown/scripts.pory"
	lock
# 75 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 76 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Woman_Text_0
# 77 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Woman_Text_1
# 78 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 79 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_OldWoman::
# 85 "data/maps/PythiosTown/scripts.pory"
	lock
# 86 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 87 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_OldWoman_Text_0
# 88 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_OldWoman_Text_1
# 89 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 90 "data/maps/PythiosTown/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 91 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 92 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_OldMan::
# 98 "data/maps/PythiosTown/scripts.pory"
	lock
# 99 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 100 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_OldMan_Text_0
# 101 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_OldMan_Text_1
# 102 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 103 "data/maps/PythiosTown/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 104 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 105 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_Artist::
# 111 "data/maps/PythiosTown/scripts.pory"
	lock
# 112 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_MOVE_RELEARNER, PythiosTown_EventScripts_NPC_Artist_2
# 127 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_UNLOCKED_MOVE_RELEARNER, PythiosTown_EventScripts_NPC_Artist_3
# 173 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FacePlayer
# 174 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 175 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 176 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_8, MSGBOX_YESNO
# 177 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_10
# 185 "data/maps/PythiosTown/scripts.pory"
	special ChooseMonForMoveRelearner
# 186 "data/maps/PythiosTown/scripts.pory"
	waitstate
# 187 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_14
# 197 "data/maps/PythiosTown/scripts.pory"
	special IsSelectedMonEgg
# 198 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_17
# 208 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_20
# 218 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 219 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_13
# 220 "data/maps/PythiosTown/scripts.pory"
	special TeachMoveRelearnerMove
# 221 "data/maps/PythiosTown/scripts.pory"
	waitstate
# 222 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_22
# 234 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 235 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_14
# 236 "data/maps/PythiosTown/scripts.pory"
	closemessage
PythiosTown_EventScripts_NPC_Artist_1:
# 241 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 242 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 243 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_2:
# 114 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 115 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_1
# 116 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 117 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 118 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 119 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 120 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FacePlayer
# 121 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 122 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 123 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_2
# 124 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 125 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_SPOKE_TO_MOVE_RELEARNER
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_3:
# 129 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FacePlayer
# 130 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 131 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 132 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_3
# 133 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 135 "data/maps/PythiosTown/scripts.pory"
	setvar VAR_0x8004, 0
# 136 "data/maps/PythiosTown/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 137 "data/maps/PythiosTown/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 138 "data/maps/PythiosTown/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 139 "data/maps/PythiosTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 140 "data/maps/PythiosTown/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 141 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 142 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 143 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_4
# 144 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 145 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 147 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8009, 20
	goto_if_ge PythiosTown_EventScripts_NPC_Artist_7
# 166 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 167 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_7
# 168 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_7:
# 149 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 150 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 151 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_JumpInPlaceRight
# 152 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 153 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 154 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_5
# 155 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 156 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 157 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FacePlayer
# 158 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 159 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 160 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_6
# 161 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 162 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_UNLOCKED_MOVE_RELEARNER
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_10:
# 179 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 180 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_9
# 181 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_14:
# 189 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 190 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_10
# 191 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 192 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 193 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 194 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_17:
# 200 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 201 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_11
# 202 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 203 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 204 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 205 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_20:
# 210 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 211 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_12
# 212 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 213 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 214 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 215 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_22:
# 224 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 225 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_10
# 226 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 227 "data/maps/PythiosTown/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 228 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 229 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_Woman2::
# 249 "data/maps/PythiosTown/scripts.pory"
	lock
# 250 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 251 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Woman_Text_0
# 252 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Woman2_Text_0
# 253 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 254 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Hoothoot::
# 260 "data/maps/PythiosTown/scripts.pory"
	lock
# 261 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 262 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Hoothoot_Text_0
# 263 "data/maps/PythiosTown/scripts.pory"
	playmoncry SPECIES_HOOTHOOT, CRY_MODE_NORMAL
# 264 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Hoothoot_Text_1
# 265 "data/maps/PythiosTown/scripts.pory"
	waitmoncry
# 266 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 267 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Drowzee::
# 273 "data/maps/PythiosTown/scripts.pory"
	lock
# 274 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 275 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Drowzee_Text_0
# 276 "data/maps/PythiosTown/scripts.pory"
	playmoncry SPECIES_DROWZEE, CRY_MODE_NORMAL
# 277 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Drowzee_Text_1
# 278 "data/maps/PythiosTown/scripts.pory"
	waitmoncry
# 279 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 280 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Dwebble::
# 286 "data/maps/PythiosTown/scripts.pory"
	lock
# 287 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 288 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Dwebble_Text_0
# 289 "data/maps/PythiosTown/scripts.pory"
	playmoncry SPECIES_DWEBBLE, CRY_MODE_NORMAL
# 290 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Dwebble_Text_1
# 291 "data/maps/PythiosTown/scripts.pory"
	waitmoncry
# 292 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 293 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Trigger_KleioIntroductionEvent::
# 299 "data/maps/PythiosTown/scripts.pory"
	lockall
# 300 "data/maps/PythiosTown/scripts.pory"
	applymovement 13, Common_Movement_ExclamationMark
# 301 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 302 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 303 "data/maps/PythiosTown/scripts.pory"
	applymovement 13, PythiosTown_Movement_FirstKleioFanWalksToPlayer
# 304 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 305 "data/maps/PythiosTown/scripts.pory"
	applymovement 14, Common_Movement_WalkUp
# 306 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 307 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Trigger_KleioIntroductionEvent_Text_0
# 308 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Trigger_KleioIntroductionEvent_Text_1
# 309 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 310 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 311 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 312 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 313 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 314 "data/maps/PythiosTown/scripts.pory"
	applymovement 13, PythiosTown_Movement_FirstKleioFanWalksAway
# 315 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 316 "data/maps/PythiosTown/scripts.pory"
	delay 60
# 318 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PythiosTown_Movement_PlayerApproachesLine
# 319 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 320 "data/maps/PythiosTown/scripts.pory"
	delay 60
# 321 "data/maps/PythiosTown/scripts.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 322 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 323 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 324 "data/maps/PythiosTown/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 325 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 326 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Trigger_KleioIntroductionEvent_Text_2
# 327 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Trigger_KleioIntroductionEvent_Text_3
# 328 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 329 "data/maps/PythiosTown/scripts.pory"
	applymovement 14, PythiosTown_Movement_SecondKleioFanWalksAway
# 330 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 331 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 332 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 333 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 336 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Trigger_KleioIntroductionEvent_Text_4
# 337 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Trigger_KleioIntroductionEvent_Text_5
# 338 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 340 "data/maps/PythiosTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 341 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 342 "data/maps/PythiosTown/scripts.pory"
	removeobject 13
# 343 "data/maps/PythiosTown/scripts.pory"
	removeobject 14
# 344 "data/maps/PythiosTown/scripts.pory"
	removeobject 3
# 345 "data/maps/PythiosTown/scripts.pory"
	removeobject 15
# 346 "data/maps/PythiosTown/scripts.pory"
	removeobject 16
# 347 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_MET_KLEIO_PYTHIOS_TOWN
# 348 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 349 "data/maps/PythiosTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 350 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 352 "data/maps/PythiosTown/scripts.pory"
	releaseall
	end


# 356 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_FirstKleioFanWalksToPlayer:
# 358 "data/maps/PythiosTown/scripts.pory"
	walk_fast_left
# 359 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 359 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 360 "data/maps/PythiosTown/scripts.pory"
	step_end

# 363 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_FirstKleioFanWalksAway:
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
	walk_fast_right
# 366 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 366 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 366 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 366 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 366 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 366 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 366 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 367 "data/maps/PythiosTown/scripts.pory"
	step_end

# 370 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_PlayerApproachesLine:
# 372 "data/maps/PythiosTown/scripts.pory"
	walk_right
# 373 "data/maps/PythiosTown/scripts.pory"
	walk_up
# 373 "data/maps/PythiosTown/scripts.pory"
	walk_up
# 374 "data/maps/PythiosTown/scripts.pory"
	walk_right
# 375 "data/maps/PythiosTown/scripts.pory"
	face_up
# 376 "data/maps/PythiosTown/scripts.pory"
	step_end

# 379 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_SecondKleioFanWalksAway:
# 381 "data/maps/PythiosTown/scripts.pory"
	walk_fast_left
# 382 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 382 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 382 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 382 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 382 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 382 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 382 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 382 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 382 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 383 "data/maps/PythiosTown/scripts.pory"
	step_end

PythiosTown_EventScripts_NPC_OldMan2::
# 388 "data/maps/PythiosTown/scripts.pory"
	lock
# 389 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 390 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_OldMan_Text_0
# 391 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_OldMan2_Text_0
# 392 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 393 "data/maps/PythiosTown/scripts.pory"
	applymovement 11, Common_Movement_FaceLeft
# 394 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 395 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_PsychicM::
# 401 "data/maps/PythiosTown/scripts.pory"
	lock
# 402 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 403 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_PsychicM_Text_0
# 404 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_PsychicM_Text_1
# 405 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 406 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 407 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 408 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_ManBlockingGym::
# 414 "data/maps/PythiosTown/scripts.pory"
	lock
# 415 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 416 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_ManBlockingGym_Text_0
# 417 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_ManBlockingGym_Text_1
# 418 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 419 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Athlete::
# 425 "data/maps/PythiosTown/scripts.pory"
	lock
# 426 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 427 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Athlete_Text_0
# 430 "data/maps/PythiosTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_PYTHIOS_REQUEST_QUICK_BALL
# 431 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PythiosTown_EventScript_Athlete_2
# 440 "data/maps/PythiosTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_PYTHIOS_REQUEST_QUICK_BALL
# 441 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PythiosTown_EventScript_Athlete_4
# 451 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Athlete_Text_3
# 452 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 454 "data/maps/PythiosTown/scripts.pory"
	checkitem ITEM_QUICK_BALL, 3
# 455 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 457 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PythiosTown_EventScript_Athlete_7
# 465 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Athlete_Text_0
# 466 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Athlete_Text_5
# 467 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 468 "data/maps/PythiosTown/scripts.pory"
	removeitem ITEM_QUICK_BALL, 3
# 469 "data/maps/PythiosTown/scripts.pory"
	giveitem ITEM_ULTRA_BALL, 3
# 470 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 472 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 473 "data/maps/PythiosTown/scripts.pory"
	completequest QUEST_PYTHIOS_REQUEST_QUICK_BALL
	return

PythiosTown_EventScript_Athlete_2:
# 433 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Athlete_Text_1
# 434 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 435 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScript_Athlete_4:
# 443 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Athlete_Text_2
# 444 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 446 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 447 "data/maps/PythiosTown/scripts.pory"
	startquest QUEST_PYTHIOS_REQUEST_QUICK_BALL
	return

PythiosTown_EventScript_Athlete_7:
# 459 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Athlete_Text_0
# 460 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Athlete_Text_4
# 461 "data/maps/PythiosTown/scripts.pory"
	closemessage
	return


PythiosTown_EventScripts_PIRAEUS::
# 480 "data/maps/PythiosTown/scripts.pory"
	lock
# 481 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 482 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_MET_PIRAEUS_PYTHIOS_TOWN, PythiosTown_EventScripts_PIRAEUS_2
# 491 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_MET_PIRAEUS_PYTHIOS_TOWN, PythiosTown_EventScripts_PIRAEUS_10
PythiosTown_EventScripts_PIRAEUS_8:
# 526 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_GOT_BADGE_FOR_PIRAEUS, PythiosTown_EventScripts_PIRAEUS_7
PythiosTown_EventScripts_PIRAEUS_6:
# 534 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_HELPED_PIRAEUS_PYTHIOS_TOWN, PythiosTown_EventScripts_PIRAEUS_5
PythiosTown_EventScripts_PIRAEUS_1:
# 538 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_PIRAEUS_2:
# 484 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_0
# 485 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_1
# 486 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 487 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_MET_PIRAEUS_PYTHIOS_TOWN
# 488 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_PIRAEUS_3:
# 493 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_0
# 494 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_2
# 495 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 496 "data/maps/PythiosTown/scripts.pory"
	delay 60
# 497 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, PythiosTown_EventScripts_PIRAEUS_14
# 507 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_0
# 508 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_4
# 509 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 510 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_GOT_BADGE_FOR_PIRAEUS
# 511 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 512 "data/maps/PythiosTown/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 513 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 514 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 515 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_5
# 516 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_6
# 517 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 519 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 520 "data/maps/PythiosTown/scripts.pory"
	startquest QUEST_HELP_PIRAEUS
# 522 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_PIRAEUS_4:
# 528 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_5
# 529 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_7
# 530 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 531 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_PIRAEUS_5:
# 536 "data/maps/PythiosTown/scripts.pory"
	goto Common_EventScript_Piraeus
	goto PythiosTown_EventScripts_PIRAEUS_1

PythiosTown_EventScripts_PIRAEUS_7:
# 526 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_HELPED_PIRAEUS_PYTHIOS_TOWN, PythiosTown_EventScripts_PIRAEUS_4
	goto PythiosTown_EventScripts_PIRAEUS_6

PythiosTown_EventScripts_PIRAEUS_10:
# 491 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_GOT_BADGE_FOR_PIRAEUS, PythiosTown_EventScripts_PIRAEUS_3
	goto PythiosTown_EventScripts_PIRAEUS_8

PythiosTown_EventScripts_PIRAEUS_14:
# 499 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_PIRAEUS_Text_0
# 500 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_PIRAEUS_Text_3
# 501 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 502 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Ariados::
# 544 "data/maps/PythiosTown/scripts.pory"
	lock
# 545 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 546 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Ariados_Text_0
# 547 "data/maps/PythiosTown/scripts.pory"
	playmoncry SPECIES_ARIADOS, CRY_MODE_NORMAL
# 548 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Ariados_Text_1
# 549 "data/maps/PythiosTown/scripts.pory"
	waitmoncry
# 550 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 551 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_TraditionalOutfitSeamstress::
# 557 "data/maps/PythiosTown/scripts.pory"
	lock
# 558 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 559 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_TraditionalOutfitSeamstress_Text_0
# 560 "data/maps/PythiosTown/scripts.pory"
	checkoutfitflag OUTFIT_TRADITIONAL
# 562 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PythiosTown_EventScript_TraditionalOutfitSeamstress_2
# 612 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_TraditionalOutfitSeamstress_Text_7
# 613 "data/maps/PythiosTown/scripts.pory"
	closemessage
PythiosTown_EventScript_TraditionalOutfitSeamstress_1:
# 615 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScript_TraditionalOutfitSeamstress_2:
# 564 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_TraditionalOutfitSeamstress_Text_1
# 565 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 566 "data/maps/PythiosTown/scripts.pory"
	delay 5
# 567 "data/maps/PythiosTown/scripts.pory"
	showmoneybox 0, 0
# 568 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_TraditionalOutfitSeamstress_Text_0
# 569 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_TraditionalOutfitSeamstress_Text_2, MSGBOX_YESNO
# 570 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 571 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PythiosTown_EventScript_TraditionalOutfitSeamstress_5
# 583 "data/maps/PythiosTown/scripts.pory"
	checkmoney 9800
# 584 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PythiosTown_EventScript_TraditionalOutfitSeamstress_8
# 595 "data/maps/PythiosTown/scripts.pory"
	removemoney 9800
# 596 "data/maps/PythiosTown/scripts.pory"
	updatemoneybox
# 597 "data/maps/PythiosTown/scripts.pory"
	delay 5
# 598 "data/maps/PythiosTown/scripts.pory"
	unlockoutfit OUTFIT_TRADITIONAL
# 599 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_TraditionalOutfitSeamstress_Text_5
# 600 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 601 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 602 "data/maps/PythiosTown/scripts.pory"
	hidemoneybox
# 603 "data/maps/PythiosTown/scripts.pory"
	delay 5
# 604 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_TraditionalOutfitSeamstress_Text_0
# 605 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_TraditionalOutfitSeamstress_Text_6
# 606 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScript_TraditionalOutfitSeamstress_1

PythiosTown_EventScript_TraditionalOutfitSeamstress_5:
# 573 "data/maps/PythiosTown/scripts.pory"
	hidemoneybox
# 574 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_TraditionalOutfitSeamstress_Text_0
# 575 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_TraditionalOutfitSeamstress_Text_3
# 576 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 577 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScript_TraditionalOutfitSeamstress_8:
# 586 "data/maps/PythiosTown/scripts.pory"
	hidemoneybox
# 587 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_TraditionalOutfitSeamstress_Text_0
# 588 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_TraditionalOutfitSeamstress_Text_4
# 589 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 590 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_DirectionSign_Text_0:
# 38 "data/maps/PythiosTown/scripts.pory"
	.string "Pythios Town\n"
	.string "Where the Future can be Seen\p"
	.string "{UP_ARROW} Wanderers' Woods\n"
	.string "Erinys Path - West {RIGHT_ARROW}\n"
	.string "{LEFT_ARROW} Pythios Cemetery$"

PythiosTown_Sign_GymSign_Text_0:
# 47 "data/maps/PythiosTown/scripts.pory"
	.string "Gym Leader: Kleio\n"
	.string "The Muse of Past, Present, and Future$"

PythiosTown_EventScripts_NPC_Gentleman_Text_0:
# 57 "data/maps/PythiosTown/scripts.pory"
	.string "Gentleman$"

PythiosTown_EventScripts_NPC_Gentleman_Text_1:
# 58 "data/maps/PythiosTown/scripts.pory"
	.string "Pythios Town is famous for the\n"
	.string "concentration of spiritual energy here.\l"
	.string "It attracts Ghost-type and\l"
	.string "Psychic-type Pokémon.\p"
	.string "Folktales say that the spirits have\n"
	.string "turned the plants orange, putting the\l"
	.string "area into a permanent Autumn.\p"
	.string "People flock from all over to hear Kleio,\n"
	.string "the Gym Leader, predict the future.\l"
	.string "Some say she has a magic gift...$"

PythiosTown_EventScripts_NPC_Gentleman_Text_2:
# 63 "data/maps/PythiosTown/scripts.pory"
	.string "Thanks for listening to me ramble. Here,\n"
	.string "take this {COLOR GREEN}TM Will-O-Wisp{COLOR DARK_GRAY}. It feels like\l"
	.string "it's connected to this strange town.$"

PythiosTown_EventScripts_NPC_Woman_Text_0:
# 76 "data/maps/PythiosTown/scripts.pory"
	.string "Woman$"

PythiosTown_EventScripts_NPC_Woman_Text_1:
# 77 "data/maps/PythiosTown/scripts.pory"
	.string "Ruins dot the areas around Pythios\n"
	.string "Town. I grew up exploring them!\p"
	.string "The Ilios Region has a rich history\n"
	.string "stretching back thousands of years.\l"
	.string "Keep an eye out for hidden lore and\l"
	.string "items!$"

PythiosTown_EventScripts_NPC_OldWoman_Text_0:
# 87 "data/maps/PythiosTown/scripts.pory"
	.string "Old Woman$"

PythiosTown_EventScripts_NPC_OldWoman_Text_1:
# 88 "data/maps/PythiosTown/scripts.pory"
	.string "People come from all over to hear from\n"
	.string "Kleio, the Gym Leader and spiritual\l"
	.string "guide of Pythios Town.\p"
	.string "Me? I moved here with my husband to\n"
	.string "watch the water and feel the energy.$"

PythiosTown_EventScripts_NPC_OldMan_Text_0:
# 100 "data/maps/PythiosTown/scripts.pory"
	.string "Old Man$"

PythiosTown_EventScripts_NPC_OldMan_Text_1:
# 101 "data/maps/PythiosTown/scripts.pory"
	.string "The graves around Pythios Town are for\n"
	.string "old heroes of the Ilios Region. Them and\l"
	.string "their Pokémon helped win wars and\l"
	.string "fought in great battles.\p"
	.string "Nowadays, people prefer Pokémon\n"
	.string "battling for entertainment. That's\l"
	.string "probably for the best.$"

PythiosTown_EventScripts_NPC_Artist_Text_0:
# 114 "data/maps/PythiosTown/scripts.pory"
	.string "Artist$"

PythiosTown_EventScripts_NPC_Artist_Text_1:
# 115 "data/maps/PythiosTown/scripts.pory"
	.string "A stoic man staring off to the\n"
	.string "distance...\p"
	.string "Think of the story this statue tells...\n"
	.string "A hero, lost to time...\p"
	.string "I need inspiration, a modern hero!$"

PythiosTown_EventScripts_NPC_Artist_Text_2:
# 123 "data/maps/PythiosTown/scripts.pory"
	.string "Oh? And you, are you a young trainer? A\n"
	.string "new hero in-the-making?\p"
	.string "I see a Pokédex on you. Speak to me\n"
	.string "when you have {COLOR GREEN}20 Pokémon{COLOR DARK_GRAY} registered in\l"
	.string "your Pokédex. If you can give me\l"
	.string "inspiration, I can {COLOR GREEN}help your Pokémon{COLOR DARK_GRAY}!$"

PythiosTown_EventScripts_NPC_Artist_Text_3:
# 132 "data/maps/PythiosTown/scripts.pory"
	.string "Chaire, my young hero! I wonder, will we\n"
	.string "make statues of you someday?\p"
	.string "Have you completed my task? Let me see\n"
	.string "your Pokédex.$"

PythiosTown_EventScripts_NPC_Artist_Text_4:
# 143 "data/maps/PythiosTown/scripts.pory"
	.string "You've caught and recorded data on\n"
	.string "{STR_VAR_2} Pokémon.$"

PythiosTown_EventScripts_NPC_Artist_Text_5:
# 154 "data/maps/PythiosTown/scripts.pory"
	.string "Oh, visions of Pokémon and beauty flow\n"
	.string "through me! Be still, my beating heart!\p"
	.string "Calm me, sweet statue...$"

PythiosTown_EventScripts_NPC_Artist_Text_6:
# 160 "data/maps/PythiosTown/scripts.pory"
	.string "Splendid! Fantastic! You've shown me\n"
	.string "more than I ever could have hoped!\p"
	.string "Please, young hero, allow me to help you.\n"
	.string "I can draw move directions, which can\l"
	.string "help {COLOR GREEN}Pokémon relearn old moves{COLOR DARK_GRAY}. Come\l"
	.string "visit me whenever you need!$"

PythiosTown_EventScripts_NPC_Artist_Text_7:
# 167 "data/maps/PythiosTown/scripts.pory"
	.string "Mmm... I'm just not quite inspired. Show\n"
	.string "me {COLOR GREEN}20 complete Pokédex entries{COLOR DARK_GRAY} of\l"
	.string "caught Pokémon. I must see more of\l"
	.string "Ilios!$"

PythiosTown_EventScripts_NPC_Artist_Text_8:
# 176 "data/maps/PythiosTown/scripts.pory"
	.string "Chaire, young hero! Are you here for\n"
	.string "move drawings? They can help Pokémon\l"
	.string "{COLOR GREEN}relearn old moves{COLOR DARK_GRAY}!$"

PythiosTown_EventScripts_NPC_Artist_Text_9:
# 180 "data/maps/PythiosTown/scripts.pory"
	.string "Understood. I'll stay here and practice\n"
	.string "my art with this incredible statue.\l"
	.string "Andio, goodbye!$"

PythiosTown_EventScripts_NPC_Artist_Text_10:
# 190 "data/maps/PythiosTown/scripts.pory"
	.string "Not today? That's okay, it's your\n"
	.string "journey! Come back when you want a\l"
	.string "Pokémon to remember a move.$"

PythiosTown_EventScripts_NPC_Artist_Text_11:
# 201 "data/maps/PythiosTown/scripts.pory"
	.string "Ah, ever the hero, rushing right into\n"
	.string "things! I'm sorry, but I cannot teach an\l"
	.string "Egg to do anything more than sit there.\l"
	.string "Let me know when it hatches though,\l"
	.string "perhaps I can draw moves for it as it\l"
	.string "grows older!$"

PythiosTown_EventScripts_NPC_Artist_Text_12:
# 211 "data/maps/PythiosTown/scripts.pory"
	.string "Hmm... ehehe, this is a little\n"
	.string "embarrassing, young hero... but I don't\l"
	.string "have anything to teach this Pokémon!\l"
	.string "It doesn't respond to any of my move\l"
	.string "drawings.\p"
	.string "Come back with another Pokémon! Andio,\n"
	.string "goodbye, hero!$"

PythiosTown_EventScripts_NPC_Artist_Text_13:
# 219 "data/maps/PythiosTown/scripts.pory"
	.string "Splendid! Now, what move should this\n"
	.string "Pokémon learn?$"

PythiosTown_EventScripts_NPC_Artist_Text_14:
# 235 "data/maps/PythiosTown/scripts.pory"
	.string "It was a complete success! Your\n"
	.string "Pokémon recognized my drawings and\l"
	.string "relearned the move.\p"
	.string "Come back when you want another move\n"
	.string "relearned, my young hero!$"

PythiosTown_EventScripts_NPC_Woman2_Text_0:
# 252 "data/maps/PythiosTown/scripts.pory"
	.string "It's nice living in a small place like\n"
	.string "this. Areas like Sofos City and the\l"
	.string "islands in the eastern sea are too busy\l"
	.string "for me.\p"
	.string "Of course, places like that have more to\n"
	.string "do... Ugh, now I can't decide which is\l"
	.string "better!$"

PythiosTown_EventScript_Hoothoot_Text_0:
# 262 "data/maps/PythiosTown/scripts.pory"
	.string "Hoothoot$"

PythiosTown_EventScript_Hoothoot_Text_1:
# 264 "data/maps/PythiosTown/scripts.pory"
	.string "Craaww!$"

PythiosTown_EventScript_Drowzee_Text_0:
# 275 "data/maps/PythiosTown/scripts.pory"
	.string "Drowzee$"

PythiosTown_EventScript_Drowzee_Text_1:
# 277 "data/maps/PythiosTown/scripts.pory"
	.string "Hoooonk!$"

PythiosTown_EventScript_Dwebble_Text_0:
# 288 "data/maps/PythiosTown/scripts.pory"
	.string "Dwebble$"

PythiosTown_EventScript_Dwebble_Text_1:
# 290 "data/maps/PythiosTown/scripts.pory"
	.string "Chk chk chk.$"

PythiosTown_EventScript_Trigger_KleioIntroductionEvent_Text_0:
# 307 "data/maps/PythiosTown/scripts.pory"
	.string "Mystical Woman$"

PythiosTown_EventScript_Trigger_KleioIntroductionEvent_Text_1:
# 308 "data/maps/PythiosTown/scripts.pory"
	.string "YES!! Kleio said I'm guarenteed to win\n"
	.string "my next Pokémon battle! She's never\l"
	.string "wrong!$"

PythiosTown_EventScript_Trigger_KleioIntroductionEvent_Text_2:
# 326 "data/maps/PythiosTown/scripts.pory"
	.string "Worker$"

PythiosTown_EventScript_Trigger_KleioIntroductionEvent_Text_3:
# 327 "data/maps/PythiosTown/scripts.pory"
	.string "Kleio just read my future! She told me 'a\n"
	.string "big shake-up at work is coming'... that\l"
	.string "probably means a raise!\p"
	.string "...Probably!$"

PythiosTown_EventScript_Trigger_KleioIntroductionEvent_Text_4:
# 336 "data/maps/PythiosTown/scripts.pory"
	.string "Kleio$"

PythiosTown_EventScript_Trigger_KleioIntroductionEvent_Text_5:
# 337 "data/maps/PythiosTown/scripts.pory"
	.string "Ah... {PLAYER}, yes?\p"
	.string "How do I know your name? I know much\n"
	.string "and more, young trainer. My name is\l"
	.string "Kleio, the Muse of History and {COLOR GREEN}Gym\l"
	.string "Leader of Pythios Town{COLOR DARK_GRAY}.\p"
	.string "You're here for your third Gym\n"
	.string "Challenge. I sense a great battle on\l"
	.string "the horizon... I shall be {COLOR GREEN}in my Gym{COLOR DARK_GRAY}. I\l"
	.string "await your challenge.$"

PythiosTown_EventScripts_NPC_OldMan2_Text_0:
# 391 "data/maps/PythiosTown/scripts.pory"
	.string "Everyone seems to believe in Kleio and\n"
	.string "her visions. I'm not so sure, but my wife\l"
	.string "comes around to talk to her all the\l"
	.string "time. I'm waiting for her here.$"

PythiosTown_EventScripts_NPC_PsychicM_Text_0:
# 403 "data/maps/PythiosTown/scripts.pory"
	.string "Psychic$"

PythiosTown_EventScripts_NPC_PsychicM_Text_1:
# 404 "data/maps/PythiosTown/scripts.pory"
	.string "I promise, Kleio's powers are real! She\n"
	.string "has the same powers as her\l"
	.string "Psychic-type and Ghost-type Pokémon!$"

PythiosTown_EventScripts_NPC_ManBlockingGym_Text_0:
# 416 "data/maps/PythiosTown/scripts.pory"
	.string "Gym Guide$"

PythiosTown_EventScripts_NPC_ManBlockingGym_Text_1:
# 417 "data/maps/PythiosTown/scripts.pory"
	.string "Welcome to the Pythios Town Pokémon\n"
	.string "Gym!\p"
	.string "Well... that's what I would say, if the\n"
	.string "{COLOR GREEN}Gym Leader, Kleio{COLOR DARK_GRAY}, was here. She's\l"
	.string "probably meeting with people in the\l"
	.string "{COLOR GREEN}east of town{COLOR DARK_GRAY}.$"

PythiosTown_EventScript_Athlete_Text_0:
# 427 "data/maps/PythiosTown/scripts.pory"
	.string "Athlete$"

PythiosTown_EventScript_Athlete_Text_1:
# 433 "data/maps/PythiosTown/scripts.pory"
	.string "Thanks to those Quick Balls, I'll be able\n"
	.string "to catch Pokémon while I run!$"

PythiosTown_EventScript_Athlete_Text_2:
# 443 "data/maps/PythiosTown/scripts.pory"
	.string "I'm not having any luck catching\n"
	.string "Pokémon on my daily runs. I only have\l"
	.string "time to throw a single Poké ball, but\l"
	.string "they never stay in!\p"
	.string "{COLOR GREEN}Quick Balls{COLOR DARK_GRAY} would be perfect for me! If\n"
	.string "you could bring me {COLOR GREEN}3 Quick Balls{COLOR DARK_GRAY}, that\l"
	.string "would be great!$"

PythiosTown_EventScript_Athlete_Text_3:
# 451 "data/maps/PythiosTown/scripts.pory"
	.string "Did you bring me those {COLOR GREEN}3 Quick Balls{COLOR DARK_GRAY}?$"

PythiosTown_EventScript_Athlete_Text_4:
# 460 "data/maps/PythiosTown/scripts.pory"
	.string "Doesn't look like it, that's a shame.\p"
	.string "Let me know if you have {COLOR GREEN}3 Quick Balls{COLOR DARK_GRAY}. I\n"
	.string "want to catch Pokémon faster while I\l"
	.string "run!$"

PythiosTown_EventScript_Athlete_Text_5:
# 466 "data/maps/PythiosTown/scripts.pory"
	.string "Oh, great! I'll take those... thanks!\p"
	.string "Hm? Ah, right, I'll give you a little\n"
	.string "something. These are some of the Ultra\l"
	.string "Balls I was trying to use before. Maybe\l"
	.string "they'll work for you!$"

PythiosTown_EventScripts_PIRAEUS_Text_0:
# 484 "data/maps/PythiosTown/scripts.pory"
	.string "Strange Sailor$"

PythiosTown_EventScripts_PIRAEUS_Text_1:
# 485 "data/maps/PythiosTown/scripts.pory"
	.string "Chaire! Hey! I need a strong Trainer to\n"
	.string "help me out of a bind.\p"
	.string "Come to me when you have the {COLOR GREEN}Pythios\n"
	.string "Town Gym Badge{COLOR DARK_GRAY}... please!$"

PythiosTown_EventScripts_PIRAEUS_Text_2:
# 494 "data/maps/PythiosTown/scripts.pory"
	.string "Thanks for coming back, I thought you\n"
	.string "might've left for good! Lemme check\l"
	.string "your {COLOR GREEN}Badges{COLOR DARK_GRAY}...$"

PythiosTown_EventScripts_PIRAEUS_Text_3:
# 500 "data/maps/PythiosTown/scripts.pory"
	.string "Nope, only 2 Gym Badges. That might not\n"
	.string "be enough.\p"
	.string "Come back when you have the {COLOR GREEN}Pythios\n"
	.string "Town Gym Badge{COLOR DARK_GRAY}, I need to make sure\l"
	.string "you're a strong Trainer.$"

PythiosTown_EventScripts_PIRAEUS_Text_4:
# 508 "data/maps/PythiosTown/scripts.pory"
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
# 515 "data/maps/PythiosTown/scripts.pory"
	.string "Piraeus$"

PythiosTown_EventScripts_PIRAEUS_Text_6:
# 516 "data/maps/PythiosTown/scripts.pory"
	.string "Oh, and tell 'em {COLOR GREEN}Piraeus{COLOR DARK_GRAY} sent you!\n"
	.string "Piraeus the Strong! No, Piraeus the\l"
	.string "Wise... maybe even Piraeus the Great!\l"
	.string "Fwahaha!$"

PythiosTown_EventScripts_PIRAEUS_Text_7:
# 529 "data/maps/PythiosTown/scripts.pory"
	.string "The Team Chimera Admin is {COLOR GREEN}east of\n"
	.string "Pythios Town{COLOR DARK_GRAY}, last I saw. Let me know\l"
	.string "when you've taken care of them!$"

PythiosTown_EventScript_Ariados_Text_0:
# 546 "data/maps/PythiosTown/scripts.pory"
	.string "Ariados$"

PythiosTown_EventScript_Ariados_Text_1:
# 548 "data/maps/PythiosTown/scripts.pory"
	.string "Ktch ktch ktch!$"

PythiosTown_EventScript_TraditionalOutfitSeamstress_Text_0:
# 559 "data/maps/PythiosTown/scripts.pory"
	.string "Seamstress$"

PythiosTown_EventScript_TraditionalOutfitSeamstress_Text_1:
# 564 "data/maps/PythiosTown/scripts.pory"
	.string "My Ariados can spin beautiful webs,\n"
	.string "helping me sew clothes.$"

PythiosTown_EventScript_TraditionalOutfitSeamstress_Text_2:
# 569 "data/maps/PythiosTown/scripts.pory"
	.string "I just finished a new Outfit, and it\n"
	.string "looks like your size. I'll give you this\l"
	.string "{COLOR GREEN}Traditional Outfit{COLOR DARK_GRAY} for just ¥9800. How\l"
	.string "about it?$"

PythiosTown_EventScript_TraditionalOutfitSeamstress_Text_3:
# 575 "data/maps/PythiosTown/scripts.pory"
	.string "No? Kids these days have no\n"
	.string "appreciation for traditional clothes!$"

PythiosTown_EventScript_TraditionalOutfitSeamstress_Text_4:
# 588 "data/maps/PythiosTown/scripts.pory"
	.string "Come back with a bit more money.$"

PythiosTown_EventScript_TraditionalOutfitSeamstress_Text_5:
# 599 "data/maps/PythiosTown/scripts.pory"
	.string "The Traditional Outfit has been added\n"
	.string "to the Outfit Box!$"

PythiosTown_EventScript_TraditionalOutfitSeamstress_Text_6:
# 605 "data/maps/PythiosTown/scripts.pory"
	.string "Thank you, child! The Traditional Outfit\n"
	.string "is in the style of clothes worn during\l"
	.string "the Medieval Age.$"

PythiosTown_EventScript_TraditionalOutfitSeamstress_Text_7:
# 612 "data/maps/PythiosTown/scripts.pory"
	.string "The Traditional Outfit I created is a\n"
	.string "replica of old Ilian clothing. It was\l"
	.string "common during the Medieval Age, but\l"
	.string "plenty of folks still wear these\l"
	.string "clothes today!$"

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
	case 0, PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 7 "data/maps/PythiosTown/scripts.pory"
	case 1, PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 8 "data/maps/PythiosTown/scripts.pory"
	case 2, PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/PythiosTown/scripts.pory"
	setweather WEATHER_NONE
	return

PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 7 "data/maps/PythiosTown/scripts.pory"
	setweather WEATHER_NONE
	return

PythiosTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 8 "data/maps/PythiosTown/scripts.pory"
	setweather WEATHER_RAIN
	return


PythiosTown_EventScripts_NPC_Gentleman::
# 15 "data/maps/PythiosTown/scripts.pory"
	lock
# 16 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 17 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Gentleman_Text_0
# 18 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Gentleman_Text_1
# 19 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 20 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_GOT_WILL_O_WISP, PythiosTown_EventScripts_NPC_Gentleman_2
PythiosTown_EventScripts_NPC_Gentleman_1:
# 28 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Gentleman_2:
# 22 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Gentleman_Text_0
# 23 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Gentleman_Text_2
# 24 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 25 "data/maps/PythiosTown/scripts.pory"
	giveitem ITEM_TM51
# 26 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_GOT_WILL_O_WISP
	goto PythiosTown_EventScripts_NPC_Gentleman_1


PythiosTown_EventScripts_NPC_Woman::
# 34 "data/maps/PythiosTown/scripts.pory"
	lock
# 35 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 36 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Woman_Text_0
# 37 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Woman_Text_1
# 38 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 39 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_OldWoman::
# 45 "data/maps/PythiosTown/scripts.pory"
	lock
# 46 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 47 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_OldWoman_Text_0
# 48 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_OldWoman_Text_1
# 49 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 50 "data/maps/PythiosTown/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 51 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 52 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_OldMan::
# 58 "data/maps/PythiosTown/scripts.pory"
	lock
# 59 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 60 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_OldMan_Text_0
# 61 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_OldMan_Text_1
# 62 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 63 "data/maps/PythiosTown/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 64 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 65 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_Artist::
# 71 "data/maps/PythiosTown/scripts.pory"
	lock
# 72 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_MOVE_RELEARNER, PythiosTown_EventScripts_NPC_Artist_2
# 87 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_UNLOCKED_MOVE_RELEARNER, PythiosTown_EventScripts_NPC_Artist_3
# 133 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FacePlayer
# 134 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 135 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 136 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_8, MSGBOX_YESNO
# 137 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_10
# 145 "data/maps/PythiosTown/scripts.pory"
	special ChooseMonForMoveRelearner
# 146 "data/maps/PythiosTown/scripts.pory"
	waitstate
# 147 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_14
# 157 "data/maps/PythiosTown/scripts.pory"
	special IsSelectedMonEgg
# 158 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_17
# 168 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_20
# 178 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 179 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_13
# 180 "data/maps/PythiosTown/scripts.pory"
	special TeachMoveRelearnerMove
# 181 "data/maps/PythiosTown/scripts.pory"
	waitstate
# 182 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_22
# 194 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 195 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_14
# 196 "data/maps/PythiosTown/scripts.pory"
	closemessage
PythiosTown_EventScripts_NPC_Artist_1:
# 201 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 202 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 203 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_2:
# 74 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 75 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_1
# 76 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 77 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 78 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 79 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 80 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FacePlayer
# 81 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 82 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 83 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_2
# 84 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 85 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_SPOKE_TO_MOVE_RELEARNER
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_3:
# 89 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FacePlayer
# 90 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 91 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 92 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_3
# 93 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 95 "data/maps/PythiosTown/scripts.pory"
	setvar VAR_0x8004, 0
# 96 "data/maps/PythiosTown/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 97 "data/maps/PythiosTown/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 98 "data/maps/PythiosTown/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 99 "data/maps/PythiosTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 100 "data/maps/PythiosTown/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 101 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 102 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 103 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_4
# 104 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 105 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 107 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8009, 20
	goto_if_ge PythiosTown_EventScripts_NPC_Artist_7
# 126 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 127 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_7
# 128 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_7:
# 109 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 110 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 111 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_JumpInPlaceRight
# 112 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 113 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 114 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_5
# 115 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 116 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 117 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FacePlayer
# 118 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 119 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 120 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_6
# 121 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 122 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_UNLOCKED_MOVE_RELEARNER
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_10:
# 139 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 140 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_9
# 141 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_14:
# 149 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 150 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_10
# 151 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 152 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 153 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 154 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_17:
# 160 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 161 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_11
# 162 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 163 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 164 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 165 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_20:
# 170 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 171 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_12
# 172 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 173 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 174 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 175 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_22:
# 184 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 185 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_10
# 186 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 187 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 188 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 189 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_Woman2::
# 209 "data/maps/PythiosTown/scripts.pory"
	lock
# 210 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 211 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Woman_Text_0
# 212 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Woman2_Text_0
# 213 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 214 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Hoothoot::
# 220 "data/maps/PythiosTown/scripts.pory"
	lock
# 221 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 222 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Hoothoot_Text_0
# 223 "data/maps/PythiosTown/scripts.pory"
	playmoncry SPECIES_HOOTHOOT, CRY_MODE_NORMAL
# 224 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Hoothoot_Text_1
# 225 "data/maps/PythiosTown/scripts.pory"
	waitmoncry
# 226 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 227 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Drowzee::
# 233 "data/maps/PythiosTown/scripts.pory"
	lock
# 234 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 235 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Drowzee_Text_0
# 236 "data/maps/PythiosTown/scripts.pory"
	playmoncry SPECIES_DROWZEE, CRY_MODE_NORMAL
# 237 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Drowzee_Text_1
# 238 "data/maps/PythiosTown/scripts.pory"
	waitmoncry
# 239 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 240 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Dwebble::
# 246 "data/maps/PythiosTown/scripts.pory"
	lock
# 247 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 248 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Dwebble_Text_0
# 249 "data/maps/PythiosTown/scripts.pory"
	playmoncry SPECIES_DWEBBLE, CRY_MODE_NORMAL
# 250 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Dwebble_Text_1
# 251 "data/maps/PythiosTown/scripts.pory"
	waitmoncry
# 252 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 253 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Trigger_SabellaIntroductionEvent::
# 259 "data/maps/PythiosTown/scripts.pory"
	lockall
# 260 "data/maps/PythiosTown/scripts.pory"
	applymovement 15, Common_Movement_ExclamationMark
# 261 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 262 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 263 "data/maps/PythiosTown/scripts.pory"
	applymovement 15, PythiosTown_Movement_FirstSabellaFanWalksToPlayer
# 264 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 265 "data/maps/PythiosTown/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 266 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 267 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_0
# 268 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_1
# 269 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 270 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 271 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 272 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 273 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 274 "data/maps/PythiosTown/scripts.pory"
	applymovement 15, PythiosTown_Movement_FirstSabellaFanWalksAway
# 275 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 276 "data/maps/PythiosTown/scripts.pory"
	delay 60
# 278 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PythiosTown_Movement_PlayerApproachesLine
# 279 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 280 "data/maps/PythiosTown/scripts.pory"
	delay 60
# 281 "data/maps/PythiosTown/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 282 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 283 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 284 "data/maps/PythiosTown/scripts.pory"
	applymovement 16, Common_Movement_FaceDown
# 285 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 286 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_2
# 287 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_3
# 288 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 289 "data/maps/PythiosTown/scripts.pory"
	applymovement 16, PythiosTown_Movement_SecondSabellaFanWalksAway
# 290 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 291 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 292 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 293 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 296 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_4
# 297 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_5
# 298 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 300 "data/maps/PythiosTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 301 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 302 "data/maps/PythiosTown/scripts.pory"
	removeobject 15
# 303 "data/maps/PythiosTown/scripts.pory"
	removeobject 16
# 304 "data/maps/PythiosTown/scripts.pory"
	removeobject 3
# 305 "data/maps/PythiosTown/scripts.pory"
	removeobject 17
# 306 "data/maps/PythiosTown/scripts.pory"
	removeobject 19
# 307 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_MET_SABELLA_PYTHIOS_TOWN
# 308 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 309 "data/maps/PythiosTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 310 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 312 "data/maps/PythiosTown/scripts.pory"
	releaseall
	end


# 316 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_FirstSabellaFanWalksToPlayer:
# 318 "data/maps/PythiosTown/scripts.pory"
	walk_fast_left
# 319 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 319 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 320 "data/maps/PythiosTown/scripts.pory"
	step_end

# 323 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_FirstSabellaFanWalksAway:
# 325 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 325 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 325 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 325 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 325 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 325 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 326 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 326 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 326 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 326 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 326 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 326 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 326 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 326 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 327 "data/maps/PythiosTown/scripts.pory"
	step_end

# 330 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_PlayerApproachesLine:
# 332 "data/maps/PythiosTown/scripts.pory"
	walk_right
# 333 "data/maps/PythiosTown/scripts.pory"
	walk_up
# 333 "data/maps/PythiosTown/scripts.pory"
	walk_up
# 334 "data/maps/PythiosTown/scripts.pory"
	walk_right
# 335 "data/maps/PythiosTown/scripts.pory"
	face_up
# 336 "data/maps/PythiosTown/scripts.pory"
	step_end

# 339 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_SecondSabellaFanWalksAway:
# 341 "data/maps/PythiosTown/scripts.pory"
	walk_fast_left
# 342 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 342 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 342 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 342 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 342 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 342 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 342 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 342 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 342 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 343 "data/maps/PythiosTown/scripts.pory"
	step_end

PythiosTown_EventScripts_NPC_OldMan2::
# 348 "data/maps/PythiosTown/scripts.pory"
	lock
# 349 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 350 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_OldMan_Text_0
# 351 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_OldMan2_Text_0
# 352 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 353 "data/maps/PythiosTown/scripts.pory"
	applymovement 13, Common_Movement_FaceLeft
# 354 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 355 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_PsychicM::
# 361 "data/maps/PythiosTown/scripts.pory"
	lock
# 362 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 363 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_PsychicM_Text_0
# 364 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_PsychicM_Text_1
# 365 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 366 "data/maps/PythiosTown/scripts.pory"
	applymovement 14, Common_Movement_FaceRight
# 367 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 368 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_ManBlockingGym::
# 374 "data/maps/PythiosTown/scripts.pory"
	lock
# 375 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 376 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_ManBlockingGym_Text_0
# 377 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_ManBlockingGym_Text_1
# 378 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 379 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_Bardas::
# 385 "data/maps/PythiosTown/scripts.pory"
	lock
# 386 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 387 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_MET_BARDAS_PYTHIOS_TOWN, PythiosTown_EventScripts_Bardas_2
# 396 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_MET_BARDAS_PYTHIOS_TOWN, PythiosTown_EventScripts_Bardas_10
PythiosTown_EventScripts_Bardas_8:
# 427 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_GOT_BADGE_FOR_BARDAS, PythiosTown_EventScripts_Bardas_7
PythiosTown_EventScripts_Bardas_6:
# 435 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_HELPED_BARDAS_PYTHIOS_TOWN, PythiosTown_EventScripts_Bardas_5
PythiosTown_EventScripts_Bardas_1:
# 538 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_Bardas_2:
# 389 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_Bardas_Text_0
# 390 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_Bardas_Text_1
# 391 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 392 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_MET_BARDAS_PYTHIOS_TOWN
# 393 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_Bardas_3:
# 398 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_Bardas_Text_0
# 399 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_Bardas_Text_2
# 400 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 401 "data/maps/PythiosTown/scripts.pory"
	delay 60
# 402 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, PythiosTown_EventScripts_Bardas_14
# 412 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_Bardas_Text_0
# 413 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_Bardas_Text_4
# 414 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 415 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_GOT_BADGE_FOR_BARDAS
# 416 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 417 "data/maps/PythiosTown/scripts.pory"
	applymovement 20, Common_Movement_ExclamationMark
# 418 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 419 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 420 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_Bardas_Text_5
# 421 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_Bardas_Text_6
# 422 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 423 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_Bardas_4:
# 429 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_Bardas_Text_5
# 430 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_Bardas_Text_7
# 431 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 432 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_Bardas_5:
# 437 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_Bardas_Text_5
# 438 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_Bardas_Text_8
# 441 "data/maps/PythiosTown/scripts.pory"
	dynmultipush PythiosTown_EventScripts_Bardas_Text_9, 0
# 442 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_VISITED_PYTHIOS_TOWN, PythiosTown_EventScripts_Bardas_18
PythiosTown_EventScripts_Bardas_17:
# 445 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_VISITED_SOFOS_CITY, PythiosTown_EventScripts_Bardas_21
PythiosTown_EventScripts_Bardas_20:
# 448 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_VISITED_MARMARO_ISLAND, PythiosTown_EventScripts_Bardas_24
PythiosTown_EventScripts_Bardas_23:
# 451 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_VISITED_MYRRINI_ISLAND, PythiosTown_EventScripts_Bardas_27
PythiosTown_EventScripts_Bardas_26:
# 454 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_VISITED_FRESCO_ISLAND, PythiosTown_EventScripts_Bardas_30
PythiosTown_EventScripts_Bardas_29:
# 457 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_VISITED_PALATI_CITY, PythiosTown_EventScripts_Bardas_33
PythiosTown_EventScripts_Bardas_32:
# 460 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_VISITED_PORT_PELLO, PythiosTown_EventScripts_Bardas_36
PythiosTown_EventScripts_Bardas_35:
# 463 "data/maps/PythiosTown/scripts.pory"
	dynmultistack 100, 0, TRUE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 466 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PythiosTown_EventScripts_Bardas_38
# 485 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PythiosTown_EventScripts_Bardas_46
# 492 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PythiosTown_EventScripts_Bardas_47
# 499 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PythiosTown_EventScripts_Bardas_48
# 506 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PythiosTown_EventScripts_Bardas_49
# 513 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq PythiosTown_EventScripts_Bardas_50
# 520 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq PythiosTown_EventScripts_Bardas_51
# 527 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq PythiosTown_EventScripts_Bardas_52
PythiosTown_EventScripts_Bardas_45:
# 534 "data/maps/PythiosTown/scripts.pory"
	warp MAP_THE_DELPHIS, 9, 3
# 535 "data/maps/PythiosTown/scripts.pory"
	waitstate
	goto PythiosTown_EventScripts_Bardas_1

PythiosTown_EventScripts_Bardas_7:
# 427 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_HELPED_BARDAS_PYTHIOS_TOWN, PythiosTown_EventScripts_Bardas_4
	goto PythiosTown_EventScripts_Bardas_6

PythiosTown_EventScripts_Bardas_10:
# 396 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_GOT_BADGE_FOR_BARDAS, PythiosTown_EventScripts_Bardas_3
	goto PythiosTown_EventScripts_Bardas_8

PythiosTown_EventScripts_Bardas_14:
# 404 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_Bardas_Text_0
# 405 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_Bardas_Text_3
# 406 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 407 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_Bardas_18:
# 443 "data/maps/PythiosTown/scripts.pory"
	dynmultipush PythiosTown_EventScripts_Bardas_Text_10, 1
	goto PythiosTown_EventScripts_Bardas_17

PythiosTown_EventScripts_Bardas_21:
# 446 "data/maps/PythiosTown/scripts.pory"
	dynmultipush PythiosTown_EventScripts_Bardas_Text_11, 2
	goto PythiosTown_EventScripts_Bardas_20

PythiosTown_EventScripts_Bardas_24:
# 449 "data/maps/PythiosTown/scripts.pory"
	dynmultipush PythiosTown_EventScripts_Bardas_Text_12, 3
	goto PythiosTown_EventScripts_Bardas_23

PythiosTown_EventScripts_Bardas_27:
# 452 "data/maps/PythiosTown/scripts.pory"
	dynmultipush PythiosTown_EventScripts_Bardas_Text_13, 4
	goto PythiosTown_EventScripts_Bardas_26

PythiosTown_EventScripts_Bardas_30:
# 455 "data/maps/PythiosTown/scripts.pory"
	dynmultipush PythiosTown_EventScripts_Bardas_Text_14, 5
	goto PythiosTown_EventScripts_Bardas_29

PythiosTown_EventScripts_Bardas_33:
# 458 "data/maps/PythiosTown/scripts.pory"
	dynmultipush PythiosTown_EventScripts_Bardas_Text_15, 6
	goto PythiosTown_EventScripts_Bardas_32

PythiosTown_EventScripts_Bardas_36:
# 461 "data/maps/PythiosTown/scripts.pory"
	dynmultipush PythiosTown_EventScripts_Bardas_Text_16, 7
	goto PythiosTown_EventScripts_Bardas_35

PythiosTown_EventScripts_Bardas_38:
# 468 "data/maps/PythiosTown/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 0
# 469 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_Bardas_Text_5
# 470 "data/maps/PythiosTown/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PythiosTown_EventScripts_Bardas_42
# 477 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_Bardas_Text_18
# 478 "data/maps/PythiosTown/scripts.pory"
	closemessage
PythiosTown_EventScripts_Bardas_41:
# 480 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_Bardas_42:
# 472 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_Bardas_Text_17
# 473 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_Bardas_41

PythiosTown_EventScripts_Bardas_46:
# 487 "data/maps/PythiosTown/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 1
# 488 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_Bardas_Text_5
# 489 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_Bardas_Text_19
# 490 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_Bardas_45

PythiosTown_EventScripts_Bardas_47:
# 494 "data/maps/PythiosTown/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 2
# 495 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_Bardas_Text_5
# 496 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_Bardas_Text_20
# 497 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_Bardas_45

PythiosTown_EventScripts_Bardas_48:
# 501 "data/maps/PythiosTown/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 3
# 502 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_Bardas_Text_5
# 503 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_Bardas_Text_21
# 504 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_Bardas_45

PythiosTown_EventScripts_Bardas_49:
# 508 "data/maps/PythiosTown/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 4
# 509 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_Bardas_Text_5
# 510 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_Bardas_Text_22
# 511 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_Bardas_45

PythiosTown_EventScripts_Bardas_50:
# 515 "data/maps/PythiosTown/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 5
# 516 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_Bardas_Text_5
# 517 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_Bardas_Text_23
# 518 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_Bardas_45

PythiosTown_EventScripts_Bardas_51:
# 522 "data/maps/PythiosTown/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 6
# 523 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_Bardas_Text_5
# 524 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_Bardas_Text_24
# 525 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_Bardas_45

PythiosTown_EventScripts_Bardas_52:
# 529 "data/maps/PythiosTown/scripts.pory"
	setvar VAR_CHOSEN_SAIL_LOCATION, 7
# 530 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_Bardas_Text_5
# 531 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_Bardas_Text_25
# 532 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_Bardas_45


PythiosTown_EventScripts_NPC_Gentleman_Text_0:
# 17 "data/maps/PythiosTown/scripts.pory"
	.string "Gentleman$"

PythiosTown_EventScripts_NPC_Gentleman_Text_1:
# 18 "data/maps/PythiosTown/scripts.pory"
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
# 23 "data/maps/PythiosTown/scripts.pory"
	.string "Thanks for listening to me ramble. Here,\n"
	.string "take this {COLOR GREEN}TM Will-O-Wisp{COLOR DARK_GRAY}. It feels like\l"
	.string "it's connected to this strange town.$"

PythiosTown_EventScripts_NPC_Woman_Text_0:
# 36 "data/maps/PythiosTown/scripts.pory"
	.string "Woman$"

PythiosTown_EventScripts_NPC_Woman_Text_1:
# 37 "data/maps/PythiosTown/scripts.pory"
	.string "Ruins dot the areas around Pythios\n"
	.string "Town. I grew up exploring them!\p"
	.string "The Ilios Region has a rich history\n"
	.string "stretching back thousands of years.\l"
	.string "Keep an eye out for hidden lore and\l"
	.string "items!$"

PythiosTown_EventScripts_NPC_OldWoman_Text_0:
# 47 "data/maps/PythiosTown/scripts.pory"
	.string "Old Woman$"

PythiosTown_EventScripts_NPC_OldWoman_Text_1:
# 48 "data/maps/PythiosTown/scripts.pory"
	.string "People come from all over to hear from\n"
	.string "Sabella, the Gym Leader and spiritual\l"
	.string "guide of Pythios Town.\p"
	.string "Me? I moved here with my husband to\n"
	.string "watch the water and feel the energy.$"

PythiosTown_EventScripts_NPC_OldMan_Text_0:
# 60 "data/maps/PythiosTown/scripts.pory"
	.string "Old Man$"

PythiosTown_EventScripts_NPC_OldMan_Text_1:
# 61 "data/maps/PythiosTown/scripts.pory"
	.string "The graves around Pythios Town are for\n"
	.string "old heroes of the Ilios Region. Them and\l"
	.string "their Pokémon helped win wars and\l"
	.string "fought in great battles.\p"
	.string "Nowadays, people prefer Pokémon\n"
	.string "battling for entertainment. That's\l"
	.string "probably for the best.$"

PythiosTown_EventScripts_NPC_Artist_Text_0:
# 74 "data/maps/PythiosTown/scripts.pory"
	.string "Artist$"

PythiosTown_EventScripts_NPC_Artist_Text_1:
# 75 "data/maps/PythiosTown/scripts.pory"
	.string "A stoic man staring off to the\n"
	.string "distance...\p"
	.string "Think of the story this statue tells...\n"
	.string "A hero, lost to time...\p"
	.string "I need inspiration, a modern hero!$"

PythiosTown_EventScripts_NPC_Artist_Text_2:
# 83 "data/maps/PythiosTown/scripts.pory"
	.string "Oh? And you, are you a young trainer? A\n"
	.string "new hero in-the-making?\p"
	.string "I see a Pokédex on you. Speak to me\n"
	.string "when you have {COLOR GREEN}20 Pokémon{COLOR DARK_GRAY} registered in\l"
	.string "your Pokédex. If you can give me\l"
	.string "inspiration, I can {COLOR GREEN}help your Pokémon{COLOR DARK_GRAY}!$"

PythiosTown_EventScripts_NPC_Artist_Text_3:
# 92 "data/maps/PythiosTown/scripts.pory"
	.string "Chaire, my young hero! I wonder, will we\n"
	.string "make statues of you someday?\p"
	.string "Have you completed my task? Let me see\n"
	.string "your Pokédex.$"

PythiosTown_EventScripts_NPC_Artist_Text_4:
# 103 "data/maps/PythiosTown/scripts.pory"
	.string "You've caught and recorded data on\n"
	.string "{STR_VAR_2} Pokémon.$"

PythiosTown_EventScripts_NPC_Artist_Text_5:
# 114 "data/maps/PythiosTown/scripts.pory"
	.string "Oh, visions of Pokémon and beauty flow\n"
	.string "through me! Be still, my beating heart!\p"
	.string "Calm me, sweet statue...$"

PythiosTown_EventScripts_NPC_Artist_Text_6:
# 120 "data/maps/PythiosTown/scripts.pory"
	.string "Splendid! Fantastic! You've shown me\n"
	.string "more than I ever could have hoped!\p"
	.string "Please, young hero, allow me to help you.\n"
	.string "I can draw move directions, which can\l"
	.string "help {COLOR GREEN}Pokémon relearn old moves{COLOR DARK_GRAY}. Come\l"
	.string "visit me whenever you need!$"

PythiosTown_EventScripts_NPC_Artist_Text_7:
# 127 "data/maps/PythiosTown/scripts.pory"
	.string "Mmm... I'm just not quite inspired. Show\n"
	.string "me {COLOR GREEN}20 complete Pokédex entries{COLOR DARK_GRAY} of\l"
	.string "caught Pokémon. I must see more of\l"
	.string "Ilios!$"

PythiosTown_EventScripts_NPC_Artist_Text_8:
# 136 "data/maps/PythiosTown/scripts.pory"
	.string "Chaire, young hero! Are you here for\n"
	.string "move drawings? They can help Pokémon\l"
	.string "{COLOR GREEN}relearn old moves{COLOR DARK_GRAY}!$"

PythiosTown_EventScripts_NPC_Artist_Text_9:
# 140 "data/maps/PythiosTown/scripts.pory"
	.string "Understood. I'll stay here and practice\n"
	.string "my art with this incredible statue.\l"
	.string "Andio, goodbye!$"

PythiosTown_EventScripts_NPC_Artist_Text_10:
# 150 "data/maps/PythiosTown/scripts.pory"
	.string "Not today? That's okay, it's your\n"
	.string "journey! Come back when you want a\l"
	.string "Pokémon to remember a move.$"

PythiosTown_EventScripts_NPC_Artist_Text_11:
# 161 "data/maps/PythiosTown/scripts.pory"
	.string "Ah, ever the hero, rushing right into\n"
	.string "things! I'm sorry, but I cannot teach an\l"
	.string "Egg to do anything more than sit there.\l"
	.string "Let me know when it hatches though,\l"
	.string "perhaps I can draw moves for it as it\l"
	.string "grows older!$"

PythiosTown_EventScripts_NPC_Artist_Text_12:
# 171 "data/maps/PythiosTown/scripts.pory"
	.string "Hmm... ehehe, this is a little\n"
	.string "embarrassing, young hero... but I don't\l"
	.string "have anything to teach this Pokémon!\l"
	.string "It doesn't respond to any of my move\l"
	.string "drawings.\p"
	.string "Come back with another Pokémon! Andio,\n"
	.string "goodbye, hero!$"

PythiosTown_EventScripts_NPC_Artist_Text_13:
# 179 "data/maps/PythiosTown/scripts.pory"
	.string "Splendid! Now, what move should this\n"
	.string "Pokémon learn?$"

PythiosTown_EventScripts_NPC_Artist_Text_14:
# 195 "data/maps/PythiosTown/scripts.pory"
	.string "It was a complete success! Your\n"
	.string "Pokémon recognized my drawings and\l"
	.string "relearned the move.\p"
	.string "Come back when you want another move\n"
	.string "relearned, my young hero!$"

PythiosTown_EventScripts_NPC_Woman2_Text_0:
# 212 "data/maps/PythiosTown/scripts.pory"
	.string "It's nice living in a small place like\n"
	.string "this. Areas like Sofos City and the\l"
	.string "islands in the eastern sea are too busy\l"
	.string "for me.\p"
	.string "Of course, places like that have more to\n"
	.string "do... Ugh, now I can't decide which is\l"
	.string "better!$"

PythiosTown_EventScript_Hoothoot_Text_0:
# 222 "data/maps/PythiosTown/scripts.pory"
	.string "Hoothoot$"

PythiosTown_EventScript_Hoothoot_Text_1:
# 224 "data/maps/PythiosTown/scripts.pory"
	.string "Craaww!$"

PythiosTown_EventScript_Drowzee_Text_0:
# 235 "data/maps/PythiosTown/scripts.pory"
	.string "Drowzee$"

PythiosTown_EventScript_Drowzee_Text_1:
# 237 "data/maps/PythiosTown/scripts.pory"
	.string "Hoooonk!$"

PythiosTown_EventScript_Dwebble_Text_0:
# 248 "data/maps/PythiosTown/scripts.pory"
	.string "Dwebble$"

PythiosTown_EventScript_Dwebble_Text_1:
# 250 "data/maps/PythiosTown/scripts.pory"
	.string "Chk chk chk.$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_0:
# 267 "data/maps/PythiosTown/scripts.pory"
	.string "Mystical Woman$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_1:
# 268 "data/maps/PythiosTown/scripts.pory"
	.string "YES!! Sabella said I'm guarenteed to win\n"
	.string "my next Pokémon battle! She's never\l"
	.string "wrong!$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_2:
# 286 "data/maps/PythiosTown/scripts.pory"
	.string "Worker$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_3:
# 287 "data/maps/PythiosTown/scripts.pory"
	.string "Sabella just read my future! She told me\n"
	.string "'a big shake-up at work is coming'...\l"
	.string "that probably means a raise!\p"
	.string "...Probably!$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_4:
# 296 "data/maps/PythiosTown/scripts.pory"
	.string "Sabella$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_5:
# 297 "data/maps/PythiosTown/scripts.pory"
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
# 351 "data/maps/PythiosTown/scripts.pory"
	.string "Everyone seems to believe in Sabella\n"
	.string "and her visions. I'm not so sure, but my\l"
	.string "wife comes around to talk to her all the\l"
	.string "time. I'm waiting for her here.$"

PythiosTown_EventScripts_NPC_PsychicM_Text_0:
# 363 "data/maps/PythiosTown/scripts.pory"
	.string "Psychic$"

PythiosTown_EventScripts_NPC_PsychicM_Text_1:
# 364 "data/maps/PythiosTown/scripts.pory"
	.string "I promise, Sabella's powers are real! She\n"
	.string "has the same powers as her\l"
	.string "Psychic-type and Ghost-type Pokémon!$"

PythiosTown_EventScripts_NPC_ManBlockingGym_Text_0:
# 376 "data/maps/PythiosTown/scripts.pory"
	.string "Gym Guide$"

PythiosTown_EventScripts_NPC_ManBlockingGym_Text_1:
# 377 "data/maps/PythiosTown/scripts.pory"
	.string "Welcome to the Pythios Town Pokémon\n"
	.string "Gym!\p"
	.string "Well... that's what I would say, if the\n"
	.string "{COLOR GREEN}Gym Leader, Sabella{COLOR DARK_GRAY}, was here. She's\l"
	.string "probably meeting with people in the\l"
	.string "{COLOR GREEN}east of town{COLOR DARK_GRAY}.$"

PythiosTown_EventScripts_Bardas_Text_0:
# 389 "data/maps/PythiosTown/scripts.pory"
	.string "Strange Sailor$"

PythiosTown_EventScripts_Bardas_Text_1:
# 390 "data/maps/PythiosTown/scripts.pory"
	.string "Yia sou! Hey! I need a strong Trainer to\n"
	.string "help me out of a bind.\p"
	.string "Come to me when you have the {COLOR GREEN}Pythios\n"
	.string "Town Gym Badge{COLOR DARK_GRAY}... please!$"

PythiosTown_EventScripts_Bardas_Text_2:
# 399 "data/maps/PythiosTown/scripts.pory"
	.string "Thanks for coming back, I thought you\n"
	.string "might've left for good! Lemme check\l"
	.string "your {COLOR GREEN}Badges{COLOR DARK_GRAY}...$"

PythiosTown_EventScripts_Bardas_Text_3:
# 405 "data/maps/PythiosTown/scripts.pory"
	.string "Nope, only 2 Gym Badges. That might not\n"
	.string "be enough.\p"
	.string "Come back when you have the {COLOR GREEN}Pythios\n"
	.string "Town Gym Badge{COLOR DARK_GRAY}, I need to mke sure\l"
	.string "you're a strong Trainer.$"

PythiosTown_EventScripts_Bardas_Text_4:
# 413 "data/maps/PythiosTown/scripts.pory"
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

PythiosTown_EventScripts_Bardas_Text_5:
# 420 "data/maps/PythiosTown/scripts.pory"
	.string "Bardas$"

PythiosTown_EventScripts_Bardas_Text_6:
# 421 "data/maps/PythiosTown/scripts.pory"
	.string "Oh, and tell 'em {COLOR GREEN}Bardas{COLOR DARK_GRAY} sent you! Bardas\n"
	.string "the Strong! No, Bardas the Wise... maybe\l"
	.string "even Bardas the Great! Fwahaha!$"

PythiosTown_EventScripts_Bardas_Text_7:
# 430 "data/maps/PythiosTown/scripts.pory"
	.string "The Team Chimera Admin is {COLOR GREEN}east of\n"
	.string "Pythios Town{COLOR DARK_GRAY}, last I saw. Let me know\l"
	.string "when you've taken care of them!$"

PythiosTown_EventScripts_Bardas_Text_8:
# 438 "data/maps/PythiosTown/scripts.pory"
	.string "Chaire, {PLAYER}! Where are we going\n"
	.string "today?$"

PythiosTown_EventScripts_Bardas_Text_9:
# 441 "data/maps/PythiosTown/scripts.pory"
	.string "Just chatting!$"

PythiosTown_EventScripts_Bardas_Text_10:
# 443 "data/maps/PythiosTown/scripts.pory"
	.string "Pythios Town$"

PythiosTown_EventScripts_Bardas_Text_11:
# 446 "data/maps/PythiosTown/scripts.pory"
	.string "Sofos City$"

PythiosTown_EventScripts_Bardas_Text_12:
# 449 "data/maps/PythiosTown/scripts.pory"
	.string "Marmaro Island$"

PythiosTown_EventScripts_Bardas_Text_13:
# 452 "data/maps/PythiosTown/scripts.pory"
	.string "Myrrini Island$"

PythiosTown_EventScripts_Bardas_Text_14:
# 455 "data/maps/PythiosTown/scripts.pory"
	.string "Fresco Isles$"

PythiosTown_EventScripts_Bardas_Text_15:
# 458 "data/maps/PythiosTown/scripts.pory"
	.string "Palati City$"

PythiosTown_EventScripts_Bardas_Text_16:
# 461 "data/maps/PythiosTown/scripts.pory"
	.string "Port Pello$"

PythiosTown_EventScripts_Bardas_Text_17:
# 472 "data/maps/PythiosTown/scripts.pory"
	.string "Ehehe, glad to see the Champion still\n"
	.string "hangs around with the likes of me!$"

PythiosTown_EventScripts_Bardas_Text_18:
# 477 "data/maps/PythiosTown/scripts.pory"
	.string "How's the ol' adventure going,\n"
	.string "{PLAYER}? You still winning Gym\l"
	.string "Badges and knocking Team Chimera\l"
	.string "heads? Fwahaha!$"

PythiosTown_EventScripts_Bardas_Text_19:
# 489 "data/maps/PythiosTown/scripts.pory"
	.string "Pythios Town, eh? I've still got bad\n"
	.string "memories from that place, after my\l"
	.string "run-in with Team Chimera. Let's make\l"
	.string "this a quick trip, ehehe!$"

PythiosTown_EventScripts_Bardas_Text_20:
# 496 "data/maps/PythiosTown/scripts.pory"
	.string "Sofos City, eh? The heart of the Ilios\n"
	.string "Region! While you keep adventuring, I\l"
	.string "may play a little Pinball. I'm not good,\l"
	.string "but it's fun!$"

PythiosTown_EventScripts_Bardas_Text_21:
# 503 "data/maps/PythiosTown/scripts.pory"
	.string "Marmaro Island! A beautiful little spot.\n"
	.string "Their marble helped build structures\l"
	.string "across the ancient Ilios Region. Let's\l"
	.string "check it out!$"

PythiosTown_EventScripts_Bardas_Text_22:
# 510 "data/maps/PythiosTown/scripts.pory"
	.string "Hey, I love Myrrini Island! Maybe I'll do\n"
	.string "some walking around while I'm there! You\l"
	.string "know what they say, Myrrini parties are\l"
	.string "the best parties!$"

PythiosTown_EventScripts_Bardas_Text_23:
# 517 "data/maps/PythiosTown/scripts.pory"
	.string "The Fresco Isles, eh? For a group of\n"
	.string "islands, it gets awful dry there. Maybe\l"
	.string "you'll find some unique Pokémon there!$"

PythiosTown_EventScripts_Bardas_Text_24:
# 524 "data/maps/PythiosTown/scripts.pory"
	.string "Palati City! That's on Kaptara Island,\n"
	.string "right? That place is covered with\l"
	.string "gorgeous ruins... maybe I'll do a little\l"
	.string "exploring when we get there!$"

PythiosTown_EventScripts_Bardas_Text_25:
# 531 "data/maps/PythiosTown/scripts.pory"
	.string "Port Pello! Their cherry trees are\n"
	.string "world-famous! They say the gods\l"
	.string "blessed the lands. How about we see it\l"
	.string "for ourselves?$"

PythiosTown_MapScripts::
	.byte 0


PythiosTown_EventScripts_NPC_Gentleman::
# 5 "data/maps/PythiosTown/scripts.pory"
	lock
# 6 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 7 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Gentleman_Text_0
# 8 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Gentleman_Text_1
# 9 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 10 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_GOT_WILL_O_WISP, PythiosTown_EventScripts_NPC_Gentleman_2
PythiosTown_EventScripts_NPC_Gentleman_1:
# 18 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Gentleman_2:
# 12 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Gentleman_Text_0
# 13 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Gentleman_Text_2
# 14 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 15 "data/maps/PythiosTown/scripts.pory"
	giveitem ITEM_TM51
# 16 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_GOT_WILL_O_WISP
	goto PythiosTown_EventScripts_NPC_Gentleman_1


PythiosTown_EventScripts_NPC_Woman::
# 24 "data/maps/PythiosTown/scripts.pory"
	lock
# 25 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 26 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Woman_Text_0
# 27 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Woman_Text_1
# 28 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 29 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_OldWoman::
# 35 "data/maps/PythiosTown/scripts.pory"
	lock
# 36 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 37 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_OldWoman_Text_0
# 38 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_OldWoman_Text_1
# 39 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 40 "data/maps/PythiosTown/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 41 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 42 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_OldMan::
# 48 "data/maps/PythiosTown/scripts.pory"
	lock
# 49 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 50 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_OldMan_Text_0
# 51 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_OldMan_Text_1
# 52 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 53 "data/maps/PythiosTown/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 54 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 55 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_Artist::
# 61 "data/maps/PythiosTown/scripts.pory"
	lock
# 62 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_MOVE_RELEARNER, PythiosTown_EventScripts_NPC_Artist_2
# 77 "data/maps/PythiosTown/scripts.pory"
	goto_if_unset FLAG_UNLOCKED_MOVE_RELEARNER, PythiosTown_EventScripts_NPC_Artist_3
# 123 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FacePlayer
# 124 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 125 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 126 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_8, MSGBOX_YESNO
# 127 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_10
# 135 "data/maps/PythiosTown/scripts.pory"
	special ChooseMonForMoveRelearner
# 136 "data/maps/PythiosTown/scripts.pory"
	waitstate
# 137 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_14
# 147 "data/maps/PythiosTown/scripts.pory"
	special IsSelectedMonEgg
# 148 "data/maps/PythiosTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_17
# 158 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_20
# 168 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 169 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_13
# 170 "data/maps/PythiosTown/scripts.pory"
	special TeachMoveRelearnerMove
# 171 "data/maps/PythiosTown/scripts.pory"
	waitstate
# 172 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq PythiosTown_EventScripts_NPC_Artist_22
# 184 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 185 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_14
# 186 "data/maps/PythiosTown/scripts.pory"
	closemessage
PythiosTown_EventScripts_NPC_Artist_1:
# 191 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 192 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 193 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_2:
# 64 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 65 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_1
# 66 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 67 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 68 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 69 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 70 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FacePlayer
# 71 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 72 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 73 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_2
# 74 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 75 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_SPOKE_TO_MOVE_RELEARNER
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_3:
# 79 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FacePlayer
# 80 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 81 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 82 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_3
# 83 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 85 "data/maps/PythiosTown/scripts.pory"
	setvar VAR_0x8004, 0
# 86 "data/maps/PythiosTown/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 87 "data/maps/PythiosTown/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 88 "data/maps/PythiosTown/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 89 "data/maps/PythiosTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 90 "data/maps/PythiosTown/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 91 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 92 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 93 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_4
# 94 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 95 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 97 "data/maps/PythiosTown/scripts.pory"
	compare VAR_0x8009, 20
	goto_if_ge PythiosTown_EventScripts_NPC_Artist_7
# 116 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 117 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_7
# 118 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_7:
# 99 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 100 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 101 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_JumpInPlaceRight
# 102 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 103 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 104 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_5
# 105 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 106 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 107 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FacePlayer
# 108 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 109 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 110 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_6
# 111 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 112 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_UNLOCKED_MOVE_RELEARNER
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_10:
# 129 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 130 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_9
# 131 "data/maps/PythiosTown/scripts.pory"
	closemessage
	goto PythiosTown_EventScripts_NPC_Artist_1

PythiosTown_EventScripts_NPC_Artist_14:
# 139 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 140 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_10
# 141 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 142 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 143 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 144 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_17:
# 150 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 151 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_11
# 152 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 153 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 154 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 155 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_20:
# 160 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 161 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_12
# 162 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 163 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 164 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 165 "data/maps/PythiosTown/scripts.pory"
	release
	end

PythiosTown_EventScripts_NPC_Artist_22:
# 174 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Artist_Text_0
# 175 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Artist_Text_10
# 176 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 177 "data/maps/PythiosTown/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 178 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 179 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_Woman2::
# 199 "data/maps/PythiosTown/scripts.pory"
	lock
# 200 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 201 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_Woman_Text_0
# 202 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_Woman2_Text_0
# 203 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 204 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Hoothoot::
# 210 "data/maps/PythiosTown/scripts.pory"
	lock
# 211 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 212 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Hoothoot_Text_0
# 213 "data/maps/PythiosTown/scripts.pory"
	playmoncry SPECIES_HOOTHOOT, CRY_MODE_NORMAL
# 214 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Hoothoot_Text_1
# 215 "data/maps/PythiosTown/scripts.pory"
	waitmoncry
# 216 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 217 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Drowzee::
# 223 "data/maps/PythiosTown/scripts.pory"
	lock
# 224 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 225 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Drowzee_Text_0
# 226 "data/maps/PythiosTown/scripts.pory"
	playmoncry SPECIES_DROWZEE, CRY_MODE_NORMAL
# 227 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Drowzee_Text_1
# 228 "data/maps/PythiosTown/scripts.pory"
	waitmoncry
# 229 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 230 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Dwebble::
# 236 "data/maps/PythiosTown/scripts.pory"
	lock
# 237 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 238 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Dwebble_Text_0
# 239 "data/maps/PythiosTown/scripts.pory"
	playmoncry SPECIES_DWEBBLE, CRY_MODE_NORMAL
# 240 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Dwebble_Text_1
# 241 "data/maps/PythiosTown/scripts.pory"
	waitmoncry
# 242 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 243 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScript_Trigger_SabellaIntroductionEvent::
# 249 "data/maps/PythiosTown/scripts.pory"
	lockall
# 250 "data/maps/PythiosTown/scripts.pory"
	applymovement 15, Common_Movement_ExclamationMark
# 251 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 252 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 253 "data/maps/PythiosTown/scripts.pory"
	applymovement 15, PythiosTown_Movement_FirstSabellaFanWalksToPlayer
# 254 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 255 "data/maps/PythiosTown/scripts.pory"
	applymovement 16, Common_Movement_WalkUp
# 256 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 257 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_0
# 258 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_1
# 259 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 260 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 261 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 262 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 263 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 264 "data/maps/PythiosTown/scripts.pory"
	applymovement 15, PythiosTown_Movement_FirstSabellaFanWalksAway
# 265 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 266 "data/maps/PythiosTown/scripts.pory"
	delay 60
# 268 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PythiosTown_Movement_PlayerApproachesLine
# 269 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 270 "data/maps/PythiosTown/scripts.pory"
	delay 60
# 271 "data/maps/PythiosTown/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 272 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 273 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 274 "data/maps/PythiosTown/scripts.pory"
	applymovement 16, Common_Movement_FaceDown
# 275 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 276 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_2
# 277 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_3
# 278 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 279 "data/maps/PythiosTown/scripts.pory"
	applymovement 16, PythiosTown_Movement_SecondSabellaFanWalksAway
# 280 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 281 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 282 "data/maps/PythiosTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 283 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 286 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_4
# 287 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_5
# 288 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 290 "data/maps/PythiosTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 291 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 292 "data/maps/PythiosTown/scripts.pory"
	removeobject 15
# 293 "data/maps/PythiosTown/scripts.pory"
	removeobject 16
# 294 "data/maps/PythiosTown/scripts.pory"
	removeobject 3
# 295 "data/maps/PythiosTown/scripts.pory"
	removeobject 17
# 296 "data/maps/PythiosTown/scripts.pory"
	removeobject 19
# 297 "data/maps/PythiosTown/scripts.pory"
	setflag FLAG_MET_SABELLA_PYTHIOS_TOWN
# 298 "data/maps/PythiosTown/scripts.pory"
	delay 30
# 299 "data/maps/PythiosTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 300 "data/maps/PythiosTown/scripts.pory"
	delay 20
# 302 "data/maps/PythiosTown/scripts.pory"
	releaseall
	end


# 306 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_FirstSabellaFanWalksToPlayer:
# 308 "data/maps/PythiosTown/scripts.pory"
	walk_fast_left
# 309 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 309 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 310 "data/maps/PythiosTown/scripts.pory"
	step_end

# 313 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_FirstSabellaFanWalksAway:
# 315 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 315 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 315 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 315 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 315 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 315 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 316 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 316 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 316 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 316 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 316 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 316 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 316 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 316 "data/maps/PythiosTown/scripts.pory"
	walk_fast_right
# 317 "data/maps/PythiosTown/scripts.pory"
	step_end

# 320 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_PlayerApproachesLine:
# 322 "data/maps/PythiosTown/scripts.pory"
	walk_right
# 323 "data/maps/PythiosTown/scripts.pory"
	walk_up
# 323 "data/maps/PythiosTown/scripts.pory"
	walk_up
# 324 "data/maps/PythiosTown/scripts.pory"
	walk_right
# 325 "data/maps/PythiosTown/scripts.pory"
	face_up
# 326 "data/maps/PythiosTown/scripts.pory"
	step_end

# 329 "data/maps/PythiosTown/scripts.pory"
PythiosTown_Movement_SecondSabellaFanWalksAway:
# 331 "data/maps/PythiosTown/scripts.pory"
	walk_fast_left
# 332 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 332 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 332 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 332 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 332 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 332 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 332 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 332 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 332 "data/maps/PythiosTown/scripts.pory"
	walk_fast_down
# 333 "data/maps/PythiosTown/scripts.pory"
	step_end

PythiosTown_EventScripts_NPC_OldMan2::
# 338 "data/maps/PythiosTown/scripts.pory"
	lock
# 339 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 340 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_OldMan_Text_0
# 341 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_OldMan2_Text_0
# 342 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 343 "data/maps/PythiosTown/scripts.pory"
	applymovement 13, Common_Movement_FaceLeft
# 344 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 345 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_PsychicM::
# 351 "data/maps/PythiosTown/scripts.pory"
	lock
# 352 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 353 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_PsychicM_Text_0
# 354 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_PsychicM_Text_1
# 355 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 356 "data/maps/PythiosTown/scripts.pory"
	applymovement 14, Common_Movement_FaceRight
# 357 "data/maps/PythiosTown/scripts.pory"
	waitmovement 0
# 358 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_ManBlockingGym::
# 364 "data/maps/PythiosTown/scripts.pory"
	lock
# 365 "data/maps/PythiosTown/scripts.pory"
	faceplayer
# 366 "data/maps/PythiosTown/scripts.pory"
	speakername PythiosTown_EventScripts_NPC_ManBlockingGym_Text_0
# 367 "data/maps/PythiosTown/scripts.pory"
	msgbox PythiosTown_EventScripts_NPC_ManBlockingGym_Text_1
# 368 "data/maps/PythiosTown/scripts.pory"
	closemessage
# 369 "data/maps/PythiosTown/scripts.pory"
	release
	end


PythiosTown_EventScripts_NPC_Gentleman_Text_0:
# 7 "data/maps/PythiosTown/scripts.pory"
	.string "Gentleman$"

PythiosTown_EventScripts_NPC_Gentleman_Text_1:
# 8 "data/maps/PythiosTown/scripts.pory"
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
# 13 "data/maps/PythiosTown/scripts.pory"
	.string "Thanks for listening to me ramble. Here,\n"
	.string "take this {COLOR GREEN}TM Will-O-Wisp{COLOR DARK_GRAY}. It feels like\l"
	.string "it's connected to this strange town.$"

PythiosTown_EventScripts_NPC_Woman_Text_0:
# 26 "data/maps/PythiosTown/scripts.pory"
	.string "Woman$"

PythiosTown_EventScripts_NPC_Woman_Text_1:
# 27 "data/maps/PythiosTown/scripts.pory"
	.string "Ruins dot the areas around Pythios\n"
	.string "Town. I grew up exploring them!\p"
	.string "The Ilios Region has a rich history\n"
	.string "stretching back thousands of years.\l"
	.string "Keep an eye out for hidden lore and\l"
	.string "items!$"

PythiosTown_EventScripts_NPC_OldWoman_Text_0:
# 37 "data/maps/PythiosTown/scripts.pory"
	.string "Old Woman$"

PythiosTown_EventScripts_NPC_OldWoman_Text_1:
# 38 "data/maps/PythiosTown/scripts.pory"
	.string "People come from all over to hear from\n"
	.string "Sabella, the Gym Leader and spiritual\l"
	.string "guide of Pythios Town.\p"
	.string "Me? I moved here with my husband to\n"
	.string "watch the water and feel the energy.$"

PythiosTown_EventScripts_NPC_OldMan_Text_0:
# 50 "data/maps/PythiosTown/scripts.pory"
	.string "Old Man$"

PythiosTown_EventScripts_NPC_OldMan_Text_1:
# 51 "data/maps/PythiosTown/scripts.pory"
	.string "The graves around Pythios Town are for\n"
	.string "old heroes of the Ilios Region. Them and\l"
	.string "their Pokémon helped win wars and\l"
	.string "fought in great battles.\p"
	.string "Nowadays, people prefer Pokémon\n"
	.string "battling for entertainment. That's\l"
	.string "probably for the best.$"

PythiosTown_EventScripts_NPC_Artist_Text_0:
# 64 "data/maps/PythiosTown/scripts.pory"
	.string "Artist$"

PythiosTown_EventScripts_NPC_Artist_Text_1:
# 65 "data/maps/PythiosTown/scripts.pory"
	.string "A stoic man staring off to the\n"
	.string "distance...\p"
	.string "Think of the story this statue tells...\n"
	.string "A hero, lost to time...\p"
	.string "I need inspiration, a modern hero!$"

PythiosTown_EventScripts_NPC_Artist_Text_2:
# 73 "data/maps/PythiosTown/scripts.pory"
	.string "Oh? And you, are you a young trainer? A\n"
	.string "new hero in-the-making?\p"
	.string "I see a Pokédex on you. Speak to me\n"
	.string "when you have {COLOR GREEN}20 Pokémon{COLOR DARK_GRAY} registered in\l"
	.string "your Pokédex. If you can give me\l"
	.string "inspiration, I can {COLOR GREEN}help your Pokémon{COLOR DARK_GRAY}!$"

PythiosTown_EventScripts_NPC_Artist_Text_3:
# 82 "data/maps/PythiosTown/scripts.pory"
	.string "Chaire, my young hero! I wonder, will we\n"
	.string "make statues of you someday?\p"
	.string "Have you completed my task? Let me see\n"
	.string "your Pokédex.$"

PythiosTown_EventScripts_NPC_Artist_Text_4:
# 93 "data/maps/PythiosTown/scripts.pory"
	.string "You've caught and recorded data on\n"
	.string "{STR_VAR_2} Pokémon.$"

PythiosTown_EventScripts_NPC_Artist_Text_5:
# 104 "data/maps/PythiosTown/scripts.pory"
	.string "Oh, visions of Pokémon and beauty flow\n"
	.string "through me! Be still, my beating heart!\p"
	.string "Calm me, sweet statue...$"

PythiosTown_EventScripts_NPC_Artist_Text_6:
# 110 "data/maps/PythiosTown/scripts.pory"
	.string "Splendid! Fantastic! You've shown me\n"
	.string "more than I ever could have hoped!\p"
	.string "Please, young hero, allow me to help you.\n"
	.string "I can draw move directions, which can\l"
	.string "help {COLOR GREEN}Pokémon relearn old moves{COLOR DARK_GRAY}. Come\l"
	.string "visit me whenever you need!$"

PythiosTown_EventScripts_NPC_Artist_Text_7:
# 117 "data/maps/PythiosTown/scripts.pory"
	.string "Mmm... I'm just not quite inspired. Show\n"
	.string "me {COLOR GREEN}20 complete Pokédex entries{COLOR DARK_GRAY} of\l"
	.string "caught Pokémon. I must see more of\l"
	.string "Ilios!$"

PythiosTown_EventScripts_NPC_Artist_Text_8:
# 126 "data/maps/PythiosTown/scripts.pory"
	.string "Chaire, young hero! Are you here for\n"
	.string "move drawings? They can help Pokémon\l"
	.string "{COLOR GREEN}relearn old moves{COLOR DARK_GRAY}!$"

PythiosTown_EventScripts_NPC_Artist_Text_9:
# 130 "data/maps/PythiosTown/scripts.pory"
	.string "Understood. I'll stay here and practice\n"
	.string "my art with this incredible statue.\l"
	.string "Andio, goodbye!$"

PythiosTown_EventScripts_NPC_Artist_Text_10:
# 140 "data/maps/PythiosTown/scripts.pory"
	.string "Not today? That's okay, it's your\n"
	.string "journey! Come back when you want a\l"
	.string "Pokémon to remember a move.$"

PythiosTown_EventScripts_NPC_Artist_Text_11:
# 151 "data/maps/PythiosTown/scripts.pory"
	.string "Ah, ever the hero, rushing right into\n"
	.string "things! I'm sorry, but I cannot teach an\l"
	.string "Egg to do anything more than sit there.\l"
	.string "Let me know when it hatches though,\l"
	.string "perhaps I can draw moves for it as it\l"
	.string "grows older!$"

PythiosTown_EventScripts_NPC_Artist_Text_12:
# 161 "data/maps/PythiosTown/scripts.pory"
	.string "Hmm... ehehe, this is a little\n"
	.string "embarrassing, young hero... but I don't\l"
	.string "have anything to teach this Pokémon!\l"
	.string "It doesn't respond to any of my move\l"
	.string "drawings.\p"
	.string "Come back with another Pokémon! Andio,\n"
	.string "goodbye, hero!$"

PythiosTown_EventScripts_NPC_Artist_Text_13:
# 169 "data/maps/PythiosTown/scripts.pory"
	.string "Splendid! Now, what move should this\n"
	.string "Pokémon learn?$"

PythiosTown_EventScripts_NPC_Artist_Text_14:
# 185 "data/maps/PythiosTown/scripts.pory"
	.string "It was a complete success! Your\n"
	.string "Pokémon recognized my drawings and\l"
	.string "relearned the move.\p"
	.string "Come back when you want another move\n"
	.string "relearned, my young hero!$"

PythiosTown_EventScripts_NPC_Woman2_Text_0:
# 202 "data/maps/PythiosTown/scripts.pory"
	.string "It's nice living in a small place like\n"
	.string "this. Areas like Sofos City and the\l"
	.string "islands in the eastern sea are too busy\l"
	.string "for me.\p"
	.string "Of course, places like that have more to\n"
	.string "do... Ugh, now I can't decide which is\l"
	.string "better!$"

PythiosTown_EventScript_Hoothoot_Text_0:
# 212 "data/maps/PythiosTown/scripts.pory"
	.string "Hoothoot$"

PythiosTown_EventScript_Hoothoot_Text_1:
# 214 "data/maps/PythiosTown/scripts.pory"
	.string "Craaww!$"

PythiosTown_EventScript_Drowzee_Text_0:
# 225 "data/maps/PythiosTown/scripts.pory"
	.string "Drowzee$"

PythiosTown_EventScript_Drowzee_Text_1:
# 227 "data/maps/PythiosTown/scripts.pory"
	.string "Hoooonk!$"

PythiosTown_EventScript_Dwebble_Text_0:
# 238 "data/maps/PythiosTown/scripts.pory"
	.string "Dwebble$"

PythiosTown_EventScript_Dwebble_Text_1:
# 240 "data/maps/PythiosTown/scripts.pory"
	.string "Chk chk chk.$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_0:
# 257 "data/maps/PythiosTown/scripts.pory"
	.string "Mystical Woman$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_1:
# 258 "data/maps/PythiosTown/scripts.pory"
	.string "YES!! Sabella said I'm guarenteed to win\n"
	.string "my next Pokémon battle! She's never\l"
	.string "wrong!$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_2:
# 276 "data/maps/PythiosTown/scripts.pory"
	.string "Worker$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_3:
# 277 "data/maps/PythiosTown/scripts.pory"
	.string "Sabella just read my future! She told me\n"
	.string "'a big shake-up at work is coming'...\l"
	.string "that probably means a raise!\p"
	.string "...Probably!$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_4:
# 286 "data/maps/PythiosTown/scripts.pory"
	.string "Sabella$"

PythiosTown_EventScript_Trigger_SabellaIntroductionEvent_Text_5:
# 287 "data/maps/PythiosTown/scripts.pory"
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
# 341 "data/maps/PythiosTown/scripts.pory"
	.string "Everyone seems to believe in Sabella\n"
	.string "and her visions. I'm not so sure, but my\l"
	.string "wife comes around to talk to her all the\l"
	.string "time. I'm waiting for her here.$"

PythiosTown_EventScripts_NPC_PsychicM_Text_0:
# 353 "data/maps/PythiosTown/scripts.pory"
	.string "Psychic$"

PythiosTown_EventScripts_NPC_PsychicM_Text_1:
# 354 "data/maps/PythiosTown/scripts.pory"
	.string "I promise, Sabella's powers are real! She\n"
	.string "has the same powers as her\l"
	.string "Psychic-type and Ghost-type Pokémon!$"

PythiosTown_EventScripts_NPC_ManBlockingGym_Text_0:
# 366 "data/maps/PythiosTown/scripts.pory"
	.string "Gym Guide$"

PythiosTown_EventScripts_NPC_ManBlockingGym_Text_1:
# 367 "data/maps/PythiosTown/scripts.pory"
	.string "Welcome to the Pythios Town Pokémon\n"
	.string "Gym!\p"
	.string "Well... that's what I would say, if the\n"
	.string "{COLOR GREEN}Gym Leader, Sabella{COLOR DARK_GRAY}, was here. She's\l"
	.string "probably meeting with people in the\l"
	.string "{COLOR GREEN}east of town{COLOR DARK_GRAY}.$"

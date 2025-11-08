RuinsOfAhiyawa_E4_Room1_MapScripts::
	.byte 0


RuinsOfAhiyawa_EliteFour_TryToLeaveRoom::
# 5 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	lock
# 6 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	goto_if_unset FLAG_ELITE_FOUR_HIDE_POLYMNIA, RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_2
RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_1:
# 29 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	goto_if_unset FLAG_ELITE_FOUR_HIDE_TERPSIKORE, RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_5
RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_4:
# 52 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	goto_if_unset FLAG_ELITE_FOUR_HIDE_EUTERPE, RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_11
RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_10:
# 75 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	goto_if_unset FLAG_ELITE_FOUR_HIDE_RHADINE, RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_20
RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_19:
# 98 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	releaseall
	end

RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_2:
# 8 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	goto_if_unset FLAG_ELITE_FOUR_DEFEATED_POLYMNIA, RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_7
# 17 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 18 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	waitmovement 0
# 19 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_Text_1, MSGBOX_YESNO
# 20 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 21 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_17
# 26 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	warpcontinuescript MAP_RUINS_OF_AHIYAWA_E4_ROOM1, 4, 9, RuinsOfAhiyawa_EliteFour_EnterTerpsikoreRoomScript
	goto RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_1

RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_5:
# 31 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	goto_if_unset FLAG_ELITE_FOUR_DEFEATED_TERPSIKORE, RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_13
# 40 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 41 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	waitmovement 0
# 42 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_Text_1, MSGBOX_YESNO
# 43 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 44 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_26
# 49 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	warpcontinuescript MAP_RUINS_OF_AHIYAWA_E4_ROOM1, 4, 9, RuinsOfAhiyawa_EliteFour_EnterEuterpeRoomScript
	goto RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_4

RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_7:
# 10 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_Text_0
# 11 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 12 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 13 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	waitmovement 0
	goto RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_1

RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_11:
# 54 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	goto_if_unset FLAG_ELITE_FOUR_DEFEATED_EUTERPE, RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_22
# 63 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 64 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	waitmovement 0
# 65 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_Text_1, MSGBOX_YESNO
# 66 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 67 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_32
# 72 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	warpcontinuescript MAP_RUINS_OF_AHIYAWA_E4_ROOM1, 4, 9, RuinsOfAhiyawa_EliteFour_EnterRhadineRoomScript
	goto RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_10

RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_13:
# 33 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_Text_2
# 34 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 35 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 36 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	waitmovement 0
	goto RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_4

RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_17:
# 23 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	releaseall
	end

RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_20:
# 77 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	goto_if_unset FLAG_ELITE_FOUR_DEFEATED_RHADINE, RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_28
# 86 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 87 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	waitmovement 0
# 88 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_Text_1, MSGBOX_YESNO
# 89 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 90 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_35
# 95 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	warpcontinuescript MAP_RUINS_OF_AHIYAWA_E4_CHAMPIONS_ROOM, 5, 14, RuinsOfAhiyawa_E4_ChampionsRoom_EnterRoom
	goto RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_19

RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_22:
# 56 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_Text_3
# 57 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 58 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 59 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	waitmovement 0
	goto RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_10

RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_26:
# 46 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	releaseall
	end

RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_28:
# 79 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_Text_4
# 80 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 81 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 82 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	waitmovement 0
	goto RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_19

RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_32:
# 69 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	releaseall
	end

RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_35:
# 92 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	releaseall
	end


RuinsOfAhiyawa_EliteFour_EnterPolymniaRoomScript::
# 104 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	lockall
# 112 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	clearflag FLAG_ELITE_FOUR_HIDE_POLYMNIA
# 113 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	setflag FLAG_ELITE_FOUR_HIDE_TERPSIKORE
# 114 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	setflag FLAG_ELITE_FOUR_HIDE_EUTERPE
# 115 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	setflag FLAG_ELITE_FOUR_HIDE_RHADINE
# 116 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	addobject 1
# 117 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	addobject 2
# 118 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	addobject 3
# 119 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 4
# 120 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 5
# 121 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 6
# 122 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 7
# 123 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 8
# 124 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 9
# 125 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 10
# 126 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 11
# 127 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 12
# 129 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 130 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 131 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	waitmovement 0
# 132 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	delay 10
# 133 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	releaseall
	end


RuinsOfAhiyawa_EliteFour_EventScript_Jumpluff::
# 139 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	lock
# 140 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	faceplayer
# 141 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	speakername RuinsOfAhiyawa_EliteFour_EventScript_Jumpluff_Text_0
# 142 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	playmoncry SPECIES_JUMPLUFF, CRY_MODE_NORMAL
# 143 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_EventScript_Jumpluff_Text_1
# 144 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	waitmoncry
# 145 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 146 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	release
	end


RuinsOfAhiyawa_EliteFour_EventScript_Ribombee::
# 152 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	lock
# 153 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	faceplayer
# 154 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	speakername RuinsOfAhiyawa_EliteFour_EventScript_Ribombee_Text_0
# 155 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	playmoncry SPECIES_RIBOMBEE, CRY_MODE_NORMAL
# 156 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_EventScript_Ribombee_Text_1
# 157 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	waitmoncry
# 158 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 159 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	release
	end


RuinsOfAhiyawa_EliteFour_Polymnia::
# 165 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	lock
# 166 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	faceplayer
# 167 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	speakername RuinsOfAhiyawa_EliteFour_Polymnia_Text_0
# 170 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	goto_if_set FLAG_ELITE_FOUR_DEFEATED_POLYMNIA, RuinsOfAhiyawa_EliteFour_Polymnia_2
# 178 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_Polymnia_Text_2
# 179 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 181 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	goto_if_unset FLAG_HARD_MODE, RuinsOfAhiyawa_EliteFour_Polymnia_5
# 187 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITEFOUR_POLYMNIA_HARD, RuinsOfAhiyawa_EliteFour_PolymniaLoseText
RuinsOfAhiyawa_EliteFour_Polymnia_4:
# 190 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	setflag FLAG_ELITE_FOUR_DEFEATED_POLYMNIA
# 191 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	delay 10
# 192 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	speakername RuinsOfAhiyawa_EliteFour_Polymnia_Text_0
# 193 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_Polymnia_Text_3
# 194 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 195 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	release
	end

RuinsOfAhiyawa_EliteFour_Polymnia_2:
# 172 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_Polymnia_Text_1
# 173 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 174 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	release
	end

RuinsOfAhiyawa_EliteFour_Polymnia_5:
# 183 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITEFOUR_POLYMNIA, RuinsOfAhiyawa_EliteFour_PolymniaLoseText
	goto RuinsOfAhiyawa_EliteFour_Polymnia_4


RuinsOfAhiyawa_EliteFour_EnterTerpsikoreRoomScript::
# 208 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	lockall
# 216 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	setflag FLAG_ELITE_FOUR_HIDE_POLYMNIA
# 217 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	clearflag FLAG_ELITE_FOUR_HIDE_TERPSIKORE
# 218 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	setflag FLAG_ELITE_FOUR_HIDE_EUTERPE
# 219 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	setflag FLAG_ELITE_FOUR_HIDE_RHADINE
# 220 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 1
# 221 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 2
# 222 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 3
# 223 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	addobject 4
# 224 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	addobject 5
# 225 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	addobject 6
# 226 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 7
# 227 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 8
# 228 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 9
# 229 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 10
# 230 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 11
# 231 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 12
# 233 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 234 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 235 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	waitmovement 0
# 236 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	delay 10
# 237 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	releaseall
	end


RuinsOfAhiyawa_EliteFour_EventScript_BraviaryHisuian::
# 243 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	lock
# 244 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	faceplayer
# 245 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	speakername RuinsOfAhiyawa_EliteFour_EventScript_BraviaryHisuian_Text_0
# 246 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	playmoncry SPECIES_BRAVIARY, CRY_MODE_NORMAL
# 247 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_EventScript_BraviaryHisuian_Text_1
# 248 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	waitmoncry
# 249 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 250 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	release
	end


RuinsOfAhiyawa_EliteFour_EventScript_Falinks::
# 256 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	lock
# 257 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	faceplayer
# 258 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	speakername RuinsOfAhiyawa_EliteFour_EventScript_Falinks_Text_0
# 259 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	playmoncry SPECIES_FALINKS, CRY_MODE_NORMAL
# 260 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_EventScript_Falinks_Text_1
# 261 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	waitmoncry
# 262 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 263 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	release
	end


RuinsOfAhiyawa_EliteFour_Terpsikore::
# 269 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	lock
# 270 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	faceplayer
# 271 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	speakername RuinsOfAhiyawa_EliteFour_Terpsikore_Text_0
# 274 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	goto_if_set FLAG_ELITE_FOUR_DEFEATED_TERPSIKORE, RuinsOfAhiyawa_EliteFour_Terpsikore_2
# 282 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_Terpsikore_Text_1
# 283 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 285 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	goto_if_unset FLAG_HARD_MODE, RuinsOfAhiyawa_EliteFour_Terpsikore_5
# 291 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITEFOUR_TERPSIKORE_HARD, RuinsOfAhiyawa_EliteFour_TerpsikoreLoseText
RuinsOfAhiyawa_EliteFour_Terpsikore_4:
# 294 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	setflag FLAG_ELITE_FOUR_DEFEATED_TERPSIKORE
# 295 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	delay 10
# 296 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	speakername RuinsOfAhiyawa_EliteFour_Terpsikore_Text_0
# 297 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_Terpsikore_Text_2
# 298 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 299 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	release
	end

RuinsOfAhiyawa_EliteFour_Terpsikore_2:
# 276 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_Polymnia_Text_1
# 277 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 278 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	release
	end

RuinsOfAhiyawa_EliteFour_Terpsikore_5:
# 287 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITEFOUR_TERPSIKORE, RuinsOfAhiyawa_EliteFour_TerpsikoreLoseText
	goto RuinsOfAhiyawa_EliteFour_Terpsikore_4


RuinsOfAhiyawa_EliteFour_EnterEuterpeRoomScript::
# 312 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	lockall
# 320 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	setflag FLAG_ELITE_FOUR_HIDE_POLYMNIA
# 321 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	setflag FLAG_ELITE_FOUR_HIDE_TERPSIKORE
# 322 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	clearflag FLAG_ELITE_FOUR_HIDE_EUTERPE
# 323 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	setflag FLAG_ELITE_FOUR_HIDE_RHADINE
# 324 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 1
# 325 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 2
# 326 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 3
# 327 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 4
# 328 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 5
# 329 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 6
# 330 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	addobject 7
# 331 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	addobject 8
# 332 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	addobject 9
# 333 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 10
# 334 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 11
# 335 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 12
# 337 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 338 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 339 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	waitmovement 0
# 340 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	delay 10
# 341 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	releaseall
	end


RuinsOfAhiyawa_EliteFour_EventScript_Tentacruel::
# 347 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	lock
# 348 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	faceplayer
# 349 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	speakername RuinsOfAhiyawa_EliteFour_EventScript_Tentacruel_Text_0
# 350 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	playmoncry SPECIES_TENTACRUEL, CRY_MODE_NORMAL
# 351 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_EventScript_Tentacruel_Text_1
# 352 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	waitmoncry
# 353 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 354 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	release
	end


RuinsOfAhiyawa_EliteFour_EventScript_Gyarados::
# 360 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	lock
# 361 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	faceplayer
# 362 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	speakername RuinsOfAhiyawa_EliteFour_EventScript_Gyarados_Text_0
# 363 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	playmoncry SPECIES_GYARADOS, CRY_MODE_NORMAL
# 364 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_EventScript_Gyarados_Text_1
# 365 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	waitmoncry
# 366 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 367 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	release
	end


RuinsOfAhiyawa_EliteFour_Euterpe::
# 373 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	lock
# 374 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	faceplayer
# 375 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	speakername RuinsOfAhiyawa_EliteFour_Euterpe_Text_0
# 378 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	goto_if_set FLAG_ELITE_FOUR_DEFEATED_EUTERPE, RuinsOfAhiyawa_EliteFour_Euterpe_2
# 386 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_Euterpe_Text_1
# 387 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 389 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	goto_if_unset FLAG_HARD_MODE, RuinsOfAhiyawa_EliteFour_Euterpe_5
# 395 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITEFOUR_EUTERPE_HARD, RuinsOfAhiyawa_EliteFour_EuterpeLoseText
RuinsOfAhiyawa_EliteFour_Euterpe_4:
# 398 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	setflag FLAG_ELITE_FOUR_DEFEATED_EUTERPE
# 399 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	delay 10
# 400 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	speakername RuinsOfAhiyawa_EliteFour_Euterpe_Text_0
# 401 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_Euterpe_Text_2
# 402 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 403 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	release
	end

RuinsOfAhiyawa_EliteFour_Euterpe_2:
# 380 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_Polymnia_Text_1
# 381 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 382 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	release
	end

RuinsOfAhiyawa_EliteFour_Euterpe_5:
# 391 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITEFOUR_EUTERPE, RuinsOfAhiyawa_EliteFour_EuterpeLoseText
	goto RuinsOfAhiyawa_EliteFour_Euterpe_4


RuinsOfAhiyawa_EliteFour_EnterRhadineRoomScript::
# 416 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	lockall
# 424 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	setflag FLAG_ELITE_FOUR_HIDE_POLYMNIA
# 425 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	setflag FLAG_ELITE_FOUR_HIDE_TERPSIKORE
# 426 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	setflag FLAG_ELITE_FOUR_HIDE_EUTERPE
# 427 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	clearflag FLAG_ELITE_FOUR_HIDE_RHADINE
# 428 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 1
# 429 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 2
# 430 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 3
# 431 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 4
# 432 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 5
# 433 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 6
# 434 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 7
# 435 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 8
# 436 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	removeobject 9
# 437 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	addobject 10
# 438 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	addobject 11
# 439 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	addobject 12
# 441 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 442 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 443 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	waitmovement 0
# 444 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	delay 10
# 445 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	releaseall
	end


RuinsOfAhiyawa_EliteFour_EventScript_OricorioBaile::
# 451 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	lock
# 452 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	faceplayer
# 453 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	speakername RuinsOfAhiyawa_EliteFour_EventScript_OricorioBaile_Text_0
# 454 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	playmoncry SPECIES_ORICORIO, CRY_MODE_NORMAL
# 455 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_EventScript_OricorioBaile_Text_1
# 456 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	waitmoncry
# 457 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 458 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	release
	end


RuinsOfAhiyawa_EliteFour_EventScript_Mandibuzz::
# 464 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	lock
# 465 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	faceplayer
# 466 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	speakername RuinsOfAhiyawa_EliteFour_EventScript_Mandibuzz_Text_0
# 467 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	playmoncry SPECIES_MANDIBUZZ, CRY_MODE_NORMAL
# 468 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_EventScript_Mandibuzz_Text_1
# 469 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	waitmoncry
# 470 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 471 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	release
	end


RuinsOfAhiyawa_EliteFour_Rhadine::
# 477 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	lock
# 478 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	faceplayer
# 479 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	speakername RuinsOfAhiyawa_EliteFour_Rhadine_Text_0
# 482 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	goto_if_set FLAG_ELITE_FOUR_DEFEATED_RHADINE, RuinsOfAhiyawa_EliteFour_Rhadine_2
# 490 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_Rhadine_Text_1
# 491 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 493 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	goto_if_unset FLAG_HARD_MODE, RuinsOfAhiyawa_EliteFour_Rhadine_5
# 499 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITEFOUR_RHADINE_HARD, RuinsOfAhiyawa_EliteFour_RhadineLoseText
RuinsOfAhiyawa_EliteFour_Rhadine_4:
# 502 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	setflag FLAG_ELITE_FOUR_DEFEATED_RHADINE
# 503 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	delay 10
# 504 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	speakername RuinsOfAhiyawa_EliteFour_Rhadine_Text_0
# 505 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_Rhadine_Text_2
# 506 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 507 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	release
	end

RuinsOfAhiyawa_EliteFour_Rhadine_2:
# 484 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	msgbox RuinsOfAhiyawa_EliteFour_Polymnia_Text_1
# 485 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	closemessage
# 486 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	release
	end

RuinsOfAhiyawa_EliteFour_Rhadine_5:
# 495 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITEFOUR_RHADINE, RuinsOfAhiyawa_EliteFour_RhadineLoseText
	goto RuinsOfAhiyawa_EliteFour_Rhadine_4


RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_Text_0:
# 10 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Polymnia must be challenged before\n"
	.string "moving on!$"

RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_Text_1:
# 19 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Continue to the next challenge?$"

RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_Text_2:
# 33 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Terpsikore must be challenged before\n"
	.string "moving on!$"

RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_Text_3:
# 56 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Euterpe must be challenged before\n"
	.string "moving on!$"

RuinsOfAhiyawa_EliteFour_TryToLeaveRoom_Text_4:
# 79 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Rhadine must be challenged before\n"
	.string "moving on!$"

RuinsOfAhiyawa_EliteFour_EventScript_Jumpluff_Text_0:
# 141 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Jumpluff$"

RuinsOfAhiyawa_EliteFour_EventScript_Jumpluff_Text_1:
# 143 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Chee jee!$"

RuinsOfAhiyawa_EliteFour_EventScript_Ribombee_Text_0:
# 154 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Ribombee$"

RuinsOfAhiyawa_EliteFour_EventScript_Ribombee_Text_1:
# 156 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Bzz-tee!$"

RuinsOfAhiyawa_EliteFour_Polymnia_Text_0:
# 167 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Polymnia$"

RuinsOfAhiyawa_EliteFour_Polymnia_Text_1:
# 172 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "That was an incredible battle. Please,\n"
	.string "continue the challenge ahead!$"

RuinsOfAhiyawa_EliteFour_Polymnia_Text_2:
# 178 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "{PLAYER}, I'd like to welcome you to\n"
	.string "the Elite Four! Seeing how far you've\l"
	.string "come as a Trainer makes me proud... I\l"
	.string "still remember your first time in my Gym,\l"
	.string "ehehe!\p"
	.string "Right, I suppose we should get straight\n"
	.string "to business. As the first member of the\l"
	.string "newly-formed Elite Four, I challenge\l"
	.string "you to battle!$"

RuinsOfAhiyawa_EliteFour_Polymnia_Text_3:
# 193 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Huff, puff... That was quite the battle,\n"
	.string "{PLAYER}! I'll allow you to pass to the\l"
	.string "{COLOR GREEN}next room{COLOR DARK_GRAY}. Good luck with your\l"
	.string "challenge!$"

RuinsOfAhiyawa_EliteFour_EventScript_BraviaryHisuian_Text_0:
# 245 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Braviary$"

RuinsOfAhiyawa_EliteFour_EventScript_BraviaryHisuian_Text_1:
# 247 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Kreeaww!$"

RuinsOfAhiyawa_EliteFour_EventScript_Falinks_Text_0:
# 258 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Falinks$"

RuinsOfAhiyawa_EliteFour_EventScript_Falinks_Text_1:
# 260 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Hmph umph!$"

RuinsOfAhiyawa_EliteFour_Terpsikore_Text_0:
# 271 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Terpsikore$"

RuinsOfAhiyawa_EliteFour_Terpsikore_Text_1:
# 282 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Opa, you made it through Polymnia! Ever\n"
	.string "since you helped me out in {COLOR GREEN}Satyr's Lair{COLOR DARK_GRAY}\l"
	.string "back in Sofos City, I knew you were\l"
	.string "something special.\p"
	.string "As you know, I'm the Muse of Dance,\n"
	.string "which means that balance is key to me.\l"
	.string "Show me your most graceful moves!$"

RuinsOfAhiyawa_EliteFour_Terpsikore_Text_2:
# 297 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "I'll never forget the way you move with\n"
	.string "your Pokémon, {PLAYER}. Please,\l"
	.string "continue through the next door to\l"
	.string "continue your challenge!$"

RuinsOfAhiyawa_EliteFour_EventScript_Tentacruel_Text_0:
# 349 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Tentacruel$"

RuinsOfAhiyawa_EliteFour_EventScript_Tentacruel_Text_1:
# 351 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Blubbluh!$"

RuinsOfAhiyawa_EliteFour_EventScript_Gyarados_Text_0:
# 362 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Gyarados$"

RuinsOfAhiyawa_EliteFour_EventScript_Gyarados_Text_1:
# 364 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Grayaaa!!$"

RuinsOfAhiyawa_EliteFour_Euterpe_Text_0:
# 375 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Euterpe$"

RuinsOfAhiyawa_EliteFour_Euterpe_Text_1:
# 386 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Making it this far is cause for\n"
	.string "celebration! But I'm gonna have to end\l"
	.string "your little challenge here, {PLAYER}.\p"
	.string "Get ready - I'm ending your party and\n"
	.string "starting my own!$"

RuinsOfAhiyawa_EliteFour_Euterpe_Text_2:
# 401 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "I'll never forget your moves! You've\n"
	.string "earned your place as a proper Elite Four\l"
	.string "challenger, that's for sure. Please,\l"
	.string "continue through the following door\l"
	.string "and face the final Elite Four member!$"

RuinsOfAhiyawa_EliteFour_EventScript_OricorioBaile_Text_0:
# 453 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Oricorio$"

RuinsOfAhiyawa_EliteFour_EventScript_OricorioBaile_Text_1:
# 455 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Tweedeeyee!$"

RuinsOfAhiyawa_EliteFour_EventScript_Mandibuzz_Text_0:
# 466 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Mandibuzz$"

RuinsOfAhiyawa_EliteFour_EventScript_Mandibuzz_Text_1:
# 468 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Byaaah!$"

RuinsOfAhiyawa_EliteFour_Rhadine_Text_0:
# 479 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Rhadine$"

RuinsOfAhiyawa_EliteFour_Rhadine_Text_1:
# 490 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "{PLAYER}... I'm so, so glad you made it\n"
	.string "this far! It feels like years since we\l"
	.string "stood in the Sofos Acropolis Temple,\l"
	.string "gazing up at Team Chimera's Legendary\l"
	.string "Beasts with clenched fists. Now,\l"
	.string "they've been defeated, and we stand\l"
	.string "triumphant.\p"
	.string "Of course, there's still a challenge\n"
	.string "ahead of you - it's me! Show me your\l"
	.string "fiery spirit in battle!$"

RuinsOfAhiyawa_EliteFour_Rhadine_Text_2:
# 505 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Kehehe, you've beaten me, and with that,\n"
	.string "you've won your challenge!\p"
	.string "...Well, you've ALMOST won. What, did you\n"
	.string "think we didn't have a Champion? A\l"
	.string "{COLOR GREEN}powerful Trainer{COLOR DARK_GRAY} from Ilios, exploring\l"
	.string "other regions for years, has returned\l"
	.string "to battle you.\p"
	.string "Continue through the door behind me nd\n"
	.string "face one final battle. Only then can you\l"
	.string "become the Champion of Ilios!$"

RuinsOfAhiyawa_EliteFour_PolymniaLoseText::
# 198 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "You've bloomed like a beautiful garden!$"

RuinsOfAhiyawa_EliteFour_TerpsikoreLoseText::
# 302 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Your Pokémon dance nearly as well as\n"
	.string "mine!$"

RuinsOfAhiyawa_EliteFour_EuterpeLoseText::
# 406 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "You're truly entertaining!$"

RuinsOfAhiyawa_EliteFour_RhadineLoseText::
# 510 "data/maps/RuinsOfAhiyawa_E4_Room1/scripts.pory"
	.string "Your fire grows brighter and brighter!$"

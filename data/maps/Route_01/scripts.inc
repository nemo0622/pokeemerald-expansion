Route_01_MapScripts::
	.byte 0


Route_01_Trigger_YungoosEncounter_Left::
# 7 "data//maps/Route_01/scripts.pory"
	lockall
# 8 "data//maps/Route_01/scripts.pory"
	goto_if_unset FLAG_HIDE_SAMSON_ROUTE_01, Route_01_Trigger_YungoosEncounter_Left_2
# 17 "data//maps/Route_01/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_QUESTION
# 18 "data//maps/Route_01/scripts.pory"
	delay 10
# 19 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 20 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 21 "data//maps/Route_01/scripts.pory"
	goto Route_01_Script_YungoosEncounter
	end

Route_01_Trigger_YungoosEncounter_Left_2:
# 10 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Trigger_YungoosEncounter_Left_Text_0
# 11 "data//maps/Route_01/scripts.pory"
	closemessage
# 12 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Trigger_YungoosEncounter_Left_Movement_0
# 13 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 14 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Trigger_YungoosEncounter_Right::
# 26 "data//maps/Route_01/scripts.pory"
	lockall
# 27 "data//maps/Route_01/scripts.pory"
	goto_if_unset FLAG_HIDE_SAMSON_ROUTE_01, Route_01_Trigger_YungoosEncounter_Right_2
# 36 "data//maps/Route_01/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_QUESTION
# 37 "data//maps/Route_01/scripts.pory"
	delay 10
# 38 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 39 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 40 "data//maps/Route_01/scripts.pory"
	goto Route_01_Script_YungoosEncounter
	end

Route_01_Trigger_YungoosEncounter_Right_2:
# 29 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Trigger_YungoosEncounter_Left_Text_0
# 30 "data//maps/Route_01/scripts.pory"
	closemessage
# 31 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Trigger_YungoosEncounter_Left_Movement_0
# 32 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 33 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Trigger_YungoosEncounter_Middle::
# 45 "data//maps/Route_01/scripts.pory"
	lockall
# 46 "data//maps/Route_01/scripts.pory"
	goto_if_unset FLAG_HIDE_SAMSON_ROUTE_01, Route_01_Trigger_YungoosEncounter_Middle_2
# 55 "data//maps/Route_01/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_QUESTION
# 56 "data//maps/Route_01/scripts.pory"
	delay 10
# 57 "data//maps/Route_01/scripts.pory"
	goto Route_01_Script_YungoosEncounter
	end

Route_01_Trigger_YungoosEncounter_Middle_2:
# 48 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Trigger_YungoosEncounter_Left_Text_0
# 49 "data//maps/Route_01/scripts.pory"
	closemessage
# 50 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Trigger_YungoosEncounter_Left_Movement_0
# 51 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 52 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Trigger_RequireStarter::
# 62 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Trigger_YungoosEncounter_Left_Text_0
# 63 "data//maps/Route_01/scripts.pory"
	closemessage
# 64 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Trigger_RequireStarter_Movement_0
# 65 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 66 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Trigger_RequireStarterMoveDown::
# 71 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Trigger_YungoosEncounter_Left_Text_0
# 72 "data//maps/Route_01/scripts.pory"
	closemessage
# 73 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Trigger_RequireStarterMoveDown_Movement_0
# 74 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 75 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Script_YungoosEncounter::
# 81 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_YungoosEncounter_Movement_0
# 82 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 84 "data//maps/Route_01/scripts.pory"
	clearflag FLAG_HIDE_YUNGOOS_ROUTE_01
# 85 "data//maps/Route_01/scripts.pory"
	addobject 1
# 86 "data//maps/Route_01/scripts.pory"
	applymovement 1, Route_01_Script_YungoosEncounter_Movement_1
# 87 "data//maps/Route_01/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_EXCLAM
# 88 "data//maps/Route_01/scripts.pory"
	waitmovement 1
# 90 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_0
# 91 "data//maps/Route_01/scripts.pory"
	closemessage
# 93 "data//maps/Route_01/scripts.pory"
	delay 15
# 94 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_1
# 95 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_YUNGOOS, CRY_MODE_NORMAL
# 96 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_2
# 97 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 98 "data//maps/Route_01/scripts.pory"
	closemessage
# 99 "data//maps/Route_01/scripts.pory"
	delay 15
# 102 "data//maps/Route_01/scripts.pory"
	clearflag FLAG_HIDE_STARTERS_ROUTE_01
# 103 "data//maps/Route_01/scripts.pory"
	addobject 2
# 104 "data//maps/Route_01/scripts.pory"
	addobject 3
# 105 "data//maps/Route_01/scripts.pory"
	addobject 4
# 106 "data//maps/Route_01/scripts.pory"
	applymovement 2, Route_01_Script_YungoosEncounter_Movement_2
# 107 "data//maps/Route_01/scripts.pory"
	applymovement 3, Route_01_Script_YungoosEncounter_Movement_3
# 108 "data//maps/Route_01/scripts.pory"
	applymovement 4, Route_01_Script_YungoosEncounter_Movement_4
# 109 "data//maps/Route_01/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_EXCLAM
# 110 "data//maps/Route_01/scripts.pory"
	waitmovement 4
# 111 "data//maps/Route_01/scripts.pory"
	delay 15
# 114 "data//maps/Route_01/scripts.pory"
	applymovement 2, Route_01_Script_YungoosEncounter_Movement_5
# 115 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_ROWLET, CRY_MODE_NORMAL
# 116 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_3
# 117 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 118 "data//maps/Route_01/scripts.pory"
	closemessage
# 119 "data//maps/Route_01/scripts.pory"
	delay 10
# 120 "data//maps/Route_01/scripts.pory"
	applymovement 3, Route_01_Script_YungoosEncounter_Movement_5
# 121 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_NORMAL
# 122 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_4
# 123 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 124 "data//maps/Route_01/scripts.pory"
	closemessage
# 125 "data//maps/Route_01/scripts.pory"
	delay 10
# 126 "data//maps/Route_01/scripts.pory"
	applymovement 4, Route_01_Script_YungoosEncounter_Movement_5
# 127 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_POPPLIO, CRY_MODE_NORMAL
# 128 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_5
# 129 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 130 "data//maps/Route_01/scripts.pory"
	closemessage
# 131 "data//maps/Route_01/scripts.pory"
	delay 30
# 134 "data//maps/Route_01/scripts.pory"
	emote 1, EMOTE_QUESTION
# 135 "data//maps/Route_01/scripts.pory"
	delay 20
# 136 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_1
# 137 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_YUNGOOS, CRY_MODE_NORMAL
# 138 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_6
# 139 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 140 "data//maps/Route_01/scripts.pory"
	closemessage
# 141 "data//maps/Route_01/scripts.pory"
	delay 10
# 142 "data//maps/Route_01/scripts.pory"
	applymovement 1, Route_01_Script_YungoosEncounter_Movement_6
# 143 "data//maps/Route_01/scripts.pory"
	waitmovement 1
# 144 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_7
# 145 "data//maps/Route_01/scripts.pory"
	closemessage
# 146 "data//maps/Route_01/scripts.pory"
	delay 20
# 149 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_8
# 150 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_9
# 151 "data//maps/Route_01/scripts.pory"
	closemessage
# 152 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 153 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 154 "data//maps/Route_01/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_QUESTION
# 155 "data//maps/Route_01/scripts.pory"
	delay 10
# 158 "data//maps/Route_01/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 159 "data//maps/Route_01/scripts.pory"
	delay 20
# 160 "data//maps/Route_01/scripts.pory"
	setflag FLAG_HIDE_YUNGOOS_ROUTE_01
# 161 "data//maps/Route_01/scripts.pory"
	removeobject 1
# 162 "data//maps/Route_01/scripts.pory"
	clearflag FLAG_HIDE_SAMSON_ROUTE_01
# 163 "data//maps/Route_01/scripts.pory"
	addobject 5
# 164 "data//maps/Route_01/scripts.pory"
	addobject 6
# 165 "data//maps/Route_01/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 166 "data//maps/Route_01/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 167 "data//maps/Route_01/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 168 "data//maps/Route_01/scripts.pory"
	delay 20
# 169 "data//maps/Route_01/scripts.pory"
	applymovement 5, Route_01_Script_YungoosEncounter_Movement_7
# 170 "data//maps/Route_01/scripts.pory"
	applymovement 6, Route_01_Script_YungoosEncounter_Movement_8
# 171 "data//maps/Route_01/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 172 "data//maps/Route_01/scripts.pory"
	delay 20
# 175 "data//maps/Route_01/scripts.pory"
	waitmovement 5
# 176 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 177 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 178 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_8
# 179 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_10
# 180 "data//maps/Route_01/scripts.pory"
	closemessage
# 181 "data//maps/Route_01/scripts.pory"
	delay 10
# 182 "data//maps/Route_01/scripts.pory"
	applymovement 6, Route_01_Script_YungoosEncounter_Movement_9
# 183 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 184 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_11
# 185 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_12
# 186 "data//maps/Route_01/scripts.pory"
	closemessage
# 187 "data//maps/Route_01/scripts.pory"
	delay 10
# 190 "data//maps/Route_01/scripts.pory"
	applymovement 6, Route_01_Script_YungoosEncounter_Movement_10
# 191 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_YungoosEncounter_Movement_11
# 192 "data//maps/Route_01/scripts.pory"
	waitmovement 6
# 193 "data//maps/Route_01/scripts.pory"
	delay 10
# 194 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_13
# 195 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_14
# 196 "data//maps/Route_01/scripts.pory"
	closemessage
# 199 "data//maps/Route_01/scripts.pory"
	delay 30
# 200 "data//maps/Route_01/scripts.pory"
	emote 5, EMOTE_EXCLAM
# 201 "data//maps/Route_01/scripts.pory"
	delay 10
# 202 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_YungoosEncounter_Movement_12
# 203 "data//maps/Route_01/scripts.pory"
	applymovement 5, Route_01_Script_YungoosEncounter_Movement_13
# 204 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 205 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_8
# 206 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_15
# 207 "data//maps/Route_01/scripts.pory"
	closemessage
# 209 "data//maps/Route_01/scripts.pory"
	applymovement 5, Route_01_Script_YungoosEncounter_Movement_14
# 210 "data//maps/Route_01/scripts.pory"
	applymovement 6, Route_01_Script_YungoosEncounter_Movement_15
# 211 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 214 "data//maps/Route_01/scripts.pory"
	call Common_EventScript_SaveGame
# 217 "data//maps/Route_01/scripts.pory"
	releaseall
	end


Route_01_Script_ProfKukui_StarterChoice::
# 223 "data//maps/Route_01/scripts.pory"
	lock
# 224 "data//maps/Route_01/scripts.pory"
	faceplayer
# 225 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_13
# 226 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_ProfKukui_StarterChoice_Text_0
# 227 "data//maps/Route_01/scripts.pory"
	closemessage
# 228 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Script_SamsonOak_StarterChoice::
# 233 "data//maps/Route_01/scripts.pory"
	lock
# 234 "data//maps/Route_01/scripts.pory"
	faceplayer
# 235 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_8
# 236 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_SamsonOak_StarterChoice_Text_0
# 237 "data//maps/Route_01/scripts.pory"
	closemessage
# 238 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Script_ChooseRowlet::
# 245 "data//maps/Route_01/scripts.pory"
	lock
# 246 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_ChooseRowlet_Text_0
# 247 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_ROWLET, CRY_MODE_NORMAL
# 248 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_3
# 249 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 250 "data//maps/Route_01/scripts.pory"
	closemessage
# 251 "data//maps/Route_01/scripts.pory"
	delay 10
# 252 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_ChooseRowlet_Text_1, MSGBOX_YESNO
# 253 "data//maps/Route_01/scripts.pory"
	closemessage
# 255 "data//maps/Route_01/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route_01_Script_ChooseRowlet_2
Route_01_Script_ChooseRowlet_1:
# 261 "data//maps/Route_01/scripts.pory"
	release
	end

Route_01_Script_ChooseRowlet_2:
# 257 "data//maps/Route_01/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_ROWLET
# 258 "data//maps/Route_01/scripts.pory"
	givemon SPECIES_ROWLET, 5
# 259 "data//maps/Route_01/scripts.pory"
	goto Route_01_Script_ReactToStarter
	goto Route_01_Script_ChooseRowlet_1


Route_01_Script_ChooseLitten::
# 266 "data//maps/Route_01/scripts.pory"
	lock
# 267 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_ChooseLitten_Text_0
# 268 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_NORMAL
# 269 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_4
# 270 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 271 "data//maps/Route_01/scripts.pory"
	closemessage
# 272 "data//maps/Route_01/scripts.pory"
	delay 10
# 273 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_ChooseLitten_Text_1, MSGBOX_YESNO
# 274 "data//maps/Route_01/scripts.pory"
	closemessage
# 276 "data//maps/Route_01/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route_01_Script_ChooseLitten_2
Route_01_Script_ChooseLitten_1:
# 282 "data//maps/Route_01/scripts.pory"
	release
	end

Route_01_Script_ChooseLitten_2:
# 278 "data//maps/Route_01/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_LITTEN
# 279 "data//maps/Route_01/scripts.pory"
	givemon SPECIES_LITTEN, 5
# 280 "data//maps/Route_01/scripts.pory"
	goto Route_01_Script_ReactToStarter
	goto Route_01_Script_ChooseLitten_1


Route_01_Script_ChoosePopplio::
# 287 "data//maps/Route_01/scripts.pory"
	lock
# 288 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_ChoosePopplio_Text_0
# 289 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_POPPLIO, CRY_MODE_NORMAL
# 290 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_5
# 291 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 292 "data//maps/Route_01/scripts.pory"
	closemessage
# 293 "data//maps/Route_01/scripts.pory"
	delay 10
# 294 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_ChoosePopplio_Text_1, MSGBOX_YESNO
# 295 "data//maps/Route_01/scripts.pory"
	closemessage
# 297 "data//maps/Route_01/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route_01_Script_ChoosePopplio_2
Route_01_Script_ChoosePopplio_1:
# 303 "data//maps/Route_01/scripts.pory"
	release
	end

Route_01_Script_ChoosePopplio_2:
# 299 "data//maps/Route_01/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_POPPLIO
# 300 "data//maps/Route_01/scripts.pory"
	givemon SPECIES_POPPLIO, 5
# 301 "data//maps/Route_01/scripts.pory"
	goto Route_01_Script_ReactToStarter
	goto Route_01_Script_ChoosePopplio_1


Route_01_Script_ReactToStarter::
# 309 "data//maps/Route_01/scripts.pory"
	lockall
# 310 "data//maps/Route_01/scripts.pory"
	setvar VAR_INTRO_STATE, 3
# 313 "data//maps/Route_01/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 315 "data//maps/Route_01/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_MON
# 316 "data//maps/Route_01/scripts.pory"
	message Route_01_Script_ReactToStarter_Text_0
# 317 "data//maps/Route_01/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 318 "data//maps/Route_01/scripts.pory"
	closemessage
# 319 "data//maps/Route_01/scripts.pory"
	delay 15
# 322 "data//maps/Route_01/scripts.pory"
	applymovement 5, Route_01_Script_ReactToStarter_Movement_0
# 323 "data//maps/Route_01/scripts.pory"
	applymovement 6, Route_01_Script_ReactToStarter_Movement_0
# 324 "data//maps/Route_01/scripts.pory"
	switch VAR_STARTER_MON
# 326 "data//maps/Route_01/scripts.pory"
	case SPECIES_ROWLET, Route_01_Script_ReactToStarter_3
# 329 "data//maps/Route_01/scripts.pory"
	case SPECIES_LITTEN, Route_01_Script_ReactToStarter_4
# 333 "data//maps/Route_01/scripts.pory"
	case SPECIES_POPPLIO, Route_01_Script_ReactToStarter_5
Route_01_Script_ReactToStarter_4:
# 331 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_ReactToStarter_Movement_3
# 332 "data//maps/Route_01/scripts.pory"
	applymovement 3, Route_01_Script_ReactToStarter_Movement_3
Route_01_Script_ReactToStarter_1:
# 337 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 340 "data//maps/Route_01/scripts.pory"
	delay 10
# 341 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_8
# 342 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_ReactToStarter_Text_1
# 343 "data//maps/Route_01/scripts.pory"
	closemessage
# 344 "data//maps/Route_01/scripts.pory"
	delay 10
# 345 "data//maps/Route_01/scripts.pory"
	applymovement 6, Route_01_Script_ReactToStarter_Movement_6
# 346 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_YungoosEncounter_Movement_11
# 347 "data//maps/Route_01/scripts.pory"
	waitmovement 6
# 348 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_13
# 349 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_ReactToStarter_Text_2
# 350 "data//maps/Route_01/scripts.pory"
	closemessage
# 352 "data//maps/Route_01/scripts.pory"
	delay 10
# 353 "data//maps/Route_01/scripts.pory"
	warpcontinuescript MAP_HAUOLI_OUTSKIRTS_PLAYERS_ROOM, 8, 11, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter
# 355 "data//maps/Route_01/scripts.pory"
	releaseall
	end

Route_01_Script_ReactToStarter_3:
# 327 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_ReactToStarter_Movement_1
# 328 "data//maps/Route_01/scripts.pory"
	applymovement 2, Route_01_Script_ReactToStarter_Movement_2
	goto Route_01_Script_ReactToStarter_1

Route_01_Script_ReactToStarter_5:
# 334 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_ReactToStarter_Movement_4
# 335 "data//maps/Route_01/scripts.pory"
	applymovement 4, Route_01_Script_ReactToStarter_Movement_5
	goto Route_01_Script_ReactToStarter_1


# 12 "data//maps/Route_01/scripts.pory"
Route_01_Trigger_YungoosEncounter_Left_Movement_0:
# 12 "data//maps/Route_01/scripts.pory"
	walk_up
# 12 "data//maps/Route_01/scripts.pory"
	step_end

# 64 "data//maps/Route_01/scripts.pory"
Route_01_Trigger_RequireStarter_Movement_0:
# 64 "data//maps/Route_01/scripts.pory"
	walk_right
# 64 "data//maps/Route_01/scripts.pory"
	step_end

# 73 "data//maps/Route_01/scripts.pory"
Route_01_Trigger_RequireStarterMoveDown_Movement_0:
# 73 "data//maps/Route_01/scripts.pory"
	walk_down
# 73 "data//maps/Route_01/scripts.pory"
	step_end

# 81 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_0:
# 81 "data//maps/Route_01/scripts.pory"
	walk_up
# 81 "data//maps/Route_01/scripts.pory"
	walk_up
# 81 "data//maps/Route_01/scripts.pory"
	walk_up
# 81 "data//maps/Route_01/scripts.pory"
	walk_up
# 81 "data//maps/Route_01/scripts.pory"
	delay_16
# 81 "data//maps/Route_01/scripts.pory"
	delay_16
# 81 "data//maps/Route_01/scripts.pory"
	delay_16
# 81 "data//maps/Route_01/scripts.pory"
	delay_16
# 81 "data//maps/Route_01/scripts.pory"
	face_left
# 81 "data//maps/Route_01/scripts.pory"
	delay_16
# 81 "data//maps/Route_01/scripts.pory"
	delay_16
# 81 "data//maps/Route_01/scripts.pory"
	face_right
# 81 "data//maps/Route_01/scripts.pory"
	delay_16
# 81 "data//maps/Route_01/scripts.pory"
	delay_16
# 81 "data//maps/Route_01/scripts.pory"
	face_up
# 81 "data//maps/Route_01/scripts.pory"
	step_end

# 86 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_1:
# 86 "data//maps/Route_01/scripts.pory"
	jump_left
# 86 "data//maps/Route_01/scripts.pory"
	delay_16
# 86 "data//maps/Route_01/scripts.pory"
	delay_16
# 86 "data//maps/Route_01/scripts.pory"
	walk_fast_down
# 86 "data//maps/Route_01/scripts.pory"
	walk_fast_down
# 86 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 86 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 86 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 86 "data//maps/Route_01/scripts.pory"
	step_end

# 106 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_2:
# 106 "data//maps/Route_01/scripts.pory"
	walk_right
# 106 "data//maps/Route_01/scripts.pory"
	walk_right
# 106 "data//maps/Route_01/scripts.pory"
	walk_right
# 106 "data//maps/Route_01/scripts.pory"
	walk_down
# 106 "data//maps/Route_01/scripts.pory"
	walk_right
# 106 "data//maps/Route_01/scripts.pory"
	walk_right
# 106 "data//maps/Route_01/scripts.pory"
	walk_right
# 106 "data//maps/Route_01/scripts.pory"
	walk_right
# 106 "data//maps/Route_01/scripts.pory"
	walk_up
# 106 "data//maps/Route_01/scripts.pory"
	face_up
# 106 "data//maps/Route_01/scripts.pory"
	step_end

# 107 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_3:
# 107 "data//maps/Route_01/scripts.pory"
	walk_down
# 107 "data//maps/Route_01/scripts.pory"
	walk_down
# 107 "data//maps/Route_01/scripts.pory"
	walk_down
# 107 "data//maps/Route_01/scripts.pory"
	walk_right
# 107 "data//maps/Route_01/scripts.pory"
	walk_down
# 107 "data//maps/Route_01/scripts.pory"
	walk_down
# 107 "data//maps/Route_01/scripts.pory"
	walk_right
# 107 "data//maps/Route_01/scripts.pory"
	face_up
# 107 "data//maps/Route_01/scripts.pory"
	step_end

# 108 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_4:
# 108 "data//maps/Route_01/scripts.pory"
	jump_left
# 108 "data//maps/Route_01/scripts.pory"
	jump_left
# 108 "data//maps/Route_01/scripts.pory"
	jump_left
# 108 "data//maps/Route_01/scripts.pory"
	jump_left
# 108 "data//maps/Route_01/scripts.pory"
	jump_left
# 108 "data//maps/Route_01/scripts.pory"
	delay_16
# 108 "data//maps/Route_01/scripts.pory"
	face_down
# 108 "data//maps/Route_01/scripts.pory"
	delay_16
# 108 "data//maps/Route_01/scripts.pory"
	face_right
# 108 "data//maps/Route_01/scripts.pory"
	delay_16
# 108 "data//maps/Route_01/scripts.pory"
	face_up
# 108 "data//maps/Route_01/scripts.pory"
	delay_16
# 108 "data//maps/Route_01/scripts.pory"
	walk_left
# 108 "data//maps/Route_01/scripts.pory"
	walk_left
# 108 "data//maps/Route_01/scripts.pory"
	face_up
# 108 "data//maps/Route_01/scripts.pory"
	step_end

# 114 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_5:
# 114 "data//maps/Route_01/scripts.pory"
	face_down
# 114 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 114 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 114 "data//maps/Route_01/scripts.pory"
	delay_16
# 114 "data//maps/Route_01/scripts.pory"
	delay_16
# 114 "data//maps/Route_01/scripts.pory"
	face_up
# 114 "data//maps/Route_01/scripts.pory"
	step_end

# 142 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_6:
# 142 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 142 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 142 "data//maps/Route_01/scripts.pory"
	delay_16
# 142 "data//maps/Route_01/scripts.pory"
	walk_fast_up
# 142 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 142 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 142 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 142 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 142 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 142 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 142 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 142 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 142 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 142 "data//maps/Route_01/scripts.pory"
	step_end

# 169 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_7:
# 169 "data//maps/Route_01/scripts.pory"
	walk_right
# 169 "data//maps/Route_01/scripts.pory"
	walk_right
# 169 "data//maps/Route_01/scripts.pory"
	walk_right
# 169 "data//maps/Route_01/scripts.pory"
	walk_right
# 169 "data//maps/Route_01/scripts.pory"
	walk_right
# 169 "data//maps/Route_01/scripts.pory"
	walk_right
# 169 "data//maps/Route_01/scripts.pory"
	face_up
# 169 "data//maps/Route_01/scripts.pory"
	step_end

# 170 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_8:
# 170 "data//maps/Route_01/scripts.pory"
	walk_right
# 170 "data//maps/Route_01/scripts.pory"
	walk_right
# 170 "data//maps/Route_01/scripts.pory"
	walk_right
# 170 "data//maps/Route_01/scripts.pory"
	walk_right
# 170 "data//maps/Route_01/scripts.pory"
	walk_up
# 170 "data//maps/Route_01/scripts.pory"
	face_right
# 170 "data//maps/Route_01/scripts.pory"
	step_end

# 182 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_9:
# 182 "data//maps/Route_01/scripts.pory"
	walk_down
# 182 "data//maps/Route_01/scripts.pory"
	walk_down
# 182 "data//maps/Route_01/scripts.pory"
	walk_right
# 182 "data//maps/Route_01/scripts.pory"
	step_end

# 190 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_10:
# 190 "data//maps/Route_01/scripts.pory"
	walk_up
# 190 "data//maps/Route_01/scripts.pory"
	face_right
# 190 "data//maps/Route_01/scripts.pory"
	step_end

# 191 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_11:
# 191 "data//maps/Route_01/scripts.pory"
	face_left
	step_end

# 202 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_12:
# 202 "data//maps/Route_01/scripts.pory"
	face_down
	step_end

# 203 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_13:
# 203 "data//maps/Route_01/scripts.pory"
	walk_in_place_slow_up
# 203 "data//maps/Route_01/scripts.pory"
	walk_in_place_slow_up
# 203 "data//maps/Route_01/scripts.pory"
	face_up
# 203 "data//maps/Route_01/scripts.pory"
	step_end

# 209 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_14:
# 209 "data//maps/Route_01/scripts.pory"
	walk_down
# 209 "data//maps/Route_01/scripts.pory"
	face_up
# 209 "data//maps/Route_01/scripts.pory"
	step_end

# 210 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_15:
# 210 "data//maps/Route_01/scripts.pory"
	walk_down
# 210 "data//maps/Route_01/scripts.pory"
	walk_down
# 210 "data//maps/Route_01/scripts.pory"
	face_up
# 210 "data//maps/Route_01/scripts.pory"
	step_end

# 322 "data//maps/Route_01/scripts.pory"
Route_01_Script_ReactToStarter_Movement_0:
# 322 "data//maps/Route_01/scripts.pory"
	face_up
# 322 "data//maps/Route_01/scripts.pory"
	step_end

# 327 "data//maps/Route_01/scripts.pory"
Route_01_Script_ReactToStarter_Movement_1:
# 327 "data//maps/Route_01/scripts.pory"
	walk_right
# 327 "data//maps/Route_01/scripts.pory"
	walk_down
# 327 "data//maps/Route_01/scripts.pory"
	face_down
# 327 "data//maps/Route_01/scripts.pory"
	step_end

# 328 "data//maps/Route_01/scripts.pory"
Route_01_Script_ReactToStarter_Movement_2:
# 328 "data//maps/Route_01/scripts.pory"
	walk_down
# 328 "data//maps/Route_01/scripts.pory"
	walk_right
# 328 "data//maps/Route_01/scripts.pory"
	face_down
# 328 "data//maps/Route_01/scripts.pory"
	step_end

# 331 "data//maps/Route_01/scripts.pory"
Route_01_Script_ReactToStarter_Movement_3:
# 331 "data//maps/Route_01/scripts.pory"
	walk_down
# 331 "data//maps/Route_01/scripts.pory"
	face_down
# 331 "data//maps/Route_01/scripts.pory"
	step_end

# 334 "data//maps/Route_01/scripts.pory"
Route_01_Script_ReactToStarter_Movement_4:
# 334 "data//maps/Route_01/scripts.pory"
	walk_left
# 334 "data//maps/Route_01/scripts.pory"
	walk_down
# 334 "data//maps/Route_01/scripts.pory"
	face_down
# 334 "data//maps/Route_01/scripts.pory"
	step_end

# 335 "data//maps/Route_01/scripts.pory"
Route_01_Script_ReactToStarter_Movement_5:
# 335 "data//maps/Route_01/scripts.pory"
	walk_down
# 335 "data//maps/Route_01/scripts.pory"
	walk_left
# 335 "data//maps/Route_01/scripts.pory"
	face_down
# 335 "data//maps/Route_01/scripts.pory"
	step_end

# 345 "data//maps/Route_01/scripts.pory"
Route_01_Script_ReactToStarter_Movement_6:
# 345 "data//maps/Route_01/scripts.pory"
	walk_up
# 345 "data//maps/Route_01/scripts.pory"
	face_right
	step_end

Route_01_Trigger_YungoosEncounter_Left_Text_0:
# 10 "data//maps/Route_01/scripts.pory"
	.string "Can't leave without a Pokémon!$"

Route_01_Script_YungoosEncounter_Text_0:
# 90 "data//maps/Route_01/scripts.pory"
	.string "The wild Pokémon looks furious!$"

Route_01_Script_YungoosEncounter_Text_1:
# 94 "data//maps/Route_01/scripts.pory"
	.string "Wild Yungoos$"

Route_01_Script_YungoosEncounter_Text_2:
# 96 "data//maps/Route_01/scripts.pory"
	.string "Grr-yeow!!$"

Route_01_Script_YungoosEncounter_Text_3:
# 116 "data//maps/Route_01/scripts.pory"
	.string "Koo!$"

Route_01_Script_YungoosEncounter_Text_4:
# 122 "data//maps/Route_01/scripts.pory"
	.string "Mrower...$"

Route_01_Script_YungoosEncounter_Text_5:
# 128 "data//maps/Route_01/scripts.pory"
	.string "Bwark?$"

Route_01_Script_YungoosEncounter_Text_6:
# 138 "data//maps/Route_01/scripts.pory"
	.string "Krr... RAH!$"

Route_01_Script_YungoosEncounter_Text_7:
# 144 "data//maps/Route_01/scripts.pory"
	.string "The Yungoos was scared off thanks to\n"
	.string "these three Pokémon!$"

Route_01_Script_YungoosEncounter_Text_8:
# 149 "data//maps/Route_01/scripts.pory"
	.string "Grandpa Samson$"

Route_01_Script_YungoosEncounter_Text_9:
# 150 "data//maps/Route_01/scripts.pory"
	.string "Aue! {PLAYER}! You found them!$"

Route_01_Script_YungoosEncounter_Text_10:
# 179 "data//maps/Route_01/scripts.pory"
	.string "We were on the way back from {COLOR GREEN}Iki Town{COLOR DARK_GRAY}\n"
	.string "when Rowlet, Litten, and Popplio ran\l"
	.string "off. How'd ya catch 'em?$"

Route_01_Script_YungoosEncounter_Text_11:
# 184 "data//maps/Route_01/scripts.pory"
	.string "???$"

Route_01_Script_YungoosEncounter_Text_12:
# 185 "data//maps/Route_01/scripts.pory"
	.string "Ha! Slow down, cousin! It looks like\n"
	.string "those three were saving them from a\l"
	.string "Yungoos.$"

Route_01_Script_YungoosEncounter_Text_13:
# 194 "data//maps/Route_01/scripts.pory"
	.string "Prof. Kukui$"

Route_01_Script_YungoosEncounter_Text_14:
# 195 "data//maps/Route_01/scripts.pory"
	.string "The name's Kukui, the Professor of\n"
	.string "Melemele Island! And by the sound of it,\l"
	.string "you're {PLAYER}, yeah?\n"
	.string "Welcome to Alola!\p"
	.string "Pokémon like to live in the grass around\n"
	.string "here. If you want to explore Alola,\l"
	.string "you'll need your own Pokémon to dish\l"
	.string "out some moves!$"

Route_01_Script_YungoosEncounter_Text_15:
# 206 "data//maps/Route_01/scripts.pory"
	.string "As it happens, I was in Iki Town picking\n"
	.string "up those {COLOR GREEN}three Pokémon{COLOR DARK_GRAY} to show you\l"
	.string "before they ran off.\p"
	.string "How about you {COLOR GREEN}pick one to be your\n"
	.string "partner{COLOR DARK_GRAY}? They all seem to like you well\l"
	.string "enough, ohoho!$"

Route_01_Script_ProfKukui_StarterChoice_Text_0:
# 226 "data//maps/Route_01/scripts.pory"
	.string "Somethin' wrong, {PLAYER}? Pick\n"
	.string "whichever Pokémon speaks to you the\l"
	.string "most, yeah!$"

Route_01_Script_SamsonOak_StarterChoice_Text_0:
# 236 "data//maps/Route_01/scripts.pory"
	.string "Go ahead, pick a Pokémon to join you!\n"
	.string "They're all quite rare, so choose wisely.$"

Route_01_Script_ChooseRowlet_Text_0:
# 246 "data//maps/Route_01/scripts.pory"
	.string "Rowlet$"

Route_01_Script_ChooseRowlet_Text_1:
# 252 "data//maps/Route_01/scripts.pory"
	.string "Tutu Samson mentioned this Pokémon!\n"
	.string "{COLOR GREEN}Rowlet{COLOR DARK_GRAY} likes to fly at night, tucking\l"
	.string "itself into corners during the day.\p"
	.string "Pick {COLOR GREEN}Rowlet{COLOR DARK_GRAY}, the Grass Quill Pokémon?$"

Route_01_Script_ChooseLitten_Text_0:
# 267 "data//maps/Route_01/scripts.pory"
	.string "Litten$"

Route_01_Script_ChooseLitten_Text_1:
# 273 "data//maps/Route_01/scripts.pory"
	.string "Tutu Samson mentioned this Pokémon!\n"
	.string "{COLOR RED}Litten{COLOR DARK_GRAY} acts aloof, but it loves Trainers\l"
	.string "who help keep its fur clean.\p"
	.string "Pick {COLOR RED}Litten{COLOR DARK_GRAY}, the Fire Cat Pokémon?$"

Route_01_Script_ChoosePopplio_Text_0:
# 288 "data//maps/Route_01/scripts.pory"
	.string "Popplio$"

Route_01_Script_ChoosePopplio_Text_1:
# 294 "data//maps/Route_01/scripts.pory"
	.string "Tutu Samson mentioned this Pokémon!\n"
	.string "{COLOR BLUE}Popplio{COLOR DARK_GRAY} loves to play, blowing bubbles\l"
	.string "and bouncing around on them to make a\l"
	.string "show.\p"
	.string "Pick {COLOR BLUE}Popplio{COLOR DARK_GRAY}, the Sea Lion Pokémon?$"

Route_01_Script_ReactToStarter_Text_0:
# 316 "data//maps/Route_01/scripts.pory"
	.string "You chose {STR_VAR_1} to be your\n"
	.string "partner!$"

Route_01_Script_ReactToStarter_Text_1:
# 342 "data//maps/Route_01/scripts.pory"
	.string "{STR_VAR_1}! I had a feeling that's\n"
	.string "who you would pick.\p"
	.string "Now, you thank Professor Kukui for that\n"
	.string "{STR_VAR_1} with a great big Alolan\l"
	.string "'Mahalo'. Those three Pokémon were\l"
	.string "originally his!$"

Route_01_Script_ReactToStarter_Text_2:
# 349 "data//maps/Route_01/scripts.pory"
	.string "Na-ah, don't sweat it, cousin! When I\n"
	.string "heard the great Samson Oak's own\l"
	.string "grandkid was moving back to Alola, I\l"
	.string "knew they'd shape up to be a Pokémon\l"
	.string "Trainer!\p"
	.string "I'll get the other two Pokémon back\n"
	.string "into their Poké Balls, then let's show\l"
	.string "your Mom your new friend!$"

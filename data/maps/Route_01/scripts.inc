Route_01_MapScripts::
	.byte 0


Route_01_Trigger_YungoosEncounter_Left::
# 9 "data//maps/Route_01/scripts.pory"
	lockall
# 10 "data//maps/Route_01/scripts.pory"
	goto_if_unset FLAG_HIDE_SAMSON_ROUTE_01, Route_01_Trigger_YungoosEncounter_Left_2
# 19 "data//maps/Route_01/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_QUESTION
# 20 "data//maps/Route_01/scripts.pory"
	delay 10
# 21 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 22 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 23 "data//maps/Route_01/scripts.pory"
	goto Route_01_Script_YungoosEncounter
	end

Route_01_Trigger_YungoosEncounter_Left_2:
# 12 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Trigger_YungoosEncounter_Left_Text_0
# 13 "data//maps/Route_01/scripts.pory"
	closemessage
# 14 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Trigger_YungoosEncounter_Left_Movement_0
# 15 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 16 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Trigger_YungoosEncounter_Right::
# 28 "data//maps/Route_01/scripts.pory"
	lockall
# 29 "data//maps/Route_01/scripts.pory"
	goto_if_unset FLAG_HIDE_SAMSON_ROUTE_01, Route_01_Trigger_YungoosEncounter_Right_2
# 38 "data//maps/Route_01/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_QUESTION
# 39 "data//maps/Route_01/scripts.pory"
	delay 10
# 40 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 41 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 42 "data//maps/Route_01/scripts.pory"
	goto Route_01_Script_YungoosEncounter
	end

Route_01_Trigger_YungoosEncounter_Right_2:
# 31 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Trigger_YungoosEncounter_Left_Text_0
# 32 "data//maps/Route_01/scripts.pory"
	closemessage
# 33 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Trigger_YungoosEncounter_Left_Movement_0
# 34 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 35 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Trigger_YungoosEncounter_Middle::
# 47 "data//maps/Route_01/scripts.pory"
	lockall
# 48 "data//maps/Route_01/scripts.pory"
	goto_if_unset FLAG_HIDE_SAMSON_ROUTE_01, Route_01_Trigger_YungoosEncounter_Middle_2
# 57 "data//maps/Route_01/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_QUESTION
# 58 "data//maps/Route_01/scripts.pory"
	delay 10
# 59 "data//maps/Route_01/scripts.pory"
	goto Route_01_Script_YungoosEncounter
	end

Route_01_Trigger_YungoosEncounter_Middle_2:
# 50 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Trigger_YungoosEncounter_Left_Text_0
# 51 "data//maps/Route_01/scripts.pory"
	closemessage
# 52 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Trigger_YungoosEncounter_Left_Movement_0
# 53 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 54 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Trigger_RequireStarter::
# 64 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Trigger_YungoosEncounter_Left_Text_0
# 65 "data//maps/Route_01/scripts.pory"
	closemessage
# 66 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Trigger_RequireStarter_Movement_0
# 67 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 68 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Trigger_RequireStarterMoveDown::
# 73 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Trigger_YungoosEncounter_Left_Text_0
# 74 "data//maps/Route_01/scripts.pory"
	closemessage
# 75 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Trigger_RequireStarterMoveDown_Movement_0
# 76 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 77 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Script_YungoosEncounter::
# 83 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_YungoosEncounter_Movement_0
# 84 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 86 "data//maps/Route_01/scripts.pory"
	clearflag FLAG_HIDE_YUNGOOS_ROUTE_01
# 87 "data//maps/Route_01/scripts.pory"
	addobject 1
# 88 "data//maps/Route_01/scripts.pory"
	applymovement 1, Route_01_Script_YungoosEncounter_Movement_1
# 89 "data//maps/Route_01/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_EXCLAM
# 90 "data//maps/Route_01/scripts.pory"
	waitmovement 1
# 92 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_0
# 93 "data//maps/Route_01/scripts.pory"
	closemessage
# 95 "data//maps/Route_01/scripts.pory"
	delay 15
# 96 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_1
# 97 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_YUNGOOS, CRY_MODE_NORMAL
# 98 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_2
# 99 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 100 "data//maps/Route_01/scripts.pory"
	closemessage
# 101 "data//maps/Route_01/scripts.pory"
	delay 15
# 104 "data//maps/Route_01/scripts.pory"
	clearflag FLAG_HIDE_STARTERS_ROUTE_01
# 105 "data//maps/Route_01/scripts.pory"
	addobject 2
# 106 "data//maps/Route_01/scripts.pory"
	addobject 3
# 107 "data//maps/Route_01/scripts.pory"
	addobject 4
# 108 "data//maps/Route_01/scripts.pory"
	applymovement 2, Route_01_Script_YungoosEncounter_Movement_2
# 109 "data//maps/Route_01/scripts.pory"
	applymovement 3, Route_01_Script_YungoosEncounter_Movement_3
# 110 "data//maps/Route_01/scripts.pory"
	applymovement 4, Route_01_Script_YungoosEncounter_Movement_4
# 111 "data//maps/Route_01/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_EXCLAM
# 112 "data//maps/Route_01/scripts.pory"
	waitmovement 4
# 113 "data//maps/Route_01/scripts.pory"
	delay 15
# 116 "data//maps/Route_01/scripts.pory"
	applymovement 2, Route_01_Script_YungoosEncounter_Movement_5
# 117 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_ROWLET, CRY_MODE_NORMAL
# 118 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_3
# 119 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 120 "data//maps/Route_01/scripts.pory"
	closemessage
# 121 "data//maps/Route_01/scripts.pory"
	delay 10
# 122 "data//maps/Route_01/scripts.pory"
	applymovement 3, Route_01_Script_YungoosEncounter_Movement_5
# 123 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_NORMAL
# 124 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_4
# 125 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 126 "data//maps/Route_01/scripts.pory"
	closemessage
# 127 "data//maps/Route_01/scripts.pory"
	delay 10
# 128 "data//maps/Route_01/scripts.pory"
	applymovement 4, Route_01_Script_YungoosEncounter_Movement_5
# 129 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_POPPLIO, CRY_MODE_NORMAL
# 130 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_5
# 131 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 132 "data//maps/Route_01/scripts.pory"
	closemessage
# 133 "data//maps/Route_01/scripts.pory"
	delay 30
# 136 "data//maps/Route_01/scripts.pory"
	emote 1, EMOTE_QUESTION
# 137 "data//maps/Route_01/scripts.pory"
	delay 20
# 138 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_1
# 139 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_YUNGOOS, CRY_MODE_NORMAL
# 140 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_6
# 141 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 142 "data//maps/Route_01/scripts.pory"
	closemessage
# 143 "data//maps/Route_01/scripts.pory"
	delay 10
# 144 "data//maps/Route_01/scripts.pory"
	applymovement 1, Route_01_Script_YungoosEncounter_Movement_6
# 145 "data//maps/Route_01/scripts.pory"
	waitmovement 1
# 146 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_7
# 147 "data//maps/Route_01/scripts.pory"
	closemessage
# 148 "data//maps/Route_01/scripts.pory"
	delay 20
# 151 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_8
# 152 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_9
# 153 "data//maps/Route_01/scripts.pory"
	closemessage
# 154 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 155 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 156 "data//maps/Route_01/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_QUESTION
# 157 "data//maps/Route_01/scripts.pory"
	delay 10
# 160 "data//maps/Route_01/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 161 "data//maps/Route_01/scripts.pory"
	delay 20
# 162 "data//maps/Route_01/scripts.pory"
	setflag FLAG_HIDE_YUNGOOS_ROUTE_01
# 163 "data//maps/Route_01/scripts.pory"
	removeobject 1
# 164 "data//maps/Route_01/scripts.pory"
	clearflag FLAG_HIDE_SAMSON_ROUTE_01
# 165 "data//maps/Route_01/scripts.pory"
	addobject 5
# 166 "data//maps/Route_01/scripts.pory"
	addobject 6
# 167 "data//maps/Route_01/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 168 "data//maps/Route_01/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 169 "data//maps/Route_01/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 170 "data//maps/Route_01/scripts.pory"
	delay 20
# 171 "data//maps/Route_01/scripts.pory"
	applymovement 5, Route_01_Script_YungoosEncounter_Movement_7
# 172 "data//maps/Route_01/scripts.pory"
	applymovement 6, Route_01_Script_YungoosEncounter_Movement_8
# 173 "data//maps/Route_01/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 174 "data//maps/Route_01/scripts.pory"
	delay 20
# 177 "data//maps/Route_01/scripts.pory"
	waitmovement 5
# 178 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 179 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 180 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_8
# 181 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_10
# 182 "data//maps/Route_01/scripts.pory"
	closemessage
# 183 "data//maps/Route_01/scripts.pory"
	delay 10
# 184 "data//maps/Route_01/scripts.pory"
	applymovement 6, Route_01_Script_YungoosEncounter_Movement_9
# 185 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 186 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_11
# 187 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_12
# 188 "data//maps/Route_01/scripts.pory"
	closemessage
# 189 "data//maps/Route_01/scripts.pory"
	delay 10
# 192 "data//maps/Route_01/scripts.pory"
	applymovement 6, Route_01_Script_YungoosEncounter_Movement_10
# 193 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_YungoosEncounter_Movement_11
# 194 "data//maps/Route_01/scripts.pory"
	waitmovement 6
# 195 "data//maps/Route_01/scripts.pory"
	delay 10
# 196 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_13
# 197 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_14
# 198 "data//maps/Route_01/scripts.pory"
	closemessage
# 201 "data//maps/Route_01/scripts.pory"
	delay 30
# 202 "data//maps/Route_01/scripts.pory"
	emote 5, EMOTE_EXCLAM
# 203 "data//maps/Route_01/scripts.pory"
	delay 10
# 204 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_YungoosEncounter_Movement_12
# 205 "data//maps/Route_01/scripts.pory"
	applymovement 5, Route_01_Script_YungoosEncounter_Movement_13
# 206 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 207 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_8
# 208 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_15
# 209 "data//maps/Route_01/scripts.pory"
	closemessage
# 211 "data//maps/Route_01/scripts.pory"
	applymovement 5, Route_01_Script_YungoosEncounter_Movement_14
# 212 "data//maps/Route_01/scripts.pory"
	applymovement 6, Route_01_Script_YungoosEncounter_Movement_15
# 213 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 216 "data//maps/Route_01/scripts.pory"
	call Common_EventScript_SaveGame
# 219 "data//maps/Route_01/scripts.pory"
	releaseall
	end


Route_01_Script_ProfKukui_StarterChoice::
# 225 "data//maps/Route_01/scripts.pory"
	lock
# 226 "data//maps/Route_01/scripts.pory"
	faceplayer
# 227 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_13
# 228 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_ProfKukui_StarterChoice_Text_0
# 229 "data//maps/Route_01/scripts.pory"
	closemessage
# 230 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Script_SamsonOak_StarterChoice::
# 235 "data//maps/Route_01/scripts.pory"
	lock
# 236 "data//maps/Route_01/scripts.pory"
	faceplayer
# 237 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_8
# 238 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_SamsonOak_StarterChoice_Text_0
# 239 "data//maps/Route_01/scripts.pory"
	closemessage
# 240 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Script_ChooseRowlet::
# 247 "data//maps/Route_01/scripts.pory"
	lock
# 248 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_ChooseRowlet_Text_0
# 249 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_ROWLET, CRY_MODE_NORMAL
# 250 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_3
# 251 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 252 "data//maps/Route_01/scripts.pory"
	closemessage
# 253 "data//maps/Route_01/scripts.pory"
	delay 10
# 254 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_ChooseRowlet_Text_1, MSGBOX_YESNO
# 255 "data//maps/Route_01/scripts.pory"
	closemessage
# 257 "data//maps/Route_01/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route_01_Script_ChooseRowlet_2
Route_01_Script_ChooseRowlet_1:
# 263 "data//maps/Route_01/scripts.pory"
	release
	end

Route_01_Script_ChooseRowlet_2:
# 259 "data//maps/Route_01/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_ROWLET
# 260 "data//maps/Route_01/scripts.pory"
	givemon SPECIES_ROWLET, 5
# 261 "data//maps/Route_01/scripts.pory"
	goto Route_01_Script_ReactToStarter
	goto Route_01_Script_ChooseRowlet_1


Route_01_Script_ChooseLitten::
# 268 "data//maps/Route_01/scripts.pory"
	lock
# 269 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_ChooseLitten_Text_0
# 270 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_NORMAL
# 271 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_4
# 272 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 273 "data//maps/Route_01/scripts.pory"
	closemessage
# 274 "data//maps/Route_01/scripts.pory"
	delay 10
# 275 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_ChooseLitten_Text_1, MSGBOX_YESNO
# 276 "data//maps/Route_01/scripts.pory"
	closemessage
# 278 "data//maps/Route_01/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route_01_Script_ChooseLitten_2
Route_01_Script_ChooseLitten_1:
# 284 "data//maps/Route_01/scripts.pory"
	release
	end

Route_01_Script_ChooseLitten_2:
# 280 "data//maps/Route_01/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_LITTEN
# 281 "data//maps/Route_01/scripts.pory"
	givemon SPECIES_LITTEN, 5
# 282 "data//maps/Route_01/scripts.pory"
	goto Route_01_Script_ReactToStarter
	goto Route_01_Script_ChooseLitten_1


Route_01_Script_ChoosePopplio::
# 289 "data//maps/Route_01/scripts.pory"
	lock
# 290 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_ChoosePopplio_Text_0
# 291 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_POPPLIO, CRY_MODE_NORMAL
# 292 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_5
# 293 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 294 "data//maps/Route_01/scripts.pory"
	closemessage
# 295 "data//maps/Route_01/scripts.pory"
	delay 10
# 296 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_ChoosePopplio_Text_1, MSGBOX_YESNO
# 297 "data//maps/Route_01/scripts.pory"
	closemessage
# 299 "data//maps/Route_01/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route_01_Script_ChoosePopplio_2
Route_01_Script_ChoosePopplio_1:
# 305 "data//maps/Route_01/scripts.pory"
	release
	end

Route_01_Script_ChoosePopplio_2:
# 301 "data//maps/Route_01/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_POPPLIO
# 302 "data//maps/Route_01/scripts.pory"
	givemon SPECIES_POPPLIO, 5
# 303 "data//maps/Route_01/scripts.pory"
	goto Route_01_Script_ReactToStarter
	goto Route_01_Script_ChoosePopplio_1


Route_01_Script_ReactToStarter::
# 311 "data//maps/Route_01/scripts.pory"
	lockall
# 312 "data//maps/Route_01/scripts.pory"
	setvar VAR_INTRO_STATE, 3
# 315 "data//maps/Route_01/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 317 "data//maps/Route_01/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_MON
# 318 "data//maps/Route_01/scripts.pory"
	message Route_01_Script_ReactToStarter_Text_0
# 319 "data//maps/Route_01/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 320 "data//maps/Route_01/scripts.pory"
	closemessage
# 321 "data//maps/Route_01/scripts.pory"
	delay 15
# 324 "data//maps/Route_01/scripts.pory"
	applymovement 5, Route_01_Script_ReactToStarter_Movement_0
# 325 "data//maps/Route_01/scripts.pory"
	applymovement 6, Route_01_Script_ReactToStarter_Movement_0
# 326 "data//maps/Route_01/scripts.pory"
	switch VAR_STARTER_MON
# 328 "data//maps/Route_01/scripts.pory"
	case SPECIES_ROWLET, Route_01_Script_ReactToStarter_3
# 331 "data//maps/Route_01/scripts.pory"
	case SPECIES_LITTEN, Route_01_Script_ReactToStarter_4
# 335 "data//maps/Route_01/scripts.pory"
	case SPECIES_POPPLIO, Route_01_Script_ReactToStarter_5
Route_01_Script_ReactToStarter_4:
# 333 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_ReactToStarter_Movement_3
# 334 "data//maps/Route_01/scripts.pory"
	applymovement 3, Route_01_Script_ReactToStarter_Movement_3
Route_01_Script_ReactToStarter_1:
# 339 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 342 "data//maps/Route_01/scripts.pory"
	delay 10
# 343 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_8
# 344 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_ReactToStarter_Text_1
# 345 "data//maps/Route_01/scripts.pory"
	closemessage
# 346 "data//maps/Route_01/scripts.pory"
	delay 10
# 347 "data//maps/Route_01/scripts.pory"
	applymovement 6, Route_01_Script_ReactToStarter_Movement_6
# 348 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_YungoosEncounter_Movement_11
# 349 "data//maps/Route_01/scripts.pory"
	waitmovement 6
# 350 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_13
# 351 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_ReactToStarter_Text_2
# 352 "data//maps/Route_01/scripts.pory"
	closemessage
# 354 "data//maps/Route_01/scripts.pory"
	delay 10
# 355 "data//maps/Route_01/scripts.pory"
	warpcontinuescript MAP_HAUOLI_OUTSKIRTS_PLAYERS_ROOM, 8, 11, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter
# 357 "data//maps/Route_01/scripts.pory"
	releaseall
	end

Route_01_Script_ReactToStarter_3:
# 329 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_ReactToStarter_Movement_1
# 330 "data//maps/Route_01/scripts.pory"
	applymovement 2, Route_01_Script_ReactToStarter_Movement_2
	goto Route_01_Script_ReactToStarter_1

Route_01_Script_ReactToStarter_5:
# 336 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_ReactToStarter_Movement_4
# 337 "data//maps/Route_01/scripts.pory"
	applymovement 4, Route_01_Script_ReactToStarter_Movement_5
	goto Route_01_Script_ReactToStarter_1


Route_01_Script_HauIntro::
# 363 "data//maps/Route_01/scripts.pory"
	lock
# 364 "data//maps/Route_01/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 365 "data//maps/Route_01/scripts.pory"
	switch VAR_TEMP_1
# 367 "data//maps/Route_01/scripts.pory"
	case 10, Route_01_Script_HauIntro_3
# 369 "data//maps/Route_01/scripts.pory"
	case 12, Route_01_Script_HauIntro_4
# 372 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
Route_01_Script_HauIntro_1:
# 374 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 375 "data//maps/Route_01/scripts.pory"
	emote LOCALID_HAU_ROUTE01, EMOTE_EXCLAM
# 376 "data//maps/Route_01/scripts.pory"
	delay 10
# 378 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_HAU_ROUTE01, Common_Movement_WalkDown
# 379 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 380 "data//maps/Route_01/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_MON
# 381 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_11
# 382 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_HauIntro_Text_0
# 384 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_HauIntro_Text_1
# 385 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_HauIntro_Text_2
# 386 "data//maps/Route_01/scripts.pory"
	closemessage
# 387 "data//maps/Route_01/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 388 "data//maps/Route_01/scripts.pory"
	closemessage
# 389 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_HauIntro_Text_1
# 390 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_HauIntro_Text_3
# 391 "data//maps/Route_01/scripts.pory"
	closemessage
# 392 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_HAU_ROUTE01, Route_01_Script_HauIntro_Movement_2
# 393 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 395 "data//maps/Route_01/scripts.pory"
	setflag FLAG_HIDE_HAU_ROUTE_01
# 396 "data//maps/Route_01/scripts.pory"
	removeobject LOCALID_HAU_ROUTE01
# 397 "data//maps/Route_01/scripts.pory"
	setvar VAR_INTRO_STATE, 4
# 399 "data//maps/Route_01/scripts.pory"
	releaseall
	end

Route_01_Script_HauIntro_3:
# 368 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_HauIntro_Movement_0
	goto Route_01_Script_HauIntro_1

Route_01_Script_HauIntro_4:
# 370 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_HauIntro_Movement_1
	goto Route_01_Script_HauIntro_1


Route_01_Sign_Directions::
# 407 "data//maps/Route_01/scripts.pory"
	lock
# 408 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Sign_Directions_Text_0
# 409 "data//maps/Route_01/scripts.pory"
	closemessage
# 410 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Trainer_LassAudrey::
# 418 "data//maps/Route_01/scripts.pory"
	trainerbattle_single TRAINER_LASS_AUDREY, Route_01_Trainer_LassAudrey_Text_0, Route_01_Trainer_LassAudrey_Text_1
# 422 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Trainer_LassAudrey_Text_2
# 423 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Trainer_LassAudrey_Text_3
# 424 "data//maps/Route_01/scripts.pory"
	closemessage
# 425 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Trainer_YoungsterJimmy::
# 431 "data//maps/Route_01/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_JIMMY, Route_01_Trainer_YoungsterJimmy_Text_0, Route_01_Trainer_YoungsterJimmy_Text_1
# 435 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Trainer_YoungsterJimmy_Text_2
# 436 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Trainer_YoungsterJimmy_Text_3
# 437 "data//maps/Route_01/scripts.pory"
	closemessage
# 438 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Trainer_SchoolBoyOliver::
# 444 "data//maps/Route_01/scripts.pory"
	trainerbattle_single TRAINER_SCHOOL_BOY_OLIVER, Route_01_Trainer_SchoolBoyOliver_Text_0, Route_01_Trainer_SchoolBoyOliver_Text_1
# 448 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Trainer_SchoolBoyOliver_Text_2
# 449 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Trainer_SchoolBoyOliver_Text_3
# 450 "data//maps/Route_01/scripts.pory"
	closemessage
# 451 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_NPC_BugCatcher::
# 457 "data//maps/Route_01/scripts.pory"
	lock
# 458 "data//maps/Route_01/scripts.pory"
	faceplayer
# 459 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_NPC_BugCatcher_Text_0
# 460 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_NPC_BugCatcher_Text_1
# 461 "data//maps/Route_01/scripts.pory"
	closemessage
# 462 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_NPC_SightseerF::
# 468 "data//maps/Route_01/scripts.pory"
	lock
# 469 "data//maps/Route_01/scripts.pory"
	faceplayer
# 470 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_NPC_SightseerF_Text_0
# 471 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_NPC_SightseerF_Text_1
# 472 "data//maps/Route_01/scripts.pory"
	closemessage
# 473 "data//maps/Route_01/scripts.pory"
	applymovement VAR_LAST_TALKED, Route_01_Script_YungoosEncounter_Movement_11
# 474 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 475 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_NPC_Rockruff::
# 481 "data//maps/Route_01/scripts.pory"
	lock
# 482 "data//maps/Route_01/scripts.pory"
	faceplayer
# 483 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_NPC_Rockruff_Text_0
# 484 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 485 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_NPC_Rockruff_Text_1
# 486 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 487 "data//maps/Route_01/scripts.pory"
	closemessage
# 488 "data//maps/Route_01/scripts.pory"
	applymovement VAR_LAST_TALKED, Route_01_NPC_Rockruff_Movement_0
# 489 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 490 "data//maps/Route_01/scripts.pory"
	release
	end


# 14 "data//maps/Route_01/scripts.pory"
Route_01_Trigger_YungoosEncounter_Left_Movement_0:
# 14 "data//maps/Route_01/scripts.pory"
	walk_up
# 14 "data//maps/Route_01/scripts.pory"
	step_end

# 66 "data//maps/Route_01/scripts.pory"
Route_01_Trigger_RequireStarter_Movement_0:
# 66 "data//maps/Route_01/scripts.pory"
	walk_right
# 66 "data//maps/Route_01/scripts.pory"
	step_end

# 75 "data//maps/Route_01/scripts.pory"
Route_01_Trigger_RequireStarterMoveDown_Movement_0:
# 75 "data//maps/Route_01/scripts.pory"
	walk_down
# 75 "data//maps/Route_01/scripts.pory"
	step_end

# 83 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_0:
# 83 "data//maps/Route_01/scripts.pory"
	walk_up
# 83 "data//maps/Route_01/scripts.pory"
	walk_up
# 83 "data//maps/Route_01/scripts.pory"
	walk_up
# 83 "data//maps/Route_01/scripts.pory"
	walk_up
# 83 "data//maps/Route_01/scripts.pory"
	delay_16
# 83 "data//maps/Route_01/scripts.pory"
	delay_16
# 83 "data//maps/Route_01/scripts.pory"
	delay_16
# 83 "data//maps/Route_01/scripts.pory"
	delay_16
# 83 "data//maps/Route_01/scripts.pory"
	face_left
# 83 "data//maps/Route_01/scripts.pory"
	delay_16
# 83 "data//maps/Route_01/scripts.pory"
	delay_16
# 83 "data//maps/Route_01/scripts.pory"
	face_right
# 83 "data//maps/Route_01/scripts.pory"
	delay_16
# 83 "data//maps/Route_01/scripts.pory"
	delay_16
# 83 "data//maps/Route_01/scripts.pory"
	face_up
# 83 "data//maps/Route_01/scripts.pory"
	step_end

# 88 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_1:
# 88 "data//maps/Route_01/scripts.pory"
	jump_left
# 88 "data//maps/Route_01/scripts.pory"
	delay_16
# 88 "data//maps/Route_01/scripts.pory"
	delay_16
# 88 "data//maps/Route_01/scripts.pory"
	walk_fast_down
# 88 "data//maps/Route_01/scripts.pory"
	walk_fast_down
# 88 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 88 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 88 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 88 "data//maps/Route_01/scripts.pory"
	step_end

# 108 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_2:
# 108 "data//maps/Route_01/scripts.pory"
	walk_right
# 108 "data//maps/Route_01/scripts.pory"
	walk_right
# 108 "data//maps/Route_01/scripts.pory"
	walk_right
# 108 "data//maps/Route_01/scripts.pory"
	walk_down
# 108 "data//maps/Route_01/scripts.pory"
	walk_right
# 108 "data//maps/Route_01/scripts.pory"
	walk_right
# 108 "data//maps/Route_01/scripts.pory"
	walk_right
# 108 "data//maps/Route_01/scripts.pory"
	walk_right
# 108 "data//maps/Route_01/scripts.pory"
	walk_up
# 108 "data//maps/Route_01/scripts.pory"
	face_up
# 108 "data//maps/Route_01/scripts.pory"
	step_end

# 109 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_3:
# 109 "data//maps/Route_01/scripts.pory"
	walk_down
# 109 "data//maps/Route_01/scripts.pory"
	walk_down
# 109 "data//maps/Route_01/scripts.pory"
	walk_down
# 109 "data//maps/Route_01/scripts.pory"
	walk_right
# 109 "data//maps/Route_01/scripts.pory"
	walk_down
# 109 "data//maps/Route_01/scripts.pory"
	walk_down
# 109 "data//maps/Route_01/scripts.pory"
	walk_right
# 109 "data//maps/Route_01/scripts.pory"
	face_up
# 109 "data//maps/Route_01/scripts.pory"
	step_end

# 110 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_4:
# 110 "data//maps/Route_01/scripts.pory"
	jump_left
# 110 "data//maps/Route_01/scripts.pory"
	jump_left
# 110 "data//maps/Route_01/scripts.pory"
	jump_left
# 110 "data//maps/Route_01/scripts.pory"
	jump_left
# 110 "data//maps/Route_01/scripts.pory"
	jump_left
# 110 "data//maps/Route_01/scripts.pory"
	delay_16
# 110 "data//maps/Route_01/scripts.pory"
	face_down
# 110 "data//maps/Route_01/scripts.pory"
	delay_16
# 110 "data//maps/Route_01/scripts.pory"
	face_right
# 110 "data//maps/Route_01/scripts.pory"
	delay_16
# 110 "data//maps/Route_01/scripts.pory"
	face_up
# 110 "data//maps/Route_01/scripts.pory"
	delay_16
# 110 "data//maps/Route_01/scripts.pory"
	walk_left
# 110 "data//maps/Route_01/scripts.pory"
	walk_left
# 110 "data//maps/Route_01/scripts.pory"
	face_up
# 110 "data//maps/Route_01/scripts.pory"
	step_end

# 116 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_5:
# 116 "data//maps/Route_01/scripts.pory"
	face_down
# 116 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 116 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 116 "data//maps/Route_01/scripts.pory"
	delay_16
# 116 "data//maps/Route_01/scripts.pory"
	delay_16
# 116 "data//maps/Route_01/scripts.pory"
	face_up
# 116 "data//maps/Route_01/scripts.pory"
	step_end

# 144 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_6:
# 144 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 144 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 144 "data//maps/Route_01/scripts.pory"
	delay_16
# 144 "data//maps/Route_01/scripts.pory"
	walk_fast_up
# 144 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 144 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 144 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 144 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 144 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 144 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 144 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 144 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 144 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 144 "data//maps/Route_01/scripts.pory"
	step_end

# 171 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_7:
# 171 "data//maps/Route_01/scripts.pory"
	walk_right
# 171 "data//maps/Route_01/scripts.pory"
	walk_right
# 171 "data//maps/Route_01/scripts.pory"
	walk_right
# 171 "data//maps/Route_01/scripts.pory"
	walk_right
# 171 "data//maps/Route_01/scripts.pory"
	walk_right
# 171 "data//maps/Route_01/scripts.pory"
	walk_right
# 171 "data//maps/Route_01/scripts.pory"
	face_up
# 171 "data//maps/Route_01/scripts.pory"
	step_end

# 172 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_8:
# 172 "data//maps/Route_01/scripts.pory"
	walk_right
# 172 "data//maps/Route_01/scripts.pory"
	walk_right
# 172 "data//maps/Route_01/scripts.pory"
	walk_right
# 172 "data//maps/Route_01/scripts.pory"
	walk_right
# 172 "data//maps/Route_01/scripts.pory"
	walk_up
# 172 "data//maps/Route_01/scripts.pory"
	face_right
# 172 "data//maps/Route_01/scripts.pory"
	step_end

# 184 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_9:
# 184 "data//maps/Route_01/scripts.pory"
	walk_down
# 184 "data//maps/Route_01/scripts.pory"
	walk_down
# 184 "data//maps/Route_01/scripts.pory"
	walk_right
# 184 "data//maps/Route_01/scripts.pory"
	step_end

# 192 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_10:
# 192 "data//maps/Route_01/scripts.pory"
	walk_up
# 192 "data//maps/Route_01/scripts.pory"
	face_right
# 192 "data//maps/Route_01/scripts.pory"
	step_end

# 193 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_11:
# 193 "data//maps/Route_01/scripts.pory"
	face_left
	step_end

# 204 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_12:
# 204 "data//maps/Route_01/scripts.pory"
	face_down
	step_end

# 205 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_13:
# 205 "data//maps/Route_01/scripts.pory"
	walk_in_place_slow_up
# 205 "data//maps/Route_01/scripts.pory"
	walk_in_place_slow_up
# 205 "data//maps/Route_01/scripts.pory"
	face_up
# 205 "data//maps/Route_01/scripts.pory"
	step_end

# 211 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_14:
# 211 "data//maps/Route_01/scripts.pory"
	walk_down
# 211 "data//maps/Route_01/scripts.pory"
	face_up
# 211 "data//maps/Route_01/scripts.pory"
	step_end

# 212 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_15:
# 212 "data//maps/Route_01/scripts.pory"
	walk_down
# 212 "data//maps/Route_01/scripts.pory"
	walk_down
# 212 "data//maps/Route_01/scripts.pory"
	face_up
# 212 "data//maps/Route_01/scripts.pory"
	step_end

# 324 "data//maps/Route_01/scripts.pory"
Route_01_Script_ReactToStarter_Movement_0:
# 324 "data//maps/Route_01/scripts.pory"
	face_up
# 324 "data//maps/Route_01/scripts.pory"
	step_end

# 329 "data//maps/Route_01/scripts.pory"
Route_01_Script_ReactToStarter_Movement_1:
# 329 "data//maps/Route_01/scripts.pory"
	walk_right
# 329 "data//maps/Route_01/scripts.pory"
	walk_down
# 329 "data//maps/Route_01/scripts.pory"
	face_down
# 329 "data//maps/Route_01/scripts.pory"
	step_end

# 330 "data//maps/Route_01/scripts.pory"
Route_01_Script_ReactToStarter_Movement_2:
# 330 "data//maps/Route_01/scripts.pory"
	walk_down
# 330 "data//maps/Route_01/scripts.pory"
	walk_right
# 330 "data//maps/Route_01/scripts.pory"
	face_down
# 330 "data//maps/Route_01/scripts.pory"
	step_end

# 333 "data//maps/Route_01/scripts.pory"
Route_01_Script_ReactToStarter_Movement_3:
# 333 "data//maps/Route_01/scripts.pory"
	walk_down
# 333 "data//maps/Route_01/scripts.pory"
	face_down
# 333 "data//maps/Route_01/scripts.pory"
	step_end

# 336 "data//maps/Route_01/scripts.pory"
Route_01_Script_ReactToStarter_Movement_4:
# 336 "data//maps/Route_01/scripts.pory"
	walk_left
# 336 "data//maps/Route_01/scripts.pory"
	walk_down
# 336 "data//maps/Route_01/scripts.pory"
	face_down
# 336 "data//maps/Route_01/scripts.pory"
	step_end

# 337 "data//maps/Route_01/scripts.pory"
Route_01_Script_ReactToStarter_Movement_5:
# 337 "data//maps/Route_01/scripts.pory"
	walk_down
# 337 "data//maps/Route_01/scripts.pory"
	walk_left
# 337 "data//maps/Route_01/scripts.pory"
	face_down
# 337 "data//maps/Route_01/scripts.pory"
	step_end

# 347 "data//maps/Route_01/scripts.pory"
Route_01_Script_ReactToStarter_Movement_6:
# 347 "data//maps/Route_01/scripts.pory"
	walk_up
# 347 "data//maps/Route_01/scripts.pory"
	face_right
	step_end

# 368 "data//maps/Route_01/scripts.pory"
Route_01_Script_HauIntro_Movement_0:
# 368 "data//maps/Route_01/scripts.pory"
	walk_right
# 368 "data//maps/Route_01/scripts.pory"
	walk_up
# 368 "data//maps/Route_01/scripts.pory"
	step_end

# 370 "data//maps/Route_01/scripts.pory"
Route_01_Script_HauIntro_Movement_1:
# 370 "data//maps/Route_01/scripts.pory"
	walk_left
# 370 "data//maps/Route_01/scripts.pory"
	walk_up
# 370 "data//maps/Route_01/scripts.pory"
	step_end

# 392 "data//maps/Route_01/scripts.pory"
Route_01_Script_HauIntro_Movement_2:
# 392 "data//maps/Route_01/scripts.pory"
	walk_up
# 392 "data//maps/Route_01/scripts.pory"
	walk_up
# 392 "data//maps/Route_01/scripts.pory"
	walk_left
# 392 "data//maps/Route_01/scripts.pory"
	walk_up
# 392 "data//maps/Route_01/scripts.pory"
	walk_up
# 392 "data//maps/Route_01/scripts.pory"
	walk_up
# 392 "data//maps/Route_01/scripts.pory"
	walk_up
# 392 "data//maps/Route_01/scripts.pory"
	walk_up
# 392 "data//maps/Route_01/scripts.pory"
	step_end

# 488 "data//maps/Route_01/scripts.pory"
Route_01_NPC_Rockruff_Movement_0:
# 488 "data//maps/Route_01/scripts.pory"
	face_right
	step_end

Route_01_Trigger_YungoosEncounter_Left_Text_0:
# 12 "data//maps/Route_01/scripts.pory"
	.string "Can't leave without a Pokémon!$"

Route_01_Script_YungoosEncounter_Text_0:
# 92 "data//maps/Route_01/scripts.pory"
	.string "The wild Pokémon looks furious!$"

Route_01_Script_YungoosEncounter_Text_1:
# 96 "data//maps/Route_01/scripts.pory"
	.string "Wild Yungoos$"

Route_01_Script_YungoosEncounter_Text_2:
# 98 "data//maps/Route_01/scripts.pory"
	.string "Grr-yeow!!$"

Route_01_Script_YungoosEncounter_Text_3:
# 118 "data//maps/Route_01/scripts.pory"
	.string "Koo!$"

Route_01_Script_YungoosEncounter_Text_4:
# 124 "data//maps/Route_01/scripts.pory"
	.string "Mrower...$"

Route_01_Script_YungoosEncounter_Text_5:
# 130 "data//maps/Route_01/scripts.pory"
	.string "Bwark?$"

Route_01_Script_YungoosEncounter_Text_6:
# 140 "data//maps/Route_01/scripts.pory"
	.string "Krr... RAH!$"

Route_01_Script_YungoosEncounter_Text_7:
# 146 "data//maps/Route_01/scripts.pory"
	.string "The Yungoos was scared off thanks to\n"
	.string "these three Pokémon!$"

Route_01_Script_YungoosEncounter_Text_8:
# 151 "data//maps/Route_01/scripts.pory"
	.string "Grandpa Samson$"

Route_01_Script_YungoosEncounter_Text_9:
# 152 "data//maps/Route_01/scripts.pory"
	.string "Aue! {PLAYER}! You found them!$"

Route_01_Script_YungoosEncounter_Text_10:
# 181 "data//maps/Route_01/scripts.pory"
	.string "We were on the way back from {COLOR GREEN}Iki Town{COLOR DARK_GRAY}\n"
	.string "when Rowlet, Litten, and Popplio ran\l"
	.string "off. How'd ya catch 'em?$"

Route_01_Script_YungoosEncounter_Text_11:
# 186 "data//maps/Route_01/scripts.pory"
	.string "???$"

Route_01_Script_YungoosEncounter_Text_12:
# 187 "data//maps/Route_01/scripts.pory"
	.string "Ha! Slow down, cousin! It looks like\n"
	.string "those three were saving them from a\l"
	.string "Yungoos.$"

Route_01_Script_YungoosEncounter_Text_13:
# 196 "data//maps/Route_01/scripts.pory"
	.string "Prof. Kukui$"

Route_01_Script_YungoosEncounter_Text_14:
# 197 "data//maps/Route_01/scripts.pory"
	.string "The name's Kukui, the Professor of\n"
	.string "Melemele Island! And by the sound of it,\l"
	.string "you're {PLAYER}, yeah?\n"
	.string "Welcome to Alola!\p"
	.string "Pokémon like to live in the grass around\n"
	.string "here. If you want to explore Alola,\l"
	.string "you'll need your own Pokémon to dish\l"
	.string "out some moves!$"

Route_01_Script_YungoosEncounter_Text_15:
# 208 "data//maps/Route_01/scripts.pory"
	.string "As it happens, I was in Iki Town picking\n"
	.string "up those {COLOR GREEN}three Pokémon{COLOR DARK_GRAY} to show you\l"
	.string "before they ran off.\p"
	.string "How about you {COLOR GREEN}pick one to be your\n"
	.string "partner{COLOR DARK_GRAY}? They all seem to like you well\l"
	.string "enough, ohoho!$"

Route_01_Script_ProfKukui_StarterChoice_Text_0:
# 228 "data//maps/Route_01/scripts.pory"
	.string "Somethin' wrong, {PLAYER}? Pick\n"
	.string "whichever Pokémon speaks to you the\l"
	.string "most, yeah!$"

Route_01_Script_SamsonOak_StarterChoice_Text_0:
# 238 "data//maps/Route_01/scripts.pory"
	.string "Go ahead, pick a Pokémon to join you!\n"
	.string "They're all quite rare, so choose wisely.$"

Route_01_Script_ChooseRowlet_Text_0:
# 248 "data//maps/Route_01/scripts.pory"
	.string "Rowlet$"

Route_01_Script_ChooseRowlet_Text_1:
# 254 "data//maps/Route_01/scripts.pory"
	.string "Tutu Samson mentioned this Pokémon!\n"
	.string "{COLOR GREEN}Rowlet{COLOR DARK_GRAY} likes to fly at night, tucking\l"
	.string "itself into corners during the day.\p"
	.string "Pick {COLOR GREEN}Rowlet{COLOR DARK_GRAY}, the Grass Quill Pokémon?$"

Route_01_Script_ChooseLitten_Text_0:
# 269 "data//maps/Route_01/scripts.pory"
	.string "Litten$"

Route_01_Script_ChooseLitten_Text_1:
# 275 "data//maps/Route_01/scripts.pory"
	.string "Tutu Samson mentioned this Pokémon!\n"
	.string "{COLOR RED}Litten{COLOR DARK_GRAY} acts aloof, but it loves Trainers\l"
	.string "who help keep its fur clean.\p"
	.string "Pick {COLOR RED}Litten{COLOR DARK_GRAY}, the Fire Cat Pokémon?$"

Route_01_Script_ChoosePopplio_Text_0:
# 290 "data//maps/Route_01/scripts.pory"
	.string "Popplio$"

Route_01_Script_ChoosePopplio_Text_1:
# 296 "data//maps/Route_01/scripts.pory"
	.string "Tutu Samson mentioned this Pokémon!\n"
	.string "{COLOR BLUE}Popplio{COLOR DARK_GRAY} loves to play, blowing bubbles\l"
	.string "and bouncing around on them to make a\l"
	.string "show.\p"
	.string "Pick {COLOR BLUE}Popplio{COLOR DARK_GRAY}, the Sea Lion Pokémon?$"

Route_01_Script_ReactToStarter_Text_0:
# 318 "data//maps/Route_01/scripts.pory"
	.string "You chose {STR_VAR_1} to be your\n"
	.string "partner!$"

Route_01_Script_ReactToStarter_Text_1:
# 344 "data//maps/Route_01/scripts.pory"
	.string "{STR_VAR_1}! I had a feeling that's\n"
	.string "who you would pick.\p"
	.string "Now, you thank Professor Kukui for that\n"
	.string "{STR_VAR_1} with a great big Alolan\l"
	.string "'Mahalo'. Those three Pokémon were\l"
	.string "originally his!$"

Route_01_Script_ReactToStarter_Text_2:
# 351 "data//maps/Route_01/scripts.pory"
	.string "Na-ah, don't sweat it, cousin! When I\n"
	.string "heard the great Samson Oak's own\l"
	.string "grandkid was moving back to Alola, I\l"
	.string "knew they'd shape up to be a Pokémon\l"
	.string "Trainer!\p"
	.string "I'll get the other two Pokémon back\n"
	.string "into their Poké Balls, then let's show\l"
	.string "your Mom your new friend!$"

Route_01_Script_HauIntro_Text_0:
# 382 "data//maps/Route_01/scripts.pory"
	.string "Hey, hey! You've got a {STR_VAR_1}\n"
	.string "with you... You must be {PLAYER}!$"

Route_01_Script_HauIntro_Text_1:
# 384 "data//maps/Route_01/scripts.pory"
	.string "Hau$"

Route_01_Script_HauIntro_Text_2:
# 385 "data//maps/Route_01/scripts.pory"
	.string "I'm Hau! Professor Kukui told me to keep\n"
	.string "an eye out for ya.\p"
	.string "I'll get my first Pokémon at the {COLOR GREEN}Manalo\n"
	.string "Festival{COLOR DARK_GRAY} tonight, but I heard you\l"
	.string "already got yours! I figure I should\l"
	.string "give these to you.$"

Route_01_Script_HauIntro_Text_3:
# 390 "data//maps/Route_01/scripts.pory"
	.string "Kukui gave me a big box of those, but I\n"
	.string "can't battle wild Pokémon without a\l"
	.string "partner of my own yet!\p"
	.string "I'm gonna go on ahead. See you later!$"

Route_01_Sign_Directions_Text_0:
# 408 "data//maps/Route_01/scripts.pory"
	.string "{UP_ARROW} Route 3\n"
	.string "{LEFT_ARROW} Iki Town\p"
	.string "{RIGHT_ARROW} Hau'oli Outskirts$"

Route_01_Trainer_LassAudrey_Text_0:
# 419 "data//maps/Route_01/scripts.pory"
	.string "When the eyes of Pokémon Trainers\n"
	.string "meet, you know what's going to happen,\l"
	.string "right?\p"
	.string "A Pokémon battle!$"

Route_01_Trainer_LassAudrey_Text_1:
# 420 "data//maps/Route_01/scripts.pory"
	.string "Oh! Your Pokémon looks so happy it\n"
	.string "won...$"

Route_01_Trainer_LassAudrey_Text_2:
# 422 "data//maps/Route_01/scripts.pory"
	.string "Lass Audrey$"

Route_01_Trainer_LassAudrey_Text_3:
# 423 "data//maps/Route_01/scripts.pory"
	.string "I like raising cute Pokémon. Lechonk is\n"
	.string "cute, y'know!$"

Route_01_Trainer_YoungsterJimmy_Text_0:
# 432 "data//maps/Route_01/scripts.pory"
	.string "Go for it, Caterpie! Show me the power\n"
	.string "of Bug-type Pokémon!$"

Route_01_Trainer_YoungsterJimmy_Text_1:
# 433 "data//maps/Route_01/scripts.pory"
	.string "My Bug Pokémon lost! You're really\n"
	.string "bugging me, you know?$"

Route_01_Trainer_YoungsterJimmy_Text_2:
# 435 "data//maps/Route_01/scripts.pory"
	.string "Youngster Jimmy$"

Route_01_Trainer_YoungsterJimmy_Text_3:
# 436 "data//maps/Route_01/scripts.pory"
	.string "I caught my Caterpie in the grass\n"
	.string "nearby. It came right out to say hello!$"

Route_01_Trainer_SchoolBoyOliver_Text_0:
# 445 "data//maps/Route_01/scripts.pory"
	.string "Hey! Please battle me!$"

Route_01_Trainer_SchoolBoyOliver_Text_1:
# 446 "data//maps/Route_01/scripts.pory"
	.string "If you're strong, please go away!$"

Route_01_Trainer_SchoolBoyOliver_Text_2:
# 448 "data//maps/Route_01/scripts.pory"
	.string "School Boy Oliver$"

Route_01_Trainer_SchoolBoyOliver_Text_3:
# 449 "data//maps/Route_01/scripts.pory"
	.string "You're a real good Trainer. I wanna be\n"
	.string "like you!$"

Route_01_NPC_BugCatcher_Text_0:
# 459 "data//maps/Route_01/scripts.pory"
	.string "Bug Catcher$"

Route_01_NPC_BugCatcher_Text_1:
# 460 "data//maps/Route_01/scripts.pory"
	.string "Huff, huff... Phew! I barely made it away\n"
	.string "from a wild Yungoos!\p"
	.string "Some Pokémon are brave enough to {COLOR GREEN}come\n"
	.string "out of the tall grass{COLOR DARK_GRAY}. A few might even\l"
	.string "{COLOR RED}chase you down{COLOR DARK_GRAY}, like Yungoos!$"

Route_01_NPC_SightseerF_Text_0:
# 470 "data//maps/Route_01/scripts.pory"
	.string "Sightseer$"

Route_01_NPC_SightseerF_Text_1:
# 471 "data//maps/Route_01/scripts.pory"
	.string "This Rockruff has been following me\n"
	.string "from Ten Carat Hill! I never knew\l"
	.string "Pokémon could be so friendly.$"

Route_01_NPC_Rockruff_Text_0:
# 483 "data//maps/Route_01/scripts.pory"
	.string "Rockruff$"

Route_01_NPC_Rockruff_Text_1:
# 485 "data//maps/Route_01/scripts.pory"
	.string "Arf warf!$"

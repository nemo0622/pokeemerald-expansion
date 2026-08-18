Route_01_MapScripts::
	.byte 0


Route_01_Trigger_YungoosEncounter_Left::
# 9 "data//maps/Route_01/scripts.pory"
	lockall
# 10 "data//maps/Route_01/scripts.pory"
	goto_if_unset FLAG_HIDE_SAMSON_ROUTE_01, Route_01_Trigger_YungoosEncounter_Left_2
# 20 "data//maps/Route_01/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_QUESTION
# 21 "data//maps/Route_01/scripts.pory"
	delay 10
# 22 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 23 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 24 "data//maps/Route_01/scripts.pory"
	goto Route_01_Script_YungoosEncounter
	end

Route_01_Trigger_YungoosEncounter_Left_2:
# 12 "data//maps/Route_01/scripts.pory"
	createplayerfieldmugshot
# 13 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Trigger_YungoosEncounter_Left_Text_0
# 14 "data//maps/Route_01/scripts.pory"
	closemessage
# 15 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Trigger_YungoosEncounter_Left_Movement_0
# 16 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 17 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Trigger_YungoosEncounter_Right::
# 29 "data//maps/Route_01/scripts.pory"
	lockall
# 30 "data//maps/Route_01/scripts.pory"
	goto_if_unset FLAG_HIDE_SAMSON_ROUTE_01, Route_01_Trigger_YungoosEncounter_Right_2
# 40 "data//maps/Route_01/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_QUESTION
# 41 "data//maps/Route_01/scripts.pory"
	delay 10
# 42 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 43 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 44 "data//maps/Route_01/scripts.pory"
	goto Route_01_Script_YungoosEncounter
	end

Route_01_Trigger_YungoosEncounter_Right_2:
# 32 "data//maps/Route_01/scripts.pory"
	createplayerfieldmugshot
# 33 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Trigger_YungoosEncounter_Left_Text_0
# 34 "data//maps/Route_01/scripts.pory"
	closemessage
# 35 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Trigger_YungoosEncounter_Left_Movement_0
# 36 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 37 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Trigger_YungoosEncounter_Middle::
# 49 "data//maps/Route_01/scripts.pory"
	lockall
# 50 "data//maps/Route_01/scripts.pory"
	goto_if_unset FLAG_HIDE_SAMSON_ROUTE_01, Route_01_Trigger_YungoosEncounter_Middle_2
# 59 "data//maps/Route_01/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_QUESTION
# 60 "data//maps/Route_01/scripts.pory"
	delay 10
# 61 "data//maps/Route_01/scripts.pory"
	goto Route_01_Script_YungoosEncounter
	end

Route_01_Trigger_YungoosEncounter_Middle_2:
# 52 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Trigger_YungoosEncounter_Middle_Text_0
# 53 "data//maps/Route_01/scripts.pory"
	closemessage
# 54 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Trigger_YungoosEncounter_Left_Movement_0
# 55 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 56 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Trigger_RequireStarter::
# 66 "data//maps/Route_01/scripts.pory"
	createplayerfieldmugshot
# 67 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Trigger_YungoosEncounter_Left_Text_0
# 68 "data//maps/Route_01/scripts.pory"
	closemessage
# 69 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Trigger_RequireStarter_Movement_0
# 70 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 71 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Trigger_RequireStarterMoveDown::
# 76 "data//maps/Route_01/scripts.pory"
	createplayerfieldmugshot
# 77 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Trigger_YungoosEncounter_Left_Text_0
# 78 "data//maps/Route_01/scripts.pory"
	closemessage
# 79 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Trigger_RequireStarterMoveDown_Movement_0
# 80 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 81 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Script_YungoosEncounter::
# 87 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_YungoosEncounter_Movement_0
# 88 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 90 "data//maps/Route_01/scripts.pory"
	clearflag FLAG_HIDE_YUNGOOS_ROUTE_01
# 91 "data//maps/Route_01/scripts.pory"
	addobject 1
# 92 "data//maps/Route_01/scripts.pory"
	applymovement 1, Route_01_Script_YungoosEncounter_Movement_1
# 93 "data//maps/Route_01/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_EXCLAM
# 94 "data//maps/Route_01/scripts.pory"
	waitmovement 1
# 96 "data//maps/Route_01/scripts.pory"
	createplayerfieldmugshot EMOTION_SAD
# 97 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_0
# 98 "data//maps/Route_01/scripts.pory"
	closemessage
# 100 "data//maps/Route_01/scripts.pory"
	delay 15
# 101 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_1
# 102 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_YUNGOOS, CRY_MODE_NORMAL
# 103 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_2
# 104 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 105 "data//maps/Route_01/scripts.pory"
	closemessage
# 106 "data//maps/Route_01/scripts.pory"
	delay 15
# 109 "data//maps/Route_01/scripts.pory"
	clearflag FLAG_HIDE_STARTERS_ROUTE_01
# 110 "data//maps/Route_01/scripts.pory"
	addobject 2
# 111 "data//maps/Route_01/scripts.pory"
	addobject 3
# 112 "data//maps/Route_01/scripts.pory"
	addobject 4
# 113 "data//maps/Route_01/scripts.pory"
	applymovement 2, Route_01_Script_YungoosEncounter_Movement_2
# 114 "data//maps/Route_01/scripts.pory"
	applymovement 3, Route_01_Script_YungoosEncounter_Movement_3
# 115 "data//maps/Route_01/scripts.pory"
	applymovement 4, Route_01_Script_YungoosEncounter_Movement_4
# 116 "data//maps/Route_01/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_EXCLAM
# 117 "data//maps/Route_01/scripts.pory"
	waitmovement 4
# 118 "data//maps/Route_01/scripts.pory"
	delay 15
# 121 "data//maps/Route_01/scripts.pory"
	applymovement 2, Route_01_Script_YungoosEncounter_Movement_5
# 122 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_ROWLET, CRY_MODE_NORMAL
# 123 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_3
# 124 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 125 "data//maps/Route_01/scripts.pory"
	closemessage
# 126 "data//maps/Route_01/scripts.pory"
	delay 10
# 127 "data//maps/Route_01/scripts.pory"
	applymovement 3, Route_01_Script_YungoosEncounter_Movement_5
# 128 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_NORMAL
# 129 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_4
# 130 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 131 "data//maps/Route_01/scripts.pory"
	closemessage
# 132 "data//maps/Route_01/scripts.pory"
	delay 10
# 133 "data//maps/Route_01/scripts.pory"
	applymovement 4, Route_01_Script_YungoosEncounter_Movement_5
# 134 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_POPPLIO, CRY_MODE_NORMAL
# 135 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_5
# 136 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 137 "data//maps/Route_01/scripts.pory"
	closemessage
# 138 "data//maps/Route_01/scripts.pory"
	delay 30
# 141 "data//maps/Route_01/scripts.pory"
	emote 1, EMOTE_QUESTION
# 142 "data//maps/Route_01/scripts.pory"
	delay 20
# 143 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_1
# 144 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_YUNGOOS, CRY_MODE_NORMAL
# 145 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_6
# 146 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 147 "data//maps/Route_01/scripts.pory"
	closemessage
# 148 "data//maps/Route_01/scripts.pory"
	delay 10
# 149 "data//maps/Route_01/scripts.pory"
	applymovement 1, Route_01_Script_YungoosEncounter_Movement_6
# 150 "data//maps/Route_01/scripts.pory"
	waitmovement 1
# 151 "data//maps/Route_01/scripts.pory"
	createplayerfieldmugshot
# 152 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_7
# 153 "data//maps/Route_01/scripts.pory"
	closemessage
# 154 "data//maps/Route_01/scripts.pory"
	delay 20
# 157 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_8
# 158 "data//maps/Route_01/scripts.pory"
	createfieldmugshot MUGSHOT_SAMSON_OAK
# 159 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_9
# 160 "data//maps/Route_01/scripts.pory"
	closemessage
# 161 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 162 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 163 "data//maps/Route_01/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_QUESTION
# 164 "data//maps/Route_01/scripts.pory"
	delay 10
# 167 "data//maps/Route_01/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 168 "data//maps/Route_01/scripts.pory"
	delay 20
# 169 "data//maps/Route_01/scripts.pory"
	setflag FLAG_HIDE_YUNGOOS_ROUTE_01
# 170 "data//maps/Route_01/scripts.pory"
	removeobject 1
# 171 "data//maps/Route_01/scripts.pory"
	clearflag FLAG_HIDE_SAMSON_ROUTE_01
# 172 "data//maps/Route_01/scripts.pory"
	addobject 5
# 173 "data//maps/Route_01/scripts.pory"
	addobject 6
# 174 "data//maps/Route_01/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 175 "data//maps/Route_01/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 176 "data//maps/Route_01/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 177 "data//maps/Route_01/scripts.pory"
	delay 20
# 178 "data//maps/Route_01/scripts.pory"
	applymovement 5, Route_01_Script_YungoosEncounter_Movement_7
# 179 "data//maps/Route_01/scripts.pory"
	applymovement 6, Route_01_Script_YungoosEncounter_Movement_8
# 180 "data//maps/Route_01/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 181 "data//maps/Route_01/scripts.pory"
	delay 20
# 184 "data//maps/Route_01/scripts.pory"
	waitmovement 5
# 185 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 186 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 187 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_8
# 188 "data//maps/Route_01/scripts.pory"
	createfieldmugshot MUGSHOT_SAMSON_OAK
# 189 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_10
# 190 "data//maps/Route_01/scripts.pory"
	closemessage
# 191 "data//maps/Route_01/scripts.pory"
	delay 10
# 192 "data//maps/Route_01/scripts.pory"
	applymovement 6, Route_01_Script_YungoosEncounter_Movement_9
# 193 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 194 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_11
# 195 "data//maps/Route_01/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_KUKUI, EMOTION_LAUGH
# 196 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_12
# 197 "data//maps/Route_01/scripts.pory"
	closemessage
# 198 "data//maps/Route_01/scripts.pory"
	delay 10
# 201 "data//maps/Route_01/scripts.pory"
	applymovement 6, Route_01_Script_YungoosEncounter_Movement_10
# 202 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_YungoosEncounter_Movement_11
# 203 "data//maps/Route_01/scripts.pory"
	waitmovement 6
# 204 "data//maps/Route_01/scripts.pory"
	delay 10
# 205 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_13
# 206 "data//maps/Route_01/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_KUKUI
# 207 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_14
# 208 "data//maps/Route_01/scripts.pory"
	closemessage
# 211 "data//maps/Route_01/scripts.pory"
	delay 30
# 212 "data//maps/Route_01/scripts.pory"
	emote 5, EMOTE_EXCLAM
# 213 "data//maps/Route_01/scripts.pory"
	delay 10
# 214 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_YungoosEncounter_Movement_12
# 215 "data//maps/Route_01/scripts.pory"
	applymovement 5, Route_01_Script_YungoosEncounter_Movement_13
# 216 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 217 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_8
# 218 "data//maps/Route_01/scripts.pory"
	createfieldmugshot MUGSHOT_SAMSON_OAK
# 219 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_15
# 220 "data//maps/Route_01/scripts.pory"
	waitmessage
# 221 "data//maps/Route_01/scripts.pory"
	createfieldmugshot MUGSHOT_SAMSON_OAK, EMOTION_LAUGH
# 222 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_8
# 223 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_16
# 224 "data//maps/Route_01/scripts.pory"
	closemessage
# 226 "data//maps/Route_01/scripts.pory"
	applymovement 5, Route_01_Script_YungoosEncounter_Movement_14
# 227 "data//maps/Route_01/scripts.pory"
	applymovement 6, Route_01_Script_YungoosEncounter_Movement_15
# 228 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 231 "data//maps/Route_01/scripts.pory"
	call Common_EventScript_SaveGame
# 234 "data//maps/Route_01/scripts.pory"
	releaseall
	end


Route_01_Script_ProfKukui_StarterChoice::
# 240 "data//maps/Route_01/scripts.pory"
	lock
# 241 "data//maps/Route_01/scripts.pory"
	faceplayer
# 242 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_13
# 243 "data//maps/Route_01/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_KUKUI
# 244 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_ProfKukui_StarterChoice_Text_0
# 245 "data//maps/Route_01/scripts.pory"
	closemessage
# 246 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Script_SamsonOak_StarterChoice::
# 251 "data//maps/Route_01/scripts.pory"
	lock
# 252 "data//maps/Route_01/scripts.pory"
	faceplayer
# 253 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_8
# 254 "data//maps/Route_01/scripts.pory"
	createfieldmugshot MUGSHOT_SAMSON_OAK
# 255 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_SamsonOak_StarterChoice_Text_0
# 256 "data//maps/Route_01/scripts.pory"
	closemessage
# 257 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Script_ChooseRowlet::
# 264 "data//maps/Route_01/scripts.pory"
	lock
# 265 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_ChooseRowlet_Text_0
# 266 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_ROWLET, CRY_MODE_NORMAL
# 267 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_3
# 268 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 269 "data//maps/Route_01/scripts.pory"
	closemessage
# 270 "data//maps/Route_01/scripts.pory"
	delay 10
# 271 "data//maps/Route_01/scripts.pory"
	createplayerfieldmugshot
# 272 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_ChooseRowlet_Text_1
# 273 "data//maps/Route_01/scripts.pory"
	closemessage
# 274 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_ChooseRowlet_Text_2, MSGBOX_YESNO
# 275 "data//maps/Route_01/scripts.pory"
	closemessage
# 277 "data//maps/Route_01/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route_01_Script_ChooseRowlet_2
Route_01_Script_ChooseRowlet_1:
# 283 "data//maps/Route_01/scripts.pory"
	release
	end

Route_01_Script_ChooseRowlet_2:
# 279 "data//maps/Route_01/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_ROWLET
# 280 "data//maps/Route_01/scripts.pory"
	givemon SPECIES_ROWLET, 5
# 281 "data//maps/Route_01/scripts.pory"
	goto Route_01_Script_ReactToStarter
	goto Route_01_Script_ChooseRowlet_1


Route_01_Script_ChooseLitten::
# 288 "data//maps/Route_01/scripts.pory"
	lock
# 289 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_ChooseLitten_Text_0
# 290 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_NORMAL
# 291 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_4
# 292 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 293 "data//maps/Route_01/scripts.pory"
	closemessage
# 294 "data//maps/Route_01/scripts.pory"
	delay 10
# 295 "data//maps/Route_01/scripts.pory"
	createplayerfieldmugshot
# 296 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_ChooseLitten_Text_1
# 297 "data//maps/Route_01/scripts.pory"
	closemessage
# 298 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_ChooseLitten_Text_2, MSGBOX_YESNO
# 299 "data//maps/Route_01/scripts.pory"
	closemessage
# 301 "data//maps/Route_01/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route_01_Script_ChooseLitten_2
Route_01_Script_ChooseLitten_1:
# 307 "data//maps/Route_01/scripts.pory"
	release
	end

Route_01_Script_ChooseLitten_2:
# 303 "data//maps/Route_01/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_LITTEN
# 304 "data//maps/Route_01/scripts.pory"
	givemon SPECIES_LITTEN, 5
# 305 "data//maps/Route_01/scripts.pory"
	goto Route_01_Script_ReactToStarter
	goto Route_01_Script_ChooseLitten_1


Route_01_Script_ChoosePopplio::
# 312 "data//maps/Route_01/scripts.pory"
	lock
# 313 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_ChoosePopplio_Text_0
# 314 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_POPPLIO, CRY_MODE_NORMAL
# 315 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_5
# 316 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 317 "data//maps/Route_01/scripts.pory"
	closemessage
# 318 "data//maps/Route_01/scripts.pory"
	delay 10
# 319 "data//maps/Route_01/scripts.pory"
	createplayerfieldmugshot
# 320 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_ChoosePopplio_Text_1
# 321 "data//maps/Route_01/scripts.pory"
	closemessage
# 322 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_ChoosePopplio_Text_2, MSGBOX_YESNO
# 323 "data//maps/Route_01/scripts.pory"
	closemessage
# 325 "data//maps/Route_01/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route_01_Script_ChoosePopplio_2
Route_01_Script_ChoosePopplio_1:
# 331 "data//maps/Route_01/scripts.pory"
	release
	end

Route_01_Script_ChoosePopplio_2:
# 327 "data//maps/Route_01/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_POPPLIO
# 328 "data//maps/Route_01/scripts.pory"
	givemon SPECIES_POPPLIO, 5
# 329 "data//maps/Route_01/scripts.pory"
	goto Route_01_Script_ReactToStarter
	goto Route_01_Script_ChoosePopplio_1


Route_01_Script_ReactToStarter::
# 337 "data//maps/Route_01/scripts.pory"
	lockall
# 338 "data//maps/Route_01/scripts.pory"
	setvar VAR_INTRO_STATE, 3
# 341 "data//maps/Route_01/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 343 "data//maps/Route_01/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_MON
# 344 "data//maps/Route_01/scripts.pory"
	createplayerfieldmugshot EMOTION_LAUGH
# 345 "data//maps/Route_01/scripts.pory"
	message Route_01_Script_ReactToStarter_Text_0
# 346 "data//maps/Route_01/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 347 "data//maps/Route_01/scripts.pory"
	closemessage
# 348 "data//maps/Route_01/scripts.pory"
	delay 15
# 351 "data//maps/Route_01/scripts.pory"
	applymovement 5, Route_01_Script_ReactToStarter_Movement_0
# 352 "data//maps/Route_01/scripts.pory"
	applymovement 6, Route_01_Script_ReactToStarter_Movement_0
# 353 "data//maps/Route_01/scripts.pory"
	switch VAR_STARTER_MON
# 355 "data//maps/Route_01/scripts.pory"
	case SPECIES_ROWLET, Route_01_Script_ReactToStarter_3
# 358 "data//maps/Route_01/scripts.pory"
	case SPECIES_LITTEN, Route_01_Script_ReactToStarter_4
# 362 "data//maps/Route_01/scripts.pory"
	case SPECIES_POPPLIO, Route_01_Script_ReactToStarter_5
Route_01_Script_ReactToStarter_4:
# 360 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_ReactToStarter_Movement_3
# 361 "data//maps/Route_01/scripts.pory"
	applymovement 3, Route_01_Script_ReactToStarter_Movement_3
Route_01_Script_ReactToStarter_1:
# 366 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 369 "data//maps/Route_01/scripts.pory"
	delay 10
# 370 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_8
# 371 "data//maps/Route_01/scripts.pory"
	createfieldmugshot MUGSHOT_SAMSON_OAK, EMOTION_LAUGH
# 372 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_ReactToStarter_Text_1
# 373 "data//maps/Route_01/scripts.pory"
	waitmessage
# 374 "data//maps/Route_01/scripts.pory"
	createfieldmugshot MUGSHOT_SAMSON_OAK, EMOTION_NORMAL
# 375 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_8
# 376 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_ReactToStarter_Text_2
# 377 "data//maps/Route_01/scripts.pory"
	closemessage
# 378 "data//maps/Route_01/scripts.pory"
	delay 10
# 379 "data//maps/Route_01/scripts.pory"
	applymovement 6, Route_01_Script_ReactToStarter_Movement_6
# 380 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_YungoosEncounter_Movement_11
# 381 "data//maps/Route_01/scripts.pory"
	waitmovement 6
# 382 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_13
# 383 "data//maps/Route_01/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_KUKUI
# 384 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_ReactToStarter_Text_3
# 385 "data//maps/Route_01/scripts.pory"
	closemessage
# 387 "data//maps/Route_01/scripts.pory"
	delay 10
# 388 "data//maps/Route_01/scripts.pory"
	warpcontinuescript MAP_HAUOLI_OUTSKIRTS_PLAYERS_ROOM, 8, 11, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter
# 390 "data//maps/Route_01/scripts.pory"
	releaseall
	end

Route_01_Script_ReactToStarter_3:
# 356 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_ReactToStarter_Movement_1
# 357 "data//maps/Route_01/scripts.pory"
	applymovement 2, Route_01_Script_ReactToStarter_Movement_2
	goto Route_01_Script_ReactToStarter_1

Route_01_Script_ReactToStarter_5:
# 363 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_ReactToStarter_Movement_4
# 364 "data//maps/Route_01/scripts.pory"
	applymovement 4, Route_01_Script_ReactToStarter_Movement_5
	goto Route_01_Script_ReactToStarter_1


Route_01_Script_HauIntro::
# 396 "data//maps/Route_01/scripts.pory"
	lock
# 397 "data//maps/Route_01/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 398 "data//maps/Route_01/scripts.pory"
	switch VAR_TEMP_1
# 400 "data//maps/Route_01/scripts.pory"
	case 10, Route_01_Script_HauIntro_3
# 402 "data//maps/Route_01/scripts.pory"
	case 12, Route_01_Script_HauIntro_4
# 405 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
Route_01_Script_HauIntro_1:
# 407 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 408 "data//maps/Route_01/scripts.pory"
	emote LOCALID_HAU_ROUTE01, EMOTE_EXCLAM
# 409 "data//maps/Route_01/scripts.pory"
	delay 10
# 411 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_HAU_ROUTE01, Common_Movement_WalkDown
# 412 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 413 "data//maps/Route_01/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_MON
# 414 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_YungoosEncounter_Text_11
# 415 "data//maps/Route_01/scripts.pory"
	createfieldmugshot MUGSHOT_HAU
# 416 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_HauIntro_Text_0
# 418 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_HauIntro_Text_1
# 419 "data//maps/Route_01/scripts.pory"
	createfieldmugshot MUGSHOT_HAU
# 420 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_HauIntro_Text_2
# 421 "data//maps/Route_01/scripts.pory"
	closemessage
# 422 "data//maps/Route_01/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 423 "data//maps/Route_01/scripts.pory"
	closemessage
# 424 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_HauIntro_Text_1
# 425 "data//maps/Route_01/scripts.pory"
	createfieldmugshot MUGSHOT_HAU
# 426 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_HauIntro_Text_3
# 427 "data//maps/Route_01/scripts.pory"
	waitmessage
# 428 "data//maps/Route_01/scripts.pory"
	createfieldmugshot MUGSHOT_HAU, EMOTION_LAUGH
# 429 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Script_HauIntro_Text_1
# 430 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_HauIntro_Text_4
# 431 "data//maps/Route_01/scripts.pory"
	closemessage
# 432 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_HAU_ROUTE01, Route_01_Script_HauIntro_Movement_2
# 433 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 435 "data//maps/Route_01/scripts.pory"
	setflag FLAG_HIDE_HAU_ROUTE_01
# 436 "data//maps/Route_01/scripts.pory"
	removeobject LOCALID_HAU_ROUTE01
# 437 "data//maps/Route_01/scripts.pory"
	setvar VAR_INTRO_STATE, 4
# 439 "data//maps/Route_01/scripts.pory"
	releaseall
	end

Route_01_Script_HauIntro_3:
# 401 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_HauIntro_Movement_0
	goto Route_01_Script_HauIntro_1

Route_01_Script_HauIntro_4:
# 403 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_HauIntro_Movement_1
	goto Route_01_Script_HauIntro_1


Route_01_Sign_Directions::
# 447 "data//maps/Route_01/scripts.pory"
	lock
# 448 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Sign_Directions_Text_0, MSGBOX_SIGN
# 449 "data//maps/Route_01/scripts.pory"
	closemessage
# 450 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Trainer_LassAudrey::
# 458 "data//maps/Route_01/scripts.pory"
	trainerbattle_single TRAINER_LASS_AUDREY, Route_01_Trainer_LassAudrey_Text_0, Route_01_Trainer_LassAudrey_Text_1
# 462 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Trainer_LassAudrey_Text_2
# 463 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Trainer_LassAudrey_Text_3
# 464 "data//maps/Route_01/scripts.pory"
	closemessage
# 465 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Trainer_YoungsterJimmy::
# 471 "data//maps/Route_01/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_JIMMY, Route_01_Trainer_YoungsterJimmy_Text_0, Route_01_Trainer_YoungsterJimmy_Text_1
# 475 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Trainer_YoungsterJimmy_Text_2
# 476 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Trainer_YoungsterJimmy_Text_3
# 477 "data//maps/Route_01/scripts.pory"
	closemessage
# 478 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_Trainer_SchoolBoyOliver::
# 484 "data//maps/Route_01/scripts.pory"
	trainerbattle_single TRAINER_SCHOOL_BOY_OLIVER, Route_01_Trainer_SchoolBoyOliver_Text_0, Route_01_Trainer_SchoolBoyOliver_Text_1
# 488 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_Trainer_SchoolBoyOliver_Text_2
# 489 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Trainer_SchoolBoyOliver_Text_3
# 490 "data//maps/Route_01/scripts.pory"
	closemessage
# 491 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_NPC_BugCatcher::
# 497 "data//maps/Route_01/scripts.pory"
	lock
# 498 "data//maps/Route_01/scripts.pory"
	faceplayer
# 499 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_NPC_BugCatcher_Text_0
# 500 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_NPC_BugCatcher_Text_1
# 501 "data//maps/Route_01/scripts.pory"
	closemessage
# 502 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_NPC_SightseerF::
# 508 "data//maps/Route_01/scripts.pory"
	lock
# 509 "data//maps/Route_01/scripts.pory"
	faceplayer
# 510 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_NPC_SightseerF_Text_0
# 511 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_NPC_SightseerF_Text_1
# 512 "data//maps/Route_01/scripts.pory"
	closemessage
# 513 "data//maps/Route_01/scripts.pory"
	applymovement VAR_LAST_TALKED, Route_01_Script_YungoosEncounter_Movement_11
# 514 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 515 "data//maps/Route_01/scripts.pory"
	release
	end


Route_01_NPC_Rockruff::
# 521 "data//maps/Route_01/scripts.pory"
	lock
# 522 "data//maps/Route_01/scripts.pory"
	faceplayer
# 523 "data//maps/Route_01/scripts.pory"
	setspeaker Route_01_NPC_Rockruff_Text_0
# 524 "data//maps/Route_01/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 525 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_NPC_Rockruff_Text_1
# 526 "data//maps/Route_01/scripts.pory"
	waitmoncry
# 527 "data//maps/Route_01/scripts.pory"
	closemessage
# 528 "data//maps/Route_01/scripts.pory"
	applymovement VAR_LAST_TALKED, Route_01_NPC_Rockruff_Movement_0
# 529 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 530 "data//maps/Route_01/scripts.pory"
	release
	end


# 15 "data//maps/Route_01/scripts.pory"
Route_01_Trigger_YungoosEncounter_Left_Movement_0:
# 15 "data//maps/Route_01/scripts.pory"
	walk_up
# 15 "data//maps/Route_01/scripts.pory"
	step_end

# 69 "data//maps/Route_01/scripts.pory"
Route_01_Trigger_RequireStarter_Movement_0:
# 69 "data//maps/Route_01/scripts.pory"
	walk_right
# 69 "data//maps/Route_01/scripts.pory"
	step_end

# 79 "data//maps/Route_01/scripts.pory"
Route_01_Trigger_RequireStarterMoveDown_Movement_0:
# 79 "data//maps/Route_01/scripts.pory"
	walk_down
# 79 "data//maps/Route_01/scripts.pory"
	step_end

# 87 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_0:
# 87 "data//maps/Route_01/scripts.pory"
	walk_up
# 87 "data//maps/Route_01/scripts.pory"
	walk_up
# 87 "data//maps/Route_01/scripts.pory"
	walk_up
# 87 "data//maps/Route_01/scripts.pory"
	walk_up
# 87 "data//maps/Route_01/scripts.pory"
	delay_16
# 87 "data//maps/Route_01/scripts.pory"
	delay_16
# 87 "data//maps/Route_01/scripts.pory"
	delay_16
# 87 "data//maps/Route_01/scripts.pory"
	delay_16
# 87 "data//maps/Route_01/scripts.pory"
	face_left
# 87 "data//maps/Route_01/scripts.pory"
	delay_16
# 87 "data//maps/Route_01/scripts.pory"
	delay_16
# 87 "data//maps/Route_01/scripts.pory"
	face_right
# 87 "data//maps/Route_01/scripts.pory"
	delay_16
# 87 "data//maps/Route_01/scripts.pory"
	delay_16
# 87 "data//maps/Route_01/scripts.pory"
	face_up
# 87 "data//maps/Route_01/scripts.pory"
	step_end

# 92 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_1:
# 92 "data//maps/Route_01/scripts.pory"
	jump_left
# 92 "data//maps/Route_01/scripts.pory"
	delay_16
# 92 "data//maps/Route_01/scripts.pory"
	delay_16
# 92 "data//maps/Route_01/scripts.pory"
	walk_fast_down
# 92 "data//maps/Route_01/scripts.pory"
	walk_fast_down
# 92 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 92 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 92 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 92 "data//maps/Route_01/scripts.pory"
	step_end

# 113 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_2:
# 113 "data//maps/Route_01/scripts.pory"
	walk_right
# 113 "data//maps/Route_01/scripts.pory"
	walk_right
# 113 "data//maps/Route_01/scripts.pory"
	walk_right
# 113 "data//maps/Route_01/scripts.pory"
	walk_down
# 113 "data//maps/Route_01/scripts.pory"
	walk_right
# 113 "data//maps/Route_01/scripts.pory"
	walk_right
# 113 "data//maps/Route_01/scripts.pory"
	walk_right
# 113 "data//maps/Route_01/scripts.pory"
	walk_right
# 113 "data//maps/Route_01/scripts.pory"
	walk_up
# 113 "data//maps/Route_01/scripts.pory"
	face_up
# 113 "data//maps/Route_01/scripts.pory"
	step_end

# 114 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_3:
# 114 "data//maps/Route_01/scripts.pory"
	walk_down
# 114 "data//maps/Route_01/scripts.pory"
	walk_down
# 114 "data//maps/Route_01/scripts.pory"
	walk_down
# 114 "data//maps/Route_01/scripts.pory"
	walk_right
# 114 "data//maps/Route_01/scripts.pory"
	walk_down
# 114 "data//maps/Route_01/scripts.pory"
	walk_down
# 114 "data//maps/Route_01/scripts.pory"
	walk_right
# 114 "data//maps/Route_01/scripts.pory"
	face_up
# 114 "data//maps/Route_01/scripts.pory"
	step_end

# 115 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_4:
# 115 "data//maps/Route_01/scripts.pory"
	jump_left
# 115 "data//maps/Route_01/scripts.pory"
	jump_left
# 115 "data//maps/Route_01/scripts.pory"
	jump_left
# 115 "data//maps/Route_01/scripts.pory"
	jump_left
# 115 "data//maps/Route_01/scripts.pory"
	jump_left
# 115 "data//maps/Route_01/scripts.pory"
	delay_16
# 115 "data//maps/Route_01/scripts.pory"
	face_down
# 115 "data//maps/Route_01/scripts.pory"
	delay_16
# 115 "data//maps/Route_01/scripts.pory"
	face_right
# 115 "data//maps/Route_01/scripts.pory"
	delay_16
# 115 "data//maps/Route_01/scripts.pory"
	face_up
# 115 "data//maps/Route_01/scripts.pory"
	delay_16
# 115 "data//maps/Route_01/scripts.pory"
	walk_left
# 115 "data//maps/Route_01/scripts.pory"
	walk_left
# 115 "data//maps/Route_01/scripts.pory"
	face_up
# 115 "data//maps/Route_01/scripts.pory"
	step_end

# 121 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_5:
# 121 "data//maps/Route_01/scripts.pory"
	face_down
# 121 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 121 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 121 "data//maps/Route_01/scripts.pory"
	delay_16
# 121 "data//maps/Route_01/scripts.pory"
	delay_16
# 121 "data//maps/Route_01/scripts.pory"
	face_up
# 121 "data//maps/Route_01/scripts.pory"
	step_end

# 149 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_6:
# 149 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 149 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 149 "data//maps/Route_01/scripts.pory"
	delay_16
# 149 "data//maps/Route_01/scripts.pory"
	walk_fast_up
# 149 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 149 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 149 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 149 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 149 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 149 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 149 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 149 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 149 "data//maps/Route_01/scripts.pory"
	walk_fast_left
# 149 "data//maps/Route_01/scripts.pory"
	step_end

# 178 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_7:
# 178 "data//maps/Route_01/scripts.pory"
	walk_right
# 178 "data//maps/Route_01/scripts.pory"
	walk_right
# 178 "data//maps/Route_01/scripts.pory"
	walk_right
# 178 "data//maps/Route_01/scripts.pory"
	walk_right
# 178 "data//maps/Route_01/scripts.pory"
	walk_right
# 178 "data//maps/Route_01/scripts.pory"
	walk_right
# 178 "data//maps/Route_01/scripts.pory"
	face_up
# 178 "data//maps/Route_01/scripts.pory"
	step_end

# 179 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_8:
# 179 "data//maps/Route_01/scripts.pory"
	walk_right
# 179 "data//maps/Route_01/scripts.pory"
	walk_right
# 179 "data//maps/Route_01/scripts.pory"
	walk_right
# 179 "data//maps/Route_01/scripts.pory"
	walk_right
# 179 "data//maps/Route_01/scripts.pory"
	walk_up
# 179 "data//maps/Route_01/scripts.pory"
	face_right
# 179 "data//maps/Route_01/scripts.pory"
	step_end

# 192 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_9:
# 192 "data//maps/Route_01/scripts.pory"
	walk_down
# 192 "data//maps/Route_01/scripts.pory"
	walk_down
# 192 "data//maps/Route_01/scripts.pory"
	walk_right
# 192 "data//maps/Route_01/scripts.pory"
	step_end

# 201 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_10:
# 201 "data//maps/Route_01/scripts.pory"
	walk_up
# 201 "data//maps/Route_01/scripts.pory"
	face_right
# 201 "data//maps/Route_01/scripts.pory"
	step_end

# 202 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_11:
# 202 "data//maps/Route_01/scripts.pory"
	face_left
	step_end

# 214 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_12:
# 214 "data//maps/Route_01/scripts.pory"
	face_down
	step_end

# 215 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_13:
# 215 "data//maps/Route_01/scripts.pory"
	walk_in_place_slow_up
# 215 "data//maps/Route_01/scripts.pory"
	walk_in_place_slow_up
# 215 "data//maps/Route_01/scripts.pory"
	face_up
# 215 "data//maps/Route_01/scripts.pory"
	step_end

# 226 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_14:
# 226 "data//maps/Route_01/scripts.pory"
	walk_down
# 226 "data//maps/Route_01/scripts.pory"
	face_up
# 226 "data//maps/Route_01/scripts.pory"
	step_end

# 227 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_15:
# 227 "data//maps/Route_01/scripts.pory"
	walk_down
# 227 "data//maps/Route_01/scripts.pory"
	walk_down
# 227 "data//maps/Route_01/scripts.pory"
	face_up
# 227 "data//maps/Route_01/scripts.pory"
	step_end

# 351 "data//maps/Route_01/scripts.pory"
Route_01_Script_ReactToStarter_Movement_0:
# 351 "data//maps/Route_01/scripts.pory"
	face_up
# 351 "data//maps/Route_01/scripts.pory"
	step_end

# 356 "data//maps/Route_01/scripts.pory"
Route_01_Script_ReactToStarter_Movement_1:
# 356 "data//maps/Route_01/scripts.pory"
	walk_right
# 356 "data//maps/Route_01/scripts.pory"
	walk_down
# 356 "data//maps/Route_01/scripts.pory"
	face_down
# 356 "data//maps/Route_01/scripts.pory"
	step_end

# 357 "data//maps/Route_01/scripts.pory"
Route_01_Script_ReactToStarter_Movement_2:
# 357 "data//maps/Route_01/scripts.pory"
	walk_down
# 357 "data//maps/Route_01/scripts.pory"
	walk_right
# 357 "data//maps/Route_01/scripts.pory"
	face_down
# 357 "data//maps/Route_01/scripts.pory"
	step_end

# 360 "data//maps/Route_01/scripts.pory"
Route_01_Script_ReactToStarter_Movement_3:
# 360 "data//maps/Route_01/scripts.pory"
	walk_down
# 360 "data//maps/Route_01/scripts.pory"
	face_down
# 360 "data//maps/Route_01/scripts.pory"
	step_end

# 363 "data//maps/Route_01/scripts.pory"
Route_01_Script_ReactToStarter_Movement_4:
# 363 "data//maps/Route_01/scripts.pory"
	walk_left
# 363 "data//maps/Route_01/scripts.pory"
	walk_down
# 363 "data//maps/Route_01/scripts.pory"
	face_down
# 363 "data//maps/Route_01/scripts.pory"
	step_end

# 364 "data//maps/Route_01/scripts.pory"
Route_01_Script_ReactToStarter_Movement_5:
# 364 "data//maps/Route_01/scripts.pory"
	walk_down
# 364 "data//maps/Route_01/scripts.pory"
	walk_left
# 364 "data//maps/Route_01/scripts.pory"
	face_down
# 364 "data//maps/Route_01/scripts.pory"
	step_end

# 379 "data//maps/Route_01/scripts.pory"
Route_01_Script_ReactToStarter_Movement_6:
# 379 "data//maps/Route_01/scripts.pory"
	walk_up
# 379 "data//maps/Route_01/scripts.pory"
	face_right
	step_end

# 401 "data//maps/Route_01/scripts.pory"
Route_01_Script_HauIntro_Movement_0:
# 401 "data//maps/Route_01/scripts.pory"
	walk_right
# 401 "data//maps/Route_01/scripts.pory"
	walk_up
# 401 "data//maps/Route_01/scripts.pory"
	step_end

# 403 "data//maps/Route_01/scripts.pory"
Route_01_Script_HauIntro_Movement_1:
# 403 "data//maps/Route_01/scripts.pory"
	walk_left
# 403 "data//maps/Route_01/scripts.pory"
	walk_up
# 403 "data//maps/Route_01/scripts.pory"
	step_end

# 432 "data//maps/Route_01/scripts.pory"
Route_01_Script_HauIntro_Movement_2:
# 432 "data//maps/Route_01/scripts.pory"
	walk_up
# 432 "data//maps/Route_01/scripts.pory"
	walk_up
# 432 "data//maps/Route_01/scripts.pory"
	walk_left
# 432 "data//maps/Route_01/scripts.pory"
	walk_up
# 432 "data//maps/Route_01/scripts.pory"
	walk_up
# 432 "data//maps/Route_01/scripts.pory"
	walk_up
# 432 "data//maps/Route_01/scripts.pory"
	walk_up
# 432 "data//maps/Route_01/scripts.pory"
	walk_up
# 432 "data//maps/Route_01/scripts.pory"
	step_end

# 528 "data//maps/Route_01/scripts.pory"
Route_01_NPC_Rockruff_Movement_0:
# 528 "data//maps/Route_01/scripts.pory"
	face_right
	step_end

Route_01_Trigger_YungoosEncounter_Left_Text_0:
# 13 "data//maps/Route_01/scripts.pory"
	.string "I shouldn't leave without a Pokémon!$"

Route_01_Trigger_YungoosEncounter_Middle_Text_0:
# 52 "data//maps/Route_01/scripts.pory"
	.string "Can't leave without a Pokémon!$"

Route_01_Script_YungoosEncounter_Text_0:
# 97 "data//maps/Route_01/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}A {COLOR BLUE}Yungoos{COLOR DARK_GRAY}! Grandpa Samson told me\n"
	.string "about these chasing people down... But\l"
	.string "I don't have a Pokémon to fight it!$"

Route_01_Script_YungoosEncounter_Text_1:
# 101 "data//maps/Route_01/scripts.pory"
	.string "Wild Yungoos$"

Route_01_Script_YungoosEncounter_Text_2:
# 103 "data//maps/Route_01/scripts.pory"
	.string "Grr-yeow!!$"

Route_01_Script_YungoosEncounter_Text_3:
# 123 "data//maps/Route_01/scripts.pory"
	.string "Koo!$"

Route_01_Script_YungoosEncounter_Text_4:
# 129 "data//maps/Route_01/scripts.pory"
	.string "Mrower...$"

Route_01_Script_YungoosEncounter_Text_5:
# 135 "data//maps/Route_01/scripts.pory"
	.string "Bwark?$"

Route_01_Script_YungoosEncounter_Text_6:
# 145 "data//maps/Route_01/scripts.pory"
	.string "Krr... RAH!$"

Route_01_Script_YungoosEncounter_Text_7:
# 152 "data//maps/Route_01/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Wow, you saved me from that {COLOR BLUE}Yungoos{COLOR DARK_GRAY}!\n"
	.string "Who are you?$"

Route_01_Script_YungoosEncounter_Text_8:
# 157 "data//maps/Route_01/scripts.pory"
	.string "Grandpa Samson$"

Route_01_Script_YungoosEncounter_Text_9:
# 159 "data//maps/Route_01/scripts.pory"
	.string "Aue! {PLAYER}! You found them!$"

Route_01_Script_YungoosEncounter_Text_10:
# 189 "data//maps/Route_01/scripts.pory"
	.string "We were on the way back from {COLOR GREEN}Iki Town{COLOR DARK_GRAY}\n"
	.string "when {COLOR GREEN}Rowlet{COLOR DARK_GRAY}, {COLOR RED}Litten{COLOR DARK_GRAY}, and {COLOR BLUE}Popplio{COLOR DARK_GRAY} ran\l"
	.string "off. How'd ya catch 'em?$"

Route_01_Script_YungoosEncounter_Text_11:
# 194 "data//maps/Route_01/scripts.pory"
	.string "???$"

Route_01_Script_YungoosEncounter_Text_12:
# 196 "data//maps/Route_01/scripts.pory"
	.string "Ha! Slow down, cousin! It looks like\n"
	.string "those three were saving them from a\l"
	.string "Yungoos.$"

Route_01_Script_YungoosEncounter_Text_13:
# 205 "data//maps/Route_01/scripts.pory"
	.string "Prof. Kukui$"

Route_01_Script_YungoosEncounter_Text_14:
# 207 "data//maps/Route_01/scripts.pory"
	.string "The name's Kukui, the Professor of\n"
	.string "Melemele Island! And by the sound of it,\l"
	.string "you're {PLAYER}, yeah?\n"
	.string "Welcome to Alola!\p"
	.string "Pokémon like to live in the grass around\n"
	.string "here. If you want to explore Alola,\l"
	.string "you'll need your own Pokémon to dish\l"
	.string "out some moves!$"

Route_01_Script_YungoosEncounter_Text_15:
# 219 "data//maps/Route_01/scripts.pory"
	.string "As it happens, I was in Iki Town picking\n"
	.string "up those {COLOR GREEN}three Pokémon{COLOR DARK_GRAY} to show you\l"
	.string "before they ran off.$"

Route_01_Script_YungoosEncounter_Text_16:
# 223 "data//maps/Route_01/scripts.pory"
	.string "How about you {COLOR GREEN}pick one to be your\n"
	.string "partner{COLOR DARK_GRAY}? They all seem to like you well\l"
	.string "enough, ohoho!$"

Route_01_Script_ProfKukui_StarterChoice_Text_0:
# 244 "data//maps/Route_01/scripts.pory"
	.string "Somethin' wrong, {PLAYER}? Pick\n"
	.string "whichever Pokémon speaks to you the\l"
	.string "most, yeah!$"

Route_01_Script_SamsonOak_StarterChoice_Text_0:
# 255 "data//maps/Route_01/scripts.pory"
	.string "Go ahead, pick a Pokémon to join you!\n"
	.string "They're all quite rare, so choose wisely.$"

Route_01_Script_ChooseRowlet_Text_0:
# 265 "data//maps/Route_01/scripts.pory"
	.string "Rowlet$"

Route_01_Script_ChooseRowlet_Text_1:
# 272 "data//maps/Route_01/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Grandpa Samson mentioned this\n"
	.string "Pokémon! {COLOR GREEN}Rowlet{COLOR DARK_GRAY} likes to fly at night,\l"
	.string "tucking itself into corners during the\l"
	.string "day.$"

Route_01_Script_ChooseRowlet_Text_2:
# 274 "data//maps/Route_01/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Should I pick {COLOR GREEN}Rowlet{COLOR DARK_GRAY}, the Grass Quill\n"
	.string "Pokémon?$"

Route_01_Script_ChooseLitten_Text_0:
# 289 "data//maps/Route_01/scripts.pory"
	.string "Litten$"

Route_01_Script_ChooseLitten_Text_1:
# 296 "data//maps/Route_01/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Grandpa Samson mentioned this\n"
	.string "Pokémon! {COLOR RED}Litten{COLOR DARK_GRAY} acts aloof, but it\l"
	.string "loves Trainers who help keep its fur\l"
	.string "clean.$"

Route_01_Script_ChooseLitten_Text_2:
# 298 "data//maps/Route_01/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Should I pick {COLOR RED}Litten{COLOR DARK_GRAY}, the Fire Cat\n"
	.string "Pokémon?$"

Route_01_Script_ChoosePopplio_Text_0:
# 313 "data//maps/Route_01/scripts.pory"
	.string "Popplio$"

Route_01_Script_ChoosePopplio_Text_1:
# 320 "data//maps/Route_01/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Grandpa Samson mentioned this\n"
	.string "Pokémon! {COLOR BLUE}Popplio{COLOR DARK_GRAY} loves to play, blowing\l"
	.string "bubbles and bouncing around on them to\l"
	.string "make a show.$"

Route_01_Script_ChoosePopplio_Text_2:
# 322 "data//maps/Route_01/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Should I pick {COLOR BLUE}Popplio{COLOR DARK_GRAY}, the Sea Lion\n"
	.string "Pokémon?$"

Route_01_Script_ReactToStarter_Text_0:
# 345 "data//maps/Route_01/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}I choose you, {STR_VAR_1}!$"

Route_01_Script_ReactToStarter_Text_1:
# 372 "data//maps/Route_01/scripts.pory"
	.string "{STR_VAR_1}! I had a feeling that's\n"
	.string "who you would pick.$"

Route_01_Script_ReactToStarter_Text_2:
# 376 "data//maps/Route_01/scripts.pory"
	.string "Now, you thank Professor Kukui for that\n"
	.string "{STR_VAR_1} with a great big Alolan\l"
	.string "'Mahalo'. Those three Pokémon were\l"
	.string "originally his!$"

Route_01_Script_ReactToStarter_Text_3:
# 384 "data//maps/Route_01/scripts.pory"
	.string "Na-ah, don't sweat it, cousin! When I\n"
	.string "heard the great Samson Oak's own\l"
	.string "grandkid was moving back to Alola, I\l"
	.string "knew they'd shape up to be a Pokémon\l"
	.string "Trainer!\p"
	.string "I'll get the other two Pokémon back\n"
	.string "into their Poké Balls, then let's show\l"
	.string "your Mom your new friend!$"

Route_01_Script_HauIntro_Text_0:
# 416 "data//maps/Route_01/scripts.pory"
	.string "Hey, hey! You've got a {STR_VAR_1}\n"
	.string "with you... You must be {PLAYER}!$"

Route_01_Script_HauIntro_Text_1:
# 418 "data//maps/Route_01/scripts.pory"
	.string "Hau$"

Route_01_Script_HauIntro_Text_2:
# 420 "data//maps/Route_01/scripts.pory"
	.string "I'm Hau! Professor Kukui told me to keep\n"
	.string "an eye out for ya.\p"
	.string "I'll get my first Pokémon at the {COLOR GREEN}Manalo\n"
	.string "Festival{COLOR DARK_GRAY} tonight, but I heard you\l"
	.string "already got yours! I figure I should\l"
	.string "give these to you.$"

Route_01_Script_HauIntro_Text_3:
# 426 "data//maps/Route_01/scripts.pory"
	.string "Kukui gave me a big box of those, but I\n"
	.string "can't battle wild Pokémon without a\l"
	.string "partner of my own yet!$"

Route_01_Script_HauIntro_Text_4:
# 430 "data//maps/Route_01/scripts.pory"
	.string "I'm gonna go on ahead. See you later!$"

Route_01_Sign_Directions_Text_0:
# 448 "data//maps/Route_01/scripts.pory"
	.string "{UP_ARROW} Route 3\n"
	.string "{LEFT_ARROW} Iki Town\p"
	.string "{RIGHT_ARROW} Hau'oli Outskirts$"

Route_01_Trainer_LassAudrey_Text_0:
# 459 "data//maps/Route_01/scripts.pory"
	.string "When the eyes of Pokémon Trainers\n"
	.string "meet, you know what's going to happen,\l"
	.string "right?\p"
	.string "A Pokémon battle!$"

Route_01_Trainer_LassAudrey_Text_1:
# 460 "data//maps/Route_01/scripts.pory"
	.string "Oh! Your Pokémon looks so happy it\n"
	.string "won...$"

Route_01_Trainer_LassAudrey_Text_2:
# 462 "data//maps/Route_01/scripts.pory"
	.string "Lass Audrey$"

Route_01_Trainer_LassAudrey_Text_3:
# 463 "data//maps/Route_01/scripts.pory"
	.string "I like raising cute Pokémon. Lechonk is\n"
	.string "cute, y'know!$"

Route_01_Trainer_YoungsterJimmy_Text_0:
# 472 "data//maps/Route_01/scripts.pory"
	.string "Go for it, Caterpie! Show me the power\n"
	.string "of Bug-type Pokémon!$"

Route_01_Trainer_YoungsterJimmy_Text_1:
# 473 "data//maps/Route_01/scripts.pory"
	.string "My Bug Pokémon lost! You're really\n"
	.string "bugging me, you know?$"

Route_01_Trainer_YoungsterJimmy_Text_2:
# 475 "data//maps/Route_01/scripts.pory"
	.string "Youngster Jimmy$"

Route_01_Trainer_YoungsterJimmy_Text_3:
# 476 "data//maps/Route_01/scripts.pory"
	.string "I caught my Caterpie in the grass\n"
	.string "nearby. It came right out to say hello!$"

Route_01_Trainer_SchoolBoyOliver_Text_0:
# 485 "data//maps/Route_01/scripts.pory"
	.string "Hey! Please battle me!$"

Route_01_Trainer_SchoolBoyOliver_Text_1:
# 486 "data//maps/Route_01/scripts.pory"
	.string "If you're strong, please go away!$"

Route_01_Trainer_SchoolBoyOliver_Text_2:
# 488 "data//maps/Route_01/scripts.pory"
	.string "School Boy Oliver$"

Route_01_Trainer_SchoolBoyOliver_Text_3:
# 489 "data//maps/Route_01/scripts.pory"
	.string "You're a real good Trainer. I wanna be\n"
	.string "like you!$"

Route_01_NPC_BugCatcher_Text_0:
# 499 "data//maps/Route_01/scripts.pory"
	.string "Bug Catcher$"

Route_01_NPC_BugCatcher_Text_1:
# 500 "data//maps/Route_01/scripts.pory"
	.string "Huff, huff... Phew! I barely made it away\n"
	.string "from a wild Yungoos!\p"
	.string "Some Pokémon are brave enough to {COLOR GREEN}come\n"
	.string "out of the tall grass{COLOR DARK_GRAY}. A few might even\l"
	.string "{COLOR RED}chase you down{COLOR DARK_GRAY}, like Yungoos!$"

Route_01_NPC_SightseerF_Text_0:
# 510 "data//maps/Route_01/scripts.pory"
	.string "Sightseer$"

Route_01_NPC_SightseerF_Text_1:
# 511 "data//maps/Route_01/scripts.pory"
	.string "This Rockruff has been following me\n"
	.string "from Ten Carat Hill! I never knew\l"
	.string "Pokémon could be so friendly.$"

Route_01_NPC_Rockruff_Text_0:
# 523 "data//maps/Route_01/scripts.pory"
	.string "Rockruff$"

Route_01_NPC_Rockruff_Text_1:
# 525 "data//maps/Route_01/scripts.pory"
	.string "Arf warf!$"

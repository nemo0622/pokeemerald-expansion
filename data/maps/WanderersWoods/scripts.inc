WanderersWoods_MapScripts::
# 2 "data/maps/WanderersWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WanderersWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

WanderersWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/WanderersWoods/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, WanderersWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
WanderersWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 9 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 10 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 11 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 12 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 13 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 14 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 15 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 16 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 17 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 18 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 19 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 20 "data/maps/WanderersWoods/scripts.pory"
	setobjectaswildencounter 22, ENCOUNTER_LAND
# 21 "data/maps/WanderersWoods/scripts.pory"
	setobjectaswildencounter 23, ENCOUNTER_LAND
# 22 "data/maps/WanderersWoods/scripts.pory"
	setobjectaswildencounter 24, ENCOUNTER_LAND
# 23 "data/maps/WanderersWoods/scripts.pory"
	setobjectaswildencounter 25, ENCOUNTER_LAND
# 24 "data/maps/WanderersWoods/scripts.pory"
	setobjectaswildencounter 26, ENCOUNTER_LAND
# 25 "data/maps/WanderersWoods/scripts.pory"
	setobjectaswildencounter 27, ENCOUNTER_LAND
# 26 "data/maps/WanderersWoods/scripts.pory"
	setobjectaswildencounter 28, ENCOUNTER_LAND
	return

WanderersWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/WanderersWoods/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto WanderersWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


WanderersWoods_EventScript_DirectionSign::
# 32 "data/maps/WanderersWoods/scripts.pory"
	lock
# 33 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_DirectionSign_Text_0
# 34 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 35 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_Trainer_WanderersWoods_Zander::
# 41 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_ZANDER, WanderersWoods_Text_Trainer_WanderersWoods_ZanderIntro, WanderersWoods_Text_Trainer_WanderersWoods_ZanderDefeat
# 42 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_Trainer_WanderersWoods_Zander_Text_0
# 43 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_Trainer_WanderersWoods_Zander_Text_1
# 44 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 45 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_Trainer_WanderersWoods_Kallas::
# 59 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_KALLAS, WanderersWoods_Text_Trainer_WanderersWoods_KallasIntro, WanderersWoods_Text_Trainer_WanderersWoods_KallasDefeat
# 60 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_Trainer_WanderersWoods_Kallas_Text_0
# 61 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_Trainer_WanderersWoods_Kallas_Text_1
# 62 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 63 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_Trainer_WanderersWoods_Martha::
# 77 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_MARTHA, WanderersWoods_Text_Trainer_WanderersWoods_MarthaIntro, WanderersWoods_Text_Trainer_WanderersWoods_MarthaDefeat
# 78 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_Trainer_WanderersWoods_Martha_Text_0
# 79 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_Trainer_WanderersWoods_Martha_Text_1
# 80 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 81 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_Trainer_WanderersWoods_Alexi::
# 95 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_ALEXI, WanderersWoods_Text_Trainer_WanderersWoods_AlexiIntro, WanderersWoods_Text_Trainer_WanderersWoods_AlexiDefeat
# 96 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_Trainer_WanderersWoods_Alexi_Text_0
# 97 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_Trainer_WanderersWoods_Alexi_Text_1
# 98 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 99 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_Trainer_WanderersWoods_Ellie::
# 113 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_ELLIE, WanderersWoods_Text_Trainer_WanderersWoods_EllieIntro, WanderersWoods_Text_Trainer_WanderersWoods_EllieDefeat
# 114 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_Trainer_WanderersWoods_Ellie_Text_0
# 115 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_Trainer_WanderersWoods_Ellie_Text_1
# 116 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 117 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_Trainer_WanderersWoods_Lydia::
# 131 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_LYDIA, WanderersWoods_Text_Trainer_WanderersWoods_LydiaIntro, WanderersWoods_Text_Trainer_WanderersWoods_LydiaDefeat
# 132 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_Trainer_WanderersWoods_Lydia_Text_0
# 133 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_Trainer_WanderersWoods_Lydia_Text_1
# 134 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 135 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_Trainer_WanderersWoods_Thomas::
# 149 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_THOMAS, WanderersWoods_Text_Trainer_WanderersWoods_ThomasIntro, WanderersWoods_Text_Trainer_WanderersWoods_ThomasDefeat
# 150 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_Trainer_WanderersWoods_Thomas_Text_0
# 151 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_Trainer_WanderersWoods_Thomas_Text_1
# 152 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 153 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_NPC_Man::
# 167 "data/maps/WanderersWoods/scripts.pory"
	lock
# 168 "data/maps/WanderersWoods/scripts.pory"
	faceplayer
# 169 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_NPC_Man_Text_0
# 170 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_NPC_Man_Text_1
# 171 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 172 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_RaniaNPC::
# 178 "data/maps/WanderersWoods/scripts.pory"
	lock
# 179 "data/maps/WanderersWoods/scripts.pory"
	faceplayer
# 180 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_RaniaNPC_Text_0
# 181 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_RaniaNPC_Text_1
# 182 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 183 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_NikoNPC::
# 189 "data/maps/WanderersWoods/scripts.pory"
	lock
# 190 "data/maps/WanderersWoods/scripts.pory"
	faceplayer
# 191 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_NikoNPC_Text_0
# 192 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_NikoNPC_Text_1
# 193 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 194 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_Trigger_ChimeraEvent::
# 205 "data/maps/WanderersWoods/scripts.pory"
	lock
# 206 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 207 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
# 208 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 209 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 210 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 211 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 212 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 213 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_RaniaNPC_Text_0
# 214 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_Trigger_ChimeraEvent_Text_0
# 215 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 216 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 217 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 218 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_NikoNPC_Text_0
# 219 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_Trigger_ChimeraEvent_Text_1
# 220 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 221 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WanderersWoods_Movement_PlayerLeadsToChimera
# 222 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, WanderersWoods_Movement_RaniaFollowsToChimera
# 223 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, WanderersWoods_Movement_NikoFollowsToChimera
# 224 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 225 "data/maps/WanderersWoods/scripts.pory"
	goto WanderersWoods_EventScript_ChimeraEvent
	end


WanderersWoods_EventScript_ChimeraEvent::
# 232 "data/maps/WanderersWoods/scripts.pory"
	delay 20
# 233 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 234 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 235 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 236 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 237 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 238 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 239 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 240 "data/maps/WanderersWoods/scripts.pory"
	delay 30
# 243 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 244 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 245 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 246 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_RaniaNPC_Text_0
# 247 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_0
# 248 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 249 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 250 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 251 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 252 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 255 "data/maps/WanderersWoods/scripts.pory"
	applymovement 8, Common_Movement_WalkUp
# 256 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 257 "data/maps/WanderersWoods/scripts.pory"
	delay 15
# 258 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_ChimeraEvent_Text_1
# 259 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_2
# 260 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 261 "data/maps/WanderersWoods/scripts.pory"
	delay 15
# 262 "data/maps/WanderersWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkUp2
# 263 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 264 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_ChimeraEvent_Text_1
# 265 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_3
# 266 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 267 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 268 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 269 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 270 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 271 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_ChimeraEvent_Text_4
# 272 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_5
# 273 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 276 "data/maps/WanderersWoods/scripts.pory"
	applymovement 11, Common_Movement_JumpInPlaceLeft
# 277 "data/maps/WanderersWoods/scripts.pory"
	applymovement 12, Common_Movement_JumpInPlaceDown
# 278 "data/maps/WanderersWoods/scripts.pory"
	applymovement 13, Common_Movement_JumpInPlaceLeft
# 279 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 280 "data/maps/WanderersWoods/scripts.pory"
	delay 20
# 281 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 282 "data/maps/WanderersWoods/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 283 "data/maps/WanderersWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 284 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_FaceDown
# 285 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 286 "data/maps/WanderersWoods/scripts.pory"
	applymovement 11, WanderersWoods_Movement_ShroomishEscape
# 287 "data/maps/WanderersWoods/scripts.pory"
	applymovement 12, WanderersWoods_Movement_BlitzleEscape
# 288 "data/maps/WanderersWoods/scripts.pory"
	applymovement 13, WanderersWoods_Movement_ImpidimpEscape
# 289 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 290 "data/maps/WanderersWoods/scripts.pory"
	delay 60
# 293 "data/maps/WanderersWoods/scripts.pory"
	applymovement 8, Common_Movement_FaceUp
# 294 "data/maps/WanderersWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 295 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 296 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_ChimeraEvent_Text_4
# 297 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_6
# 298 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 299 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 300 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 301 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 302 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 303 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_RaniaNPC_Text_0
# 304 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_7
# 305 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 306 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 307 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 308 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 311 "data/maps/WanderersWoods/scripts.pory"
	applymovement 8, Common_Movement_WalkUp
# 312 "data/maps/WanderersWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkUp
# 313 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_WalkUp
# 314 "data/maps/WanderersWoods/scripts.pory"
	goto_if_unset FLAG_HARD_MODE, WanderersWoods_EventScript_ChimeraEvent_2
# 320 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_WANDERERSWOODS_CHIMERA_ADMIN_HARD, WanderersWoods_Text_ChimeraAdminDefeated
WanderersWoods_EventScript_ChimeraEvent_1:
# 324 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_QuestionMark
# 325 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 326 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_FaceLeft
# 327 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 328 "data/maps/WanderersWoods/scripts.pory"
	applymovement 8, WanderersWoods_Movement_GruntEscapes1
# 329 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 330 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
# 331 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 332 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_NikoNPC_Text_0
# 333 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_8
# 334 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 335 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, WanderersWoods_Movement_GruntEscapes1
# 336 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 337 "data/maps/WanderersWoods/scripts.pory"
	delay 20
# 338 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 339 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 340 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 341 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 342 "data/maps/WanderersWoods/scripts.pory"
	applymovement 9, WanderersWoods_Movement_GruntEscapes2
# 343 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 344 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 345 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 346 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_RaniaNPC_Text_0
# 347 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_9
# 348 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 349 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, WanderersWoods_Movement_GruntEscapes2
# 350 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 351 "data/maps/WanderersWoods/scripts.pory"
	delay 60
# 354 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 355 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 356 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_ChimeraEvent_Text_4
# 357 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_10
# 358 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 359 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 360 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, WanderersWoods_Movement_AdminEscapes
# 361 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 362 "data/maps/WanderersWoods/scripts.pory"
	delay 20
# 365 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 366 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 367 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_ChimeraEvent_Text_11
# 368 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_12
# 369 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 370 "data/maps/WanderersWoods/scripts.pory"
	delay 30
# 371 "data/maps/WanderersWoods/scripts.pory"
	message WanderersWoods_EventScript_ChimeraEvent_Text_13
# 372 "data/maps/WanderersWoods/scripts.pory"
	waitmessage
# 373 "data/maps/WanderersWoods/scripts.pory"
	multichoice 21, 8, MULTI_NIKO_OR_RANIA, TRUE
# 374 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 375 "data/maps/WanderersWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 376 "data/maps/WanderersWoods/scripts.pory"
	delay 20
# 377 "data/maps/WanderersWoods/scripts.pory"
	addobject 7
# 378 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, WanderersWoods_Movement_NikoReturns
# 379 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 380 "data/maps/WanderersWoods/scripts.pory"
	addobject 6
# 381 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, WanderersWoods_Movement_RaniaReturns
# 382 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 383 "data/maps/WanderersWoods/scripts.pory"
	delay 10
# 384 "data/maps/WanderersWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 385 "data/maps/WanderersWoods/scripts.pory"
	delay 30
# 388 "data/maps/WanderersWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WanderersWoods_EventScript_ChimeraEvent_6
# 414 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 415 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 416 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 417 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_RaniaNPC_Text_0
# 418 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_14
# 419 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 421 "data/maps/WanderersWoods/scripts.pory"
	setflag FLAG_FORCE_SHINY
# 422 "data/maps/WanderersWoods/scripts.pory"
	setflag FLAG_SHINY_CREATION
# 423 "data/maps/WanderersWoods/scripts.pory"
	randomelement SPECIES_POPPLIO, SPECIES_FROAKIE, SPECIES_QUAXLY, SPECIES_PANPOUR, SPECIES_DUCKLETT, SPECIES_POLIWAG, SPECIES_WOOPER, SPECIES_OMANYTE, SPECIES_KABUTO, SPECIES_WINGULL, SPECIES_SPHEAL, SPECIES_SEEL, SPECIES_BUIZEL, SPECIES_WIMPOD, SPECIES_FINIZEN, SPECIES_CORSOLA, SPECIES_FINNEON, SPECIES_WAILMER, SPECIES_TENTACOOL, SPECIES_CLAUNCHER, SPECIES_BASCULIN_WHITE_STRIPED, SPECIES_SKRELP, SPECIES_CHINCHOU, SPECIES_SHELLDER, SPECIES_CLAMPERL, SPECIES_RELICANTH, SPECIES_MAGIKARP, SPECIES_BRUXISH, SPECIES_LAPRAS, SPECIES_PSYDUCK, SPECIES_REMORAID, SPECIES_CORPHISH, SPECIES_TIRTOUGA, SPECIES_ROWLET, SPECIES_CHESPIN, SPECIES_SPRIGATITO, SPECIES_PANSAGE, SPECIES_HOPPIP, SPECIES_PARAS, SPECIES_APPLIN, SPECIES_SKIDDO, SPECIES_PUMPKABOO, SPECIES_SHROOMISH, SPECIES_BOUNSWEET, SPECIES_TOEDSCOOL, SPECIES_CHERUBI, SPECIES_LILEEP, SPECIES_FOMANTIS, SPECIES_VOLTORB_HISUI, SPECIES_BUDEW, SPECIES_SNOVER, SPECIES_LITTEN, SPECIES_FENNEKIN, SPECIES_FUECOCO, SPECIES_PANSEAR, SPECIES_VULPIX, SPECIES_SALANDIT, SPECIES_HOUNDOUR, SPECIES_PONYTA, SPECIES_LITWICK, SPECIES_CHARCADET, SPECIES_TORKOAL, SPECIES_NUMEL, SPECIES_GROWLITHE, SPECIES_GROWLITHE_HISUI, SPECIES_COMFEY
# 424 "data/maps/WanderersWoods/scripts.pory"
	giveegg VAR_RESULT
# 425 "data/maps/WanderersWoods/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 426 "data/maps/WanderersWoods/scripts.pory"
	message WanderersWoods_EventScript_ChimeraEvent_Text_15
# 427 "data/maps/WanderersWoods/scripts.pory"
	waitmessage
# 428 "data/maps/WanderersWoods/scripts.pory"
	waitfanfare
# 429 "data/maps/WanderersWoods/scripts.pory"
	delay 20
# 430 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_FORCE_SHINY
# 431 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_SHINY_CREATION
# 432 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_RaniaNPC_Text_0
# 433 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_17
# 434 "data/maps/WanderersWoods/scripts.pory"
	closemessage
WanderersWoods_EventScript_ChimeraEvent_5:
# 438 "data/maps/WanderersWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 439 "data/maps/WanderersWoods/scripts.pory"
	delay 30
# 440 "data/maps/WanderersWoods/scripts.pory"
	setflag FLAG_BEAT_CHIMERA_WANDERING_WOODS
# 441 "data/maps/WanderersWoods/scripts.pory"
	removeobject 6
# 442 "data/maps/WanderersWoods/scripts.pory"
	removeobject 7
# 443 "data/maps/WanderersWoods/scripts.pory"
	removeobject 8
# 444 "data/maps/WanderersWoods/scripts.pory"
	removeobject 9
# 445 "data/maps/WanderersWoods/scripts.pory"
	removeobject 10
# 446 "data/maps/WanderersWoods/scripts.pory"
	removeobject 11
# 447 "data/maps/WanderersWoods/scripts.pory"
	removeobject 12
# 448 "data/maps/WanderersWoods/scripts.pory"
	removeobject 13
# 449 "data/maps/WanderersWoods/scripts.pory"
	delay 30
# 450 "data/maps/WanderersWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 451 "data/maps/WanderersWoods/scripts.pory"
	delay 30
# 452 "data/maps/WanderersWoods/scripts.pory"
	setvar VAR_RANIA_STATE, 4
# 453 "data/maps/WanderersWoods/scripts.pory"
	setvar VAR_NIKO_STATE, 5
# 454 "data/maps/WanderersWoods/scripts.pory"
	releaseall
	end

WanderersWoods_EventScript_ChimeraEvent_2:
# 316 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_WANDERERSWOODS_CHIMERA_ADMIN, WanderersWoods_Text_ChimeraAdminDefeated
	goto WanderersWoods_EventScript_ChimeraEvent_1

WanderersWoods_EventScript_ChimeraEvent_6:
# 390 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 391 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 392 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 393 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_NikoNPC_Text_0
# 394 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_14
# 395 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 397 "data/maps/WanderersWoods/scripts.pory"
	setflag FLAG_FORCE_SHINY
# 398 "data/maps/WanderersWoods/scripts.pory"
	setflag FLAG_SHINY_CREATION
# 399 "data/maps/WanderersWoods/scripts.pory"
	randomelement SPECIES_MAREEP, SPECIES_BLITZLE, SPECIES_PACHIRISU, SPECIES_YAMPER, SPECIES_PAWMI, SPECIES_WATTREL, SPECIES_PICHU, SPECIES_TOGEDEMARU, SPECIES_DEDENNE, SPECIES_CHINCHOU, SPECIES_HELIOPTILE, SPECIES_VOLTORB, SPECIES_VOLTORB_HISUI, SPECIES_MAGNEMITE, SPECIES_SANDSHREW_ALOLAN, SPECIES_MAWILE, SPECIES_ARON, SPECIES_HONEDGE, SPECIES_BRONZOR, SPECIES_CUFANT, SPECIES_MEOWTH_GALAR, SPECIES_TINKATINK, SPECIES_GRIMER_ALOLAN, SPECIES_MURKROW, SPECIES_VULLABY, SPECIES_SANDILE, SPECIES_HOUNDOUR, SPECIES_ZORUA, SPECIES_MEOWTH_ALOLAN, SPECIES_STUNKY, SPECIES_EKANS, SPECIES_SCRAGGY, SPECIES_IMPIDIMP, SPECIES_ZIGZAGOON_GALAR
# 400 "data/maps/WanderersWoods/scripts.pory"
	giveegg VAR_RESULT
# 401 "data/maps/WanderersWoods/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 402 "data/maps/WanderersWoods/scripts.pory"
	message WanderersWoods_EventScript_ChimeraEvent_Text_15
# 403 "data/maps/WanderersWoods/scripts.pory"
	waitmessage
# 404 "data/maps/WanderersWoods/scripts.pory"
	waitfanfare
# 405 "data/maps/WanderersWoods/scripts.pory"
	delay 20
# 406 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_FORCE_SHINY
# 407 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_SHINY_CREATION
# 408 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_NikoNPC_Text_0
# 409 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_16
# 410 "data/maps/WanderersWoods/scripts.pory"
	closemessage
	goto WanderersWoods_EventScript_ChimeraEvent_5


# 458 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_PlayerLeadsToChimera:
# 460 "data/maps/WanderersWoods/scripts.pory"
	walk_right
# 460 "data/maps/WanderersWoods/scripts.pory"
	walk_right
# 461 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 461 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 461 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 462 "data/maps/WanderersWoods/scripts.pory"
	emote_question_mark
# 463 "data/maps/WanderersWoods/scripts.pory"
	delay_16
# 464 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 464 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 465 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 468 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_RaniaFollowsToChimera:
# 470 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 471 "data/maps/WanderersWoods/scripts.pory"
	walk_right
# 471 "data/maps/WanderersWoods/scripts.pory"
	walk_right
# 472 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 472 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 473 "data/maps/WanderersWoods/scripts.pory"
	delay_16
# 474 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 474 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 475 "data/maps/WanderersWoods/scripts.pory"
	walk_right
# 476 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 477 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 480 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_NikoFollowsToChimera:
# 482 "data/maps/WanderersWoods/scripts.pory"
	walk_in_place_right
# 483 "data/maps/WanderersWoods/scripts.pory"
	walk_right
# 483 "data/maps/WanderersWoods/scripts.pory"
	walk_right
# 484 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 484 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 484 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 485 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 485 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 486 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 489 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_ShroomishEscape:
# 491 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 492 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_up
# 493 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 493 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 493 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 493 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 493 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 493 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 493 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 494 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 497 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_BlitzleEscape:
# 499 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 499 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 500 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 500 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 501 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 501 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 502 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 505 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_ImpidimpEscape:
# 507 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 508 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 508 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 509 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_up
# 510 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 510 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 510 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 511 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 511 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 511 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 511 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 512 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 520 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_GruntEscapes1:
# 522 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 522 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 523 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 523 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 524 "data/maps/WanderersWoods/scripts.pory"
	jump_down
# 524 "data/maps/WanderersWoods/scripts.pory"
	jump_down
# 524 "data/maps/WanderersWoods/scripts.pory"
	jump_down
# 525 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 525 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 525 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 526 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 529 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_GruntEscapes2:
# 531 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 531 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 531 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 532 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 532 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 533 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 533 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 534 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 535 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 535 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 536 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 539 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_AdminEscapes:
# 541 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 541 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 541 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 541 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 541 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 542 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 542 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 542 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 543 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 543 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 543 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 544 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 547 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_NikoReturns:
# 549 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 549 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 549 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 550 "data/maps/WanderersWoods/scripts.pory"
	jump_up
# 550 "data/maps/WanderersWoods/scripts.pory"
	jump_up
# 550 "data/maps/WanderersWoods/scripts.pory"
	jump_up
# 551 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_right
# 551 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_right
# 552 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 552 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 553 "data/maps/WanderersWoods/scripts.pory"
	face_right
# 554 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 557 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_RaniaReturns:
# 559 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 559 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 560 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_right
# 561 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 561 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 562 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_right
# 562 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_right
# 563 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 563 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 563 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 564 "data/maps/WanderersWoods/scripts.pory"
	face_left
# 565 "data/maps/WanderersWoods/scripts.pory"
	step_end

WanderersWoods_EventScript_DirectionSign_Text_0:
# 33 "data/maps/WanderersWoods/scripts.pory"
	.string "Wanderers' Woods - North\n"
	.string "A Trail of Loss and Discovery\p"
	.string "{UP_ARROW} Jusmail Town\n"
	.string "Pythios Town {DOWN_ARROW}$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Zander_Text_0:
# 42 "data/maps/WanderersWoods/scripts.pory"
	.string "Zander$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Zander_Text_1:
# 43 "data/maps/WanderersWoods/scripts.pory"
	.string "Apparently people get lost in here all\n"
	.string "the time. I'm not letting Jusmail Town\l"
	.string "out of my sight!$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Kallas_Text_0:
# 60 "data/maps/WanderersWoods/scripts.pory"
	.string "Kallas$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Kallas_Text_1:
# 61 "data/maps/WanderersWoods/scripts.pory"
	.string "These Grass-type Pokémon are weak to\n"
	.string "my Flying-type moves.$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Martha_Text_0:
# 78 "data/maps/WanderersWoods/scripts.pory"
	.string "Martha$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Martha_Text_1:
# 79 "data/maps/WanderersWoods/scripts.pory"
	.string "There are rumors of Team Chimera\n"
	.string "operating around here recently.$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Alexi_Text_0:
# 96 "data/maps/WanderersWoods/scripts.pory"
	.string "Alexi$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Alexi_Text_1:
# 97 "data/maps/WanderersWoods/scripts.pory"
	.string "How do people get through here,\n"
	.string "anyway? Ugh.$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Ellie_Text_0:
# 114 "data/maps/WanderersWoods/scripts.pory"
	.string "Ellie$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Ellie_Text_1:
# 115 "data/maps/WanderersWoods/scripts.pory"
	.string "Some Pokémon only come out at night.\n"
	.string "Maybe my music will bring out the\l"
	.string "coolest Pokémon!$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Lydia_Text_0:
# 132 "data/maps/WanderersWoods/scripts.pory"
	.string "Lydia$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Lydia_Text_1:
# 133 "data/maps/WanderersWoods/scripts.pory"
	.string "Team Chimera was in the woods?! Their\n"
	.string "treatment of Pokémon is known to be\l"
	.string "terrible.$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Thomas_Text_0:
# 150 "data/maps/WanderersWoods/scripts.pory"
	.string "Thomas$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Thomas_Text_1:
# 151 "data/maps/WanderersWoods/scripts.pory"
	.string "Not all Ghost-type or Dark-type\n"
	.string "Pokémon are actually evil! That's a\l"
	.string "common misconception.$"

WanderersWoods_EventScript_NPC_Man_Text_0:
# 169 "data/maps/WanderersWoods/scripts.pory"
	.string "Man$"

WanderersWoods_EventScript_NPC_Man_Text_1:
# 170 "data/maps/WanderersWoods/scripts.pory"
	.string "These red-orange plants are a sign\n"
	.string "that we're close to Pythios Town.\l"
	.string "Nobody quite knows why, but plants\l"
	.string "around there are stuck in a permanent\l"
	.string "state of autumn.$"

WanderersWoods_EventScript_RaniaNPC_Text_0:
# 180 "data/maps/WanderersWoods/scripts.pory"
	.string "Rania$"

WanderersWoods_EventScript_RaniaNPC_Text_1:
# 181 "data/maps/WanderersWoods/scripts.pory"
	.string "{PLAYER}! Are you headed south to\n"
	.string "Pythios Town too?\p"
	.string "Niko and I are recording Pokémon\n"
	.string "behavior around here. Every area in the\l"
	.string "Ilios Region is packed with new\l"
	.string "Pokémon!$"

WanderersWoods_EventScript_NikoNPC_Text_0:
# 191 "data/maps/WanderersWoods/scripts.pory"
	.string "Niko$"

WanderersWoods_EventScript_NikoNPC_Text_1:
# 192 "data/maps/WanderersWoods/scripts.pory"
	.string "Chaire, {PLAYER}! Pokémon behavior is\n"
	.string "so interesting, eh?\p"
	.string "Rania and I are getting some data and\n"
	.string "training our Pokémon while we're at it!\l"
	.string "Who knows, we might beat you to Pythios\l"
	.string "Town!$"

WanderersWoods_Trigger_ChimeraEvent_Text_0:
# 214 "data/maps/WanderersWoods/scripts.pory"
	.string "Headed down to Pythios Town? We'll come\n"
	.string "with you!$"

WanderersWoods_Trigger_ChimeraEvent_Text_1:
# 219 "data/maps/WanderersWoods/scripts.pory"
	.string "There are reports of Ghost-type and\n"
	.string "Psychic-type Pokémon there. Maybe we\l"
	.string "can record some new species!$"

WanderersWoods_EventScript_ChimeraEvent_Text_0:
# 247 "data/maps/WanderersWoods/scripts.pory"
	.string "Those are Team Chimera thugs!\n"
	.string "Remember, that group who attacked the\l"
	.string "Pokédex shipment when you get here,\l"
	.string "{PLAYER}? What are they doing to\l"
	.string "those poor Pokémon?!$"

WanderersWoods_EventScript_ChimeraEvent_Text_1:
# 258 "data/maps/WanderersWoods/scripts.pory"
	.string "Chimera Grunt$"

WanderersWoods_EventScript_ChimeraEvent_Text_2:
# 259 "data/maps/WanderersWoods/scripts.pory"
	.string "Argh, nothin' like spectators to ruin a\n"
	.string "perfectly good plan. Stay out of our\l"
	.string "business!$"

WanderersWoods_EventScript_ChimeraEvent_Text_3:
# 265 "data/maps/WanderersWoods/scripts.pory"
	.string "Yeah, this doesn't concern you! The\n"
	.string "Boss is lookin' for new Pokémon for-$"

WanderersWoods_EventScript_ChimeraEvent_Text_4:
# 271 "data/maps/WanderersWoods/scripts.pory"
	.string "Chimera Admin$"

WanderersWoods_EventScript_ChimeraEvent_Text_5:
# 272 "data/maps/WanderersWoods/scripts.pory"
	.string "Shut it, Grunt! Do you wanna give away\n"
	.string "all our plans?!$"

WanderersWoods_EventScript_ChimeraEvent_Text_6:
# 297 "data/maps/WanderersWoods/scripts.pory"
	.string "No! Our Pokémon got away! This is your\n"
	.string "fault... you have to pay! Grunts, let's\l"
	.string "get 'em!$"

WanderersWoods_EventScript_ChimeraEvent_Text_7:
# 304 "data/maps/WanderersWoods/scripts.pory"
	.string "We'll help you fight them, {PLAYER}!\n"
	.string "These thugs can't get away with\l"
	.string "treating Pokémon like that!$"

WanderersWoods_EventScript_ChimeraEvent_Text_8:
# 333 "data/maps/WanderersWoods/scripts.pory"
	.string "Hold it! You're not getting away!$"

WanderersWoods_EventScript_ChimeraEvent_Text_9:
# 347 "data/maps/WanderersWoods/scripts.pory"
	.string "{PLAYER}, you stay here and watch\n"
	.string "this one. I'm going after them!$"

WanderersWoods_EventScript_ChimeraEvent_Text_10:
# 357 "data/maps/WanderersWoods/scripts.pory"
	.string "Grr... you're lucky my Arcanine was\n"
	.string "knocked out while we caught those\l"
	.string "Pokémon.\p"
	.string "You learn so much about Pokémon, but\n"
	.string "you do nothing with it! Pokémon, nature,\l"
	.string "everything around us - you need to use\l"
	.string "them for everything they're worth!\p"
	.string "The Pokémon we rounded up were to be\n"
	.string "trained, bringing out their full\l"
	.string "potential. Of course, some Pokémon\l"
	.string "can't handle the pressure, so we sell\l"
	.string "them for a little extra cash. What's the\l"
	.string "harm in that?\p"
	.string "You won't stop Team Chimera. We've got\n"
	.string "{COLOR GREEN}friends in high places{COLOR DARK_GRAY}. Next time, my\l"
	.string "Arcanine will knock you back to\l"
	.string "whatever region you came from!$"

WanderersWoods_EventScript_ChimeraEvent_Text_11:
# 367 "data/maps/WanderersWoods/scripts.pory"
	.string "???$"

WanderersWoods_EventScript_ChimeraEvent_Text_12:
# 368 "data/maps/WanderersWoods/scripts.pory"
	.string "Woah, what's this?!$"

WanderersWoods_EventScript_ChimeraEvent_Text_13:
# 371 "data/maps/WanderersWoods/scripts.pory"
	.string "Who shouted in the distance?$"

WanderersWoods_EventScript_ChimeraEvent_Text_14:
# 394 "data/maps/WanderersWoods/scripts.pory"
	.string "Team Chimera got away from us, but look\n"
	.string "what one of them dropped! It's a\l"
	.string "{COLOR GREEN}Pokémon Egg like I've never seen\l"
	.string "before{COLOR DARK_GRAY}! Maybe it holds a rare Pokémon.\p"
	.string "{PLAYER}, I want you to have it.\n"
	.string "Pokémon Eggs aren't my specialty.$"

WanderersWoods_EventScript_ChimeraEvent_Text_15:
# 402 "data/maps/WanderersWoods/scripts.pory"
	.string "{PLAYER} received a {COLOR GREEN}Rare Egg{COLOR DARK_GRAY}!$"

WanderersWoods_EventScript_ChimeraEvent_Text_16:
# 409 "data/maps/WanderersWoods/scripts.pory"
	.string "Carry that Egg around until it hatches.\n"
	.string "Who knows, maybe it's a new species of\l"
	.string "Pokémon!\p"
	.string "Rania and I are gonna head back to the\n"
	.string "University for a while. Let us know if\l"
	.string "Pythios Town is worth a visit!$"

WanderersWoods_EventScript_ChimeraEvent_Text_17:
# 433 "data/maps/WanderersWoods/scripts.pory"
	.string "Carry that Egg around until it hatches.\n"
	.string "Who knows, maybe it's a new species of\l"
	.string "Pokémon!\p"
	.string "Niko and I are gonna head back to the\n"
	.string "University for a while. Let us know if\l"
	.string "Pythios Town is worth a visit!$"

WanderersWoods_Text_Trainer_WanderersWoods_ZanderIntro::
# 48 "data/maps/WanderersWoods/scripts.pory"
	.string "I came here for Toedscool because it's\n"
	.string "funny, but some of these Pokémon are\l"
	.string "so scary!$"

WanderersWoods_Text_Trainer_WanderersWoods_ZanderDefeat::
# 52 "data/maps/WanderersWoods/scripts.pory"
	.string "Eek! I thought I saw a Ghost Pokémon!$"

WanderersWoods_Text_Trainer_WanderersWoods_KallasIntro::
# 66 "data/maps/WanderersWoods/scripts.pory"
	.string "My Bird Pokémon and I come here to\n"
	.string "train! I'll let you help us out.$"

WanderersWoods_Text_Trainer_WanderersWoods_KallasDefeat::
# 70 "data/maps/WanderersWoods/scripts.pory"
	.string "My little birds!$"

WanderersWoods_Text_Trainer_WanderersWoods_MarthaIntro::
# 84 "data/maps/WanderersWoods/scripts.pory"
	.string "I hear some shouting up ahead. I'll stay\n"
	.string "away from there.$"

WanderersWoods_Text_Trainer_WanderersWoods_MarthaDefeat::
# 88 "data/maps/WanderersWoods/scripts.pory"
	.string "I hope it's not Team Chimera...!$"

WanderersWoods_Text_Trainer_WanderersWoods_AlexiIntro::
# 102 "data/maps/WanderersWoods/scripts.pory"
	.string "I've got a job down in Pythios Town, but\n"
	.string "now I'm lost!$"

WanderersWoods_Text_Trainer_WanderersWoods_AlexiDefeat::
# 106 "data/maps/WanderersWoods/scripts.pory"
	.string "Argh, I'm gonna be late!$"

WanderersWoods_Text_Trainer_WanderersWoods_EllieIntro::
# 120 "data/maps/WanderersWoods/scripts.pory"
	.string "I hear wild Impidimp only come out at\n"
	.string "night. So rad!$"

WanderersWoods_Text_Trainer_WanderersWoods_EllieDefeat::
# 124 "data/maps/WanderersWoods/scripts.pory"
	.string "Well that's not rad at all!$"

WanderersWoods_Text_Trainer_WanderersWoods_LydiaIntro::
# 138 "data/maps/WanderersWoods/scripts.pory"
	.string "Some Pokémon just scampered through\n"
	.string "here, like they were running from\l"
	.string "something. I wonder what happened?$"

WanderersWoods_Text_Trainer_WanderersWoods_LydiaDefeat::
# 142 "data/maps/WanderersWoods/scripts.pory"
	.string "Maybe I should've caught one.$"

WanderersWoods_Text_Trainer_WanderersWoods_ThomasIntro::
# 156 "data/maps/WanderersWoods/scripts.pory"
	.string "Pythios Town has a strange aura around\n"
	.string "it, that must be why the plants turn\l"
	.string "orange here.$"

WanderersWoods_Text_Trainer_WanderersWoods_ThomasDefeat::
# 160 "data/maps/WanderersWoods/scripts.pory"
	.string "I bet it's all the Ghost-type Pokémon.$"

WanderersWoods_Text_ChimeraAdminDefeated::
# 515 "data/maps/WanderersWoods/scripts.pory"
	.string "Beaten and stopped... the Boss won't\n"
	.string "take this.$"

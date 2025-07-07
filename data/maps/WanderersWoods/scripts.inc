WanderersWoods_MapScripts::
# 2 "data/maps/WanderersWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WanderersWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

WanderersWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 4 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 5 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 6 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 7 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 8 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 9 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 10 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 11 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 12 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 13 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 14 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 15 "data/maps/WanderersWoods/scripts.pory"
	setobjectaswildencounter 22, ENCOUNTER_LAND
# 16 "data/maps/WanderersWoods/scripts.pory"
	setobjectaswildencounter 23, ENCOUNTER_LAND
# 17 "data/maps/WanderersWoods/scripts.pory"
	setobjectaswildencounter 24, ENCOUNTER_LAND
# 18 "data/maps/WanderersWoods/scripts.pory"
	setobjectaswildencounter 25, ENCOUNTER_LAND
# 19 "data/maps/WanderersWoods/scripts.pory"
	setobjectaswildencounter 26, ENCOUNTER_LAND
# 20 "data/maps/WanderersWoods/scripts.pory"
	setobjectaswildencounter 27, ENCOUNTER_LAND
# 21 "data/maps/WanderersWoods/scripts.pory"
	setobjectaswildencounter 28, ENCOUNTER_LAND
	return


WanderersWoods_EventScript_DirectionSign::
# 27 "data/maps/WanderersWoods/scripts.pory"
	lock
# 28 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_DirectionSign_Text_0
# 29 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 30 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_Trainer_WanderersWoods_Zander::
# 36 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_ZANDER, WanderersWoods_Text_Trainer_WanderersWoods_ZanderIntro, WanderersWoods_Text_Trainer_WanderersWoods_ZanderDefeat
# 37 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_Trainer_WanderersWoods_Zander_Text_0
# 38 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_Trainer_WanderersWoods_Zander_Text_1
# 39 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 40 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_Trainer_WanderersWoods_Kallas::
# 54 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_KALLAS, WanderersWoods_Text_Trainer_WanderersWoods_KallasIntro, WanderersWoods_Text_Trainer_WanderersWoods_KallasDefeat
# 55 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_Trainer_WanderersWoods_Kallas_Text_0
# 56 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_Trainer_WanderersWoods_Kallas_Text_1
# 57 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 58 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_Trainer_WanderersWoods_Martha::
# 72 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_MARTHA, WanderersWoods_Text_Trainer_WanderersWoods_MarthaIntro, WanderersWoods_Text_Trainer_WanderersWoods_MarthaDefeat
# 73 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_Trainer_WanderersWoods_Martha_Text_0
# 74 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_Trainer_WanderersWoods_Martha_Text_1
# 75 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 76 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_Trainer_WanderersWoods_Alexi::
# 90 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_ALEXI, WanderersWoods_Text_Trainer_WanderersWoods_AlexiIntro, WanderersWoods_Text_Trainer_WanderersWoods_AlexiDefeat
# 91 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_Trainer_WanderersWoods_Alexi_Text_0
# 92 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_Trainer_WanderersWoods_Alexi_Text_1
# 93 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 94 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_Trainer_WanderersWoods_Ellie::
# 108 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_ELLIE, WanderersWoods_Text_Trainer_WanderersWoods_EllieIntro, WanderersWoods_Text_Trainer_WanderersWoods_EllieDefeat
# 109 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_Trainer_WanderersWoods_Ellie_Text_0
# 110 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_Trainer_WanderersWoods_Ellie_Text_1
# 111 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 112 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_Trainer_WanderersWoods_Lydia::
# 126 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_LYDIA, WanderersWoods_Text_Trainer_WanderersWoods_LydiaIntro, WanderersWoods_Text_Trainer_WanderersWoods_LydiaDefeat
# 127 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_Trainer_WanderersWoods_Lydia_Text_0
# 128 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_Trainer_WanderersWoods_Lydia_Text_1
# 129 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 130 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_Trainer_WanderersWoods_Thomas::
# 144 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_THOMAS, WanderersWoods_Text_Trainer_WanderersWoods_ThomasIntro, WanderersWoods_Text_Trainer_WanderersWoods_ThomasDefeat
# 145 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_Trainer_WanderersWoods_Thomas_Text_0
# 146 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_Trainer_WanderersWoods_Thomas_Text_1
# 147 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 148 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_NPC_Man::
# 162 "data/maps/WanderersWoods/scripts.pory"
	lock
# 163 "data/maps/WanderersWoods/scripts.pory"
	faceplayer
# 164 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_NPC_Man_Text_0
# 165 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_NPC_Man_Text_1
# 166 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 167 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_RaniaNPC::
# 173 "data/maps/WanderersWoods/scripts.pory"
	lock
# 174 "data/maps/WanderersWoods/scripts.pory"
	faceplayer
# 175 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_RaniaNPC_Text_0
# 176 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_RaniaNPC_Text_1
# 177 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 178 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_NikoNPC::
# 184 "data/maps/WanderersWoods/scripts.pory"
	lock
# 185 "data/maps/WanderersWoods/scripts.pory"
	faceplayer
# 186 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_NikoNPC_Text_0
# 187 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_NikoNPC_Text_1
# 188 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 189 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_Trigger_ChimeraEvent::
# 200 "data/maps/WanderersWoods/scripts.pory"
	lock
# 201 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 202 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
# 203 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 204 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 205 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 206 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 207 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 208 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_RaniaNPC_Text_0
# 209 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_Trigger_ChimeraEvent_Text_0
# 210 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 211 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 212 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 213 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_NikoNPC_Text_0
# 214 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_Trigger_ChimeraEvent_Text_1
# 215 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 216 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WanderersWoods_Movement_PlayerLeadsToChimera
# 217 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, WanderersWoods_Movement_RaniaFollowsToChimera
# 218 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, WanderersWoods_Movement_NikoFollowsToChimera
# 219 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 220 "data/maps/WanderersWoods/scripts.pory"
	goto WanderersWoods_EventScript_ChimeraEvent
	end


WanderersWoods_EventScript_ChimeraEvent::
# 227 "data/maps/WanderersWoods/scripts.pory"
	delay 20
# 228 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 229 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 230 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 231 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 232 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 233 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 234 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 235 "data/maps/WanderersWoods/scripts.pory"
	delay 30
# 238 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 239 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 240 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 241 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_RaniaNPC_Text_0
# 242 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_0
# 243 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 244 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 245 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 246 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 247 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 250 "data/maps/WanderersWoods/scripts.pory"
	applymovement 8, Common_Movement_WalkUp
# 251 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 252 "data/maps/WanderersWoods/scripts.pory"
	delay 15
# 253 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_ChimeraEvent_Text_1
# 254 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_2
# 255 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 256 "data/maps/WanderersWoods/scripts.pory"
	delay 15
# 257 "data/maps/WanderersWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkUp2
# 258 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 259 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_ChimeraEvent_Text_1
# 260 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_3
# 261 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 262 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 263 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 264 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 265 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 266 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_ChimeraEvent_Text_4
# 267 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_5
# 268 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 271 "data/maps/WanderersWoods/scripts.pory"
	applymovement 11, Common_Movement_JumpInPlaceLeft
# 272 "data/maps/WanderersWoods/scripts.pory"
	applymovement 12, Common_Movement_JumpInPlaceDown
# 273 "data/maps/WanderersWoods/scripts.pory"
	applymovement 13, Common_Movement_JumpInPlaceLeft
# 274 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 275 "data/maps/WanderersWoods/scripts.pory"
	delay 20
# 276 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 277 "data/maps/WanderersWoods/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 278 "data/maps/WanderersWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 279 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_FaceDown
# 280 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 281 "data/maps/WanderersWoods/scripts.pory"
	applymovement 11, WanderersWoods_Movement_ShroomishEscape
# 282 "data/maps/WanderersWoods/scripts.pory"
	applymovement 12, WanderersWoods_Movement_BlitzleEscape
# 283 "data/maps/WanderersWoods/scripts.pory"
	applymovement 13, WanderersWoods_Movement_ImpidimpEscape
# 284 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 285 "data/maps/WanderersWoods/scripts.pory"
	delay 60
# 288 "data/maps/WanderersWoods/scripts.pory"
	applymovement 8, Common_Movement_FaceUp
# 289 "data/maps/WanderersWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 290 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 291 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_ChimeraEvent_Text_4
# 292 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_6
# 293 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 294 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 295 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 296 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 297 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 298 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_RaniaNPC_Text_0
# 299 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_7
# 300 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 301 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 302 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 303 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 306 "data/maps/WanderersWoods/scripts.pory"
	applymovement 8, Common_Movement_WalkUp
# 307 "data/maps/WanderersWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkUp
# 308 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_WalkUp
# 309 "data/maps/WanderersWoods/scripts.pory"
	goto_if_unset FLAG_HARD_MODE, WanderersWoods_EventScript_ChimeraEvent_2
# 315 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_WANDERERSWOODS_CHIMERA_ADMIN_HARD, WanderersWoods_Text_ChimeraAdminDefeated
WanderersWoods_EventScript_ChimeraEvent_1:
# 319 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_QuestionMark
# 320 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 321 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_FaceLeft
# 322 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 323 "data/maps/WanderersWoods/scripts.pory"
	applymovement 8, WanderersWoods_Movement_GruntEscapes1
# 324 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 325 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
# 326 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 327 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_NikoNPC_Text_0
# 328 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_8
# 329 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 330 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, WanderersWoods_Movement_GruntEscapes1
# 331 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 332 "data/maps/WanderersWoods/scripts.pory"
	delay 20
# 333 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 334 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 335 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 336 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 337 "data/maps/WanderersWoods/scripts.pory"
	applymovement 9, WanderersWoods_Movement_GruntEscapes2
# 338 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 339 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 340 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 341 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_RaniaNPC_Text_0
# 342 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_9
# 343 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 344 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, WanderersWoods_Movement_GruntEscapes2
# 345 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 346 "data/maps/WanderersWoods/scripts.pory"
	delay 60
# 349 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 350 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 351 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_ChimeraEvent_Text_4
# 352 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_10
# 353 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 354 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 355 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, WanderersWoods_Movement_AdminEscapes
# 356 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 357 "data/maps/WanderersWoods/scripts.pory"
	delay 20
# 360 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 361 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 362 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_ChimeraEvent_Text_11
# 363 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_12
# 364 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 365 "data/maps/WanderersWoods/scripts.pory"
	delay 30
# 366 "data/maps/WanderersWoods/scripts.pory"
	message WanderersWoods_EventScript_ChimeraEvent_Text_13
# 367 "data/maps/WanderersWoods/scripts.pory"
	waitmessage
# 368 "data/maps/WanderersWoods/scripts.pory"
	multichoice 21, 8, MULTI_NIKO_OR_RANIA, TRUE
# 369 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 370 "data/maps/WanderersWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 371 "data/maps/WanderersWoods/scripts.pory"
	delay 20
# 372 "data/maps/WanderersWoods/scripts.pory"
	addobject 7
# 373 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, WanderersWoods_Movement_NikoReturns
# 374 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 375 "data/maps/WanderersWoods/scripts.pory"
	addobject 6
# 376 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, WanderersWoods_Movement_RaniaReturns
# 377 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 378 "data/maps/WanderersWoods/scripts.pory"
	delay 10
# 379 "data/maps/WanderersWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 380 "data/maps/WanderersWoods/scripts.pory"
	delay 30
# 383 "data/maps/WanderersWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WanderersWoods_EventScript_ChimeraEvent_6
# 409 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 410 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 411 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 412 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_RaniaNPC_Text_0
# 413 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_14
# 414 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 416 "data/maps/WanderersWoods/scripts.pory"
	setflag FLAG_FORCE_SHINY
# 417 "data/maps/WanderersWoods/scripts.pory"
	setflag FLAG_SHINY_CREATION
# 418 "data/maps/WanderersWoods/scripts.pory"
	randomelement SPECIES_POPPLIO, SPECIES_FROAKIE, SPECIES_QUAXLY, SPECIES_PANPOUR, SPECIES_DUCKLETT, SPECIES_POLIWAG, SPECIES_WOOPER, SPECIES_OMANYTE, SPECIES_KABUTO, SPECIES_WINGULL, SPECIES_SPHEAL, SPECIES_SEEL, SPECIES_BUIZEL, SPECIES_WIMPOD, SPECIES_FINIZEN, SPECIES_CORSOLA, SPECIES_FINNEON, SPECIES_WAILMER, SPECIES_TENTACOOL, SPECIES_CLAUNCHER, SPECIES_BASCULIN_WHITE_STRIPED, SPECIES_SKRELP, SPECIES_CHINCHOU, SPECIES_SHELLDER, SPECIES_CLAMPERL, SPECIES_RELICANTH, SPECIES_MAGIKARP, SPECIES_BRUXISH, SPECIES_LAPRAS, SPECIES_PSYDUCK, SPECIES_REMORAID, SPECIES_CORPHISH, SPECIES_TIRTOUGA, SPECIES_ROWLET, SPECIES_CHESPIN, SPECIES_SPRIGATITO, SPECIES_PANSAGE, SPECIES_HOPPIP, SPECIES_PARAS, SPECIES_APPLIN, SPECIES_SKIDDO, SPECIES_PUMPKABOO, SPECIES_SHROOMISH, SPECIES_BOUNSWEET, SPECIES_TOEDSCOOL, SPECIES_CHERUBI, SPECIES_LILEEP, SPECIES_FOMANTIS, SPECIES_VOLTORB_HISUI, SPECIES_BUDEW, SPECIES_SNOVER, SPECIES_LITTEN, SPECIES_FENNEKIN, SPECIES_FUECOCO, SPECIES_PANSEAR, SPECIES_VULPIX, SPECIES_SALANDIT, SPECIES_HOUNDOUR, SPECIES_PONYTA, SPECIES_LITWICK, SPECIES_CHARCADET, SPECIES_TORKOAL, SPECIES_NUMEL, SPECIES_GROWLITHE, SPECIES_GROWLITHE_HISUI, SPECIES_COMFEY
# 419 "data/maps/WanderersWoods/scripts.pory"
	giveegg VAR_RESULT
# 420 "data/maps/WanderersWoods/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 421 "data/maps/WanderersWoods/scripts.pory"
	message WanderersWoods_EventScript_ChimeraEvent_Text_15
# 422 "data/maps/WanderersWoods/scripts.pory"
	waitmessage
# 423 "data/maps/WanderersWoods/scripts.pory"
	waitfanfare
# 424 "data/maps/WanderersWoods/scripts.pory"
	delay 20
# 425 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_FORCE_SHINY
# 426 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_SHINY_CREATION
# 427 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_RaniaNPC_Text_0
# 428 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_17
# 429 "data/maps/WanderersWoods/scripts.pory"
	closemessage
WanderersWoods_EventScript_ChimeraEvent_5:
# 433 "data/maps/WanderersWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 434 "data/maps/WanderersWoods/scripts.pory"
	delay 30
# 435 "data/maps/WanderersWoods/scripts.pory"
	setflag FLAG_BEAT_CHIMERA_WANDERING_WOODS
# 436 "data/maps/WanderersWoods/scripts.pory"
	removeobject 6
# 437 "data/maps/WanderersWoods/scripts.pory"
	removeobject 7
# 438 "data/maps/WanderersWoods/scripts.pory"
	removeobject 8
# 439 "data/maps/WanderersWoods/scripts.pory"
	removeobject 9
# 440 "data/maps/WanderersWoods/scripts.pory"
	removeobject 10
# 441 "data/maps/WanderersWoods/scripts.pory"
	removeobject 11
# 442 "data/maps/WanderersWoods/scripts.pory"
	removeobject 12
# 443 "data/maps/WanderersWoods/scripts.pory"
	removeobject 13
# 444 "data/maps/WanderersWoods/scripts.pory"
	delay 30
# 445 "data/maps/WanderersWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 446 "data/maps/WanderersWoods/scripts.pory"
	delay 30
# 447 "data/maps/WanderersWoods/scripts.pory"
	setvar VAR_RANIA_STATE, 4
# 448 "data/maps/WanderersWoods/scripts.pory"
	setvar VAR_NIKO_STATE, 5
# 449 "data/maps/WanderersWoods/scripts.pory"
	releaseall
	end

WanderersWoods_EventScript_ChimeraEvent_2:
# 311 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_WANDERERSWOODS_CHIMERA_ADMIN, WanderersWoods_Text_ChimeraAdminDefeated
	goto WanderersWoods_EventScript_ChimeraEvent_1

WanderersWoods_EventScript_ChimeraEvent_6:
# 385 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 386 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 387 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 388 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_NikoNPC_Text_0
# 389 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_14
# 390 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 392 "data/maps/WanderersWoods/scripts.pory"
	setflag FLAG_FORCE_SHINY
# 393 "data/maps/WanderersWoods/scripts.pory"
	setflag FLAG_SHINY_CREATION
# 394 "data/maps/WanderersWoods/scripts.pory"
	randomelement SPECIES_MAREEP, SPECIES_BLITZLE, SPECIES_PACHIRISU, SPECIES_YAMPER, SPECIES_PAWMI, SPECIES_WATTREL, SPECIES_PICHU, SPECIES_TOGEDEMARU, SPECIES_DEDENNE, SPECIES_CHINCHOU, SPECIES_HELIOPTILE, SPECIES_VOLTORB, SPECIES_VOLTORB_HISUI, SPECIES_MAGNEMITE, SPECIES_SANDSHREW_ALOLAN, SPECIES_MAWILE, SPECIES_ARON, SPECIES_HONEDGE, SPECIES_BRONZOR, SPECIES_CUFANT, SPECIES_MEOWTH_GALAR, SPECIES_TINKATINK, SPECIES_GRIMER_ALOLAN, SPECIES_MURKROW, SPECIES_VULLABY, SPECIES_SANDILE, SPECIES_HOUNDOUR, SPECIES_ZORUA, SPECIES_MEOWTH_ALOLAN, SPECIES_STUNKY, SPECIES_EKANS, SPECIES_SCRAGGY, SPECIES_IMPIDIMP, SPECIES_ZIGZAGOON_GALAR
# 395 "data/maps/WanderersWoods/scripts.pory"
	giveegg VAR_RESULT
# 396 "data/maps/WanderersWoods/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 397 "data/maps/WanderersWoods/scripts.pory"
	message WanderersWoods_EventScript_ChimeraEvent_Text_15
# 398 "data/maps/WanderersWoods/scripts.pory"
	waitmessage
# 399 "data/maps/WanderersWoods/scripts.pory"
	waitfanfare
# 400 "data/maps/WanderersWoods/scripts.pory"
	delay 20
# 401 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_FORCE_SHINY
# 402 "data/maps/WanderersWoods/scripts.pory"
	clearflag FLAG_SHINY_CREATION
# 403 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_NikoNPC_Text_0
# 404 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_16
# 405 "data/maps/WanderersWoods/scripts.pory"
	closemessage
	goto WanderersWoods_EventScript_ChimeraEvent_5


# 453 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_PlayerLeadsToChimera:
# 455 "data/maps/WanderersWoods/scripts.pory"
	walk_right
# 455 "data/maps/WanderersWoods/scripts.pory"
	walk_right
# 456 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 456 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 456 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 457 "data/maps/WanderersWoods/scripts.pory"
	emote_question_mark
# 458 "data/maps/WanderersWoods/scripts.pory"
	delay_16
# 459 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 459 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 460 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 463 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_RaniaFollowsToChimera:
# 465 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 466 "data/maps/WanderersWoods/scripts.pory"
	walk_right
# 466 "data/maps/WanderersWoods/scripts.pory"
	walk_right
# 467 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 467 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 468 "data/maps/WanderersWoods/scripts.pory"
	delay_16
# 469 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 469 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 470 "data/maps/WanderersWoods/scripts.pory"
	walk_right
# 471 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 472 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 475 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_NikoFollowsToChimera:
# 477 "data/maps/WanderersWoods/scripts.pory"
	walk_in_place_right
# 478 "data/maps/WanderersWoods/scripts.pory"
	walk_right
# 478 "data/maps/WanderersWoods/scripts.pory"
	walk_right
# 479 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 479 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 479 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 480 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 480 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 481 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 484 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_ShroomishEscape:
# 486 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 487 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_up
# 488 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 488 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 488 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 488 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 488 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 488 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 488 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 489 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 492 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_BlitzleEscape:
# 494 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 494 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 495 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 495 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 496 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 496 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 497 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 500 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_ImpidimpEscape:
# 502 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 503 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 503 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 504 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_up
# 505 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 505 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 505 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 506 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 506 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 506 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 506 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 507 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 515 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_GruntEscapes1:
# 517 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 517 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 518 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 518 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 519 "data/maps/WanderersWoods/scripts.pory"
	jump_down
# 519 "data/maps/WanderersWoods/scripts.pory"
	jump_down
# 519 "data/maps/WanderersWoods/scripts.pory"
	jump_down
# 520 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 520 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 520 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 521 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 524 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_GruntEscapes2:
# 526 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 526 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 526 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 527 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 527 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 528 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 528 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 529 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 530 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 530 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 531 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 534 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_AdminEscapes:
# 536 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 536 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 536 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 536 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 536 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 537 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 537 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 537 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 538 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 538 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 538 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 539 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 542 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_NikoReturns:
# 544 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 544 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 544 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 545 "data/maps/WanderersWoods/scripts.pory"
	jump_up
# 545 "data/maps/WanderersWoods/scripts.pory"
	jump_up
# 545 "data/maps/WanderersWoods/scripts.pory"
	jump_up
# 546 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_right
# 546 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_right
# 547 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 547 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 548 "data/maps/WanderersWoods/scripts.pory"
	face_right
# 549 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 552 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_RaniaReturns:
# 554 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 554 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 555 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_right
# 556 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 556 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 557 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_right
# 557 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_right
# 558 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 558 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 558 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 559 "data/maps/WanderersWoods/scripts.pory"
	face_left
# 560 "data/maps/WanderersWoods/scripts.pory"
	step_end

WanderersWoods_EventScript_DirectionSign_Text_0:
# 28 "data/maps/WanderersWoods/scripts.pory"
	.string "Wanderers' Woods - North\n"
	.string "A Trail of Loss and Discovery\p"
	.string "{UP_ARROW} Jusmail Town\n"
	.string "Pythios Town {DOWN_ARROW}$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Zander_Text_0:
# 37 "data/maps/WanderersWoods/scripts.pory"
	.string "Zander$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Zander_Text_1:
# 38 "data/maps/WanderersWoods/scripts.pory"
	.string "Apparently people get lost in here all\n"
	.string "the time. I'm not letting Jusmail Town\l"
	.string "out of my sight!$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Kallas_Text_0:
# 55 "data/maps/WanderersWoods/scripts.pory"
	.string "Kallas$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Kallas_Text_1:
# 56 "data/maps/WanderersWoods/scripts.pory"
	.string "These Grass-type Pokémon are weak to\n"
	.string "my Flying-type moves.$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Martha_Text_0:
# 73 "data/maps/WanderersWoods/scripts.pory"
	.string "Martha$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Martha_Text_1:
# 74 "data/maps/WanderersWoods/scripts.pory"
	.string "There are rumors of Team Chimera\n"
	.string "operating around here recently.$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Alexi_Text_0:
# 91 "data/maps/WanderersWoods/scripts.pory"
	.string "Alexi$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Alexi_Text_1:
# 92 "data/maps/WanderersWoods/scripts.pory"
	.string "How do people get through here,\n"
	.string "anyway? Ugh.$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Ellie_Text_0:
# 109 "data/maps/WanderersWoods/scripts.pory"
	.string "Ellie$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Ellie_Text_1:
# 110 "data/maps/WanderersWoods/scripts.pory"
	.string "Some Pokémon only come out at night.\n"
	.string "Maybe my music will bring out the\l"
	.string "coolest Pokémon!$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Lydia_Text_0:
# 127 "data/maps/WanderersWoods/scripts.pory"
	.string "Lydia$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Lydia_Text_1:
# 128 "data/maps/WanderersWoods/scripts.pory"
	.string "Team Chimera was in the woods?! Their\n"
	.string "treatment of Pokémon is known to be\l"
	.string "terrible.$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Thomas_Text_0:
# 145 "data/maps/WanderersWoods/scripts.pory"
	.string "Thomas$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Thomas_Text_1:
# 146 "data/maps/WanderersWoods/scripts.pory"
	.string "Not all Ghost-type or Dark-type\n"
	.string "Pokémon are actually evil! That's a\l"
	.string "common misconception.$"

WanderersWoods_EventScript_NPC_Man_Text_0:
# 164 "data/maps/WanderersWoods/scripts.pory"
	.string "Man$"

WanderersWoods_EventScript_NPC_Man_Text_1:
# 165 "data/maps/WanderersWoods/scripts.pory"
	.string "These red-orange plants are a sign\n"
	.string "that we're close to Pythios Town.\l"
	.string "Nobody quite knows why, but plants\l"
	.string "around there are stuck in a permanent\l"
	.string "state of autumn.$"

WanderersWoods_EventScript_RaniaNPC_Text_0:
# 175 "data/maps/WanderersWoods/scripts.pory"
	.string "Rania$"

WanderersWoods_EventScript_RaniaNPC_Text_1:
# 176 "data/maps/WanderersWoods/scripts.pory"
	.string "{PLAYER}! Are you headed south to\n"
	.string "Pythios Town too?\p"
	.string "Niko and I are recording Pokémon\n"
	.string "behavior around here. Every area in the\l"
	.string "Ilios Region is packed with new\l"
	.string "Pokémon!$"

WanderersWoods_EventScript_NikoNPC_Text_0:
# 186 "data/maps/WanderersWoods/scripts.pory"
	.string "Niko$"

WanderersWoods_EventScript_NikoNPC_Text_1:
# 187 "data/maps/WanderersWoods/scripts.pory"
	.string "Chaire, {PLAYER}! Pokémon behavior is\n"
	.string "so interesting, eh?\p"
	.string "Rania and I are getting some data and\n"
	.string "training our Pokémon while we're at it!\l"
	.string "Who knows, we might beat you to Pythios\l"
	.string "Town!$"

WanderersWoods_Trigger_ChimeraEvent_Text_0:
# 209 "data/maps/WanderersWoods/scripts.pory"
	.string "Headed down to Pythios Town? We'll come\n"
	.string "with you!$"

WanderersWoods_Trigger_ChimeraEvent_Text_1:
# 214 "data/maps/WanderersWoods/scripts.pory"
	.string "There are reports of Ghost-type and\n"
	.string "Psychic-type Pokémon there. Maybe we\l"
	.string "can record some new species!$"

WanderersWoods_EventScript_ChimeraEvent_Text_0:
# 242 "data/maps/WanderersWoods/scripts.pory"
	.string "Those are Team Chimera thugs!\n"
	.string "Remember, that group who attacked the\l"
	.string "Pokédex shipment when you get here,\l"
	.string "{PLAYER}? What are they doing to\l"
	.string "those poor Pokémon?!$"

WanderersWoods_EventScript_ChimeraEvent_Text_1:
# 253 "data/maps/WanderersWoods/scripts.pory"
	.string "Chimera Grunt$"

WanderersWoods_EventScript_ChimeraEvent_Text_2:
# 254 "data/maps/WanderersWoods/scripts.pory"
	.string "Argh, nothin' like spectators to ruin a\n"
	.string "perfectly good plan. Stay out of our\l"
	.string "business!$"

WanderersWoods_EventScript_ChimeraEvent_Text_3:
# 260 "data/maps/WanderersWoods/scripts.pory"
	.string "Yeah, this doesn't concern you! The\n"
	.string "Boss is lookin' for new Pokémon for-$"

WanderersWoods_EventScript_ChimeraEvent_Text_4:
# 266 "data/maps/WanderersWoods/scripts.pory"
	.string "Chimera Admin$"

WanderersWoods_EventScript_ChimeraEvent_Text_5:
# 267 "data/maps/WanderersWoods/scripts.pory"
	.string "Shut it, Grunt! Do you wanna give away\n"
	.string "all our plans?!$"

WanderersWoods_EventScript_ChimeraEvent_Text_6:
# 292 "data/maps/WanderersWoods/scripts.pory"
	.string "No! Our Pokémon got away! This is your\n"
	.string "fault... you have to pay! Grunts, let's\l"
	.string "get 'em!$"

WanderersWoods_EventScript_ChimeraEvent_Text_7:
# 299 "data/maps/WanderersWoods/scripts.pory"
	.string "We'll help you fight them, {PLAYER}!\n"
	.string "These thugs can't get away with\l"
	.string "treating Pokémon like that!$"

WanderersWoods_EventScript_ChimeraEvent_Text_8:
# 328 "data/maps/WanderersWoods/scripts.pory"
	.string "Hold it! You're not getting away!$"

WanderersWoods_EventScript_ChimeraEvent_Text_9:
# 342 "data/maps/WanderersWoods/scripts.pory"
	.string "{PLAYER}, you stay here and watch\n"
	.string "this one. I'm going after them!$"

WanderersWoods_EventScript_ChimeraEvent_Text_10:
# 352 "data/maps/WanderersWoods/scripts.pory"
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
# 362 "data/maps/WanderersWoods/scripts.pory"
	.string "???$"

WanderersWoods_EventScript_ChimeraEvent_Text_12:
# 363 "data/maps/WanderersWoods/scripts.pory"
	.string "Woah, what's this?!$"

WanderersWoods_EventScript_ChimeraEvent_Text_13:
# 366 "data/maps/WanderersWoods/scripts.pory"
	.string "Who shouted in the distance?$"

WanderersWoods_EventScript_ChimeraEvent_Text_14:
# 389 "data/maps/WanderersWoods/scripts.pory"
	.string "Team Chimera got away from us, but look\n"
	.string "what one of them dropped! It's a\l"
	.string "{COLOR GREEN}Pokémon Egg like I've never seen\l"
	.string "before{COLOR DARK_GRAY}! Maybe it holds a rare Pokémon.\p"
	.string "{PLAYER}, I want you to have it.\n"
	.string "Pokémon Eggs aren't my specialty.$"

WanderersWoods_EventScript_ChimeraEvent_Text_15:
# 397 "data/maps/WanderersWoods/scripts.pory"
	.string "{PLAYER} received a {COLOR GREEN}Rare Egg{COLOR DARK_GRAY}!$"

WanderersWoods_EventScript_ChimeraEvent_Text_16:
# 404 "data/maps/WanderersWoods/scripts.pory"
	.string "Carry that Egg around until it hatches.\n"
	.string "Who knows, maybe it's a new species of\l"
	.string "Pokémon!\p"
	.string "Rania and I are gonna head back to the\n"
	.string "University for a while. Let us know if\l"
	.string "Pythios Town is worth a visit!$"

WanderersWoods_EventScript_ChimeraEvent_Text_17:
# 428 "data/maps/WanderersWoods/scripts.pory"
	.string "Carry that Egg around until it hatches.\n"
	.string "Who knows, maybe it's a new species of\l"
	.string "Pokémon!\p"
	.string "Niko and I are gonna head back to the\n"
	.string "University for a while. Let us know if\l"
	.string "Pythios Town is worth a visit!$"

WanderersWoods_Text_Trainer_WanderersWoods_ZanderIntro::
# 43 "data/maps/WanderersWoods/scripts.pory"
	.string "I came here for Toedscool because it's\n"
	.string "funny, but some of these Pokémon are\l"
	.string "so scary!$"

WanderersWoods_Text_Trainer_WanderersWoods_ZanderDefeat::
# 47 "data/maps/WanderersWoods/scripts.pory"
	.string "Eek! I thought I saw a Ghost Pokémon!$"

WanderersWoods_Text_Trainer_WanderersWoods_KallasIntro::
# 61 "data/maps/WanderersWoods/scripts.pory"
	.string "My Bird Pokémon and I come here to\n"
	.string "train! I'll let you help us out.$"

WanderersWoods_Text_Trainer_WanderersWoods_KallasDefeat::
# 65 "data/maps/WanderersWoods/scripts.pory"
	.string "My little birds!$"

WanderersWoods_Text_Trainer_WanderersWoods_MarthaIntro::
# 79 "data/maps/WanderersWoods/scripts.pory"
	.string "I hear some shouting up ahead. I'll stay\n"
	.string "away from there.$"

WanderersWoods_Text_Trainer_WanderersWoods_MarthaDefeat::
# 83 "data/maps/WanderersWoods/scripts.pory"
	.string "I hope it's not Team Chimera...!$"

WanderersWoods_Text_Trainer_WanderersWoods_AlexiIntro::
# 97 "data/maps/WanderersWoods/scripts.pory"
	.string "I've got a job down in Pythios Town, but\n"
	.string "now I'm lost!$"

WanderersWoods_Text_Trainer_WanderersWoods_AlexiDefeat::
# 101 "data/maps/WanderersWoods/scripts.pory"
	.string "Argh, I'm gonna be late!$"

WanderersWoods_Text_Trainer_WanderersWoods_EllieIntro::
# 115 "data/maps/WanderersWoods/scripts.pory"
	.string "I hear wild Impidimp only come out at\n"
	.string "night. So rad!$"

WanderersWoods_Text_Trainer_WanderersWoods_EllieDefeat::
# 119 "data/maps/WanderersWoods/scripts.pory"
	.string "Well that's not rad at all!$"

WanderersWoods_Text_Trainer_WanderersWoods_LydiaIntro::
# 133 "data/maps/WanderersWoods/scripts.pory"
	.string "Some Pokémon just scampered through\n"
	.string "here, like they were running from\l"
	.string "something. I wonder what happened?$"

WanderersWoods_Text_Trainer_WanderersWoods_LydiaDefeat::
# 137 "data/maps/WanderersWoods/scripts.pory"
	.string "Maybe I should've caught one.$"

WanderersWoods_Text_Trainer_WanderersWoods_ThomasIntro::
# 151 "data/maps/WanderersWoods/scripts.pory"
	.string "Pythios Town has a strange aura around\n"
	.string "it, that must be why the plants turn\l"
	.string "orange here.$"

WanderersWoods_Text_Trainer_WanderersWoods_ThomasDefeat::
# 155 "data/maps/WanderersWoods/scripts.pory"
	.string "I bet it's all the Ghost-type Pokémon.$"

WanderersWoods_Text_ChimeraAdminDefeated::
# 510 "data/maps/WanderersWoods/scripts.pory"
	.string "Beaten and stopped... the Boss won't\n"
	.string "take this.$"

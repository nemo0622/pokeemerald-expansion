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


WanderersWoods_EventScript_Trainer_WanderersWoods_Zander::
# 27 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_ZANDER, WanderersWoods_Text_Trainer_WanderersWoods_ZanderIntro, WanderersWoods_Text_Trainer_WanderersWoods_ZanderDefeat
# 28 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_Trainer_WanderersWoods_Zander_Text_0
# 29 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_Trainer_WanderersWoods_Zander_Text_1
# 30 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 31 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_Trainer_WanderersWoods_Kallas::
# 45 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_KALLAS, WanderersWoods_Text_Trainer_WanderersWoods_KallasIntro, WanderersWoods_Text_Trainer_WanderersWoods_KallasDefeat
# 46 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_Trainer_WanderersWoods_Kallas_Text_0
# 47 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_Trainer_WanderersWoods_Kallas_Text_1
# 48 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 49 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_Trainer_WanderersWoods_Martha::
# 63 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_MARTHA, WanderersWoods_Text_Trainer_WanderersWoods_MarthaIntro, WanderersWoods_Text_Trainer_WanderersWoods_MarthaDefeat
# 64 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_Trainer_WanderersWoods_Martha_Text_0
# 65 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_Trainer_WanderersWoods_Martha_Text_1
# 66 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 67 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_Trainer_WanderersWoods_Alexi::
# 81 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_ALEXI, WanderersWoods_Text_Trainer_WanderersWoods_AlexiIntro, WanderersWoods_Text_Trainer_WanderersWoods_AlexiDefeat
# 82 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_Trainer_WanderersWoods_Alexi_Text_0
# 83 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_Trainer_WanderersWoods_Alexi_Text_1
# 84 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 85 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_Trainer_WanderersWoods_Ellie::
# 99 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_ELLIE, WanderersWoods_Text_Trainer_WanderersWoods_EllieIntro, WanderersWoods_Text_Trainer_WanderersWoods_EllieDefeat
# 100 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_Trainer_WanderersWoods_Ellie_Text_0
# 101 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_Trainer_WanderersWoods_Ellie_Text_1
# 102 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 103 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_Trainer_WanderersWoods_Lydia::
# 117 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_LYDIA, WanderersWoods_Text_Trainer_WanderersWoods_LydiaIntro, WanderersWoods_Text_Trainer_WanderersWoods_LydiaDefeat
# 118 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_Trainer_WanderersWoods_Lydia_Text_0
# 119 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_Trainer_WanderersWoods_Lydia_Text_1
# 120 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 121 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_Trainer_WanderersWoods_Thomas::
# 135 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_single TRAINER_WANDERERSWOODS_THOMAS, WanderersWoods_Text_Trainer_WanderersWoods_ThomasIntro, WanderersWoods_Text_Trainer_WanderersWoods_ThomasDefeat
# 136 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_Trainer_WanderersWoods_Thomas_Text_0
# 137 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_Trainer_WanderersWoods_Thomas_Text_1
# 138 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 139 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_NPC_Man::
# 153 "data/maps/WanderersWoods/scripts.pory"
	lock
# 154 "data/maps/WanderersWoods/scripts.pory"
	faceplayer
# 155 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_NPC_Man_Text_0
# 156 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_NPC_Man_Text_1
# 157 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 158 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_RaniaNPC::
# 164 "data/maps/WanderersWoods/scripts.pory"
	lock
# 165 "data/maps/WanderersWoods/scripts.pory"
	faceplayer
# 166 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_RaniaNPC_Text_0
# 167 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_RaniaNPC_Text_1
# 168 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 169 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_EventScript_NikoNPC::
# 175 "data/maps/WanderersWoods/scripts.pory"
	lock
# 176 "data/maps/WanderersWoods/scripts.pory"
	faceplayer
# 177 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_NikoNPC_Text_0
# 178 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_NikoNPC_Text_1
# 179 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 180 "data/maps/WanderersWoods/scripts.pory"
	release
	end


WanderersWoods_Trigger_ChimeraEvent::
# 191 "data/maps/WanderersWoods/scripts.pory"
	lock
# 192 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 193 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
# 194 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 195 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 196 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 197 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 198 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 199 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_RaniaNPC_Text_0
# 200 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_Trigger_ChimeraEvent_Text_0
# 201 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 202 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 203 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 204 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_NikoNPC_Text_0
# 205 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_Trigger_ChimeraEvent_Text_1
# 206 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 207 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WanderersWoods_Movement_PlayerLeadsToChimera
# 208 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, WanderersWoods_Movement_RaniaFollowsToChimera
# 209 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, WanderersWoods_Movement_NikoFollowsToChimera
# 210 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 211 "data/maps/WanderersWoods/scripts.pory"
	goto WanderersWoods_EventScript_ChimeraEvent
	end


WanderersWoods_EventScript_ChimeraEvent::
# 218 "data/maps/WanderersWoods/scripts.pory"
	delay 20
# 219 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 220 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 221 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 222 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 223 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 224 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 225 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 226 "data/maps/WanderersWoods/scripts.pory"
	delay 30
# 229 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 230 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 231 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 232 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_RaniaNPC_Text_0
# 233 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_0
# 234 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 235 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 236 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 237 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 238 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 241 "data/maps/WanderersWoods/scripts.pory"
	applymovement 8, Common_Movement_WalkUp
# 242 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 243 "data/maps/WanderersWoods/scripts.pory"
	delay 15
# 244 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_ChimeraEvent_Text_1
# 245 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_2
# 246 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 247 "data/maps/WanderersWoods/scripts.pory"
	delay 15
# 248 "data/maps/WanderersWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkUp2
# 249 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 250 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_ChimeraEvent_Text_1
# 251 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_3
# 252 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 253 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 254 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 255 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 256 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 257 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_ChimeraEvent_Text_4
# 258 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_5
# 259 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 262 "data/maps/WanderersWoods/scripts.pory"
	applymovement 11, Common_Movement_JumpInPlaceLeft
# 263 "data/maps/WanderersWoods/scripts.pory"
	applymovement 12, Common_Movement_JumpInPlaceDown
# 264 "data/maps/WanderersWoods/scripts.pory"
	applymovement 13, Common_Movement_JumpInPlaceLeft
# 265 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 266 "data/maps/WanderersWoods/scripts.pory"
	delay 20
# 267 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 268 "data/maps/WanderersWoods/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 269 "data/maps/WanderersWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 270 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_FaceDown
# 271 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 272 "data/maps/WanderersWoods/scripts.pory"
	applymovement 11, WanderersWoods_Movement_ShroomishEscape
# 273 "data/maps/WanderersWoods/scripts.pory"
	applymovement 12, WanderersWoods_Movement_BlitzleEscape
# 274 "data/maps/WanderersWoods/scripts.pory"
	applymovement 13, WanderersWoods_Movement_ImpidimpEscape
# 275 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 276 "data/maps/WanderersWoods/scripts.pory"
	delay 60
# 279 "data/maps/WanderersWoods/scripts.pory"
	applymovement 8, Common_Movement_FaceUp
# 280 "data/maps/WanderersWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 281 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 282 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_ChimeraEvent_Text_4
# 283 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_6
# 284 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 285 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 286 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 287 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 288 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 289 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_RaniaNPC_Text_0
# 290 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_7
# 291 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 292 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 293 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 294 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 297 "data/maps/WanderersWoods/scripts.pory"
	applymovement 8, Common_Movement_WalkUp
# 298 "data/maps/WanderersWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkUp
# 299 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_WalkUp
# 300 "data/maps/WanderersWoods/scripts.pory"
	compare VAR_DIFFICULTY, 0
	goto_if_eq WanderersWoods_EventScript_ChimeraEvent_2
# 306 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_WANDERERSWOODS_CHIMERA_ADMIN_HARD, WanderersWoods_Text_ChimeraAdminDefeated
WanderersWoods_EventScript_ChimeraEvent_1:
# 310 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_QuestionMark
# 311 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 312 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_FaceLeft
# 313 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 314 "data/maps/WanderersWoods/scripts.pory"
	applymovement 8, WanderersWoods_Movement_GruntEscapes1
# 315 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 316 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
# 317 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 318 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_NikoNPC_Text_0
# 319 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_8
# 320 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 321 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, WanderersWoods_Movement_GruntEscapes1
# 322 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 323 "data/maps/WanderersWoods/scripts.pory"
	delay 20
# 324 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 325 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 326 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 327 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 328 "data/maps/WanderersWoods/scripts.pory"
	applymovement 9, WanderersWoods_Movement_GruntEscapes2
# 329 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 330 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 331 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 332 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_RaniaNPC_Text_0
# 333 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_9
# 334 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 335 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, WanderersWoods_Movement_GruntEscapes2
# 336 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 337 "data/maps/WanderersWoods/scripts.pory"
	delay 60
# 340 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 341 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 342 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_ChimeraEvent_Text_4
# 343 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_10
# 344 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 345 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 346 "data/maps/WanderersWoods/scripts.pory"
	applymovement 10, WanderersWoods_Movement_AdminEscapes
# 347 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 348 "data/maps/WanderersWoods/scripts.pory"
	delay 20
# 351 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 352 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 353 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_ChimeraEvent_Text_11
# 354 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_12
# 355 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 356 "data/maps/WanderersWoods/scripts.pory"
	delay 30
# 357 "data/maps/WanderersWoods/scripts.pory"
	message WanderersWoods_EventScript_ChimeraEvent_Text_13
# 358 "data/maps/WanderersWoods/scripts.pory"
	waitmessage
# 359 "data/maps/WanderersWoods/scripts.pory"
	multichoice 21, 8, MULTI_NIKO_OR_RANIA, TRUE
# 360 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 361 "data/maps/WanderersWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 362 "data/maps/WanderersWoods/scripts.pory"
	delay 20
# 363 "data/maps/WanderersWoods/scripts.pory"
	addobject 7
# 364 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, WanderersWoods_Movement_NikoReturns
# 365 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 366 "data/maps/WanderersWoods/scripts.pory"
	addobject 6
# 367 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, WanderersWoods_Movement_RaniaReturns
# 368 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 369 "data/maps/WanderersWoods/scripts.pory"
	delay 10
# 370 "data/maps/WanderersWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 371 "data/maps/WanderersWoods/scripts.pory"
	delay 30
# 374 "data/maps/WanderersWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WanderersWoods_EventScript_ChimeraEvent_6
# 394 "data/maps/WanderersWoods/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 395 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 396 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 397 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_RaniaNPC_Text_0
# 398 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_14
# 399 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 400 "data/maps/WanderersWoods/scripts.pory"
	giveegg SPECIES_COSMOG
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
	speakername WanderersWoods_EventScript_RaniaNPC_Text_0
# 407 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_17
# 408 "data/maps/WanderersWoods/scripts.pory"
	closemessage
WanderersWoods_EventScript_ChimeraEvent_5:
# 412 "data/maps/WanderersWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 413 "data/maps/WanderersWoods/scripts.pory"
	delay 30
# 414 "data/maps/WanderersWoods/scripts.pory"
	setflag FLAG_BEAT_CHIMERA_WANDERING_WOODS
# 415 "data/maps/WanderersWoods/scripts.pory"
	removeobject 6
# 416 "data/maps/WanderersWoods/scripts.pory"
	removeobject 7
# 417 "data/maps/WanderersWoods/scripts.pory"
	removeobject 8
# 418 "data/maps/WanderersWoods/scripts.pory"
	removeobject 9
# 419 "data/maps/WanderersWoods/scripts.pory"
	removeobject 10
# 420 "data/maps/WanderersWoods/scripts.pory"
	removeobject 11
# 421 "data/maps/WanderersWoods/scripts.pory"
	removeobject 12
# 422 "data/maps/WanderersWoods/scripts.pory"
	removeobject 13
# 423 "data/maps/WanderersWoods/scripts.pory"
	delay 30
# 424 "data/maps/WanderersWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 425 "data/maps/WanderersWoods/scripts.pory"
	delay 30
# 426 "data/maps/WanderersWoods/scripts.pory"
	setvar VAR_RANIA_STATE, 4
# 427 "data/maps/WanderersWoods/scripts.pory"
	setvar VAR_NIKO_STATE, 5
# 428 "data/maps/WanderersWoods/scripts.pory"
	releaseall
	end

WanderersWoods_EventScript_ChimeraEvent_2:
# 302 "data/maps/WanderersWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_WANDERERSWOODS_CHIMERA_ADMIN, WanderersWoods_Text_ChimeraAdminDefeated
	goto WanderersWoods_EventScript_ChimeraEvent_1

WanderersWoods_EventScript_ChimeraEvent_6:
# 376 "data/maps/WanderersWoods/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 377 "data/maps/WanderersWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 378 "data/maps/WanderersWoods/scripts.pory"
	waitmovement 0
# 379 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_NikoNPC_Text_0
# 380 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_14
# 381 "data/maps/WanderersWoods/scripts.pory"
	closemessage
# 382 "data/maps/WanderersWoods/scripts.pory"
	giveegg SPECIES_ZYGARDE_CELL
# 383 "data/maps/WanderersWoods/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 384 "data/maps/WanderersWoods/scripts.pory"
	message WanderersWoods_EventScript_ChimeraEvent_Text_15
# 385 "data/maps/WanderersWoods/scripts.pory"
	waitmessage
# 386 "data/maps/WanderersWoods/scripts.pory"
	waitfanfare
# 387 "data/maps/WanderersWoods/scripts.pory"
	delay 20
# 388 "data/maps/WanderersWoods/scripts.pory"
	speakername WanderersWoods_EventScript_NikoNPC_Text_0
# 389 "data/maps/WanderersWoods/scripts.pory"
	msgbox WanderersWoods_EventScript_ChimeraEvent_Text_16
# 390 "data/maps/WanderersWoods/scripts.pory"
	closemessage
	goto WanderersWoods_EventScript_ChimeraEvent_5


# 432 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_PlayerLeadsToChimera:
# 434 "data/maps/WanderersWoods/scripts.pory"
	walk_right
# 434 "data/maps/WanderersWoods/scripts.pory"
	walk_right
# 435 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 435 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 435 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 436 "data/maps/WanderersWoods/scripts.pory"
	emote_question_mark
# 437 "data/maps/WanderersWoods/scripts.pory"
	delay_16
# 438 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 438 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 439 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 442 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_RaniaFollowsToChimera:
# 444 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 445 "data/maps/WanderersWoods/scripts.pory"
	walk_right
# 445 "data/maps/WanderersWoods/scripts.pory"
	walk_right
# 446 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 446 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 447 "data/maps/WanderersWoods/scripts.pory"
	delay_16
# 448 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 448 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 449 "data/maps/WanderersWoods/scripts.pory"
	walk_right
# 450 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 451 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 454 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_NikoFollowsToChimera:
# 456 "data/maps/WanderersWoods/scripts.pory"
	walk_in_place_right
# 457 "data/maps/WanderersWoods/scripts.pory"
	walk_right
# 457 "data/maps/WanderersWoods/scripts.pory"
	walk_right
# 458 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 458 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 458 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 459 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 459 "data/maps/WanderersWoods/scripts.pory"
	walk_down
# 460 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 463 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_ShroomishEscape:
# 465 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 466 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_up
# 467 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 467 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 467 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 467 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 467 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 467 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 467 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 468 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 471 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_BlitzleEscape:
# 473 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 473 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 474 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 474 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 475 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 475 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 476 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 479 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_ImpidimpEscape:
# 481 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 482 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 482 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 483 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_up
# 484 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 484 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 484 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 485 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 485 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 485 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 485 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 486 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 494 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_GruntEscapes1:
# 496 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 496 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 497 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 497 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 498 "data/maps/WanderersWoods/scripts.pory"
	jump_down
# 498 "data/maps/WanderersWoods/scripts.pory"
	jump_down
# 498 "data/maps/WanderersWoods/scripts.pory"
	jump_down
# 499 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 499 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 499 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 500 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 503 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_GruntEscapes2:
# 505 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 505 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 505 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 506 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 506 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 507 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 507 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 508 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 509 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 509 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 510 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 513 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_AdminEscapes:
# 515 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 515 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 515 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 515 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 515 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 516 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 516 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 516 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_left
# 517 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 517 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 517 "data/maps/WanderersWoods/scripts.pory"
	walk_fast_down
# 518 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 521 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_NikoReturns:
# 523 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 523 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 523 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 524 "data/maps/WanderersWoods/scripts.pory"
	jump_up
# 524 "data/maps/WanderersWoods/scripts.pory"
	jump_up
# 524 "data/maps/WanderersWoods/scripts.pory"
	jump_up
# 525 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_right
# 525 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_right
# 526 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 526 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 527 "data/maps/WanderersWoods/scripts.pory"
	face_right
# 528 "data/maps/WanderersWoods/scripts.pory"
	step_end

# 531 "data/maps/WanderersWoods/scripts.pory"
WanderersWoods_Movement_RaniaReturns:
# 533 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 533 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 534 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_right
# 535 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 535 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 536 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_right
# 536 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_right
# 537 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 537 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 537 "data/maps/WanderersWoods/scripts.pory"
	walk_faster_up
# 538 "data/maps/WanderersWoods/scripts.pory"
	face_left
# 539 "data/maps/WanderersWoods/scripts.pory"
	step_end

WanderersWoods_EventScript_Trainer_WanderersWoods_Zander_Text_0:
# 28 "data/maps/WanderersWoods/scripts.pory"
	.string "Zander$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Zander_Text_1:
# 29 "data/maps/WanderersWoods/scripts.pory"
	.string "Apparently people get lost in here all\n"
	.string "the time. I'm not letting Jusmail Town\l"
	.string "out of my sight!$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Kallas_Text_0:
# 46 "data/maps/WanderersWoods/scripts.pory"
	.string "Kallas$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Kallas_Text_1:
# 47 "data/maps/WanderersWoods/scripts.pory"
	.string "These Grass-type Pokémon are weak to\n"
	.string "my Flying-type moves.$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Martha_Text_0:
# 64 "data/maps/WanderersWoods/scripts.pory"
	.string "Martha$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Martha_Text_1:
# 65 "data/maps/WanderersWoods/scripts.pory"
	.string "There are rumors of Team Chimera\n"
	.string "operating around here recently.$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Alexi_Text_0:
# 82 "data/maps/WanderersWoods/scripts.pory"
	.string "Alexi$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Alexi_Text_1:
# 83 "data/maps/WanderersWoods/scripts.pory"
	.string "How do people get through here,\n"
	.string "anyway? Ugh.$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Ellie_Text_0:
# 100 "data/maps/WanderersWoods/scripts.pory"
	.string "Ellie$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Ellie_Text_1:
# 101 "data/maps/WanderersWoods/scripts.pory"
	.string "Some Pokémon only come out at night.\n"
	.string "Maybe my music will bring out the\l"
	.string "coolest Pokémon!$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Lydia_Text_0:
# 118 "data/maps/WanderersWoods/scripts.pory"
	.string "Lydia$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Lydia_Text_1:
# 119 "data/maps/WanderersWoods/scripts.pory"
	.string "Team Chimera was in the woods?! Their\n"
	.string "treatment of Pokémon is known to be\l"
	.string "terrible.$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Thomas_Text_0:
# 136 "data/maps/WanderersWoods/scripts.pory"
	.string "Thomas$"

WanderersWoods_EventScript_Trainer_WanderersWoods_Thomas_Text_1:
# 137 "data/maps/WanderersWoods/scripts.pory"
	.string "Not all Ghost-type or Dark-type\n"
	.string "Pokémon are actually evil! That's a\l"
	.string "common misconception.$"

WanderersWoods_EventScript_NPC_Man_Text_0:
# 155 "data/maps/WanderersWoods/scripts.pory"
	.string "Man$"

WanderersWoods_EventScript_NPC_Man_Text_1:
# 156 "data/maps/WanderersWoods/scripts.pory"
	.string "I think I finally found the way out of\n"
	.string "the woods! These red-orange plants are\l"
	.string "a sure sign of Pythios Town.$"

WanderersWoods_EventScript_RaniaNPC_Text_0:
# 166 "data/maps/WanderersWoods/scripts.pory"
	.string "Rania$"

WanderersWoods_EventScript_RaniaNPC_Text_1:
# 167 "data/maps/WanderersWoods/scripts.pory"
	.string "{PLAYER}! Are you headed south to\n"
	.string "Pythios Town too?\p"
	.string "Niko and I are recording Pokémon\n"
	.string "behavior around here. Every area in the\l"
	.string "Ilios Region is packed with new\l"
	.string "Pokémon!$"

WanderersWoods_EventScript_NikoNPC_Text_0:
# 177 "data/maps/WanderersWoods/scripts.pory"
	.string "Niko$"

WanderersWoods_EventScript_NikoNPC_Text_1:
# 178 "data/maps/WanderersWoods/scripts.pory"
	.string "Yia sou, {PLAYER}! Pokémon behavior\n"
	.string "is so interesting, eh?\p"
	.string "Rania and I are getting some data and\n"
	.string "training our Pokémon while we're at it!\l"
	.string "Who knows, we might beat you to Pythios\l"
	.string "Town!$"

WanderersWoods_Trigger_ChimeraEvent_Text_0:
# 200 "data/maps/WanderersWoods/scripts.pory"
	.string "Headed down to Pythios Town? We'll come\n"
	.string "with you!$"

WanderersWoods_Trigger_ChimeraEvent_Text_1:
# 205 "data/maps/WanderersWoods/scripts.pory"
	.string "There are reports of Ghost-type and\n"
	.string "Psychic-type Pokémon there. Maybe we\l"
	.string "can record some new species!$"

WanderersWoods_EventScript_ChimeraEvent_Text_0:
# 233 "data/maps/WanderersWoods/scripts.pory"
	.string "Those are Team Chimera thugs!\n"
	.string "Remember, that group who attacked the\l"
	.string "Pokédex shipment when you get here,\l"
	.string "{PLAYER}? What are they doing to\l"
	.string "those poor Pokémon?!$"

WanderersWoods_EventScript_ChimeraEvent_Text_1:
# 244 "data/maps/WanderersWoods/scripts.pory"
	.string "Chimera Grunt$"

WanderersWoods_EventScript_ChimeraEvent_Text_2:
# 245 "data/maps/WanderersWoods/scripts.pory"
	.string "Argh, nothin' like spectators to ruin a\n"
	.string "perfectly good plan. Stay out of our\l"
	.string "business!$"

WanderersWoods_EventScript_ChimeraEvent_Text_3:
# 251 "data/maps/WanderersWoods/scripts.pory"
	.string "Yeah, this doesn't concern you! The\n"
	.string "Boss is lookin' for new Pokémon for our\l"
	.string "ar-$"

WanderersWoods_EventScript_ChimeraEvent_Text_4:
# 257 "data/maps/WanderersWoods/scripts.pory"
	.string "Chimera Admin$"

WanderersWoods_EventScript_ChimeraEvent_Text_5:
# 258 "data/maps/WanderersWoods/scripts.pory"
	.string "Shut it, Grunt! Do you wanna give away\n"
	.string "all our plans?!$"

WanderersWoods_EventScript_ChimeraEvent_Text_6:
# 283 "data/maps/WanderersWoods/scripts.pory"
	.string "No! Our Pokémon got away! This is your\n"
	.string "fault... you have to pay! Grunts, let's\l"
	.string "get 'em!$"

WanderersWoods_EventScript_ChimeraEvent_Text_7:
# 290 "data/maps/WanderersWoods/scripts.pory"
	.string "We'll help you fight them, {PLAYER}!\n"
	.string "These thugs can't get away with\l"
	.string "treating Pokémon like that!$"

WanderersWoods_EventScript_ChimeraEvent_Text_8:
# 319 "data/maps/WanderersWoods/scripts.pory"
	.string "Hold it! You're not getting away!$"

WanderersWoods_EventScript_ChimeraEvent_Text_9:
# 333 "data/maps/WanderersWoods/scripts.pory"
	.string "{PLAYER}, you stay here and watch\n"
	.string "this one. I'm going after them!$"

WanderersWoods_EventScript_ChimeraEvent_Text_10:
# 343 "data/maps/WanderersWoods/scripts.pory"
	.string "I can't believe they just ran off like\n"
	.string "that! So much for loyalty.\p"
	.string "First we failed to take the Pokédex\n"
	.string "shipment, and now this... {PLAYER},\l"
	.string "right? You're becoming a real problem\l"
	.string "for Team Chimera. You'd better stay out\l"
	.string "of our business, or the Boss'll destroy\l"
	.string "you!$"

WanderersWoods_EventScript_ChimeraEvent_Text_11:
# 353 "data/maps/WanderersWoods/scripts.pory"
	.string "???$"

WanderersWoods_EventScript_ChimeraEvent_Text_12:
# 354 "data/maps/WanderersWoods/scripts.pory"
	.string "WHAT'S THIS?!$"

WanderersWoods_EventScript_ChimeraEvent_Text_13:
# 357 "data/maps/WanderersWoods/scripts.pory"
	.string "One of your friends shouted in the\n"
	.string "distance. Who was it?$"

WanderersWoods_EventScript_ChimeraEvent_Text_14:
# 380 "data/maps/WanderersWoods/scripts.pory"
	.string "Team Chimera got away from us, but look\n"
	.string "what one of them dropped! It's a\l"
	.string "{COLOR GREEN}Pokémon Egg like I've never seen\l"
	.string "before{COLOR DARK_GRAY}! Maybe it holds a rare Pokémon.\p"
	.string "{PLAYER}, I want you to have it.\n"
	.string "Pokémon Eggs aren't my specialty.$"

WanderersWoods_EventScript_ChimeraEvent_Text_15:
# 384 "data/maps/WanderersWoods/scripts.pory"
	.string "{PLAYER} received a {COLOR GREEN}Rare Egg{COLOR DARK_GRAY}!$"

WanderersWoods_EventScript_ChimeraEvent_Text_16:
# 389 "data/maps/WanderersWoods/scripts.pory"
	.string "Carry that Egg around until it hatches.\n"
	.string "Who knows, maybe it's a new species of\l"
	.string "Pokémon!\p"
	.string "Rania and I are gonna head back to the\n"
	.string "University for a while. Let us know if\l"
	.string "Pythios Town is worth a visit!$"

WanderersWoods_EventScript_ChimeraEvent_Text_17:
# 407 "data/maps/WanderersWoods/scripts.pory"
	.string "Carry that Egg around until it hatches.\n"
	.string "Who knows, maybe it's a new species of\l"
	.string "Pokémon!\p"
	.string "Niko and I are gonna head back to the\n"
	.string "University for a while. Let us know if\l"
	.string "Pythios Town is worth a visit!$"

WanderersWoods_Text_Trainer_WanderersWoods_ZanderIntro::
# 34 "data/maps/WanderersWoods/scripts.pory"
	.string "I came here for Toedscool because it's\n"
	.string "funny, but some of these Pokémon are\l"
	.string "so scary!$"

WanderersWoods_Text_Trainer_WanderersWoods_ZanderDefeat::
# 38 "data/maps/WanderersWoods/scripts.pory"
	.string "Eek! I thought I saw a Ghost Pokémon!$"

WanderersWoods_Text_Trainer_WanderersWoods_KallasIntro::
# 52 "data/maps/WanderersWoods/scripts.pory"
	.string "My Bird Pokémon and I come here to\n"
	.string "train! I'll let you help us out.$"

WanderersWoods_Text_Trainer_WanderersWoods_KallasDefeat::
# 56 "data/maps/WanderersWoods/scripts.pory"
	.string "My little birds!$"

WanderersWoods_Text_Trainer_WanderersWoods_MarthaIntro::
# 70 "data/maps/WanderersWoods/scripts.pory"
	.string "I hear some shouting up ahead. I'll stay\n"
	.string "away from there.$"

WanderersWoods_Text_Trainer_WanderersWoods_MarthaDefeat::
# 74 "data/maps/WanderersWoods/scripts.pory"
	.string "I hope it's not Team Chimera...!$"

WanderersWoods_Text_Trainer_WanderersWoods_AlexiIntro::
# 88 "data/maps/WanderersWoods/scripts.pory"
	.string "I've got a job down in Pythios Town, but\n"
	.string "now I'm lost!$"

WanderersWoods_Text_Trainer_WanderersWoods_AlexiDefeat::
# 92 "data/maps/WanderersWoods/scripts.pory"
	.string "Argh, I'm gonna be late!$"

WanderersWoods_Text_Trainer_WanderersWoods_EllieIntro::
# 106 "data/maps/WanderersWoods/scripts.pory"
	.string "I hear wild Impidimp only come out at\n"
	.string "night. So rad!$"

WanderersWoods_Text_Trainer_WanderersWoods_EllieDefeat::
# 110 "data/maps/WanderersWoods/scripts.pory"
	.string "Well that's not rad at all!$"

WanderersWoods_Text_Trainer_WanderersWoods_LydiaIntro::
# 124 "data/maps/WanderersWoods/scripts.pory"
	.string "Some Pokémon just scampered through\n"
	.string "here, like they were running from\l"
	.string "something. I wonder what happened?$"

WanderersWoods_Text_Trainer_WanderersWoods_LydiaDefeat::
# 128 "data/maps/WanderersWoods/scripts.pory"
	.string "Maybe I should've caught one.$"

WanderersWoods_Text_Trainer_WanderersWoods_ThomasIntro::
# 142 "data/maps/WanderersWoods/scripts.pory"
	.string "Pythios Town has a strange aura around\n"
	.string "it, that must be why the plants turn\l"
	.string "orange here.$"

WanderersWoods_Text_Trainer_WanderersWoods_ThomasDefeat::
# 146 "data/maps/WanderersWoods/scripts.pory"
	.string "I bet it's all the Ghost-type Pokémon.$"

WanderersWoods_Text_ChimeraAdminDefeated::
# 489 "data/maps/WanderersWoods/scripts.pory"
	.string "Beaten and stopped... the Boss won't\n"
	.string "take this.$"

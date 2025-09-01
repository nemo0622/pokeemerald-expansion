KaptaraIsland_West_MapScripts::
# 2 "data/maps/KaptaraIsland_West/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KaptaraIsland_West_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 27 "data/maps/KaptaraIsland_West/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, KaptaraIsland_West_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

KaptaraIsland_West_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/KaptaraIsland_West/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, KaptaraIsland_West_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
KaptaraIsland_West_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/KaptaraIsland_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 9 "data/maps/KaptaraIsland_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 10 "data/maps/KaptaraIsland_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 11 "data/maps/KaptaraIsland_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 12 "data/maps/KaptaraIsland_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 13 "data/maps/KaptaraIsland_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 14 "data/maps/KaptaraIsland_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 15 "data/maps/KaptaraIsland_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 16 "data/maps/KaptaraIsland_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 17 "data/maps/KaptaraIsland_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 18 "data/maps/KaptaraIsland_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 19 "data/maps/KaptaraIsland_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 20 "data/maps/KaptaraIsland_West/scripts.pory"
	setobjectaswildencounter 24, ENCOUNTER_LAND
# 21 "data/maps/KaptaraIsland_West/scripts.pory"
	setobjectaswildencounter 25, ENCOUNTER_LAND
# 22 "data/maps/KaptaraIsland_West/scripts.pory"
	setobjectaswildencounter 26, ENCOUNTER_LAND
# 23 "data/maps/KaptaraIsland_West/scripts.pory"
	setobjectaswildencounter 27, ENCOUNTER_LAND
# 24 "data/maps/KaptaraIsland_West/scripts.pory"
	setobjectaswildencounter 28, ENCOUNTER_LAND
	return

KaptaraIsland_West_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/KaptaraIsland_West/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto KaptaraIsland_West_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

KaptaraIsland_West_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 3 "data/maps/KaptaraIsland_West/scripts.pory"
	goto_if_unset FLAG_HIDE_WEATHER_KAPTARA_ISLAND, KaptaraIsland_West_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto KaptaraIsland_West_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

KaptaraIsland_West_MapScripts_MAP_SCRIPT_ON_RESUME:
# 28 "data/maps/KaptaraIsland_West/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, KaptaraIsland_West_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

KaptaraIsland_West_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 30 "data/maps/KaptaraIsland_West/scripts.pory"
	removeobject 1
	return


KaptaraIsland_West_EventScript_DirectionSign::
# 37 "data/maps/KaptaraIsland_West/scripts.pory"
	lock
# 38 "data/maps/KaptaraIsland_West/scripts.pory"
	msgbox KaptaraIsland_West_EventScript_DirectionSign_Text_0
# 39 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
# 40 "data/maps/KaptaraIsland_West/scripts.pory"
	release
	end


KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Dani::
# 46 "data/maps/KaptaraIsland_West/scripts.pory"
	trainerbattle_single TRAINER_KAPTARAWEST_DANI, KaptaraIsland_West_Text_Trainer_KaptaraWest_DaniIntro, KaptaraIsland_West_Text_Trainer_KaptaraWest_DaniDefeat
# 47 "data/maps/KaptaraIsland_West/scripts.pory"
	speakername KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Dani_Text_0
# 48 "data/maps/KaptaraIsland_West/scripts.pory"
	msgbox KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Dani_Text_1
# 49 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
# 50 "data/maps/KaptaraIsland_West/scripts.pory"
	release
	end


KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Barrel::
# 64 "data/maps/KaptaraIsland_West/scripts.pory"
	trainerbattle_single TRAINER_KAPTARAWEST_BARREL, KaptaraIsland_West_Text_Trainer_KaptaraWest_BarrelIntro, KaptaraIsland_West_Text_Trainer_KaptaraWest_BarrelDefeat
# 65 "data/maps/KaptaraIsland_West/scripts.pory"
	speakername KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Barrel_Text_0
# 66 "data/maps/KaptaraIsland_West/scripts.pory"
	msgbox KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Barrel_Text_1
# 67 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
# 68 "data/maps/KaptaraIsland_West/scripts.pory"
	release
	end


KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Sallador::
# 82 "data/maps/KaptaraIsland_West/scripts.pory"
	trainerbattle_single TRAINER_KAPTARAWEST_SALLADOR, KaptaraIsland_West_Text_Trainer_KaptaraWest_SalladorIntro, KaptaraIsland_West_Text_Trainer_KaptaraWest_SalladorDefeat
# 83 "data/maps/KaptaraIsland_West/scripts.pory"
	speakername KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Sallador_Text_0
# 84 "data/maps/KaptaraIsland_West/scripts.pory"
	msgbox KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Sallador_Text_1
# 85 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
# 86 "data/maps/KaptaraIsland_West/scripts.pory"
	release
	end


KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Penny::
# 100 "data/maps/KaptaraIsland_West/scripts.pory"
	trainerbattle_single TRAINER_KAPTARAWEST_PENNY, KaptaraIsland_West_Text_Trainer_KaptaraWest_PennyIntro, KaptaraIsland_West_Text_Trainer_KaptaraWest_PennyDefeat
# 101 "data/maps/KaptaraIsland_West/scripts.pory"
	speakername KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Penny_Text_0
# 102 "data/maps/KaptaraIsland_West/scripts.pory"
	msgbox KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Penny_Text_1
# 103 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
# 104 "data/maps/KaptaraIsland_West/scripts.pory"
	release
	end


KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Allan::
# 118 "data/maps/KaptaraIsland_West/scripts.pory"
	trainerbattle_single TRAINER_KAPTARAWEST_ALLAN, KaptaraIsland_West_Text_Trainer_KaptaraWest_AllanIntro, KaptaraIsland_West_Text_Trainer_KaptaraWest_AllanDefeat
# 119 "data/maps/KaptaraIsland_West/scripts.pory"
	speakername KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Allan_Text_0
# 120 "data/maps/KaptaraIsland_West/scripts.pory"
	msgbox KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Allan_Text_1
# 121 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
# 122 "data/maps/KaptaraIsland_West/scripts.pory"
	release
	end


KaptaraIsland_West_EventScript_KyogreEvent::
# 140 "data/maps/KaptaraIsland_West/scripts.pory"
	lockall
# 141 "data/maps/KaptaraIsland_West/scripts.pory"
	ballfollowingmon
# 142 "data/maps/KaptaraIsland_West/scripts.pory"
	emote OBJ_EVENT_ID_PLAYER, EMOTE_QUESTION
# 143 "data/maps/KaptaraIsland_West/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 144 "data/maps/KaptaraIsland_West/scripts.pory"
	waitmovement 0
# 146 "data/maps/KaptaraIsland_West/scripts.pory"
	speakername KaptaraIsland_West_EventScript_KyogreEvent_Text_0
# 147 "data/maps/KaptaraIsland_West/scripts.pory"
	msgbox KaptaraIsland_West_EventScript_KyogreEvent_Text_1
# 148 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
# 149 "data/maps/KaptaraIsland_West/scripts.pory"
	emote 22, EMOTE_EXCLAM
# 150 "data/maps/KaptaraIsland_West/scripts.pory"
	applymovement 22, Common_Movement_FaceDown
# 151 "data/maps/KaptaraIsland_West/scripts.pory"
	waitmovement 0
# 152 "data/maps/KaptaraIsland_West/scripts.pory"
	speakername KaptaraIsland_West_EventScript_KyogreEvent_Text_0
# 153 "data/maps/KaptaraIsland_West/scripts.pory"
	msgbox KaptaraIsland_West_EventScript_KyogreEvent_Text_2
# 154 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
# 155 "data/maps/KaptaraIsland_West/scripts.pory"
	applymovement 22, KaptaraIsland_West_Movement_ChimeraAdminGetInBattlePosition
# 156 "data/maps/KaptaraIsland_West/scripts.pory"
	applymovement 23, KaptaraIsland_West_Movement_WalkingWakeGetInBattlePosition
# 157 "data/maps/KaptaraIsland_West/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KaptaraIsland_West_Movement_PlayerGetInBattlePosition
# 158 "data/maps/KaptaraIsland_West/scripts.pory"
	waitmovement 0
# 159 "data/maps/KaptaraIsland_West/scripts.pory"
	speakername KaptaraIsland_West_EventScript_KyogreEvent_Text_3
# 160 "data/maps/KaptaraIsland_West/scripts.pory"
	playmoncry SPECIES_WALKING_WAKE, CRY_MODE_NORMAL
# 161 "data/maps/KaptaraIsland_West/scripts.pory"
	msgbox KaptaraIsland_West_EventScript_KyogreEvent_Text_4
# 162 "data/maps/KaptaraIsland_West/scripts.pory"
	waitmoncry
# 163 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
# 164 "data/maps/KaptaraIsland_West/scripts.pory"
	delay 10
# 165 "data/maps/KaptaraIsland_West/scripts.pory"
	speakername KaptaraIsland_West_EventScript_KyogreEvent_Text_0
# 166 "data/maps/KaptaraIsland_West/scripts.pory"
	msgbox KaptaraIsland_West_EventScript_KyogreEvent_Text_5
# 167 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
# 170 "data/maps/KaptaraIsland_West/scripts.pory"
	goto_if_unset FLAG_HARD_MODE, KaptaraIsland_West_EventScript_KyogreEvent_2
# 176 "data/maps/KaptaraIsland_West/scripts.pory"
	trainerbattle_no_intro TRAINER_KAPTARAWEST_CHIMERA_ADMIN_HARD, KaptaraIsland_West_Text_ChimeraAdminDefeated
KaptaraIsland_West_EventScript_KyogreEvent_1:
# 179 "data/maps/KaptaraIsland_West/scripts.pory"
	delay 30
# 180 "data/maps/KaptaraIsland_West/scripts.pory"
	applymovement 22, Common_Movement_JumpInPlaceRight
# 181 "data/maps/KaptaraIsland_West/scripts.pory"
	waitmovement 0
# 182 "data/maps/KaptaraIsland_West/scripts.pory"
	speakername KaptaraIsland_West_EventScript_KyogreEvent_Text_0
# 183 "data/maps/KaptaraIsland_West/scripts.pory"
	msgbox KaptaraIsland_West_EventScript_KyogreEvent_Text_6
# 184 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
# 185 "data/maps/KaptaraIsland_West/scripts.pory"
	delay 30
# 186 "data/maps/KaptaraIsland_West/scripts.pory"
	emote 22, EMOTE_EXCLAM
# 187 "data/maps/KaptaraIsland_West/scripts.pory"
	speakername KaptaraIsland_West_EventScript_KyogreEvent_Text_0
# 188 "data/maps/KaptaraIsland_West/scripts.pory"
	msgbox KaptaraIsland_West_EventScript_KyogreEvent_Text_7
# 189 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
# 192 "data/maps/KaptaraIsland_West/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 2
# 193 "data/maps/KaptaraIsland_West/scripts.pory"
	delay 15
# 194 "data/maps/KaptaraIsland_West/scripts.pory"
	applymovement 22, Common_Movement_FaceUp
# 195 "data/maps/KaptaraIsland_West/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 196 "data/maps/KaptaraIsland_West/scripts.pory"
	waitmovement 0
# 198 "data/maps/KaptaraIsland_West/scripts.pory"
	setflag FLAG_HIDE_WEATHER_KAPTARA_ISLAND
# 199 "data/maps/KaptaraIsland_West/scripts.pory"
	resetweather
# 200 "data/maps/KaptaraIsland_West/scripts.pory"
	doweather
# 201 "data/maps/KaptaraIsland_West/scripts.pory"
	clearflag FLAG_HIDE_KYOGRE_KAPTARA_ISLAND
# 202 "data/maps/KaptaraIsland_West/scripts.pory"
	addobject 1
# 203 "data/maps/KaptaraIsland_West/scripts.pory"
	delay 15
# 204 "data/maps/KaptaraIsland_West/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 205 "data/maps/KaptaraIsland_West/scripts.pory"
	delay 10
# 207 "data/maps/KaptaraIsland_West/scripts.pory"
	delay 30
# 208 "data/maps/KaptaraIsland_West/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 209 "data/maps/KaptaraIsland_West/scripts.pory"
	emote 22, EMOTE_EXCLAM
# 210 "data/maps/KaptaraIsland_West/scripts.pory"
	delay 10
# 211 "data/maps/KaptaraIsland_West/scripts.pory"
	speakername KaptaraIsland_West_EventScript_KyogreEvent_Text_0
# 212 "data/maps/KaptaraIsland_West/scripts.pory"
	msgbox KaptaraIsland_West_EventScript_KyogreEvent_Text_8
# 213 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
# 214 "data/maps/KaptaraIsland_West/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 215 "data/maps/KaptaraIsland_West/scripts.pory"
	applymovement 22, Common_Movement_JumpInPlaceRight
# 216 "data/maps/KaptaraIsland_West/scripts.pory"
	waitmovement 0
# 217 "data/maps/KaptaraIsland_West/scripts.pory"
	speakername KaptaraIsland_West_EventScript_KyogreEvent_Text_0
# 218 "data/maps/KaptaraIsland_West/scripts.pory"
	msgbox KaptaraIsland_West_EventScript_KyogreEvent_Text_9
# 219 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
# 221 "data/maps/KaptaraIsland_West/scripts.pory"
	fadescreen FADE_TO_BLACK
# 222 "data/maps/KaptaraIsland_West/scripts.pory"
	delay 15
# 223 "data/maps/KaptaraIsland_West/scripts.pory"
	setflag FLAG_HIDE_CHIMERA_AFTER_KYOGRE
# 224 "data/maps/KaptaraIsland_West/scripts.pory"
	removeobject 22
# 225 "data/maps/KaptaraIsland_West/scripts.pory"
	removeobject 23
# 226 "data/maps/KaptaraIsland_West/scripts.pory"
	delay 15
# 227 "data/maps/KaptaraIsland_West/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 228 "data/maps/KaptaraIsland_West/scripts.pory"
	delay 20
# 230 "data/maps/KaptaraIsland_West/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KaptaraIsland_West_Movement_PlayerApproachKyogre
# 231 "data/maps/KaptaraIsland_West/scripts.pory"
	waitmovement 0
# 232 "data/maps/KaptaraIsland_West/scripts.pory"
	delay 20
# 233 "data/maps/KaptaraIsland_West/scripts.pory"
	msgbox KaptaraIsland_West_EventScript_KyogreEvent_Text_10
# 234 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
# 235 "data/maps/KaptaraIsland_West/scripts.pory"
	delay 30
# 237 "data/maps/KaptaraIsland_West/scripts.pory"
	emote OBJ_EVENT_ID_PLAYER, EMOTE_EXCLAM
# 238 "data/maps/KaptaraIsland_West/scripts.pory"
	msgbox KaptaraIsland_West_EventScript_KyogreEvent_Text_11
# 239 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
# 240 "data/maps/KaptaraIsland_West/scripts.pory"
	special HealPlayerParty
# 241 "data/maps/KaptaraIsland_West/scripts.pory"
	delay 5
# 242 "data/maps/KaptaraIsland_West/scripts.pory"
	speakername KaptaraIsland_West_EventScript_KyogreEvent_Text_12
# 243 "data/maps/KaptaraIsland_West/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 244 "data/maps/KaptaraIsland_West/scripts.pory"
	msgbox KaptaraIsland_West_EventScript_KyogreEvent_Text_13
# 245 "data/maps/KaptaraIsland_West/scripts.pory"
	waitmoncry
# 246 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
# 249 "data/maps/KaptaraIsland_West/scripts.pory"
	seteventmon SPECIES_KYOGRE, 45, ITEM_BLUE_ORB
# 250 "data/maps/KaptaraIsland_West/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 251 "data/maps/KaptaraIsland_West/scripts.pory"
	setflag FLAG_HIDE_KYOGRE_KAPTARA_ISLAND
# 252 "data/maps/KaptaraIsland_West/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 253 "data/maps/KaptaraIsland_West/scripts.pory"
	waitstate
# 254 "data/maps/KaptaraIsland_West/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 255 "data/maps/KaptaraIsland_West/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 256 "data/maps/KaptaraIsland_West/scripts.pory"
	switch VAR_RESULT
# 258 "data/maps/KaptaraIsland_West/scripts.pory"
	case B_OUTCOME_CAUGHT, KaptaraIsland_West_EventScript_KyogreEvent_7
# 263 "data/maps/KaptaraIsland_West/scripts.pory"
	msgbox KaptaraIsland_West_EventScript_KyogreEvent_Text_15
# 264 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
KaptaraIsland_West_EventScript_KyogreEvent_5:
# 266 "data/maps/KaptaraIsland_West/scripts.pory"
	delay 20
# 267 "data/maps/KaptaraIsland_West/scripts.pory"
	completequest QUEST_LEGEND_OF_KYOGRE
# 268 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
# 269 "data/maps/KaptaraIsland_West/scripts.pory"
	call SatyrsLair_Deep_EventScript_CheckEncounteredBothWeatherMons
# 270 "data/maps/KaptaraIsland_West/scripts.pory"
	release
	end

KaptaraIsland_West_EventScript_KyogreEvent_2:
# 172 "data/maps/KaptaraIsland_West/scripts.pory"
	trainerbattle_no_intro TRAINER_KAPTARAWEST_CHIMERA_ADMIN, KaptaraIsland_West_Text_ChimeraAdminDefeated
	goto KaptaraIsland_West_EventScript_KyogreEvent_1

KaptaraIsland_West_EventScript_KyogreEvent_7:
# 259 "data/maps/KaptaraIsland_West/scripts.pory"
	msgbox KaptaraIsland_West_EventScript_KyogreEvent_Text_14
# 260 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
# 261 "data/maps/KaptaraIsland_West/scripts.pory"
	setflag FLAG_CAUGHT_KYOGRE
	goto KaptaraIsland_West_EventScript_KyogreEvent_5


# 274 "data/maps/KaptaraIsland_West/scripts.pory"
KaptaraIsland_West_Movement_PlayerGetInBattlePosition:
# 276 "data/maps/KaptaraIsland_West/scripts.pory"
	walk_up
# 276 "data/maps/KaptaraIsland_West/scripts.pory"
	walk_up
# 276 "data/maps/KaptaraIsland_West/scripts.pory"
	walk_up
# 277 "data/maps/KaptaraIsland_West/scripts.pory"
	walk_right
# 277 "data/maps/KaptaraIsland_West/scripts.pory"
	walk_right
# 278 "data/maps/KaptaraIsland_West/scripts.pory"
	face_left
# 279 "data/maps/KaptaraIsland_West/scripts.pory"
	step_end

# 282 "data/maps/KaptaraIsland_West/scripts.pory"
KaptaraIsland_West_Movement_ChimeraAdminGetInBattlePosition:
# 284 "data/maps/KaptaraIsland_West/scripts.pory"
	walk_left
# 284 "data/maps/KaptaraIsland_West/scripts.pory"
	walk_left
# 285 "data/maps/KaptaraIsland_West/scripts.pory"
	walk_up
# 286 "data/maps/KaptaraIsland_West/scripts.pory"
	face_right
# 287 "data/maps/KaptaraIsland_West/scripts.pory"
	step_end

# 290 "data/maps/KaptaraIsland_West/scripts.pory"
KaptaraIsland_West_Movement_WalkingWakeGetInBattlePosition:
# 292 "data/maps/KaptaraIsland_West/scripts.pory"
	walk_left
# 293 "data/maps/KaptaraIsland_West/scripts.pory"
	face_right
# 294 "data/maps/KaptaraIsland_West/scripts.pory"
	step_end

# 302 "data/maps/KaptaraIsland_West/scripts.pory"
KaptaraIsland_West_Movement_PlayerApproachKyogre:
# 304 "data/maps/KaptaraIsland_West/scripts.pory"
	walk_left
# 304 "data/maps/KaptaraIsland_West/scripts.pory"
	walk_left
# 305 "data/maps/KaptaraIsland_West/scripts.pory"
	walk_up
# 306 "data/maps/KaptaraIsland_West/scripts.pory"
	face_up
# 307 "data/maps/KaptaraIsland_West/scripts.pory"
	step_end

KaptaraIsland_West_EventScript_InteractWithSunkenTemple::
# 312 "data/maps/KaptaraIsland_West/scripts.pory"
	lock
# 313 "data/maps/KaptaraIsland_West/scripts.pory"
	goto_if_set FLAG_CAUGHT_KYOGRE, KaptaraIsland_West_EventScript_InteractWithSunkenTemple_2
# 320 "data/maps/KaptaraIsland_West/scripts.pory"
	msgbox KaptaraIsland_West_EventScript_InteractWithSunkenTemple_Text_1, MSGBOX_YESNO
# 321 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
# 322 "data/maps/KaptaraIsland_West/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KaptaraIsland_West_EventScript_InteractWithSunkenTemple_5
# 329 "data/maps/KaptaraIsland_West/scripts.pory"
	seteventmon SPECIES_KYOGRE, 45, ITEM_BLUE_ORB
# 330 "data/maps/KaptaraIsland_West/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 331 "data/maps/KaptaraIsland_West/scripts.pory"
	waitstate
# 332 "data/maps/KaptaraIsland_West/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 333 "data/maps/KaptaraIsland_West/scripts.pory"
	switch VAR_RESULT
# 335 "data/maps/KaptaraIsland_West/scripts.pory"
	case B_OUTCOME_CAUGHT, KaptaraIsland_West_EventScript_InteractWithSunkenTemple_9
# 340 "data/maps/KaptaraIsland_West/scripts.pory"
	msgbox KaptaraIsland_West_EventScript_KyogreEvent_Text_15
# 341 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
KaptaraIsland_West_EventScript_InteractWithSunkenTemple_1:
# 345 "data/maps/KaptaraIsland_West/scripts.pory"
	release
	end

KaptaraIsland_West_EventScript_InteractWithSunkenTemple_2:
# 315 "data/maps/KaptaraIsland_West/scripts.pory"
	msgbox KaptaraIsland_West_EventScript_InteractWithSunkenTemple_Text_0
# 316 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
	goto KaptaraIsland_West_EventScript_InteractWithSunkenTemple_1

KaptaraIsland_West_EventScript_InteractWithSunkenTemple_5:
# 324 "data/maps/KaptaraIsland_West/scripts.pory"
	release
	end

KaptaraIsland_West_EventScript_InteractWithSunkenTemple_9:
# 336 "data/maps/KaptaraIsland_West/scripts.pory"
	msgbox KaptaraIsland_West_EventScript_InteractWithSunkenTemple_Text_2
# 337 "data/maps/KaptaraIsland_West/scripts.pory"
	closemessage
# 338 "data/maps/KaptaraIsland_West/scripts.pory"
	setflag FLAG_CAUGHT_KYOGRE
	goto KaptaraIsland_West_EventScript_InteractWithSunkenTemple_1


KaptaraIsland_West_EventScript_DirectionSign_Text_0:
# 38 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Kaptara Island - Krikri Gorge\n"
	.string "Where Giants Come to Sleep\p"
	.string "Palati City {RIGHT_ARROW}$"

KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Dani_Text_0:
# 47 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Dani$"

KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Dani_Text_1:
# 48 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Ah, I can't get past the large rocks\n"
	.string "further ahead, anyway. Maybe I need a\l"
	.string "special HM?$"

KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Barrel_Text_0:
# 65 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Barrel$"

KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Barrel_Text_1:
# 66 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "My Pokémon can move some of these\n"
	.string "large rocks, but there are so many...\l"
	.string "What could be happening further on?$"

KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Sallador_Text_0:
# 83 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Sallador$"

KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Sallador_Text_1:
# 84 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Someone just came by with a giant\n"
	.string "Pokémon, making a huge ruckus. Now\l"
	.string "there are rocks falling... What's\l"
	.string "happening?!$"

KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Penny_Text_0:
# 101 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Penny$"

KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Penny_Text_1:
# 102 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "I can see some half-sunken ruins down\n"
	.string "the cliffside. I wonder what's down\l"
	.string "there.$"

KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Allan_Text_0:
# 119 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Allan$"

KaptaraIsland_West_EventScript_Trainer_KaptaraWest_Allan_Text_1:
# 120 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "I came here to paint these ruins, but\n"
	.string "when I arrived, there was a Team Chimera\l"
	.string "member with a monstrous Pokémon\l"
	.string "shouting in front of it. I wouldn't\l"
	.string "stand a chance against that Pokémon in\l"
	.string "a fight...$"

KaptaraIsland_West_EventScript_KyogreEvent_Text_0:
# 146 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Chimera Admin$"

KaptaraIsland_West_EventScript_KyogreEvent_Text_1:
# 147 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Come on, wake up, you stupid whale!\p"
	.string "Grr... Fine, we'll do this our way. {COLOR RED}Walking\n"
	.string "Wake{COLOR DARK_GRAY}! Use Hydro Pump, and blast this\l"
	.string "ruin to smitheree-$"

KaptaraIsland_West_EventScript_KyogreEvent_Text_2:
# 153 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Ahaha, {PLAYER}! How nice of you to\n"
	.string "join our little party. {COLOR GREEN}Kyogre{COLOR DARK_GRAY} is said to\l"
	.string "lie deep below this ruined temple, but it\l"
	.string "keep hiding like a coward instead of\l"
	.string "facing me. I need to capture or defeat\l"
	.string "Kyogre to fully establish dominance\l"
	.string "over the sea, but...\p"
	.string "Oh! I'll knock out two Pikipek with one\n"
	.string "stone! Let's battle, and while I crush\l"
	.string "you, Kyogre will be drawn to the chaos\l"
	.string "of our fighting Pokémon.$"

KaptaraIsland_West_EventScript_KyogreEvent_Text_3:
# 159 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Walking Wake$"

KaptaraIsland_West_EventScript_KyogreEvent_Text_4:
# 161 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Gyarooh!!!$"

KaptaraIsland_West_EventScript_KyogreEvent_Text_5:
# 166 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Kahaha, listen to that roar! It's the\n"
	.string "end of the line for you, {PLAYER}!$"

KaptaraIsland_West_EventScript_KyogreEvent_Text_6:
# 183 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "WHAT?! How could ANYONE stack up\n"
	.string "against the power of Walking Wake?\p"
	.string "Kalliope told me to bring Kyogre out,\n"
	.string "and either defeat it or capture it.\l"
	.string "I've... I've completely failed.$"

KaptaraIsland_West_EventScript_KyogreEvent_Text_7:
# 188 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "No... Walking Wake still has the energy\n"
	.string "to stand, and I have one Full Restore\l"
	.string "left. I'll get Walking Wake {COLOR RED}back to full\l"
	.string "strength{COLOR DARK_GRAY} and {COLOR RED}sink this wretched island{COLOR DARK_GRAY}!$"

KaptaraIsland_West_EventScript_KyogreEvent_Text_8:
# 212 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Kyogre...! It stabilized the weather in\n"
	.string "an instant?! How can I compete against\l"
	.string "that power without my full strength?$"

KaptaraIsland_West_EventScript_KyogreEvent_Text_9:
# 218 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "{PLAYER}, you WORM! All that matters\n"
	.string "is {COLOR RED}Kalliope winning over Rayquaza{COLOR DARK_GRAY}. Make\l"
	.string "no mistake, you've won the battle, but\l"
	.string "Team Chimera will win this war!$"

KaptaraIsland_West_EventScript_KyogreEvent_Text_10:
# 233 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Kyogre stares at you with curious eyes.$"

KaptaraIsland_West_EventScript_KyogreEvent_Text_11:
# 238 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Kyogre flares with a primal energy! Your\n"
	.string "team has been miraculously healed.$"

KaptaraIsland_West_EventScript_KyogreEvent_Text_12:
# 242 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Kyogre$"

KaptaraIsland_West_EventScript_KyogreEvent_Text_13:
# 244 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Bouuuwwwwahhh!!$"

KaptaraIsland_West_EventScript_KyogreEvent_Text_14:
# 259 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Kyogre has deemed you worthy and\n"
	.string "joined your team! It will help in the\l"
	.string "battle against Team Chimera.$"

KaptaraIsland_West_EventScript_KyogreEvent_Text_15:
# 263 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Kyogre returned to the depths of the\n"
	.string "ruined temple, impressed with your\l"
	.string "power.\p"
	.string "Kyogre can be encountered again at the\n"
	.string "Sunken Temple until it is successfully\l"
	.string "caught.$"

KaptaraIsland_West_EventScript_InteractWithSunkenTemple_Text_0:
# 315 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "It's the Sunken Temple, where {COLOR GREEN}Kyogre{COLOR DARK_GRAY}\n"
	.string "used to lay dormant. It must have sat\l"
	.string "untouched for millennia...$"

KaptaraIsland_West_EventScript_InteractWithSunkenTemple_Text_1:
# 320 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "It's the Sunken Temple, home of {COLOR GREEN}Kyogre{COLOR DARK_GRAY},\n"
	.string "Lord of the Sea.\p"
	.string "A primal energy is radiating from below.\n"
	.string "Do you accept the challenge from\l"
	.string "{COLOR GREEN}Kyogre{COLOR DARK_GRAY}?$"

KaptaraIsland_West_EventScript_InteractWithSunkenTemple_Text_2:
# 336 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Kyogre has deemed you worthy of being\n"
	.string "its Trainer. The Sunken Temple is at\l"
	.string "rest.$"

KaptaraIsland_West_Text_Trainer_KaptaraWest_DaniIntro::
# 53 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "They say there are sunken ruins deep in\n"
	.string "these woods. I'll beat you there!$"

KaptaraIsland_West_Text_Trainer_KaptaraWest_DaniDefeat::
# 57 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Looks like you'll get ahead of me.$"

KaptaraIsland_West_Text_Trainer_KaptaraWest_BarrelIntro::
# 71 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Some mean-looking person in a mask and\n"
	.string "hood just barged through here. Look at\l"
	.string "all the rocks they knocked over!$"

KaptaraIsland_West_Text_Trainer_KaptaraWest_BarrelDefeat::
# 75 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "I'd better get outta here!$"

KaptaraIsland_West_Text_Trainer_KaptaraWest_SalladorIntro::
# 89 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "I'm gonna get to those ruins if it's the\n"
	.string "last thing I do!$"

KaptaraIsland_West_Text_Trainer_KaptaraWest_SalladorDefeat::
# 93 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Eh... Maybe I don't need to go further.$"

KaptaraIsland_West_Text_Trainer_KaptaraWest_PennyIntro::
# 107 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Something strange is going on. Are you\n"
	.string "involved somehow?$"

KaptaraIsland_West_Text_Trainer_KaptaraWest_PennyDefeat::
# 111 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "Aha, you must be involved!$"

KaptaraIsland_West_Text_Trainer_KaptaraWest_AllanIntro::
# 125 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "We have to get out of here!$"

KaptaraIsland_West_Text_Trainer_KaptaraWest_AllanDefeat::
# 129 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "It seems like you can hold your own.$"

KaptaraIsland_West_Text_ChimeraAdminDefeated::
# 297 "data/maps/KaptaraIsland_West/scripts.pory"
	.string "NOOO! HOW?!$"

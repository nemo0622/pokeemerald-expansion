AreiosHideout_Gym_MapScripts::
	.byte 0


AreiosHideout_Gym_EventScript_Mamoswine::
# 5 "data/maps/AreiosHideout_Gym/scripts.pory"
	lock
# 6 "data/maps/AreiosHideout_Gym/scripts.pory"
	faceplayer
# 7 "data/maps/AreiosHideout_Gym/scripts.pory"
	speakername AreiosHideout_Gym_EventScript_Mamoswine_Text_0
# 8 "data/maps/AreiosHideout_Gym/scripts.pory"
	playmoncry SPECIES_MAMOSWINE, CRY_MODE_NORMAL
# 9 "data/maps/AreiosHideout_Gym/scripts.pory"
	msgbox AreiosHideout_Gym_EventScript_Mamoswine_Text_1
# 10 "data/maps/AreiosHideout_Gym/scripts.pory"
	waitmoncry
# 11 "data/maps/AreiosHideout_Gym/scripts.pory"
	closemessage
# 12 "data/maps/AreiosHideout_Gym/scripts.pory"
	release
	end


AreiosHideout_Gym_EventScript_ArcanineHisuian::
# 18 "data/maps/AreiosHideout_Gym/scripts.pory"
	lock
# 19 "data/maps/AreiosHideout_Gym/scripts.pory"
	faceplayer
# 20 "data/maps/AreiosHideout_Gym/scripts.pory"
	speakername AreiosHideout_Gym_EventScript_ArcanineHisuian_Text_0
# 21 "data/maps/AreiosHideout_Gym/scripts.pory"
	playmoncry SPECIES_ARCANINE_HISUIAN, CRY_MODE_NORMAL
# 22 "data/maps/AreiosHideout_Gym/scripts.pory"
	msgbox AreiosHideout_Gym_EventScript_ArcanineHisuian_Text_1
# 23 "data/maps/AreiosHideout_Gym/scripts.pory"
	waitmoncry
# 24 "data/maps/AreiosHideout_Gym/scripts.pory"
	closemessage
# 25 "data/maps/AreiosHideout_Gym/scripts.pory"
	release
	end


AreiosHideout_Gym_EventScript_GougingFire::
# 31 "data/maps/AreiosHideout_Gym/scripts.pory"
	lock
# 32 "data/maps/AreiosHideout_Gym/scripts.pory"
	faceplayer
# 33 "data/maps/AreiosHideout_Gym/scripts.pory"
	speakername AreiosHideout_Gym_EventScript_GougingFire_Text_0
# 34 "data/maps/AreiosHideout_Gym/scripts.pory"
	playmoncry SPECIES_GOUGING_FIRE, CRY_MODE_NORMAL
# 35 "data/maps/AreiosHideout_Gym/scripts.pory"
	msgbox AreiosHideout_Gym_EventScript_GougingFire_Text_1
# 36 "data/maps/AreiosHideout_Gym/scripts.pory"
	waitmoncry
# 37 "data/maps/AreiosHideout_Gym/scripts.pory"
	closemessage
# 38 "data/maps/AreiosHideout_Gym/scripts.pory"
	delay 5
# 39 "data/maps/AreiosHideout_Gym/scripts.pory"
	msgbox AreiosHideout_Gym_EventScript_GougingFire_Text_2
# 40 "data/maps/AreiosHideout_Gym/scripts.pory"
	closemessage
# 41 "data/maps/AreiosHideout_Gym/scripts.pory"
	release
	end


AreiosHideout_Gym_EventScript_RagingBolt::
# 47 "data/maps/AreiosHideout_Gym/scripts.pory"
	lock
# 48 "data/maps/AreiosHideout_Gym/scripts.pory"
	faceplayer
# 49 "data/maps/AreiosHideout_Gym/scripts.pory"
	speakername AreiosHideout_Gym_EventScript_RagingBolt_Text_0
# 50 "data/maps/AreiosHideout_Gym/scripts.pory"
	playmoncry SPECIES_RAGING_BOLT, CRY_MODE_NORMAL
# 51 "data/maps/AreiosHideout_Gym/scripts.pory"
	msgbox AreiosHideout_Gym_EventScript_RagingBolt_Text_1
# 52 "data/maps/AreiosHideout_Gym/scripts.pory"
	waitmoncry
# 53 "data/maps/AreiosHideout_Gym/scripts.pory"
	closemessage
# 54 "data/maps/AreiosHideout_Gym/scripts.pory"
	delay 5
# 55 "data/maps/AreiosHideout_Gym/scripts.pory"
	msgbox AreiosHideout_Gym_EventScript_RagingBolt_Text_2
# 56 "data/maps/AreiosHideout_Gym/scripts.pory"
	closemessage
# 57 "data/maps/AreiosHideout_Gym/scripts.pory"
	release
	end


AreiosHideout_Gym_EventScript_WalkingWake::
# 63 "data/maps/AreiosHideout_Gym/scripts.pory"
	lock
# 64 "data/maps/AreiosHideout_Gym/scripts.pory"
	faceplayer
# 65 "data/maps/AreiosHideout_Gym/scripts.pory"
	speakername AreiosHideout_Gym_EventScript_WalkingWake_Text_0
# 66 "data/maps/AreiosHideout_Gym/scripts.pory"
	playmoncry SPECIES_WALKING_WAKE, CRY_MODE_NORMAL
# 67 "data/maps/AreiosHideout_Gym/scripts.pory"
	msgbox AreiosHideout_Gym_EventScript_WalkingWake_Text_1
# 68 "data/maps/AreiosHideout_Gym/scripts.pory"
	waitmoncry
# 69 "data/maps/AreiosHideout_Gym/scripts.pory"
	closemessage
# 70 "data/maps/AreiosHideout_Gym/scripts.pory"
	delay 5
# 71 "data/maps/AreiosHideout_Gym/scripts.pory"
	msgbox AreiosHideout_Gym_EventScript_WalkingWake_Text_2
# 72 "data/maps/AreiosHideout_Gym/scripts.pory"
	closemessage
# 73 "data/maps/AreiosHideout_Gym/scripts.pory"
	release
	end


AreiosHideout_Gym_EventScript_ChimeraAdminF::
# 79 "data/maps/AreiosHideout_Gym/scripts.pory"
	trainerbattle_single TRAINER_AREIOS_CHIMERA_ADMIN_F, AreiosHideout_Gym_Text_ChimeraAdminFIntro, AreiosHideout_Gym_Text_ChimeraAdminFDefeat
# 80 "data/maps/AreiosHideout_Gym/scripts.pory"
	speakername AreiosHideout_Gym_EventScript_ChimeraAdminF_Text_0
# 81 "data/maps/AreiosHideout_Gym/scripts.pory"
	msgbox AreiosHideout_Gym_EventScript_ChimeraAdminF_Text_1
# 82 "data/maps/AreiosHideout_Gym/scripts.pory"
	closemessage
# 83 "data/maps/AreiosHideout_Gym/scripts.pory"
	release
	end


AreiosHideout_Gym_EventScript_ChimeraAdminM::
# 99 "data/maps/AreiosHideout_Gym/scripts.pory"
	trainerbattle_single TRAINER_AREIOS_CHIMERA_ADMIN_M, AreiosHideout_Gym_Text_ChimeraAdminMIntro, AreiosHideout_Gym_Text_ChimeraAdminMDefeat
# 100 "data/maps/AreiosHideout_Gym/scripts.pory"
	speakername AreiosHideout_Gym_EventScript_ChimeraAdminF_Text_0
# 101 "data/maps/AreiosHideout_Gym/scripts.pory"
	msgbox AreiosHideout_Gym_EventScript_ChimeraAdminM_Text_0
# 102 "data/maps/AreiosHideout_Gym/scripts.pory"
	closemessage
# 103 "data/maps/AreiosHideout_Gym/scripts.pory"
	release
	end


AreiosHideout_Gym_EventScript_Kalliope::
# 121 "data/maps/AreiosHideout_Gym/scripts.pory"
	lock
# 122 "data/maps/AreiosHideout_Gym/scripts.pory"
	faceplayer
# 123 "data/maps/AreiosHideout_Gym/scripts.pory"
	goto_if_unset FLAG_HARD_MODE, AreiosHideout_Gym_EventScript_Kalliope_2
# 129 "data/maps/AreiosHideout_Gym/scripts.pory"
	goto AreiosHideout_Gym_EventScript_Kalliope_HardDifficulty
AreiosHideout_Gym_EventScript_Kalliope_1:
# 131 "data/maps/AreiosHideout_Gym/scripts.pory"
	release
	end

AreiosHideout_Gym_EventScript_Kalliope_2:
# 125 "data/maps/AreiosHideout_Gym/scripts.pory"
	goto AreiosHideout_Gym_EventScript_Kalliope_NormalDifficulty
	goto AreiosHideout_Gym_EventScript_Kalliope_1


AreiosHideout_Gym_EventScript_Kalliope_NormalDifficulty::
# 137 "data/maps/AreiosHideout_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_KALLIOPE, AreiosHideout_Gym_Text_KalliopeIntro, AreiosHideout_Gym_Text_KalliopeDefeat, AreiosHideout_Gym_EventScript_Kalliope_DefeatedScript, NO_MUSIC
# 138 "data/maps/AreiosHideout_Gym/scripts.pory"
	speakername AreiosHideout_Gym_EventScript_Kalliope_NormalDifficulty_Text_0
# 139 "data/maps/AreiosHideout_Gym/scripts.pory"
	msgbox AreiosHideout_Gym_EventScript_Kalliope_NormalDifficulty_Text_1
# 140 "data/maps/AreiosHideout_Gym/scripts.pory"
	closemessage
# 141 "data/maps/AreiosHideout_Gym/scripts.pory"
	release
	end


AreiosHideout_Gym_EventScript_Kalliope_HardDifficulty::
# 146 "data/maps/AreiosHideout_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_KALLIOPE_HARD, AreiosHideout_Gym_Text_KalliopeIntro, AreiosHideout_Gym_Text_KalliopeDefeat, AreiosHideout_Gym_EventScript_Kalliope_DefeatedScript, NO_MUSIC
# 147 "data/maps/AreiosHideout_Gym/scripts.pory"
	speakername AreiosHideout_Gym_EventScript_Kalliope_NormalDifficulty_Text_0
# 148 "data/maps/AreiosHideout_Gym/scripts.pory"
	msgbox AreiosHideout_Gym_EventScript_Kalliope_NormalDifficulty_Text_1
# 149 "data/maps/AreiosHideout_Gym/scripts.pory"
	closemessage
# 150 "data/maps/AreiosHideout_Gym/scripts.pory"
	release
	end


AreiosHideout_Gym_EventScript_Kalliope_DefeatedScript::
# 164 "data/maps/AreiosHideout_Gym/scripts.pory"
	emote 5, EMOTE_QUESTION
# 166 "data/maps/AreiosHideout_Gym/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 2
# 167 "data/maps/AreiosHideout_Gym/scripts.pory"
	delay 15
# 168 "data/maps/AreiosHideout_Gym/scripts.pory"
	setflag FLAG_HIDE_LEGENDARY_BEASTS_AREIOS_GYM
# 169 "data/maps/AreiosHideout_Gym/scripts.pory"
	removeobject 6
# 170 "data/maps/AreiosHideout_Gym/scripts.pory"
	removeobject 7
# 171 "data/maps/AreiosHideout_Gym/scripts.pory"
	removeobject 8
# 172 "data/maps/AreiosHideout_Gym/scripts.pory"
	clearflag FLAG_HIDE_LEGENDARY_DOGS_AREIOS_GYM
# 173 "data/maps/AreiosHideout_Gym/scripts.pory"
	addobject 9
# 174 "data/maps/AreiosHideout_Gym/scripts.pory"
	addobject 10
# 175 "data/maps/AreiosHideout_Gym/scripts.pory"
	addobject 11
# 176 "data/maps/AreiosHideout_Gym/scripts.pory"
	delay 15
# 177 "data/maps/AreiosHideout_Gym/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 178 "data/maps/AreiosHideout_Gym/scripts.pory"
	delay 20
# 180 "data/maps/AreiosHideout_Gym/scripts.pory"
	emote 5, EMOTE_EXCLAM
# 181 "data/maps/AreiosHideout_Gym/scripts.pory"
	speakername AreiosHideout_Gym_EventScript_Kalliope_NormalDifficulty_Text_0
# 182 "data/maps/AreiosHideout_Gym/scripts.pory"
	msgbox AreiosHideout_Gym_EventScript_Kalliope_DefeatedScript_Text_0
# 183 "data/maps/AreiosHideout_Gym/scripts.pory"
	closemessage
# 186 "data/maps/AreiosHideout_Gym/scripts.pory"
	applymovement 9, AreiosHideout_Gym_Movement_EnteiRunAway
# 187 "data/maps/AreiosHideout_Gym/scripts.pory"
	applymovement 11, AreiosHideout_Gym_Movement_SuicuneRunAway
# 188 "data/maps/AreiosHideout_Gym/scripts.pory"
	waitmovement 0
# 191 "data/maps/AreiosHideout_Gym/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 192 "data/maps/AreiosHideout_Gym/scripts.pory"
	applymovement 10, Common_Movement_JumpInPlaceLeft
# 193 "data/maps/AreiosHideout_Gym/scripts.pory"
	waitmovement 0
# 194 "data/maps/AreiosHideout_Gym/scripts.pory"
	applymovement 10, Common_Movement_WalkDown
# 195 "data/maps/AreiosHideout_Gym/scripts.pory"
	waitmovement 0
# 196 "data/maps/AreiosHideout_Gym/scripts.pory"
	applymovement 10, Common_Movement_FaceLeft
# 197 "data/maps/AreiosHideout_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 198 "data/maps/AreiosHideout_Gym/scripts.pory"
	waitmovement 0
# 200 "data/maps/AreiosHideout_Gym/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 201 "data/maps/AreiosHideout_Gym/scripts.pory"
	message AreiosHideout_Gym_EventScript_Kalliope_DefeatedScript_Text_1
# 202 "data/maps/AreiosHideout_Gym/scripts.pory"
	waitmessage
# 203 "data/maps/AreiosHideout_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 205 "data/maps/AreiosHideout_Gym/scripts.pory"
	setflag FLAG_BADGE08_GET
# 206 "data/maps/AreiosHideout_Gym/scripts.pory"
	closemessage
# 208 "data/maps/AreiosHideout_Gym/scripts.pory"
	applymovement 10, AreiosHideout_Gym_Movement_RaikouRunAway
# 209 "data/maps/AreiosHideout_Gym/scripts.pory"
	waitmovement 0
# 212 "data/maps/AreiosHideout_Gym/scripts.pory"
	delay 10
# 213 "data/maps/AreiosHideout_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 214 "data/maps/AreiosHideout_Gym/scripts.pory"
	waitmovement 0
# 215 "data/maps/AreiosHideout_Gym/scripts.pory"
	speakername AreiosHideout_Gym_EventScript_Kalliope_NormalDifficulty_Text_0
# 216 "data/maps/AreiosHideout_Gym/scripts.pory"
	msgbox AreiosHideout_Gym_EventScript_Kalliope_DefeatedScript_Text_2
# 217 "data/maps/AreiosHideout_Gym/scripts.pory"
	closemessage
# 218 "data/maps/AreiosHideout_Gym/scripts.pory"
	emote OBJ_EVENT_ID_PLAYER, EMOTE_EXCLAM
# 221 "data/maps/AreiosHideout_Gym/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 222 "data/maps/AreiosHideout_Gym/scripts.pory"
	delay 15
# 223 "data/maps/AreiosHideout_Gym/scripts.pory"
	setflag FLAG_HIDE_LEGENDARY_DOGS_AREIOS_GYM
# 224 "data/maps/AreiosHideout_Gym/scripts.pory"
	removeobject 9
# 225 "data/maps/AreiosHideout_Gym/scripts.pory"
	removeobject 10
# 226 "data/maps/AreiosHideout_Gym/scripts.pory"
	removeobject 11
# 227 "data/maps/AreiosHideout_Gym/scripts.pory"
	setflag FLAG_DEFEATED_TEAM_CHIMERA_IN_AREIOS
# 228 "data/maps/AreiosHideout_Gym/scripts.pory"
	removeobject 1
# 229 "data/maps/AreiosHideout_Gym/scripts.pory"
	removeobject 2
# 230 "data/maps/AreiosHideout_Gym/scripts.pory"
	removeobject 3
# 231 "data/maps/AreiosHideout_Gym/scripts.pory"
	removeobject 4
# 232 "data/maps/AreiosHideout_Gym/scripts.pory"
	removeobject 5
# 233 "data/maps/AreiosHideout_Gym/scripts.pory"
	delay 15
# 234 "data/maps/AreiosHideout_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 235 "data/maps/AreiosHideout_Gym/scripts.pory"
	delay 20
# 237 "data/maps/AreiosHideout_Gym/scripts.pory"
	emote OBJ_EVENT_ID_PLAYER, EMOTE_QUESTION
# 238 "data/maps/AreiosHideout_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 239 "data/maps/AreiosHideout_Gym/scripts.pory"
	waitmovement 0
# 240 "data/maps/AreiosHideout_Gym/scripts.pory"
	delay 20
# 241 "data/maps/AreiosHideout_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 242 "data/maps/AreiosHideout_Gym/scripts.pory"
	waitmovement 0
# 243 "data/maps/AreiosHideout_Gym/scripts.pory"
	delay 20
# 244 "data/maps/AreiosHideout_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 245 "data/maps/AreiosHideout_Gym/scripts.pory"
	waitmovement 0
# 246 "data/maps/AreiosHideout_Gym/scripts.pory"
	delay 20
# 248 "data/maps/AreiosHideout_Gym/scripts.pory"
	msgbox AreiosHideout_Gym_EventScript_Kalliope_DefeatedScript_Text_3
# 249 "data/maps/AreiosHideout_Gym/scripts.pory"
	closemessage
# 251 "data/maps/AreiosHideout_Gym/scripts.pory"
	giveitem ITEM_TM_DRAGON_CLAW
# 252 "data/maps/AreiosHideout_Gym/scripts.pory"
	closemessage
# 253 "data/maps/AreiosHideout_Gym/scripts.pory"
	delay 5
# 254 "data/maps/AreiosHideout_Gym/scripts.pory"
	msgbox AreiosHideout_Gym_EventScript_Kalliope_DefeatedScript_Text_4
# 255 "data/maps/AreiosHideout_Gym/scripts.pory"
	closemessage
# 256 "data/maps/AreiosHideout_Gym/scripts.pory"
	delay 5
# 257 "data/maps/AreiosHideout_Gym/scripts.pory"
	givedecoration DECOR_ANCIENT_MECHANISM
# 258 "data/maps/AreiosHideout_Gym/scripts.pory"
	closemessage
# 261 "data/maps/AreiosHideout_Gym/scripts.pory"
	delay 20
# 262 "data/maps/AreiosHideout_Gym/scripts.pory"
	completequest QUEST_GYM_8
# 264 "data/maps/AreiosHideout_Gym/scripts.pory"
	delay 10
# 265 "data/maps/AreiosHideout_Gym/scripts.pory"
	emote OBJ_EVENT_ID_PLAYER, EMOTE_EXCLAM
# 266 "data/maps/AreiosHideout_Gym/scripts.pory"
	msgbox AreiosHideout_Gym_EventScript_Kalliope_DefeatedScript_Text_5
# 267 "data/maps/AreiosHideout_Gym/scripts.pory"
	closemessage
# 270 "data/maps/AreiosHideout_Gym/scripts.pory"
	clearflag FLAG_HIDE_RANIA_AND_LEADERS_AREIOS
# 271 "data/maps/AreiosHideout_Gym/scripts.pory"
	setflag FLAG_CAN_ENCOUNTER_RAIKOU
# 272 "data/maps/AreiosHideout_Gym/scripts.pory"
	setflag FLAG_CAN_ENCOUNTER_SUICUNE
# 273 "data/maps/AreiosHideout_Gym/scripts.pory"
	setflag FLAG_CAN_ENCOUNTER_ENTEI
# 275 "data/maps/AreiosHideout_Gym/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 276 "data/maps/AreiosHideout_Gym/scripts.pory"
	warpcontinuescript MAP_AREIOS_HIDEOUT, 6, 11, AreiosHideout_EventScript_ChimeraLossScript
# 277 "data/maps/AreiosHideout_Gym/scripts.pory"
	waitstate
# 279 "data/maps/AreiosHideout_Gym/scripts.pory"
	release
	end


# 283 "data/maps/AreiosHideout_Gym/scripts.pory"
AreiosHideout_Gym_Movement_EnteiRunAway:
# 285 "data/maps/AreiosHideout_Gym/scripts.pory"
	walk_fast_right
# 286 "data/maps/AreiosHideout_Gym/scripts.pory"
	jump_down
# 287 "data/maps/AreiosHideout_Gym/scripts.pory"
	jump_right
# 288 "data/maps/AreiosHideout_Gym/scripts.pory"
	walk_fast_down
# 288 "data/maps/AreiosHideout_Gym/scripts.pory"
	walk_fast_down
# 288 "data/maps/AreiosHideout_Gym/scripts.pory"
	walk_fast_down
# 288 "data/maps/AreiosHideout_Gym/scripts.pory"
	walk_fast_down
# 288 "data/maps/AreiosHideout_Gym/scripts.pory"
	walk_fast_down
# 288 "data/maps/AreiosHideout_Gym/scripts.pory"
	walk_fast_down
# 289 "data/maps/AreiosHideout_Gym/scripts.pory"
	step_end

# 291 "data/maps/AreiosHideout_Gym/scripts.pory"
AreiosHideout_Gym_Movement_SuicuneRunAway:
# 293 "data/maps/AreiosHideout_Gym/scripts.pory"
	walk_fast_left
# 293 "data/maps/AreiosHideout_Gym/scripts.pory"
	walk_fast_left
# 294 "data/maps/AreiosHideout_Gym/scripts.pory"
	walk_fast_down
# 294 "data/maps/AreiosHideout_Gym/scripts.pory"
	walk_fast_down
# 295 "data/maps/AreiosHideout_Gym/scripts.pory"
	jump_down
# 295 "data/maps/AreiosHideout_Gym/scripts.pory"
	jump_down
# 296 "data/maps/AreiosHideout_Gym/scripts.pory"
	walk_fast_down
# 296 "data/maps/AreiosHideout_Gym/scripts.pory"
	walk_fast_down
# 296 "data/maps/AreiosHideout_Gym/scripts.pory"
	walk_fast_down
# 297 "data/maps/AreiosHideout_Gym/scripts.pory"
	step_end

# 299 "data/maps/AreiosHideout_Gym/scripts.pory"
AreiosHideout_Gym_Movement_RaikouRunAway:
# 301 "data/maps/AreiosHideout_Gym/scripts.pory"
	walk_fast_down
# 301 "data/maps/AreiosHideout_Gym/scripts.pory"
	walk_fast_down
# 302 "data/maps/AreiosHideout_Gym/scripts.pory"
	jump_down
# 302 "data/maps/AreiosHideout_Gym/scripts.pory"
	jump_down
# 303 "data/maps/AreiosHideout_Gym/scripts.pory"
	walk_fast_down
# 303 "data/maps/AreiosHideout_Gym/scripts.pory"
	walk_fast_down
# 303 "data/maps/AreiosHideout_Gym/scripts.pory"
	walk_fast_down
# 304 "data/maps/AreiosHideout_Gym/scripts.pory"
	step_end

AreiosHideout_Gym_EventScript_Mamoswine_Text_0:
# 7 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "Mamoswine$"

AreiosHideout_Gym_EventScript_Mamoswine_Text_1:
# 9 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "Moowrah!$"

AreiosHideout_Gym_EventScript_ArcanineHisuian_Text_0:
# 20 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "Arcanine$"

AreiosHideout_Gym_EventScript_ArcanineHisuian_Text_1:
# 22 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "Grrowr!!$"

AreiosHideout_Gym_EventScript_GougingFire_Text_0:
# 33 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "Gouging Fire$"

AreiosHideout_Gym_EventScript_GougingFire_Text_1:
# 35 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "Gyaurr...$"

AreiosHideout_Gym_EventScript_GougingFire_Text_2:
# 39 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "Gouging Fire seems apprehensive. Maybe\n"
	.string "it doesn't want to fight for Team\l"
	.string "Chimera...$"

AreiosHideout_Gym_EventScript_RagingBolt_Text_0:
# 49 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "Raging Bolt$"

AreiosHideout_Gym_EventScript_RagingBolt_Text_1:
# 51 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "Kyraurhh...$"

AreiosHideout_Gym_EventScript_RagingBolt_Text_2:
# 55 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "Raging Bolt seems apprehensive. Maybe\n"
	.string "it doesn't want to fight for Team\l"
	.string "Chimera...$"

AreiosHideout_Gym_EventScript_WalkingWake_Text_0:
# 65 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "Walking Wake$"

AreiosHideout_Gym_EventScript_WalkingWake_Text_1:
# 67 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "Grayuu...$"

AreiosHideout_Gym_EventScript_WalkingWake_Text_2:
# 71 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "Walking Wake seems apprehensive. Maybe\n"
	.string "it doesn't want to fight for Team\l"
	.string "Chimera...$"

AreiosHideout_Gym_EventScript_ChimeraAdminF_Text_0:
# 80 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "Chimera Admin$"

AreiosHideout_Gym_EventScript_ChimeraAdminF_Text_1:
# 81 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "These defeats have been humiliating.\n"
	.string "Maybe... Maybe Team Chimera isn't the\l"
	.string "future...$"

AreiosHideout_Gym_EventScript_ChimeraAdminM_Text_0:
# 101 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "Your victories have been meaningless.\n"
	.string "Kalliope has all three Legendary Beasts\l"
	.string "under her control, you'll never win!$"

AreiosHideout_Gym_EventScript_Kalliope_NormalDifficulty_Text_0:
# 138 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "Kalliope$"

AreiosHideout_Gym_EventScript_Kalliope_NormalDifficulty_Text_1:
# 139 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "dialogue inaccessible$"

AreiosHideout_Gym_EventScript_Kalliope_DefeatedScript_Text_0:
# 182 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "{COLOR RED}WHAT?!{COLOR DARK_GRAY} My Legendary Beasts! {COLOR RED}OBEY ME!!{COLOR DARK_GRAY}$"

AreiosHideout_Gym_EventScript_Kalliope_DefeatedScript_Text_1:
# 201 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "Raikou snatched the Myth Badge from\n"
	.string "Kalliope and placed it at your feet!\p"
	.string "{PLAYER} received the Myth Badge!$"

AreiosHideout_Gym_EventScript_Kalliope_DefeatedScript_Text_2:
# 216 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "Ehehe... Fwahaha... BWAHAHAHA!\n"
	.string "Abandoned by my own Pokémon!\p"
	.string "Without Legendary Pokémon behind us,\n"
	.string "we are lost. I've heard that {COLOR GREEN}Gym Leaders{COLOR DARK_GRAY}\l"
	.string "from across the region are coming to\l"
	.string "reclaim Areios Town as well. I fear\l"
	.string "that... That Team Chimera is finished.\p"
	.string "This can't have been for nothing. I\n"
	.string "refuse to believe that my life's work,\l"
	.string "the plans I've considered for decades,\l"
	.string "and my chances for power have been\l"
	.string "stopped!\p"
	.string "{COLOR RED}ADMINS{COLOR DARK_GRAY}! Make your Arcanine and\n"
	.string "Mamoswine use Dig, get us {COLOR RED}out of here{COLOR DARK_GRAY}!$"

AreiosHideout_Gym_EventScript_Kalliope_DefeatedScript_Text_3:
# 248 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "{COLOR RED}Kalliope{COLOR DARK_GRAY} and the {COLOR RED}Chimera Admins{COLOR DARK_GRAY} have\n"
	.string "completely vanished...\p"
	.string "In the rubble, a TM is sticking out.$"

AreiosHideout_Gym_EventScript_Kalliope_DefeatedScript_Text_4:
# 254 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "Kalliope also seems to have left the\n"
	.string "{COLOR GREEN}Ancient Mechanism{COLOR DARK_GRAY} in the stone piles.\l"
	.string "Maybe it could decorate the Cabin on\l"
	.string "Piraeus' ship?$"

AreiosHideout_Gym_EventScript_Kalliope_DefeatedScript_Text_5:
# 266 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "There's a huge commotion outside!$"

AreiosHideout_Gym_Text_ChimeraAdminFIntro::
# 87 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "You...! You followed us all the way\n"
	.string "here?!\p"
	.string "No matter. We're ready for a final\n"
	.string "showdown. You'll learn once and for all\l"
	.string "that Team Chimera is not to be trifled\l"
	.string "with!$"

AreiosHideout_Gym_Text_ChimeraAdminFDefeat::
# 92 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "I can't believe it... Kalliope better be\n"
	.string "ready for you.$"

AreiosHideout_Gym_Text_ChimeraAdminMIntro::
# 107 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "I cannot BELIEVE that you've tailed us\n"
	.string "so far. Coming into our Hideout... That's\l"
	.string "bold.\p"
	.string "With Kalliope watching, I will destroy\n"
	.string "you and bring pride to Team Chimera!$"

AreiosHideout_Gym_Text_ChimeraAdminMDefeat::
# 112 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "No! Now my socks are wet AND I've lost?!$"

AreiosHideout_Gym_Text_KalliopeIntro::
# 153 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "As expected, you can't just let things\n"
	.string "go, can you {PLAYER}?\p"
	.string "Once, I was the Eighth Muse of the Ilios\n"
	.string "Region, counted among the most\l"
	.string "highly-respected Trainers. But even\l"
	.string "with all that respect, I was so... {COLOR RED}bored{COLOR DARK_GRAY}.\l"
	.string "I needed {COLOR RED}more{COLOR DARK_GRAY} - more power, more wealth,\l"
	.string "more everything. That's why I formed\l"
	.string "Team Chimera and led the destruction of\l"
	.string "my own town.\p"
	.string "It's all-or-nothing now, {PLAYER}.\n"
	.string "Let's have one final showdown, here and\l"
	.string "now!$"

AreiosHideout_Gym_Text_KalliopeDefeat::
# 157 "data/maps/AreiosHideout_Gym/scripts.pory"
	.string "NOOO! How could this HAPPEN?!$"

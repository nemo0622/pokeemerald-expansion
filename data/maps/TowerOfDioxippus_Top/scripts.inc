TowerOfDioxippus_Top_MapScripts::
# 2 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TowerOfDioxippus_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 13 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TowerOfDioxippus_Top_MapScripts_MAP_SCRIPT_ON_RESUME
# 9 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TowerOfDioxippus_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TowerOfDioxippus_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, TowerOfDioxippus_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

TowerOfDioxippus_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	setweather WEATHER_ABNORMAL
	return

TowerOfDioxippus_Top_MapScripts_MAP_SCRIPT_ON_RESUME:
# 14 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, TowerOfDioxippus_Top_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

TowerOfDioxippus_Top_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 16 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	removeobject 3
	return

TowerOfDioxippus_Top_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, TowerOfDioxippus_Top_EventScript_CheckStatus
	.2byte 0


TowerOfDioxippus_Top_EventScript_CheckStatus::
# 23 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	setvar VAR_TEMP_1, 1
# 24 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	goto_if_unset FLAG_DEFEATED_KALLIOPE_DIOXIPPUS, TowerOfDioxippus_Top_EventScript_CheckStatus_2
TowerOfDioxippus_Top_EventScript_CheckStatus_1:
# 28 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	releaseall
	end

TowerOfDioxippus_Top_EventScript_CheckStatus_2:
# 26 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	goto TowerOfDioxippus_Top_EventScript_RayquazaEvent
	goto TowerOfDioxippus_Top_EventScript_CheckStatus_1


TowerOfDioxippus_Top_EventScript_RayquazaEvent::
# 34 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	lockall
# 35 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	ballfollowingmon
# 36 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	emote OBJ_EVENT_ID_PLAYER, EMOTE_EXCLAM
# 37 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 38 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	waitmovement 0
# 40 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	delay 20
# 41 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	applymovement 1, Common_Movement_JumpInPlaceUp
# 42 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	waitmovement 0
# 43 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	speakername TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_0
# 44 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	msgbox TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_1
# 45 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
# 46 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	emote 1, EMOTE_QUESTION
# 47 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	delay 10
# 48 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 49 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	waitmovement 0
# 50 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	emote 1, EMOTE_EXCLAM
# 51 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	speakername TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_0
# 52 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	msgbox TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_2
# 53 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
# 55 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 56 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	applymovement 1, TowerOfDioxippus_Top_Movement_KalliopeMoveNextToRayquaza
# 57 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	applymovement 2, TowerOfDioxippus_Top_Movement_RagingBoltMoveNextToRayquaza
# 58 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	waitmovement 0
# 59 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	delay 10
# 60 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	speakername TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_0
# 61 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	msgbox TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_3
# 62 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
# 63 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	delay 30
# 64 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	speakername TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_0
# 65 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	msgbox TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_4
# 66 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
# 67 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	delay 30
# 68 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	emote 1, EMOTE_QUESTION
# 69 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	applymovement 1, Common_Movement_JumpInPlaceRight
# 70 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	waitmovement 0
# 71 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	speakername TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_0
# 72 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	msgbox TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_5
# 73 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
# 74 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	delay 10
# 75 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	speakername TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_6
# 76 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_NORMAL
# 77 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	msgbox TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_7
# 78 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	waitmoncry
# 79 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
# 80 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	delay 10
# 81 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	speakername TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_0
# 82 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	msgbox TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_8
# 83 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
# 85 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	applymovement 1, TowerOfDioxippus_Top_Movement_KalliopePrepareToFight
# 86 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	applymovement 2, TowerOfDioxippus_Top_Movement_RagingBoltPrepareToFight
# 87 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TowerOfDioxippus_Top_Movement_PlayerPrepareToFight
# 88 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	waitmovement 0
# 89 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	speakername TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_9
# 90 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	playmoncry SPECIES_RAGING_BOLT, CRY_MODE_NORMAL
# 91 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	msgbox TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_10
# 92 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	waitmoncry
# 93 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
# 94 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	delay 10
# 95 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	speakername TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_0
# 96 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	msgbox TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_11
# 97 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
# 100 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	goto_if_unset FLAG_HARD_MODE, TowerOfDioxippus_Top_EventScript_RayquazaEvent_2
# 106 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	trainerbattle_no_intro TRAINER_DIOXIPPUS_KALLIOPE_HARD, TowerOfDioxippus_Top_Text_KalliopeDefeated
TowerOfDioxippus_Top_EventScript_RayquazaEvent_1:
# 109 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	clearflag FLAG_CHIMERA_WEATHER_ACTIVE
# 110 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	resetweather
# 111 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	doweather
# 113 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	delay 30
# 114 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	applymovement 1, Common_Movement_JumpInPlaceRight
# 115 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	waitmovement 0
# 116 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	speakername TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_0
# 117 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	msgbox TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_12
# 118 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
# 119 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	delay 10
# 122 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	clearflag FLAG_HIDE_ADMINS_DIOXIPPUS
# 123 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	addobject 4
# 124 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	addobject 5
# 125 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 126 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	applymovement 4, TowerOfDioxippus_Top_Movement_AdminFApproachKalliope
# 127 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	applymovement 5, TowerOfDioxippus_Top_Movement_AdminMApproachKalliope
# 128 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	waitmovement 0
# 129 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	emote 1, EMOTE_EXCLAM
# 130 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	speakername TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_0
# 131 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	msgbox TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_13
# 132 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
# 133 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	speakername TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_14
# 134 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	msgbox TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_15
# 135 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
# 136 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	delay 10
# 137 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	applymovement 1, Common_Movement_JumpInPlaceDown
# 138 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	waitmovement 0
# 139 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	speakername TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_0
# 140 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	msgbox TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_16
# 141 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
# 142 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 143 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	waitmovement 0
# 144 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	speakername TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_0
# 145 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	msgbox TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_17
# 146 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
# 148 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 149 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	delay 15
# 150 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	removeobject 1
# 151 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	removeobject 2
# 152 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	removeobject 4
# 153 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	removeobject 5
# 154 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	setflag FLAG_DEFEATED_KALLIOPE_DIOXIPPUS
# 155 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	setflag FLAG_HIDE_ADMINS_DIOXIPPUS
# 156 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	delay 15
# 157 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 158 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	delay 20
# 161 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TowerOfDioxippus_Top_Movement_PlayerApproachRayquaza
# 162 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	waitmovement 0
# 163 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	delay 20
# 164 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	msgbox TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_18
# 165 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
# 166 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	delay 30
# 168 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	emote OBJ_EVENT_ID_PLAYER, EMOTE_EXCLAM
# 169 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	msgbox TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_19
# 170 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
# 171 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	special HealPlayerParty
# 172 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	delay 5
# 173 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	speakername TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_6
# 174 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 175 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	msgbox TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_7
# 176 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	waitmoncry
# 177 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
# 178 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	delay 10
# 181 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	seteventmon SPECIES_RAYQUAZA, 50
# 182 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 183 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	setflag FLAG_HIDE_RAYQUAZA_DIOXIPPUS
# 184 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 185 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	waitstate
# 186 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 187 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 188 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	switch VAR_RESULT
# 190 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	case B_OUTCOME_CAUGHT, TowerOfDioxippus_Top_EventScript_RayquazaEvent_7
# 195 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	msgbox TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_21
# 196 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
TowerOfDioxippus_Top_EventScript_RayquazaEvent_5:
# 198 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	delay 20
# 199 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	completequest QUEST_LEGEND_OF_RAYQUAZA
# 200 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_LEGEND_OF_KYOGRE
# 201 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_LEGEND_OF_GROUDON
# 202 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
# 203 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	setflag FLAG_DEFEATED_KALLIOPE_DIOXIPPUS
# 204 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	clearflag FLAG_HIDE_RANIA_AND_NIKO_DIOXIPPUS
# 205 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	release
	end

TowerOfDioxippus_Top_EventScript_RayquazaEvent_2:
# 102 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	trainerbattle_no_intro TRAINER_DIOXIPPUS_KALLIOPE, TowerOfDioxippus_Top_Text_KalliopeDefeated
	goto TowerOfDioxippus_Top_EventScript_RayquazaEvent_1

TowerOfDioxippus_Top_EventScript_RayquazaEvent_7:
# 191 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	msgbox TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_20
# 192 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
# 193 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	setflag FLAG_CAUGHT_RAYQUAZA
	goto TowerOfDioxippus_Top_EventScript_RayquazaEvent_5


# 214 "data/maps/TowerOfDioxippus_Top/scripts.pory"
TowerOfDioxippus_Top_Movement_KalliopeMoveNextToRayquaza:
# 216 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_left
# 216 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_left
# 217 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_up
# 217 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_up
# 218 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	face_down
# 219 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	step_end

# 222 "data/maps/TowerOfDioxippus_Top/scripts.pory"
TowerOfDioxippus_Top_Movement_RagingBoltMoveNextToRayquaza:
# 224 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_left
# 224 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_left
# 224 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_left
# 225 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_up
# 226 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	face_down
# 227 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	step_end

# 230 "data/maps/TowerOfDioxippus_Top/scripts.pory"
TowerOfDioxippus_Top_Movement_KalliopePrepareToFight:
# 232 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_down
# 233 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_left
# 234 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	face_right
# 235 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	step_end

# 238 "data/maps/TowerOfDioxippus_Top/scripts.pory"
TowerOfDioxippus_Top_Movement_RagingBoltPrepareToFight:
# 240 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_right
# 240 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_right
# 241 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_down
# 242 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	face_right
# 243 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	step_end

# 246 "data/maps/TowerOfDioxippus_Top/scripts.pory"
TowerOfDioxippus_Top_Movement_PlayerPrepareToFight:
# 248 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_up
# 249 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_right
# 249 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_right
# 250 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	face_left
# 251 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	step_end

# 259 "data/maps/TowerOfDioxippus_Top/scripts.pory"
TowerOfDioxippus_Top_Movement_AdminFApproachKalliope:
# 261 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_fast_left
# 261 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_fast_left
# 261 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_fast_left
# 262 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_fast_up
# 262 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_fast_up
# 263 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	face_up
# 264 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	step_end

# 267 "data/maps/TowerOfDioxippus_Top/scripts.pory"
TowerOfDioxippus_Top_Movement_AdminMApproachKalliope:
# 269 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_fast_left
# 269 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_fast_left
# 270 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_fast_up
# 270 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_fast_up
# 271 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	face_up
# 272 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	step_end

# 275 "data/maps/TowerOfDioxippus_Top/scripts.pory"
TowerOfDioxippus_Top_Movement_PlayerApproachRayquaza:
# 277 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_left
# 277 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_left
# 278 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	walk_up
# 279 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	face_up
# 280 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	step_end

TowerOfDioxippus_Top_EventScript_InteractWithRayquazaSparkly::
# 285 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	lock
# 286 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	goto_if_set FLAG_CAUGHT_RAYQUAZA, TowerOfDioxippus_Top_EventScript_InteractWithRayquazaSparkly_2
# 293 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	msgbox TowerOfDioxippus_Top_EventScript_InteractWithRayquazaSparkly_Text_1, MSGBOX_YESNO
# 294 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
# 295 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TowerOfDioxippus_Top_EventScript_InteractWithRayquazaSparkly_5
# 302 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	seteventmon SPECIES_RAYQUAZA, 50
# 303 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 304 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	waitstate
# 305 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 306 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	switch VAR_RESULT
# 308 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	case B_OUTCOME_CAUGHT, TowerOfDioxippus_Top_EventScript_InteractWithRayquazaSparkly_9
# 313 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	msgbox TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_21
# 314 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
TowerOfDioxippus_Top_EventScript_InteractWithRayquazaSparkly_1:
# 318 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	release
	end

TowerOfDioxippus_Top_EventScript_InteractWithRayquazaSparkly_2:
# 288 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	msgbox TowerOfDioxippus_Top_EventScript_InteractWithRayquazaSparkly_Text_0
# 289 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
	goto TowerOfDioxippus_Top_EventScript_InteractWithRayquazaSparkly_1

TowerOfDioxippus_Top_EventScript_InteractWithRayquazaSparkly_5:
# 297 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	release
	end

TowerOfDioxippus_Top_EventScript_InteractWithRayquazaSparkly_9:
# 309 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	msgbox TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_20
# 310 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	closemessage
# 311 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	setflag FLAG_CAUGHT_RAYQUAZA
	goto TowerOfDioxippus_Top_EventScript_InteractWithRayquazaSparkly_1


TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_0:
# 43 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "Kalliope$"

TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_1:
# 44 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "Perfect, we have it right where we want\n"
	.string "it! One more hit, and I'll force it to\l"
	.string "submit to us. {COLOR RED}Raging Bolt{COLOR DARK_GRAY}, it's time! Use\l"
	.string "Thundercla-$"

TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_2:
# 52 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "{PLAYER}...? But HOW?! Did BOTH of my\n"
	.string "Admins fail to take you down?! I'm\l"
	.string "almost impressed.\p"
	.string "No matter. Just like in the Temple at\n"
	.string "Sofos City, you're {COLOR RED}too late{COLOR DARK_GRAY}! {COLOR GREEN}Rayquaza{COLOR DARK_GRAY} is\l"
	.string "on the verge of defeat at my hands;\l"
	.string "it'll never obey an unproven Trainer\l"
	.string "like you!$"

TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_3:
# 61 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "{COLOR GREEN}Rayquaza{COLOR DARK_GRAY}! You have seen my power\n"
	.string "firsthand, and I command you to obey\l"
	.string "me! Use {COLOR RED}Dragon Ascent{COLOR DARK_GRAY} on this foolish\l"
	.string "Trainer!$"

TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_4:
# 65 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "...$"

TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_5:
# 72 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "{COLOR GREEN}Rayquaza{COLOR DARK_GRAY}, I have given you an order! Or\n"
	.string "must I make {COLOR RED}Raging Bolt{COLOR DARK_GRAY} bring you down\l"
	.string "{COLOR RED}permanently{COLOR DARK_GRAY}?$"

TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_6:
# 75 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "Rayquaza$"

TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_7:
# 77 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "Gkree-aahh!!$"

TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_8:
# 82 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "Urk... {COLOR GREEN}Rayquaza{COLOR DARK_GRAY}'s strength is still\n"
	.string "overpowering...\p"
	.string "{PLAYER}, for once, you're here at the\n"
	.string "perfect moment. You shall be an {COLOR RED}example\l"
	.string "of my power{COLOR DARK_GRAY} to Rayquaza! Face me, and I\l"
	.string "will blow you off this wretched tower!$"

TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_9:
# 89 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "Raging Bolt$"

TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_10:
# 91 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "GROOOAAARRR!!!$"

TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_11:
# 96 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "FWAHAHA, listen to that roar! With you\n"
	.string "gone and {COLOR GREEN}Rayquaza{COLOR DARK_GRAY} subdued, the Ilios\l"
	.string "Region will be mine for the taking!$"

TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_12:
# 117 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "This is RIDICULOUS! Being defeated by\n"
	.string "someone so young, so inexperienced... I\l"
	.string "am not one to be HUMILIATED like this!!$"

TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_13:
# 131 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "My Admins? So it's true, you were\n"
	.string "defeated by {PLAYER} as well...\p"
	.string "Tell me. What has become of our plans?$"

TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_14:
# 133 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "Chimera Admin F$"

TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_15:
# 134 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "W-we're sorry, but the weather across\n"
	.string "the whole region has stabilized...\l"
	.string "{COLOR GREEN}Kyogre, Groudon, and now Rayquaza{COLOR DARK_GRAY} must\l"
	.string "be fighting against our influence! Even\l"
	.string "worse, people across Ilios are {COLOR GREEN}fighting\l"
	.string "back{COLOR DARK_GRAY} against Team Chimera! If we don't\l"
	.string "act soon, all will be lost!$"

TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_16:
# 140 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "{COLOR RED}ARGH!{COLOR DARK_GRAY} Nothing has gone right since that\n"
	.string "BRAT got involved...\p"
	.string "I have new orders, my simple Admins. We\n"
	.string "still control the {COLOR RED}Legendary Beasts{COLOR DARK_GRAY},\l"
	.string "even without the {COLOR GREEN}Weather Trio{COLOR DARK_GRAY}. We must\l"
	.string "retreat back to {COLOR GREEN}Areios Hideout{COLOR DARK_GRAY} to\l"
	.string "recover and plan our next strike.$"

TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_17:
# 145 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "{PLAYER}! Knowing you, I'm sure you'll\n"
	.string "follow us right to {COLOR GREEN}our Hideout{COLOR DARK_GRAY}, and I\l"
	.string "cannot stop you. But if you dare to\l"
	.string "enter, know that we will do {COLOR RED}everything\l"
	.string "we can to stop you permanently{COLOR DARK_GRAY}.\p"
	.string "Let's get out of here!$"

TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_18:
# 164 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "Rayquaza looms over you. Its eyes are\n"
	.string "intimidating, but you can sense that it\l"
	.string "is grateful for your help, and it\l"
	.string "respects your skills as a Trainer.$"

TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_19:
# 169 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "Rayquaza flares with a primal energy!\n"
	.string "Your team has been miraculously healed.$"

TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_20:
# 191 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "Rayquaza has deemed you worthy and\n"
	.string "joined your team! It will help in the\l"
	.string "battle against Team Chimera.$"

TowerOfDioxippus_Top_EventScript_RayquazaEvent_Text_21:
# 195 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "Rayquaza flew high into the ozone\n"
	.string "layer, impressed with your power.\p"
	.string "Rayquaza can be encountered again at\n"
	.string "the Tower of Dioxippus until it is\l"
	.string "successfully caught.$"

TowerOfDioxippus_Top_EventScript_InteractWithRayquazaSparkly_Text_0:
# 288 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "A slight glimmer can be seen in the air\n"
	.string "nearby. {COLOR GREEN}Rayquaza{COLOR DARK_GRAY}'s presence must have\l"
	.string "imbued the Tower of Dioxippus with\l"
	.string "special power.$"

TowerOfDioxippus_Top_EventScript_InteractWithRayquazaSparkly_Text_1:
# 293 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "A slight glimmer can be seen around the\n"
	.string "peak of the Tower of Dioxippus, home of\l"
	.string "{COLOR GREEN}Rayquaza{COLOR DARK_GRAY}, Lord of the Sky.\p"
	.string "A primal energy is radiating from above.\n"
	.string "Do you accept the challenge from\l"
	.string "{COLOR GREEN}Rayquaza{COLOR DARK_GRAY}?$"

TowerOfDioxippus_Top_Text_KalliopeDefeated::
# 254 "data/maps/TowerOfDioxippus_Top/scripts.pory"
	.string "My plans... They're all falling apart...$"

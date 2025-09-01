SofosCity_Acropolis_MapScripts::
# 2 "data/maps/SofosCity_Acropolis/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SofosCity_Acropolis_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/SofosCity_Acropolis/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SofosCity_Acropolis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SofosCity_Acropolis_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SofosCity_Acropolis/scripts.pory"
	goto_if_unset FLAG_HIDE_SOFOS_ACROPOLIS_NPCS, SofosCity_Acropolis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SofosCity_Acropolis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/SofosCity_Acropolis/scripts.pory"
	setvar VAR_TEMP_1, 1
	return

SofosCity_Acropolis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/SofosCity_Acropolis/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, SofosCity_Acropolis_EventScript_TryChimeraEvent
	.2byte 0


SofosCity_Acropolis_EventScript_TryChimeraEvent::
# 16 "data/maps/SofosCity_Acropolis/scripts.pory"
	setvar VAR_TEMP_1, 1
# 17 "data/maps/SofosCity_Acropolis/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SofosCity_Acropolis_EventScript_TryChimeraEvent_3
SofosCity_Acropolis_EventScript_TryChimeraEvent_1:
# 21 "data/maps/SofosCity_Acropolis/scripts.pory"
	releaseall
	end

SofosCity_Acropolis_EventScript_TryChimeraEvent_2:
# 19 "data/maps/SofosCity_Acropolis/scripts.pory"
	goto SofosCity_Acropolis_EventScript_ChimeraEvent
	goto SofosCity_Acropolis_EventScript_TryChimeraEvent_1

SofosCity_Acropolis_EventScript_TryChimeraEvent_3:
# 17 "data/maps/SofosCity_Acropolis/scripts.pory"
	goto_if_unset FLAG_DID_CHIMERA_EVENT_PALATI_CITY, SofosCity_Acropolis_EventScript_TryChimeraEvent_2
	goto SofosCity_Acropolis_EventScript_TryChimeraEvent_1


SofosCity_Acropolis_EventScript_ChimeraEvent::
# 27 "data/maps/SofosCity_Acropolis/scripts.pory"
	setvar VAR_TEMP_1, 1
# 30 "data/maps/SofosCity_Acropolis/scripts.pory"
	lockall
# 31 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 32 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement 8, Common_Movement_WalkUp2
# 33 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement 9, Common_Movement_WalkUp2
# 34 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 35 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 20
# 36 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement 10, Common_Movement_JumpInPlaceDown
# 37 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 38 "data/maps/SofosCity_Acropolis/scripts.pory"
	emote 10, EMOTE_EXCLAM
# 39 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_0
# 40 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_1
# 41 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 42 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement 16, Common_Movement_JumpInPlaceUp
# 43 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 44 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_2
# 45 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_3
# 46 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 47 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_0
# 48 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_4
# 49 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 52 "data/maps/SofosCity_Acropolis/scripts.pory"
	emote 8, EMOTE_EXCLAM
# 53 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement 8, Common_Movement_WalkLeft
# 54 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 55 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement 8, Common_Movement_FaceUp
# 56 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 57 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement 16, Common_Movement_FaceDown
# 58 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 59 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_5
# 60 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_6
# 61 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 62 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 10
# 65 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 66 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement 9, Common_Movement_WalkUp2
# 67 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 68 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement 17, Common_Movement_JumpInPlaceLeft
# 69 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 70 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_2
# 71 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_7
# 72 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 73 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 74 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 75 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 76 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 77 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_8
# 78 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_9
# 79 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 80 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement 12, Common_Movement_FaceDown
# 81 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 83 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_8
# 84 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_10
# 85 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 86 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_11
# 87 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_12
# 88 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 89 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_8
# 90 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_13
# 91 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 92 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 93 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 94 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement 12, Common_Movement_FaceDown
# 95 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 96 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_8
# 97 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_14
# 98 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 101 "data/maps/SofosCity_Acropolis/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 2
# 102 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 15
# 103 "data/maps/SofosCity_Acropolis/scripts.pory"
	clearflag FLAG_HIDE_ACROPOLIS_LEGENDARY_BEASTS
# 104 "data/maps/SofosCity_Acropolis/scripts.pory"
	addobject 19
# 105 "data/maps/SofosCity_Acropolis/scripts.pory"
	addobject 20
# 106 "data/maps/SofosCity_Acropolis/scripts.pory"
	addobject 21
# 107 "data/maps/SofosCity_Acropolis/scripts.pory"
	removeobject 13
# 108 "data/maps/SofosCity_Acropolis/scripts.pory"
	removeobject 14
# 109 "data/maps/SofosCity_Acropolis/scripts.pory"
	removeobject 15
# 110 "data/maps/SofosCity_Acropolis/scripts.pory"
	setflag FLAG_HIDE_ACROPOLIS_LEGENDARY_DOGS
# 111 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 15
# 112 "data/maps/SofosCity_Acropolis/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 113 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 30
# 116 "data/maps/SofosCity_Acropolis/scripts.pory"
	emote 9, EMOTE_EXCLAM
# 117 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_11
# 118 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_15
# 119 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 120 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_8
# 121 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_16
# 122 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 123 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement 12, Common_Movement_WalkLeft
# 124 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 125 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement 12, Common_Movement_FaceDown
# 126 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 127 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement 16, Common_Movement_FaceUp
# 128 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 129 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_8
# 130 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_17
# 131 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 132 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement 12, Common_Movement_WalkRight2
# 133 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 134 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_8
# 135 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_18
# 136 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 137 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement 12, Common_Movement_FaceDown
# 138 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 139 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_8
# 140 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_19
# 141 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 144 "data/maps/SofosCity_Acropolis/scripts.pory"
	fadescreen FADE_TO_BLACK
# 145 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 20
# 146 "data/maps/SofosCity_Acropolis/scripts.pory"
	setflag FLAG_HIDE_ACROPOLIS_LEGENDARY_BEASTS
# 147 "data/maps/SofosCity_Acropolis/scripts.pory"
	removeobject 19
# 148 "data/maps/SofosCity_Acropolis/scripts.pory"
	removeobject 20
# 149 "data/maps/SofosCity_Acropolis/scripts.pory"
	removeobject 21
# 150 "data/maps/SofosCity_Acropolis/scripts.pory"
	setflag FLAG_HIDE_ACROPOLIS_CHIMERA_MEMBERS
# 151 "data/maps/SofosCity_Acropolis/scripts.pory"
	removeobject 11
# 152 "data/maps/SofosCity_Acropolis/scripts.pory"
	removeobject 12
# 153 "data/maps/SofosCity_Acropolis/scripts.pory"
	removeobject 16
# 154 "data/maps/SofosCity_Acropolis/scripts.pory"
	removeobject 17
# 155 "data/maps/SofosCity_Acropolis/scripts.pory"
	removeobject 18
# 156 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 20
# 157 "data/maps/SofosCity_Acropolis/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 158 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 10
# 161 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft
# 162 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 163 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 164 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_11
# 165 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_20
# 166 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 167 "data/maps/SofosCity_Acropolis/scripts.pory"
	emote 8, EMOTE_EXCLAM
# 168 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement 8, Common_Movement_WalkRight
# 169 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 170 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement 8, Common_Movement_WalkUp
# 171 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 172 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 173 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 174 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_5
# 175 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_21
# 176 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 177 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement 10, Common_Movement_JumpInPlaceRight
# 178 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 179 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 180 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 181 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_0
# 182 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_22
# 183 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 184 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 5
# 185 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 186 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 187 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_5
# 188 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_23
# 189 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 190 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 5
# 191 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 192 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 193 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_11
# 194 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_24
# 195 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 196 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 5
# 197 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 198 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 199 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_0
# 200 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_25
# 201 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 202 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 5
# 203 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 204 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 205 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_5
# 206 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_26
# 207 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 208 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 5
# 209 "data/maps/SofosCity_Acropolis/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 210 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 211 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 5
# 212 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_5
# 213 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_27
# 214 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 215 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 5
# 216 "data/maps/SofosCity_Acropolis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 217 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmovement 0
# 218 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_ChimeraEvent_Text_11
# 219 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_ChimeraEvent_Text_28
# 220 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 223 "data/maps/SofosCity_Acropolis/scripts.pory"
	fadescreen FADE_TO_BLACK
# 224 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 15
# 225 "data/maps/SofosCity_Acropolis/scripts.pory"
	setflag FLAG_DID_CHIMERA_EVENT_PALATI_CITY
# 226 "data/maps/SofosCity_Acropolis/scripts.pory"
	setflag FLAG_HIDE_RHADINE_PALATI_CITY
# 227 "data/maps/SofosCity_Acropolis/scripts.pory"
	setflag FLAG_HIDE_KYOGRE_KAPTARA_ISLAND
# 228 "data/maps/SofosCity_Acropolis/scripts.pory"
	setflag FLAG_HIDE_GROUDON_SATYRS_LAIR
# 229 "data/maps/SofosCity_Acropolis/scripts.pory"
	removeobject 8
# 230 "data/maps/SofosCity_Acropolis/scripts.pory"
	removeobject 9
# 231 "data/maps/SofosCity_Acropolis/scripts.pory"
	removeobject 10
# 232 "data/maps/SofosCity_Acropolis/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 233 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 15
# 234 "data/maps/SofosCity_Acropolis/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 235 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 10
# 238 "data/maps/SofosCity_Acropolis/scripts.pory"
	setvar VAR_RANIA_STATE, 11
# 239 "data/maps/SofosCity_Acropolis/scripts.pory"
	setvar VAR_NIKO_STATE, 12
# 242 "data/maps/SofosCity_Acropolis/scripts.pory"
	startquest QUEST_LEGEND_OF_KYOGRE
# 243 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 244 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 20
# 245 "data/maps/SofosCity_Acropolis/scripts.pory"
	startquest QUEST_LEGEND_OF_GROUDON
# 246 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 247 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 20
# 248 "data/maps/SofosCity_Acropolis/scripts.pory"
	startquest QUEST_LEGEND_OF_RAYQUAZA
# 249 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 250 "data/maps/SofosCity_Acropolis/scripts.pory"
	releaseall
	end


SofosCity_Acropolis_EventScript_Sign1::
# 256 "data/maps/SofosCity_Acropolis/scripts.pory"
	lock
# 257 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_Sign1_Text_0
# 258 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_Sign1_Text_1
# 259 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 260 "data/maps/SofosCity_Acropolis/scripts.pory"
	release
	end


SofosCity_Acropolis_EventScript_Sign2::
# 265 "data/maps/SofosCity_Acropolis/scripts.pory"
	lock
# 266 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_Sign1_Text_0
# 267 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_Sign2_Text_0
# 268 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 269 "data/maps/SofosCity_Acropolis/scripts.pory"
	release
	end


SofosCity_Acropolis_EventScript_Man::
# 275 "data/maps/SofosCity_Acropolis/scripts.pory"
	lock
# 276 "data/maps/SofosCity_Acropolis/scripts.pory"
	faceplayer
# 277 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_Man_Text_0
# 278 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_Man_Text_1
# 279 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 280 "data/maps/SofosCity_Acropolis/scripts.pory"
	release
	end


SofosCity_Acropolis_EventScript_Camper::
# 285 "data/maps/SofosCity_Acropolis/scripts.pory"
	lock
# 286 "data/maps/SofosCity_Acropolis/scripts.pory"
	faceplayer
# 287 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_Camper_Text_0
# 288 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_Camper_Text_1
# 289 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 290 "data/maps/SofosCity_Acropolis/scripts.pory"
	release
	end


SofosCity_Acropolis_EventScript_Lass::
# 295 "data/maps/SofosCity_Acropolis/scripts.pory"
	lock
# 296 "data/maps/SofosCity_Acropolis/scripts.pory"
	faceplayer
# 297 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_Lass_Text_0
# 298 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_Lass_Text_1
# 299 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 300 "data/maps/SofosCity_Acropolis/scripts.pory"
	release
	end


SofosCity_Acropolis_EventScript_TogaGirl::
# 305 "data/maps/SofosCity_Acropolis/scripts.pory"
	lock
# 306 "data/maps/SofosCity_Acropolis/scripts.pory"
	faceplayer
# 307 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_TogaGirl_Text_0
# 308 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_TogaGirl_Text_1
# 309 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 310 "data/maps/SofosCity_Acropolis/scripts.pory"
	release
	end


SofosCity_Acropolis_EventScript_Sylveon::
# 316 "data/maps/SofosCity_Acropolis/scripts.pory"
	lock
# 317 "data/maps/SofosCity_Acropolis/scripts.pory"
	faceplayer
# 318 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_Acropolis_EventScript_Sylveon_Text_0
# 319 "data/maps/SofosCity_Acropolis/scripts.pory"
	playmoncry SPECIES_SYLVEON, CRY_MODE_NORMAL
# 320 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_Acropolis_EventScript_Sylveon_Text_1
# 321 "data/maps/SofosCity_Acropolis/scripts.pory"
	waitmoncry
# 322 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 323 "data/maps/SofosCity_Acropolis/scripts.pory"
	release
	end


SofosCity_EventScript_OldSofosOutfitBeauty::
# 329 "data/maps/SofosCity_Acropolis/scripts.pory"
	lock
# 330 "data/maps/SofosCity_Acropolis/scripts.pory"
	faceplayer
# 331 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_EventScript_OldSofosOutfitBeauty_Text_0
# 332 "data/maps/SofosCity_Acropolis/scripts.pory"
	checkoutfitflag OUTFIT_OLD_SOFOS
# 334 "data/maps/SofosCity_Acropolis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SofosCity_EventScript_OldSofosOutfitBeauty_2
# 384 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_EventScript_OldSofosOutfitBeauty_Text_7
# 385 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
SofosCity_EventScript_OldSofosOutfitBeauty_1:
# 387 "data/maps/SofosCity_Acropolis/scripts.pory"
	release
	end

SofosCity_EventScript_OldSofosOutfitBeauty_2:
# 336 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_EventScript_OldSofosOutfitBeauty_Text_1
# 337 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 338 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 5
# 339 "data/maps/SofosCity_Acropolis/scripts.pory"
	showmoneybox 0, 0
# 340 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_EventScript_OldSofosOutfitBeauty_Text_0
# 341 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_EventScript_OldSofosOutfitBeauty_Text_2, MSGBOX_YESNO
# 342 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 343 "data/maps/SofosCity_Acropolis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SofosCity_EventScript_OldSofosOutfitBeauty_5
# 355 "data/maps/SofosCity_Acropolis/scripts.pory"
	checkmoney 16900
# 356 "data/maps/SofosCity_Acropolis/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SofosCity_EventScript_OldSofosOutfitBeauty_8
# 367 "data/maps/SofosCity_Acropolis/scripts.pory"
	removemoney 16900
# 368 "data/maps/SofosCity_Acropolis/scripts.pory"
	updatemoneybox
# 369 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 5
# 370 "data/maps/SofosCity_Acropolis/scripts.pory"
	unlockoutfit OUTFIT_OLD_SOFOS
# 371 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_EventScript_OldSofosOutfitBeauty_Text_5
# 372 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 20
# 373 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 374 "data/maps/SofosCity_Acropolis/scripts.pory"
	hidemoneybox
# 375 "data/maps/SofosCity_Acropolis/scripts.pory"
	delay 5
# 376 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_EventScript_OldSofosOutfitBeauty_Text_0
# 377 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_EventScript_OldSofosOutfitBeauty_Text_6
# 378 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
	goto SofosCity_EventScript_OldSofosOutfitBeauty_1

SofosCity_EventScript_OldSofosOutfitBeauty_5:
# 345 "data/maps/SofosCity_Acropolis/scripts.pory"
	hidemoneybox
# 346 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_EventScript_OldSofosOutfitBeauty_Text_0
# 347 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_EventScript_OldSofosOutfitBeauty_Text_3
# 348 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 349 "data/maps/SofosCity_Acropolis/scripts.pory"
	release
	end

SofosCity_EventScript_OldSofosOutfitBeauty_8:
# 358 "data/maps/SofosCity_Acropolis/scripts.pory"
	hidemoneybox
# 359 "data/maps/SofosCity_Acropolis/scripts.pory"
	speakername SofosCity_EventScript_OldSofosOutfitBeauty_Text_0
# 360 "data/maps/SofosCity_Acropolis/scripts.pory"
	msgbox SofosCity_EventScript_OldSofosOutfitBeauty_Text_4
# 361 "data/maps/SofosCity_Acropolis/scripts.pory"
	closemessage
# 362 "data/maps/SofosCity_Acropolis/scripts.pory"
	release
	end


SofosCity_Acropolis_EventScript_ChimeraEvent_Text_0:
# 39 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Niko$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_1:
# 40 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Rania! {PLAYER}! I knew you'd save me!$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_2:
# 44 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Chimera Admin$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_3:
# 45 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Shut it, nerd! Or does my Arcanine need\n"
	.string "to keep you quiet for good?$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_4:
# 48 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Urk...$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_5:
# 59 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Rania$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_6:
# 60 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "HEY! You think you're so tough, but one\n"
	.string "good Water-type attack will stomp you!\l"
	.string "Too bad for you, my Floatzel is itching\l"
	.string "for a fight!$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_7:
# 71 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Get back! You stand before Kalliope,\n"
	.string "Queen of Ilios, Caller of Legends,\l"
	.string "Greatest Muse in-$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_8:
# 77 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Kalliope$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_9:
# 78 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Quiet. Can't you recognize Rhadine, a\n"
	.string "Muse, just like me? Not to mention\l"
	.string "{PLAYER}, the Trainer causing us\l"
	.string "trouble at every turn?$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_10:
# 84 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Rhadine, the sweet lady of Palati City.\n"
	.string "How long has it been?$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_11:
# 86 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Rhadine$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_12:
# 87 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "The last time I saw you, Team Chimera\n"
	.string "was making their way to Areios Town...\l"
	.string "Though I suppose I should call it {COLOR RED}Areios\l"
	.string "Hideout{COLOR DARK_GRAY} now.\p"
	.string "Kalliope, why? Why turn your back on us\n"
	.string "all, just for Team Chimera? Is this\l"
	.string "'power' really worth it?$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_13:
# 90 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Power is EVERYTHING, Rhadine. Gym\n"
	.string "Leaders should know that, of all people.\l"
	.string "Calling these {COLOR GREEN}Legendary Pokémon{COLOR DARK_GRAY} was\l"
	.string "just a matter of interrogating the\l"
	.string "Temple priests until they did their\l"
	.string "mumbo-jumbo ritual. Now, they're all\l"
	.string "mine.\p"
	.string "My Admins here have been just about\n"
	.string "worthless this whole time, but they've\l"
	.string "at least managed to assemble this\l"
	.string "{COLOR GREEN}Ancient Machine{COLOR DARK_GRAY}. According to old\l"
	.string "manuscripts, it can unlock powers\l"
	.string "hidden deep in their DNA, lost to time.$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_14:
# 97 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "{PLAYER}... You've been a thorn in our\n"
	.string "side since the beginning. Do you want to\l"
	.string "see REAL power, for the first time in\l"
	.string "your life? Feast your eyes... {COLOR RED}ON THIS{COLOR DARK_GRAY}!$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_15:
# 118 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "No... NO! What ARE these... These\n"
	.string "BEASTS?!$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_16:
# 121 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Mhmhmhm... FWAHAHA! Whaddya know, this\n"
	.string "rotten old machine actually worked!\p"
	.string "This is the ultimate form of {COLOR GREEN}Mega\n"
	.string "Evolution{COLOR DARK_GRAY} - the {COLOR RED}permanent awakening of\l"
	.string "ancient genes{COLOR DARK_GRAY}! With {COLOR RED}Gouging Fire{COLOR DARK_GRAY}, I\l"
	.string "shall rule the earth, filling our engines\l"
	.string "with coal! With {COLOR RED}Walking Wake{COLOR DARK_GRAY}, the seas\l"
	.string "will be mine to drill for oil! And with\l"
	.string "{COLOR RED}Raging Bolt{COLOR DARK_GRAY}, nobody will be able to stop\l"
	.string "us!$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_17:
# 130 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "You! My Admin of Fire! You will take\n"
	.string "Gouging Fire and wrestle control of the\l"
	.string "land for Team Chimera.$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_18:
# 135 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "My Admin of Ice, you will take Walking\n"
	.string "Wake! With this beast by your side, you\l"
	.string "shall dominate the seas!$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_19:
# 140 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Naturally, I will keep Raging Bolt to\n"
	.string "control everything the sky touches!\p"
	.string "Of course, our work is not yet done. We\n"
	.string "will destroy {COLOR RED}any challengers{COLOR DARK_GRAY} that dare\l"
	.string "to fight back. Team Chimera, move out!$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_20:
# 165 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "{PLAYER}... We were too late. With\n"
	.string "those Legendary Beasts by their side, I\l"
	.string "can't see how we could win.$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_21:
# 175 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "No, we can't give up hope. There must be\n"
	.string "something we can do!$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_22:
# 182 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "I think there is! While I was being held\n"
	.string "here by that Admin, I heard Kalliope\l"
	.string "mention {COLOR GREEN}other, godlike Pokémon of Land,\l"
	.string "Sea, and Sky{COLOR DARK_GRAY} said to be dormant in the\l"
	.string "Ilios Region.\p"
	.string "I think that Kalliope's mention of\n"
	.string "challengers had real meaning. Maybe\l"
	.string "she's planning on {COLOR GREEN}confronting those\l"
	.string "Pokémon{COLOR DARK_GRAY} to make sure her reign is\l"
	.string "unchallenged!$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_23:
# 188 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "That sounds familiar! There's a book\n"
	.string "about Ilian Mythology that mentions\l"
	.string "them: {COLOR GREEN}Kyogre, Groudon, and Rayquaza{COLOR DARK_GRAY}. I\l"
	.string "figured they were just old stories,\l"
	.string "but... If anything can help us beat Team\l"
	.string "Chimera, it's them.\p"
	.string "Niko and I were in Sofos City to follow\n"
	.string "up on reports of {COLOR GREEN}heat radiating from\l"
	.string "Satyr's Lair{COLOR DARK_GRAY}. I wonder if {COLOR GREEN}Groudon{COLOR DARK_GRAY} is\l"
	.string "under there?$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_24:
# 194 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Ancient legends from {COLOR GREEN}Kaptara Island{COLOR DARK_GRAY}\n"
	.string "say that {COLOR GREEN}Kyogre{COLOR DARK_GRAY} lives somewhere\l"
	.string "nearby, remaining dormant for\l"
	.string "thousands of years. Maybe you could\l"
	.string "investigate there?$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_25:
# 200 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "The Legendary of the Sky, {COLOR GREEN}Rayquaza{COLOR DARK_GRAY}, is\n"
	.string "worshipped at the {COLOR GREEN}Tower of Dioxippus{COLOR DARK_GRAY}\l"
	.string "south of Kipos Town. That's where you\l"
	.string "should go {COLOR GREEN}after finding Kyogre and\l"
	.string "Groudon{COLOR DARK_GRAY}.$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_26:
# 206 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Niko and I are going to return to\n"
	.string "Acrisia City. Professor Elia needs to\l"
	.string "know what's happening, and knowing\l"
	.string "Team Chimera, they'll be coming for the\l"
	.string "University next. Anyone who lusts for\l"
	.string "power believes that education is a\l"
	.string "threat to them.\p"
	.string "Before we go, please, take this.$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_27:
# 213 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "With the {COLOR GREEN}HM Strength{COLOR DARK_GRAY}, you'll be able to\n"
	.string "reach deeper into caves to find these\l"
	.string "Legendary Pokémon.$"

SofosCity_Acropolis_EventScript_ChimeraEvent_Text_28:
# 219 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "I'm sorry {PLAYER}, but I have to\n"
	.string "protect Palati City and my people.\l"
	.string "You'll be finding these Legendary\l"
	.string "Pokémon on your own. Good luck, and\l"
	.string "please, be safe!$"

SofosCity_Acropolis_EventScript_Sign1_Text_0:
# 257 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Information Sign$"

SofosCity_Acropolis_EventScript_Sign1_Text_1:
# 258 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Welcome to the Sofos City Acropolis\n"
	.string "Temple, the oldest and best maintained\l"
	.string "Acropolis Temple still standing in the\l"
	.string "Ilios Region.\p"
	.string "Various statues of Pokémon with\n"
	.string "mythical origins are kept in this\l"
	.string "temple. It has become a common spot for\l"
	.string "Trainers and other tourists to come and\l"
	.string "pay respects, hoping for a blessing\l"
	.string "from these incredibly powerful Pokémon.\p"
	.string "To the left and right are statues of\n"
	.string "Archen, the First Bird Pokémon. It is\l"
	.string "thought to be the shared ancestor of\l"
	.string "all bird Pokémon.$"

SofosCity_Acropolis_EventScript_Sign2_Text_0:
# 267 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "These Pokémon are foundational to the\n"
	.string "mythology of the Ilios Region. {COLOR GREEN}Raikou{COLOR DARK_GRAY}\l"
	.string "channels the power of the sky, creating\l"
	.string "roaring thunderbolts that shake the\l"
	.string "world. {COLOR GREEN}Suicune{COLOR DARK_GRAY} embodies the power of\l"
	.string "the sea, controlling strong wakes of\l"
	.string "water. {COLOR GREEN}Entei{COLOR DARK_GRAY} holds the power of the\l"
	.string "land, blasting fire and lava to expand\l"
	.string "its territory.\p"
	.string "It is said that these three Pokémon\n"
	.string "roam the world to this day. Despite\l"
	.string "their immense power, they do not truly\l"
	.string "rule their domains. Ancient myths speak\l"
	.string "of {COLOR GREEN}godlike Pokémon{COLOR DARK_GRAY} lost to time, which\l"
	.string "are the true kings of land, sea, and sky.$"

SofosCity_Acropolis_EventScript_Man_Text_0:
# 277 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Tourist$"

SofosCity_Acropolis_EventScript_Man_Text_1:
# 278 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Archen, huh? They say it evolved from a\n"
	.string "branch of reptilian Pokémon, being the\l"
	.string "first to develop feathers and wings.\p"
	.string "Of course, there are two types of\n"
	.string "evolution - Pokémon Evolution are\l"
	.string "changes from leveling up, while\l"
	.string "Biological Evolution is a process of\l"
	.string "slight changes over the course of many\l"
	.string "generations.$"

SofosCity_Acropolis_EventScript_Camper_Text_0:
# 287 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Camper$"

SofosCity_Acropolis_EventScript_Camper_Text_1:
# 288 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Those Pokémon from the old myths... I\n"
	.string "wonder if they're real. There are lots of\l"
	.string "parallels with stories from Johto and\l"
	.string "Hoenn. I wonder if most regions have\l"
	.string "elemental Pokémon myths.$"

SofosCity_Acropolis_EventScript_Lass_Text_0:
# 297 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Lass$"

SofosCity_Acropolis_EventScript_Lass_Text_1:
# 298 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "My family and I took a boat here from\n"
	.string "Myrrini Island. I've never seen statues\l"
	.string "like this before!$"

SofosCity_Acropolis_EventScript_TogaGirl_Text_0:
# 307 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Toga Woman$"

SofosCity_Acropolis_EventScript_TogaGirl_Text_1:
# 308 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Welcome. We hope you enjoy the Sofos\n"
	.string "City Acropolis Temple. Please be\l"
	.string "respectful of the fragile statues and\l"
	.string "other visitors, and enjoy your time\l"
	.string "here!$"

SofosCity_Acropolis_EventScript_Sylveon_Text_0:
# 318 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Sylveon$"

SofosCity_Acropolis_EventScript_Sylveon_Text_1:
# 320 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Breow!$"

SofosCity_EventScript_OldSofosOutfitBeauty_Text_0:
# 331 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Fashionista$"

SofosCity_EventScript_OldSofosOutfitBeauty_Text_1:
# 336 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Wow, the ancient history of the Ilios\n"
	.string "Region is amazing!$"

SofosCity_EventScript_OldSofosOutfitBeauty_Text_2:
# 341 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "I've actually made an Outfit in the\n"
	.string "ancient Sofos City style! I'll give you\l"
	.string "this {COLOR GREEN}Old Sofos Toga Outfit{COLOR DARK_GRAY} for ¥16900.\l"
	.string "How about it?$"

SofosCity_EventScript_OldSofosOutfitBeauty_Text_3:
# 347 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "No? Aren't you interested in the\n"
	.string "history of the Ilios Region?$"

SofosCity_EventScript_OldSofosOutfitBeauty_Text_4:
# 360 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Hey, you don't have the money for that!$"

SofosCity_EventScript_OldSofosOutfitBeauty_Text_5:
# 371 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "The Old Sofos Toga Outfit has been\n"
	.string "added to the Outfit Box!$"

SofosCity_EventScript_OldSofosOutfitBeauty_Text_6:
# 377 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "Thanks for your support! I hope you\n"
	.string "have fun trying out the ancient look!$"

SofosCity_EventScript_OldSofosOutfitBeauty_Text_7:
# 384 "data/maps/SofosCity_Acropolis/scripts.pory"
	.string "The Old Sofos Toga Outfit is a modern\n"
	.string "replica of an ancient style.\l"
	.string "Philosophers wore fashionable togas to\l"
	.string "important discussions.$"

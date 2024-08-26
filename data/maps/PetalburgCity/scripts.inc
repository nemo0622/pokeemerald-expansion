# 1 "data/maps/PetalburgCity/scripts.pory"

# 2 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLY, 2
# 3 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_BOY, 3
# 4 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLYS_DAD, 5
# 5 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_GYM_BOY, 8
# 6 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_SCOTT, 9
# 7 "data/maps/PetalburgCity/scripts.pory"

# 8 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 9 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 10 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 11 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 12 "data/maps/PetalburgCity/scripts.pory"

# 13 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 14 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 15 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 16 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 17 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 18 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 19 "data/maps/PetalburgCity/scripts.pory"
	end
# 20 "data/maps/PetalburgCity/scripts.pory"

# 21 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 22 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 23 "data/maps/PetalburgCity/scripts.pory"
	return
# 24 "data/maps/PetalburgCity/scripts.pory"

# 25 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 26 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 27 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 28 "data/maps/PetalburgCity/scripts.pory"
	return
# 29 "data/maps/PetalburgCity/scripts.pory"

# 30 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 31 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 32 "data/maps/PetalburgCity/scripts.pory"
	return
# 33 "data/maps/PetalburgCity/scripts.pory"

# 34 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 35 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 36 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 37 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 38 "data/maps/PetalburgCity/scripts.pory"

# 39 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 40 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 41 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 42 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 43 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 44 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 45 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 46 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 47 "data/maps/PetalburgCity/scripts.pory"
	@ special StartWallyTutorialBattle
# 48 "data/maps/PetalburgCity/scripts.pory"
	@ waitstate
# 49 "data/maps/PetalburgCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 50 "data/maps/PetalburgCity/scripts.pory"
	delay 120
# 51 "data/maps/PetalburgCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 52 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 53 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 54 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 55 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 56 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 57 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 58 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 59 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 60 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 61 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 62 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 63 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 64 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 65 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 66 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 67 "data/maps/PetalburgCity/scripts.pory"
	end
# 68 "data/maps/PetalburgCity/scripts.pory"

# 69 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 70 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 71 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 72 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 73 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 74 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 75 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 76 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 77 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 78 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 79 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 80 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 81 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 83 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
# 84 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 85 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 86 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 87 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 88 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 89 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 90 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 91 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 92 "data/maps/PetalburgCity/scripts.pory"
	end
# 93 "data/maps/PetalburgCity/scripts.pory"

# 94 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 95 "data/maps/PetalburgCity/scripts.pory"
	lock
# 96 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 97 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 98 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 99 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 100 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 101 "data/maps/PetalburgCity/scripts.pory"
	release
# 102 "data/maps/PetalburgCity/scripts.pory"
	end
# 103 "data/maps/PetalburgCity/scripts.pory"

# 104 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 105 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 106 "data/maps/PetalburgCity/scripts.pory"
	end
# 107 "data/maps/PetalburgCity/scripts.pory"

# 108 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 109 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 110 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 111 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 112 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 113 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 114 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 115 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 117 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 118 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 119 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 120 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 121 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 123 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 124 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 125 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 126 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 127 "data/maps/PetalburgCity/scripts.pory"

# 128 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 130 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 131 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 132 "data/maps/PetalburgCity/scripts.pory"

# 133 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 134 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 139 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 144 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 147 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 148 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 149 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 150 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 151 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 152 "data/maps/PetalburgCity/scripts.pory"

# 153 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 154 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 155 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 156 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 157 "data/maps/PetalburgCity/scripts.pory"

# 158 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 159 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 160 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 161 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 162 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 163 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 164 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 166 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 168 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 173 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 174 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 175 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 177 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 191 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 192 "data/maps/PetalburgCity/scripts.pory"

# 193 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 194 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 200 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 201 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 202 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 203 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 205 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 206 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 207 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 209 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 210 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 211 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 213 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 214 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 215 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 216 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 217 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 218 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 219 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 220 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 221 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 222 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 223 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 224 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 225 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 226 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 227 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 228 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 229 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 230 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 231 "data/maps/PetalburgCity/scripts.pory"

# 232 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 233 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 234 "data/maps/PetalburgCity/scripts.pory"
	end
# 235 "data/maps/PetalburgCity/scripts.pory"

# 236 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 237 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 238 "data/maps/PetalburgCity/scripts.pory"
	end
# 239 "data/maps/PetalburgCity/scripts.pory"

# 240 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 241 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 242 "data/maps/PetalburgCity/scripts.pory"
	end
# 243 "data/maps/PetalburgCity/scripts.pory"

# 244 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 245 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 246 "data/maps/PetalburgCity/scripts.pory"
	end
# 247 "data/maps/PetalburgCity/scripts.pory"

# 248 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 249 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 250 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 251 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 252 "data/maps/PetalburgCity/scripts.pory"
	end
# 253 "data/maps/PetalburgCity/scripts.pory"

# 254 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 255 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 256 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 257 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 258 "data/maps/PetalburgCity/scripts.pory"
	end
# 259 "data/maps/PetalburgCity/scripts.pory"

# 260 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 261 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 262 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 263 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 264 "data/maps/PetalburgCity/scripts.pory"
	end
# 265 "data/maps/PetalburgCity/scripts.pory"

# 266 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 267 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 268 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 269 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 270 "data/maps/PetalburgCity/scripts.pory"
	end
# 271 "data/maps/PetalburgCity/scripts.pory"

# 272 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 273 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 274 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 275 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 276 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 277 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 278 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 279 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 280 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 281 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 282 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 283 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 284 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 285 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 286 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 287 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 288 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 289 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 290 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 291 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 292 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 293 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 294 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 295 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 296 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 297 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 298 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 299 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 300 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 301 "data/maps/PetalburgCity/scripts.pory"
	end
# 302 "data/maps/PetalburgCity/scripts.pory"

# 303 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 304 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 305 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 306 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 307 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 308 "data/maps/PetalburgCity/scripts.pory"
	return
# 309 "data/maps/PetalburgCity/scripts.pory"

# 310 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 311 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 312 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 313 "data/maps/PetalburgCity/scripts.pory"
	return
# 314 "data/maps/PetalburgCity/scripts.pory"

# 315 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 316 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 317 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 318 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 319 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 320 "data/maps/PetalburgCity/scripts.pory"
	return
# 321 "data/maps/PetalburgCity/scripts.pory"

# 322 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 323 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 324 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 325 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 326 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 327 "data/maps/PetalburgCity/scripts.pory"
	return
# 328 "data/maps/PetalburgCity/scripts.pory"

# 329 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 330 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 331 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 332 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 333 "data/maps/PetalburgCity/scripts.pory"
	return
# 334 "data/maps/PetalburgCity/scripts.pory"

# 335 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 336 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 337 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 338 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 339 "data/maps/PetalburgCity/scripts.pory"
	return
# 340 "data/maps/PetalburgCity/scripts.pory"

# 341 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 342 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 343 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 344 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 345 "data/maps/PetalburgCity/scripts.pory"
	return
# 346 "data/maps/PetalburgCity/scripts.pory"

# 347 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 348 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 349 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 350 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 351 "data/maps/PetalburgCity/scripts.pory"
	return
# 352 "data/maps/PetalburgCity/scripts.pory"

# 353 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 354 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 355 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 356 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 357 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 358 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 359 "data/maps/PetalburgCity/scripts.pory"

# 360 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 361 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 362 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 363 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 364 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 365 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 366 "data/maps/PetalburgCity/scripts.pory"

# 367 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 368 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 369 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 370 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 371 "data/maps/PetalburgCity/scripts.pory"

# 372 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 373 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 374 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 376 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 377 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 378 "data/maps/PetalburgCity/scripts.pory"

# 379 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 380 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 381 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 382 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 383 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 384 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 385 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 386 "data/maps/PetalburgCity/scripts.pory"

# 387 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 388 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 389 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 390 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 391 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 392 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 393 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 394 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 395 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 396 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 397 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 398 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 399 "data/maps/PetalburgCity/scripts.pory"

# 400 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 401 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 402 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 406 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 407 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 408 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 410 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 411 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 412 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 413 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 414 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 415 "data/maps/PetalburgCity/scripts.pory"

# 416 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 420 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 424 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 427 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 428 "data/maps/PetalburgCity/scripts.pory"

# 429 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 441 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 442 "data/maps/PetalburgCity/scripts.pory"

# 443 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 444 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 445 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 446 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 447 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 456 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 457 "data/maps/PetalburgCity/scripts.pory"

# 458 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 461 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 462 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 463 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 464 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 465 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 468 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 469 "data/maps/PetalburgCity/scripts.pory"

# 470 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 471 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 472 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 475 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 477 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 478 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 479 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 480 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 482 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 483 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 484 "data/maps/PetalburgCity/scripts.pory"

# 485 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 486 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 487 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 488 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 489 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 490 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 491 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 492 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 493 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 494 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 495 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 496 "data/maps/PetalburgCity/scripts.pory"

# 497 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 498 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 499 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 500 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 501 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 502 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 503 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 504 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 505 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 506 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 507 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 508 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 509 "data/maps/PetalburgCity/scripts.pory"

# 510 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 511 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 512 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 513 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 514 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 515 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 516 "data/maps/PetalburgCity/scripts.pory"
	end
# 517 "data/maps/PetalburgCity/scripts.pory"

# 518 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 519 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 520 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 521 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 522 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 523 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 524 "data/maps/PetalburgCity/scripts.pory"
	end
# 525 "data/maps/PetalburgCity/scripts.pory"

# 526 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 527 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 528 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 529 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 530 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 531 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 532 "data/maps/PetalburgCity/scripts.pory"
	end
# 533 "data/maps/PetalburgCity/scripts.pory"

# 534 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 535 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 536 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 537 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 538 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 539 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 540 "data/maps/PetalburgCity/scripts.pory"
	end
# 541 "data/maps/PetalburgCity/scripts.pory"

# 542 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 543 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 544 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 545 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 546 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 547 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 548 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 549 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 550 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 551 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 552 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 553 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 554 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 555 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 556 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 557 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 558 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 559 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 560 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 561 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 562 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 563 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 564 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 565 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 566 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 567 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 568 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_EXP_SHARE
# 569 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 570 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 571 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 572 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 573 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 574 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 575 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 576 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 577 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 578 "data/maps/PetalburgCity/scripts.pory"
	end
# 579 "data/maps/PetalburgCity/scripts.pory"

# 580 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 581 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 582 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 583 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 584 "data/maps/PetalburgCity/scripts.pory"
	return
# 585 "data/maps/PetalburgCity/scripts.pory"

# 586 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 587 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 588 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 589 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 590 "data/maps/PetalburgCity/scripts.pory"
	return
# 591 "data/maps/PetalburgCity/scripts.pory"

# 592 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 593 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 594 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 595 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 596 "data/maps/PetalburgCity/scripts.pory"
	return
# 597 "data/maps/PetalburgCity/scripts.pory"

# 598 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 599 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 600 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 601 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 602 "data/maps/PetalburgCity/scripts.pory"
	return
# 603 "data/maps/PetalburgCity/scripts.pory"

# 604 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 605 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 606 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 607 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 608 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 609 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 610 "data/maps/PetalburgCity/scripts.pory"

# 611 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 612 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 613 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 614 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 615 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 616 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 617 "data/maps/PetalburgCity/scripts.pory"

# 618 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 619 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 620 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 621 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 622 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 623 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 624 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 625 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 626 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 627 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 628 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 629 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 630 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 631 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 632 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 633 "data/maps/PetalburgCity/scripts.pory"

# 634 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 635 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 636 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 637 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 638 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 639 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 640 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 641 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 642 "data/maps/PetalburgCity/scripts.pory"

# 643 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 644 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 645 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 646 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 647 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 648 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 649 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 650 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 651 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 652 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 653 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 654 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 655 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 656 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 657 "data/maps/PetalburgCity/scripts.pory"

# 658 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 659 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 660 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 661 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 662 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 663 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 664 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 665 "data/maps/PetalburgCity/scripts.pory"

# 666 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 667 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 668 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 669 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 670 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 671 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 672 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 673 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 674 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 675 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 676 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 677 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 678 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 679 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 680 "data/maps/PetalburgCity/scripts.pory"

# 681 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 682 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 683 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 684 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 685 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 686 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 687 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 688 "data/maps/PetalburgCity/scripts.pory"

# 689 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 690 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 691 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 692 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 693 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 694 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 695 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 696 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 697 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 698 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 699 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 700 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 701 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 702 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 703 "data/maps/PetalburgCity/scripts.pory"

# 704 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 705 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 706 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 707 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 708 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 709 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 710 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 711 "data/maps/PetalburgCity/scripts.pory"

# 712 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 713 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 714 "data/maps/PetalburgCity/scripts.pory"
	end
# 715 "data/maps/PetalburgCity/scripts.pory"

# 716 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 717 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 718 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 719 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 720 "data/maps/PetalburgCity/scripts.pory"

# 721 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 722 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 723 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 724 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 725 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 726 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 727 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 728 "data/maps/PetalburgCity/scripts.pory"

# 729 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 730 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 731 "data/maps/PetalburgCity/scripts.pory"

# 732 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 733 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 734 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 735 "data/maps/PetalburgCity/scripts.pory"

# 736 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 737 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 738 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 739 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 740 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 741 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 742 "data/maps/PetalburgCity/scripts.pory"

# 743 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 744 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 745 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 746 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 747 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 748 "data/maps/PetalburgCity/scripts.pory"

# 749 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 750 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 751 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: NORMAN\l"
# 752 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 753 "data/maps/PetalburgCity/scripts.pory"

# 754 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 755 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 756 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 757 "data/maps/PetalburgCity/scripts.pory"

# 758 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 759 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 760 "data/maps/PetalburgCity/scripts.pory"

# 761 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 762 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 763 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 764 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 765 "data/maps/PetalburgCity/scripts.pory"

# 766 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 767 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 768 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 769 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 770 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 771 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 772 "data/maps/PetalburgCity/scripts.pory"

# 773 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 774 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 775 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 776 "data/maps/PetalburgCity/scripts.pory"
	.string "Folks like you could use a helping\n"
# 777 "data/maps/PetalburgCity/scripts.pory"
	.string "hand from time to time, right?\p"
# 778 "data/maps/PetalburgCity/scripts.pory"
	.string "Take this. I'll be on my way.$"
# 779 "data/maps/PetalburgCity/scripts.pory"

# 780 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GivenEXPShare:
# 781 "data/maps/PetalburgCity/scripts.pory"
	.string "{PLAYER} was given the EXP. SHARE.$"

PetalburgCity_EventScript_MerchantBrotherLeft::
# 787 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 788 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 790 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_PETALBURG_BROTHERS, PetalburgCity_EventScript_MerchantBrotherLeft_2
PetalburgCity_EventScript_MerchantBrotherLeft_1:
# 810 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherLeft_Text_5
# 811 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 813 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PetalburgCity_EventScript_MerchantBrotherLeft_5
# 817 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, PetalburgCity_EventScript_MerchantBrotherLeft_36
PetalburgCity_EventScript_MerchantBrotherLeft_34:
# 821 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, PetalburgCity_EventScript_MerchantBrotherLeft_33
PetalburgCity_EventScript_MerchantBrotherLeft_31:
# 825 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, PetalburgCity_EventScript_MerchantBrotherLeft_30
PetalburgCity_EventScript_MerchantBrotherLeft_28:
# 829 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, PetalburgCity_EventScript_MerchantBrotherLeft_27
PetalburgCity_EventScript_MerchantBrotherLeft_25:
# 833 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_EventScript_MerchantBrotherLeft_24
PetalburgCity_EventScript_MerchantBrotherLeft_22:
# 837 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, PetalburgCity_EventScript_MerchantBrotherLeft_21
PetalburgCity_EventScript_MerchantBrotherLeft_19:
# 841 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, PetalburgCity_EventScript_MerchantBrotherLeft_18
PetalburgCity_EventScript_MerchantBrotherLeft_16:
# 845 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, PetalburgCity_EventScript_MerchantBrotherLeft_15
PetalburgCity_EventScript_MerchantBrotherLeft_14:
# 851 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_PedroChamp
PetalburgCity_EventScript_MerchantBrotherLeft_4:
# 854 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherLeft_Text_6
# 855 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 856 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end

PetalburgCity_EventScript_MerchantBrotherLeft_2:
# 792 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 793 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 794 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherLeft_Text_0
# 795 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 796 "data/maps/PetalburgCity/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterLeft
# 797 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 798 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherLeft_Text_1
# 799 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 800 "data/maps/PetalburgCity/scripts.pory"
	applymovement 11, Common_Movement_FaceOriginalDirection
# 801 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherLeft_Text_2
# 802 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 803 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherLeft_Text_3
# 804 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 805 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherLeft_Text_4
# 806 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 807 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SPOKE_TO_PETALBURG_BROTHERS
	goto PetalburgCity_EventScript_MerchantBrotherLeft_1

PetalburgCity_EventScript_MerchantBrotherLeft_5:
# 815 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_PedroBadge0
	goto PetalburgCity_EventScript_MerchantBrotherLeft_4

PetalburgCity_EventScript_MerchantBrotherLeft_6:
# 819 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_PedroBadge1
	goto PetalburgCity_EventScript_MerchantBrotherLeft_4

PetalburgCity_EventScript_MerchantBrotherLeft_7:
# 823 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_PedroBadge2
	goto PetalburgCity_EventScript_MerchantBrotherLeft_4

PetalburgCity_EventScript_MerchantBrotherLeft_8:
# 827 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_PedroBadge3
	goto PetalburgCity_EventScript_MerchantBrotherLeft_4

PetalburgCity_EventScript_MerchantBrotherLeft_9:
# 831 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_PedroBadge4
	goto PetalburgCity_EventScript_MerchantBrotherLeft_4

PetalburgCity_EventScript_MerchantBrotherLeft_10:
# 835 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_PedroBadge5
	goto PetalburgCity_EventScript_MerchantBrotherLeft_4

PetalburgCity_EventScript_MerchantBrotherLeft_11:
# 839 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_PedroBadge6
	goto PetalburgCity_EventScript_MerchantBrotherLeft_4

PetalburgCity_EventScript_MerchantBrotherLeft_12:
# 843 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_PedroBadge7
	goto PetalburgCity_EventScript_MerchantBrotherLeft_4

PetalburgCity_EventScript_MerchantBrotherLeft_13:
# 847 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_PedroBadge8
	goto PetalburgCity_EventScript_MerchantBrotherLeft_4

PetalburgCity_EventScript_MerchantBrotherLeft_15:
# 845 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, PetalburgCity_EventScript_MerchantBrotherLeft_13
	goto PetalburgCity_EventScript_MerchantBrotherLeft_14

PetalburgCity_EventScript_MerchantBrotherLeft_18:
# 841 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, PetalburgCity_EventScript_MerchantBrotherLeft_12
	goto PetalburgCity_EventScript_MerchantBrotherLeft_16

PetalburgCity_EventScript_MerchantBrotherLeft_21:
# 837 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, PetalburgCity_EventScript_MerchantBrotherLeft_11
	goto PetalburgCity_EventScript_MerchantBrotherLeft_19

PetalburgCity_EventScript_MerchantBrotherLeft_24:
# 833 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, PetalburgCity_EventScript_MerchantBrotherLeft_10
	goto PetalburgCity_EventScript_MerchantBrotherLeft_22

PetalburgCity_EventScript_MerchantBrotherLeft_27:
# 829 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, PetalburgCity_EventScript_MerchantBrotherLeft_9
	goto PetalburgCity_EventScript_MerchantBrotherLeft_25

PetalburgCity_EventScript_MerchantBrotherLeft_30:
# 825 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, PetalburgCity_EventScript_MerchantBrotherLeft_8
	goto PetalburgCity_EventScript_MerchantBrotherLeft_28

PetalburgCity_EventScript_MerchantBrotherLeft_33:
# 821 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, PetalburgCity_EventScript_MerchantBrotherLeft_7
	goto PetalburgCity_EventScript_MerchantBrotherLeft_31

PetalburgCity_EventScript_MerchantBrotherLeft_36:
# 817 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, PetalburgCity_EventScript_MerchantBrotherLeft_6
	goto PetalburgCity_EventScript_MerchantBrotherLeft_34


	.align 2
# 861 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_PedroBadge0:
# 863 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_NONE

	.align 2
# 866 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_PedroBadge1:
# 868 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 869 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 872 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_PedroBadge2:
# 874 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 875 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 876 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
	.2byte ITEM_NONE

	.align 2
# 879 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_PedroBadge3:
# 881 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 882 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 883 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 884 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEART_SCALE
	.2byte ITEM_NONE

	.align 2
# 887 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_PedroBadge4:
# 889 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 890 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 891 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 892 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEART_SCALE
# 893 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

	.align 2
# 896 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_PedroBadge5:
# 898 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 899 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 900 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 901 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 902 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEART_SCALE
# 903 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

	.align 2
# 906 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_PedroBadge6:
# 908 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 909 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 910 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 911 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 912 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 913 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEART_SCALE
# 914 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

	.align 2
# 917 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_PedroBadge7:
# 919 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 920 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 921 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 922 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 923 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 924 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 925 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEART_SCALE
# 926 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

	.align 2
# 929 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_PedroBadge8:
# 931 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 932 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 933 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 934 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 935 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 936 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 937 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEART_SCALE
# 938 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PP_UP
# 939 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PP_MAX
	.2byte ITEM_NONE

	.align 2
# 942 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_PedroChamp:
# 944 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 945 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 946 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 947 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 948 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 949 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 950 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 951 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEART_SCALE
# 952 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PP_UP
# 953 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PP_MAX
	.2byte ITEM_NONE

PetalburgCity_EventScript_MerchantBrotherRight::
# 959 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 960 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 962 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_PETALBURG_BROTHERS, PetalburgCity_EventScript_MerchantBrotherRight_2
PetalburgCity_EventScript_MerchantBrotherRight_1:
# 982 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherRight_Text_5
# 983 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 985 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PetalburgCity_EventScript_MerchantBrotherRight_5
# 989 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, PetalburgCity_EventScript_MerchantBrotherRight_36
PetalburgCity_EventScript_MerchantBrotherRight_34:
# 993 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, PetalburgCity_EventScript_MerchantBrotherRight_33
PetalburgCity_EventScript_MerchantBrotherRight_31:
# 997 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, PetalburgCity_EventScript_MerchantBrotherRight_30
PetalburgCity_EventScript_MerchantBrotherRight_28:
# 1001 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, PetalburgCity_EventScript_MerchantBrotherRight_27
PetalburgCity_EventScript_MerchantBrotherRight_25:
# 1005 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_EventScript_MerchantBrotherRight_24
PetalburgCity_EventScript_MerchantBrotherRight_22:
# 1009 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, PetalburgCity_EventScript_MerchantBrotherRight_21
PetalburgCity_EventScript_MerchantBrotherRight_19:
# 1013 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, PetalburgCity_EventScript_MerchantBrotherRight_18
PetalburgCity_EventScript_MerchantBrotherRight_16:
# 1017 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, PetalburgCity_EventScript_MerchantBrotherRight_15
PetalburgCity_EventScript_MerchantBrotherRight_14:
# 1023 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_NicoChamp
PetalburgCity_EventScript_MerchantBrotherRight_4:
# 1026 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherRight_Text_6
# 1027 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1028 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end

PetalburgCity_EventScript_MerchantBrotherRight_2:
# 964 "data/maps/PetalburgCity/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 965 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 966 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherRight_Text_0
# 967 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 968 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkInPlaceFasterRight
# 969 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 970 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherRight_Text_1
# 971 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 972 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_FaceOriginalDirection
# 973 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherRight_Text_2
# 974 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 975 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherRight_Text_3
# 976 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 977 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherRight_Text_4
# 978 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 979 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SPOKE_TO_PETALBURG_BROTHERS
	goto PetalburgCity_EventScript_MerchantBrotherRight_1

PetalburgCity_EventScript_MerchantBrotherRight_5:
# 987 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_NicoBadge0
	goto PetalburgCity_EventScript_MerchantBrotherRight_4

PetalburgCity_EventScript_MerchantBrotherRight_6:
# 991 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_NicoBadge1
	goto PetalburgCity_EventScript_MerchantBrotherRight_4

PetalburgCity_EventScript_MerchantBrotherRight_7:
# 995 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_NicoBadge2
	goto PetalburgCity_EventScript_MerchantBrotherRight_4

PetalburgCity_EventScript_MerchantBrotherRight_8:
# 999 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_NicoBadge3
	goto PetalburgCity_EventScript_MerchantBrotherRight_4

PetalburgCity_EventScript_MerchantBrotherRight_9:
# 1003 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_NicoBadge4
	goto PetalburgCity_EventScript_MerchantBrotherRight_4

PetalburgCity_EventScript_MerchantBrotherRight_10:
# 1007 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_NicoBadge5
	goto PetalburgCity_EventScript_MerchantBrotherRight_4

PetalburgCity_EventScript_MerchantBrotherRight_11:
# 1011 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_NicoBadge6
	goto PetalburgCity_EventScript_MerchantBrotherRight_4

PetalburgCity_EventScript_MerchantBrotherRight_12:
# 1015 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_NicoBadge7
	goto PetalburgCity_EventScript_MerchantBrotherRight_4

PetalburgCity_EventScript_MerchantBrotherRight_13:
# 1019 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_NicoBadge8
	goto PetalburgCity_EventScript_MerchantBrotherRight_4

PetalburgCity_EventScript_MerchantBrotherRight_15:
# 1017 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, PetalburgCity_EventScript_MerchantBrotherRight_13
	goto PetalburgCity_EventScript_MerchantBrotherRight_14

PetalburgCity_EventScript_MerchantBrotherRight_18:
# 1013 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, PetalburgCity_EventScript_MerchantBrotherRight_12
	goto PetalburgCity_EventScript_MerchantBrotherRight_16

PetalburgCity_EventScript_MerchantBrotherRight_21:
# 1009 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, PetalburgCity_EventScript_MerchantBrotherRight_11
	goto PetalburgCity_EventScript_MerchantBrotherRight_19

PetalburgCity_EventScript_MerchantBrotherRight_24:
# 1005 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, PetalburgCity_EventScript_MerchantBrotherRight_10
	goto PetalburgCity_EventScript_MerchantBrotherRight_22

PetalburgCity_EventScript_MerchantBrotherRight_27:
# 1001 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, PetalburgCity_EventScript_MerchantBrotherRight_9
	goto PetalburgCity_EventScript_MerchantBrotherRight_25

PetalburgCity_EventScript_MerchantBrotherRight_30:
# 997 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, PetalburgCity_EventScript_MerchantBrotherRight_8
	goto PetalburgCity_EventScript_MerchantBrotherRight_28

PetalburgCity_EventScript_MerchantBrotherRight_33:
# 993 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, PetalburgCity_EventScript_MerchantBrotherRight_7
	goto PetalburgCity_EventScript_MerchantBrotherRight_31

PetalburgCity_EventScript_MerchantBrotherRight_36:
# 989 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, PetalburgCity_EventScript_MerchantBrotherRight_6
	goto PetalburgCity_EventScript_MerchantBrotherRight_34


	.align 2
# 1033 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_NicoBadge0:
# 1035 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1036 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
	.2byte ITEM_NONE

	.align 2
# 1039 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_NicoBadge1:
# 1041 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1042 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1043 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1044 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
	.2byte ITEM_NONE

	.align 2
# 1047 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_NicoBadge2:
# 1049 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 1050 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1051 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1052 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1053 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 1054 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
	.2byte ITEM_NONE

	.align 2
# 1057 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_NicoBadge3:
# 1059 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 1060 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1061 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1062 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1063 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 1064 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 1065 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_NONE

	.align 2
# 1068 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_NicoBadge4:
# 1070 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 1071 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1072 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1073 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1074 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 1075 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 1076 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 1077 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

	.align 2
# 1080 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_NicoBadge5:
# 1082 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 1083 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1084 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1085 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1086 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 1087 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 1088 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 1089 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 1090 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 1091 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

	.align 2
# 1094 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_NicoBadge6:
# 1096 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 1097 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1098 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1099 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1100 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 1101 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 1102 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HP_UP
# 1103 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 1104 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_IRON
# 1105 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 1106 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ZINC
# 1107 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CARBOS
# 1108 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 1109 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

	.align 2
# 1112 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_NicoBadge7:
# 1114 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 1115 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1116 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1117 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1118 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 1119 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 1120 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HP_UP
# 1121 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 1122 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_IRON
# 1123 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 1124 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ZINC
# 1125 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CARBOS
# 1126 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 1127 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 1128 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
	.2byte ITEM_NONE

	.align 2
# 1131 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_NicoBadge8:
# 1133 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 1134 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1135 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1136 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1137 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 1138 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 1139 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HP_UP
# 1140 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 1141 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_IRON
# 1142 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 1143 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ZINC
# 1144 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CARBOS
# 1145 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 1146 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 1147 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 1148 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 1149 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
	.2byte ITEM_NONE

	.align 2
# 1152 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_NicoChamp:
# 1154 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 1155 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1156 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1157 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1158 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 1159 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 1160 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HP_UP
# 1161 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 1162 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_IRON
# 1163 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 1164 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ZINC
# 1165 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CARBOS
# 1166 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 1167 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 1168 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 1169 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 1170 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 1171 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_LEFTOVERS
	.2byte ITEM_NONE

PetalburgCity_EventScript_MerchantBrotherLeft_Text_0:
# 794 "data/maps/PetalburgCity/scripts.pory"
	.string "Pedro: Aha! A new customer! I knew\n"
	.string "moving in front of the GYM would be\l"
	.string "good for business!$"

PetalburgCity_EventScript_MerchantBrotherLeft_Text_1:
# 798 "data/maps/PetalburgCity/scripts.pory"
	.string "Nico: Hehehe! Let's get down to\n"
	.string "business!$"

PetalburgCity_EventScript_MerchantBrotherLeft_Text_2:
# 801 "data/maps/PetalburgCity/scripts.pory"
	.string "Pedro: Way ahead of you! Welcome to the\n"
	.string "HAPPY TRAINER MERCHANT STAND!$"

PetalburgCity_EventScript_MerchantBrotherLeft_Text_3:
# 803 "data/maps/PetalburgCity/scripts.pory"
	.string "We sell goods to TRAINERS based on\n"
	.string "their GYM badges! More badges means\l"
	.string "more stuff for you, and more money- I\l"
	.string "mean, more business for us!\l"
	.string "I sell items to boost POKéMON battle\l"
	.string "skills, and Nico here sells goods to\l"
	.string "influence POKéMON stats.$"

PetalburgCity_EventScript_MerchantBrotherLeft_Text_4:
# 805 "data/maps/PetalburgCity/scripts.pory"
	.string "Pedro: Now, with all that out of the\n"
	.string "way...$"

PetalburgCity_EventScript_MerchantBrotherLeft_Text_5:
# 810 "data/maps/PetalburgCity/scripts.pory"
	.string "Pedro: Hey hey, TRAINER! What do you\n"
	.string "need?$"

PetalburgCity_EventScript_MerchantBrotherLeft_Text_6:
# 854 "data/maps/PetalburgCity/scripts.pory"
	.string "Come back soon, kid!$"

PetalburgCity_EventScript_MerchantBrotherRight_Text_0:
# 966 "data/maps/PetalburgCity/scripts.pory"
	.string "Nico: Woah, a customer! I knew you were\n"
	.string "right, Pedro!$"

PetalburgCity_EventScript_MerchantBrotherRight_Text_1:
# 970 "data/maps/PetalburgCity/scripts.pory"
	.string "Pedro: Fuahaha! I'm never wrong, am I?$"

PetalburgCity_EventScript_MerchantBrotherRight_Text_2:
# 973 "data/maps/PetalburgCity/scripts.pory"
	.string "Nico: Hehehe, never ever! TRAINER,\n"
	.string "welcome to the HAPPY TRAINER MERCHANT\l"
	.string "STAND!$"

PetalburgCity_EventScript_MerchantBrotherRight_Text_3:
# 975 "data/maps/PetalburgCity/scripts.pory"
	.string "We sell goods to TRAINERS based on\n"
	.string "their GYM badges! More badges means\l"
	.string "more stuff for you, and more work for\l"
	.string "us!\l"
	.string "I sell items that change POKéMON stats,\l"
	.string "and Pedro here sells items to boost\l"
	.string "battle power.$"

PetalburgCity_EventScript_MerchantBrotherRight_Text_4:
# 977 "data/maps/PetalburgCity/scripts.pory"
	.string "Nico: Now, with that out of the way...$"

PetalburgCity_EventScript_MerchantBrotherRight_Text_5:
# 982 "data/maps/PetalburgCity/scripts.pory"
	.string "Nico: What's good, TRAINER? How can we\n"
	.string "help you?$"

PetalburgCity_EventScript_MerchantBrotherRight_Text_6:
# 1026 "data/maps/PetalburgCity/scripts.pory"
	.string "Come back soon, dude!$"

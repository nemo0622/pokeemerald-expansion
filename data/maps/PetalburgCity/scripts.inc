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
	special StartWallyTutorialBattle
# 48 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 49 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 50 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 51 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 52 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 53 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 54 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 55 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 56 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 57 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 58 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 59 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 60 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 61 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 62 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 63 "data/maps/PetalburgCity/scripts.pory"
	end
# 64 "data/maps/PetalburgCity/scripts.pory"

# 65 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 66 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 67 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 68 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 69 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 70 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 71 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 72 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 73 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 74 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 75 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 76 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 77 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 78 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 79 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
# 80 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 81 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 82 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 83 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 84 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 85 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 86 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 87 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 88 "data/maps/PetalburgCity/scripts.pory"
	end
# 89 "data/maps/PetalburgCity/scripts.pory"

# 90 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 91 "data/maps/PetalburgCity/scripts.pory"
	lock
# 92 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 93 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 94 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 95 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 96 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 97 "data/maps/PetalburgCity/scripts.pory"
	release
# 98 "data/maps/PetalburgCity/scripts.pory"
	end
# 99 "data/maps/PetalburgCity/scripts.pory"

# 100 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 101 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 102 "data/maps/PetalburgCity/scripts.pory"
	end
# 103 "data/maps/PetalburgCity/scripts.pory"

# 104 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 105 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 106 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 107 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 108 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 109 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 110 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 111 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 112 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 113 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 114 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 115 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 117 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 118 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 119 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 120 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 121 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 122 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 123 "data/maps/PetalburgCity/scripts.pory"

# 124 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 125 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 126 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 127 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 128 "data/maps/PetalburgCity/scripts.pory"

# 129 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 130 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 131 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 139 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 144 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 147 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 148 "data/maps/PetalburgCity/scripts.pory"

# 149 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 150 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 151 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 152 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 153 "data/maps/PetalburgCity/scripts.pory"

# 154 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 155 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 156 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 157 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 158 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 159 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 160 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 161 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 162 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 163 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 164 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 166 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 187 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 188 "data/maps/PetalburgCity/scripts.pory"

# 189 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 190 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 191 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 200 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 201 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 219 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 220 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 221 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 222 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 223 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 224 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 225 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 226 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 227 "data/maps/PetalburgCity/scripts.pory"

# 228 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 229 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 230 "data/maps/PetalburgCity/scripts.pory"
	end
# 231 "data/maps/PetalburgCity/scripts.pory"

# 232 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 233 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 234 "data/maps/PetalburgCity/scripts.pory"
	end
# 235 "data/maps/PetalburgCity/scripts.pory"

# 236 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 237 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 238 "data/maps/PetalburgCity/scripts.pory"
	end
# 239 "data/maps/PetalburgCity/scripts.pory"

# 240 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 241 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 242 "data/maps/PetalburgCity/scripts.pory"
	end
# 243 "data/maps/PetalburgCity/scripts.pory"

# 244 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 245 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 246 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 247 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 248 "data/maps/PetalburgCity/scripts.pory"
	end
# 249 "data/maps/PetalburgCity/scripts.pory"

# 250 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 251 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 252 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 253 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 254 "data/maps/PetalburgCity/scripts.pory"
	end
# 255 "data/maps/PetalburgCity/scripts.pory"

# 256 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 257 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 258 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 259 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 260 "data/maps/PetalburgCity/scripts.pory"
	end
# 261 "data/maps/PetalburgCity/scripts.pory"

# 262 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 263 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 264 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 265 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 266 "data/maps/PetalburgCity/scripts.pory"
	end
# 267 "data/maps/PetalburgCity/scripts.pory"

# 268 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 269 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 270 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 271 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 272 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 273 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 274 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 275 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 276 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 277 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 278 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 279 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 280 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 281 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 282 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 283 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 284 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 285 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 286 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 287 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 288 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 289 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 290 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 291 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 292 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 293 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 294 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 295 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 296 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 297 "data/maps/PetalburgCity/scripts.pory"
	end
# 298 "data/maps/PetalburgCity/scripts.pory"

# 299 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 300 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 301 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 302 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 303 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 304 "data/maps/PetalburgCity/scripts.pory"
	return
# 305 "data/maps/PetalburgCity/scripts.pory"

# 306 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 307 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 308 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 309 "data/maps/PetalburgCity/scripts.pory"
	return
# 310 "data/maps/PetalburgCity/scripts.pory"

# 311 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 312 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 313 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 314 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 315 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 316 "data/maps/PetalburgCity/scripts.pory"
	return
# 317 "data/maps/PetalburgCity/scripts.pory"

# 318 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 319 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 320 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 321 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 322 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 323 "data/maps/PetalburgCity/scripts.pory"
	return
# 324 "data/maps/PetalburgCity/scripts.pory"

# 325 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 326 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 327 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 328 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 329 "data/maps/PetalburgCity/scripts.pory"
	return
# 330 "data/maps/PetalburgCity/scripts.pory"

# 331 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 332 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 333 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 334 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 335 "data/maps/PetalburgCity/scripts.pory"
	return
# 336 "data/maps/PetalburgCity/scripts.pory"

# 337 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 338 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 339 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 340 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 341 "data/maps/PetalburgCity/scripts.pory"
	return
# 342 "data/maps/PetalburgCity/scripts.pory"

# 343 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 344 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 345 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 346 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 347 "data/maps/PetalburgCity/scripts.pory"
	return
# 348 "data/maps/PetalburgCity/scripts.pory"

# 349 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 350 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 351 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 352 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 353 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 354 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 355 "data/maps/PetalburgCity/scripts.pory"

# 356 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 357 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 358 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 359 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 360 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 361 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 362 "data/maps/PetalburgCity/scripts.pory"

# 363 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 364 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 365 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 366 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 367 "data/maps/PetalburgCity/scripts.pory"

# 368 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 369 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 370 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 371 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 372 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 373 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 374 "data/maps/PetalburgCity/scripts.pory"

# 375 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 376 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 377 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 378 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 379 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 380 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 381 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 382 "data/maps/PetalburgCity/scripts.pory"

# 383 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 384 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 385 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 386 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 387 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 388 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 389 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 390 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 391 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 392 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 393 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 394 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 395 "data/maps/PetalburgCity/scripts.pory"

# 396 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 397 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 398 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 399 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 400 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 401 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 402 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 406 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 407 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 408 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 410 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 411 "data/maps/PetalburgCity/scripts.pory"

# 412 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 413 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 414 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 415 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 416 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 420 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 423 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 424 "data/maps/PetalburgCity/scripts.pory"

# 425 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 437 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 438 "data/maps/PetalburgCity/scripts.pory"

# 439 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 442 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 444 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	step_end
# 453 "data/maps/PetalburgCity/scripts.pory"

# 454 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 456 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 461 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 462 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 463 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 464 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 465 "data/maps/PetalburgCity/scripts.pory"

# 466 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 467 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 468 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 469 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 470 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 471 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 472 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 475 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 477 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 478 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 479 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 480 "data/maps/PetalburgCity/scripts.pory"

# 481 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 482 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 483 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 484 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 485 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 486 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 487 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 488 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 489 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 490 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 491 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 492 "data/maps/PetalburgCity/scripts.pory"

# 493 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 494 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 495 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 496 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 497 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 498 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 499 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 500 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 501 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 502 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 503 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 504 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 505 "data/maps/PetalburgCity/scripts.pory"

# 506 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 507 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 508 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 509 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 510 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 511 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 512 "data/maps/PetalburgCity/scripts.pory"
	end
# 513 "data/maps/PetalburgCity/scripts.pory"

# 514 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 515 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 516 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 517 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 518 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 519 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 520 "data/maps/PetalburgCity/scripts.pory"
	end
# 521 "data/maps/PetalburgCity/scripts.pory"

# 522 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 523 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 524 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 525 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 526 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 527 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 528 "data/maps/PetalburgCity/scripts.pory"
	end
# 529 "data/maps/PetalburgCity/scripts.pory"

# 530 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 531 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 532 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 533 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 534 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 535 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 536 "data/maps/PetalburgCity/scripts.pory"
	end
# 537 "data/maps/PetalburgCity/scripts.pory"

# 538 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 539 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 540 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 541 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 542 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 543 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 544 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 545 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 546 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 547 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 548 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 549 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 550 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 551 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 552 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 553 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 554 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 555 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 556 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 557 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 558 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 559 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 560 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 561 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 562 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 563 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 564 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 565 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 566 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 567 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 568 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 569 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 570 "data/maps/PetalburgCity/scripts.pory"
	end
# 571 "data/maps/PetalburgCity/scripts.pory"

# 572 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 573 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 574 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 575 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 576 "data/maps/PetalburgCity/scripts.pory"
	return
# 577 "data/maps/PetalburgCity/scripts.pory"

# 578 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 579 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 580 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 581 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 582 "data/maps/PetalburgCity/scripts.pory"
	return
# 583 "data/maps/PetalburgCity/scripts.pory"

# 584 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 585 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 586 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 587 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 588 "data/maps/PetalburgCity/scripts.pory"
	return
# 589 "data/maps/PetalburgCity/scripts.pory"

# 590 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 591 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 592 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 593 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 594 "data/maps/PetalburgCity/scripts.pory"
	return
# 595 "data/maps/PetalburgCity/scripts.pory"

# 596 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 597 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 598 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 599 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 600 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 601 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 602 "data/maps/PetalburgCity/scripts.pory"

# 603 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 604 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 605 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 606 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 607 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 608 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 609 "data/maps/PetalburgCity/scripts.pory"

# 610 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 611 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 612 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 613 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 614 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 615 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 616 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 617 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 618 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 619 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 620 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 621 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 622 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 623 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 624 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 625 "data/maps/PetalburgCity/scripts.pory"

# 626 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 627 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 628 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 629 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 630 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 631 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 632 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 633 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 634 "data/maps/PetalburgCity/scripts.pory"

# 635 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 636 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 637 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 638 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 639 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 640 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 641 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 642 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 643 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 644 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 645 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 646 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 647 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 648 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 649 "data/maps/PetalburgCity/scripts.pory"

# 650 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 651 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 652 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 653 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 654 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 655 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 656 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 657 "data/maps/PetalburgCity/scripts.pory"

# 658 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 659 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 660 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 661 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 662 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 663 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 664 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 665 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 666 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 667 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 668 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 669 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 670 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 671 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 672 "data/maps/PetalburgCity/scripts.pory"

# 673 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 674 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 675 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 676 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 677 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 678 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 679 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 680 "data/maps/PetalburgCity/scripts.pory"

# 681 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 682 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 683 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 684 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 685 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 686 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 687 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 688 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 689 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 690 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 691 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 692 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 693 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 694 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 695 "data/maps/PetalburgCity/scripts.pory"

# 696 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 697 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 698 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 699 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 700 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 701 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 702 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 703 "data/maps/PetalburgCity/scripts.pory"

# 704 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 705 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 706 "data/maps/PetalburgCity/scripts.pory"
	end
# 707 "data/maps/PetalburgCity/scripts.pory"

# 708 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 709 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 710 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 711 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 712 "data/maps/PetalburgCity/scripts.pory"

# 713 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 714 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 715 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 716 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 717 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 718 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 719 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 720 "data/maps/PetalburgCity/scripts.pory"

# 721 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 722 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 723 "data/maps/PetalburgCity/scripts.pory"

# 724 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 725 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 726 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 727 "data/maps/PetalburgCity/scripts.pory"

# 728 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 729 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 730 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 731 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 732 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 733 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 734 "data/maps/PetalburgCity/scripts.pory"

# 735 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 736 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 737 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 738 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 739 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 740 "data/maps/PetalburgCity/scripts.pory"

# 741 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 742 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 743 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: NORMAN\l"
# 744 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 745 "data/maps/PetalburgCity/scripts.pory"

# 746 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 747 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 748 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 749 "data/maps/PetalburgCity/scripts.pory"

# 750 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 751 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 752 "data/maps/PetalburgCity/scripts.pory"

# 753 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 754 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 755 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 756 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 757 "data/maps/PetalburgCity/scripts.pory"

# 758 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 759 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 760 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 761 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 762 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 763 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 764 "data/maps/PetalburgCity/scripts.pory"

# 765 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 766 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 767 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 768 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"

PetalburgCity_EventScript_MerchantBrotherLeft::
# 774 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 775 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 777 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_PETALBURG_BROTHERS, PetalburgCity_EventScript_MerchantBrotherLeft_2
PetalburgCity_EventScript_MerchantBrotherLeft_1:
# 797 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherLeft_Text_5
# 798 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 800 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PetalburgCity_EventScript_MerchantBrotherLeft_5
# 804 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, PetalburgCity_EventScript_MerchantBrotherLeft_36
PetalburgCity_EventScript_MerchantBrotherLeft_34:
# 808 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, PetalburgCity_EventScript_MerchantBrotherLeft_33
PetalburgCity_EventScript_MerchantBrotherLeft_31:
# 812 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, PetalburgCity_EventScript_MerchantBrotherLeft_30
PetalburgCity_EventScript_MerchantBrotherLeft_28:
# 816 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, PetalburgCity_EventScript_MerchantBrotherLeft_27
PetalburgCity_EventScript_MerchantBrotherLeft_25:
# 820 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_EventScript_MerchantBrotherLeft_24
PetalburgCity_EventScript_MerchantBrotherLeft_22:
# 824 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, PetalburgCity_EventScript_MerchantBrotherLeft_21
PetalburgCity_EventScript_MerchantBrotherLeft_19:
# 828 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, PetalburgCity_EventScript_MerchantBrotherLeft_18
PetalburgCity_EventScript_MerchantBrotherLeft_16:
# 832 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, PetalburgCity_EventScript_MerchantBrotherLeft_15
PetalburgCity_EventScript_MerchantBrotherLeft_14:
# 838 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_PedroChamp
PetalburgCity_EventScript_MerchantBrotherLeft_4:
# 841 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherLeft_Text_6
# 842 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 843 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end

PetalburgCity_EventScript_MerchantBrotherLeft_2:
# 779 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 780 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 781 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherLeft_Text_0
# 782 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 783 "data/maps/PetalburgCity/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterLeft
# 784 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 785 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherLeft_Text_1
# 786 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 787 "data/maps/PetalburgCity/scripts.pory"
	applymovement 11, Common_Movement_FaceOriginalDirection
# 788 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherLeft_Text_2
# 789 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 790 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherLeft_Text_3
# 791 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 792 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherLeft_Text_4
# 793 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 794 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SPOKE_TO_PETALBURG_BROTHERS
	goto PetalburgCity_EventScript_MerchantBrotherLeft_1

PetalburgCity_EventScript_MerchantBrotherLeft_5:
# 802 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_PedroBadge0
	goto PetalburgCity_EventScript_MerchantBrotherLeft_4

PetalburgCity_EventScript_MerchantBrotherLeft_6:
# 806 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_PedroBadge1
	goto PetalburgCity_EventScript_MerchantBrotherLeft_4

PetalburgCity_EventScript_MerchantBrotherLeft_7:
# 810 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_PedroBadge2
	goto PetalburgCity_EventScript_MerchantBrotherLeft_4

PetalburgCity_EventScript_MerchantBrotherLeft_8:
# 814 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_PedroBadge3
	goto PetalburgCity_EventScript_MerchantBrotherLeft_4

PetalburgCity_EventScript_MerchantBrotherLeft_9:
# 818 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_PedroBadge4
	goto PetalburgCity_EventScript_MerchantBrotherLeft_4

PetalburgCity_EventScript_MerchantBrotherLeft_10:
# 822 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_PedroBadge5
	goto PetalburgCity_EventScript_MerchantBrotherLeft_4

PetalburgCity_EventScript_MerchantBrotherLeft_11:
# 826 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_PedroBadge6
	goto PetalburgCity_EventScript_MerchantBrotherLeft_4

PetalburgCity_EventScript_MerchantBrotherLeft_12:
# 830 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_PedroBadge7
	goto PetalburgCity_EventScript_MerchantBrotherLeft_4

PetalburgCity_EventScript_MerchantBrotherLeft_13:
# 834 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_PedroBadge8
	goto PetalburgCity_EventScript_MerchantBrotherLeft_4

PetalburgCity_EventScript_MerchantBrotherLeft_15:
# 832 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, PetalburgCity_EventScript_MerchantBrotherLeft_13
	goto PetalburgCity_EventScript_MerchantBrotherLeft_14

PetalburgCity_EventScript_MerchantBrotherLeft_18:
# 828 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, PetalburgCity_EventScript_MerchantBrotherLeft_12
	goto PetalburgCity_EventScript_MerchantBrotherLeft_16

PetalburgCity_EventScript_MerchantBrotherLeft_21:
# 824 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, PetalburgCity_EventScript_MerchantBrotherLeft_11
	goto PetalburgCity_EventScript_MerchantBrotherLeft_19

PetalburgCity_EventScript_MerchantBrotherLeft_24:
# 820 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, PetalburgCity_EventScript_MerchantBrotherLeft_10
	goto PetalburgCity_EventScript_MerchantBrotherLeft_22

PetalburgCity_EventScript_MerchantBrotherLeft_27:
# 816 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, PetalburgCity_EventScript_MerchantBrotherLeft_9
	goto PetalburgCity_EventScript_MerchantBrotherLeft_25

PetalburgCity_EventScript_MerchantBrotherLeft_30:
# 812 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, PetalburgCity_EventScript_MerchantBrotherLeft_8
	goto PetalburgCity_EventScript_MerchantBrotherLeft_28

PetalburgCity_EventScript_MerchantBrotherLeft_33:
# 808 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, PetalburgCity_EventScript_MerchantBrotherLeft_7
	goto PetalburgCity_EventScript_MerchantBrotherLeft_31

PetalburgCity_EventScript_MerchantBrotherLeft_36:
# 804 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, PetalburgCity_EventScript_MerchantBrotherLeft_6
	goto PetalburgCity_EventScript_MerchantBrotherLeft_34


	.align 2
# 848 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_PedroBadge0:
# 850 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_NONE

	.align 2
# 853 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_PedroBadge1:
# 855 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 856 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 859 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_PedroBadge2:
# 861 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 862 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 863 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
	.2byte ITEM_NONE

	.align 2
# 866 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_PedroBadge3:
# 868 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 869 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 870 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 871 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEART_SCALE
	.2byte ITEM_NONE

	.align 2
# 874 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_PedroBadge4:
# 876 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 877 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 878 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 879 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEART_SCALE
# 880 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

	.align 2
# 883 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_PedroBadge5:
# 885 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 886 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 887 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 888 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 889 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEART_SCALE
# 890 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

	.align 2
# 893 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_PedroBadge6:
# 895 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 896 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 897 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 898 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 899 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 900 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEART_SCALE
# 901 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

	.align 2
# 904 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_PedroBadge7:
# 906 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 907 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 908 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 909 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 910 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 911 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 912 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEART_SCALE
# 913 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

	.align 2
# 916 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_PedroBadge8:
# 918 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 919 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 920 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 921 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 922 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 923 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 924 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEART_SCALE
# 925 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PP_UP
# 926 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PP_MAX
	.2byte ITEM_NONE

	.align 2
# 929 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_PedroChamp:
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
	.2byte ITEM_EXP_CANDY_XL
# 937 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 938 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEART_SCALE
# 939 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PP_UP
# 940 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PP_MAX
	.2byte ITEM_NONE

PetalburgCity_EventScript_MerchantBrotherRight::
# 946 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 947 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 949 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_PETALBURG_BROTHERS, PetalburgCity_EventScript_MerchantBrotherRight_2
PetalburgCity_EventScript_MerchantBrotherRight_1:
# 969 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherRight_Text_5
# 970 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 972 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PetalburgCity_EventScript_MerchantBrotherRight_5
# 976 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, PetalburgCity_EventScript_MerchantBrotherRight_36
PetalburgCity_EventScript_MerchantBrotherRight_34:
# 980 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, PetalburgCity_EventScript_MerchantBrotherRight_33
PetalburgCity_EventScript_MerchantBrotherRight_31:
# 984 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, PetalburgCity_EventScript_MerchantBrotherRight_30
PetalburgCity_EventScript_MerchantBrotherRight_28:
# 988 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, PetalburgCity_EventScript_MerchantBrotherRight_27
PetalburgCity_EventScript_MerchantBrotherRight_25:
# 992 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_EventScript_MerchantBrotherRight_24
PetalburgCity_EventScript_MerchantBrotherRight_22:
# 996 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, PetalburgCity_EventScript_MerchantBrotherRight_21
PetalburgCity_EventScript_MerchantBrotherRight_19:
# 1000 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, PetalburgCity_EventScript_MerchantBrotherRight_18
PetalburgCity_EventScript_MerchantBrotherRight_16:
# 1004 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, PetalburgCity_EventScript_MerchantBrotherRight_15
PetalburgCity_EventScript_MerchantBrotherRight_14:
# 1010 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_NicoChamp
PetalburgCity_EventScript_MerchantBrotherRight_4:
# 1013 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherRight_Text_6
# 1014 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1015 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end

PetalburgCity_EventScript_MerchantBrotherRight_2:
# 951 "data/maps/PetalburgCity/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 952 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 953 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherRight_Text_0
# 954 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 955 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkInPlaceFasterRight
# 956 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 957 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherRight_Text_1
# 958 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 959 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_FaceOriginalDirection
# 960 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherRight_Text_2
# 961 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 962 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherRight_Text_3
# 963 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 964 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_MerchantBrotherRight_Text_4
# 965 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 966 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SPOKE_TO_PETALBURG_BROTHERS
	goto PetalburgCity_EventScript_MerchantBrotherRight_1

PetalburgCity_EventScript_MerchantBrotherRight_5:
# 974 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_NicoBadge0
	goto PetalburgCity_EventScript_MerchantBrotherRight_4

PetalburgCity_EventScript_MerchantBrotherRight_6:
# 978 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_NicoBadge1
	goto PetalburgCity_EventScript_MerchantBrotherRight_4

PetalburgCity_EventScript_MerchantBrotherRight_7:
# 982 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_NicoBadge2
	goto PetalburgCity_EventScript_MerchantBrotherRight_4

PetalburgCity_EventScript_MerchantBrotherRight_8:
# 986 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_NicoBadge3
	goto PetalburgCity_EventScript_MerchantBrotherRight_4

PetalburgCity_EventScript_MerchantBrotherRight_9:
# 990 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_NicoBadge4
	goto PetalburgCity_EventScript_MerchantBrotherRight_4

PetalburgCity_EventScript_MerchantBrotherRight_10:
# 994 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_NicoBadge5
	goto PetalburgCity_EventScript_MerchantBrotherRight_4

PetalburgCity_EventScript_MerchantBrotherRight_11:
# 998 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_NicoBadge6
	goto PetalburgCity_EventScript_MerchantBrotherRight_4

PetalburgCity_EventScript_MerchantBrotherRight_12:
# 1002 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_NicoBadge7
	goto PetalburgCity_EventScript_MerchantBrotherRight_4

PetalburgCity_EventScript_MerchantBrotherRight_13:
# 1006 "data/maps/PetalburgCity/scripts.pory"
	pokemart PetalburgCity_Mart_NicoBadge8
	goto PetalburgCity_EventScript_MerchantBrotherRight_4

PetalburgCity_EventScript_MerchantBrotherRight_15:
# 1004 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, PetalburgCity_EventScript_MerchantBrotherRight_13
	goto PetalburgCity_EventScript_MerchantBrotherRight_14

PetalburgCity_EventScript_MerchantBrotherRight_18:
# 1000 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, PetalburgCity_EventScript_MerchantBrotherRight_12
	goto PetalburgCity_EventScript_MerchantBrotherRight_16

PetalburgCity_EventScript_MerchantBrotherRight_21:
# 996 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, PetalburgCity_EventScript_MerchantBrotherRight_11
	goto PetalburgCity_EventScript_MerchantBrotherRight_19

PetalburgCity_EventScript_MerchantBrotherRight_24:
# 992 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, PetalburgCity_EventScript_MerchantBrotherRight_10
	goto PetalburgCity_EventScript_MerchantBrotherRight_22

PetalburgCity_EventScript_MerchantBrotherRight_27:
# 988 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, PetalburgCity_EventScript_MerchantBrotherRight_9
	goto PetalburgCity_EventScript_MerchantBrotherRight_25

PetalburgCity_EventScript_MerchantBrotherRight_30:
# 984 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, PetalburgCity_EventScript_MerchantBrotherRight_8
	goto PetalburgCity_EventScript_MerchantBrotherRight_28

PetalburgCity_EventScript_MerchantBrotherRight_33:
# 980 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, PetalburgCity_EventScript_MerchantBrotherRight_7
	goto PetalburgCity_EventScript_MerchantBrotherRight_31

PetalburgCity_EventScript_MerchantBrotherRight_36:
# 976 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, PetalburgCity_EventScript_MerchantBrotherRight_6
	goto PetalburgCity_EventScript_MerchantBrotherRight_34


	.align 2
# 1020 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_NicoBadge0:
# 1022 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1023 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
	.2byte ITEM_NONE

	.align 2
# 1026 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_NicoBadge1:
# 1028 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1029 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1030 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1031 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
	.2byte ITEM_NONE

	.align 2
# 1034 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_NicoBadge2:
# 1036 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 1037 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1038 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1039 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1040 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 1041 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
	.2byte ITEM_NONE

	.align 2
# 1044 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_NicoBadge3:
# 1046 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 1047 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1048 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1049 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1050 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 1051 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 1052 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_NONE

	.align 2
# 1055 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_NicoBadge4:
# 1057 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 1058 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1059 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1060 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1061 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 1062 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 1063 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 1064 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

	.align 2
# 1067 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_NicoBadge5:
# 1069 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 1070 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1071 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1072 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1073 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 1074 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 1075 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 1076 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 1077 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 1078 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

	.align 2
# 1081 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_NicoBadge6:
# 1083 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 1084 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1085 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1086 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1087 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 1088 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 1089 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HP_UP
# 1090 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 1091 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_IRON
# 1092 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 1093 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ZINC
# 1094 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CARBOS
# 1095 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 1096 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

	.align 2
# 1099 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_NicoBadge7:
# 1101 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 1102 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1103 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1104 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1105 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 1106 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 1107 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HP_UP
# 1108 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 1109 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_IRON
# 1110 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 1111 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ZINC
# 1112 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CARBOS
# 1113 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 1114 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 1115 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
	.2byte ITEM_NONE

	.align 2
# 1118 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_NicoBadge8:
# 1120 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 1121 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1122 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1123 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1124 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 1125 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 1126 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HP_UP
# 1127 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 1128 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_IRON
# 1129 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 1130 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ZINC
# 1131 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CARBOS
# 1132 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 1133 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 1134 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 1135 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 1136 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
	.2byte ITEM_NONE

	.align 2
# 1139 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Mart_NicoChamp:
# 1141 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 1142 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1143 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1144 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1145 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 1146 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 1147 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_HP_UP
# 1148 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 1149 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_IRON
# 1150 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 1151 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ZINC
# 1152 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CARBOS
# 1153 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 1154 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 1155 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 1156 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 1157 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 1158 "data/maps/PetalburgCity/scripts.pory"
	.2byte ITEM_LEFTOVERS
	.2byte ITEM_NONE

PetalburgCity_EventScript_MerchantBrotherLeft_Text_0:
# 781 "data/maps/PetalburgCity/scripts.pory"
	.string "Pedro: Aha! A new customer! I knew\n"
	.string "moving in front of the GYM would be\l"
	.string "good for business!$"

PetalburgCity_EventScript_MerchantBrotherLeft_Text_1:
# 785 "data/maps/PetalburgCity/scripts.pory"
	.string "Nico: Hehehe! Let's get down to\n"
	.string "business!$"

PetalburgCity_EventScript_MerchantBrotherLeft_Text_2:
# 788 "data/maps/PetalburgCity/scripts.pory"
	.string "Pedro: Way ahead of you! Welcome to the\n"
	.string "HAPPY TRAINER MERCHANT STAND!$"

PetalburgCity_EventScript_MerchantBrotherLeft_Text_3:
# 790 "data/maps/PetalburgCity/scripts.pory"
	.string "We sell goods to TRAINERS based on\n"
	.string "their GYM badges! More badges means\l"
	.string "more stuff for you, and more money- I\l"
	.string "mean, more business for us!\l"
	.string "I sell items to boost POKéMON battle\l"
	.string "skills, and Nico here sells goods to\l"
	.string "influence POKéMON stats.$"

PetalburgCity_EventScript_MerchantBrotherLeft_Text_4:
# 792 "data/maps/PetalburgCity/scripts.pory"
	.string "Pedro: Now, with all that out of the\n"
	.string "way...$"

PetalburgCity_EventScript_MerchantBrotherLeft_Text_5:
# 797 "data/maps/PetalburgCity/scripts.pory"
	.string "Pedro: Hey hey, TRAINER! What do you\n"
	.string "need?$"

PetalburgCity_EventScript_MerchantBrotherLeft_Text_6:
# 841 "data/maps/PetalburgCity/scripts.pory"
	.string "Come back soon, kid!$"

PetalburgCity_EventScript_MerchantBrotherRight_Text_0:
# 953 "data/maps/PetalburgCity/scripts.pory"
	.string "Nico: Woah, a customer! I knew you were\n"
	.string "right, Pedro!$"

PetalburgCity_EventScript_MerchantBrotherRight_Text_1:
# 957 "data/maps/PetalburgCity/scripts.pory"
	.string "Pedro: Fuahaha! I'm never wrong, am I?$"

PetalburgCity_EventScript_MerchantBrotherRight_Text_2:
# 960 "data/maps/PetalburgCity/scripts.pory"
	.string "Nico: Hehehe, never ever! TRAINER,\n"
	.string "welcome to the HAPPY TRAINER MERCHANT\l"
	.string "STAND!$"

PetalburgCity_EventScript_MerchantBrotherRight_Text_3:
# 962 "data/maps/PetalburgCity/scripts.pory"
	.string "We sell goods to TRAINERS based on\n"
	.string "their GYM badges! More badges means\l"
	.string "more stuff for you, and more work for\l"
	.string "us!\l"
	.string "I sell items that change POKéMON stats,\l"
	.string "and Pedro here sells items to boost\l"
	.string "battle power.$"

PetalburgCity_EventScript_MerchantBrotherRight_Text_4:
# 964 "data/maps/PetalburgCity/scripts.pory"
	.string "Nico: Now, with that out of the way...$"

PetalburgCity_EventScript_MerchantBrotherRight_Text_5:
# 969 "data/maps/PetalburgCity/scripts.pory"
	.string "Nico: What's good, TRAINER? How can we\n"
	.string "help you?$"

PetalburgCity_EventScript_MerchantBrotherRight_Text_6:
# 1013 "data/maps/PetalburgCity/scripts.pory"
	.string "Come back soon, dude!$"

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
	setobjectxyperm LOCALID_GYM_BOY, 11, 10
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
	msgbox_mugshot Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT, MUGSHOT_WALLY
# 47 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 48 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 49 "data/maps/PetalburgCity/scripts.pory"
	msgbox_mugshot Route102_Text_WallyIDidIt, MSGBOX_DEFAULT, MUGSHOT_WALLY
# 50 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 51 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 52 "data/maps/PetalburgCity/scripts.pory"
	msgbox_mugshot Route102_Text_LetsGoBack, MSGBOX_DEFAULT, MUGSHOT_WALLY
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
	msgbox_mugshot PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT, MUGSHOT_BOY1
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
	msgbox_mugshot PetalburgCity_Text_WhereIsWally, MSGBOX_NPC, MUGSHOT_WOMAN4
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
	walk_right
# 163 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_down
# 173 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_in_place_faster_right
# 184 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 185 "data/maps/PetalburgCity/scripts.pory"

# 186 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 187 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 191 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_down
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	delay_16
# 216 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 217 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 218 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 219 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 220 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 221 "data/maps/PetalburgCity/scripts.pory"

# 222 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 223 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 224 "data/maps/PetalburgCity/scripts.pory"
	end
# 225 "data/maps/PetalburgCity/scripts.pory"

# 226 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 227 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 228 "data/maps/PetalburgCity/scripts.pory"
	end
# 229 "data/maps/PetalburgCity/scripts.pory"

# 230 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 231 "data/maps/PetalburgCity/scripts.pory"
	msgbox_mugshot PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC, MUGSHOT_GENTLEMAN
# 232 "data/maps/PetalburgCity/scripts.pory"
	end
# 233 "data/maps/PetalburgCity/scripts.pory"

# 234 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 235 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 236 "data/maps/PetalburgCity/scripts.pory"
	end
# 237 "data/maps/PetalburgCity/scripts.pory"

# 238 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 239 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 240 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 241 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 242 "data/maps/PetalburgCity/scripts.pory"
	end
# 243 "data/maps/PetalburgCity/scripts.pory"

# 244 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 245 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 246 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 247 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 248 "data/maps/PetalburgCity/scripts.pory"
	end
# 249 "data/maps/PetalburgCity/scripts.pory"

# 250 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 251 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 252 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 253 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 254 "data/maps/PetalburgCity/scripts.pory"
	end
# 255 "data/maps/PetalburgCity/scripts.pory"

# 256 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 257 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 258 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 259 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 260 "data/maps/PetalburgCity/scripts.pory"
	end
# 261 "data/maps/PetalburgCity/scripts.pory"

# 262 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 263 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 264 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 265 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 266 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 267 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 268 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 269 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 270 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 271 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 272 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 273 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 274 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 275 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 276 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 277 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 278 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 279 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 280 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 281 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 282 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 283 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 284 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 285 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 286 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 287 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 288 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 289 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 290 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 291 "data/maps/PetalburgCity/scripts.pory"
	end
# 292 "data/maps/PetalburgCity/scripts.pory"

# 293 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 294 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 295 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 296 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 297 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 298 "data/maps/PetalburgCity/scripts.pory"
	return
# 299 "data/maps/PetalburgCity/scripts.pory"

# 300 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 301 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 302 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 303 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 304 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 305 "data/maps/PetalburgCity/scripts.pory"
	return
# 306 "data/maps/PetalburgCity/scripts.pory"

# 307 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 308 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 309 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 310 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 311 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 312 "data/maps/PetalburgCity/scripts.pory"
	return
# 313 "data/maps/PetalburgCity/scripts.pory"

# 314 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 315 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 316 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 317 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 318 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 319 "data/maps/PetalburgCity/scripts.pory"
	return
# 320 "data/maps/PetalburgCity/scripts.pory"

# 321 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 322 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 323 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 324 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 325 "data/maps/PetalburgCity/scripts.pory"
	return
# 326 "data/maps/PetalburgCity/scripts.pory"

# 327 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 328 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 329 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 330 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 331 "data/maps/PetalburgCity/scripts.pory"
	return
# 332 "data/maps/PetalburgCity/scripts.pory"

# 333 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 334 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 335 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 336 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 337 "data/maps/PetalburgCity/scripts.pory"
	return
# 338 "data/maps/PetalburgCity/scripts.pory"

# 339 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 340 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 341 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 342 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 343 "data/maps/PetalburgCity/scripts.pory"
	return
# 344 "data/maps/PetalburgCity/scripts.pory"

# 345 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 346 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 347 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 348 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 349 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 350 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 351 "data/maps/PetalburgCity/scripts.pory"

# 352 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 353 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 354 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 355 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 356 "data/maps/PetalburgCity/scripts.pory"

# 357 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 358 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 359 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 360 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 361 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 362 "data/maps/PetalburgCity/scripts.pory"

# 363 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 364 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 365 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 366 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 367 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 368 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 369 "data/maps/PetalburgCity/scripts.pory"

# 370 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 371 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 372 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 373 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 374 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 376 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 377 "data/maps/PetalburgCity/scripts.pory"

# 378 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 379 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 380 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 381 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 382 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 383 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 384 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 385 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 386 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 387 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 388 "data/maps/PetalburgCity/scripts.pory"

# 389 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
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
	walk_right
# 396 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 397 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 398 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 399 "data/maps/PetalburgCity/scripts.pory"

# 400 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
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
	walk_right
# 407 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 408 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 410 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 411 "data/maps/PetalburgCity/scripts.pory"

# 412 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
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
	walk_up
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 423 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 424 "data/maps/PetalburgCity/scripts.pory"

# 425 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 434 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 435 "data/maps/PetalburgCity/scripts.pory"

# 436 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 442 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 444 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 445 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 446 "data/maps/PetalburgCity/scripts.pory"

# 447 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 456 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 457 "data/maps/PetalburgCity/scripts.pory"

# 458 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 468 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 469 "data/maps/PetalburgCity/scripts.pory"

# 470 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
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
	walk_right
# 478 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 479 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 480 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 481 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 482 "data/maps/PetalburgCity/scripts.pory"

# 483 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 484 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 485 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 486 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 487 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 488 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 489 "data/maps/PetalburgCity/scripts.pory"
	end
# 490 "data/maps/PetalburgCity/scripts.pory"

# 491 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 492 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 493 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 494 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 495 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 496 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 497 "data/maps/PetalburgCity/scripts.pory"
	end
# 498 "data/maps/PetalburgCity/scripts.pory"

# 499 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 500 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 501 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 502 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 503 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 504 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 505 "data/maps/PetalburgCity/scripts.pory"
	end
# 506 "data/maps/PetalburgCity/scripts.pory"

# 507 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 508 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 509 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 510 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 511 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 512 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 513 "data/maps/PetalburgCity/scripts.pory"
	end
# 514 "data/maps/PetalburgCity/scripts.pory"

# 515 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 516 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 517 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 518 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 519 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 520 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 521 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 522 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 523 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 524 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 525 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 526 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 527 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 528 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 529 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 530 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 531 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 532 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 533 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 534 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 535 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 536 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 537 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 538 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 539 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 540 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 541 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 542 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 543 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 544 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 545 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 546 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 547 "data/maps/PetalburgCity/scripts.pory"
	end
# 548 "data/maps/PetalburgCity/scripts.pory"

# 549 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 550 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 551 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 552 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 553 "data/maps/PetalburgCity/scripts.pory"
	return
# 554 "data/maps/PetalburgCity/scripts.pory"

# 555 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 556 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 557 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 558 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 559 "data/maps/PetalburgCity/scripts.pory"
	return
# 560 "data/maps/PetalburgCity/scripts.pory"

# 561 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 562 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 563 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 564 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 565 "data/maps/PetalburgCity/scripts.pory"
	return
# 566 "data/maps/PetalburgCity/scripts.pory"

# 567 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 568 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 569 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 570 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 571 "data/maps/PetalburgCity/scripts.pory"
	return
# 572 "data/maps/PetalburgCity/scripts.pory"

# 573 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 574 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 575 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 576 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 577 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 578 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 579 "data/maps/PetalburgCity/scripts.pory"

# 580 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 581 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 582 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 583 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 584 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 585 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 586 "data/maps/PetalburgCity/scripts.pory"

# 587 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 588 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 589 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 590 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 591 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 592 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 593 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 594 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 595 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 596 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
PetalburgCity_Movement_PlayerWatchScottExit0:
# 604 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 605 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 606 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 607 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 608 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 609 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 610 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 611 "data/maps/PetalburgCity/scripts.pory"

# 612 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 613 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 625 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 626 "data/maps/PetalburgCity/scripts.pory"

# 627 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 628 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 629 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
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
PetalburgCity_Movement_ScottExit2:
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
PetalburgCity_Movement_PlayerWatchScottExit2:
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
PetalburgCity_Movement_ScottExit3:
# 659 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
PetalburgCity_Movement_PlayerWatchScottExit3:
# 674 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 675 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
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
PetalburgCity_EventScript_GymBoy::
# 682 "data/maps/PetalburgCity/scripts.pory"
	msgbox_mugshot PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC, MUGSHOT_BOY2
# 683 "data/maps/PetalburgCity/scripts.pory"
	end
# 684 "data/maps/PetalburgCity/scripts.pory"

# 685 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 686 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 687 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 688 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 689 "data/maps/PetalburgCity/scripts.pory"

# 690 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 691 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 692 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 693 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 694 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 695 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 696 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 697 "data/maps/PetalburgCity/scripts.pory"

# 698 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 699 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 700 "data/maps/PetalburgCity/scripts.pory"

# 701 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 702 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 703 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 704 "data/maps/PetalburgCity/scripts.pory"

# 705 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 706 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 707 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 708 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 709 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 710 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 711 "data/maps/PetalburgCity/scripts.pory"

# 712 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 713 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 714 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 715 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 716 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 717 "data/maps/PetalburgCity/scripts.pory"

# 718 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 719 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 720 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: NORMAN\l"
# 721 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 722 "data/maps/PetalburgCity/scripts.pory"

# 723 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 724 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 725 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 726 "data/maps/PetalburgCity/scripts.pory"

# 727 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 728 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 729 "data/maps/PetalburgCity/scripts.pory"

# 730 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 731 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 732 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 733 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 734 "data/maps/PetalburgCity/scripts.pory"

# 735 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 736 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 737 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 738 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 739 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 740 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 741 "data/maps/PetalburgCity/scripts.pory"

# 742 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 743 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 744 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 745 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"

PetalburgCity_Pokemon_Noibat::
# 750 "data/maps/PetalburgCity/scripts.pory"
	lock
# 751 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 752 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_NOIBAT, CRY_MODE_NORMAL
# 753 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Pokemon_Noibat_Text_0
# 754 "data/maps/PetalburgCity/scripts.pory"
	waitmoncry
# 755 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 756 "data/maps/PetalburgCity/scripts.pory"
	release
	end


PetalburgCity_Pokemon_Mudkip::
# 762 "data/maps/PetalburgCity/scripts.pory"
	lock
# 763 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 764 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_MUDKIP, CRY_MODE_NORMAL
# 765 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Pokemon_Mudkip_Text_0
# 766 "data/maps/PetalburgCity/scripts.pory"
	waitmoncry
# 767 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 768 "data/maps/PetalburgCity/scripts.pory"
	release
	end


PetalburgCity_Pokemon_Marill::
# 774 "data/maps/PetalburgCity/scripts.pory"
	lock
# 775 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 776 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_MARILL, CRY_MODE_NORMAL
# 777 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Pokemon_Marill_Text_0
# 778 "data/maps/PetalburgCity/scripts.pory"
	waitmoncry
# 779 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 780 "data/maps/PetalburgCity/scripts.pory"
	release
	end


PetalburgCity_Pokemon_Noibat_Text_0:
# 753 "data/maps/PetalburgCity/scripts.pory"
	.string "Graah!$"

PetalburgCity_Pokemon_Mudkip_Text_0:
# 765 "data/maps/PetalburgCity/scripts.pory"
	.string "Plap pla!$"

PetalburgCity_Pokemon_Marill_Text_0:
# 777 "data/maps/PetalburgCity/scripts.pory"
	.string "Bee blea!$"

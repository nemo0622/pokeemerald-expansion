# 1 "data/maps/Route111/scripts.pory"

# 2 "data/maps/Route111/scripts.pory"
.set LOCALID_VICTOR, 1
# 3 "data/maps/Route111/scripts.pory"
.set LOCALID_VICTORIA, 2
# 4 "data/maps/Route111/scripts.pory"
.set LOCALID_VIVI, 3
# 5 "data/maps/Route111/scripts.pory"
.set LOCALID_VICKY, 4
# 6 "data/maps/Route111/scripts.pory"
.set LOCALID_ROCK_SMASH_MAN, 46
# 7 "data/maps/Route111/scripts.pory"

# 8 "data/maps/Route111/scripts.pory"
@ Note: LOCALID_ROUTE111_PLAYER_FALLING is a local id for this map used elsewhere. It's defined in event_objects.h
# 9 "data/maps/Route111/scripts.pory"

# 10 "data/maps/Route111/scripts.pory"
Route111_MapScripts::
# 11 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route111_OnLoad
# 12 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OnTransition
# 13 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route111_OnWarp
# 14 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route111_OnFrame
# 15 "data/maps/Route111/scripts.pory"
	.byte 0
# 16 "data/maps/Route111/scripts.pory"

# 17 "data/maps/Route111/scripts.pory"
Route111_OnLoad:
# 18 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route111_EventScript_CloseDesertRuins
# 19 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_ShowTemporaryMirageTower
# 20 "data/maps/Route111/scripts.pory"
	end
# 21 "data/maps/Route111/scripts.pory"

# 22 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseDesertRuins::
# 23 "data/maps/Route111/scripts.pory"
	setmetatile 29, 86, METATILE_General_RockWall_RockBase, TRUE
# 24 "data/maps/Route111/scripts.pory"
	setmetatile 29, 87, METATILE_General_RockWall_SandBase, TRUE
# 25 "data/maps/Route111/scripts.pory"
	return
# 26 "data/maps/Route111/scripts.pory"

# 27 "data/maps/Route111/scripts.pory"
@ Show Mirage Tower just prior to disintegration. Mirage Tower is otherwise handled by the map layout
# 28 "data/maps/Route111/scripts.pory"
Route111_EventScript_ShowTemporaryMirageTower::
# 29 "data/maps/Route111/scripts.pory"
	setmetatile 18, 53, METATILE_Mauville_MirageTower_Tile0, FALSE
# 30 "data/maps/Route111/scripts.pory"
	setmetatile 19, 53, METATILE_Mauville_MirageTower_Tile1, FALSE
# 31 "data/maps/Route111/scripts.pory"
	setmetatile 20, 53, METATILE_Mauville_MirageTower_Tile2, FALSE
# 32 "data/maps/Route111/scripts.pory"
	setmetatile 18, 54, METATILE_Mauville_MirageTower_Tile3, FALSE
# 33 "data/maps/Route111/scripts.pory"
	setmetatile 19, 54, METATILE_Mauville_MirageTower_Tile4, FALSE
# 34 "data/maps/Route111/scripts.pory"
	setmetatile 20, 54, METATILE_Mauville_MirageTower_Tile5, FALSE
# 35 "data/maps/Route111/scripts.pory"
	setmetatile 18, 55, METATILE_Mauville_MirageTower_Tile6, FALSE
# 36 "data/maps/Route111/scripts.pory"
	setmetatile 19, 55, METATILE_Mauville_MirageTower_Tile7, FALSE
# 37 "data/maps/Route111/scripts.pory"
	setmetatile 20, 55, METATILE_Mauville_MirageTower_Tile8, FALSE
# 38 "data/maps/Route111/scripts.pory"
	setmetatile 18, 56, METATILE_Mauville_MirageTower_Tile9, FALSE
# 39 "data/maps/Route111/scripts.pory"
	setmetatile 19, 56, METATILE_Mauville_MirageTower_TileA, FALSE
# 40 "data/maps/Route111/scripts.pory"
	setmetatile 20, 56, METATILE_Mauville_MirageTower_TileB, FALSE
# 41 "data/maps/Route111/scripts.pory"
	setmetatile 18, 57, METATILE_Mauville_MirageTower_TileC, FALSE
# 42 "data/maps/Route111/scripts.pory"
	setmetatile 19, 57, METATILE_Mauville_MirageTower_TileD, FALSE
# 43 "data/maps/Route111/scripts.pory"
	setmetatile 20, 57, METATILE_Mauville_MirageTower_TileE, FALSE
# 44 "data/maps/Route111/scripts.pory"
	setmetatile 18, 58, METATILE_Mauville_MirageTower_TileF, FALSE
# 45 "data/maps/Route111/scripts.pory"
	setmetatile 19, 58, METATILE_Mauville_MirageTower_Tile10, FALSE
# 46 "data/maps/Route111/scripts.pory"
	setmetatile 20, 58, METATILE_Mauville_MirageTower_Tile11, FALSE
# 47 "data/maps/Route111/scripts.pory"
	return
# 48 "data/maps/Route111/scripts.pory"

# 49 "data/maps/Route111/scripts.pory"
Route111_OnTransition:
# 50 "data/maps/Route111/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 51 "data/maps/Route111/scripts.pory"
	special SetMirageTowerVisibility
# 52 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_SetLayoutNoMirageTower
# 53 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_SetFallingPlayerGfx
# 54 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_SetMirageTowerGone
# 55 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CheckSetSandstorm
# 56 "data/maps/Route111/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 57 "data/maps/Route111/scripts.pory"
	goto_if_not_defeated TRAINER_VICKY, Route111_EventScript_SetWinstratesNotDefeated
# 58 "data/maps/Route111/scripts.pory"
	end
# 59 "data/maps/Route111/scripts.pory"

# 60 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx::
# 61 "data/maps/Route111/scripts.pory"
	checkplayergender
# 62 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route111_EventScript_SetFallingPlayerGfxMale
# 63 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route111_EventScript_SetFallingPlayerGfxFemale
# 64 "data/maps/Route111/scripts.pory"
	return
# 65 "data/maps/Route111/scripts.pory"

# 66 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxMale::
# 67 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 68 "data/maps/Route111/scripts.pory"
	return
# 69 "data/maps/Route111/scripts.pory"

# 70 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxFemale::
# 71 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 72 "data/maps/Route111/scripts.pory"
	return
# 73 "data/maps/Route111/scripts.pory"

# 74 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm::
# 75 "data/maps/Route111/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 76 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_1, 34, Route111_EventScript_EndCheckSetSandstorm
# 77 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 107, Route111_EventScript_EndCheckSetSandstorm
# 78 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 72, Route111_EventScript_SetSandstorm
# 79 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_0, 2000, Route111_EventScript_EndCheckSetSandstorm
# 80 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_0, 8, Route111_EventScript_EndCheckSetSandstorm
# 81 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetSandstorm::
# 82 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 83 "data/maps/Route111/scripts.pory"
Route111_EventScript_EndCheckSetSandstorm::
# 84 "data/maps/Route111/scripts.pory"
	return
# 85 "data/maps/Route111/scripts.pory"

# 86 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetWinstratesNotDefeated::
# 87 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 88 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 89 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 90 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 91 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 92 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 93 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
# 94 "data/maps/Route111/scripts.pory"
	end
# 95 "data/maps/Route111/scripts.pory"

# 96 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetLayoutNoMirageTower::
# 97 "data/maps/Route111/scripts.pory"
	@ setmaplayoutindex LAYOUT_ROUTE111_NO_MIRAGE_TOWER
# 98 "data/maps/Route111/scripts.pory"
	setmetatile 18, 58, METATILE_General_SandPit_Center, FALSE
# 99 "data/maps/Route111/scripts.pory"
	setmetatile 19, 58, METATILE_General_SandPit_Center, FALSE
# 100 "data/maps/Route111/scripts.pory"
	setmetatile 20, 58, METATILE_General_SandPit_Center, FALSE
# 101 "data/maps/Route111/scripts.pory"
	setmetatile 18, 57, METATILE_Mauville_DeepSand_BottomMid, FALSE
# 102 "data/maps/Route111/scripts.pory"
	setmetatile 19, 57, METATILE_Mauville_DeepSand_BottomMid, FALSE
# 103 "data/maps/Route111/scripts.pory"
	setmetatile 20, 57, METATILE_Mauville_DeepSand_BottomMid, FALSE
# 104 "data/maps/Route111/scripts.pory"
	setmetatile 18, 56, METATILE_Mauville_DeepSand_Center, FALSE
# 105 "data/maps/Route111/scripts.pory"
	setmetatile 19, 56, METATILE_Mauville_DeepSand_Center, FALSE
# 106 "data/maps/Route111/scripts.pory"
	setmetatile 20, 56, METATILE_Mauville_DeepSand_Center, FALSE
# 107 "data/maps/Route111/scripts.pory"
	setmetatile 18, 55, METATILE_Mauville_DeepSand_Center, FALSE
# 108 "data/maps/Route111/scripts.pory"
	setmetatile 19, 55, METATILE_Mauville_DeepSand_Center, FALSE
# 109 "data/maps/Route111/scripts.pory"
	setmetatile 20, 55, METATILE_Mauville_DeepSand_Center, FALSE
# 110 "data/maps/Route111/scripts.pory"
	setmetatile 18, 54, METATILE_Mauville_DeepSand_Center, FALSE
# 111 "data/maps/Route111/scripts.pory"
	setmetatile 19, 54, METATILE_Mauville_DeepSand_Center, FALSE
# 112 "data/maps/Route111/scripts.pory"
	setmetatile 20, 54, METATILE_Mauville_DeepSand_Center, FALSE
# 113 "data/maps/Route111/scripts.pory"
	setmetatile 18, 53, METATILE_Mauville_DeepSand_Center, FALSE
# 114 "data/maps/Route111/scripts.pory"
	setmetatile 19, 53, METATILE_Mauville_DeepSand_Center, FALSE
# 115 "data/maps/Route111/scripts.pory"
	setmetatile 20, 53, METATILE_Mauville_DeepSand_Center, FALSE
# 116 "data/maps/Route111/scripts.pory"
	return
# 117 "data/maps/Route111/scripts.pory"

# 118 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetMirageTowerGone::
# 119 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 3
# 120 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_SetLayoutNoMirageTower
# 121 "data/maps/Route111/scripts.pory"
	return
# 122 "data/maps/Route111/scripts.pory"

# 123 "data/maps/Route111/scripts.pory"
Route111_OnWarp:
# 124 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_HidePlayerForMirageTower
# 125 "data/maps/Route111/scripts.pory"
	.2byte 0
# 126 "data/maps/Route111/scripts.pory"

# 127 "data/maps/Route111/scripts.pory"
Route111_EventScript_HidePlayerForMirageTower::
# 128 "data/maps/Route111/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 129 "data/maps/Route111/scripts.pory"
	end
# 130 "data/maps/Route111/scripts.pory"

# 131 "data/maps/Route111/scripts.pory"
Route111_OnFrame:
# 132 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
# 133 "data/maps/Route111/scripts.pory"
	.2byte 0
# 134 "data/maps/Route111/scripts.pory"

# 135 "data/maps/Route111/scripts.pory"
Route111_EventScript_MirageTowerDisappear::
# 136 "data/maps/Route111/scripts.pory"
	lockall
# 137 "data/maps/Route111/scripts.pory"
	special StartMirageTowerShake
# 138 "data/maps/Route111/scripts.pory"
	waitstate
# 139 "data/maps/Route111/scripts.pory"
	delay 24
# 140 "data/maps/Route111/scripts.pory"
	playse SE_FALL
# 141 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_PLAYER_FALLING
# 142 "data/maps/Route111/scripts.pory"
	special StartPlayerDescendMirageTower
# 143 "data/maps/Route111/scripts.pory"
	waitstate
# 144 "data/maps/Route111/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 145 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_PLAYER_FALLING
# 146 "data/maps/Route111/scripts.pory"
	delay 16
# 147 "data/maps/Route111/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 148 "data/maps/Route111/scripts.pory"
	delay 16
# 149 "data/maps/Route111/scripts.pory"
	special StartMirageTowerDisintegration
# 150 "data/maps/Route111/scripts.pory"
	waitstate
# 151 "data/maps/Route111/scripts.pory"
	special StartMirageTowerFossilFallAndSink
# 152 "data/maps/Route111/scripts.pory"
	waitstate
# 153 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 2
# 154 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 155 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, Route111_EventScript_RootFossilDisappeared
# 156 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ClawFossilDisappeared, MSGBOX_DEFAULT
# 157 "data/maps/Route111/scripts.pory"
	releaseall
# 158 "data/maps/Route111/scripts.pory"
	end
# 159 "data/maps/Route111/scripts.pory"

# 160 "data/maps/Route111/scripts.pory"
Route111_EventScript_RootFossilDisappeared::
# 161 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RootFossilDisappeared, MSGBOX_DEFAULT
# 162 "data/maps/Route111/scripts.pory"
	releaseall
# 163 "data/maps/Route111/scripts.pory"
	end
# 164 "data/maps/Route111/scripts.pory"

# 165 "data/maps/Route111/scripts.pory"
@ Unused
# 166 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall::
# 167 "data/maps/Route111/scripts.pory"
	lock_anim
# 168 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 169 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 170 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 171 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 172 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 173 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 174 "data/maps/Route111/scripts.pory"
	step_end
# 175 "data/maps/Route111/scripts.pory"

# 176 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl::
# 177 "data/maps/Route111/scripts.pory"
	lock
# 178 "data/maps/Route111/scripts.pory"
	faceplayer
# 179 "data/maps/Route111/scripts.pory"
	dotimebasedevents
# 180 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_ReceivedBerry
# 181 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
# 182 "data/maps/Route111/scripts.pory"
	giveitem ITEM_RAZZ_BERRY
# 183 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 184 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 185 "data/maps/Route111/scripts.pory"
	special GetPlayerBigGuyGirlString
# 186 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
# 187 "data/maps/Route111/scripts.pory"
	release
# 188 "data/maps/Route111/scripts.pory"
	end
# 189 "data/maps/Route111/scripts.pory"

# 190 "data/maps/Route111/scripts.pory"
Route111_EventScript_ReceivedBerry::
# 191 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
# 192 "data/maps/Route111/scripts.pory"
	release
# 193 "data/maps/Route111/scripts.pory"
	end
# 194 "data/maps/Route111/scripts.pory"

# 195 "data/maps/Route111/scripts.pory"
@ Unused
# 196 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerUp::
# 197 "data/maps/Route111/scripts.pory"
	lockall
# 198 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 199 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 200 "data/maps/Route111/scripts.pory"
	end
# 201 "data/maps/Route111/scripts.pory"

# 202 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerDown::
# 203 "data/maps/Route111/scripts.pory"
	lockall
# 204 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 205 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 206 "data/maps/Route111/scripts.pory"
	end
# 207 "data/maps/Route111/scripts.pory"

# 208 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerLeft::
# 209 "data/maps/Route111/scripts.pory"
	lockall
# 210 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 211 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 212 "data/maps/Route111/scripts.pory"
	end
# 213 "data/maps/Route111/scripts.pory"

# 214 "data/maps/Route111/scripts.pory"
@ Unused
# 215 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerRight::
# 216 "data/maps/Route111/scripts.pory"
	lockall
# 217 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 218 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 219 "data/maps/Route111/scripts.pory"
	end
# 220 "data/maps/Route111/scripts.pory"

# 221 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger::
# 222 "data/maps/Route111/scripts.pory"
	checkitem ITEM_GO_GOGGLES
# 223 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_PreventRouteAccess
# 224 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
# 225 "data/maps/Route111/scripts.pory"
	releaseall
# 226 "data/maps/Route111/scripts.pory"
	end
# 227 "data/maps/Route111/scripts.pory"

# 228 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess::
# 229 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 230 "data/maps/Route111/scripts.pory"
	closemessage
# 231 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 0, Route111_EventScript_PushUpFromRoute
# 232 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 1, Route111_EventScript_PushDownFromRoute
# 233 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 2, Route111_EventScript_PushLeftFromRoute
# 234 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 3, Route111_EventScript_PushRightFromRoute
# 235 "data/maps/Route111/scripts.pory"
	releaseall
# 236 "data/maps/Route111/scripts.pory"
	end
# 237 "data/maps/Route111/scripts.pory"

# 238 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushUpFromRoute::
# 239 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushUpFromRoute
# 240 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 241 "data/maps/Route111/scripts.pory"
	return
# 242 "data/maps/Route111/scripts.pory"

# 243 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushDownFromRoute::
# 244 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushDownFromRoute
# 245 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 246 "data/maps/Route111/scripts.pory"
	return
# 247 "data/maps/Route111/scripts.pory"

# 248 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushLeftFromRoute::
# 249 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushLeftFromRoute
# 250 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 251 "data/maps/Route111/scripts.pory"
	return
# 252 "data/maps/Route111/scripts.pory"

# 253 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushRightFromRoute::
# 254 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushRightFromRoute
# 255 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 256 "data/maps/Route111/scripts.pory"
	return
# 257 "data/maps/Route111/scripts.pory"

# 258 "data/maps/Route111/scripts.pory"
Route111_Movement_PushUpFromRoute:
# 259 "data/maps/Route111/scripts.pory"
	walk_up
# 260 "data/maps/Route111/scripts.pory"
	step_end
# 261 "data/maps/Route111/scripts.pory"

# 262 "data/maps/Route111/scripts.pory"
Route111_Movement_PushDownFromRoute:
# 263 "data/maps/Route111/scripts.pory"
	walk_down
# 264 "data/maps/Route111/scripts.pory"
	step_end
# 265 "data/maps/Route111/scripts.pory"

# 266 "data/maps/Route111/scripts.pory"
Route111_Movement_PushLeftFromRoute:
# 267 "data/maps/Route111/scripts.pory"
	walk_left
# 268 "data/maps/Route111/scripts.pory"
	step_end
# 269 "data/maps/Route111/scripts.pory"

# 270 "data/maps/Route111/scripts.pory"
Route111_Movement_PushRightFromRoute:
# 271 "data/maps/Route111/scripts.pory"
	walk_right
# 272 "data/maps/Route111/scripts.pory"
	step_end
# 273 "data/maps/Route111/scripts.pory"

# 274 "data/maps/Route111/scripts.pory"
Route111_EventScript_SunTrigger::
# 275 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 276 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 277 "data/maps/Route111/scripts.pory"
	doweather
# 278 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
# 279 "data/maps/Route111/scripts.pory"
	end
# 280 "data/maps/Route111/scripts.pory"

# 281 "data/maps/Route111/scripts.pory"
Route111_EventScript_SandstormTrigger::
# 282 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 283 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DESERT
# 284 "data/maps/Route111/scripts.pory"
	doweather
# 285 "data/maps/Route111/scripts.pory"
	end
# 286 "data/maps/Route111/scripts.pory"

# 287 "data/maps/Route111/scripts.pory"
Route111_EventScript_Victor::
# 288 "data/maps/Route111/scripts.pory"
	lock
# 289 "data/maps/Route111/scripts.pory"
	faceplayer
# 290 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 291 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 292 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_BattleWinstrates
# 293 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
# 294 "data/maps/Route111/scripts.pory"
	release
# 295 "data/maps/Route111/scripts.pory"
	end
# 296 "data/maps/Route111/scripts.pory"

# 297 "data/maps/Route111/scripts.pory"
Route111_EventScript_BattleWinstrates::
# 298 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 299 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 300 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTOR, Common_Movement_WalkInPlaceFasterUp
# 301 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 302 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 303 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 304 "data/maps/Route111/scripts.pory"
	closemessage
# 305 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTOR, Route111_Movement_WinstrateEnterHouse
# 306 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 307 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICTOR
# 308 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 309 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 310 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 311 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 312 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VICTORIA
# 313 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Route111_Movement_WinstrateExitHouse
# 314 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 315 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 316 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 317 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 318 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Common_Movement_WalkInPlaceFasterUp
# 319 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 320 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 321 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 322 "data/maps/Route111/scripts.pory"
	closemessage
# 323 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Route111_Movement_WinstrateEnterHouse
# 324 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 325 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICTORIA
# 326 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 327 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 328 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 329 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 330 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VIVI
# 331 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Route111_Movement_WinstrateExitHouse
# 332 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 333 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 334 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 335 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 336 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Common_Movement_WalkInPlaceFasterUp
# 337 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 338 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 339 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 340 "data/maps/Route111/scripts.pory"
	closemessage
# 341 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Route111_Movement_WinstrateEnterHouse
# 342 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 343 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VIVI
# 344 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 345 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 346 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 347 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 348 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VICKY
# 349 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Route111_Movement_WinstrateExitHouse
# 350 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 351 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 352 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 353 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
# 354 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 355 "data/maps/Route111/scripts.pory"
	closemessage
# 356 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Common_Movement_WalkInPlaceFasterUp
# 357 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 358 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 359 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Route111_Movement_WinstrateEnterHouse
# 360 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 361 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICKY
# 362 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 363 "data/maps/Route111/scripts.pory"
	release
# 364 "data/maps/Route111/scripts.pory"
	end
# 365 "data/maps/Route111/scripts.pory"

# 366 "data/maps/Route111/scripts.pory"
Route111_EventScript_OpenWinstrateDoor::
# 367 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 368 "data/maps/Route111/scripts.pory"
	waitdooranim
# 369 "data/maps/Route111/scripts.pory"
	return
# 370 "data/maps/Route111/scripts.pory"

# 371 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseWinstrateDoor::
# 372 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 373 "data/maps/Route111/scripts.pory"
	waitdooranim
# 374 "data/maps/Route111/scripts.pory"
	return
# 375 "data/maps/Route111/scripts.pory"

# 376 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateEnterHouse:
# 377 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_up
# 378 "data/maps/Route111/scripts.pory"
	walk_up
# 379 "data/maps/Route111/scripts.pory"
	step_end
# 380 "data/maps/Route111/scripts.pory"

# 381 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateExitHouse:
# 382 "data/maps/Route111/scripts.pory"
	walk_down
# 383 "data/maps/Route111/scripts.pory"
	step_end
# 384 "data/maps/Route111/scripts.pory"

# 385 "data/maps/Route111/scripts.pory"
Route111_Movement_WaitForNextWinstrate:
# 386 "data/maps/Route111/scripts.pory"
	delay_16
# 387 "data/maps/Route111/scripts.pory"
	delay_16
# 388 "data/maps/Route111/scripts.pory"
	delay_16
# 389 "data/maps/Route111/scripts.pory"
	step_end
# 390 "data/maps/Route111/scripts.pory"

# 391 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSignMauville::
# 392 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
# 393 "data/maps/Route111/scripts.pory"
	end
# 394 "data/maps/Route111/scripts.pory"

# 395 "data/maps/Route111/scripts.pory"
Route111_EventScript_WinstrateHouseSign::
# 396 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
# 397 "data/maps/Route111/scripts.pory"
	end
# 398 "data/maps/Route111/scripts.pory"

# 399 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign112::
# 400 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
# 401 "data/maps/Route111/scripts.pory"
	end
# 402 "data/maps/Route111/scripts.pory"

# 403 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign113::
# 404 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
# 405 "data/maps/Route111/scripts.pory"
	end
# 406 "data/maps/Route111/scripts.pory"

# 407 "data/maps/Route111/scripts.pory"
Route111_EventScript_OldLadysRestStopSign::
# 408 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
# 409 "data/maps/Route111/scripts.pory"
	end
# 410 "data/maps/Route111/scripts.pory"

# 411 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerTipsSpAtkSpDef::
# 412 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
# 413 "data/maps/Route111/scripts.pory"
	end
# 414 "data/maps/Route111/scripts.pory"

# 415 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man1::
# 416 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
# 417 "data/maps/Route111/scripts.pory"
	end
# 418 "data/maps/Route111/scripts.pory"

# 419 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man2::
# 420 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
# 421 "data/maps/Route111/scripts.pory"
	end
# 422 "data/maps/Route111/scripts.pory"

# 423 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker::
# 424 "data/maps/Route111/scripts.pory"
	lock
# 425 "data/maps/Route111/scripts.pory"
	faceplayer
# 426 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 3, Route111_EventScript_HikerMirageTowerGone
# 427 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_HikerMirageTowerDisintegrated
# 428 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_HikerMirageTowerVisible
# 429 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
# 430 "data/maps/Route111/scripts.pory"
	release
# 431 "data/maps/Route111/scripts.pory"
	end
# 432 "data/maps/Route111/scripts.pory"

# 433 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerGone::
# 434 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
# 435 "data/maps/Route111/scripts.pory"
	release
# 436 "data/maps/Route111/scripts.pory"
	end
# 437 "data/maps/Route111/scripts.pory"

# 438 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerDisintegrated::
# 439 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
# 440 "data/maps/Route111/scripts.pory"
	release
# 441 "data/maps/Route111/scripts.pory"
	end
# 442 "data/maps/Route111/scripts.pory"

# 443 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerVisible::
# 444 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
# 445 "data/maps/Route111/scripts.pory"
	release
# 446 "data/maps/Route111/scripts.pory"
	end
# 447 "data/maps/Route111/scripts.pory"

# 448 "data/maps/Route111/scripts.pory"
Route111_EventScript_RockSmashTipFatMan::
# 449 "data/maps/Route111/scripts.pory"
	lockall
# 450 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 451 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 452 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 453 "data/maps/Route111/scripts.pory"
	closemessage
# 454 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 455 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 456 "data/maps/Route111/scripts.pory"
	releaseall
# 457 "data/maps/Route111/scripts.pory"
	end
# 458 "data/maps/Route111/scripts.pory"

# 459 "data/maps/Route111/scripts.pory"
Route111_EventScript_Drew::
# 460 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 461 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 462 "data/maps/Route111/scripts.pory"
	end
# 463 "data/maps/Route111/scripts.pory"

# 464 "data/maps/Route111/scripts.pory"
Route111_EventScript_Heidi::
# 465 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 466 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 467 "data/maps/Route111/scripts.pory"
	end
# 468 "data/maps/Route111/scripts.pory"

# 469 "data/maps/Route111/scripts.pory"
Route111_EventScript_Beau::
# 470 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 471 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 472 "data/maps/Route111/scripts.pory"
	end
# 473 "data/maps/Route111/scripts.pory"

# 474 "data/maps/Route111/scripts.pory"
Route111_EventScript_Becky::
# 475 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 476 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 477 "data/maps/Route111/scripts.pory"
	end
# 478 "data/maps/Route111/scripts.pory"

# 479 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty::
# 480 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat, Route111_EventScript_RegisterDusty
# 481 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 482 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchDusty
# 483 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
# 484 "data/maps/Route111/scripts.pory"
	release
# 485 "data/maps/Route111/scripts.pory"
	end
# 486 "data/maps/Route111/scripts.pory"

# 487 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterDusty::
# 488 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 489 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 490 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 491 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
# 492 "data/maps/Route111/scripts.pory"
	release
# 493 "data/maps/Route111/scripts.pory"
	end
# 494 "data/maps/Route111/scripts.pory"

# 495 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchDusty::
# 496 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 497 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
# 498 "data/maps/Route111/scripts.pory"
	end
# 499 "data/maps/Route111/scripts.pory"

# 500 "data/maps/Route111/scripts.pory"
Route111_EventScript_Travis::
# 501 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 502 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 503 "data/maps/Route111/scripts.pory"
	end
# 504 "data/maps/Route111/scripts.pory"

# 505 "data/maps/Route111/scripts.pory"
Route111_EventScript_Irene::
# 506 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 507 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
# 508 "data/maps/Route111/scripts.pory"
	end
# 509 "data/maps/Route111/scripts.pory"

# 510 "data/maps/Route111/scripts.pory"
Route111_EventScript_Daisuke::
# 511 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
# 512 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 513 "data/maps/Route111/scripts.pory"
	end
# 514 "data/maps/Route111/scripts.pory"

# 515 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton::
# 516 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat, Route111_EventScript_RegisterWilton
# 517 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 518 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchWilton
# 519 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
# 520 "data/maps/Route111/scripts.pory"
	release
# 521 "data/maps/Route111/scripts.pory"
	end
# 522 "data/maps/Route111/scripts.pory"

# 523 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterWilton::
# 524 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 525 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 526 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 527 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
# 528 "data/maps/Route111/scripts.pory"
	release
# 529 "data/maps/Route111/scripts.pory"
	end
# 530 "data/maps/Route111/scripts.pory"

# 531 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchWilton::
# 532 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 533 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
# 534 "data/maps/Route111/scripts.pory"
	end
# 535 "data/maps/Route111/scripts.pory"

# 536 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke::
# 537 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat, Route111_EventScript_RegisterBrooke
# 538 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 539 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchBrooke
# 540 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
# 541 "data/maps/Route111/scripts.pory"
	release
# 542 "data/maps/Route111/scripts.pory"
	end
# 543 "data/maps/Route111/scripts.pory"

# 544 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterBrooke::
# 545 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 546 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 547 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 548 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
# 549 "data/maps/Route111/scripts.pory"
	release
# 550 "data/maps/Route111/scripts.pory"
	end
# 551 "data/maps/Route111/scripts.pory"

# 552 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchBrooke::
# 553 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 554 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
# 555 "data/maps/Route111/scripts.pory"
	end
# 556 "data/maps/Route111/scripts.pory"

# 557 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hayden::
# 558 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 559 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
# 560 "data/maps/Route111/scripts.pory"
	end
# 561 "data/maps/Route111/scripts.pory"

# 562 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bianca::
# 563 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 564 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
# 565 "data/maps/Route111/scripts.pory"
	end
# 566 "data/maps/Route111/scripts.pory"

# 567 "data/maps/Route111/scripts.pory"
Route111_EventScript_Tyron::
# 568 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 569 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 570 "data/maps/Route111/scripts.pory"
	end
# 571 "data/maps/Route111/scripts.pory"

# 572 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celina::
# 573 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 574 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
# 575 "data/maps/Route111/scripts.pory"
	end
# 576 "data/maps/Route111/scripts.pory"

# 577 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celia::
# 578 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 579 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
# 580 "data/maps/Route111/scripts.pory"
	end
# 581 "data/maps/Route111/scripts.pory"

# 582 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bryan::
# 583 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
# 584 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
# 585 "data/maps/Route111/scripts.pory"
	end
# 586 "data/maps/Route111/scripts.pory"

# 587 "data/maps/Route111/scripts.pory"
Route111_EventScript_Branden::
# 588 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 589 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
# 590 "data/maps/Route111/scripts.pory"
	end
# 591 "data/maps/Route111/scripts.pory"

# 592 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerHillSign::
# 593 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
# 594 "data/maps/Route111/scripts.pory"
	end
# 595 "data/maps/Route111/scripts.pory"

# 596 "data/maps/Route111/scripts.pory"
Route111_Text_BattleOurFamily:
# 597 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
# 598 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 599 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 600 "data/maps/Route111/scripts.pory"
	.string "POKéMON battles?$"
# 601 "data/maps/Route111/scripts.pory"

# 602 "data/maps/Route111/scripts.pory"
Route111_Text_IsThatSo:
# 603 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
# 604 "data/maps/Route111/scripts.pory"
	.string "Drop in, if you change your mind!$"
# 605 "data/maps/Route111/scripts.pory"

# 606 "data/maps/Route111/scripts.pory"
Route111_Text_VictorIntro:
# 607 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"
# 608 "data/maps/Route111/scripts.pory"

# 609 "data/maps/Route111/scripts.pory"
Route111_Text_VictorDefeat:
# 610 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
# 611 "data/maps/Route111/scripts.pory"
	.string "You're a lot tougher than I expected!$"
# 612 "data/maps/Route111/scripts.pory"

# 613 "data/maps/Route111/scripts.pory"
Route111_Text_VictorPostBattle:
# 614 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
# 615 "data/maps/Route111/scripts.pory"
	.string "I've found a pretty strong TRAINER!$"
# 616 "data/maps/Route111/scripts.pory"

# 617 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaIntro:
# 618 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
# 619 "data/maps/Route111/scripts.pory"
	.string "You must be quite the TRAINER to beat\n"
# 620 "data/maps/Route111/scripts.pory"
	.string "my husband, though.\p"
# 621 "data/maps/Route111/scripts.pory"
	.string "It's my turn to battle now!$"
# 622 "data/maps/Route111/scripts.pory"

# 623 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaDefeat:
# 624 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
# 625 "data/maps/Route111/scripts.pory"
	.string "I can't get over how strong you are!$"
# 626 "data/maps/Route111/scripts.pory"

# 627 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaPostBattle:
# 628 "data/maps/Route111/scripts.pory"
	.string "There's a strong TRAINER here!\n"
# 629 "data/maps/Route111/scripts.pory"
	.string "This one's really strong!$"
# 630 "data/maps/Route111/scripts.pory"

# 631 "data/maps/Route111/scripts.pory"
Route111_Text_ViviIntro:
# 632 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
# 633 "data/maps/Route111/scripts.pory"
	.string "But I'm strong, too!\n"
# 634 "data/maps/Route111/scripts.pory"
	.string "Really! Honestly!$"
# 635 "data/maps/Route111/scripts.pory"

# 636 "data/maps/Route111/scripts.pory"
Route111_Text_ViviDefeat:
# 637 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"
# 638 "data/maps/Route111/scripts.pory"

# 639 "data/maps/Route111/scripts.pory"
Route111_Text_ViviPostBattle:
# 640 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
# 641 "data/maps/Route111/scripts.pory"
	.string "…Snivel… Grandma!$"
# 642 "data/maps/Route111/scripts.pory"

# 643 "data/maps/Route111/scripts.pory"
Route111_Text_VickyIntro:
# 644 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
# 645 "data/maps/Route111/scripts.pory"
	.string "cry!\p"
# 646 "data/maps/Route111/scripts.pory"
	.string "For that, I'm going to smack you!\n"
# 647 "data/maps/Route111/scripts.pory"
	.string "Prepare to lose!$"
# 648 "data/maps/Route111/scripts.pory"

# 649 "data/maps/Route111/scripts.pory"
Route111_Text_VickyDefeat:
# 650 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
# 651 "data/maps/Route111/scripts.pory"
	.string "My granddaughter was right…$"
# 652 "data/maps/Route111/scripts.pory"

# 653 "data/maps/Route111/scripts.pory"
Route111_Text_VickyPostBattle:
# 654 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
# 655 "data/maps/Route111/scripts.pory"
	.string "visit with us awhile.$"
# 656 "data/maps/Route111/scripts.pory"

# 657 "data/maps/Route111/scripts.pory"
Route111_Text_ToughToKeepWinningUpTheRanks:
# 658 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your POKéMON some\n"
# 659 "data/maps/Route111/scripts.pory"
	.string "more, it could be tough to keep winning\l"
# 660 "data/maps/Route111/scripts.pory"
	.string "up through the ranks.\p"
# 661 "data/maps/Route111/scripts.pory"
	.string "I've heard the POKéMON LEAGUE's\n"
# 662 "data/maps/Route111/scripts.pory"
	.string "ELITE FOUR are far stronger than\l"
# 663 "data/maps/Route111/scripts.pory"
	.string "any GYM LEADER.$"
# 664 "data/maps/Route111/scripts.pory"

# 665 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateFamilyDestroyedMe:
# 666 "data/maps/Route111/scripts.pory"
	.string "I challenged the WINSTRATE family,\n"
# 667 "data/maps/Route111/scripts.pory"
	.string "but four matches in a row is tough\l"
# 668 "data/maps/Route111/scripts.pory"
	.string "going… They destroyed me.$"
# 669 "data/maps/Route111/scripts.pory"

# 670 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSignMauville:
# 671 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 672 "data/maps/Route111/scripts.pory"
	.string "{DOWN_ARROW} MAUVILLE CITY$"
# 673 "data/maps/Route111/scripts.pory"

# 674 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateHouseSign:
# 675 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
# 676 "data/maps/Route111/scripts.pory"
	.string "THE WINSTRATE'S HOUSE$"
# 677 "data/maps/Route111/scripts.pory"

# 678 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign112:
# 679 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 680 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 112$"
# 681 "data/maps/Route111/scripts.pory"

# 682 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign113:
# 683 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 684 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 113$"
# 685 "data/maps/Route111/scripts.pory"

# 686 "data/maps/Route111/scripts.pory"
Route111_Text_OldLadysRestStopSign:
# 687 "data/maps/Route111/scripts.pory"
	.string "OLD LADY'S REST STOP\n"
# 688 "data/maps/Route111/scripts.pory"
	.string "“Come in and rest your tired bones.”$"
# 689 "data/maps/Route111/scripts.pory"

# 690 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerTipsSpAtkSpDef:
# 691 "data/maps/Route111/scripts.pory"
	.string "TRAINER TIPS\p"
# 692 "data/maps/Route111/scripts.pory"
	.string "One of the indicators of a POKéMON's\n"
# 693 "data/maps/Route111/scripts.pory"
	.string "powerfulness is SP. ATK. It stands for\l"
# 694 "data/maps/Route111/scripts.pory"
	.string "“SPECIAL ATTACK.”\p"
# 695 "data/maps/Route111/scripts.pory"
	.string "Likewise, SP. DEF stands for “SPECIAL\n"
# 696 "data/maps/Route111/scripts.pory"
	.string "DEFENSE.”$"
# 697 "data/maps/Route111/scripts.pory"

# 698 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldBeMirageTowerAroundHere:
# 699 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
# 700 "data/maps/Route111/scripts.pory"
	.string "around here somewhere.\p"
# 701 "data/maps/Route111/scripts.pory"
	.string "But for some reason, it can be seen\n"
# 702 "data/maps/Route111/scripts.pory"
	.string "sometimes, and sometimes not.\p"
# 703 "data/maps/Route111/scripts.pory"
	.string "That's why I call it the MIRAGE TOWER.$"
# 704 "data/maps/Route111/scripts.pory"

# 705 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerClearlyVisible:
# 706 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
# 707 "data/maps/Route111/scripts.pory"
	.string "The tower of sand!\p"
# 708 "data/maps/Route111/scripts.pory"
	.string "The sand tower they called a mirage\n"
# 709 "data/maps/Route111/scripts.pory"
	.string "is clearly visible!\p"
# 710 "data/maps/Route111/scripts.pory"
	.string "But it looks so fragile…\n"
# 711 "data/maps/Route111/scripts.pory"
	.string "It could crumble away anytime…\p"
# 712 "data/maps/Route111/scripts.pory"
	.string "I want to go inside it, but I can't\n"
# 713 "data/maps/Route111/scripts.pory"
	.string "get my courage up for it…$"
# 714 "data/maps/Route111/scripts.pory"

# 715 "data/maps/Route111/scripts.pory"
Route111_Text_ThatWasShockingSandRainedDown:
# 716 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
# 717 "data/maps/Route111/scripts.pory"
	.string "That was shocking.\p"
# 718 "data/maps/Route111/scripts.pory"
	.string "Sand rained down in chunks all of\n"
# 719 "data/maps/Route111/scripts.pory"
	.string "a sudden.\p"
# 720 "data/maps/Route111/scripts.pory"
	.string "What was it like inside?\n"
# 721 "data/maps/Route111/scripts.pory"
	.string "Were there sandy ghosts and such?$"
# 722 "data/maps/Route111/scripts.pory"

# 723 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerHasntBeenSeenSince:
# 724 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
# 725 "data/maps/Route111/scripts.pory"
	.string "hasn't been seen.\p"
# 726 "data/maps/Route111/scripts.pory"
	.string "Perhaps it really was\n"
# 727 "data/maps/Route111/scripts.pory"
	.string "the MIRAGE TOWER…$"
# 728 "data/maps/Route111/scripts.pory"

# 729 "data/maps/Route111/scripts.pory"
Route111_Text_ClawFossilDisappeared:
# 730 "data/maps/Route111/scripts.pory"
	.string "The CLAW FOSSIL disappeared into\n"
# 731 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 732 "data/maps/Route111/scripts.pory"

# 733 "data/maps/Route111/scripts.pory"
Route111_Text_RootFossilDisappeared:
# 734 "data/maps/Route111/scripts.pory"
	.string "The ROOT FOSSIL disappeared into\n"
# 735 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 736 "data/maps/Route111/scripts.pory"

# 737 "data/maps/Route111/scripts.pory"
Route111_Text_MauvilleUncleToldMeToTakeRockSmash:
# 738 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
# 739 "data/maps/Route111/scripts.pory"
	.string "My uncle in MAUVILLE told me to take\n"
# 740 "data/maps/Route111/scripts.pory"
	.string "ROCK SMASH with me if I was going to\l"
# 741 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111!\p"
# 742 "data/maps/Route111/scripts.pory"
	.string "My uncle? He lives across from\n"
# 743 "data/maps/Route111/scripts.pory"
	.string "the bike shop in MAUVILLE.$"
# 744 "data/maps/Route111/scripts.pory"

# 745 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerHillSign:
# 746 "data/maps/Route111/scripts.pory"
	.string "{RIGHT_ARROW} TRAINER HILL ENTRANCE\p"
# 747 "data/maps/Route111/scripts.pory"
	.string "“Scale the heights, you hot-blooded\n"
# 748 "data/maps/Route111/scripts.pory"
	.string "TRAINERS!”$"

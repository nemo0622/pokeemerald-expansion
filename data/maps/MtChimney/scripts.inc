# 1 "data/maps/MtChimney/scripts.pory"

# 2 "data/maps/MtChimney/scripts.pory"
.set LOCALID_ARCHIE, 1
# 3 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAXIE, 2
# 4 "data/maps/MtChimney/scripts.pory"
.set LOCALID_TABITHA, 3
# 5 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 22
# 6 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 29
# 7 "data/maps/MtChimney/scripts.pory"

# 8 "data/maps/MtChimney/scripts.pory"

# 9 "data/maps/MtChimney/scripts.pory"
MtChimney_MapScripts::
# 10 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
# 11 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
# 12 "data/maps/MtChimney/scripts.pory"
	.byte 0
# 13 "data/maps/MtChimney/scripts.pory"

# 14 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition:
# 15 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 16 "data/maps/MtChimney/scripts.pory"
	end
# 17 "data/maps/MtChimney/scripts.pory"

# 18 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume:
# 19 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 20 "data/maps/MtChimney/scripts.pory"
	end
# 21 "data/maps/MtChimney/scripts.pory"

# 22 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 23 "data/maps/MtChimney/scripts.pory"
	lock
# 24 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 25 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
# 26 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
# 27 "data/maps/MtChimney/scripts.pory"
	closemessage
# 28 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceOriginalDirection
# 29 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 30 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 31 "data/maps/MtChimney/scripts.pory"
	release
# 32 "data/maps/MtChimney/scripts.pory"
	end
# 33 "data/maps/MtChimney/scripts.pory"

# 34 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieGoStopTeamMagma::
# 35 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 36 "data/maps/MtChimney/scripts.pory"
	return
# 37 "data/maps/MtChimney/scripts.pory"

# 38 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 39 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 40 "data/maps/MtChimney/scripts.pory"
	return
# 41 "data/maps/MtChimney/scripts.pory"

# 42 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 43 "data/maps/MtChimney/scripts.pory"
	lockall
# 44 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 45 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 46 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 47 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 48 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 49 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 50 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 51 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 52 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 53 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 54 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 55 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 56 "data/maps/MtChimney/scripts.pory"
	closemessage
# 57 "data/maps/MtChimney/scripts.pory"
	delay 30
# 58 "data/maps/MtChimney/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 59 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 60 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 61 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 62 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 63 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 64 "data/maps/MtChimney/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 65 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 10, 12
# 66 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_ARCHIE
# 67 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 68 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 69 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 70 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 71 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 72 "data/maps/MtChimney/scripts.pory"
	closemessage
# 73 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 74 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 75 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_ARCHIE
# 76 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 77 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 78 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 79 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 80 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 81 "data/maps/MtChimney/scripts.pory"
	releaseall
# 82 "data/maps/MtChimney/scripts.pory"
	end
# 83 "data/maps/MtChimney/scripts.pory"

# 84 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 85 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 86 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 87 "data/maps/MtChimney/scripts.pory"
	return
# 88 "data/maps/MtChimney/scripts.pory"

# 89 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 90 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 91 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 92 "data/maps/MtChimney/scripts.pory"
	return
# 93 "data/maps/MtChimney/scripts.pory"

# 94 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 95 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitEast
# 96 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 97 "data/maps/MtChimney/scripts.pory"
	return
# 98 "data/maps/MtChimney/scripts.pory"

# 99 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 100 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 101 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 102 "data/maps/MtChimney/scripts.pory"
	return
# 103 "data/maps/MtChimney/scripts.pory"

# 104 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 105 "data/maps/MtChimney/scripts.pory"
	lock
# 106 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 107 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 108 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 109 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 110 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 111 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 112 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 113 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 114 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 115 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 116 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 117 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 118 "data/maps/MtChimney/scripts.pory"
	release
# 119 "data/maps/MtChimney/scripts.pory"
	end
# 120 "data/maps/MtChimney/scripts.pory"

# 121 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 122 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 123 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 124 "data/maps/MtChimney/scripts.pory"
	release
# 125 "data/maps/MtChimney/scripts.pory"
	end
# 126 "data/maps/MtChimney/scripts.pory"

# 127 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 128 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 129 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 130 "data/maps/MtChimney/scripts.pory"
	return
# 131 "data/maps/MtChimney/scripts.pory"

# 132 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 133 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 134 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 135 "data/maps/MtChimney/scripts.pory"
	release
# 136 "data/maps/MtChimney/scripts.pory"
	end
# 137 "data/maps/MtChimney/scripts.pory"

# 138 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 139 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 140 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 141 "data/maps/MtChimney/scripts.pory"
	release
# 142 "data/maps/MtChimney/scripts.pory"
	end
# 143 "data/maps/MtChimney/scripts.pory"

# 144 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 145 "data/maps/MtChimney/scripts.pory"
	walk_up
# 146 "data/maps/MtChimney/scripts.pory"
	walk_up
# 147 "data/maps/MtChimney/scripts.pory"
	walk_up
# 148 "data/maps/MtChimney/scripts.pory"
	walk_up
# 149 "data/maps/MtChimney/scripts.pory"
	walk_up
# 150 "data/maps/MtChimney/scripts.pory"
	walk_up
# 151 "data/maps/MtChimney/scripts.pory"
	walk_right
# 152 "data/maps/MtChimney/scripts.pory"
	step_end
# 153 "data/maps/MtChimney/scripts.pory"

# 154 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 155 "data/maps/MtChimney/scripts.pory"
	walk_left
# 156 "data/maps/MtChimney/scripts.pory"
	walk_down
# 157 "data/maps/MtChimney/scripts.pory"
	walk_down
# 158 "data/maps/MtChimney/scripts.pory"
	walk_down
# 159 "data/maps/MtChimney/scripts.pory"
	walk_down
# 160 "data/maps/MtChimney/scripts.pory"
	walk_down
# 161 "data/maps/MtChimney/scripts.pory"
	walk_down
# 162 "data/maps/MtChimney/scripts.pory"
	walk_down
# 163 "data/maps/MtChimney/scripts.pory"
	step_end
# 164 "data/maps/MtChimney/scripts.pory"

# 165 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 166 "data/maps/MtChimney/scripts.pory"
	walk_up
# 167 "data/maps/MtChimney/scripts.pory"
	walk_up
# 168 "data/maps/MtChimney/scripts.pory"
	walk_up
# 169 "data/maps/MtChimney/scripts.pory"
	walk_up
# 170 "data/maps/MtChimney/scripts.pory"
	walk_up
# 171 "data/maps/MtChimney/scripts.pory"
	walk_right
# 172 "data/maps/MtChimney/scripts.pory"
	walk_right
# 173 "data/maps/MtChimney/scripts.pory"
	step_end
# 174 "data/maps/MtChimney/scripts.pory"

# 175 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 176 "data/maps/MtChimney/scripts.pory"
	walk_left
# 177 "data/maps/MtChimney/scripts.pory"
	walk_left
# 178 "data/maps/MtChimney/scripts.pory"
	walk_down
# 179 "data/maps/MtChimney/scripts.pory"
	walk_down
# 180 "data/maps/MtChimney/scripts.pory"
	walk_down
# 181 "data/maps/MtChimney/scripts.pory"
	walk_down
# 182 "data/maps/MtChimney/scripts.pory"
	walk_down
# 183 "data/maps/MtChimney/scripts.pory"
	walk_down
# 184 "data/maps/MtChimney/scripts.pory"
	walk_down
# 185 "data/maps/MtChimney/scripts.pory"
	step_end
# 186 "data/maps/MtChimney/scripts.pory"

# 187 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 188 "data/maps/MtChimney/scripts.pory"
	walk_down
# 189 "data/maps/MtChimney/scripts.pory"
	walk_down
# 190 "data/maps/MtChimney/scripts.pory"
	walk_down
# 191 "data/maps/MtChimney/scripts.pory"
	walk_down
# 192 "data/maps/MtChimney/scripts.pory"
	walk_down
# 193 "data/maps/MtChimney/scripts.pory"
	walk_left
# 194 "data/maps/MtChimney/scripts.pory"
	walk_left
# 195 "data/maps/MtChimney/scripts.pory"
	walk_down
# 196 "data/maps/MtChimney/scripts.pory"
	walk_down
# 197 "data/maps/MtChimney/scripts.pory"
	walk_down
# 198 "data/maps/MtChimney/scripts.pory"
	walk_down
# 199 "data/maps/MtChimney/scripts.pory"
	walk_left
# 200 "data/maps/MtChimney/scripts.pory"
	walk_left
# 201 "data/maps/MtChimney/scripts.pory"
	walk_left
# 202 "data/maps/MtChimney/scripts.pory"
	walk_left
# 203 "data/maps/MtChimney/scripts.pory"
	walk_left
# 204 "data/maps/MtChimney/scripts.pory"
	walk_down
# 205 "data/maps/MtChimney/scripts.pory"
	step_end
# 206 "data/maps/MtChimney/scripts.pory"

# 207 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 208 "data/maps/MtChimney/scripts.pory"
	walk_down
# 209 "data/maps/MtChimney/scripts.pory"
	walk_down
# 210 "data/maps/MtChimney/scripts.pory"
	walk_down
# 211 "data/maps/MtChimney/scripts.pory"
	walk_down
# 212 "data/maps/MtChimney/scripts.pory"
	walk_left
# 213 "data/maps/MtChimney/scripts.pory"
	walk_left
# 214 "data/maps/MtChimney/scripts.pory"
	walk_left
# 215 "data/maps/MtChimney/scripts.pory"
	walk_down
# 216 "data/maps/MtChimney/scripts.pory"
	step_end
# 217 "data/maps/MtChimney/scripts.pory"

# 218 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 219 "data/maps/MtChimney/scripts.pory"
	walk_right
# 220 "data/maps/MtChimney/scripts.pory"
	walk_down
# 221 "data/maps/MtChimney/scripts.pory"
	walk_down
# 222 "data/maps/MtChimney/scripts.pory"
	walk_down
# 223 "data/maps/MtChimney/scripts.pory"
	walk_down
# 224 "data/maps/MtChimney/scripts.pory"
	walk_left
# 225 "data/maps/MtChimney/scripts.pory"
	walk_left
# 226 "data/maps/MtChimney/scripts.pory"
	walk_left
# 227 "data/maps/MtChimney/scripts.pory"
	walk_left
# 228 "data/maps/MtChimney/scripts.pory"
	walk_left
# 229 "data/maps/MtChimney/scripts.pory"
	walk_down
# 230 "data/maps/MtChimney/scripts.pory"
	walk_down
# 231 "data/maps/MtChimney/scripts.pory"
	walk_down
# 232 "data/maps/MtChimney/scripts.pory"
	walk_down
# 233 "data/maps/MtChimney/scripts.pory"
	step_end
# 234 "data/maps/MtChimney/scripts.pory"

# 235 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 236 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 237 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 238 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 239 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 240 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 241 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 242 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 243 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 244 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 245 "data/maps/MtChimney/scripts.pory"
	walk_left
# 246 "data/maps/MtChimney/scripts.pory"
	walk_left
# 247 "data/maps/MtChimney/scripts.pory"
	walk_down
# 248 "data/maps/MtChimney/scripts.pory"
	walk_down
# 249 "data/maps/MtChimney/scripts.pory"
	walk_down
# 250 "data/maps/MtChimney/scripts.pory"
	walk_left
# 251 "data/maps/MtChimney/scripts.pory"
	walk_left
# 252 "data/maps/MtChimney/scripts.pory"
	walk_down
# 253 "data/maps/MtChimney/scripts.pory"
	walk_down
# 254 "data/maps/MtChimney/scripts.pory"
	walk_left
# 255 "data/maps/MtChimney/scripts.pory"
	walk_left
# 256 "data/maps/MtChimney/scripts.pory"
	walk_left
# 257 "data/maps/MtChimney/scripts.pory"
	walk_left
# 258 "data/maps/MtChimney/scripts.pory"
	walk_left
# 259 "data/maps/MtChimney/scripts.pory"
	walk_down
# 260 "data/maps/MtChimney/scripts.pory"
	step_end
# 261 "data/maps/MtChimney/scripts.pory"

# 262 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 263 "data/maps/MtChimney/scripts.pory"
	delay_16
# 264 "data/maps/MtChimney/scripts.pory"
	delay_16
# 265 "data/maps/MtChimney/scripts.pory"
	delay_16
# 266 "data/maps/MtChimney/scripts.pory"
	walk_down
# 267 "data/maps/MtChimney/scripts.pory"
	walk_down
# 268 "data/maps/MtChimney/scripts.pory"
	walk_down
# 269 "data/maps/MtChimney/scripts.pory"
	walk_left
# 270 "data/maps/MtChimney/scripts.pory"
	walk_left
# 271 "data/maps/MtChimney/scripts.pory"
	walk_left
# 272 "data/maps/MtChimney/scripts.pory"
	walk_down
# 273 "data/maps/MtChimney/scripts.pory"
	step_end
# 274 "data/maps/MtChimney/scripts.pory"

# 275 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 276 "data/maps/MtChimney/scripts.pory"
	delay_16
# 277 "data/maps/MtChimney/scripts.pory"
	walk_left
# 278 "data/maps/MtChimney/scripts.pory"
	walk_down
# 279 "data/maps/MtChimney/scripts.pory"
	walk_down
# 280 "data/maps/MtChimney/scripts.pory"
	walk_down
# 281 "data/maps/MtChimney/scripts.pory"
	walk_down
# 282 "data/maps/MtChimney/scripts.pory"
	walk_left
# 283 "data/maps/MtChimney/scripts.pory"
	walk_left
# 284 "data/maps/MtChimney/scripts.pory"
	walk_left
# 285 "data/maps/MtChimney/scripts.pory"
	walk_left
# 286 "data/maps/MtChimney/scripts.pory"
	walk_left
# 287 "data/maps/MtChimney/scripts.pory"
	walk_down
# 288 "data/maps/MtChimney/scripts.pory"
	walk_down
# 289 "data/maps/MtChimney/scripts.pory"
	walk_down
# 290 "data/maps/MtChimney/scripts.pory"
	walk_down
# 291 "data/maps/MtChimney/scripts.pory"
	step_end
# 292 "data/maps/MtChimney/scripts.pory"

# 293 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 294 "data/maps/MtChimney/scripts.pory"
	delay_16
# 295 "data/maps/MtChimney/scripts.pory"
	walk_left
# 296 "data/maps/MtChimney/scripts.pory"
	walk_left
# 297 "data/maps/MtChimney/scripts.pory"
	walk_down
# 298 "data/maps/MtChimney/scripts.pory"
	walk_down
# 299 "data/maps/MtChimney/scripts.pory"
	walk_down
# 300 "data/maps/MtChimney/scripts.pory"
	walk_left
# 301 "data/maps/MtChimney/scripts.pory"
	walk_left
# 302 "data/maps/MtChimney/scripts.pory"
	walk_down
# 303 "data/maps/MtChimney/scripts.pory"
	walk_down
# 304 "data/maps/MtChimney/scripts.pory"
	walk_left
# 305 "data/maps/MtChimney/scripts.pory"
	walk_left
# 306 "data/maps/MtChimney/scripts.pory"
	walk_left
# 307 "data/maps/MtChimney/scripts.pory"
	walk_left
# 308 "data/maps/MtChimney/scripts.pory"
	walk_left
# 309 "data/maps/MtChimney/scripts.pory"
	walk_down
# 310 "data/maps/MtChimney/scripts.pory"
	step_end
# 311 "data/maps/MtChimney/scripts.pory"

# 312 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 313 "data/maps/MtChimney/scripts.pory"
	delay_16
# 314 "data/maps/MtChimney/scripts.pory"
	walk_down
# 315 "data/maps/MtChimney/scripts.pory"
	walk_left
# 316 "data/maps/MtChimney/scripts.pory"
	walk_left
# 317 "data/maps/MtChimney/scripts.pory"
	walk_left
# 318 "data/maps/MtChimney/scripts.pory"
	walk_left
# 319 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 320 "data/maps/MtChimney/scripts.pory"
	step_end
# 321 "data/maps/MtChimney/scripts.pory"

# 322 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 323 "data/maps/MtChimney/scripts.pory"
	walk_down
# 324 "data/maps/MtChimney/scripts.pory"
	walk_down
# 325 "data/maps/MtChimney/scripts.pory"
	walk_down
# 326 "data/maps/MtChimney/scripts.pory"
	walk_down
# 327 "data/maps/MtChimney/scripts.pory"
	walk_left
# 328 "data/maps/MtChimney/scripts.pory"
	walk_left
# 329 "data/maps/MtChimney/scripts.pory"
	walk_left
# 330 "data/maps/MtChimney/scripts.pory"
	walk_left
# 331 "data/maps/MtChimney/scripts.pory"
	walk_left
# 332 "data/maps/MtChimney/scripts.pory"
	walk_down
# 333 "data/maps/MtChimney/scripts.pory"
	walk_down
# 334 "data/maps/MtChimney/scripts.pory"
	walk_down
# 335 "data/maps/MtChimney/scripts.pory"
	walk_down
# 336 "data/maps/MtChimney/scripts.pory"
	step_end
# 337 "data/maps/MtChimney/scripts.pory"

# 338 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 339 "data/maps/MtChimney/scripts.pory"
	walk_down
# 340 "data/maps/MtChimney/scripts.pory"
	step_end
# 341 "data/maps/MtChimney/scripts.pory"

# 342 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 343 "data/maps/MtChimney/scripts.pory"
	walk_down
# 344 "data/maps/MtChimney/scripts.pory"
	walk_down
# 345 "data/maps/MtChimney/scripts.pory"
	walk_down
# 346 "data/maps/MtChimney/scripts.pory"
	walk_down
# 347 "data/maps/MtChimney/scripts.pory"
	walk_down
# 348 "data/maps/MtChimney/scripts.pory"
	walk_down
# 349 "data/maps/MtChimney/scripts.pory"
	walk_down
# 350 "data/maps/MtChimney/scripts.pory"
	step_end
# 351 "data/maps/MtChimney/scripts.pory"

# 352 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 353 "data/maps/MtChimney/scripts.pory"
	delay_16
# 354 "data/maps/MtChimney/scripts.pory"
	delay_16
# 355 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 356 "data/maps/MtChimney/scripts.pory"
	delay_16
# 357 "data/maps/MtChimney/scripts.pory"
	walk_down
# 358 "data/maps/MtChimney/scripts.pory"
	walk_down
# 359 "data/maps/MtChimney/scripts.pory"
	walk_down
# 360 "data/maps/MtChimney/scripts.pory"
	walk_down
# 361 "data/maps/MtChimney/scripts.pory"
	walk_down
# 362 "data/maps/MtChimney/scripts.pory"
	step_end
# 363 "data/maps/MtChimney/scripts.pory"

# 364 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 365 "data/maps/MtChimney/scripts.pory"
	delay_16
# 366 "data/maps/MtChimney/scripts.pory"
	delay_16
# 367 "data/maps/MtChimney/scripts.pory"
	delay_16
# 368 "data/maps/MtChimney/scripts.pory"
	delay_16
# 369 "data/maps/MtChimney/scripts.pory"
	delay_16
# 370 "data/maps/MtChimney/scripts.pory"
	delay_16
# 371 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 372 "data/maps/MtChimney/scripts.pory"
	delay_16
# 373 "data/maps/MtChimney/scripts.pory"
	walk_down
# 374 "data/maps/MtChimney/scripts.pory"
	walk_down
# 375 "data/maps/MtChimney/scripts.pory"
	step_end
# 376 "data/maps/MtChimney/scripts.pory"

# 377 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 378 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 379 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 380 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 381 "data/maps/MtChimney/scripts.pory"
	face_right
# 382 "data/maps/MtChimney/scripts.pory"
	step_end
# 383 "data/maps/MtChimney/scripts.pory"

# 384 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 385 "data/maps/MtChimney/scripts.pory"
	walk_left
# 386 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 387 "data/maps/MtChimney/scripts.pory"
	delay_16
# 388 "data/maps/MtChimney/scripts.pory"
	step_end
# 389 "data/maps/MtChimney/scripts.pory"

# 390 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 391 "data/maps/MtChimney/scripts.pory"
	msgbox_mugshot MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN, MUGSHOT_AQUAGRUNTM
# 392 "data/maps/MtChimney/scripts.pory"
	end
# 393 "data/maps/MtChimney/scripts.pory"

# 394 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 395 "data/maps/MtChimney/scripts.pory"
	msgbox_mugshot MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN, MUGSHOT_AQUAGRUNTM
# 396 "data/maps/MtChimney/scripts.pory"
	end
# 397 "data/maps/MtChimney/scripts.pory"

# 398 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 399 "data/maps/MtChimney/scripts.pory"
	msgbox_mugshot MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN, MUGSHOT_AQUAGRUNTM
# 400 "data/maps/MtChimney/scripts.pory"
	end
# 401 "data/maps/MtChimney/scripts.pory"

# 402 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 403 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 404 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 405 "data/maps/MtChimney/scripts.pory"
	end
# 406 "data/maps/MtChimney/scripts.pory"

# 407 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 408 "data/maps/MtChimney/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAGMAGRUNTM
# 409 "data/maps/MtChimney/scripts.pory"
	callnative DrawMugshot
# 410 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 411 "data/maps/MtChimney/scripts.pory"
	msgbox_mugshot MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_MAGMAGRUNTM
# 412 "data/maps/MtChimney/scripts.pory"
	end
# 413 "data/maps/MtChimney/scripts.pory"

# 414 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 415 "data/maps/MtChimney/scripts.pory"
	msgbox_mugshot MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN, MUGSHOT_MAGMAGRUNTM
# 416 "data/maps/MtChimney/scripts.pory"
	end
# 417 "data/maps/MtChimney/scripts.pory"

# 418 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 419 "data/maps/MtChimney/scripts.pory"
	msgbox_mugshot MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN, MUGSHOT_MAGMAGRUNTM
# 420 "data/maps/MtChimney/scripts.pory"
	end
# 421 "data/maps/MtChimney/scripts.pory"

# 422 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 423 "data/maps/MtChimney/scripts.pory"
	msgbox_mugshot MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN, MUGSHOT_MAGMAGRUNTM
# 424 "data/maps/MtChimney/scripts.pory"
	end
# 425 "data/maps/MtChimney/scripts.pory"

# 426 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 427 "data/maps/MtChimney/scripts.pory"
	msgbox_mugshot MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN, MUGSHOT_MAGMAGRUNTM
# 428 "data/maps/MtChimney/scripts.pory"
	end
# 429 "data/maps/MtChimney/scripts.pory"

# 430 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 431 "data/maps/MtChimney/scripts.pory"
	msgbox_mugshot MtChimney_Text_DouseThemInFire, MSGBOX_SIGN, MUGSHOT_MAGMAGRUNTM
# 432 "data/maps/MtChimney/scripts.pory"
	end
# 433 "data/maps/MtChimney/scripts.pory"

# 434 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 435 "data/maps/MtChimney/scripts.pory"
	msgbox_mugshot MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN, MUGSHOT_MAGMAGRUNTM
# 436 "data/maps/MtChimney/scripts.pory"
	end
# 437 "data/maps/MtChimney/scripts.pory"

# 438 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 439 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 440 "data/maps/MtChimney/scripts.pory"
	end
# 441 "data/maps/MtChimney/scripts.pory"

# 442 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 443 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 444 "data/maps/MtChimney/scripts.pory"
	end
# 445 "data/maps/MtChimney/scripts.pory"

# 446 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 447 "data/maps/MtChimney/scripts.pory"
	lockall
# 448 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 449 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 450 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 451 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 452 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 453 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 454 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 455 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 456 "data/maps/MtChimney/scripts.pory"
	releaseall
# 457 "data/maps/MtChimney/scripts.pory"
	end
# 458 "data/maps/MtChimney/scripts.pory"

# 459 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 460 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 461 "data/maps/MtChimney/scripts.pory"
	releaseall
# 462 "data/maps/MtChimney/scripts.pory"
	end
# 463 "data/maps/MtChimney/scripts.pory"

# 464 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 465 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 466 "data/maps/MtChimney/scripts.pory"
	releaseall
# 467 "data/maps/MtChimney/scripts.pory"
	end
# 468 "data/maps/MtChimney/scripts.pory"

# 469 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 470 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 471 "data/maps/MtChimney/scripts.pory"
	releaseall
# 472 "data/maps/MtChimney/scripts.pory"
	end
# 473 "data/maps/MtChimney/scripts.pory"

# 474 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 475 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 476 "data/maps/MtChimney/scripts.pory"
	end
# 477 "data/maps/MtChimney/scripts.pory"

# 478 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 479 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 480 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 481 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 482 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 483 "data/maps/MtChimney/scripts.pory"
	release
# 484 "data/maps/MtChimney/scripts.pory"
	end
# 485 "data/maps/MtChimney/scripts.pory"

# 486 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 487 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 488 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 489 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 490 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 491 "data/maps/MtChimney/scripts.pory"
	release
# 492 "data/maps/MtChimney/scripts.pory"
	end
# 493 "data/maps/MtChimney/scripts.pory"

# 494 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 495 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 496 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 497 "data/maps/MtChimney/scripts.pory"
	end
# 498 "data/maps/MtChimney/scripts.pory"

# 499 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 500 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 501 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 502 "data/maps/MtChimney/scripts.pory"
	end
# 503 "data/maps/MtChimney/scripts.pory"

# 504 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 505 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 506 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 507 "data/maps/MtChimney/scripts.pory"
	end
# 508 "data/maps/MtChimney/scripts.pory"

# 509 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 510 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 511 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 512 "data/maps/MtChimney/scripts.pory"
	end
# 513 "data/maps/MtChimney/scripts.pory"

# 514 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 515 "data/maps/MtChimney/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAGMAGRUNTF
# 516 "data/maps/MtChimney/scripts.pory"
	callnative DrawMugshot
# 517 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 518 "data/maps/MtChimney/scripts.pory"
	msgbox_mugshot MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE, MUGSHOT_MAGMAGRUNTF
# 519 "data/maps/MtChimney/scripts.pory"
	end
# 520 "data/maps/MtChimney/scripts.pory"

# 521 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 522 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 523 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 524 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 525 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 526 "data/maps/MtChimney/scripts.pory"
	release
# 527 "data/maps/MtChimney/scripts.pory"
	end
# 528 "data/maps/MtChimney/scripts.pory"

# 529 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 530 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 531 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 532 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 533 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 534 "data/maps/MtChimney/scripts.pory"
	release
# 535 "data/maps/MtChimney/scripts.pory"
	end
# 536 "data/maps/MtChimney/scripts.pory"

# 537 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 538 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 539 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 540 "data/maps/MtChimney/scripts.pory"
	end
# 541 "data/maps/MtChimney/scripts.pory"

# 542 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 543 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 544 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 545 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 546 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 547 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 548 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 549 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 550 "data/maps/MtChimney/scripts.pory"

# 551 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 552 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
# 553 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 554 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 555 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 556 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 557 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 558 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 559 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 560 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 561 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 562 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 563 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 564 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 565 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 566 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 567 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 568 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 569 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 570 "data/maps/MtChimney/scripts.pory"
	.string "humankind and POKéMON!\p"
# 571 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 572 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 573 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 574 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 575 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 576 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 577 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 578 "data/maps/MtChimney/scripts.pory"

# 579 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 580 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 581 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 582 "data/maps/MtChimney/scripts.pory"

# 583 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 584 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
# 585 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 586 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 587 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 588 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 589 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 590 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$"
# 591 "data/maps/MtChimney/scripts.pory"

# 592 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 593 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 594 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 595 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 596 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 597 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 598 "data/maps/MtChimney/scripts.pory"

# 599 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 600 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 601 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 602 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 603 "data/maps/MtChimney/scripts.pory"

# 604 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 605 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 606 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 607 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 608 "data/maps/MtChimney/scripts.pory"

# 609 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 610 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 611 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 612 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 613 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 614 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 615 "data/maps/MtChimney/scripts.pory"

# 616 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 617 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 618 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 619 "data/maps/MtChimney/scripts.pory"

# 620 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 621 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 622 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 623 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 624 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 625 "data/maps/MtChimney/scripts.pory"

# 626 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 627 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
# 628 "data/maps/MtChimney/scripts.pory"
	.string "to get a big house of my own!\p"
# 629 "data/maps/MtChimney/scripts.pory"
	.string "I'm going to build it on hardened lava!$"
# 630 "data/maps/MtChimney/scripts.pory"

# 631 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 632 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"
# 633 "data/maps/MtChimney/scripts.pory"

# 634 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 635 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
# 636 "data/maps/MtChimney/scripts.pory"
	.string "splashing about in the waves!$"
# 637 "data/maps/MtChimney/scripts.pory"

# 638 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 639 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 640 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 641 "data/maps/MtChimney/scripts.pory"

# 642 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 643 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 644 "data/maps/MtChimney/scripts.pory"

# 645 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 646 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 647 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 648 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 649 "data/maps/MtChimney/scripts.pory"

# 650 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 651 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 652 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 653 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 654 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 655 "data/maps/MtChimney/scripts.pory"

# 656 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 657 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 658 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 659 "data/maps/MtChimney/scripts.pory"

# 660 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 661 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 662 "data/maps/MtChimney/scripts.pory"

# 663 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 664 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 665 "data/maps/MtChimney/scripts.pory"

# 666 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 667 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grr, {PLAYER}!\n"
# 668 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 669 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 670 "data/maps/MtChimney/scripts.pory"
	.string "of TEAM MAGMA are up to!\p"
# 671 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 672 "data/maps/MtChimney/scripts.pory"
	.string "METEORITE's power into the volcano!\p"
# 673 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 674 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 675 "data/maps/MtChimney/scripts.pory"

# 676 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 677 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grrr…\p"
# 678 "data/maps/MtChimney/scripts.pory"
	.string "I want to stop that MAXIE,\n"
# 679 "data/maps/MtChimney/scripts.pory"
	.string "but I can't!\p"
# 680 "data/maps/MtChimney/scripts.pory"
	.string "Not when I have my hands full battling\n"
# 681 "data/maps/MtChimney/scripts.pory"
	.string "three opponents at once!$"
# 682 "data/maps/MtChimney/scripts.pory"

# 683 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 684 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
# 685 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 686 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted TEAM\n"
# 687 "data/maps/MtChimney/scripts.pory"
	.string "MAGMA's destructive plan!\p"
# 688 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 689 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 690 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 691 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 692 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of TEAM MAGMA.\p"
# 693 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"
# 694 "data/maps/MtChimney/scripts.pory"

# 695 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 696 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 697 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 698 "data/maps/MtChimney/scripts.pory"

# 699 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 700 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 701 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER POKéMON!$"
# 702 "data/maps/MtChimney/scripts.pory"

# 703 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 704 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 705 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 706 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 707 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 708 "data/maps/MtChimney/scripts.pory"

# 709 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 710 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 711 "data/maps/MtChimney/scripts.pory"

# 712 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 713 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 714 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 715 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 716 "data/maps/MtChimney/scripts.pory"

# 717 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 718 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 719 "data/maps/MtChimney/scripts.pory"

# 720 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 721 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 722 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 723 "data/maps/MtChimney/scripts.pory"

# 724 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 725 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 726 "data/maps/MtChimney/scripts.pory"

# 727 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 728 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 729 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 730 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 731 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 732 "data/maps/MtChimney/scripts.pory"

# 733 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 734 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 735 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 736 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 737 "data/maps/MtChimney/scripts.pory"

# 738 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 739 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 740 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 741 "data/maps/MtChimney/scripts.pory"

# 742 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 743 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 744 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 745 "data/maps/MtChimney/scripts.pory"

# 746 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 747 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 748 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 749 "data/maps/MtChimney/scripts.pory"

# 750 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 751 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 752 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 753 "data/maps/MtChimney/scripts.pory"

# 754 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 755 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 756 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 757 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 758 "data/maps/MtChimney/scripts.pory"

# 759 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 760 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 761 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 762 "data/maps/MtChimney/scripts.pory"

# 763 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 764 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 765 "data/maps/MtChimney/scripts.pory"
	.string "myself an EXPERT now, can I?$"
# 766 "data/maps/MtChimney/scripts.pory"

# 767 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 768 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 769 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 770 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 771 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 772 "data/maps/MtChimney/scripts.pory"

# 773 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 774 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 775 "data/maps/MtChimney/scripts.pory"
	.string "of your POKéMON, why, you should be\l"
# 776 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 777 "data/maps/MtChimney/scripts.pory"

# 778 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 779 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 780 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 781 "data/maps/MtChimney/scripts.pory"

# 782 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 783 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 784 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your POKéMON.$"
# 785 "data/maps/MtChimney/scripts.pory"

# 786 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 787 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 788 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 789 "data/maps/MtChimney/scripts.pory"

# 790 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 791 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 792 "data/maps/MtChimney/scripts.pory"

# 793 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 794 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 795 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 796 "data/maps/MtChimney/scripts.pory"

# 797 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 798 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 799 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my POKéMON battle!$"
# 800 "data/maps/MtChimney/scripts.pory"

# 801 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 802 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 803 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 804 "data/maps/MtChimney/scripts.pory"

# 805 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 806 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 807 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 808 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 809 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 810 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 811 "data/maps/MtChimney/scripts.pory"

# 812 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 813 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 814 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 815 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 816 "data/maps/MtChimney/scripts.pory"

# 817 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 818 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 819 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 820 "data/maps/MtChimney/scripts.pory"

# 821 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 822 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 823 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 824 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 825 "data/maps/MtChimney/scripts.pory"

# 826 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 827 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 828 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 829 "data/maps/MtChimney/scripts.pory"

# 830 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 831 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 832 "data/maps/MtChimney/scripts.pory"

# 833 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 834 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 835 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 836 "data/maps/MtChimney/scripts.pory"

# 837 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 838 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 839 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 840 "data/maps/MtChimney/scripts.pory"

# 841 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 842 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 843 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 844 "data/maps/MtChimney/scripts.pory"

# 845 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 846 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 847 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 848 "data/maps/MtChimney/scripts.pory"

# 849 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 850 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 851 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"

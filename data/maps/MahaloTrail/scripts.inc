MahaloTrail_MapScripts::
	.byte 0


MahaloTrail_Script_HauCaughtByCorvisquire::
# 7 "data//maps/MahaloTrail/scripts.pory"
	lockall
# 8 "data//maps/MahaloTrail/scripts.pory"
	applymovement 1, MahaloTrail_Script_HauCaughtByCorvisquire_Movement_0
# 9 "data//maps/MahaloTrail/scripts.pory"
	applymovement 2, MahaloTrail_Script_HauCaughtByCorvisquire_Movement_1
# 10 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 1
# 12 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 13 "data//maps/MahaloTrail/scripts.pory"
	emote 1, EMOTE_EXCLAM
# 14 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 15 "data//maps/MahaloTrail/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 16 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 17 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_HauCaughtByCorvisquire_Text_0
# 18 "data//maps/MahaloTrail/scripts.pory"
	createfieldmugshot MUGSHOT_HAU, EMOTION_INTENSE
# 19 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_HauCaughtByCorvisquire_Text_1
# 20 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 21 "data//maps/MahaloTrail/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 22 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 24 "data//maps/MahaloTrail/scripts.pory"
	setflag FLAG_COMPLETED_CORVISQUIRE_HAU_EVENT
# 26 "data//maps/MahaloTrail/scripts.pory"
	releaseall
	end


MahaloTrail_Script_LillieNeedsPlayer::
# 32 "data//maps/MahaloTrail/scripts.pory"
	lockall
# 33 "data//maps/MahaloTrail/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 34 "data//maps/MahaloTrail/scripts.pory"
	switch VAR_TEMP_1
# 36 "data//maps/MahaloTrail/scripts.pory"
	case 11, MahaloTrail_Script_LillieNeedsPlayer_3
# 38 "data//maps/MahaloTrail/scripts.pory"
	case 12, MahaloTrail_Script_LillieNeedsPlayer_4
# 40 "data//maps/MahaloTrail/scripts.pory"
	case 13, MahaloTrail_Script_LillieNeedsPlayer_5
# 42 "data//maps/MahaloTrail/scripts.pory"
	case 14, MahaloTrail_Script_LillieNeedsPlayer_6
# 44 "data//maps/MahaloTrail/scripts.pory"
	case 15, MahaloTrail_Script_LillieNeedsPlayer_7
# 46 "data//maps/MahaloTrail/scripts.pory"
	case 17, MahaloTrail_Script_LillieNeedsPlayer_8
# 49 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
MahaloTrail_Script_LillieNeedsPlayer_1:
# 53 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 54 "data//maps/MahaloTrail/scripts.pory"
	delay 15
# 55 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_LILLIE_AT_BRIDGE, MahaloTrail_Script_LillieNeedsPlayer_Movement_6
# 56 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 57 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_LillieNeedsPlayer_Text_0
# 58 "data//maps/MahaloTrail/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT, EMOTION_SAD
# 59 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_LillieNeedsPlayer_Text_1
# 60 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 61 "data//maps/MahaloTrail/scripts.pory"
	delay 15
# 62 "data//maps/MahaloTrail/scripts.pory"
	emote LOCALID_LILLIE_AT_BRIDGE, EMOTE_QUESTION
# 63 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 65 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_LILLIE_AT_BRIDGE, Common_Movement_FaceDown
# 66 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 67 "data//maps/MahaloTrail/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_MON
# 68 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_LillieNeedsPlayer_Text_0
# 69 "data//maps/MahaloTrail/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT, EMOTION_SAD
# 70 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_LillieNeedsPlayer_Text_2
# 71 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 72 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_LILLIE_AT_BRIDGE, Common_Movement_FaceUp
# 73 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 75 "data//maps/MahaloTrail/scripts.pory"
	special HealPlayerParty
# 76 "data//maps/MahaloTrail/scripts.pory"
	setflag FLAG_LILLIE_NEEDS_HELP_MAHALO_TRAIL
# 77 "data//maps/MahaloTrail/scripts.pory"
	setflag FLAG_HIDE_HAU_CORVISQUIRE_MAHALO_TRAIL
# 78 "data//maps/MahaloTrail/scripts.pory"
	delay 15
# 79 "data//maps/MahaloTrail/scripts.pory"
	releaseall
	end

MahaloTrail_Script_LillieNeedsPlayer_3:
# 37 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, MahaloTrail_Script_LillieNeedsPlayer_Movement_0
	goto MahaloTrail_Script_LillieNeedsPlayer_1

MahaloTrail_Script_LillieNeedsPlayer_4:
# 39 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, MahaloTrail_Script_LillieNeedsPlayer_Movement_1
	goto MahaloTrail_Script_LillieNeedsPlayer_1

MahaloTrail_Script_LillieNeedsPlayer_5:
# 41 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, MahaloTrail_Script_LillieNeedsPlayer_Movement_2
	goto MahaloTrail_Script_LillieNeedsPlayer_1

MahaloTrail_Script_LillieNeedsPlayer_6:
# 43 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, MahaloTrail_Script_LillieNeedsPlayer_Movement_3
	goto MahaloTrail_Script_LillieNeedsPlayer_1

MahaloTrail_Script_LillieNeedsPlayer_7:
# 45 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, MahaloTrail_Script_LillieNeedsPlayer_Movement_4
	goto MahaloTrail_Script_LillieNeedsPlayer_1

MahaloTrail_Script_LillieNeedsPlayer_8:
# 47 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, MahaloTrail_Script_LillieNeedsPlayer_Movement_5
	goto MahaloTrail_Script_LillieNeedsPlayer_1


MahaloTrail_Script_LillieBlocksLeaving::
# 85 "data//maps/MahaloTrail/scripts.pory"
	lockall
# 86 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_LILLIE_AT_BRIDGE, MahaloTrail_Script_LillieBlocksLeaving_Movement_0
# 87 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 88 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 89 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_LillieNeedsPlayer_Text_0
# 90 "data//maps/MahaloTrail/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT, EMOTION_SAD
# 91 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_LillieBlocksLeaving_Text_0
# 92 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 93 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_LILLIE_AT_BRIDGE, MahaloTrail_Script_LillieBlocksLeaving_Movement_1
# 94 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 95 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 96 "data//maps/MahaloTrail/scripts.pory"
	releaseall
	end


MahaloTrail_Script_PlayerSavesCosmog::
# 102 "data//maps/MahaloTrail/scripts.pory"
	lockall
# 105 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 106 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 107 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 108 "data//maps/MahaloTrail/scripts.pory"
	emote LOCALID_NEBBIE_ON_BRIDGE, EMOTE_EXCLAM
# 109 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 110 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_NEBBIE_ON_BRIDGE, MahaloTrail_Script_PlayerSavesCosmog_Movement_0
# 111 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 112 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 113 "data//maps/MahaloTrail/scripts.pory"
	emote LOCALID_NEBBIE_ON_BRIDGE, EMOTE_HEART
# 114 "data//maps/MahaloTrail/scripts.pory"
	delay 20
# 117 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 118 "data//maps/MahaloTrail/scripts.pory"
	applymovement 5, MahaloTrail_Script_PlayerSavesCosmog_Movement_1
# 119 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 120 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_PlayerSavesCosmog_Text_0
# 121 "data//maps/MahaloTrail/scripts.pory"
	playmoncry SPECIES_CORVIKNIGHT, CRY_MODE_NORMAL
# 122 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_PlayerSavesCosmog_Text_1
# 123 "data//maps/MahaloTrail/scripts.pory"
	waitmoncry
# 124 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 125 "data//maps/MahaloTrail/scripts.pory"
	createplayerfieldmugshot EMOTION_INTENSE
# 126 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_PlayerSavesCosmog_Text_2
# 127 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 129 "data//maps/MahaloTrail/scripts.pory"
	setflag FLAG_PREVENT_RUNNING
# 130 "data//maps/MahaloTrail/scripts.pory"
	setflag FLAG_PREVENT_CATCHING
# 131 "data//maps/MahaloTrail/scripts.pory"
	setflag FLAG_SMART_WILD_MONS
# 132 "data//maps/MahaloTrail/scripts.pory"
	setwildbattle SPECIES_CORVIKNIGHT, 50
# 133 "data//maps/MahaloTrail/scripts.pory"
	dowildbattle
# 136 "data//maps/MahaloTrail/scripts.pory"
	clearflag FLAG_LILLIE_NEEDS_HELP_MAHALO_TRAIL
# 137 "data//maps/MahaloTrail/scripts.pory"
	clearflag FLAG_PREVENT_RUNNING
# 138 "data//maps/MahaloTrail/scripts.pory"
	clearflag FLAG_PREVENT_CATCHING
# 139 "data//maps/MahaloTrail/scripts.pory"
	clearflag FLAG_SMART_WILD_MONS
# 140 "data//maps/MahaloTrail/scripts.pory"
	special HealPlayerParty
# 141 "data//maps/MahaloTrail/scripts.pory"
	delay 20
# 142 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_PlayerSavesCosmog_Text_0
# 143 "data//maps/MahaloTrail/scripts.pory"
	playmoncry SPECIES_CORVIKNIGHT, CRY_MODE_NORMAL
# 144 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_PlayerSavesCosmog_Text_3
# 145 "data//maps/MahaloTrail/scripts.pory"
	waitmoncry
# 146 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 147 "data//maps/MahaloTrail/scripts.pory"
	createplayerfieldmugshot EMOTION_SAD
# 148 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_PlayerSavesCosmog_Text_4
# 149 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 150 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 153 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 154 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_NEBBIE_ON_BRIDGE, MahaloTrail_Script_PlayerSavesCosmog_Movement_2
# 155 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 156 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_PlayerSavesCosmog_Text_5
# 157 "data//maps/MahaloTrail/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_NORMAL
# 158 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_PlayerSavesCosmog_Text_6
# 159 "data//maps/MahaloTrail/scripts.pory"
	waitmoncry
# 160 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 161 "data//maps/MahaloTrail/scripts.pory"
	createplayerfieldmugshot EMOTION_INTENSE
# 162 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_PlayerSavesCosmog_Text_7
# 163 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 164 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 166 "data//maps/MahaloTrail/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 167 "data//maps/MahaloTrail/scripts.pory"
	delay 30
# 170 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, MahaloTrail_Script_PlayerSavesCosmog_Movement_3
# 171 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_NEBBIE_ON_BRIDGE, MahaloTrail_Script_PlayerSavesCosmog_Movement_3
# 172 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 173 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_LILLIE_AT_BRIDGE, MahaloTrail_Script_PlayerSavesCosmog_Movement_4
# 174 "data//maps/MahaloTrail/scripts.pory"
	clearflag FLAG_HIDE_TAPU_KOKO_MAHALO_TRAIL
# 175 "data//maps/MahaloTrail/scripts.pory"
	addobject 8
# 176 "data//maps/MahaloTrail/scripts.pory"
	addobject 9
# 178 "data//maps/MahaloTrail/scripts.pory"
	delay 30
# 179 "data//maps/MahaloTrail/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 180 "data//maps/MahaloTrail/scripts.pory"
	delay 20
# 183 "data//maps/MahaloTrail/scripts.pory"
	emote LOCALID_LILLIE_AT_BRIDGE, EMOTE_EXCLAM
# 184 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 185 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_LillieNeedsPlayer_Text_0
# 186 "data//maps/MahaloTrail/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT, EMOTION_INTENSE
# 187 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_PlayerSavesCosmog_Text_8
# 188 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 189 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 190 "data//maps/MahaloTrail/scripts.pory"
	applymovement 8, MahaloTrail_Script_PlayerSavesCosmog_Movement_5
# 191 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 192 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 193 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 194 "data//maps/MahaloTrail/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_EXCLAM
# 195 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 196 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_PlayerSavesCosmog_Text_9
# 197 "data//maps/MahaloTrail/scripts.pory"
	playmoncry SPECIES_TAPU_KOKO, CRY_MODE_NORMAL
# 198 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_PlayerSavesCosmog_Text_10
# 199 "data//maps/MahaloTrail/scripts.pory"
	waitmoncry
# 200 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 203 "data//maps/MahaloTrail/scripts.pory"
	applymovement 9, MahaloTrail_Script_PlayerSavesCosmog_Movement_6
# 204 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 205 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 206 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 207 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_HauCaughtByCorvisquire_Text_0
# 208 "data//maps/MahaloTrail/scripts.pory"
	createfieldmugshot MUGSHOT_HAU
# 209 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_PlayerSavesCosmog_Text_11
# 210 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 211 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 212 "data//maps/MahaloTrail/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 213 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 214 "data//maps/MahaloTrail/scripts.pory"
	applymovement 8, MahaloTrail_Script_PlayerSavesCosmog_Movement_7
# 215 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 216 "data//maps/MahaloTrail/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 217 "data//maps/MahaloTrail/scripts.pory"
	delay 20
# 218 "data//maps/MahaloTrail/scripts.pory"
	emote 9, EMOTE_EXCLAM
# 219 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 222 "data//maps/MahaloTrail/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 223 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 224 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 225 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_HauCaughtByCorvisquire_Text_0
# 226 "data//maps/MahaloTrail/scripts.pory"
	createfieldmugshot MUGSHOT_HAU
# 227 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_PlayerSavesCosmog_Text_12
# 228 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 231 "data//maps/MahaloTrail/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 232 "data//maps/MahaloTrail/scripts.pory"
	delay 30
# 233 "data//maps/MahaloTrail/scripts.pory"
	setflag FLAG_HIDE_EVENT_POKEMON_MAHALO_TRAIL
# 234 "data//maps/MahaloTrail/scripts.pory"
	removeobject 5
# 235 "data//maps/MahaloTrail/scripts.pory"
	removeobject LOCALID_LILLIE_AT_BRIDGE
# 236 "data//maps/MahaloTrail/scripts.pory"
	removeobject LOCALID_NEBBIE_ON_BRIDGE
# 238 "data//maps/MahaloTrail/scripts.pory"
	removeobject 8
# 239 "data//maps/MahaloTrail/scripts.pory"
	removeobject 9
# 240 "data//maps/MahaloTrail/scripts.pory"
	delay 30
# 242 "data//maps/MahaloTrail/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 243 "data//maps/MahaloTrail/scripts.pory"
	warpcontinuescript MAP_IKI_TOWN, 28, 1, IkiTown_Script_SavedLillie
# 245 "data//maps/MahaloTrail/scripts.pory"
	releaseall
	end


MahaloTrail_NPC_Hau::
# 253 "data//maps/MahaloTrail/scripts.pory"
	lock
# 254 "data//maps/MahaloTrail/scripts.pory"
	faceplayer
# 255 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_HauCaughtByCorvisquire_Text_0
# 256 "data//maps/MahaloTrail/scripts.pory"
	createfieldmugshot MUGSHOT_HAU, EMOTION_INTENSE
# 257 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_NPC_Hau_Text_0
# 258 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 259 "data//maps/MahaloTrail/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceRight
# 260 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 261 "data//maps/MahaloTrail/scripts.pory"
	release
	end


MahaloTrail_NPC_Corvisquire::
# 267 "data//maps/MahaloTrail/scripts.pory"
	lock
# 268 "data//maps/MahaloTrail/scripts.pory"
	faceplayer
# 269 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_NPC_Corvisquire_Text_0
# 270 "data//maps/MahaloTrail/scripts.pory"
	playmoncry SPECIES_CORVISQUIRE, CRY_MODE_NORMAL
# 271 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_NPC_Corvisquire_Text_1
# 272 "data//maps/MahaloTrail/scripts.pory"
	waitmoncry
# 273 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 274 "data//maps/MahaloTrail/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
# 275 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 276 "data//maps/MahaloTrail/scripts.pory"
	release
	end


MahaloTrail_NPC_LillieAtBridge::
# 282 "data//maps/MahaloTrail/scripts.pory"
	lock
# 283 "data//maps/MahaloTrail/scripts.pory"
	faceplayer
# 284 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_LillieNeedsPlayer_Text_0
# 285 "data//maps/MahaloTrail/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT, EMOTION_SAD
# 286 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_NPC_LillieAtBridge_Text_0
# 287 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 288 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_LILLIE_AT_BRIDGE, Common_Movement_FaceUp
# 289 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 290 "data//maps/MahaloTrail/scripts.pory"
	release
	end


MahaloTrail_NPC_BlackBelt::
# 296 "data//maps/MahaloTrail/scripts.pory"
	lock
# 297 "data//maps/MahaloTrail/scripts.pory"
	faceplayer
# 298 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_NPC_BlackBelt_Text_0
# 299 "data//maps/MahaloTrail/scripts.pory"
	goto_if_unset FLAG_HIDE_HAU_CORVISQUIRE_MAHALO_TRAIL, MahaloTrail_NPC_BlackBelt_2
# 305 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_NPC_BlackBelt_Text_2
MahaloTrail_NPC_BlackBelt_1:
# 307 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 308 "data//maps/MahaloTrail/scripts.pory"
	release
	end

MahaloTrail_NPC_BlackBelt_2:
# 301 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_NPC_BlackBelt_Text_1
	goto MahaloTrail_NPC_BlackBelt_1


MahaloTrail_NPC_Woman::
# 314 "data//maps/MahaloTrail/scripts.pory"
	lock
# 315 "data//maps/MahaloTrail/scripts.pory"
	faceplayer
# 316 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_NPC_Woman_Text_0
# 317 "data//maps/MahaloTrail/scripts.pory"
	goto_if_unset FLAG_HIDE_HAU_CORVISQUIRE_MAHALO_TRAIL, MahaloTrail_NPC_Woman_2
# 323 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_NPC_Woman_Text_2
MahaloTrail_NPC_Woman_1:
# 325 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 326 "data//maps/MahaloTrail/scripts.pory"
	release
	end

MahaloTrail_NPC_Woman_2:
# 319 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_NPC_Woman_Text_1
	goto MahaloTrail_NPC_Woman_1


MahaloTrail_Sign_BridgeWarning::
# 334 "data//maps/MahaloTrail/scripts.pory"
	lock
# 335 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Sign_BridgeWarning_Text_0, MSGBOX_SIGN
# 336 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 337 "data//maps/MahaloTrail/scripts.pory"
	release
	end


# 8 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_HauCaughtByCorvisquire_Movement_0:
# 8 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_left
# 8 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_left
# 8 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_left
# 8 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_up
# 8 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_right
# 8 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_right
# 8 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_right
# 8 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_right
# 8 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_down
# 8 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_left
# 8 "data//maps/MahaloTrail/scripts.pory"
	face_right
# 8 "data//maps/MahaloTrail/scripts.pory"
	jump_in_place_right
# 8 "data//maps/MahaloTrail/scripts.pory"
	jump_in_place_right
# 8 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 9 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_HauCaughtByCorvisquire_Movement_1:
# 9 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_left
# 9 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_left
# 9 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_left
# 9 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_left
# 9 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_up
# 9 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_right
# 9 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_right
# 9 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_right
# 9 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_right
# 9 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_down
# 9 "data//maps/MahaloTrail/scripts.pory"
	face_left
# 9 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 37 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_LillieNeedsPlayer_Movement_0:
# 37 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 37 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 37 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 37 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 37 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 37 "data//maps/MahaloTrail/scripts.pory"
	face_up
# 37 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 39 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_LillieNeedsPlayer_Movement_1:
# 39 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 39 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 39 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 39 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 39 "data//maps/MahaloTrail/scripts.pory"
	face_up
# 39 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 41 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_LillieNeedsPlayer_Movement_2:
# 41 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 41 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 41 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 41 "data//maps/MahaloTrail/scripts.pory"
	face_up
# 41 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 43 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_LillieNeedsPlayer_Movement_3:
# 43 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 43 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 43 "data//maps/MahaloTrail/scripts.pory"
	face_up
# 43 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 45 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_LillieNeedsPlayer_Movement_4:
# 45 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 45 "data//maps/MahaloTrail/scripts.pory"
	face_up
# 45 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 47 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_LillieNeedsPlayer_Movement_5:
# 47 "data//maps/MahaloTrail/scripts.pory"
	walk_left
# 47 "data//maps/MahaloTrail/scripts.pory"
	face_up
# 47 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 55 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_LillieNeedsPlayer_Movement_6:
# 55 "data//maps/MahaloTrail/scripts.pory"
	jump_in_place_up
# 55 "data//maps/MahaloTrail/scripts.pory"
	jump_in_place_up
# 55 "data//maps/MahaloTrail/scripts.pory"
	face_up
# 55 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 86 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_LillieBlocksLeaving_Movement_0:
# 86 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_down
# 86 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_down
# 86 "data//maps/MahaloTrail/scripts.pory"
	jump_in_place_left
# 86 "data//maps/MahaloTrail/scripts.pory"
	jump_in_place_left
# 86 "data//maps/MahaloTrail/scripts.pory"
	jump_in_place_left
# 86 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 93 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_LillieBlocksLeaving_Movement_1:
# 93 "data//maps/MahaloTrail/scripts.pory"
	walk_up
# 93 "data//maps/MahaloTrail/scripts.pory"
	walk_up
# 93 "data//maps/MahaloTrail/scripts.pory"
	face_up
# 93 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 110 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_PlayerSavesCosmog_Movement_0:
# 110 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 110 "data//maps/MahaloTrail/scripts.pory"
	walk_down
# 110 "data//maps/MahaloTrail/scripts.pory"
	face_left
# 110 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 118 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_PlayerSavesCosmog_Movement_1:
# 118 "data//maps/MahaloTrail/scripts.pory"
	walk_down
# 118 "data//maps/MahaloTrail/scripts.pory"
	walk_down
# 118 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 154 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_PlayerSavesCosmog_Movement_2:
# 154 "data//maps/MahaloTrail/scripts.pory"
	jump_in_place_left
# 154 "data//maps/MahaloTrail/scripts.pory"
	jump_in_place_left
# 154 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 170 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_PlayerSavesCosmog_Movement_3:
# 170 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 170 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 170 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 170 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 170 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 170 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 170 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 170 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 170 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 170 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 170 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 170 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 170 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 173 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_PlayerSavesCosmog_Movement_4:
# 173 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_right
# 173 "data//maps/MahaloTrail/scripts.pory"
	face_up
# 173 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 190 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_PlayerSavesCosmog_Movement_5:
# 190 "data//maps/MahaloTrail/scripts.pory"
	walk_down
# 190 "data//maps/MahaloTrail/scripts.pory"
	walk_down
# 190 "data//maps/MahaloTrail/scripts.pory"
	walk_down
# 190 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 203 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_PlayerSavesCosmog_Movement_6:
# 203 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_up
# 203 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_up
# 203 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_right
# 203 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_right
# 203 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_right
# 203 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_right
# 203 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_up
# 203 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_up
# 203 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_up
# 203 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_up
# 203 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 214 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_PlayerSavesCosmog_Movement_7:
# 214 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_up
# 214 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_up
# 214 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_up
# 214 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_up
	step_end

MahaloTrail_Script_HauCaughtByCorvisquire_Text_0:
# 17 "data//maps/MahaloTrail/scripts.pory"
	.string "Hau$"

MahaloTrail_Script_HauCaughtByCorvisquire_Text_1:
# 19 "data//maps/MahaloTrail/scripts.pory"
	.string "{PLAYER}! This {COLOR BLUE}Corvisquire{COLOR DARK_GRAY} is givin' me\n"
	.string "a fight, and I don't have a Pokémon yet!\p"
	.string "Don't worry about me though, cuz.\n"
	.string "{COLOR GREEN}Lillie{COLOR DARK_GRAY}'s further on, and her Pokémon's in\l"
	.string "trouble! You gotta {COLOR GREEN}save her{COLOR DARK_GRAY}!$"

MahaloTrail_Script_LillieNeedsPlayer_Text_0:
# 57 "data//maps/MahaloTrail/scripts.pory"
	.string "Lillie$"

MahaloTrail_Script_LillieNeedsPlayer_Text_1:
# 59 "data//maps/MahaloTrail/scripts.pory"
	.string "Sniff... {COLOR BLUE}Nebbie{COLOR DARK_GRAY}!! Just hold on!!$"

MahaloTrail_Script_LillieNeedsPlayer_Text_2:
# 70 "data//maps/MahaloTrail/scripts.pory"
	.string "Oh? You must be Hau's new friend, the\n"
	.string "one that got a Pokémon early...\p"
	.string "H-help... Please, you have to save\n"
	.string "{COLOR BLUE}Nebbie{COLOR DARK_GRAY}! It ran ahead of me and Hau, and\l"
	.string "now it's being attacked!\p"
	.string "I'll heal your {STR_VAR_1}, so...\n"
	.string "Please!$"

MahaloTrail_Script_LillieBlocksLeaving_Text_0:
# 91 "data//maps/MahaloTrail/scripts.pory"
	.string "P-please! {COLOR BLUE}Nebbie{COLOR DARK_GRAY} won't last long on\n"
	.string "that bridge, you have to help it!$"

MahaloTrail_Script_PlayerSavesCosmog_Text_0:
# 120 "data//maps/MahaloTrail/scripts.pory"
	.string "Corviknight$"

MahaloTrail_Script_PlayerSavesCosmog_Text_1:
# 122 "data//maps/MahaloTrail/scripts.pory"
	.string "Shk-AWW!!$"

MahaloTrail_Script_PlayerSavesCosmog_Text_2:
# 126 "data//maps/MahaloTrail/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Woah, the wild {COLOR BLUE}Corviknight{COLOR DARK_GRAY} is enraged!$"

MahaloTrail_Script_PlayerSavesCosmog_Text_3:
# 144 "data//maps/MahaloTrail/scripts.pory"
	.string "KYAAA!!$"

MahaloTrail_Script_PlayerSavesCosmog_Text_4:
# 148 "data//maps/MahaloTrail/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}{COLOR BLUE}Corviknight{COLOR DARK_GRAY} is still on a rampage! What\n"
	.string "do I do now?!$"

MahaloTrail_Script_PlayerSavesCosmog_Text_5:
# 156 "data//maps/MahaloTrail/scripts.pory"
	.string "Nebbie$"

MahaloTrail_Script_PlayerSavesCosmog_Text_6:
# 158 "data//maps/MahaloTrail/scripts.pory"
	.string "Bwh... Bweeh!!$"

MahaloTrail_Script_PlayerSavesCosmog_Text_7:
# 162 "data//maps/MahaloTrail/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}That Pokémon, uh, {COLOR BLUE}Nebbie{COLOR DARK_GRAY}... It's emitting\n"
	.string "a bright light!$"

MahaloTrail_Script_PlayerSavesCosmog_Text_8:
# 187 "data//maps/MahaloTrail/scripts.pory"
	.string "{COLOR BLUE}Nebbie{COLOR DARK_GRAY}, did you try to use your powers\n"
	.string "again? You couldn't move for ages last\l"
	.string "time...\p"
	.string "I couldn't see anything through the\n"
	.string "flash of light. How did you get back\l"
	.string "here?!$"

MahaloTrail_Script_PlayerSavesCosmog_Text_9:
# 196 "data//maps/MahaloTrail/scripts.pory"
	.string "???$"

MahaloTrail_Script_PlayerSavesCosmog_Text_10:
# 198 "data//maps/MahaloTrail/scripts.pory"
	.string "KYAH!$"

MahaloTrail_Script_PlayerSavesCosmog_Text_11:
# 209 "data//maps/MahaloTrail/scripts.pory"
	.string "Tutu Hala taught me... This is {COLOR BLUE}Tapu Koko{COLOR DARK_GRAY},\n"
	.string "a Legendary Pokémon!\p"
	.string "Woah, did it save you and {COLOR BLUE}Nebbie{COLOR DARK_GRAY} on the\n"
	.string "bridge?!$"

MahaloTrail_Script_PlayerSavesCosmog_Text_12:
# 227 "data//maps/MahaloTrail/scripts.pory"
	.string "Aie! It flew away so fast!\p"
	.string "{PLAYER}, let's bring Lillie back to\n"
	.string "Iki Town. Hala and Kukui will know what\l"
	.string "to do!$"

MahaloTrail_NPC_Hau_Text_0:
# 257 "data//maps/MahaloTrail/scripts.pory"
	.string "I'll be fine, cuz! {COLOR GREEN}Lillie{COLOR DARK_GRAY}'s further up the\n"
	.string "trail, and it sounds like she's in\l"
	.string "trouble! Look for her floppy white hat!$"

MahaloTrail_NPC_Corvisquire_Text_0:
# 269 "data//maps/MahaloTrail/scripts.pory"
	.string "Corvisquire$"

MahaloTrail_NPC_Corvisquire_Text_1:
# 271 "data//maps/MahaloTrail/scripts.pory"
	.string "Cree-aww!$"

MahaloTrail_NPC_LillieAtBridge_Text_0:
# 286 "data//maps/MahaloTrail/scripts.pory"
	.string "You have to save {COLOR BLUE}Nebbie{COLOR DARK_GRAY}! It won't last\n"
	.string "long with those Pokémon attacking it!$"

MahaloTrail_NPC_BlackBelt_Text_0:
# 298 "data//maps/MahaloTrail/scripts.pory"
	.string "Black Belt$"

MahaloTrail_NPC_BlackBelt_Text_1:
# 301 "data//maps/MahaloTrail/scripts.pory"
	.string "I came here to try and find the\n"
	.string "{COLOR GREEN}Guardian Deity{COLOR DARK_GRAY} of Melemele Island.\p"
	.string "It sounds like there's trouble up ahead,\n"
	.string "though... What's going on?$"

MahaloTrail_NPC_BlackBelt_Text_2:
# 305 "data//maps/MahaloTrail/scripts.pory"
	.string "I came here to try and find the\n"
	.string "{COLOR GREEN}Guardian Deity{COLOR DARK_GRAY} of Melemele Island.\p"
	.string "What?! You actually saw it?$"

MahaloTrail_NPC_Woman_Text_0:
# 316 "data//maps/MahaloTrail/scripts.pory"
	.string "Woman$"

MahaloTrail_NPC_Woman_Text_1:
# 319 "data//maps/MahaloTrail/scripts.pory"
	.string "I came here looking for bird Pokémon,\n"
	.string "but they all seem agitated right now! Is\l"
	.string "something happening?$"

MahaloTrail_NPC_Woman_Text_2:
# 323 "data//maps/MahaloTrail/scripts.pory"
	.string "The bird Pokémon seem to have calmed\n"
	.string "down around here. Still, I wonder what\l"
	.string "caused that...$"

MahaloTrail_Sign_BridgeWarning_Text_0:
# 335 "data//maps/MahaloTrail/scripts.pory"
	.string "{COLOR RED}WARNING!{COLOR DARK_GRAY}\n"
	.string "Wooden bridge is unstable!\p"
	.string "50 foot drop! Only cross with Kahuna\n"
	.string "Hala's supervision!$"

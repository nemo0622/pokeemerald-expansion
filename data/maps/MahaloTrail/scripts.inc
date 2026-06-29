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
	msgbox MahaloTrail_Script_HauCaughtByCorvisquire_Text_1
# 19 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 20 "data//maps/MahaloTrail/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 21 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 23 "data//maps/MahaloTrail/scripts.pory"
	setflag FLAG_COMPLETED_CORVISQUIRE_HAU_EVENT
# 25 "data//maps/MahaloTrail/scripts.pory"
	releaseall
	end


MahaloTrail_Script_LillieNeedsPlayer::
# 31 "data//maps/MahaloTrail/scripts.pory"
	lockall
# 32 "data//maps/MahaloTrail/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 33 "data//maps/MahaloTrail/scripts.pory"
	switch VAR_TEMP_1
# 35 "data//maps/MahaloTrail/scripts.pory"
	case 11, MahaloTrail_Script_LillieNeedsPlayer_3
# 37 "data//maps/MahaloTrail/scripts.pory"
	case 12, MahaloTrail_Script_LillieNeedsPlayer_4
# 39 "data//maps/MahaloTrail/scripts.pory"
	case 13, MahaloTrail_Script_LillieNeedsPlayer_5
# 41 "data//maps/MahaloTrail/scripts.pory"
	case 14, MahaloTrail_Script_LillieNeedsPlayer_6
# 43 "data//maps/MahaloTrail/scripts.pory"
	case 15, MahaloTrail_Script_LillieNeedsPlayer_7
# 45 "data//maps/MahaloTrail/scripts.pory"
	case 17, MahaloTrail_Script_LillieNeedsPlayer_8
# 48 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
MahaloTrail_Script_LillieNeedsPlayer_1:
# 52 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 53 "data//maps/MahaloTrail/scripts.pory"
	delay 15
# 54 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_LILLIE_AT_BRIDGE, MahaloTrail_Script_LillieNeedsPlayer_Movement_6
# 55 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 56 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_LillieNeedsPlayer_Text_0
# 57 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_LillieNeedsPlayer_Text_1
# 58 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 59 "data//maps/MahaloTrail/scripts.pory"
	delay 15
# 60 "data//maps/MahaloTrail/scripts.pory"
	emote LOCALID_LILLIE_AT_BRIDGE, EMOTE_QUESTION
# 61 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 63 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_LILLIE_AT_BRIDGE, Common_Movement_FaceDown
# 64 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 65 "data//maps/MahaloTrail/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_MON
# 66 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_LillieNeedsPlayer_Text_0
# 67 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_LillieNeedsPlayer_Text_2
# 68 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 69 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_LILLIE_AT_BRIDGE, Common_Movement_FaceUp
# 70 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 72 "data//maps/MahaloTrail/scripts.pory"
	special HealPlayerParty
# 73 "data//maps/MahaloTrail/scripts.pory"
	setflag FLAG_LILLIE_NEEDS_HELP_MAHALO_TRAIL
# 74 "data//maps/MahaloTrail/scripts.pory"
	setflag FLAG_HIDE_HAU_CORVISQUIRE_MAHALO_TRAIL
# 75 "data//maps/MahaloTrail/scripts.pory"
	delay 15
# 76 "data//maps/MahaloTrail/scripts.pory"
	releaseall
	end

MahaloTrail_Script_LillieNeedsPlayer_3:
# 36 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, MahaloTrail_Script_LillieNeedsPlayer_Movement_0
	goto MahaloTrail_Script_LillieNeedsPlayer_1

MahaloTrail_Script_LillieNeedsPlayer_4:
# 38 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, MahaloTrail_Script_LillieNeedsPlayer_Movement_1
	goto MahaloTrail_Script_LillieNeedsPlayer_1

MahaloTrail_Script_LillieNeedsPlayer_5:
# 40 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, MahaloTrail_Script_LillieNeedsPlayer_Movement_2
	goto MahaloTrail_Script_LillieNeedsPlayer_1

MahaloTrail_Script_LillieNeedsPlayer_6:
# 42 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, MahaloTrail_Script_LillieNeedsPlayer_Movement_3
	goto MahaloTrail_Script_LillieNeedsPlayer_1

MahaloTrail_Script_LillieNeedsPlayer_7:
# 44 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, MahaloTrail_Script_LillieNeedsPlayer_Movement_4
	goto MahaloTrail_Script_LillieNeedsPlayer_1

MahaloTrail_Script_LillieNeedsPlayer_8:
# 46 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, MahaloTrail_Script_LillieNeedsPlayer_Movement_5
	goto MahaloTrail_Script_LillieNeedsPlayer_1


MahaloTrail_Script_LillieBlocksLeaving::
# 82 "data//maps/MahaloTrail/scripts.pory"
	lockall
# 83 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_LILLIE_AT_BRIDGE, MahaloTrail_Script_LillieBlocksLeaving_Movement_0
# 84 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 85 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 86 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_LillieNeedsPlayer_Text_0
# 87 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_LillieBlocksLeaving_Text_0
# 88 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 89 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_LILLIE_AT_BRIDGE, MahaloTrail_Script_LillieBlocksLeaving_Movement_1
# 90 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 91 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 92 "data//maps/MahaloTrail/scripts.pory"
	releaseall
	end


MahaloTrail_Script_PlayerSavesCosmog::
# 98 "data//maps/MahaloTrail/scripts.pory"
	lockall
# 101 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 102 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 103 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 104 "data//maps/MahaloTrail/scripts.pory"
	emote LOCALID_NEBBIE_ON_BRIDGE, EMOTE_EXCLAM
# 105 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 106 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_NEBBIE_ON_BRIDGE, MahaloTrail_Script_PlayerSavesCosmog_Movement_0
# 107 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 108 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 109 "data//maps/MahaloTrail/scripts.pory"
	emote LOCALID_NEBBIE_ON_BRIDGE, EMOTE_HEART
# 110 "data//maps/MahaloTrail/scripts.pory"
	delay 20
# 113 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 114 "data//maps/MahaloTrail/scripts.pory"
	applymovement 5, MahaloTrail_Script_PlayerSavesCosmog_Movement_1
# 115 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 116 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_PlayerSavesCosmog_Text_0
# 117 "data//maps/MahaloTrail/scripts.pory"
	playmoncry SPECIES_CORVIKNIGHT, CRY_MODE_NORMAL
# 118 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_PlayerSavesCosmog_Text_1
# 119 "data//maps/MahaloTrail/scripts.pory"
	waitmoncry
# 120 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 121 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_PlayerSavesCosmog_Text_2
# 122 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 124 "data//maps/MahaloTrail/scripts.pory"
	setflag FLAG_PREVENT_RUNNING
# 125 "data//maps/MahaloTrail/scripts.pory"
	setflag FLAG_PREVENT_CATCHING
# 126 "data//maps/MahaloTrail/scripts.pory"
	setflag FLAG_SMART_WILD_MONS
# 127 "data//maps/MahaloTrail/scripts.pory"
	setwildbattle SPECIES_CORVIKNIGHT, 50
# 128 "data//maps/MahaloTrail/scripts.pory"
	dowildbattle
# 131 "data//maps/MahaloTrail/scripts.pory"
	clearflag FLAG_LILLIE_NEEDS_HELP_MAHALO_TRAIL
# 132 "data//maps/MahaloTrail/scripts.pory"
	clearflag FLAG_PREVENT_RUNNING
# 133 "data//maps/MahaloTrail/scripts.pory"
	clearflag FLAG_PREVENT_CATCHING
# 134 "data//maps/MahaloTrail/scripts.pory"
	clearflag FLAG_SMART_WILD_MONS
# 135 "data//maps/MahaloTrail/scripts.pory"
	special HealPlayerParty
# 136 "data//maps/MahaloTrail/scripts.pory"
	delay 20
# 137 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_PlayerSavesCosmog_Text_0
# 138 "data//maps/MahaloTrail/scripts.pory"
	playmoncry SPECIES_CORVIKNIGHT, CRY_MODE_NORMAL
# 139 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_PlayerSavesCosmog_Text_3
# 140 "data//maps/MahaloTrail/scripts.pory"
	waitmoncry
# 141 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 142 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_PlayerSavesCosmog_Text_4
# 143 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 144 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 147 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 148 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_NEBBIE_ON_BRIDGE, MahaloTrail_Script_PlayerSavesCosmog_Movement_2
# 149 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 150 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_PlayerSavesCosmog_Text_5
# 151 "data//maps/MahaloTrail/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_NORMAL
# 152 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_PlayerSavesCosmog_Text_6
# 153 "data//maps/MahaloTrail/scripts.pory"
	waitmoncry
# 154 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 155 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_PlayerSavesCosmog_Text_7
# 156 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 157 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 159 "data//maps/MahaloTrail/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 160 "data//maps/MahaloTrail/scripts.pory"
	delay 30
# 163 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, MahaloTrail_Script_PlayerSavesCosmog_Movement_3
# 164 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_NEBBIE_ON_BRIDGE, MahaloTrail_Script_PlayerSavesCosmog_Movement_3
# 165 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 166 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_LILLIE_AT_BRIDGE, MahaloTrail_Script_PlayerSavesCosmog_Movement_4
# 167 "data//maps/MahaloTrail/scripts.pory"
	clearflag FLAG_HIDE_TAPU_KOKO_MAHALO_TRAIL
# 168 "data//maps/MahaloTrail/scripts.pory"
	addobject 8
# 169 "data//maps/MahaloTrail/scripts.pory"
	addobject 9
# 171 "data//maps/MahaloTrail/scripts.pory"
	delay 30
# 172 "data//maps/MahaloTrail/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 173 "data//maps/MahaloTrail/scripts.pory"
	delay 20
# 176 "data//maps/MahaloTrail/scripts.pory"
	emote LOCALID_LILLIE_AT_BRIDGE, EMOTE_EXCLAM
# 177 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 178 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_LillieNeedsPlayer_Text_0
# 179 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_PlayerSavesCosmog_Text_8
# 180 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 181 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 182 "data//maps/MahaloTrail/scripts.pory"
	applymovement 8, MahaloTrail_Script_PlayerSavesCosmog_Movement_5
# 183 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 184 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 185 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 186 "data//maps/MahaloTrail/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_EXCLAM
# 187 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 188 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_PlayerSavesCosmog_Text_9
# 189 "data//maps/MahaloTrail/scripts.pory"
	playmoncry SPECIES_TAPU_KOKO, CRY_MODE_NORMAL
# 190 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_PlayerSavesCosmog_Text_10
# 191 "data//maps/MahaloTrail/scripts.pory"
	waitmoncry
# 192 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 195 "data//maps/MahaloTrail/scripts.pory"
	applymovement 9, MahaloTrail_Script_PlayerSavesCosmog_Movement_6
# 196 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 197 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 198 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 199 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_HauCaughtByCorvisquire_Text_0
# 200 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_PlayerSavesCosmog_Text_11
# 201 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 202 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 203 "data//maps/MahaloTrail/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 204 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 205 "data//maps/MahaloTrail/scripts.pory"
	applymovement 8, MahaloTrail_Script_PlayerSavesCosmog_Movement_7
# 206 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 207 "data//maps/MahaloTrail/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 208 "data//maps/MahaloTrail/scripts.pory"
	delay 20
# 209 "data//maps/MahaloTrail/scripts.pory"
	emote 9, EMOTE_EXCLAM
# 210 "data//maps/MahaloTrail/scripts.pory"
	delay 10
# 213 "data//maps/MahaloTrail/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 214 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 215 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 216 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_HauCaughtByCorvisquire_Text_0
# 217 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Script_PlayerSavesCosmog_Text_12
# 218 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 221 "data//maps/MahaloTrail/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 222 "data//maps/MahaloTrail/scripts.pory"
	delay 30
# 223 "data//maps/MahaloTrail/scripts.pory"
	setflag FLAG_HIDE_EVENT_POKEMON_MAHALO_TRAIL
# 224 "data//maps/MahaloTrail/scripts.pory"
	removeobject 5
# 225 "data//maps/MahaloTrail/scripts.pory"
	removeobject LOCALID_LILLIE_AT_BRIDGE
# 226 "data//maps/MahaloTrail/scripts.pory"
	removeobject LOCALID_NEBBIE_ON_BRIDGE
# 228 "data//maps/MahaloTrail/scripts.pory"
	removeobject 8
# 229 "data//maps/MahaloTrail/scripts.pory"
	removeobject 9
# 230 "data//maps/MahaloTrail/scripts.pory"
	delay 30
# 232 "data//maps/MahaloTrail/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 233 "data//maps/MahaloTrail/scripts.pory"
	warpcontinuescript MAP_IKI_TOWN, 28, 1, IkiTown_Script_SavedLillie
# 235 "data//maps/MahaloTrail/scripts.pory"
	releaseall
	end


MahaloTrail_NPC_Hau::
# 243 "data//maps/MahaloTrail/scripts.pory"
	lock
# 244 "data//maps/MahaloTrail/scripts.pory"
	faceplayer
# 245 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_HauCaughtByCorvisquire_Text_0
# 246 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_NPC_Hau_Text_0
# 247 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 248 "data//maps/MahaloTrail/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceRight
# 249 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 250 "data//maps/MahaloTrail/scripts.pory"
	release
	end


MahaloTrail_NPC_Corvisquire::
# 256 "data//maps/MahaloTrail/scripts.pory"
	lock
# 257 "data//maps/MahaloTrail/scripts.pory"
	faceplayer
# 258 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_NPC_Corvisquire_Text_0
# 259 "data//maps/MahaloTrail/scripts.pory"
	playmoncry SPECIES_CORVISQUIRE, CRY_MODE_NORMAL
# 260 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_NPC_Corvisquire_Text_1
# 261 "data//maps/MahaloTrail/scripts.pory"
	waitmoncry
# 262 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 263 "data//maps/MahaloTrail/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
# 264 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 265 "data//maps/MahaloTrail/scripts.pory"
	release
	end


MahaloTrail_NPC_LillieAtBridge::
# 271 "data//maps/MahaloTrail/scripts.pory"
	lock
# 272 "data//maps/MahaloTrail/scripts.pory"
	faceplayer
# 273 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_Script_LillieNeedsPlayer_Text_0
# 274 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_NPC_LillieAtBridge_Text_0
# 275 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 276 "data//maps/MahaloTrail/scripts.pory"
	applymovement LOCALID_LILLIE_AT_BRIDGE, Common_Movement_FaceUp
# 277 "data//maps/MahaloTrail/scripts.pory"
	waitmovement 0
# 278 "data//maps/MahaloTrail/scripts.pory"
	release
	end


MahaloTrail_NPC_BlackBelt::
# 284 "data//maps/MahaloTrail/scripts.pory"
	lock
# 285 "data//maps/MahaloTrail/scripts.pory"
	faceplayer
# 286 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_NPC_BlackBelt_Text_0
# 287 "data//maps/MahaloTrail/scripts.pory"
	goto_if_unset FLAG_HIDE_HAU_CORVISQUIRE_MAHALO_TRAIL, MahaloTrail_NPC_BlackBelt_2
# 293 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_NPC_BlackBelt_Text_2
MahaloTrail_NPC_BlackBelt_1:
# 295 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 296 "data//maps/MahaloTrail/scripts.pory"
	release
	end

MahaloTrail_NPC_BlackBelt_2:
# 289 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_NPC_BlackBelt_Text_1
	goto MahaloTrail_NPC_BlackBelt_1


MahaloTrail_NPC_Woman::
# 302 "data//maps/MahaloTrail/scripts.pory"
	lock
# 303 "data//maps/MahaloTrail/scripts.pory"
	faceplayer
# 304 "data//maps/MahaloTrail/scripts.pory"
	setspeaker MahaloTrail_NPC_Woman_Text_0
# 305 "data//maps/MahaloTrail/scripts.pory"
	goto_if_unset FLAG_HIDE_HAU_CORVISQUIRE_MAHALO_TRAIL, MahaloTrail_NPC_Woman_2
# 311 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_NPC_Woman_Text_2
MahaloTrail_NPC_Woman_1:
# 313 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 314 "data//maps/MahaloTrail/scripts.pory"
	release
	end

MahaloTrail_NPC_Woman_2:
# 307 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_NPC_Woman_Text_1
	goto MahaloTrail_NPC_Woman_1


MahaloTrail_Sign_BridgeWarning::
# 322 "data//maps/MahaloTrail/scripts.pory"
	lock
# 323 "data//maps/MahaloTrail/scripts.pory"
	msgbox MahaloTrail_Sign_BridgeWarning_Text_0
# 324 "data//maps/MahaloTrail/scripts.pory"
	closemessage
# 325 "data//maps/MahaloTrail/scripts.pory"
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

# 36 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_LillieNeedsPlayer_Movement_0:
# 36 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 36 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 36 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 36 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 36 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 36 "data//maps/MahaloTrail/scripts.pory"
	face_up
# 36 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 38 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_LillieNeedsPlayer_Movement_1:
# 38 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 38 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 38 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 38 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 38 "data//maps/MahaloTrail/scripts.pory"
	face_up
# 38 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 40 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_LillieNeedsPlayer_Movement_2:
# 40 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 40 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 40 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 40 "data//maps/MahaloTrail/scripts.pory"
	face_up
# 40 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 42 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_LillieNeedsPlayer_Movement_3:
# 42 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 42 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 42 "data//maps/MahaloTrail/scripts.pory"
	face_up
# 42 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 44 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_LillieNeedsPlayer_Movement_4:
# 44 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 44 "data//maps/MahaloTrail/scripts.pory"
	face_up
# 44 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 46 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_LillieNeedsPlayer_Movement_5:
# 46 "data//maps/MahaloTrail/scripts.pory"
	walk_left
# 46 "data//maps/MahaloTrail/scripts.pory"
	face_up
# 46 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 54 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_LillieNeedsPlayer_Movement_6:
# 54 "data//maps/MahaloTrail/scripts.pory"
	jump_in_place_up
# 54 "data//maps/MahaloTrail/scripts.pory"
	jump_in_place_up
# 54 "data//maps/MahaloTrail/scripts.pory"
	face_up
# 54 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 83 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_LillieBlocksLeaving_Movement_0:
# 83 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_down
# 83 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_down
# 83 "data//maps/MahaloTrail/scripts.pory"
	jump_in_place_left
# 83 "data//maps/MahaloTrail/scripts.pory"
	jump_in_place_left
# 83 "data//maps/MahaloTrail/scripts.pory"
	jump_in_place_left
# 83 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 89 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_LillieBlocksLeaving_Movement_1:
# 89 "data//maps/MahaloTrail/scripts.pory"
	walk_up
# 89 "data//maps/MahaloTrail/scripts.pory"
	walk_up
# 89 "data//maps/MahaloTrail/scripts.pory"
	face_up
# 89 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 106 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_PlayerSavesCosmog_Movement_0:
# 106 "data//maps/MahaloTrail/scripts.pory"
	walk_right
# 106 "data//maps/MahaloTrail/scripts.pory"
	walk_down
# 106 "data//maps/MahaloTrail/scripts.pory"
	face_left
# 106 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 114 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_PlayerSavesCosmog_Movement_1:
# 114 "data//maps/MahaloTrail/scripts.pory"
	walk_down
# 114 "data//maps/MahaloTrail/scripts.pory"
	walk_down
# 114 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 148 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_PlayerSavesCosmog_Movement_2:
# 148 "data//maps/MahaloTrail/scripts.pory"
	jump_in_place_left
# 148 "data//maps/MahaloTrail/scripts.pory"
	jump_in_place_left
# 148 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 163 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_PlayerSavesCosmog_Movement_3:
# 163 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 163 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 163 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 163 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 163 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 163 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 163 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 163 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 163 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 163 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 163 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 163 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_down
# 163 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 166 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_PlayerSavesCosmog_Movement_4:
# 166 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_right
# 166 "data//maps/MahaloTrail/scripts.pory"
	face_up
# 166 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 182 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_PlayerSavesCosmog_Movement_5:
# 182 "data//maps/MahaloTrail/scripts.pory"
	walk_down
# 182 "data//maps/MahaloTrail/scripts.pory"
	walk_down
# 182 "data//maps/MahaloTrail/scripts.pory"
	walk_down
# 182 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 195 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_PlayerSavesCosmog_Movement_6:
# 195 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_up
# 195 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_up
# 195 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_right
# 195 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_right
# 195 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_right
# 195 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_right
# 195 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_up
# 195 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_up
# 195 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_up
# 195 "data//maps/MahaloTrail/scripts.pory"
	walk_fast_up
# 195 "data//maps/MahaloTrail/scripts.pory"
	step_end

# 205 "data//maps/MahaloTrail/scripts.pory"
MahaloTrail_Script_PlayerSavesCosmog_Movement_7:
# 205 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_up
# 205 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_up
# 205 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_up
# 205 "data//maps/MahaloTrail/scripts.pory"
	walk_faster_up
	step_end

MahaloTrail_Script_HauCaughtByCorvisquire_Text_0:
# 17 "data//maps/MahaloTrail/scripts.pory"
	.string "Hau$"

MahaloTrail_Script_HauCaughtByCorvisquire_Text_1:
# 18 "data//maps/MahaloTrail/scripts.pory"
	.string "{PLAYER}! This {COLOR BLUE}Corvisquire{COLOR DARK_GRAY} is givin' me\n"
	.string "a fight, and I don't have a Pokémon yet!\p"
	.string "Don't worry about me though, cuz.\n"
	.string "{COLOR GREEN}Lillie{COLOR DARK_GRAY}'s further on, and her Pokémon's in\l"
	.string "trouble! You gotta {COLOR GREEN}save her{COLOR DARK_GRAY}!$"

MahaloTrail_Script_LillieNeedsPlayer_Text_0:
# 56 "data//maps/MahaloTrail/scripts.pory"
	.string "Lillie$"

MahaloTrail_Script_LillieNeedsPlayer_Text_1:
# 57 "data//maps/MahaloTrail/scripts.pory"
	.string "Sniff... {COLOR BLUE}Nebbie{COLOR DARK_GRAY}!! Just hold on!!$"

MahaloTrail_Script_LillieNeedsPlayer_Text_2:
# 67 "data//maps/MahaloTrail/scripts.pory"
	.string "Oh? You must be Hau's new friend, the\n"
	.string "one that got a Pokémon early...\p"
	.string "H-help... Please, you have to save\n"
	.string "{COLOR BLUE}Nebbie{COLOR DARK_GRAY}! It ran ahead of me and Hau, and\l"
	.string "now it's being attacked!\p"
	.string "I'll heal your {STR_VAR_1}, so...\n"
	.string "Please!$"

MahaloTrail_Script_LillieBlocksLeaving_Text_0:
# 87 "data//maps/MahaloTrail/scripts.pory"
	.string "P-please! {COLOR BLUE}Nebbie{COLOR DARK_GRAY} won't last long on\n"
	.string "that bridge, you have to help it!$"

MahaloTrail_Script_PlayerSavesCosmog_Text_0:
# 116 "data//maps/MahaloTrail/scripts.pory"
	.string "Corviknight$"

MahaloTrail_Script_PlayerSavesCosmog_Text_1:
# 118 "data//maps/MahaloTrail/scripts.pory"
	.string "Shk-AWW!!$"

MahaloTrail_Script_PlayerSavesCosmog_Text_2:
# 121 "data//maps/MahaloTrail/scripts.pory"
	.string "The wild {COLOR BLUE}Corviknight{COLOR DARK_GRAY} is enraged!$"

MahaloTrail_Script_PlayerSavesCosmog_Text_3:
# 139 "data//maps/MahaloTrail/scripts.pory"
	.string "KYAAA!!$"

MahaloTrail_Script_PlayerSavesCosmog_Text_4:
# 142 "data//maps/MahaloTrail/scripts.pory"
	.string "The wild {COLOR BLUE}Corviknight{COLOR DARK_GRAY} is still on a\n"
	.string "rampage!$"

MahaloTrail_Script_PlayerSavesCosmog_Text_5:
# 150 "data//maps/MahaloTrail/scripts.pory"
	.string "Nebbie$"

MahaloTrail_Script_PlayerSavesCosmog_Text_6:
# 152 "data//maps/MahaloTrail/scripts.pory"
	.string "Bwh... Bweeh!!$"

MahaloTrail_Script_PlayerSavesCosmog_Text_7:
# 155 "data//maps/MahaloTrail/scripts.pory"
	.string "{COLOR BLUE}Nebbie{COLOR DARK_GRAY} is emitting a bright light...!$"

MahaloTrail_Script_PlayerSavesCosmog_Text_8:
# 179 "data//maps/MahaloTrail/scripts.pory"
	.string "{COLOR BLUE}Nebbie{COLOR DARK_GRAY}, did you try to use your powers\n"
	.string "again? You couldn't move for ages last\l"
	.string "time...\p"
	.string "I couldn't see anything through the\n"
	.string "flash of light. How did you get back\l"
	.string "here?!$"

MahaloTrail_Script_PlayerSavesCosmog_Text_9:
# 188 "data//maps/MahaloTrail/scripts.pory"
	.string "???$"

MahaloTrail_Script_PlayerSavesCosmog_Text_10:
# 190 "data//maps/MahaloTrail/scripts.pory"
	.string "KYAH!$"

MahaloTrail_Script_PlayerSavesCosmog_Text_11:
# 200 "data//maps/MahaloTrail/scripts.pory"
	.string "Tutu Hala taught me... This is {COLOR BLUE}Tapu Koko{COLOR DARK_GRAY},\n"
	.string "a Legendary Pokémon!\p"
	.string "Woah, did it save you and {COLOR BLUE}Nebbie{COLOR DARK_GRAY} on the\n"
	.string "bridge?!$"

MahaloTrail_Script_PlayerSavesCosmog_Text_12:
# 217 "data//maps/MahaloTrail/scripts.pory"
	.string "Aie! It flew away so fast!\p"
	.string "{PLAYER}, let's bring Lillie back to\n"
	.string "Iki Town. Hala and Kukui will know what\l"
	.string "to do!$"

MahaloTrail_NPC_Hau_Text_0:
# 246 "data//maps/MahaloTrail/scripts.pory"
	.string "I'll be fine, cuz! {COLOR GREEN}Lillie{COLOR DARK_GRAY}'s further up the\n"
	.string "trail, and it sounds like she's in\l"
	.string "trouble! Look for her floppy white hat!$"

MahaloTrail_NPC_Corvisquire_Text_0:
# 258 "data//maps/MahaloTrail/scripts.pory"
	.string "Corvisquire$"

MahaloTrail_NPC_Corvisquire_Text_1:
# 260 "data//maps/MahaloTrail/scripts.pory"
	.string "Cree-aww!$"

MahaloTrail_NPC_LillieAtBridge_Text_0:
# 274 "data//maps/MahaloTrail/scripts.pory"
	.string "You have to save {COLOR BLUE}Nebbie{COLOR DARK_GRAY}! It won't last\n"
	.string "long with those Pokémon attacking it!$"

MahaloTrail_NPC_BlackBelt_Text_0:
# 286 "data//maps/MahaloTrail/scripts.pory"
	.string "Black Belt$"

MahaloTrail_NPC_BlackBelt_Text_1:
# 289 "data//maps/MahaloTrail/scripts.pory"
	.string "I came here to try and find the\n"
	.string "{COLOR GREEN}Guardian Deity{COLOR DARK_GRAY} of Melemele Island.\p"
	.string "It sounds like there's trouble up ahead,\n"
	.string "though... What's going on?$"

MahaloTrail_NPC_BlackBelt_Text_2:
# 293 "data//maps/MahaloTrail/scripts.pory"
	.string "I came here to try and find the\n"
	.string "{COLOR GREEN}Guardian Deity{COLOR DARK_GRAY} of Melemele Island.\p"
	.string "What?! You actually saw it?$"

MahaloTrail_NPC_Woman_Text_0:
# 304 "data//maps/MahaloTrail/scripts.pory"
	.string "Woman$"

MahaloTrail_NPC_Woman_Text_1:
# 307 "data//maps/MahaloTrail/scripts.pory"
	.string "I came here looking for bird Pokémon,\n"
	.string "but they all seem agitated right now! Is\l"
	.string "something happening?$"

MahaloTrail_NPC_Woman_Text_2:
# 311 "data//maps/MahaloTrail/scripts.pory"
	.string "The bird Pokémon seem to have calmed\n"
	.string "down around here. Still, I wonder what\l"
	.string "caused that...$"

MahaloTrail_Sign_BridgeWarning_Text_0:
# 323 "data//maps/MahaloTrail/scripts.pory"
	.string "{COLOR RED}WARNING!{COLOR DARK_GRAY}\n"
	.string "Wooden bridge is unstable!\p"
	.string "50 foot drop! Only cross with Kahuna\n"
	.string "Hala's supervision!$"

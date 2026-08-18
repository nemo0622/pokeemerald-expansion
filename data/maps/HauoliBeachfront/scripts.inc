HauoliBeachfront_MapScripts::
	.byte 0


HauoliBeachfront_Event_CorsolaAndMareanie::
# 9 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 12 "data//maps/HauoliBeachfront/scripts.pory"
	applymovement LOCALID_HAUOLI_BEACHFRONT_CORSOLA, HauoliBeachfront_Event_CorsolaAndMareanie_Movement_0
# 13 "data//maps/HauoliBeachfront/scripts.pory"
	waitmovement 0
# 14 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_Event_CorsolaAndMareanie_Text_0
# 15 "data//maps/HauoliBeachfront/scripts.pory"
	playmoncry SPECIES_CORSOLA, CRY_MODE_NORMAL
# 16 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_Event_CorsolaAndMareanie_Text_1
# 17 "data//maps/HauoliBeachfront/scripts.pory"
	waitmoncry
# 18 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 19 "data//maps/HauoliBeachfront/scripts.pory"
	delay 10
# 20 "data//maps/HauoliBeachfront/scripts.pory"
	applymovement LOCALID_HAUOLI_BEACHFRONT_MAREANIE, HauoliBeachfront_Event_CorsolaAndMareanie_Movement_1
# 21 "data//maps/HauoliBeachfront/scripts.pory"
	waitmovement 0
# 22 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_Event_CorsolaAndMareanie_Text_2
# 23 "data//maps/HauoliBeachfront/scripts.pory"
	playmoncry SPECIES_MAREANIE, CRY_MODE_NORMAL
# 24 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_Event_CorsolaAndMareanie_Text_3
# 25 "data//maps/HauoliBeachfront/scripts.pory"
	waitmoncry
# 26 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 27 "data//maps/HauoliBeachfront/scripts.pory"
	delay 10
# 30 "data//maps/HauoliBeachfront/scripts.pory"
	emote 16, EMOTE_EXCLAM
# 31 "data//maps/HauoliBeachfront/scripts.pory"
	applymovement 16, Common_Movement_FaceRight
# 32 "data//maps/HauoliBeachfront/scripts.pory"
	waitmovement 0
# 33 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_Event_CorsolaAndMareanie_Text_4
# 34 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_Event_CorsolaAndMareanie_Text_5
# 35 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 36 "data//maps/HauoliBeachfront/scripts.pory"
	delay 10
# 39 "data//maps/HauoliBeachfront/scripts.pory"
	hidefollower
# 40 "data//maps/HauoliBeachfront/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 41 "data//maps/HauoliBeachfront/scripts.pory"
	switch VAR_TEMP_1
# 43 "data//maps/HauoliBeachfront/scripts.pory"
	case 31, HauoliBeachfront_Event_CorsolaAndMareanie_3
# 45 "data//maps/HauoliBeachfront/scripts.pory"
	case 32, HauoliBeachfront_Event_CorsolaAndMareanie_4
# 54 "data//maps/HauoliBeachfront/scripts.pory"
	case 33, HauoliBeachfront_Event_CorsolaAndMareanie_5
# 59 "data//maps/HauoliBeachfront/scripts.pory"
	case 34, HauoliBeachfront_Event_CorsolaAndMareanie_6
# 62 "data//maps/HauoliBeachfront/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliBeachfront_Event_CorsolaAndMareanie_Movement_7
HauoliBeachfront_Event_CorsolaAndMareanie_1:
# 64 "data//maps/HauoliBeachfront/scripts.pory"
	waitmovement 0
# 65 "data//maps/HauoliBeachfront/scripts.pory"
	applymovement LOCALID_HAUOLI_BEACHFRONT_MAREANIE, Common_Movement_FaceDown
# 66 "data//maps/HauoliBeachfront/scripts.pory"
	waitmovement 0
# 67 "data//maps/HauoliBeachfront/scripts.pory"
	createplayerfieldmugshot EMOTION_INTENSE
# 68 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_Event_CorsolaAndMareanie_Text_6
# 69 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 72 "data//maps/HauoliBeachfront/scripts.pory"
	setflag FLAG_PREVENT_RUNNING
# 73 "data//maps/HauoliBeachfront/scripts.pory"
	setwildbattle SPECIES_MAREANIE, 10
# 74 "data//maps/HauoliBeachfront/scripts.pory"
	dowildbattle
# 75 "data//maps/HauoliBeachfront/scripts.pory"
	clearflag FLAG_PREVENT_RUNNING
# 76 "data//maps/HauoliBeachfront/scripts.pory"
	setflag FLAG_HIDE_MAREANIE_HAUOLI_BEACHFRONT
# 77 "data//maps/HauoliBeachfront/scripts.pory"
	removeobject LOCALID_HAUOLI_BEACHFRONT_MAREANIE
# 81 "data//maps/HauoliBeachfront/scripts.pory"
	clearflag FLAG_HIDE_PICNICKER_HAUOLI_BEACHFRONT
# 82 "data//maps/HauoliBeachfront/scripts.pory"
	addobject 20
# 83 "data//maps/HauoliBeachfront/scripts.pory"
	delay 30
# 84 "data//maps/HauoliBeachfront/scripts.pory"
	applymovement 20, HauoliBeachfront_Event_CorsolaAndMareanie_Movement_8
# 85 "data//maps/HauoliBeachfront/scripts.pory"
	waitmovement 0
# 86 "data//maps/HauoliBeachfront/scripts.pory"
	applymovement LOCALID_HAUOLI_BEACHFRONT_CORSOLA, Common_Movement_FaceLeft
# 87 "data//maps/HauoliBeachfront/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 88 "data//maps/HauoliBeachfront/scripts.pory"
	waitmovement 0
# 89 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_Event_CorsolaAndMareanie_Text_7
# 90 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_Event_CorsolaAndMareanie_Text_8
# 91 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 92 "data//maps/HauoliBeachfront/scripts.pory"
	delay 10
# 93 "data//maps/HauoliBeachfront/scripts.pory"
	applymovement 20, HauoliBeachfront_Event_CorsolaAndMareanie_Movement_9
# 94 "data//maps/HauoliBeachfront/scripts.pory"
	waitmovement 0
# 95 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_Event_CorsolaAndMareanie_Text_7
# 96 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_Event_CorsolaAndMareanie_Text_9
# 97 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 98 "data//maps/HauoliBeachfront/scripts.pory"
	giveitem ITEM_TM_PROTECT
# 99 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 100 "data//maps/HauoliBeachfront/scripts.pory"
	delay 10
# 101 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_Event_CorsolaAndMareanie_Text_7
# 102 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_Event_CorsolaAndMareanie_Text_10
# 103 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 104 "data//maps/HauoliBeachfront/scripts.pory"
	delay 10
# 105 "data//maps/HauoliBeachfront/scripts.pory"
	applymovement 20, HauoliBeachfront_Event_CorsolaAndMareanie_Movement_10
# 106 "data//maps/HauoliBeachfront/scripts.pory"
	applymovement LOCALID_HAUOLI_BEACHFRONT_CORSOLA, HauoliBeachfront_Event_CorsolaAndMareanie_Movement_11
# 107 "data//maps/HauoliBeachfront/scripts.pory"
	delay 60
# 108 "data//maps/HauoliBeachfront/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 109 "data//maps/HauoliBeachfront/scripts.pory"
	delay 30
# 110 "data//maps/HauoliBeachfront/scripts.pory"
	setflag FLAG_HIDE_CORSOLA_HAUOLI_BEACHFRONT
# 111 "data//maps/HauoliBeachfront/scripts.pory"
	setflag FLAG_HIDE_PICNICKER_HAUOLI_BEACHFRONT
# 112 "data//maps/HauoliBeachfront/scripts.pory"
	removeobject 20
# 113 "data//maps/HauoliBeachfront/scripts.pory"
	removeobject LOCALID_HAUOLI_BEACHFRONT_CORSOLA
# 114 "data//maps/HauoliBeachfront/scripts.pory"
	delay 30
# 115 "data//maps/HauoliBeachfront/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 116 "data//maps/HauoliBeachfront/scripts.pory"
	delay 20
# 117 "data//maps/HauoliBeachfront/scripts.pory"
	releaseall
	end

HauoliBeachfront_Event_CorsolaAndMareanie_3:
# 44 "data//maps/HauoliBeachfront/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliBeachfront_Event_CorsolaAndMareanie_Movement_2
	goto HauoliBeachfront_Event_CorsolaAndMareanie_1

HauoliBeachfront_Event_CorsolaAndMareanie_4:
# 46 "data//maps/HauoliBeachfront/scripts.pory"
	compare VAR_TEMP_2, 37
	goto_if_eq HauoliBeachfront_Event_CorsolaAndMareanie_8
# 52 "data//maps/HauoliBeachfront/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliBeachfront_Event_CorsolaAndMareanie_Movement_4
	goto HauoliBeachfront_Event_CorsolaAndMareanie_1

HauoliBeachfront_Event_CorsolaAndMareanie_5:
# 55 "data//maps/HauoliBeachfront/scripts.pory"
	compare VAR_TEMP_2, 37
	goto_if_eq HauoliBeachfront_Event_CorsolaAndMareanie_11
	goto HauoliBeachfront_Event_CorsolaAndMareanie_1

HauoliBeachfront_Event_CorsolaAndMareanie_6:
# 60 "data//maps/HauoliBeachfront/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliBeachfront_Event_CorsolaAndMareanie_Movement_6
	goto HauoliBeachfront_Event_CorsolaAndMareanie_1

HauoliBeachfront_Event_CorsolaAndMareanie_8:
# 48 "data//maps/HauoliBeachfront/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliBeachfront_Event_CorsolaAndMareanie_Movement_3
	goto HauoliBeachfront_Event_CorsolaAndMareanie_1

HauoliBeachfront_Event_CorsolaAndMareanie_11:
# 57 "data//maps/HauoliBeachfront/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliBeachfront_Event_CorsolaAndMareanie_Movement_5
	goto HauoliBeachfront_Event_CorsolaAndMareanie_1


HauoliBeachfront_NPC_PKMNBreederWithPikachu::
# 126 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 127 "data//maps/HauoliBeachfront/scripts.pory"
	faceplayer
# 128 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_NPC_PKMNBreederWithPikachu_Text_0
# 129 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_NPC_PKMNBreederWithPikachu_Text_1
# 130 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 131 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


HauoliBeachfront_Pokemon_Pikachu::
# 137 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 138 "data//maps/HauoliBeachfront/scripts.pory"
	faceplayer
# 139 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_Pokemon_Pikachu_Text_0
# 140 "data//maps/HauoliBeachfront/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 141 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_Pokemon_Pikachu_Text_1
# 142 "data//maps/HauoliBeachfront/scripts.pory"
	waitmoncry
# 143 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 144 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


HauoliBeachfront_NPC_DancerByBeach::
# 150 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 151 "data//maps/HauoliBeachfront/scripts.pory"
	faceplayer
# 152 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_NPC_DancerByBeach_Text_0
# 153 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_NPC_DancerByBeach_Text_1
# 154 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 155 "data//maps/HauoliBeachfront/scripts.pory"
	createplayerfieldmugshot
# 156 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_NPC_DancerByBeach_Text_2
# 157 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 158 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


HauoliBeachfront_NPC_PunkRocker::
# 164 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 165 "data//maps/HauoliBeachfront/scripts.pory"
	faceplayer
# 166 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_NPC_PunkRocker_Text_0
# 167 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_NPC_PunkRocker_Text_1
# 168 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 169 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


HauoliBeachfront_NPC_Biker::
# 175 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 176 "data//maps/HauoliBeachfront/scripts.pory"
	faceplayer
# 177 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_NPC_Biker_Text_0
# 178 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_NPC_Biker_Text_1
# 179 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 180 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


HauoliBeachfront_Pokemon_Cyclizar::
# 186 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 187 "data//maps/HauoliBeachfront/scripts.pory"
	faceplayer
# 188 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_Pokemon_Cyclizar_Text_0
# 189 "data//maps/HauoliBeachfront/scripts.pory"
	playmoncry SPECIES_CYCLIZAR, CRY_MODE_NORMAL
# 190 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_Pokemon_Cyclizar_Text_1
# 191 "data//maps/HauoliBeachfront/scripts.pory"
	waitmoncry
# 192 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 193 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


HauoliBeachfront_NPC_OldWoman::
# 199 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 200 "data//maps/HauoliBeachfront/scripts.pory"
	faceplayer
# 201 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_NPC_OldWoman_Text_0
# 202 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_NPC_OldWoman_Text_1
# 203 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 204 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


HauoliBeachfront_NPC_VeteranF::
# 210 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 211 "data//maps/HauoliBeachfront/scripts.pory"
	faceplayer
# 212 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_NPC_VeteranF_Text_0
# 213 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_NPC_VeteranF_Text_1
# 214 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 215 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


HauoliBeachfront_NPC_ManStudyingMoves::
# 221 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 222 "data//maps/HauoliBeachfront/scripts.pory"
	faceplayer
# 223 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_NPC_ManStudyingMoves_Text_0
# 224 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_NPC_ManStudyingMoves_Text_1
# 225 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 226 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


HauoliBeachfront_NPC_SwimmerWithSlowpoke::
# 232 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 233 "data//maps/HauoliBeachfront/scripts.pory"
	faceplayer
# 234 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_Event_CorsolaAndMareanie_Text_4
# 235 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_NPC_SwimmerWithSlowpoke_Text_0
# 236 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 237 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


HauoliBeachfront_Pokemon_Slowpoke::
# 243 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 244 "data//maps/HauoliBeachfront/scripts.pory"
	faceplayer
# 245 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_Pokemon_Slowpoke_Text_0
# 246 "data//maps/HauoliBeachfront/scripts.pory"
	playmoncry SPECIES_SLOWPOKE, CRY_MODE_NORMAL
# 247 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_Pokemon_Slowpoke_Text_1
# 248 "data//maps/HauoliBeachfront/scripts.pory"
	waitmoncry
# 249 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 250 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


HauoliBeachfront_Pokemon_Pyukumuku::
# 256 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 257 "data//maps/HauoliBeachfront/scripts.pory"
	faceplayer
# 258 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_Pokemon_Pyukumuku_Text_0
# 259 "data//maps/HauoliBeachfront/scripts.pory"
	playmoncry SPECIES_PYUKUMUKU, CRY_MODE_NORMAL
# 260 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_Pokemon_Pyukumuku_Text_1
# 261 "data//maps/HauoliBeachfront/scripts.pory"
	waitmoncry
# 262 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 263 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


HauoliBeachfront_NPC_SightseersWithPyukumuku::
# 269 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 270 "data//maps/HauoliBeachfront/scripts.pory"
	applymovement 14, HauoliBeachfront_NPC_SightseersWithPyukumuku_Movement_0
# 271 "data//maps/HauoliBeachfront/scripts.pory"
	waitmovement 0
# 272 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_NPC_SightseersWithPyukumuku_Text_0
# 273 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_NPC_SightseersWithPyukumuku_Text_1
# 274 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 275 "data//maps/HauoliBeachfront/scripts.pory"
	delay 10
# 276 "data//maps/HauoliBeachfront/scripts.pory"
	emote 15, EMOTE_EXCLAM
# 277 "data//maps/HauoliBeachfront/scripts.pory"
	delay 10
# 278 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_NPC_SightseersWithPyukumuku_Text_2
# 279 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_NPC_SightseersWithPyukumuku_Text_3
# 280 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 281 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


HauoliBeachfront_NPC_SwimmerWithSister::
# 287 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 288 "data//maps/HauoliBeachfront/scripts.pory"
	faceplayer
# 289 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_Event_CorsolaAndMareanie_Text_4
# 290 "data//maps/HauoliBeachfront/scripts.pory"
	goto_if_set FLAG_HIDE_CORSOLA_HAUOLI_BEACHFRONT, HauoliBeachfront_NPC_SwimmerWithSister_2
# 296 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_NPC_SwimmerWithSister_Text_1
HauoliBeachfront_NPC_SwimmerWithSister_1:
# 298 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 299 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end

HauoliBeachfront_NPC_SwimmerWithSister_2:
# 292 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_NPC_SwimmerWithSister_Text_0
	goto HauoliBeachfront_NPC_SwimmerWithSister_1


HauoliBeachfront_NPC_Fisherman::
# 305 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 306 "data//maps/HauoliBeachfront/scripts.pory"
	faceplayer
# 307 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_NPC_Fisherman_Text_0
# 308 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_NPC_Fisherman_Text_1
# 309 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 310 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


HauoliBeachfront_NPC_BeachShopkeep::
# 316 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 317 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_NPC_BeachShopkeep_Text_0
# 318 "data//maps/HauoliBeachfront/scripts.pory"
	message HauoliBeachfront_NPC_BeachShopkeep_Text_1
# 319 "data//maps/HauoliBeachfront/scripts.pory"
	waitmessage
# 320 "data//maps/HauoliBeachfront/scripts.pory"
	pokemart Mart_HauoliBeachfrontMarket
# 321 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_NPC_BeachShopkeep_Text_0
# 322 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_NPC_BeachShopkeep_Text_2
# 323 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


	.align 2
# 327 "data//maps/HauoliBeachfront/scripts.pory"
Mart_HauoliBeachfrontMarket:
# 328 "data//maps/HauoliBeachfront/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 329 "data//maps/HauoliBeachfront/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 330 "data//maps/HauoliBeachfront/scripts.pory"
	.2byte ITEM_BIG_MALASADA
	.2byte ITEM_NONE

HauoliBeachfront_Pokemon_Mareep::
# 335 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 336 "data//maps/HauoliBeachfront/scripts.pory"
	faceplayer
# 337 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_Pokemon_Mareep_Text_0
# 338 "data//maps/HauoliBeachfront/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 339 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_Pokemon_Mareep_Text_1
# 340 "data//maps/HauoliBeachfront/scripts.pory"
	waitmoncry
# 341 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 342 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


HauoliBeachfront_Pokemon_Crabrawler::
# 348 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 349 "data//maps/HauoliBeachfront/scripts.pory"
	faceplayer
# 350 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_Pokemon_Crabrawler_Text_0
# 351 "data//maps/HauoliBeachfront/scripts.pory"
	playmoncry SPECIES_CRABRAWLER, CRY_MODE_NORMAL
# 352 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_Pokemon_Crabrawler_Text_1
# 353 "data//maps/HauoliBeachfront/scripts.pory"
	waitmoncry
# 354 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 355 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


HauoliBeachfront_NPC_FarmerByStore::
# 361 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 362 "data//maps/HauoliBeachfront/scripts.pory"
	faceplayer
# 363 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_NPC_BeachShopkeep_Text_0
# 364 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_NPC_FarmerByStore_Text_0
# 365 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 366 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


HauoliBeachfront_NPC_Pilot::
# 372 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 373 "data//maps/HauoliBeachfront/scripts.pory"
	faceplayer
# 374 "data//maps/HauoliBeachfront/scripts.pory"
	setspeaker HauoliBeachfront_NPC_Pilot_Text_0
# 375 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_NPC_Pilot_Text_1
# 376 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 377 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


HauoliBeachfront_Sign_HauoliCity::
# 385 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 386 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_Sign_HauoliCity_Text_0, MSGBOX_SIGN
# 387 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 388 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


HauoliBeachfront_Sign_HauoliFarmersMarket::
# 394 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 395 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_Sign_HauoliFarmersMarket_Text_0, MSGBOX_SIGN
# 396 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 397 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


HauoliBeachfront_Sign_Taro::
# 403 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 404 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_Sign_Taro_Text_0, MSGBOX_SIGN
# 405 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 406 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


HauoliBeachfront_Sign_BigPoppasSurfShop::
# 412 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 413 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_Sign_BigPoppasSurfShop_Text_0, MSGBOX_SIGN
# 414 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 415 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


HauoliBeachfront_Sign_TouristBureau::
# 421 "data//maps/HauoliBeachfront/scripts.pory"
	lock
# 422 "data//maps/HauoliBeachfront/scripts.pory"
	msgbox HauoliBeachfront_Sign_TouristBureau_Text_0, MSGBOX_SIGN
# 423 "data//maps/HauoliBeachfront/scripts.pory"
	closemessage
# 424 "data//maps/HauoliBeachfront/scripts.pory"
	release
	end


# 12 "data//maps/HauoliBeachfront/scripts.pory"
HauoliBeachfront_Event_CorsolaAndMareanie_Movement_0:
# 12 "data//maps/HauoliBeachfront/scripts.pory"
	walk_in_place_slow_right
# 12 "data//maps/HauoliBeachfront/scripts.pory"
	walk_in_place_slow_right
# 12 "data//maps/HauoliBeachfront/scripts.pory"
	walk_in_place_slow_right
# 12 "data//maps/HauoliBeachfront/scripts.pory"
	step_end

# 20 "data//maps/HauoliBeachfront/scripts.pory"
HauoliBeachfront_Event_CorsolaAndMareanie_Movement_1:
# 20 "data//maps/HauoliBeachfront/scripts.pory"
	jump_in_place_left
# 20 "data//maps/HauoliBeachfront/scripts.pory"
	jump_in_place_left
# 20 "data//maps/HauoliBeachfront/scripts.pory"
	step_end

# 44 "data//maps/HauoliBeachfront/scripts.pory"
HauoliBeachfront_Event_CorsolaAndMareanie_Movement_2:
# 44 "data//maps/HauoliBeachfront/scripts.pory"
	walk_down
# 44 "data//maps/HauoliBeachfront/scripts.pory"
	walk_right
# 44 "data//maps/HauoliBeachfront/scripts.pory"
	walk_right
# 44 "data//maps/HauoliBeachfront/scripts.pory"
	face_up
# 44 "data//maps/HauoliBeachfront/scripts.pory"
	step_end

# 48 "data//maps/HauoliBeachfront/scripts.pory"
HauoliBeachfront_Event_CorsolaAndMareanie_Movement_3:
# 48 "data//maps/HauoliBeachfront/scripts.pory"
	walk_left
# 48 "data//maps/HauoliBeachfront/scripts.pory"
	walk_down
# 48 "data//maps/HauoliBeachfront/scripts.pory"
	walk_down
# 48 "data//maps/HauoliBeachfront/scripts.pory"
	walk_right
# 48 "data//maps/HauoliBeachfront/scripts.pory"
	walk_right
# 48 "data//maps/HauoliBeachfront/scripts.pory"
	face_up
# 48 "data//maps/HauoliBeachfront/scripts.pory"
	step_end

# 52 "data//maps/HauoliBeachfront/scripts.pory"
HauoliBeachfront_Event_CorsolaAndMareanie_Movement_4:
# 52 "data//maps/HauoliBeachfront/scripts.pory"
	walk_right
# 52 "data//maps/HauoliBeachfront/scripts.pory"
	face_up
# 52 "data//maps/HauoliBeachfront/scripts.pory"
	step_end

# 57 "data//maps/HauoliBeachfront/scripts.pory"
HauoliBeachfront_Event_CorsolaAndMareanie_Movement_5:
# 57 "data//maps/HauoliBeachfront/scripts.pory"
	walk_right
# 57 "data//maps/HauoliBeachfront/scripts.pory"
	walk_down
# 57 "data//maps/HauoliBeachfront/scripts.pory"
	walk_down
# 57 "data//maps/HauoliBeachfront/scripts.pory"
	walk_left
# 57 "data//maps/HauoliBeachfront/scripts.pory"
	face_up
# 57 "data//maps/HauoliBeachfront/scripts.pory"
	step_end

# 60 "data//maps/HauoliBeachfront/scripts.pory"
HauoliBeachfront_Event_CorsolaAndMareanie_Movement_6:
# 60 "data//maps/HauoliBeachfront/scripts.pory"
	walk_down
# 60 "data//maps/HauoliBeachfront/scripts.pory"
	walk_left
# 60 "data//maps/HauoliBeachfront/scripts.pory"
	face_up
# 60 "data//maps/HauoliBeachfront/scripts.pory"
	step_end

# 62 "data//maps/HauoliBeachfront/scripts.pory"
HauoliBeachfront_Event_CorsolaAndMareanie_Movement_7:
# 62 "data//maps/HauoliBeachfront/scripts.pory"
	walk_left
# 62 "data//maps/HauoliBeachfront/scripts.pory"
	walk_left
# 62 "data//maps/HauoliBeachfront/scripts.pory"
	face_up
# 62 "data//maps/HauoliBeachfront/scripts.pory"
	step_end

# 84 "data//maps/HauoliBeachfront/scripts.pory"
HauoliBeachfront_Event_CorsolaAndMareanie_Movement_8:
# 84 "data//maps/HauoliBeachfront/scripts.pory"
	walk_down
# 84 "data//maps/HauoliBeachfront/scripts.pory"
	walk_down
# 84 "data//maps/HauoliBeachfront/scripts.pory"
	walk_right
# 84 "data//maps/HauoliBeachfront/scripts.pory"
	walk_down
# 84 "data//maps/HauoliBeachfront/scripts.pory"
	walk_down
# 84 "data//maps/HauoliBeachfront/scripts.pory"
	walk_down
# 84 "data//maps/HauoliBeachfront/scripts.pory"
	walk_right
# 84 "data//maps/HauoliBeachfront/scripts.pory"
	step_end

# 93 "data//maps/HauoliBeachfront/scripts.pory"
HauoliBeachfront_Event_CorsolaAndMareanie_Movement_9:
# 93 "data//maps/HauoliBeachfront/scripts.pory"
	walk_down
# 93 "data//maps/HauoliBeachfront/scripts.pory"
	walk_right
# 93 "data//maps/HauoliBeachfront/scripts.pory"
	step_end

# 105 "data//maps/HauoliBeachfront/scripts.pory"
HauoliBeachfront_Event_CorsolaAndMareanie_Movement_10:
# 105 "data//maps/HauoliBeachfront/scripts.pory"
	walk_left
# 105 "data//maps/HauoliBeachfront/scripts.pory"
	walk_left
# 105 "data//maps/HauoliBeachfront/scripts.pory"
	walk_left
# 105 "data//maps/HauoliBeachfront/scripts.pory"
	walk_left
# 105 "data//maps/HauoliBeachfront/scripts.pory"
	walk_left
# 105 "data//maps/HauoliBeachfront/scripts.pory"
	walk_left
# 105 "data//maps/HauoliBeachfront/scripts.pory"
	step_end

# 106 "data//maps/HauoliBeachfront/scripts.pory"
HauoliBeachfront_Event_CorsolaAndMareanie_Movement_11:
# 106 "data//maps/HauoliBeachfront/scripts.pory"
	walk_down
# 106 "data//maps/HauoliBeachfront/scripts.pory"
	walk_left
# 106 "data//maps/HauoliBeachfront/scripts.pory"
	walk_left
# 106 "data//maps/HauoliBeachfront/scripts.pory"
	walk_left
# 106 "data//maps/HauoliBeachfront/scripts.pory"
	walk_left
# 106 "data//maps/HauoliBeachfront/scripts.pory"
	walk_left
# 106 "data//maps/HauoliBeachfront/scripts.pory"
	step_end

# 270 "data//maps/HauoliBeachfront/scripts.pory"
HauoliBeachfront_NPC_SightseersWithPyukumuku_Movement_0:
# 270 "data//maps/HauoliBeachfront/scripts.pory"
	walk_in_place_right
# 270 "data//maps/HauoliBeachfront/scripts.pory"
	walk_in_place_right
# 270 "data//maps/HauoliBeachfront/scripts.pory"
	step_end

HauoliBeachfront_Event_CorsolaAndMareanie_Text_0:
# 14 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Corsola$"

HauoliBeachfront_Event_CorsolaAndMareanie_Text_1:
# 16 "data//maps/HauoliBeachfront/scripts.pory"
	.string "So-sou...$"

HauoliBeachfront_Event_CorsolaAndMareanie_Text_2:
# 22 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Mareanie$"

HauoliBeachfront_Event_CorsolaAndMareanie_Text_3:
# 24 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Re-aie!!$"

HauoliBeachfront_Event_CorsolaAndMareanie_Text_4:
# 33 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Swimmer$"

HauoliBeachfront_Event_CorsolaAndMareanie_Text_5:
# 34 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Hey, that's my sister's {COLOR BLUE}Corsola{COLOR DARK_GRAY}! Is that\n"
	.string "{COLOR BLUE}Mareanie{COLOR DARK_GRAY} attacking it?!\p"
	.string "You're a Trainer, right? Please, you\n"
	.string "have to get rid of that {COLOR BLUE}Mareanie{COLOR DARK_GRAY}!$"

HauoliBeachfront_Event_CorsolaAndMareanie_Text_6:
# 68 "data//maps/HauoliBeachfront/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Woah! Wild Pokémon fighting is one\n"
	.string "thing, but I can't let someone's {COLOR BLUE}Corsola{COLOR DARK_GRAY}\l"
	.string "get hurt. Hold on!$"

HauoliBeachfront_Event_CorsolaAndMareanie_Text_7:
# 89 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Picnicker$"

HauoliBeachfront_Event_CorsolaAndMareanie_Text_8:
# 90 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Shniff... {COLOR BLUE}Corsola{COLOR DARK_GRAY}, you're really okay!\p"
	.string "I just left to buy you a Berry Juice,\n"
	.string "but I heard my brother shouting, and I\l"
	.string "got scared...$"

HauoliBeachfront_Event_CorsolaAndMareanie_Text_9:
# 96 "data//maps/HauoliBeachfront/scripts.pory"
	.string "In the wild, {COLOR BLUE}Mareanie{COLOR DARK_GRAY} break off and eat\n"
	.string "pieces of lone {COLOR BLUE}Corsola{COLOR DARK_GRAY}. It must've been\l"
	.string "waiting behind those rocks...\p"
	.string "Thank you so much for helping my\n"
	.string "Pokémon. Please, take this!$"

HauoliBeachfront_Event_CorsolaAndMareanie_Text_10:
# 102 "data//maps/HauoliBeachfront/scripts.pory"
	.string "I'll take {COLOR BLUE}Corsola{COLOR DARK_GRAY} to the Pokémon Center\n"
	.string "now. Goodbye!$"

HauoliBeachfront_NPC_PKMNBreederWithPikachu_Text_0:
# 128 "data//maps/HauoliBeachfront/scripts.pory"
	.string "{PKMN} Breeder$"

HauoliBeachfront_NPC_PKMNBreederWithPikachu_Text_1:
# 129 "data//maps/HauoliBeachfront/scripts.pory"
	.string "There are hidden spots of diversity\n"
	.string "around Alola. Always look for little\l"
	.string "gaps between trees for secret areas!$"

HauoliBeachfront_Pokemon_Pikachu_Text_0:
# 139 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Pikachu$"

HauoliBeachfront_Pokemon_Pikachu_Text_1:
# 141 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Pi-pi!$"

HauoliBeachfront_NPC_DancerByBeach_Text_0:
# 152 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Dancer$"

HauoliBeachfront_NPC_DancerByBeach_Text_1:
# 153 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Alola! In this region, we greet people by\n"
	.string "saying Alola!$"

HauoliBeachfront_NPC_DancerByBeach_Text_2:
# 156 "data//maps/HauoliBeachfront/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Alola!!$"

HauoliBeachfront_NPC_PunkRocker_Text_0:
# 166 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Punk Rocker$"

HauoliBeachfront_NPC_PunkRocker_Text_1:
# 167 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Hau'oli City is, like, the biggest city\n"
	.string "anywhere in Alola. Imagine everyone\l"
	.string "cheering for my rock shows!$"

HauoliBeachfront_NPC_Biker_Text_0:
# 177 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Biker$"

HauoliBeachfront_NPC_Biker_Text_1:
# 178 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Turns out there's a group of {COLOR BLUE}Cyclizar{COLOR DARK_GRAY}\n"
	.string "living on Melemele Island. Maybe I won't\l"
	.string "need my bike anymore!$"

HauoliBeachfront_Pokemon_Cyclizar_Text_0:
# 188 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Cyclizar$"

HauoliBeachfront_Pokemon_Cyclizar_Text_1:
# 190 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Khiss-!$"

HauoliBeachfront_NPC_OldWoman_Text_0:
# 201 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Old Woman$"

HauoliBeachfront_NPC_OldWoman_Text_1:
# 202 "data//maps/HauoliBeachfront/scripts.pory"
	.string "These are Taro crops, descended from\n"
	.string "those brought by the first settlers of\l"
	.string "Alola. The soil around here is still wet\l"
	.string "enough to grow some.$"

HauoliBeachfront_NPC_VeteranF_Text_0:
# 212 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Veteran$"

HauoliBeachfront_NPC_VeteranF_Text_1:
# 213 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Enjoy Hau'oli! Enjoy Alola!\n"
	.string "And most of all, enjoy Pokémon!$"

HauoliBeachfront_NPC_ManStudyingMoves_Text_0:
# 223 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Man$"

HauoliBeachfront_NPC_ManStudyingMoves_Text_1:
# 224 "data//maps/HauoliBeachfront/scripts.pory"
	.string "If you want to study Pokémon moves, I'd\n"
	.string "have a look at those unbelievable moves\l"
	.string "that the island Kahuna's Pokémon use!\p"
	.string "There's gotta be some kinda secret to\n"
	.string "why they're so amazingly strong.$"

HauoliBeachfront_NPC_SwimmerWithSlowpoke_Text_0:
# 235 "data//maps/HauoliBeachfront/scripts.pory"
	.string "{COLOR BLUE}Slowpoke{COLOR DARK_GRAY} really has its own tempo, huh?\n"
	.string "It never gets confused... or takes a\l"
	.string "hint. I don't wanna play right now,\l"
	.string "{COLOR BLUE}Slowpoke{COLOR DARK_GRAY}!$"

HauoliBeachfront_Pokemon_Slowpoke_Text_0:
# 245 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Slowpoke$"

HauoliBeachfront_Pokemon_Slowpoke_Text_1:
# 247 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Slo-o-ow...$"

HauoliBeachfront_Pokemon_Pyukumuku_Text_0:
# 258 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Pyukumuku$"

HauoliBeachfront_Pokemon_Pyukumuku_Text_1:
# 260 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Pyu-u!$"

HauoliBeachfront_NPC_SightseersWithPyukumuku_Text_0:
# 272 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Sightseer 1$"

HauoliBeachfront_NPC_SightseersWithPyukumuku_Text_1:
# 273 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Look! Catch!$"

HauoliBeachfront_NPC_SightseersWithPyukumuku_Text_2:
# 278 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Sightseer 2$"

HauoliBeachfront_NPC_SightseersWithPyukumuku_Text_3:
# 279 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Would you stop?! I know they're\n"
	.string "squishy, but that's no reason to throw\l"
	.string "{COLOR BLUE}Pyukumuku{COLOR DARK_GRAY} at me!$"

HauoliBeachfront_NPC_SwimmerWithSister_Text_0:
# 292 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Thanks again for saving my sister's\n"
	.string "{COLOR BLUE}Corsola{COLOR DARK_GRAY}. I don't have any Pokémon, but\l"
	.string "she's grown up side-by-side with it.$"

HauoliBeachfront_NPC_SwimmerWithSister_Text_1:
# 296 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Yawn... My sister sure loves her\n"
	.string "{COLOR BLUE}Corsola{COLOR DARK_GRAY}...\p"
	.string "Hm? Where'd she go?$"

HauoliBeachfront_NPC_Fisherman_Text_0:
# 307 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Fisherman$"

HauoliBeachfront_NPC_Fisherman_Text_1:
# 308 "data//maps/HauoliBeachfront/scripts.pory"
	.string "The {COLOR BLUE}Wingull{COLOR DARK_GRAY} fly...\n"
	.string "And their droppings fall...\p"
	.string "Ah, the beauty of nature!$"

HauoliBeachfront_NPC_BeachShopkeep_Text_0:
# 317 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Farmer$"

HauoliBeachfront_NPC_BeachShopkeep_Text_1:
# 318 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Welcome to our Farmer's Market! How can\n"
	.string "I help ya?$"

HauoliBeachfront_NPC_BeachShopkeep_Text_2:
# 322 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Come back soon!$"

HauoliBeachfront_Pokemon_Mareep_Text_0:
# 337 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Mareep$"

HauoliBeachfront_Pokemon_Mareep_Text_1:
# 339 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Baah!$"

HauoliBeachfront_Pokemon_Crabrawler_Text_0:
# 350 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Crabrawler$"

HauoliBeachfront_Pokemon_Crabrawler_Text_1:
# 352 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Ktch ktch!$"

HauoliBeachfront_NPC_FarmerByStore_Text_0:
# 364 "data//maps/HauoliBeachfront/scripts.pory"
	.string "If you're new, you should stop by the\n"
	.string "Alola Tourist Bureau. They'll help you\l"
	.string "find where to go.$"

HauoliBeachfront_NPC_Pilot_Text_0:
# 374 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Pilot$"

HauoliBeachfront_NPC_Pilot_Text_1:
# 375 "data//maps/HauoliBeachfront/scripts.pory"
	.string "I come by Big Poppa's Surf Shop after\n"
	.string "every flight. It's silly, but I came here\l"
	.string "as a kid, so I still like it.$"

HauoliBeachfront_Sign_HauoliCity_Text_0:
# 386 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Hau'oli City\n"
	.string "A City Overflowing with Gentle Joy.$"

HauoliBeachfront_Sign_HauoliFarmersMarket_Text_0:
# 395 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Hau'oli City Farmer's Market\n"
	.string "Goods Made by Us!$"

HauoliBeachfront_Sign_Taro_Text_0:
# 404 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Alola's First Crops\p"
	.string "Taro roots were grown by the first\n"
	.string "settlers in Alola, becoming a staple\l"
	.string "food source for the budding\l"
	.string "communities.\p"
	.string "Hundreds of years ago, these crops\n"
	.string "helped feed a prosperous village on the\l"
	.string "Melemele coastline, which one day grew\l"
	.string "to become Hau'oli City!$"

HauoliBeachfront_Sign_BigPoppasSurfShop_Text_0:
# 413 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Big Poppa's Surf Shop$"

HauoliBeachfront_Sign_TouristBureau_Text_0:
# 422 "data//maps/HauoliBeachfront/scripts.pory"
	.string "Alola Tourist Bureau\n"
	.string "Learn About Our Region!$"

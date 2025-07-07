FrescoIsland_MapScripts::
# 2 "data/maps/FrescoIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FrescoIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FrescoIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FrescoIsland/scripts.pory"
	setflag FLAG_VISITED_FRESCO_ISLAND
# 5 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 6 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 7 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 8 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 9 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 10 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 11 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 12 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 13 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 14 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 15 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 16 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 17 "data/maps/FrescoIsland/scripts.pory"
	setobjectaswildencounter 26, ENCOUNTER_LAND
# 18 "data/maps/FrescoIsland/scripts.pory"
	setobjectaswildencounter 27, ENCOUNTER_LAND
# 19 "data/maps/FrescoIsland/scripts.pory"
	setobjectaswildencounter 28, ENCOUNTER_LAND
# 20 "data/maps/FrescoIsland/scripts.pory"
	setobjectaswildencounter 29, ENCOUNTER_LAND
# 21 "data/maps/FrescoIsland/scripts.pory"
	setobjectaswildencounter 30, ENCOUNTER_LAND
# 22 "data/maps/FrescoIsland/scripts.pory"
	setobjectaswildencounter 31, ENCOUNTER_LAND
# 23 "data/maps/FrescoIsland/scripts.pory"
	setobjectaswildencounter 32, ENCOUNTER_LAND
	return


FrescoIsles_EventScript_ClosedSign::
# 29 "data/maps/FrescoIsland/scripts.pory"
	lock
# 30 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ClosedSign_Text_0
# 31 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 32 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_TuberSwimming::
# 38 "data/maps/FrescoIsland/scripts.pory"
	lock
# 39 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 40 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TuberSwimming_Text_0
# 41 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TuberSwimming_Text_1
# 42 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 43 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_WomanOnBeachChair::
# 49 "data/maps/FrescoIsland/scripts.pory"
	lock
# 50 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 51 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_WomanOnBeachChair_Text_0
# 52 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_WomanOnBeachChair_Text_1
# 53 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 54 "data/maps/FrescoIsland/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 55 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 56 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_HexManiacWithHiddenPower::
# 62 "data/maps/FrescoIsland/scripts.pory"
	lock
# 63 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 64 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_0
# 65 "data/maps/FrescoIsland/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_HIDDEN_POWER, FrescoIsles_EventScript_HexManiacWithHiddenPower_2
# 72 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_2
# 73 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 74 "data/maps/FrescoIsland/scripts.pory"
	delay 5
# 75 "data/maps/FrescoIsland/scripts.pory"
	setflag FLAG_RECEIVED_TM_HIDDEN_POWER
# 76 "data/maps/FrescoIsland/scripts.pory"
	giveitem ITEM_TM_HIDDEN_POWER
# 77 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 78 "data/maps/FrescoIsland/scripts.pory"
	delay 5
# 79 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_0
# 80 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_3
# 81 "data/maps/FrescoIsland/scripts.pory"
	closemessage
FrescoIsles_EventScript_HexManiacWithHiddenPower_1:
# 83 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_HexManiacWithHiddenPower_2:
# 67 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_1
# 68 "data/maps/FrescoIsland/scripts.pory"
	closemessage
	goto FrescoIsles_EventScript_HexManiacWithHiddenPower_1


FrescoIsles_EventScript_Farmer::
# 89 "data/maps/FrescoIsland/scripts.pory"
	lock
# 90 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 91 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Farmer_Text_0
# 92 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Farmer_Text_1
# 93 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 94 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_SailorWithQuaxly::
# 100 "data/maps/FrescoIsland/scripts.pory"
	lock
# 101 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 102 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_SailorWithQuaxly_Text_0
# 103 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_SailorWithQuaxly_Text_1
# 104 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 105 "data/maps/FrescoIsland/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 106 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 107 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Quaxly::
# 113 "data/maps/FrescoIsland/scripts.pory"
	lock
# 114 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 115 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Quaxly_Text_0
# 116 "data/maps/FrescoIsland/scripts.pory"
	playmoncry SPECIES_QUAXLY, CRY_MODE_NORMAL
# 117 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Quaxly_Text_1
# 118 "data/maps/FrescoIsland/scripts.pory"
	waitmoncry
# 119 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 120 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_LittleGirl::
# 126 "data/maps/FrescoIsland/scripts.pory"
	lock
# 127 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 128 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_LittleGirl_Text_0
# 129 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_LittleGirl_Text_1, MSGBOX_YESNO
# 130 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 131 "data/maps/FrescoIsland/scripts.pory"
	delay 5
# 132 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FrescoIsles_EventScript_LittleGirl_2
# 140 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_LittleGirl_Text_0
# 141 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_LittleGirl_Text_3
# 142 "data/maps/FrescoIsland/scripts.pory"
	closemessage
FrescoIsles_EventScript_LittleGirl_1:
# 144 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_LittleGirl_2:
# 134 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_LittleGirl_Text_0
# 135 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_LittleGirl_Text_2
# 136 "data/maps/FrescoIsland/scripts.pory"
	closemessage
	goto FrescoIsles_EventScript_LittleGirl_1


FrescoIsles_EventScript_ArtistNeedsPaintMaterials::
# 150 "data/maps/FrescoIsland/scripts.pory"
	lock
# 151 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 152 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_0
# 155 "data/maps/FrescoIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_SHARDS_FOR_ARTIST
# 156 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_2
# 165 "data/maps/FrescoIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_SHARDS_FOR_ARTIST
# 166 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_5
# 175 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_3
# 176 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 178 "data/maps/FrescoIsland/scripts.pory"
	checkitem ITEM_RED_SHARD
# 179 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_9
FrescoIsles_EventScript_ArtistNeedsPaintMaterials_8:
# 192 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_11
# 211 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_0
# 212 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_5
# 213 "data/maps/FrescoIsland/scripts.pory"
	closemessage
FrescoIsles_EventScript_ArtistNeedsPaintMaterials_4:
# 216 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_2:
# 158 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_1
# 159 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 160 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_5:
# 168 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_2
# 169 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 170 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 171 "data/maps/FrescoIsland/scripts.pory"
	startquest QUEST_SHARDS_FOR_ARTIST
	goto FrescoIsles_EventScript_ArtistNeedsPaintMaterials_4

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_9:
# 181 "data/maps/FrescoIsland/scripts.pory"
	checkitem ITEM_BLUE_SHARD
# 182 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_14
	goto FrescoIsles_EventScript_ArtistNeedsPaintMaterials_8

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_11:
# 194 "data/maps/FrescoIsland/scripts.pory"
	emote 10, EMOTE_EXCLAM
# 195 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_0
# 196 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_4
# 197 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 198 "data/maps/FrescoIsland/scripts.pory"
	delay 5
# 199 "data/maps/FrescoIsland/scripts.pory"
	removeitem ITEM_RED_SHARD
# 200 "data/maps/FrescoIsland/scripts.pory"
	removeitem ITEM_BLUE_SHARD
# 201 "data/maps/FrescoIsland/scripts.pory"
	removeitem ITEM_GREEN_SHARD
# 202 "data/maps/FrescoIsland/scripts.pory"
	removeitem ITEM_YELLOW_SHARD
# 203 "data/maps/FrescoIsland/scripts.pory"
	giveitem ITEM_CLEAR_AMULET
# 204 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 206 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 207 "data/maps/FrescoIsland/scripts.pory"
	completequest QUEST_SHARDS_FOR_ARTIST
	goto FrescoIsles_EventScript_ArtistNeedsPaintMaterials_4

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_14:
# 184 "data/maps/FrescoIsland/scripts.pory"
	checkitem ITEM_GREEN_SHARD
# 185 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_16
	goto FrescoIsles_EventScript_ArtistNeedsPaintMaterials_8

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_16:
# 187 "data/maps/FrescoIsland/scripts.pory"
	checkitem ITEM_YELLOW_SHARD
	goto FrescoIsles_EventScript_ArtistNeedsPaintMaterials_8


FrescoIsles_EventScript_Dreepy::
# 222 "data/maps/FrescoIsland/scripts.pory"
	lock
# 223 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 224 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Dreepy_Text_0
# 225 "data/maps/FrescoIsland/scripts.pory"
	playmoncry SPECIES_DREEPY, CRY_MODE_NORMAL
# 226 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Dreepy_Text_1
# 227 "data/maps/FrescoIsland/scripts.pory"
	waitmoncry
# 228 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 229 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_GirlWithDreepy::
# 235 "data/maps/FrescoIsland/scripts.pory"
	lock
# 236 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 237 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_GirlWithDreepy_Text_0
# 238 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_GirlWithDreepy_Text_1
# 239 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 240 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_LittleBoyBuildingSandCastle::
# 246 "data/maps/FrescoIsland/scripts.pory"
	lock
# 247 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 248 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_LittleBoyBuildingSandCastle_Text_0
# 249 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_LittleBoyBuildingSandCastle_Text_1
# 250 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 251 "data/maps/FrescoIsland/scripts.pory"
	applymovement 13, Common_Movement_FaceOriginalDirection
# 252 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 253 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Trapinch::
# 259 "data/maps/FrescoIsland/scripts.pory"
	lock
# 260 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 261 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Trapinch_Text_0
# 262 "data/maps/FrescoIsland/scripts.pory"
	playmoncry SPECIES_TRAPINCH, CRY_MODE_NORMAL
# 263 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Trapinch_Text_1
# 264 "data/maps/FrescoIsland/scripts.pory"
	waitmoncry
# 265 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 266 "data/maps/FrescoIsland/scripts.pory"
	applymovement 14, Common_Movement_FaceOriginalDirection
# 267 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 268 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_GymSign::
# 274 "data/maps/FrescoIsland/scripts.pory"
	lock
# 275 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_GymSign_Text_0
# 276 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 277 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_BugCatcher::
# 283 "data/maps/FrescoIsland/scripts.pory"
	lock
# 284 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 285 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_BugCatcher_Text_0
# 286 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_BugCatcher_Text_1
# 287 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 288 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Athlete::
# 294 "data/maps/FrescoIsland/scripts.pory"
	lock
# 295 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 296 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Athlete_Text_0
# 297 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Athlete_Text_1
# 298 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 299 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_BeautyRunning::
# 305 "data/maps/FrescoIsland/scripts.pory"
	lock
# 306 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 307 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_BeautyRunning_Text_0
# 308 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_BeautyRunning_Text_1
# 309 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 310 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Ponyta::
# 316 "data/maps/FrescoIsland/scripts.pory"
	lock
# 317 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 318 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Ponyta_Text_0
# 319 "data/maps/FrescoIsland/scripts.pory"
	playmoncry SPECIES_PONYTA, CRY_MODE_NORMAL
# 320 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Ponyta_Text_1
# 321 "data/maps/FrescoIsland/scripts.pory"
	waitmoncry
# 322 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 323 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_CyclingAthlete::
# 329 "data/maps/FrescoIsland/scripts.pory"
	lock
# 330 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 331 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_CyclingAthlete_Text_0
# 332 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_CyclingAthlete_Text_1
# 333 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 334 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_HikerViewingPot::
# 340 "data/maps/FrescoIsland/scripts.pory"
	lock
# 341 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 342 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_HikerViewingPot_Text_0
# 343 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_HikerViewingPot_Text_1
# 344 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 345 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_OldWoman::
# 351 "data/maps/FrescoIsland/scripts.pory"
	lock
# 352 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 353 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_OldWoman_Text_0
# 354 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_OldWoman_Text_1
# 355 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 356 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Camper::
# 362 "data/maps/FrescoIsland/scripts.pory"
	lock
# 363 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 364 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Camper_Text_0
# 365 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Camper_Text_1
# 366 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 367 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_ManOnChair::
# 373 "data/maps/FrescoIsland/scripts.pory"
	lock
# 374 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 375 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_ManOnChair_Text_0
# 376 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ManOnChair_Text_1
# 377 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 378 "data/maps/FrescoIsland/scripts.pory"
	applymovement 23, Common_Movement_FaceDown
# 379 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 380 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_TuberBuildingSandCastle::
# 386 "data/maps/FrescoIsland/scripts.pory"
	lock
# 387 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 388 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TuberSwimming_Text_0
# 389 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TuberBuildingSandCastle_Text_0
# 390 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 391 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Gentleman::
# 397 "data/maps/FrescoIsland/scripts.pory"
	lock
# 398 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 399 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Gentleman_Text_0
# 400 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Gentleman_Text_1
# 401 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 402 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_TailorSign::
# 408 "data/maps/FrescoIsland/scripts.pory"
	lock
# 409 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TailorSign_Text_0
# 410 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 411 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_HikerOnVolcano::
# 417 "data/maps/FrescoIsland/scripts.pory"
	lock
# 418 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 419 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_HikerOnVolcano_Text_0
# 420 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_HikerOnVolcano_Text_1
# 421 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 422 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_ClosedSign_Text_0:
# 30 "data/maps/FrescoIsland/scripts.pory"
	.string "Building Closure Notice\n"
	.string "Fresco Isles Research Lab has been\l"
	.string "closed due to Team Chimera activity.\l"
	.string "Entering the building is strictly\l"
	.string "prohibited.$"

FrescoIsles_EventScript_TuberSwimming_Text_0:
# 40 "data/maps/FrescoIsland/scripts.pory"
	.string "Tuber$"

FrescoIsles_EventScript_TuberSwimming_Text_1:
# 41 "data/maps/FrescoIsland/scripts.pory"
	.string "The water is so warm here! Best\n"
	.string "vacation ever!!$"

FrescoIsles_EventScript_WomanOnBeachChair_Text_0:
# 51 "data/maps/FrescoIsland/scripts.pory"
	.string "Woman$"

FrescoIsles_EventScript_WomanOnBeachChair_Text_1:
# 52 "data/maps/FrescoIsland/scripts.pory"
	.string "I brought my son here for some time to\n"
	.string "relax. The world is crazy, so it's\l"
	.string "important to take a moment and sit\l"
	.string "back.$"

FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_0:
# 64 "data/maps/FrescoIsland/scripts.pory"
	.string "Crystal Girl$"

FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_1:
# 67 "data/maps/FrescoIsland/scripts.pory"
	.string "Have you unlocked your Pokémon's\n"
	.string "Hidden Power yet?$"

FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_2:
# 72 "data/maps/FrescoIsland/scripts.pory"
	.string "Just like crystals, Pokémon have\n"
	.string "special powers unique to them. I've\l"
	.string "found a way to tap into that potential.\l"
	.string "Check it out!$"

FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_3:
# 80 "data/maps/FrescoIsland/scripts.pory"
	.string "Hidden Power is a move that changes\n"
	.string "type based on the individual Pokémon.\l"
	.string "You'd be surprised at what secrets your\l"
	.string "Pokémon might hold.$"

FrescoIsles_EventScript_Farmer_Text_0:
# 91 "data/maps/FrescoIsland/scripts.pory"
	.string "Farmer$"

FrescoIsles_EventScript_Farmer_Text_1:
# 92 "data/maps/FrescoIsland/scripts.pory"
	.string "Most of the Fresco Isles are totally\n"
	.string "covered in sand. Only shrubs and a few\l"
	.string "hardy trees can grow there. To keep\l"
	.string "this island grassy, it takes a lot of\l"
	.string "extra work.$"

FrescoIsles_EventScript_SailorWithQuaxly_Text_0:
# 102 "data/maps/FrescoIsland/scripts.pory"
	.string "Sailor$"

FrescoIsles_EventScript_SailorWithQuaxly_Text_1:
# 103 "data/maps/FrescoIsland/scripts.pory"
	.string "My boat got whipped into a rock in the\n"
	.string "Sea of Vulcai. It's not all bad, though -\l"
	.string "I found this rare Pokémon right on the\l"
	.string "beach!$"

FrescoIsles_EventScript_Quaxly_Text_0:
# 115 "data/maps/FrescoIsland/scripts.pory"
	.string "Quaxly$"

FrescoIsles_EventScript_Quaxly_Text_1:
# 117 "data/maps/FrescoIsland/scripts.pory"
	.string "Kwak wak wak!$"

FrescoIsles_EventScript_LittleGirl_Text_0:
# 128 "data/maps/FrescoIsland/scripts.pory"
	.string "Little Girl$"

FrescoIsles_EventScript_LittleGirl_Text_1:
# 129 "data/maps/FrescoIsland/scripts.pory"
	.string "Hiya! You're an adult, right? Do you\n"
	.string "know why all the rocks around here are\l"
	.string "black?$"

FrescoIsles_EventScript_LittleGirl_Text_2:
# 135 "data/maps/FrescoIsland/scripts.pory"
	.string "Yeah! It's volcanic rock!$"

FrescoIsles_EventScript_LittleGirl_Text_3:
# 141 "data/maps/FrescoIsland/scripts.pory"
	.string "Really? Ehehe, even I know why! It's all\n"
	.string "made of dried lava!$"

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_0:
# 152 "data/maps/FrescoIsland/scripts.pory"
	.string "Artist$"

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_1:
# 158 "data/maps/FrescoIsland/scripts.pory"
	.string "These shard-based paints are so\n"
	.string "bright, they'll be perfect for my\l"
	.string "masterpiece!$"

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_2:
# 168 "data/maps/FrescoIsland/scripts.pory"
	.string "Chaire. By any chance, are you a\n"
	.string "treasure hunter?\p"
	.string "The Fresco Isles have inspired me to\n"
	.string "paint my masterpiece, but no paint I\l"
	.string "find will be good enough. I've heard\l"
	.string "that special paint can be made from\l"
	.string "crushed-up {COLOR GREEN}colored Shards{COLOR DARK_GRAY}. Please,\l"
	.string "bring me {COLOR GREEN}one of each colored Shard{COLOR DARK_GRAY}. I\l"
	.string "promise to pay you back in kind.$"

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_3:
# 175 "data/maps/FrescoIsland/scripts.pory"
	.string "Hey there. I'm still short on materials\n"
	.string "to make my special paints. Would you\l"
	.string "happen to have the colored Shards I\l"
	.string "requested?$"

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_4:
# 196 "data/maps/FrescoIsland/scripts.pory"
	.string "Woah, you have Red, Blue, Green, and\n"
	.string "Yellow Shards! I'll crush them up into\l"
	.string "stunning pigments.\p"
	.string "While you were off collecting Shards, I\n"
	.string "completed another project: a {COLOR GREEN}Clear\l"
	.string "Amulet{COLOR DARK_GRAY} for your Pokémon to hold.$"

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_5:
# 212 "data/maps/FrescoIsland/scripts.pory"
	.string "Hm, not yet, huh? I know they're rare.\p"
	.string "Some Pokémon hold colored Shards, and\n"
	.string "they can be found underground too.\l"
	.string "Please, bring me {COLOR GREEN}one of every colored\l"
	.string "Shard type{COLOR DARK_GRAY} once you have them!$"

FrescoIsles_EventScript_Dreepy_Text_0:
# 224 "data/maps/FrescoIsland/scripts.pory"
	.string "Dreepy$"

FrescoIsles_EventScript_Dreepy_Text_1:
# 226 "data/maps/FrescoIsland/scripts.pory"
	.string "Ee-auhhh...$"

FrescoIsles_EventScript_GirlWithDreepy_Text_0:
# 237 "data/maps/FrescoIsland/scripts.pory"
	.string "Girl$"

FrescoIsles_EventScript_GirlWithDreepy_Text_1:
# 238 "data/maps/FrescoIsland/scripts.pory"
	.string "This Dreepy was left behind by its\n"
	.string "colony. They're so small, sometimes they\l"
	.string "get left behind by the Drakloak and\l"
	.string "Dragapult at the head of their\l"
	.string "colonies... Maybe I'll be able to reunite\l"
	.string "it with its friends one day.$"

FrescoIsles_EventScript_LittleBoyBuildingSandCastle_Text_0:
# 248 "data/maps/FrescoIsland/scripts.pory"
	.string "Little Boy$"

FrescoIsles_EventScript_LittleBoyBuildingSandCastle_Text_1:
# 249 "data/maps/FrescoIsland/scripts.pory"
	.string "I found my Trapinch along the beach!\n"
	.string "Now I'm making it a sand castle to live\l"
	.string "in!$"

FrescoIsles_EventScript_Trapinch_Text_0:
# 261 "data/maps/FrescoIsland/scripts.pory"
	.string "Trapinch$"

FrescoIsles_EventScript_Trapinch_Text_1:
# 263 "data/maps/FrescoIsland/scripts.pory"
	.string "Chomp chomp!$"

FrescoIsles_EventScript_GymSign_Text_0:
# 275 "data/maps/FrescoIsland/scripts.pory"
	.string "Gym Leaders: Thalia and Melpomene\n"
	.string "The Theatrical Twins$"

FrescoIsles_EventScript_BugCatcher_Text_0:
# 285 "data/maps/FrescoIsland/scripts.pory"
	.string "Bug Catcher$"

FrescoIsles_EventScript_BugCatcher_Text_1:
# 286 "data/maps/FrescoIsland/scripts.pory"
	.string "Only the hardiest Pokémon can survive\n"
	.string "around here. The lava doesn't leak out\l"
	.string "anymore, but the heat and dry weather\l"
	.string "is still really hard for some Pokémon to\l"
	.string "stand.$"

FrescoIsles_EventScript_Athlete_Text_0:
# 296 "data/maps/FrescoIsland/scripts.pory"
	.string "Athlete$"

FrescoIsles_EventScript_Athlete_Text_1:
# 297 "data/maps/FrescoIsland/scripts.pory"
	.string "Phew! Gotta keep getting stronger to\n"
	.string "keep up with all the other Trainers.$"

FrescoIsles_EventScript_BeautyRunning_Text_0:
# 307 "data/maps/FrescoIsland/scripts.pory"
	.string "Beauty$"

FrescoIsles_EventScript_BeautyRunning_Text_1:
# 308 "data/maps/FrescoIsland/scripts.pory"
	.string "Ponyta, come back! She's been riled up\n"
	.string "ever since we got here. I think she\l"
	.string "likes the heat.$"

FrescoIsles_EventScript_Ponyta_Text_0:
# 318 "data/maps/FrescoIsland/scripts.pory"
	.string "Ponyta$"

FrescoIsles_EventScript_Ponyta_Text_1:
# 320 "data/maps/FrescoIsland/scripts.pory"
	.string "Breighh!$"

FrescoIsles_EventScript_CyclingAthlete_Text_0:
# 331 "data/maps/FrescoIsland/scripts.pory"
	.string "Cycling Athlete$"

FrescoIsles_EventScript_CyclingAthlete_Text_1:
# 332 "data/maps/FrescoIsland/scripts.pory"
	.string "This whole place is just sand and\n"
	.string "water... This wasn't the best place for\l"
	.string "biking, huh?$"

FrescoIsles_EventScript_HikerViewingPot_Text_0:
# 342 "data/maps/FrescoIsland/scripts.pory"
	.string "Ruin Maniac$"

FrescoIsles_EventScript_HikerViewingPot_Text_1:
# 343 "data/maps/FrescoIsland/scripts.pory"
	.string "Based on the ruins around here, these\n"
	.string "islands used to be much more populated.\l"
	.string "It seems that a volcanic explosion\l"
	.string "centuries ago changed the ecosystem\l"
	.string "and cut the population.$"

FrescoIsles_EventScript_OldWoman_Text_0:
# 353 "data/maps/FrescoIsland/scripts.pory"
	.string "Old Woman$"

FrescoIsles_EventScript_OldWoman_Text_1:
# 354 "data/maps/FrescoIsland/scripts.pory"
	.string "Not many people visit the outlying\n"
	.string "islands. It's just a few visitors, the\l"
	.string "Pokémon, and me.$"

FrescoIsles_EventScript_Camper_Text_0:
# 364 "data/maps/FrescoIsland/scripts.pory"
	.string "Camper$"

FrescoIsles_EventScript_Camper_Text_1:
# 365 "data/maps/FrescoIsland/scripts.pory"
	.string "The Gym Leaders of the Fresco Isles are\n"
	.string "twins. Thalia loves jokes and fun, while\l"
	.string "Melpomene is always moping around and\l"
	.string "watching tragedies. The only thing they\l"
	.string "have in common is a love for theatre.$"

FrescoIsles_EventScript_ManOnChair_Text_0:
# 375 "data/maps/FrescoIsland/scripts.pory"
	.string "Man$"

FrescoIsles_EventScript_ManOnChair_Text_1:
# 376 "data/maps/FrescoIsland/scripts.pory"
	.string "Ahh, this is the life. A cool breeze, warm\n"
	.string "sand, and a drink in my hand.$"

FrescoIsles_EventScript_TuberBuildingSandCastle_Text_0:
# 389 "data/maps/FrescoIsland/scripts.pory"
	.string "My dad told me not to peek into the\n"
	.string "abandoned lab up the hill. But I swear I\l"
	.string "saw someone sneaking in earlier!$"

FrescoIsles_EventScript_Gentleman_Text_0:
# 399 "data/maps/FrescoIsland/scripts.pory"
	.string "Gentleman$"

FrescoIsles_EventScript_Gentleman_Text_1:
# 400 "data/maps/FrescoIsland/scripts.pory"
	.string "I came all the way here from Kalami City\n"
	.string "to get a new suit made. But the Tailor is\l"
	.string "sending me on a wild Swanna chase...\l"
	.string "Literally! He wants me to catch a\l"
	.string "Swanna for some reason!$"

FrescoIsles_EventScript_TailorSign_Text_0:
# 409 "data/maps/FrescoIsland/scripts.pory"
	.string "Fresco Isles Tailor\n"
	.string "Specialty Outfits for All!$"

FrescoIsles_EventScript_HikerOnVolcano_Text_0:
# 419 "data/maps/FrescoIsland/scripts.pory"
	.string "Hiker$"

FrescoIsles_EventScript_HikerOnVolcano_Text_1:
# 420 "data/maps/FrescoIsland/scripts.pory"
	.string "Woah, it's getting hot up here. Any\n"
	.string "closer and it'll start to hurt...$"

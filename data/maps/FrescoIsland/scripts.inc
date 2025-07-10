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


FrescoIsles_EventScript_DirectionSign::
# 29 "data/maps/FrescoIsland/scripts.pory"
	lock
# 30 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_DirectionSign_Text_0
# 31 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 32 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_ClosedSign::
# 38 "data/maps/FrescoIsland/scripts.pory"
	lock
# 39 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ClosedSign_Text_0
# 40 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 41 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_TuberSwimming::
# 47 "data/maps/FrescoIsland/scripts.pory"
	lock
# 48 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 49 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TuberSwimming_Text_0
# 50 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TuberSwimming_Text_1
# 51 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 52 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_WomanOnBeachChair::
# 58 "data/maps/FrescoIsland/scripts.pory"
	lock
# 59 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 60 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_WomanOnBeachChair_Text_0
# 61 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_WomanOnBeachChair_Text_1
# 62 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 63 "data/maps/FrescoIsland/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 64 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 65 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_HexManiacWithHiddenPower::
# 71 "data/maps/FrescoIsland/scripts.pory"
	lock
# 72 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 73 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_0
# 74 "data/maps/FrescoIsland/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_HIDDEN_POWER, FrescoIsles_EventScript_HexManiacWithHiddenPower_2
# 81 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_2
# 82 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 83 "data/maps/FrescoIsland/scripts.pory"
	delay 5
# 84 "data/maps/FrescoIsland/scripts.pory"
	setflag FLAG_RECEIVED_TM_HIDDEN_POWER
# 85 "data/maps/FrescoIsland/scripts.pory"
	giveitem ITEM_TM_HIDDEN_POWER
# 86 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 87 "data/maps/FrescoIsland/scripts.pory"
	delay 5
# 88 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_0
# 89 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_3
# 90 "data/maps/FrescoIsland/scripts.pory"
	closemessage
FrescoIsles_EventScript_HexManiacWithHiddenPower_1:
# 92 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_HexManiacWithHiddenPower_2:
# 76 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_1
# 77 "data/maps/FrescoIsland/scripts.pory"
	closemessage
	goto FrescoIsles_EventScript_HexManiacWithHiddenPower_1


FrescoIsles_EventScript_Farmer::
# 98 "data/maps/FrescoIsland/scripts.pory"
	lock
# 99 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 100 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Farmer_Text_0
# 101 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Farmer_Text_1
# 102 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 103 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_SailorWithQuaxly::
# 109 "data/maps/FrescoIsland/scripts.pory"
	lock
# 110 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 111 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_SailorWithQuaxly_Text_0
# 112 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_SailorWithQuaxly_Text_1
# 113 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 114 "data/maps/FrescoIsland/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 115 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 116 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Quaxly::
# 122 "data/maps/FrescoIsland/scripts.pory"
	lock
# 123 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 124 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Quaxly_Text_0
# 125 "data/maps/FrescoIsland/scripts.pory"
	playmoncry SPECIES_QUAXLY, CRY_MODE_NORMAL
# 126 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Quaxly_Text_1
# 127 "data/maps/FrescoIsland/scripts.pory"
	waitmoncry
# 128 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 129 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_LittleGirl::
# 135 "data/maps/FrescoIsland/scripts.pory"
	lock
# 136 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 137 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_LittleGirl_Text_0
# 138 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_LittleGirl_Text_1, MSGBOX_YESNO
# 139 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 140 "data/maps/FrescoIsland/scripts.pory"
	delay 5
# 141 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FrescoIsles_EventScript_LittleGirl_2
# 149 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_LittleGirl_Text_0
# 150 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_LittleGirl_Text_3
# 151 "data/maps/FrescoIsland/scripts.pory"
	closemessage
FrescoIsles_EventScript_LittleGirl_1:
# 153 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_LittleGirl_2:
# 143 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_LittleGirl_Text_0
# 144 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_LittleGirl_Text_2
# 145 "data/maps/FrescoIsland/scripts.pory"
	closemessage
	goto FrescoIsles_EventScript_LittleGirl_1


FrescoIsles_EventScript_ArtistNeedsPaintMaterials::
# 159 "data/maps/FrescoIsland/scripts.pory"
	lock
# 160 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 161 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_0
# 164 "data/maps/FrescoIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_SHARDS_FOR_ARTIST
# 165 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_2
# 174 "data/maps/FrescoIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_SHARDS_FOR_ARTIST
# 175 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_5
# 184 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_3
# 185 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 187 "data/maps/FrescoIsland/scripts.pory"
	checkitem ITEM_RED_SHARD
# 188 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_9
FrescoIsles_EventScript_ArtistNeedsPaintMaterials_8:
# 201 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_11
# 220 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_0
# 221 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_5
# 222 "data/maps/FrescoIsland/scripts.pory"
	closemessage
FrescoIsles_EventScript_ArtistNeedsPaintMaterials_4:
# 225 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_2:
# 167 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_1
# 168 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 169 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_5:
# 177 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_2
# 178 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 179 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 180 "data/maps/FrescoIsland/scripts.pory"
	startquest QUEST_SHARDS_FOR_ARTIST
	goto FrescoIsles_EventScript_ArtistNeedsPaintMaterials_4

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_9:
# 190 "data/maps/FrescoIsland/scripts.pory"
	checkitem ITEM_BLUE_SHARD
# 191 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_14
	goto FrescoIsles_EventScript_ArtistNeedsPaintMaterials_8

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_11:
# 203 "data/maps/FrescoIsland/scripts.pory"
	emote 10, EMOTE_EXCLAM
# 204 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_0
# 205 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_4
# 206 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 207 "data/maps/FrescoIsland/scripts.pory"
	delay 5
# 208 "data/maps/FrescoIsland/scripts.pory"
	removeitem ITEM_RED_SHARD
# 209 "data/maps/FrescoIsland/scripts.pory"
	removeitem ITEM_BLUE_SHARD
# 210 "data/maps/FrescoIsland/scripts.pory"
	removeitem ITEM_GREEN_SHARD
# 211 "data/maps/FrescoIsland/scripts.pory"
	removeitem ITEM_YELLOW_SHARD
# 212 "data/maps/FrescoIsland/scripts.pory"
	giveitem ITEM_CLEAR_AMULET
# 213 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 215 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 216 "data/maps/FrescoIsland/scripts.pory"
	completequest QUEST_SHARDS_FOR_ARTIST
	goto FrescoIsles_EventScript_ArtistNeedsPaintMaterials_4

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_14:
# 193 "data/maps/FrescoIsland/scripts.pory"
	checkitem ITEM_GREEN_SHARD
# 194 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_16
	goto FrescoIsles_EventScript_ArtistNeedsPaintMaterials_8

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_16:
# 196 "data/maps/FrescoIsland/scripts.pory"
	checkitem ITEM_YELLOW_SHARD
	goto FrescoIsles_EventScript_ArtistNeedsPaintMaterials_8


FrescoIsles_EventScript_Dreepy::
# 231 "data/maps/FrescoIsland/scripts.pory"
	lock
# 232 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 233 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Dreepy_Text_0
# 234 "data/maps/FrescoIsland/scripts.pory"
	playmoncry SPECIES_DREEPY, CRY_MODE_NORMAL
# 235 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Dreepy_Text_1
# 236 "data/maps/FrescoIsland/scripts.pory"
	waitmoncry
# 237 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 238 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_GirlWithDreepy::
# 244 "data/maps/FrescoIsland/scripts.pory"
	lock
# 245 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 246 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_GirlWithDreepy_Text_0
# 247 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_GirlWithDreepy_Text_1
# 248 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 249 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_LittleBoyBuildingSandCastle::
# 255 "data/maps/FrescoIsland/scripts.pory"
	lock
# 256 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 257 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_LittleBoyBuildingSandCastle_Text_0
# 258 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_LittleBoyBuildingSandCastle_Text_1
# 259 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 260 "data/maps/FrescoIsland/scripts.pory"
	applymovement 13, Common_Movement_FaceOriginalDirection
# 261 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 262 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Trapinch::
# 268 "data/maps/FrescoIsland/scripts.pory"
	lock
# 269 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 270 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Trapinch_Text_0
# 271 "data/maps/FrescoIsland/scripts.pory"
	playmoncry SPECIES_TRAPINCH, CRY_MODE_NORMAL
# 272 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Trapinch_Text_1
# 273 "data/maps/FrescoIsland/scripts.pory"
	waitmoncry
# 274 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 275 "data/maps/FrescoIsland/scripts.pory"
	applymovement 14, Common_Movement_FaceOriginalDirection
# 276 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 277 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_GymSign::
# 283 "data/maps/FrescoIsland/scripts.pory"
	lock
# 284 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_GymSign_Text_0
# 285 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 286 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_BugCatcher::
# 292 "data/maps/FrescoIsland/scripts.pory"
	lock
# 293 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 294 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_BugCatcher_Text_0
# 295 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_BugCatcher_Text_1
# 296 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 297 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Athlete::
# 303 "data/maps/FrescoIsland/scripts.pory"
	lock
# 304 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 305 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Athlete_Text_0
# 306 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Athlete_Text_1
# 307 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 308 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_BeautyRunning::
# 314 "data/maps/FrescoIsland/scripts.pory"
	lock
# 315 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 316 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_BeautyRunning_Text_0
# 317 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_BeautyRunning_Text_1
# 318 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 319 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Ponyta::
# 325 "data/maps/FrescoIsland/scripts.pory"
	lock
# 326 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 327 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Ponyta_Text_0
# 328 "data/maps/FrescoIsland/scripts.pory"
	playmoncry SPECIES_PONYTA, CRY_MODE_NORMAL
# 329 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Ponyta_Text_1
# 330 "data/maps/FrescoIsland/scripts.pory"
	waitmoncry
# 331 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 332 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_CyclingAthlete::
# 338 "data/maps/FrescoIsland/scripts.pory"
	lock
# 339 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 340 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_CyclingAthlete_Text_0
# 341 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_CyclingAthlete_Text_1
# 342 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 343 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_HikerViewingPot::
# 349 "data/maps/FrescoIsland/scripts.pory"
	lock
# 350 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 351 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_HikerViewingPot_Text_0
# 352 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_HikerViewingPot_Text_1
# 353 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 354 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_OldWoman::
# 360 "data/maps/FrescoIsland/scripts.pory"
	lock
# 361 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 362 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_OldWoman_Text_0
# 363 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_OldWoman_Text_1
# 364 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 365 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Camper::
# 371 "data/maps/FrescoIsland/scripts.pory"
	lock
# 372 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 373 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Camper_Text_0
# 374 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Camper_Text_1
# 375 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 376 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_ManOnChair::
# 382 "data/maps/FrescoIsland/scripts.pory"
	lock
# 383 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 384 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_ManOnChair_Text_0
# 385 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ManOnChair_Text_1
# 386 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 387 "data/maps/FrescoIsland/scripts.pory"
	applymovement 23, Common_Movement_FaceDown
# 388 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 389 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_TuberBuildingSandCastle::
# 395 "data/maps/FrescoIsland/scripts.pory"
	lock
# 396 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 397 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TuberSwimming_Text_0
# 398 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TuberBuildingSandCastle_Text_0
# 399 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 400 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Gentleman::
# 406 "data/maps/FrescoIsland/scripts.pory"
	lock
# 407 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 408 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Gentleman_Text_0
# 409 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Gentleman_Text_1
# 410 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 411 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_TailorSign::
# 417 "data/maps/FrescoIsland/scripts.pory"
	lock
# 418 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TailorSign_Text_0
# 419 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 420 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_HikerOnVolcano::
# 426 "data/maps/FrescoIsland/scripts.pory"
	lock
# 427 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 428 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_HikerOnVolcano_Text_0
# 429 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_HikerOnVolcano_Text_1
# 430 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 431 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_DirectionSign_Text_0:
# 30 "data/maps/FrescoIsland/scripts.pory"
	.string "The Fresco Isles\n"
	.string "History, Awash in Magma\p"
	.string "{LEFT_ARROW} Sea of Vulcai$"

FrescoIsles_EventScript_ClosedSign_Text_0:
# 39 "data/maps/FrescoIsland/scripts.pory"
	.string "Building Closure Notice\n"
	.string "Fresco Isles Research Lab has been\l"
	.string "closed due to Team Chimera activity.\l"
	.string "Entering the building is strictly\l"
	.string "prohibited.$"

FrescoIsles_EventScript_TuberSwimming_Text_0:
# 49 "data/maps/FrescoIsland/scripts.pory"
	.string "Tuber$"

FrescoIsles_EventScript_TuberSwimming_Text_1:
# 50 "data/maps/FrescoIsland/scripts.pory"
	.string "The water is so warm here! Best\n"
	.string "vacation ever!!$"

FrescoIsles_EventScript_WomanOnBeachChair_Text_0:
# 60 "data/maps/FrescoIsland/scripts.pory"
	.string "Woman$"

FrescoIsles_EventScript_WomanOnBeachChair_Text_1:
# 61 "data/maps/FrescoIsland/scripts.pory"
	.string "I brought my son here for some time to\n"
	.string "relax. The world is crazy, so it's\l"
	.string "important to take a moment and sit\l"
	.string "back.$"

FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_0:
# 73 "data/maps/FrescoIsland/scripts.pory"
	.string "Crystal Girl$"

FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_1:
# 76 "data/maps/FrescoIsland/scripts.pory"
	.string "Have you unlocked your Pokémon's\n"
	.string "Hidden Power yet?$"

FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_2:
# 81 "data/maps/FrescoIsland/scripts.pory"
	.string "Just like crystals, Pokémon have\n"
	.string "special powers unique to them. I've\l"
	.string "found a way to tap into that potential.\l"
	.string "Check it out!$"

FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_3:
# 89 "data/maps/FrescoIsland/scripts.pory"
	.string "Hidden Power is a move that changes\n"
	.string "type based on the individual Pokémon.\l"
	.string "You'd be surprised at what secrets your\l"
	.string "Pokémon might hold.$"

FrescoIsles_EventScript_Farmer_Text_0:
# 100 "data/maps/FrescoIsland/scripts.pory"
	.string "Farmer$"

FrescoIsles_EventScript_Farmer_Text_1:
# 101 "data/maps/FrescoIsland/scripts.pory"
	.string "Most of the Fresco Isles are totally\n"
	.string "covered in sand. Only shrubs and a few\l"
	.string "hardy trees can grow there. To keep\l"
	.string "this island grassy, it takes a lot of\l"
	.string "extra work.$"

FrescoIsles_EventScript_SailorWithQuaxly_Text_0:
# 111 "data/maps/FrescoIsland/scripts.pory"
	.string "Sailor$"

FrescoIsles_EventScript_SailorWithQuaxly_Text_1:
# 112 "data/maps/FrescoIsland/scripts.pory"
	.string "My boat got whipped into a rock in the\n"
	.string "Sea of Vulcai. It's not all bad, though -\l"
	.string "I found this rare Pokémon right on the\l"
	.string "beach!$"

FrescoIsles_EventScript_Quaxly_Text_0:
# 124 "data/maps/FrescoIsland/scripts.pory"
	.string "Quaxly$"

FrescoIsles_EventScript_Quaxly_Text_1:
# 126 "data/maps/FrescoIsland/scripts.pory"
	.string "Kwak wak wak!$"

FrescoIsles_EventScript_LittleGirl_Text_0:
# 137 "data/maps/FrescoIsland/scripts.pory"
	.string "Little Girl$"

FrescoIsles_EventScript_LittleGirl_Text_1:
# 138 "data/maps/FrescoIsland/scripts.pory"
	.string "Hiya! You're an adult, right? Do you\n"
	.string "know why all the rocks around here are\l"
	.string "black?$"

FrescoIsles_EventScript_LittleGirl_Text_2:
# 144 "data/maps/FrescoIsland/scripts.pory"
	.string "Yeah! It's volcanic rock!$"

FrescoIsles_EventScript_LittleGirl_Text_3:
# 150 "data/maps/FrescoIsland/scripts.pory"
	.string "Really? Ehehe, even I know why! It's all\n"
	.string "made of dried lava!$"

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_0:
# 161 "data/maps/FrescoIsland/scripts.pory"
	.string "Artist$"

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_1:
# 167 "data/maps/FrescoIsland/scripts.pory"
	.string "These shard-based paints are so\n"
	.string "bright, they'll be perfect for my\l"
	.string "masterpiece!$"

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_2:
# 177 "data/maps/FrescoIsland/scripts.pory"
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
# 184 "data/maps/FrescoIsland/scripts.pory"
	.string "Hey there. I'm still short on materials\n"
	.string "to make my special paints. Would you\l"
	.string "happen to have the colored Shards I\l"
	.string "requested?$"

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_4:
# 205 "data/maps/FrescoIsland/scripts.pory"
	.string "Woah, you have Red, Blue, Green, and\n"
	.string "Yellow Shards! I'll crush them up into\l"
	.string "stunning pigments.\p"
	.string "While you were off collecting Shards, I\n"
	.string "completed another project: a {COLOR GREEN}Clear\l"
	.string "Amulet{COLOR DARK_GRAY} for your Pokémon to hold.$"

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_5:
# 221 "data/maps/FrescoIsland/scripts.pory"
	.string "Hm, not yet, huh? I know they're rare.\p"
	.string "Some Pokémon hold colored Shards, and\n"
	.string "they can be found underground too.\l"
	.string "Please, bring me {COLOR GREEN}one of every colored\l"
	.string "Shard type{COLOR DARK_GRAY} once you have them!$"

FrescoIsles_EventScript_Dreepy_Text_0:
# 233 "data/maps/FrescoIsland/scripts.pory"
	.string "Dreepy$"

FrescoIsles_EventScript_Dreepy_Text_1:
# 235 "data/maps/FrescoIsland/scripts.pory"
	.string "Ee-auhhh...$"

FrescoIsles_EventScript_GirlWithDreepy_Text_0:
# 246 "data/maps/FrescoIsland/scripts.pory"
	.string "Girl$"

FrescoIsles_EventScript_GirlWithDreepy_Text_1:
# 247 "data/maps/FrescoIsland/scripts.pory"
	.string "This Dreepy was left behind by its\n"
	.string "colony. They're so small, sometimes they\l"
	.string "get left behind by the Drakloak and\l"
	.string "Dragapult at the head of their\l"
	.string "colonies... Maybe I'll be able to reunite\l"
	.string "it with its friends one day.$"

FrescoIsles_EventScript_LittleBoyBuildingSandCastle_Text_0:
# 257 "data/maps/FrescoIsland/scripts.pory"
	.string "Little Boy$"

FrescoIsles_EventScript_LittleBoyBuildingSandCastle_Text_1:
# 258 "data/maps/FrescoIsland/scripts.pory"
	.string "I found my Trapinch along the beach!\n"
	.string "Now I'm making it a sand castle to live\l"
	.string "in!$"

FrescoIsles_EventScript_Trapinch_Text_0:
# 270 "data/maps/FrescoIsland/scripts.pory"
	.string "Trapinch$"

FrescoIsles_EventScript_Trapinch_Text_1:
# 272 "data/maps/FrescoIsland/scripts.pory"
	.string "Chomp chomp!$"

FrescoIsles_EventScript_GymSign_Text_0:
# 284 "data/maps/FrescoIsland/scripts.pory"
	.string "Gym Leaders: Thalia and Melpomene\n"
	.string "The Theatrical Twins$"

FrescoIsles_EventScript_BugCatcher_Text_0:
# 294 "data/maps/FrescoIsland/scripts.pory"
	.string "Bug Catcher$"

FrescoIsles_EventScript_BugCatcher_Text_1:
# 295 "data/maps/FrescoIsland/scripts.pory"
	.string "Only the hardiest Pokémon can survive\n"
	.string "around here. The lava doesn't leak out\l"
	.string "anymore, but the heat and dry weather\l"
	.string "is still really hard for some Pokémon to\l"
	.string "stand.$"

FrescoIsles_EventScript_Athlete_Text_0:
# 305 "data/maps/FrescoIsland/scripts.pory"
	.string "Athlete$"

FrescoIsles_EventScript_Athlete_Text_1:
# 306 "data/maps/FrescoIsland/scripts.pory"
	.string "Phew! Gotta keep getting stronger to\n"
	.string "keep up with all the other Trainers.$"

FrescoIsles_EventScript_BeautyRunning_Text_0:
# 316 "data/maps/FrescoIsland/scripts.pory"
	.string "Beauty$"

FrescoIsles_EventScript_BeautyRunning_Text_1:
# 317 "data/maps/FrescoIsland/scripts.pory"
	.string "Ponyta, come back! She's been riled up\n"
	.string "ever since we got here. I think she\l"
	.string "likes the heat.$"

FrescoIsles_EventScript_Ponyta_Text_0:
# 327 "data/maps/FrescoIsland/scripts.pory"
	.string "Ponyta$"

FrescoIsles_EventScript_Ponyta_Text_1:
# 329 "data/maps/FrescoIsland/scripts.pory"
	.string "Breighh!$"

FrescoIsles_EventScript_CyclingAthlete_Text_0:
# 340 "data/maps/FrescoIsland/scripts.pory"
	.string "Cycling Athlete$"

FrescoIsles_EventScript_CyclingAthlete_Text_1:
# 341 "data/maps/FrescoIsland/scripts.pory"
	.string "This whole place is just sand and\n"
	.string "water... This wasn't the best place for\l"
	.string "biking, huh?$"

FrescoIsles_EventScript_HikerViewingPot_Text_0:
# 351 "data/maps/FrescoIsland/scripts.pory"
	.string "Ruin Maniac$"

FrescoIsles_EventScript_HikerViewingPot_Text_1:
# 352 "data/maps/FrescoIsland/scripts.pory"
	.string "Based on the ruins around here, these\n"
	.string "islands used to be much more populated.\l"
	.string "It seems that a volcanic explosion\l"
	.string "centuries ago changed the ecosystem\l"
	.string "and cut the population.$"

FrescoIsles_EventScript_OldWoman_Text_0:
# 362 "data/maps/FrescoIsland/scripts.pory"
	.string "Old Woman$"

FrescoIsles_EventScript_OldWoman_Text_1:
# 363 "data/maps/FrescoIsland/scripts.pory"
	.string "Not many people visit the outlying\n"
	.string "islands. It's just a few visitors, the\l"
	.string "Pokémon, and me.$"

FrescoIsles_EventScript_Camper_Text_0:
# 373 "data/maps/FrescoIsland/scripts.pory"
	.string "Camper$"

FrescoIsles_EventScript_Camper_Text_1:
# 374 "data/maps/FrescoIsland/scripts.pory"
	.string "The Gym Leaders of the Fresco Isles are\n"
	.string "twins. Thalia loves jokes and fun, while\l"
	.string "Melpomene is always moping around and\l"
	.string "watching tragedies. The only thing they\l"
	.string "have in common is a love for theatre.$"

FrescoIsles_EventScript_ManOnChair_Text_0:
# 384 "data/maps/FrescoIsland/scripts.pory"
	.string "Man$"

FrescoIsles_EventScript_ManOnChair_Text_1:
# 385 "data/maps/FrescoIsland/scripts.pory"
	.string "Ahh, this is the life. A cool breeze, warm\n"
	.string "sand, and a drink in my hand.$"

FrescoIsles_EventScript_TuberBuildingSandCastle_Text_0:
# 398 "data/maps/FrescoIsland/scripts.pory"
	.string "My dad told me not to peek into the\n"
	.string "abandoned lab up the hill. But I swear I\l"
	.string "saw someone sneaking in earlier!$"

FrescoIsles_EventScript_Gentleman_Text_0:
# 408 "data/maps/FrescoIsland/scripts.pory"
	.string "Gentleman$"

FrescoIsles_EventScript_Gentleman_Text_1:
# 409 "data/maps/FrescoIsland/scripts.pory"
	.string "I came all the way here from Kalami City\n"
	.string "to get a new suit made. But the Tailor is\l"
	.string "sending me on a wild Swanna chase...\l"
	.string "Literally! He wants me to catch a\l"
	.string "Swanna for some reason!$"

FrescoIsles_EventScript_TailorSign_Text_0:
# 418 "data/maps/FrescoIsland/scripts.pory"
	.string "Fresco Isles Tailor\n"
	.string "Specialty Outfits for All!$"

FrescoIsles_EventScript_HikerOnVolcano_Text_0:
# 428 "data/maps/FrescoIsland/scripts.pory"
	.string "Hiker$"

FrescoIsles_EventScript_HikerOnVolcano_Text_1:
# 429 "data/maps/FrescoIsland/scripts.pory"
	.string "Woah, it's getting hot up here. Any\n"
	.string "closer and it'll start to hurt...$"

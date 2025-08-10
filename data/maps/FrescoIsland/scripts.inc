FrescoIsland_MapScripts::
# 2 "data/maps/FrescoIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FrescoIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FrescoIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FrescoIsland/scripts.pory"
	setflag FLAG_VISITED_FRESCO_ISLAND
# 5 "data/maps/FrescoIsland/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, FrescoIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
FrescoIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 11 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 12 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 13 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 14 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 15 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 16 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 17 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 18 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 19 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 20 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 21 "data/maps/FrescoIsland/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 22 "data/maps/FrescoIsland/scripts.pory"
	setobjectaswildencounter 26, ENCOUNTER_LAND
# 23 "data/maps/FrescoIsland/scripts.pory"
	setobjectaswildencounter 27, ENCOUNTER_LAND
# 24 "data/maps/FrescoIsland/scripts.pory"
	setobjectaswildencounter 28, ENCOUNTER_LAND
# 25 "data/maps/FrescoIsland/scripts.pory"
	setobjectaswildencounter 29, ENCOUNTER_LAND
# 26 "data/maps/FrescoIsland/scripts.pory"
	setobjectaswildencounter 30, ENCOUNTER_LAND
	return

FrescoIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/FrescoIsland/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto FrescoIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


FrescoIsles_EventScript_DirectionSign::
# 32 "data/maps/FrescoIsland/scripts.pory"
	lock
# 33 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_DirectionSign_Text_0
# 34 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 35 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_ClosedSign::
# 41 "data/maps/FrescoIsland/scripts.pory"
	lock
# 42 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ClosedSign_Text_0
# 43 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 44 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_TuberSwimming::
# 50 "data/maps/FrescoIsland/scripts.pory"
	lock
# 51 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 52 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TuberSwimming_Text_0
# 53 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TuberSwimming_Text_1
# 54 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 55 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_WomanOnBeachChair::
# 61 "data/maps/FrescoIsland/scripts.pory"
	lock
# 62 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 63 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_WomanOnBeachChair_Text_0
# 64 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_WomanOnBeachChair_Text_1
# 65 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 66 "data/maps/FrescoIsland/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 67 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 68 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_HexManiacWithHiddenPower::
# 74 "data/maps/FrescoIsland/scripts.pory"
	lock
# 75 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 76 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_0
# 77 "data/maps/FrescoIsland/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_HIDDEN_POWER, FrescoIsles_EventScript_HexManiacWithHiddenPower_2
# 84 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_2
# 85 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 86 "data/maps/FrescoIsland/scripts.pory"
	delay 5
# 87 "data/maps/FrescoIsland/scripts.pory"
	setflag FLAG_RECEIVED_TM_HIDDEN_POWER
# 88 "data/maps/FrescoIsland/scripts.pory"
	giveitem ITEM_TM_HIDDEN_POWER
# 89 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 90 "data/maps/FrescoIsland/scripts.pory"
	delay 5
# 91 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_0
# 92 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_3
# 93 "data/maps/FrescoIsland/scripts.pory"
	closemessage
FrescoIsles_EventScript_HexManiacWithHiddenPower_1:
# 95 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_HexManiacWithHiddenPower_2:
# 79 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_1
# 80 "data/maps/FrescoIsland/scripts.pory"
	closemessage
	goto FrescoIsles_EventScript_HexManiacWithHiddenPower_1


FrescoIsles_EventScript_Farmer::
# 101 "data/maps/FrescoIsland/scripts.pory"
	lock
# 102 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 103 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Farmer_Text_0
# 104 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Farmer_Text_1
# 105 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 106 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_SailorWithQuaxly::
# 112 "data/maps/FrescoIsland/scripts.pory"
	lock
# 113 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 114 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_SailorWithQuaxly_Text_0
# 115 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_SailorWithQuaxly_Text_1
# 116 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 117 "data/maps/FrescoIsland/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 118 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 119 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Quaxly::
# 125 "data/maps/FrescoIsland/scripts.pory"
	lock
# 126 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 127 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Quaxly_Text_0
# 128 "data/maps/FrescoIsland/scripts.pory"
	playmoncry SPECIES_QUAXLY, CRY_MODE_NORMAL
# 129 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Quaxly_Text_1
# 130 "data/maps/FrescoIsland/scripts.pory"
	waitmoncry
# 131 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 132 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_LittleGirl::
# 138 "data/maps/FrescoIsland/scripts.pory"
	lock
# 139 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 140 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_LittleGirl_Text_0
# 141 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_LittleGirl_Text_1, MSGBOX_YESNO
# 142 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 143 "data/maps/FrescoIsland/scripts.pory"
	delay 5
# 144 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FrescoIsles_EventScript_LittleGirl_2
# 152 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_LittleGirl_Text_0
# 153 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_LittleGirl_Text_3
# 154 "data/maps/FrescoIsland/scripts.pory"
	closemessage
FrescoIsles_EventScript_LittleGirl_1:
# 156 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_LittleGirl_2:
# 146 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_LittleGirl_Text_0
# 147 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_LittleGirl_Text_2
# 148 "data/maps/FrescoIsland/scripts.pory"
	closemessage
	goto FrescoIsles_EventScript_LittleGirl_1


FrescoIsles_EventScript_ArtistNeedsPaintMaterials::
# 162 "data/maps/FrescoIsland/scripts.pory"
	lock
# 163 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 164 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_0
# 167 "data/maps/FrescoIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_SHARDS_FOR_ARTIST
# 168 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_2
# 177 "data/maps/FrescoIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_SHARDS_FOR_ARTIST
# 178 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_5
# 187 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_3
# 188 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 190 "data/maps/FrescoIsland/scripts.pory"
	checkitem ITEM_RED_SHARD
# 191 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_9
FrescoIsles_EventScript_ArtistNeedsPaintMaterials_8:
# 204 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_11
# 223 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_0
# 224 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_5
# 225 "data/maps/FrescoIsland/scripts.pory"
	closemessage
FrescoIsles_EventScript_ArtistNeedsPaintMaterials_4:
# 228 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_2:
# 170 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_1
# 171 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 172 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_5:
# 180 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_2
# 181 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 182 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 183 "data/maps/FrescoIsland/scripts.pory"
	startquest QUEST_SHARDS_FOR_ARTIST
	goto FrescoIsles_EventScript_ArtistNeedsPaintMaterials_4

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_9:
# 193 "data/maps/FrescoIsland/scripts.pory"
	checkitem ITEM_BLUE_SHARD
# 194 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_14
	goto FrescoIsles_EventScript_ArtistNeedsPaintMaterials_8

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_11:
# 206 "data/maps/FrescoIsland/scripts.pory"
	emote 10, EMOTE_EXCLAM
# 207 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_0
# 208 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_4
# 209 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 210 "data/maps/FrescoIsland/scripts.pory"
	delay 5
# 211 "data/maps/FrescoIsland/scripts.pory"
	removeitem ITEM_RED_SHARD
# 212 "data/maps/FrescoIsland/scripts.pory"
	removeitem ITEM_BLUE_SHARD
# 213 "data/maps/FrescoIsland/scripts.pory"
	removeitem ITEM_GREEN_SHARD
# 214 "data/maps/FrescoIsland/scripts.pory"
	removeitem ITEM_YELLOW_SHARD
# 215 "data/maps/FrescoIsland/scripts.pory"
	giveitem ITEM_CLEAR_AMULET
# 216 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 218 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 219 "data/maps/FrescoIsland/scripts.pory"
	completequest QUEST_SHARDS_FOR_ARTIST
	goto FrescoIsles_EventScript_ArtistNeedsPaintMaterials_4

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_14:
# 196 "data/maps/FrescoIsland/scripts.pory"
	checkitem ITEM_GREEN_SHARD
# 197 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_16
	goto FrescoIsles_EventScript_ArtistNeedsPaintMaterials_8

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_16:
# 199 "data/maps/FrescoIsland/scripts.pory"
	checkitem ITEM_YELLOW_SHARD
	goto FrescoIsles_EventScript_ArtistNeedsPaintMaterials_8


FrescoIsles_EventScript_Dreepy::
# 234 "data/maps/FrescoIsland/scripts.pory"
	lock
# 235 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 236 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Dreepy_Text_0
# 237 "data/maps/FrescoIsland/scripts.pory"
	playmoncry SPECIES_DREEPY, CRY_MODE_NORMAL
# 238 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Dreepy_Text_1
# 239 "data/maps/FrescoIsland/scripts.pory"
	waitmoncry
# 240 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 241 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_GirlWithDreepy::
# 247 "data/maps/FrescoIsland/scripts.pory"
	lock
# 248 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 249 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_GirlWithDreepy_Text_0
# 250 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_GirlWithDreepy_Text_1
# 251 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 252 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_LittleBoyBuildingSandCastle::
# 258 "data/maps/FrescoIsland/scripts.pory"
	lock
# 259 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 260 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_LittleBoyBuildingSandCastle_Text_0
# 261 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_LittleBoyBuildingSandCastle_Text_1
# 262 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 263 "data/maps/FrescoIsland/scripts.pory"
	applymovement 13, Common_Movement_FaceOriginalDirection
# 264 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 265 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Trapinch::
# 271 "data/maps/FrescoIsland/scripts.pory"
	lock
# 272 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 273 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Trapinch_Text_0
# 274 "data/maps/FrescoIsland/scripts.pory"
	playmoncry SPECIES_TRAPINCH, CRY_MODE_NORMAL
# 275 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Trapinch_Text_1
# 276 "data/maps/FrescoIsland/scripts.pory"
	waitmoncry
# 277 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 278 "data/maps/FrescoIsland/scripts.pory"
	applymovement 14, Common_Movement_FaceOriginalDirection
# 279 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 280 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_GymSign::
# 286 "data/maps/FrescoIsland/scripts.pory"
	lock
# 287 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_GymSign_Text_0
# 288 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 289 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_BugCatcher::
# 295 "data/maps/FrescoIsland/scripts.pory"
	lock
# 296 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 297 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_BugCatcher_Text_0
# 298 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_BugCatcher_Text_1
# 299 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 300 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Athlete::
# 306 "data/maps/FrescoIsland/scripts.pory"
	lock
# 307 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 308 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Athlete_Text_0
# 309 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Athlete_Text_1
# 310 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 311 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_BeautyRunning::
# 317 "data/maps/FrescoIsland/scripts.pory"
	lock
# 318 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 319 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_BeautyRunning_Text_0
# 320 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_BeautyRunning_Text_1
# 321 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 322 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Ponyta::
# 328 "data/maps/FrescoIsland/scripts.pory"
	lock
# 329 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 330 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Ponyta_Text_0
# 331 "data/maps/FrescoIsland/scripts.pory"
	playmoncry SPECIES_PONYTA, CRY_MODE_NORMAL
# 332 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Ponyta_Text_1
# 333 "data/maps/FrescoIsland/scripts.pory"
	waitmoncry
# 334 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 335 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_CyclingAthlete::
# 341 "data/maps/FrescoIsland/scripts.pory"
	lock
# 342 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 343 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_CyclingAthlete_Text_0
# 344 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_CyclingAthlete_Text_1
# 345 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 346 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_HikerViewingPot::
# 352 "data/maps/FrescoIsland/scripts.pory"
	lock
# 353 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 354 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_HikerViewingPot_Text_0
# 355 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_HikerViewingPot_Text_1
# 356 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 357 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_OldWoman::
# 363 "data/maps/FrescoIsland/scripts.pory"
	lock
# 364 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 365 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_OldWoman_Text_0
# 366 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_OldWoman_Text_1
# 367 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 368 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Camper::
# 374 "data/maps/FrescoIsland/scripts.pory"
	lock
# 375 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 376 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Camper_Text_0
# 377 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Camper_Text_1
# 378 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 379 "data/maps/FrescoIsland/scripts.pory"
	goto_if_unset FLAG_HIDE_TWIN_MUSES_FRESCO_ISLES, FrescoIsles_EventScript_Camper_2
# 387 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Camper_Text_0
# 388 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Camper_Text_3
# 389 "data/maps/FrescoIsland/scripts.pory"
	closemessage
FrescoIsles_EventScript_Camper_1:
# 391 "data/maps/FrescoIsland/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceUp
# 392 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 393 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_Camper_2:
# 381 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Camper_Text_0
# 382 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Camper_Text_2
# 383 "data/maps/FrescoIsland/scripts.pory"
	closemessage
	goto FrescoIsles_EventScript_Camper_1


FrescoIsles_EventScript_ManOnChair::
# 399 "data/maps/FrescoIsland/scripts.pory"
	lock
# 400 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 401 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_ManOnChair_Text_0
# 402 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ManOnChair_Text_1
# 403 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 404 "data/maps/FrescoIsland/scripts.pory"
	applymovement 23, Common_Movement_FaceDown
# 405 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 406 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_TuberBuildingSandCastle::
# 412 "data/maps/FrescoIsland/scripts.pory"
	lock
# 413 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 414 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TuberSwimming_Text_0
# 415 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TuberBuildingSandCastle_Text_0
# 416 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 417 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Gentleman::
# 423 "data/maps/FrescoIsland/scripts.pory"
	lock
# 424 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 425 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Gentleman_Text_0
# 426 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Gentleman_Text_1
# 427 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 428 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_TailorSign::
# 434 "data/maps/FrescoIsland/scripts.pory"
	lock
# 435 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TailorSign_Text_0
# 436 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 437 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_HikerOnVolcano::
# 443 "data/maps/FrescoIsland/scripts.pory"
	lock
# 444 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 445 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_HikerOnVolcano_Text_0
# 446 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_HikerOnVolcano_Text_1
# 447 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 448 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_TheatreSign::
# 454 "data/maps/FrescoIsland/scripts.pory"
	lock
# 455 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TheatreSign_Text_0
# 456 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 457 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_TheatreSpectator_Artist::
# 463 "data/maps/FrescoIsland/scripts.pory"
	lock
# 464 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 465 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_0
# 467 "data/maps/FrescoIsland/scripts.pory"
	goto_if_unset FLAG_HIDE_TWIN_MUSES_FRESCO_ISLES, FrescoIsles_EventScript_TheatreSpectator_Artist_2
# 473 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TheatreSpectator_Artist_Text_1
FrescoIsles_EventScript_TheatreSpectator_Artist_1:
# 475 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 476 "data/maps/FrescoIsland/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceUp
# 477 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 479 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_TheatreSpectator_Artist_2:
# 469 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TheatreSpectator_Artist_Text_0
	goto FrescoIsles_EventScript_TheatreSpectator_Artist_1


FrescoIsles_EventScript_TheatreSpectator_Performer::
# 485 "data/maps/FrescoIsland/scripts.pory"
	lock
# 486 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 487 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TheatreSpectator_Performer_Text_0
# 489 "data/maps/FrescoIsland/scripts.pory"
	goto_if_unset FLAG_HIDE_TWIN_MUSES_FRESCO_ISLES, FrescoIsles_EventScript_TheatreSpectator_Performer_2
# 495 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TheatreSpectator_Performer_Text_2
FrescoIsles_EventScript_TheatreSpectator_Performer_1:
# 497 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 498 "data/maps/FrescoIsland/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceUp
# 499 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 501 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_TheatreSpectator_Performer_2:
# 491 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TheatreSpectator_Performer_Text_1
	goto FrescoIsles_EventScript_TheatreSpectator_Performer_1


FrescoIsles_EventScript_TwinMusesAtTheatreEvent::
# 507 "data/maps/FrescoIsland/scripts.pory"
	lockall
# 508 "data/maps/FrescoIsland/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 509 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_TEMP_1, 72
	goto_if_eq FrescoIsles_EventScript_TwinMusesAtTheatreEvent_2
# 514 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_TEMP_1, 74
	goto_if_eq FrescoIsles_EventScript_TwinMusesAtTheatreEvent_3
FrescoIsles_EventScript_TwinMusesAtTheatreEvent_1:
# 519 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 520 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 521 "data/maps/FrescoIsland/scripts.pory"
	delay 5
# 524 "data/maps/FrescoIsland/scripts.pory"
	applymovement 43, Common_Movement_JumpInPlaceRight
# 525 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 526 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_0
# 527 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_1
# 528 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 529 "data/maps/FrescoIsland/scripts.pory"
	delay 10
# 530 "data/maps/FrescoIsland/scripts.pory"
	applymovement 45, Common_Movement_JumpInPlaceLeft
# 531 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 532 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_2
# 533 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_3
# 534 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 535 "data/maps/FrescoIsland/scripts.pory"
	emote 43, EMOTE_EXCLAM
# 536 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_0
# 537 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_4
# 538 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 539 "data/maps/FrescoIsland/scripts.pory"
	delay 10
# 542 "data/maps/FrescoIsland/scripts.pory"
	applymovement 44, Common_Movement_JumpRight
# 543 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 544 "data/maps/FrescoIsland/scripts.pory"
	applymovement 44, Common_Movement_JumpLeft
# 545 "data/maps/FrescoIsland/scripts.pory"
	applymovement 46, Common_Movement_JumpLeft
# 546 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 547 "data/maps/FrescoIsland/scripts.pory"
	applymovement 46, Common_Movement_JumpRight
# 548 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 549 "data/maps/FrescoIsland/scripts.pory"
	applymovement 44, Common_Movement_FaceRight
# 550 "data/maps/FrescoIsland/scripts.pory"
	applymovement 46, Common_Movement_FaceLeft
# 551 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 553 "data/maps/FrescoIsland/scripts.pory"
	delay 10
# 554 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_2
# 555 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_5
# 556 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 558 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 559 "data/maps/FrescoIsland/scripts.pory"
	emote 42, EMOTE_EXCLAM
# 560 "data/maps/FrescoIsland/scripts.pory"
	applymovement 42, FrescoIsles_Movement_PerformerApproach
# 561 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 562 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 563 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 564 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TheatreSpectator_Performer_Text_0
# 565 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_6
# 566 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 569 "data/maps/FrescoIsland/scripts.pory"
	checkitem ITEM_BOX_OF_CHOCOLATE
# 570 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FrescoIsles_EventScript_TwinMusesAtTheatreEvent_7
# 589 "data/maps/FrescoIsland/scripts.pory"
	emote 42, EMOTE_HEART
# 590 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TheatreSpectator_Performer_Text_0
# 591 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_7
# 592 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 593 "data/maps/FrescoIsland/scripts.pory"
	applymovement 42, FrescoIsles_Movement_PerformerBackToBench
# 594 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 595 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 596 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 597 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 598 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 599 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 600 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 601 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 602 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpInPlaceUp
# 603 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 604 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 606 "data/maps/FrescoIsland/scripts.pory"
	applymovement 43, FrescoIsles_Movement_ThaliaApproach
# 607 "data/maps/FrescoIsland/scripts.pory"
	applymovement 45, FrescoIsles_Movement_MelpomeneApproach
# 608 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 609 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 610 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 611 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_0
# 612 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_8
# 613 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 614 "data/maps/FrescoIsland/scripts.pory"
	delay 5
# 615 "data/maps/FrescoIsland/scripts.pory"
	removeitem ITEM_BOX_OF_CHOCOLATE
# 616 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_9
# 617 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 618 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 619 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 620 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 621 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_2
# 622 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_10
# 623 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 624 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 625 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 626 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_0
# 627 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_11
# 628 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 629 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 630 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 631 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_2
# 632 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_12
# 633 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 634 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 635 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 636 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_0
# 637 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_13
# 638 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 639 "data/maps/FrescoIsland/scripts.pory"
	delay 10
# 641 "data/maps/FrescoIsland/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 642 "data/maps/FrescoIsland/scripts.pory"
	delay 30
# 643 "data/maps/FrescoIsland/scripts.pory"
	setflag FLAG_HIDE_TWIN_MUSES_FRESCO_ISLES
# 644 "data/maps/FrescoIsland/scripts.pory"
	removeobject 43
# 645 "data/maps/FrescoIsland/scripts.pory"
	removeobject 44
# 646 "data/maps/FrescoIsland/scripts.pory"
	removeobject 45
# 647 "data/maps/FrescoIsland/scripts.pory"
	removeobject 46
# 648 "data/maps/FrescoIsland/scripts.pory"
	delay 30
# 649 "data/maps/FrescoIsland/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 651 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 652 "data/maps/FrescoIsland/scripts.pory"
	completequest QUEST_CALM_TWIN_MUSES
	return

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_2:
# 511 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 512 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
	goto FrescoIsles_EventScript_TwinMusesAtTheatreEvent_1

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_3:
# 516 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 517 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
	goto FrescoIsles_EventScript_TwinMusesAtTheatreEvent_1

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_7:
# 572 "data/maps/FrescoIsland/scripts.pory"
	applymovement 42, FrescoIsles_Movement_PerformerBackToBench
# 573 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 575 "data/maps/FrescoIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_CALM_TWIN_MUSES
# 576 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FrescoIsles_EventScript_TwinMusesAtTheatreEvent_10
FrescoIsles_EventScript_TwinMusesAtTheatreEvent_9:
# 582 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 583 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 584 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_10:
# 578 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 579 "data/maps/FrescoIsland/scripts.pory"
	startquest QUEST_CALM_TWIN_MUSES
	goto FrescoIsles_EventScript_TwinMusesAtTheatreEvent_9


# 663 "data/maps/FrescoIsland/scripts.pory"
FrescoIsles_Movement_PerformerApproach:
# 665 "data/maps/FrescoIsland/scripts.pory"
	walk_left
# 665 "data/maps/FrescoIsland/scripts.pory"
	walk_left
# 665 "data/maps/FrescoIsland/scripts.pory"
	walk_left
# 666 "data/maps/FrescoIsland/scripts.pory"
	walk_up
# 667 "data/maps/FrescoIsland/scripts.pory"
	face_up
# 668 "data/maps/FrescoIsland/scripts.pory"
	step_end

# 670 "data/maps/FrescoIsland/scripts.pory"
FrescoIsles_Movement_PerformerBackToBench:
# 672 "data/maps/FrescoIsland/scripts.pory"
	walk_down
# 673 "data/maps/FrescoIsland/scripts.pory"
	walk_right
# 673 "data/maps/FrescoIsland/scripts.pory"
	walk_right
# 673 "data/maps/FrescoIsland/scripts.pory"
	walk_right
# 674 "data/maps/FrescoIsland/scripts.pory"
	face_up
# 675 "data/maps/FrescoIsland/scripts.pory"
	step_end

# 677 "data/maps/FrescoIsland/scripts.pory"
FrescoIsles_Movement_ThaliaApproach:
# 679 "data/maps/FrescoIsland/scripts.pory"
	walk_down
# 680 "data/maps/FrescoIsland/scripts.pory"
	walk_right
# 681 "data/maps/FrescoIsland/scripts.pory"
	step_end

# 683 "data/maps/FrescoIsland/scripts.pory"
FrescoIsles_Movement_MelpomeneApproach:
# 685 "data/maps/FrescoIsland/scripts.pory"
	walk_down
# 686 "data/maps/FrescoIsland/scripts.pory"
	walk_left
# 687 "data/maps/FrescoIsland/scripts.pory"
	step_end

FrescoIsles_EventScript_ManBlockingGym::
# 692 "data/maps/FrescoIsland/scripts.pory"
	lock
# 693 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 694 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_ManBlockingGym_Text_0
# 695 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ManBlockingGym_Text_1
# 696 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 697 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_DirectionSign_Text_0:
# 33 "data/maps/FrescoIsland/scripts.pory"
	.string "The Fresco Isles\n"
	.string "History, Awash in Magma\p"
	.string "{LEFT_ARROW} Sea of Vulcai$"

FrescoIsles_EventScript_ClosedSign_Text_0:
# 42 "data/maps/FrescoIsland/scripts.pory"
	.string "Building Closure Notice\n"
	.string "Fresco Isles Research Lab has been\l"
	.string "closed due to Team Chimera activity.\l"
	.string "Entering the building is strictly\l"
	.string "prohibited.$"

FrescoIsles_EventScript_TuberSwimming_Text_0:
# 52 "data/maps/FrescoIsland/scripts.pory"
	.string "Tuber$"

FrescoIsles_EventScript_TuberSwimming_Text_1:
# 53 "data/maps/FrescoIsland/scripts.pory"
	.string "The water is so warm here! Best\n"
	.string "vacation ever!!$"

FrescoIsles_EventScript_WomanOnBeachChair_Text_0:
# 63 "data/maps/FrescoIsland/scripts.pory"
	.string "Woman$"

FrescoIsles_EventScript_WomanOnBeachChair_Text_1:
# 64 "data/maps/FrescoIsland/scripts.pory"
	.string "I brought my son here for some time to\n"
	.string "relax. The world is crazy, so it's\l"
	.string "important to take a moment and sit\l"
	.string "back.$"

FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_0:
# 76 "data/maps/FrescoIsland/scripts.pory"
	.string "Crystal Girl$"

FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_1:
# 79 "data/maps/FrescoIsland/scripts.pory"
	.string "Have you unlocked your Pokémon's\n"
	.string "Hidden Power yet?$"

FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_2:
# 84 "data/maps/FrescoIsland/scripts.pory"
	.string "Just like crystals, Pokémon have\n"
	.string "special powers unique to them. I've\l"
	.string "found a way to tap into that potential.\l"
	.string "Check it out!$"

FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_3:
# 92 "data/maps/FrescoIsland/scripts.pory"
	.string "Hidden Power is a move that changes\n"
	.string "type based on the individual Pokémon.\l"
	.string "You'd be surprised at what secrets your\l"
	.string "Pokémon might hold.$"

FrescoIsles_EventScript_Farmer_Text_0:
# 103 "data/maps/FrescoIsland/scripts.pory"
	.string "Farmer$"

FrescoIsles_EventScript_Farmer_Text_1:
# 104 "data/maps/FrescoIsland/scripts.pory"
	.string "Most of the Fresco Isles are totally\n"
	.string "covered in sand. Only shrubs and a few\l"
	.string "hardy trees can grow there. To keep\l"
	.string "this island grassy, it takes a lot of\l"
	.string "extra work.$"

FrescoIsles_EventScript_SailorWithQuaxly_Text_0:
# 114 "data/maps/FrescoIsland/scripts.pory"
	.string "Sailor$"

FrescoIsles_EventScript_SailorWithQuaxly_Text_1:
# 115 "data/maps/FrescoIsland/scripts.pory"
	.string "My boat got whipped into a rock in the\n"
	.string "Sea of Vulcai. It's not all bad, though -\l"
	.string "I found this rare Pokémon right on the\l"
	.string "beach!$"

FrescoIsles_EventScript_Quaxly_Text_0:
# 127 "data/maps/FrescoIsland/scripts.pory"
	.string "Quaxly$"

FrescoIsles_EventScript_Quaxly_Text_1:
# 129 "data/maps/FrescoIsland/scripts.pory"
	.string "Kwak wak wak!$"

FrescoIsles_EventScript_LittleGirl_Text_0:
# 140 "data/maps/FrescoIsland/scripts.pory"
	.string "Little Girl$"

FrescoIsles_EventScript_LittleGirl_Text_1:
# 141 "data/maps/FrescoIsland/scripts.pory"
	.string "Hiya! You're an adult, right? Do you\n"
	.string "know why all the rocks around here are\l"
	.string "black?$"

FrescoIsles_EventScript_LittleGirl_Text_2:
# 147 "data/maps/FrescoIsland/scripts.pory"
	.string "Yeah! It's volcanic rock!$"

FrescoIsles_EventScript_LittleGirl_Text_3:
# 153 "data/maps/FrescoIsland/scripts.pory"
	.string "Really? Ehehe, even I know why! It's all\n"
	.string "made of dried lava!$"

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_0:
# 164 "data/maps/FrescoIsland/scripts.pory"
	.string "Artist$"

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_1:
# 170 "data/maps/FrescoIsland/scripts.pory"
	.string "These shard-based paints are so\n"
	.string "bright, they'll be perfect for my\l"
	.string "masterpiece!$"

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_2:
# 180 "data/maps/FrescoIsland/scripts.pory"
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
# 187 "data/maps/FrescoIsland/scripts.pory"
	.string "Hey there. I'm still short on materials\n"
	.string "to make my special paints. Would you\l"
	.string "happen to have the colored Shards I\l"
	.string "requested?$"

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_4:
# 208 "data/maps/FrescoIsland/scripts.pory"
	.string "Woah, you have Red, Blue, Green, and\n"
	.string "Yellow Shards! I'll crush them up into\l"
	.string "stunning pigments.\p"
	.string "While you were off collecting Shards, I\n"
	.string "completed another project: a {COLOR GREEN}Clear\l"
	.string "Amulet{COLOR DARK_GRAY} for your Pokémon to hold.$"

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_5:
# 224 "data/maps/FrescoIsland/scripts.pory"
	.string "Hm, not yet, huh? I know they're rare.\p"
	.string "Some Pokémon hold colored Shards, and\n"
	.string "they can be found underground too.\l"
	.string "Please, bring me {COLOR GREEN}one of every colored\l"
	.string "Shard type{COLOR DARK_GRAY} once you have them!$"

FrescoIsles_EventScript_Dreepy_Text_0:
# 236 "data/maps/FrescoIsland/scripts.pory"
	.string "Dreepy$"

FrescoIsles_EventScript_Dreepy_Text_1:
# 238 "data/maps/FrescoIsland/scripts.pory"
	.string "Ee-auhhh...$"

FrescoIsles_EventScript_GirlWithDreepy_Text_0:
# 249 "data/maps/FrescoIsland/scripts.pory"
	.string "Girl$"

FrescoIsles_EventScript_GirlWithDreepy_Text_1:
# 250 "data/maps/FrescoIsland/scripts.pory"
	.string "This Dreepy was left behind by its\n"
	.string "colony. They're so small, sometimes they\l"
	.string "get left behind by the Drakloak and\l"
	.string "Dragapult at the head of their\l"
	.string "colonies... Maybe I'll be able to reunite\l"
	.string "it with its friends one day.$"

FrescoIsles_EventScript_LittleBoyBuildingSandCastle_Text_0:
# 260 "data/maps/FrescoIsland/scripts.pory"
	.string "Little Boy$"

FrescoIsles_EventScript_LittleBoyBuildingSandCastle_Text_1:
# 261 "data/maps/FrescoIsland/scripts.pory"
	.string "I found my Trapinch along the beach!\n"
	.string "Now I'm making it a sand castle to live\l"
	.string "in!$"

FrescoIsles_EventScript_Trapinch_Text_0:
# 273 "data/maps/FrescoIsland/scripts.pory"
	.string "Trapinch$"

FrescoIsles_EventScript_Trapinch_Text_1:
# 275 "data/maps/FrescoIsland/scripts.pory"
	.string "Chomp chomp!$"

FrescoIsles_EventScript_GymSign_Text_0:
# 287 "data/maps/FrescoIsland/scripts.pory"
	.string "Gym Leaders: Thalia and Melpomene\n"
	.string "The Theatrical Twins$"

FrescoIsles_EventScript_BugCatcher_Text_0:
# 297 "data/maps/FrescoIsland/scripts.pory"
	.string "Bug Catcher$"

FrescoIsles_EventScript_BugCatcher_Text_1:
# 298 "data/maps/FrescoIsland/scripts.pory"
	.string "Only the hardiest Pokémon can survive\n"
	.string "around here. The lava doesn't leak out\l"
	.string "anymore, but the heat and dry weather\l"
	.string "is still really hard for some Pokémon to\l"
	.string "stand.$"

FrescoIsles_EventScript_Athlete_Text_0:
# 308 "data/maps/FrescoIsland/scripts.pory"
	.string "Athlete$"

FrescoIsles_EventScript_Athlete_Text_1:
# 309 "data/maps/FrescoIsland/scripts.pory"
	.string "Phew! Gotta keep getting stronger to\n"
	.string "keep up with all the other Trainers.$"

FrescoIsles_EventScript_BeautyRunning_Text_0:
# 319 "data/maps/FrescoIsland/scripts.pory"
	.string "Beauty$"

FrescoIsles_EventScript_BeautyRunning_Text_1:
# 320 "data/maps/FrescoIsland/scripts.pory"
	.string "Ponyta, come back! She's been riled up\n"
	.string "ever since we got here. I think she\l"
	.string "likes the heat.$"

FrescoIsles_EventScript_Ponyta_Text_0:
# 330 "data/maps/FrescoIsland/scripts.pory"
	.string "Ponyta$"

FrescoIsles_EventScript_Ponyta_Text_1:
# 332 "data/maps/FrescoIsland/scripts.pory"
	.string "Breighh!$"

FrescoIsles_EventScript_CyclingAthlete_Text_0:
# 343 "data/maps/FrescoIsland/scripts.pory"
	.string "Cycling Athlete$"

FrescoIsles_EventScript_CyclingAthlete_Text_1:
# 344 "data/maps/FrescoIsland/scripts.pory"
	.string "This whole place is just sand and\n"
	.string "water... This wasn't the best place for\l"
	.string "biking, huh?$"

FrescoIsles_EventScript_HikerViewingPot_Text_0:
# 354 "data/maps/FrescoIsland/scripts.pory"
	.string "Ruin Maniac$"

FrescoIsles_EventScript_HikerViewingPot_Text_1:
# 355 "data/maps/FrescoIsland/scripts.pory"
	.string "Based on the ruins around here, these\n"
	.string "islands used to be much more populated.\l"
	.string "It seems that a volcanic explosion\l"
	.string "centuries ago changed the ecosystem\l"
	.string "and cut the population.$"

FrescoIsles_EventScript_OldWoman_Text_0:
# 365 "data/maps/FrescoIsland/scripts.pory"
	.string "Old Woman$"

FrescoIsles_EventScript_OldWoman_Text_1:
# 366 "data/maps/FrescoIsland/scripts.pory"
	.string "Not many people visit the outlying\n"
	.string "islands. It's just a few visitors, the\l"
	.string "Pokémon, and me.$"

FrescoIsles_EventScript_Camper_Text_0:
# 376 "data/maps/FrescoIsland/scripts.pory"
	.string "Camper$"

FrescoIsles_EventScript_Camper_Text_1:
# 377 "data/maps/FrescoIsland/scripts.pory"
	.string "The Gym Leaders of the Fresco Isles are\n"
	.string "twins. Thalia loves jokes and fun, while\l"
	.string "Melpomene is always moping around and\l"
	.string "watching tragedies. The only thing they\l"
	.string "have in common is a love for theatre.$"

FrescoIsles_EventScript_Camper_Text_2:
# 382 "data/maps/FrescoIsland/scripts.pory"
	.string "They're up on stage right now, having\n"
	.string "another fight. When will they learn to\l"
	.string "get along...$"

FrescoIsles_EventScript_Camper_Text_3:
# 388 "data/maps/FrescoIsland/scripts.pory"
	.string "It seems like they've gone back to\n"
	.string "their Gym Leader duties. Hopefully that\l"
	.string "lasts...$"

FrescoIsles_EventScript_ManOnChair_Text_0:
# 401 "data/maps/FrescoIsland/scripts.pory"
	.string "Man$"

FrescoIsles_EventScript_ManOnChair_Text_1:
# 402 "data/maps/FrescoIsland/scripts.pory"
	.string "Ahh, this is the life. A cool breeze, warm\n"
	.string "sand, and a drink in my hand.$"

FrescoIsles_EventScript_TuberBuildingSandCastle_Text_0:
# 415 "data/maps/FrescoIsland/scripts.pory"
	.string "My dad told me not to peek into the\n"
	.string "abandoned lab up the hill. But I swear I\l"
	.string "saw someone sneaking in earlier!$"

FrescoIsles_EventScript_Gentleman_Text_0:
# 425 "data/maps/FrescoIsland/scripts.pory"
	.string "Gentleman$"

FrescoIsles_EventScript_Gentleman_Text_1:
# 426 "data/maps/FrescoIsland/scripts.pory"
	.string "I came all the way here from Kalami City\n"
	.string "to get a new suit made. But the Tailor is\l"
	.string "sending me on a wild Swanna chase...\l"
	.string "Literally! He wants me to catch a\l"
	.string "Swanna for some reason!$"

FrescoIsles_EventScript_TailorSign_Text_0:
# 435 "data/maps/FrescoIsland/scripts.pory"
	.string "Fresco Isles Tailor\n"
	.string "Specialty Outfits for All!$"

FrescoIsles_EventScript_HikerOnVolcano_Text_0:
# 445 "data/maps/FrescoIsland/scripts.pory"
	.string "Hiker$"

FrescoIsles_EventScript_HikerOnVolcano_Text_1:
# 446 "data/maps/FrescoIsland/scripts.pory"
	.string "Woah, it's getting hot up here. Any\n"
	.string "closer and it'll start to hurt...$"

FrescoIsles_EventScript_TheatreSign_Text_0:
# 455 "data/maps/FrescoIsland/scripts.pory"
	.string "Fresco Isles Outdoor Theatre\n"
	.string "Perfect for All Performing Arts!$"

FrescoIsles_EventScript_TheatreSpectator_Artist_Text_0:
# 469 "data/maps/FrescoIsland/scripts.pory"
	.string "I came to support the arts, but it's\n"
	.string "just Thalia and Melpomene fighting each\l"
	.string "other. This isn't what I wanted!$"

FrescoIsles_EventScript_TheatreSpectator_Artist_Text_1:
# 473 "data/maps/FrescoIsland/scripts.pory"
	.string "Thalia and Melpomene have gone back to\n"
	.string "the Gym together. Now the Theatre can\l"
	.string "get back to business!$"

FrescoIsles_EventScript_TheatreSpectator_Performer_Text_0:
# 487 "data/maps/FrescoIsland/scripts.pory"
	.string "Performer$"

FrescoIsles_EventScript_TheatreSpectator_Performer_Text_1:
# 491 "data/maps/FrescoIsland/scripts.pory"
	.string "I was about to perform, but Thalia and\n"
	.string "Melpomene showed up and threw\l"
	.string "everything off. Thalia requested a pop\l"
	.string "song, but Melpomene wanted a sad song...\l"
	.string "And now, here we are...$"

FrescoIsles_EventScript_TheatreSpectator_Performer_Text_2:
# 495 "data/maps/FrescoIsland/scripts.pory"
	.string "I'm glad that Thalia and Melpomene put\n"
	.string "aside their differences for now. I'll\l"
	.string "resume my performance soon!$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_0:
# 526 "data/maps/FrescoIsland/scripts.pory"
	.string "Thalia$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_1:
# 527 "data/maps/FrescoIsland/scripts.pory"
	.string "ALL YOU EVER THINK ABOUT IS SADNESS!\n"
	.string "WHAT'S WRONG WITH A LITTLE FUN AND\l"
	.string "LAUGHTER?!$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_2:
# 532 "data/maps/FrescoIsland/scripts.pory"
	.string "Melpomene$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_3:
# 533 "data/maps/FrescoIsland/scripts.pory"
	.string "You and your pop music... More like SLOP\n"
	.string "MUSIC! EMOTION MAKES US THINK, UNLIKE\l"
	.string "YOUR BRAINLESS SONGS!!$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_4:
# 537 "data/maps/FrescoIsland/scripts.pory"
	.string "That DOES IT! Raichu, knock this sad\n"
	.string "sack into the sea!$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_5:
# 555 "data/maps/FrescoIsland/scripts.pory"
	.string "Heh, it won't be that easy, Thalia! I've\n"
	.string "always been the stronger twin!$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_6:
# 565 "data/maps/FrescoIsland/scripts.pory"
	.string "They've been at this for hours... Thalia\n"
	.string "and Melpomene may be twin Gym Leaders,\l"
	.string "but they clash over every\l"
	.string "disagreement.\p"
	.string "The only thing that can calm them down\n"
	.string "is a {COLOR GREEN}Box of Chocolate{COLOR DARK_GRAY} sold in the {COLOR GREEN}Poké\l"
	.string "Mart{COLOR DARK_GRAY} nearby. If you want to speak with\l"
	.string "them, I'd hurry over with your peace\l"
	.string "offering before the fight gets uglier!$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_7:
# 591 "data/maps/FrescoIsland/scripts.pory"
	.string "Hey, you've got the Box of Chocolate!\n"
	.string "Quick, give it to the twins!$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_8:
# 612 "data/maps/FrescoIsland/scripts.pory"
	.string "Ugh, I can't stand needing to be serious\n"
	.string "when we're fighting...\p"
	.string "Sniff sniff... HEY! You've got\n"
	.string "chocolates! Can we have some? Pretty\l"
	.string "pleeease?$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_9:
# 616 "data/maps/FrescoIsland/scripts.pory"
	.string "You gave the Box of Chocolates to\n"
	.string "Thalia and Melpomene.$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_10:
# 622 "data/maps/FrescoIsland/scripts.pory"
	.string "Look, Thal... I'm sorry I tried to fight\n"
	.string "you over a show. I just feel so strongly\l"
	.string "about it, that sometimes I lose my\l"
	.string "senses.$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_11:
# 627 "data/maps/FrescoIsland/scripts.pory"
	.string "No, Mel, I'M sorry. I get so involved in\n"
	.string "my music, I forget that other people\l"
	.string "might want different things.\p"
	.string "Ehehe, at least we can agree on food,\n"
	.string "right, sis?$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_12:
# 632 "data/maps/FrescoIsland/scripts.pory"
	.string "I suppose so. Come now, let us return to\n"
	.string "our duties at the Gym.$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_13:
# 637 "data/maps/FrescoIsland/scripts.pory"
	.string "Alright straight to the point, hm? Heh,\n"
	.string "I guess you're right, though.\p"
	.string "You! You must be looking to beat the\n"
	.string "Fresco Isles Gym, right? Thanks to you,\l"
	.string "we'll be back on Gym duty. See ya soon!$"

FrescoIsles_EventScript_ManBlockingGym_Text_0:
# 694 "data/maps/FrescoIsland/scripts.pory"
	.string "Gym Guide$"

FrescoIsles_EventScript_ManBlockingGym_Text_1:
# 695 "data/maps/FrescoIsland/scripts.pory"
	.string "You must be looking for the Gym\n"
	.string "Leaders, huh? {COLOR GREEN}Thalia and Melpomene{COLOR DARK_GRAY}, the\l"
	.string "Gym Leaders, are always fighting. Last I\l"
	.string "saw them, Thalia was skipping off to the\l"
	.string "{COLOR GREEN}Theatre{COLOR DARK_GRAY}, and Melpomene was racing\l"
	.string "after her.$"

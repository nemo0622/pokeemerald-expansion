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
	return


FrescoIsles_EventScript_DirectionSign::
# 27 "data/maps/FrescoIsland/scripts.pory"
	lock
# 28 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_DirectionSign_Text_0
# 29 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 30 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_ClosedSign::
# 36 "data/maps/FrescoIsland/scripts.pory"
	lock
# 37 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ClosedSign_Text_0
# 38 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 39 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_TuberSwimming::
# 45 "data/maps/FrescoIsland/scripts.pory"
	lock
# 46 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 47 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TuberSwimming_Text_0
# 48 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TuberSwimming_Text_1
# 49 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 50 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_WomanOnBeachChair::
# 56 "data/maps/FrescoIsland/scripts.pory"
	lock
# 57 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 58 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_WomanOnBeachChair_Text_0
# 59 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_WomanOnBeachChair_Text_1
# 60 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 61 "data/maps/FrescoIsland/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 62 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 63 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_HexManiacWithHiddenPower::
# 69 "data/maps/FrescoIsland/scripts.pory"
	lock
# 70 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 71 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_0
# 72 "data/maps/FrescoIsland/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_HIDDEN_POWER, FrescoIsles_EventScript_HexManiacWithHiddenPower_2
# 79 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_2
# 80 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 81 "data/maps/FrescoIsland/scripts.pory"
	delay 5
# 82 "data/maps/FrescoIsland/scripts.pory"
	setflag FLAG_RECEIVED_TM_HIDDEN_POWER
# 83 "data/maps/FrescoIsland/scripts.pory"
	giveitem ITEM_TM_HIDDEN_POWER
# 84 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 85 "data/maps/FrescoIsland/scripts.pory"
	delay 5
# 86 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_0
# 87 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_3
# 88 "data/maps/FrescoIsland/scripts.pory"
	closemessage
FrescoIsles_EventScript_HexManiacWithHiddenPower_1:
# 90 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_HexManiacWithHiddenPower_2:
# 74 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_1
# 75 "data/maps/FrescoIsland/scripts.pory"
	closemessage
	goto FrescoIsles_EventScript_HexManiacWithHiddenPower_1


FrescoIsles_EventScript_Farmer::
# 96 "data/maps/FrescoIsland/scripts.pory"
	lock
# 97 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 98 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Farmer_Text_0
# 99 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Farmer_Text_1
# 100 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 101 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_SailorWithQuaxly::
# 107 "data/maps/FrescoIsland/scripts.pory"
	lock
# 108 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 109 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_SailorWithQuaxly_Text_0
# 110 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_SailorWithQuaxly_Text_1
# 111 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 112 "data/maps/FrescoIsland/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 113 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 114 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Quaxly::
# 120 "data/maps/FrescoIsland/scripts.pory"
	lock
# 121 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 122 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Quaxly_Text_0
# 123 "data/maps/FrescoIsland/scripts.pory"
	playmoncry SPECIES_QUAXLY, CRY_MODE_NORMAL
# 124 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Quaxly_Text_1
# 125 "data/maps/FrescoIsland/scripts.pory"
	waitmoncry
# 126 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 127 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_LittleGirl::
# 133 "data/maps/FrescoIsland/scripts.pory"
	lock
# 134 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 135 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_LittleGirl_Text_0
# 136 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_LittleGirl_Text_1, MSGBOX_YESNO
# 137 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 138 "data/maps/FrescoIsland/scripts.pory"
	delay 5
# 139 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FrescoIsles_EventScript_LittleGirl_2
# 147 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_LittleGirl_Text_0
# 148 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_LittleGirl_Text_3
# 149 "data/maps/FrescoIsland/scripts.pory"
	closemessage
FrescoIsles_EventScript_LittleGirl_1:
# 151 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_LittleGirl_2:
# 141 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_LittleGirl_Text_0
# 142 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_LittleGirl_Text_2
# 143 "data/maps/FrescoIsland/scripts.pory"
	closemessage
	goto FrescoIsles_EventScript_LittleGirl_1


FrescoIsles_EventScript_ArtistNeedsPaintMaterials::
# 157 "data/maps/FrescoIsland/scripts.pory"
	lock
# 158 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 159 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_0
# 162 "data/maps/FrescoIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_SHARDS_FOR_ARTIST
# 163 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_2
# 172 "data/maps/FrescoIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_SHARDS_FOR_ARTIST
# 173 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_5
# 182 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_3
# 183 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 185 "data/maps/FrescoIsland/scripts.pory"
	checkitem ITEM_RED_SHARD
# 186 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_9
FrescoIsles_EventScript_ArtistNeedsPaintMaterials_8:
# 199 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_11
# 218 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_0
# 219 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_5
# 220 "data/maps/FrescoIsland/scripts.pory"
	closemessage
FrescoIsles_EventScript_ArtistNeedsPaintMaterials_4:
# 223 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_2:
# 165 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_1
# 166 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 167 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_5:
# 175 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_2
# 176 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 177 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 178 "data/maps/FrescoIsland/scripts.pory"
	startquest QUEST_SHARDS_FOR_ARTIST
	goto FrescoIsles_EventScript_ArtistNeedsPaintMaterials_4

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_9:
# 188 "data/maps/FrescoIsland/scripts.pory"
	checkitem ITEM_BLUE_SHARD
# 189 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_14
	goto FrescoIsles_EventScript_ArtistNeedsPaintMaterials_8

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_11:
# 201 "data/maps/FrescoIsland/scripts.pory"
	emote 10, EMOTE_EXCLAM
# 202 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_0
# 203 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_4
# 204 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 205 "data/maps/FrescoIsland/scripts.pory"
	delay 5
# 206 "data/maps/FrescoIsland/scripts.pory"
	removeitem ITEM_RED_SHARD
# 207 "data/maps/FrescoIsland/scripts.pory"
	removeitem ITEM_BLUE_SHARD
# 208 "data/maps/FrescoIsland/scripts.pory"
	removeitem ITEM_GREEN_SHARD
# 209 "data/maps/FrescoIsland/scripts.pory"
	removeitem ITEM_YELLOW_SHARD
# 210 "data/maps/FrescoIsland/scripts.pory"
	giveitem ITEM_CLEAR_AMULET
# 211 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 213 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 214 "data/maps/FrescoIsland/scripts.pory"
	completequest QUEST_SHARDS_FOR_ARTIST
	goto FrescoIsles_EventScript_ArtistNeedsPaintMaterials_4

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_14:
# 191 "data/maps/FrescoIsland/scripts.pory"
	checkitem ITEM_GREEN_SHARD
# 192 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FrescoIsles_EventScript_ArtistNeedsPaintMaterials_16
	goto FrescoIsles_EventScript_ArtistNeedsPaintMaterials_8

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_16:
# 194 "data/maps/FrescoIsland/scripts.pory"
	checkitem ITEM_YELLOW_SHARD
	goto FrescoIsles_EventScript_ArtistNeedsPaintMaterials_8


FrescoIsles_EventScript_Dreepy::
# 229 "data/maps/FrescoIsland/scripts.pory"
	lock
# 230 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 231 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Dreepy_Text_0
# 232 "data/maps/FrescoIsland/scripts.pory"
	playmoncry SPECIES_DREEPY, CRY_MODE_NORMAL
# 233 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Dreepy_Text_1
# 234 "data/maps/FrescoIsland/scripts.pory"
	waitmoncry
# 235 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 236 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_GirlWithDreepy::
# 242 "data/maps/FrescoIsland/scripts.pory"
	lock
# 243 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 244 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_GirlWithDreepy_Text_0
# 245 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_GirlWithDreepy_Text_1
# 246 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 247 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_LittleBoyBuildingSandCastle::
# 253 "data/maps/FrescoIsland/scripts.pory"
	lock
# 254 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 255 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_LittleBoyBuildingSandCastle_Text_0
# 256 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_LittleBoyBuildingSandCastle_Text_1
# 257 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 258 "data/maps/FrescoIsland/scripts.pory"
	applymovement 13, Common_Movement_FaceOriginalDirection
# 259 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 260 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Trapinch::
# 266 "data/maps/FrescoIsland/scripts.pory"
	lock
# 267 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 268 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Trapinch_Text_0
# 269 "data/maps/FrescoIsland/scripts.pory"
	playmoncry SPECIES_TRAPINCH, CRY_MODE_NORMAL
# 270 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Trapinch_Text_1
# 271 "data/maps/FrescoIsland/scripts.pory"
	waitmoncry
# 272 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 273 "data/maps/FrescoIsland/scripts.pory"
	applymovement 14, Common_Movement_FaceOriginalDirection
# 274 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 275 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_GymSign::
# 281 "data/maps/FrescoIsland/scripts.pory"
	lock
# 282 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_GymSign_Text_0
# 283 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 284 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_BugCatcher::
# 290 "data/maps/FrescoIsland/scripts.pory"
	lock
# 291 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 292 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_BugCatcher_Text_0
# 293 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_BugCatcher_Text_1
# 294 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 295 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Athlete::
# 301 "data/maps/FrescoIsland/scripts.pory"
	lock
# 302 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 303 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Athlete_Text_0
# 304 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Athlete_Text_1
# 305 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 306 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_BeautyRunning::
# 312 "data/maps/FrescoIsland/scripts.pory"
	lock
# 313 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 314 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_BeautyRunning_Text_0
# 315 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_BeautyRunning_Text_1
# 316 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 317 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Ponyta::
# 323 "data/maps/FrescoIsland/scripts.pory"
	lock
# 324 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 325 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Ponyta_Text_0
# 326 "data/maps/FrescoIsland/scripts.pory"
	playmoncry SPECIES_PONYTA, CRY_MODE_NORMAL
# 327 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Ponyta_Text_1
# 328 "data/maps/FrescoIsland/scripts.pory"
	waitmoncry
# 329 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 330 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_CyclingAthlete::
# 336 "data/maps/FrescoIsland/scripts.pory"
	lock
# 337 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 338 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_CyclingAthlete_Text_0
# 339 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_CyclingAthlete_Text_1
# 340 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 341 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_HikerViewingPot::
# 347 "data/maps/FrescoIsland/scripts.pory"
	lock
# 348 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 349 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_HikerViewingPot_Text_0
# 350 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_HikerViewingPot_Text_1
# 351 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 352 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_OldWoman::
# 358 "data/maps/FrescoIsland/scripts.pory"
	lock
# 359 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 360 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_OldWoman_Text_0
# 361 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_OldWoman_Text_1
# 362 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 363 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Camper::
# 369 "data/maps/FrescoIsland/scripts.pory"
	lock
# 370 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 371 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Camper_Text_0
# 372 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Camper_Text_1
# 373 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 374 "data/maps/FrescoIsland/scripts.pory"
	goto_if_unset FLAG_HIDE_TWIN_MUSES_FRESCO_ISLES, FrescoIsles_EventScript_Camper_2
# 382 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Camper_Text_0
# 383 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Camper_Text_3
# 384 "data/maps/FrescoIsland/scripts.pory"
	closemessage
FrescoIsles_EventScript_Camper_1:
# 386 "data/maps/FrescoIsland/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceUp
# 387 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 388 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_Camper_2:
# 376 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Camper_Text_0
# 377 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Camper_Text_2
# 378 "data/maps/FrescoIsland/scripts.pory"
	closemessage
	goto FrescoIsles_EventScript_Camper_1


FrescoIsles_EventScript_ManOnChair::
# 394 "data/maps/FrescoIsland/scripts.pory"
	lock
# 395 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 396 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_ManOnChair_Text_0
# 397 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ManOnChair_Text_1
# 398 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 399 "data/maps/FrescoIsland/scripts.pory"
	applymovement 23, Common_Movement_FaceDown
# 400 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 401 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_TuberBuildingSandCastle::
# 407 "data/maps/FrescoIsland/scripts.pory"
	lock
# 408 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 409 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TuberSwimming_Text_0
# 410 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TuberBuildingSandCastle_Text_0
# 411 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 412 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_Gentleman::
# 418 "data/maps/FrescoIsland/scripts.pory"
	lock
# 419 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 420 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_Gentleman_Text_0
# 421 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_Gentleman_Text_1
# 422 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 423 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_TailorSign::
# 429 "data/maps/FrescoIsland/scripts.pory"
	lock
# 430 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TailorSign_Text_0
# 431 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 432 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_HikerOnVolcano::
# 438 "data/maps/FrescoIsland/scripts.pory"
	lock
# 439 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 440 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_HikerOnVolcano_Text_0
# 441 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_HikerOnVolcano_Text_1
# 442 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 443 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_TheatreSign::
# 449 "data/maps/FrescoIsland/scripts.pory"
	lock
# 450 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TheatreSign_Text_0
# 451 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 452 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_TheatreSpectator_Artist::
# 458 "data/maps/FrescoIsland/scripts.pory"
	lock
# 459 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 460 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_0
# 462 "data/maps/FrescoIsland/scripts.pory"
	goto_if_unset FLAG_HIDE_TWIN_MUSES_FRESCO_ISLES, FrescoIsles_EventScript_TheatreSpectator_Artist_2
# 468 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TheatreSpectator_Artist_Text_1
FrescoIsles_EventScript_TheatreSpectator_Artist_1:
# 470 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 471 "data/maps/FrescoIsland/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceUp
# 472 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 474 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_TheatreSpectator_Artist_2:
# 464 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TheatreSpectator_Artist_Text_0
	goto FrescoIsles_EventScript_TheatreSpectator_Artist_1


FrescoIsles_EventScript_TheatreSpectator_Performer::
# 480 "data/maps/FrescoIsland/scripts.pory"
	lock
# 481 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 482 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TheatreSpectator_Performer_Text_0
# 484 "data/maps/FrescoIsland/scripts.pory"
	goto_if_unset FLAG_HIDE_TWIN_MUSES_FRESCO_ISLES, FrescoIsles_EventScript_TheatreSpectator_Performer_2
# 490 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TheatreSpectator_Performer_Text_2
FrescoIsles_EventScript_TheatreSpectator_Performer_1:
# 492 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 493 "data/maps/FrescoIsland/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceUp
# 494 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 496 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_TheatreSpectator_Performer_2:
# 486 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TheatreSpectator_Performer_Text_1
	goto FrescoIsles_EventScript_TheatreSpectator_Performer_1


FrescoIsles_EventScript_TwinMusesAtTheatreEvent::
# 502 "data/maps/FrescoIsland/scripts.pory"
	lockall
# 503 "data/maps/FrescoIsland/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 504 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_TEMP_1, 72
	goto_if_eq FrescoIsles_EventScript_TwinMusesAtTheatreEvent_2
# 509 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_TEMP_1, 74
	goto_if_eq FrescoIsles_EventScript_TwinMusesAtTheatreEvent_3
FrescoIsles_EventScript_TwinMusesAtTheatreEvent_1:
# 514 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 515 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 516 "data/maps/FrescoIsland/scripts.pory"
	delay 5
# 519 "data/maps/FrescoIsland/scripts.pory"
	applymovement 43, Common_Movement_JumpInPlaceRight
# 520 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 521 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_0
# 522 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_1
# 523 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 524 "data/maps/FrescoIsland/scripts.pory"
	delay 10
# 525 "data/maps/FrescoIsland/scripts.pory"
	applymovement 45, Common_Movement_JumpInPlaceLeft
# 526 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 527 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_2
# 528 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_3
# 529 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 530 "data/maps/FrescoIsland/scripts.pory"
	emote 43, EMOTE_EXCLAM
# 531 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_0
# 532 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_4
# 533 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 534 "data/maps/FrescoIsland/scripts.pory"
	delay 10
# 537 "data/maps/FrescoIsland/scripts.pory"
	applymovement 44, Common_Movement_JumpRight
# 538 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 539 "data/maps/FrescoIsland/scripts.pory"
	applymovement 44, Common_Movement_JumpLeft
# 540 "data/maps/FrescoIsland/scripts.pory"
	applymovement 46, Common_Movement_JumpLeft
# 541 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 542 "data/maps/FrescoIsland/scripts.pory"
	applymovement 46, Common_Movement_JumpRight
# 543 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 544 "data/maps/FrescoIsland/scripts.pory"
	applymovement 44, Common_Movement_FaceRight
# 545 "data/maps/FrescoIsland/scripts.pory"
	applymovement 46, Common_Movement_FaceLeft
# 546 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 548 "data/maps/FrescoIsland/scripts.pory"
	delay 10
# 549 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_2
# 550 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_5
# 551 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 553 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 554 "data/maps/FrescoIsland/scripts.pory"
	emote 42, EMOTE_EXCLAM
# 555 "data/maps/FrescoIsland/scripts.pory"
	applymovement 42, FrescoIsles_Movement_PerformerApproach
# 556 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 557 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 558 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 559 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TheatreSpectator_Performer_Text_0
# 560 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_6
# 561 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 564 "data/maps/FrescoIsland/scripts.pory"
	checkitem ITEM_BOX_OF_CHOCOLATE
# 565 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FrescoIsles_EventScript_TwinMusesAtTheatreEvent_7
# 584 "data/maps/FrescoIsland/scripts.pory"
	emote 42, EMOTE_HEART
# 585 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TheatreSpectator_Performer_Text_0
# 586 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_7
# 587 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 588 "data/maps/FrescoIsland/scripts.pory"
	applymovement 42, FrescoIsles_Movement_PerformerBackToBench
# 589 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 590 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 591 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 592 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 593 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 594 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 595 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 596 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 597 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpInPlaceUp
# 598 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 599 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 601 "data/maps/FrescoIsland/scripts.pory"
	applymovement 43, FrescoIsles_Movement_ThaliaApproach
# 602 "data/maps/FrescoIsland/scripts.pory"
	applymovement 45, FrescoIsles_Movement_MelpomeneApproach
# 603 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 604 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 605 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 606 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_0
# 607 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_8
# 608 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 609 "data/maps/FrescoIsland/scripts.pory"
	delay 5
# 610 "data/maps/FrescoIsland/scripts.pory"
	removeitem ITEM_BOX_OF_CHOCOLATE
# 611 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_9
# 612 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 613 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 614 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 615 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 616 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_2
# 617 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_10
# 618 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 619 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 620 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 621 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_0
# 622 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_11
# 623 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 624 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 625 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 626 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_2
# 627 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_12
# 628 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 629 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 630 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 631 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_0
# 632 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_13
# 633 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 634 "data/maps/FrescoIsland/scripts.pory"
	delay 10
# 636 "data/maps/FrescoIsland/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 637 "data/maps/FrescoIsland/scripts.pory"
	delay 30
# 638 "data/maps/FrescoIsland/scripts.pory"
	setflag FLAG_HIDE_TWIN_MUSES_FRESCO_ISLES
# 639 "data/maps/FrescoIsland/scripts.pory"
	removeobject 43
# 640 "data/maps/FrescoIsland/scripts.pory"
	removeobject 44
# 641 "data/maps/FrescoIsland/scripts.pory"
	removeobject 45
# 642 "data/maps/FrescoIsland/scripts.pory"
	removeobject 46
# 643 "data/maps/FrescoIsland/scripts.pory"
	delay 30
# 644 "data/maps/FrescoIsland/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 646 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 647 "data/maps/FrescoIsland/scripts.pory"
	completequest QUEST_CALM_TWIN_MUSES
	return

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_2:
# 506 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 507 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
	goto FrescoIsles_EventScript_TwinMusesAtTheatreEvent_1

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_3:
# 511 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 512 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
	goto FrescoIsles_EventScript_TwinMusesAtTheatreEvent_1

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_7:
# 567 "data/maps/FrescoIsland/scripts.pory"
	applymovement 42, FrescoIsles_Movement_PerformerBackToBench
# 568 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 570 "data/maps/FrescoIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_CALM_TWIN_MUSES
# 571 "data/maps/FrescoIsland/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FrescoIsles_EventScript_TwinMusesAtTheatreEvent_10
FrescoIsles_EventScript_TwinMusesAtTheatreEvent_9:
# 577 "data/maps/FrescoIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 578 "data/maps/FrescoIsland/scripts.pory"
	waitmovement 0
# 579 "data/maps/FrescoIsland/scripts.pory"
	release
	end

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_10:
# 573 "data/maps/FrescoIsland/scripts.pory"
	delay 20
# 574 "data/maps/FrescoIsland/scripts.pory"
	startquest QUEST_CALM_TWIN_MUSES
	goto FrescoIsles_EventScript_TwinMusesAtTheatreEvent_9


# 658 "data/maps/FrescoIsland/scripts.pory"
FrescoIsles_Movement_PerformerApproach:
# 660 "data/maps/FrescoIsland/scripts.pory"
	walk_left
# 660 "data/maps/FrescoIsland/scripts.pory"
	walk_left
# 660 "data/maps/FrescoIsland/scripts.pory"
	walk_left
# 661 "data/maps/FrescoIsland/scripts.pory"
	walk_up
# 662 "data/maps/FrescoIsland/scripts.pory"
	face_up
# 663 "data/maps/FrescoIsland/scripts.pory"
	step_end

# 665 "data/maps/FrescoIsland/scripts.pory"
FrescoIsles_Movement_PerformerBackToBench:
# 667 "data/maps/FrescoIsland/scripts.pory"
	walk_down
# 668 "data/maps/FrescoIsland/scripts.pory"
	walk_right
# 668 "data/maps/FrescoIsland/scripts.pory"
	walk_right
# 668 "data/maps/FrescoIsland/scripts.pory"
	walk_right
# 669 "data/maps/FrescoIsland/scripts.pory"
	face_up
# 670 "data/maps/FrescoIsland/scripts.pory"
	step_end

# 672 "data/maps/FrescoIsland/scripts.pory"
FrescoIsles_Movement_ThaliaApproach:
# 674 "data/maps/FrescoIsland/scripts.pory"
	walk_down
# 675 "data/maps/FrescoIsland/scripts.pory"
	walk_right
# 676 "data/maps/FrescoIsland/scripts.pory"
	step_end

# 678 "data/maps/FrescoIsland/scripts.pory"
FrescoIsles_Movement_MelpomeneApproach:
# 680 "data/maps/FrescoIsland/scripts.pory"
	walk_down
# 681 "data/maps/FrescoIsland/scripts.pory"
	walk_left
# 682 "data/maps/FrescoIsland/scripts.pory"
	step_end

FrescoIsles_EventScript_ManBlockingGym::
# 687 "data/maps/FrescoIsland/scripts.pory"
	lock
# 688 "data/maps/FrescoIsland/scripts.pory"
	faceplayer
# 689 "data/maps/FrescoIsland/scripts.pory"
	speakername FrescoIsles_EventScript_ManBlockingGym_Text_0
# 690 "data/maps/FrescoIsland/scripts.pory"
	msgbox FrescoIsles_EventScript_ManBlockingGym_Text_1
# 691 "data/maps/FrescoIsland/scripts.pory"
	closemessage
# 692 "data/maps/FrescoIsland/scripts.pory"
	release
	end


FrescoIsles_EventScript_DirectionSign_Text_0:
# 28 "data/maps/FrescoIsland/scripts.pory"
	.string "The Fresco Isles\n"
	.string "History, Awash in Magma\p"
	.string "{LEFT_ARROW} Sea of Vulcai$"

FrescoIsles_EventScript_ClosedSign_Text_0:
# 37 "data/maps/FrescoIsland/scripts.pory"
	.string "Building Closure Notice\n"
	.string "Fresco Isles Research Lab has been\l"
	.string "closed due to Team Chimera activity.\l"
	.string "Entering the building is strictly\l"
	.string "prohibited.$"

FrescoIsles_EventScript_TuberSwimming_Text_0:
# 47 "data/maps/FrescoIsland/scripts.pory"
	.string "Tuber$"

FrescoIsles_EventScript_TuberSwimming_Text_1:
# 48 "data/maps/FrescoIsland/scripts.pory"
	.string "The water is so warm here! Best\n"
	.string "vacation ever!!$"

FrescoIsles_EventScript_WomanOnBeachChair_Text_0:
# 58 "data/maps/FrescoIsland/scripts.pory"
	.string "Woman$"

FrescoIsles_EventScript_WomanOnBeachChair_Text_1:
# 59 "data/maps/FrescoIsland/scripts.pory"
	.string "I brought my son here for some time to\n"
	.string "relax. The world is crazy, so it's\l"
	.string "important to take a moment and sit\l"
	.string "back.$"

FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_0:
# 71 "data/maps/FrescoIsland/scripts.pory"
	.string "Crystal Girl$"

FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_1:
# 74 "data/maps/FrescoIsland/scripts.pory"
	.string "Have you unlocked your Pokémon's\n"
	.string "Hidden Power yet?$"

FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_2:
# 79 "data/maps/FrescoIsland/scripts.pory"
	.string "Just like crystals, Pokémon have\n"
	.string "special powers unique to them. I've\l"
	.string "found a way to tap into that potential.\l"
	.string "Check it out!$"

FrescoIsles_EventScript_HexManiacWithHiddenPower_Text_3:
# 87 "data/maps/FrescoIsland/scripts.pory"
	.string "Hidden Power is a move that changes\n"
	.string "type based on the individual Pokémon.\l"
	.string "You'd be surprised at what secrets your\l"
	.string "Pokémon might hold.$"

FrescoIsles_EventScript_Farmer_Text_0:
# 98 "data/maps/FrescoIsland/scripts.pory"
	.string "Farmer$"

FrescoIsles_EventScript_Farmer_Text_1:
# 99 "data/maps/FrescoIsland/scripts.pory"
	.string "Most of the Fresco Isles are totally\n"
	.string "covered in sand. Only shrubs and a few\l"
	.string "hardy trees can grow there. To keep\l"
	.string "this island grassy, it takes a lot of\l"
	.string "extra work.$"

FrescoIsles_EventScript_SailorWithQuaxly_Text_0:
# 109 "data/maps/FrescoIsland/scripts.pory"
	.string "Sailor$"

FrescoIsles_EventScript_SailorWithQuaxly_Text_1:
# 110 "data/maps/FrescoIsland/scripts.pory"
	.string "My boat got whipped into a rock in the\n"
	.string "Sea of Vulcai. It's not all bad, though -\l"
	.string "I found this rare Pokémon right on the\l"
	.string "beach!$"

FrescoIsles_EventScript_Quaxly_Text_0:
# 122 "data/maps/FrescoIsland/scripts.pory"
	.string "Quaxly$"

FrescoIsles_EventScript_Quaxly_Text_1:
# 124 "data/maps/FrescoIsland/scripts.pory"
	.string "Kwak wak wak!$"

FrescoIsles_EventScript_LittleGirl_Text_0:
# 135 "data/maps/FrescoIsland/scripts.pory"
	.string "Little Girl$"

FrescoIsles_EventScript_LittleGirl_Text_1:
# 136 "data/maps/FrescoIsland/scripts.pory"
	.string "Hiya! You're an adult, right? Do you\n"
	.string "know why all the rocks around here are\l"
	.string "black?$"

FrescoIsles_EventScript_LittleGirl_Text_2:
# 142 "data/maps/FrescoIsland/scripts.pory"
	.string "Yeah! It's volcanic rock!$"

FrescoIsles_EventScript_LittleGirl_Text_3:
# 148 "data/maps/FrescoIsland/scripts.pory"
	.string "Really? Ehehe, even I know why! It's all\n"
	.string "made of dried lava!$"

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_0:
# 159 "data/maps/FrescoIsland/scripts.pory"
	.string "Artist$"

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_1:
# 165 "data/maps/FrescoIsland/scripts.pory"
	.string "These shard-based paints are so\n"
	.string "bright, they'll be perfect for my\l"
	.string "masterpiece!$"

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_2:
# 175 "data/maps/FrescoIsland/scripts.pory"
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
# 182 "data/maps/FrescoIsland/scripts.pory"
	.string "Hey there. I'm still short on materials\n"
	.string "to make my special paints. Would you\l"
	.string "happen to have the colored Shards I\l"
	.string "requested?$"

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_4:
# 203 "data/maps/FrescoIsland/scripts.pory"
	.string "Woah, you have Red, Blue, Green, and\n"
	.string "Yellow Shards! I'll crush them up into\l"
	.string "stunning pigments.\p"
	.string "While you were off collecting Shards, I\n"
	.string "completed another project: a {COLOR GREEN}Clear\l"
	.string "Amulet{COLOR DARK_GRAY} for your Pokémon to hold.$"

FrescoIsles_EventScript_ArtistNeedsPaintMaterials_Text_5:
# 219 "data/maps/FrescoIsland/scripts.pory"
	.string "Hm, not yet, huh? I know they're rare.\p"
	.string "Some Pokémon hold colored Shards, and\n"
	.string "they can be found underground too.\l"
	.string "Please, bring me {COLOR GREEN}one of every colored\l"
	.string "Shard type{COLOR DARK_GRAY} once you have them!$"

FrescoIsles_EventScript_Dreepy_Text_0:
# 231 "data/maps/FrescoIsland/scripts.pory"
	.string "Dreepy$"

FrescoIsles_EventScript_Dreepy_Text_1:
# 233 "data/maps/FrescoIsland/scripts.pory"
	.string "Ee-auhhh...$"

FrescoIsles_EventScript_GirlWithDreepy_Text_0:
# 244 "data/maps/FrescoIsland/scripts.pory"
	.string "Girl$"

FrescoIsles_EventScript_GirlWithDreepy_Text_1:
# 245 "data/maps/FrescoIsland/scripts.pory"
	.string "This Dreepy was left behind by its\n"
	.string "colony. They're so small, sometimes they\l"
	.string "get left behind by the Drakloak and\l"
	.string "Dragapult at the head of their\l"
	.string "colonies... Maybe I'll be able to reunite\l"
	.string "it with its friends one day.$"

FrescoIsles_EventScript_LittleBoyBuildingSandCastle_Text_0:
# 255 "data/maps/FrescoIsland/scripts.pory"
	.string "Little Boy$"

FrescoIsles_EventScript_LittleBoyBuildingSandCastle_Text_1:
# 256 "data/maps/FrescoIsland/scripts.pory"
	.string "I found my Trapinch along the beach!\n"
	.string "Now I'm making it a sand castle to live\l"
	.string "in!$"

FrescoIsles_EventScript_Trapinch_Text_0:
# 268 "data/maps/FrescoIsland/scripts.pory"
	.string "Trapinch$"

FrescoIsles_EventScript_Trapinch_Text_1:
# 270 "data/maps/FrescoIsland/scripts.pory"
	.string "Chomp chomp!$"

FrescoIsles_EventScript_GymSign_Text_0:
# 282 "data/maps/FrescoIsland/scripts.pory"
	.string "Gym Leaders: Thalia and Melpomene\n"
	.string "The Theatrical Twins$"

FrescoIsles_EventScript_BugCatcher_Text_0:
# 292 "data/maps/FrescoIsland/scripts.pory"
	.string "Bug Catcher$"

FrescoIsles_EventScript_BugCatcher_Text_1:
# 293 "data/maps/FrescoIsland/scripts.pory"
	.string "Only the hardiest Pokémon can survive\n"
	.string "around here. The lava doesn't leak out\l"
	.string "anymore, but the heat and dry weather\l"
	.string "is still really hard for some Pokémon to\l"
	.string "stand.$"

FrescoIsles_EventScript_Athlete_Text_0:
# 303 "data/maps/FrescoIsland/scripts.pory"
	.string "Athlete$"

FrescoIsles_EventScript_Athlete_Text_1:
# 304 "data/maps/FrescoIsland/scripts.pory"
	.string "Phew! Gotta keep getting stronger to\n"
	.string "keep up with all the other Trainers.$"

FrescoIsles_EventScript_BeautyRunning_Text_0:
# 314 "data/maps/FrescoIsland/scripts.pory"
	.string "Beauty$"

FrescoIsles_EventScript_BeautyRunning_Text_1:
# 315 "data/maps/FrescoIsland/scripts.pory"
	.string "Ponyta, come back! She's been riled up\n"
	.string "ever since we got here. I think she\l"
	.string "likes the heat.$"

FrescoIsles_EventScript_Ponyta_Text_0:
# 325 "data/maps/FrescoIsland/scripts.pory"
	.string "Ponyta$"

FrescoIsles_EventScript_Ponyta_Text_1:
# 327 "data/maps/FrescoIsland/scripts.pory"
	.string "Breighh!$"

FrescoIsles_EventScript_CyclingAthlete_Text_0:
# 338 "data/maps/FrescoIsland/scripts.pory"
	.string "Cycling Athlete$"

FrescoIsles_EventScript_CyclingAthlete_Text_1:
# 339 "data/maps/FrescoIsland/scripts.pory"
	.string "This whole place is just sand and\n"
	.string "water... This wasn't the best place for\l"
	.string "biking, huh?$"

FrescoIsles_EventScript_HikerViewingPot_Text_0:
# 349 "data/maps/FrescoIsland/scripts.pory"
	.string "Ruin Maniac$"

FrescoIsles_EventScript_HikerViewingPot_Text_1:
# 350 "data/maps/FrescoIsland/scripts.pory"
	.string "Based on the ruins around here, these\n"
	.string "islands used to be much more populated.\l"
	.string "It seems that a volcanic explosion\l"
	.string "centuries ago changed the ecosystem\l"
	.string "and cut the population.$"

FrescoIsles_EventScript_OldWoman_Text_0:
# 360 "data/maps/FrescoIsland/scripts.pory"
	.string "Old Woman$"

FrescoIsles_EventScript_OldWoman_Text_1:
# 361 "data/maps/FrescoIsland/scripts.pory"
	.string "Not many people visit the outlying\n"
	.string "islands. It's just a few visitors, the\l"
	.string "Pokémon, and me.$"

FrescoIsles_EventScript_Camper_Text_0:
# 371 "data/maps/FrescoIsland/scripts.pory"
	.string "Camper$"

FrescoIsles_EventScript_Camper_Text_1:
# 372 "data/maps/FrescoIsland/scripts.pory"
	.string "The Gym Leaders of the Fresco Isles are\n"
	.string "twins. Thalia loves jokes and fun, while\l"
	.string "Melpomene is always moping around and\l"
	.string "watching tragedies. The only thing they\l"
	.string "have in common is a love for theatre.$"

FrescoIsles_EventScript_Camper_Text_2:
# 377 "data/maps/FrescoIsland/scripts.pory"
	.string "They're up on stage right now, having\n"
	.string "another fight. When will they learn to\l"
	.string "get along...$"

FrescoIsles_EventScript_Camper_Text_3:
# 383 "data/maps/FrescoIsland/scripts.pory"
	.string "It seems like they've gone back to\n"
	.string "their Gym Leader duties. Hopefully that\l"
	.string "lasts...$"

FrescoIsles_EventScript_ManOnChair_Text_0:
# 396 "data/maps/FrescoIsland/scripts.pory"
	.string "Man$"

FrescoIsles_EventScript_ManOnChair_Text_1:
# 397 "data/maps/FrescoIsland/scripts.pory"
	.string "Ahh, this is the life. A cool breeze, warm\n"
	.string "sand, and a drink in my hand.$"

FrescoIsles_EventScript_TuberBuildingSandCastle_Text_0:
# 410 "data/maps/FrescoIsland/scripts.pory"
	.string "My dad told me not to peek into the\n"
	.string "abandoned lab up the hill. But I swear I\l"
	.string "saw someone sneaking in earlier!$"

FrescoIsles_EventScript_Gentleman_Text_0:
# 420 "data/maps/FrescoIsland/scripts.pory"
	.string "Gentleman$"

FrescoIsles_EventScript_Gentleman_Text_1:
# 421 "data/maps/FrescoIsland/scripts.pory"
	.string "I came all the way here from Kalami City\n"
	.string "to get a new suit made. But the Tailor is\l"
	.string "sending me on a wild Swanna chase...\l"
	.string "Literally! He wants me to catch a\l"
	.string "Swanna for some reason!$"

FrescoIsles_EventScript_TailorSign_Text_0:
# 430 "data/maps/FrescoIsland/scripts.pory"
	.string "Fresco Isles Tailor\n"
	.string "Specialty Outfits for All!$"

FrescoIsles_EventScript_HikerOnVolcano_Text_0:
# 440 "data/maps/FrescoIsland/scripts.pory"
	.string "Hiker$"

FrescoIsles_EventScript_HikerOnVolcano_Text_1:
# 441 "data/maps/FrescoIsland/scripts.pory"
	.string "Woah, it's getting hot up here. Any\n"
	.string "closer and it'll start to hurt...$"

FrescoIsles_EventScript_TheatreSign_Text_0:
# 450 "data/maps/FrescoIsland/scripts.pory"
	.string "Fresco Isles Outdoor Theatre\n"
	.string "Perfect for All Performing Arts!$"

FrescoIsles_EventScript_TheatreSpectator_Artist_Text_0:
# 464 "data/maps/FrescoIsland/scripts.pory"
	.string "I came to support the arts, but it's\n"
	.string "just Thalia and Melpomene fighting each\l"
	.string "other. This isn't what I wanted!$"

FrescoIsles_EventScript_TheatreSpectator_Artist_Text_1:
# 468 "data/maps/FrescoIsland/scripts.pory"
	.string "Thalia and Melpomene have gone back to\n"
	.string "the Gym together. Now the Theatre can\l"
	.string "get back to business!$"

FrescoIsles_EventScript_TheatreSpectator_Performer_Text_0:
# 482 "data/maps/FrescoIsland/scripts.pory"
	.string "Performer$"

FrescoIsles_EventScript_TheatreSpectator_Performer_Text_1:
# 486 "data/maps/FrescoIsland/scripts.pory"
	.string "I was about to perform, but Thalia and\n"
	.string "Melpomene showed up and threw\l"
	.string "everything off. Thalia requested a pop\l"
	.string "song, but Melpomene wanted a sad song...\l"
	.string "And now, here we are...$"

FrescoIsles_EventScript_TheatreSpectator_Performer_Text_2:
# 490 "data/maps/FrescoIsland/scripts.pory"
	.string "I'm glad that Thalia and Melpomene put\n"
	.string "aside their differences for now. I'll\l"
	.string "resume my performance soon!$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_0:
# 521 "data/maps/FrescoIsland/scripts.pory"
	.string "Thalia$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_1:
# 522 "data/maps/FrescoIsland/scripts.pory"
	.string "ALL YOU EVER THINK ABOUT IS SADNESS!\n"
	.string "WHAT'S WRONG WITH A LITTLE FUN AND\l"
	.string "LAUGHTER?!$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_2:
# 527 "data/maps/FrescoIsland/scripts.pory"
	.string "Melpomene$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_3:
# 528 "data/maps/FrescoIsland/scripts.pory"
	.string "You and your pop music... More like SLOP\n"
	.string "MUSIC! EMOTION MAKES US THINK, UNLIKE\l"
	.string "YOUR BRAINLESS SONGS!!$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_4:
# 532 "data/maps/FrescoIsland/scripts.pory"
	.string "That DOES IT! Raichu, knock this sad\n"
	.string "sack into the sea!$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_5:
# 550 "data/maps/FrescoIsland/scripts.pory"
	.string "Heh, it won't be that easy, Thalia! I've\n"
	.string "always been the stronger twin!$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_6:
# 560 "data/maps/FrescoIsland/scripts.pory"
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
# 586 "data/maps/FrescoIsland/scripts.pory"
	.string "Hey, you've got the Box of Chocolate!\n"
	.string "Quick, give it to the twins!$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_8:
# 607 "data/maps/FrescoIsland/scripts.pory"
	.string "Ugh, I can't stand needing to be serious\n"
	.string "when we're fighting...\p"
	.string "Sniff sniff... HEY! You've got\n"
	.string "chocolates! Can we have some? Pretty\l"
	.string "pleeease?$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_9:
# 611 "data/maps/FrescoIsland/scripts.pory"
	.string "You gave the Box of Chocolates to\n"
	.string "Thalia and Melpomene.$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_10:
# 617 "data/maps/FrescoIsland/scripts.pory"
	.string "Look, Thal... I'm sorry I tried to fight\n"
	.string "you over a show. I just feel so strongly\l"
	.string "about it, that sometimes I lose my\l"
	.string "senses.$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_11:
# 622 "data/maps/FrescoIsland/scripts.pory"
	.string "No, Mel, I'M sorry. I get so involved in\n"
	.string "my music, I forget that other people\l"
	.string "might want different things.\p"
	.string "Ehehe, at least we can agree on food,\n"
	.string "right, sis?$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_12:
# 627 "data/maps/FrescoIsland/scripts.pory"
	.string "I suppose so. Come now, let us return to\n"
	.string "our duties at the Gym.$"

FrescoIsles_EventScript_TwinMusesAtTheatreEvent_Text_13:
# 632 "data/maps/FrescoIsland/scripts.pory"
	.string "Alright straight to the point, hm? Heh,\n"
	.string "I guess you're right, though.\p"
	.string "You! You must be looking to beat the\n"
	.string "Fresco Isles Gym, right? Thanks to you,\l"
	.string "we'll be back on Gym duty. See ya soon!$"

FrescoIsles_EventScript_ManBlockingGym_Text_0:
# 689 "data/maps/FrescoIsland/scripts.pory"
	.string "Gym Guide$"

FrescoIsles_EventScript_ManBlockingGym_Text_1:
# 690 "data/maps/FrescoIsland/scripts.pory"
	.string "You must be looking for the Gym\n"
	.string "Leaders, huh? {COLOR GREEN}Thalia and Melpomene{COLOR DARK_GRAY}, the\l"
	.string "Gym Leaders, are always fighting. Last I\l"
	.string "saw them, Thalia was skipping off to the\l"
	.string "{COLOR GREEN}Theatre{COLOR DARK_GRAY}, and Melpomene was racing\l"
	.string "after her.$"

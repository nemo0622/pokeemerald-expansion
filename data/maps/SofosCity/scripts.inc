SofosCity_MapScripts::
# 2 "data/maps/SofosCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SofosCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SofosCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SofosCity/scripts.pory"
	setflag FLAG_VISITED_SOFOS_CITY
# 5 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 6 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 7 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 8 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 9 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 10 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 11 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 12 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 13 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 14 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 15 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 16 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 17 "data/maps/SofosCity/scripts.pory"
	setobjectaswildencounter 49, ENCOUNTER_LAND
# 18 "data/maps/SofosCity/scripts.pory"
	setobjectaswildencounter 50, ENCOUNTER_LAND
# 19 "data/maps/SofosCity/scripts.pory"
	setobjectaswildencounter 51, ENCOUNTER_LAND
# 20 "data/maps/SofosCity/scripts.pory"
	setobjectaswildencounter 52, ENCOUNTER_LAND
# 21 "data/maps/SofosCity/scripts.pory"
	setobjectaswildencounter 53, ENCOUNTER_LAND
# 22 "data/maps/SofosCity/scripts.pory"
	setobjectaswildencounter 54, ENCOUNTER_LAND
# 23 "data/maps/SofosCity/scripts.pory"
	setobjectaswildencounter 55, ENCOUNTER_LAND
# 24 "data/maps/SofosCity/scripts.pory"
	setobjectaswildencounter 56, ENCOUNTER_SURF
	return


SofosCity_EventScript_GameCornerSign::
# 30 "data/maps/SofosCity/scripts.pory"
	lock
# 31 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GameCornerSign_Text_0
# 32 "data/maps/SofosCity/scripts.pory"
	closemessage
# 33 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_BattlePavilionSign::
# 39 "data/maps/SofosCity/scripts.pory"
	lock
# 40 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_BattlePavilionSign_Text_0
# 41 "data/maps/SofosCity/scripts.pory"
	closemessage
# 42 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_GymSign::
# 48 "data/maps/SofosCity/scripts.pory"
	lock
# 49 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GymSign_Text_0
# 50 "data/maps/SofosCity/scripts.pory"
	closemessage
# 51 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ChimeraGruntAtGym1::
# 57 "data/maps/SofosCity/scripts.pory"
	lock
# 58 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ChimeraGruntAtGym1_Text_0
# 59 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ChimeraGruntAtGym1_Text_1
# 60 "data/maps/SofosCity/scripts.pory"
	closemessage
# 61 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ChimeraGruntAtGym2::
# 66 "data/maps/SofosCity/scripts.pory"
	lock
# 67 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ChimeraGruntAtGym1_Text_0
# 68 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ChimeraGruntAtGym2_Text_0
# 69 "data/maps/SofosCity/scripts.pory"
	closemessage
# 70 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ChimeraGruntAtGym3::
# 75 "data/maps/SofosCity/scripts.pory"
	lock
# 76 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ChimeraGruntAtGym1_Text_0
# 77 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ChimeraGruntAtGym3_Text_0
# 78 "data/maps/SofosCity/scripts.pory"
	closemessage
# 79 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ItemStreetVendor::
# 85 "data/maps/SofosCity/scripts.pory"
	lock
# 86 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 87 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ItemStreetVendor_Text_0
# 88 "data/maps/SofosCity/scripts.pory"
	message gText_HowMayIServeYou
# 89 "data/maps/SofosCity/scripts.pory"
	waitmessage
# 90 "data/maps/SofosCity/scripts.pory"
	pokemart SofosCity_ItemStreetVendorShop
# 91 "data/maps/SofosCity/scripts.pory"
	closemessage
# 92 "data/maps/SofosCity/scripts.pory"
	delay 1
# 93 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ItemStreetVendor_Text_0
# 94 "data/maps/SofosCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 95 "data/maps/SofosCity/scripts.pory"
	release
	end


	.align 2
# 98 "data/maps/SofosCity/scripts.pory"
SofosCity_ItemStreetVendorShop:
# 100 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 101 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 102 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 103 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 104 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 105 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_TART_APPLE
# 106 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_NONE

SofosCity_EventScript_DecorStreetVendor::
# 111 "data/maps/SofosCity/scripts.pory"
	lock
# 112 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 113 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ItemStreetVendor_Text_0
# 114 "data/maps/SofosCity/scripts.pory"
	message gText_HowMayIServeYou
# 115 "data/maps/SofosCity/scripts.pory"
	waitmessage
# 116 "data/maps/SofosCity/scripts.pory"
	pokemartdecoration SofosCity_DecorShop
# 117 "data/maps/SofosCity/scripts.pory"
	closemessage
# 118 "data/maps/SofosCity/scripts.pory"
	delay 1
# 119 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ItemStreetVendor_Text_0
# 120 "data/maps/SofosCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 121 "data/maps/SofosCity/scripts.pory"
	release
	end


# 125 "data/maps/SofosCity/scripts.pory"

# 126 "data/maps/SofosCity/scripts.pory"
    .align 2
# 127 "data/maps/SofosCity/scripts.pory"
SofosCity_DecorShop:
# 128 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_SUNSET_POSTER
# 129 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_PIKACHU_DOLL
# 130 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_FENCE_LENGTH
# 131 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_FENCE_WIDTH
# 132 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_PRETTY_DESK
# 133 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_PRETTY_CHAIR
# 134 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_PRETTY_FLOWERS
# 135 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_NONE
# 136 "data/maps/SofosCity/scripts.pory"
	release
# 137 "data/maps/SofosCity/scripts.pory"
	end

SofosCity_EventScript_GirlNearVendors::
# 142 "data/maps/SofosCity/scripts.pory"
	lock
# 143 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 144 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_GirlNearVendors_Text_0
# 145 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GirlNearVendors_Text_1
# 146 "data/maps/SofosCity/scripts.pory"
	closemessage
# 147 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_BoyNearFarmersGoods::
# 153 "data/maps/SofosCity/scripts.pory"
	lock
# 154 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 155 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_BoyNearFarmersGoods_Text_0
# 156 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_BoyNearFarmersGoods_Text_1
# 157 "data/maps/SofosCity/scripts.pory"
	closemessage
# 158 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ManWithMurkrow::
# 164 "data/maps/SofosCity/scripts.pory"
	lock
# 165 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 166 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ManWithMurkrow_Text_0
# 167 "data/maps/SofosCity/scripts.pory"
	goto_if_unset FLAG_GOT_TM_TORMENT, SofosCity_EventScript_ManWithMurkrow_2
# 176 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManWithMurkrow_Text_2
# 177 "data/maps/SofosCity/scripts.pory"
	closemessage
SofosCity_EventScript_ManWithMurkrow_1:
# 179 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_ManWithMurkrow_2:
# 169 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManWithMurkrow_Text_1
# 170 "data/maps/SofosCity/scripts.pory"
	closemessage
# 171 "data/maps/SofosCity/scripts.pory"
	giveitem ITEM_TM_TORMENT
# 172 "data/maps/SofosCity/scripts.pory"
	setflag FLAG_GOT_TM_TORMENT
	goto SofosCity_EventScript_ManWithMurkrow_1


SofosCity_EventScript_Murkrow::
# 184 "data/maps/SofosCity/scripts.pory"
	lock
# 185 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 186 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_Murkrow_Text_0
# 187 "data/maps/SofosCity/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 188 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_Murkrow_Text_1
# 189 "data/maps/SofosCity/scripts.pory"
	waitmoncry
# 190 "data/maps/SofosCity/scripts.pory"
	closemessage
# 191 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_LostConstructionWorker::
# 197 "data/maps/SofosCity/scripts.pory"
	lock
# 198 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 199 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_LostConstructionWorker_Text_0
# 200 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_LostConstructionWorker_Text_1
# 201 "data/maps/SofosCity/scripts.pory"
	closemessage
# 202 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_StrategicCamper::
# 208 "data/maps/SofosCity/scripts.pory"
	lock
# 209 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 212 "data/maps/SofosCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_SHOW_CAMPER_ALOLAN_RAICHU
# 213 "data/maps/SofosCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SofosCity_EventScript_StrategicCamper_2
# 223 "data/maps/SofosCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_SHOW_CAMPER_ALOLAN_RAICHU
# 224 "data/maps/SofosCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_EventScript_StrategicCamper_5
# 235 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 236 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_Text_3
# 237 "data/maps/SofosCity/scripts.pory"
	closemessage
# 239 "data/maps/SofosCity/scripts.pory"
	checkforspecies SPECIES_RAICHU_ALOLAN, OPEN_PARTY_SCREEN, SofosCity_EventScript_StrategicCamper_ReactToRaichu
# 242 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 243 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_Text_4
# 244 "data/maps/SofosCity/scripts.pory"
	closemessage
SofosCity_EventScript_StrategicCamper_4:
# 246 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_StrategicCamper_2:
# 215 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 216 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_Text_1
# 217 "data/maps/SofosCity/scripts.pory"
	closemessage
# 218 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_StrategicCamper_5:
# 226 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 227 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_Text_2
# 228 "data/maps/SofosCity/scripts.pory"
	closemessage
# 230 "data/maps/SofosCity/scripts.pory"
	delay 20
# 231 "data/maps/SofosCity/scripts.pory"
	startquest QUEST_SHOW_CAMPER_ALOLAN_RAICHU
	goto SofosCity_EventScript_StrategicCamper_4


SofosCity_EventScript_StrategicCamper_ReactToRaichu::
# 251 "data/maps/SofosCity/scripts.pory"
	lock
# 252 "data/maps/SofosCity/scripts.pory"
	delay 20
# 253 "data/maps/SofosCity/scripts.pory"
	applymovement 26, Common_Movement_Heart
# 254 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 255 "data/maps/SofosCity/scripts.pory"
	delay 10
# 256 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 257 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_ReactToRaichu_Text_0
# 258 "data/maps/SofosCity/scripts.pory"
	closemessage
# 259 "data/maps/SofosCity/scripts.pory"
	giveitem ITEM_TERRAIN_EXTENDER
# 260 "data/maps/SofosCity/scripts.pory"
	delay 5
# 261 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 262 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_ReactToRaichu_Text_1
# 263 "data/maps/SofosCity/scripts.pory"
	closemessage
# 265 "data/maps/SofosCity/scripts.pory"
	delay 20
# 266 "data/maps/SofosCity/scripts.pory"
	completequest QUEST_SHOW_CAMPER_ALOLAN_RAICHU
# 268 "data/maps/SofosCity/scripts.pory"
	closemessage
# 269 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_BeautyNearPokecenter::
# 275 "data/maps/SofosCity/scripts.pory"
	lock
# 276 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 277 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_BeautyNearPokecenter_Text_0
# 278 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_BeautyNearPokecenter_Text_1
# 279 "data/maps/SofosCity/scripts.pory"
	closemessage
# 280 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ArtistPlayingChess::
# 286 "data/maps/SofosCity/scripts.pory"
	lock
# 287 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 288 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ArtistPlayingChess_Text_0
# 289 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ArtistPlayingChess_Text_1
# 290 "data/maps/SofosCity/scripts.pory"
	closemessage
# 291 "data/maps/SofosCity/scripts.pory"
	applymovement 28, Common_Movement_FaceLeft
# 292 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 293 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_OldWomanPlayingChess::
# 299 "data/maps/SofosCity/scripts.pory"
	lock
# 300 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 301 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_OldWomanPlayingChess_Text_0
# 302 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_OldWomanPlayingChess_Text_1
# 303 "data/maps/SofosCity/scripts.pory"
	closemessage
# 304 "data/maps/SofosCity/scripts.pory"
	applymovement 29, Common_Movement_FaceRight
# 305 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 306 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_PicnickerRunning::
# 312 "data/maps/SofosCity/scripts.pory"
	lock
# 313 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 314 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_PicnickerRunning_Text_0
# 315 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_PicnickerRunning_Text_1
# 316 "data/maps/SofosCity/scripts.pory"
	closemessage
# 317 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_OfficerAtCityEdge::
# 323 "data/maps/SofosCity/scripts.pory"
	lock
# 324 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 325 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_OfficerAtCityEdge_Text_0
# 326 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_OfficerAtCityEdge_Text_1
# 327 "data/maps/SofosCity/scripts.pory"
	closemessage
# 328 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_FarmerOnSidewalk::
# 334 "data/maps/SofosCity/scripts.pory"
	lock
# 335 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 336 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_FarmerOnSidewalk_Text_0
# 337 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_FarmerOnSidewalk_Text_1
# 338 "data/maps/SofosCity/scripts.pory"
	closemessage
# 339 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_Rockruff::
# 345 "data/maps/SofosCity/scripts.pory"
	lock
# 346 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 347 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_Rockruff_Text_0
# 348 "data/maps/SofosCity/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 349 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_Rockruff_Text_1
# 350 "data/maps/SofosCity/scripts.pory"
	waitmoncry
# 351 "data/maps/SofosCity/scripts.pory"
	closemessage
# 352 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_WomanWithRockruff::
# 358 "data/maps/SofosCity/scripts.pory"
	lock
# 359 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 360 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_WomanWithRockruff_Text_0
# 361 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_WomanWithRockruff_Text_1
# 362 "data/maps/SofosCity/scripts.pory"
	closemessage
# 363 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_FishermanPlayingChess::
# 369 "data/maps/SofosCity/scripts.pory"
	lock
# 370 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 371 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_FishermanPlayingChess_Text_0
# 372 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_FishermanPlayingChess_Text_1
# 373 "data/maps/SofosCity/scripts.pory"
	closemessage
# 374 "data/maps/SofosCity/scripts.pory"
	applymovement 35, Common_Movement_FaceRight
# 375 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 376 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_GirlPlayingChess::
# 382 "data/maps/SofosCity/scripts.pory"
	lock
# 383 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 384 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_GirlNearVendors_Text_0
# 385 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GirlPlayingChess_Text_0
# 386 "data/maps/SofosCity/scripts.pory"
	closemessage
# 387 "data/maps/SofosCity/scripts.pory"
	applymovement 36, Common_Movement_FaceLeft
# 388 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 389 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_HexManiacSeeingLights::
# 395 "data/maps/SofosCity/scripts.pory"
	lock
# 396 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 397 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_HexManiacSeeingLights_Text_0
# 398 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_HexManiacSeeingLights_Text_1
# 399 "data/maps/SofosCity/scripts.pory"
	closemessage
# 400 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_CooltrainerThinkingStrategy::
# 406 "data/maps/SofosCity/scripts.pory"
	lock
# 407 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 408 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_CooltrainerThinkingStrategy_Text_0
# 409 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_CooltrainerThinkingStrategy_Text_1
# 410 "data/maps/SofosCity/scripts.pory"
	closemessage
# 411 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_OldManAtCliff::
# 417 "data/maps/SofosCity/scripts.pory"
	lock
# 418 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 419 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_OldManAtCliff_Text_0
# 420 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_OldManAtCliff_Text_1
# 421 "data/maps/SofosCity/scripts.pory"
	closemessage
# 422 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_Clauncher::
# 427 "data/maps/SofosCity/scripts.pory"
	lock
# 428 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 429 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_Clauncher_Text_0
# 430 "data/maps/SofosCity/scripts.pory"
	playmoncry SPECIES_CLAUNCHER, CRY_MODE_NORMAL
# 431 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_Clauncher_Text_1
# 432 "data/maps/SofosCity/scripts.pory"
	waitmoncry
# 433 "data/maps/SofosCity/scripts.pory"
	closemessage
# 434 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ManOutsideBattlePavilion::
# 440 "data/maps/SofosCity/scripts.pory"
	lock
# 441 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 442 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ManOutsideBattlePavilion_Text_0
# 444 "data/maps/SofosCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_TRY_SOFOS_BATTLE_PAVILION
# 445 "data/maps/SofosCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SofosCity_EventScript_ManOutsideBattlePavilion_2
# 454 "data/maps/SofosCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_TRY_SOFOS_BATTLE_PAVILION
# 455 "data/maps/SofosCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_EventScript_ManOutsideBattlePavilion_4
# 465 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManOutsideBattlePavilion_Text_3
# 466 "data/maps/SofosCity/scripts.pory"
	closemessage
# 468 "data/maps/SofosCity/scripts.pory"
	delay 30
# 470 "data/maps/SofosCity/scripts.pory"
	goto_if_set FLAG_PLAYED_IN_SOFOS_BATTLE_PAVILION, SofosCity_EventScript_ManOutsideBattlePavilion_7
	return

SofosCity_EventScript_ManOutsideBattlePavilion_2:
# 447 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManOutsideBattlePavilion_Text_1
# 448 "data/maps/SofosCity/scripts.pory"
	closemessage
# 449 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_ManOutsideBattlePavilion_4:
# 457 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManOutsideBattlePavilion_Text_2
# 458 "data/maps/SofosCity/scripts.pory"
	closemessage
# 460 "data/maps/SofosCity/scripts.pory"
	delay 20
# 461 "data/maps/SofosCity/scripts.pory"
	startquest QUEST_TRY_SOFOS_BATTLE_PAVILION
	return

SofosCity_EventScript_ManOutsideBattlePavilion_7:
# 472 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ManOutsideBattlePavilion_Text_0
# 473 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManOutsideBattlePavilion_Text_4
# 474 "data/maps/SofosCity/scripts.pory"
	closemessage
# 475 "data/maps/SofosCity/scripts.pory"
	delay 5
# 476 "data/maps/SofosCity/scripts.pory"
	giveitem ITEM_EXP_CANDY_M, 2
# 478 "data/maps/SofosCity/scripts.pory"
	delay 20
# 479 "data/maps/SofosCity/scripts.pory"
	completequest QUEST_TRY_SOFOS_BATTLE_PAVILION
	return


SofosCity_EventScript_ManAdmiringTowerRuin::
# 487 "data/maps/SofosCity/scripts.pory"
	lock
# 488 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 489 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ManAdmiringTowerRuin_Text_0
# 490 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManAdmiringTowerRuin_Text_1
# 491 "data/maps/SofosCity/scripts.pory"
	closemessage
# 492 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_TogaGirlsAtAcropolis::
# 498 "data/maps/SofosCity/scripts.pory"
	lock
# 499 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 500 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_TogaGirlsAtAcropolis_Text_0
# 501 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_TogaGirlsAtAcropolis_Text_1
# 502 "data/maps/SofosCity/scripts.pory"
	closemessage
# 503 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCIty_EventScript_BugCatcher::
# 509 "data/maps/SofosCity/scripts.pory"
	lock
# 510 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 511 "data/maps/SofosCity/scripts.pory"
	speakername SofosCIty_EventScript_BugCatcher_Text_0
# 512 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCIty_EventScript_BugCatcher_Text_1
# 513 "data/maps/SofosCity/scripts.pory"
	closemessage
# 514 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_LassInTropics::
# 520 "data/maps/SofosCity/scripts.pory"
	lock
# 521 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 522 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_LassInTropics_Text_0
# 523 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_LassInTropics_Text_1
# 524 "data/maps/SofosCity/scripts.pory"
	closemessage
# 525 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ManByShallows::
# 531 "data/maps/SofosCity/scripts.pory"
	lock
# 532 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 533 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_BoyNearFarmersGoods_Text_0
# 534 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManByShallows_Text_0
# 535 "data/maps/SofosCity/scripts.pory"
	closemessage
# 536 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_FatManByCave::
# 542 "data/maps/SofosCity/scripts.pory"
	lock
# 543 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 544 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_FatManByCave_Text_0
# 545 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_FatManByCave_Text_1
# 546 "data/maps/SofosCity/scripts.pory"
	closemessage
# 547 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_GoodRodFishingGuru::
# 553 "data/maps/SofosCity/scripts.pory"
	lock
# 554 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 555 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_GoodRodFishingGuru_Text_0
# 556 "data/maps/SofosCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GOOD_ROD, SofosCity_EventScript_GoodRodFishingGuru_2
# 568 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GoodRodFishingGuru_Text_3
# 569 "data/maps/SofosCity/scripts.pory"
	closemessage
SofosCity_EventScript_GoodRodFishingGuru_1:
# 571 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_GoodRodFishingGuru_2:
# 558 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GoodRodFishingGuru_Text_1
# 559 "data/maps/SofosCity/scripts.pory"
	closemessage
# 560 "data/maps/SofosCity/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 561 "data/maps/SofosCity/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 562 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_GoodRodFishingGuru_Text_0
# 563 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GoodRodFishingGuru_Text_2
# 564 "data/maps/SofosCity/scripts.pory"
	closemessage
	goto SofosCity_EventScript_GoodRodFishingGuru_1


SofosCity_EventScript_Trainer_SofosCity_Grunt::
# 577 "data/maps/SofosCity/scripts.pory"
	trainerbattle_single TRAINER_SOFOS_CITY_CHIMERA_GRUNT, SofosCity_Text_Trainer_SofosCity_GruntIntro, SofosCity_Text_Trainer_SofosCity_GruntDefeat
# 578 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_Trainer_SofosCity_Grunt_Text_0
# 579 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_Trainer_SofosCity_Grunt_Text_1
# 580 "data/maps/SofosCity/scripts.pory"
	closemessage
# 581 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_SwimmerF::
# 595 "data/maps/SofosCity/scripts.pory"
	lock
# 596 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 597 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_SwimmerF_Text_0
# 598 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_SwimmerF_Text_1
# 599 "data/maps/SofosCity/scripts.pory"
	closemessage
# 600 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_Trigger_PiraeusKiposTownTrigger0::
# 606 "data/maps/SofosCity/scripts.pory"
	setvar VAR_TEMP_0, 0
# 607 "data/maps/SofosCity/scripts.pory"
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent
# 608 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_Trigger_PiraeusKiposTownTrigger1::
# 613 "data/maps/SofosCity/scripts.pory"
	setvar VAR_TEMP_0, 1
# 614 "data/maps/SofosCity/scripts.pory"
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent
# 615 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_Trigger_PiraeusKiposTownTrigger2::
# 620 "data/maps/SofosCity/scripts.pory"
	setvar VAR_TEMP_0, 2
# 621 "data/maps/SofosCity/scripts.pory"
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent
# 622 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_Trigger_PiraeusKiposTownTrigger3::
# 627 "data/maps/SofosCity/scripts.pory"
	setvar VAR_TEMP_0, 3
# 628 "data/maps/SofosCity/scripts.pory"
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent
# 629 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_Trigger_PiraeusKiposTownTrigger4::
# 634 "data/maps/SofosCity/scripts.pory"
	setvar VAR_TEMP_0, 4
# 635 "data/maps/SofosCity/scripts.pory"
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent
# 636 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_TryPiraeusKiposTownEvent::
# 642 "data/maps/SofosCity/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SofosCity_EventScript_TryPiraeusKiposTownEvent_2
SofosCity_EventScript_TryPiraeusKiposTownEvent_1:
# 687 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_TryPiraeusKiposTownEvent_2:
# 644 "data/maps/SofosCity/scripts.pory"
	lockall
# 646 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 647 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 648 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_0
# 649 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_1
# 650 "data/maps/SofosCity/scripts.pory"
	closemessage
# 652 "data/maps/SofosCity/scripts.pory"
	applymovement 60, Common_Movement_FaceUp
# 653 "data/maps/SofosCity/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq SofosCity_EventScript_TryPiraeusKiposTownEvent_5
# 657 "data/maps/SofosCity/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SofosCity_EventScript_TryPiraeusKiposTownEvent_6
# 661 "data/maps/SofosCity/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq SofosCity_EventScript_TryPiraeusKiposTownEvent_7
# 665 "data/maps/SofosCity/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq SofosCity_EventScript_TryPiraeusKiposTownEvent_8
# 671 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SofosCity_Movement_ApproachPiraeus4
SofosCity_EventScript_TryPiraeusKiposTownEvent_4:
# 673 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 674 "data/maps/SofosCity/scripts.pory"
	delay 10
# 676 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_0
# 677 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_2
# 678 "data/maps/SofosCity/scripts.pory"
	closemessage
# 679 "data/maps/SofosCity/scripts.pory"
	delay 20
# 680 "data/maps/SofosCity/scripts.pory"
	warp MAP_KIPOS_TOWN, 18, 22
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent_1

SofosCity_EventScript_TryPiraeusKiposTownEvent_5:
# 655 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SofosCity_Movement_ApproachPiraeus0
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent_4

SofosCity_EventScript_TryPiraeusKiposTownEvent_6:
# 659 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SofosCity_Movement_ApproachPiraeus1
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent_4

SofosCity_EventScript_TryPiraeusKiposTownEvent_7:
# 663 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SofosCity_Movement_ApproachPiraeus2
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent_4

SofosCity_EventScript_TryPiraeusKiposTownEvent_8:
# 667 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SofosCity_Movement_ApproachPiraeus3
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent_4


# 691 "data/maps/SofosCity/scripts.pory"
SofosCity_Movement_ApproachPiraeus0:
# 693 "data/maps/SofosCity/scripts.pory"
	walk_down
# 694 "data/maps/SofosCity/scripts.pory"
	walk_right
# 694 "data/maps/SofosCity/scripts.pory"
	walk_right
# 695 "data/maps/SofosCity/scripts.pory"
	walk_down
# 695 "data/maps/SofosCity/scripts.pory"
	walk_down
# 695 "data/maps/SofosCity/scripts.pory"
	walk_down
# 695 "data/maps/SofosCity/scripts.pory"
	walk_down
# 696 "data/maps/SofosCity/scripts.pory"
	step_end

# 698 "data/maps/SofosCity/scripts.pory"
SofosCity_Movement_ApproachPiraeus1:
# 700 "data/maps/SofosCity/scripts.pory"
	walk_down
# 701 "data/maps/SofosCity/scripts.pory"
	walk_right
# 702 "data/maps/SofosCity/scripts.pory"
	walk_down
# 702 "data/maps/SofosCity/scripts.pory"
	walk_down
# 702 "data/maps/SofosCity/scripts.pory"
	walk_down
# 702 "data/maps/SofosCity/scripts.pory"
	walk_down
# 703 "data/maps/SofosCity/scripts.pory"
	step_end

# 705 "data/maps/SofosCity/scripts.pory"
SofosCity_Movement_ApproachPiraeus2:
# 707 "data/maps/SofosCity/scripts.pory"
	walk_down
# 707 "data/maps/SofosCity/scripts.pory"
	walk_down
# 707 "data/maps/SofosCity/scripts.pory"
	walk_down
# 707 "data/maps/SofosCity/scripts.pory"
	walk_down
# 707 "data/maps/SofosCity/scripts.pory"
	walk_down
# 708 "data/maps/SofosCity/scripts.pory"
	step_end

# 710 "data/maps/SofosCity/scripts.pory"
SofosCity_Movement_ApproachPiraeus3:
# 712 "data/maps/SofosCity/scripts.pory"
	walk_down
# 713 "data/maps/SofosCity/scripts.pory"
	walk_left
# 714 "data/maps/SofosCity/scripts.pory"
	walk_down
# 714 "data/maps/SofosCity/scripts.pory"
	walk_down
# 714 "data/maps/SofosCity/scripts.pory"
	walk_down
# 714 "data/maps/SofosCity/scripts.pory"
	walk_down
# 715 "data/maps/SofosCity/scripts.pory"
	step_end

# 717 "data/maps/SofosCity/scripts.pory"
SofosCity_Movement_ApproachPiraeus4:
# 719 "data/maps/SofosCity/scripts.pory"
	walk_down
# 720 "data/maps/SofosCity/scripts.pory"
	walk_left
# 720 "data/maps/SofosCity/scripts.pory"
	walk_left
# 721 "data/maps/SofosCity/scripts.pory"
	walk_down
# 721 "data/maps/SofosCity/scripts.pory"
	walk_down
# 721 "data/maps/SofosCity/scripts.pory"
	walk_down
# 721 "data/maps/SofosCity/scripts.pory"
	walk_down
# 722 "data/maps/SofosCity/scripts.pory"
	step_end

SofosCity_EventScript_GameCornerSign_Text_0:
# 31 "data/maps/SofosCity/scripts.pory"
	.string "Sofos City Game Corner\n"
	.string "Play Pinball, Get Prizes!$"

SofosCity_EventScript_BattlePavilionSign_Text_0:
# 40 "data/maps/SofosCity/scripts.pory"
	.string "Sofos City Battle Pavilion\n"
	.string "Learn, Adapt, and Win!$"

SofosCity_EventScript_GymSign_Text_0:
# 49 "data/maps/SofosCity/scripts.pory"
	.string "Gym Leader: Meneswo\n"
	.string "The Strategist of the City$"

SofosCity_EventScript_ChimeraGruntAtGym1_Text_0:
# 58 "data/maps/SofosCity/scripts.pory"
	.string "Chimera Grunt$"

SofosCity_EventScript_ChimeraGruntAtGym1_Text_1:
# 59 "data/maps/SofosCity/scripts.pory"
	.string "Come on, let us in! We know the {COLOR GREEN}Gym\n"
	.string "Leader isn't here{COLOR DARK_GRAY}! We're gonna take all\l"
	.string "the Pokémon whether you like it or not!$"

SofosCity_EventScript_ChimeraGruntAtGym2_Text_0:
# 68 "data/maps/SofosCity/scripts.pory"
	.string "Get out of the way, you old geezer!\n"
	.string "We've got even more {COLOR GREEN}Team Chimera Grunts{COLOR DARK_GRAY}\l"
	.string "in {COLOR GREEN}Satyr's Lair, the cave north of Sofos\l"
	.string "City{COLOR DARK_GRAY}! We'll come down in force and break\l"
	.string "the walls down!$"

SofosCity_EventScript_ChimeraGruntAtGym3_Text_0:
# 77 "data/maps/SofosCity/scripts.pory"
	.string "Bwahaha, the Gym is just about\n"
	.string "defenseless now that the Gym Leader is\l"
	.string "{COLOR GREEN}distracted by the Grunts in Satyr's\l"
	.string "Lair{COLOR DARK_GRAY}! Let us in!$"

SofosCity_EventScript_ItemStreetVendor_Text_0:
# 87 "data/maps/SofosCity/scripts.pory"
	.string "Street Vendor$"

SofosCity_EventScript_GirlNearVendors_Text_0:
# 144 "data/maps/SofosCity/scripts.pory"
	.string "Girl$"

SofosCity_EventScript_GirlNearVendors_Text_1:
# 145 "data/maps/SofosCity/scripts.pory"
	.string "Everything sold by these Street\n"
	.string "Vendors are made or grown right around\l"
	.string "Sofos City! It helps keep locals in\l"
	.string "business.$"

SofosCity_EventScript_BoyNearFarmersGoods_Text_0:
# 155 "data/maps/SofosCity/scripts.pory"
	.string "Athlete$"

SofosCity_EventScript_BoyNearFarmersGoods_Text_1:
# 156 "data/maps/SofosCity/scripts.pory"
	.string "Mmm, locally-grown food is the best! My\n"
	.string "workouts go 10x better when I buy my\l"
	.string "snacks from here.$"

SofosCity_EventScript_ManWithMurkrow_Text_0:
# 166 "data/maps/SofosCity/scripts.pory"
	.string "Angry Man$"

SofosCity_EventScript_ManWithMurkrow_Text_1:
# 169 "data/maps/SofosCity/scripts.pory"
	.string "Murkrow... Murkrow! Come on, work with\n"
	.string "me!\p"
	.string "Argh, I can't do it anymore! I was going\n"
	.string "to teach Murkrow this move, but it looks\l"
	.string "like it has it mastered. Take it and\l"
	.string "scram!$"

SofosCity_EventScript_ManWithMurkrow_Text_2:
# 176 "data/maps/SofosCity/scripts.pory"
	.string "Grr, this darn Murkrow is gonna make me\n"
	.string "lose it! Why, why does it enjoy making me\l"
	.string "angry?!$"

SofosCity_EventScript_Murkrow_Text_0:
# 186 "data/maps/SofosCity/scripts.pory"
	.string "Murkrow$"

SofosCity_EventScript_Murkrow_Text_1:
# 188 "data/maps/SofosCity/scripts.pory"
	.string "Kekekehehe!$"

SofosCity_EventScript_LostConstructionWorker_Text_0:
# 199 "data/maps/SofosCity/scripts.pory"
	.string "Worker$"

SofosCity_EventScript_LostConstructionWorker_Text_1:
# 200 "data/maps/SofosCity/scripts.pory"
	.string "Erm... hmm... I was called to Sofos City\n"
	.string "for a maintenance job, but I'm already\l"
	.string "lost! This must be the biggest city in\l"
	.string "the whole region!$"

SofosCity_EventScript_StrategicCamper_Text_0:
# 215 "data/maps/SofosCity/scripts.pory"
	.string "Camper$"

SofosCity_EventScript_StrategicCamper_Text_1:
# 216 "data/maps/SofosCity/scripts.pory"
	.string "Alolan Raichu is the master of battle\n"
	.string "terrain. It's signature ability, Surge\l"
	.string "Surfer, summons and electric terrain\l"
	.string "and increases it's speed. Strategy is\l"
	.string "all about changing the battlefield to\l"
	.string "your advantage!$"

SofosCity_EventScript_StrategicCamper_Text_2:
# 227 "data/maps/SofosCity/scripts.pory"
	.string "I love trying to understand Pokémon\n"
	.string "battle strategies! Hazards, chip\l"
	.string "damage, abilities, and of course, battle\l"
	.string "terrain - they can all be the key to\l"
	.string "victory!\p"
	.string "There's one Pokémon in particular who\n"
	.string "excels at managing battle terrain.\l"
	.string "{COLOR GREEN}Alolan Raichu{COLOR DARK_GRAY}'s ability, Surge Surfer,\l"
	.string "summons electric terrain while boosting\l"
	.string "it's speed.\p"
	.string "Show me an {COLOR GREEN}Alolan Raichu{COLOR DARK_GRAY} so I can learn\n"
	.string "more about it. I'll give you a reward!$"

SofosCity_EventScript_StrategicCamper_Text_3:
# 236 "data/maps/SofosCity/scripts.pory"
	.string "What's up? Did you find an {COLOR GREEN}Alolan Raichu{COLOR DARK_GRAY}\n"
	.string "and study the ability Surge Surfer for\l"
	.string "me?$"

SofosCity_EventScript_StrategicCamper_Text_4:
# 243 "data/maps/SofosCity/scripts.pory"
	.string "Not yet, huh? It's okay, finding a\n"
	.string "Raichu in the Alolan form isn't common\l"
	.string "in the Ilios Region. I've only ever seen\l"
	.string "one once!\p"
	.string "Come back when you have a {COLOR GREEN}complete\n"
	.string "Pokédex entry for Alolan Raichu{COLOR DARK_GRAY}. I'll\l"
	.string "give you something to improve your\l"
	.string "strategy even more!$"

SofosCity_EventScript_StrategicCamper_ReactToRaichu_Text_0:
# 257 "data/maps/SofosCity/scripts.pory"
	.string "Ahaha, I love it! This data is even more\n"
	.string "impressive than I expected!\p"
	.string "Alolan Raichu really is the master of\n"
	.string "controlling battle terrain, huh? Oh,\l"
	.string "right, here's your reward!$"

SofosCity_EventScript_StrategicCamper_ReactToRaichu_Text_1:
# 262 "data/maps/SofosCity/scripts.pory"
	.string "The Terrain Extender makes terrain\n"
	.string "stay longer when set in battle. Using\l"
	.string "this with Alolan Raichu can make it stay\l"
	.string "faster for longer!$"

SofosCity_EventScript_BeautyNearPokecenter_Text_0:
# 277 "data/maps/SofosCity/scripts.pory"
	.string "Beauty$"

SofosCity_EventScript_BeautyNearPokecenter_Text_1:
# 278 "data/maps/SofosCity/scripts.pory"
	.string "Sofos City is well-known for using\n"
	.string "turquoise-blue roofs on most buildings.\l"
	.string "It gives the city it's own identity.\p"
	.string "Of course, those are only on the modern\n"
	.string "buildings. The ruins of the Acropolis\l"
	.string "Temple to the north were made of\l"
	.string "shining marble!$"

SofosCity_EventScript_ArtistPlayingChess_Text_0:
# 288 "data/maps/SofosCity/scripts.pory"
	.string "Artist$"

SofosCity_EventScript_ArtistPlayingChess_Text_1:
# 289 "data/maps/SofosCity/scripts.pory"
	.string "Ehehe, I know! I'll drive my Chesnaught\n"
	.string "forward and take their best pieces!$"

SofosCity_EventScript_OldWomanPlayingChess_Text_0:
# 301 "data/maps/SofosCity/scripts.pory"
	.string "Old Woman$"

SofosCity_EventScript_OldWomanPlayingChess_Text_1:
# 302 "data/maps/SofosCity/scripts.pory"
	.string "Hah! He'll use his Chesnaught piece\n"
	.string "next. That'll put it right in the path of\l"
	.string "my Mudsdale!$"

SofosCity_EventScript_PicnickerRunning_Text_0:
# 314 "data/maps/SofosCity/scripts.pory"
	.string "Tourist$"

SofosCity_EventScript_PicnickerRunning_Text_1:
# 315 "data/maps/SofosCity/scripts.pory"
	.string "Wow wow WOW! This city is so big! I could\n"
	.string "run around forever to see it all!$"

SofosCity_EventScript_OfficerAtCityEdge_Text_0:
# 325 "data/maps/SofosCity/scripts.pory"
	.string "Officer$"

SofosCity_EventScript_OfficerAtCityEdge_Text_1:
# 326 "data/maps/SofosCity/scripts.pory"
	.string "This is the edge of the modern Sofos\n"
	.string "City. Further north is what remains of\l"
	.string "the Acropolis atop the cliffside, which\l"
	.string "is just a cave and a few ruins outside\l"
	.string "of the {COLOR GREEN}Acropolis Temple{COLOR DARK_GRAY}.$"

SofosCity_EventScript_FarmerOnSidewalk_Text_0:
# 336 "data/maps/SofosCity/scripts.pory"
	.string "Farmer$"

SofosCity_EventScript_FarmerOnSidewalk_Text_1:
# 337 "data/maps/SofosCity/scripts.pory"
	.string "I'd run a farm near the ruins up on the\n"
	.string "Acropolis if I could, but the land is\l"
	.string "riddled with stone and marble\l"
	.string "structures. It's okay, though. I\l"
	.string "suppose it's important to preserve and\l"
	.string "understand our history.$"

SofosCity_EventScript_Rockruff_Text_0:
# 347 "data/maps/SofosCity/scripts.pory"
	.string "Rockruff$"

SofosCity_EventScript_Rockruff_Text_1:
# 349 "data/maps/SofosCity/scripts.pory"
	.string "Bwuff wuff!$"

SofosCity_EventScript_WomanWithRockruff_Text_0:
# 360 "data/maps/SofosCity/scripts.pory"
	.string "Woman$"

SofosCity_EventScript_WomanWithRockruff_Text_1:
# 361 "data/maps/SofosCity/scripts.pory"
	.string "I'm taking my Rockruff on a walk. She\n"
	.string "likes to stop and take a break after\l"
	.string "visiting the Pokémon Center.$"

SofosCity_EventScript_FishermanPlayingChess_Text_0:
# 371 "data/maps/SofosCity/scripts.pory"
	.string "Fisherman$"

SofosCity_EventScript_FishermanPlayingChess_Text_1:
# 372 "data/maps/SofosCity/scripts.pory"
	.string "I formed a wall with my Zigzagoon\n"
	.string "pieces, so that'll protect my Celebi. If\l"
	.string "they take the Celebi piece, I lose the\l"
	.string "game!$"

SofosCity_EventScript_GirlPlayingChess_Text_0:
# 385 "data/maps/SofosCity/scripts.pory"
	.string "Each piece can move in different ways.\n"
	.string "Chesnaught moves in straight lines,\l"
	.string "Mudsdale moves in L-shapes, and Xatu\l"
	.string "can only move diagonally. The endless\l"
	.string "strategies make this the most popular\l"
	.string "game in the city!$"

SofosCity_EventScript_HexManiacSeeingLights_Text_0:
# 397 "data/maps/SofosCity/scripts.pory"
	.string "Hex Maniac$"

SofosCity_EventScript_HexManiacSeeingLights_Text_1:
# 398 "data/maps/SofosCity/scripts.pory"
	.string "The lights all around the city keep wild\n"
	.string "Pokémon at bay. But once you're outside\l"
	.string "the walls, you're in their territory.$"

SofosCity_EventScript_CooltrainerThinkingStrategy_Text_0:
# 408 "data/maps/SofosCity/scripts.pory"
	.string "Cooltrainer$"

SofosCity_EventScript_CooltrainerThinkingStrategy_Text_1:
# 409 "data/maps/SofosCity/scripts.pory"
	.string "Sofos City is famous for innovating on\n"
	.string "Pokémon battle strategy. The Gym\l"
	.string "Leader chooses to use strategic\l"
	.string "Pokémon, instead of being restricted to\l"
	.string "a single type.$"

SofosCity_EventScript_OldManAtCliff_Text_0:
# 419 "data/maps/SofosCity/scripts.pory"
	.string "Old Man$"

SofosCity_EventScript_OldManAtCliff_Text_1:
# 420 "data/maps/SofosCity/scripts.pory"
	.string "This used to be a bustling beach, but\n"
	.string "rising seas and erosion have reduced it\l"
	.string "to this. Bleached shells and receding\l"
	.string "sands... these changes aren't natural.$"

SofosCity_EventScript_Clauncher_Text_0:
# 429 "data/maps/SofosCity/scripts.pory"
	.string "Clauncher$"

SofosCity_EventScript_Clauncher_Text_1:
# 431 "data/maps/SofosCity/scripts.pory"
	.string "Kss kss!$"

SofosCity_EventScript_ManOutsideBattlePavilion_Text_0:
# 442 "data/maps/SofosCity/scripts.pory"
	.string "Man$"

SofosCity_EventScript_ManOutsideBattlePavilion_Text_1:
# 447 "data/maps/SofosCity/scripts.pory"
	.string "There are a few other Battle Pavilions\n"
	.string "scattered around the Ilios Region. Each\l"
	.string "has different rules and strategies to\l"
	.string "win!$"

SofosCity_EventScript_ManOutsideBattlePavilion_Text_2:
# 457 "data/maps/SofosCity/scripts.pory"
	.string "See that building with the green roof\n"
	.string "topped with Poké balls? That's the\l"
	.string "{COLOR GREEN}Sofos City Battle Pavilion{COLOR DARK_GRAY}. It's a\l"
	.string "popular destination for Trainers\l"
	.string "obsessed with strategy.\p"
	.string "Hey, you're new here, right? Go {COLOR GREEN}try the\n"
	.string "Battle Pavilion{COLOR DARK_GRAY} and let me know how it\l"
	.string "went!$"

SofosCity_EventScript_ManOutsideBattlePavilion_Text_3:
# 465 "data/maps/SofosCity/scripts.pory"
	.string "Chaire! Have you tried participating in\n"
	.string "the {COLOR GREEN}Sofos City Battle Pavilion{COLOR DARK_GRAY} yet?$"

SofosCity_EventScript_ManOutsideBattlePavilion_Text_4:
# 473 "data/maps/SofosCity/scripts.pory"
	.string "Opa! You did it! Did you have fun?\n"
	.string "Right, right, your reward. I hope you\l"
	.string "continue to participate in Battle\l"
	.string "Pavilions across Ilios!$"

SofosCity_EventScript_ManAdmiringTowerRuin_Text_0:
# 489 "data/maps/SofosCity/scripts.pory"
	.string "Curious Man$"

SofosCity_EventScript_ManAdmiringTowerRuin_Text_1:
# 490 "data/maps/SofosCity/scripts.pory"
	.string "There are ruins all over the Ilios\n"
	.string "Region, but those around Sofos City are\l"
	.string "unique. In the {COLOR GREEN}Acropolis Temple{COLOR DARK_GRAY} here,\l"
	.string "people still pay respect to the\l"
	.string "{COLOR GREEN}Elemental Beasts Trio{COLOR DARK_GRAY}. Most other\l"
	.string "ancient sites are pretty much\l"
	.string "abandoned!$"

SofosCity_EventScript_TogaGirlsAtAcropolis_Text_0:
# 500 "data/maps/SofosCity/scripts.pory"
	.string "Toga Woman$"

SofosCity_EventScript_TogaGirlsAtAcropolis_Text_1:
# 501 "data/maps/SofosCity/scripts.pory"
	.string "Welcome to the Sofos City {COLOR GREEN}Acropolis\n"
	.string "Temple{COLOR DARK_GRAY}. Feel free to pay your respects\l"
	.string "here.$"

SofosCIty_EventScript_BugCatcher_Text_0:
# 511 "data/maps/SofosCity/scripts.pory"
	.string "Bug Catcher$"

SofosCIty_EventScript_BugCatcher_Text_1:
# 512 "data/maps/SofosCity/scripts.pory"
	.string "I live in the center of Sofos City, but I\n"
	.string "walk out here every day to look for\l"
	.string "Pokémon! I love being so close to the\l"
	.string "forest.$"

SofosCity_EventScript_LassInTropics_Text_0:
# 522 "data/maps/SofosCity/scripts.pory"
	.string "Lass$"

SofosCity_EventScript_LassInTropics_Text_1:
# 523 "data/maps/SofosCity/scripts.pory"
	.string "Not too many people come so far from\n"
	.string "the city walls. Lots of wild Pokémon are\l"
	.string "out here, and plenty of city people\l"
	.string "aren't a fan of that.$"

SofosCity_EventScript_ManByShallows_Text_0:
# 534 "data/maps/SofosCity/scripts.pory"
	.string "I come down here to cool off and watch\n"
	.string "Pokémon swim around. Sometimes, brave\l"
	.string "Pokémon come up into the shallows to\l"
	.string "say hello!$"

SofosCity_EventScript_FatManByCave_Text_0:
# 544 "data/maps/SofosCity/scripts.pory"
	.string "Fat Man$"

SofosCity_EventScript_FatManByCave_Text_1:
# 545 "data/maps/SofosCity/scripts.pory"
	.string "When I was a kid, everyone said to stay\n"
	.string "away from the Satyr's Lair, that small\l"
	.string "cave in the cliffside. I don't believe\l"
	.string "the stories anymore, but... well, I just\l"
	.string "don't want to go in!$"

SofosCity_EventScript_GoodRodFishingGuru_Text_0:
# 555 "data/maps/SofosCity/scripts.pory"
	.string "Fishing Guru$"

SofosCity_EventScript_GoodRodFishingGuru_Text_1:
# 558 "data/maps/SofosCity/scripts.pory"
	.string "Hey! Is that a Pokédex from the Acrisia\n"
	.string "University? I used to visit all the time!\p"
	.string "You've come quite a long way. Here,\n"
	.string "maybe this'll help on your journey.$"

SofosCity_EventScript_GoodRodFishingGuru_Text_2:
# 563 "data/maps/SofosCity/scripts.pory"
	.string "The {COLOR GREEN}Good Rod{COLOR DARK_GRAY} can give you access to a\n"
	.string "wide array of Water-dwelling Pokémon.\l"
	.string "Maybe they can help you handle the\l"
	.string "next Gym Leader!$"

SofosCity_EventScript_GoodRodFishingGuru_Text_3:
# 568 "data/maps/SofosCity/scripts.pory"
	.string "The {COLOR GREEN}Good Rod{COLOR DARK_GRAY} allows you to fish up a\n"
	.string "wide arrow of Water-dwelling Pokémon.\l"
	.string "Hey, you might even find some treasure\l"
	.string "in the water!$"

SofosCity_EventScript_Trainer_SofosCity_Grunt_Text_0:
# 578 "data/maps/SofosCity/scripts.pory"
	.string "Grunt$"

SofosCity_EventScript_Trainer_SofosCity_Grunt_Text_1:
# 579 "data/maps/SofosCity/scripts.pory"
	.string "Well, I guess I'm not the WORST Grunt\n"
	.string "ever. There was that one guy who messed\l"
	.string "up stealing a Pokédex. He lost to some\l"
	.string "new, weak Trainer!$"

SofosCity_EventScript_SwimmerF_Text_0:
# 597 "data/maps/SofosCity/scripts.pory"
	.string "Swimmer$"

SofosCity_EventScript_SwimmerF_Text_1:
# 598 "data/maps/SofosCity/scripts.pory"
	.string "The area around Sofos City is littered\n"
	.string "with rocks in the shallowest parts.\l"
	.string "Most swimmers choose to go further out\l"
	.string "to the east, where the water is deeper\l"
	.string "but relatively safe.$"

SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_0:
# 648 "data/maps/SofosCity/scripts.pory"
	.string "Piraeus$"

SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_1:
# 649 "data/maps/SofosCity/scripts.pory"
	.string "{PLAYER}!! Come on over here!$"

SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_2:
# 677 "data/maps/SofosCity/scripts.pory"
	.string "My crew and I just got a letter from a\n"
	.string "Murkrow. The people of {COLOR GREEN}Kipos Town{COLOR DARK_GRAY} are\l"
	.string "looking for a strong Trainer who's\l"
	.string "{COLOR GREEN}knowledgeable about Pokémon{COLOR DARK_GRAY}, and as an\l"
	.string "Acrisia University researcher, who\l"
	.string "could be better but you?\p"
	.string "Hm? Oh, you've never been to Kipos Town,\n"
	.string "have you? It's {COLOR GREEN}only accessible by boat{COLOR DARK_GRAY},\l"
	.string "so I'll add it to the list of locations we\l"
	.string "can sail to. Now, time for a detour -\l"
	.string "let's go!$"

SofosCity_Text_Trainer_SofosCity_GruntIntro::
# 584 "data/maps/SofosCity/scripts.pory"
	.string "Hold up! I was told to stop anyone from\n"
	.string "getting into {COLOR GREEN}Satyr's Lair{COLOR DARK_GRAY}!$"

SofosCity_Text_Trainer_SofosCity_GruntDefeat::
# 588 "data/maps/SofosCity/scripts.pory"
	.string "Darn. I must be the worst Grunt in the\n"
	.string "history of Team Chimera!$"

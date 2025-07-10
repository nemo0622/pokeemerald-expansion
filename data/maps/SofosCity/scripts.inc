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


SofosCity_EventScript_DirectionSign::
# 57 "data/maps/SofosCity/scripts.pory"
	lock
# 58 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_DirectionSign_Text_0
# 59 "data/maps/SofosCity/scripts.pory"
	closemessage
# 60 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ChimeraGruntAtGym1::
# 66 "data/maps/SofosCity/scripts.pory"
	lock
# 67 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ChimeraGruntAtGym1_Text_0
# 68 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ChimeraGruntAtGym1_Text_1
# 69 "data/maps/SofosCity/scripts.pory"
	closemessage
# 70 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ChimeraGruntAtGym2::
# 75 "data/maps/SofosCity/scripts.pory"
	lock
# 76 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ChimeraGruntAtGym1_Text_0
# 77 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ChimeraGruntAtGym2_Text_0
# 78 "data/maps/SofosCity/scripts.pory"
	closemessage
# 79 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ChimeraGruntAtGym3::
# 84 "data/maps/SofosCity/scripts.pory"
	lock
# 85 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ChimeraGruntAtGym1_Text_0
# 86 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ChimeraGruntAtGym3_Text_0
# 87 "data/maps/SofosCity/scripts.pory"
	closemessage
# 88 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ItemStreetVendor::
# 94 "data/maps/SofosCity/scripts.pory"
	lock
# 95 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 96 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ItemStreetVendor_Text_0
# 97 "data/maps/SofosCity/scripts.pory"
	message gText_HowMayIServeYou
# 98 "data/maps/SofosCity/scripts.pory"
	waitmessage
# 99 "data/maps/SofosCity/scripts.pory"
	pokemart SofosCity_ItemStreetVendorShop
# 100 "data/maps/SofosCity/scripts.pory"
	closemessage
# 101 "data/maps/SofosCity/scripts.pory"
	delay 1
# 102 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ItemStreetVendor_Text_0
# 103 "data/maps/SofosCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 104 "data/maps/SofosCity/scripts.pory"
	release
	end


	.align 2
# 107 "data/maps/SofosCity/scripts.pory"
SofosCity_ItemStreetVendorShop:
# 109 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 110 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 111 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 112 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 113 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 114 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_TART_APPLE
# 115 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_NONE

SofosCity_EventScript_DecorStreetVendor::
# 120 "data/maps/SofosCity/scripts.pory"
	lock
# 121 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 122 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ItemStreetVendor_Text_0
# 123 "data/maps/SofosCity/scripts.pory"
	message gText_HowMayIServeYou
# 124 "data/maps/SofosCity/scripts.pory"
	waitmessage
# 125 "data/maps/SofosCity/scripts.pory"
	pokemartdecoration SofosCity_DecorShop
# 126 "data/maps/SofosCity/scripts.pory"
	closemessage
# 127 "data/maps/SofosCity/scripts.pory"
	delay 1
# 128 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ItemStreetVendor_Text_0
# 129 "data/maps/SofosCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 130 "data/maps/SofosCity/scripts.pory"
	release
	end


# 134 "data/maps/SofosCity/scripts.pory"

# 135 "data/maps/SofosCity/scripts.pory"
    .align 2
# 136 "data/maps/SofosCity/scripts.pory"
SofosCity_DecorShop:
# 137 "data/maps/SofosCity/scripts.pory"
    .2byte DECOR_SMALL_DESK
# 138 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_PRETTY_DESK
# 139 "data/maps/SofosCity/scripts.pory"
    .2byte DECOR_SMALL_CHAIR
# 140 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_PRETTY_CHAIR
# 141 "data/maps/SofosCity/scripts.pory"
    .2byte DECOR_SMALL_FLOWER_BOX
# 142 "data/maps/SofosCity/scripts.pory"
    .2byte DECOR_PRETTY_FLOWERS
# 143 "data/maps/SofosCity/scripts.pory"
    .2byte DECOR_FENCE_LENGTH
# 144 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_FENCE_WIDTH
# 145 "data/maps/SofosCity/scripts.pory"
    .2byte DECOR_LARGE_BED
# 146 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_DOLL_SQUARE
# 147 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_GLITTER_MAT
# 148 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_SURF_MAT
# 149 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_THUNDER_MAT
# 150 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_GREEN_POSTER
# 151 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_RED_POSTER
# 152 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_BLUE_POSTER
# 153 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_SUNSET_POSTER
# 154 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_PIKACHU_DOLL
# 155 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_CRABRAWLER_DOLL
# 156 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_TOGEPI_DOLL
# 157 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_MEOWTH_DOLL
# 158 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_STUFFUL_DOLL
# 159 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_BOUNSWEET_DOLL
# 160 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_GRASS_CUSHION
# 161 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_FIRE_CUSHION
# 162 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_WATER_CUSHION
# 163 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_NONE
# 164 "data/maps/SofosCity/scripts.pory"
	release
# 165 "data/maps/SofosCity/scripts.pory"
	end

SofosCity_EventScript_GirlNearVendors::
# 170 "data/maps/SofosCity/scripts.pory"
	lock
# 171 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 172 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_GirlNearVendors_Text_0
# 173 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GirlNearVendors_Text_1
# 174 "data/maps/SofosCity/scripts.pory"
	closemessage
# 175 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_BoyNearFarmersGoods::
# 181 "data/maps/SofosCity/scripts.pory"
	lock
# 182 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 183 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_BoyNearFarmersGoods_Text_0
# 184 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_BoyNearFarmersGoods_Text_1
# 185 "data/maps/SofosCity/scripts.pory"
	closemessage
# 186 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ManWithMurkrow::
# 192 "data/maps/SofosCity/scripts.pory"
	lock
# 193 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 194 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ManWithMurkrow_Text_0
# 195 "data/maps/SofosCity/scripts.pory"
	goto_if_unset FLAG_GOT_TM_TORMENT, SofosCity_EventScript_ManWithMurkrow_2
# 204 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManWithMurkrow_Text_2
# 205 "data/maps/SofosCity/scripts.pory"
	closemessage
SofosCity_EventScript_ManWithMurkrow_1:
# 207 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_ManWithMurkrow_2:
# 197 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManWithMurkrow_Text_1
# 198 "data/maps/SofosCity/scripts.pory"
	closemessage
# 199 "data/maps/SofosCity/scripts.pory"
	giveitem ITEM_TM_TORMENT
# 200 "data/maps/SofosCity/scripts.pory"
	setflag FLAG_GOT_TM_TORMENT
	goto SofosCity_EventScript_ManWithMurkrow_1


SofosCity_EventScript_Murkrow::
# 212 "data/maps/SofosCity/scripts.pory"
	lock
# 213 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 214 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_Murkrow_Text_0
# 215 "data/maps/SofosCity/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 216 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_Murkrow_Text_1
# 217 "data/maps/SofosCity/scripts.pory"
	waitmoncry
# 218 "data/maps/SofosCity/scripts.pory"
	closemessage
# 219 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_LostConstructionWorker::
# 225 "data/maps/SofosCity/scripts.pory"
	lock
# 226 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 227 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_LostConstructionWorker_Text_0
# 228 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_LostConstructionWorker_Text_1
# 229 "data/maps/SofosCity/scripts.pory"
	closemessage
# 230 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_StrategicCamper::
# 236 "data/maps/SofosCity/scripts.pory"
	lock
# 237 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 240 "data/maps/SofosCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_SHOW_CAMPER_ALOLAN_RAICHU
# 241 "data/maps/SofosCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SofosCity_EventScript_StrategicCamper_2
# 251 "data/maps/SofosCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_SHOW_CAMPER_ALOLAN_RAICHU
# 252 "data/maps/SofosCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_EventScript_StrategicCamper_5
# 263 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 264 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_Text_3
# 265 "data/maps/SofosCity/scripts.pory"
	closemessage
# 267 "data/maps/SofosCity/scripts.pory"
	checkforspecies SPECIES_RAICHU_ALOLAN, OPEN_PARTY_SCREEN, SofosCity_EventScript_StrategicCamper_ReactToRaichu
# 270 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 271 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_Text_4
# 272 "data/maps/SofosCity/scripts.pory"
	closemessage
SofosCity_EventScript_StrategicCamper_4:
# 274 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_StrategicCamper_2:
# 243 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 244 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_Text_1
# 245 "data/maps/SofosCity/scripts.pory"
	closemessage
# 246 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_StrategicCamper_5:
# 254 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 255 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_Text_2
# 256 "data/maps/SofosCity/scripts.pory"
	closemessage
# 258 "data/maps/SofosCity/scripts.pory"
	delay 20
# 259 "data/maps/SofosCity/scripts.pory"
	startquest QUEST_SHOW_CAMPER_ALOLAN_RAICHU
	goto SofosCity_EventScript_StrategicCamper_4


SofosCity_EventScript_StrategicCamper_ReactToRaichu::
# 279 "data/maps/SofosCity/scripts.pory"
	lock
# 280 "data/maps/SofosCity/scripts.pory"
	delay 20
# 281 "data/maps/SofosCity/scripts.pory"
	applymovement 26, Common_Movement_Heart
# 282 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 283 "data/maps/SofosCity/scripts.pory"
	delay 10
# 284 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 285 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_ReactToRaichu_Text_0
# 286 "data/maps/SofosCity/scripts.pory"
	closemessage
# 287 "data/maps/SofosCity/scripts.pory"
	givedecoration DECOR_RAICHU_DOLL
# 288 "data/maps/SofosCity/scripts.pory"
	delay 5
# 289 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 290 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_ReactToRaichu_Text_1
# 291 "data/maps/SofosCity/scripts.pory"
	closemessage
# 293 "data/maps/SofosCity/scripts.pory"
	delay 20
# 294 "data/maps/SofosCity/scripts.pory"
	completequest QUEST_SHOW_CAMPER_ALOLAN_RAICHU
# 296 "data/maps/SofosCity/scripts.pory"
	closemessage
# 297 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_BeautyNearPokecenter::
# 303 "data/maps/SofosCity/scripts.pory"
	lock
# 304 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 305 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_BeautyNearPokecenter_Text_0
# 306 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_BeautyNearPokecenter_Text_1
# 307 "data/maps/SofosCity/scripts.pory"
	closemessage
# 308 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ArtistPlayingChess::
# 314 "data/maps/SofosCity/scripts.pory"
	lock
# 315 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 316 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ArtistPlayingChess_Text_0
# 317 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ArtistPlayingChess_Text_1
# 318 "data/maps/SofosCity/scripts.pory"
	closemessage
# 319 "data/maps/SofosCity/scripts.pory"
	applymovement 28, Common_Movement_FaceLeft
# 320 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 321 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_OldWomanPlayingChess::
# 327 "data/maps/SofosCity/scripts.pory"
	lock
# 328 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 329 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_OldWomanPlayingChess_Text_0
# 330 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_OldWomanPlayingChess_Text_1
# 331 "data/maps/SofosCity/scripts.pory"
	closemessage
# 332 "data/maps/SofosCity/scripts.pory"
	applymovement 29, Common_Movement_FaceRight
# 333 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 334 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_PicnickerRunning::
# 340 "data/maps/SofosCity/scripts.pory"
	lock
# 341 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 342 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_PicnickerRunning_Text_0
# 343 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_PicnickerRunning_Text_1
# 344 "data/maps/SofosCity/scripts.pory"
	closemessage
# 345 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_OfficerAtCityEdge::
# 351 "data/maps/SofosCity/scripts.pory"
	lock
# 352 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 353 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_OfficerAtCityEdge_Text_0
# 354 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_OfficerAtCityEdge_Text_1
# 355 "data/maps/SofosCity/scripts.pory"
	closemessage
# 356 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_FarmerOnSidewalk::
# 362 "data/maps/SofosCity/scripts.pory"
	lock
# 363 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 364 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_FarmerOnSidewalk_Text_0
# 365 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_FarmerOnSidewalk_Text_1
# 366 "data/maps/SofosCity/scripts.pory"
	closemessage
# 367 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_Rockruff::
# 373 "data/maps/SofosCity/scripts.pory"
	lock
# 374 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 375 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_Rockruff_Text_0
# 376 "data/maps/SofosCity/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 377 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_Rockruff_Text_1
# 378 "data/maps/SofosCity/scripts.pory"
	waitmoncry
# 379 "data/maps/SofosCity/scripts.pory"
	closemessage
# 380 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_WomanWithRockruff::
# 386 "data/maps/SofosCity/scripts.pory"
	lock
# 387 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 388 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_WomanWithRockruff_Text_0
# 389 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_WomanWithRockruff_Text_1
# 390 "data/maps/SofosCity/scripts.pory"
	closemessage
# 391 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_FishermanPlayingChess::
# 397 "data/maps/SofosCity/scripts.pory"
	lock
# 398 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 399 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_FishermanPlayingChess_Text_0
# 400 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_FishermanPlayingChess_Text_1
# 401 "data/maps/SofosCity/scripts.pory"
	closemessage
# 402 "data/maps/SofosCity/scripts.pory"
	applymovement 35, Common_Movement_FaceRight
# 403 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 404 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_GirlPlayingChess::
# 410 "data/maps/SofosCity/scripts.pory"
	lock
# 411 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 412 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_GirlNearVendors_Text_0
# 413 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GirlPlayingChess_Text_0
# 414 "data/maps/SofosCity/scripts.pory"
	closemessage
# 415 "data/maps/SofosCity/scripts.pory"
	applymovement 36, Common_Movement_FaceLeft
# 416 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 417 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_HexManiacSeeingLights::
# 423 "data/maps/SofosCity/scripts.pory"
	lock
# 424 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 425 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_HexManiacSeeingLights_Text_0
# 426 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_HexManiacSeeingLights_Text_1
# 427 "data/maps/SofosCity/scripts.pory"
	closemessage
# 428 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_CooltrainerThinkingStrategy::
# 434 "data/maps/SofosCity/scripts.pory"
	lock
# 435 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 436 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_CooltrainerThinkingStrategy_Text_0
# 437 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_CooltrainerThinkingStrategy_Text_1
# 438 "data/maps/SofosCity/scripts.pory"
	closemessage
# 439 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_OldManAtCliff::
# 445 "data/maps/SofosCity/scripts.pory"
	lock
# 446 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 447 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_OldManAtCliff_Text_0
# 448 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_OldManAtCliff_Text_1
# 449 "data/maps/SofosCity/scripts.pory"
	closemessage
# 450 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_Clauncher::
# 455 "data/maps/SofosCity/scripts.pory"
	lock
# 456 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 457 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_Clauncher_Text_0
# 458 "data/maps/SofosCity/scripts.pory"
	playmoncry SPECIES_CLAUNCHER, CRY_MODE_NORMAL
# 459 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_Clauncher_Text_1
# 460 "data/maps/SofosCity/scripts.pory"
	waitmoncry
# 461 "data/maps/SofosCity/scripts.pory"
	closemessage
# 462 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ManOutsideBattlePavilion::
# 468 "data/maps/SofosCity/scripts.pory"
	lock
# 469 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 470 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ManOutsideBattlePavilion_Text_0
# 472 "data/maps/SofosCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_TRY_SOFOS_BATTLE_PAVILION
# 473 "data/maps/SofosCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SofosCity_EventScript_ManOutsideBattlePavilion_2
# 482 "data/maps/SofosCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_TRY_SOFOS_BATTLE_PAVILION
# 483 "data/maps/SofosCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_EventScript_ManOutsideBattlePavilion_4
# 493 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManOutsideBattlePavilion_Text_3
# 494 "data/maps/SofosCity/scripts.pory"
	closemessage
# 496 "data/maps/SofosCity/scripts.pory"
	delay 30
# 498 "data/maps/SofosCity/scripts.pory"
	goto_if_set FLAG_PLAYED_IN_SOFOS_BATTLE_PAVILION, SofosCity_EventScript_ManOutsideBattlePavilion_7
	return

SofosCity_EventScript_ManOutsideBattlePavilion_2:
# 475 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManOutsideBattlePavilion_Text_1
# 476 "data/maps/SofosCity/scripts.pory"
	closemessage
# 477 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_ManOutsideBattlePavilion_4:
# 485 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManOutsideBattlePavilion_Text_2
# 486 "data/maps/SofosCity/scripts.pory"
	closemessage
# 488 "data/maps/SofosCity/scripts.pory"
	delay 20
# 489 "data/maps/SofosCity/scripts.pory"
	startquest QUEST_TRY_SOFOS_BATTLE_PAVILION
	return

SofosCity_EventScript_ManOutsideBattlePavilion_7:
# 500 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ManOutsideBattlePavilion_Text_0
# 501 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManOutsideBattlePavilion_Text_4
# 502 "data/maps/SofosCity/scripts.pory"
	closemessage
# 503 "data/maps/SofosCity/scripts.pory"
	delay 5
# 504 "data/maps/SofosCity/scripts.pory"
	giveitem ITEM_EXP_CANDY_M, 2
# 506 "data/maps/SofosCity/scripts.pory"
	delay 20
# 507 "data/maps/SofosCity/scripts.pory"
	completequest QUEST_TRY_SOFOS_BATTLE_PAVILION
	return


SofosCity_EventScript_ManAdmiringTowerRuin::
# 515 "data/maps/SofosCity/scripts.pory"
	lock
# 516 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 517 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ManAdmiringTowerRuin_Text_0
# 518 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManAdmiringTowerRuin_Text_1
# 519 "data/maps/SofosCity/scripts.pory"
	closemessage
# 520 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_TogaGirlsAtAcropolis::
# 526 "data/maps/SofosCity/scripts.pory"
	lock
# 527 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 528 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_TogaGirlsAtAcropolis_Text_0
# 529 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_TogaGirlsAtAcropolis_Text_1
# 530 "data/maps/SofosCity/scripts.pory"
	closemessage
# 531 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCIty_EventScript_BugCatcher::
# 537 "data/maps/SofosCity/scripts.pory"
	lock
# 538 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 539 "data/maps/SofosCity/scripts.pory"
	speakername SofosCIty_EventScript_BugCatcher_Text_0
# 540 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCIty_EventScript_BugCatcher_Text_1
# 541 "data/maps/SofosCity/scripts.pory"
	closemessage
# 542 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_LassInTropics::
# 548 "data/maps/SofosCity/scripts.pory"
	lock
# 549 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 550 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_LassInTropics_Text_0
# 551 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_LassInTropics_Text_1
# 552 "data/maps/SofosCity/scripts.pory"
	closemessage
# 553 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ManByShallows::
# 559 "data/maps/SofosCity/scripts.pory"
	lock
# 560 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 561 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_BoyNearFarmersGoods_Text_0
# 562 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManByShallows_Text_0
# 563 "data/maps/SofosCity/scripts.pory"
	closemessage
# 564 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_FatManByCave::
# 570 "data/maps/SofosCity/scripts.pory"
	lock
# 571 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 572 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_FatManByCave_Text_0
# 573 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_FatManByCave_Text_1
# 574 "data/maps/SofosCity/scripts.pory"
	closemessage
# 575 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_GoodRodFishingGuru::
# 581 "data/maps/SofosCity/scripts.pory"
	lock
# 582 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 583 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_GoodRodFishingGuru_Text_0
# 584 "data/maps/SofosCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GOOD_ROD, SofosCity_EventScript_GoodRodFishingGuru_2
# 596 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GoodRodFishingGuru_Text_3
# 597 "data/maps/SofosCity/scripts.pory"
	closemessage
SofosCity_EventScript_GoodRodFishingGuru_1:
# 599 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_GoodRodFishingGuru_2:
# 586 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GoodRodFishingGuru_Text_1
# 587 "data/maps/SofosCity/scripts.pory"
	closemessage
# 588 "data/maps/SofosCity/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 589 "data/maps/SofosCity/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 590 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_GoodRodFishingGuru_Text_0
# 591 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GoodRodFishingGuru_Text_2
# 592 "data/maps/SofosCity/scripts.pory"
	closemessage
	goto SofosCity_EventScript_GoodRodFishingGuru_1


SofosCity_EventScript_Trainer_SofosCity_Grunt::
# 605 "data/maps/SofosCity/scripts.pory"
	trainerbattle_single TRAINER_SOFOS_CITY_CHIMERA_GRUNT, SofosCity_Text_Trainer_SofosCity_GruntIntro, SofosCity_Text_Trainer_SofosCity_GruntDefeat
# 606 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_Trainer_SofosCity_Grunt_Text_0
# 607 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_Trainer_SofosCity_Grunt_Text_1
# 608 "data/maps/SofosCity/scripts.pory"
	closemessage
# 609 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_SwimmerF::
# 623 "data/maps/SofosCity/scripts.pory"
	lock
# 624 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 625 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_SwimmerF_Text_0
# 626 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_SwimmerF_Text_1
# 627 "data/maps/SofosCity/scripts.pory"
	closemessage
# 628 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_Trigger_PiraeusKiposTownTrigger0::
# 634 "data/maps/SofosCity/scripts.pory"
	setvar VAR_TEMP_0, 0
# 635 "data/maps/SofosCity/scripts.pory"
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent
# 636 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_Trigger_PiraeusKiposTownTrigger1::
# 641 "data/maps/SofosCity/scripts.pory"
	setvar VAR_TEMP_0, 1
# 642 "data/maps/SofosCity/scripts.pory"
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent
# 643 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_Trigger_PiraeusKiposTownTrigger2::
# 648 "data/maps/SofosCity/scripts.pory"
	setvar VAR_TEMP_0, 2
# 649 "data/maps/SofosCity/scripts.pory"
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent
# 650 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_Trigger_PiraeusKiposTownTrigger3::
# 655 "data/maps/SofosCity/scripts.pory"
	setvar VAR_TEMP_0, 3
# 656 "data/maps/SofosCity/scripts.pory"
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent
# 657 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_Trigger_PiraeusKiposTownTrigger4::
# 662 "data/maps/SofosCity/scripts.pory"
	setvar VAR_TEMP_0, 4
# 663 "data/maps/SofosCity/scripts.pory"
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent
# 664 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_TryPiraeusKiposTownEvent::
# 670 "data/maps/SofosCity/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SofosCity_EventScript_TryPiraeusKiposTownEvent_2
SofosCity_EventScript_TryPiraeusKiposTownEvent_1:
# 715 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_TryPiraeusKiposTownEvent_2:
# 672 "data/maps/SofosCity/scripts.pory"
	lockall
# 674 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 675 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 676 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_0
# 677 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_1
# 678 "data/maps/SofosCity/scripts.pory"
	closemessage
# 680 "data/maps/SofosCity/scripts.pory"
	applymovement 60, Common_Movement_FaceUp
# 681 "data/maps/SofosCity/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq SofosCity_EventScript_TryPiraeusKiposTownEvent_5
# 685 "data/maps/SofosCity/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SofosCity_EventScript_TryPiraeusKiposTownEvent_6
# 689 "data/maps/SofosCity/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq SofosCity_EventScript_TryPiraeusKiposTownEvent_7
# 693 "data/maps/SofosCity/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq SofosCity_EventScript_TryPiraeusKiposTownEvent_8
# 699 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SofosCity_Movement_ApproachPiraeus4
SofosCity_EventScript_TryPiraeusKiposTownEvent_4:
# 701 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 702 "data/maps/SofosCity/scripts.pory"
	delay 10
# 704 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_0
# 705 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_2
# 706 "data/maps/SofosCity/scripts.pory"
	closemessage
# 707 "data/maps/SofosCity/scripts.pory"
	delay 20
# 708 "data/maps/SofosCity/scripts.pory"
	warp MAP_KIPOS_TOWN, 18, 22
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent_1

SofosCity_EventScript_TryPiraeusKiposTownEvent_5:
# 683 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SofosCity_Movement_ApproachPiraeus0
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent_4

SofosCity_EventScript_TryPiraeusKiposTownEvent_6:
# 687 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SofosCity_Movement_ApproachPiraeus1
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent_4

SofosCity_EventScript_TryPiraeusKiposTownEvent_7:
# 691 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SofosCity_Movement_ApproachPiraeus2
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent_4

SofosCity_EventScript_TryPiraeusKiposTownEvent_8:
# 695 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SofosCity_Movement_ApproachPiraeus3
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent_4


# 719 "data/maps/SofosCity/scripts.pory"
SofosCity_Movement_ApproachPiraeus0:
# 721 "data/maps/SofosCity/scripts.pory"
	walk_down
# 722 "data/maps/SofosCity/scripts.pory"
	walk_right
# 722 "data/maps/SofosCity/scripts.pory"
	walk_right
# 723 "data/maps/SofosCity/scripts.pory"
	walk_down
# 723 "data/maps/SofosCity/scripts.pory"
	walk_down
# 723 "data/maps/SofosCity/scripts.pory"
	walk_down
# 723 "data/maps/SofosCity/scripts.pory"
	walk_down
# 724 "data/maps/SofosCity/scripts.pory"
	step_end

# 726 "data/maps/SofosCity/scripts.pory"
SofosCity_Movement_ApproachPiraeus1:
# 728 "data/maps/SofosCity/scripts.pory"
	walk_down
# 729 "data/maps/SofosCity/scripts.pory"
	walk_right
# 730 "data/maps/SofosCity/scripts.pory"
	walk_down
# 730 "data/maps/SofosCity/scripts.pory"
	walk_down
# 730 "data/maps/SofosCity/scripts.pory"
	walk_down
# 730 "data/maps/SofosCity/scripts.pory"
	walk_down
# 731 "data/maps/SofosCity/scripts.pory"
	step_end

# 733 "data/maps/SofosCity/scripts.pory"
SofosCity_Movement_ApproachPiraeus2:
# 735 "data/maps/SofosCity/scripts.pory"
	walk_down
# 735 "data/maps/SofosCity/scripts.pory"
	walk_down
# 735 "data/maps/SofosCity/scripts.pory"
	walk_down
# 735 "data/maps/SofosCity/scripts.pory"
	walk_down
# 735 "data/maps/SofosCity/scripts.pory"
	walk_down
# 736 "data/maps/SofosCity/scripts.pory"
	step_end

# 738 "data/maps/SofosCity/scripts.pory"
SofosCity_Movement_ApproachPiraeus3:
# 740 "data/maps/SofosCity/scripts.pory"
	walk_down
# 741 "data/maps/SofosCity/scripts.pory"
	walk_left
# 742 "data/maps/SofosCity/scripts.pory"
	walk_down
# 742 "data/maps/SofosCity/scripts.pory"
	walk_down
# 742 "data/maps/SofosCity/scripts.pory"
	walk_down
# 742 "data/maps/SofosCity/scripts.pory"
	walk_down
# 743 "data/maps/SofosCity/scripts.pory"
	step_end

# 745 "data/maps/SofosCity/scripts.pory"
SofosCity_Movement_ApproachPiraeus4:
# 747 "data/maps/SofosCity/scripts.pory"
	walk_down
# 748 "data/maps/SofosCity/scripts.pory"
	walk_left
# 748 "data/maps/SofosCity/scripts.pory"
	walk_left
# 749 "data/maps/SofosCity/scripts.pory"
	walk_down
# 749 "data/maps/SofosCity/scripts.pory"
	walk_down
# 749 "data/maps/SofosCity/scripts.pory"
	walk_down
# 749 "data/maps/SofosCity/scripts.pory"
	walk_down
# 750 "data/maps/SofosCity/scripts.pory"
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
	.string "Gym Leader: Terpsikore\n"
	.string "The Harmonious Muse of Voice and Dance$"

SofosCity_EventScript_DirectionSign_Text_0:
# 58 "data/maps/SofosCity/scripts.pory"
	.string "Sofos City\n"
	.string "A Home For All\p"
	.string "{LEFT_ARROW} Asfal Hills\n"
	.string "Sea of Asteri {RIGHT_ARROW}$"

SofosCity_EventScript_ChimeraGruntAtGym1_Text_0:
# 67 "data/maps/SofosCity/scripts.pory"
	.string "Chimera Grunt$"

SofosCity_EventScript_ChimeraGruntAtGym1_Text_1:
# 68 "data/maps/SofosCity/scripts.pory"
	.string "Come on, let us in! We know the {COLOR GREEN}Gym\n"
	.string "Leader isn't here{COLOR DARK_GRAY}! We're gonna take all\l"
	.string "the Pokémon whether you like it or not!$"

SofosCity_EventScript_ChimeraGruntAtGym2_Text_0:
# 77 "data/maps/SofosCity/scripts.pory"
	.string "Get out of the way, you old geezer!\n"
	.string "We've got even more {COLOR GREEN}Team Chimera Grunts{COLOR DARK_GRAY}\l"
	.string "in {COLOR GREEN}Satyr's Lair, the cave north of Sofos\l"
	.string "City{COLOR DARK_GRAY}! We'll come down in force and break\l"
	.string "the walls down!$"

SofosCity_EventScript_ChimeraGruntAtGym3_Text_0:
# 86 "data/maps/SofosCity/scripts.pory"
	.string "Bwahaha, the Gym is just about\n"
	.string "defenseless now that the Gym Leader is\l"
	.string "{COLOR GREEN}distracted by the Grunts in Satyr's\l"
	.string "Lair{COLOR DARK_GRAY}! Let us in!$"

SofosCity_EventScript_ItemStreetVendor_Text_0:
# 96 "data/maps/SofosCity/scripts.pory"
	.string "Street Vendor$"

SofosCity_EventScript_GirlNearVendors_Text_0:
# 172 "data/maps/SofosCity/scripts.pory"
	.string "Girl$"

SofosCity_EventScript_GirlNearVendors_Text_1:
# 173 "data/maps/SofosCity/scripts.pory"
	.string "Everything sold by these Street\n"
	.string "Vendors are made or grown right around\l"
	.string "Sofos City! It helps keep locals in\l"
	.string "business.$"

SofosCity_EventScript_BoyNearFarmersGoods_Text_0:
# 183 "data/maps/SofosCity/scripts.pory"
	.string "Athlete$"

SofosCity_EventScript_BoyNearFarmersGoods_Text_1:
# 184 "data/maps/SofosCity/scripts.pory"
	.string "Mmm, locally-grown food is the best! My\n"
	.string "workouts go 10x better when I buy my\l"
	.string "snacks from here.$"

SofosCity_EventScript_ManWithMurkrow_Text_0:
# 194 "data/maps/SofosCity/scripts.pory"
	.string "Angry Man$"

SofosCity_EventScript_ManWithMurkrow_Text_1:
# 197 "data/maps/SofosCity/scripts.pory"
	.string "Murkrow... Murkrow! Come on, work with\n"
	.string "me!\p"
	.string "Argh, I can't do it anymore! I was going\n"
	.string "to teach Murkrow this move, but it looks\l"
	.string "like it has it mastered. Take it and\l"
	.string "scram!$"

SofosCity_EventScript_ManWithMurkrow_Text_2:
# 204 "data/maps/SofosCity/scripts.pory"
	.string "Grr, this darn Murkrow is gonna make me\n"
	.string "lose it! Why, why does it enjoy making me\l"
	.string "angry?!$"

SofosCity_EventScript_Murkrow_Text_0:
# 214 "data/maps/SofosCity/scripts.pory"
	.string "Murkrow$"

SofosCity_EventScript_Murkrow_Text_1:
# 216 "data/maps/SofosCity/scripts.pory"
	.string "Kekekehehe!$"

SofosCity_EventScript_LostConstructionWorker_Text_0:
# 227 "data/maps/SofosCity/scripts.pory"
	.string "Worker$"

SofosCity_EventScript_LostConstructionWorker_Text_1:
# 228 "data/maps/SofosCity/scripts.pory"
	.string "Erm... hmm... I was called to Sofos City\n"
	.string "for a maintenance job, but I'm already\l"
	.string "lost! This must be the biggest city in\l"
	.string "the whole region!$"

SofosCity_EventScript_StrategicCamper_Text_0:
# 243 "data/maps/SofosCity/scripts.pory"
	.string "Camper$"

SofosCity_EventScript_StrategicCamper_Text_1:
# 244 "data/maps/SofosCity/scripts.pory"
	.string "Alolan Raichu is the master of battle\n"
	.string "terrain. It's signature ability, Surge\l"
	.string "Surfer, summons and electric terrain\l"
	.string "and increases it's speed. Strategy is\l"
	.string "all about changing the battlefield to\l"
	.string "your advantage!$"

SofosCity_EventScript_StrategicCamper_Text_2:
# 255 "data/maps/SofosCity/scripts.pory"
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
# 264 "data/maps/SofosCity/scripts.pory"
	.string "What's up? Did you find an {COLOR GREEN}Alolan Raichu{COLOR DARK_GRAY}\n"
	.string "and study the ability Surge Surfer for\l"
	.string "me?$"

SofosCity_EventScript_StrategicCamper_Text_4:
# 271 "data/maps/SofosCity/scripts.pory"
	.string "Not yet, huh? It's okay, finding a\n"
	.string "Raichu in the Alolan form isn't common\l"
	.string "in the Ilios Region. I've only ever seen\l"
	.string "one once!\p"
	.string "Come back when you have a {COLOR GREEN}complete\n"
	.string "Pokédex entry for Alolan Raichu{COLOR DARK_GRAY}. I'll\l"
	.string "give you something to improve your\l"
	.string "strategy even more!$"

SofosCity_EventScript_StrategicCamper_ReactToRaichu_Text_0:
# 285 "data/maps/SofosCity/scripts.pory"
	.string "Ahaha, I love it! This data is even more\n"
	.string "impressive than I expected!\p"
	.string "I just won two of these Alolan Raichu\n"
	.string "Dolls in a contest. Here, I want you to\l"
	.string "take one!$"

SofosCity_EventScript_StrategicCamper_ReactToRaichu_Text_1:
# 290 "data/maps/SofosCity/scripts.pory"
	.string "It's a pretty large Doll, so make sure to\n"
	.string "display it on a large Mat with plenty of\l"
	.string "space!$"

SofosCity_EventScript_BeautyNearPokecenter_Text_0:
# 305 "data/maps/SofosCity/scripts.pory"
	.string "Beauty$"

SofosCity_EventScript_BeautyNearPokecenter_Text_1:
# 306 "data/maps/SofosCity/scripts.pory"
	.string "Sofos City is well-known for using\n"
	.string "turquoise-blue roofs on most buildings.\l"
	.string "It gives the city it's own identity.\p"
	.string "Of course, those are only on the modern\n"
	.string "buildings. The ruins of the Acropolis\l"
	.string "Temple to the north were made of\l"
	.string "shining marble!$"

SofosCity_EventScript_ArtistPlayingChess_Text_0:
# 316 "data/maps/SofosCity/scripts.pory"
	.string "Artist$"

SofosCity_EventScript_ArtistPlayingChess_Text_1:
# 317 "data/maps/SofosCity/scripts.pory"
	.string "Ehehe, I know! I'll drive my Chesnaught\n"
	.string "forward and take their best pieces!$"

SofosCity_EventScript_OldWomanPlayingChess_Text_0:
# 329 "data/maps/SofosCity/scripts.pory"
	.string "Old Woman$"

SofosCity_EventScript_OldWomanPlayingChess_Text_1:
# 330 "data/maps/SofosCity/scripts.pory"
	.string "Hah! He'll use his Chesnaught piece\n"
	.string "next. That'll put it right in the path of\l"
	.string "my Mudsdale!$"

SofosCity_EventScript_PicnickerRunning_Text_0:
# 342 "data/maps/SofosCity/scripts.pory"
	.string "Tourist$"

SofosCity_EventScript_PicnickerRunning_Text_1:
# 343 "data/maps/SofosCity/scripts.pory"
	.string "Wow wow WOW! This city is so big! I could\n"
	.string "run around forever to see it all!$"

SofosCity_EventScript_OfficerAtCityEdge_Text_0:
# 353 "data/maps/SofosCity/scripts.pory"
	.string "Officer$"

SofosCity_EventScript_OfficerAtCityEdge_Text_1:
# 354 "data/maps/SofosCity/scripts.pory"
	.string "This is the edge of the modern Sofos\n"
	.string "City. Further north is what remains of\l"
	.string "the Acropolis atop the cliffside, which\l"
	.string "is just a cave and a few ruins outside\l"
	.string "of the {COLOR GREEN}Acropolis Temple{COLOR DARK_GRAY}.$"

SofosCity_EventScript_FarmerOnSidewalk_Text_0:
# 364 "data/maps/SofosCity/scripts.pory"
	.string "Farmer$"

SofosCity_EventScript_FarmerOnSidewalk_Text_1:
# 365 "data/maps/SofosCity/scripts.pory"
	.string "I'd run a farm near the ruins up on the\n"
	.string "Acropolis if I could, but the land is\l"
	.string "riddled with stone and marble\l"
	.string "structures. It's okay, though. I\l"
	.string "suppose it's important to preserve and\l"
	.string "understand our history.$"

SofosCity_EventScript_Rockruff_Text_0:
# 375 "data/maps/SofosCity/scripts.pory"
	.string "Rockruff$"

SofosCity_EventScript_Rockruff_Text_1:
# 377 "data/maps/SofosCity/scripts.pory"
	.string "Bwuff wuff!$"

SofosCity_EventScript_WomanWithRockruff_Text_0:
# 388 "data/maps/SofosCity/scripts.pory"
	.string "Woman$"

SofosCity_EventScript_WomanWithRockruff_Text_1:
# 389 "data/maps/SofosCity/scripts.pory"
	.string "I'm taking my Rockruff on a walk. She\n"
	.string "likes to stop and take a break after\l"
	.string "visiting the Pokémon Center.$"

SofosCity_EventScript_FishermanPlayingChess_Text_0:
# 399 "data/maps/SofosCity/scripts.pory"
	.string "Fisherman$"

SofosCity_EventScript_FishermanPlayingChess_Text_1:
# 400 "data/maps/SofosCity/scripts.pory"
	.string "I formed a wall with my Zigzagoon\n"
	.string "pieces, so that'll protect my Celebi. If\l"
	.string "they take the Celebi piece, I lose the\l"
	.string "game!$"

SofosCity_EventScript_GirlPlayingChess_Text_0:
# 413 "data/maps/SofosCity/scripts.pory"
	.string "Each piece can move in different ways.\n"
	.string "Chesnaught moves in straight lines,\l"
	.string "Mudsdale moves in L-shapes, and Xatu\l"
	.string "can only move diagonally. The endless\l"
	.string "strategies make this the most popular\l"
	.string "game in the city!$"

SofosCity_EventScript_HexManiacSeeingLights_Text_0:
# 425 "data/maps/SofosCity/scripts.pory"
	.string "Hex Maniac$"

SofosCity_EventScript_HexManiacSeeingLights_Text_1:
# 426 "data/maps/SofosCity/scripts.pory"
	.string "The lights all around the city keep wild\n"
	.string "Pokémon at bay. But once you're outside\l"
	.string "the walls, you're in their territory.$"

SofosCity_EventScript_CooltrainerThinkingStrategy_Text_0:
# 436 "data/maps/SofosCity/scripts.pory"
	.string "Cooltrainer$"

SofosCity_EventScript_CooltrainerThinkingStrategy_Text_1:
# 437 "data/maps/SofosCity/scripts.pory"
	.string "Sofos City is famous for innovating on\n"
	.string "Pokémon battle strategy. The Gym\l"
	.string "Leader chooses to use strategic\l"
	.string "Pokémon, instead of being restricted to\l"
	.string "a single type.$"

SofosCity_EventScript_OldManAtCliff_Text_0:
# 447 "data/maps/SofosCity/scripts.pory"
	.string "Old Man$"

SofosCity_EventScript_OldManAtCliff_Text_1:
# 448 "data/maps/SofosCity/scripts.pory"
	.string "This used to be a bustling beach, but\n"
	.string "rising seas and erosion have reduced it\l"
	.string "to this. Bleached shells and receding\l"
	.string "sands... these changes aren't natural.$"

SofosCity_EventScript_Clauncher_Text_0:
# 457 "data/maps/SofosCity/scripts.pory"
	.string "Clauncher$"

SofosCity_EventScript_Clauncher_Text_1:
# 459 "data/maps/SofosCity/scripts.pory"
	.string "Kss kss!$"

SofosCity_EventScript_ManOutsideBattlePavilion_Text_0:
# 470 "data/maps/SofosCity/scripts.pory"
	.string "Man$"

SofosCity_EventScript_ManOutsideBattlePavilion_Text_1:
# 475 "data/maps/SofosCity/scripts.pory"
	.string "There are a few other Battle Pavilions\n"
	.string "scattered around the Ilios Region. Each\l"
	.string "has different rules and strategies to\l"
	.string "win!$"

SofosCity_EventScript_ManOutsideBattlePavilion_Text_2:
# 485 "data/maps/SofosCity/scripts.pory"
	.string "See that building with the green roof\n"
	.string "topped with Poké balls? That's the\l"
	.string "{COLOR GREEN}Sofos City Battle Pavilion{COLOR DARK_GRAY}. It's a\l"
	.string "popular destination for Trainers\l"
	.string "obsessed with strategy.\p"
	.string "Hey, you're new here, right? Go {COLOR GREEN}try the\n"
	.string "Battle Pavilion{COLOR DARK_GRAY} and let me know how it\l"
	.string "went!$"

SofosCity_EventScript_ManOutsideBattlePavilion_Text_3:
# 493 "data/maps/SofosCity/scripts.pory"
	.string "Chaire! Have you tried participating in\n"
	.string "the {COLOR GREEN}Sofos City Battle Pavilion{COLOR DARK_GRAY} yet?$"

SofosCity_EventScript_ManOutsideBattlePavilion_Text_4:
# 501 "data/maps/SofosCity/scripts.pory"
	.string "Opa! You did it! Did you have fun?\n"
	.string "Right, right, your reward. I hope you\l"
	.string "continue to participate in Battle\l"
	.string "Pavilions across Ilios!$"

SofosCity_EventScript_ManAdmiringTowerRuin_Text_0:
# 517 "data/maps/SofosCity/scripts.pory"
	.string "Curious Man$"

SofosCity_EventScript_ManAdmiringTowerRuin_Text_1:
# 518 "data/maps/SofosCity/scripts.pory"
	.string "There are ruins all over the Ilios\n"
	.string "Region, but those around Sofos City are\l"
	.string "unique. In the {COLOR GREEN}Acropolis Temple{COLOR DARK_GRAY} here,\l"
	.string "people still pay respect to the\l"
	.string "{COLOR GREEN}Elemental Beasts Trio{COLOR DARK_GRAY}. Most other\l"
	.string "ancient sites are pretty much\l"
	.string "abandoned!$"

SofosCity_EventScript_TogaGirlsAtAcropolis_Text_0:
# 528 "data/maps/SofosCity/scripts.pory"
	.string "Toga Woman$"

SofosCity_EventScript_TogaGirlsAtAcropolis_Text_1:
# 529 "data/maps/SofosCity/scripts.pory"
	.string "Welcome to the Sofos City {COLOR GREEN}Acropolis\n"
	.string "Temple{COLOR DARK_GRAY}. Feel free to pay your respects\l"
	.string "here.$"

SofosCIty_EventScript_BugCatcher_Text_0:
# 539 "data/maps/SofosCity/scripts.pory"
	.string "Bug Catcher$"

SofosCIty_EventScript_BugCatcher_Text_1:
# 540 "data/maps/SofosCity/scripts.pory"
	.string "I live in the center of Sofos City, but I\n"
	.string "walk out here every day to look for\l"
	.string "Pokémon! I love being so close to the\l"
	.string "forest.$"

SofosCity_EventScript_LassInTropics_Text_0:
# 550 "data/maps/SofosCity/scripts.pory"
	.string "Lass$"

SofosCity_EventScript_LassInTropics_Text_1:
# 551 "data/maps/SofosCity/scripts.pory"
	.string "Not too many people come so far from\n"
	.string "the city walls. Lots of wild Pokémon are\l"
	.string "out here, and plenty of city people\l"
	.string "aren't a fan of that.$"

SofosCity_EventScript_ManByShallows_Text_0:
# 562 "data/maps/SofosCity/scripts.pory"
	.string "I come down here to cool off and watch\n"
	.string "Pokémon swim around. Sometimes, brave\l"
	.string "Pokémon come up into the shallows to\l"
	.string "say hello!$"

SofosCity_EventScript_FatManByCave_Text_0:
# 572 "data/maps/SofosCity/scripts.pory"
	.string "Fat Man$"

SofosCity_EventScript_FatManByCave_Text_1:
# 573 "data/maps/SofosCity/scripts.pory"
	.string "When I was a kid, everyone said to stay\n"
	.string "away from the Satyr's Lair, that small\l"
	.string "cave in the cliffside. I don't believe\l"
	.string "the stories anymore, but... well, I just\l"
	.string "don't want to go in!$"

SofosCity_EventScript_GoodRodFishingGuru_Text_0:
# 583 "data/maps/SofosCity/scripts.pory"
	.string "Fishing Guru$"

SofosCity_EventScript_GoodRodFishingGuru_Text_1:
# 586 "data/maps/SofosCity/scripts.pory"
	.string "Hey! Is that a Pokédex from the Acrisia\n"
	.string "University? I used to visit all the time!\p"
	.string "You've come quite a long way. Here,\n"
	.string "maybe this'll help on your journey.$"

SofosCity_EventScript_GoodRodFishingGuru_Text_2:
# 591 "data/maps/SofosCity/scripts.pory"
	.string "The {COLOR GREEN}Good Rod{COLOR DARK_GRAY} can give you access to a\n"
	.string "wide array of Water-dwelling Pokémon.\l"
	.string "Maybe they can help you handle the\l"
	.string "next Gym Leader!$"

SofosCity_EventScript_GoodRodFishingGuru_Text_3:
# 596 "data/maps/SofosCity/scripts.pory"
	.string "The {COLOR GREEN}Good Rod{COLOR DARK_GRAY} allows you to fish up a\n"
	.string "wide arrow of Water-dwelling Pokémon.\l"
	.string "Hey, you might even find some treasure\l"
	.string "in the water!$"

SofosCity_EventScript_Trainer_SofosCity_Grunt_Text_0:
# 606 "data/maps/SofosCity/scripts.pory"
	.string "Grunt$"

SofosCity_EventScript_Trainer_SofosCity_Grunt_Text_1:
# 607 "data/maps/SofosCity/scripts.pory"
	.string "Well, I guess I'm not the WORST Grunt\n"
	.string "ever. There was that one guy who messed\l"
	.string "up stealing a Pokédex. He lost to some\l"
	.string "new, weak Trainer!$"

SofosCity_EventScript_SwimmerF_Text_0:
# 625 "data/maps/SofosCity/scripts.pory"
	.string "Swimmer$"

SofosCity_EventScript_SwimmerF_Text_1:
# 626 "data/maps/SofosCity/scripts.pory"
	.string "The area around Sofos City is littered\n"
	.string "with rocks in the shallowest parts.\l"
	.string "Most swimmers choose to go further out\l"
	.string "to the east, where the water is deeper\l"
	.string "but relatively safe.$"

SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_0:
# 676 "data/maps/SofosCity/scripts.pory"
	.string "Piraeus$"

SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_1:
# 677 "data/maps/SofosCity/scripts.pory"
	.string "{PLAYER}!! Come on over here!$"

SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_2:
# 705 "data/maps/SofosCity/scripts.pory"
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
# 612 "data/maps/SofosCity/scripts.pory"
	.string "Hold up! I was told to stop anyone from\n"
	.string "getting into {COLOR GREEN}Satyr's Lair{COLOR DARK_GRAY}!$"

SofosCity_Text_Trainer_SofosCity_GruntDefeat::
# 616 "data/maps/SofosCity/scripts.pory"
	.string "Darn. I must be the worst Grunt in the\n"
	.string "history of Team Chimera!$"

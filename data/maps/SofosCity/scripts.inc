SofosCity_MapScripts::
# 2 "data/maps/SofosCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SofosCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SofosCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SofosCity/scripts.pory"
	setflag FLAG_VISITED_SOFOS_CITY
# 4 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_SOFOS_ACROPOLIS_NPCS
# 6 "data/maps/SofosCity/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, SofosCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
SofosCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 12 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 13 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 14 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 15 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 16 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 17 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 18 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 19 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 20 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 21 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 22 "data/maps/SofosCity/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 23 "data/maps/SofosCity/scripts.pory"
	setobjectaswildencounter 49, ENCOUNTER_LAND
# 24 "data/maps/SofosCity/scripts.pory"
	setobjectaswildencounter 50, ENCOUNTER_LAND
# 25 "data/maps/SofosCity/scripts.pory"
	setobjectaswildencounter 51, ENCOUNTER_LAND
# 26 "data/maps/SofosCity/scripts.pory"
	setobjectaswildencounter 52, ENCOUNTER_LAND
# 27 "data/maps/SofosCity/scripts.pory"
	setobjectaswildencounter 53, ENCOUNTER_LAND
# 28 "data/maps/SofosCity/scripts.pory"
	setobjectaswildencounter 54, ENCOUNTER_LAND
# 29 "data/maps/SofosCity/scripts.pory"
	setobjectaswildencounter 55, ENCOUNTER_LAND
# 30 "data/maps/SofosCity/scripts.pory"
	setobjectaswildencounter 56, ENCOUNTER_SURF
	return

SofosCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/SofosCity/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto SofosCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SofosCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 6 "data/maps/SofosCity/scripts.pory"
	goto_if_unset FLAG_HIDE_WEATHER_SOFOS_CITY, SofosCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto SofosCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


SofosCity_EventScript_GameCornerSign::
# 36 "data/maps/SofosCity/scripts.pory"
	lock
# 37 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GameCornerSign_Text_0
# 38 "data/maps/SofosCity/scripts.pory"
	closemessage
# 39 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_SatyrsLairSign::
# 45 "data/maps/SofosCity/scripts.pory"
	lock
# 46 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_SatyrsLairSign_Text_0
# 47 "data/maps/SofosCity/scripts.pory"
	closemessage
# 48 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_BattlePavilionSign::
# 54 "data/maps/SofosCity/scripts.pory"
	lock
# 55 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_BattlePavilionSign_Text_0
# 56 "data/maps/SofosCity/scripts.pory"
	closemessage
# 57 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_GymSign::
# 63 "data/maps/SofosCity/scripts.pory"
	lock
# 64 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GymSign_Text_0
# 65 "data/maps/SofosCity/scripts.pory"
	closemessage
# 66 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_DirectionSign::
# 72 "data/maps/SofosCity/scripts.pory"
	lock
# 73 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_DirectionSign_Text_0
# 74 "data/maps/SofosCity/scripts.pory"
	closemessage
# 75 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ChimeraGruntAtGym1::
# 81 "data/maps/SofosCity/scripts.pory"
	lock
# 82 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ChimeraGruntAtGym1_Text_0
# 83 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ChimeraGruntAtGym1_Text_1
# 84 "data/maps/SofosCity/scripts.pory"
	closemessage
# 85 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ChimeraGruntAtGym2::
# 90 "data/maps/SofosCity/scripts.pory"
	lock
# 91 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ChimeraGruntAtGym1_Text_0
# 92 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ChimeraGruntAtGym2_Text_0
# 93 "data/maps/SofosCity/scripts.pory"
	closemessage
# 94 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ChimeraGruntAtGym3::
# 99 "data/maps/SofosCity/scripts.pory"
	lock
# 100 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ChimeraGruntAtGym1_Text_0
# 101 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ChimeraGruntAtGym3_Text_0
# 102 "data/maps/SofosCity/scripts.pory"
	closemessage
# 103 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ItemStreetVendor::
# 109 "data/maps/SofosCity/scripts.pory"
	lock
# 110 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 111 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ItemStreetVendor_Text_0
# 112 "data/maps/SofosCity/scripts.pory"
	message gText_HowMayIServeYou
# 113 "data/maps/SofosCity/scripts.pory"
	waitmessage
# 114 "data/maps/SofosCity/scripts.pory"
	pokemart SofosCity_ItemStreetVendorShop
# 115 "data/maps/SofosCity/scripts.pory"
	closemessage
# 116 "data/maps/SofosCity/scripts.pory"
	delay 1
# 117 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ItemStreetVendor_Text_0
# 118 "data/maps/SofosCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 119 "data/maps/SofosCity/scripts.pory"
	release
	end


	.align 2
# 122 "data/maps/SofosCity/scripts.pory"
SofosCity_ItemStreetVendorShop:
# 124 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 125 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 126 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 127 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 128 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 129 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_TART_APPLE
# 130 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_NONE

SofosCity_EventScript_DecorStreetVendor::
# 135 "data/maps/SofosCity/scripts.pory"
	lock
# 136 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 137 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ItemStreetVendor_Text_0
# 138 "data/maps/SofosCity/scripts.pory"
	message gText_HowMayIServeYou
# 139 "data/maps/SofosCity/scripts.pory"
	waitmessage
# 140 "data/maps/SofosCity/scripts.pory"
	pokemartdecoration SofosCity_DecorShop
# 141 "data/maps/SofosCity/scripts.pory"
	closemessage
# 142 "data/maps/SofosCity/scripts.pory"
	delay 1
# 143 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ItemStreetVendor_Text_0
# 144 "data/maps/SofosCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 145 "data/maps/SofosCity/scripts.pory"
	release
	end


# 149 "data/maps/SofosCity/scripts.pory"

# 150 "data/maps/SofosCity/scripts.pory"
    .align 2
# 151 "data/maps/SofosCity/scripts.pory"
SofosCity_DecorShop:
# 152 "data/maps/SofosCity/scripts.pory"
    .2byte DECOR_SMALL_DESK
# 153 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_PRETTY_DESK
# 154 "data/maps/SofosCity/scripts.pory"
    .2byte DECOR_SMALL_CHAIR
# 155 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_PRETTY_CHAIR
# 156 "data/maps/SofosCity/scripts.pory"
    .2byte DECOR_SMALL_FLOWER_BOX
# 157 "data/maps/SofosCity/scripts.pory"
    .2byte DECOR_PRETTY_FLOWERS
# 158 "data/maps/SofosCity/scripts.pory"
    .2byte DECOR_FENCE_LENGTH
# 159 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_FENCE_WIDTH
# 160 "data/maps/SofosCity/scripts.pory"
    .2byte DECOR_LARGE_BED
# 161 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_DOLL_SQUARE
# 162 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_GLITTER_MAT
# 163 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_SURF_MAT
# 164 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_THUNDER_MAT
# 165 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_GREEN_POSTER
# 166 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_RED_POSTER
# 167 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_BLUE_POSTER
# 168 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_SUNSET_POSTER
# 169 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_PIKACHU_DOLL
# 170 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_CRABRAWLER_DOLL
# 171 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_TOGEPI_DOLL
# 172 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_MEOWTH_DOLL
# 173 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_STUFFUL_DOLL
# 174 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_BOUNSWEET_DOLL
# 175 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_GRASS_CUSHION
# 176 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_FIRE_CUSHION
# 177 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_WATER_CUSHION
# 178 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_NONE
# 179 "data/maps/SofosCity/scripts.pory"
	release
# 180 "data/maps/SofosCity/scripts.pory"
	end

SofosCity_EventScript_GirlNearVendors::
# 185 "data/maps/SofosCity/scripts.pory"
	lock
# 186 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 187 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_GirlNearVendors_Text_0
# 188 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GirlNearVendors_Text_1
# 189 "data/maps/SofosCity/scripts.pory"
	closemessage
# 190 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_BoyNearFarmersGoods::
# 196 "data/maps/SofosCity/scripts.pory"
	lock
# 197 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 198 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_BoyNearFarmersGoods_Text_0
# 199 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_BoyNearFarmersGoods_Text_1
# 200 "data/maps/SofosCity/scripts.pory"
	closemessage
# 201 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ManWithMurkrow::
# 207 "data/maps/SofosCity/scripts.pory"
	lock
# 208 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 209 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ManWithMurkrow_Text_0
# 210 "data/maps/SofosCity/scripts.pory"
	goto_if_unset FLAG_GOT_TM_TORMENT, SofosCity_EventScript_ManWithMurkrow_2
# 219 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManWithMurkrow_Text_2
# 220 "data/maps/SofosCity/scripts.pory"
	closemessage
SofosCity_EventScript_ManWithMurkrow_1:
# 222 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_ManWithMurkrow_2:
# 212 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManWithMurkrow_Text_1
# 213 "data/maps/SofosCity/scripts.pory"
	closemessage
# 214 "data/maps/SofosCity/scripts.pory"
	giveitem ITEM_TM_TORMENT
# 215 "data/maps/SofosCity/scripts.pory"
	setflag FLAG_GOT_TM_TORMENT
	goto SofosCity_EventScript_ManWithMurkrow_1


SofosCity_EventScript_Murkrow::
# 227 "data/maps/SofosCity/scripts.pory"
	lock
# 228 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 229 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_Murkrow_Text_0
# 230 "data/maps/SofosCity/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 231 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_Murkrow_Text_1
# 232 "data/maps/SofosCity/scripts.pory"
	waitmoncry
# 233 "data/maps/SofosCity/scripts.pory"
	closemessage
# 234 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_LostConstructionWorker::
# 240 "data/maps/SofosCity/scripts.pory"
	lock
# 241 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 242 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_LostConstructionWorker_Text_0
# 243 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_LostConstructionWorker_Text_1
# 244 "data/maps/SofosCity/scripts.pory"
	closemessage
# 245 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_StrategicCamper::
# 251 "data/maps/SofosCity/scripts.pory"
	lock
# 252 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 255 "data/maps/SofosCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_SHOW_CAMPER_ALOLAN_RAICHU
# 256 "data/maps/SofosCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SofosCity_EventScript_StrategicCamper_2
# 266 "data/maps/SofosCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_SHOW_CAMPER_ALOLAN_RAICHU
# 267 "data/maps/SofosCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_EventScript_StrategicCamper_5
# 278 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 279 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_Text_3
# 280 "data/maps/SofosCity/scripts.pory"
	closemessage
# 282 "data/maps/SofosCity/scripts.pory"
	checkforspecies SPECIES_RAICHU_ALOLAN, OPEN_PARTY_SCREEN, SofosCity_EventScript_StrategicCamper_ReactToRaichu
# 285 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 286 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_Text_4
# 287 "data/maps/SofosCity/scripts.pory"
	closemessage
SofosCity_EventScript_StrategicCamper_4:
# 289 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_StrategicCamper_2:
# 258 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 259 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_Text_1
# 260 "data/maps/SofosCity/scripts.pory"
	closemessage
# 261 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_StrategicCamper_5:
# 269 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 270 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_Text_2
# 271 "data/maps/SofosCity/scripts.pory"
	closemessage
# 273 "data/maps/SofosCity/scripts.pory"
	delay 20
# 274 "data/maps/SofosCity/scripts.pory"
	startquest QUEST_SHOW_CAMPER_ALOLAN_RAICHU
	goto SofosCity_EventScript_StrategicCamper_4


SofosCity_EventScript_StrategicCamper_ReactToRaichu::
# 294 "data/maps/SofosCity/scripts.pory"
	lock
# 295 "data/maps/SofosCity/scripts.pory"
	delay 20
# 296 "data/maps/SofosCity/scripts.pory"
	applymovement 26, Common_Movement_Heart
# 297 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 298 "data/maps/SofosCity/scripts.pory"
	delay 10
# 299 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 300 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_ReactToRaichu_Text_0
# 301 "data/maps/SofosCity/scripts.pory"
	closemessage
# 302 "data/maps/SofosCity/scripts.pory"
	givedecoration DECOR_RAICHU_DOLL
# 303 "data/maps/SofosCity/scripts.pory"
	delay 5
# 304 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 305 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_ReactToRaichu_Text_1
# 306 "data/maps/SofosCity/scripts.pory"
	closemessage
# 308 "data/maps/SofosCity/scripts.pory"
	delay 20
# 309 "data/maps/SofosCity/scripts.pory"
	completequest QUEST_SHOW_CAMPER_ALOLAN_RAICHU
# 311 "data/maps/SofosCity/scripts.pory"
	closemessage
# 312 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_BeautyNearPokecenter::
# 318 "data/maps/SofosCity/scripts.pory"
	lock
# 319 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 320 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_BeautyNearPokecenter_Text_0
# 321 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_BeautyNearPokecenter_Text_1
# 322 "data/maps/SofosCity/scripts.pory"
	closemessage
# 323 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ArtistPlayingChess::
# 329 "data/maps/SofosCity/scripts.pory"
	lock
# 330 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 331 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ArtistPlayingChess_Text_0
# 332 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ArtistPlayingChess_Text_1
# 333 "data/maps/SofosCity/scripts.pory"
	closemessage
# 334 "data/maps/SofosCity/scripts.pory"
	applymovement 28, Common_Movement_FaceLeft
# 335 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 336 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_OldWomanPlayingChess::
# 342 "data/maps/SofosCity/scripts.pory"
	lock
# 343 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 344 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_OldWomanPlayingChess_Text_0
# 345 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_OldWomanPlayingChess_Text_1
# 346 "data/maps/SofosCity/scripts.pory"
	closemessage
# 347 "data/maps/SofosCity/scripts.pory"
	applymovement 29, Common_Movement_FaceRight
# 348 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 349 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_PicnickerRunning::
# 355 "data/maps/SofosCity/scripts.pory"
	lock
# 356 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 357 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_PicnickerRunning_Text_0
# 358 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_PicnickerRunning_Text_1
# 359 "data/maps/SofosCity/scripts.pory"
	closemessage
# 360 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_OfficerAtCityEdge::
# 366 "data/maps/SofosCity/scripts.pory"
	lock
# 367 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 368 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_OfficerAtCityEdge_Text_0
# 369 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_OfficerAtCityEdge_Text_1
# 370 "data/maps/SofosCity/scripts.pory"
	closemessage
# 371 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_FarmerOnSidewalk::
# 377 "data/maps/SofosCity/scripts.pory"
	lock
# 378 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 379 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_FarmerOnSidewalk_Text_0
# 380 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_FarmerOnSidewalk_Text_1
# 381 "data/maps/SofosCity/scripts.pory"
	closemessage
# 382 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_Rockruff::
# 388 "data/maps/SofosCity/scripts.pory"
	lock
# 389 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 390 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_Rockruff_Text_0
# 391 "data/maps/SofosCity/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 392 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_Rockruff_Text_1
# 393 "data/maps/SofosCity/scripts.pory"
	waitmoncry
# 394 "data/maps/SofosCity/scripts.pory"
	closemessage
# 395 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_WomanWithRockruff::
# 401 "data/maps/SofosCity/scripts.pory"
	lock
# 402 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 403 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_WomanWithRockruff_Text_0
# 404 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_WomanWithRockruff_Text_1
# 405 "data/maps/SofosCity/scripts.pory"
	closemessage
# 406 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_FishermanPlayingChess::
# 412 "data/maps/SofosCity/scripts.pory"
	lock
# 413 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 414 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_FishermanPlayingChess_Text_0
# 415 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_FishermanPlayingChess_Text_1
# 416 "data/maps/SofosCity/scripts.pory"
	closemessage
# 417 "data/maps/SofosCity/scripts.pory"
	applymovement 35, Common_Movement_FaceRight
# 418 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 419 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_GirlPlayingChess::
# 425 "data/maps/SofosCity/scripts.pory"
	lock
# 426 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 427 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_GirlNearVendors_Text_0
# 428 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GirlPlayingChess_Text_0
# 429 "data/maps/SofosCity/scripts.pory"
	closemessage
# 430 "data/maps/SofosCity/scripts.pory"
	applymovement 36, Common_Movement_FaceLeft
# 431 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 432 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_HexManiacSeeingLights::
# 438 "data/maps/SofosCity/scripts.pory"
	lock
# 439 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 440 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_HexManiacSeeingLights_Text_0
# 441 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_HexManiacSeeingLights_Text_1
# 442 "data/maps/SofosCity/scripts.pory"
	closemessage
# 443 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_CooltrainerThinkingStrategy::
# 449 "data/maps/SofosCity/scripts.pory"
	lock
# 450 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 451 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_CooltrainerThinkingStrategy_Text_0
# 452 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_CooltrainerThinkingStrategy_Text_1
# 453 "data/maps/SofosCity/scripts.pory"
	closemessage
# 454 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_OldManAtCliff::
# 460 "data/maps/SofosCity/scripts.pory"
	lock
# 461 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 462 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_OldManAtCliff_Text_0
# 463 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_OldManAtCliff_Text_1
# 464 "data/maps/SofosCity/scripts.pory"
	closemessage
# 465 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_Clauncher::
# 470 "data/maps/SofosCity/scripts.pory"
	lock
# 471 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 472 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_Clauncher_Text_0
# 473 "data/maps/SofosCity/scripts.pory"
	playmoncry SPECIES_CLAUNCHER, CRY_MODE_NORMAL
# 474 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_Clauncher_Text_1
# 475 "data/maps/SofosCity/scripts.pory"
	waitmoncry
# 476 "data/maps/SofosCity/scripts.pory"
	closemessage
# 477 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ManOutsideBattlePavilion::
# 483 "data/maps/SofosCity/scripts.pory"
	lock
# 484 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 485 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ManOutsideBattlePavilion_Text_0
# 487 "data/maps/SofosCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_TRY_SOFOS_BATTLE_PAVILION
# 488 "data/maps/SofosCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SofosCity_EventScript_ManOutsideBattlePavilion_2
# 497 "data/maps/SofosCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_TRY_SOFOS_BATTLE_PAVILION
# 498 "data/maps/SofosCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_EventScript_ManOutsideBattlePavilion_4
# 508 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManOutsideBattlePavilion_Text_3
# 509 "data/maps/SofosCity/scripts.pory"
	closemessage
# 511 "data/maps/SofosCity/scripts.pory"
	delay 30
# 513 "data/maps/SofosCity/scripts.pory"
	goto_if_set FLAG_PLAYED_IN_SOFOS_BATTLE_PAVILION, SofosCity_EventScript_ManOutsideBattlePavilion_7
	return

SofosCity_EventScript_ManOutsideBattlePavilion_2:
# 490 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManOutsideBattlePavilion_Text_1
# 491 "data/maps/SofosCity/scripts.pory"
	closemessage
# 492 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_ManOutsideBattlePavilion_4:
# 500 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManOutsideBattlePavilion_Text_2
# 501 "data/maps/SofosCity/scripts.pory"
	closemessage
# 503 "data/maps/SofosCity/scripts.pory"
	delay 20
# 504 "data/maps/SofosCity/scripts.pory"
	startquest QUEST_TRY_SOFOS_BATTLE_PAVILION
	return

SofosCity_EventScript_ManOutsideBattlePavilion_7:
# 515 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ManOutsideBattlePavilion_Text_0
# 516 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManOutsideBattlePavilion_Text_4
# 517 "data/maps/SofosCity/scripts.pory"
	closemessage
# 518 "data/maps/SofosCity/scripts.pory"
	delay 5
# 519 "data/maps/SofosCity/scripts.pory"
	giveitem ITEM_EXP_CANDY_M, 2
# 521 "data/maps/SofosCity/scripts.pory"
	delay 20
# 522 "data/maps/SofosCity/scripts.pory"
	completequest QUEST_TRY_SOFOS_BATTLE_PAVILION
	return


SofosCity_EventScript_ManAdmiringTowerRuin::
# 530 "data/maps/SofosCity/scripts.pory"
	lock
# 531 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 532 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ManAdmiringTowerRuin_Text_0
# 533 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManAdmiringTowerRuin_Text_1
# 534 "data/maps/SofosCity/scripts.pory"
	closemessage
# 535 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_TogaGirlsAtAcropolis::
# 541 "data/maps/SofosCity/scripts.pory"
	lock
# 542 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 543 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_TogaGirlsAtAcropolis_Text_0
# 544 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_TogaGirlsAtAcropolis_Text_1
# 545 "data/maps/SofosCity/scripts.pory"
	closemessage
# 546 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCIty_EventScript_BugCatcher::
# 552 "data/maps/SofosCity/scripts.pory"
	lock
# 553 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 554 "data/maps/SofosCity/scripts.pory"
	speakername SofosCIty_EventScript_BugCatcher_Text_0
# 555 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCIty_EventScript_BugCatcher_Text_1
# 556 "data/maps/SofosCity/scripts.pory"
	closemessage
# 557 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_LassInTropics::
# 563 "data/maps/SofosCity/scripts.pory"
	lock
# 564 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 565 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_LassInTropics_Text_0
# 566 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_LassInTropics_Text_1
# 567 "data/maps/SofosCity/scripts.pory"
	closemessage
# 568 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ManByShallows::
# 574 "data/maps/SofosCity/scripts.pory"
	lock
# 575 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 576 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_BoyNearFarmersGoods_Text_0
# 577 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManByShallows_Text_0
# 578 "data/maps/SofosCity/scripts.pory"
	closemessage
# 579 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_FatManByCave::
# 585 "data/maps/SofosCity/scripts.pory"
	lock
# 586 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 587 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_FatManByCave_Text_0
# 588 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_FatManByCave_Text_1
# 589 "data/maps/SofosCity/scripts.pory"
	closemessage
# 590 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_GoodRodFishingGuru::
# 596 "data/maps/SofosCity/scripts.pory"
	lock
# 597 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 598 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_GoodRodFishingGuru_Text_0
# 599 "data/maps/SofosCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GOOD_ROD, SofosCity_EventScript_GoodRodFishingGuru_2
# 611 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GoodRodFishingGuru_Text_3
# 612 "data/maps/SofosCity/scripts.pory"
	closemessage
SofosCity_EventScript_GoodRodFishingGuru_1:
# 614 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_GoodRodFishingGuru_2:
# 601 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GoodRodFishingGuru_Text_1
# 602 "data/maps/SofosCity/scripts.pory"
	closemessage
# 603 "data/maps/SofosCity/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 604 "data/maps/SofosCity/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 605 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_GoodRodFishingGuru_Text_0
# 606 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GoodRodFishingGuru_Text_2
# 607 "data/maps/SofosCity/scripts.pory"
	closemessage
	goto SofosCity_EventScript_GoodRodFishingGuru_1


SofosCity_EventScript_Trainer_SofosCity_Grunt::
# 620 "data/maps/SofosCity/scripts.pory"
	trainerbattle_single TRAINER_SOFOS_CITY_CHIMERA_GRUNT, SofosCity_Text_Trainer_SofosCity_GruntIntro, SofosCity_Text_Trainer_SofosCity_GruntDefeat
# 621 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_Trainer_SofosCity_Grunt_Text_0
# 622 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_Trainer_SofosCity_Grunt_Text_1
# 623 "data/maps/SofosCity/scripts.pory"
	closemessage
# 624 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_SwimmerF::
# 638 "data/maps/SofosCity/scripts.pory"
	lock
# 639 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 640 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_SwimmerF_Text_0
# 641 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_SwimmerF_Text_1
# 642 "data/maps/SofosCity/scripts.pory"
	closemessage
# 643 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_Trigger_PiraeusKiposTownTrigger0::
# 649 "data/maps/SofosCity/scripts.pory"
	setvar VAR_TEMP_0, 0
# 650 "data/maps/SofosCity/scripts.pory"
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent
# 651 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_Trigger_PiraeusKiposTownTrigger1::
# 656 "data/maps/SofosCity/scripts.pory"
	setvar VAR_TEMP_0, 1
# 657 "data/maps/SofosCity/scripts.pory"
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent
# 658 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_Trigger_PiraeusKiposTownTrigger2::
# 663 "data/maps/SofosCity/scripts.pory"
	setvar VAR_TEMP_0, 2
# 664 "data/maps/SofosCity/scripts.pory"
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent
# 665 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_Trigger_PiraeusKiposTownTrigger3::
# 670 "data/maps/SofosCity/scripts.pory"
	setvar VAR_TEMP_0, 3
# 671 "data/maps/SofosCity/scripts.pory"
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent
# 672 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_Trigger_PiraeusKiposTownTrigger4::
# 677 "data/maps/SofosCity/scripts.pory"
	setvar VAR_TEMP_0, 4
# 678 "data/maps/SofosCity/scripts.pory"
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent
# 679 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_TryPiraeusKiposTownEvent::
# 685 "data/maps/SofosCity/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SofosCity_EventScript_TryPiraeusKiposTownEvent_2
SofosCity_EventScript_TryPiraeusKiposTownEvent_1:
# 730 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_TryPiraeusKiposTownEvent_2:
# 687 "data/maps/SofosCity/scripts.pory"
	lockall
# 689 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 690 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 691 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_0
# 692 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_1
# 693 "data/maps/SofosCity/scripts.pory"
	closemessage
# 695 "data/maps/SofosCity/scripts.pory"
	applymovement 60, Common_Movement_FaceUp
# 696 "data/maps/SofosCity/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq SofosCity_EventScript_TryPiraeusKiposTownEvent_5
# 700 "data/maps/SofosCity/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SofosCity_EventScript_TryPiraeusKiposTownEvent_6
# 704 "data/maps/SofosCity/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq SofosCity_EventScript_TryPiraeusKiposTownEvent_7
# 708 "data/maps/SofosCity/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq SofosCity_EventScript_TryPiraeusKiposTownEvent_8
# 714 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SofosCity_Movement_ApproachPiraeus4
SofosCity_EventScript_TryPiraeusKiposTownEvent_4:
# 716 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 717 "data/maps/SofosCity/scripts.pory"
	delay 10
# 719 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_0
# 720 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_2
# 721 "data/maps/SofosCity/scripts.pory"
	closemessage
# 722 "data/maps/SofosCity/scripts.pory"
	delay 20
# 723 "data/maps/SofosCity/scripts.pory"
	warp MAP_KIPOS_TOWN, 18, 22
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent_1

SofosCity_EventScript_TryPiraeusKiposTownEvent_5:
# 698 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SofosCity_Movement_ApproachPiraeus0
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent_4

SofosCity_EventScript_TryPiraeusKiposTownEvent_6:
# 702 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SofosCity_Movement_ApproachPiraeus1
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent_4

SofosCity_EventScript_TryPiraeusKiposTownEvent_7:
# 706 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SofosCity_Movement_ApproachPiraeus2
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent_4

SofosCity_EventScript_TryPiraeusKiposTownEvent_8:
# 710 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SofosCity_Movement_ApproachPiraeus3
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent_4


# 734 "data/maps/SofosCity/scripts.pory"
SofosCity_Movement_ApproachPiraeus0:
# 736 "data/maps/SofosCity/scripts.pory"
	walk_down
# 737 "data/maps/SofosCity/scripts.pory"
	walk_right
# 737 "data/maps/SofosCity/scripts.pory"
	walk_right
# 738 "data/maps/SofosCity/scripts.pory"
	walk_down
# 738 "data/maps/SofosCity/scripts.pory"
	walk_down
# 738 "data/maps/SofosCity/scripts.pory"
	walk_down
# 738 "data/maps/SofosCity/scripts.pory"
	walk_down
# 739 "data/maps/SofosCity/scripts.pory"
	step_end

# 741 "data/maps/SofosCity/scripts.pory"
SofosCity_Movement_ApproachPiraeus1:
# 743 "data/maps/SofosCity/scripts.pory"
	walk_down
# 744 "data/maps/SofosCity/scripts.pory"
	walk_right
# 745 "data/maps/SofosCity/scripts.pory"
	walk_down
# 745 "data/maps/SofosCity/scripts.pory"
	walk_down
# 745 "data/maps/SofosCity/scripts.pory"
	walk_down
# 745 "data/maps/SofosCity/scripts.pory"
	walk_down
# 746 "data/maps/SofosCity/scripts.pory"
	step_end

# 748 "data/maps/SofosCity/scripts.pory"
SofosCity_Movement_ApproachPiraeus2:
# 750 "data/maps/SofosCity/scripts.pory"
	walk_down
# 750 "data/maps/SofosCity/scripts.pory"
	walk_down
# 750 "data/maps/SofosCity/scripts.pory"
	walk_down
# 750 "data/maps/SofosCity/scripts.pory"
	walk_down
# 750 "data/maps/SofosCity/scripts.pory"
	walk_down
# 751 "data/maps/SofosCity/scripts.pory"
	step_end

# 753 "data/maps/SofosCity/scripts.pory"
SofosCity_Movement_ApproachPiraeus3:
# 755 "data/maps/SofosCity/scripts.pory"
	walk_down
# 756 "data/maps/SofosCity/scripts.pory"
	walk_left
# 757 "data/maps/SofosCity/scripts.pory"
	walk_down
# 757 "data/maps/SofosCity/scripts.pory"
	walk_down
# 757 "data/maps/SofosCity/scripts.pory"
	walk_down
# 757 "data/maps/SofosCity/scripts.pory"
	walk_down
# 758 "data/maps/SofosCity/scripts.pory"
	step_end

# 760 "data/maps/SofosCity/scripts.pory"
SofosCity_Movement_ApproachPiraeus4:
# 762 "data/maps/SofosCity/scripts.pory"
	walk_down
# 763 "data/maps/SofosCity/scripts.pory"
	walk_left
# 763 "data/maps/SofosCity/scripts.pory"
	walk_left
# 764 "data/maps/SofosCity/scripts.pory"
	walk_down
# 764 "data/maps/SofosCity/scripts.pory"
	walk_down
# 764 "data/maps/SofosCity/scripts.pory"
	walk_down
# 764 "data/maps/SofosCity/scripts.pory"
	walk_down
# 765 "data/maps/SofosCity/scripts.pory"
	step_end

SofosCity_EventScript_GameCornerSign_Text_0:
# 37 "data/maps/SofosCity/scripts.pory"
	.string "Sofos City Game Corner\n"
	.string "Play Pinball, Get Prizes!$"

SofosCity_EventScript_SatyrsLairSign_Text_0:
# 46 "data/maps/SofosCity/scripts.pory"
	.string "Satyr's Lair\n"
	.string "The Legendary Cave of Ilios\p"
	.string "According to classical myth, the first\n"
	.string "Pokémon Trainers of Ilios gathered\l"
	.string "here to share their power and discover\l"
	.string "new ways to train their Pokémon. If\l"
	.string "these stories can be believed, {COLOR GREEN}Mega\l"
	.string "Evolution{COLOR DARK_GRAY} was first used in Ilios in this\l"
	.string "cave!$"

SofosCity_EventScript_BattlePavilionSign_Text_0:
# 55 "data/maps/SofosCity/scripts.pory"
	.string "Sofos City Battle Pavilion\n"
	.string "Learn, Adapt, and Win!$"

SofosCity_EventScript_GymSign_Text_0:
# 64 "data/maps/SofosCity/scripts.pory"
	.string "Gym Leader: Terpsikore\n"
	.string "The Harmonious Muse of Voice and Dance$"

SofosCity_EventScript_DirectionSign_Text_0:
# 73 "data/maps/SofosCity/scripts.pory"
	.string "Sofos City\n"
	.string "A Home For All\p"
	.string "{LEFT_ARROW} Asfal Hills\n"
	.string "Sea of Asteri {RIGHT_ARROW}$"

SofosCity_EventScript_ChimeraGruntAtGym1_Text_0:
# 82 "data/maps/SofosCity/scripts.pory"
	.string "Chimera Grunt$"

SofosCity_EventScript_ChimeraGruntAtGym1_Text_1:
# 83 "data/maps/SofosCity/scripts.pory"
	.string "Come on, let us in! We know the {COLOR GREEN}Gym\n"
	.string "Leader isn't here{COLOR DARK_GRAY}! We're gonna take all\l"
	.string "the Pokémon whether you like it or not!$"

SofosCity_EventScript_ChimeraGruntAtGym2_Text_0:
# 92 "data/maps/SofosCity/scripts.pory"
	.string "Get out of the way, you old geezer!\n"
	.string "We've got even more {COLOR GREEN}Team Chimera Grunts{COLOR DARK_GRAY}\l"
	.string "in {COLOR GREEN}Satyr's Lair, the cave north of Sofos\l"
	.string "City{COLOR DARK_GRAY}! We'll come down in force and break\l"
	.string "the walls down!$"

SofosCity_EventScript_ChimeraGruntAtGym3_Text_0:
# 101 "data/maps/SofosCity/scripts.pory"
	.string "Bwahaha, the Gym is just about\n"
	.string "defenseless now that the Gym Leader is\l"
	.string "{COLOR GREEN}distracted by the Grunts in Satyr's\l"
	.string "Lair{COLOR DARK_GRAY}! Let us in!$"

SofosCity_EventScript_ItemStreetVendor_Text_0:
# 111 "data/maps/SofosCity/scripts.pory"
	.string "Street Vendor$"

SofosCity_EventScript_GirlNearVendors_Text_0:
# 187 "data/maps/SofosCity/scripts.pory"
	.string "Girl$"

SofosCity_EventScript_GirlNearVendors_Text_1:
# 188 "data/maps/SofosCity/scripts.pory"
	.string "Everything sold by these Street\n"
	.string "Vendors are made or grown right around\l"
	.string "Sofos City! It helps keep locals in\l"
	.string "business.$"

SofosCity_EventScript_BoyNearFarmersGoods_Text_0:
# 198 "data/maps/SofosCity/scripts.pory"
	.string "Athlete$"

SofosCity_EventScript_BoyNearFarmersGoods_Text_1:
# 199 "data/maps/SofosCity/scripts.pory"
	.string "Mmm, locally-grown food is the best! My\n"
	.string "workouts go 10x better when I buy my\l"
	.string "snacks from here.$"

SofosCity_EventScript_ManWithMurkrow_Text_0:
# 209 "data/maps/SofosCity/scripts.pory"
	.string "Angry Man$"

SofosCity_EventScript_ManWithMurkrow_Text_1:
# 212 "data/maps/SofosCity/scripts.pory"
	.string "Murkrow... Murkrow! Come on, work with\n"
	.string "me!\p"
	.string "Argh, I can't do it anymore! I was going\n"
	.string "to teach Murkrow this move, but it looks\l"
	.string "like it has it mastered. Take it and\l"
	.string "scram!$"

SofosCity_EventScript_ManWithMurkrow_Text_2:
# 219 "data/maps/SofosCity/scripts.pory"
	.string "Grr, this darn Murkrow is gonna make me\n"
	.string "lose it! Why, why does it enjoy making me\l"
	.string "angry?!$"

SofosCity_EventScript_Murkrow_Text_0:
# 229 "data/maps/SofosCity/scripts.pory"
	.string "Murkrow$"

SofosCity_EventScript_Murkrow_Text_1:
# 231 "data/maps/SofosCity/scripts.pory"
	.string "Kekekehehe!$"

SofosCity_EventScript_LostConstructionWorker_Text_0:
# 242 "data/maps/SofosCity/scripts.pory"
	.string "Worker$"

SofosCity_EventScript_LostConstructionWorker_Text_1:
# 243 "data/maps/SofosCity/scripts.pory"
	.string "Erm... hmm... I was called to Sofos City\n"
	.string "for a maintenance job, but I'm already\l"
	.string "lost! This must be the biggest city in\l"
	.string "the whole region!$"

SofosCity_EventScript_StrategicCamper_Text_0:
# 258 "data/maps/SofosCity/scripts.pory"
	.string "Camper$"

SofosCity_EventScript_StrategicCamper_Text_1:
# 259 "data/maps/SofosCity/scripts.pory"
	.string "Alolan Raichu is the master of battle\n"
	.string "terrain. It's signature ability, Surge\l"
	.string "Surfer, summons and electric terrain\l"
	.string "and increases it's speed. Strategy is\l"
	.string "all about changing the battlefield to\l"
	.string "your advantage!$"

SofosCity_EventScript_StrategicCamper_Text_2:
# 270 "data/maps/SofosCity/scripts.pory"
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
# 279 "data/maps/SofosCity/scripts.pory"
	.string "What's up? Did you find an {COLOR GREEN}Alolan Raichu{COLOR DARK_GRAY}\n"
	.string "and study the ability Surge Surfer for\l"
	.string "me?$"

SofosCity_EventScript_StrategicCamper_Text_4:
# 286 "data/maps/SofosCity/scripts.pory"
	.string "Not yet, huh? It's okay, finding a\n"
	.string "Raichu in the Alolan form isn't common\l"
	.string "in the Ilios Region. I've only ever seen\l"
	.string "one once!\p"
	.string "Come back when you have a {COLOR GREEN}complete\n"
	.string "Pokédex entry for Alolan Raichu{COLOR DARK_GRAY}. I'll\l"
	.string "give you something to improve your\l"
	.string "strategy even more!$"

SofosCity_EventScript_StrategicCamper_ReactToRaichu_Text_0:
# 300 "data/maps/SofosCity/scripts.pory"
	.string "Ahaha, I love it! This data is even more\n"
	.string "impressive than I expected!\p"
	.string "I just won two of these Alolan Raichu\n"
	.string "Dolls in a contest. Here, I want you to\l"
	.string "take one!$"

SofosCity_EventScript_StrategicCamper_ReactToRaichu_Text_1:
# 305 "data/maps/SofosCity/scripts.pory"
	.string "It's a pretty large Doll, so make sure to\n"
	.string "display it on a large Mat with plenty of\l"
	.string "space!$"

SofosCity_EventScript_BeautyNearPokecenter_Text_0:
# 320 "data/maps/SofosCity/scripts.pory"
	.string "Beauty$"

SofosCity_EventScript_BeautyNearPokecenter_Text_1:
# 321 "data/maps/SofosCity/scripts.pory"
	.string "Sofos City is well-known for using\n"
	.string "turquoise-blue roofs on most buildings.\l"
	.string "It gives the city it's own identity.\p"
	.string "Of course, those are only on the modern\n"
	.string "buildings. The ruins of the Acropolis\l"
	.string "Temple to the north were made of\l"
	.string "shining marble!$"

SofosCity_EventScript_ArtistPlayingChess_Text_0:
# 331 "data/maps/SofosCity/scripts.pory"
	.string "Artist$"

SofosCity_EventScript_ArtistPlayingChess_Text_1:
# 332 "data/maps/SofosCity/scripts.pory"
	.string "Ehehe, I know! I'll drive my Chesnaught\n"
	.string "forward and take their best pieces!$"

SofosCity_EventScript_OldWomanPlayingChess_Text_0:
# 344 "data/maps/SofosCity/scripts.pory"
	.string "Old Woman$"

SofosCity_EventScript_OldWomanPlayingChess_Text_1:
# 345 "data/maps/SofosCity/scripts.pory"
	.string "Hah! He'll use his Chesnaught piece\n"
	.string "next. That'll put it right in the path of\l"
	.string "my Mudsdale!$"

SofosCity_EventScript_PicnickerRunning_Text_0:
# 357 "data/maps/SofosCity/scripts.pory"
	.string "Tourist$"

SofosCity_EventScript_PicnickerRunning_Text_1:
# 358 "data/maps/SofosCity/scripts.pory"
	.string "Wow wow WOW! This city is so big! I could\n"
	.string "run around forever to see it all!$"

SofosCity_EventScript_OfficerAtCityEdge_Text_0:
# 368 "data/maps/SofosCity/scripts.pory"
	.string "Officer$"

SofosCity_EventScript_OfficerAtCityEdge_Text_1:
# 369 "data/maps/SofosCity/scripts.pory"
	.string "This is the edge of the modern Sofos\n"
	.string "City. Further north is what remains of\l"
	.string "the Acropolis atop the cliffside, which\l"
	.string "is just a cave and a few ruins outside\l"
	.string "of the {COLOR GREEN}Acropolis Temple{COLOR DARK_GRAY}.$"

SofosCity_EventScript_FarmerOnSidewalk_Text_0:
# 379 "data/maps/SofosCity/scripts.pory"
	.string "Farmer$"

SofosCity_EventScript_FarmerOnSidewalk_Text_1:
# 380 "data/maps/SofosCity/scripts.pory"
	.string "I'd run a farm near the ruins up on the\n"
	.string "Acropolis if I could, but the land is\l"
	.string "riddled with stone and marble\l"
	.string "structures. It's okay, though. I\l"
	.string "suppose it's important to preserve and\l"
	.string "understand our history.$"

SofosCity_EventScript_Rockruff_Text_0:
# 390 "data/maps/SofosCity/scripts.pory"
	.string "Rockruff$"

SofosCity_EventScript_Rockruff_Text_1:
# 392 "data/maps/SofosCity/scripts.pory"
	.string "Bwuff wuff!$"

SofosCity_EventScript_WomanWithRockruff_Text_0:
# 403 "data/maps/SofosCity/scripts.pory"
	.string "Woman$"

SofosCity_EventScript_WomanWithRockruff_Text_1:
# 404 "data/maps/SofosCity/scripts.pory"
	.string "I'm taking my Rockruff on a walk. She\n"
	.string "likes to stop and take a break after\l"
	.string "visiting the Pokémon Center.$"

SofosCity_EventScript_FishermanPlayingChess_Text_0:
# 414 "data/maps/SofosCity/scripts.pory"
	.string "Fisherman$"

SofosCity_EventScript_FishermanPlayingChess_Text_1:
# 415 "data/maps/SofosCity/scripts.pory"
	.string "I formed a wall with my Zigzagoon\n"
	.string "pieces, so that'll protect my Gallade. If\l"
	.string "they take the Gallade piece, I lose the\l"
	.string "game!$"

SofosCity_EventScript_GirlPlayingChess_Text_0:
# 428 "data/maps/SofosCity/scripts.pory"
	.string "Each piece can move in different ways.\n"
	.string "Chesnaught moves in straight lines,\l"
	.string "Mudsdale moves in L-shapes, and Xatu\l"
	.string "can only move diagonally. Each side only\l"
	.string "gets one Gardevoir, which can move in\l"
	.string "any direction. The endless strategies\l"
	.string "make this the most popular game in the\l"
	.string "city!$"

SofosCity_EventScript_HexManiacSeeingLights_Text_0:
# 440 "data/maps/SofosCity/scripts.pory"
	.string "Hex Maniac$"

SofosCity_EventScript_HexManiacSeeingLights_Text_1:
# 441 "data/maps/SofosCity/scripts.pory"
	.string "The lights all around the city keep wild\n"
	.string "Pokémon at bay. But once you're outside\l"
	.string "the walls, you're in their territory.$"

SofosCity_EventScript_CooltrainerThinkingStrategy_Text_0:
# 451 "data/maps/SofosCity/scripts.pory"
	.string "Cooltrainer$"

SofosCity_EventScript_CooltrainerThinkingStrategy_Text_1:
# 452 "data/maps/SofosCity/scripts.pory"
	.string "Sofos City is famous for innovating on\n"
	.string "Pokémon battle strategy. The Gym\l"
	.string "Leader chooses to use strategic\l"
	.string "Pokémon, instead of being restricted to\l"
	.string "a single type.$"

SofosCity_EventScript_OldManAtCliff_Text_0:
# 462 "data/maps/SofosCity/scripts.pory"
	.string "Old Man$"

SofosCity_EventScript_OldManAtCliff_Text_1:
# 463 "data/maps/SofosCity/scripts.pory"
	.string "This used to be a bustling beach, but\n"
	.string "rising seas and erosion have reduced it\l"
	.string "to this. Bleached shells and receding\l"
	.string "sands... these changes aren't natural.$"

SofosCity_EventScript_Clauncher_Text_0:
# 472 "data/maps/SofosCity/scripts.pory"
	.string "Clauncher$"

SofosCity_EventScript_Clauncher_Text_1:
# 474 "data/maps/SofosCity/scripts.pory"
	.string "Kss kss!$"

SofosCity_EventScript_ManOutsideBattlePavilion_Text_0:
# 485 "data/maps/SofosCity/scripts.pory"
	.string "Man$"

SofosCity_EventScript_ManOutsideBattlePavilion_Text_1:
# 490 "data/maps/SofosCity/scripts.pory"
	.string "There are a few other Battle Pavilions\n"
	.string "scattered around the Ilios Region. Each\l"
	.string "has different rules and strategies to\l"
	.string "win!$"

SofosCity_EventScript_ManOutsideBattlePavilion_Text_2:
# 500 "data/maps/SofosCity/scripts.pory"
	.string "See that building with the green roof\n"
	.string "topped with Poké balls? That's the\l"
	.string "{COLOR GREEN}Sofos City Battle Pavilion{COLOR DARK_GRAY}. It's a\l"
	.string "popular destination for Trainers\l"
	.string "obsessed with strategy.\p"
	.string "Hey, you're new here, right? Go {COLOR GREEN}try the\n"
	.string "Battle Pavilion{COLOR DARK_GRAY} and let me know how it\l"
	.string "went!$"

SofosCity_EventScript_ManOutsideBattlePavilion_Text_3:
# 508 "data/maps/SofosCity/scripts.pory"
	.string "Chaire! Have you tried participating in\n"
	.string "the {COLOR GREEN}Sofos City Battle Pavilion{COLOR DARK_GRAY} yet?$"

SofosCity_EventScript_ManOutsideBattlePavilion_Text_4:
# 516 "data/maps/SofosCity/scripts.pory"
	.string "Opa! You did it! Did you have fun?\n"
	.string "Right, right, your reward. I hope you\l"
	.string "continue to participate in Battle\l"
	.string "Pavilions across Ilios!$"

SofosCity_EventScript_ManAdmiringTowerRuin_Text_0:
# 532 "data/maps/SofosCity/scripts.pory"
	.string "Curious Man$"

SofosCity_EventScript_ManAdmiringTowerRuin_Text_1:
# 533 "data/maps/SofosCity/scripts.pory"
	.string "There are ruins all over the Ilios\n"
	.string "Region, but those around Sofos City are\l"
	.string "unique. In the {COLOR GREEN}Acropolis Temple{COLOR DARK_GRAY} here,\l"
	.string "people still pay respect to the\l"
	.string "{COLOR GREEN}Elemental Beasts Trio{COLOR DARK_GRAY}. Most other\l"
	.string "ancient sites are pretty much\l"
	.string "abandoned!$"

SofosCity_EventScript_TogaGirlsAtAcropolis_Text_0:
# 543 "data/maps/SofosCity/scripts.pory"
	.string "Toga Woman$"

SofosCity_EventScript_TogaGirlsAtAcropolis_Text_1:
# 544 "data/maps/SofosCity/scripts.pory"
	.string "Welcome to the Sofos City {COLOR GREEN}Acropolis\n"
	.string "Temple{COLOR DARK_GRAY}. Feel free to pay your respects\l"
	.string "here.$"

SofosCIty_EventScript_BugCatcher_Text_0:
# 554 "data/maps/SofosCity/scripts.pory"
	.string "Bug Catcher$"

SofosCIty_EventScript_BugCatcher_Text_1:
# 555 "data/maps/SofosCity/scripts.pory"
	.string "I live in the center of Sofos City, but I\n"
	.string "walk out here every day to look for\l"
	.string "Pokémon! I love being so close to the\l"
	.string "forest.$"

SofosCity_EventScript_LassInTropics_Text_0:
# 565 "data/maps/SofosCity/scripts.pory"
	.string "Lass$"

SofosCity_EventScript_LassInTropics_Text_1:
# 566 "data/maps/SofosCity/scripts.pory"
	.string "Not too many people come so far from\n"
	.string "the city walls. Lots of wild Pokémon are\l"
	.string "out here, and plenty of city people\l"
	.string "aren't a fan of that.$"

SofosCity_EventScript_ManByShallows_Text_0:
# 577 "data/maps/SofosCity/scripts.pory"
	.string "I come down here to cool off and watch\n"
	.string "Pokémon swim around. Sometimes, brave\l"
	.string "Pokémon come up into the shallows to\l"
	.string "say hello!$"

SofosCity_EventScript_FatManByCave_Text_0:
# 587 "data/maps/SofosCity/scripts.pory"
	.string "Fat Man$"

SofosCity_EventScript_FatManByCave_Text_1:
# 588 "data/maps/SofosCity/scripts.pory"
	.string "When I was a kid, everyone said to stay\n"
	.string "away from the Satyr's Lair, that small\l"
	.string "cave in the cliffside. I don't believe\l"
	.string "the stories anymore, but... well, I just\l"
	.string "don't want to go in!$"

SofosCity_EventScript_GoodRodFishingGuru_Text_0:
# 598 "data/maps/SofosCity/scripts.pory"
	.string "Fishing Guru$"

SofosCity_EventScript_GoodRodFishingGuru_Text_1:
# 601 "data/maps/SofosCity/scripts.pory"
	.string "Hey! Is that a Pokédex from the Acrisia\n"
	.string "University? I used to visit all the time!\p"
	.string "You've come quite a long way. Here,\n"
	.string "maybe this'll help on your journey.$"

SofosCity_EventScript_GoodRodFishingGuru_Text_2:
# 606 "data/maps/SofosCity/scripts.pory"
	.string "The {COLOR GREEN}Good Rod{COLOR DARK_GRAY} can give you access to a\n"
	.string "wide array of Water-dwelling Pokémon.\l"
	.string "Maybe they can help you handle the\l"
	.string "next Gym Leader!$"

SofosCity_EventScript_GoodRodFishingGuru_Text_3:
# 611 "data/maps/SofosCity/scripts.pory"
	.string "The {COLOR GREEN}Good Rod{COLOR DARK_GRAY} allows you to fish up a\n"
	.string "wide array of Water-dwelling Pokémon.\l"
	.string "Hey, you might even find some treasure\l"
	.string "in the water!$"

SofosCity_EventScript_Trainer_SofosCity_Grunt_Text_0:
# 621 "data/maps/SofosCity/scripts.pory"
	.string "Grunt$"

SofosCity_EventScript_Trainer_SofosCity_Grunt_Text_1:
# 622 "data/maps/SofosCity/scripts.pory"
	.string "Well, I guess I'm not the WORST Grunt\n"
	.string "ever. There was that one guy who messed\l"
	.string "up stealing a Pokédex. He lost to some\l"
	.string "new, weak Trainer!$"

SofosCity_EventScript_SwimmerF_Text_0:
# 640 "data/maps/SofosCity/scripts.pory"
	.string "Swimmer$"

SofosCity_EventScript_SwimmerF_Text_1:
# 641 "data/maps/SofosCity/scripts.pory"
	.string "The area around Sofos City is littered\n"
	.string "with rocks in the shallowest parts.\l"
	.string "Most swimmers choose to go further out\l"
	.string "to the east, where the water is deeper\l"
	.string "but relatively safe.$"

SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_0:
# 691 "data/maps/SofosCity/scripts.pory"
	.string "Piraeus$"

SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_1:
# 692 "data/maps/SofosCity/scripts.pory"
	.string "{PLAYER}!! Come on over here!$"

SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_2:
# 720 "data/maps/SofosCity/scripts.pory"
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
# 627 "data/maps/SofosCity/scripts.pory"
	.string "Hold up! I was told to stop anyone from\n"
	.string "getting into {COLOR GREEN}Satyr's Lair{COLOR DARK_GRAY}!$"

SofosCity_Text_Trainer_SofosCity_GruntDefeat::
# 631 "data/maps/SofosCity/scripts.pory"
	.string "Darn. I must be the worst Grunt in the\n"
	.string "history of Team Chimera!$"

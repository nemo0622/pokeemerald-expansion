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
	.2byte ITEM_ABILITY_CAPSULE
# 129 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 130 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 131 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_TART_APPLE
# 132 "data/maps/SofosCity/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_NONE

SofosCity_EventScript_DecorStreetVendor::
# 137 "data/maps/SofosCity/scripts.pory"
	lock
# 138 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 139 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ItemStreetVendor_Text_0
# 140 "data/maps/SofosCity/scripts.pory"
	message gText_HowMayIServeYou
# 141 "data/maps/SofosCity/scripts.pory"
	waitmessage
# 142 "data/maps/SofosCity/scripts.pory"
	pokemartdecoration SofosCity_DecorShop
# 143 "data/maps/SofosCity/scripts.pory"
	closemessage
# 144 "data/maps/SofosCity/scripts.pory"
	delay 1
# 145 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ItemStreetVendor_Text_0
# 146 "data/maps/SofosCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 147 "data/maps/SofosCity/scripts.pory"
	release
	end


# 151 "data/maps/SofosCity/scripts.pory"

# 152 "data/maps/SofosCity/scripts.pory"
    .align 2
# 153 "data/maps/SofosCity/scripts.pory"
SofosCity_DecorShop:
# 154 "data/maps/SofosCity/scripts.pory"
    .2byte DECOR_SMALL_DESK
# 155 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_PRETTY_DESK
# 156 "data/maps/SofosCity/scripts.pory"
    .2byte DECOR_SMALL_CHAIR
# 157 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_PRETTY_CHAIR
# 158 "data/maps/SofosCity/scripts.pory"
    .2byte DECOR_SMALL_FLOWER_BOX
# 159 "data/maps/SofosCity/scripts.pory"
    .2byte DECOR_PRETTY_FLOWERS
# 160 "data/maps/SofosCity/scripts.pory"
    .2byte DECOR_FENCE_LENGTH
# 161 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_FENCE_WIDTH
# 162 "data/maps/SofosCity/scripts.pory"
    .2byte DECOR_LARGE_BED
# 163 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_DOLL_SQUARE
# 164 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_GLITTER_MAT
# 165 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_SURF_MAT
# 166 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_THUNDER_MAT
# 167 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_GREEN_POSTER
# 168 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_RED_POSTER
# 169 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_BLUE_POSTER
# 170 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_SUNSET_POSTER
# 171 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_PIKACHU_DOLL
# 172 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_CRABRAWLER_DOLL
# 173 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_TOGEPI_DOLL
# 174 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_MEOWTH_DOLL
# 175 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_STUFFUL_DOLL
# 176 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_BOUNSWEET_DOLL
# 177 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_GRASS_CUSHION
# 178 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_FIRE_CUSHION
# 179 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_WATER_CUSHION
# 180 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_ENTERTAINMENT_CENTER
# 181 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_POKEBALL_STATION
# 182 "data/maps/SofosCity/scripts.pory"
	.2byte DECOR_NONE
# 183 "data/maps/SofosCity/scripts.pory"
	release
# 184 "data/maps/SofosCity/scripts.pory"
	end

SofosCity_EventScript_GirlNearVendors::
# 189 "data/maps/SofosCity/scripts.pory"
	lock
# 190 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 191 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_GirlNearVendors_Text_0
# 192 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GirlNearVendors_Text_1
# 193 "data/maps/SofosCity/scripts.pory"
	closemessage
# 194 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_BoyNearFarmersGoods::
# 200 "data/maps/SofosCity/scripts.pory"
	lock
# 201 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 202 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_BoyNearFarmersGoods_Text_0
# 203 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_BoyNearFarmersGoods_Text_1
# 204 "data/maps/SofosCity/scripts.pory"
	closemessage
# 205 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ManWithMurkrow::
# 211 "data/maps/SofosCity/scripts.pory"
	lock
# 212 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 213 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ManWithMurkrow_Text_0
# 214 "data/maps/SofosCity/scripts.pory"
	goto_if_unset FLAG_GOT_TM_TORMENT, SofosCity_EventScript_ManWithMurkrow_2
# 223 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManWithMurkrow_Text_2
# 224 "data/maps/SofosCity/scripts.pory"
	closemessage
SofosCity_EventScript_ManWithMurkrow_1:
# 226 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_ManWithMurkrow_2:
# 216 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManWithMurkrow_Text_1
# 217 "data/maps/SofosCity/scripts.pory"
	closemessage
# 218 "data/maps/SofosCity/scripts.pory"
	giveitem ITEM_TM_TORMENT
# 219 "data/maps/SofosCity/scripts.pory"
	setflag FLAG_GOT_TM_TORMENT
	goto SofosCity_EventScript_ManWithMurkrow_1


SofosCity_EventScript_Murkrow::
# 231 "data/maps/SofosCity/scripts.pory"
	lock
# 232 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 233 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_Murkrow_Text_0
# 234 "data/maps/SofosCity/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 235 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_Murkrow_Text_1
# 236 "data/maps/SofosCity/scripts.pory"
	waitmoncry
# 237 "data/maps/SofosCity/scripts.pory"
	closemessage
# 238 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_LostConstructionWorker::
# 244 "data/maps/SofosCity/scripts.pory"
	lock
# 245 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 246 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_LostConstructionWorker_Text_0
# 247 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_LostConstructionWorker_Text_1
# 248 "data/maps/SofosCity/scripts.pory"
	closemessage
# 249 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_StrategicCamper::
# 255 "data/maps/SofosCity/scripts.pory"
	lock
# 256 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 259 "data/maps/SofosCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_SHOW_CAMPER_ALOLAN_RAICHU
# 260 "data/maps/SofosCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SofosCity_EventScript_StrategicCamper_2
# 270 "data/maps/SofosCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_SHOW_CAMPER_ALOLAN_RAICHU
# 271 "data/maps/SofosCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_EventScript_StrategicCamper_5
# 282 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 283 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_Text_3
# 284 "data/maps/SofosCity/scripts.pory"
	closemessage
# 286 "data/maps/SofosCity/scripts.pory"
	checkforspecies SPECIES_RAICHU_ALOLAN, OPEN_PARTY_SCREEN, SofosCity_EventScript_StrategicCamper_ReactToRaichu
# 289 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 290 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_Text_4
# 291 "data/maps/SofosCity/scripts.pory"
	closemessage
SofosCity_EventScript_StrategicCamper_4:
# 293 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_StrategicCamper_2:
# 262 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 263 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_Text_1
# 264 "data/maps/SofosCity/scripts.pory"
	closemessage
# 265 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_StrategicCamper_5:
# 273 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 274 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_Text_2
# 275 "data/maps/SofosCity/scripts.pory"
	closemessage
# 277 "data/maps/SofosCity/scripts.pory"
	delay 20
# 278 "data/maps/SofosCity/scripts.pory"
	startquest QUEST_SHOW_CAMPER_ALOLAN_RAICHU
	goto SofosCity_EventScript_StrategicCamper_4


SofosCity_EventScript_StrategicCamper_ReactToRaichu::
# 298 "data/maps/SofosCity/scripts.pory"
	lock
# 299 "data/maps/SofosCity/scripts.pory"
	delay 20
# 300 "data/maps/SofosCity/scripts.pory"
	applymovement 26, Common_Movement_Heart
# 301 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 302 "data/maps/SofosCity/scripts.pory"
	delay 10
# 303 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 304 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_ReactToRaichu_Text_0
# 305 "data/maps/SofosCity/scripts.pory"
	closemessage
# 306 "data/maps/SofosCity/scripts.pory"
	givedecoration DECOR_RAICHU_DOLL
# 307 "data/maps/SofosCity/scripts.pory"
	delay 5
# 308 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_StrategicCamper_Text_0
# 309 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_StrategicCamper_ReactToRaichu_Text_1
# 310 "data/maps/SofosCity/scripts.pory"
	closemessage
# 312 "data/maps/SofosCity/scripts.pory"
	delay 20
# 313 "data/maps/SofosCity/scripts.pory"
	completequest QUEST_SHOW_CAMPER_ALOLAN_RAICHU
# 315 "data/maps/SofosCity/scripts.pory"
	closemessage
# 316 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_BeautyNearPokecenter::
# 322 "data/maps/SofosCity/scripts.pory"
	lock
# 323 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 324 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_BeautyNearPokecenter_Text_0
# 325 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_BeautyNearPokecenter_Text_1
# 326 "data/maps/SofosCity/scripts.pory"
	closemessage
# 327 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ArtistPlayingChess::
# 333 "data/maps/SofosCity/scripts.pory"
	lock
# 334 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 335 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ArtistPlayingChess_Text_0
# 336 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ArtistPlayingChess_Text_1
# 337 "data/maps/SofosCity/scripts.pory"
	closemessage
# 338 "data/maps/SofosCity/scripts.pory"
	applymovement 28, Common_Movement_FaceLeft
# 339 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 340 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_OldWomanPlayingChess::
# 346 "data/maps/SofosCity/scripts.pory"
	lock
# 347 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 348 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_OldWomanPlayingChess_Text_0
# 349 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_OldWomanPlayingChess_Text_1
# 350 "data/maps/SofosCity/scripts.pory"
	closemessage
# 351 "data/maps/SofosCity/scripts.pory"
	applymovement 29, Common_Movement_FaceRight
# 352 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 353 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_PicnickerRunning::
# 359 "data/maps/SofosCity/scripts.pory"
	lock
# 360 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 361 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_PicnickerRunning_Text_0
# 362 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_PicnickerRunning_Text_1
# 363 "data/maps/SofosCity/scripts.pory"
	closemessage
# 364 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_OfficerAtCityEdge::
# 370 "data/maps/SofosCity/scripts.pory"
	lock
# 371 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 372 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_OfficerAtCityEdge_Text_0
# 373 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_OfficerAtCityEdge_Text_1
# 374 "data/maps/SofosCity/scripts.pory"
	closemessage
# 375 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_FarmerOnSidewalk::
# 381 "data/maps/SofosCity/scripts.pory"
	lock
# 382 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 383 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_FarmerOnSidewalk_Text_0
# 384 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_FarmerOnSidewalk_Text_1
# 385 "data/maps/SofosCity/scripts.pory"
	closemessage
# 386 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_Rockruff::
# 392 "data/maps/SofosCity/scripts.pory"
	lock
# 393 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 394 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_Rockruff_Text_0
# 395 "data/maps/SofosCity/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 396 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_Rockruff_Text_1
# 397 "data/maps/SofosCity/scripts.pory"
	waitmoncry
# 398 "data/maps/SofosCity/scripts.pory"
	closemessage
# 399 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_WomanWithRockruff::
# 405 "data/maps/SofosCity/scripts.pory"
	lock
# 406 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 407 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_WomanWithRockruff_Text_0
# 408 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_WomanWithRockruff_Text_1
# 409 "data/maps/SofosCity/scripts.pory"
	closemessage
# 410 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_FishermanPlayingChess::
# 416 "data/maps/SofosCity/scripts.pory"
	lock
# 417 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 418 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_FishermanPlayingChess_Text_0
# 419 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_FishermanPlayingChess_Text_1
# 420 "data/maps/SofosCity/scripts.pory"
	closemessage
# 421 "data/maps/SofosCity/scripts.pory"
	applymovement 35, Common_Movement_FaceRight
# 422 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 423 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_GirlPlayingChess::
# 429 "data/maps/SofosCity/scripts.pory"
	lock
# 430 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 431 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_GirlNearVendors_Text_0
# 432 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GirlPlayingChess_Text_0
# 433 "data/maps/SofosCity/scripts.pory"
	closemessage
# 434 "data/maps/SofosCity/scripts.pory"
	applymovement 36, Common_Movement_FaceLeft
# 435 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 436 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_HexManiacSeeingLights::
# 442 "data/maps/SofosCity/scripts.pory"
	lock
# 443 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 444 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_HexManiacSeeingLights_Text_0
# 445 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_HexManiacSeeingLights_Text_1
# 446 "data/maps/SofosCity/scripts.pory"
	closemessage
# 447 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_CooltrainerThinkingStrategy::
# 453 "data/maps/SofosCity/scripts.pory"
	lock
# 454 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 455 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_CooltrainerThinkingStrategy_Text_0
# 456 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_CooltrainerThinkingStrategy_Text_1
# 457 "data/maps/SofosCity/scripts.pory"
	closemessage
# 458 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_OldManAtCliff::
# 464 "data/maps/SofosCity/scripts.pory"
	lock
# 465 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 466 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_OldManAtCliff_Text_0
# 467 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_OldManAtCliff_Text_1
# 468 "data/maps/SofosCity/scripts.pory"
	closemessage
# 469 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_Clauncher::
# 474 "data/maps/SofosCity/scripts.pory"
	lock
# 475 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 476 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_Clauncher_Text_0
# 477 "data/maps/SofosCity/scripts.pory"
	playmoncry SPECIES_CLAUNCHER, CRY_MODE_NORMAL
# 478 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_Clauncher_Text_1
# 479 "data/maps/SofosCity/scripts.pory"
	waitmoncry
# 480 "data/maps/SofosCity/scripts.pory"
	closemessage
# 481 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ManOutsideBattlePavilion::
# 487 "data/maps/SofosCity/scripts.pory"
	lock
# 488 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 489 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ManOutsideBattlePavilion_Text_0
# 491 "data/maps/SofosCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_TRY_SOFOS_BATTLE_PAVILION
# 492 "data/maps/SofosCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SofosCity_EventScript_ManOutsideBattlePavilion_2
# 501 "data/maps/SofosCity/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_TRY_SOFOS_BATTLE_PAVILION
# 502 "data/maps/SofosCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_EventScript_ManOutsideBattlePavilion_4
# 512 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManOutsideBattlePavilion_Text_3
# 513 "data/maps/SofosCity/scripts.pory"
	closemessage
# 515 "data/maps/SofosCity/scripts.pory"
	delay 30
# 517 "data/maps/SofosCity/scripts.pory"
	goto_if_set FLAG_PLAYED_IN_SOFOS_BATTLE_PAVILION, SofosCity_EventScript_ManOutsideBattlePavilion_7
	return

SofosCity_EventScript_ManOutsideBattlePavilion_2:
# 494 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManOutsideBattlePavilion_Text_1
# 495 "data/maps/SofosCity/scripts.pory"
	closemessage
# 496 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_ManOutsideBattlePavilion_4:
# 504 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManOutsideBattlePavilion_Text_2
# 505 "data/maps/SofosCity/scripts.pory"
	closemessage
# 507 "data/maps/SofosCity/scripts.pory"
	delay 20
# 508 "data/maps/SofosCity/scripts.pory"
	startquest QUEST_TRY_SOFOS_BATTLE_PAVILION
	return

SofosCity_EventScript_ManOutsideBattlePavilion_7:
# 519 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ManOutsideBattlePavilion_Text_0
# 520 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManOutsideBattlePavilion_Text_4
# 521 "data/maps/SofosCity/scripts.pory"
	closemessage
# 522 "data/maps/SofosCity/scripts.pory"
	delay 5
# 523 "data/maps/SofosCity/scripts.pory"
	giveitem ITEM_EXP_CANDY_M, 2
# 525 "data/maps/SofosCity/scripts.pory"
	delay 20
# 526 "data/maps/SofosCity/scripts.pory"
	completequest QUEST_TRY_SOFOS_BATTLE_PAVILION
	return


SofosCity_EventScript_ManAdmiringTowerRuin::
# 534 "data/maps/SofosCity/scripts.pory"
	lock
# 535 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 536 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_ManAdmiringTowerRuin_Text_0
# 537 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManAdmiringTowerRuin_Text_1
# 538 "data/maps/SofosCity/scripts.pory"
	closemessage
# 539 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_TogaGirlsAtAcropolis::
# 545 "data/maps/SofosCity/scripts.pory"
	lock
# 546 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 547 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_TogaGirlsAtAcropolis_Text_0
# 548 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_TogaGirlsAtAcropolis_Text_1
# 549 "data/maps/SofosCity/scripts.pory"
	closemessage
# 550 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCIty_EventScript_BugCatcher::
# 556 "data/maps/SofosCity/scripts.pory"
	lock
# 557 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 558 "data/maps/SofosCity/scripts.pory"
	speakername SofosCIty_EventScript_BugCatcher_Text_0
# 559 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCIty_EventScript_BugCatcher_Text_1
# 560 "data/maps/SofosCity/scripts.pory"
	closemessage
# 561 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_LassInTropics::
# 567 "data/maps/SofosCity/scripts.pory"
	lock
# 568 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 569 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_LassInTropics_Text_0
# 570 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_LassInTropics_Text_1
# 571 "data/maps/SofosCity/scripts.pory"
	closemessage
# 572 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_ManByShallows::
# 578 "data/maps/SofosCity/scripts.pory"
	lock
# 579 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 580 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_BoyNearFarmersGoods_Text_0
# 581 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_ManByShallows_Text_0
# 582 "data/maps/SofosCity/scripts.pory"
	closemessage
# 583 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_FatManByCave::
# 589 "data/maps/SofosCity/scripts.pory"
	lock
# 590 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 591 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_FatManByCave_Text_0
# 592 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_FatManByCave_Text_1
# 593 "data/maps/SofosCity/scripts.pory"
	closemessage
# 594 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_GoodRodFishingGuru::
# 600 "data/maps/SofosCity/scripts.pory"
	lock
# 601 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 602 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_GoodRodFishingGuru_Text_0
# 603 "data/maps/SofosCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GOOD_ROD, SofosCity_EventScript_GoodRodFishingGuru_2
# 615 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GoodRodFishingGuru_Text_3
# 616 "data/maps/SofosCity/scripts.pory"
	closemessage
SofosCity_EventScript_GoodRodFishingGuru_1:
# 618 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_GoodRodFishingGuru_2:
# 605 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GoodRodFishingGuru_Text_1
# 606 "data/maps/SofosCity/scripts.pory"
	closemessage
# 607 "data/maps/SofosCity/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 608 "data/maps/SofosCity/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 609 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_GoodRodFishingGuru_Text_0
# 610 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_GoodRodFishingGuru_Text_2
# 611 "data/maps/SofosCity/scripts.pory"
	closemessage
	goto SofosCity_EventScript_GoodRodFishingGuru_1


SofosCity_EventScript_Trainer_SofosCity_Grunt::
# 624 "data/maps/SofosCity/scripts.pory"
	trainerbattle_single TRAINER_SOFOS_CITY_CHIMERA_GRUNT, SofosCity_Text_Trainer_SofosCity_GruntIntro, SofosCity_Text_Trainer_SofosCity_GruntDefeat
# 625 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_Trainer_SofosCity_Grunt_Text_0
# 626 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_Trainer_SofosCity_Grunt_Text_1
# 627 "data/maps/SofosCity/scripts.pory"
	closemessage
# 628 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_SwimmerF::
# 642 "data/maps/SofosCity/scripts.pory"
	lock
# 643 "data/maps/SofosCity/scripts.pory"
	faceplayer
# 644 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_SwimmerF_Text_0
# 645 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_SwimmerF_Text_1
# 646 "data/maps/SofosCity/scripts.pory"
	closemessage
# 647 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_Trigger_PiraeusKiposTownTrigger0::
# 653 "data/maps/SofosCity/scripts.pory"
	setvar VAR_TEMP_0, 0
# 654 "data/maps/SofosCity/scripts.pory"
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent
# 655 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_Trigger_PiraeusKiposTownTrigger1::
# 660 "data/maps/SofosCity/scripts.pory"
	setvar VAR_TEMP_0, 1
# 661 "data/maps/SofosCity/scripts.pory"
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent
# 662 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_Trigger_PiraeusKiposTownTrigger2::
# 667 "data/maps/SofosCity/scripts.pory"
	setvar VAR_TEMP_0, 2
# 668 "data/maps/SofosCity/scripts.pory"
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent
# 669 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_Trigger_PiraeusKiposTownTrigger3::
# 674 "data/maps/SofosCity/scripts.pory"
	setvar VAR_TEMP_0, 3
# 675 "data/maps/SofosCity/scripts.pory"
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent
# 676 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_Trigger_PiraeusKiposTownTrigger4::
# 681 "data/maps/SofosCity/scripts.pory"
	setvar VAR_TEMP_0, 4
# 682 "data/maps/SofosCity/scripts.pory"
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent
# 683 "data/maps/SofosCity/scripts.pory"
	release
	end


SofosCity_EventScript_TryPiraeusKiposTownEvent::
# 689 "data/maps/SofosCity/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SofosCity_EventScript_TryPiraeusKiposTownEvent_2
SofosCity_EventScript_TryPiraeusKiposTownEvent_1:
# 734 "data/maps/SofosCity/scripts.pory"
	release
	end

SofosCity_EventScript_TryPiraeusKiposTownEvent_2:
# 691 "data/maps/SofosCity/scripts.pory"
	lockall
# 693 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 694 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 695 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_0
# 696 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_1
# 697 "data/maps/SofosCity/scripts.pory"
	closemessage
# 699 "data/maps/SofosCity/scripts.pory"
	applymovement 60, Common_Movement_FaceUp
# 700 "data/maps/SofosCity/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq SofosCity_EventScript_TryPiraeusKiposTownEvent_5
# 704 "data/maps/SofosCity/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SofosCity_EventScript_TryPiraeusKiposTownEvent_6
# 708 "data/maps/SofosCity/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq SofosCity_EventScript_TryPiraeusKiposTownEvent_7
# 712 "data/maps/SofosCity/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq SofosCity_EventScript_TryPiraeusKiposTownEvent_8
# 718 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SofosCity_Movement_ApproachPiraeus4
SofosCity_EventScript_TryPiraeusKiposTownEvent_4:
# 720 "data/maps/SofosCity/scripts.pory"
	waitmovement 0
# 721 "data/maps/SofosCity/scripts.pory"
	delay 10
# 723 "data/maps/SofosCity/scripts.pory"
	speakername SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_0
# 724 "data/maps/SofosCity/scripts.pory"
	msgbox SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_2
# 725 "data/maps/SofosCity/scripts.pory"
	closemessage
# 726 "data/maps/SofosCity/scripts.pory"
	delay 20
# 727 "data/maps/SofosCity/scripts.pory"
	warpcontinuescript MAP_KIPOS_TOWN, 18, 22, KiposTown_EventScript_LeadPlayerToConservationCenter
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent_1

SofosCity_EventScript_TryPiraeusKiposTownEvent_5:
# 702 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SofosCity_Movement_ApproachPiraeus0
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent_4

SofosCity_EventScript_TryPiraeusKiposTownEvent_6:
# 706 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SofosCity_Movement_ApproachPiraeus1
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent_4

SofosCity_EventScript_TryPiraeusKiposTownEvent_7:
# 710 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SofosCity_Movement_ApproachPiraeus2
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent_4

SofosCity_EventScript_TryPiraeusKiposTownEvent_8:
# 714 "data/maps/SofosCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SofosCity_Movement_ApproachPiraeus3
	goto SofosCity_EventScript_TryPiraeusKiposTownEvent_4


# 738 "data/maps/SofosCity/scripts.pory"
SofosCity_Movement_ApproachPiraeus0:
# 740 "data/maps/SofosCity/scripts.pory"
	walk_down
# 741 "data/maps/SofosCity/scripts.pory"
	walk_right
# 741 "data/maps/SofosCity/scripts.pory"
	walk_right
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
SofosCity_Movement_ApproachPiraeus1:
# 747 "data/maps/SofosCity/scripts.pory"
	walk_down
# 748 "data/maps/SofosCity/scripts.pory"
	walk_right
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

# 752 "data/maps/SofosCity/scripts.pory"
SofosCity_Movement_ApproachPiraeus2:
# 754 "data/maps/SofosCity/scripts.pory"
	walk_down
# 754 "data/maps/SofosCity/scripts.pory"
	walk_down
# 754 "data/maps/SofosCity/scripts.pory"
	walk_down
# 754 "data/maps/SofosCity/scripts.pory"
	walk_down
# 754 "data/maps/SofosCity/scripts.pory"
	walk_down
# 755 "data/maps/SofosCity/scripts.pory"
	step_end

# 757 "data/maps/SofosCity/scripts.pory"
SofosCity_Movement_ApproachPiraeus3:
# 759 "data/maps/SofosCity/scripts.pory"
	walk_down
# 760 "data/maps/SofosCity/scripts.pory"
	walk_left
# 761 "data/maps/SofosCity/scripts.pory"
	walk_down
# 761 "data/maps/SofosCity/scripts.pory"
	walk_down
# 761 "data/maps/SofosCity/scripts.pory"
	walk_down
# 761 "data/maps/SofosCity/scripts.pory"
	walk_down
# 762 "data/maps/SofosCity/scripts.pory"
	step_end

# 764 "data/maps/SofosCity/scripts.pory"
SofosCity_Movement_ApproachPiraeus4:
# 766 "data/maps/SofosCity/scripts.pory"
	walk_down
# 767 "data/maps/SofosCity/scripts.pory"
	walk_left
# 767 "data/maps/SofosCity/scripts.pory"
	walk_left
# 768 "data/maps/SofosCity/scripts.pory"
	walk_down
# 768 "data/maps/SofosCity/scripts.pory"
	walk_down
# 768 "data/maps/SofosCity/scripts.pory"
	walk_down
# 768 "data/maps/SofosCity/scripts.pory"
	walk_down
# 769 "data/maps/SofosCity/scripts.pory"
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
# 191 "data/maps/SofosCity/scripts.pory"
	.string "Girl$"

SofosCity_EventScript_GirlNearVendors_Text_1:
# 192 "data/maps/SofosCity/scripts.pory"
	.string "Everything sold by these Street\n"
	.string "Vendors are made or grown right around\l"
	.string "Sofos City! It helps keep locals in\l"
	.string "business.$"

SofosCity_EventScript_BoyNearFarmersGoods_Text_0:
# 202 "data/maps/SofosCity/scripts.pory"
	.string "Athlete$"

SofosCity_EventScript_BoyNearFarmersGoods_Text_1:
# 203 "data/maps/SofosCity/scripts.pory"
	.string "Mmm, locally-grown food is the best! My\n"
	.string "workouts go 10x better when I buy my\l"
	.string "snacks from here.$"

SofosCity_EventScript_ManWithMurkrow_Text_0:
# 213 "data/maps/SofosCity/scripts.pory"
	.string "Angry Man$"

SofosCity_EventScript_ManWithMurkrow_Text_1:
# 216 "data/maps/SofosCity/scripts.pory"
	.string "Murkrow... Murkrow! Come on, work with\n"
	.string "me!\p"
	.string "Argh, I can't do it anymore! I was going\n"
	.string "to teach Murkrow this move, but it looks\l"
	.string "like it has it mastered. Take it and\l"
	.string "scram!$"

SofosCity_EventScript_ManWithMurkrow_Text_2:
# 223 "data/maps/SofosCity/scripts.pory"
	.string "Grr, this darn Murkrow is gonna make me\n"
	.string "lose it! Why, why does it enjoy making me\l"
	.string "angry?!$"

SofosCity_EventScript_Murkrow_Text_0:
# 233 "data/maps/SofosCity/scripts.pory"
	.string "Murkrow$"

SofosCity_EventScript_Murkrow_Text_1:
# 235 "data/maps/SofosCity/scripts.pory"
	.string "Kekekehehe!$"

SofosCity_EventScript_LostConstructionWorker_Text_0:
# 246 "data/maps/SofosCity/scripts.pory"
	.string "Worker$"

SofosCity_EventScript_LostConstructionWorker_Text_1:
# 247 "data/maps/SofosCity/scripts.pory"
	.string "Erm... hmm... I was called to Sofos City\n"
	.string "for a maintenance job, but I'm already\l"
	.string "lost! This must be the biggest city in\l"
	.string "the whole region!$"

SofosCity_EventScript_StrategicCamper_Text_0:
# 262 "data/maps/SofosCity/scripts.pory"
	.string "Camper$"

SofosCity_EventScript_StrategicCamper_Text_1:
# 263 "data/maps/SofosCity/scripts.pory"
	.string "Alolan Raichu is the master of battle\n"
	.string "terrain. It's signature ability, Surge\l"
	.string "Surfer, summons and electric terrain\l"
	.string "and increases it's speed. Strategy is\l"
	.string "all about changing the battlefield to\l"
	.string "your advantage!$"

SofosCity_EventScript_StrategicCamper_Text_2:
# 274 "data/maps/SofosCity/scripts.pory"
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
# 283 "data/maps/SofosCity/scripts.pory"
	.string "What's up? Did you find an {COLOR GREEN}Alolan Raichu{COLOR DARK_GRAY}\n"
	.string "and study the ability Surge Surfer for\l"
	.string "me?$"

SofosCity_EventScript_StrategicCamper_Text_4:
# 290 "data/maps/SofosCity/scripts.pory"
	.string "Not yet, huh? It's okay, finding a\n"
	.string "Raichu in the Alolan form isn't common\l"
	.string "in the Ilios Region. I've only ever seen\l"
	.string "one once!\p"
	.string "Come back when you have a {COLOR GREEN}complete\n"
	.string "Pokédex entry for Alolan Raichu{COLOR DARK_GRAY}. I'll\l"
	.string "give you something to improve your\l"
	.string "strategy even more!$"

SofosCity_EventScript_StrategicCamper_ReactToRaichu_Text_0:
# 304 "data/maps/SofosCity/scripts.pory"
	.string "Ahaha, I love it! This data is even more\n"
	.string "impressive than I expected!\p"
	.string "I just won two of these Alolan Raichu\n"
	.string "Dolls in a contest. Here, I want you to\l"
	.string "take one!$"

SofosCity_EventScript_StrategicCamper_ReactToRaichu_Text_1:
# 309 "data/maps/SofosCity/scripts.pory"
	.string "It's a pretty large Doll, so make sure to\n"
	.string "display it on a large Mat with plenty of\l"
	.string "space!$"

SofosCity_EventScript_BeautyNearPokecenter_Text_0:
# 324 "data/maps/SofosCity/scripts.pory"
	.string "Beauty$"

SofosCity_EventScript_BeautyNearPokecenter_Text_1:
# 325 "data/maps/SofosCity/scripts.pory"
	.string "Sofos City is well-known for using\n"
	.string "turquoise-blue roofs on most buildings.\l"
	.string "It gives the city it's own identity.\p"
	.string "Of course, those are only on the modern\n"
	.string "buildings. The ruins of the Acropolis\l"
	.string "Temple to the north were made of\l"
	.string "shining marble!$"

SofosCity_EventScript_ArtistPlayingChess_Text_0:
# 335 "data/maps/SofosCity/scripts.pory"
	.string "Artist$"

SofosCity_EventScript_ArtistPlayingChess_Text_1:
# 336 "data/maps/SofosCity/scripts.pory"
	.string "Ehehe, I know! I'll drive my Chesnaught\n"
	.string "forward and take their best pieces!$"

SofosCity_EventScript_OldWomanPlayingChess_Text_0:
# 348 "data/maps/SofosCity/scripts.pory"
	.string "Old Woman$"

SofosCity_EventScript_OldWomanPlayingChess_Text_1:
# 349 "data/maps/SofosCity/scripts.pory"
	.string "Hah! He'll use his Chesnaught piece\n"
	.string "next. That'll put it right in the path of\l"
	.string "my Mudsdale!$"

SofosCity_EventScript_PicnickerRunning_Text_0:
# 361 "data/maps/SofosCity/scripts.pory"
	.string "Tourist$"

SofosCity_EventScript_PicnickerRunning_Text_1:
# 362 "data/maps/SofosCity/scripts.pory"
	.string "Wow wow WOW! This city is so big! I could\n"
	.string "run around forever to see it all!$"

SofosCity_EventScript_OfficerAtCityEdge_Text_0:
# 372 "data/maps/SofosCity/scripts.pory"
	.string "Officer$"

SofosCity_EventScript_OfficerAtCityEdge_Text_1:
# 373 "data/maps/SofosCity/scripts.pory"
	.string "This is the edge of the modern Sofos\n"
	.string "City. Further north is what remains of\l"
	.string "the Acropolis atop the cliffside, which\l"
	.string "is just a cave and a few ruins outside\l"
	.string "of the {COLOR GREEN}Acropolis Temple{COLOR DARK_GRAY}.$"

SofosCity_EventScript_FarmerOnSidewalk_Text_0:
# 383 "data/maps/SofosCity/scripts.pory"
	.string "Farmer$"

SofosCity_EventScript_FarmerOnSidewalk_Text_1:
# 384 "data/maps/SofosCity/scripts.pory"
	.string "I'd run a farm near the ruins up on the\n"
	.string "Acropolis if I could, but the land is\l"
	.string "riddled with stone and marble\l"
	.string "structures. It's okay, though. I\l"
	.string "suppose it's important to preserve and\l"
	.string "understand our history.$"

SofosCity_EventScript_Rockruff_Text_0:
# 394 "data/maps/SofosCity/scripts.pory"
	.string "Rockruff$"

SofosCity_EventScript_Rockruff_Text_1:
# 396 "data/maps/SofosCity/scripts.pory"
	.string "Bwuff wuff!$"

SofosCity_EventScript_WomanWithRockruff_Text_0:
# 407 "data/maps/SofosCity/scripts.pory"
	.string "Woman$"

SofosCity_EventScript_WomanWithRockruff_Text_1:
# 408 "data/maps/SofosCity/scripts.pory"
	.string "I'm taking my Rockruff on a walk. She\n"
	.string "likes to stop and take a break after\l"
	.string "visiting the Pokémon Center.$"

SofosCity_EventScript_FishermanPlayingChess_Text_0:
# 418 "data/maps/SofosCity/scripts.pory"
	.string "Fisherman$"

SofosCity_EventScript_FishermanPlayingChess_Text_1:
# 419 "data/maps/SofosCity/scripts.pory"
	.string "I formed a wall with my Zigzagoon\n"
	.string "pieces, so that'll protect my Gallade. If\l"
	.string "they take the Gallade piece, I lose the\l"
	.string "game!$"

SofosCity_EventScript_GirlPlayingChess_Text_0:
# 432 "data/maps/SofosCity/scripts.pory"
	.string "Each piece can move in different ways.\n"
	.string "Chesnaught moves in straight lines,\l"
	.string "Mudsdale moves in L-shapes, and Xatu\l"
	.string "can only move diagonally. Each side only\l"
	.string "gets one Gardevoir, which can move in\l"
	.string "any direction. The endless strategies\l"
	.string "make this the most popular game in the\l"
	.string "city!$"

SofosCity_EventScript_HexManiacSeeingLights_Text_0:
# 444 "data/maps/SofosCity/scripts.pory"
	.string "Hex Maniac$"

SofosCity_EventScript_HexManiacSeeingLights_Text_1:
# 445 "data/maps/SofosCity/scripts.pory"
	.string "The lights all around the city keep wild\n"
	.string "Pokémon at bay. But once you're outside\l"
	.string "the walls, you're in their territory.$"

SofosCity_EventScript_CooltrainerThinkingStrategy_Text_0:
# 455 "data/maps/SofosCity/scripts.pory"
	.string "Cooltrainer$"

SofosCity_EventScript_CooltrainerThinkingStrategy_Text_1:
# 456 "data/maps/SofosCity/scripts.pory"
	.string "Sofos City is famous for innovating on\n"
	.string "Pokémon battle strategy. The Gym\l"
	.string "Leader chooses to use strategic\l"
	.string "Pokémon, instead of being restricted to\l"
	.string "a single type.$"

SofosCity_EventScript_OldManAtCliff_Text_0:
# 466 "data/maps/SofosCity/scripts.pory"
	.string "Old Man$"

SofosCity_EventScript_OldManAtCliff_Text_1:
# 467 "data/maps/SofosCity/scripts.pory"
	.string "This used to be a bustling beach, but\n"
	.string "rising seas and erosion have reduced it\l"
	.string "to this. Bleached shells and receding\l"
	.string "sands... these changes aren't natural.$"

SofosCity_EventScript_Clauncher_Text_0:
# 476 "data/maps/SofosCity/scripts.pory"
	.string "Clauncher$"

SofosCity_EventScript_Clauncher_Text_1:
# 478 "data/maps/SofosCity/scripts.pory"
	.string "Kss kss!$"

SofosCity_EventScript_ManOutsideBattlePavilion_Text_0:
# 489 "data/maps/SofosCity/scripts.pory"
	.string "Man$"

SofosCity_EventScript_ManOutsideBattlePavilion_Text_1:
# 494 "data/maps/SofosCity/scripts.pory"
	.string "There are a few other Battle Pavilions\n"
	.string "scattered around the Ilios Region. Each\l"
	.string "has different rules and strategies to\l"
	.string "win!$"

SofosCity_EventScript_ManOutsideBattlePavilion_Text_2:
# 504 "data/maps/SofosCity/scripts.pory"
	.string "See that building with the green roof\n"
	.string "topped with Poké balls? That's the\l"
	.string "{COLOR GREEN}Sofos City Battle Pavilion{COLOR DARK_GRAY}. It's a\l"
	.string "popular destination for Trainers\l"
	.string "obsessed with strategy.\p"
	.string "Hey, you're new here, right? Go {COLOR GREEN}try the\n"
	.string "Battle Pavilion{COLOR DARK_GRAY} and let me know how it\l"
	.string "went!$"

SofosCity_EventScript_ManOutsideBattlePavilion_Text_3:
# 512 "data/maps/SofosCity/scripts.pory"
	.string "Chaire! Have you tried participating in\n"
	.string "the {COLOR GREEN}Sofos City Battle Pavilion{COLOR DARK_GRAY} yet?$"

SofosCity_EventScript_ManOutsideBattlePavilion_Text_4:
# 520 "data/maps/SofosCity/scripts.pory"
	.string "Opa! You did it! Did you have fun?\n"
	.string "Right, right, your reward. I hope you\l"
	.string "continue to participate in Battle\l"
	.string "Pavilions across Ilios!$"

SofosCity_EventScript_ManAdmiringTowerRuin_Text_0:
# 536 "data/maps/SofosCity/scripts.pory"
	.string "Curious Man$"

SofosCity_EventScript_ManAdmiringTowerRuin_Text_1:
# 537 "data/maps/SofosCity/scripts.pory"
	.string "There are ruins all over the Ilios\n"
	.string "Region, but those around Sofos City are\l"
	.string "unique. In the {COLOR GREEN}Acropolis Temple{COLOR DARK_GRAY} here,\l"
	.string "people still pay respect to the\l"
	.string "{COLOR GREEN}Elemental Beasts Trio{COLOR DARK_GRAY}. Most other\l"
	.string "ancient sites are pretty much\l"
	.string "abandoned!$"

SofosCity_EventScript_TogaGirlsAtAcropolis_Text_0:
# 547 "data/maps/SofosCity/scripts.pory"
	.string "Toga Woman$"

SofosCity_EventScript_TogaGirlsAtAcropolis_Text_1:
# 548 "data/maps/SofosCity/scripts.pory"
	.string "Welcome to the Sofos City {COLOR GREEN}Acropolis\n"
	.string "Temple{COLOR DARK_GRAY}. Feel free to pay your respects\l"
	.string "here.$"

SofosCIty_EventScript_BugCatcher_Text_0:
# 558 "data/maps/SofosCity/scripts.pory"
	.string "Bug Catcher$"

SofosCIty_EventScript_BugCatcher_Text_1:
# 559 "data/maps/SofosCity/scripts.pory"
	.string "I live in the center of Sofos City, but I\n"
	.string "walk out here every day to look for\l"
	.string "Pokémon! I love being so close to the\l"
	.string "forest.$"

SofosCity_EventScript_LassInTropics_Text_0:
# 569 "data/maps/SofosCity/scripts.pory"
	.string "Lass$"

SofosCity_EventScript_LassInTropics_Text_1:
# 570 "data/maps/SofosCity/scripts.pory"
	.string "Not too many people come so far from\n"
	.string "the city walls. Lots of wild Pokémon are\l"
	.string "out here, and plenty of city people\l"
	.string "aren't a fan of that.$"

SofosCity_EventScript_ManByShallows_Text_0:
# 581 "data/maps/SofosCity/scripts.pory"
	.string "I come down here to cool off and watch\n"
	.string "Pokémon swim around. Sometimes, brave\l"
	.string "Pokémon come up into the shallows to\l"
	.string "say hello!$"

SofosCity_EventScript_FatManByCave_Text_0:
# 591 "data/maps/SofosCity/scripts.pory"
	.string "Fat Man$"

SofosCity_EventScript_FatManByCave_Text_1:
# 592 "data/maps/SofosCity/scripts.pory"
	.string "When I was a kid, everyone said to stay\n"
	.string "away from the Satyr's Lair, that small\l"
	.string "cave in the cliffside. I don't believe\l"
	.string "the stories anymore, but... well, I just\l"
	.string "don't want to go in!$"

SofosCity_EventScript_GoodRodFishingGuru_Text_0:
# 602 "data/maps/SofosCity/scripts.pory"
	.string "Fishing Guru$"

SofosCity_EventScript_GoodRodFishingGuru_Text_1:
# 605 "data/maps/SofosCity/scripts.pory"
	.string "Hey! Is that a Pokédex from the Acrisia\n"
	.string "University? I used to visit all the time!\p"
	.string "You've come quite a long way. Here,\n"
	.string "maybe this'll help on your journey.$"

SofosCity_EventScript_GoodRodFishingGuru_Text_2:
# 610 "data/maps/SofosCity/scripts.pory"
	.string "The {COLOR GREEN}Good Rod{COLOR DARK_GRAY} can give you access to a\n"
	.string "wide array of Water-dwelling Pokémon.\l"
	.string "Maybe they can help you handle the\l"
	.string "next Gym Leader!$"

SofosCity_EventScript_GoodRodFishingGuru_Text_3:
# 615 "data/maps/SofosCity/scripts.pory"
	.string "The {COLOR GREEN}Good Rod{COLOR DARK_GRAY} allows you to fish up a\n"
	.string "wide array of Water-dwelling Pokémon.\l"
	.string "Hey, you might even find some treasure\l"
	.string "in the water!$"

SofosCity_EventScript_Trainer_SofosCity_Grunt_Text_0:
# 625 "data/maps/SofosCity/scripts.pory"
	.string "Grunt$"

SofosCity_EventScript_Trainer_SofosCity_Grunt_Text_1:
# 626 "data/maps/SofosCity/scripts.pory"
	.string "Well, I guess I'm not the WORST Grunt\n"
	.string "ever. There was that one guy who messed\l"
	.string "up stealing a Pokédex. He lost to some\l"
	.string "new, weak Trainer!$"

SofosCity_EventScript_SwimmerF_Text_0:
# 644 "data/maps/SofosCity/scripts.pory"
	.string "Swimmer$"

SofosCity_EventScript_SwimmerF_Text_1:
# 645 "data/maps/SofosCity/scripts.pory"
	.string "The area around Sofos City is littered\n"
	.string "with rocks in the shallowest parts.\l"
	.string "Most swimmers choose to go further out\l"
	.string "to the east, where the water is deeper\l"
	.string "but relatively safe.$"

SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_0:
# 695 "data/maps/SofosCity/scripts.pory"
	.string "Piraeus$"

SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_1:
# 696 "data/maps/SofosCity/scripts.pory"
	.string "{PLAYER}!! Come on over here!$"

SofosCity_EventScript_TryPiraeusKiposTownEvent_Text_2:
# 724 "data/maps/SofosCity/scripts.pory"
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
# 631 "data/maps/SofosCity/scripts.pory"
	.string "Hold up! I was told to stop anyone from\n"
	.string "getting into {COLOR GREEN}Satyr's Lair{COLOR DARK_GRAY}!$"

SofosCity_Text_Trainer_SofosCity_GruntDefeat::
# 635 "data/maps/SofosCity/scripts.pory"
	.string "Darn. I must be the worst Grunt in the\n"
	.string "history of Team Chimera!$"

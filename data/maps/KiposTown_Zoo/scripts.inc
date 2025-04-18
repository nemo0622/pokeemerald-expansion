KiposTown_Zoo_MapScripts::
# 6 "data/maps/KiposTown_Zoo/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KiposTown_Zoo_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/KiposTown_Zoo/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, KiposTown_Zoo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

KiposTown_Zoo_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/KiposTown_Zoo/scripts.pory"
	special UpdateZooGraphics_South
	return

KiposTown_Zoo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/KiposTown_Zoo/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, KiposTown_Zoo_EventScript_CheckEventStatus
	.2byte 0


KiposTown_Zoo_EventScript_CheckEventStatus::
# 13 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_unset FLAG_DID_PIRAEUS_SAIL_TO_KIPOS_TOWN_EVENT, KiposTown_Zoo_EventScript_CheckEventStatus_2
KiposTown_Zoo_EventScript_CheckEventStatus_1:
# 20 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end

KiposTown_Zoo_EventScript_CheckEventStatus_2:
# 17 "data/maps/KiposTown_Zoo/scripts.pory"
	goto KiposTown_Zoo_EventScript_PlayerShownAround
	goto KiposTown_Zoo_EventScript_CheckEventStatus_1


KiposTown_Zoo_EventScript_PlayerShownAround::
# 26 "data/maps/KiposTown_Zoo/scripts.pory"
	lockall
# 27 "data/maps/KiposTown_Zoo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 28 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmovement 0
# 29 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 10
# 31 "data/maps/KiposTown_Zoo/scripts.pory"
	applymovement 2, KiposTown_Zoo_Movement_RusselWalkToGirafarig
# 32 "data/maps/KiposTown_Zoo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KiposTown_Zoo_Movement_PlayerWalkToGirafarig
# 33 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmovement 0
# 34 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 10
# 36 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_EventScript_PlayerShownAround_Text_0
# 37 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EventScript_PlayerShownAround_Text_1
# 38 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 40 "data/maps/KiposTown_Zoo/scripts.pory"
	applymovement 2, KiposTown_Zoo_Movement_RusselWalkToSwampExhibit
# 41 "data/maps/KiposTown_Zoo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KiposTown_Zoo_Movement_PlayerWalkToSwampExhibit
# 42 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmovement 0
# 43 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 10
# 45 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_EventScript_PlayerShownAround_Text_0
# 46 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EventScript_PlayerShownAround_Text_2
# 47 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 48 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 49 "data/maps/KiposTown_Zoo/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 50 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmovement 0
# 51 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 10
# 52 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_EventScript_PlayerShownAround_Text_0
# 53 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EventScript_PlayerShownAround_Text_3
# 54 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 55 "data/maps/KiposTown_Zoo/scripts.pory"
	giveitem ITEM_ULTRA_BALL, 10
# 56 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 57 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 5
# 58 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_EventScript_PlayerShownAround_Text_0
# 59 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EventScript_PlayerShownAround_Text_4
# 60 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 62 "data/maps/KiposTown_Zoo/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 63 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 64 "data/maps/KiposTown_Zoo/scripts.pory"
	hideobjectat 2, MAP_KIPOS_TOWN_ZOO
# 65 "data/maps/KiposTown_Zoo/scripts.pory"
	removeobject 2
# 66 "data/maps/KiposTown_Zoo/scripts.pory"
	setflag FLAG_DID_PIRAEUS_SAIL_TO_KIPOS_TOWN_EVENT
# 67 "data/maps/KiposTown_Zoo/scripts.pory"
	clearflag FLAG_HIDE_RUSSEL_DURING_ZOO_CUTSCENE
# 68 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TOTAL_NUM_ZOO_DONATIONS, 0
# 69 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 70 "data/maps/KiposTown_Zoo/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 72 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 73 "data/maps/KiposTown_Zoo/scripts.pory"
	startquest QUEST_ZOOKEEPER
# 75 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end


# 79 "data/maps/KiposTown_Zoo/scripts.pory"
KiposTown_Zoo_Movement_RusselWalkToGirafarig:
# 81 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 81 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 82 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 82 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 82 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 82 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 83 "data/maps/KiposTown_Zoo/scripts.pory"
	face_up
# 84 "data/maps/KiposTown_Zoo/scripts.pory"
	step_end

# 86 "data/maps/KiposTown_Zoo/scripts.pory"
KiposTown_Zoo_Movement_PlayerWalkToGirafarig:
# 88 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 88 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 88 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 89 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 89 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 89 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 90 "data/maps/KiposTown_Zoo/scripts.pory"
	face_up
# 91 "data/maps/KiposTown_Zoo/scripts.pory"
	step_end

# 93 "data/maps/KiposTown_Zoo/scripts.pory"
KiposTown_Zoo_Movement_RusselWalkToSwampExhibit:
# 95 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_down
# 96 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 96 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 96 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 96 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 96 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 97 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 97 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 97 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 97 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 97 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 97 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 98 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 98 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 98 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 98 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 99 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 100 "data/maps/KiposTown_Zoo/scripts.pory"
	face_left
# 101 "data/maps/KiposTown_Zoo/scripts.pory"
	step_end

# 103 "data/maps/KiposTown_Zoo/scripts.pory"
KiposTown_Zoo_Movement_PlayerWalkToSwampExhibit:
# 105 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 106 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_down
# 107 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 107 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 107 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 107 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 107 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 108 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 108 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 108 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 108 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 108 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 108 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 109 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 109 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 109 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 110 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 111 "data/maps/KiposTown_Zoo/scripts.pory"
	face_right
# 112 "data/maps/KiposTown_Zoo/scripts.pory"
	step_end

KiposTown_Zoo_DirectionSign_South_1::
# 117 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 118 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_DirectionSign_South_1_Text_0
# 119 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 120 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_DirectionSign_South_2::
# 126 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 127 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_DirectionSign_South_2_Text_0
# 128 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 129 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_BuildingSign_SpecialtyBuilding::
# 135 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 136 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_BuildingSign_SpecialtyBuilding_Text_0
# 137 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 138 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_BuildingSign_HerpetofaunaBuilding::
# 144 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 145 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_BuildingSign_HerpetofaunaBuilding_Text_0
# 146 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 147 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_End::
# 157 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 158 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end


KiposTown_Zoo_PokemonSign_DonationScript::
# 164 "data/maps/KiposTown_Zoo/scripts.pory"
	special ChoosePartyMon
# 165 "data/maps/KiposTown_Zoo/scripts.pory"
	waitstate
# 167 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, KiposTown_Zoo_PokemonSign_End
# 169 "data/maps/KiposTown_Zoo/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 170 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_RESULT
# 172 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_0x8003, SPECIES_EGG
	goto_if_eq KiposTown_Zoo_PokemonSign_DonationScript_2
KiposTown_Zoo_PokemonSign_DonationScript_1:
# 179 "data/maps/KiposTown_Zoo/scripts.pory"
	special GetZooDonationValidity
# 180 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_0x8002, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_DonationScript_5
# 201 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8003
# 202 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_DonationScript_Text_2, MSGBOX_YESNO
# 203 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_DonationScript_7
# 209 "data/maps/KiposTown_Zoo/scripts.pory"
	special DonateMonToZoo
# 212 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_eq KiposTown_Zoo_PokemonSign_DonationScript_15
KiposTown_Zoo_PokemonSign_DonationScript_14:
# 219 "data/maps/KiposTown_Zoo/scripts.pory"
	switch VAR_TEMP_0
# 221 "data/maps/KiposTown_Zoo/scripts.pory"
	case 1, KiposTown_Zoo_PokemonSign_DonationScript_19
# 223 "data/maps/KiposTown_Zoo/scripts.pory"
	case 2, KiposTown_Zoo_PokemonSign_DonationScript_20
# 225 "data/maps/KiposTown_Zoo/scripts.pory"
	case 3, KiposTown_Zoo_PokemonSign_DonationScript_21
# 227 "data/maps/KiposTown_Zoo/scripts.pory"
	case 4, KiposTown_Zoo_PokemonSign_DonationScript_22
# 229 "data/maps/KiposTown_Zoo/scripts.pory"
	case 5, KiposTown_Zoo_PokemonSign_DonationScript_23
# 231 "data/maps/KiposTown_Zoo/scripts.pory"
	case 6, KiposTown_Zoo_PokemonSign_DonationScript_24
# 233 "data/maps/KiposTown_Zoo/scripts.pory"
	case 7, KiposTown_Zoo_PokemonSign_DonationScript_25
# 235 "data/maps/KiposTown_Zoo/scripts.pory"
	case 8, KiposTown_Zoo_PokemonSign_DonationScript_26
# 237 "data/maps/KiposTown_Zoo/scripts.pory"
	case 9, KiposTown_Zoo_PokemonSign_DonationScript_27
# 239 "data/maps/KiposTown_Zoo/scripts.pory"
	case 10, KiposTown_Zoo_PokemonSign_DonationScript_28
# 241 "data/maps/KiposTown_Zoo/scripts.pory"
	case 11, KiposTown_Zoo_PokemonSign_DonationScript_29
# 243 "data/maps/KiposTown_Zoo/scripts.pory"
	case 12, KiposTown_Zoo_PokemonSign_DonationScript_30
# 245 "data/maps/KiposTown_Zoo/scripts.pory"
	case 13, KiposTown_Zoo_PokemonSign_DonationScript_31
# 247 "data/maps/KiposTown_Zoo/scripts.pory"
	case 14, KiposTown_Zoo_PokemonSign_DonationScript_32
# 249 "data/maps/KiposTown_Zoo/scripts.pory"
	case 15, KiposTown_Zoo_PokemonSign_DonationScript_33
# 251 "data/maps/KiposTown_Zoo/scripts.pory"
	case 16, KiposTown_Zoo_PokemonSign_DonationScript_34
# 253 "data/maps/KiposTown_Zoo/scripts.pory"
	case 17, KiposTown_Zoo_PokemonSign_DonationScript_35
# 255 "data/maps/KiposTown_Zoo/scripts.pory"
	case 18, KiposTown_Zoo_PokemonSign_DonationScript_36
# 257 "data/maps/KiposTown_Zoo/scripts.pory"
	case 19, KiposTown_Zoo_PokemonSign_DonationScript_37
# 259 "data/maps/KiposTown_Zoo/scripts.pory"
	case 20, KiposTown_Zoo_PokemonSign_DonationScript_38
# 261 "data/maps/KiposTown_Zoo/scripts.pory"
	case 21, KiposTown_Zoo_PokemonSign_DonationScript_39
# 263 "data/maps/KiposTown_Zoo/scripts.pory"
	case 22, KiposTown_Zoo_PokemonSign_DonationScript_40
# 265 "data/maps/KiposTown_Zoo/scripts.pory"
	case 23, KiposTown_Zoo_PokemonSign_DonationScript_41
# 267 "data/maps/KiposTown_Zoo/scripts.pory"
	case 24, KiposTown_Zoo_PokemonSign_DonationScript_42
# 269 "data/maps/KiposTown_Zoo/scripts.pory"
	case 25, KiposTown_Zoo_PokemonSign_DonationScript_43
# 271 "data/maps/KiposTown_Zoo/scripts.pory"
	case 26, KiposTown_Zoo_PokemonSign_DonationScript_44
# 273 "data/maps/KiposTown_Zoo/scripts.pory"
	case 27, KiposTown_Zoo_PokemonSign_DonationScript_45
# 275 "data/maps/KiposTown_Zoo/scripts.pory"
	case 28, KiposTown_Zoo_PokemonSign_DonationScript_46
# 277 "data/maps/KiposTown_Zoo/scripts.pory"
	case 29, KiposTown_Zoo_PokemonSign_DonationScript_47
# 279 "data/maps/KiposTown_Zoo/scripts.pory"
	case 30, KiposTown_Zoo_PokemonSign_DonationScript_48
# 281 "data/maps/KiposTown_Zoo/scripts.pory"
	case 31, KiposTown_Zoo_PokemonSign_DonationScript_49
# 283 "data/maps/KiposTown_Zoo/scripts.pory"
	case 32, KiposTown_Zoo_PokemonSign_DonationScript_50
# 285 "data/maps/KiposTown_Zoo/scripts.pory"
	case 33, KiposTown_Zoo_PokemonSign_DonationScript_51
# 287 "data/maps/KiposTown_Zoo/scripts.pory"
	case 34, KiposTown_Zoo_PokemonSign_DonationScript_52
# 289 "data/maps/KiposTown_Zoo/scripts.pory"
	case 35, KiposTown_Zoo_PokemonSign_DonationScript_53
# 291 "data/maps/KiposTown_Zoo/scripts.pory"
	case 36, KiposTown_Zoo_PokemonSign_DonationScript_54
# 293 "data/maps/KiposTown_Zoo/scripts.pory"
	case 37, KiposTown_Zoo_PokemonSign_DonationScript_55
# 295 "data/maps/KiposTown_Zoo/scripts.pory"
	case 38, KiposTown_Zoo_PokemonSign_DonationScript_56
# 297 "data/maps/KiposTown_Zoo/scripts.pory"
	case 39, KiposTown_Zoo_PokemonSign_DonationScript_57
# 299 "data/maps/KiposTown_Zoo/scripts.pory"
	case 40, KiposTown_Zoo_PokemonSign_DonationScript_58
# 301 "data/maps/KiposTown_Zoo/scripts.pory"
	case 41, KiposTown_Zoo_PokemonSign_DonationScript_59
# 303 "data/maps/KiposTown_Zoo/scripts.pory"
	case 42, KiposTown_Zoo_PokemonSign_DonationScript_60
# 305 "data/maps/KiposTown_Zoo/scripts.pory"
	case 43, KiposTown_Zoo_PokemonSign_DonationScript_61
# 307 "data/maps/KiposTown_Zoo/scripts.pory"
	case 44, KiposTown_Zoo_PokemonSign_DonationScript_62
# 309 "data/maps/KiposTown_Zoo/scripts.pory"
	case 45, KiposTown_Zoo_PokemonSign_DonationScript_63
# 311 "data/maps/KiposTown_Zoo/scripts.pory"
	case 46, KiposTown_Zoo_PokemonSign_DonationScript_64
KiposTown_Zoo_PokemonSign_DonationScript_17:
# 315 "data/maps/KiposTown_Zoo/scripts.pory"
	addvar VAR_TOTAL_NUM_ZOO_DONATIONS, 1
# 317 "data/maps/KiposTown_Zoo/scripts.pory"
	playfanfare FANFARE_LEVEL_UP
# 318 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_DonationScript_Text_4
# 319 "data/maps/KiposTown_Zoo/scripts.pory"
	waitfanfare
# 320 "data/maps/KiposTown_Zoo/scripts.pory"
	goto KiposTown_Zoo_PokemonSign_End
	return

KiposTown_Zoo_PokemonSign_DonationScript_2:
# 174 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_DonationScript_Text_0
# 175 "data/maps/KiposTown_Zoo/scripts.pory"
	goto KiposTown_Zoo_PokemonSign_End
	goto KiposTown_Zoo_PokemonSign_DonationScript_1

KiposTown_Zoo_PokemonSign_DonationScript_5:
# 182 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_DonationScript_Text_1, MSGBOX_YESNO
# 183 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 184 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_DonationScript_11
# 190 "data/maps/KiposTown_Zoo/scripts.pory"
	goto KiposTown_Zoo_PokemonSign_DonationScript
KiposTown_Zoo_PokemonSign_DonationScript_10:
# 192 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_DonationScript_7:
# 205 "data/maps/KiposTown_Zoo/scripts.pory"
	goto KiposTown_Zoo_PokemonSign_End
	return

KiposTown_Zoo_PokemonSign_DonationScript_11:
# 186 "data/maps/KiposTown_Zoo/scripts.pory"
	goto KiposTown_Zoo_PokemonSign_End
	goto KiposTown_Zoo_PokemonSign_DonationScript_10

KiposTown_Zoo_PokemonSign_DonationScript_15:
# 214 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_DonationScript_Text_3
# 215 "data/maps/KiposTown_Zoo/scripts.pory"
	goto KiposTown_Zoo_PokemonSign_End
	goto KiposTown_Zoo_PokemonSign_DonationScript_14

KiposTown_Zoo_PokemonSign_DonationScript_19:
# 222 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_01_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_20:
# 224 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_01_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_21:
# 226 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_01_3, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_22:
# 228 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_01_4, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_23:
# 230 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_02_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_24:
# 232 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_03_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_25:
# 234 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_03_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_26:
# 236 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_03_3, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_27:
# 238 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_04_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_28:
# 240 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_04_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_29:
# 242 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_04_3, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_30:
# 244 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_05_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_31:
# 246 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_05_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_32:
# 248 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_06_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_33:
# 250 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_06_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_34:
# 252 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_07_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_35:
# 254 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_07_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_36:
# 256 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_08_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_37:
# 258 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_08_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_38:
# 260 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_09_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_39:
# 262 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_10_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_40:
# 264 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_10_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_41:
# 266 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_10_3, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_42:
# 268 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_11_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_43:
# 270 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_11_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_44:
# 272 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_12_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_45:
# 274 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_12_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_46:
# 276 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_13_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_47:
# 278 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_13_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_48:
# 280 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_14_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_49:
# 282 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_14_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_50:
# 284 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_IN_01_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_51:
# 286 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_IN_01_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_52:
# 288 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_IN_01_3, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_53:
# 290 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_IN_02_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_54:
# 292 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_IN_02_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_55:
# 294 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_IN_03_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_56:
# 296 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_IN_03_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_57:
# 298 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_01_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_58:
# 300 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_01_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_59:
# 302 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_02_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_60:
# 304 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_02_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_61:
# 306 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_03_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_62:
# 308 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_03_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_63:
# 310 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_64:
# 312 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17


KiposTown_Zoo_PokemonSign_Girafarig::
# 331 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 332 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Girafarig_Text_0
# 333 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 335 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_0x8003, SPECIES_GIRAFARIG
# 336 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 337 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 338 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 339 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 341 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end


KiposTown_Zoo_PokemonSign_Forest::
# 348 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 351 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_01_1
# 352 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_01_2
# 353 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_2
KiposTown_Zoo_PokemonSign_Forest_1:
# 357 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_5
KiposTown_Zoo_PokemonSign_Forest_4:
# 367 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_1
# 368 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 369 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_2
# 370 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 371 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_01_3
# 372 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_01_4
# 373 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_8
KiposTown_Zoo_PokemonSign_Forest_7:
# 377 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_4, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_11
KiposTown_Zoo_PokemonSign_Forest_10:
# 381 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_3
# 382 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 385 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Forest_14
KiposTown_Zoo_PokemonSign_Forest_13:
# 429 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_17
# 438 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_18
# 447 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_19
# 456 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_4, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_20
KiposTown_Zoo_PokemonSign_Forest_16:
# 466 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Forest_2:
# 355 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Forest_1

KiposTown_Zoo_PokemonSign_Forest_5:
# 359 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Forest_4

KiposTown_Zoo_PokemonSign_Forest_8:
# 375 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Forest_7

KiposTown_Zoo_PokemonSign_Forest_11:
# 379 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Forest_10

KiposTown_Zoo_PokemonSign_Forest_14:
# 388 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_4, MSGBOX_YESNO
# 389 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 390 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_25
	goto KiposTown_Zoo_PokemonSign_Forest_13

KiposTown_Zoo_PokemonSign_Forest_17:
# 432 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 1
# 434 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_5, MSGBOX_YESNO
# 435 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 436 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Forest_16

KiposTown_Zoo_PokemonSign_Forest_18:
# 441 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 2
# 443 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_6, MSGBOX_YESNO
# 444 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 445 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Forest_16

KiposTown_Zoo_PokemonSign_Forest_19:
# 450 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 3
# 452 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_7, MSGBOX_YESNO
# 453 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 454 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Forest_16

KiposTown_Zoo_PokemonSign_Forest_20:
# 459 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 4
# 461 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_8, MSGBOX_YESNO
# 462 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 463 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Forest_16

KiposTown_Zoo_PokemonSign_Forest_25:
# 392 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_01_1
# 393 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 394 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 395 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 396 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 398 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Forest_28
KiposTown_Zoo_PokemonSign_Forest_27:
# 407 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_3, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Forest_31
KiposTown_Zoo_PokemonSign_Forest_30:
# 416 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_4, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Forest_33
	goto KiposTown_Zoo_PokemonSign_Forest_13

KiposTown_Zoo_PokemonSign_Forest_28:
# 400 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 401 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_01_2
# 402 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 403 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 404 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 405 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Forest_27

KiposTown_Zoo_PokemonSign_Forest_31:
# 409 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 410 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_01_3
# 411 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 412 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 413 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 414 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Forest_30

KiposTown_Zoo_PokemonSign_Forest_33:
# 418 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 419 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_01_4
# 420 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 421 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 422 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 423 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Forest_13


KiposTown_Zoo_EnvironmentSign_Forest::
# 472 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 473 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Forest_Text_0
# 474 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 475 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Nest::
# 482 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 485 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_02_1
# 486 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_02_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Nest_2
KiposTown_Zoo_PokemonSign_Nest_1:
# 492 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Nest_Text_0
# 493 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 496 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_02_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Nest_5
KiposTown_Zoo_PokemonSign_Nest_4:
# 512 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_02_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Nest_8
KiposTown_Zoo_PokemonSign_Nest_7:
# 522 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Nest_2:
# 488 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Nest_1

KiposTown_Zoo_PokemonSign_Nest_5:
# 499 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Nest_Text_1, MSGBOX_YESNO
# 500 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 501 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Nest_10
	goto KiposTown_Zoo_PokemonSign_Nest_4

KiposTown_Zoo_PokemonSign_Nest_8:
# 515 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 5
# 517 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_5, MSGBOX_YESNO
# 518 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 519 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Nest_7

KiposTown_Zoo_PokemonSign_Nest_10:
# 503 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_02_1
# 504 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 505 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 506 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 507 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Nest_4


KiposTown_Zoo_EnvironmentSign_Nest::
# 528 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 529 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Nest_Text_0
# 530 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 531 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Rainforest::
# 538 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 541 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_03_1
# 542 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_03_2
# 543 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_3, VAR_ZOO_POKEMON_ENCLOSURE_03_3
# 544 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Rainforest_2
KiposTown_Zoo_PokemonSign_Rainforest_1:
# 548 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Rainforest_5
KiposTown_Zoo_PokemonSign_Rainforest_4:
# 552 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Rainforest_8
KiposTown_Zoo_PokemonSign_Rainforest_7:
# 558 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Rainforest_Text_0
# 559 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 562 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Rainforest_11
KiposTown_Zoo_PokemonSign_Rainforest_10:
# 597 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Rainforest_14
# 606 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Rainforest_15
# 615 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Rainforest_16
KiposTown_Zoo_PokemonSign_Rainforest_13:
# 625 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Rainforest_2:
# 546 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Rainforest_1

KiposTown_Zoo_PokemonSign_Rainforest_5:
# 550 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Rainforest_4

KiposTown_Zoo_PokemonSign_Rainforest_8:
# 554 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_3, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Rainforest_7

KiposTown_Zoo_PokemonSign_Rainforest_11:
# 565 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_4, MSGBOX_YESNO
# 566 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 567 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Rainforest_20
	goto KiposTown_Zoo_PokemonSign_Rainforest_10

KiposTown_Zoo_PokemonSign_Rainforest_14:
# 600 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 6
# 602 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_5, MSGBOX_YESNO
# 603 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 604 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Rainforest_13

KiposTown_Zoo_PokemonSign_Rainforest_15:
# 609 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 7
# 611 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_6, MSGBOX_YESNO
# 612 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 613 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Rainforest_13

KiposTown_Zoo_PokemonSign_Rainforest_16:
# 618 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 8
# 620 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_7, MSGBOX_YESNO
# 621 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 622 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Rainforest_13

KiposTown_Zoo_PokemonSign_Rainforest_20:
# 569 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_03_1
# 570 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 571 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 572 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 573 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 575 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Rainforest_23
KiposTown_Zoo_PokemonSign_Rainforest_22:
# 584 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_3, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Rainforest_25
	goto KiposTown_Zoo_PokemonSign_Rainforest_10

KiposTown_Zoo_PokemonSign_Rainforest_23:
# 577 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 578 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_03_2
# 579 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 580 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 581 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 582 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Rainforest_22

KiposTown_Zoo_PokemonSign_Rainforest_25:
# 586 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 587 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_03_3
# 588 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 589 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 590 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 591 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Rainforest_10


KiposTown_Zoo_EnvironmentSign_Rainforest::
# 631 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 632 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Rainforest_Text_0
# 633 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 634 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Suburbs::
# 641 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 644 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_04_1
# 645 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_04_2
# 646 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_3, VAR_ZOO_POKEMON_ENCLOSURE_04_3
# 647 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Suburbs_2
KiposTown_Zoo_PokemonSign_Suburbs_1:
# 651 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Suburbs_5
KiposTown_Zoo_PokemonSign_Suburbs_4:
# 655 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Suburbs_8
KiposTown_Zoo_PokemonSign_Suburbs_7:
# 661 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Suburbs_Text_0
# 662 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 665 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Suburbs_11
KiposTown_Zoo_PokemonSign_Suburbs_10:
# 700 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Suburbs_14
# 709 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Suburbs_15
# 718 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Suburbs_16
KiposTown_Zoo_PokemonSign_Suburbs_13:
# 728 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Suburbs_2:
# 649 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Suburbs_1

KiposTown_Zoo_PokemonSign_Suburbs_5:
# 653 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Suburbs_4

KiposTown_Zoo_PokemonSign_Suburbs_8:
# 657 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_3, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Suburbs_7

KiposTown_Zoo_PokemonSign_Suburbs_11:
# 668 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_4, MSGBOX_YESNO
# 669 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 670 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Suburbs_20
	goto KiposTown_Zoo_PokemonSign_Suburbs_10

KiposTown_Zoo_PokemonSign_Suburbs_14:
# 703 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 9
# 705 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_5, MSGBOX_YESNO
# 706 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 707 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Suburbs_13

KiposTown_Zoo_PokemonSign_Suburbs_15:
# 712 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 10
# 714 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_6, MSGBOX_YESNO
# 715 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 716 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Suburbs_13

KiposTown_Zoo_PokemonSign_Suburbs_16:
# 721 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 11
# 723 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_7, MSGBOX_YESNO
# 724 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 725 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Suburbs_13

KiposTown_Zoo_PokemonSign_Suburbs_20:
# 672 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_04_1
# 673 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 674 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 675 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 676 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 678 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Suburbs_23
KiposTown_Zoo_PokemonSign_Suburbs_22:
# 687 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_3, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Suburbs_25
	goto KiposTown_Zoo_PokemonSign_Suburbs_10

KiposTown_Zoo_PokemonSign_Suburbs_23:
# 680 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 681 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_04_2
# 682 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 683 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 684 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 685 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Suburbs_22

KiposTown_Zoo_PokemonSign_Suburbs_25:
# 689 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 690 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_04_3
# 691 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 692 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 693 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 694 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Suburbs_10


KiposTown_Zoo_EnvironmentSign_Suburbs::
# 734 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 735 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Suburbs_Text_0
# 736 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 737 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_HandsOnExhibitWarningSign::
# 743 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 744 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_HandsOnExhibitWarningSign_Text_0
# 745 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 746 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_EventScript_DomesticPokemonInteraction_1::
# 751 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 752 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 753 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_04_1
# 754 "data/maps/KiposTown_Zoo/scripts.pory"
	playmoncry VAR_ZOO_POKEMON_ENCLOSURE_04_1, CRY_MODE_NORMAL
# 755 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmoncry
# 756 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EventScript_DomesticPokemonInteraction_1_Text_0
# 757 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 758 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_EventScript_DomesticPokemonInteraction_2::
# 763 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 764 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 765 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_04_2
# 766 "data/maps/KiposTown_Zoo/scripts.pory"
	playmoncry VAR_ZOO_POKEMON_ENCLOSURE_04_2, CRY_MODE_NORMAL
# 767 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmoncry
# 768 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EventScript_DomesticPokemonInteraction_1_Text_0
# 769 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 770 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_EventScript_DomesticPokemonInteraction_3::
# 775 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 776 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 777 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_04_3
# 778 "data/maps/KiposTown_Zoo/scripts.pory"
	playmoncry VAR_ZOO_POKEMON_ENCLOSURE_04_3, CRY_MODE_NORMAL
# 779 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmoncry
# 780 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EventScript_DomesticPokemonInteraction_1_Text_0
# 781 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 782 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_FungalSwamp::
# 789 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 792 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_05_1
# 793 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_05_2
# 794 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_05_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_FungalSwamp_2
KiposTown_Zoo_PokemonSign_FungalSwamp_1:
# 798 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_05_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_FungalSwamp_5
KiposTown_Zoo_PokemonSign_FungalSwamp_4:
# 804 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_FungalSwamp_Text_0
# 805 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 808 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_05_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_FungalSwamp_8
KiposTown_Zoo_PokemonSign_FungalSwamp_7:
# 834 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_05_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_FungalSwamp_11
# 843 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_05_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_FungalSwamp_12
KiposTown_Zoo_PokemonSign_FungalSwamp_10:
# 853 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_FungalSwamp_2:
# 796 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_FungalSwamp_1

KiposTown_Zoo_PokemonSign_FungalSwamp_5:
# 800 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_FungalSwamp_4

KiposTown_Zoo_PokemonSign_FungalSwamp_8:
# 811 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_4, MSGBOX_YESNO
# 812 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 813 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_FungalSwamp_15
	goto KiposTown_Zoo_PokemonSign_FungalSwamp_7

KiposTown_Zoo_PokemonSign_FungalSwamp_11:
# 837 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 12
# 839 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_5, MSGBOX_YESNO
# 840 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 841 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_FungalSwamp_10

KiposTown_Zoo_PokemonSign_FungalSwamp_12:
# 846 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 13
# 848 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_6, MSGBOX_YESNO
# 849 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 850 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_FungalSwamp_10

KiposTown_Zoo_PokemonSign_FungalSwamp_15:
# 815 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_05_1
# 816 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 817 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 818 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 819 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 821 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_05_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_FungalSwamp_17
	goto KiposTown_Zoo_PokemonSign_FungalSwamp_7

KiposTown_Zoo_PokemonSign_FungalSwamp_17:
# 823 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 824 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_05_2
# 825 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 826 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 827 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 828 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_FungalSwamp_7


KiposTown_Zoo_EnvironmentSign_FungalSwamp::
# 859 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 860 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_FungalSwamp_Text_0
# 861 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 862 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Wetlands::
# 869 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 872 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_06_1
# 873 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_06_2
# 874 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_06_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Wetlands_2
KiposTown_Zoo_PokemonSign_Wetlands_1:
# 878 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_06_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Wetlands_5
KiposTown_Zoo_PokemonSign_Wetlands_4:
# 884 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Wetlands_Text_0
# 885 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 888 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_06_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Wetlands_8
KiposTown_Zoo_PokemonSign_Wetlands_7:
# 914 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_06_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Wetlands_11
# 923 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_06_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Wetlands_12
KiposTown_Zoo_PokemonSign_Wetlands_10:
# 933 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Wetlands_2:
# 876 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Wetlands_1

KiposTown_Zoo_PokemonSign_Wetlands_5:
# 880 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Wetlands_4

KiposTown_Zoo_PokemonSign_Wetlands_8:
# 891 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_4, MSGBOX_YESNO
# 892 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 893 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Wetlands_15
	goto KiposTown_Zoo_PokemonSign_Wetlands_7

KiposTown_Zoo_PokemonSign_Wetlands_11:
# 917 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 14
# 919 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_5, MSGBOX_YESNO
# 920 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 921 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Wetlands_10

KiposTown_Zoo_PokemonSign_Wetlands_12:
# 926 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 15
# 928 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_6, MSGBOX_YESNO
# 929 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 930 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Wetlands_10

KiposTown_Zoo_PokemonSign_Wetlands_15:
# 895 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_06_1
# 896 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 897 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 898 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 899 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 901 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_06_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Wetlands_17
	goto KiposTown_Zoo_PokemonSign_Wetlands_7

KiposTown_Zoo_PokemonSign_Wetlands_17:
# 903 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 904 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_06_2
# 905 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 906 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 907 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 908 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Wetlands_7


KiposTown_Zoo_EnvironmentSign_Wetlands::
# 939 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 940 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Wetlands_Text_0
# 941 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 942 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_South_NPC_Beauty::
# 952 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 953 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 954 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_Beauty_Text_0
# 955 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Beauty_Text_1
# 956 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 957 "data/maps/KiposTown_Zoo/scripts.pory"
	applymovement 30, Common_Movement_FaceOriginalDirection
# 958 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmovement 0
# 959 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_South_NPC_BugCatcher::
# 965 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 966 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 967 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_BugCatcher_Text_0
# 968 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_1, 0
	goto_if_gt KiposTown_Zoo_South_NPC_BugCatcher_2
# 975 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_BugCatcher_Text_2
# 976 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
KiposTown_Zoo_South_NPC_BugCatcher_1:
# 978 "data/maps/KiposTown_Zoo/scripts.pory"
	applymovement 31, Common_Movement_FaceOriginalDirection
# 979 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmovement 0
# 980 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end

KiposTown_Zoo_South_NPC_BugCatcher_2:
# 970 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_BugCatcher_Text_1
# 971 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
	goto KiposTown_Zoo_South_NPC_BugCatcher_1


KiposTown_Zoo_South_NPC_Woman::
# 986 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 987 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 988 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_Woman_Text_0
# 989 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_1, 0
	goto_if_gt KiposTown_Zoo_South_NPC_Woman_2
# 996 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Woman_Text_2
# 997 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
KiposTown_Zoo_South_NPC_Woman_1:
# 999 "data/maps/KiposTown_Zoo/scripts.pory"
	applymovement 32, Common_Movement_FaceOriginalDirection
# 1000 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmovement 0
# 1001 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end

KiposTown_Zoo_South_NPC_Woman_2:
# 991 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Woman_Text_1
# 992 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
	goto KiposTown_Zoo_South_NPC_Woman_1


KiposTown_Zoo_South_NPC_RichBoy::
# 1007 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 1008 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 1009 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_RichBoy_Text_0
# 1010 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_RichBoy_Text_1
# 1011 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1012 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_South_NPC_Youngster::
# 1018 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 1019 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 1020 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_Youngster_Text_0
# 1021 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Youngster_Text_1
# 1022 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1023 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_South_NPC_Worker::
# 1029 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 1030 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 1031 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_Worker_Text_0
# 1032 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_1, 0
	goto_if_gt KiposTown_Zoo_South_NPC_Worker_2
# 1039 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Worker_Text_2
# 1040 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
KiposTown_Zoo_South_NPC_Worker_1:
# 1042 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end

KiposTown_Zoo_South_NPC_Worker_2:
# 1034 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Worker_Text_1
# 1035 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
	goto KiposTown_Zoo_South_NPC_Worker_1


KiposTown_Zoo_South_NPC_OldWomanInHandsOn::
# 1048 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 1049 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 1050 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_0
# 1053 "data/maps/KiposTown_Zoo/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FILL_SUBURBS_ZOO
# 1054 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_South_NPC_OldWomanInHandsOn_2
# 1063 "data/maps/KiposTown_Zoo/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_FILL_SUBURBS_ZOO
# 1064 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KiposTown_Zoo_South_NPC_OldWomanInHandsOn_5
# 1074 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_3
# 1075 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1077 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 1078 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_1, 0
	goto_if_gt KiposTown_Zoo_South_NPC_OldWomanInHandsOn_11
KiposTown_Zoo_South_NPC_OldWomanInHandsOn_9:
# 1095 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_0
# 1096 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_5
# 1097 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
KiposTown_Zoo_South_NPC_OldWomanInHandsOn_4:
# 1100 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end

KiposTown_Zoo_South_NPC_OldWomanInHandsOn_2:
# 1056 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_1
# 1057 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1058 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end

KiposTown_Zoo_South_NPC_OldWomanInHandsOn_5:
# 1066 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_2
# 1067 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1069 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 1070 "data/maps/KiposTown_Zoo/scripts.pory"
	startquest QUEST_FILL_SUBURBS_ZOO
	goto KiposTown_Zoo_South_NPC_OldWomanInHandsOn_4

KiposTown_Zoo_South_NPC_OldWomanInHandsOn_8:
# 1080 "data/maps/KiposTown_Zoo/scripts.pory"
	applymovement 36, Common_Movement_Heart
# 1081 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmovement 0
# 1082 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 10
# 1083 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_0
# 1084 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_4
# 1085 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1086 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 5
# 1087 "data/maps/KiposTown_Zoo/scripts.pory"
	giveitem ITEM_TM_WISH
# 1088 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1090 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 1091 "data/maps/KiposTown_Zoo/scripts.pory"
	completequest QUEST_FILL_SUBURBS_ZOO
	goto KiposTown_Zoo_South_NPC_OldWomanInHandsOn_4

KiposTown_Zoo_South_NPC_OldWomanInHandsOn_10:
# 1078 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_3, 0
	goto_if_gt KiposTown_Zoo_South_NPC_OldWomanInHandsOn_8
	goto KiposTown_Zoo_South_NPC_OldWomanInHandsOn_9

KiposTown_Zoo_South_NPC_OldWomanInHandsOn_11:
# 1078 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_2, 0
	goto_if_gt KiposTown_Zoo_South_NPC_OldWomanInHandsOn_10
	goto KiposTown_Zoo_South_NPC_OldWomanInHandsOn_9


KiposTown_Zoo_South_NPC_Maniac::
# 1106 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 1107 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 1108 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_Maniac_Text_0
# 1109 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Maniac_Text_1
# 1110 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1111 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_South_NPC_Fisherman::
# 1117 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 1118 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 1119 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_Fisherman_Text_0
# 1120 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_06_2, 0
	goto_if_gt KiposTown_Zoo_South_NPC_Fisherman_2
# 1127 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Fisherman_Text_2
# 1128 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
KiposTown_Zoo_South_NPC_Fisherman_1:
# 1130 "data/maps/KiposTown_Zoo/scripts.pory"
	applymovement 38, Common_Movement_FaceOriginalDirection
# 1131 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmovement 0
# 1132 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end

KiposTown_Zoo_South_NPC_Fisherman_2:
# 1122 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Fisherman_Text_1
# 1123 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
	goto KiposTown_Zoo_South_NPC_Fisherman_1


KiposTown_Zoo_South_NPC_Girl::
# 1138 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 1139 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 1140 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_Girl_Text_0
# 1141 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Girl_Text_1
# 1142 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1143 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_South_NPC_CyclingTriathleteF::
# 1149 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 1150 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 1151 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_CyclingTriathleteF_Text_0
# 1152 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_CyclingTriathleteF_Text_1
# 1153 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1154 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_South_NPC_FatMan::
# 1160 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 1161 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 1162 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_FatMan_Text_0
# 1163 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_FatMan_Text_1
# 1164 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1165 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_South_NPC_HexManiac::
# 1171 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 1172 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 1173 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_HexManiac_Text_0
# 1174 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_HexManiac_Text_1
# 1175 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1176 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_South_NPC_Scientist::
# 1182 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 1183 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 1184 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_Scientist_Text_0
# 1185 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_02_1, 0
	goto_if_gt KiposTown_Zoo_South_NPC_Scientist_2
# 1193 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Scientist_Text_2
# 1194 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
KiposTown_Zoo_South_NPC_Scientist_1:
# 1196 "data/maps/KiposTown_Zoo/scripts.pory"
	applymovement 44, Common_Movement_FaceOriginalDirection
# 1197 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmovement 0
# 1198 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end

KiposTown_Zoo_South_NPC_Scientist_2:
# 1187 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_02_1
# 1188 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Scientist_Text_1
# 1189 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
	goto KiposTown_Zoo_South_NPC_Scientist_1


KiposTown_Zoo_EventScript_PlayerShownAround_Text_0:
# 36 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Mr. Russel$"

KiposTown_Zoo_EventScript_PlayerShownAround_Text_1:
# 37 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "This Girafarig was just about the only\n"
	.string "Pokémon not taken by Team Chimera. We\l"
	.string "lost over two dozen Pokémon in a single\l"
	.string "night...\p"
	.string "Girafarig was only saved by the Pokémon\n"
	.string "{COLOR GREEN}dwelling in the small cave{COLOR DARK_GRAY}, which has\l"
	.string "refused to come out since. Maybe it's\l"
	.string "waiting for a strong Trainer such as\l"
	.string "yourself.\p"
	.string "Come, let's look at some of the empty\n"
	.string "exhibits.$"

KiposTown_Zoo_EventScript_PlayerShownAround_Text_2:
# 46 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Our Zoo has a {COLOR GREEN}wide variety of Pokémon\n"
	.string "habitats{COLOR DARK_GRAY}, but unfortunately, they have\l"
	.string "been left barren.\p"
	.string "Team Chimera is long gone, with the\n"
	.string "stolen Pokémon scattered to the wind.\l"
	.string "We need your help to {COLOR GREEN}repopulate these\l"
	.string "Pokémon enclosures{COLOR DARK_GRAY}.\p"
	.string "Each enclosure has two informational\n"
	.string "signposts. The {COLOR GREEN}brown signs{COLOR DARK_GRAY} have\l"
	.string "information about the Pokémon in the\l"
	.string "exhibits. If there is an open space, you\l"
	.string "can {COLOR GREEN}deposit a Pokémon{COLOR DARK_GRAY} fitting the\l"
	.string "enclosure. But remember, {COLOR RED}any donated\l"
	.string "Pokémon will permanently be in the\l"
	.string "exhibit{COLOR DARK_GRAY}!\p"
	.string "The {COLOR GREEN}green signs{COLOR DARK_GRAY} provide extra\n"
	.string "information about an exhibit, which can\l"
	.string "clue you in on what Pokémon fit best.$"

KiposTown_Zoo_EventScript_PlayerShownAround_Text_3:
# 53 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Fates, look at the time! I apologize for\n"
	.string "talking your ear off. Here's a small gift\l"
	.string "from me, which should help you catch\l"
	.string "more Pokémon.$"

KiposTown_Zoo_EventScript_PlayerShownAround_Text_4:
# 59 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Make sure to come donate extra Pokémon\n"
	.string "you capture on your journey to {COLOR GREEN}help\l"
	.string "reinvigorate the Conservation Center{COLOR DARK_GRAY}.\l"
	.string "Thank you for your help in advance!$"

KiposTown_Zoo_DirectionSign_South_1_Text_0:
# 118 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "{LEFT_ARROW} Forest Exhibit\n"
	.string "{UP_ARROW} Rainforest & Hands-On Exhibit\p"
	.string "Fungal Swamp Exhibit {RIGHT_ARROW}\n"
	.string "Exit {DOWN_ARROW}$"

KiposTown_Zoo_DirectionSign_South_2_Text_0:
# 127 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "{LEFT_ARROW} Specialty Indoor Exhibits\n"
	.string "{UP_ARROW} 'Exotic Locale' Zoo Exhibits\p"
	.string "Herpetofauna Exhibits {RIGHT_ARROW}\n"
	.string "'Backyard Friends' Zoo Exhibits {DOWN_ARROW}$"

KiposTown_Zoo_BuildingSign_SpecialtyBuilding_Text_0:
# 136 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Indoor Exhibits - West Building\n"
	.string "Specialty Exhibits$"

KiposTown_Zoo_BuildingSign_HerpetofaunaBuilding_Text_0:
# 145 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Indoor Exhibits - East Building\n"
	.string "Herpetofauna: Reptiles and Amphibians$"

KiposTown_Zoo_PokemonSign_DonationScript_Text_0:
# 174 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Eggs cannot be donated to this exhibit.$"

KiposTown_Zoo_PokemonSign_DonationScript_Text_1:
# 182 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Unfortunately, this Pokémon is\n"
	.string "incompatible with this exhibit.\p"
	.string "Would you like to choose another\n"
	.string "Pokémon for this enclosure?$"

KiposTown_Zoo_PokemonSign_DonationScript_Text_2:
# 202 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Are you sure you want to donate\n"
	.string "{STR_VAR_1}? Remember,\l"
	.string "contributions to the Sunset Wildlife\l"
	.string "Conservation Center Zoo are {COLOR RED}permanent{COLOR DARK_GRAY}!\l"
	.string "The Pokémon will be cared for with love,\l"
	.string "but cannot be withdrawn.$"

KiposTown_Zoo_PokemonSign_DonationScript_Text_3:
# 214 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "The donation could not be accepted at\n"
	.string "this time. Please come back with more\l"
	.string "Pokémon in your party.$"

KiposTown_Zoo_PokemonSign_DonationScript_Text_4:
# 318 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Donated {STR_VAR_1} to the Exhibit!\n"
	.string "Return soon to view the Pokémon in it's\l"
	.string "new home!$"

KiposTown_Zoo_PokemonSign_Girafarig_Text_0:
# 332 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Special Enclosure: Welcome to the\n"
	.string "Sunset Wildlife Conservation Zoo!\p"
	.string "This Girafarig was the first Pokémon\n"
	.string "ever cared for by the Conservation\l"
	.string "Center. It has always been most\l"
	.string "comfortable nearby this small cave,\l"
	.string "making a home here.\p"
	.string "There's more written about Girafarig!$"

KiposTown_Zoo_PokemonSign_Forest_Text_0:
# 355 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "---$"

KiposTown_Zoo_PokemonSign_Forest_Text_1:
# 367 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 1: {COLOR GREEN}Forest{COLOR DARK_GRAY}$"

KiposTown_Zoo_PokemonSign_Forest_Text_2:
# 369 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Pokémon in Enclosure (South):\n"
	.string "{STR_VAR_1}, {STR_VAR_2}$"

KiposTown_Zoo_PokemonSign_Forest_Text_3:
# 381 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Pokémon in Enclosure (North):\n"
	.string "{STR_VAR_1}, {STR_VAR_2}$"

KiposTown_Zoo_PokemonSign_Forest_Text_4:
# 388 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "There's information about each Pokémon\n"
	.string "listed. Read it?$"

KiposTown_Zoo_PokemonSign_Forest_Text_5:
# 434 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "There are no Pokémon in the exhibit.\n"
	.string "Would you like to {COLOR GREEN}donate a Pokémon to\l"
	.string "the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_PokemonSign_Forest_Text_6:
# 443 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "There is room for a second Pokémon in\n"
	.string "this exhibit. Would you like to {COLOR GREEN}donate a\l"
	.string "Pokémon to the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_PokemonSign_Forest_Text_7:
# 452 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "There is room for a third Pokémon in\n"
	.string "this exhibit. Would you like to {COLOR GREEN}donate a\l"
	.string "Pokémon to the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_PokemonSign_Forest_Text_8:
# 461 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "There is room for a fourth Pokémon in\n"
	.string "this exhibit. Would you like to {COLOR GREEN}donate a\l"
	.string "Pokémon to the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_EnvironmentSign_Forest_Text_0:
# 473 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 1: {COLOR GREEN}Forest{COLOR DARK_GRAY}\p"
	.string "This enclosure is designed to replicate\n"
	.string "a natural woodland environment.\l"
	.string "Broadleaf trees are separated by small\l"
	.string "clearings and shrub growth, and food is\l"
	.string "plentiful for all Pokémon.\p"
	.string "Many {COLOR GREEN}Grass-type{COLOR DARK_GRAY} and {COLOR GREEN}Bug-type Pokémon{COLOR DARK_GRAY}\n"
	.string "can be found here, alongside other\l"
	.string "Pokémon of {COLOR GREEN}Normal and Flying-types{COLOR DARK_GRAY}.\l"
	.string "Hidden deep in these areas, some\l"
	.string "{COLOR GREEN}Psychic and Ghost-type{COLOR DARK_GRAY} Pokémon are\l"
	.string "known to thrive.$"

KiposTown_Zoo_PokemonSign_Nest_Text_0:
# 492 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 2: Nest\n"
	.string "Pokémon in Exhibit: {STR_VAR_1}$"

KiposTown_Zoo_PokemonSign_Nest_Text_1:
# 499 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "There's information about the Pokémon\n"
	.string "listed. Read it?$"

KiposTown_Zoo_EnvironmentSign_Nest_Text_0:
# 529 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 2: {COLOR GREEN}Nest{COLOR DARK_GRAY}\p"
	.string "Despite their vast evolutionary\n"
	.string "differences, all Pokémon recorded\l"
	.string "reproducing have done so through the\l"
	.string "production of {COLOR GREEN}Eggs{COLOR DARK_GRAY}. This small area is\l"
	.string "based on natural Pokémon nests, where\l"
	.string "they tend to lay 1-2 Eggs at a time.\p"
	.string "Although all Pokémon lay Eggs, some\n"
	.string "provide better parental care than\l"
	.string "others. Pokémon regarded as {COLOR GREEN}'cure and\l"
	.string "cuddly'{COLOR DARK_GRAY} are often best suited for\l"
	.string "nesting alongside Pokémon Eggs.\l"
	.string "Alternatively, Pokémon species with\l"
	.string "high levels of {COLOR GREEN}parental care{COLOR DARK_GRAY} can do well\l"
	.string "alongside other Eggs.$"

KiposTown_Zoo_PokemonSign_Rainforest_Text_0:
# 558 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 3: Rainforest\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}, {STR_VAR_3}$"

KiposTown_Zoo_EnvironmentSign_Rainforest_Text_0:
# 632 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 3: {COLOR GREEN}Rainforest{COLOR DARK_GRAY}\p"
	.string "These dense jungles are packed with\n"
	.string "trees and undergrowth, blooming in the\l"
	.string "heat and humidity of the tropics.\l"
	.string "Rainforests only cover a small\l"
	.string "percentage of the planet, but have the\l"
	.string "highest concentration of wildlife by\l"
	.string "far. Sadly, these critical ecosystems\l"
	.string "are threatened by deforestation and\l"
	.string "climate change.\p"
	.string "Of course, {COLOR GREEN}Grass and Bug-type{COLOR DARK_GRAY} Pokémon\n"
	.string "thrive in these areas. {COLOR GREEN}Birds{COLOR DARK_GRAY} also make\l"
	.string "their homes here, alongside a huge\l"
	.string "variety of {COLOR GREEN}primates{COLOR DARK_GRAY}.$"

KiposTown_Zoo_PokemonSign_Suburbs_Text_0:
# 661 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 4: Suburbs\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}, {STR_VAR_3}$"

KiposTown_Zoo_EnvironmentSign_Suburbs_Text_0:
# 735 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 4: {COLOR GREEN}Suburbs{COLOR DARK_GRAY}\p"
	.string "Humans are constantly modifying their\n"
	.string "environment, so naturally, some Pokémon\l"
	.string "have adapted to live in these\l"
	.string "conditions. From quiet walkways\l"
	.string "through woodlands to sprawling\l"
	.string "concrete cities, some Pokémon have\l"
	.string "found ways to coexist with human\l"
	.string "influences.\p"
	.string "In this hands-on exhibit, {COLOR GREEN}highly\n"
	.string "domesticated{COLOR DARK_GRAY} Pokémon are a great fit.\l"
	.string "{COLOR GREEN}Anthropomorphic{COLOR DARK_GRAY}, or Human-like,\l"
	.string "Pokémon are common here, alongside\l"
	.string "Pokémon connected to {COLOR GREEN}human activities{COLOR DARK_GRAY},\l"
	.string "from construction to pollution.$"

KiposTown_Zoo_HandsOnExhibitWarningSign_Text_0:
# 744 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Welcome! This is a {COLOR GREEN}Hands-On{COLOR DARK_GRAY} Pokémon\n"
	.string "Experience, allowing you to rest and\l"
	.string "relax alongside domesticated Pokémon!\p"
	.string "While it is perfectly safe inside this\n"
	.string "area, please be respectful of the\l"
	.string "Pokémon living here. Coexistence is\l"
	.string "key!$"

KiposTown_Zoo_EventScript_DomesticPokemonInteraction_1_Text_0:
# 756 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "The {STR_VAR_1} huffed out a\n"
	.string "greeting!$"

KiposTown_Zoo_PokemonSign_FungalSwamp_Text_0:
# 804 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 5: Fungal Swamp\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_EnvironmentSign_FungalSwamp_Text_0:
# 860 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 5: {COLOR GREEN}Fungal Swamp{COLOR DARK_GRAY}\p"
	.string "Fungi play crucial roles in our\n"
	.string "ecosystems, from associations with\l"
	.string "plant roots to decomposing all sorts of\l"
	.string "matter. Despite their importance, we\l"
	.string "know relatively little about fungi!\l"
	.string "That's why, here at the Sunset Wildlife\l"
	.string "Conservation Center, we've dedicated\l"
	.string "an entire display to fungi and the\l"
	.string "Pokémon that surround them.\p"
	.string "{COLOR GREEN}Bug, Dark, and Poison-type{COLOR DARK_GRAY} Pokémon are\n"
	.string "commonly associated with fungal\l"
	.string "growth. Other Pokémon associated with\l"
	.string "{COLOR GREEN}trickery{COLOR DARK_GRAY} or {COLOR GREEN}decay{COLOR DARK_GRAY} are also perfect for\l"
	.string "this environment!$"

KiposTown_Zoo_PokemonSign_Wetlands_Text_0:
# 884 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 6: Wetlands\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_EnvironmentSign_Wetlands_Text_0:
# 940 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 6: {COLOR GREEN}Wetlands{COLOR DARK_GRAY}\p"
	.string "Although most people steer clear of\n"
	.string "marshes and bogs, these habitats are\l"
	.string "key to the survival of many species.\l"
	.string "They also help prevent soil erosion and\l"
	.string "lessen the impact of floods, directly\l"
	.string "providing benefits to humans and\l"
	.string "Pokémon alike!\p"
	.string "{COLOR GREEN}Water, Poison, and Grass-type{COLOR DARK_GRAY} Pokémon\n"
	.string "thrive here, alongside various {COLOR GREEN}slimy{COLOR DARK_GRAY}\l"
	.string "Pokémon.$"

KiposTown_Zoo_South_NPC_Beauty_Text_0:
# 954 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Beauty$"

KiposTown_Zoo_South_NPC_Beauty_Text_1:
# 955 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "The first Pokémon donated to the\n"
	.string "Conservation Center... now it became\l"
	.string "the last one left after Team Chimera's\l"
	.string "visit. I'm glad the Girafarig somehow\l"
	.string "stayed, though. I always came and\l"
	.string "visited it when I was a kid!$"

KiposTown_Zoo_South_NPC_BugCatcher_Text_0:
# 967 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Bug Catcher$"

KiposTown_Zoo_South_NPC_BugCatcher_Text_1:
# 970 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Hey, there's a Pokémon in the exhibit\n"
	.string "again! I'm so glad!$"

KiposTown_Zoo_South_NPC_BugCatcher_Text_2:
# 975 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Sniff... I wanted to see the Pokémon,\n"
	.string "where'd they go?$"

KiposTown_Zoo_South_NPC_Woman_Text_0:
# 988 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Woman$"

KiposTown_Zoo_South_NPC_Woman_Text_1:
# 991 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "It looks like the Pokémon are coming\n"
	.string "back to the Zoo! Someone is donating\l"
	.string "them!$"

KiposTown_Zoo_South_NPC_Woman_Text_2:
# 996 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "My poor son is so disappointed about\n"
	.string "the Pokémon being stolen.$"

KiposTown_Zoo_South_NPC_RichBoy_Text_0:
# 1009 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Rich Boy$"

KiposTown_Zoo_South_NPC_RichBoy_Text_1:
# 1010 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "I hear that Zoos and Pokémon\n"
	.string "conservation programs are always a bit\l"
	.string "short on money. Maybe I could donate a\l"
	.string "few bucks!$"

KiposTown_Zoo_South_NPC_Youngster_Text_0:
# 1020 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Youngster$"

KiposTown_Zoo_South_NPC_Youngster_Text_1:
# 1021 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "We're learning about different Pokémon\n"
	.string "species in school. Some are always safe\l"
	.string "to be around, but others can be real\l"
	.string "scary!$"

KiposTown_Zoo_South_NPC_Worker_Text_0:
# 1031 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Worker$"

KiposTown_Zoo_South_NPC_Worker_Text_1:
# 1034 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "After a wild shift at the factory,\n"
	.string "there's nothing better than coming\l"
	.string "here and running around with Pokémon.\l"
	.string "It makes me feel like a kid again!$"

KiposTown_Zoo_South_NPC_Worker_Text_2:
# 1039 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Before all the Pokémon were taken, I\n"
	.string "used to come here to run around with\l"
	.string "the Pokémon. Now I just do it by\l"
	.string "myself... I must look so goofy!$"

KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_0:
# 1050 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Old Woman$"

KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_1:
# 1056 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Oh, it makes me so happy to see all the\n"
	.string "Pokémon back in this area!\l"
	.string "Kind-hearted people like you make the\l"
	.string "world a better place.$"

KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_2:
# 1066 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "It's been so sad in the Zoo since Team\n"
	.string "Chimera came and stole almost all the\l"
	.string "Pokémon...\p"
	.string "Hm? You're leading the effort to\n"
	.string "repopulate the Zoo, right? If you could\l"
	.string "spare the time, please, try to donate {COLOR GREEN}3\l"
	.string "Pokémon{COLOR DARK_GRAY} to this exhibit. I miss sitting\l"
	.string "with the little Pokémon!$"

KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_3:
# 1074 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Chaire, little one... how has donating\n"
	.string "Pokémon been going?$"

KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_4:
# 1084 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Ohoho, I knew you could do it! These old\n"
	.string "eyes can barely see, but I can feel all\l"
	.string "the Pokémon around me.\p"
	.string "Here, I want you to have this. I've held\n"
	.string "onto it for years, but it's time to pass\l"
	.string "it on.$"

KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_5:
# 1096 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "It's okay, I know this whole Zoo project\n"
	.string "is a massive task for a single person.\l"
	.string "But if anyone can do it, I'm sure it's\l"
	.string "you, honey!$"

KiposTown_Zoo_South_NPC_Maniac_Text_0:
# 1108 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Bug Maniac$"

KiposTown_Zoo_South_NPC_Maniac_Text_1:
# 1109 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Lots of people overlook insects, but\n"
	.string "they're actually way more diverse than\l"
	.string "most other groups of wildlife! Just\l"
	.string "think about how many Bug-type and\l"
	.string "other bug-like Pokémon there are!$"

KiposTown_Zoo_South_NPC_Fisherman_Text_0:
# 1119 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Fisherman$"

KiposTown_Zoo_South_NPC_Fisherman_Text_1:
# 1122 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "It's nice to see Pokémon splashing\n"
	.string "around in the Wetlands Enclosure again.\l"
	.string "Sure, I go fishing, but I always release\l"
	.string "them back into the water!$"

KiposTown_Zoo_South_NPC_Fisherman_Text_2:
# 1127 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "I miss seeing Pokémon in this\n"
	.string "Enclosure... Maybe I could bring some\l"
	.string "fish in to help repopulate it.$"

KiposTown_Zoo_South_NPC_Girl_Text_0:
# 1140 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Girl$"

KiposTown_Zoo_South_NPC_Girl_Text_1:
# 1141 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "I'm learning so much about the\n"
	.string "environment here! Like, did you know\l"
	.string "that wetlands can prevent flooding?\l"
	.string "Oh, and I found out that all Pokémon\l"
	.string "that have been recorded reproducing\l"
	.string "lay Pokémon Eggs! There's so much to\l"
	.string "learn!$"

KiposTown_Zoo_South_NPC_CyclingTriathleteF_Text_0:
# 1151 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Cycling Girl$"

KiposTown_Zoo_South_NPC_CyclingTriathleteF_Text_1:
# 1152 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Woah... This Zoo is so huge, I'm starting\n"
	.string "to get lost! I think the exit is south,\l"
	.string "but how do I get to the Mountains\l"
	.string "exhibit?$"

KiposTown_Zoo_South_NPC_FatMan_Text_0:
# 1162 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Fat Man$"

KiposTown_Zoo_South_NPC_FatMan_Text_1:
# 1163 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "The Zoo expanded a bunch over the past\n"
	.string "couple years. The buildings to the left\l"
	.string "and right of the main path have special\l"
	.string "exhibits!$"

KiposTown_Zoo_South_NPC_HexManiac_Text_0:
# 1173 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Hex Maniac$"

KiposTown_Zoo_South_NPC_HexManiac_Text_1:
# 1174 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Sometimes, Zoo employees open these\n"
	.string "gates and drive through on carts full\l"
	.string "of Pokémon feed. I wonder what it looks\l"
	.string "like back there.$"

KiposTown_Zoo_South_NPC_Scientist_Text_0:
# 1184 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Scientist$"

KiposTown_Zoo_South_NPC_Scientist_Text_1:
# 1188 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "That {STR_VAR_1} seems to be doing\n"
	.string "a great job taking care of the Pokémon\l"
	.string "Eggs! Despite being from different\l"
	.string "species, it still warms them and shows\l"
	.string "them affection. Pokémon behavior is\l"
	.string "fascinating!$"

KiposTown_Zoo_South_NPC_Scientist_Text_2:
# 1193 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "I hope those Pokémon Eggs are doing\n"
	.string "alright in there. Researchers from the\l"
	.string "Conservation Center have routinely\l"
	.string "checked up on them, but they'd probably\l"
	.string "do better with a Pokémon in there\l"
	.string "caring for them.$"

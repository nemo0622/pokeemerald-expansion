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
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 69 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TOTAL_NUM_ZOO_DONATIONS, 0
# 70 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 71 "data/maps/KiposTown_Zoo/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 73 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 74 "data/maps/KiposTown_Zoo/scripts.pory"
	startquest QUEST_ZOOKEEPER
# 76 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end


# 80 "data/maps/KiposTown_Zoo/scripts.pory"
KiposTown_Zoo_Movement_RusselWalkToGirafarig:
# 82 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 82 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 83 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 83 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 83 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 83 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 84 "data/maps/KiposTown_Zoo/scripts.pory"
	face_up
# 85 "data/maps/KiposTown_Zoo/scripts.pory"
	step_end

# 87 "data/maps/KiposTown_Zoo/scripts.pory"
KiposTown_Zoo_Movement_PlayerWalkToGirafarig:
# 89 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 89 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 89 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 90 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 90 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 90 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 91 "data/maps/KiposTown_Zoo/scripts.pory"
	face_up
# 92 "data/maps/KiposTown_Zoo/scripts.pory"
	step_end

# 94 "data/maps/KiposTown_Zoo/scripts.pory"
KiposTown_Zoo_Movement_RusselWalkToSwampExhibit:
# 96 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_down
# 97 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 97 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 97 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 97 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 97 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 98 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 98 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 98 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 98 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 98 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 98 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 99 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 99 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 99 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 99 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 101 "data/maps/KiposTown_Zoo/scripts.pory"
	face_left
# 102 "data/maps/KiposTown_Zoo/scripts.pory"
	step_end

# 104 "data/maps/KiposTown_Zoo/scripts.pory"
KiposTown_Zoo_Movement_PlayerWalkToSwampExhibit:
# 106 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 107 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_down
# 108 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 108 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 108 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 108 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 108 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 109 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 109 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 109 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 109 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 109 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 109 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 110 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 110 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 110 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 111 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 112 "data/maps/KiposTown_Zoo/scripts.pory"
	face_right
# 113 "data/maps/KiposTown_Zoo/scripts.pory"
	step_end

KiposTown_Zoo_DirectionSign_South_1::
# 118 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 119 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_DirectionSign_South_1_Text_0
# 120 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 121 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_DirectionSign_South_2::
# 127 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 128 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_DirectionSign_South_2_Text_0
# 129 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 130 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_BuildingSign_SpecialtyBuilding::
# 136 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 137 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_BuildingSign_SpecialtyBuilding_Text_0
# 138 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 139 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_BuildingSign_HerpetofaunaBuilding::
# 145 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 146 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_BuildingSign_HerpetofaunaBuilding_Text_0
# 147 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 148 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_End::
# 158 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 159 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end


KiposTown_Zoo_PokemonSign_DonationScript::
# 165 "data/maps/KiposTown_Zoo/scripts.pory"
	special ChoosePartyMon
# 166 "data/maps/KiposTown_Zoo/scripts.pory"
	waitstate
# 168 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, KiposTown_Zoo_PokemonSign_End
# 170 "data/maps/KiposTown_Zoo/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 171 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_RESULT
# 173 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_0x8003, SPECIES_EGG
	goto_if_eq KiposTown_Zoo_PokemonSign_DonationScript_2
KiposTown_Zoo_PokemonSign_DonationScript_1:
# 180 "data/maps/KiposTown_Zoo/scripts.pory"
	special GetZooDonationValidity
# 181 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_0x8002, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_DonationScript_5
# 202 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8003
# 203 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_DonationScript_Text_2, MSGBOX_YESNO
# 204 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_DonationScript_7
# 210 "data/maps/KiposTown_Zoo/scripts.pory"
	special DonateMonToZoo
# 213 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_eq KiposTown_Zoo_PokemonSign_DonationScript_15
KiposTown_Zoo_PokemonSign_DonationScript_14:
# 220 "data/maps/KiposTown_Zoo/scripts.pory"
	switch VAR_TEMP_0
# 222 "data/maps/KiposTown_Zoo/scripts.pory"
	case 1, KiposTown_Zoo_PokemonSign_DonationScript_19
# 224 "data/maps/KiposTown_Zoo/scripts.pory"
	case 2, KiposTown_Zoo_PokemonSign_DonationScript_20
# 226 "data/maps/KiposTown_Zoo/scripts.pory"
	case 3, KiposTown_Zoo_PokemonSign_DonationScript_21
# 228 "data/maps/KiposTown_Zoo/scripts.pory"
	case 4, KiposTown_Zoo_PokemonSign_DonationScript_22
# 230 "data/maps/KiposTown_Zoo/scripts.pory"
	case 5, KiposTown_Zoo_PokemonSign_DonationScript_23
# 232 "data/maps/KiposTown_Zoo/scripts.pory"
	case 6, KiposTown_Zoo_PokemonSign_DonationScript_24
# 234 "data/maps/KiposTown_Zoo/scripts.pory"
	case 7, KiposTown_Zoo_PokemonSign_DonationScript_25
# 236 "data/maps/KiposTown_Zoo/scripts.pory"
	case 8, KiposTown_Zoo_PokemonSign_DonationScript_26
# 238 "data/maps/KiposTown_Zoo/scripts.pory"
	case 9, KiposTown_Zoo_PokemonSign_DonationScript_27
# 240 "data/maps/KiposTown_Zoo/scripts.pory"
	case 10, KiposTown_Zoo_PokemonSign_DonationScript_28
# 242 "data/maps/KiposTown_Zoo/scripts.pory"
	case 11, KiposTown_Zoo_PokemonSign_DonationScript_29
# 244 "data/maps/KiposTown_Zoo/scripts.pory"
	case 12, KiposTown_Zoo_PokemonSign_DonationScript_30
# 246 "data/maps/KiposTown_Zoo/scripts.pory"
	case 13, KiposTown_Zoo_PokemonSign_DonationScript_31
# 248 "data/maps/KiposTown_Zoo/scripts.pory"
	case 14, KiposTown_Zoo_PokemonSign_DonationScript_32
# 250 "data/maps/KiposTown_Zoo/scripts.pory"
	case 15, KiposTown_Zoo_PokemonSign_DonationScript_33
# 252 "data/maps/KiposTown_Zoo/scripts.pory"
	case 16, KiposTown_Zoo_PokemonSign_DonationScript_34
# 254 "data/maps/KiposTown_Zoo/scripts.pory"
	case 17, KiposTown_Zoo_PokemonSign_DonationScript_35
# 256 "data/maps/KiposTown_Zoo/scripts.pory"
	case 18, KiposTown_Zoo_PokemonSign_DonationScript_36
# 258 "data/maps/KiposTown_Zoo/scripts.pory"
	case 19, KiposTown_Zoo_PokemonSign_DonationScript_37
# 260 "data/maps/KiposTown_Zoo/scripts.pory"
	case 20, KiposTown_Zoo_PokemonSign_DonationScript_38
# 262 "data/maps/KiposTown_Zoo/scripts.pory"
	case 21, KiposTown_Zoo_PokemonSign_DonationScript_39
# 264 "data/maps/KiposTown_Zoo/scripts.pory"
	case 22, KiposTown_Zoo_PokemonSign_DonationScript_40
# 266 "data/maps/KiposTown_Zoo/scripts.pory"
	case 23, KiposTown_Zoo_PokemonSign_DonationScript_41
# 268 "data/maps/KiposTown_Zoo/scripts.pory"
	case 24, KiposTown_Zoo_PokemonSign_DonationScript_42
# 270 "data/maps/KiposTown_Zoo/scripts.pory"
	case 25, KiposTown_Zoo_PokemonSign_DonationScript_43
# 272 "data/maps/KiposTown_Zoo/scripts.pory"
	case 26, KiposTown_Zoo_PokemonSign_DonationScript_44
# 274 "data/maps/KiposTown_Zoo/scripts.pory"
	case 27, KiposTown_Zoo_PokemonSign_DonationScript_45
# 276 "data/maps/KiposTown_Zoo/scripts.pory"
	case 28, KiposTown_Zoo_PokemonSign_DonationScript_46
# 278 "data/maps/KiposTown_Zoo/scripts.pory"
	case 29, KiposTown_Zoo_PokemonSign_DonationScript_47
# 280 "data/maps/KiposTown_Zoo/scripts.pory"
	case 30, KiposTown_Zoo_PokemonSign_DonationScript_48
# 282 "data/maps/KiposTown_Zoo/scripts.pory"
	case 31, KiposTown_Zoo_PokemonSign_DonationScript_49
# 284 "data/maps/KiposTown_Zoo/scripts.pory"
	case 32, KiposTown_Zoo_PokemonSign_DonationScript_50
# 286 "data/maps/KiposTown_Zoo/scripts.pory"
	case 33, KiposTown_Zoo_PokemonSign_DonationScript_51
# 288 "data/maps/KiposTown_Zoo/scripts.pory"
	case 34, KiposTown_Zoo_PokemonSign_DonationScript_52
# 290 "data/maps/KiposTown_Zoo/scripts.pory"
	case 35, KiposTown_Zoo_PokemonSign_DonationScript_53
# 292 "data/maps/KiposTown_Zoo/scripts.pory"
	case 36, KiposTown_Zoo_PokemonSign_DonationScript_54
# 294 "data/maps/KiposTown_Zoo/scripts.pory"
	case 37, KiposTown_Zoo_PokemonSign_DonationScript_55
# 296 "data/maps/KiposTown_Zoo/scripts.pory"
	case 38, KiposTown_Zoo_PokemonSign_DonationScript_56
# 298 "data/maps/KiposTown_Zoo/scripts.pory"
	case 39, KiposTown_Zoo_PokemonSign_DonationScript_57
# 300 "data/maps/KiposTown_Zoo/scripts.pory"
	case 40, KiposTown_Zoo_PokemonSign_DonationScript_58
# 302 "data/maps/KiposTown_Zoo/scripts.pory"
	case 41, KiposTown_Zoo_PokemonSign_DonationScript_59
# 304 "data/maps/KiposTown_Zoo/scripts.pory"
	case 42, KiposTown_Zoo_PokemonSign_DonationScript_60
# 306 "data/maps/KiposTown_Zoo/scripts.pory"
	case 43, KiposTown_Zoo_PokemonSign_DonationScript_61
# 308 "data/maps/KiposTown_Zoo/scripts.pory"
	case 44, KiposTown_Zoo_PokemonSign_DonationScript_62
# 310 "data/maps/KiposTown_Zoo/scripts.pory"
	case 45, KiposTown_Zoo_PokemonSign_DonationScript_63
# 312 "data/maps/KiposTown_Zoo/scripts.pory"
	case 46, KiposTown_Zoo_PokemonSign_DonationScript_64
KiposTown_Zoo_PokemonSign_DonationScript_17:
# 316 "data/maps/KiposTown_Zoo/scripts.pory"
	addvar VAR_TOTAL_NUM_ZOO_DONATIONS, 1
# 318 "data/maps/KiposTown_Zoo/scripts.pory"
	playfanfare FANFARE_LEVEL_UP
# 319 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_DonationScript_Text_4
# 320 "data/maps/KiposTown_Zoo/scripts.pory"
	waitfanfare
# 321 "data/maps/KiposTown_Zoo/scripts.pory"
	goto KiposTown_Zoo_PokemonSign_End
	return

KiposTown_Zoo_PokemonSign_DonationScript_2:
# 175 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_DonationScript_Text_0
# 176 "data/maps/KiposTown_Zoo/scripts.pory"
	goto KiposTown_Zoo_PokemonSign_End
	goto KiposTown_Zoo_PokemonSign_DonationScript_1

KiposTown_Zoo_PokemonSign_DonationScript_5:
# 183 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_DonationScript_Text_1, MSGBOX_YESNO
# 184 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 185 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_DonationScript_11
# 191 "data/maps/KiposTown_Zoo/scripts.pory"
	goto KiposTown_Zoo_PokemonSign_DonationScript
KiposTown_Zoo_PokemonSign_DonationScript_10:
# 193 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_DonationScript_7:
# 206 "data/maps/KiposTown_Zoo/scripts.pory"
	goto KiposTown_Zoo_PokemonSign_End
	return

KiposTown_Zoo_PokemonSign_DonationScript_11:
# 187 "data/maps/KiposTown_Zoo/scripts.pory"
	goto KiposTown_Zoo_PokemonSign_End
	goto KiposTown_Zoo_PokemonSign_DonationScript_10

KiposTown_Zoo_PokemonSign_DonationScript_15:
# 215 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_DonationScript_Text_3
# 216 "data/maps/KiposTown_Zoo/scripts.pory"
	goto KiposTown_Zoo_PokemonSign_End
	goto KiposTown_Zoo_PokemonSign_DonationScript_14

KiposTown_Zoo_PokemonSign_DonationScript_19:
# 223 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_01_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_20:
# 225 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_01_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_21:
# 227 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_01_3, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_22:
# 229 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_01_4, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_23:
# 231 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_02_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_24:
# 233 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_03_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_25:
# 235 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_03_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_26:
# 237 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_03_3, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_27:
# 239 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_04_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_28:
# 241 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_04_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_29:
# 243 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_04_3, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_30:
# 245 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_05_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_31:
# 247 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_05_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_32:
# 249 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_06_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_33:
# 251 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_06_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_34:
# 253 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_07_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_35:
# 255 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_07_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_36:
# 257 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_08_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_37:
# 259 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_08_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_38:
# 261 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_09_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_39:
# 263 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_10_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_40:
# 265 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_10_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_41:
# 267 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_10_3, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_42:
# 269 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_11_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_43:
# 271 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_11_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_44:
# 273 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_12_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_45:
# 275 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_12_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_46:
# 277 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_13_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_47:
# 279 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_13_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_48:
# 281 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_14_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_49:
# 283 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_14_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_50:
# 285 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_IN_01_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_51:
# 287 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_IN_01_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_52:
# 289 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_IN_01_3, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_53:
# 291 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_IN_02_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_54:
# 293 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_IN_02_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_55:
# 295 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_IN_03_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_56:
# 297 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_IN_03_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_57:
# 299 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_01_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_58:
# 301 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_01_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_59:
# 303 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_02_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_60:
# 305 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_02_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_61:
# 307 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_03_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_62:
# 309 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_03_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_63:
# 311 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_64:
# 313 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17


KiposTown_Zoo_PokemonSign_Girafarig::
# 332 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 333 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Girafarig_Text_0
# 334 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 336 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_0x8003, SPECIES_GIRAFARIG
# 337 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 338 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 339 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 340 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 342 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end


KiposTown_Zoo_PokemonSign_Forest::
# 349 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 352 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_01_1
# 353 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_01_2
# 354 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_2
KiposTown_Zoo_PokemonSign_Forest_1:
# 358 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_5
KiposTown_Zoo_PokemonSign_Forest_4:
# 368 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_1
# 369 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 370 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_2
# 371 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 372 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_01_3
# 373 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_01_4
# 374 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_8
KiposTown_Zoo_PokemonSign_Forest_7:
# 378 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_4, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_11
KiposTown_Zoo_PokemonSign_Forest_10:
# 382 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_3
# 383 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 386 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Forest_14
KiposTown_Zoo_PokemonSign_Forest_13:
# 430 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_17
# 439 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_18
# 448 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_19
# 457 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_4, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_20
KiposTown_Zoo_PokemonSign_Forest_16:
# 467 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Forest_2:
# 356 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Forest_1

KiposTown_Zoo_PokemonSign_Forest_5:
# 360 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Forest_4

KiposTown_Zoo_PokemonSign_Forest_8:
# 376 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Forest_7

KiposTown_Zoo_PokemonSign_Forest_11:
# 380 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Forest_10

KiposTown_Zoo_PokemonSign_Forest_14:
# 389 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_4, MSGBOX_YESNO
# 390 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 391 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_25
	goto KiposTown_Zoo_PokemonSign_Forest_13

KiposTown_Zoo_PokemonSign_Forest_17:
# 433 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 1
# 435 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_5, MSGBOX_YESNO
# 436 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 437 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Forest_16

KiposTown_Zoo_PokemonSign_Forest_18:
# 442 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 2
# 444 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_6, MSGBOX_YESNO
# 445 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 446 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Forest_16

KiposTown_Zoo_PokemonSign_Forest_19:
# 451 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 3
# 453 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_7, MSGBOX_YESNO
# 454 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 455 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Forest_16

KiposTown_Zoo_PokemonSign_Forest_20:
# 460 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 4
# 462 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_8, MSGBOX_YESNO
# 463 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 464 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Forest_16

KiposTown_Zoo_PokemonSign_Forest_25:
# 393 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_01_1
# 394 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 395 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 396 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 397 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 399 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Forest_28
KiposTown_Zoo_PokemonSign_Forest_27:
# 408 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_3, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Forest_31
KiposTown_Zoo_PokemonSign_Forest_30:
# 417 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_4, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Forest_33
	goto KiposTown_Zoo_PokemonSign_Forest_13

KiposTown_Zoo_PokemonSign_Forest_28:
# 401 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 402 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_01_2
# 403 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 404 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 405 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 406 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Forest_27

KiposTown_Zoo_PokemonSign_Forest_31:
# 410 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 411 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_01_3
# 412 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 413 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 414 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 415 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Forest_30

KiposTown_Zoo_PokemonSign_Forest_33:
# 419 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 420 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_01_4
# 421 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 422 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 423 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 424 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Forest_13


KiposTown_Zoo_EnvironmentSign_Forest::
# 473 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 474 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Forest_Text_0
# 475 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 476 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Nest::
# 483 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 486 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_02_1
# 487 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_02_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Nest_2
KiposTown_Zoo_PokemonSign_Nest_1:
# 493 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Nest_Text_0
# 494 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 497 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_02_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Nest_5
KiposTown_Zoo_PokemonSign_Nest_4:
# 513 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_02_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Nest_8
KiposTown_Zoo_PokemonSign_Nest_7:
# 523 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Nest_2:
# 489 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Nest_1

KiposTown_Zoo_PokemonSign_Nest_5:
# 500 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Nest_Text_1, MSGBOX_YESNO
# 501 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 502 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Nest_10
	goto KiposTown_Zoo_PokemonSign_Nest_4

KiposTown_Zoo_PokemonSign_Nest_8:
# 516 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 5
# 518 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_5, MSGBOX_YESNO
# 519 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 520 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Nest_7

KiposTown_Zoo_PokemonSign_Nest_10:
# 504 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_02_1
# 505 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 506 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 507 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 508 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Nest_4


KiposTown_Zoo_EnvironmentSign_Nest::
# 529 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 530 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Nest_Text_0
# 531 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 532 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Rainforest::
# 539 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 542 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_03_1
# 543 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_03_2
# 544 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_3, VAR_ZOO_POKEMON_ENCLOSURE_03_3
# 545 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Rainforest_2
KiposTown_Zoo_PokemonSign_Rainforest_1:
# 549 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Rainforest_5
KiposTown_Zoo_PokemonSign_Rainforest_4:
# 553 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Rainforest_8
KiposTown_Zoo_PokemonSign_Rainforest_7:
# 559 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Rainforest_Text_0
# 560 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 563 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Rainforest_11
KiposTown_Zoo_PokemonSign_Rainforest_10:
# 598 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Rainforest_14
# 607 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Rainforest_15
# 616 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Rainforest_16
KiposTown_Zoo_PokemonSign_Rainforest_13:
# 626 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Rainforest_2:
# 547 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Rainforest_1

KiposTown_Zoo_PokemonSign_Rainforest_5:
# 551 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Rainforest_4

KiposTown_Zoo_PokemonSign_Rainforest_8:
# 555 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_3, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Rainforest_7

KiposTown_Zoo_PokemonSign_Rainforest_11:
# 566 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_4, MSGBOX_YESNO
# 567 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 568 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Rainforest_20
	goto KiposTown_Zoo_PokemonSign_Rainforest_10

KiposTown_Zoo_PokemonSign_Rainforest_14:
# 601 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 6
# 603 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_5, MSGBOX_YESNO
# 604 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 605 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Rainforest_13

KiposTown_Zoo_PokemonSign_Rainforest_15:
# 610 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 7
# 612 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_6, MSGBOX_YESNO
# 613 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 614 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Rainforest_13

KiposTown_Zoo_PokemonSign_Rainforest_16:
# 619 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 8
# 621 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_7, MSGBOX_YESNO
# 622 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 623 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Rainforest_13

KiposTown_Zoo_PokemonSign_Rainforest_20:
# 570 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_03_1
# 571 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 572 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 573 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 574 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 576 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Rainforest_23
KiposTown_Zoo_PokemonSign_Rainforest_22:
# 585 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_3, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Rainforest_25
	goto KiposTown_Zoo_PokemonSign_Rainforest_10

KiposTown_Zoo_PokemonSign_Rainforest_23:
# 578 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 579 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_03_2
# 580 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 581 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 582 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 583 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Rainforest_22

KiposTown_Zoo_PokemonSign_Rainforest_25:
# 587 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 588 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_03_3
# 589 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 590 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 591 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 592 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Rainforest_10


KiposTown_Zoo_EnvironmentSign_Rainforest::
# 632 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 633 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Rainforest_Text_0
# 634 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 635 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Suburbs::
# 642 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 645 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_04_1
# 646 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_04_2
# 647 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_3, VAR_ZOO_POKEMON_ENCLOSURE_04_3
# 648 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Suburbs_2
KiposTown_Zoo_PokemonSign_Suburbs_1:
# 652 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Suburbs_5
KiposTown_Zoo_PokemonSign_Suburbs_4:
# 656 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Suburbs_8
KiposTown_Zoo_PokemonSign_Suburbs_7:
# 662 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Suburbs_Text_0
# 663 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 666 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Suburbs_11
KiposTown_Zoo_PokemonSign_Suburbs_10:
# 701 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Suburbs_14
# 710 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Suburbs_15
# 719 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Suburbs_16
KiposTown_Zoo_PokemonSign_Suburbs_13:
# 729 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Suburbs_2:
# 650 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Suburbs_1

KiposTown_Zoo_PokemonSign_Suburbs_5:
# 654 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Suburbs_4

KiposTown_Zoo_PokemonSign_Suburbs_8:
# 658 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_3, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Suburbs_7

KiposTown_Zoo_PokemonSign_Suburbs_11:
# 669 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_4, MSGBOX_YESNO
# 670 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 671 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Suburbs_20
	goto KiposTown_Zoo_PokemonSign_Suburbs_10

KiposTown_Zoo_PokemonSign_Suburbs_14:
# 704 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 9
# 706 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_5, MSGBOX_YESNO
# 707 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 708 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Suburbs_13

KiposTown_Zoo_PokemonSign_Suburbs_15:
# 713 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 10
# 715 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_6, MSGBOX_YESNO
# 716 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 717 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Suburbs_13

KiposTown_Zoo_PokemonSign_Suburbs_16:
# 722 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 11
# 724 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_7, MSGBOX_YESNO
# 725 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 726 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Suburbs_13

KiposTown_Zoo_PokemonSign_Suburbs_20:
# 673 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_04_1
# 674 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 675 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 676 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 677 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 679 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Suburbs_23
KiposTown_Zoo_PokemonSign_Suburbs_22:
# 688 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_3, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Suburbs_25
	goto KiposTown_Zoo_PokemonSign_Suburbs_10

KiposTown_Zoo_PokemonSign_Suburbs_23:
# 681 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 682 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_04_2
# 683 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 684 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 685 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 686 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Suburbs_22

KiposTown_Zoo_PokemonSign_Suburbs_25:
# 690 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 691 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_04_3
# 692 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 693 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 694 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 695 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Suburbs_10


KiposTown_Zoo_EnvironmentSign_Suburbs::
# 735 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 736 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Suburbs_Text_0
# 737 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 738 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_HandsOnExhibitWarningSign::
# 744 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 745 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_HandsOnExhibitWarningSign_Text_0
# 746 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 747 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_EventScript_DomesticPokemonInteraction_1::
# 752 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 753 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 754 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_04_1
# 755 "data/maps/KiposTown_Zoo/scripts.pory"
	playmoncry VAR_ZOO_POKEMON_ENCLOSURE_04_1, CRY_MODE_NORMAL
# 756 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmoncry
# 757 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EventScript_DomesticPokemonInteraction_1_Text_0
# 758 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 759 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_EventScript_DomesticPokemonInteraction_2::
# 764 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 765 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 766 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_04_2
# 767 "data/maps/KiposTown_Zoo/scripts.pory"
	playmoncry VAR_ZOO_POKEMON_ENCLOSURE_04_2, CRY_MODE_NORMAL
# 768 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmoncry
# 769 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EventScript_DomesticPokemonInteraction_1_Text_0
# 770 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 771 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_EventScript_DomesticPokemonInteraction_3::
# 776 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 777 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 778 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_04_3
# 779 "data/maps/KiposTown_Zoo/scripts.pory"
	playmoncry VAR_ZOO_POKEMON_ENCLOSURE_04_3, CRY_MODE_NORMAL
# 780 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmoncry
# 781 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EventScript_DomesticPokemonInteraction_1_Text_0
# 782 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 783 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_FungalSwamp::
# 790 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 793 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_05_1
# 794 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_05_2
# 795 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_05_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_FungalSwamp_2
KiposTown_Zoo_PokemonSign_FungalSwamp_1:
# 799 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_05_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_FungalSwamp_5
KiposTown_Zoo_PokemonSign_FungalSwamp_4:
# 805 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_FungalSwamp_Text_0
# 806 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 809 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_05_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_FungalSwamp_8
KiposTown_Zoo_PokemonSign_FungalSwamp_7:
# 835 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_05_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_FungalSwamp_11
# 844 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_05_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_FungalSwamp_12
KiposTown_Zoo_PokemonSign_FungalSwamp_10:
# 854 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_FungalSwamp_2:
# 797 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_FungalSwamp_1

KiposTown_Zoo_PokemonSign_FungalSwamp_5:
# 801 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_FungalSwamp_4

KiposTown_Zoo_PokemonSign_FungalSwamp_8:
# 812 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_4, MSGBOX_YESNO
# 813 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 814 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_FungalSwamp_15
	goto KiposTown_Zoo_PokemonSign_FungalSwamp_7

KiposTown_Zoo_PokemonSign_FungalSwamp_11:
# 838 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 12
# 840 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_5, MSGBOX_YESNO
# 841 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 842 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_FungalSwamp_10

KiposTown_Zoo_PokemonSign_FungalSwamp_12:
# 847 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 13
# 849 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_6, MSGBOX_YESNO
# 850 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 851 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_FungalSwamp_10

KiposTown_Zoo_PokemonSign_FungalSwamp_15:
# 816 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_05_1
# 817 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 818 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 819 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 820 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 822 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_05_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_FungalSwamp_17
	goto KiposTown_Zoo_PokemonSign_FungalSwamp_7

KiposTown_Zoo_PokemonSign_FungalSwamp_17:
# 824 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 825 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_05_2
# 826 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 827 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 828 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 829 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_FungalSwamp_7


KiposTown_Zoo_EnvironmentSign_FungalSwamp::
# 860 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 861 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_FungalSwamp_Text_0
# 862 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 863 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Wetlands::
# 870 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 873 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_06_1
# 874 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_06_2
# 875 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_06_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Wetlands_2
KiposTown_Zoo_PokemonSign_Wetlands_1:
# 879 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_06_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Wetlands_5
KiposTown_Zoo_PokemonSign_Wetlands_4:
# 885 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Wetlands_Text_0
# 886 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 889 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_06_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Wetlands_8
KiposTown_Zoo_PokemonSign_Wetlands_7:
# 915 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_06_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Wetlands_11
# 924 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_06_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Wetlands_12
KiposTown_Zoo_PokemonSign_Wetlands_10:
# 934 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Wetlands_2:
# 877 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Wetlands_1

KiposTown_Zoo_PokemonSign_Wetlands_5:
# 881 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Wetlands_4

KiposTown_Zoo_PokemonSign_Wetlands_8:
# 892 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_4, MSGBOX_YESNO
# 893 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 894 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Wetlands_15
	goto KiposTown_Zoo_PokemonSign_Wetlands_7

KiposTown_Zoo_PokemonSign_Wetlands_11:
# 918 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 14
# 920 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_5, MSGBOX_YESNO
# 921 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 922 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Wetlands_10

KiposTown_Zoo_PokemonSign_Wetlands_12:
# 927 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 15
# 929 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_6, MSGBOX_YESNO
# 930 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 931 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Wetlands_10

KiposTown_Zoo_PokemonSign_Wetlands_15:
# 896 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_06_1
# 897 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 898 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 899 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 900 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 902 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_06_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Wetlands_17
	goto KiposTown_Zoo_PokemonSign_Wetlands_7

KiposTown_Zoo_PokemonSign_Wetlands_17:
# 904 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 905 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_06_2
# 906 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 907 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 908 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 909 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Wetlands_7


KiposTown_Zoo_EnvironmentSign_Wetlands::
# 940 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 941 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Wetlands_Text_0
# 942 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 943 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_South_NPC_Beauty::
# 953 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 954 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 955 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_Beauty_Text_0
# 956 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Beauty_Text_1
# 957 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 958 "data/maps/KiposTown_Zoo/scripts.pory"
	applymovement 30, Common_Movement_FaceOriginalDirection
# 959 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmovement 0
# 960 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_South_NPC_BugCatcher::
# 966 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 967 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 968 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_BugCatcher_Text_0
# 969 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_1, 0
	goto_if_gt KiposTown_Zoo_South_NPC_BugCatcher_2
# 976 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_BugCatcher_Text_2
# 977 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
KiposTown_Zoo_South_NPC_BugCatcher_1:
# 979 "data/maps/KiposTown_Zoo/scripts.pory"
	applymovement 31, Common_Movement_FaceOriginalDirection
# 980 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmovement 0
# 981 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end

KiposTown_Zoo_South_NPC_BugCatcher_2:
# 971 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_BugCatcher_Text_1
# 972 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
	goto KiposTown_Zoo_South_NPC_BugCatcher_1


KiposTown_Zoo_South_NPC_Woman::
# 987 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 988 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 989 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_Woman_Text_0
# 990 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_1, 0
	goto_if_gt KiposTown_Zoo_South_NPC_Woman_2
# 997 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Woman_Text_2
# 998 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
KiposTown_Zoo_South_NPC_Woman_1:
# 1000 "data/maps/KiposTown_Zoo/scripts.pory"
	applymovement 32, Common_Movement_FaceOriginalDirection
# 1001 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmovement 0
# 1002 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end

KiposTown_Zoo_South_NPC_Woman_2:
# 992 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Woman_Text_1
# 993 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
	goto KiposTown_Zoo_South_NPC_Woman_1


KiposTown_Zoo_South_NPC_RichBoy::
# 1008 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 1009 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 1010 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_RichBoy_Text_0
# 1011 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_RichBoy_Text_1
# 1012 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1013 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_South_NPC_Youngster::
# 1019 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 1020 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 1021 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_Youngster_Text_0
# 1022 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Youngster_Text_1
# 1023 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1024 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_South_NPC_Worker::
# 1030 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 1031 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 1032 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_Worker_Text_0
# 1033 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_1, 0
	goto_if_gt KiposTown_Zoo_South_NPC_Worker_2
# 1040 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Worker_Text_2
# 1041 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
KiposTown_Zoo_South_NPC_Worker_1:
# 1043 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end

KiposTown_Zoo_South_NPC_Worker_2:
# 1035 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Worker_Text_1
# 1036 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
	goto KiposTown_Zoo_South_NPC_Worker_1


KiposTown_Zoo_South_NPC_OldWomanInHandsOn::
# 1049 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 1050 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 1051 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_0
# 1054 "data/maps/KiposTown_Zoo/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FILL_SUBURBS_ZOO
# 1055 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_South_NPC_OldWomanInHandsOn_2
# 1064 "data/maps/KiposTown_Zoo/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_FILL_SUBURBS_ZOO
# 1065 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KiposTown_Zoo_South_NPC_OldWomanInHandsOn_5
# 1075 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_3
# 1076 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1078 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 1079 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_1, 0
	goto_if_gt KiposTown_Zoo_South_NPC_OldWomanInHandsOn_11
KiposTown_Zoo_South_NPC_OldWomanInHandsOn_9:
# 1096 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_0
# 1097 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_5
# 1098 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
KiposTown_Zoo_South_NPC_OldWomanInHandsOn_4:
# 1101 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end

KiposTown_Zoo_South_NPC_OldWomanInHandsOn_2:
# 1057 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_1
# 1058 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1059 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end

KiposTown_Zoo_South_NPC_OldWomanInHandsOn_5:
# 1067 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_2
# 1068 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1070 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 1071 "data/maps/KiposTown_Zoo/scripts.pory"
	startquest QUEST_FILL_SUBURBS_ZOO
	goto KiposTown_Zoo_South_NPC_OldWomanInHandsOn_4

KiposTown_Zoo_South_NPC_OldWomanInHandsOn_8:
# 1081 "data/maps/KiposTown_Zoo/scripts.pory"
	applymovement 36, Common_Movement_Heart
# 1082 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmovement 0
# 1083 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 10
# 1084 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_0
# 1085 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_4
# 1086 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1087 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 5
# 1088 "data/maps/KiposTown_Zoo/scripts.pory"
	giveitem ITEM_TM_WISH
# 1089 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1091 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 1092 "data/maps/KiposTown_Zoo/scripts.pory"
	completequest QUEST_FILL_SUBURBS_ZOO
	goto KiposTown_Zoo_South_NPC_OldWomanInHandsOn_4

KiposTown_Zoo_South_NPC_OldWomanInHandsOn_10:
# 1079 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_3, 0
	goto_if_gt KiposTown_Zoo_South_NPC_OldWomanInHandsOn_8
	goto KiposTown_Zoo_South_NPC_OldWomanInHandsOn_9

KiposTown_Zoo_South_NPC_OldWomanInHandsOn_11:
# 1079 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_2, 0
	goto_if_gt KiposTown_Zoo_South_NPC_OldWomanInHandsOn_10
	goto KiposTown_Zoo_South_NPC_OldWomanInHandsOn_9


KiposTown_Zoo_South_NPC_Maniac::
# 1107 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 1108 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 1109 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_Maniac_Text_0
# 1110 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Maniac_Text_1
# 1111 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1112 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_South_NPC_Fisherman::
# 1118 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 1119 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 1120 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_Fisherman_Text_0
# 1121 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_06_2, 0
	goto_if_gt KiposTown_Zoo_South_NPC_Fisherman_2
# 1128 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Fisherman_Text_2
# 1129 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
KiposTown_Zoo_South_NPC_Fisherman_1:
# 1131 "data/maps/KiposTown_Zoo/scripts.pory"
	applymovement 38, Common_Movement_FaceOriginalDirection
# 1132 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmovement 0
# 1133 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end

KiposTown_Zoo_South_NPC_Fisherman_2:
# 1123 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Fisherman_Text_1
# 1124 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
	goto KiposTown_Zoo_South_NPC_Fisherman_1


KiposTown_Zoo_South_NPC_Girl::
# 1139 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 1140 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 1141 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_Girl_Text_0
# 1142 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Girl_Text_1
# 1143 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1144 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_South_NPC_CyclingTriathleteF::
# 1150 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 1151 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 1152 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_CyclingTriathleteF_Text_0
# 1153 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_CyclingTriathleteF_Text_1
# 1154 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1155 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_South_NPC_FatMan::
# 1161 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 1162 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 1163 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_FatMan_Text_0
# 1164 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_FatMan_Text_1
# 1165 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1166 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_South_NPC_HexManiac::
# 1172 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 1173 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 1174 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_HexManiac_Text_0
# 1175 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_HexManiac_Text_1
# 1176 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 1177 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_South_NPC_Scientist::
# 1183 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 1184 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 1185 "data/maps/KiposTown_Zoo/scripts.pory"
	speakername KiposTown_Zoo_South_NPC_Scientist_Text_0
# 1186 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_02_1, 0
	goto_if_gt KiposTown_Zoo_South_NPC_Scientist_2
# 1194 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Scientist_Text_2
# 1195 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
KiposTown_Zoo_South_NPC_Scientist_1:
# 1197 "data/maps/KiposTown_Zoo/scripts.pory"
	applymovement 44, Common_Movement_FaceOriginalDirection
# 1198 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmovement 0
# 1199 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end

KiposTown_Zoo_South_NPC_Scientist_2:
# 1188 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_02_1
# 1189 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_South_NPC_Scientist_Text_1
# 1190 "data/maps/KiposTown_Zoo/scripts.pory"
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
# 119 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "{LEFT_ARROW} Forest Exhibit\n"
	.string "{UP_ARROW} Rainforest & Hands-On Exhibit\p"
	.string "Fungal Swamp Exhibit {RIGHT_ARROW}\n"
	.string "Exit {DOWN_ARROW}$"

KiposTown_Zoo_DirectionSign_South_2_Text_0:
# 128 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "{LEFT_ARROW} Specialty Indoor Exhibits\n"
	.string "{UP_ARROW} 'Exotic Locale' Zoo Exhibits\p"
	.string "Herpetofauna Exhibits {RIGHT_ARROW}\n"
	.string "'Backyard Friends' Zoo Exhibits {DOWN_ARROW}$"

KiposTown_Zoo_BuildingSign_SpecialtyBuilding_Text_0:
# 137 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Indoor Exhibits - West Building\n"
	.string "Specialty Exhibits$"

KiposTown_Zoo_BuildingSign_HerpetofaunaBuilding_Text_0:
# 146 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Indoor Exhibits - East Building\n"
	.string "Herpetofauna: Reptiles and Amphibians$"

KiposTown_Zoo_PokemonSign_DonationScript_Text_0:
# 175 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Eggs cannot be donated to this exhibit.$"

KiposTown_Zoo_PokemonSign_DonationScript_Text_1:
# 183 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Unfortunately, this Pokémon is\n"
	.string "incompatible with this exhibit.\p"
	.string "Would you like to choose another\n"
	.string "Pokémon for this enclosure?$"

KiposTown_Zoo_PokemonSign_DonationScript_Text_2:
# 203 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Are you sure you want to donate\n"
	.string "{STR_VAR_1}? Remember,\l"
	.string "contributions to the Sunset Wildlife\l"
	.string "Conservation Center Zoo are {COLOR RED}permanent{COLOR DARK_GRAY}!\l"
	.string "The Pokémon will be cared for with love,\l"
	.string "but cannot be withdrawn.$"

KiposTown_Zoo_PokemonSign_DonationScript_Text_3:
# 215 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "The donation could not be accepted at\n"
	.string "this time. Please come back with more\l"
	.string "Pokémon in your party.$"

KiposTown_Zoo_PokemonSign_DonationScript_Text_4:
# 319 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Donated {STR_VAR_1} to the Exhibit!\n"
	.string "Return soon to view the Pokémon in it's\l"
	.string "new home!$"

KiposTown_Zoo_PokemonSign_Girafarig_Text_0:
# 333 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Special Enclosure: Welcome to the\n"
	.string "Sunset Wildlife Conservation Zoo!\p"
	.string "This Girafarig was the first Pokémon\n"
	.string "ever cared for by the Conservation\l"
	.string "Center. It has always been most\l"
	.string "comfortable nearby this small cave,\l"
	.string "making a home here.\p"
	.string "There's more written about Girafarig!$"

KiposTown_Zoo_PokemonSign_Forest_Text_0:
# 356 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "---$"

KiposTown_Zoo_PokemonSign_Forest_Text_1:
# 368 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 1: {COLOR GREEN}Forest{COLOR DARK_GRAY}$"

KiposTown_Zoo_PokemonSign_Forest_Text_2:
# 370 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Pokémon in Enclosure (South):\n"
	.string "{STR_VAR_1}, {STR_VAR_2}$"

KiposTown_Zoo_PokemonSign_Forest_Text_3:
# 382 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Pokémon in Enclosure (North):\n"
	.string "{STR_VAR_1}, {STR_VAR_2}$"

KiposTown_Zoo_PokemonSign_Forest_Text_4:
# 389 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "There's information about each Pokémon\n"
	.string "listed. Read it?$"

KiposTown_Zoo_PokemonSign_Forest_Text_5:
# 435 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "There are no Pokémon in the exhibit.\n"
	.string "Would you like to {COLOR GREEN}donate a Pokémon to\l"
	.string "the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_PokemonSign_Forest_Text_6:
# 444 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "There is room for a second Pokémon in\n"
	.string "this exhibit. Would you like to {COLOR GREEN}donate a\l"
	.string "Pokémon to the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_PokemonSign_Forest_Text_7:
# 453 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "There is room for a third Pokémon in\n"
	.string "this exhibit. Would you like to {COLOR GREEN}donate a\l"
	.string "Pokémon to the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_PokemonSign_Forest_Text_8:
# 462 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "There is room for a fourth Pokémon in\n"
	.string "this exhibit. Would you like to {COLOR GREEN}donate a\l"
	.string "Pokémon to the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_EnvironmentSign_Forest_Text_0:
# 474 "data/maps/KiposTown_Zoo/scripts.pory"
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
# 493 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 2: Nest\n"
	.string "Pokémon in Exhibit: {STR_VAR_1}$"

KiposTown_Zoo_PokemonSign_Nest_Text_1:
# 500 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "There's information about the Pokémon\n"
	.string "listed. Read it?$"

KiposTown_Zoo_EnvironmentSign_Nest_Text_0:
# 530 "data/maps/KiposTown_Zoo/scripts.pory"
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
# 559 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 3: Rainforest\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}, {STR_VAR_3}$"

KiposTown_Zoo_EnvironmentSign_Rainforest_Text_0:
# 633 "data/maps/KiposTown_Zoo/scripts.pory"
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
# 662 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 4: Suburbs\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}, {STR_VAR_3}$"

KiposTown_Zoo_EnvironmentSign_Suburbs_Text_0:
# 736 "data/maps/KiposTown_Zoo/scripts.pory"
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
# 745 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Welcome! This is a {COLOR GREEN}Hands-On{COLOR DARK_GRAY} Pokémon\n"
	.string "Experience, allowing you to rest and\l"
	.string "relax alongside domesticated Pokémon!\p"
	.string "While it is perfectly safe inside this\n"
	.string "area, please be respectful of the\l"
	.string "Pokémon living here. Coexistence is\l"
	.string "key!$"

KiposTown_Zoo_EventScript_DomesticPokemonInteraction_1_Text_0:
# 757 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "The {STR_VAR_1} huffed out a\n"
	.string "greeting!$"

KiposTown_Zoo_PokemonSign_FungalSwamp_Text_0:
# 805 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 5: Fungal Swamp\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_EnvironmentSign_FungalSwamp_Text_0:
# 861 "data/maps/KiposTown_Zoo/scripts.pory"
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
# 885 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 6: Wetlands\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_EnvironmentSign_Wetlands_Text_0:
# 941 "data/maps/KiposTown_Zoo/scripts.pory"
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
# 955 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Beauty$"

KiposTown_Zoo_South_NPC_Beauty_Text_1:
# 956 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "The first Pokémon donated to the\n"
	.string "Conservation Center... now it became\l"
	.string "the last one left after Team Chimera's\l"
	.string "visit. I'm glad the Girafarig somehow\l"
	.string "stayed, though. I always came and\l"
	.string "visited it when I was a kid!$"

KiposTown_Zoo_South_NPC_BugCatcher_Text_0:
# 968 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Bug Catcher$"

KiposTown_Zoo_South_NPC_BugCatcher_Text_1:
# 971 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Hey, there's a Pokémon in the exhibit\n"
	.string "again! I'm so glad!$"

KiposTown_Zoo_South_NPC_BugCatcher_Text_2:
# 976 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Sniff... I wanted to see the Pokémon,\n"
	.string "where'd they go?$"

KiposTown_Zoo_South_NPC_Woman_Text_0:
# 989 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Woman$"

KiposTown_Zoo_South_NPC_Woman_Text_1:
# 992 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "It looks like the Pokémon are coming\n"
	.string "back to the Zoo! Someone is donating\l"
	.string "them!$"

KiposTown_Zoo_South_NPC_Woman_Text_2:
# 997 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "My poor son is so disappointed about\n"
	.string "the Pokémon being stolen.$"

KiposTown_Zoo_South_NPC_RichBoy_Text_0:
# 1010 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Rich Boy$"

KiposTown_Zoo_South_NPC_RichBoy_Text_1:
# 1011 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "I hear that Zoos and Pokémon\n"
	.string "conservation programs are always a bit\l"
	.string "short on money. Maybe I could donate a\l"
	.string "few bucks!$"

KiposTown_Zoo_South_NPC_Youngster_Text_0:
# 1021 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Youngster$"

KiposTown_Zoo_South_NPC_Youngster_Text_1:
# 1022 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "We're learning about different Pokémon\n"
	.string "species in school. Some are always safe\l"
	.string "to be around, but others can be real\l"
	.string "scary!$"

KiposTown_Zoo_South_NPC_Worker_Text_0:
# 1032 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Worker$"

KiposTown_Zoo_South_NPC_Worker_Text_1:
# 1035 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "After a wild shift at the factory,\n"
	.string "there's nothing better than coming\l"
	.string "here and running around with Pokémon.\l"
	.string "It makes me feel like a kid again!$"

KiposTown_Zoo_South_NPC_Worker_Text_2:
# 1040 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Before all the Pokémon were taken, I\n"
	.string "used to come here to run around with\l"
	.string "the Pokémon. Now I just do it by\l"
	.string "myself... I must look so goofy!$"

KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_0:
# 1051 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Old Woman$"

KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_1:
# 1057 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Oh, it makes me so happy to see all the\n"
	.string "Pokémon back in this area!\l"
	.string "Kind-hearted people like you make the\l"
	.string "world a better place.$"

KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_2:
# 1067 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "It's been so sad in the Zoo since Team\n"
	.string "Chimera came and stole almost all the\l"
	.string "Pokémon...\p"
	.string "Hm? You're leading the effort to\n"
	.string "repopulate the Zoo, right? If you could\l"
	.string "spare the time, please, try to donate {COLOR GREEN}3\l"
	.string "Pokémon{COLOR DARK_GRAY} to this exhibit. I miss sitting\l"
	.string "with the little Pokémon!$"

KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_3:
# 1075 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Chaire, little one... how has donating\n"
	.string "Pokémon been going?$"

KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_4:
# 1085 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Ohoho, I knew you could do it! These old\n"
	.string "eyes can barely see, but I can feel all\l"
	.string "the Pokémon around me.\p"
	.string "Here, I want you to have this. I've held\n"
	.string "onto it for years, but it's time to pass\l"
	.string "it on.$"

KiposTown_Zoo_South_NPC_OldWomanInHandsOn_Text_5:
# 1097 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "It's okay, I know this whole Zoo project\n"
	.string "is a massive task for a single person.\l"
	.string "But if anyone can do it, I'm sure it's\l"
	.string "you, honey!$"

KiposTown_Zoo_South_NPC_Maniac_Text_0:
# 1109 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Bug Maniac$"

KiposTown_Zoo_South_NPC_Maniac_Text_1:
# 1110 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Lots of people overlook insects, but\n"
	.string "they're actually way more diverse than\l"
	.string "most other groups of wildlife! Just\l"
	.string "think about how many Bug-type and\l"
	.string "other bug-like Pokémon there are!$"

KiposTown_Zoo_South_NPC_Fisherman_Text_0:
# 1120 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Fisherman$"

KiposTown_Zoo_South_NPC_Fisherman_Text_1:
# 1123 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "It's nice to see Pokémon splashing\n"
	.string "around in the Wetlands Enclosure again.\l"
	.string "Sure, I go fishing, but I always release\l"
	.string "them back into the water!$"

KiposTown_Zoo_South_NPC_Fisherman_Text_2:
# 1128 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "I miss seeing Pokémon in this\n"
	.string "Enclosure... Maybe I could bring some\l"
	.string "fish in to help repopulate it.$"

KiposTown_Zoo_South_NPC_Girl_Text_0:
# 1141 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Girl$"

KiposTown_Zoo_South_NPC_Girl_Text_1:
# 1142 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "I'm learning so much about the\n"
	.string "environment here! Like, did you know\l"
	.string "that wetlands can prevent flooding?\l"
	.string "Oh, and I found out that all Pokémon\l"
	.string "that have been recorded reproducing\l"
	.string "lay Pokémon Eggs! There's so much to\l"
	.string "learn!$"

KiposTown_Zoo_South_NPC_CyclingTriathleteF_Text_0:
# 1152 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Cycling Girl$"

KiposTown_Zoo_South_NPC_CyclingTriathleteF_Text_1:
# 1153 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Woah... This Zoo is so huge, I'm starting\n"
	.string "to get lost! I think the exit is south,\l"
	.string "but how do I get to the Mountains\l"
	.string "exhibit?$"

KiposTown_Zoo_South_NPC_FatMan_Text_0:
# 1163 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Fat Man$"

KiposTown_Zoo_South_NPC_FatMan_Text_1:
# 1164 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "The Zoo expanded a bunch over the past\n"
	.string "couple years. The buildings to the left\l"
	.string "and right of the main path have special\l"
	.string "exhibits!$"

KiposTown_Zoo_South_NPC_HexManiac_Text_0:
# 1174 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Hex Maniac$"

KiposTown_Zoo_South_NPC_HexManiac_Text_1:
# 1175 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Sometimes, Zoo employees open these\n"
	.string "gates and drive through on carts full\l"
	.string "of Pokémon feed. I wonder what it looks\l"
	.string "like back there.$"

KiposTown_Zoo_South_NPC_Scientist_Text_0:
# 1185 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Scientist$"

KiposTown_Zoo_South_NPC_Scientist_Text_1:
# 1189 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "That {STR_VAR_1} seems to be doing\n"
	.string "a great job taking care of the Pokémon\l"
	.string "Eggs! Despite being from different\l"
	.string "species, it still warms them and shows\l"
	.string "them affection. Pokémon behavior is\l"
	.string "fascinating!$"

KiposTown_Zoo_South_NPC_Scientist_Text_2:
# 1194 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "I hope those Pokémon Eggs are doing\n"
	.string "alright in there. Researchers from the\l"
	.string "Conservation Center have routinely\l"
	.string "checked up on them, but they'd probably\l"
	.string "do better with a Pokémon in there\l"
	.string "caring for them.$"

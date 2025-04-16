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
	delay 30
# 69 "data/maps/KiposTown_Zoo/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 71 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 72 "data/maps/KiposTown_Zoo/scripts.pory"
	startquest QUEST_ZOOKEEPER
# 74 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end


# 78 "data/maps/KiposTown_Zoo/scripts.pory"
KiposTown_Zoo_Movement_RusselWalkToGirafarig:
# 80 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 80 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 81 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 81 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 81 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 81 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 82 "data/maps/KiposTown_Zoo/scripts.pory"
	face_up
# 83 "data/maps/KiposTown_Zoo/scripts.pory"
	step_end

# 85 "data/maps/KiposTown_Zoo/scripts.pory"
KiposTown_Zoo_Movement_PlayerWalkToGirafarig:
# 87 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 87 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 87 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 88 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 88 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 88 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 89 "data/maps/KiposTown_Zoo/scripts.pory"
	face_up
# 90 "data/maps/KiposTown_Zoo/scripts.pory"
	step_end

# 92 "data/maps/KiposTown_Zoo/scripts.pory"
KiposTown_Zoo_Movement_RusselWalkToSwampExhibit:
# 94 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_down
# 95 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 95 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 95 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 95 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 95 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 95 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 96 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 96 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 96 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 96 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 96 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 96 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 97 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 97 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 97 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 98 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 99 "data/maps/KiposTown_Zoo/scripts.pory"
	face_left
# 100 "data/maps/KiposTown_Zoo/scripts.pory"
	step_end

# 102 "data/maps/KiposTown_Zoo/scripts.pory"
KiposTown_Zoo_Movement_PlayerWalkToSwampExhibit:
# 104 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 105 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_down
# 106 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 106 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 106 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 106 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 106 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 106 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 107 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 107 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 107 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 107 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 107 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 107 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 108 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 108 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_right
# 109 "data/maps/KiposTown_Zoo/scripts.pory"
	walk_up
# 110 "data/maps/KiposTown_Zoo/scripts.pory"
	face_right
# 111 "data/maps/KiposTown_Zoo/scripts.pory"
	step_end

KiposTown_Zoo_PokemonSign_End::
# 120 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 121 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end


KiposTown_Zoo_PokemonSign_DonationScript::
# 127 "data/maps/KiposTown_Zoo/scripts.pory"
	special ChoosePartyMon
# 128 "data/maps/KiposTown_Zoo/scripts.pory"
	waitstate
# 130 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, KiposTown_Zoo_PokemonSign_End
# 132 "data/maps/KiposTown_Zoo/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 133 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_RESULT
# 135 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_0x8003, SPECIES_EGG
	goto_if_eq KiposTown_Zoo_PokemonSign_DonationScript_2
KiposTown_Zoo_PokemonSign_DonationScript_1:
# 142 "data/maps/KiposTown_Zoo/scripts.pory"
	special GetZooDonationValidity
# 143 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_0x8002, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_DonationScript_5
# 164 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8003
# 165 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_DonationScript_Text_2, MSGBOX_YESNO
# 166 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_DonationScript_7
# 172 "data/maps/KiposTown_Zoo/scripts.pory"
	special DonateMonToZoo
# 175 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_eq KiposTown_Zoo_PokemonSign_DonationScript_15
KiposTown_Zoo_PokemonSign_DonationScript_14:
# 182 "data/maps/KiposTown_Zoo/scripts.pory"
	switch VAR_TEMP_0
# 184 "data/maps/KiposTown_Zoo/scripts.pory"
	case 1, KiposTown_Zoo_PokemonSign_DonationScript_19
# 186 "data/maps/KiposTown_Zoo/scripts.pory"
	case 2, KiposTown_Zoo_PokemonSign_DonationScript_20
# 188 "data/maps/KiposTown_Zoo/scripts.pory"
	case 3, KiposTown_Zoo_PokemonSign_DonationScript_21
# 190 "data/maps/KiposTown_Zoo/scripts.pory"
	case 4, KiposTown_Zoo_PokemonSign_DonationScript_22
# 192 "data/maps/KiposTown_Zoo/scripts.pory"
	case 5, KiposTown_Zoo_PokemonSign_DonationScript_23
# 194 "data/maps/KiposTown_Zoo/scripts.pory"
	case 6, KiposTown_Zoo_PokemonSign_DonationScript_24
# 196 "data/maps/KiposTown_Zoo/scripts.pory"
	case 7, KiposTown_Zoo_PokemonSign_DonationScript_25
# 198 "data/maps/KiposTown_Zoo/scripts.pory"
	case 8, KiposTown_Zoo_PokemonSign_DonationScript_26
# 200 "data/maps/KiposTown_Zoo/scripts.pory"
	case 9, KiposTown_Zoo_PokemonSign_DonationScript_27
# 202 "data/maps/KiposTown_Zoo/scripts.pory"
	case 10, KiposTown_Zoo_PokemonSign_DonationScript_28
# 204 "data/maps/KiposTown_Zoo/scripts.pory"
	case 11, KiposTown_Zoo_PokemonSign_DonationScript_29
# 206 "data/maps/KiposTown_Zoo/scripts.pory"
	case 12, KiposTown_Zoo_PokemonSign_DonationScript_30
# 208 "data/maps/KiposTown_Zoo/scripts.pory"
	case 13, KiposTown_Zoo_PokemonSign_DonationScript_31
# 210 "data/maps/KiposTown_Zoo/scripts.pory"
	case 14, KiposTown_Zoo_PokemonSign_DonationScript_32
# 212 "data/maps/KiposTown_Zoo/scripts.pory"
	case 15, KiposTown_Zoo_PokemonSign_DonationScript_33
# 214 "data/maps/KiposTown_Zoo/scripts.pory"
	case 16, KiposTown_Zoo_PokemonSign_DonationScript_34
# 216 "data/maps/KiposTown_Zoo/scripts.pory"
	case 17, KiposTown_Zoo_PokemonSign_DonationScript_35
# 218 "data/maps/KiposTown_Zoo/scripts.pory"
	case 18, KiposTown_Zoo_PokemonSign_DonationScript_36
# 220 "data/maps/KiposTown_Zoo/scripts.pory"
	case 19, KiposTown_Zoo_PokemonSign_DonationScript_37
# 222 "data/maps/KiposTown_Zoo/scripts.pory"
	case 20, KiposTown_Zoo_PokemonSign_DonationScript_38
# 224 "data/maps/KiposTown_Zoo/scripts.pory"
	case 21, KiposTown_Zoo_PokemonSign_DonationScript_39
# 226 "data/maps/KiposTown_Zoo/scripts.pory"
	case 22, KiposTown_Zoo_PokemonSign_DonationScript_40
# 228 "data/maps/KiposTown_Zoo/scripts.pory"
	case 23, KiposTown_Zoo_PokemonSign_DonationScript_41
# 230 "data/maps/KiposTown_Zoo/scripts.pory"
	case 24, KiposTown_Zoo_PokemonSign_DonationScript_42
# 232 "data/maps/KiposTown_Zoo/scripts.pory"
	case 25, KiposTown_Zoo_PokemonSign_DonationScript_43
# 234 "data/maps/KiposTown_Zoo/scripts.pory"
	case 26, KiposTown_Zoo_PokemonSign_DonationScript_44
# 236 "data/maps/KiposTown_Zoo/scripts.pory"
	case 27, KiposTown_Zoo_PokemonSign_DonationScript_45
# 238 "data/maps/KiposTown_Zoo/scripts.pory"
	case 28, KiposTown_Zoo_PokemonSign_DonationScript_46
# 240 "data/maps/KiposTown_Zoo/scripts.pory"
	case 29, KiposTown_Zoo_PokemonSign_DonationScript_47
# 242 "data/maps/KiposTown_Zoo/scripts.pory"
	case 30, KiposTown_Zoo_PokemonSign_DonationScript_48
# 244 "data/maps/KiposTown_Zoo/scripts.pory"
	case 31, KiposTown_Zoo_PokemonSign_DonationScript_49
# 246 "data/maps/KiposTown_Zoo/scripts.pory"
	case 32, KiposTown_Zoo_PokemonSign_DonationScript_50
# 248 "data/maps/KiposTown_Zoo/scripts.pory"
	case 33, KiposTown_Zoo_PokemonSign_DonationScript_51
# 250 "data/maps/KiposTown_Zoo/scripts.pory"
	case 34, KiposTown_Zoo_PokemonSign_DonationScript_52
# 252 "data/maps/KiposTown_Zoo/scripts.pory"
	case 35, KiposTown_Zoo_PokemonSign_DonationScript_53
# 254 "data/maps/KiposTown_Zoo/scripts.pory"
	case 36, KiposTown_Zoo_PokemonSign_DonationScript_54
# 256 "data/maps/KiposTown_Zoo/scripts.pory"
	case 37, KiposTown_Zoo_PokemonSign_DonationScript_55
# 258 "data/maps/KiposTown_Zoo/scripts.pory"
	case 38, KiposTown_Zoo_PokemonSign_DonationScript_56
# 260 "data/maps/KiposTown_Zoo/scripts.pory"
	case 39, KiposTown_Zoo_PokemonSign_DonationScript_57
# 262 "data/maps/KiposTown_Zoo/scripts.pory"
	case 40, KiposTown_Zoo_PokemonSign_DonationScript_58
# 264 "data/maps/KiposTown_Zoo/scripts.pory"
	case 41, KiposTown_Zoo_PokemonSign_DonationScript_59
# 266 "data/maps/KiposTown_Zoo/scripts.pory"
	case 42, KiposTown_Zoo_PokemonSign_DonationScript_60
# 268 "data/maps/KiposTown_Zoo/scripts.pory"
	case 43, KiposTown_Zoo_PokemonSign_DonationScript_61
# 270 "data/maps/KiposTown_Zoo/scripts.pory"
	case 44, KiposTown_Zoo_PokemonSign_DonationScript_62
# 272 "data/maps/KiposTown_Zoo/scripts.pory"
	case 45, KiposTown_Zoo_PokemonSign_DonationScript_63
# 274 "data/maps/KiposTown_Zoo/scripts.pory"
	case 46, KiposTown_Zoo_PokemonSign_DonationScript_64
KiposTown_Zoo_PokemonSign_DonationScript_17:
# 278 "data/maps/KiposTown_Zoo/scripts.pory"
	playfanfare FANFARE_LEVEL_UP
# 279 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_DonationScript_Text_4
# 280 "data/maps/KiposTown_Zoo/scripts.pory"
	waitfanfare
# 281 "data/maps/KiposTown_Zoo/scripts.pory"
	goto KiposTown_Zoo_PokemonSign_End
	return

KiposTown_Zoo_PokemonSign_DonationScript_2:
# 137 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_DonationScript_Text_0
# 138 "data/maps/KiposTown_Zoo/scripts.pory"
	goto KiposTown_Zoo_PokemonSign_End
	goto KiposTown_Zoo_PokemonSign_DonationScript_1

KiposTown_Zoo_PokemonSign_DonationScript_5:
# 145 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_DonationScript_Text_1, MSGBOX_YESNO
# 146 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 147 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_DonationScript_11
# 153 "data/maps/KiposTown_Zoo/scripts.pory"
	goto KiposTown_Zoo_PokemonSign_DonationScript
KiposTown_Zoo_PokemonSign_DonationScript_10:
# 155 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_DonationScript_7:
# 168 "data/maps/KiposTown_Zoo/scripts.pory"
	goto KiposTown_Zoo_PokemonSign_End
	return

KiposTown_Zoo_PokemonSign_DonationScript_11:
# 149 "data/maps/KiposTown_Zoo/scripts.pory"
	goto KiposTown_Zoo_PokemonSign_End
	goto KiposTown_Zoo_PokemonSign_DonationScript_10

KiposTown_Zoo_PokemonSign_DonationScript_15:
# 177 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_DonationScript_Text_3
# 178 "data/maps/KiposTown_Zoo/scripts.pory"
	goto KiposTown_Zoo_PokemonSign_End
	goto KiposTown_Zoo_PokemonSign_DonationScript_14

KiposTown_Zoo_PokemonSign_DonationScript_19:
# 185 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_01_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_20:
# 187 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_01_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_21:
# 189 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_01_3, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_22:
# 191 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_01_4, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_23:
# 193 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_02_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_24:
# 195 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_03_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_25:
# 197 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_03_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_26:
# 199 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_03_3, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_27:
# 201 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_04_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_28:
# 203 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_04_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_29:
# 205 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_04_3, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_30:
# 207 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_05_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_31:
# 209 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_05_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_32:
# 211 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_06_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_33:
# 213 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_06_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_34:
# 215 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_07_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_35:
# 217 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_07_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_36:
# 219 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_08_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_37:
# 221 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_08_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_38:
# 223 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_09_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_39:
# 225 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_10_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_40:
# 227 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_10_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_41:
# 229 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_10_3, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_42:
# 231 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_11_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_43:
# 233 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_11_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_44:
# 235 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_12_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_45:
# 237 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_12_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_46:
# 239 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_13_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_47:
# 241 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_13_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_48:
# 243 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_14_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_49:
# 245 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_14_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_50:
# 247 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_IN_01_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_51:
# 249 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_IN_01_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_52:
# 251 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_IN_01_3, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_53:
# 253 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_IN_02_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_54:
# 255 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_IN_02_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_55:
# 257 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_IN_03_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_56:
# 259 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_IN_03_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_57:
# 261 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_01_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_58:
# 263 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_01_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_59:
# 265 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_02_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_60:
# 267 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_02_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_61:
# 269 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_03_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_62:
# 271 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_03_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_63:
# 273 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_1, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17

KiposTown_Zoo_PokemonSign_DonationScript_64:
# 275 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_2, VAR_0x8003
	goto KiposTown_Zoo_PokemonSign_DonationScript_17


KiposTown_Zoo_PokemonSign_Girafarig::
# 292 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 293 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Girafarig_Text_0
# 294 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 296 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_0x8003, SPECIES_GIRAFARIG
# 297 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 298 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 299 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 300 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 302 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end


KiposTown_Zoo_PokemonSign_Forest::
# 309 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 312 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_01_1
# 313 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_01_2
# 314 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_2
KiposTown_Zoo_PokemonSign_Forest_1:
# 318 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_5
KiposTown_Zoo_PokemonSign_Forest_4:
# 328 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_1
# 329 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 330 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_2
# 331 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 332 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_01_3
# 333 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_01_4
# 334 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_8
KiposTown_Zoo_PokemonSign_Forest_7:
# 338 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_4, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_11
KiposTown_Zoo_PokemonSign_Forest_10:
# 342 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_3
# 343 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 346 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Forest_14
KiposTown_Zoo_PokemonSign_Forest_13:
# 390 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_17
# 399 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_18
# 408 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_19
# 417 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_4, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_20
KiposTown_Zoo_PokemonSign_Forest_16:
# 427 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Forest_2:
# 316 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Forest_1

KiposTown_Zoo_PokemonSign_Forest_5:
# 320 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Forest_4

KiposTown_Zoo_PokemonSign_Forest_8:
# 336 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Forest_7

KiposTown_Zoo_PokemonSign_Forest_11:
# 340 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Forest_10

KiposTown_Zoo_PokemonSign_Forest_14:
# 349 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_4, MSGBOX_YESNO
# 350 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 351 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_25
	goto KiposTown_Zoo_PokemonSign_Forest_13

KiposTown_Zoo_PokemonSign_Forest_17:
# 393 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 1
# 395 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_5, MSGBOX_YESNO
# 396 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 397 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Forest_16

KiposTown_Zoo_PokemonSign_Forest_18:
# 402 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 2
# 404 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_6, MSGBOX_YESNO
# 405 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 406 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Forest_16

KiposTown_Zoo_PokemonSign_Forest_19:
# 411 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 3
# 413 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_7, MSGBOX_YESNO
# 414 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 415 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Forest_16

KiposTown_Zoo_PokemonSign_Forest_20:
# 420 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 4
# 422 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_8, MSGBOX_YESNO
# 423 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 424 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Forest_16

KiposTown_Zoo_PokemonSign_Forest_25:
# 353 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_01_1
# 354 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 355 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 356 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 357 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 359 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Forest_28
KiposTown_Zoo_PokemonSign_Forest_27:
# 368 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_3, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Forest_31
KiposTown_Zoo_PokemonSign_Forest_30:
# 377 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_4, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Forest_33
	goto KiposTown_Zoo_PokemonSign_Forest_13

KiposTown_Zoo_PokemonSign_Forest_28:
# 361 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 362 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_01_2
# 363 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 364 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 365 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 366 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Forest_27

KiposTown_Zoo_PokemonSign_Forest_31:
# 370 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 371 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_01_3
# 372 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 373 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 374 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 375 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Forest_30

KiposTown_Zoo_PokemonSign_Forest_33:
# 379 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 380 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_01_4
# 381 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 382 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 383 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 384 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Forest_13


KiposTown_Zoo_EnvironmentSign_Forest::
# 433 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 434 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Forest_Text_0
# 435 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 436 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Nest::
# 443 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 446 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_02_1
# 447 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_02_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Nest_2
KiposTown_Zoo_PokemonSign_Nest_1:
# 453 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Nest_Text_0
# 454 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 457 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_02_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Nest_5
KiposTown_Zoo_PokemonSign_Nest_4:
# 473 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_02_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Nest_8
KiposTown_Zoo_PokemonSign_Nest_7:
# 483 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Nest_2:
# 449 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Nest_1

KiposTown_Zoo_PokemonSign_Nest_5:
# 460 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Nest_Text_1, MSGBOX_YESNO
# 461 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 462 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Nest_10
	goto KiposTown_Zoo_PokemonSign_Nest_4

KiposTown_Zoo_PokemonSign_Nest_8:
# 476 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 5
# 478 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_5, MSGBOX_YESNO
# 479 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 480 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Nest_7

KiposTown_Zoo_PokemonSign_Nest_10:
# 464 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_02_1
# 465 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 466 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 467 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 468 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Nest_4


KiposTown_Zoo_EnvironmentSign_Nest::
# 489 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 490 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Nest_Text_0
# 491 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 492 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Rainforest::
# 499 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 502 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_03_1
# 503 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_03_2
# 504 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_3, VAR_ZOO_POKEMON_ENCLOSURE_03_3
# 505 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Rainforest_2
KiposTown_Zoo_PokemonSign_Rainforest_1:
# 509 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Rainforest_5
KiposTown_Zoo_PokemonSign_Rainforest_4:
# 513 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Rainforest_8
KiposTown_Zoo_PokemonSign_Rainforest_7:
# 519 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Rainforest_Text_0
# 520 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 523 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Rainforest_11
KiposTown_Zoo_PokemonSign_Rainforest_10:
# 558 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Rainforest_14
# 567 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Rainforest_15
# 576 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Rainforest_16
KiposTown_Zoo_PokemonSign_Rainforest_13:
# 586 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Rainforest_2:
# 507 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Rainforest_1

KiposTown_Zoo_PokemonSign_Rainforest_5:
# 511 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Rainforest_4

KiposTown_Zoo_PokemonSign_Rainforest_8:
# 515 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_3, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Rainforest_7

KiposTown_Zoo_PokemonSign_Rainforest_11:
# 526 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_4, MSGBOX_YESNO
# 527 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 528 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Rainforest_20
	goto KiposTown_Zoo_PokemonSign_Rainforest_10

KiposTown_Zoo_PokemonSign_Rainforest_14:
# 561 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 6
# 563 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_5, MSGBOX_YESNO
# 564 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 565 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Rainforest_13

KiposTown_Zoo_PokemonSign_Rainforest_15:
# 570 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 7
# 572 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_6, MSGBOX_YESNO
# 573 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 574 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Rainforest_13

KiposTown_Zoo_PokemonSign_Rainforest_16:
# 579 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 8
# 581 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_7, MSGBOX_YESNO
# 582 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 583 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Rainforest_13

KiposTown_Zoo_PokemonSign_Rainforest_20:
# 530 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_03_1
# 531 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 532 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 533 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 534 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 536 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Rainforest_23
KiposTown_Zoo_PokemonSign_Rainforest_22:
# 545 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_03_3, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Rainforest_25
	goto KiposTown_Zoo_PokemonSign_Rainforest_10

KiposTown_Zoo_PokemonSign_Rainforest_23:
# 538 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 539 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_03_2
# 540 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 541 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 542 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 543 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Rainforest_22

KiposTown_Zoo_PokemonSign_Rainforest_25:
# 547 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 548 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_03_3
# 549 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 550 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 551 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 552 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Rainforest_10


KiposTown_Zoo_EnvironmentSign_Rainforest::
# 592 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 593 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Rainforest_Text_0
# 594 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 595 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Suburbs::
# 602 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 605 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_04_1
# 606 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_04_2
# 607 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_3, VAR_ZOO_POKEMON_ENCLOSURE_04_3
# 608 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Suburbs_2
KiposTown_Zoo_PokemonSign_Suburbs_1:
# 612 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Suburbs_5
KiposTown_Zoo_PokemonSign_Suburbs_4:
# 616 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Suburbs_8
KiposTown_Zoo_PokemonSign_Suburbs_7:
# 622 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Suburbs_Text_0
# 623 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 626 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Suburbs_11
KiposTown_Zoo_PokemonSign_Suburbs_10:
# 661 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Suburbs_14
# 670 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Suburbs_15
# 679 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Suburbs_16
KiposTown_Zoo_PokemonSign_Suburbs_13:
# 689 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Suburbs_2:
# 610 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Suburbs_1

KiposTown_Zoo_PokemonSign_Suburbs_5:
# 614 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Suburbs_4

KiposTown_Zoo_PokemonSign_Suburbs_8:
# 618 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_3, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Suburbs_7

KiposTown_Zoo_PokemonSign_Suburbs_11:
# 629 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_4, MSGBOX_YESNO
# 630 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 631 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Suburbs_20
	goto KiposTown_Zoo_PokemonSign_Suburbs_10

KiposTown_Zoo_PokemonSign_Suburbs_14:
# 664 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 9
# 666 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_5, MSGBOX_YESNO
# 667 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 668 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Suburbs_13

KiposTown_Zoo_PokemonSign_Suburbs_15:
# 673 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 10
# 675 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_6, MSGBOX_YESNO
# 676 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 677 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Suburbs_13

KiposTown_Zoo_PokemonSign_Suburbs_16:
# 682 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 11
# 684 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_7, MSGBOX_YESNO
# 685 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 686 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Suburbs_13

KiposTown_Zoo_PokemonSign_Suburbs_20:
# 633 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_04_1
# 634 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 635 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 636 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 637 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 639 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Suburbs_23
KiposTown_Zoo_PokemonSign_Suburbs_22:
# 648 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_04_3, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Suburbs_25
	goto KiposTown_Zoo_PokemonSign_Suburbs_10

KiposTown_Zoo_PokemonSign_Suburbs_23:
# 641 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 642 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_04_2
# 643 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 644 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 645 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 646 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Suburbs_22

KiposTown_Zoo_PokemonSign_Suburbs_25:
# 650 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 651 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_04_3
# 652 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 653 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 654 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 655 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Suburbs_10


KiposTown_Zoo_EnvironmentSign_Suburbs::
# 695 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 696 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Suburbs_Text_0
# 697 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 698 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_HandsOnExhibitWarningSign::
# 704 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 705 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_HandsOnExhibitWarningSign_Text_0
# 706 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 707 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_EventScript_DomesticPokemonInteraction_1::
# 712 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 713 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 714 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_04_1
# 715 "data/maps/KiposTown_Zoo/scripts.pory"
	playmoncry VAR_ZOO_POKEMON_ENCLOSURE_04_1, CRY_MODE_NORMAL
# 716 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmoncry
# 717 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EventScript_DomesticPokemonInteraction_1_Text_0
# 718 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 719 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_EventScript_DomesticPokemonInteraction_2::
# 724 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 725 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 726 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_04_2
# 727 "data/maps/KiposTown_Zoo/scripts.pory"
	playmoncry VAR_ZOO_POKEMON_ENCLOSURE_04_2, CRY_MODE_NORMAL
# 728 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmoncry
# 729 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EventScript_DomesticPokemonInteraction_1_Text_0
# 730 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 731 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_EventScript_DomesticPokemonInteraction_3::
# 736 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 737 "data/maps/KiposTown_Zoo/scripts.pory"
	faceplayer
# 738 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_04_3
# 739 "data/maps/KiposTown_Zoo/scripts.pory"
	playmoncry VAR_ZOO_POKEMON_ENCLOSURE_04_3, CRY_MODE_NORMAL
# 740 "data/maps/KiposTown_Zoo/scripts.pory"
	waitmoncry
# 741 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EventScript_DomesticPokemonInteraction_1_Text_0
# 742 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 743 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_FungalSwamp::
# 750 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 753 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_05_1
# 754 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_05_2
# 755 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_05_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_FungalSwamp_2
KiposTown_Zoo_PokemonSign_FungalSwamp_1:
# 759 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_05_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_FungalSwamp_5
KiposTown_Zoo_PokemonSign_FungalSwamp_4:
# 765 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_FungalSwamp_Text_0
# 766 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 769 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_05_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_FungalSwamp_8
KiposTown_Zoo_PokemonSign_FungalSwamp_7:
# 795 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_05_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_FungalSwamp_11
# 804 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_05_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_FungalSwamp_12
KiposTown_Zoo_PokemonSign_FungalSwamp_10:
# 814 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_FungalSwamp_2:
# 757 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_FungalSwamp_1

KiposTown_Zoo_PokemonSign_FungalSwamp_5:
# 761 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_FungalSwamp_4

KiposTown_Zoo_PokemonSign_FungalSwamp_8:
# 772 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_4, MSGBOX_YESNO
# 773 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 774 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_FungalSwamp_15
	goto KiposTown_Zoo_PokemonSign_FungalSwamp_7

KiposTown_Zoo_PokemonSign_FungalSwamp_11:
# 798 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 12
# 800 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_5, MSGBOX_YESNO
# 801 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 802 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_FungalSwamp_10

KiposTown_Zoo_PokemonSign_FungalSwamp_12:
# 807 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 13
# 809 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_6, MSGBOX_YESNO
# 810 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 811 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_FungalSwamp_10

KiposTown_Zoo_PokemonSign_FungalSwamp_15:
# 776 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_05_1
# 777 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 778 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 779 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 780 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 782 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_05_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_FungalSwamp_17
	goto KiposTown_Zoo_PokemonSign_FungalSwamp_7

KiposTown_Zoo_PokemonSign_FungalSwamp_17:
# 784 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 785 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_05_2
# 786 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 787 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 788 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 789 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_FungalSwamp_7


KiposTown_Zoo_EnvironmentSign_FungalSwamp::
# 820 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 821 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_FungalSwamp_Text_0
# 822 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 823 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Wetlands::
# 830 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 833 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_06_1
# 834 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_06_2
# 835 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_06_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Wetlands_2
KiposTown_Zoo_PokemonSign_Wetlands_1:
# 839 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_06_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Wetlands_5
KiposTown_Zoo_PokemonSign_Wetlands_4:
# 845 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Wetlands_Text_0
# 846 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 849 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_06_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Wetlands_8
KiposTown_Zoo_PokemonSign_Wetlands_7:
# 875 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_06_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Wetlands_11
# 884 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_06_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Wetlands_12
KiposTown_Zoo_PokemonSign_Wetlands_10:
# 894 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Wetlands_2:
# 837 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Wetlands_1

KiposTown_Zoo_PokemonSign_Wetlands_5:
# 841 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Wetlands_4

KiposTown_Zoo_PokemonSign_Wetlands_8:
# 852 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_4, MSGBOX_YESNO
# 853 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 854 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Wetlands_15
	goto KiposTown_Zoo_PokemonSign_Wetlands_7

KiposTown_Zoo_PokemonSign_Wetlands_11:
# 878 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 14
# 880 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_5, MSGBOX_YESNO
# 881 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 882 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Wetlands_10

KiposTown_Zoo_PokemonSign_Wetlands_12:
# 887 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 15
# 889 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_6, MSGBOX_YESNO
# 890 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 891 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Wetlands_10

KiposTown_Zoo_PokemonSign_Wetlands_15:
# 856 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_06_1
# 857 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 858 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 859 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 860 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 862 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_06_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Wetlands_17
	goto KiposTown_Zoo_PokemonSign_Wetlands_7

KiposTown_Zoo_PokemonSign_Wetlands_17:
# 864 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 865 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_06_2
# 866 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 867 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 868 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 869 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Wetlands_7


KiposTown_Zoo_EnvironmentSign_Wetlands::
# 900 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 901 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Wetlands_Text_0
# 902 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 903 "data/maps/KiposTown_Zoo/scripts.pory"
	release
	end


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

KiposTown_Zoo_PokemonSign_DonationScript_Text_0:
# 137 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Eggs cannot be donated to this exhibit.$"

KiposTown_Zoo_PokemonSign_DonationScript_Text_1:
# 145 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Unfortunately, this Pokémon is\n"
	.string "incompatible with this exhibit.\p"
	.string "Would you like to choose another\n"
	.string "Pokémon for this enclosure?$"

KiposTown_Zoo_PokemonSign_DonationScript_Text_2:
# 165 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Are you sure you want to donate\n"
	.string "{STR_VAR_1}? Remember,\l"
	.string "contributions to the Sunset Wildlife\l"
	.string "Conservation Center Zoo are {COLOR RED}permanent{COLOR DARK_GRAY}!\l"
	.string "The Pokémon will be cared for with love,\l"
	.string "but cannot be withdrawn.$"

KiposTown_Zoo_PokemonSign_DonationScript_Text_3:
# 177 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "The donation could not be accepted at\n"
	.string "this time. Please come back with more\l"
	.string "Pokémon in your party.$"

KiposTown_Zoo_PokemonSign_DonationScript_Text_4:
# 279 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Donated {STR_VAR_1} to the Exhibit!\n"
	.string "Return soon to view the Pokémon in it's\l"
	.string "new home!$"

KiposTown_Zoo_PokemonSign_Girafarig_Text_0:
# 293 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Special Enclosure: Welcome to the\n"
	.string "Sunset Wildlife Conservation Zoo!\p"
	.string "This Girafarig was the first Pokémon\n"
	.string "ever cared for by the Conservation\l"
	.string "Center. It has always been most\l"
	.string "comfortable nearby this small cave,\l"
	.string "making a home here.\p"
	.string "There's more written about Girafarig!$"

KiposTown_Zoo_PokemonSign_Forest_Text_0:
# 316 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "---$"

KiposTown_Zoo_PokemonSign_Forest_Text_1:
# 328 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 1: {COLOR GREEN}Forest{COLOR DARK_GRAY}$"

KiposTown_Zoo_PokemonSign_Forest_Text_2:
# 330 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Pokémon in Enclosure (South):\n"
	.string "{STR_VAR_1}, {STR_VAR_2}$"

KiposTown_Zoo_PokemonSign_Forest_Text_3:
# 342 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Pokémon in Enclosure (North):\n"
	.string "{STR_VAR_1}, {STR_VAR_2}$"

KiposTown_Zoo_PokemonSign_Forest_Text_4:
# 349 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "There's information about each Pokémon\n"
	.string "listed. Read it?$"

KiposTown_Zoo_PokemonSign_Forest_Text_5:
# 395 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "There are no Pokémon in the exhibit.\n"
	.string "Would you like to {COLOR GREEN}donate a Pokémon to\l"
	.string "the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_PokemonSign_Forest_Text_6:
# 404 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "There is room for a second Pokémon in\n"
	.string "this exhibit. Would you like to {COLOR GREEN}donate a\l"
	.string "Pokémon to the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_PokemonSign_Forest_Text_7:
# 413 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "There is room for a third Pokémon in\n"
	.string "this exhibit. Would you like to {COLOR GREEN}donate a\l"
	.string "Pokémon to the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_PokemonSign_Forest_Text_8:
# 422 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "There is room for a fourth Pokémon in\n"
	.string "this exhibit. Would you like to {COLOR GREEN}donate a\l"
	.string "Pokémon to the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_EnvironmentSign_Forest_Text_0:
# 434 "data/maps/KiposTown_Zoo/scripts.pory"
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
# 453 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 2: Nest\n"
	.string "Pokémon in Exhibit: {STR_VAR_1}$"

KiposTown_Zoo_PokemonSign_Nest_Text_1:
# 460 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "There's information about the Pokémon\n"
	.string "listed. Read it?$"

KiposTown_Zoo_EnvironmentSign_Nest_Text_0:
# 490 "data/maps/KiposTown_Zoo/scripts.pory"
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
# 519 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 3: Rainforest\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}, {STR_VAR_3}$"

KiposTown_Zoo_EnvironmentSign_Rainforest_Text_0:
# 593 "data/maps/KiposTown_Zoo/scripts.pory"
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
# 622 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 4: Suburbs\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}, {STR_VAR_3}$"

KiposTown_Zoo_EnvironmentSign_Suburbs_Text_0:
# 696 "data/maps/KiposTown_Zoo/scripts.pory"
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
# 705 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Welcome! This is a {COLOR GREEN}Hands-On{COLOR DARK_GRAY} Pokémon\n"
	.string "Experience, allowing you to rest and\l"
	.string "relax alongside domesticated Pokémon!\p"
	.string "While it is perfectly safe inside this\n"
	.string "area, please be respectful of the\l"
	.string "Pokémon living here. Coexistence is\l"
	.string "key!$"

KiposTown_Zoo_EventScript_DomesticPokemonInteraction_1_Text_0:
# 717 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "The {STR_VAR_1} huffed out a\n"
	.string "greeting!$"

KiposTown_Zoo_PokemonSign_FungalSwamp_Text_0:
# 765 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 5: Fungal Swamp\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_EnvironmentSign_FungalSwamp_Text_0:
# 821 "data/maps/KiposTown_Zoo/scripts.pory"
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
# 845 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 6: Wetlands\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_EnvironmentSign_Wetlands_Text_0:
# 901 "data/maps/KiposTown_Zoo/scripts.pory"
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

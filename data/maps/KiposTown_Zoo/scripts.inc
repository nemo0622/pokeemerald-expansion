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
KiposTown_Zoo_PokemonSign_DonationScript_17:
# 194 "data/maps/KiposTown_Zoo/scripts.pory"
	playfanfare FANFARE_LEVEL_UP
# 195 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_DonationScript_Text_4
# 196 "data/maps/KiposTown_Zoo/scripts.pory"
	waitfanfare
# 197 "data/maps/KiposTown_Zoo/scripts.pory"
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


KiposTown_Zoo_PokemonSign_Forest::
# 207 "data/maps/KiposTown_Zoo/scripts.pory"
	lock
# 210 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_01_1
# 211 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_01_2
# 212 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_2
KiposTown_Zoo_PokemonSign_Forest_1:
# 216 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_5
KiposTown_Zoo_PokemonSign_Forest_4:
# 226 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_1
# 227 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 228 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_2
# 229 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 230 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_01_3
# 231 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_01_4
# 232 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_8
KiposTown_Zoo_PokemonSign_Forest_7:
# 236 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_4, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_11
KiposTown_Zoo_PokemonSign_Forest_10:
# 240 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_3
# 241 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 244 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Forest_14
KiposTown_Zoo_PokemonSign_Forest_13:
# 288 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_17
# 297 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_18
# 306 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_19
# 315 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_4, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_20
KiposTown_Zoo_PokemonSign_Forest_16:
# 325 "data/maps/KiposTown_Zoo/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Forest_2:
# 214 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Forest_1

KiposTown_Zoo_PokemonSign_Forest_5:
# 218 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Forest_4

KiposTown_Zoo_PokemonSign_Forest_8:
# 234 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Forest_7

KiposTown_Zoo_PokemonSign_Forest_11:
# 238 "data/maps/KiposTown_Zoo/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Forest_Text_0
	goto KiposTown_Zoo_PokemonSign_Forest_10

KiposTown_Zoo_PokemonSign_Forest_14:
# 247 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_4, MSGBOX_YESNO
# 248 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 249 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Forest_25
	goto KiposTown_Zoo_PokemonSign_Forest_13

KiposTown_Zoo_PokemonSign_Forest_17:
# 291 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 1
# 293 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_5, MSGBOX_YESNO
# 294 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 295 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Forest_16

KiposTown_Zoo_PokemonSign_Forest_18:
# 300 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 2
# 302 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_6, MSGBOX_YESNO
# 303 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 304 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Forest_16

KiposTown_Zoo_PokemonSign_Forest_19:
# 309 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 3
# 311 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_7, MSGBOX_YESNO
# 312 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 313 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Forest_16

KiposTown_Zoo_PokemonSign_Forest_20:
# 318 "data/maps/KiposTown_Zoo/scripts.pory"
	setvar VAR_TEMP_0, 4
# 320 "data/maps/KiposTown_Zoo/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Forest_Text_8, MSGBOX_YESNO
# 321 "data/maps/KiposTown_Zoo/scripts.pory"
	closemessage
# 322 "data/maps/KiposTown_Zoo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Forest_16

KiposTown_Zoo_PokemonSign_Forest_25:
# 251 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_01_1
# 252 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 253 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 254 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 255 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 257 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Forest_28
KiposTown_Zoo_PokemonSign_Forest_27:
# 266 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_3, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Forest_31
KiposTown_Zoo_PokemonSign_Forest_30:
# 275 "data/maps/KiposTown_Zoo/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_01_4, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Forest_33
	goto KiposTown_Zoo_PokemonSign_Forest_13

KiposTown_Zoo_PokemonSign_Forest_28:
# 259 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 260 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_01_2
# 261 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 262 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 263 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 264 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Forest_27

KiposTown_Zoo_PokemonSign_Forest_31:
# 268 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 269 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_01_3
# 270 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 271 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 272 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 273 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Forest_30

KiposTown_Zoo_PokemonSign_Forest_33:
# 277 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 20
# 278 "data/maps/KiposTown_Zoo/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_01_4
# 279 "data/maps/KiposTown_Zoo/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 280 "data/maps/KiposTown_Zoo/scripts.pory"
	delay 30
# 281 "data/maps/KiposTown_Zoo/scripts.pory"
	waitbuttonpress
# 282 "data/maps/KiposTown_Zoo/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Forest_13


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
# 195 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Donated {STR_VAR_1} to the Exhibit!\n"
	.string "Return soon to view the Pokémon in it's\l"
	.string "new home!$"

KiposTown_Zoo_PokemonSign_Forest_Text_0:
# 214 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "---$"

KiposTown_Zoo_PokemonSign_Forest_Text_1:
# 226 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Enclosure No. 1: Forest$"

KiposTown_Zoo_PokemonSign_Forest_Text_2:
# 228 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Pokémon in Enclosure (South):\n"
	.string "{STR_VAR_1}, {STR_VAR_2}$"

KiposTown_Zoo_PokemonSign_Forest_Text_3:
# 240 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "Pokémon in Enclosure (North):\n"
	.string "{STR_VAR_1}, {STR_VAR_2}$"

KiposTown_Zoo_PokemonSign_Forest_Text_4:
# 247 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "There's information about each Pokémon\n"
	.string "listed. Read it?$"

KiposTown_Zoo_PokemonSign_Forest_Text_5:
# 293 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "There are no Pokémon in the exhibit.\n"
	.string "Would you like to {COLOR GREEN}donate a Pokémon to\l"
	.string "the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_PokemonSign_Forest_Text_6:
# 302 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "There is room for a second Pokémon in\n"
	.string "this exhibit. Would you like to {COLOR GREEN}donate a\l"
	.string "Pokémon to the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_PokemonSign_Forest_Text_7:
# 311 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "There is room for a third Pokémon in\n"
	.string "this exhibit. Would you like to {COLOR GREEN}donate a\l"
	.string "Pokémon to the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_PokemonSign_Forest_Text_8:
# 320 "data/maps/KiposTown_Zoo/scripts.pory"
	.string "There is room for a fourth Pokémon in\n"
	.string "this exhibit. Would you like to {COLOR GREEN}donate a\l"
	.string "Pokémon to the exhibit{COLOR DARK_GRAY}?$"

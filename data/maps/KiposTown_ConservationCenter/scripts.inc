KiposTown_ConservationCenter_MapScripts::
# 2 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, KiposTown_ConservationCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

KiposTown_ConservationCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, KiposTown_ConservationCenter_EventScript_CheckEventStatus
	.2byte 0


KiposTown_ConservationCenter_EventScript_CheckEventStatus::
# 9 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	setvar VAR_TEMP_1, 1
# 11 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	goto_if_unset FLAG_DID_PIRAEUS_SAIL_TO_KIPOS_TOWN_EVENT, KiposTown_ConservationCenter_EventScript_CheckEventStatus_2
KiposTown_ConservationCenter_EventScript_CheckEventStatus_1:
# 16 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	releaseall
	end

KiposTown_ConservationCenter_EventScript_CheckEventStatus_2:
# 13 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	goto KiposTown_ConservationCenter_EventScript_PlayerShownAround
	goto KiposTown_ConservationCenter_EventScript_CheckEventStatus_1


KiposTown_ConservationCenter_EventScript_PlayerShownAround::
# 22 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	lockall
# 23 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 24 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	waitmovement 0
# 25 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 10
# 27 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	applymovement 11, KiposTown_ConservationCenter_Movement_RusselEnterBuilding
# 28 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KiposTown_ConservationCenter_Movement_PlayerEnterBuilding
# 29 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	waitmovement 0
# 30 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 10
# 32 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_PlayerShownAround_Text_0
# 33 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_EventScript_PlayerShownAround_Text_1
# 34 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 36 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	applymovement 11, KiposTown_ConservationCenter_Movement_RusselExitBuilding
# 37 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	waitmovement 0
# 38 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	hideobjectat 11, MAP_KIPOS_TOWN_CONSERVATION_CENTER
# 40 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KiposTown_ConservationCenter_Movement_PlayerExitBuilding
# 41 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	waitmovement 0
# 42 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	warpsilent MAP_KIPOS_TOWN_ZOO, 24, 41
# 44 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	waitstate
# 45 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	releaseall
	end


# 49 "data/maps/KiposTown_ConservationCenter/scripts.pory"
KiposTown_ConservationCenter_Movement_RusselEnterBuilding:
# 51 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 51 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 51 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 51 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 51 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 51 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 52 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	face_down
# 53 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	step_end

# 55 "data/maps/KiposTown_ConservationCenter/scripts.pory"
KiposTown_ConservationCenter_Movement_PlayerEnterBuilding:
# 57 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 57 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 57 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 57 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 57 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 57 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 58 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	face_up
# 59 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	step_end

# 61 "data/maps/KiposTown_ConservationCenter/scripts.pory"
KiposTown_ConservationCenter_Movement_RusselExitBuilding:
# 63 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 63 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 63 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 64 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	step_end

# 66 "data/maps/KiposTown_ConservationCenter/scripts.pory"
KiposTown_ConservationCenter_Movement_PlayerExitBuilding:
# 68 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 68 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 68 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 68 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	walk_up
# 69 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	step_end

KiposTown_ConservationCenter_DeskAttendant::
# 81 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	lock
# 82 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	faceplayer
# 83 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_DeskAttendant_Text_0
# 84 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_DeskAttendant_Text_1
# 85 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 86 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	release
	end


KiposTown_ConservationCenter_MrRussel::
# 92 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	lock
# 93 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	faceplayer
# 94 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_PlayerShownAround_Text_0
# 95 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	goto_if_unset FLAG_COMPLETED_ZOO_DONATIONS, KiposTown_ConservationCenter_MrRussel_2
# 219 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	applymovement 10, Common_Movement_Heart
# 220 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	waitmovement 0
# 221 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 10
# 222 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_PlayerShownAround_Text_0
# 223 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_MrRussel_Text_15
# 224 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
KiposTown_ConservationCenter_MrRussel_1:
# 226 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	release
	end

KiposTown_ConservationCenter_MrRussel_2:
# 97 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_MrRussel_Text_0
# 98 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 100 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 20
# 101 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	compare VAR_TOTAL_NUM_ZOO_DONATIONS, 5
	goto_if_ge KiposTown_ConservationCenter_MrRussel_23
KiposTown_ConservationCenter_MrRussel_21:
# 119 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	compare VAR_TOTAL_NUM_ZOO_DONATIONS, 10
	goto_if_ge KiposTown_ConservationCenter_MrRussel_20
KiposTown_ConservationCenter_MrRussel_18:
# 139 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	compare VAR_TOTAL_NUM_ZOO_DONATIONS, 20
	goto_if_ge KiposTown_ConservationCenter_MrRussel_17
KiposTown_ConservationCenter_MrRussel_15:
# 156 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	compare VAR_TOTAL_NUM_ZOO_DONATIONS, 30
	goto_if_ge KiposTown_ConservationCenter_MrRussel_14
KiposTown_ConservationCenter_MrRussel_12:
# 179 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	compare VAR_TOTAL_NUM_ZOO_DONATIONS, 46
	goto_if_ge KiposTown_ConservationCenter_MrRussel_11
KiposTown_ConservationCenter_MrRussel_10:
# 207 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TOTAL_NUM_ZOO_DONATIONS
# 208 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	compare VAR_TOTAL_NUM_ZOO_DONATIONS, 0
	goto_if_eq KiposTown_ConservationCenter_MrRussel_27
KiposTown_ConservationCenter_MrRussel_26:
# 212 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_PlayerShownAround_Text_0
# 213 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_MrRussel_Text_14
# 214 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
	goto KiposTown_ConservationCenter_MrRussel_1

KiposTown_ConservationCenter_MrRussel_5:
# 103 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 104 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	waitmovement 0
# 105 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 10
# 106 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_PlayerShownAround_Text_0
# 107 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_MrRussel_Text_1
# 108 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 109 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 5
# 110 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	unlockoutfit OUTFIT_ZOOKEEPER
# 111 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_MrRussel_Text_2
# 112 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 113 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 5
# 114 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_PlayerShownAround_Text_0
# 115 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_MrRussel_Text_3
# 116 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 117 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	setflag FLAG_DONATED_5_ZOO_POKEMON
	goto KiposTown_ConservationCenter_MrRussel_1

KiposTown_ConservationCenter_MrRussel_6:
# 121 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 122 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	waitmovement 0
# 123 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 10
# 124 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_PlayerShownAround_Text_0
# 125 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_MrRussel_Text_4
# 126 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 127 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 5
# 128 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	giveitem ITEM_NEST_BALL, 5
# 129 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 130 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 5
# 131 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	giveitem ITEM_REPEAT_BALL, 5
# 132 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 133 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 5
# 134 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_PlayerShownAround_Text_0
# 135 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_MrRussel_Text_5
# 136 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 137 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	setflag FLAG_DONATED_10_ZOO_POKEMON
	goto KiposTown_ConservationCenter_MrRussel_1

KiposTown_ConservationCenter_MrRussel_7:
# 141 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 142 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	waitmovement 0
# 143 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 10
# 144 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_PlayerShownAround_Text_0
# 145 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_MrRussel_Text_6
# 146 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 147 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 5
# 148 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	giveitem ITEM_MASTER_BALL, 1
# 149 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 150 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 5
# 151 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_PlayerShownAround_Text_0
# 152 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_MrRussel_Text_7
# 153 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 154 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	setflag FLAG_DONATED_20_ZOO_POKEMON
	goto KiposTown_ConservationCenter_MrRussel_1

KiposTown_ConservationCenter_MrRussel_8:
# 158 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 159 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	waitmovement 0
# 160 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 10
# 161 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_PlayerShownAround_Text_0
# 162 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_MrRussel_Text_8
# 163 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 164 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 5
# 165 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	giveitem ITEM_CORNERSTONE_MASK, 1
# 166 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 167 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 5
# 168 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	giveitem ITEM_WELLSPRING_MASK, 1
# 169 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 170 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 5
# 171 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	giveitem ITEM_HEARTHFLAME_MASK, 1
# 172 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 173 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 5
# 174 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_PlayerShownAround_Text_0
# 175 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_MrRussel_Text_9
# 176 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 177 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	setflag FLAG_DONATED_30_ZOO_POKEMON
	goto KiposTown_ConservationCenter_MrRussel_1

KiposTown_ConservationCenter_MrRussel_9:
# 181 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 182 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	waitmovement 0
# 183 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 10
# 184 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_PlayerShownAround_Text_0
# 185 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_MrRussel_Text_10
# 186 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 187 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 5
# 189 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_OGERPON
# 190 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	givemon SPECIES_OGERPON, 30
# 191 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 192 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_MrRussel_Text_11
# 193 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	waitfanfare
# 194 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 195 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 5
# 197 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_PlayerShownAround_Text_0
# 198 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_MrRussel_Text_12
# 199 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 201 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	setflag FLAG_COMPLETED_ZOO_DONATIONS
# 202 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 20
# 203 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	completequest QUEST_ZOOKEEPER
	goto KiposTown_ConservationCenter_MrRussel_1

KiposTown_ConservationCenter_MrRussel_11:
# 179 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	goto_if_unset FLAG_COMPLETED_ZOO_DONATIONS, KiposTown_ConservationCenter_MrRussel_9
	goto KiposTown_ConservationCenter_MrRussel_10

KiposTown_ConservationCenter_MrRussel_14:
# 156 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	goto_if_unset FLAG_DONATED_30_ZOO_POKEMON, KiposTown_ConservationCenter_MrRussel_8
	goto KiposTown_ConservationCenter_MrRussel_12

KiposTown_ConservationCenter_MrRussel_17:
# 139 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	goto_if_unset FLAG_DONATED_20_ZOO_POKEMON, KiposTown_ConservationCenter_MrRussel_7
	goto KiposTown_ConservationCenter_MrRussel_15

KiposTown_ConservationCenter_MrRussel_20:
# 119 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	goto_if_unset FLAG_DONATED_10_ZOO_POKEMON, KiposTown_ConservationCenter_MrRussel_6
	goto KiposTown_ConservationCenter_MrRussel_18

KiposTown_ConservationCenter_MrRussel_23:
# 101 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	goto_if_unset FLAG_DONATED_5_ZOO_POKEMON, KiposTown_ConservationCenter_MrRussel_5
	goto KiposTown_ConservationCenter_MrRussel_21

KiposTown_ConservationCenter_MrRussel_27:
# 210 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_ConservationCenter_MrRussel_Text_13
	goto KiposTown_ConservationCenter_MrRussel_26


KiposTown_ConservationCenter_EventScript_Artist::
# 232 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	lock
# 233 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	faceplayer
# 234 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_Artist_Text_0
# 235 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_EventScript_Artist_Text_1
# 236 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 237 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	release
	end


KiposTown_ConservationCenter_EventScript_Handywoman::
# 243 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	lock
# 244 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	faceplayer
# 245 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_Handywoman_Text_0
# 246 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_EventScript_Handywoman_Text_1
# 247 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 248 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	release
	end


KiposTown_ConservationCenter_EventScript_ComputerGuy::
# 254 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	lock
# 255 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	faceplayer
# 256 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_ComputerGuy_Text_0
# 257 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_EventScript_ComputerGuy_Text_1
# 258 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 259 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	release
	end


KiposTown_ConservationCenter_EventScript_Scientist::
# 265 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	lock
# 266 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	faceplayer
# 267 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_Scientist_Text_0
# 270 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_SHOW_BRAVIARY_AT_ZOO
# 271 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_ConservationCenter_EventScript_Scientist_2
# 280 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_SHOW_BRAVIARY_AT_ZOO
# 281 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KiposTown_ConservationCenter_EventScript_Scientist_5
# 291 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_EventScript_Scientist_Text_3
# 292 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 294 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	getcaughtmon SPECIES_BRAVIARY
# 295 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 30
# 297 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KiposTown_ConservationCenter_EventScript_Scientist_8
# 305 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	applymovement 3, Common_Movement_Heart
# 306 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	waitmovement 0
# 307 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 10
# 308 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_Scientist_Text_0
# 309 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_EventScript_Scientist_Text_5
# 310 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 311 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 5
# 312 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	giveitem ITEM_THICK_CLUB
# 313 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 314 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 5
# 315 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_Scientist_Text_0
# 316 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_EventScript_Scientist_Text_6
# 317 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 319 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 20
# 320 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	completequest QUEST_SHOW_BRAVIARY_AT_ZOO
KiposTown_ConservationCenter_EventScript_Scientist_4:
# 323 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	release
	end

KiposTown_ConservationCenter_EventScript_Scientist_2:
# 273 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_EventScript_Scientist_Text_1
# 274 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 275 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	release
	end

KiposTown_ConservationCenter_EventScript_Scientist_5:
# 283 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_EventScript_Scientist_Text_2
# 284 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 286 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	delay 20
# 287 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	startquest QUEST_SHOW_BRAVIARY_AT_ZOO
	goto KiposTown_ConservationCenter_EventScript_Scientist_4

KiposTown_ConservationCenter_EventScript_Scientist_8:
# 299 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_Scientist_Text_0
# 300 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_EventScript_Scientist_Text_4
# 301 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
	goto KiposTown_ConservationCenter_EventScript_Scientist_4


KiposTown_ConservationCenter_EventScript_Vullaby::
# 329 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	lock
# 330 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	faceplayer
# 331 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_Vullaby_Text_0
# 332 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	playmoncry SPECIES_VULLABY, CRY_MODE_NORMAL
# 333 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_EventScript_Vullaby_Text_1
# 334 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	waitmoncry
# 335 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 336 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	release
	end


KiposTown_ConservationCenter_EventScript_Mandibuzz::
# 341 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	lock
# 342 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	faceplayer
# 343 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	speakername KiposTown_ConservationCenter_EventScript_Mandibuzz_Text_0
# 344 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	playmoncry SPECIES_MANDIBUZZ, CRY_MODE_NORMAL
# 345 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_EventScript_Mandibuzz_Text_1
# 346 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	waitmoncry
# 347 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 348 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	release
	end


KiposTown_ConservationCenter_EventScript_Egg::
# 353 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	lock
# 354 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	msgbox KiposTown_ConservationCenter_EventScript_Egg_Text_0
# 355 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	closemessage
# 356 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	release
	end


KiposTown_ConservationCenter_EventScript_PlayerShownAround_Text_0:
# 32 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Mr. Russel$"

KiposTown_ConservationCenter_EventScript_PlayerShownAround_Text_1:
# 33 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Welcome to the {COLOR GREEN}Sunset Wildlife\n"
	.string "Conservation Center{COLOR DARK_GRAY}! Luckily, Team\l"
	.string "Chimera didn't show much interest in our\l"
	.string "tools or research papers, so everything\l"
	.string "in here is intact.\p"
	.string "In your own time, please be sure to\n"
	.string "introduce yourself to everyone here.\l"
	.string "We're all looking forward to working\l"
	.string "with you!\p"
	.string "Oh, I'm getting ahead of myself. Come,\n"
	.string "let's see the {COLOR GREEN}Pokémon Zoo{COLOR DARK_GRAY} hosted by the\l"
	.string "Conservation Center... what remains of\l"
	.string "it, anyway.$"

KiposTown_ConservationCenter_DeskAttendant_Text_0:
# 83 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Desk Attendant$"

KiposTown_ConservationCenter_DeskAttendant_Text_1:
# 84 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Welcome to the Sunset Wildlife\n"
	.string "Conservation Center! The Zoo is just\l"
	.string "through these doors. As a key member of\l"
	.string "the Conservation Center, you can enter\l"
	.string "free of charge!$"

KiposTown_ConservationCenter_MrRussel_Text_0:
# 97 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "{PLAYER}, chaire! How's the Zoo\n"
	.string "donation project coming along?$"

KiposTown_ConservationCenter_MrRussel_Text_1:
# 107 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "It looks like you've donated at least {COLOR GREEN}5\n"
	.string "Pokémon{COLOR DARK_GRAY} to the Sunset Wildlife Zoo!\p"
	.string "Hey, this is a great start to bringing\n"
	.string "the Zoo back to it's former glory! Here,\l"
	.string "I want you to have this.$"

KiposTown_ConservationCenter_MrRussel_Text_2:
# 111 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "The Zookeeper Outfit has been added to\n"
	.string "the Outfit Box!$"

KiposTown_ConservationCenter_MrRussel_Text_3:
# 115 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Our loyal Zookeepers wear outfits like\n"
	.string "that. By donating Pokémon, you're sort\l"
	.string "of a Zookeeper yourself!\p"
	.string "Thank you so much for your help so far,\n"
	.string "{PLAYER}. When youn can, keep\l"
	.string "stopping by and donating more Pokémon!$"

KiposTown_ConservationCenter_MrRussel_Text_4:
# 125 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "It looks like you've donated at least {COLOR GREEN}10\n"
	.string "Pokémon{COLOR DARK_GRAY} to the Sunset Wildlife Zoo!\p"
	.string "Wow, you're on a roll! Here, I have more\n"
	.string "gifts for you.$"

KiposTown_ConservationCenter_MrRussel_Text_5:
# 135 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Those Poké ball varieties work best on\n"
	.string "low-leveled or previously caught\l"
	.string "Pokémon. Perfect for helping fill out\l"
	.string "the Zoo!\p"
	.string "Thank you so much for your help so far,\n"
	.string "{PLAYER}. When youn can, keep\l"
	.string "stopping by and donating more Pokémon!$"

KiposTown_ConservationCenter_MrRussel_Text_6:
# 145 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "It looks like you've donated at least {COLOR GREEN}20\n"
	.string "Pokémon{COLOR DARK_GRAY} to the Sunset Wildlife Zoo!\p"
	.string "The Zoo is really picking up again,\n"
	.string "thanks to you! Take this as a token of\l"
	.string "our appreciation.$"

KiposTown_ConservationCenter_MrRussel_Text_7:
# 152 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "That's a very special Poké ball,\n"
	.string "designed to capture any Pokémon\l"
	.string "without fail. Only use it when it's\l"
	.string "absolutely necessary!\p"
	.string "Thank you so much for your help so far,\n"
	.string "{PLAYER}. When youn can, keep\l"
	.string "stopping by and donating more Pokémon!$"

KiposTown_ConservationCenter_MrRussel_Text_8:
# 162 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "It looks like you've donated at least {COLOR GREEN}30\n"
	.string "Pokémon{COLOR DARK_GRAY} to the Sunset Wildlife Zoo!\p"
	.string "Amazing, the Zoo is filling right back\n"
	.string "up! You've been such a massive help, the\l"
	.string "Conservation Center team and I have\l"
	.string "decided to entrust you with a secret.\p"
	.string "Do you remember the Girafarig in the\n"
	.string "first Zoo exhibit, which was saved from\l"
	.string "Team Chimera by {COLOR GREEN}a Pokémon in the cave{COLOR DARK_GRAY}\l"
	.string "nearby? Well, we've found items that\l"
	.string "might be {COLOR GREEN}connected to it{COLOR DARK_GRAY}. Check these\l"
	.string "out.$"

KiposTown_ConservationCenter_MrRussel_Text_9:
# 175 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Those {COLOR GREEN}Masks{COLOR DARK_GRAY} were found by a Zookeeper\n"
	.string "by the mouth of the cave. For now, you\l"
	.string "can hold onto them until we learn more.\p"
	.string "Thank you so much for your help so far,\n"
	.string "{PLAYER}. When youn can, keep\l"
	.string "stopping by and donating more Pokémon!$"

KiposTown_ConservationCenter_MrRussel_Text_10:
# 185 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "{PLAYER}! You... you've done it! All {COLOR GREEN}46\n"
	.string "Pokémon{COLOR DARK_GRAY} spots at the Sunset Wildlife\l"
	.string "Zoo have been filled, thanks to you!\p"
	.string "Do you remember those Masks I gave\n"
	.string "you? Well, they're connected to a\l"
	.string "Pokémon called {COLOR GREEN}Ogerpon{COLOR DARK_GRAY}, which has been\l"
	.string "living in the Zoo cave right under our\l"
	.string "noses! As you've donated Pokémon, it\l"
	.string "has become less hostile and started\l"
	.string "{COLOR GREEN}trusting humans{COLOR DARK_GRAY} again. We think it\l"
	.string "knows that humans stole the last\l"
	.string "Pokémon, but your donations have shown\l"
	.string "it that there are good people too.\p"
	.string "Just a bit ago, it came to the door\n"
	.string "holding it's own Poké ball. Our best\l"
	.string "guess is, {COLOR GREEN}it wants to travel with you{COLOR DARK_GRAY},\l"
	.string "the Trainer who restored the Zoo! Here,\l"
	.string "we want you to have it.$"

KiposTown_ConservationCenter_MrRussel_Text_11:
# 192 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "{PLAYER} received the Ogerpon!$"

KiposTown_ConservationCenter_MrRussel_Text_12:
# 198 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Make sure to show Ogerpon your love and\n"
	.string "respect, just as you have with all the\l"
	.string "Pokémon you've sent our way.\p"
	.string "We'll always be in debt to you,\n"
	.string "{PLAYER}. Remember to stop by, say hi,\l"
	.string "and visit your Pokémon here whenever\l"
	.string "you're in town!$"

KiposTown_ConservationCenter_MrRussel_Text_13:
# 210 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "0$"

KiposTown_ConservationCenter_MrRussel_Text_14:
# 213 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "You've donated {STR_VAR_1} Pokémon\n"
	.string "to the Sunset Wildlife Zoo so far.\p"
	.string "I know it's a lot to put onto one young\n"
	.string "Trainer, so I'd like to thank you for\l"
	.string "your help so far! Please continue to\l"
	.string "stop by and donate Pokémon when you\l"
	.string "can. The Conservation Center team and\l"
	.string "I have {COLOR GREEN}rewards{COLOR DARK_GRAY} to give!$"

KiposTown_ConservationCenter_MrRussel_Text_15:
# 223 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "{PLAYER}! Welcome back! More visitors\n"
	.string "are coming to the Sunset Wildlife Zoo\l"
	.string "than ever, all thanks to your efforts.\l"
	.string "Make sure to visit your Pokémon in their\l"
	.string "Enclosures!$"

KiposTown_ConservationCenter_EventScript_Artist_Text_0:
# 234 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Artist$"

KiposTown_ConservationCenter_EventScript_Artist_Text_1:
# 235 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "I make promotional art for the\n"
	.string "Conservation Center. Making people\l"
	.string "aware of conservation issues is half\l"
	.string "the battle, and eye-catching artwork is\l"
	.string "a great way to make people care!$"

KiposTown_ConservationCenter_EventScript_Handywoman_Text_0:
# 245 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Handywoman$"

KiposTown_ConservationCenter_EventScript_Handywoman_Text_1:
# 246 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Phew, working with wildlife is hard! I\n"
	.string "spend part of my day making enrichment\l"
	.string "toys for Pokémon, and the rest of the\l"
	.string "day shoveling Pokémon... leavings. It's\l"
	.string "worth it, though. I'm really making a\l"
	.string "difference here!$"

KiposTown_ConservationCenter_EventScript_ComputerGuy_Text_0:
# 256 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Computer Guy$"

KiposTown_ConservationCenter_EventScript_ComputerGuy_Text_1:
# 257 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Everybody knows you need a good\n"
	.string "Computer Guy! Running websites, doing\l"
	.string "social media outreach, and writing up\l"
	.string "press releases are all necessary for\l"
	.string "the Zoo to thrive. We need people to\l"
	.string "know about conservation, and online\l"
	.string "communication is one of the best ways\l"
	.string "to make that happen!$"

KiposTown_ConservationCenter_EventScript_Scientist_Text_0:
# 267 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Scientist$"

KiposTown_ConservationCenter_EventScript_Scientist_Text_1:
# 273 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Mandibuzz and Vullaby are such curious\n"
	.string "Pokémon. Thanks to your help, we know\l"
	.string "that Mandibuzz likely produced her\l"
	.string "Eggs with a Braviary!$"

KiposTown_ConservationCenter_EventScript_Scientist_Text_2:
# 283 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Our research has only found female\n"
	.string "Mandibuzz, but this individual produced\l"
	.string "Eggs. Obviously, this has left us more\l"
	.string "than a little confused.\p"
	.string "The leading theory is that it bred with\n"
	.string "a male Braviary, but it's impossible to\l"
	.string "confirm without more information. Could\l"
	.string "you show me the {COLOR GREEN}completed Pokédex\l"
	.string "entry of Braviary{COLOR DARK_GRAY}? With more knowledge\l"
	.string "about the species, we could support our\l"
	.string "hypothesis!$"

KiposTown_ConservationCenter_EventScript_Scientist_Text_3:
# 291 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "{PLAYER}, welcome back! We're still\n"
	.string "investigating Mandibuzz and her Egg.\l"
	.string "All Mandibuzz we've recorded are female,\l"
	.string "but they still reproduce and provide\l"
	.string "excellent parental care.\p"
	.string "Have you caught a Braviary yet? That\n"
	.string "could help us a lot!$"

KiposTown_ConservationCenter_EventScript_Scientist_Text_4:
# 300 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "No Pokédex entry, huh? It's alright,\n"
	.string "work on this at your own pace!\p"
	.string "Wild Braviary are only males, so we think\n"
	.string "they may be the natural counterpart to\l"
	.string "the all-female Mandibuzz. Bring in a\l"
	.string "{COLOR GREEN}complete Pokédex entry of Braviary{COLOR DARK_GRAY}\l"
	.string "whenever you can!$"

KiposTown_ConservationCenter_EventScript_Scientist_Text_5:
# 309 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Hey, check it out! You've got a full\n"
	.string "Braviary Pokédex entry!\p"
	.string "Hmm... yes, this information lines up\n"
	.string "perfectly. I bet Braviary and Mandibuzz\l"
	.string "can create viable offspring despite\l"
	.string "being different species!\p"
	.string "Thanks for helping, {PLAYER}. From\n"
	.string "the Conservation Center staff to you,\l"
	.string "take this!$"

KiposTown_ConservationCenter_EventScript_Scientist_Text_6:
# 316 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "The Thick Club is an item sometimes held\n"
	.string "by wild Cubone and Marowak, drastically\l"
	.string "increasing their strength. Surprisingly,\l"
	.string "this item has the same effect when held\l"
	.string "by Mandibuzz! The mysteries of Pokémon\l"
	.string "will always fascinate me.$"

KiposTown_ConservationCenter_EventScript_Vullaby_Text_0:
# 331 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Vullaby$"

KiposTown_ConservationCenter_EventScript_Vullaby_Text_1:
# 333 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Cheep keep!$"

KiposTown_ConservationCenter_EventScript_Mandibuzz_Text_0:
# 343 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Mandibuzz$"

KiposTown_ConservationCenter_EventScript_Mandibuzz_Text_1:
# 345 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "Kraaww!$"

KiposTown_ConservationCenter_EventScript_Egg_Text_0:
# 354 "data/maps/KiposTown_ConservationCenter/scripts.pory"
	.string "This is the Egg the Mandibuzz laid.\n"
	.string "Sometimes, Mandibuzz sits on it to keep\l"
	.string "it warm!$"

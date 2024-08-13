# 1 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 2 "data/maps/LilycoveCity_Harbor/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/LilycoveCity_Harbor/scripts.pory"
.set LOCALID_SS_TIDAL, 2
# 4 "data/maps/LilycoveCity_Harbor/scripts.pory"
.set LOCALID_FERRY_SAILOR, 4
# 5 "data/maps/LilycoveCity_Harbor/scripts.pory"
.set LOCALID_BRINEY, 5
# 6 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 7 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_MapScripts::
# 8 "data/maps/LilycoveCity_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_Harbor_OnTransition
# 9 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.byte 0
# 10 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 11 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_OnTransition:
# 12 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setescapewarp MAP_LILYCOVE_CITY, 12, 33
# 13 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 14 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 15 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryAttendant::
# 16 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lock
# 17 "data/maps/LilycoveCity_Harbor/scripts.pory"
	faceplayer
# 18 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SS_TICKET, LilycoveCity_Harbor_EventScript_FerryUnavailable
# 19 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEonTicketState
# 20 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetAuroraTicketState
# 21 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetOldSeaMapState
# 22 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetMysticTicketState
# 23 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket
# 24 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetHasTicketsState
# 25 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_TEMP_C, 2, LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime
# 26 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_TEMP_B, 1, LilycoveCity_Harbor_EventScript_EonTicketFirstTime
# 27 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_TEMP_B, 2, LilycoveCity_Harbor_EventScript_AuroraTicketFirstTime
# 28 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_TEMP_B, 4, LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime
# 29 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_TEMP_B, 8, LilycoveCity_Harbor_EventScript_MysticTicketFirstTime
# 30 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_ne VAR_TEMP_B, 0, LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime
# 31 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_NoFirstTimeEventTickets
# 32 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 33 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 34 "data/maps/LilycoveCity_Harbor/scripts.pory"
@ First goto_if_eq is unnecessary; identical scripts
# 35 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_NoFirstTimeEventTickets::
# 36 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_TEMP_A, 0, LilycoveCity_Harbor_EventScript_NoEventTickets
# 37 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 38 "data/maps/LilycoveCity_Harbor/scripts.pory"
	message LilycoveCity_Harbor_Text_FlashTicketWhereTo
# 39 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmessage
# 40 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect
# 41 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 42 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 43 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect::
# 44 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 0
# 45 "data/maps/LilycoveCity_Harbor/scripts.pory"
	special ScriptMenu_CreateLilycoveSSTidalMultichoice
# 46 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 47 "data/maps/LilycoveCity_Harbor/scripts.pory"
	special GetLilycoveSSTidalSelection
# 48 "data/maps/LilycoveCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 49 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 0, LilycoveCity_Harbor_EventScript_GoToSlateport
# 50 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 1, LilycoveCity_Harbor_EventScript_GoToBattleFrontier
# 51 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 2, LilycoveCity_Harbor_EventScript_GoToSouthernIsland
# 52 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 3, LilycoveCity_Harbor_EventScript_GoToNavelRock
# 53 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 4, LilycoveCity_Harbor_EventScript_GoToBirthIsland
# 54 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 5, LilycoveCity_Harbor_EventScript_GoToFarawayIsland
# 55 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 6, LilycoveCity_Harbor_EventScript_ExitSailSelect
# 56 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_Harbor_EventScript_ExitSailSelect
# 57 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 58 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 59 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToSouthernIsland::
# 60 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 61 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_SOUTHERN_ISLAND_EXTERIOR, 13, 22
# 62 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 63 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 64 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 65 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 66 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToNavelRock::
# 67 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 68 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_NAVEL_ROCK_HARBOR, 8, 4
# 69 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 70 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 71 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 72 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 73 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToBirthIsland::
# 74 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 75 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_BIRTH_ISLAND_HARBOR, 8, 4
# 76 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 77 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 78 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 79 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 80 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToFarawayIsland::
# 81 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 82 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_FARAWAY_ISLAND_ENTRANCE, 13, 38
# 83 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 84 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 85 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 86 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 87 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToSlateport::
# 88 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SlateportItIs, MSGBOX_YESNO
# 89 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_Harbor_EventScript_FerryDestinationChangeMind
# 90 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_LILYCOVE
# 91 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_set FLAG_IS_CHAMPION, LilycoveCity_Harbor_EventScript_BoardFerry
# 92 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_unset FLAG_IS_CHAMPION, LilycoveCity_Harbor_EventScript_TeleportToSlateport
# 93 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 94 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 95 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 96 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 97 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_TeleportToSlateport::
# 98 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_SLATEPORT_CITY, 28, 13
# 99 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 100 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 101 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToBattleFrontier::
# 102 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_BattleFrontierItIs, MSGBOX_YESNO
# 103 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_Harbor_EventScript_FerryDestinationChangeMind
# 104 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 105 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 19, 67
# 106 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 107 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 108 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 109 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 110 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetEonTicketState::
# 111 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_E, 0
# 112 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_SOUTHERN_ISLAND, Common_EventScript_NopReturn
# 113 "data/maps/LilycoveCity_Harbor/scripts.pory"
	checkitem ITEM_EON_TICKET
# 114 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_NopReturn
# 115 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_E, 1
# 116 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SHOWN_EON_TICKET, Common_EventScript_NopReturn
# 117 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_E, 2
# 118 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 119 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 120 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetAuroraTicketState::
# 121 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_D, 0
# 122 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_BIRTH_ISLAND, Common_EventScript_NopReturn
# 123 "data/maps/LilycoveCity_Harbor/scripts.pory"
	checkitem ITEM_AURORA_TICKET
# 124 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_NopReturn
# 125 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_D, 1
# 126 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SHOWN_AURORA_TICKET, Common_EventScript_NopReturn
# 127 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_D, 2
# 128 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 129 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 130 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetOldSeaMapState::
# 131 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_C, 0
# 132 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_FARAWAY_ISLAND, Common_EventScript_NopReturn
# 133 "data/maps/LilycoveCity_Harbor/scripts.pory"
	checkitem ITEM_OLD_SEA_MAP
# 134 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_NopReturn
# 135 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_C, 1
# 136 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SHOWN_OLD_SEA_MAP, Common_EventScript_NopReturn
# 137 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_C, 2
# 138 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 139 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 140 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetMysticTicketState::
# 141 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_9, 0
# 142 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_NAVEL_ROCK, Common_EventScript_NopReturn
# 143 "data/maps/LilycoveCity_Harbor/scripts.pory"
	checkitem ITEM_MYSTIC_TICKET
# 144 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_NopReturn
# 145 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_9, 1
# 146 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SHOWN_MYSTIC_TICKET, Common_EventScript_NopReturn
# 147 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_9, 2
# 148 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 149 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 150 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket::
# 151 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_B, 0
# 152 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_TEMP_E, 2, LilycoveCity_Harbor_EventScript_SetFirstTimeShowingEonTicket
# 153 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_TEMP_D, 2, LilycoveCity_Harbor_EventScript_SetFirstTimeShowingAuroraTicket
# 154 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_TEMP_C, 2, LilycoveCity_Harbor_EventScript_SetFirstTimeShowingOldSeaMap
# 155 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_TEMP_9, 2, LilycoveCity_Harbor_EventScript_SetFirstTimeShowingMysticTicket
# 156 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 157 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 158 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetFirstTimeShowingEonTicket::
# 159 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_B, 1
# 160 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 161 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 162 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetFirstTimeShowingAuroraTicket::
# 163 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_B, 2
# 164 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 165 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 166 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetFirstTimeShowingOldSeaMap::
# 167 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_B, 4
# 168 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 169 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 170 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetFirstTimeShowingMysticTicket::
# 171 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_B, 8
# 172 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 173 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 174 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetHasTicketsState::
# 175 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_A, 0
# 176 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_TEMP_E, 1, LilycoveCity_Harbor_EventScript_SetHasEonTicket
# 177 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_TEMP_D, 1, LilycoveCity_Harbor_EventScript_SetHasAuroraTicket
# 178 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_TEMP_C, 1, LilycoveCity_Harbor_EventScript_SetHasOldSeaMap
# 179 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_TEMP_9, 1, LilycoveCity_Harbor_EventScript_SetHasMysticTicket
# 180 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 181 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 182 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetHasEonTicket::
# 183 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_A, 1
# 184 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 185 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 186 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetHasAuroraTicket::
# 187 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_A, 2
# 188 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 189 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 190 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetHasOldSeaMap::
# 191 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_A, 4
# 192 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 193 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 194 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetHasMysticTicket::
# 195 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_A, 8
# 196 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 197 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 198 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_EonTicketFirstTime::
# 199 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_EON_TICKET
# 200 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ThatPass, MSGBOX_DEFAULT
# 201 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 202 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 203 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ShowEonTicket, MSGBOX_DEFAULT
# 204 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToSouthernIslandFirstTime
# 205 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 206 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 207 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToSouthernIslandFirstTime::
# 208 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 209 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithSailor
# 210 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_SOUTHERN_ISLAND_EXTERIOR, 13, 22
# 211 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 212 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 213 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 214 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 215 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_AuroraTicketFirstTime::
# 216 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_AURORA_TICKET
# 217 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ThatPass, MSGBOX_DEFAULT
# 218 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 219 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 220 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_OddTicketGetOnBoard, MSGBOX_DEFAULT
# 221 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToBirthIslandFirstTime
# 222 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 223 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 224 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToBirthIslandFirstTime::
# 225 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 226 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithSailor
# 227 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_BIRTH_ISLAND_HARBOR, 8, 4
# 228 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 229 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 230 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 231 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 232 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime::
# 233 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_OLD_SEA_MAP
# 234 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ShowOldSeaMap, MSGBOX_DEFAULT
# 235 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 236 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 237 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_OldSeaMapTooFar, MSGBOX_DEFAULT
# 238 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 239 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_FERRY_SAILOR, Common_Movement_WalkInPlaceFasterUp
# 240 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 241 "data/maps/LilycoveCity_Harbor/scripts.pory"
	playse SE_PIN
# 242 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_FERRY_SAILOR, Common_Movement_ExclamationMark
# 243 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 244 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_FERRY_SAILOR, Common_Movement_Delay48
# 245 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 246 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LilycoveCity_Harbor_EventScript_MoveSailorOutOfWayNorth
# 247 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LilycoveCity_Harbor_EventScript_MoveSailorOutOfWayEast
# 248 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addobject LOCALID_BRINEY
# 249 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LilycoveCity_Harbor_EventScript_BrineyFaceSailorNorth
# 250 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LilycoveCity_Harbor_EventScript_BrineyFaceSailorEast
# 251 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_BrineyHoldOnASecond, MSGBOX_DEFAULT
# 252 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LilycoveCity_Harbor_EventScript_BrineyFacePlayerNorth
# 253 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LilycoveCity_Harbor_EventScript_BrineyFacePlayerEast
# 254 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_BrineyLetsSail, MSGBOX_DEFAULT
# 255 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 256 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LilycoveCity_Harbor_EventScript_BoardFerryWithBrineyAndSailorNorth
# 257 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LilycoveCity_Harbor_EventScript_BoardFerryWithBrineyAndSailorEast
# 258 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 259 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
# 260 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_FARAWAY_ISLAND_ENTRANCE, 13, 38
# 261 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 262 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 263 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 264 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 265 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToFarawayIslandFirstTime::
# 266 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 267 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithSailor
# 268 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_FARAWAY_ISLAND_ENTRANCE, 13, 38
# 269 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 270 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 271 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 272 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 273 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_MysticTicketFirstTime::
# 274 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_MYSTIC_TICKET
# 275 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ThatPass, MSGBOX_DEFAULT
# 276 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 277 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 278 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_OddTicketGetOnBoard, MSGBOX_DEFAULT
# 279 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToNavelRockFirstTime
# 280 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 281 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 282 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToNavelRockFirstTime::
# 283 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 284 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithSailor
# 285 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_NAVEL_ROCK_HARBOR, 8, 4
# 286 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 287 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 288 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 289 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 290 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime::
# 291 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ThatPass, MSGBOX_DEFAULT
# 292 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 293 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 294 "data/maps/LilycoveCity_Harbor/scripts.pory"
	message EventTicket_Text_OddTicketsWhereTo
# 295 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmessage
# 296 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 1
# 297 "data/maps/LilycoveCity_Harbor/scripts.pory"
	special ScriptMenu_CreateLilycoveSSTidalMultichoice
# 298 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 299 "data/maps/LilycoveCity_Harbor/scripts.pory"
	special GetLilycoveSSTidalSelection
# 300 "data/maps/LilycoveCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 301 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 2, LilycoveCity_Harbor_EventScript_GoToSouthernIslandFirstTime
# 302 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 3, LilycoveCity_Harbor_EventScript_GoToNavelRockFirstTime
# 303 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 4, LilycoveCity_Harbor_EventScript_GoToBirthIslandFirstTime
# 304 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 5, LilycoveCity_Harbor_EventScript_GoToFarawayIslandFirstTime
# 305 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 6, LilycoveCity_Harbor_EventScript_ExitFirstTimeTicketSailSelect
# 306 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_Harbor_EventScript_ExitFirstTimeTicketSailSelect
# 307 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 308 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 309 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 310 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_ExitFirstTimeTicketSailSelect::
# 311 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
# 312 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 313 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_FERRY_SAILOR, Common_Movement_WalkInPlaceFasterUp
# 314 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 315 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 316 "data/maps/LilycoveCity_Harbor/scripts.pory"
	removeobject LOCALID_FERRY_SAILOR
# 317 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 318 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_ATTENDANT, Common_Movement_WalkInPlaceFasterDown
# 319 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 320 "data/maps/LilycoveCity_Harbor/scripts.pory"
	showobjectat LOCALID_ATTENDANT, MAP_LILYCOVE_CITY_HARBOR
# 321 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 322 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SailAnotherTime, MSGBOX_DEFAULT
# 323 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 324 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 325 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 326 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetEventTicketSailor::
# 327 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterUp
# 328 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 329 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 330 "data/maps/LilycoveCity_Harbor/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_LILYCOVE_CITY_HARBOR
# 331 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 60
# 332 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addobject LOCALID_FERRY_SAILOR
# 333 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 334 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_FERRY_SAILOR, Common_Movement_FacePlayer
# 335 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 336 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 337 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 338 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerryWithSailor::
# 339 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_FERRY_SAILOR, Common_Movement_WalkInPlaceFasterUp
# 340 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 341 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 342 "data/maps/LilycoveCity_Harbor/scripts.pory"
	removeobject LOCALID_FERRY_SAILOR
# 343 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LilycoveCity_Harbor_EventScript_PlayerBoardFerryNorth
# 344 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LilycoveCity_Harbor_EventScript_PlayerBoardFerryEast
# 345 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 346 "data/maps/LilycoveCity_Harbor/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 347 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 348 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
# 349 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 350 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 351 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryUnavailable::
# 352 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_FerryUnavailable, MSGBOX_DEFAULT
# 353 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 354 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 355 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 356 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_NoEventTickets::
# 357 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 358 "data/maps/LilycoveCity_Harbor/scripts.pory"
	message LilycoveCity_Harbor_Text_FlashTicketWhereTo
# 359 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmessage
# 360 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect
# 361 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 362 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 363 "data/maps/LilycoveCity_Harbor/scripts.pory"
@ Unused
# 364 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_NoTicket::
# 365 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_NoTicket, MSGBOX_DEFAULT
# 366 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 367 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 368 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 369 "data/maps/LilycoveCity_Harbor/scripts.pory"
@ Unused
# 370 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToSlateportUnused::
# 371 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SlateportItIs, MSGBOX_YESNO
# 372 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_Harbor_EventScript_FerryDestinationChangeMind
# 373 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_LILYCOVE
# 374 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 375 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 1, 10
# 376 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 377 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 378 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 379 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 380 "data/maps/LilycoveCity_Harbor/scripts.pory"
@ Unused
# 381 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToBattleFrontierUnused::
# 382 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_BattleFrontierItIs, MSGBOX_YESNO
# 383 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_Harbor_EventScript_FerryDestinationChangeMind
# 384 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 385 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 19, 67
# 386 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 387 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 388 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 389 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 390 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryDestinationChangeMind::
# 391 "data/maps/LilycoveCity_Harbor/scripts.pory"
	message LilycoveCity_Harbor_Text_WhereWouldYouLikeToGo
# 392 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmessage
# 393 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect
# 394 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 395 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 396 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerry::
# 397 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_PleaseBoard, MSGBOX_DEFAULT
# 398 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 399 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterUp
# 400 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 401 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 402 "data/maps/LilycoveCity_Harbor/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_LILYCOVE_CITY_HARBOR
# 403 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LilycoveCity_Harbor_EventScript_PlayerBoardFerryNorth
# 404 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LilycoveCity_Harbor_EventScript_PlayerBoardFerryEast
# 405 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 406 "data/maps/LilycoveCity_Harbor/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 407 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 408 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
# 409 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 1, 10
# 410 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 411 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 412 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_PlayerBoardFerryEast::
# 413 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_Harbor_Movement_PlayerBoardFerryEast
# 414 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 415 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 416 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 417 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_PlayerBoardFerryNorth::
# 418 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_Harbor_Movement_PlayerBoardFerryNorth
# 419 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 420 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 421 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 422 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_ExitSailSelect::
# 423 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SailAnotherTime, MSGBOX_DEFAULT
# 424 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 425 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 426 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 427 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_PlayerBoardFerryEast:
# 428 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_right
# 429 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 430 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 431 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 432 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_PlayerBoardFerryNorth:
# 433 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_up
# 434 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 435 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 436 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_UnusedBoardFerry:
# 437 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_up
# 438 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 439 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 440 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_Sailor::
# 441 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lock
# 442 "data/maps/LilycoveCity_Harbor/scripts.pory"
	faceplayer
# 443 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_RECEIVED_SS_TICKET, LilycoveCity_Harbor_EventScript_SailorFerryAvailable
# 444 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SailorFerryUnavailable, MSGBOX_DEFAULT
# 445 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 446 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 447 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 448 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SailorFerryAvailable::
# 449 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SailorFerryAvailable, MSGBOX_DEFAULT
# 450 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 451 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 452 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 453 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_MoveSailorOutOfWayNorth::
# 454 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_FERRY_SAILOR, LilycoveCity_Harbor_Movement_SailorOutOfWayNorth
# 455 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 456 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 457 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 458 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_MoveSailorOutOfWayEast::
# 459 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_FERRY_SAILOR, LilycoveCity_Harbor_Movement_SailorOutOfWayEast
# 460 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 461 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 462 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 463 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_SailorOutOfWayNorth:
# 464 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_faster_right
# 465 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lock_facing_direction
# 466 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_left
# 467 "data/maps/LilycoveCity_Harbor/scripts.pory"
	unlock_facing_direction
# 468 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 469 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 470 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_SailorOutOfWayEast:
# 471 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lock_facing_direction
# 472 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_down
# 473 "data/maps/LilycoveCity_Harbor/scripts.pory"
	unlock_facing_direction
# 474 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 475 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 476 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BrineyFaceSailorNorth::
# 477 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_WalkInPlaceFasterLeft
# 478 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 479 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 480 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 481 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BrineyFaceSailorEast::
# 482 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_WalkInPlaceFasterDown
# 483 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 484 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 485 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 486 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BrineyFacePlayerNorth::
# 487 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_WalkInPlaceFasterDown
# 488 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 489 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 490 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 491 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BrineyFacePlayerEast::
# 492 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_WalkInPlaceFasterLeft
# 493 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 494 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 495 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 496 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerryWithBrineyAndSailorNorth::
# 497 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_BRINEY, LilycoveCity_Harbor_Movement_BrineyBoardFerry
# 498 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_Harbor_Movement_PlayerBoardWithBrineyNorth
# 499 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_FERRY_SAILOR, LilycoveCity_Harbor_Movement_SailorBoardWithBrineyNorth
# 500 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 501 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 502 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 503 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerryWithBrineyAndSailorEast::
# 504 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_BRINEY, LilycoveCity_Harbor_Movement_BrineyBoardFerry
# 505 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_Harbor_Movement_PlayerBoardWithBrineyEast
# 506 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_FERRY_SAILOR, LilycoveCity_Harbor_Movement_SailorBoardWithBrineyEast
# 507 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 508 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 509 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 510 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_BrineyBoardFerry:
# 511 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 512 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_8
# 513 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 514 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 515 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 516 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_PlayerBoardWithBrineyNorth:
# 517 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 518 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_up
# 519 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 520 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 521 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 522 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 523 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_SailorBoardWithBrineyNorth:
# 524 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 525 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 526 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 527 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_right
# 528 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 529 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 530 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 531 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 532 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 533 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_PlayerBoardWithBrineyEast:
# 534 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 535 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_right
# 536 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 537 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 538 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 539 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 540 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 541 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_SailorBoardWithBrineyEast:
# 542 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 543 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 544 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 545 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_up
# 546 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 547 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 548 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 549 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 550 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_FerryUnavailable:
# 551 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "I beg your pardon?\n"
# 552 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "You're looking for a ship?\p"
# 553 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "I'm sorry, the ferry service isn't\n"
# 554 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "available at present…$"
# 555 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 556 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_MayISeeYourTicket:
# 557 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
# 558 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "May I see your TICKET?$"
# 559 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 560 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_NoTicket:
# 561 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
# 562 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "I'm terribly sorry.\p"
# 563 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "You must have a TICKET to board\n"
# 564 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "the ferry.$"
# 565 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 566 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_FlashTicketWhereTo:
# 567 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
# 568 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Perfect! That's all you need!\p"
# 569 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "And where would you like to go?$"
# 570 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 571 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_SailAnotherTime:
# 572 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Please sail with us another time!$"
# 573 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 574 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_SlateportItIs:
# 575 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "SLATEPORT CITY it is, then!$"
# 576 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 577 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_BattleFrontierItIs:
# 578 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "BATTLE FRONTIER it is, then!$"
# 579 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 580 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_PleaseBoard:
# 581 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Please board the ferry and wait for\n"
# 582 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "departure.$"
# 583 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 584 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_WhereWouldYouLikeToGo:
# 585 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Then, where would you like to go?$"
# 586 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 587 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_SailorFerryUnavailable:
# 588 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Until they finish making the ferry,\n"
# 589 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "we sailors have nothing to do…\p"
# 590 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "I wish they'd get a move on, the folks\n"
# 591 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "at the SHIPYARD in SLATEPORT.$"
# 592 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 593 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_SailorFerryAvailable:
# 594 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "The ferry S.S. TIDAL is finally in\n"
# 595 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "operation.\p"
# 596 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "The folks at the SHIPYARD in SLATEPORT\n"
# 597 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "must've worked extra hard.\p"
# 598 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Well, it's my turn to get busy now!$"

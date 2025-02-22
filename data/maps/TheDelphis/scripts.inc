TheDelphis_MapScripts::
# 2 "data/maps/TheDelphis/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TheDelphis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TheDelphis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/TheDelphis/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, TheDelphis_EventScript_CheckStatus
	.2byte 0


TheDelphis_EventScript_CheckStatus::
# 9 "data/maps/TheDelphis/scripts.pory"
	setvar VAR_TEMP_1, 1
# 10 "data/maps/TheDelphis/scripts.pory"
	goto_if_unset FLAG_ON_PIRAEUS_BOAT, TheDelphis_EventScript_CheckStatus_1
	return

TheDelphis_EventScript_CheckStatus_1:
# 12 "data/maps/TheDelphis/scripts.pory"
	goto TheDelphis_EventScript_EnterBoatCutscene
	return


TheDelphis_EventScript_EnterBoatCutscene::
# 18 "data/maps/TheDelphis/scripts.pory"
	lock
# 19 "data/maps/TheDelphis/scripts.pory"
	applymovement 1, TheDelphis_Movement_PiraeusGreetPlayer
# 20 "data/maps/TheDelphis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheDelphis_Movement_PlayerLeaveDoorway
# 21 "data/maps/TheDelphis/scripts.pory"
	applymovement 7, TheDelphis_Movement_PiraeusGreetPlayer
# 22 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
# 23 "data/maps/TheDelphis/scripts.pory"
	delay 10
# 25 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_EnterBoatCutscene_Text_0
# 26 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_EnterBoatCutscene_Text_1
# 27 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 30 "data/maps/TheDelphis/scripts.pory"
	goto_if_unset FLAG_USED_PIRAEUS_BOAT_BEFORE, TheDelphis_EventScript_EnterBoatCutscene_2
TheDelphis_EventScript_EnterBoatCutscene_1:
# 47 "data/maps/TheDelphis/scripts.pory"
	applymovement 1, TheDelphis_Movement_PiraeusGoToDesk
# 48 "data/maps/TheDelphis/scripts.pory"
	applymovement 7, TheDelphis_Movement_PiraeusGoToDesk
# 49 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
# 50 "data/maps/TheDelphis/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 51 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
# 53 "data/maps/TheDelphis/scripts.pory"
	setflag FLAG_ON_PIRAEUS_BOAT
# 54 "data/maps/TheDelphis/scripts.pory"
	setflag FLAG_HIDE_SECRET_BASE_TRAINER
# 55 "data/maps/TheDelphis/scripts.pory"
	releaseall
	end

TheDelphis_EventScript_EnterBoatCutscene_2:
# 32 "data/maps/TheDelphis/scripts.pory"
	delay 60
# 33 "data/maps/TheDelphis/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 34 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
# 35 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_EnterBoatCutscene_Text_0
# 36 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_EnterBoatCutscene_Text_2
# 37 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 39 "data/maps/TheDelphis/scripts.pory"
	adddecoration DECOR_SMALL_DESK
# 40 "data/maps/TheDelphis/scripts.pory"
	adddecoration DECOR_SMALL_CHAIR
# 41 "data/maps/TheDelphis/scripts.pory"
	adddecoration DECOR_TV
# 42 "data/maps/TheDelphis/scripts.pory"
	adddecoration DECOR_BALL_POSTER
# 43 "data/maps/TheDelphis/scripts.pory"
	adddecoration DECOR_SURF_MAT
# 44 "data/maps/TheDelphis/scripts.pory"
	setflag FLAG_USED_PIRAEUS_BOAT_BEFORE
	goto TheDelphis_EventScript_EnterBoatCutscene_1


# 59 "data/maps/TheDelphis/scripts.pory"
TheDelphis_Movement_PiraeusGreetPlayer:
# 61 "data/maps/TheDelphis/scripts.pory"
	walk_right
# 61 "data/maps/TheDelphis/scripts.pory"
	walk_right
# 61 "data/maps/TheDelphis/scripts.pory"
	walk_right
# 62 "data/maps/TheDelphis/scripts.pory"
	step_end

# 64 "data/maps/TheDelphis/scripts.pory"
TheDelphis_Movement_PlayerLeaveDoorway:
# 66 "data/maps/TheDelphis/scripts.pory"
	delay_16
# 67 "data/maps/TheDelphis/scripts.pory"
	walk_left
# 67 "data/maps/TheDelphis/scripts.pory"
	walk_left
# 68 "data/maps/TheDelphis/scripts.pory"
	step_end

# 70 "data/maps/TheDelphis/scripts.pory"
TheDelphis_Movement_PiraeusGoToDesk:
# 72 "data/maps/TheDelphis/scripts.pory"
	walk_left
# 72 "data/maps/TheDelphis/scripts.pory"
	walk_left
# 72 "data/maps/TheDelphis/scripts.pory"
	walk_left
# 73 "data/maps/TheDelphis/scripts.pory"
	face_down
# 74 "data/maps/TheDelphis/scripts.pory"
	step_end

TheDelphis_EventScript_LeaveShipTrigger::
# 81 "data/maps/TheDelphis/scripts.pory"
	lock
# 82 "data/maps/TheDelphis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 83 "data/maps/TheDelphis/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 84 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
# 85 "data/maps/TheDelphis/scripts.pory"
	delay 20
# 86 "data/maps/TheDelphis/scripts.pory"
	applymovement 1, TheDelphis_Movement_PiraeusGreetPlayer
# 87 "data/maps/TheDelphis/scripts.pory"
	applymovement 7, TheDelphis_Movement_PiraeusGreetPlayer
# 88 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
# 89 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_EnterBoatCutscene_Text_0
# 90 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_LeaveShipTrigger_Text_0, MSGBOX_YESNO
# 91 "data/maps/TheDelphis/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TheDelphis_EventScript_LeaveShipTrigger_2
# 105 "data/maps/TheDelphis/scripts.pory"
	clearflag FLAG_ON_PIRAEUS_BOAT
# 108 "data/maps/TheDelphis/scripts.pory"
	compare VAR_CHOSEN_SAIL_LOCATION, 1
	goto_if_eq TheDelphis_EventScript_LeaveShipTrigger_5
# 113 "data/maps/TheDelphis/scripts.pory"
	compare VAR_CHOSEN_SAIL_LOCATION, 2
	goto_if_eq TheDelphis_EventScript_LeaveShipTrigger_6
# 118 "data/maps/TheDelphis/scripts.pory"
	compare VAR_CHOSEN_SAIL_LOCATION, 3
	goto_if_eq TheDelphis_EventScript_LeaveShipTrigger_7
# 123 "data/maps/TheDelphis/scripts.pory"
	compare VAR_CHOSEN_SAIL_LOCATION, 4
	goto_if_eq TheDelphis_EventScript_LeaveShipTrigger_8
# 128 "data/maps/TheDelphis/scripts.pory"
	compare VAR_CHOSEN_SAIL_LOCATION, 5
	goto_if_eq TheDelphis_EventScript_LeaveShipTrigger_9
# 133 "data/maps/TheDelphis/scripts.pory"
	compare VAR_CHOSEN_SAIL_LOCATION, 6
	goto_if_eq TheDelphis_EventScript_LeaveShipTrigger_10
# 138 "data/maps/TheDelphis/scripts.pory"
	compare VAR_CHOSEN_SAIL_LOCATION, 7
	goto_if_eq TheDelphis_EventScript_LeaveShipTrigger_11
# 145 "data/maps/TheDelphis/scripts.pory"
	warp MAP_PYTHIOS_TOWN, 9, 7
# 146 "data/maps/TheDelphis/scripts.pory"
	waitstate
TheDelphis_EventScript_LeaveShipTrigger_1:
# 149 "data/maps/TheDelphis/scripts.pory"
	releaseall
	end

TheDelphis_EventScript_LeaveShipTrigger_2:
# 93 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_EnterBoatCutscene_Text_0
# 94 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_LeaveShipTrigger_Text_1
# 95 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 96 "data/maps/TheDelphis/scripts.pory"
	applymovement 1, TheDelphis_Movement_PiraeusGoToDesk
# 97 "data/maps/TheDelphis/scripts.pory"
	applymovement 7, TheDelphis_Movement_PiraeusGoToDesk
# 98 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
# 99 "data/maps/TheDelphis/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 100 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
	goto TheDelphis_EventScript_LeaveShipTrigger_1

TheDelphis_EventScript_LeaveShipTrigger_5:
# 110 "data/maps/TheDelphis/scripts.pory"
	warp MAP_PYTHIOS_TOWN, 17, 21
# 111 "data/maps/TheDelphis/scripts.pory"
	waitstate
	goto TheDelphis_EventScript_LeaveShipTrigger_1

TheDelphis_EventScript_LeaveShipTrigger_6:
# 115 "data/maps/TheDelphis/scripts.pory"
	warp MAP_SOFOS_CITY, 22, 30
# 116 "data/maps/TheDelphis/scripts.pory"
	waitstate
	goto TheDelphis_EventScript_LeaveShipTrigger_1

TheDelphis_EventScript_LeaveShipTrigger_7:
# 120 "data/maps/TheDelphis/scripts.pory"
	warp MAP_MARMARO_ISLAND, 19, 32
# 121 "data/maps/TheDelphis/scripts.pory"
	waitstate
	goto TheDelphis_EventScript_LeaveShipTrigger_1

TheDelphis_EventScript_LeaveShipTrigger_8:
# 125 "data/maps/TheDelphis/scripts.pory"
	warp MAP_MYRRINI_ISLAND, 23, 38
# 126 "data/maps/TheDelphis/scripts.pory"
	waitstate
	goto TheDelphis_EventScript_LeaveShipTrigger_1

TheDelphis_EventScript_LeaveShipTrigger_9:
# 130 "data/maps/TheDelphis/scripts.pory"
	warp MAP_FRESCO_ISLAND, 65, 27
# 131 "data/maps/TheDelphis/scripts.pory"
	waitstate
	goto TheDelphis_EventScript_LeaveShipTrigger_1

TheDelphis_EventScript_LeaveShipTrigger_10:
# 135 "data/maps/TheDelphis/scripts.pory"
	warp MAP_PALATI_CITY, 39, 19
# 136 "data/maps/TheDelphis/scripts.pory"
	waitstate
	goto TheDelphis_EventScript_LeaveShipTrigger_1

TheDelphis_EventScript_LeaveShipTrigger_11:
# 140 "data/maps/TheDelphis/scripts.pory"
	warp MAP_PORT_PELLO, 22, 19
# 141 "data/maps/TheDelphis/scripts.pory"
	waitstate
	goto TheDelphis_EventScript_LeaveShipTrigger_1


TheDelphis_EventScript_CabinSign::
# 155 "data/maps/TheDelphis/scripts.pory"
	lock
# 156 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_CabinSign_Text_0
# 157 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 158 "data/maps/TheDelphis/scripts.pory"
	release
	end


TheDelphis_EventScript_Book::
# 163 "data/maps/TheDelphis/scripts.pory"
	lock
# 164 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_Book_Text_0
# 165 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 166 "data/maps/TheDelphis/scripts.pory"
	release
	end


TheDelphis_EventScript_PIRAEUS::
# 172 "data/maps/TheDelphis/scripts.pory"
	lock
# 173 "data/maps/TheDelphis/scripts.pory"
	random 3
# 174 "data/maps/TheDelphis/scripts.pory"
	switch VAR_RESULT
# 175 "data/maps/TheDelphis/scripts.pory"
	case 0, TheDelphis_EventScript_PIRAEUS_3
# 176 "data/maps/TheDelphis/scripts.pory"
	case 1, TheDelphis_EventScript_PIRAEUS_4
# 177 "data/maps/TheDelphis/scripts.pory"
	case 2, TheDelphis_EventScript_PIRAEUS_5
TheDelphis_EventScript_PIRAEUS_1:
# 179 "data/maps/TheDelphis/scripts.pory"
	release
	end

TheDelphis_EventScript_PIRAEUS_3:
# 175 "data/maps/TheDelphis/scripts.pory"
	goto TheDelphis_EventScript_PiraeusInteraction1
	goto TheDelphis_EventScript_PIRAEUS_1

TheDelphis_EventScript_PIRAEUS_4:
# 176 "data/maps/TheDelphis/scripts.pory"
	goto TheDelphis_EventScript_PiraeusInteraction2
	goto TheDelphis_EventScript_PIRAEUS_1

TheDelphis_EventScript_PIRAEUS_5:
# 177 "data/maps/TheDelphis/scripts.pory"
	goto TheDelphis_EventScript_PiraeusInteraction3
	goto TheDelphis_EventScript_PIRAEUS_1


TheDelphis_EventScript_PiraeusInteraction1::
# 184 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_EnterBoatCutscene_Text_0
# 185 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_PiraeusInteraction1_Text_0
# 186 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 187 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_PiraeusInteraction1_Text_1
# 188 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 189 "data/maps/TheDelphis/scripts.pory"
	delay 60
# 190 "data/maps/TheDelphis/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 191 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
# 192 "data/maps/TheDelphis/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 193 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
# 194 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_EnterBoatCutscene_Text_0
# 195 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_PiraeusInteraction1_Text_2
# 196 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 197 "data/maps/TheDelphis/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 198 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
# 199 "data/maps/TheDelphis/scripts.pory"
	release
	end


TheDelphis_EventScript_PiraeusInteraction2::
# 204 "data/maps/TheDelphis/scripts.pory"
	faceplayer
# 205 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_EnterBoatCutscene_Text_0
# 206 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_PiraeusInteraction2_Text_0
# 207 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 208 "data/maps/TheDelphis/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 209 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
# 210 "data/maps/TheDelphis/scripts.pory"
	release
	end


TheDelphis_EventScript_PiraeusInteraction3::
# 215 "data/maps/TheDelphis/scripts.pory"
	faceplayer
# 216 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_EnterBoatCutscene_Text_0
# 217 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_PiraeusInteraction3_Text_0
# 218 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 219 "data/maps/TheDelphis/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 220 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
# 221 "data/maps/TheDelphis/scripts.pory"
	release
	end


TheDelphis_EventScript_Sailor::
# 227 "data/maps/TheDelphis/scripts.pory"
	lock
# 228 "data/maps/TheDelphis/scripts.pory"
	faceplayer
# 229 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_Sailor_Text_0
# 230 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_Sailor_Text_1
# 231 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 232 "data/maps/TheDelphis/scripts.pory"
	release
	end


TheDelphis_EventScript_PunkRocker::
# 238 "data/maps/TheDelphis/scripts.pory"
	lock
# 239 "data/maps/TheDelphis/scripts.pory"
	faceplayer
# 240 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_PunkRocker_Text_0
# 241 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_PunkRocker_Text_1
# 242 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 243 "data/maps/TheDelphis/scripts.pory"
	release
	end


TheDelphis_EventScript_TogaGirl::
# 249 "data/maps/TheDelphis/scripts.pory"
	lock
# 250 "data/maps/TheDelphis/scripts.pory"
	faceplayer
# 251 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_TogaGirl_Text_0
# 252 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_TogaGirl_Text_1
# 253 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 254 "data/maps/TheDelphis/scripts.pory"
	release
	end


TheDelphis_EventScript_Passimian::
# 260 "data/maps/TheDelphis/scripts.pory"
	lock
# 261 "data/maps/TheDelphis/scripts.pory"
	faceplayer
# 262 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_Passimian_Text_0
# 263 "data/maps/TheDelphis/scripts.pory"
	playmoncry SPECIES_PASSIMIAN, CRY_MODE_NORMAL
# 264 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_Passimian_Text_1
# 265 "data/maps/TheDelphis/scripts.pory"
	waitmoncry
# 266 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 267 "data/maps/TheDelphis/scripts.pory"
	release
	end


TheDelphis_EventScript_Oranguru::
# 273 "data/maps/TheDelphis/scripts.pory"
	lock
# 274 "data/maps/TheDelphis/scripts.pory"
	faceplayer
# 275 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_Oranguru_Text_0
# 276 "data/maps/TheDelphis/scripts.pory"
	playmoncry SPECIES_ORANGURU, CRY_MODE_NORMAL
# 277 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_Oranguru_Text_1
# 278 "data/maps/TheDelphis/scripts.pory"
	waitmoncry
# 279 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 280 "data/maps/TheDelphis/scripts.pory"
	release
	end


TheDelphis_EventScript_CabinDoorInteract::
# 286 "data/maps/TheDelphis/scripts.pory"
	lock
# 287 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_CabinDoorInteract_Text_0, MSGBOX_YESNO
# 288 "data/maps/TheDelphis/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TheDelphis_EventScript_CabinDoorInteract_2
# 294 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 296 "data/maps/TheDelphis/scripts.pory"
	goto_if_unset FLAG_INITIALIZED_CABIN, TheDelphis_EventScript_CabinDoorInteract_5
# 302 "data/maps/TheDelphis/scripts.pory"
	goto SecretBase_EventScript_Enter
TheDelphis_EventScript_CabinDoorInteract_1:
# 305 "data/maps/TheDelphis/scripts.pory"
	releaseall
	end

TheDelphis_EventScript_CabinDoorInteract_2:
# 290 "data/maps/TheDelphis/scripts.pory"
	closemessage
	goto TheDelphis_EventScript_CabinDoorInteract_1

TheDelphis_EventScript_CabinDoorInteract_5:
# 298 "data/maps/TheDelphis/scripts.pory"
	goto SecretBase_EventScript_InitSecretBase
	goto TheDelphis_EventScript_CabinDoorInteract_1


TheDelphis_EventScript_EnterBoatCutscene_Text_0:
# 25 "data/maps/TheDelphis/scripts.pory"
	.string "Piraeus$"

TheDelphis_EventScript_EnterBoatCutscene_Text_1:
# 26 "data/maps/TheDelphis/scripts.pory"
	.string "Welcome to The Delphis! We're en route\n"
	.string "to our destination, so feel free to\l"
	.string "{COLOR GREEN}press A at the door to check your Cabin{COLOR DARK_GRAY}.\l"
	.string "When you're ready to leave, just stand\l"
	.string "by that {COLOR GREEN}Exit door{COLOR DARK_GRAY}.\p"
	.string "Don't get seasick, now! We'll be there\n"
	.string "soon!$"

TheDelphis_EventScript_EnterBoatCutscene_Text_2:
# 36 "data/maps/TheDelphis/scripts.pory"
	.string "Ah, I suppose you won't have much to\n"
	.string "decorate your Cabin with yet! I've put a\l"
	.string "few basic items in your personal PC,\l"
	.string "which you can find in the room.$"

TheDelphis_EventScript_LeaveShipTrigger_Text_0:
# 90 "data/maps/TheDelphis/scripts.pory"
	.string "I can feel the boat slowing down, so we\n"
	.string "must be near our destination. Are you\l"
	.string "ready to leave?$"

TheDelphis_EventScript_LeaveShipTrigger_Text_1:
# 94 "data/maps/TheDelphis/scripts.pory"
	.string "No rush! You're always welcome on The\n"
	.string "Delphis!$"

TheDelphis_EventScript_CabinSign_Text_0:
# 156 "data/maps/TheDelphis/scripts.pory"
	.string "{PLAYER}'s Cabin$"

TheDelphis_EventScript_Book_Text_0:
# 164 "data/maps/TheDelphis/scripts.pory"
	.string "Vaporeon's paw prints have smudged up\n"
	.string "the words! Piraeus isn't reading here at\l"
	.string "all!$"

TheDelphis_EventScript_PiraeusInteraction1_Text_0:
# 185 "data/maps/TheDelphis/scripts.pory"
	.string "...Zzz...snort!...zzz...$"

TheDelphis_EventScript_PiraeusInteraction1_Text_1:
# 187 "data/maps/TheDelphis/scripts.pory"
	.string "He's snoozing!$"

TheDelphis_EventScript_PiraeusInteraction1_Text_2:
# 195 "data/maps/TheDelphis/scripts.pory"
	.string "Hm? {PLAYER}! No, no, I wasn't\n"
	.string "sleeping... I was reading and needed to\l"
	.string "rest my eyes, that's all!$"

TheDelphis_EventScript_PiraeusInteraction2_Text_0:
# 206 "data/maps/TheDelphis/scripts.pory"
	.string "Have you met my crew? We're a bit of a\n"
	.string "rag-tag bunch, but that makes sailing\l"
	.string "so much more fun.$"

TheDelphis_EventScript_PiraeusInteraction3_Text_0:
# 217 "data/maps/TheDelphis/scripts.pory"
	.string "Are you enjoying your Cabin,\n"
	.string "{PLAYER}? I figure I owe you for\l"
	.string "saving my butt back in Pythios Town, so\l"
	.string "you can decorate it however you want.$"

TheDelphis_EventScript_Sailor_Text_0:
# 229 "data/maps/TheDelphis/scripts.pory"
	.string "Sailor$"

TheDelphis_EventScript_Sailor_Text_1:
# 230 "data/maps/TheDelphis/scripts.pory"
	.string "Hey, watch it! This food is all mine!\p"
	.string "...You were just saying hi? Well, hi.\p"
	.string "Um... have you seen this Arcanine\n"
	.string "statue? Pretty cool, huh?$"

TheDelphis_EventScript_PunkRocker_Text_0:
# 240 "data/maps/TheDelphis/scripts.pory"
	.string "Punk Rocker$"

TheDelphis_EventScript_PunkRocker_Text_1:
# 241 "data/maps/TheDelphis/scripts.pory"
	.string "I'm trying to get these guys to form a\n"
	.string "band with me. Right now, I'm the only one\l"
	.string "who can play an instrument! It makes\l"
	.string "music nights kind of boring.$"

TheDelphis_EventScript_TogaGirl_Text_0:
# 251 "data/maps/TheDelphis/scripts.pory"
	.string "Toga Lady$"

TheDelphis_EventScript_TogaGirl_Text_1:
# 252 "data/maps/TheDelphis/scripts.pory"
	.string "I play with our Passimian while we're on\n"
	.string "the ship.\p"
	.string "Passimian helps us fight off wild\n"
	.string "Pokémon, while Oranguru can use psychic\l"
	.string "powers to steer us clear of storms.\l"
	.string "Pokémon are so helpful!$"

TheDelphis_EventScript_Passimian_Text_0:
# 262 "data/maps/TheDelphis/scripts.pory"
	.string "Passimian$"

TheDelphis_EventScript_Passimian_Text_1:
# 264 "data/maps/TheDelphis/scripts.pory"
	.string "Cree-ee!$"

TheDelphis_EventScript_Oranguru_Text_0:
# 275 "data/maps/TheDelphis/scripts.pory"
	.string "Oranguru$"

TheDelphis_EventScript_Oranguru_Text_1:
# 277 "data/maps/TheDelphis/scripts.pory"
	.string "Mmm... oo-oo!$"

TheDelphis_EventScript_CabinDoorInteract_Text_0:
# 287 "data/maps/TheDelphis/scripts.pory"
	.string "Enter {PLAYER}'s Cabin?$"

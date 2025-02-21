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
# 48 "data/maps/TheDelphis/scripts.pory"
	applymovement 1, TheDelphis_Movement_PiraeusGoToDesk
# 49 "data/maps/TheDelphis/scripts.pory"
	applymovement 7, TheDelphis_Movement_PiraeusGoToDesk
# 50 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
# 51 "data/maps/TheDelphis/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 52 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
# 54 "data/maps/TheDelphis/scripts.pory"
	setflag FLAG_ON_PIRAEUS_BOAT
# 55 "data/maps/TheDelphis/scripts.pory"
	setflag FLAG_HIDE_SECRET_BASE_TRAINER
# 56 "data/maps/TheDelphis/scripts.pory"
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
	adddecoration DECOR_PUPPY_POSTER
# 45 "data/maps/TheDelphis/scripts.pory"
	setflag FLAG_USED_PIRAEUS_BOAT_BEFORE
	goto TheDelphis_EventScript_EnterBoatCutscene_1


# 60 "data/maps/TheDelphis/scripts.pory"
TheDelphis_Movement_PiraeusGreetPlayer:
# 62 "data/maps/TheDelphis/scripts.pory"
	walk_right
# 62 "data/maps/TheDelphis/scripts.pory"
	walk_right
# 62 "data/maps/TheDelphis/scripts.pory"
	walk_right
# 63 "data/maps/TheDelphis/scripts.pory"
	step_end

# 65 "data/maps/TheDelphis/scripts.pory"
TheDelphis_Movement_PlayerLeaveDoorway:
# 67 "data/maps/TheDelphis/scripts.pory"
	delay_16
# 68 "data/maps/TheDelphis/scripts.pory"
	walk_left
# 68 "data/maps/TheDelphis/scripts.pory"
	walk_left
# 69 "data/maps/TheDelphis/scripts.pory"
	step_end

# 71 "data/maps/TheDelphis/scripts.pory"
TheDelphis_Movement_PiraeusGoToDesk:
# 73 "data/maps/TheDelphis/scripts.pory"
	walk_left
# 73 "data/maps/TheDelphis/scripts.pory"
	walk_left
# 73 "data/maps/TheDelphis/scripts.pory"
	walk_left
# 74 "data/maps/TheDelphis/scripts.pory"
	face_down
# 75 "data/maps/TheDelphis/scripts.pory"
	step_end

TheDelphis_EventScript_LeaveShipTrigger::
# 82 "data/maps/TheDelphis/scripts.pory"
	lock
# 83 "data/maps/TheDelphis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 84 "data/maps/TheDelphis/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 85 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
# 86 "data/maps/TheDelphis/scripts.pory"
	delay 20
# 87 "data/maps/TheDelphis/scripts.pory"
	applymovement 1, TheDelphis_Movement_PiraeusGreetPlayer
# 88 "data/maps/TheDelphis/scripts.pory"
	applymovement 7, TheDelphis_Movement_PiraeusGreetPlayer
# 89 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
# 90 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_EnterBoatCutscene_Text_0
# 91 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_LeaveShipTrigger_Text_0, MSGBOX_YESNO
# 92 "data/maps/TheDelphis/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TheDelphis_EventScript_LeaveShipTrigger_2
# 106 "data/maps/TheDelphis/scripts.pory"
	clearflag FLAG_ON_PIRAEUS_BOAT
# 109 "data/maps/TheDelphis/scripts.pory"
	compare VAR_CHOSEN_SAIL_LOCATION, 1
	goto_if_eq TheDelphis_EventScript_LeaveShipTrigger_5
# 114 "data/maps/TheDelphis/scripts.pory"
	compare VAR_CHOSEN_SAIL_LOCATION, 2
	goto_if_eq TheDelphis_EventScript_LeaveShipTrigger_6
# 119 "data/maps/TheDelphis/scripts.pory"
	compare VAR_CHOSEN_SAIL_LOCATION, 3
	goto_if_eq TheDelphis_EventScript_LeaveShipTrigger_7
# 124 "data/maps/TheDelphis/scripts.pory"
	compare VAR_CHOSEN_SAIL_LOCATION, 4
	goto_if_eq TheDelphis_EventScript_LeaveShipTrigger_8
# 129 "data/maps/TheDelphis/scripts.pory"
	compare VAR_CHOSEN_SAIL_LOCATION, 5
	goto_if_eq TheDelphis_EventScript_LeaveShipTrigger_9
# 134 "data/maps/TheDelphis/scripts.pory"
	compare VAR_CHOSEN_SAIL_LOCATION, 6
	goto_if_eq TheDelphis_EventScript_LeaveShipTrigger_10
# 139 "data/maps/TheDelphis/scripts.pory"
	compare VAR_CHOSEN_SAIL_LOCATION, 7
	goto_if_eq TheDelphis_EventScript_LeaveShipTrigger_11
# 146 "data/maps/TheDelphis/scripts.pory"
	warp MAP_PYTHIOS_TOWN, 9, 7
# 147 "data/maps/TheDelphis/scripts.pory"
	waitstate
TheDelphis_EventScript_LeaveShipTrigger_1:
# 150 "data/maps/TheDelphis/scripts.pory"
	releaseall
	end

TheDelphis_EventScript_LeaveShipTrigger_2:
# 94 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_EnterBoatCutscene_Text_0
# 95 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_LeaveShipTrigger_Text_1
# 96 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 97 "data/maps/TheDelphis/scripts.pory"
	applymovement 1, TheDelphis_Movement_PiraeusGoToDesk
# 98 "data/maps/TheDelphis/scripts.pory"
	applymovement 7, TheDelphis_Movement_PiraeusGoToDesk
# 99 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
# 100 "data/maps/TheDelphis/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 101 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
	goto TheDelphis_EventScript_LeaveShipTrigger_1

TheDelphis_EventScript_LeaveShipTrigger_5:
# 111 "data/maps/TheDelphis/scripts.pory"
	warp MAP_PYTHIOS_TOWN, 17, 21
# 112 "data/maps/TheDelphis/scripts.pory"
	waitstate
	goto TheDelphis_EventScript_LeaveShipTrigger_1

TheDelphis_EventScript_LeaveShipTrigger_6:
# 116 "data/maps/TheDelphis/scripts.pory"
	warp MAP_SOFOS_CITY, 22, 30
# 117 "data/maps/TheDelphis/scripts.pory"
	waitstate
	goto TheDelphis_EventScript_LeaveShipTrigger_1

TheDelphis_EventScript_LeaveShipTrigger_7:
# 121 "data/maps/TheDelphis/scripts.pory"
	warp MAP_MARMARO_ISLAND, 19, 32
# 122 "data/maps/TheDelphis/scripts.pory"
	waitstate
	goto TheDelphis_EventScript_LeaveShipTrigger_1

TheDelphis_EventScript_LeaveShipTrigger_8:
# 126 "data/maps/TheDelphis/scripts.pory"
	warp MAP_MYRRINI_ISLAND, 23, 38
# 127 "data/maps/TheDelphis/scripts.pory"
	waitstate
	goto TheDelphis_EventScript_LeaveShipTrigger_1

TheDelphis_EventScript_LeaveShipTrigger_9:
# 131 "data/maps/TheDelphis/scripts.pory"
	warp MAP_FRESCO_ISLAND, 65, 27
# 132 "data/maps/TheDelphis/scripts.pory"
	waitstate
	goto TheDelphis_EventScript_LeaveShipTrigger_1

TheDelphis_EventScript_LeaveShipTrigger_10:
# 136 "data/maps/TheDelphis/scripts.pory"
	warp MAP_PALATI_CITY, 39, 19
# 137 "data/maps/TheDelphis/scripts.pory"
	waitstate
	goto TheDelphis_EventScript_LeaveShipTrigger_1

TheDelphis_EventScript_LeaveShipTrigger_11:
# 141 "data/maps/TheDelphis/scripts.pory"
	warp MAP_PORT_PELLO, 22, 19
# 142 "data/maps/TheDelphis/scripts.pory"
	waitstate
	goto TheDelphis_EventScript_LeaveShipTrigger_1


TheDelphis_EventScript_CabinSign::
# 156 "data/maps/TheDelphis/scripts.pory"
	lock
# 157 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_CabinSign_Text_0
# 158 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 159 "data/maps/TheDelphis/scripts.pory"
	release
	end


TheDelphis_EventScript_Book::
# 164 "data/maps/TheDelphis/scripts.pory"
	lock
# 165 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_Book_Text_0
# 166 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 167 "data/maps/TheDelphis/scripts.pory"
	release
	end


TheDelphis_EventScript_PIRAEUS::
# 173 "data/maps/TheDelphis/scripts.pory"
	lock
# 174 "data/maps/TheDelphis/scripts.pory"
	random 3
# 175 "data/maps/TheDelphis/scripts.pory"
	switch VAR_RESULT
# 176 "data/maps/TheDelphis/scripts.pory"
	case 0, TheDelphis_EventScript_PIRAEUS_3
# 177 "data/maps/TheDelphis/scripts.pory"
	case 1, TheDelphis_EventScript_PIRAEUS_4
# 178 "data/maps/TheDelphis/scripts.pory"
	case 2, TheDelphis_EventScript_PIRAEUS_5
TheDelphis_EventScript_PIRAEUS_1:
# 180 "data/maps/TheDelphis/scripts.pory"
	release
	end

TheDelphis_EventScript_PIRAEUS_3:
# 176 "data/maps/TheDelphis/scripts.pory"
	goto TheDelphis_EventScript_PiraeusInteraction1
	goto TheDelphis_EventScript_PIRAEUS_1

TheDelphis_EventScript_PIRAEUS_4:
# 177 "data/maps/TheDelphis/scripts.pory"
	goto TheDelphis_EventScript_PiraeusInteraction2
	goto TheDelphis_EventScript_PIRAEUS_1

TheDelphis_EventScript_PIRAEUS_5:
# 178 "data/maps/TheDelphis/scripts.pory"
	goto TheDelphis_EventScript_PiraeusInteraction3
	goto TheDelphis_EventScript_PIRAEUS_1


TheDelphis_EventScript_PiraeusInteraction1::
# 185 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_EnterBoatCutscene_Text_0
# 186 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_PiraeusInteraction1_Text_0
# 187 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 188 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_PiraeusInteraction1_Text_1
# 189 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 190 "data/maps/TheDelphis/scripts.pory"
	delay 60
# 191 "data/maps/TheDelphis/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 192 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
# 193 "data/maps/TheDelphis/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 194 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
# 195 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_EnterBoatCutscene_Text_0
# 196 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_PiraeusInteraction1_Text_2
# 197 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 198 "data/maps/TheDelphis/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 199 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
# 200 "data/maps/TheDelphis/scripts.pory"
	release
	end


TheDelphis_EventScript_PiraeusInteraction2::
# 205 "data/maps/TheDelphis/scripts.pory"
	faceplayer
# 206 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_EnterBoatCutscene_Text_0
# 207 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_PiraeusInteraction2_Text_0
# 208 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 209 "data/maps/TheDelphis/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 210 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
# 211 "data/maps/TheDelphis/scripts.pory"
	release
	end


TheDelphis_EventScript_PiraeusInteraction3::
# 216 "data/maps/TheDelphis/scripts.pory"
	faceplayer
# 217 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_EnterBoatCutscene_Text_0
# 218 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_PiraeusInteraction3_Text_0
# 219 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 220 "data/maps/TheDelphis/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 221 "data/maps/TheDelphis/scripts.pory"
	waitmovement 0
# 222 "data/maps/TheDelphis/scripts.pory"
	release
	end


TheDelphis_EventScript_Sailor::
# 228 "data/maps/TheDelphis/scripts.pory"
	lock
# 229 "data/maps/TheDelphis/scripts.pory"
	faceplayer
# 230 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_Sailor_Text_0
# 231 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_Sailor_Text_1
# 232 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 233 "data/maps/TheDelphis/scripts.pory"
	release
	end


TheDelphis_EventScript_PunkRocker::
# 239 "data/maps/TheDelphis/scripts.pory"
	lock
# 240 "data/maps/TheDelphis/scripts.pory"
	faceplayer
# 241 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_PunkRocker_Text_0
# 242 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_PunkRocker_Text_1
# 243 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 244 "data/maps/TheDelphis/scripts.pory"
	release
	end


TheDelphis_EventScript_TogaGirl::
# 250 "data/maps/TheDelphis/scripts.pory"
	lock
# 251 "data/maps/TheDelphis/scripts.pory"
	faceplayer
# 252 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_TogaGirl_Text_0
# 253 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_TogaGirl_Text_1
# 254 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 255 "data/maps/TheDelphis/scripts.pory"
	release
	end


TheDelphis_EventScript_Passimian::
# 261 "data/maps/TheDelphis/scripts.pory"
	lock
# 262 "data/maps/TheDelphis/scripts.pory"
	faceplayer
# 263 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_Passimian_Text_0
# 264 "data/maps/TheDelphis/scripts.pory"
	playmoncry SPECIES_PASSIMIAN, CRY_MODE_NORMAL
# 265 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_Passimian_Text_1
# 266 "data/maps/TheDelphis/scripts.pory"
	waitmoncry
# 267 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 268 "data/maps/TheDelphis/scripts.pory"
	release
	end


TheDelphis_EventScript_Oranguru::
# 274 "data/maps/TheDelphis/scripts.pory"
	lock
# 275 "data/maps/TheDelphis/scripts.pory"
	faceplayer
# 276 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_Oranguru_Text_0
# 277 "data/maps/TheDelphis/scripts.pory"
	playmoncry SPECIES_ORANGURU, CRY_MODE_NORMAL
# 278 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_Oranguru_Text_1
# 279 "data/maps/TheDelphis/scripts.pory"
	waitmoncry
# 280 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 281 "data/maps/TheDelphis/scripts.pory"
	release
	end


TheDelphis_EventScript_CabinDoorInteract::
# 287 "data/maps/TheDelphis/scripts.pory"
	lock
# 288 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_CabinDoorInteract_Text_0, MSGBOX_YESNO
# 289 "data/maps/TheDelphis/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TheDelphis_EventScript_CabinDoorInteract_2
# 295 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 297 "data/maps/TheDelphis/scripts.pory"
	goto_if_unset FLAG_INITIALIZED_CABIN, TheDelphis_EventScript_CabinDoorInteract_5
# 303 "data/maps/TheDelphis/scripts.pory"
	goto SecretBase_EventScript_Enter
TheDelphis_EventScript_CabinDoorInteract_1:
# 306 "data/maps/TheDelphis/scripts.pory"
	releaseall
	end

TheDelphis_EventScript_CabinDoorInteract_2:
# 291 "data/maps/TheDelphis/scripts.pory"
	closemessage
	goto TheDelphis_EventScript_CabinDoorInteract_1

TheDelphis_EventScript_CabinDoorInteract_5:
# 299 "data/maps/TheDelphis/scripts.pory"
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
# 91 "data/maps/TheDelphis/scripts.pory"
	.string "I can feel the boat slowing down, so we\n"
	.string "must be near our destination. Are you\l"
	.string "ready to leave?$"

TheDelphis_EventScript_LeaveShipTrigger_Text_1:
# 95 "data/maps/TheDelphis/scripts.pory"
	.string "No rush! You're always welcome on The\n"
	.string "Delphis!$"

TheDelphis_EventScript_CabinSign_Text_0:
# 157 "data/maps/TheDelphis/scripts.pory"
	.string "{PLAYER}'s Cabin$"

TheDelphis_EventScript_Book_Text_0:
# 165 "data/maps/TheDelphis/scripts.pory"
	.string "Vaporeon's paw prints have smudged up\n"
	.string "the words! Piraeus isn't reading here at\l"
	.string "all!$"

TheDelphis_EventScript_PiraeusInteraction1_Text_0:
# 186 "data/maps/TheDelphis/scripts.pory"
	.string "...Zzz...snort!...zzz...$"

TheDelphis_EventScript_PiraeusInteraction1_Text_1:
# 188 "data/maps/TheDelphis/scripts.pory"
	.string "He's snoozing!$"

TheDelphis_EventScript_PiraeusInteraction1_Text_2:
# 196 "data/maps/TheDelphis/scripts.pory"
	.string "Hm? {PLAYER}! No, no, I wasn't\n"
	.string "sleeping... I was reading and needed to\l"
	.string "rest my eyes, that's all!$"

TheDelphis_EventScript_PiraeusInteraction2_Text_0:
# 207 "data/maps/TheDelphis/scripts.pory"
	.string "Have you met my crew? We're a bit of a\n"
	.string "rag-tag bunch, but that makes sailing\l"
	.string "so much more fun.$"

TheDelphis_EventScript_PiraeusInteraction3_Text_0:
# 218 "data/maps/TheDelphis/scripts.pory"
	.string "Are you enjoying your Cabin,\n"
	.string "{PLAYER}? I figure I owe you for\l"
	.string "saving my butt back in Pythios Town, so\l"
	.string "you can decorate it however you want.$"

TheDelphis_EventScript_Sailor_Text_0:
# 230 "data/maps/TheDelphis/scripts.pory"
	.string "Sailor$"

TheDelphis_EventScript_Sailor_Text_1:
# 231 "data/maps/TheDelphis/scripts.pory"
	.string "Hey, watch it! This food is all mine!\p"
	.string "...You were just saying hi? Well, hi.\p"
	.string "Um... have you seen this Arcanine\n"
	.string "statue? Pretty cool, huh?$"

TheDelphis_EventScript_PunkRocker_Text_0:
# 241 "data/maps/TheDelphis/scripts.pory"
	.string "Punk Rocker$"

TheDelphis_EventScript_PunkRocker_Text_1:
# 242 "data/maps/TheDelphis/scripts.pory"
	.string "I'm trying to get these guys to form a\n"
	.string "band with me. Right now, I'm the only one\l"
	.string "who can play an instrument! It makes\l"
	.string "music nights kind of boring.$"

TheDelphis_EventScript_TogaGirl_Text_0:
# 252 "data/maps/TheDelphis/scripts.pory"
	.string "Toga Lady$"

TheDelphis_EventScript_TogaGirl_Text_1:
# 253 "data/maps/TheDelphis/scripts.pory"
	.string "I play with our Passimian while we're on\n"
	.string "the ship.\p"
	.string "Passimian helps us fight off wild\n"
	.string "Pokémon, while Oranguru can use psychic\l"
	.string "powers to steer us clear of storms.\l"
	.string "Pokémon are so helpful!$"

TheDelphis_EventScript_Passimian_Text_0:
# 263 "data/maps/TheDelphis/scripts.pory"
	.string "Passimian$"

TheDelphis_EventScript_Passimian_Text_1:
# 265 "data/maps/TheDelphis/scripts.pory"
	.string "Cree-ee!$"

TheDelphis_EventScript_Oranguru_Text_0:
# 276 "data/maps/TheDelphis/scripts.pory"
	.string "Oranguru$"

TheDelphis_EventScript_Oranguru_Text_1:
# 278 "data/maps/TheDelphis/scripts.pory"
	.string "Mmm... oo-oo!$"

TheDelphis_EventScript_CabinDoorInteract_Text_0:
# 288 "data/maps/TheDelphis/scripts.pory"
	.string "Enter {PLAYER}'s Cabin?$"

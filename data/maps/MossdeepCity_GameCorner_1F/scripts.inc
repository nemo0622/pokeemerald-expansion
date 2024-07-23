# 1 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 2 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
MossdeepCity_GameCorner_1F_MapScripts::
# 3 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_GameCorner_1F_OnFrame
# 4 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MossdeepCity_GameCorner_1F_OnWarp
# 5 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
# 6 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.byte 0
# 7 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 8 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
MossdeepCity_GameCorner_1F_OnWarp:
# 9 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, CableClub_EventScript_CheckTurnAttendant
# 10 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.2byte 0
# 11 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 12 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
MossdeepCity_GameCorner_1F_OnFrame:
# 13 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
@	map_script_2 VAR_CABLE_CLUB_STATE, 0, MossdeepGameCorner_OldMan_ShowPlayerAroundEvent
# 14 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.2byte 0
# 15 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 16 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
@ Script is redundant, the label in the goto also does lock and faceplayer
# 17 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
MossdeepCity_GameCorner_1F_EventScript_InfoMan::
# 18 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	lock
# 19 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	faceplayer
# 20 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_InfoMan2
# 21 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	release
# 22 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	end
# 23 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 24 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
@ Script is redundant, the label in the goto also does lock and faceplayer
# 25 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
MossdeepCity_GameCorner_1F_EventScript_OldMan::
# 26 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	lock
# 27 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	faceplayer
# 28 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_OldMan2
# 29 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	release
# 30 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	end
# 31 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 32 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 33 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
@ Everything below is leftover from RS
# 34 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
@ The house that was here in RS was moved to Sootopolis and replaced by the Game Corner
# 35 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
@ The text below is unused and duplicated in its replacement in Sootopolis City
# 36 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
@ And the BG Door event was moved inaccessibly into a wall
# 37 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 38 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
RS_MysteryEventsHouse_EventScript_Door::
# 39 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox RS_MysteryEventsHouse_Text_DoorIsLocked, MSGBOX_SIGN
# 40 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	end
# 41 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 42 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
RS_MysteryEventsHouse_Text_OldManGreeting:
# 43 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "When I was young, I traveled the world\n"
# 44 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "as a POKéMON TRAINER.\p"
# 45 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Now that I've become an old buzzard,\n"
# 46 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "my only amusement is watching young\l"
# 47 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "TRAINERS battle.$"
# 48 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 49 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
RS_MysteryEventsHouse_Text_DoorIsLocked:
# 50 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "The door appears to be locked.$"
# 51 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 52 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
RS_MysteryEventsHouse_Text_ChallengeVisitingTrainer:
# 53 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "A TRAINER named {STR_VAR_1} is\n"
# 54 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "visiting my home.\p"
# 55 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Would you like to challenge\n"
# 56 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "{STR_VAR_1}?$"
# 57 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 58 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
RS_MysteryEventsHouse_Text_YouWontBattle:
# 59 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "You won't battle? I'm disappointed\n"
# 60 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "that I can't see you battle…$"
# 61 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 62 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
RS_MysteryEventsHouse_Text_KeepItToA3On3:
# 63 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Oh, good, good!\p"
# 64 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "But my house isn't all that sturdy.\p"
# 65 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Could I ask you to keep it down to\n"
# 66 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "a 3-on-3 match?$"
# 67 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 68 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
RS_MysteryEventsHouse_Text_SaveYourProgress:
# 69 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Before you two battle, you should\n"
# 70 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "save your progress.$"
# 71 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 72 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
RS_MysteryEventsHouse_Text_HopeToSeeAGoodMatch:
# 73 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "I hope to see a good match!$"
# 74 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 75 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
RS_MysteryEventsHouse_Text_BattleTie:
# 76 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "So, it became a standoff.\p"
# 77 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "It was a brilliant match in which\n"
# 78 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "neither side conceded a step!$"
# 79 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 80 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
RS_MysteryEventsHouse_Text_BattleWon:
# 81 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "That was superlative!\p"
# 82 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Why, it was like seeing myself in\n"
# 83 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "my youth again!$"
# 84 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 85 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
RS_MysteryEventsHouse_Text_BattleLost:
# 86 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Ah, too bad for you!\p"
# 87 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "But it was a good match.\n"
# 88 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "I hope you can win next time.$"

MossdeepGameCorner_OldMan_ShowPlayerAroundEvent::
# 94 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto_if_unset FLAG_VISITED_MOSSDEEP_GAME_CORNER, MossdeepGameCorner_OldMan_ShowPlayerAroundEvent_1
# 142 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	lock
# 143 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	release
	end

MossdeepGameCorner_OldMan_ShowPlayerAroundEvent_1:
# 96 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	lock
# 97 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 98 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	waitmovement 0
# 99 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	applymovement 3, MossdeepGameCorner_Movement_ShowPlayerAround1
# 100 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	waitmovement 0
# 101 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox MossdeepGameCorner_OldMan_ShowPlayerAroundEvent_Text_0
# 102 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
# 103 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	applymovement 3, MossdeepGameCorner_Movement_ShowPlayerAround2
# 104 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepGameCorner_Movement_ShowPlayerAround2
# 105 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MossdeepGameCorner_Movement_ShowPlayerAround2
# 106 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	waitmovement 0
# 107 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	delay 10
# 108 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 109 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 110 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	waitmovement 0
# 111 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox MossdeepGameCorner_OldMan_ShowPlayerAroundEvent_Text_1
# 112 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
# 113 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	applymovement 3, MossdeepGameCorner_Movement_ShowPlayerAround3
# 114 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepGameCorner_Movement_ShowPlayerAround3
# 115 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MossdeepGameCorner_Movement_ShowPlayerAround3
# 116 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	waitmovement 0
# 117 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	delay 10
# 118 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox MossdeepGameCorner_OldMan_ShowPlayerAroundEvent_Text_2
# 119 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
# 120 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	applymovement 3, MossdeepGameCorner_Movement_ShowPlayerAround4
# 121 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepGameCorner_Movement_ShowPlayerAround4
# 122 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MossdeepGameCorner_Movement_ShowPlayerAround4
# 123 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	waitmovement 0
# 124 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	delay 10
# 125 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 126 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 127 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	waitmovement 0
# 128 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox MossdeepGameCorner_OldMan_ShowPlayerAroundEvent_Text_3
# 129 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
# 131 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	setflag FLAG_VISITED_MOSSDEEP_GAME_CORNER
# 133 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	applymovement 3, MossdeepGameCorner_Movement_ShowPlayerAround_ReturnToSeat
# 134 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	waitmovement 0
# 135 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	delay 10
# 137 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	release
	end


# 148 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
MossdeepGameCorner_Movement_ShowPlayerAround1:
# 150 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_down
# 151 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_right
# 151 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_right
# 151 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_right
# 152 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	jump_in_place_right
# 152 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	jump_in_place_right
# 153 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_up
# 154 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_right
# 155 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_in_place_faster_down
# 156 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	step_end

# 159 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
MossdeepGameCorner_Movement_ShowPlayerAround2:
# 161 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_up
# 161 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_up
# 162 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_left
# 163 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	step_end

# 166 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
MossdeepGameCorner_Movement_ShowPlayerAround3:
# 168 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_right
# 168 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_right
# 169 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	step_end

# 172 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
MossdeepGameCorner_Movement_ShowPlayerAround4:
# 174 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_left
# 175 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_up
# 175 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_up
# 176 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	step_end

# 179 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
MossdeepGameCorner_Movement_ShowPlayerAround_ReturnToSeat:
# 181 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_left
# 181 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_left
# 181 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_left
# 181 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_left
# 181 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_left
# 182 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_down
# 182 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_down
# 182 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_down
# 182 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_down
# 183 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	walk_right
# 184 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	step_end

MossdeepGameCorner_EventScript_OldMan::
# 189 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	lock
# 190 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	faceplayer
# 191 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox MossdeepGameCorner_EventScript_OldMan_Text_0
# 192 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
# 193 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	applymovement 3, Common_Movement_FaceOriginalDirection
# 194 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	waitmovement 0
# 195 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	release
	end


MossdeepGameCorner_EventScript_Man4::
# 201 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	lock
# 202 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	faceplayer
# 203 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox MossdeepGameCorner_EventScript_Man4_Text_0
# 204 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
# 205 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto_if_unset FLAG_GOT_LUCKY_EGG_MOSSDEEP, MossdeepGameCorner_EventScript_Man4_2
MossdeepGameCorner_EventScript_Man4_1:
# 212 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	applymovement 4, Common_Movement_FaceOriginalDirection
# 213 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	waitmovement 0
# 214 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	release
	end

MossdeepGameCorner_EventScript_Man4_2:
# 207 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox MossdeepGameCorner_EventScript_Man4_Text_1
# 208 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
# 209 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 210 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	setflag FLAG_GOT_LUCKY_EGG_MOSSDEEP
	goto MossdeepGameCorner_EventScript_Man4_1


MossdeepGameCorner_EventScript_Woman3::
# 220 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	lock
# 221 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	faceplayer
# 222 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox MossdeepGameCorner_EventScript_Woman3_Text_0
# 223 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
# 224 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	applymovement 5, Common_Movement_FaceOriginalDirection
# 225 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	waitmovement 0
# 226 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	release
	end


MossdeepGameCorner_EventScript_Hiker::
# 232 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	lock
# 233 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	faceplayer
# 234 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox MossdeepGameCorner_EventScript_Hiker_Text_0
# 235 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
# 236 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	applymovement 6, Common_Movement_FaceOriginalDirection
# 237 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	waitmovement 0
# 238 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	release
	end


MossdeepGameCorner_EventScript_Woman4::
# 244 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	lock
# 245 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	faceplayer
# 246 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox MossdeepGameCorner_EventScript_Woman4_Text_0
# 247 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
# 248 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	applymovement 7, Common_Movement_FaceOriginalDirection
# 249 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	waitmovement 0
# 250 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	release
	end


MossdeepGameCorner_RareItemVendor::
# 256 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	lock
# 257 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	faceplayer
# 258 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_PINBALL_POINTS
# 259 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox MossdeepGameCorner_RareItemVendor_Text_0, MSGBOX_YESNO
# 260 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MossdeepGameCorner_RareItemVendor_2
# 267 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_PINBALL_POINTS, 0
	goto_if_gt MossdeepGameCorner_RareItemVendor_5
# 277 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox MossdeepGameCorner_RareItemVendor_Text_3
# 278 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
MossdeepGameCorner_RareItemVendor_1:
# 281 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	release
	end

MossdeepGameCorner_RareItemVendor_2:
# 262 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox MossdeepGameCorner_RareItemVendor_Text_1
# 263 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
	goto MossdeepGameCorner_RareItemVendor_1

MossdeepGameCorner_RareItemVendor_5:
# 269 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox MossdeepGameCorner_RareItemVendor_Text_2
# 270 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
# 271 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	subvar VAR_PINBALL_POINTS, 1
# 272 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	randomelement ITEM_ABILITY_CAPSULE, ITEM_ABILITY_PATCH, ITEM_SACRED_ASH, ITEM_MAX_ELIXER, ITEM_RARE_CANDY, ITEM_WISHING_STAR, ITEM_NUGGET, ITEM_HEART_SCALE, ITEM_LINKING_CORD, ITEM_FIRIUM_Z, ITEM_WATERIUM_Z, ITEM_GRASSIUM_Z
# 273 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	giveitem VAR_RESULT
	goto MossdeepGameCorner_RareItemVendor_1


MossdeepGameCorner_MoneyToPinballPointExchange::
# 287 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	lock
# 288 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	faceplayer
# 289 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	showmoneybox 0, 0
# 290 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox MossdeepGameCorner_MoneyToPinballPointExchange_Text_0, MSGBOX_YESNO
# 291 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MossdeepGameCorner_MoneyToPinballPointExchange_2
# 299 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	checkmoney 4000
# 300 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepGameCorner_MoneyToPinballPointExchange_5
# 308 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	playse SE_SHOP
# 309 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	removemoney 4000
# 310 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	updatemoneybox
# 311 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	delay 60
# 312 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	hidemoneybox
# 313 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox MossdeepGameCorner_MoneyToPinballPointExchange_Text_3
# 314 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
# 315 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	delay 30
# 316 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox MossdeepGameCorner_MoneyToPinballPointExchange_Text_4
# 317 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
# 318 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	addvar VAR_PINBALL_POINTS, 1
MossdeepGameCorner_MoneyToPinballPointExchange_1:
# 321 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	release
	end

MossdeepGameCorner_MoneyToPinballPointExchange_2:
# 293 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	hidemoneybox
# 294 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox MossdeepGameCorner_MoneyToPinballPointExchange_Text_1
# 295 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
	goto MossdeepGameCorner_MoneyToPinballPointExchange_1

MossdeepGameCorner_MoneyToPinballPointExchange_5:
# 302 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox MossdeepGameCorner_MoneyToPinballPointExchange_Text_2
# 303 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
# 304 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	hidemoneybox
	goto MossdeepGameCorner_MoneyToPinballPointExchange_1


MossdeepGameCorner_CheckPinballPoints::
# 327 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	lock
# 328 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_PINBALL_POINTS
# 329 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox MossdeepGameCorner_CheckPinballPoints_Text_0
# 330 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
# 331 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	release
	end


Minigame_TryMeowthPinballGame::
# 339 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	lock
# 340 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox Minigame_TryMeowthPinballGame_Text_0, MSGBOX_YESNO
# 341 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Minigame_TryMeowthPinballGame_2
# 347 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	callnative PlayMeowthPinballGame
# 348 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	waitstate
# 349 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Minigame_TryMeowthPinballGame_5
# 357 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox Minigame_TryMeowthPinballGame_Text_2
# 358 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
Minigame_TryMeowthPinballGame_4:
# 360 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	release
	end

Minigame_TryMeowthPinballGame_2:
# 343 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	release
	end

Minigame_TryMeowthPinballGame_5:
# 351 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox Minigame_TryMeowthPinballGame_Text_1
# 352 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
# 353 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	addvar VAR_PINBALL_POINTS, 1
	goto Minigame_TryMeowthPinballGame_4


Minigame_TryDiglettPinballGame::
# 366 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	lock
# 367 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox Minigame_TryDiglettPinballGame_Text_0, MSGBOX_YESNO
# 368 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Minigame_TryDiglettPinballGame_2
# 374 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	callnative PlayDiglettPinballGame
# 375 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	waitstate
# 376 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Minigame_TryDiglettPinballGame_5
# 384 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox Minigame_TryMeowthPinballGame_Text_2
# 385 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
Minigame_TryDiglettPinballGame_4:
# 387 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	release
	end

Minigame_TryDiglettPinballGame_2:
# 370 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	release
	end

Minigame_TryDiglettPinballGame_5:
# 378 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox Minigame_TryMeowthPinballGame_Text_1
# 379 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
# 380 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	addvar VAR_PINBALL_POINTS, 1
	goto Minigame_TryDiglettPinballGame_4


Minigame_TrySeelPinballGame::
# 393 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	lock
# 394 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox Minigame_TrySeelPinballGame_Text_0, MSGBOX_YESNO
# 395 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Minigame_TrySeelPinballGame_2
# 401 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	callnative PlaySeelPinballGame
# 402 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	waitstate
# 403 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Minigame_TrySeelPinballGame_5
# 411 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox Minigame_TryMeowthPinballGame_Text_2
# 412 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
Minigame_TrySeelPinballGame_4:
# 414 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	release
	end

Minigame_TrySeelPinballGame_2:
# 397 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	release
	end

Minigame_TrySeelPinballGame_5:
# 405 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox Minigame_TryMeowthPinballGame_Text_1
# 406 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
# 407 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	addvar VAR_PINBALL_POINTS, 1
	goto Minigame_TrySeelPinballGame_4


Minigame_TryGengarPinballGame::
# 420 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	lock
# 421 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox Minigame_TryGengarPinballGame_Text_0, MSGBOX_YESNO
# 422 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Minigame_TryGengarPinballGame_2
# 428 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	callnative PlayGengarPinballGame
# 429 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	waitstate
# 430 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Minigame_TryGengarPinballGame_5
# 438 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox Minigame_TryMeowthPinballGame_Text_2
# 439 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
Minigame_TryGengarPinballGame_4:
# 441 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	release
	end

Minigame_TryGengarPinballGame_2:
# 424 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	release
	end

Minigame_TryGengarPinballGame_5:
# 432 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox Minigame_TryMeowthPinballGame_Text_1
# 433 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
# 434 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	addvar VAR_PINBALL_POINTS, 1
	goto Minigame_TryGengarPinballGame_4


MossdeepGameCorner_OldMan_ShowPlayerAroundEvent_Text_0:
# 101 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Ohoho, a new face! Let me show you\n"
	.string "around the place!$"

MossdeepGameCorner_OldMan_ShowPlayerAroundEvent_Text_1:
# 111 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "These here are my buddies! We play\n"
	.string "PINBALL every day!$"

MossdeepGameCorner_OldMan_ShowPlayerAroundEvent_Text_2:
# 118 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Here are the PINBALL machines! Play\n"
	.string "these to get some fun prizes here!\p"
	.string "Each machine has a different PINBALL\n"
	.string "game, so make sure to try them all and\l"
	.string "find your favorite!$"

MossdeepGameCorner_OldMan_ShowPlayerAroundEvent_Text_3:
# 128 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "And here, you can exchange your\n"
	.string "PINBALL POINTS for rewards! How fun is\l"
	.string "that?!\p"
	.string "Now have fun!$"

MossdeepGameCorner_EventScript_OldMan_Text_0:
# 191 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Hey, champ! Make sure to check every\n"
	.string "PINBALL machine here. {COLOR GREEN}Each machine has\l"
	.string "a different PINBALL minigame{COLOR DARK_GRAY}!$"

MossdeepGameCorner_EventScript_Man4_Text_0:
# 203 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "I've been playing PINBALL here since I\n"
	.string "was a kid! I love collecting {COLOR GREEN}PINBALL\l"
	.string "POINTS{COLOR DARK_GRAY} and earning rare rewards!$"

MossdeepGameCorner_EventScript_Man4_Text_1:
# 207 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Looking for some extra luck, kid? Here's\n"
	.string "a li'l something.$"

MossdeepGameCorner_EventScript_Woman3_Text_0:
# 222 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Hehehe, boys get so mad when they lose\n"
	.string "at PINBALL! It's just a game!$"

MossdeepGameCorner_EventScript_Hiker_Text_0:
# 234 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Gah! The ball just fell right between\n"
	.string "the sticks! This DIGLETT PINBALL is\l"
	.string "tough!$"

MossdeepGameCorner_EventScript_Woman4_Text_0:
# 246 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "I really want to keep playing to earn\n"
	.string "some {COLOR GREEN}PINBALL POINTS{COLOR DARK_GRAY}! I want those rare\l"
	.string "items!\p"
	.string "Right now I'm trying the GENGAR PINBALL\n"
	.string "game. I think it's my favorite so far!$"

MossdeepGameCorner_RareItemVendor_Text_0:
# 259 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Yo! I've got a sweet deal goin' on. Come\n"
	.string "to me with a {COLOR GREEN}PINBALL POINT{COLOR DARK_GRAY}, and I'll give\l"
	.string "you a random rare item!\p"
	.string "Looks like you've got {STR_VAR_1}\n"
	.string "{COLOR GREEN}PINBALL POINTS{COLOR DARK_GRAY}. You in?$"

MossdeepGameCorner_RareItemVendor_Text_1:
# 262 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Want to go earn some more {COLOR GREEN}PINBALL\n"
	.string "POINTS{COLOR DARK_GRAY}? That's fine with me, have fun!$"

MossdeepGameCorner_RareItemVendor_Text_2:
# 269 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Alright, here ya go!$"

MossdeepGameCorner_RareItemVendor_Text_3:
# 277 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Hmm, looks like you need more {COLOR GREEN}PINBALL\n"
	.string "POINTS{COLOR DARK_GRAY}.$"

MossdeepGameCorner_MoneyToPinballPointExchange_Text_0:
# 290 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Struggling to win PINBALL, eh? I'll tell\n"
	.string "you what. For just ¥4000, I'll give you a\l"
	.string "{COLOR GREEN}PINBALL POINT{COLOR DARK_GRAY} right here! Interested?$"

MossdeepGameCorner_MoneyToPinballPointExchange_Text_1:
# 294 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Okay, good luck on the machines!$"

MossdeepGameCorner_MoneyToPinballPointExchange_Text_2:
# 302 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Looks like you're a bit short on funds.$"

MossdeepGameCorner_MoneyToPinballPointExchange_Text_3:
# 313 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Pleasure doing business! Here's what I\n"
	.string "owe you.$"

MossdeepGameCorner_MoneyToPinballPointExchange_Text_4:
# 316 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "{PLAYER} received 1 {COLOR GREEN}PINBALL POINT{COLOR DARK_GRAY}!$"

MossdeepGameCorner_CheckPinballPoints_Text_0:
# 329 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "{PLAYER} has {STR_VAR_1} {COLOR GREEN}PINBALL\n"
	.string "POINTS{COLOR DARK_GRAY}.$"

Minigame_TryMeowthPinballGame_Text_0:
# 340 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Play MEOWTH PINBALL?$"

Minigame_TryMeowthPinballGame_Text_1:
# 351 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Great job! {PLAYER} gained 1 PINBALL\n"
	.string "POINT!$"

Minigame_TryMeowthPinballGame_Text_2:
# 357 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Better luck next time!$"

Minigame_TryDiglettPinballGame_Text_0:
# 367 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Play DIGLETT PINBALL?$"

Minigame_TrySeelPinballGame_Text_0:
# 394 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Play SEEL PINBALL?$"

Minigame_TryGengarPinballGame_Text_0:
# 421 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Play GENGAR PINBALL?$"

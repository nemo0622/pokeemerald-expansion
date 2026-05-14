HauoliOutskirts_PlayersRoomActual_MapScripts::
# 2 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HauoliOutskirts_PlayersRoomActual_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HauoliOutskirts_PlayersRoomActual_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	map_script_2 VAR_INTRO_STATE, 0, HauoliOutskirts_PlayersRoomActual_Script_StartGame
	.2byte 0


HauoliOutskirts_PlayersRoomActual_Script_StartGame::
# 10 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	setvar VAR_INTRO_STATE, 1
# 12 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	lockall
# 13 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	applymovement LOCALID_ROOM_MEOWTH, HauoliOutskirts_PlayersRoomActual_Movement_MeowthGetsPlayer
# 14 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	waitmovement 0
# 15 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 16 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	waitmovement 0
# 17 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	setspeaker HauoliOutskirts_PlayersRoomActual_Script_StartGame_Text_0
# 18 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_StartGame_Text_1
# 19 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 20 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	waitmoncry
# 21 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	closemessage
# 22 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_HEART
# 23 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay 10
# 25 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_StartGame_Text_2
# 26 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	closemessage
# 28 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 29 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	waitmovement 0
# 30 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	applymovement LOCALID_ROOM_MEOWTH, HauoliOutskirts_PlayersRoomActual_Movement_MeowthLeaves
# 31 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	waitmovement 0
# 32 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	removeobject LOCALID_ROOM_MEOWTH
# 34 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	releaseall
	end


# 38 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
HauoliOutskirts_PlayersRoomActual_Movement_MeowthGetsPlayer:
# 40 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_up
# 40 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_up
# 40 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_up
# 40 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_up
# 40 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_up
# 41 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_right
# 42 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	jump_in_place_right
# 42 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	jump_in_place_right
# 43 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	face_right
# 44 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	step_end

# 46 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
HauoliOutskirts_PlayersRoomActual_Movement_MeowthLeaves:
# 48 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_left
# 49 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_down
# 49 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_down
# 50 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_right
# 50 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_right
# 50 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_right
# 51 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	jump_right
# 52 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay_16
# 53 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	face_left
# 54 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay_16
# 55 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_down
# 56 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay_16
# 57 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	face_right
# 58 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay_16
# 59 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	face_down
# 60 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay_16
# 61 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	emote_heart
# 62 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay_16
# 62 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay_16
# 63 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	jump_left
# 64 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_left
# 64 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_left
# 64 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_left
# 65 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_down
# 65 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_down
# 66 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay_16
# 66 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay_16
# 67 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	step_end

HauoliOutskirts_PlayersRoomActual_Script_StartGame_Text_0:
# 17 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "Mom's Meowth$"

HauoliOutskirts_PlayersRoomActual_Script_StartGame_Text_1:
# 18 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "Mroow!!$"

HauoliOutskirts_PlayersRoomActual_Script_StartGame_Text_2:
# 25 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "Meowth is covered in dust... It must\n"
	.string "have been rolling around in the moving\l"
	.string "boxes.\p"
	.string "Mom probably hasn't started on those.\n"
	.string "Better check it out!$"

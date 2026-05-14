Route_01_MapScripts::
	.byte 0


Route_01_Trigger_YungoosEncounter_Left::
# 7 "data//maps/Route_01/scripts.pory"
	lockall
# 8 "data//maps/Route_01/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_QUESTION
# 9 "data//maps/Route_01/scripts.pory"
	delay 10
# 10 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 11 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 12 "data//maps/Route_01/scripts.pory"
	goto Route_01_Script_YungoosEncounter
	end


Route_01_Trigger_YungoosEncounter_Right::
# 17 "data//maps/Route_01/scripts.pory"
	lockall
# 18 "data//maps/Route_01/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_QUESTION
# 19 "data//maps/Route_01/scripts.pory"
	delay 10
# 20 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 21 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 22 "data//maps/Route_01/scripts.pory"
	goto Route_01_Script_YungoosEncounter
	end


Route_01_Trigger_YungoosEncounter_Middle::
# 27 "data//maps/Route_01/scripts.pory"
	lockall
# 28 "data//maps/Route_01/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_QUESTION
# 29 "data//maps/Route_01/scripts.pory"
	delay 10
# 30 "data//maps/Route_01/scripts.pory"
	goto Route_01_Script_YungoosEncounter
	end


Route_01_Script_YungoosEncounter::
# 36 "data//maps/Route_01/scripts.pory"
	applymovement LOCALID_PLAYER, Route_01_Script_YungoosEncounter_Movement_0
# 37 "data//maps/Route_01/scripts.pory"
	waitmovement 0
# 39 "data//maps/Route_01/scripts.pory"
	clearflag FLAG_HIDE_YUNGOOS_ROUTE_01
# 40 "data//maps/Route_01/scripts.pory"
	addobject 1
# 41 "data//maps/Route_01/scripts.pory"
	applymovement 1, Route_01_Script_YungoosEncounter_Movement_1
# 42 "data//maps/Route_01/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_EXCLAM
# 43 "data//maps/Route_01/scripts.pory"
	waitmovement 1
# 45 "data//maps/Route_01/scripts.pory"
	msgbox Route_01_Script_YungoosEncounter_Text_0
# 47 "data//maps/Route_01/scripts.pory"
	releaseall
	end


# 36 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_0:
# 36 "data//maps/Route_01/scripts.pory"
	walk_up
# 36 "data//maps/Route_01/scripts.pory"
	walk_up
# 36 "data//maps/Route_01/scripts.pory"
	walk_up
# 36 "data//maps/Route_01/scripts.pory"
	walk_up
# 36 "data//maps/Route_01/scripts.pory"
	delay_16
# 36 "data//maps/Route_01/scripts.pory"
	delay_16
# 36 "data//maps/Route_01/scripts.pory"
	delay_16
# 36 "data//maps/Route_01/scripts.pory"
	delay_16
# 36 "data//maps/Route_01/scripts.pory"
	face_left
# 36 "data//maps/Route_01/scripts.pory"
	delay_16
# 36 "data//maps/Route_01/scripts.pory"
	delay_16
# 36 "data//maps/Route_01/scripts.pory"
	face_right
# 36 "data//maps/Route_01/scripts.pory"
	delay_16
# 36 "data//maps/Route_01/scripts.pory"
	delay_16
# 36 "data//maps/Route_01/scripts.pory"
	face_up
# 36 "data//maps/Route_01/scripts.pory"
	step_end

# 41 "data//maps/Route_01/scripts.pory"
Route_01_Script_YungoosEncounter_Movement_1:
# 41 "data//maps/Route_01/scripts.pory"
	jump_left
# 41 "data//maps/Route_01/scripts.pory"
	delay_16
# 41 "data//maps/Route_01/scripts.pory"
	delay_16
# 41 "data//maps/Route_01/scripts.pory"
	walk_fast_down
# 41 "data//maps/Route_01/scripts.pory"
	walk_fast_down
# 41 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 41 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 41 "data//maps/Route_01/scripts.pory"
	jump_in_place_down
# 41 "data//maps/Route_01/scripts.pory"
	step_end

Route_01_Script_YungoosEncounter_Text_0:
# 45 "data//maps/Route_01/scripts.pory"
	.string "Yungoos is here uh oh!$"

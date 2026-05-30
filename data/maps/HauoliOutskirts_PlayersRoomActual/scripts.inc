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

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings::
# 74 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	lock
# 75 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	setspeaker HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_0
# 76 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	playmoncry SPECIES_ORANGURU, CRY_MODE_NORMAL
# 77 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_1
# 78 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	waitmoncry
# 79 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	closemessage
# 81 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_2, MSGBOX_YESNO
# 82 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	closemessage
# 85 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_2
HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_1:
# 115 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	release
	end

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_2:
# 88 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_3
# 89 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	closemessage
# 90 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay 10
# 93 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_4, MSGBOX_YESNO
# 94 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	closemessage
# 95 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_5
# 104 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	clearflag FLAG_USE_SCALEMONS
# 105 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	special RefreshAllMonStats
# 106 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_6
# 107 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	closemessage
HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_4:
# 111 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_7
# 112 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	closemessage
	goto HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_1

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_5:
# 97 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	setflag FLAG_USE_SCALEMONS
# 98 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	special RefreshAllMonStats
# 99 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_5
# 100 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	closemessage
	goto HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_4


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

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_0:
# 75 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "Oranguru$"

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_1:
# 77 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "Eeh-ee...!$"

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_2:
# 81 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "It's Grandpa Samson's Oranguru! It's\n"
	.string "always writing in books.\p"
	.string "It looks like this is a\n"
	.string "Choose-Your-Own-Adventure type of\l"
	.string "book. Help Oranguru fill it out?$"

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_3:
# 88 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "The cover says to {COLOR RED}slow down and read\n"
	.string "each question{COLOR DARK_GRAY} because they can\l"
	.string "{COLOR RED}significantly change the gameplay\l"
	.string "experience{COLOR DARK_GRAY}.$"

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_4:
# 93 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "Question 1: Enable {COLOR GREEN}Scalemons{COLOR DARK_GRAY} Ruleset?\p"
	.string "Scalemons uses math to change almost\n"
	.string "all Pokémon (aside from Legendary\l"
	.string "Pokémon or Ultra Beasts) to have a Base\l"
	.string "Stat Total around 500 (excluding HP).\l"
	.string "This lets {COLOR GREEN}weaker Pokémon thrive{COLOR DARK_GRAY} by\l"
	.string "boosting their stats, but {COLOR BLUE}weakens game\l"
	.string "balance{COLOR DARK_GRAY} by making Pokémon\l"
	.string "unexpectedly strong or weak.\p"
	.string "Should {COLOR GREEN}Scalemons{COLOR DARK_GRAY} Ruleset be {COLOR GREEN}enabled{COLOR DARK_GRAY}?$"

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_5:
# 99 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "{COLOR GREEN}Scalemons Ruleset has been enabled.{COLOR DARK_GRAY}\n"
	.string "Pokémon's stats will be scaled to\l"
	.string "approximately 500.$"

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_6:
# 106 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "{COLOR BLUE}Scalemons Ruleset has been disabled.{COLOR DARK_GRAY}\n"
	.string "Pokémon's stats will be normal.$"

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_7:
# 111 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "Looks like the page is finished!\n"
	.string "Oranguru seems happy!$"

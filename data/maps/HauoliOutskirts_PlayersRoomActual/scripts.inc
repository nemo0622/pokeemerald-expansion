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
	createplayerfieldmugshot EMOTION_LAUGH
# 26 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_StartGame_Text_2
# 27 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	removefieldmugshot
# 28 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	createplayerfieldmugshot EMOTION_NORMAL
# 29 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_StartGame_Text_3
# 30 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	closemessage
# 31 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	removefieldmugshot
# 33 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 34 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	waitmovement 0
# 35 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	applymovement LOCALID_ROOM_MEOWTH, HauoliOutskirts_PlayersRoomActual_Movement_MeowthLeaves
# 36 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	waitmovement 0
# 37 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	removeobject LOCALID_ROOM_MEOWTH
# 39 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	releaseall
	end


# 43 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
HauoliOutskirts_PlayersRoomActual_Movement_MeowthGetsPlayer:
# 45 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_up
# 45 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_up
# 45 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_up
# 45 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_up
# 45 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_up
# 46 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_right
# 47 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	jump_in_place_right
# 47 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	jump_in_place_right
# 48 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	face_right
# 49 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	step_end

# 51 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
HauoliOutskirts_PlayersRoomActual_Movement_MeowthLeaves:
# 53 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_left
# 54 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_down
# 54 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_down
# 55 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_right
# 55 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_right
# 55 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_fast_right
# 56 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	jump_right
# 57 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay_16
# 58 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	face_left
# 59 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay_16
# 60 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_down
# 61 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay_16
# 62 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	face_right
# 63 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay_16
# 64 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	face_down
# 65 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay_16
# 66 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	emote_heart
# 67 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay_16
# 67 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay_16
# 68 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	jump_left
# 69 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_left
# 69 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_left
# 69 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_left
# 70 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_down
# 70 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	walk_down
# 71 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay_16
# 71 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay_16
# 72 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	step_end

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings::
# 79 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	lock
# 80 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	setspeaker HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_0
# 81 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	playmoncry SPECIES_ORANGURU, CRY_MODE_NORMAL
# 82 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_1
# 83 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	waitmoncry
# 84 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	closemessage
# 86 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	createplayerfieldmugshot
# 87 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_2
# 88 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	closemessage
# 89 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_3, MSGBOX_YESNO
# 90 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	closemessage
# 93 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_2
HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_1:
# 160 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	release
	end

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_2:
# 96 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_4
# 97 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	closemessage
# 98 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay 10
# 101 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	message HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_5
# 102 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	waitmessage
# 103 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	multichoice 19, 6, MULTI_DIFFICULTY_MODE, TRUE
# 104 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	switch VAR_RESULT
# 106 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	case 0, HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_6
# 109 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	case 1, HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_7
# 112 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	case 2, HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_8
HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_4:
# 116 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	closemessage
# 117 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay 10
# 120 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_9, MSGBOX_YESNO
# 121 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	closemessage
# 122 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_10
# 130 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	clearflag FLAG_FORCE_DOUBLE_BATTLES
# 131 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_11
# 132 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	closemessage
HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_9:
# 134 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay 10
# 137 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_12, MSGBOX_YESNO
# 138 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	closemessage
# 139 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_14
# 148 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	clearflag FLAG_USE_SCALEMONS
# 149 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	special RefreshAllMonStats
# 150 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_14
# 151 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	closemessage
HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_13:
# 153 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	delay 10
# 156 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_15
# 157 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	closemessage
	goto HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_1

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_6:
# 107 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	setdifficulty DIFFICULTY_NORMAL
# 108 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_6
	goto HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_4

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_7:
# 110 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	setdifficulty DIFFICULTY_HARD
# 111 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_7
	goto HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_4

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_8:
# 113 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	setdifficulty DIFFICULTY_EXTREME
# 114 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_8
	goto HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_4

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_10:
# 124 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	setflag FLAG_FORCE_DOUBLE_BATTLES
# 125 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_10
# 126 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	closemessage
	goto HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_9

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_14:
# 141 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	setflag FLAG_USE_SCALEMONS
# 142 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	special RefreshAllMonStats
# 143 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	msgbox HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_13
# 144 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	closemessage
	goto HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_13


HauoliOutskirts_PlayersRoomActual_Script_StartGame_Text_0:
# 17 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "Mom's Meowth$"

HauoliOutskirts_PlayersRoomActual_Script_StartGame_Text_1:
# 18 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "Mroow!!$"

HauoliOutskirts_PlayersRoomActual_Script_StartGame_Text_2:
# 26 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Meowth is covered in dust... It must\n"
	.string "have been rolling around in the moving\l"
	.string "boxes.$"

HauoliOutskirts_PlayersRoomActual_Script_StartGame_Text_3:
# 29 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Mom probably hasn't started on those.\n"
	.string "Better check it out!$"

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_0:
# 80 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "Oranguru$"

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_1:
# 82 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "Eeh-ee...!$"

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_2:
# 87 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}It's Grandpa Samson's Oranguru! Why's\n"
	.string "it always reading books?$"

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_3:
# 89 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "It looks like this is a\n"
	.string "Choose-Your-Own-Adventure type of\l"
	.string "book. Help Oranguru fill it out?$"

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_4:
# 96 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "The cover says to {COLOR RED}slow down and read\n"
	.string "each question{COLOR DARK_GRAY} because they can\l"
	.string "{COLOR RED}significantly change the gameplay\l"
	.string "experience{COLOR DARK_GRAY}.$"

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_5:
# 101 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "Question 1: Select {COLOR GREEN}Game Difficulty{COLOR DARK_GRAY}!\p"
	.string "{COLOR GREEN}Normal Mode{COLOR DARK_GRAY}: The standard way to play\n"
	.string "Pokémon Alolan Seaglass. Slightly more\l"
	.string "difficult than modern Pokémon games,\l"
	.string "but still a mostly relaxed gameplay\l"
	.string "experience.\p"
	.string "{COLOR BLUE}Hard Mode{COLOR DARK_GRAY}: A more difficult experience\n"
	.string "for those who like a challenge, but still\l"
	.string "want to have fun. Trainers use higher\l"
	.string "leveled Pokémon and make smarter\l"
	.string "choices.\p"
	.string "{COLOR RED}Extreme Mode{COLOR DARK_GRAY}: A difficulty level only\n"
	.string "for the most experienced players.\l"
	.string "Trainers use stronger teams with\l"
	.string "borderline unfair movesets and\l"
	.string "intelligence, making every encounter an\l"
	.string "uphill battle.\p"
	.string "Which {COLOR GREEN}Difficulty Mode{COLOR DARK_GRAY} should be\n"
	.string "selected?$"

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_6:
# 108 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "The Difficulty has been set to {COLOR GREEN}Normal{COLOR DARK_GRAY}!$"

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_7:
# 111 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "The Difficulty has been set to {COLOR BLUE}Hard{COLOR DARK_GRAY}!$"

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_8:
# 114 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "The Difficulty has been set to {COLOR RED}Extreme{COLOR DARK_GRAY}!$"

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_9:
# 120 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "Question 2: Enable {COLOR GREEN}All Double Battles{COLOR DARK_GRAY}\n"
	.string "Mode?\p"
	.string "This setting turns most Trainer battles\n"
	.string "into Double Battles. This makes the\l"
	.string "battles more {COLOR GREEN}strategically interesting{COLOR DARK_GRAY},\l"
	.string "but may {COLOR BLUE}not be as well balanced{COLOR DARK_GRAY} due to\l"
	.string "unexpected interactions or randomized\l"
	.string "teams.\p"
	.string "Should {COLOR GREEN}All Double Battles{COLOR DARK_GRAY} Mode be\n"
	.string "{COLOR GREEN}enabled{COLOR DARK_GRAY}?$"

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_10:
# 125 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "{COLOR GREEN}All Double Battles mode has been\n"
	.string "enabled.{COLOR DARK_GRAY} Most Trainers will\l"
	.string "automatically load as Double Battles.$"

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_11:
# 131 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "{COLOR BLUE}All Double Battles has been disabled.{COLOR DARK_GRAY}\n"
	.string "Pokémon Battles will play as designed.$"

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_12:
# 137 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "Question 3: Enable {COLOR GREEN}Scalemons{COLOR DARK_GRAY} Ruleset?\p"
	.string "Scalemons uses math to change almost\n"
	.string "all Pokémon (aside from Legendary\l"
	.string "Pokémon or Ultra Beasts) to have a Base\l"
	.string "Stat Total around 500 (excluding HP).\l"
	.string "This lets {COLOR GREEN}weaker Pokémon thrive{COLOR DARK_GRAY} by\l"
	.string "boosting their stats, but {COLOR BLUE}weakens game\l"
	.string "balance{COLOR DARK_GRAY} by making Pokémon\l"
	.string "unexpectedly strong or weak.\p"
	.string "Should {COLOR GREEN}Scalemons{COLOR DARK_GRAY} Ruleset be {COLOR GREEN}enabled{COLOR DARK_GRAY}?$"

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_13:
# 143 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "{COLOR GREEN}Scalemons Ruleset has been enabled.{COLOR DARK_GRAY}\n"
	.string "Pokémon's stats will be scaled to\l"
	.string "approximately 500.$"

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_14:
# 150 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "{COLOR BLUE}Scalemons Ruleset has been disabled.{COLOR DARK_GRAY}\n"
	.string "Pokémon's stats will be normal.$"

HauoliOutskirts_PlayersRoomActual_Script_AlolanSeaglassSettings_Text_15:
# 156 "data//maps/HauoliOutskirts_PlayersRoomActual/scripts.pory"
	.string "Looks like the page is finished!\n"
	.string "Oranguru seems happy!$"

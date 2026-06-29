HauoliOutskirts_KukuiLab_MapScripts::
	.byte 0


HauoliOutskirts_KukuiLab_Script_KukuiGivesDex::
# 5 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	lockall
# 6 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 7 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 8 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 20
# 10 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement 1, HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_0
# 11 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitmovement 0
# 12 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 10
# 13 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	setspeaker HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_0
# 14 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	msgbox HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_1
# 15 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	closemessage
# 16 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 10
# 17 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	emote 2, EMOTE_EXCLAM
# 18 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 10
# 19 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 20 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitmovement 0
# 21 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	setspeaker HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_2
# 22 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	msgbox HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_3
# 23 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	closemessage
# 24 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 10
# 25 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement 1, HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_1
# 26 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitmovement 0
# 27 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	setspeaker HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_0
# 28 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	msgbox HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_4
# 29 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	closemessage
# 30 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 20
# 31 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 32 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitmovement 0
# 33 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	setspeaker HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_2
# 34 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	msgbox HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_5
# 35 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	closemessage
# 36 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 20
# 37 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement 2, HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_2
# 38 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitmovement 0
# 39 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	setspeaker HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_2
# 40 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	msgbox HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_6
# 41 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	closemessage
# 44 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement 2, HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_3
# 45 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_4
# 46 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitmovement 0
# 47 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 20
# 48 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	emote 3, EMOTE_HEART
# 49 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 20
# 50 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement 2, HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_5
# 51 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitmovement 0
# 52 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 53 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitmovement 0
# 54 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	setspeaker HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_2
# 55 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	msgbox HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_7
# 56 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	closemessage
# 59 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 30
# 60 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 61 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 62 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	message HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_8
# 63 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitmessage
# 64 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitfanfare
# 65 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	closemessage
# 66 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	setspeaker HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_2
# 67 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	msgbox HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_9
# 68 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	closemessage
# 71 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 10
# 72 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement 1, HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_6
# 73 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement 4, HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_7
# 74 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitmovement 1
# 75 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 76 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitmovement 0
# 77 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 10
# 78 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	setspeaker HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_0
# 79 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	msgbox HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_10
# 80 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	closemessage
# 81 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 82 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement 2, HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_8
# 83 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitmovement 0
# 84 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	setspeaker HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_2
# 85 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	msgbox HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_11
# 86 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	closemessage
# 88 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 10
# 89 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 90 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 30
# 91 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	setflag FLAG_HIDE_LILLIE_HAUOLI_OUTSKIRTS
# 92 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	removeobject 1
# 93 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	removeobject 4
# 94 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 30
# 95 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 96 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 20
# 98 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	startsubquest QUEST_01, SUB_QUEST_6
# 100 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	releaseall
	end


# 10 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_0:
# 10 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	jump_in_place_up
# 10 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	jump_in_place_up
# 10 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	step_end

# 25 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_1:
# 25 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_in_place_up
# 25 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_in_place_up
# 25 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	step_end

# 37 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_2:
# 37 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	jump_in_place_down
# 37 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	jump_in_place_down
# 37 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	step_end

# 44 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_3:
# 44 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_up
# 44 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_left
# 44 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_up
# 44 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_up
# 44 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	step_end

# 45 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_4:
# 45 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_up
# 45 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_up
# 45 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_right
# 45 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_right
# 45 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_right
# 45 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	face_right
# 45 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	step_end

# 50 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_5:
# 50 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_down
# 50 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_down
# 50 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_down
# 50 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_right
# 50 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	step_end

# 72 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_6:
# 72 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_up
# 72 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_right
# 72 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_right
# 72 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	face_up
# 72 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	step_end

# 73 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_7:
# 73 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_up
# 73 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_up
# 73 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_right
# 73 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	step_end

# 82 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_8:
# 82 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_in_place_right
# 82 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_in_place_right
	step_end

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_0:
# 13 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "Lillie$"

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_1:
# 14 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "P-Professor! {PLAYER}'s here!$"

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_2:
# 21 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "Prof. Kukui$"

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_3:
# 22 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "Kahaha, perfect timing! {COLOR BLUE}Rockruff{COLOR DARK_GRAY}'s Rock\n"
	.string "Slide can target two opponents at once.\l"
	.string "Let's test that out together!$"

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_4:
# 28 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "Ahem... The surprise? Do you remember?$"

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_5:
# 34 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "Um...?$"

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_6:
# 40 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "Ha, right! {PLAYER}, make yourself\n"
	.string "comfortable. Lemme get you something!$"

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_7:
# 55 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "Here, I just got this delivered. Bring\n"
	.string "out the Rotom Dex for a sec!$"

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_8:
# 62 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "The DexNav was added to the Rotom Dex!$"

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_9:
# 67 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "The {COLOR GREEN}DexNav{COLOR DARK_GRAY} add-on lets you see what\n"
	.string "Pokémon can be found in your area. You\l"
	.string "can even choose a Pokémon to chase\l"
	.string "down, yeah!\p"
	.string "You can use the DexNav by {COLOR BLUE}pressing\n"
	.string "Select{COLOR DARK_GRAY} in the Rotom Dex Menu.$"

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_10:
# 79 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "Professor Kukui told me about the {COLOR GREEN}Alola\n"
	.string "Leo Trainer School{COLOR DARK_GRAY}, just west of here.\l"
	.string "He said it's a good place to learn about\l"
	.string "being a Trainer, and, well...\p"
	.string "Y-You should {COLOR GREEN}meet me there{COLOR DARK_GRAY} before you\n"
	.string "fully begin the Island Challenge! We\l"
	.string "could learn about training Pokémon\l"
	.string "together!$"

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_11:
# 85 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "That's a great idea! You should learn\n"
	.string "more about Pokémon and the Alola\l"
	.string "Region before you venture off on your\l"
	.string "own.$"

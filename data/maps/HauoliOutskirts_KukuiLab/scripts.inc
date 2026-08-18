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
	createfieldmugshot MUGSHOT_LILLIE_HAT
# 15 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	msgbox HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_1
# 16 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	closemessage
# 17 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 10
# 18 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	emote 2, EMOTE_EXCLAM
# 19 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 10
# 20 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 21 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitmovement 0
# 22 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	setspeaker HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_2
# 23 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_KUKUI, EMOTION_LAUGH
# 24 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	msgbox HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_3
# 25 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	closemessage
# 26 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 10
# 27 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement 1, HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_1
# 28 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitmovement 0
# 29 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	setspeaker HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_0
# 30 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT, EMOTION_INTENSE
# 31 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	msgbox HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_4
# 32 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	closemessage
# 33 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 20
# 34 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 35 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitmovement 0
# 36 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	setspeaker HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_2
# 37 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_KUKUI, EMOTION_INTENSE
# 38 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	msgbox HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_5
# 39 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	closemessage
# 40 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 20
# 41 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement 2, HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_2
# 42 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitmovement 0
# 43 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	setspeaker HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_2
# 44 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_KUKUI
# 45 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	msgbox HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_6
# 46 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	closemessage
# 49 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement 2, HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_3
# 50 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_4
# 51 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitmovement 0
# 52 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 20
# 53 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	emote 3, EMOTE_HEART
# 54 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 20
# 55 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement 2, HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_5
# 56 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitmovement 0
# 57 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 58 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitmovement 0
# 59 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	setspeaker HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_2
# 60 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_KUKUI
# 61 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	msgbox HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_7
# 62 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	closemessage
# 65 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 30
# 66 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 67 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 68 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	createplayerfieldmugshot
# 69 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	message HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_8
# 70 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitmessage
# 71 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitfanfare
# 72 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	closemessage
# 73 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	setspeaker HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_2
# 74 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_KUKUI
# 75 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	msgbox HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_9
# 76 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	closemessage
# 79 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 10
# 80 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement 1, HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_6
# 81 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement 4, HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_7
# 82 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitmovement 1
# 83 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 84 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitmovement 0
# 85 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 10
# 86 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	setspeaker HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_0
# 87 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT
# 88 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	msgbox HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_10
# 89 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	closemessage
# 90 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 91 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	applymovement 2, HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_8
# 92 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	waitmovement 0
# 93 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	setspeaker HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_2
# 94 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_KUKUI
# 95 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	msgbox HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_11
# 96 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	closemessage
# 98 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 10
# 99 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 100 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 30
# 101 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	setflag FLAG_HIDE_LILLIE_HAUOLI_OUTSKIRTS
# 102 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	removeobject 1
# 103 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	removeobject 4
# 104 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 30
# 105 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 106 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	delay 20
# 108 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	startsubquest QUEST_WELCOME_TO_ALOLA, QUEST_WELCOME_TO_ALOLA_SUBQUEST_6
# 110 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
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

# 27 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_1:
# 27 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_in_place_up
# 27 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_in_place_up
# 27 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	step_end

# 41 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_2:
# 41 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	jump_in_place_down
# 41 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	jump_in_place_down
# 41 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	step_end

# 49 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_3:
# 49 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_up
# 49 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_left
# 49 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_up
# 49 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_up
# 49 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	step_end

# 50 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_4:
# 50 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_up
# 50 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_up
# 50 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_right
# 50 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_right
# 50 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_right
# 50 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	face_right
# 50 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	step_end

# 55 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_5:
# 55 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_down
# 55 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_down
# 55 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_down
# 55 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_right
# 55 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	step_end

# 80 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_6:
# 80 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_up
# 80 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_right
# 80 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_right
# 80 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	face_up
# 80 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	step_end

# 81 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_7:
# 81 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_up
# 81 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_up
# 81 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_right
# 81 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	step_end

# 91 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Movement_8:
# 91 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_in_place_right
# 91 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	walk_in_place_right
	step_end

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_0:
# 13 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "Lillie$"

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_1:
# 15 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "P-Professor! {PLAYER}'s here!$"

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_2:
# 22 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "Prof. Kukui$"

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_3:
# 24 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "Kahaha, perfect timing! {COLOR BLUE}Rockruff{COLOR DARK_GRAY}'s Rock\n"
	.string "Slide can target two opponents at once.\l"
	.string "Let's test that out together!$"

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_4:
# 31 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "Ahem... The surprise? Do you remember?$"

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_5:
# 38 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "Um...?$"

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_6:
# 45 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "Ha, right! {PLAYER}, make yourself\n"
	.string "comfortable. Lemme get you something!$"

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_7:
# 61 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "Here, I just got this delivered. Bring\n"
	.string "out the Rotom Dex for a sec!$"

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_8:
# 69 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Woah! It's the DexNav feature\n"
	.string "Grandpa's been talking about!$"

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_9:
# 75 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "The {COLOR GREEN}DexNav{COLOR DARK_GRAY} add-on lets you see what\n"
	.string "Pokémon can be found in your area. You\l"
	.string "can even choose a Pokémon to chase\l"
	.string "down, yeah!\p"
	.string "You can use the DexNav by {COLOR BLUE}pressing\n"
	.string "Select{COLOR DARK_GRAY} in the Rotom Dex Menu.$"

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_10:
# 88 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "Professor Kukui told me about the {COLOR GREEN}Alola\n"
	.string "Leo Trainer School{COLOR DARK_GRAY}, just west of here.\l"
	.string "He said it's a good place to learn about\l"
	.string "being a Trainer, and, well...\p"
	.string "Y-You should {COLOR GREEN}meet me there{COLOR DARK_GRAY} before you\n"
	.string "fully begin the Island Challenge! We\l"
	.string "could learn about training Pokémon\l"
	.string "together!$"

HauoliOutskirts_KukuiLab_Script_KukuiGivesDex_Text_11:
# 95 "data//maps/HauoliOutskirts_KukuiLab/scripts.pory"
	.string "That's a great idea! You should learn\n"
	.string "more about Pokémon and the Alola\l"
	.string "Region before you venture off on your\l"
	.string "own.$"

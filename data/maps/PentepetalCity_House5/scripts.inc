PentepetalCity_House5_MapScripts::
	.byte 0


PentepetalCity_House5_EventScript_Girl::
# 5 "data/maps/PentepetalCity_House5/scripts.pory"
	lock
# 6 "data/maps/PentepetalCity_House5/scripts.pory"
	faceplayer
# 7 "data/maps/PentepetalCity_House5/scripts.pory"
	speakername PentepetalCity_House5_EventScript_Girl_Text_0
# 8 "data/maps/PentepetalCity_House5/scripts.pory"
	msgbox PentepetalCity_House5_EventScript_Girl_Text_1
# 9 "data/maps/PentepetalCity_House5/scripts.pory"
	closemessage
# 10 "data/maps/PentepetalCity_House5/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 11 "data/maps/PentepetalCity_House5/scripts.pory"
	waitmovement 0
# 12 "data/maps/PentepetalCity_House5/scripts.pory"
	release
	end


PentepetalCity_House5_EventScript_OldMan::
# 18 "data/maps/PentepetalCity_House5/scripts.pory"
	lock
# 19 "data/maps/PentepetalCity_House5/scripts.pory"
	faceplayer
# 20 "data/maps/PentepetalCity_House5/scripts.pory"
	speakername PentepetalCity_House5_EventScript_OldMan_Text_0
# 21 "data/maps/PentepetalCity_House5/scripts.pory"
	msgbox PentepetalCity_House5_EventScript_OldMan_Text_1
# 22 "data/maps/PentepetalCity_House5/scripts.pory"
	closemessage
# 23 "data/maps/PentepetalCity_House5/scripts.pory"
	release
	end


PentepetalCity_House5_EventScript_Florges::
# 29 "data/maps/PentepetalCity_House5/scripts.pory"
	lock
# 30 "data/maps/PentepetalCity_House5/scripts.pory"
	faceplayer
# 31 "data/maps/PentepetalCity_House5/scripts.pory"
	speakername PentepetalCity_House5_EventScript_Florges_Text_0
# 32 "data/maps/PentepetalCity_House5/scripts.pory"
	playmoncry SPECIES_FLORGES, CRY_MODE_NORMAL
# 33 "data/maps/PentepetalCity_House5/scripts.pory"
	msgbox PentepetalCity_House5_EventScript_Florges_Text_1
# 34 "data/maps/PentepetalCity_House5/scripts.pory"
	waitmoncry
# 35 "data/maps/PentepetalCity_House5/scripts.pory"
	closemessage
# 36 "data/maps/PentepetalCity_House5/scripts.pory"
	release
	end


PentepetalCity_House5_EventScript_Woman::
# 42 "data/maps/PentepetalCity_House5/scripts.pory"
	lock
# 43 "data/maps/PentepetalCity_House5/scripts.pory"
	faceplayer
# 44 "data/maps/PentepetalCity_House5/scripts.pory"
	speakername PentepetalCity_House5_EventScript_Woman_Text_0
# 47 "data/maps/PentepetalCity_House5/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_ETERNAL_FLOETTE_PLOT
# 48 "data/maps/PentepetalCity_House5/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PentepetalCity_House5_EventScript_Woman_2
# 57 "data/maps/PentepetalCity_House5/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_ETERNAL_FLOETTE_PLOT
# 58 "data/maps/PentepetalCity_House5/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PentepetalCity_House5_EventScript_Woman_5
# 68 "data/maps/PentepetalCity_House5/scripts.pory"
	msgbox PentepetalCity_House5_EventScript_Woman_Text_3
# 69 "data/maps/PentepetalCity_House5/scripts.pory"
	closemessage
# 71 "data/maps/PentepetalCity_House5/scripts.pory"
	checkitem ITEM_WISHING_STAR, 12
# 72 "data/maps/PentepetalCity_House5/scripts.pory"
	delay 30
# 73 "data/maps/PentepetalCity_House5/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PentepetalCity_House5_EventScript_Woman_8
# 81 "data/maps/PentepetalCity_House5/scripts.pory"
	removeitem ITEM_WISHING_STAR, 12
# 82 "data/maps/PentepetalCity_House5/scripts.pory"
	emote 2, EMOTE_EXCLAM
# 83 "data/maps/PentepetalCity_House5/scripts.pory"
	speakername PentepetalCity_House5_EventScript_Woman_Text_0
# 84 "data/maps/PentepetalCity_House5/scripts.pory"
	msgbox PentepetalCity_House5_EventScript_Woman_Text_5
# 85 "data/maps/PentepetalCity_House5/scripts.pory"
	closemessage
# 87 "data/maps/PentepetalCity_House5/scripts.pory"
	emote 2, EMOTE_EXCLAM
# 88 "data/maps/PentepetalCity_House5/scripts.pory"
	emote OBJ_EVENT_ID_PLAYER, EMOTE_EXCLAM
# 89 "data/maps/PentepetalCity_House5/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 2
# 90 "data/maps/PentepetalCity_House5/scripts.pory"
	delay 15
# 91 "data/maps/PentepetalCity_House5/scripts.pory"
	clearflag FLAG_HIDE_FLOETTE_ETERNAL_PENTEPETAL
# 92 "data/maps/PentepetalCity_House5/scripts.pory"
	addobject 5
# 93 "data/maps/PentepetalCity_House5/scripts.pory"
	delay 15
# 94 "data/maps/PentepetalCity_House5/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 95 "data/maps/PentepetalCity_House5/scripts.pory"
	delay 10
# 97 "data/maps/PentepetalCity_House5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 98 "data/maps/PentepetalCity_House5/scripts.pory"
	applymovement 5, PentepetalCity_House5_Movement_FloetteApproaches
# 99 "data/maps/PentepetalCity_House5/scripts.pory"
	waitmovement 0
# 100 "data/maps/PentepetalCity_House5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 101 "data/maps/PentepetalCity_House5/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 102 "data/maps/PentepetalCity_House5/scripts.pory"
	waitmovement 0
# 103 "data/maps/PentepetalCity_House5/scripts.pory"
	speakername PentepetalCity_House5_EventScript_Woman_Text_0
# 104 "data/maps/PentepetalCity_House5/scripts.pory"
	msgbox PentepetalCity_House5_EventScript_Woman_Text_6
# 105 "data/maps/PentepetalCity_House5/scripts.pory"
	closemessage
# 106 "data/maps/PentepetalCity_House5/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 107 "data/maps/PentepetalCity_House5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 108 "data/maps/PentepetalCity_House5/scripts.pory"
	applymovement 5, PentepetalCity_House5_Movement_FloetteGoesToPlayer
# 109 "data/maps/PentepetalCity_House5/scripts.pory"
	waitmovement 0
# 110 "data/maps/PentepetalCity_House5/scripts.pory"
	delay 15
# 111 "data/maps/PentepetalCity_House5/scripts.pory"
	speakername PentepetalCity_House5_EventScript_Woman_Text_0
# 112 "data/maps/PentepetalCity_House5/scripts.pory"
	msgbox PentepetalCity_House5_EventScript_Woman_Text_7
# 113 "data/maps/PentepetalCity_House5/scripts.pory"
	closemessage
# 114 "data/maps/PentepetalCity_House5/scripts.pory"
	delay 10
# 115 "data/maps/PentepetalCity_House5/scripts.pory"
	applymovement 5, Common_Movement_JumpInPlaceLeft
# 116 "data/maps/PentepetalCity_House5/scripts.pory"
	waitmovement 0
# 117 "data/maps/PentepetalCity_House5/scripts.pory"
	delay 10
# 119 "data/maps/PentepetalCity_House5/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 120 "data/maps/PentepetalCity_House5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 121 "data/maps/PentepetalCity_House5/scripts.pory"
	waitmovement 0
# 122 "data/maps/PentepetalCity_House5/scripts.pory"
	speakername PentepetalCity_House5_EventScript_Woman_Text_0
# 123 "data/maps/PentepetalCity_House5/scripts.pory"
	msgbox PentepetalCity_House5_EventScript_Woman_Text_8
# 124 "data/maps/PentepetalCity_House5/scripts.pory"
	closemessage
# 125 "data/maps/PentepetalCity_House5/scripts.pory"
	delay 5
# 127 "data/maps/PentepetalCity_House5/scripts.pory"
	givemon SPECIES_FLOETTE_ETERNAL_FLOWER, 25
# 128 "data/maps/PentepetalCity_House5/scripts.pory"
	setflag FLAG_HIDE_FLOETTE_ETERNAL_PENTEPETAL
# 129 "data/maps/PentepetalCity_House5/scripts.pory"
	removeobject 5
# 130 "data/maps/PentepetalCity_House5/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 131 "data/maps/PentepetalCity_House5/scripts.pory"
	msgbox PentepetalCity_House5_EventScript_Woman_Text_9
# 132 "data/maps/PentepetalCity_House5/scripts.pory"
	waitfanfare
# 133 "data/maps/PentepetalCity_House5/scripts.pory"
	closemessage
# 134 "data/maps/PentepetalCity_House5/scripts.pory"
	delay 5
# 135 "data/maps/PentepetalCity_House5/scripts.pory"
	speakername PentepetalCity_House5_EventScript_Woman_Text_0
# 136 "data/maps/PentepetalCity_House5/scripts.pory"
	msgbox PentepetalCity_House5_EventScript_Woman_Text_10
# 137 "data/maps/PentepetalCity_House5/scripts.pory"
	closemessage
# 139 "data/maps/PentepetalCity_House5/scripts.pory"
	delay 20
# 140 "data/maps/PentepetalCity_House5/scripts.pory"
	completequest QUEST_ETERNAL_FLOETTE_PLOT
PentepetalCity_House5_EventScript_Woman_4:
# 143 "data/maps/PentepetalCity_House5/scripts.pory"
	releaseall
	end

PentepetalCity_House5_EventScript_Woman_2:
# 50 "data/maps/PentepetalCity_House5/scripts.pory"
	msgbox PentepetalCity_House5_EventScript_Woman_Text_1
# 51 "data/maps/PentepetalCity_House5/scripts.pory"
	closemessage
# 52 "data/maps/PentepetalCity_House5/scripts.pory"
	release
	end

PentepetalCity_House5_EventScript_Woman_5:
# 60 "data/maps/PentepetalCity_House5/scripts.pory"
	msgbox PentepetalCity_House5_EventScript_Woman_Text_2
# 61 "data/maps/PentepetalCity_House5/scripts.pory"
	closemessage
# 63 "data/maps/PentepetalCity_House5/scripts.pory"
	delay 20
# 64 "data/maps/PentepetalCity_House5/scripts.pory"
	startquest QUEST_ETERNAL_FLOETTE_PLOT
	goto PentepetalCity_House5_EventScript_Woman_4

PentepetalCity_House5_EventScript_Woman_8:
# 75 "data/maps/PentepetalCity_House5/scripts.pory"
	speakername PentepetalCity_House5_EventScript_Woman_Text_0
# 76 "data/maps/PentepetalCity_House5/scripts.pory"
	msgbox PentepetalCity_House5_EventScript_Woman_Text_4
# 77 "data/maps/PentepetalCity_House5/scripts.pory"
	closemessage
	goto PentepetalCity_House5_EventScript_Woman_4


# 147 "data/maps/PentepetalCity_House5/scripts.pory"
PentepetalCity_House5_Movement_FloetteApproaches:
# 149 "data/maps/PentepetalCity_House5/scripts.pory"
	walk_up
# 149 "data/maps/PentepetalCity_House5/scripts.pory"
	walk_up
# 150 "data/maps/PentepetalCity_House5/scripts.pory"
	walk_right
# 151 "data/maps/PentepetalCity_House5/scripts.pory"
	walk_up
# 151 "data/maps/PentepetalCity_House5/scripts.pory"
	walk_up
# 151 "data/maps/PentepetalCity_House5/scripts.pory"
	walk_up
# 152 "data/maps/PentepetalCity_House5/scripts.pory"
	jump_up
# 152 "data/maps/PentepetalCity_House5/scripts.pory"
	jump_up
# 153 "data/maps/PentepetalCity_House5/scripts.pory"
	face_left
# 154 "data/maps/PentepetalCity_House5/scripts.pory"
	step_end

# 156 "data/maps/PentepetalCity_House5/scripts.pory"
PentepetalCity_House5_Movement_FloetteGoesToPlayer:
# 158 "data/maps/PentepetalCity_House5/scripts.pory"
	walk_down
# 159 "data/maps/PentepetalCity_House5/scripts.pory"
	jump_in_place_left
# 160 "data/maps/PentepetalCity_House5/scripts.pory"
	face_left
# 161 "data/maps/PentepetalCity_House5/scripts.pory"
	step_end

PentepetalCity_House5_EventScript_Girl_Text_0:
# 7 "data/maps/PentepetalCity_House5/scripts.pory"
	.string "Girl$"

PentepetalCity_House5_EventScript_Girl_Text_1:
# 8 "data/maps/PentepetalCity_House5/scripts.pory"
	.string "My grandpa told me about the magic\n"
	.string "weapon in Kalos! I'm looking for more\l"
	.string "stories online.$"

PentepetalCity_House5_EventScript_OldMan_Text_0:
# 20 "data/maps/PentepetalCity_House5/scripts.pory"
	.string "Old Man$"

PentepetalCity_House5_EventScript_OldMan_Text_1:
# 21 "data/maps/PentepetalCity_House5/scripts.pory"
	.string "Our family is from the Kalos Region.\n"
	.string "When I was young, my grandfather told\l"
	.string "me about the great war of Kalos, the\l"
	.string "Ultimate Weapon, and all those stories.\l"
	.string "I'm not sure how much I believe them,\l"
	.string "but I've passed the stories on to my\l"
	.string "daughter and granddaughter.$"

PentepetalCity_House5_EventScript_Florges_Text_0:
# 31 "data/maps/PentepetalCity_House5/scripts.pory"
	.string "Florges$"

PentepetalCity_House5_EventScript_Florges_Text_1:
# 33 "data/maps/PentepetalCity_House5/scripts.pory"
	.string "Twee-lee!$"

PentepetalCity_House5_EventScript_Woman_Text_0:
# 44 "data/maps/PentepetalCity_House5/scripts.pory"
	.string "Woman$"

PentepetalCity_House5_EventScript_Woman_Text_1:
# 50 "data/maps/PentepetalCity_House5/scripts.pory"
	.string "It's still hard for me to wrap my head\n"
	.string "around everything. The Ultimate Weapon,\l"
	.string "the immortal Floette... all those stories\l"
	.string "my father told me were true!$"

PentepetalCity_House5_EventScript_Woman_Text_2:
# 60 "data/maps/PentepetalCity_House5/scripts.pory"
	.string "I've heard so many stories about our\n"
	.string "family and ancient Kalos growing up, I'm\l"
	.string "starting to wonder if they're actually\l"
	.string "true. My father says we are descended\l"
	.string "from the old King of Kalos, who vanished\l"
	.string "after an ancient war 3,000 years ago. He\l"
	.string "even says the King's Pokémon, a\l"
	.string "Floette, is still alive somewhere.\p"
	.string "The Wishing Stars found around the\n"
	.string "Ilios Region have special properties\l"
	.string "connected to summoning Pokémon. I\l"
	.string "won't pretend to understand them, but\l"
	.string "if anything will work, they will. Please,\l"
	.string "bring me {COLOR GREEN}a dozen Wishing Stars{COLOR DARK_GRAY} to call\l"
	.string "for the long-lost Floette!$"

PentepetalCity_House5_EventScript_Woman_Text_3:
# 68 "data/maps/PentepetalCity_House5/scripts.pory"
	.string "It's you! I'm still working towards my\n"
	.string "goal of finding the long-lost Floette\l"
	.string "from ancient Kalos. I've been collecting\l"
	.string "flowers and old artifacts for months\l"
	.string "now, but I'm still short on Wishing\l"
	.string "Stars. Do you have those 12 Wishing\l"
	.string "Stars, by any chance?$"

PentepetalCity_House5_EventScript_Woman_Text_4:
# 76 "data/maps/PentepetalCity_House5/scripts.pory"
	.string "Looks like you need to collect a few\n"
	.string "more. Remember, I need {COLOR GREEN}a dozen Wishing\l"
	.string "Stars{COLOR DARK_GRAY} to complete the ritual for\l"
	.string "Floette!$"

PentepetalCity_House5_EventScript_Woman_Text_5:
# 84 "data/maps/PentepetalCity_House5/scripts.pory"
	.string "Wow, you actually have 12 Wishing Stars!\n"
	.string "I can feel energy radiating from them...\p"
	.string "Alright, everything is set up. I have\n"
	.string "flowers and Wishing Stars surrounding a\l"
	.string "Poké ball. Let's see if anything hap-$"

PentepetalCity_House5_EventScript_Woman_Text_6:
# 104 "data/maps/PentepetalCity_House5/scripts.pory"
	.string "I-I can't... I can't believe it! Floette,\n"
	.string "you really heard our call? I have so\l"
	.string "many questions!$"

PentepetalCity_House5_EventScript_Woman_Text_7:
# 112 "data/maps/PentepetalCity_House5/scripts.pory"
	.string "Oh? You seem so full of energy, even\n"
	.string "after all these years! Are you trying to\l"
	.string "say you want to adventure Ilios with\l"
	.string "this Trainer?$"

PentepetalCity_House5_EventScript_Woman_Text_8:
# 123 "data/maps/PentepetalCity_House5/scripts.pory"
	.string "Wow, it's all fired up! I heard there's a\n"
	.string "new Acrisia University researcher\l"
	.string "traveling the Ilios Region, so that must\l"
	.string "be you! Floette wants to join you on\l"
	.string "your adventure!$"

PentepetalCity_House5_EventScript_Woman_Text_9:
# 131 "data/maps/PentepetalCity_House5/scripts.pory"
	.string "Floette Eternal Flower joined you on\n"
	.string "your journey!$"

PentepetalCity_House5_EventScript_Woman_Text_10:
# 136 "data/maps/PentepetalCity_House5/scripts.pory"
	.string "I can't believe the stories were real...\n"
	.string "that Floette must be thousands of\l"
	.string "years old! Please, take good care of it!$"

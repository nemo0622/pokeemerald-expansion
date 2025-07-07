SatyrsLair_MapScripts::
	.byte 0


SatyrsLair_EventScript_ChimeraEvent::
# 5 "data/maps/SatyrsLair/scripts.pory"
	lock
# 6 "data/maps/SatyrsLair/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 7 "data/maps/SatyrsLair/scripts.pory"
	waitmovement 0
# 8 "data/maps/SatyrsLair/scripts.pory"
	delay 25
# 9 "data/maps/SatyrsLair/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SatyrsLair_Movement_PlayerApproachGrunts
# 10 "data/maps/SatyrsLair/scripts.pory"
	waitmovement 0
# 11 "data/maps/SatyrsLair/scripts.pory"
	delay 20
# 12 "data/maps/SatyrsLair/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 13 "data/maps/SatyrsLair/scripts.pory"
	waitmovement 0
# 14 "data/maps/SatyrsLair/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 15 "data/maps/SatyrsLair/scripts.pory"
	waitmovement 0
# 16 "data/maps/SatyrsLair/scripts.pory"
	speakername SatyrsLair_EventScript_ChimeraEvent_Text_0
# 17 "data/maps/SatyrsLair/scripts.pory"
	msgbox SatyrsLair_EventScript_ChimeraEvent_Text_1
# 18 "data/maps/SatyrsLair/scripts.pory"
	closemessage
# 19 "data/maps/SatyrsLair/scripts.pory"
	delay 10
# 20 "data/maps/SatyrsLair/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 21 "data/maps/SatyrsLair/scripts.pory"
	waitmovement 0
# 22 "data/maps/SatyrsLair/scripts.pory"
	speakername SatyrsLair_EventScript_ChimeraEvent_Text_2
# 23 "data/maps/SatyrsLair/scripts.pory"
	msgbox SatyrsLair_EventScript_ChimeraEvent_Text_3
# 24 "data/maps/SatyrsLair/scripts.pory"
	closemessage
# 25 "data/maps/SatyrsLair/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 26 "data/maps/SatyrsLair/scripts.pory"
	waitmovement 0
# 27 "data/maps/SatyrsLair/scripts.pory"
	delay 15
# 28 "data/maps/SatyrsLair/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 29 "data/maps/SatyrsLair/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 30 "data/maps/SatyrsLair/scripts.pory"
	waitmovement 0
# 31 "data/maps/SatyrsLair/scripts.pory"
	speakername SatyrsLair_EventScript_ChimeraEvent_Text_4
# 32 "data/maps/SatyrsLair/scripts.pory"
	msgbox SatyrsLair_EventScript_ChimeraEvent_Text_5
# 33 "data/maps/SatyrsLair/scripts.pory"
	closemessage
# 35 "data/maps/SatyrsLair/scripts.pory"
	trainerbattle_two_trainers TRAINER_SATYRSLAIR_CHIMERA_GRUNT_1, SatyrsLair_Text_ChimeraGruntLoseText1, TRAINER_SATYRSLAIR_CHIMERA_GRUNT_2, SatyrsLair_Text_ChimeraGruntLoseText2
# 37 "data/maps/SatyrsLair/scripts.pory"
	delay 20
# 38 "data/maps/SatyrsLair/scripts.pory"
	speakername SatyrsLair_EventScript_ChimeraEvent_Text_4
# 39 "data/maps/SatyrsLair/scripts.pory"
	msgbox SatyrsLair_EventScript_ChimeraEvent_Text_6
# 40 "data/maps/SatyrsLair/scripts.pory"
	closemessage
# 41 "data/maps/SatyrsLair/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 42 "data/maps/SatyrsLair/scripts.pory"
	applymovement 1, SatyrsLair_Movement_GruntEscape1
# 43 "data/maps/SatyrsLair/scripts.pory"
	applymovement 2, SatyrsLair_Movement_GruntEscape2
# 44 "data/maps/SatyrsLair/scripts.pory"
	waitmovement 0
# 45 "data/maps/SatyrsLair/scripts.pory"
	delay 20
# 47 "data/maps/SatyrsLair/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 48 "data/maps/SatyrsLair/scripts.pory"
	applymovement 4, SatyrsLair_Movement_ArcanineEscapes
# 49 "data/maps/SatyrsLair/scripts.pory"
	waitmovement 0
# 51 "data/maps/SatyrsLair/scripts.pory"
	delay 10
# 52 "data/maps/SatyrsLair/scripts.pory"
	speakername SatyrsLair_EventScript_ChimeraEvent_Text_7
# 53 "data/maps/SatyrsLair/scripts.pory"
	msgbox SatyrsLair_EventScript_ChimeraEvent_Text_8
# 54 "data/maps/SatyrsLair/scripts.pory"
	closemessage
# 55 "data/maps/SatyrsLair/scripts.pory"
	applymovement 5, SatyrsLair_Movement_TerpsikoreBlocksEscape
# 56 "data/maps/SatyrsLair/scripts.pory"
	applymovement 3, SatyrsLair_Movement_AdminEscapes1
# 57 "data/maps/SatyrsLair/scripts.pory"
	waitmovement 0
# 58 "data/maps/SatyrsLair/scripts.pory"
	speakername SatyrsLair_EventScript_ChimeraEvent_Text_2
# 59 "data/maps/SatyrsLair/scripts.pory"
	msgbox SatyrsLair_EventScript_ChimeraEvent_Text_9
# 60 "data/maps/SatyrsLair/scripts.pory"
	closemessage
# 61 "data/maps/SatyrsLair/scripts.pory"
	delay 5
# 62 "data/maps/SatyrsLair/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterRight
# 63 "data/maps/SatyrsLair/scripts.pory"
	waitmovement 0
# 64 "data/maps/SatyrsLair/scripts.pory"
	delay 5
# 65 "data/maps/SatyrsLair/scripts.pory"
	speakername SatyrsLair_EventScript_ChimeraEvent_Text_7
# 66 "data/maps/SatyrsLair/scripts.pory"
	msgbox SatyrsLair_EventScript_ChimeraEvent_Text_10
# 67 "data/maps/SatyrsLair/scripts.pory"
	closemessage
# 68 "data/maps/SatyrsLair/scripts.pory"
	delay 10
# 70 "data/maps/SatyrsLair/scripts.pory"
	applymovement 5, Common_Movement_WalkUp
# 71 "data/maps/SatyrsLair/scripts.pory"
	waitmovement 0
# 72 "data/maps/SatyrsLair/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 73 "data/maps/SatyrsLair/scripts.pory"
	waitmovement 0
# 74 "data/maps/SatyrsLair/scripts.pory"
	applymovement 3, SatyrsLair_Movement_AdminEscapes2
# 75 "data/maps/SatyrsLair/scripts.pory"
	waitmovement 0
# 76 "data/maps/SatyrsLair/scripts.pory"
	delay 20
# 78 "data/maps/SatyrsLair/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 79 "data/maps/SatyrsLair/scripts.pory"
	applymovement 5, SatyrsLair_Movement_TerpsikoreApproachesPlayer
# 80 "data/maps/SatyrsLair/scripts.pory"
	waitmovement 0
# 81 "data/maps/SatyrsLair/scripts.pory"
	speakername SatyrsLair_EventScript_ChimeraEvent_Text_2
# 82 "data/maps/SatyrsLair/scripts.pory"
	msgbox SatyrsLair_EventScript_ChimeraEvent_Text_11
# 83 "data/maps/SatyrsLair/scripts.pory"
	closemessage
# 84 "data/maps/SatyrsLair/scripts.pory"
	delay 15
# 85 "data/maps/SatyrsLair/scripts.pory"
	emote 5, EMOTE_QUESTION
# 86 "data/maps/SatyrsLair/scripts.pory"
	speakername SatyrsLair_EventScript_ChimeraEvent_Text_2
# 87 "data/maps/SatyrsLair/scripts.pory"
	msgbox SatyrsLair_EventScript_ChimeraEvent_Text_12
# 88 "data/maps/SatyrsLair/scripts.pory"
	closemessage
# 90 "data/maps/SatyrsLair/scripts.pory"
	giveitem ITEM_TERA_ORB
# 91 "data/maps/SatyrsLair/scripts.pory"
	closemessage
# 93 "data/maps/SatyrsLair/scripts.pory"
	delay 5
# 94 "data/maps/SatyrsLair/scripts.pory"
	speakername SatyrsLair_EventScript_ChimeraEvent_Text_2
# 95 "data/maps/SatyrsLair/scripts.pory"
	msgbox SatyrsLair_EventScript_ChimeraEvent_Text_13
# 96 "data/maps/SatyrsLair/scripts.pory"
	closemessage
# 98 "data/maps/SatyrsLair/scripts.pory"
	fadescreen FADE_TO_BLACK
# 99 "data/maps/SatyrsLair/scripts.pory"
	delay 20
# 100 "data/maps/SatyrsLair/scripts.pory"
	setflag FLAG_HIDE_BLOCKING_SOFOS_GYM
# 101 "data/maps/SatyrsLair/scripts.pory"
	setflag FLAG_HIDE_TERPSIKORE_SATYRS_LAIR
# 102 "data/maps/SatyrsLair/scripts.pory"
	clearflag FLAG_HIDE_SOFOS_CITY_CIVILIANS_FROM_CHIMERA
# 103 "data/maps/SatyrsLair/scripts.pory"
	removeobject 1
# 104 "data/maps/SatyrsLair/scripts.pory"
	removeobject 2
# 105 "data/maps/SatyrsLair/scripts.pory"
	removeobject 3
# 106 "data/maps/SatyrsLair/scripts.pory"
	removeobject 4
# 107 "data/maps/SatyrsLair/scripts.pory"
	removeobject 5
# 108 "data/maps/SatyrsLair/scripts.pory"
	delay 20
# 109 "data/maps/SatyrsLair/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 110 "data/maps/SatyrsLair/scripts.pory"
	delay 20
# 112 "data/maps/SatyrsLair/scripts.pory"
	release
	end


# 115 "data/maps/SatyrsLair/scripts.pory"
SatyrsLair_Movement_PlayerApproachGrunts:
# 117 "data/maps/SatyrsLair/scripts.pory"
	walk_up
# 117 "data/maps/SatyrsLair/scripts.pory"
	walk_up
# 118 "data/maps/SatyrsLair/scripts.pory"
	emote_exclamation_mark
# 119 "data/maps/SatyrsLair/scripts.pory"
	delay_16
# 120 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_up
# 121 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_right
# 122 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_up
# 123 "data/maps/SatyrsLair/scripts.pory"
	step_end

# 133 "data/maps/SatyrsLair/scripts.pory"
SatyrsLair_Movement_GruntEscape1:
# 135 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 135 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 135 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 135 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 135 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 135 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 136 "data/maps/SatyrsLair/scripts.pory"
	step_end

# 138 "data/maps/SatyrsLair/scripts.pory"
SatyrsLair_Movement_GruntEscape2:
# 140 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_right
# 141 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 141 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 142 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_left
# 142 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_left
# 143 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 143 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 143 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 143 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 143 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 144 "data/maps/SatyrsLair/scripts.pory"
	step_end

# 146 "data/maps/SatyrsLair/scripts.pory"
SatyrsLair_Movement_ArcanineEscapes:
# 148 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 148 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 148 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 148 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 149 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_right
# 150 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 150 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 150 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 150 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 151 "data/maps/SatyrsLair/scripts.pory"
	step_end

# 153 "data/maps/SatyrsLair/scripts.pory"
SatyrsLair_Movement_AdminEscapes1:
# 155 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_left
# 156 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 156 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 156 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 156 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 156 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 157 "data/maps/SatyrsLair/scripts.pory"
	face_right
# 158 "data/maps/SatyrsLair/scripts.pory"
	emote_exclamation_mark
# 159 "data/maps/SatyrsLair/scripts.pory"
	delay_16
# 160 "data/maps/SatyrsLair/scripts.pory"
	step_end

# 162 "data/maps/SatyrsLair/scripts.pory"
SatyrsLair_Movement_TerpsikoreBlocksEscape:
# 164 "data/maps/SatyrsLair/scripts.pory"
	emote_exclamation_mark
# 165 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 165 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 165 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 165 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 166 "data/maps/SatyrsLair/scripts.pory"
	face_left
# 167 "data/maps/SatyrsLair/scripts.pory"
	step_end

# 169 "data/maps/SatyrsLair/scripts.pory"
SatyrsLair_Movement_AdminEscapes2:
# 171 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_right
# 172 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 172 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 172 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 172 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 173 "data/maps/SatyrsLair/scripts.pory"
	step_end

# 175 "data/maps/SatyrsLair/scripts.pory"
SatyrsLair_Movement_TerpsikoreApproachesPlayer:
# 177 "data/maps/SatyrsLair/scripts.pory"
	walk_up
# 177 "data/maps/SatyrsLair/scripts.pory"
	walk_up
# 178 "data/maps/SatyrsLair/scripts.pory"
	face_right
# 179 "data/maps/SatyrsLair/scripts.pory"
	step_end

SatyrsLair_EventScript_ChimeraEvent_Text_0:
# 16 "data/maps/SatyrsLair/scripts.pory"
	.string "???$"

SatyrsLair_EventScript_ChimeraEvent_Text_1:
# 17 "data/maps/SatyrsLair/scripts.pory"
	.string "Aha! Just as I said, you foul Chimera\n"
	.string "thug, help has arrived!$"

SatyrsLair_EventScript_ChimeraEvent_Text_2:
# 22 "data/maps/SatyrsLair/scripts.pory"
	.string "Terpsikore$"

SatyrsLair_EventScript_ChimeraEvent_Text_3:
# 23 "data/maps/SatyrsLair/scripts.pory"
	.string "You! Young Trainer, you'll be my\n"
	.string "assistant! I am Terpsikore, Muse of\l"
	.string "Dance and the {COLOR GREEN}Gym Leader of Sofos City{COLOR DARK_GRAY}.\l"
	.string "I've been holding off all these Team\l"
	.string "Chimera members, but now we must\l"
	.string "harmonize and work together! You take\l"
	.string "the two Grunts, and I'll wipe out this\l"
	.string "Admin!$"

SatyrsLair_EventScript_ChimeraEvent_Text_4:
# 31 "data/maps/SatyrsLair/scripts.pory"
	.string "Chimera Grunts$"

SatyrsLair_EventScript_ChimeraEvent_Text_5:
# 32 "data/maps/SatyrsLair/scripts.pory"
	.string "You think you're better than us? Heh,\n"
	.string "our Admin just found a {COLOR GREEN}Tera Orb{COLOR DARK_GRAY}! You\l"
	.string "have no chance of winning now!$"

SatyrsLair_EventScript_ChimeraEvent_Text_6:
# 39 "data/maps/SatyrsLair/scripts.pory"
	.string "We'd better get out of here!$"

SatyrsLair_EventScript_ChimeraEvent_Text_7:
# 52 "data/maps/SatyrsLair/scripts.pory"
	.string "Chimera Admin$"

SatyrsLair_EventScript_ChimeraEvent_Text_8:
# 53 "data/maps/SatyrsLair/scripts.pory"
	.string "Arcanine, no! Get back here!$"

SatyrsLair_EventScript_ChimeraEvent_Text_9:
# 59 "data/maps/SatyrsLair/scripts.pory"
	.string "Hold on there, bud. Give me that {COLOR GREEN}Tera\n"
	.string "Orb{COLOR DARK_GRAY} back, and I'll let you catch up to\l"
	.string "your cronies.$"

SatyrsLair_EventScript_ChimeraEvent_Text_10:
# 66 "data/maps/SatyrsLair/scripts.pory"
	.string "Argh, FINE! It's worthless anyway! The\n"
	.string "Boss and the other Admin have already\l"
	.string "nabbed a few from across Ilios, you'll\l"
	.string "never stop us!\p"
	.string "Grr... just you wait, we'll come back in\n"
	.string "force someday and bring everyone to\l"
	.string "their knees!$"

SatyrsLair_EventScript_ChimeraEvent_Text_11:
# 82 "data/maps/SatyrsLair/scripts.pory"
	.string "What a thrilling battle! Your strategy,\n"
	.string "the moves you used, the timing of your\l"
	.string "attacks... You move in perfect harmony\l"
	.string "with your team. What's your name?\p"
	.string "{PLAYER}! Please, come challenge me\n"
	.string "{COLOR GREEN}at my Gym{COLOR DARK_GRAY}! Oh, as for the Tera Orb... I\l"
	.string "already have my own, as a Gym Leader.\l"
	.string "What should I do with it?$"

SatyrsLair_EventScript_ChimeraEvent_Text_12:
# 87 "data/maps/SatyrsLair/scripts.pory"
	.string "Hm? Your friend {COLOR GREEN}Niko{COLOR DARK_GRAY} was looking for it?\n"
	.string "Here, {COLOR GREEN}bring it to him{COLOR DARK_GRAY}. If you trust him,\l"
	.string "so shall I!$"

SatyrsLair_EventScript_ChimeraEvent_Text_13:
# 95 "data/maps/SatyrsLair/scripts.pory"
	.string "I'll be returning to my Gym. I hope to\n"
	.string "see you there soon! Our match will be\l"
	.string "legendary!$"

SatyrsLair_Text_ChimeraGruntLoseText1::
# 125 "data/maps/SatyrsLair/scripts.pory"
	.string "How could this happen?$"

SatyrsLair_Text_ChimeraGruntLoseText2::
# 129 "data/maps/SatyrsLair/scripts.pory"
	.string "I thought we had the advantage...!$"

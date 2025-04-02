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
	applymovement 5, SatyrsLair_Movement_MeneswoBlocksEscape
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
	applymovement 5, SatyrsLair_Movement_MeneswoApproachesPlayer
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
	applymovement 5, Common_Movement_QuestionMark
# 86 "data/maps/SatyrsLair/scripts.pory"
	waitmovement 0
# 87 "data/maps/SatyrsLair/scripts.pory"
	speakername SatyrsLair_EventScript_ChimeraEvent_Text_2
# 88 "data/maps/SatyrsLair/scripts.pory"
	msgbox SatyrsLair_EventScript_ChimeraEvent_Text_12
# 89 "data/maps/SatyrsLair/scripts.pory"
	closemessage
# 91 "data/maps/SatyrsLair/scripts.pory"
	giveitem ITEM_TERA_ORB
# 92 "data/maps/SatyrsLair/scripts.pory"
	closemessage
# 94 "data/maps/SatyrsLair/scripts.pory"
	delay 5
# 95 "data/maps/SatyrsLair/scripts.pory"
	speakername SatyrsLair_EventScript_ChimeraEvent_Text_2
# 96 "data/maps/SatyrsLair/scripts.pory"
	msgbox SatyrsLair_EventScript_ChimeraEvent_Text_13
# 97 "data/maps/SatyrsLair/scripts.pory"
	closemessage
# 99 "data/maps/SatyrsLair/scripts.pory"
	fadescreen FADE_TO_BLACK
# 100 "data/maps/SatyrsLair/scripts.pory"
	delay 20
# 101 "data/maps/SatyrsLair/scripts.pory"
	setflag FLAG_HIDE_BLOCKING_SOFOS_GYM
# 102 "data/maps/SatyrsLair/scripts.pory"
	setflag FLAG_HIDE_MENESWO_SATYRS_LAIR
# 103 "data/maps/SatyrsLair/scripts.pory"
	clearflag FLAG_HIDE_SOFOS_CITY_CIVILIANS_FROM_CHIMERA
# 104 "data/maps/SatyrsLair/scripts.pory"
	removeobject 1
# 105 "data/maps/SatyrsLair/scripts.pory"
	removeobject 2
# 106 "data/maps/SatyrsLair/scripts.pory"
	removeobject 3
# 107 "data/maps/SatyrsLair/scripts.pory"
	removeobject 4
# 108 "data/maps/SatyrsLair/scripts.pory"
	removeobject 5
# 109 "data/maps/SatyrsLair/scripts.pory"
	delay 20
# 110 "data/maps/SatyrsLair/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 111 "data/maps/SatyrsLair/scripts.pory"
	delay 20
# 113 "data/maps/SatyrsLair/scripts.pory"
	release
	end


# 116 "data/maps/SatyrsLair/scripts.pory"
SatyrsLair_Movement_PlayerApproachGrunts:
# 118 "data/maps/SatyrsLair/scripts.pory"
	walk_up
# 118 "data/maps/SatyrsLair/scripts.pory"
	walk_up
# 119 "data/maps/SatyrsLair/scripts.pory"
	emote_exclamation_mark
# 120 "data/maps/SatyrsLair/scripts.pory"
	delay_16
# 121 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_up
# 122 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_right
# 123 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_up
# 124 "data/maps/SatyrsLair/scripts.pory"
	step_end

# 134 "data/maps/SatyrsLair/scripts.pory"
SatyrsLair_Movement_GruntEscape1:
# 136 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 136 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 136 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 136 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 136 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 136 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 137 "data/maps/SatyrsLair/scripts.pory"
	step_end

# 139 "data/maps/SatyrsLair/scripts.pory"
SatyrsLair_Movement_GruntEscape2:
# 141 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_right
# 142 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 142 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 143 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_left
# 143 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_left
# 144 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 144 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 144 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 144 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 144 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 145 "data/maps/SatyrsLair/scripts.pory"
	step_end

# 147 "data/maps/SatyrsLair/scripts.pory"
SatyrsLair_Movement_ArcanineEscapes:
# 149 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 149 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 149 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 149 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 150 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_right
# 151 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 151 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 151 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 151 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 152 "data/maps/SatyrsLair/scripts.pory"
	step_end

# 154 "data/maps/SatyrsLair/scripts.pory"
SatyrsLair_Movement_AdminEscapes1:
# 156 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_left
# 157 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 157 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 157 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 157 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 157 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 158 "data/maps/SatyrsLair/scripts.pory"
	face_right
# 159 "data/maps/SatyrsLair/scripts.pory"
	emote_exclamation_mark
# 160 "data/maps/SatyrsLair/scripts.pory"
	delay_16
# 161 "data/maps/SatyrsLair/scripts.pory"
	step_end

# 163 "data/maps/SatyrsLair/scripts.pory"
SatyrsLair_Movement_MeneswoBlocksEscape:
# 165 "data/maps/SatyrsLair/scripts.pory"
	emote_exclamation_mark
# 166 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 166 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 166 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 166 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 167 "data/maps/SatyrsLair/scripts.pory"
	face_left
# 168 "data/maps/SatyrsLair/scripts.pory"
	step_end

# 170 "data/maps/SatyrsLair/scripts.pory"
SatyrsLair_Movement_AdminEscapes2:
# 172 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_right
# 173 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 173 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 173 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 173 "data/maps/SatyrsLair/scripts.pory"
	walk_fast_down
# 174 "data/maps/SatyrsLair/scripts.pory"
	step_end

# 176 "data/maps/SatyrsLair/scripts.pory"
SatyrsLair_Movement_MeneswoApproachesPlayer:
# 178 "data/maps/SatyrsLair/scripts.pory"
	walk_up
# 178 "data/maps/SatyrsLair/scripts.pory"
	walk_up
# 179 "data/maps/SatyrsLair/scripts.pory"
	face_right
# 180 "data/maps/SatyrsLair/scripts.pory"
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
	.string "Meneswo$"

SatyrsLair_EventScript_ChimeraEvent_Text_3:
# 23 "data/maps/SatyrsLair/scripts.pory"
	.string "You! Young Trainer, you'll be my\n"
	.string "assistant! I am Meneswo, the {COLOR GREEN}Gym Leader\l"
	.string "of Sofos City{COLOR DARK_GRAY}. I've been holding off all\l"
	.string "these Team Chimera members, but now's\l"
	.string "the time for STRATEGY! You take the two\l"
	.string "Grunts, and I'll wipe out this Admin!$"

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
	.string "attacks... what's your name?\p"
	.string "{PLAYER}! Please, come challenge me\n"
	.string "{COLOR GREEN}at my Gym{COLOR DARK_GRAY}! Oh, as for the Tera Orb... I\l"
	.string "already have my own, as a Gym Leader.\l"
	.string "What should I do with it?$"

SatyrsLair_EventScript_ChimeraEvent_Text_12:
# 88 "data/maps/SatyrsLair/scripts.pory"
	.string "Hm? Your friend {COLOR GREEN}Niko{COLOR DARK_GRAY} was looking for it?\n"
	.string "Here, {COLOR GREEN}bring it to him{COLOR DARK_GRAY}. If you trust him,\l"
	.string "so shall I!$"

SatyrsLair_EventScript_ChimeraEvent_Text_13:
# 96 "data/maps/SatyrsLair/scripts.pory"
	.string "I'll be returning to my Gym. I hope to\n"
	.string "see you there soon! Our match will be\l"
	.string "legendary!$"

SatyrsLair_Text_ChimeraGruntLoseText1::
# 126 "data/maps/SatyrsLair/scripts.pory"
	.string "How could this happen?$"

SatyrsLair_Text_ChimeraGruntLoseText2::
# 130 "data/maps/SatyrsLair/scripts.pory"
	.string "I thought we had the advantage...!$"

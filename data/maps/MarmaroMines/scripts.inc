MarmaroMines_MapScripts::
	.byte 0


MarmaroMines_EventScript_Hiker::
# 5 "data/maps/MarmaroMines/scripts.pory"
	lock
# 6 "data/maps/MarmaroMines/scripts.pory"
	faceplayer
# 7 "data/maps/MarmaroMines/scripts.pory"
	speakername MarmaroMines_EventScript_Hiker_Text_0
# 8 "data/maps/MarmaroMines/scripts.pory"
	goto_if_unset FLAG_HIDE_CHIMERA_GRUNTS_MARMARO_MINES, MarmaroMines_EventScript_Hiker_2
# 14 "data/maps/MarmaroMines/scripts.pory"
	msgbox MarmaroMines_EventScript_Hiker_Text_2
MarmaroMines_EventScript_Hiker_1:
# 16 "data/maps/MarmaroMines/scripts.pory"
	closemessage
# 17 "data/maps/MarmaroMines/scripts.pory"
	release
	end

MarmaroMines_EventScript_Hiker_2:
# 10 "data/maps/MarmaroMines/scripts.pory"
	msgbox MarmaroMines_EventScript_Hiker_Text_1
	goto MarmaroMines_EventScript_Hiker_1


MarmaroMines_EventScript_Triathlete::
# 23 "data/maps/MarmaroMines/scripts.pory"
	lock
# 24 "data/maps/MarmaroMines/scripts.pory"
	faceplayer
# 25 "data/maps/MarmaroMines/scripts.pory"
	speakername MarmaroMines_EventScript_Triathlete_Text_0
# 26 "data/maps/MarmaroMines/scripts.pory"
	goto_if_unset FLAG_HIDE_CHIMERA_GRUNTS_MARMARO_MINES, MarmaroMines_EventScript_Triathlete_2
# 32 "data/maps/MarmaroMines/scripts.pory"
	msgbox MarmaroMines_EventScript_Triathlete_Text_2
MarmaroMines_EventScript_Triathlete_1:
# 34 "data/maps/MarmaroMines/scripts.pory"
	closemessage
# 35 "data/maps/MarmaroMines/scripts.pory"
	release
	end

MarmaroMines_EventScript_Triathlete_2:
# 28 "data/maps/MarmaroMines/scripts.pory"
	msgbox MarmaroMines_EventScript_Triathlete_Text_1
	goto MarmaroMines_EventScript_Triathlete_1


MarmaroMines_EventScript_Trainer_MarmaroMines_Grunt_1::
# 41 "data/maps/MarmaroMines/scripts.pory"
	trainerbattle_single TRAINER_MARMAROMINES_GRUNT_1, MarmaroMines_Text_Trainer_MarmaroMines_Grunt_1Intro, MarmaroMines_Text_Trainer_MarmaroMines_Grunt_1Defeat
# 42 "data/maps/MarmaroMines/scripts.pory"
	speakername MarmaroMines_EventScript_Trainer_MarmaroMines_Grunt_1_Text_0
# 43 "data/maps/MarmaroMines/scripts.pory"
	msgbox MarmaroMines_EventScript_Trainer_MarmaroMines_Grunt_1_Text_1
# 44 "data/maps/MarmaroMines/scripts.pory"
	closemessage
# 45 "data/maps/MarmaroMines/scripts.pory"
	release
	end


MarmaroMines_EventScript_Trainer_MarmaroMines_Grunt_2::
# 59 "data/maps/MarmaroMines/scripts.pory"
	trainerbattle_single TRAINER_MARMAROMINES_GRUNT_2, MarmaroMines_Text_Trainer_MarmaroMines_Grunt_2Intro, MarmaroMines_Text_Trainer_MarmaroMines_Grunt_2Defeat
# 60 "data/maps/MarmaroMines/scripts.pory"
	speakername MarmaroMines_EventScript_Trainer_MarmaroMines_Grunt_1_Text_0
# 61 "data/maps/MarmaroMines/scripts.pory"
	msgbox MarmaroMines_EventScript_Trainer_MarmaroMines_Grunt_2_Text_0
# 62 "data/maps/MarmaroMines/scripts.pory"
	closemessage
# 63 "data/maps/MarmaroMines/scripts.pory"
	release
	end


MarmaroMines_EventScript_ChimeraAdminEvent::
# 77 "data/maps/MarmaroMines/scripts.pory"
	lockall
# 78 "data/maps/MarmaroMines/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 79 "data/maps/MarmaroMines/scripts.pory"
	waitmovement 0
# 80 "data/maps/MarmaroMines/scripts.pory"
	applymovement 6, Common_Movement_JumpInPlaceUp
# 81 "data/maps/MarmaroMines/scripts.pory"
	waitmovement 0
# 82 "data/maps/MarmaroMines/scripts.pory"
	speakername MarmaroMines_EventScript_ChimeraAdminEvent_Text_0
# 83 "data/maps/MarmaroMines/scripts.pory"
	msgbox MarmaroMines_EventScript_ChimeraAdminEvent_Text_1
# 84 "data/maps/MarmaroMines/scripts.pory"
	closemessage
# 85 "data/maps/MarmaroMines/scripts.pory"
	applymovement 6, Common_Movement_QuestionMark
# 86 "data/maps/MarmaroMines/scripts.pory"
	waitmovement 0
# 87 "data/maps/MarmaroMines/scripts.pory"
	delay 20
# 88 "data/maps/MarmaroMines/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 89 "data/maps/MarmaroMines/scripts.pory"
	waitmovement 0
# 90 "data/maps/MarmaroMines/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 91 "data/maps/MarmaroMines/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 92 "data/maps/MarmaroMines/scripts.pory"
	waitmovement 0
# 93 "data/maps/MarmaroMines/scripts.pory"
	speakername MarmaroMines_EventScript_ChimeraAdminEvent_Text_0
# 94 "data/maps/MarmaroMines/scripts.pory"
	msgbox MarmaroMines_EventScript_ChimeraAdminEvent_Text_2
# 95 "data/maps/MarmaroMines/scripts.pory"
	closemessage
# 97 "data/maps/MarmaroMines/scripts.pory"
	goto_if_unset FLAG_HARD_MODE, MarmaroMines_EventScript_ChimeraAdminEvent_2
# 103 "data/maps/MarmaroMines/scripts.pory"
	trainerbattle_no_intro TRAINER_MARMAROMINES_CHIMERA_ADMIN_HARD, MarmaroMines_Text_ChimeraAdminDefeated
MarmaroMines_EventScript_ChimeraAdminEvent_1:
# 106 "data/maps/MarmaroMines/scripts.pory"
	delay 10
# 107 "data/maps/MarmaroMines/scripts.pory"
	speakername MarmaroMines_EventScript_ChimeraAdminEvent_Text_0
# 108 "data/maps/MarmaroMines/scripts.pory"
	msgbox MarmaroMines_EventScript_ChimeraAdminEvent_Text_3
# 109 "data/maps/MarmaroMines/scripts.pory"
	closemessage
# 110 "data/maps/MarmaroMines/scripts.pory"
	applymovement 6, MarmaroMines_Movement_AdminLeaves
# 111 "data/maps/MarmaroMines/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
# 112 "data/maps/MarmaroMines/scripts.pory"
	waitmovement 0
# 113 "data/maps/MarmaroMines/scripts.pory"
	applymovement 7, MarmaroMines_Movement_AdminLeaves
# 114 "data/maps/MarmaroMines/scripts.pory"
	waitmovement 0
# 115 "data/maps/MarmaroMines/scripts.pory"
	delay 10
# 116 "data/maps/MarmaroMines/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 117 "data/maps/MarmaroMines/scripts.pory"
	waitmovement 0
# 118 "data/maps/MarmaroMines/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 119 "data/maps/MarmaroMines/scripts.pory"
	waitmovement 0
# 120 "data/maps/MarmaroMines/scripts.pory"
	delay 10
# 121 "data/maps/MarmaroMines/scripts.pory"
	speakername MarmaroMines_EventScript_ChimeraAdminEvent_Text_4
# 122 "data/maps/MarmaroMines/scripts.pory"
	msgbox MarmaroMines_EventScript_ChimeraAdminEvent_Text_5
# 123 "data/maps/MarmaroMines/scripts.pory"
	closemessage
# 125 "data/maps/MarmaroMines/scripts.pory"
	removeobject 2
# 126 "data/maps/MarmaroMines/scripts.pory"
	removeobject 5
# 127 "data/maps/MarmaroMines/scripts.pory"
	removeobject 6
# 128 "data/maps/MarmaroMines/scripts.pory"
	removeobject 7
# 129 "data/maps/MarmaroMines/scripts.pory"
	setflag FLAG_HIDE_CHIMERA_GRUNTS_MARMARO_MINES
# 131 "data/maps/MarmaroMines/scripts.pory"
	delay 10
# 132 "data/maps/MarmaroMines/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 133 "data/maps/MarmaroMines/scripts.pory"
	applymovement 4, MarmaroMines_Movement_TriathleteGivesDive
# 134 "data/maps/MarmaroMines/scripts.pory"
	waitmovement 0
# 135 "data/maps/MarmaroMines/scripts.pory"
	speakername MarmaroMines_EventScript_Triathlete_Text_0
# 136 "data/maps/MarmaroMines/scripts.pory"
	msgbox MarmaroMines_EventScript_ChimeraAdminEvent_Text_6
# 137 "data/maps/MarmaroMines/scripts.pory"
	closemessage
# 138 "data/maps/MarmaroMines/scripts.pory"
	delay 5
# 139 "data/maps/MarmaroMines/scripts.pory"
	giveitem ITEM_HM_DIVE
# 140 "data/maps/MarmaroMines/scripts.pory"
	closemessage
# 141 "data/maps/MarmaroMines/scripts.pory"
	delay 5
# 142 "data/maps/MarmaroMines/scripts.pory"
	speakername MarmaroMines_EventScript_Triathlete_Text_0
# 143 "data/maps/MarmaroMines/scripts.pory"
	msgbox MarmaroMines_EventScript_ChimeraAdminEvent_Text_7
# 144 "data/maps/MarmaroMines/scripts.pory"
	closemessage
# 145 "data/maps/MarmaroMines/scripts.pory"
	applymovement 4, MarmaroMines_Movement_TriathleteReturns
# 146 "data/maps/MarmaroMines/scripts.pory"
	waitmovement 0
# 148 "data/maps/MarmaroMines/scripts.pory"
	delay 20
# 149 "data/maps/MarmaroMines/scripts.pory"
	completequest QUEST_FREE_MARMARO_MINES
# 150 "data/maps/MarmaroMines/scripts.pory"
	delay 20
# 151 "data/maps/MarmaroMines/scripts.pory"
	msgbox MarmaroMines_EventScript_ChimeraAdminEvent_Text_8
# 152 "data/maps/MarmaroMines/scripts.pory"
	closemessage
# 153 "data/maps/MarmaroMines/scripts.pory"
	releaseall
	end

MarmaroMines_EventScript_ChimeraAdminEvent_2:
# 99 "data/maps/MarmaroMines/scripts.pory"
	trainerbattle_no_intro TRAINER_MARMAROMINES_CHIMERA_ADMIN, MarmaroMines_Text_ChimeraAdminDefeated
	goto MarmaroMines_EventScript_ChimeraAdminEvent_1


# 160 "data/maps/MarmaroMines/scripts.pory"
MarmaroMines_Movement_AdminLeaves:
# 162 "data/maps/MarmaroMines/scripts.pory"
	walk_down
# 163 "data/maps/MarmaroMines/scripts.pory"
	walk_right
# 164 "data/maps/MarmaroMines/scripts.pory"
	walk_down
# 164 "data/maps/MarmaroMines/scripts.pory"
	walk_down
# 164 "data/maps/MarmaroMines/scripts.pory"
	walk_down
# 164 "data/maps/MarmaroMines/scripts.pory"
	walk_down
# 164 "data/maps/MarmaroMines/scripts.pory"
	walk_down
# 164 "data/maps/MarmaroMines/scripts.pory"
	walk_down
# 164 "data/maps/MarmaroMines/scripts.pory"
	walk_down
# 165 "data/maps/MarmaroMines/scripts.pory"
	step_end

# 167 "data/maps/MarmaroMines/scripts.pory"
MarmaroMines_Movement_TriathleteGivesDive:
# 169 "data/maps/MarmaroMines/scripts.pory"
	walk_left
# 169 "data/maps/MarmaroMines/scripts.pory"
	walk_left
# 170 "data/maps/MarmaroMines/scripts.pory"
	walk_up
# 170 "data/maps/MarmaroMines/scripts.pory"
	walk_up
# 171 "data/maps/MarmaroMines/scripts.pory"
	walk_left
# 172 "data/maps/MarmaroMines/scripts.pory"
	walk_up
# 173 "data/maps/MarmaroMines/scripts.pory"
	step_end

# 175 "data/maps/MarmaroMines/scripts.pory"
MarmaroMines_Movement_TriathleteReturns:
# 177 "data/maps/MarmaroMines/scripts.pory"
	walk_down
# 178 "data/maps/MarmaroMines/scripts.pory"
	walk_right
# 179 "data/maps/MarmaroMines/scripts.pory"
	walk_down
# 179 "data/maps/MarmaroMines/scripts.pory"
	walk_down
# 180 "data/maps/MarmaroMines/scripts.pory"
	walk_right
# 180 "data/maps/MarmaroMines/scripts.pory"
	walk_right
# 181 "data/maps/MarmaroMines/scripts.pory"
	face_down
# 182 "data/maps/MarmaroMines/scripts.pory"
	step_end

MarmaroMines_EventScript_Petros::
# 189 "data/maps/MarmaroMines/scripts.pory"
	lock
# 190 "data/maps/MarmaroMines/scripts.pory"
	faceplayer
# 191 "data/maps/MarmaroMines/scripts.pory"
	speakername MarmaroMines_EventScript_ChimeraAdminEvent_Text_4
# 192 "data/maps/MarmaroMines/scripts.pory"
	msgbox MarmaroMines_EventScript_Petros_Text_0, MSGBOX_YESNO
# 193 "data/maps/MarmaroMines/scripts.pory"
	closemessage
# 194 "data/maps/MarmaroMines/scripts.pory"
	delay 5
# 195 "data/maps/MarmaroMines/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MarmaroMines_EventScript_Petros_2
# 205 "data/maps/MarmaroMines/scripts.pory"
	speakername MarmaroMines_EventScript_ChimeraAdminEvent_Text_4
# 206 "data/maps/MarmaroMines/scripts.pory"
	msgbox MarmaroMines_EventScript_Petros_Text_2
# 207 "data/maps/MarmaroMines/scripts.pory"
	closemessage
# 209 "data/maps/MarmaroMines/scripts.pory"
	addvar VAR_TIMES_MINED, 1
# 212 "data/maps/MarmaroMines/scripts.pory"
	fadescreen FADE_TO_BLACK
# 213 "data/maps/MarmaroMines/scripts.pory"
	special StartMining
# 215 "data/maps/MarmaroMines/scripts.pory"
	compare VAR_TIMES_MINED, 10
	goto_if_ge MarmaroMines_EventScript_Petros_6
MarmaroMines_EventScript_Petros_1:
# 226 "data/maps/MarmaroMines/scripts.pory"
	release
	end

MarmaroMines_EventScript_Petros_2:
# 197 "data/maps/MarmaroMines/scripts.pory"
	speakername MarmaroMines_EventScript_ChimeraAdminEvent_Text_4
# 198 "data/maps/MarmaroMines/scripts.pory"
	msgbox MarmaroMines_EventScript_Petros_Text_1
# 199 "data/maps/MarmaroMines/scripts.pory"
	closemessage
# 200 "data/maps/MarmaroMines/scripts.pory"
	release
	end

MarmaroMines_EventScript_Petros_5:
# 217 "data/maps/MarmaroMines/scripts.pory"
	speakername MarmaroMines_EventScript_ChimeraAdminEvent_Text_4
# 218 "data/maps/MarmaroMines/scripts.pory"
	msgbox MarmaroMines_EventScript_Petros_Text_3
# 219 "data/maps/MarmaroMines/scripts.pory"
	closemessage
# 220 "data/maps/MarmaroMines/scripts.pory"
	delay 5
# 221 "data/maps/MarmaroMines/scripts.pory"
	givedecoration DECOR_MARBLE_STATUE
# 222 "data/maps/MarmaroMines/scripts.pory"
	closemessage
# 223 "data/maps/MarmaroMines/scripts.pory"
	setflag FLAG_GOT_MARBLE_STATUE
	goto MarmaroMines_EventScript_Petros_1

MarmaroMines_EventScript_Petros_6:
# 215 "data/maps/MarmaroMines/scripts.pory"
	goto_if_unset FLAG_GOT_MARBLE_STATUE, MarmaroMines_EventScript_Petros_5
	goto MarmaroMines_EventScript_Petros_1


MarmaroMines_EventScript_MinigameRulesSign::
# 232 "data/maps/MarmaroMines/scripts.pory"
	lock
# 233 "data/maps/MarmaroMines/scripts.pory"
	msgbox MarmaroMines_EventScript_MinigameRulesSign_Text_0
# 234 "data/maps/MarmaroMines/scripts.pory"
	closemessage
# 235 "data/maps/MarmaroMines/scripts.pory"
	release
	end


MarmaroMines_EventScript_Hiker_Text_0:
# 7 "data/maps/MarmaroMines/scripts.pory"
	.string "Hiker$"

MarmaroMines_EventScript_Hiker_Text_1:
# 10 "data/maps/MarmaroMines/scripts.pory"
	.string "These Team Chimera thugs are gettin' in\n"
	.string "the way of our work! I'd fight 'em, but\l"
	.string "they're just too strong.$"

MarmaroMines_EventScript_Hiker_Text_2:
# 14 "data/maps/MarmaroMines/scripts.pory"
	.string "Now that Team Chimera is finally gone,\n"
	.string "we can get back to mining!$"

MarmaroMines_EventScript_Triathlete_Text_0:
# 25 "data/maps/MarmaroMines/scripts.pory"
	.string "Triathlete$"

MarmaroMines_EventScript_Triathlete_Text_1:
# 28 "data/maps/MarmaroMines/scripts.pory"
	.string "I came here to train, but these Team\n"
	.string "Chimera guys are awfully scary... Their\l"
	.string "Pokémon caused this rockslide blocking\l"
	.string "the path!$"

MarmaroMines_EventScript_Triathlete_Text_2:
# 32 "data/maps/MarmaroMines/scripts.pory"
	.string "I'm back to training! Moving and pushing\n"
	.string "heavy rocks is a great way to build\l"
	.string "muscle!$"

MarmaroMines_EventScript_Trainer_MarmaroMines_Grunt_1_Text_0:
# 42 "data/maps/MarmaroMines/scripts.pory"
	.string "Chimera Grunt$"

MarmaroMines_EventScript_Trainer_MarmaroMines_Grunt_1_Text_1:
# 43 "data/maps/MarmaroMines/scripts.pory"
	.string "Most of the mine fell in during the\n"
	.string "Admin's battle with Petros, the owner of\l"
	.string "the mine. Still, we're getting what we\l"
	.string "came here for!$"

MarmaroMines_EventScript_Trainer_MarmaroMines_Grunt_2_Text_0:
# 61 "data/maps/MarmaroMines/scripts.pory"
	.string "The Ancient Mechanism was made of two\n"
	.string "pieces. Part was found off the coast of\l"
	.string "Kaptara Island, which we've already\l"
	.string "acquired. Now, with the other half...\l"
	.string "kahaha!$"

MarmaroMines_EventScript_ChimeraAdminEvent_Text_0:
# 82 "data/maps/MarmaroMines/scripts.pory"
	.string "Chimera Admin$"

MarmaroMines_EventScript_ChimeraAdminEvent_Text_1:
# 83 "data/maps/MarmaroMines/scripts.pory"
	.string "Heh, you really thought you could hide\n"
	.string "the Ancient Mechanism fragment from\l"
	.string "us? Petros, I know you're a miner, but\l"
	.string "you really have rocks for brains.\p"
	.string "Let's end this. Arcanine, use-$"

MarmaroMines_EventScript_ChimeraAdminEvent_Text_2:
# 94 "data/maps/MarmaroMines/scripts.pory"
	.string "Fwahaha, unbelievable! {PLAYER}, of\n"
	.string "course you'd be here... but you're too\l"
	.string "late! The other Admin has already\l"
	.string "{COLOR GREEN}escaped{COLOR DARK_GRAY} on her Mamoswine with the\l"
	.string "{COLOR GREEN}Ancient Mechanism fragment{COLOR DARK_GRAY} that was\l"
	.string "buried here.\p"
	.string "Hm? You want to know more about that?\n"
	.string "Heh, I wouldn't worry about it. This\l"
	.string "battle will bring the mines down on you!$"

MarmaroMines_EventScript_ChimeraAdminEvent_Text_3:
# 108 "data/maps/MarmaroMines/scripts.pory"
	.string "The other Admin has surely made it off\n"
	.string "the island with the Ancient Mechanism\l"
	.string "fragment by now. I just needed to hold\l"
	.string "you off for a bit!\p"
	.string "The Ancient Mechanism was divided into\n"
	.string "two parts, being lost thousands of\l"
	.string "years ago. The first piece was found\l"
	.string "underwater near Kaptara Island, which\l"
	.string "we quietly picked up a few years ago.\l"
	.string "Now, with both pieces, we can finally\l"
	.string "use the Mechanism!\p"
	.string "Heh, why am I wasting my time explaining\n"
	.string "our plans to the likes of you? I'm out\l"
	.string "of here!$"

MarmaroMines_EventScript_ChimeraAdminEvent_Text_4:
# 121 "data/maps/MarmaroMines/scripts.pory"
	.string "Petros$"

MarmaroMines_EventScript_ChimeraAdminEvent_Text_5:
# 122 "data/maps/MarmaroMines/scripts.pory"
	.string "Phew, that was a close call. All my\n"
	.string "Pokémon are on the brink of fainting, so\l"
	.string "a few more minutes with that Admin and\l"
	.string "his Arcanine would've left me\l"
	.string "defenseless.\p"
	.string "Right, I'm {COLOR GREEN}Petros{COLOR DARK_GRAY}, the manager of the\n"
	.string "Marmaro Mines. I'm worried about what\l"
	.string "Team Chimera is planning with that\l"
	.string "Ancient Mechanism, but right now, I\l"
	.string "have a more pressing matter here - that\l"
	.string "Admin ended up {COLOR GREEN}collapsing most of the\l"
	.string "mines{COLOR DARK_GRAY} during our battles!\p"
	.string "You're already helped us so much, so I\n"
	.string "hesitate to ask... but if you want to\l"
	.string "{COLOR GREEN}help us continue mining{COLOR DARK_GRAY}, we'd be more\l"
	.string "than happy to have you! You can {COLOR GREEN}keep\l"
	.string "any treasures dug up{COLOR DARK_GRAY}, too!\p"
	.string "Just {COLOR GREEN}speak to me{COLOR DARK_GRAY} if you're interested.$"

MarmaroMines_EventScript_ChimeraAdminEvent_Text_6:
# 136 "data/maps/MarmaroMines/scripts.pory"
	.string "Hey, so like, thanks for saving us! If\n"
	.string "you're a strong Trainer, you probably\l"
	.string "want to head south towards the {COLOR GREEN}Fresco\l"
	.string "Isles{COLOR DARK_GRAY} for the sixth Gym, right? You'll\l"
	.string "probably need this, then.$"

MarmaroMines_EventScript_ChimeraAdminEvent_Text_7:
# 143 "data/maps/MarmaroMines/scripts.pory"
	.string "With {COLOR GREEN}Dive{COLOR DARK_GRAY}, you can explore underwater\n"
	.string "areas. For people who swim or Surf, the\l"
	.string "{COLOR GREEN}only way south to the Fresco Isles is\l"
	.string "by Diving{COLOR DARK_GRAY}. I don't need the HM anymore,\l"
	.string "because I've already mastered\l"
	.string "swimming!$"

MarmaroMines_EventScript_ChimeraAdminEvent_Text_8:
# 151 "data/maps/MarmaroMines/scripts.pory"
	.string "The {COLOR GREEN}Marmaro Mines Minigame{COLOR DARK_GRAY} has been\n"
	.string "unlocked! Speak to {COLOR GREEN}Petros{COLOR DARK_GRAY} to\l"
	.string "participate.$"

MarmaroMines_EventScript_Petros_Text_0:
# 192 "data/maps/MarmaroMines/scripts.pory"
	.string "Chaire, {PLAYER}! Good to see your\n"
	.string "face around here. Are you interested in\l"
	.string "a {COLOR GREEN}Mining Expedition{COLOR DARK_GRAY}?$"

MarmaroMines_EventScript_Petros_Text_1:
# 198 "data/maps/MarmaroMines/scripts.pory"
	.string "Alright. Come on back when you want to\n"
	.string "go mining.$"

MarmaroMines_EventScript_Petros_Text_2:
# 206 "data/maps/MarmaroMines/scripts.pory"
	.string "Great! There's a nice spot just nearby.\n"
	.string "Follow me!$"

MarmaroMines_EventScript_Petros_Text_3:
# 218 "data/maps/MarmaroMines/scripts.pory"
	.string "You've been a big help in our mining\n"
	.string "operations. I want you to take this\l"
	.string "Decoration.$"

MarmaroMines_EventScript_MinigameRulesSign_Text_0:
# 233 "data/maps/MarmaroMines/scripts.pory"
	.string "Marmaro Mining Expedition Rules\p"
	.string "Use the Hammer and Pick tools to break\n"
	.string "through the layers of stone. A wide\l"
	.string "variety of treasures and minerals can\l"
	.string "be found. {PLAYER} is permitted to\l"
	.string "keep these treasures on account of\l"
	.string "their bravery during the raid by Team\l"
	.string "Chimera.\p"
	.string "Mining spots are fragile, breaking down\n"
	.string "with every swing of a tool. After enough\l"
	.string "hits, the wall will collapse, and all\l"
	.string "treasures that were not excavated will\l"
	.string "be lost. Please, be careful and enjoy!$"

MarmaroMines_Text_Trainer_MarmaroMines_Grunt_1Intro::
# 48 "data/maps/MarmaroMines/scripts.pory"
	.string "We were warned about you! You're going\n"
	.string "down!$"

MarmaroMines_Text_Trainer_MarmaroMines_Grunt_1Defeat::
# 52 "data/maps/MarmaroMines/scripts.pory"
	.string "Woah, you're serious...$"

MarmaroMines_Text_Trainer_MarmaroMines_Grunt_2Intro::
# 66 "data/maps/MarmaroMines/scripts.pory"
	.string "Fwahaha, you're too late! One of our\n"
	.string "Admins took the Ancient Mechanism\l"
	.string "fragment away already!$"

MarmaroMines_Text_Trainer_MarmaroMines_Grunt_2Defeat::
# 70 "data/maps/MarmaroMines/scripts.pory"
	.string "Still, we were told to fight you off!$"

MarmaroMines_Text_ChimeraAdminDefeated::
# 156 "data/maps/MarmaroMines/scripts.pory"
	.string "ARGH! HOW - hrmph, it doesn't matter,\n"
	.string "anyway.$"

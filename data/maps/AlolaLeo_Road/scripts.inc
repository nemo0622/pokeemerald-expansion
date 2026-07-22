AlolaLeo_Road_MapScripts::
	.byte 0


AlolaLeo_Road_Script_RoadBlockedByTauros::
# 9 "data//maps/AlolaLeo_Road/scripts.pory"
	lock
# 10 "data//maps/AlolaLeo_Road/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 11 "data//maps/AlolaLeo_Road/scripts.pory"
	switch VAR_TEMP_2
# 13 "data//maps/AlolaLeo_Road/scripts.pory"
	case 16, AlolaLeo_Road_Script_RoadBlockedByTauros_3
# 16 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement LOCALID_PLAYER, AlolaLeo_Road_Script_RoadBlockedByTauros_Movement_1
AlolaLeo_Road_Script_RoadBlockedByTauros_1:
# 18 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 19 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 20 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 22 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Script_RoadBlockedByTauros_Text_0
# 23 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Script_RoadBlockedByTauros_Text_1
# 24 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 25 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 10
# 26 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 27 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 28 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 3, Common_Movement_WalkRight
# 29 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 30 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Script_RoadBlockedByTauros_Text_2
# 31 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Script_RoadBlockedByTauros_Text_3
# 32 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 33 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 10
# 34 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 3, AlolaLeo_Road_Script_RoadBlockedByTauros_Movement_2
# 35 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 36 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 37 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 38 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 39 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Script_RoadBlockedByTauros_Text_0
# 40 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Script_RoadBlockedByTauros_Text_4
# 41 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 45 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 10
# 46 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 1, AlolaLeo_Road_Script_RoadBlockedByTauros_Movement_3
# 47 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 2, AlolaLeo_Road_Script_RoadBlockedByTauros_Movement_4
# 48 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 100
# 49 "data//maps/AlolaLeo_Road/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 50 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 30
# 51 "data//maps/AlolaLeo_Road/scripts.pory"
	setflag FLAG_HIDE_LILLIE_ALOLA_LEO_SCHOOL
# 52 "data//maps/AlolaLeo_Road/scripts.pory"
	removeobject 1
# 53 "data//maps/AlolaLeo_Road/scripts.pory"
	removeobject 2
# 54 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 30
# 55 "data//maps/AlolaLeo_Road/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 56 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 20
# 57 "data//maps/AlolaLeo_Road/scripts.pory"
	releaseall
	end

AlolaLeo_Road_Script_RoadBlockedByTauros_3:
# 14 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement LOCALID_PLAYER, AlolaLeo_Road_Script_RoadBlockedByTauros_Movement_0
	goto AlolaLeo_Road_Script_RoadBlockedByTauros_1


AlolaLeo_Road_Trainer_LassHiromi::
# 74 "data//maps/AlolaLeo_Road/scripts.pory"
	trainerbattle_single TRAINER_LASS_HIROMI, AlolaLeo_Road_Trainer_LassHiromi_Text_0, AlolaLeo_Road_Trainer_LassHiromi_Text_1
# 78 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Trainer_LassHiromi_Text_2
# 79 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_LassHiromi_Text_3
# 80 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 81 "data//maps/AlolaLeo_Road/scripts.pory"
	release
	end


# 14 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Script_RoadBlockedByTauros_Movement_0:
# 14 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_down
# 14 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 14 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 14 "data//maps/AlolaLeo_Road/scripts.pory"
	face_up
# 14 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 16 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Script_RoadBlockedByTauros_Movement_1:
# 16 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 16 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 16 "data//maps/AlolaLeo_Road/scripts.pory"
	face_up
# 16 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 34 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Script_RoadBlockedByTauros_Movement_2:
# 34 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 34 "data//maps/AlolaLeo_Road/scripts.pory"
	face_down
# 34 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 46 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Script_RoadBlockedByTauros_Movement_3:
# 46 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 46 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 46 "data//maps/AlolaLeo_Road/scripts.pory"
	face_down
# 46 "data//maps/AlolaLeo_Road/scripts.pory"
	delay_16
# 46 "data//maps/AlolaLeo_Road/scripts.pory"
	delay_16
# 46 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 46 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 46 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 46 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 46 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 47 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Script_RoadBlockedByTauros_Movement_4:
# 47 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 47 "data//maps/AlolaLeo_Road/scripts.pory"
	face_down
# 47 "data//maps/AlolaLeo_Road/scripts.pory"
	emote_heart
# 47 "data//maps/AlolaLeo_Road/scripts.pory"
	delay_16
# 47 "data//maps/AlolaLeo_Road/scripts.pory"
	delay_16
# 47 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 47 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 47 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 47 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 47 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

AlolaLeo_Road_Script_RoadBlockedByTauros_Text_0:
# 22 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Lillie$"

AlolaLeo_Road_Script_RoadBlockedByTauros_Text_1:
# 23 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "{PLAYER}...! {COLOR BLUE}Nebbie{COLOR DARK_GRAY} and I were just\n"
	.string "coming to the Trainer School, but look...$"

AlolaLeo_Road_Script_RoadBlockedByTauros_Text_2:
# 30 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Hala$"

AlolaLeo_Road_Script_RoadBlockedByTauros_Text_3:
# 31 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "You two were right to stop. It seems\n"
	.string "like ol' {COLOR BLUE}Tauros{COLOR DARK_GRAY} here is feeling stubborn\l"
	.string "as, well, a {COLOR BLUE}Tauros{COLOR DARK_GRAY}!\p"
	.string "I'll stay here and try to calm it down.\n"
	.string "In the meantime, you should chat with\l"
	.string "the students at the Trainer School.\l"
	.string "Some might even want to {COLOR GREEN}battle you{COLOR DARK_GRAY}!$"

AlolaLeo_Road_Script_RoadBlockedByTauros_Text_4:
# 40 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Well, I guess that works out... ehehe!\p"
	.string "I've never had a Pokémon battle before,\n"
	.string "and {COLOR BLUE}Nebbie{COLOR DARK_GRAY} shouldn't draw too much\l"
	.string "attention... I think I'll head inside!$"

AlolaLeo_Road_Trainer_LassHiromi_Text_0:
# 75 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "I'll be the best Trainer at this whole\n"
	.string "school!$"

AlolaLeo_Road_Trainer_LassHiromi_Text_1:
# 76 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "I'll be stronger one day, you'll see!$"

AlolaLeo_Road_Trainer_LassHiromi_Text_2:
# 78 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Lass Hiromi$"

AlolaLeo_Road_Trainer_LassHiromi_Text_3:
# 79 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Our school is pretty small, but we learn\n"
	.string "a lot about Pokémon!$"

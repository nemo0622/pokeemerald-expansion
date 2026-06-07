# 1 "data//maps/IkiTown/scripts.pory"

# 2 "data//maps/IkiTown/scripts.pory"
IkiTown_MapScripts::
# 3 "data//maps/IkiTown/scripts.pory"
	.byte 0

IkiTown_Script_HalaIntro::
# 8 "data//maps/IkiTown/scripts.pory"
	lockall
# 9 "data//maps/IkiTown/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 10 "data//maps/IkiTown/scripts.pory"
	switch VAR_TEMP_1
# 12 "data//maps/IkiTown/scripts.pory"
	case 26, IkiTown_Script_HalaIntro_3
# 14 "data//maps/IkiTown/scripts.pory"
	case 28, IkiTown_Script_HalaIntro_4
# 17 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
IkiTown_Script_HalaIntro_1:
# 22 "data//maps/IkiTown/scripts.pory"
	delay 10
# 23 "data//maps/IkiTown/scripts.pory"
	emote 2, EMOTE_EXCLAM
# 24 "data//maps/IkiTown/scripts.pory"
	applymovement 2, IkiTown_Script_HalaIntro_Movement_2
# 25 "data//maps/IkiTown/scripts.pory"
	applymovement 3, IkiTown_Script_HalaIntro_Movement_3
# 26 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 27 "data//maps/IkiTown/scripts.pory"
	delay 20
# 30 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 31 "data//maps/IkiTown/scripts.pory"
	applymovement 4, IkiTown_Script_HalaIntro_Movement_4
# 32 "data//maps/IkiTown/scripts.pory"
	delay 80
# 33 "data//maps/IkiTown/scripts.pory"
	applymovement 5, IkiTown_Script_HalaIntro_Movement_5
# 34 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 35 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 36 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 37 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_HalaIntro_Text_0
# 38 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_HalaIntro_Text_1
# 39 "data//maps/IkiTown/scripts.pory"
	closemessage
# 40 "data//maps/IkiTown/scripts.pory"
	applymovement 5, IkiTown_Script_HalaIntro_Movement_6
# 41 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 42 "data//maps/IkiTown/scripts.pory"
	setflag FLAG_HIDE_ALOLAN_EXEGGUTOR_IKI_TOWN
# 43 "data//maps/IkiTown/scripts.pory"
	removeobject 4
# 44 "data//maps/IkiTown/scripts.pory"
	removeobject 5
# 47 "data//maps/IkiTown/scripts.pory"
	delay 20
# 48 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_HALA_IKI, IkiTown_Script_HalaIntro_Movement_7
# 49 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 50 "data//maps/IkiTown/scripts.pory"
	emote LOCALID_HALA_IKI, EMOTE_QUESTION
# 51 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_HalaIntro_Text_2
# 52 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_HalaIntro_Text_3
# 53 "data//maps/IkiTown/scripts.pory"
	closemessage
# 54 "data//maps/IkiTown/scripts.pory"
	delay 10
# 55 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_HALA_IKI, IkiTown_Script_HalaIntro_Movement_8
# 56 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 57 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_HalaIntro_Text_4
# 58 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_HalaIntro_Text_5
# 59 "data//maps/IkiTown/scripts.pory"
	closemessage
# 61 "data//maps/IkiTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 62 "data//maps/IkiTown/scripts.pory"
	delay 30
# 63 "data//maps/IkiTown/scripts.pory"
	setvar VAR_INTRO_STATE, 5
# 64 "data//maps/IkiTown/scripts.pory"
	setflag FLAG_HIDE_HALA_INTRO_IKI_TOWN
# 65 "data//maps/IkiTown/scripts.pory"
	removeobject LOCALID_HALA_IKI
# 66 "data//maps/IkiTown/scripts.pory"
	delay 30
# 67 "data//maps/IkiTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 68 "data//maps/IkiTown/scripts.pory"
	delay 15
# 70 "data//maps/IkiTown/scripts.pory"
	releaseall
	end

IkiTown_Script_HalaIntro_3:
# 13 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, IkiTown_Script_HalaIntro_Movement_0
	goto IkiTown_Script_HalaIntro_1

IkiTown_Script_HalaIntro_4:
# 15 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, IkiTown_Script_HalaIntro_Movement_1
	goto IkiTown_Script_HalaIntro_1


IkiTown_NPC_Hala::
# 78 "data//maps/IkiTown/scripts.pory"
	lock
# 79 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 80 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_Hala_Text_0
# 81 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_Hala_Text_1
# 82 "data//maps/IkiTown/scripts.pory"
	closemessage
# 83 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_KukuiWithExeggutor::
# 89 "data//maps/IkiTown/scripts.pory"
	lock
# 90 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 91 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_HalaIntro_Text_0
# 92 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_KukuiWithExeggutor_Text_0
# 93 "data//maps/IkiTown/scripts.pory"
	closemessage
# 94 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_AlolanExeggutor::
# 100 "data//maps/IkiTown/scripts.pory"
	lock
# 101 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 102 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_AlolanExeggutor_Text_0
# 103 "data//maps/IkiTown/scripts.pory"
	playmoncry SPECIES_EXEGGUTOR_ALOLA, CRY_MODE_NORMAL
# 104 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_AlolanExeggutor_Text_1
# 105 "data//maps/IkiTown/scripts.pory"
	waitmoncry
# 106 "data//maps/IkiTown/scripts.pory"
	closemessage
# 107 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_LassByFlowers::
# 113 "data//maps/IkiTown/scripts.pory"
	lock
# 114 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 115 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_LassByFlowers_Text_0
# 116 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_LassByFlowers_Text_1
# 117 "data//maps/IkiTown/scripts.pory"
	closemessage
# 118 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_SchoolBoy::
# 124 "data//maps/IkiTown/scripts.pory"
	lock
# 125 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 126 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_SchoolBoy_Text_0
# 127 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_SchoolBoy_Text_1
# 128 "data//maps/IkiTown/scripts.pory"
	closemessage
# 129 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_SchoolGirl::
# 135 "data//maps/IkiTown/scripts.pory"
	lock
# 136 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 137 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_SchoolGirl_Text_0
# 138 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_SchoolGirl_Text_1
# 139 "data//maps/IkiTown/scripts.pory"
	closemessage
# 140 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_ManWandering::
# 146 "data//maps/IkiTown/scripts.pory"
	lock
# 147 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 148 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_ManWandering_Text_0
# 149 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_ManWandering_Text_1
# 150 "data//maps/IkiTown/scripts.pory"
	closemessage
# 151 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_DancerWithOricorio::
# 157 "data//maps/IkiTown/scripts.pory"
	lock
# 158 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_DancerWithOricorio_Text_0
# 159 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_DancerWithOricorio_Text_1
# 160 "data//maps/IkiTown/scripts.pory"
	closemessage
# 163 "data//maps/IkiTown/scripts.pory"
	delay 10
# 164 "data//maps/IkiTown/scripts.pory"
	applymovement 12, IkiTown_NPC_DancerWithOricorio_Movement_0
# 165 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 166 "data//maps/IkiTown/scripts.pory"
	applymovement 13, IkiTown_NPC_DancerWithOricorio_Movement_1
# 167 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 169 "data//maps/IkiTown/scripts.pory"
	emote 11, EMOTE_X
# 170 "data//maps/IkiTown/scripts.pory"
	delay 10
# 171 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 172 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_DancerWithOricorio_Text_0
# 173 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_DancerWithOricorio_Text_2
# 174 "data//maps/IkiTown/scripts.pory"
	closemessage
# 175 "data//maps/IkiTown/scripts.pory"
	applymovement 11, Common_Movement_FaceUp
# 176 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 177 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_OricorioPomPom::
# 183 "data//maps/IkiTown/scripts.pory"
	lock
# 184 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 185 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_OricorioPomPom_Text_0
# 186 "data//maps/IkiTown/scripts.pory"
	playmoncry SPECIES_ORICORIO_POM_POM, CRY_MODE_NORMAL
# 187 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_OricorioPomPom_Text_1
# 188 "data//maps/IkiTown/scripts.pory"
	waitmoncry
# 189 "data//maps/IkiTown/scripts.pory"
	closemessage
# 190 "data//maps/IkiTown/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 191 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 192 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_OricorioPau::
# 197 "data//maps/IkiTown/scripts.pory"
	lock
# 198 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 199 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_OricorioPomPom_Text_0
# 200 "data//maps/IkiTown/scripts.pory"
	playmoncry SPECIES_ORICORIO_POM_POM, CRY_MODE_NORMAL
# 201 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_OricorioPau_Text_0
# 202 "data//maps/IkiTown/scripts.pory"
	waitmoncry
# 203 "data//maps/IkiTown/scripts.pory"
	closemessage
# 204 "data//maps/IkiTown/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 205 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 206 "data//maps/IkiTown/scripts.pory"
	release
	end


# 13 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_HalaIntro_Movement_0:
# 13 "data//maps/IkiTown/scripts.pory"
	walk_right
# 13 "data//maps/IkiTown/scripts.pory"
	walk_up
# 13 "data//maps/IkiTown/scripts.pory"
	walk_up
# 13 "data//maps/IkiTown/scripts.pory"
	delay_16
# 13 "data//maps/IkiTown/scripts.pory"
	delay_16
# 13 "data//maps/IkiTown/scripts.pory"
	face_right
# 13 "data//maps/IkiTown/scripts.pory"
	step_end

# 15 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_HalaIntro_Movement_1:
# 15 "data//maps/IkiTown/scripts.pory"
	walk_left
# 15 "data//maps/IkiTown/scripts.pory"
	walk_up
# 15 "data//maps/IkiTown/scripts.pory"
	walk_up
# 15 "data//maps/IkiTown/scripts.pory"
	delay_16
# 15 "data//maps/IkiTown/scripts.pory"
	delay_16
# 15 "data//maps/IkiTown/scripts.pory"
	face_right
# 15 "data//maps/IkiTown/scripts.pory"
	step_end

# 24 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_HalaIntro_Movement_2:
# 24 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 24 "data//maps/IkiTown/scripts.pory"
	walk_fast_down
# 24 "data//maps/IkiTown/scripts.pory"
	walk_fast_left
# 24 "data//maps/IkiTown/scripts.pory"
	walk_fast_up
# 24 "data//maps/IkiTown/scripts.pory"
	face_right
# 24 "data//maps/IkiTown/scripts.pory"
	step_end

# 25 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_HalaIntro_Movement_3:
# 25 "data//maps/IkiTown/scripts.pory"
	walk_fast_down
# 25 "data//maps/IkiTown/scripts.pory"
	walk_fast_left
# 25 "data//maps/IkiTown/scripts.pory"
	walk_fast_up
# 25 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 25 "data//maps/IkiTown/scripts.pory"
	face_left
# 25 "data//maps/IkiTown/scripts.pory"
	step_end

# 31 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_HalaIntro_Movement_4:
# 31 "data//maps/IkiTown/scripts.pory"
	walk_right
# 31 "data//maps/IkiTown/scripts.pory"
	walk_right
# 31 "data//maps/IkiTown/scripts.pory"
	walk_right
# 31 "data//maps/IkiTown/scripts.pory"
	walk_right
# 31 "data//maps/IkiTown/scripts.pory"
	walk_right
# 31 "data//maps/IkiTown/scripts.pory"
	walk_right
# 31 "data//maps/IkiTown/scripts.pory"
	walk_right
# 31 "data//maps/IkiTown/scripts.pory"
	walk_right
# 31 "data//maps/IkiTown/scripts.pory"
	walk_up
# 31 "data//maps/IkiTown/scripts.pory"
	walk_up
# 31 "data//maps/IkiTown/scripts.pory"
	walk_up
# 31 "data//maps/IkiTown/scripts.pory"
	walk_up
# 31 "data//maps/IkiTown/scripts.pory"
	walk_up
# 31 "data//maps/IkiTown/scripts.pory"
	walk_up
# 31 "data//maps/IkiTown/scripts.pory"
	step_end

# 33 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_HalaIntro_Movement_5:
# 33 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 33 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 33 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 33 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 33 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 33 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 33 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 33 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 33 "data//maps/IkiTown/scripts.pory"
	face_up
# 33 "data//maps/IkiTown/scripts.pory"
	delay_16
# 33 "data//maps/IkiTown/scripts.pory"
	jump_in_place_up
# 33 "data//maps/IkiTown/scripts.pory"
	jump_in_place_up
# 33 "data//maps/IkiTown/scripts.pory"
	step_end

# 40 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_HalaIntro_Movement_6:
# 40 "data//maps/IkiTown/scripts.pory"
	walk_fast_up
# 40 "data//maps/IkiTown/scripts.pory"
	walk_fast_up
# 40 "data//maps/IkiTown/scripts.pory"
	walk_fast_up
# 40 "data//maps/IkiTown/scripts.pory"
	walk_fast_up
# 40 "data//maps/IkiTown/scripts.pory"
	walk_fast_up
# 40 "data//maps/IkiTown/scripts.pory"
	walk_fast_up
# 40 "data//maps/IkiTown/scripts.pory"
	step_end

# 48 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_HalaIntro_Movement_7:
# 48 "data//maps/IkiTown/scripts.pory"
	walk_down
# 48 "data//maps/IkiTown/scripts.pory"
	walk_down
# 48 "data//maps/IkiTown/scripts.pory"
	walk_down
# 48 "data//maps/IkiTown/scripts.pory"
	face_up
# 48 "data//maps/IkiTown/scripts.pory"
	step_end

# 55 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_HalaIntro_Movement_8:
# 55 "data//maps/IkiTown/scripts.pory"
	walk_down
# 55 "data//maps/IkiTown/scripts.pory"
	walk_down
# 55 "data//maps/IkiTown/scripts.pory"
	face_down
# 55 "data//maps/IkiTown/scripts.pory"
	step_end

# 164 "data//maps/IkiTown/scripts.pory"
IkiTown_NPC_DancerWithOricorio_Movement_0:
# 164 "data//maps/IkiTown/scripts.pory"
	jump_left
# 164 "data//maps/IkiTown/scripts.pory"
	jump_right
# 164 "data//maps/IkiTown/scripts.pory"
	jump_right
# 164 "data//maps/IkiTown/scripts.pory"
	jump_left
# 164 "data//maps/IkiTown/scripts.pory"
	face_down
# 164 "data//maps/IkiTown/scripts.pory"
	step_end

# 166 "data//maps/IkiTown/scripts.pory"
IkiTown_NPC_DancerWithOricorio_Movement_1:
# 166 "data//maps/IkiTown/scripts.pory"
	walk_in_place_down
# 166 "data//maps/IkiTown/scripts.pory"
	walk_in_place_down
# 166 "data//maps/IkiTown/scripts.pory"
	walk_in_place_right
# 166 "data//maps/IkiTown/scripts.pory"
	walk_in_place_right
# 166 "data//maps/IkiTown/scripts.pory"
	walk_in_place_up
# 166 "data//maps/IkiTown/scripts.pory"
	walk_in_place_up
# 166 "data//maps/IkiTown/scripts.pory"
	walk_in_place_left
# 166 "data//maps/IkiTown/scripts.pory"
	walk_in_place_left
# 166 "data//maps/IkiTown/scripts.pory"
	face_down
# 166 "data//maps/IkiTown/scripts.pory"
	step_end

IkiTown_Script_HalaIntro_Text_0:
# 37 "data//maps/IkiTown/scripts.pory"
	.string "Prof. Kukui$"

IkiTown_Script_HalaIntro_Text_1:
# 38 "data//maps/IkiTown/scripts.pory"
	.string "Aue! Come on, just give me one good\n"
	.string "Dragon Hammer, {COLOR BLUE}Exeggutor{COLOR DARK_GRAY}!$"

IkiTown_Script_HalaIntro_Text_2:
# 51 "data//maps/IkiTown/scripts.pory"
	.string "???$"

IkiTown_Script_HalaIntro_Text_3:
# 52 "data//maps/IkiTown/scripts.pory"
	.string "Ohoho! Kukui never changes, does he?$"

IkiTown_Script_HalaIntro_Text_4:
# 57 "data//maps/IkiTown/scripts.pory"
	.string "Kahuna Hala$"

IkiTown_Script_HalaIntro_Text_5:
# 58 "data//maps/IkiTown/scripts.pory"
	.string "Alola! I'm glad to meet you, young\n"
	.string "Trainer. My name is {COLOR GREEN}Hala{COLOR DARK_GRAY}, {COLOR GREEN}Kahuna of\l"
	.string "Melemele Island{COLOR DARK_GRAY}.\p"
	.string "I've heard much and more about you.\n"
	.string "{PLAYER}, grandchild of the legendary\l"
	.string "Samson Oak, returning to their home\l"
	.string "island after so long away!\p"
	.string "The {COLOR GREEN}Manalo Festival{COLOR DARK_GRAY} begins soon.\n"
	.string "Before, this would be when you would be\l"
	.string "granted a Pokémon, but it seems they\l"
	.string "beat us to it!\p"
	.string "For now, please join in on the\n"
	.string "festivities. My grandson {COLOR GREEN}Hau{COLOR DARK_GRAY} has gone\l"
	.string "{COLOR GREEN}up Mahalo Trail{COLOR DARK_GRAY} - perhaps you could get\l"
	.string "to know him?$"

IkiTown_NPC_Hala_Text_0:
# 80 "data//maps/IkiTown/scripts.pory"
	.string "Hala$"

IkiTown_NPC_Hala_Text_1:
# 81 "data//maps/IkiTown/scripts.pory"
	.string "{PLAYER}, Alola! The {COLOR GREEN}Manalo Festival{COLOR DARK_GRAY}\n"
	.string "is still being set up. Tonight, we honor\l"
	.string "our Island Guardian and call on them for\l"
	.string "their protection.\p"
	.string "{COLOR GREEN}Hau{COLOR DARK_GRAY}, my grandson, has gone {COLOR GREEN}up Mahalo\n"
	.string "Trail{COLOR DARK_GRAY} with Kukui's Assistant. You should\l"
	.string "try to find them.$"

IkiTown_NPC_KukuiWithExeggutor_Text_0:
# 92 "data//maps/IkiTown/scripts.pory"
	.string "Check out this guy! {COLOR BLUE}Alolan Exeggutor{COLOR DARK_GRAY}\n"
	.string "towers over most Pokémon, yeah! It's so\l"
	.string "high up, it doesn't seem to hear me\l"
	.string "sometimes...$"

IkiTown_NPC_AlolanExeggutor_Text_0:
# 102 "data//maps/IkiTown/scripts.pory"
	.string "Exeggutor$"

IkiTown_NPC_AlolanExeggutor_Text_1:
# 104 "data//maps/IkiTown/scripts.pory"
	.string "BRUW-AAAH!$"

IkiTown_NPC_LassByFlowers_Text_0:
# 115 "data//maps/IkiTown/scripts.pory"
	.string "Lass$"

IkiTown_NPC_LassByFlowers_Text_1:
# 116 "data//maps/IkiTown/scripts.pory"
	.string "Iki Town is usually a sleepy spot on top\n"
	.string "of a hill, but it lights up during the\l"
	.string "Manalo Festival!$"

IkiTown_NPC_SchoolBoy_Text_0:
# 126 "data//maps/IkiTown/scripts.pory"
	.string "School Boy$"

IkiTown_NPC_SchoolBoy_Text_1:
# 127 "data//maps/IkiTown/scripts.pory"
	.string "Kehehe, I got today off school! I love\n"
	.string "this time of year!$"

IkiTown_NPC_SchoolGirl_Text_0:
# 137 "data//maps/IkiTown/scripts.pory"
	.string "School Girl$"

IkiTown_NPC_SchoolGirl_Text_1:
# 138 "data//maps/IkiTown/scripts.pory"
	.string "There are Pokémon in the grass! Maybe\n"
	.string "I'll catch one someday...$"

IkiTown_NPC_ManWandering_Text_0:
# 148 "data//maps/IkiTown/scripts.pory"
	.string "Man$"

IkiTown_NPC_ManWandering_Text_1:
# 149 "data//maps/IkiTown/scripts.pory"
	.string "Did you know? The Manalo Festival\n"
	.string "celebrates {COLOR BLUE}Tapu Koko{COLOR DARK_GRAY}, the Guardian of\l"
	.string "Melemele Island.\p"
	.string "I read that some older stories refer to\n"
	.string "{COLOR RED}'The Blinding One'{COLOR DARK_GRAY}, but I don't know much\l"
	.string "about that.$"

IkiTown_NPC_DancerWithOricorio_Text_0:
# 158 "data//maps/IkiTown/scripts.pory"
	.string "Dancer$"

IkiTown_NPC_DancerWithOricorio_Text_1:
# 159 "data//maps/IkiTown/scripts.pory"
	.string "Okay, one more time... {COLOR BLUE}Oricorio{COLOR DARK_GRAY}, dance\n"
	.string "together!$"

IkiTown_NPC_DancerWithOricorio_Text_2:
# 173 "data//maps/IkiTown/scripts.pory"
	.string "{COLOR BLUE}Oricorio{COLOR DARK_GRAY} are wonderful dancers, but all\n"
	.string "have their own style. I'm hoping to\l"
	.string "dance with them in next year's Manalo\l"
	.string "Festival!$"

IkiTown_NPC_OricorioPomPom_Text_0:
# 185 "data//maps/IkiTown/scripts.pory"
	.string "Oricorio$"

IkiTown_NPC_OricorioPomPom_Text_1:
# 187 "data//maps/IkiTown/scripts.pory"
	.string "Chee-uh!$"

IkiTown_NPC_OricorioPau_Text_0:
# 201 "data//maps/IkiTown/scripts.pory"
	.string "Shee-ou!$"

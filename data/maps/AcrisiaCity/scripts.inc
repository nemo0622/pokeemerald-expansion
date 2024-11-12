AcrisiaCity_MapScripts::
# 3 "data/maps/AcrisiaCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AcrisiaCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AcrisiaCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/AcrisiaCity/scripts.pory"
	map_script_2 VAR_INTRO_STATE, 0, AcrisiaCity_EventScript_PlayerExitsTruck
	.2byte 0


AcrisiaCity_EventScript_PlayerExitsTruck::
# 11 "data/maps/AcrisiaCity/scripts.pory"
	setvar VAR_INTRO_STATE, 1
# 12 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_INTRO_TRUCK
# 13 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_SECOND_PROFESSOR_SPRITE
# 14 "data/maps/AcrisiaCity/scripts.pory"
	lockall
# 15 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerOffTruck
# 16 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 19 "data/maps/AcrisiaCity/scripts.pory"
	playse SE_PIN
# 20 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 21 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 22 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 23 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_1
# 24 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 27 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 28 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfGetsAbovePlayer
# 29 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 30 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1
# 31 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1
# 32 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 33 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 34 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_2
# 35 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 36 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2
# 37 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2
# 38 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 40 "data/maps/AcrisiaCity/scripts.pory"
	hideobjectat 12, MAP_ACRISIA_CITY
# 42 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 43 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 44 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 45 "data/maps/AcrisiaCity/scripts.pory"
	warpsilent MAP_ACRISIA_CITY_UNIVERSITY, 10, 19
# 46 "data/maps/AcrisiaCity/scripts.pory"
	waitstate
# 48 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 50 "data/maps/AcrisiaCity/scripts.pory"
	releaseall
	end


# 54 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerOffTruck:
# 56 "data/maps/AcrisiaCity/scripts.pory"
	jump_right
# 57 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 58 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 59 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 62 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfGetsAbovePlayer:
# 64 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 65 "data/maps/AcrisiaCity/scripts.pory"
	walk_left
# 66 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 67 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 67 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 68 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 71 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1:
# 73 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 73 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 73 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 73 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 73 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 73 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 74 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 74 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 74 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 74 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 74 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 75 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 75 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 75 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 75 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 75 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 76 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 77 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 80 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1:
# 82 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 82 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 82 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 82 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 82 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 82 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 82 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 83 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 83 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 83 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 83 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 83 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 84 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 84 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 84 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 84 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 85 "data/maps/AcrisiaCity/scripts.pory"
	face_up
# 86 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 89 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2:
# 91 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 91 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 91 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 91 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 91 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 91 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 91 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 91 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 92 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 93 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 93 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 93 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 93 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 93 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 93 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 94 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 97 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2:
# 99 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 99 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 99 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 99 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 99 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 99 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 99 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 99 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 99 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 100 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 101 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 101 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 101 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 101 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 101 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 102 "data/maps/AcrisiaCity/scripts.pory"
	step_end

AcrisiaCity_EventScript_LadyByWater::
# 110 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 111 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 112 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 113 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_1
# 114 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 116 "data/maps/AcrisiaCity/scripts.pory"
	goto_if_unset FLAG_GOT_EVIOLITE_ACRISIA_CITY, AcrisiaCity_EventScript_LadyByWater_2
# 142 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 143 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_6
# 144 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
AcrisiaCity_EventScript_LadyByWater_1:
# 147 "data/maps/AcrisiaCity/scripts.pory"
	release
	end

AcrisiaCity_EventScript_LadyByWater_2:
# 118 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 119 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_2
# 121 "data/maps/AcrisiaCity/scripts.pory"
	getcaughtmon SPECIES_TOGEPI
# 122 "data/maps/AcrisiaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_EventScript_LadyByWater_5
# 130 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 131 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_4
# 132 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 133 "data/maps/AcrisiaCity/scripts.pory"
	giveitem ITEM_EVIOLITE
# 134 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 135 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_5
# 136 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
	goto AcrisiaCity_EventScript_LadyByWater_1

AcrisiaCity_EventScript_LadyByWater_5:
# 124 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 125 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_3
# 126 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
	goto AcrisiaCity_EventScript_LadyByWater_1


AcrisiaCity_EventScript_Woman2::
# 153 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 154 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 155 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Woman2_Text_0
# 156 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Woman2_Text_1
# 157 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 158 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Camper::
# 164 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 165 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 166 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Camper_Text_0
# 167 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Camper_Text_1
# 168 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 169 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_NinjaBoy::
# 175 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 176 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 177 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_NinjaBoy_Text_0
# 178 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_NinjaBoy_Text_1
# 179 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 180 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_RailMan::
# 186 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 187 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 188 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_RailMan_Text_0
# 189 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_RailMan_Text_1
# 190 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 191 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Spearow::
# 197 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 198 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 199 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Spearow_Text_0
# 200 "data/maps/AcrisiaCity/scripts.pory"
	playmoncry SPECIES_SPEAROW, CRY_MODE_NORMAL
# 201 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Spearow_Text_1
# 202 "data/maps/AcrisiaCity/scripts.pory"
	waitmoncry
# 203 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 204 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Growlithe::
# 210 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 211 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 212 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Growlithe_Text_0
# 213 "data/maps/AcrisiaCity/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 214 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Growlithe_Text_1
# 215 "data/maps/AcrisiaCity/scripts.pory"
	waitmoncry
# 216 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 217 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_OldMan::
# 223 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 224 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 225 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_OldMan_Text_0
# 226 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_OldMan_Text_1
# 227 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 228 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Gentleman::
# 234 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 235 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 236 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Gentleman_Text_0
# 237 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Gentleman_Text_1
# 238 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 239 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_PlayerExitsTruck_Text_0:
# 22 "data/maps/AcrisiaCity/scripts.pory"
	.string "Prof. Elia$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_1:
# 23 "data/maps/AcrisiaCity/scripts.pory"
	.string "Looks like you made it, {PLAYER}!\n"
	.string "Sorry about the rough ride, but there's\l"
	.string "no public transport up here. It's a bit...\l"
	.string "rural around here.\p"
	.string "Come, follow me! Let's get you to the\n"
	.string "University building!$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_2:
# 34 "data/maps/AcrisiaCity/scripts.pory"
	.string "As you can see, Acrisia City used to be\n"
	.string "a mining town. It's a bit past its prime\l"
	.string "now, but the folks here are still willing\l"
	.string "to support the University, so we've\l"
	.string "continued our research out of here!$"

AcrisiaCity_EventScript_LadyByWater_Text_0:
# 112 "data/maps/AcrisiaCity/scripts.pory"
	.string "Pokéfan Lady$"

AcrisiaCity_EventScript_LadyByWater_Text_1:
# 113 "data/maps/AcrisiaCity/scripts.pory"
	.string "Baby Pokémon are the cutest, don't you\n"
	.string "think?$"

AcrisiaCity_EventScript_LadyByWater_Text_2:
# 119 "data/maps/AcrisiaCity/scripts.pory"
	.string "I've always wanted to learn more about\n"
	.string "Togepi... hey! You're a researcher with\l"
	.string "the University! Come to me when you\l"
	.string "have a {COLOR GREEN}complete Pokédex entry{COLOR DARK_GRAY} of\l"
	.string "Togepi.$"

AcrisiaCity_EventScript_LadyByWater_Text_3:
# 125 "data/maps/AcrisiaCity/scripts.pory"
	.string "Hurry on now, I'll have a {COLOR GREEN}prize{COLOR DARK_GRAY} for you!$"

AcrisiaCity_EventScript_LadyByWater_Text_4:
# 131 "data/maps/AcrisiaCity/scripts.pory"
	.string "Goodness, you've caught a Togepi! That\n"
	.string "makes me so happy!\p"
	.string "Here, let me give you a little something.$"

AcrisiaCity_EventScript_LadyByWater_Text_5:
# 135 "data/maps/AcrisiaCity/scripts.pory"
	.string "The {COLOR GREEN}Eviolite{COLOR DARK_GRAY} stops Pokémon from\n"
	.string "evolving and boosts their stats.\p"
	.string "It's great if you want to keep your\n"
	.string "cute baby Pokémon strong!$"

AcrisiaCity_EventScript_LadyByWater_Text_6:
# 143 "data/maps/AcrisiaCity/scripts.pory"
	.string "I hope that {COLOR GREEN}Eviolite{COLOR DARK_GRAY} has been helpful\n"
	.string "for you! It'll make your cute little\l"
	.string "Pokémon a bit stronger!$"

AcrisiaCity_EventScript_Woman2_Text_0:
# 155 "data/maps/AcrisiaCity/scripts.pory"
	.string "Woman$"

AcrisiaCity_EventScript_Woman2_Text_1:
# 156 "data/maps/AcrisiaCity/scripts.pory"
	.string "Even though not much mining happens\n"
	.string "here anymore, plenty of Trainers still\l"
	.string "come through Acrisia City. People are\l"
	.string "always looking for advice and to train\l"
	.string "in the mountains.$"

AcrisiaCity_EventScript_Camper_Text_0:
# 166 "data/maps/AcrisiaCity/scripts.pory"
	.string "Camper$"

AcrisiaCity_EventScript_Camper_Text_1:
# 167 "data/maps/AcrisiaCity/scripts.pory"
	.string "My family is camping in the Acrisia\n"
	.string "Mountains! I came down to check out\l"
	.string "the University and wild Pokémon.$"

AcrisiaCity_EventScript_NinjaBoy_Text_0:
# 177 "data/maps/AcrisiaCity/scripts.pory"
	.string "Excited Boy$"

AcrisiaCity_EventScript_NinjaBoy_Text_1:
# 178 "data/maps/AcrisiaCity/scripts.pory"
	.string "The Pokémon here are so cool! I wanna\n"
	.string "find them all!$"

AcrisiaCity_EventScript_RailMan_Text_0:
# 188 "data/maps/AcrisiaCity/scripts.pory"
	.string "Nervous Man$"

AcrisiaCity_EventScript_RailMan_Text_1:
# 189 "data/maps/AcrisiaCity/scripts.pory"
	.string "I want to hop down and check this area\n"
	.string "out, but I'm too scared to jump... I\l"
	.string "should just get the Rock Smash HM.$"

AcrisiaCity_EventScript_Spearow_Text_0:
# 199 "data/maps/AcrisiaCity/scripts.pory"
	.string "Spearow$"

AcrisiaCity_EventScript_Spearow_Text_1:
# 201 "data/maps/AcrisiaCity/scripts.pory"
	.string "Craah!$"

AcrisiaCity_EventScript_Growlithe_Text_0:
# 212 "data/maps/AcrisiaCity/scripts.pory"
	.string "Growlithe$"

AcrisiaCity_EventScript_Growlithe_Text_1:
# 214 "data/maps/AcrisiaCity/scripts.pory"
	.string "Bwark bwark!$"

AcrisiaCity_EventScript_OldMan_Text_0:
# 225 "data/maps/AcrisiaCity/scripts.pory"
	.string "Old Man$"

AcrisiaCity_EventScript_OldMan_Text_1:
# 226 "data/maps/AcrisiaCity/scripts.pory"
	.string "Heavens, look at this harvest! Food\n"
	.string "comes up from Jusmail Town and feeds\l"
	.string "the folks up here.$"

AcrisiaCity_EventScript_Gentleman_Text_0:
# 236 "data/maps/AcrisiaCity/scripts.pory"
	.string "Gentleman$"

AcrisiaCity_EventScript_Gentleman_Text_1:
# 237 "data/maps/AcrisiaCity/scripts.pory"
	.string "Now that I'm retired, I like to sit here\n"
	.string "and watch the time pass. I can't help\l"
	.string "but smile seeing the lights come on in\l"
	.string "the evening!$"

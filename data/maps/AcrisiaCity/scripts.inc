AcrisiaCity_MapScripts::
# 6 "data/maps/AcrisiaCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 3 "data/maps/AcrisiaCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AcrisiaCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AcrisiaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_VISITED_ACRISIA_CITY
	return

AcrisiaCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/AcrisiaCity/scripts.pory"
	map_script_2 VAR_INTRO_STATE, 0, AcrisiaCity_EventScript_PlayerExitsTruck
	.2byte 0


AcrisiaCity_EventScript_PlayerExitsTruck::
# 14 "data/maps/AcrisiaCity/scripts.pory"
	setvar VAR_INTRO_STATE, 1
# 15 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_INTRO_TRUCK
# 16 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_SECOND_PROFESSOR_SPRITE
# 17 "data/maps/AcrisiaCity/scripts.pory"
	lockall
# 18 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerOffTruck
# 19 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 22 "data/maps/AcrisiaCity/scripts.pory"
	playse SE_PIN
# 23 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 24 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 25 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 26 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_1
# 27 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 30 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 31 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfGetsAbovePlayer
# 32 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 33 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1
# 34 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1
# 35 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 36 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_PlayerExitsTruck_Text_0
# 37 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_PlayerExitsTruck_Text_2
# 38 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 39 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 12, AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2
# 40 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2
# 41 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 43 "data/maps/AcrisiaCity/scripts.pory"
	hideobjectat 12, MAP_ACRISIA_CITY
# 45 "data/maps/AcrisiaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 46 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 47 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 48 "data/maps/AcrisiaCity/scripts.pory"
	warpsilent MAP_ACRISIA_CITY_UNIVERSITY, 10, 19
# 49 "data/maps/AcrisiaCity/scripts.pory"
	waitstate
# 51 "data/maps/AcrisiaCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 53 "data/maps/AcrisiaCity/scripts.pory"
	releaseall
	end


# 57 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerOffTruck:
# 59 "data/maps/AcrisiaCity/scripts.pory"
	jump_right
# 60 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 61 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 62 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 65 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfGetsAbovePlayer:
# 67 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 68 "data/maps/AcrisiaCity/scripts.pory"
	walk_left
# 69 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 70 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 70 "data/maps/AcrisiaCity/scripts.pory"
	delay_16
# 71 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 74 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_1:
# 76 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 76 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 76 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 76 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 76 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 76 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 77 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 77 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 77 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 77 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 77 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 78 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 78 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 78 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 78 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 78 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 79 "data/maps/AcrisiaCity/scripts.pory"
	face_down
# 80 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 83 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_1:
# 85 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 85 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 85 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 85 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 85 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 85 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 85 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 86 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 86 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 86 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 86 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 86 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 87 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 87 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 87 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 87 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 88 "data/maps/AcrisiaCity/scripts.pory"
	face_up
# 89 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 92 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_ProfWalksPlayerToUniversity_2:
# 94 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 94 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 94 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 94 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 94 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 94 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 94 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 94 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 94 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 95 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 95 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 95 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 95 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 95 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 95 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 95 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 95 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 95 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 95 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 95 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 95 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 95 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 95 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 95 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 95 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 95 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 95 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 95 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 95 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 96 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 96 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 96 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 96 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 96 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 97 "data/maps/AcrisiaCity/scripts.pory"
	step_end

# 100 "data/maps/AcrisiaCity/scripts.pory"
AcrisiaCity_Movement_PlayerFollowsProfToUniversity_2:
# 102 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 102 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 102 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 102 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 102 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 102 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 102 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 102 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 102 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 102 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 103 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 103 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 103 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 103 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 103 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 103 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 103 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 103 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 103 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 103 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 103 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 103 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 103 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 103 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 103 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 103 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 103 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 103 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 103 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 103 "data/maps/AcrisiaCity/scripts.pory"
	walk_right
# 104 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 104 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 104 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 104 "data/maps/AcrisiaCity/scripts.pory"
	walk_up
# 105 "data/maps/AcrisiaCity/scripts.pory"
	step_end

AcrisiaCity_EventScript_LadyByWater::
# 113 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 114 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 115 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 116 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_1
# 117 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 119 "data/maps/AcrisiaCity/scripts.pory"
	goto_if_unset FLAG_GOT_EVIOLITE_ACRISIA_CITY, AcrisiaCity_EventScript_LadyByWater_2
# 146 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 147 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_6
# 148 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
AcrisiaCity_EventScript_LadyByWater_1:
# 151 "data/maps/AcrisiaCity/scripts.pory"
	release
	end

AcrisiaCity_EventScript_LadyByWater_2:
# 121 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 122 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_2
# 124 "data/maps/AcrisiaCity/scripts.pory"
	getcaughtmon SPECIES_TOGEPI
# 125 "data/maps/AcrisiaCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_EventScript_LadyByWater_5
# 133 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 134 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_4
# 135 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 136 "data/maps/AcrisiaCity/scripts.pory"
	giveitem ITEM_EVIOLITE
# 137 "data/maps/AcrisiaCity/scripts.pory"
	setflag FLAG_GOT_EVIOLITE_ACRISIA_CITY
# 138 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 139 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_5
# 140 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
	goto AcrisiaCity_EventScript_LadyByWater_1

AcrisiaCity_EventScript_LadyByWater_5:
# 127 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_LadyByWater_Text_0
# 128 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_LadyByWater_Text_3
# 129 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
	goto AcrisiaCity_EventScript_LadyByWater_1


AcrisiaCity_EventScript_Woman2::
# 157 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 158 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 159 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Woman2_Text_0
# 160 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Woman2_Text_1
# 161 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 162 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Camper::
# 168 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 169 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 170 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Camper_Text_0
# 171 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Camper_Text_1
# 172 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 173 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_NinjaBoy::
# 179 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 180 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 181 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_NinjaBoy_Text_0
# 182 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_NinjaBoy_Text_1
# 183 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 184 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_RailMan::
# 190 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 191 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 192 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_RailMan_Text_0
# 193 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_RailMan_Text_1
# 194 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 195 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Growlithe::
# 201 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 202 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 203 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Growlithe_Text_0
# 204 "data/maps/AcrisiaCity/scripts.pory"
	playmoncry SPECIES_GROWLITHE_HISUI, CRY_MODE_NORMAL
# 205 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Growlithe_Text_1
# 206 "data/maps/AcrisiaCity/scripts.pory"
	waitmoncry
# 207 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 208 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Phanpy::
# 214 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 215 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 216 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Phanpy_Text_0
# 217 "data/maps/AcrisiaCity/scripts.pory"
	playmoncry SPECIES_PHANPY, CRY_MODE_NORMAL
# 218 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Phanpy_Text_1
# 219 "data/maps/AcrisiaCity/scripts.pory"
	waitmoncry
# 220 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 221 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_OldMan::
# 227 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 228 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 229 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_OldMan_Text_0
# 230 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_OldMan_Text_1
# 231 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 232 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_Gentleman::
# 238 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 239 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 240 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_Gentleman_Text_0
# 241 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_Gentleman_Text_1
# 242 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 243 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_FatMan::
# 249 "data/maps/AcrisiaCity/scripts.pory"
	lock
# 250 "data/maps/AcrisiaCity/scripts.pory"
	faceplayer
# 251 "data/maps/AcrisiaCity/scripts.pory"
	speakername AcrisiaCity_EventScript_FatMan_Text_0
# 252 "data/maps/AcrisiaCity/scripts.pory"
	msgbox AcrisiaCity_EventScript_FatMan_Text_1
# 253 "data/maps/AcrisiaCity/scripts.pory"
	closemessage
# 254 "data/maps/AcrisiaCity/scripts.pory"
	applymovement 23, Common_Movement_FaceUp
# 255 "data/maps/AcrisiaCity/scripts.pory"
	waitmovement 0
# 256 "data/maps/AcrisiaCity/scripts.pory"
	release
	end


AcrisiaCity_EventScript_PlayerExitsTruck_Text_0:
# 25 "data/maps/AcrisiaCity/scripts.pory"
	.string "Prof. Elia$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_1:
# 26 "data/maps/AcrisiaCity/scripts.pory"
	.string "Looks like you made it, {PLAYER}!\n"
	.string "Sorry about the rough ride, but there's\l"
	.string "no public transport up here. It's a bit...\l"
	.string "rural around here.\p"
	.string "Come, follow me! Let's get you to the\n"
	.string "University building!$"

AcrisiaCity_EventScript_PlayerExitsTruck_Text_2:
# 37 "data/maps/AcrisiaCity/scripts.pory"
	.string "As you can see, Acrisia City used to be\n"
	.string "a mining town. It's a bit past its prime\l"
	.string "now, but the folks here are still willing\l"
	.string "to support the University, so we've\l"
	.string "continued our research out of here!$"

AcrisiaCity_EventScript_LadyByWater_Text_0:
# 115 "data/maps/AcrisiaCity/scripts.pory"
	.string "Pokéfan Lady$"

AcrisiaCity_EventScript_LadyByWater_Text_1:
# 116 "data/maps/AcrisiaCity/scripts.pory"
	.string "Baby Pokémon are the cutest, don't you\n"
	.string "think?$"

AcrisiaCity_EventScript_LadyByWater_Text_2:
# 122 "data/maps/AcrisiaCity/scripts.pory"
	.string "I've always wanted to learn more about\n"
	.string "Togepi... hey! You're a researcher with\l"
	.string "the University! Come to me when you\l"
	.string "have a {COLOR GREEN}complete Pokédex entry{COLOR DARK_GRAY} of\l"
	.string "Togepi.$"

AcrisiaCity_EventScript_LadyByWater_Text_3:
# 128 "data/maps/AcrisiaCity/scripts.pory"
	.string "Hurry on now, I'll have a {COLOR GREEN}prize{COLOR DARK_GRAY} for you!$"

AcrisiaCity_EventScript_LadyByWater_Text_4:
# 134 "data/maps/AcrisiaCity/scripts.pory"
	.string "Goodness, you've caught a Togepi! That\n"
	.string "makes me so happy!\p"
	.string "Here, let me give you a little something.$"

AcrisiaCity_EventScript_LadyByWater_Text_5:
# 139 "data/maps/AcrisiaCity/scripts.pory"
	.string "The {COLOR GREEN}Eviolite{COLOR DARK_GRAY} stops Pokémon from\n"
	.string "evolving and boosts their stats.\p"
	.string "It's great if you want to keep your\n"
	.string "cute baby Pokémon strong!$"

AcrisiaCity_EventScript_LadyByWater_Text_6:
# 147 "data/maps/AcrisiaCity/scripts.pory"
	.string "I hope that {COLOR GREEN}Eviolite{COLOR DARK_GRAY} has been helpful\n"
	.string "for you! It'll make your cute little\l"
	.string "Pokémon a bit stronger!$"

AcrisiaCity_EventScript_Woman2_Text_0:
# 159 "data/maps/AcrisiaCity/scripts.pory"
	.string "Woman$"

AcrisiaCity_EventScript_Woman2_Text_1:
# 160 "data/maps/AcrisiaCity/scripts.pory"
	.string "Even though not much mining happens\n"
	.string "here anymore, plenty of Trainers still\l"
	.string "come through Acrisia City. People are\l"
	.string "always looking for advice and to train\l"
	.string "in the mountains.$"

AcrisiaCity_EventScript_Camper_Text_0:
# 170 "data/maps/AcrisiaCity/scripts.pory"
	.string "Camper$"

AcrisiaCity_EventScript_Camper_Text_1:
# 171 "data/maps/AcrisiaCity/scripts.pory"
	.string "My family is camping in the Acrisia\n"
	.string "Mountains! I came down to check out\l"
	.string "the University and wild Pokémon.$"

AcrisiaCity_EventScript_NinjaBoy_Text_0:
# 181 "data/maps/AcrisiaCity/scripts.pory"
	.string "Excited Boy$"

AcrisiaCity_EventScript_NinjaBoy_Text_1:
# 182 "data/maps/AcrisiaCity/scripts.pory"
	.string "The Pokémon here are so cool! I wanna\n"
	.string "find them all!$"

AcrisiaCity_EventScript_RailMan_Text_0:
# 192 "data/maps/AcrisiaCity/scripts.pory"
	.string "Nervous Man$"

AcrisiaCity_EventScript_RailMan_Text_1:
# 193 "data/maps/AcrisiaCity/scripts.pory"
	.string "I want to hop down and check this area\n"
	.string "out, but I'm too scared to jump... I\l"
	.string "should just get the Rock Smash HM.$"

AcrisiaCity_EventScript_Growlithe_Text_0:
# 203 "data/maps/AcrisiaCity/scripts.pory"
	.string "Growlithe$"

AcrisiaCity_EventScript_Growlithe_Text_1:
# 205 "data/maps/AcrisiaCity/scripts.pory"
	.string "Bwark bwark!$"

AcrisiaCity_EventScript_Phanpy_Text_0:
# 216 "data/maps/AcrisiaCity/scripts.pory"
	.string "Phanpy$"

AcrisiaCity_EventScript_Phanpy_Text_1:
# 218 "data/maps/AcrisiaCity/scripts.pory"
	.string "Toooot!$"

AcrisiaCity_EventScript_OldMan_Text_0:
# 229 "data/maps/AcrisiaCity/scripts.pory"
	.string "Old Man$"

AcrisiaCity_EventScript_OldMan_Text_1:
# 230 "data/maps/AcrisiaCity/scripts.pory"
	.string "Heavens, look at this harvest! Food\n"
	.string "comes up from Jusmail Town and feeds\l"
	.string "the folks up here.$"

AcrisiaCity_EventScript_Gentleman_Text_0:
# 240 "data/maps/AcrisiaCity/scripts.pory"
	.string "Gentleman$"

AcrisiaCity_EventScript_Gentleman_Text_1:
# 241 "data/maps/AcrisiaCity/scripts.pory"
	.string "Now that I'm retired, I like to sit here\n"
	.string "and watch the time pass. I can't help\l"
	.string "but smile seeing the lights come on in\l"
	.string "the evening!$"

AcrisiaCity_EventScript_FatMan_Text_0:
# 251 "data/maps/AcrisiaCity/scripts.pory"
	.string "Man$"

AcrisiaCity_EventScript_FatMan_Text_1:
# 252 "data/maps/AcrisiaCity/scripts.pory"
	.string "I'm looking for some food for my Phanpy.\n"
	.string "Towns in the Ilios Region tend to have\l"
	.string "little farmers' markets like this.$"

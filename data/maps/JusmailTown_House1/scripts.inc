JusmailTown_House1_MapScripts::
# 2 "data/maps/JusmailTown_House1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, JusmailTown_House1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

JusmailTown_House1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/JusmailTown_House1/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, JusmailTown_House1_EventScript_CheckStatus
	.2byte 0


JusmailTown_House1_EventScript_CheckStatus::
# 9 "data/maps/JusmailTown_House1/scripts.pory"
	setvar VAR_TEMP_1, 1
# 10 "data/maps/JusmailTown_House1/scripts.pory"
	goto_if_unset FLAG_GOT_WAILMER_PAIL, JusmailTown_House1_EventScript_CheckStatus_2
# 14 "data/maps/JusmailTown_House1/scripts.pory"
	goto_if_unset FLAG_GOT_BERRY_CLUB_REWARD_20, JusmailTown_House1_EventScript_CheckStatus_17
JusmailTown_House1_EventScript_CheckStatus_15:
# 18 "data/maps/JusmailTown_House1/scripts.pory"
	goto_if_unset FLAG_GOT_BERRY_CLUB_REWARD_50, JusmailTown_House1_EventScript_CheckStatus_14
JusmailTown_House1_EventScript_CheckStatus_12:
# 22 "data/maps/JusmailTown_House1/scripts.pory"
	goto_if_unset FLAG_GOT_BERRY_CLUB_REWARD_100, JusmailTown_House1_EventScript_CheckStatus_11
JusmailTown_House1_EventScript_CheckStatus_9:
# 26 "data/maps/JusmailTown_House1/scripts.pory"
	goto_if_unset FLAG_GOT_BERRY_CLUB_REWARD_200, JusmailTown_House1_EventScript_CheckStatus_8
JusmailTown_House1_EventScript_CheckStatus_7:
# 32 "data/maps/JusmailTown_House1/scripts.pory"
	goto JusmailTown_House1_EventScript_EndScript
JusmailTown_House1_EventScript_CheckStatus_1:
# 34 "data/maps/JusmailTown_House1/scripts.pory"
	releaseall
	end

JusmailTown_House1_EventScript_CheckStatus_2:
# 12 "data/maps/JusmailTown_House1/scripts.pory"
	goto JusmailTown_House1_EventScript_EnterBuildingForFirstTime
	goto JusmailTown_House1_EventScript_CheckStatus_1

JusmailTown_House1_EventScript_CheckStatus_3:
# 16 "data/maps/JusmailTown_House1/scripts.pory"
	goto JusmailTown_House1_EventScript_EnterBuilding_20BerryTreeReward
	goto JusmailTown_House1_EventScript_CheckStatus_1

JusmailTown_House1_EventScript_CheckStatus_4:
# 20 "data/maps/JusmailTown_House1/scripts.pory"
	goto JusmailTown_House1_EventScript_EnterBuilding_50BerryTreeReward
	goto JusmailTown_House1_EventScript_CheckStatus_1

JusmailTown_House1_EventScript_CheckStatus_5:
# 24 "data/maps/JusmailTown_House1/scripts.pory"
	goto JusmailTown_House1_EventScript_EnterBuilding_100BerryTreeReward
	goto JusmailTown_House1_EventScript_CheckStatus_1

JusmailTown_House1_EventScript_CheckStatus_6:
# 28 "data/maps/JusmailTown_House1/scripts.pory"
	goto JusmailTown_House1_EventScript_EnterBuilding_200BerryTreeReward
	goto JusmailTown_House1_EventScript_CheckStatus_1

JusmailTown_House1_EventScript_CheckStatus_8:
# 26 "data/maps/JusmailTown_House1/scripts.pory"
	compare VAR_BERRY_TREES_PLANTED, 200
	goto_if_ge JusmailTown_House1_EventScript_CheckStatus_6
	goto JusmailTown_House1_EventScript_CheckStatus_7

JusmailTown_House1_EventScript_CheckStatus_11:
# 22 "data/maps/JusmailTown_House1/scripts.pory"
	compare VAR_BERRY_TREES_PLANTED, 100
	goto_if_ge JusmailTown_House1_EventScript_CheckStatus_5
	goto JusmailTown_House1_EventScript_CheckStatus_9

JusmailTown_House1_EventScript_CheckStatus_14:
# 18 "data/maps/JusmailTown_House1/scripts.pory"
	compare VAR_BERRY_TREES_PLANTED, 50
	goto_if_ge JusmailTown_House1_EventScript_CheckStatus_4
	goto JusmailTown_House1_EventScript_CheckStatus_12

JusmailTown_House1_EventScript_CheckStatus_17:
# 14 "data/maps/JusmailTown_House1/scripts.pory"
	compare VAR_BERRY_TREES_PLANTED, 20
	goto_if_ge JusmailTown_House1_EventScript_CheckStatus_3
	goto JusmailTown_House1_EventScript_CheckStatus_15


JusmailTown_House1_EventScript_Herdier::
# 40 "data/maps/JusmailTown_House1/scripts.pory"
	lock
# 41 "data/maps/JusmailTown_House1/scripts.pory"
	faceplayer
# 42 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_Herdier_Text_0
# 43 "data/maps/JusmailTown_House1/scripts.pory"
	playmoncry SPECIES_HERDIER, CRY_MODE_NORMAL
# 44 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_Herdier_Text_1
# 45 "data/maps/JusmailTown_House1/scripts.pory"
	waitmoncry
# 46 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 47 "data/maps/JusmailTown_House1/scripts.pory"
	release
	end


JusmailTown_House1_EventScript_Pumpkaboo::
# 53 "data/maps/JusmailTown_House1/scripts.pory"
	lock
# 54 "data/maps/JusmailTown_House1/scripts.pory"
	faceplayer
# 55 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_Pumpkaboo_Text_0
# 56 "data/maps/JusmailTown_House1/scripts.pory"
	playmoncry SPECIES_PUMPKABOO, CRY_MODE_NORMAL
# 57 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_Pumpkaboo_Text_1
# 58 "data/maps/JusmailTown_House1/scripts.pory"
	waitmoncry
# 59 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 60 "data/maps/JusmailTown_House1/scripts.pory"
	release
	end


JusmailTown_House1_EventScript_EnterBuildingForFirstTime::
# 66 "data/maps/JusmailTown_House1/scripts.pory"
	lockall
# 67 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 68 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 69 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 70 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 71 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 72 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 73 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 74 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 75 "data/maps/JusmailTown_House1/scripts.pory"
	delay 10
# 76 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 1, JusmailTown_House1_Movement_ArtistGreetsPlayer
# 77 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 2, JusmailTown_House1_Movement_PsychicGreetsPlayer
# 78 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 3, JusmailTown_House1_Movement_BeautyGreetsPlayer
# 79 "data/maps/JusmailTown_House1/scripts.pory"
	delay 60
# 81 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_0
# 82 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_1
# 83 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 84 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 85 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 87 "data/maps/JusmailTown_House1/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, JusmailTown_House1_EventScript_EnterBuildingForFirstTime_2
# 103 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_2
# 104 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_6
# 105 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 106 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 107 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 108 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_7
# 109 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_8
# 110 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 111 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 112 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 113 "data/maps/JusmailTown_House1/scripts.pory"
	delay 20
# 114 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 115 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 116 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_2
# 117 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_9
# 118 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 119 "data/maps/JusmailTown_House1/scripts.pory"
	delay 60
# 120 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 121 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 122 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_4
# 123 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_10
# 124 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 126 "data/maps/JusmailTown_House1/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 127 "data/maps/JusmailTown_House1/scripts.pory"
	setflag FLAG_GOT_WAILMER_PAIL
# 129 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 130 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 131 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_2
# 132 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_11
# 133 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 134 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 135 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 136 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_7
# 137 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_12
# 138 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 139 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 140 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 141 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_4
# 142 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_13
# 143 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 145 "data/maps/JusmailTown_House1/scripts.pory"
	warpsilent MAP_JUSMAIL_TOWN_HOUSE1, 6, 9
# 146 "data/maps/JusmailTown_House1/scripts.pory"
	waitstate
# 147 "data/maps/JusmailTown_House1/scripts.pory"
	goto JusmailTown_House1_EventScript_EndScript
JusmailTown_House1_EventScript_EnterBuildingForFirstTime_1:
# 149 "data/maps/JusmailTown_House1/scripts.pory"
	releaseall
	end

JusmailTown_House1_EventScript_EnterBuildingForFirstTime_2:
# 89 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_2
# 90 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_3
# 91 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 92 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 93 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 94 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_4
# 95 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_5
# 96 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 98 "data/maps/JusmailTown_House1/scripts.pory"
	warpsilent MAP_JUSMAIL_TOWN, 10, 14
# 99 "data/maps/JusmailTown_House1/scripts.pory"
	waitstate
	goto JusmailTown_House1_EventScript_EnterBuildingForFirstTime_1


JusmailTown_House1_EventScript_EndScript::
# 155 "data/maps/JusmailTown_House1/scripts.pory"
	lockall
# 156 "data/maps/JusmailTown_House1/scripts.pory"
	delay 10
# 157 "data/maps/JusmailTown_House1/scripts.pory"
	releaseall
	end


# 161 "data/maps/JusmailTown_House1/scripts.pory"
JusmailTown_House1_Movement_ArtistGreetsPlayer:
# 163 "data/maps/JusmailTown_House1/scripts.pory"
	jump_right
# 163 "data/maps/JusmailTown_House1/scripts.pory"
	jump_right
# 164 "data/maps/JusmailTown_House1/scripts.pory"
	walk_fast_down
# 164 "data/maps/JusmailTown_House1/scripts.pory"
	walk_fast_down
# 164 "data/maps/JusmailTown_House1/scripts.pory"
	walk_fast_down
# 164 "data/maps/JusmailTown_House1/scripts.pory"
	walk_fast_down
# 165 "data/maps/JusmailTown_House1/scripts.pory"
	walk_fast_right
# 165 "data/maps/JusmailTown_House1/scripts.pory"
	walk_fast_right
# 165 "data/maps/JusmailTown_House1/scripts.pory"
	walk_fast_right
# 166 "data/maps/JusmailTown_House1/scripts.pory"
	face_right
# 167 "data/maps/JusmailTown_House1/scripts.pory"
	step_end

# 170 "data/maps/JusmailTown_House1/scripts.pory"
JusmailTown_House1_Movement_PsychicGreetsPlayer:
# 172 "data/maps/JusmailTown_House1/scripts.pory"
	walk_fast_down
# 172 "data/maps/JusmailTown_House1/scripts.pory"
	walk_fast_down
# 173 "data/maps/JusmailTown_House1/scripts.pory"
	walk_fast_left
# 174 "data/maps/JusmailTown_House1/scripts.pory"
	face_left
# 175 "data/maps/JusmailTown_House1/scripts.pory"
	step_end

# 178 "data/maps/JusmailTown_House1/scripts.pory"
JusmailTown_House1_Movement_BeautyGreetsPlayer:
# 180 "data/maps/JusmailTown_House1/scripts.pory"
	walk_fast_down
# 181 "data/maps/JusmailTown_House1/scripts.pory"
	walk_fast_right
# 182 "data/maps/JusmailTown_House1/scripts.pory"
	walk_fast_down
# 183 "data/maps/JusmailTown_House1/scripts.pory"
	face_down
# 184 "data/maps/JusmailTown_House1/scripts.pory"
	step_end

JusmailTown_House1_EventScript_Artist::
# 191 "data/maps/JusmailTown_House1/scripts.pory"
	lock
# 192 "data/maps/JusmailTown_House1/scripts.pory"
	faceplayer
# 193 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_2
# 194 "data/maps/JusmailTown_House1/scripts.pory"
	message JusmailTown_House1_EventScript_Artist_Text_0
# 195 "data/maps/JusmailTown_House1/scripts.pory"
	waitmessage
# 196 "data/maps/JusmailTown_House1/scripts.pory"
	pokemart JusmailTown_House1_Mart_Mints
# 197 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 198 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 199 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_2
# 200 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_Artist_Text_1
# 201 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 202 "data/maps/JusmailTown_House1/scripts.pory"
	release
	end


	.align 2
# 206 "data/maps/JusmailTown_House1/scripts.pory"
JusmailTown_House1_Mart_Mints:
# 208 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 209 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 210 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 211 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 212 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 213 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 214 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_LAX_MINT
# 215 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 216 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 217 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_MILD_MINT
# 218 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_RASH_MINT
# 219 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 220 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_CALM_MINT
# 221 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 222 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 223 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 224 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 225 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 226 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 227 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 228 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

JusmailTown_House1_EventScript_Beauty::
# 233 "data/maps/JusmailTown_House1/scripts.pory"
	lock
# 234 "data/maps/JusmailTown_House1/scripts.pory"
	faceplayer
# 235 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_4
# 236 "data/maps/JusmailTown_House1/scripts.pory"
	message JusmailTown_House1_EventScript_Beauty_Text_0
# 237 "data/maps/JusmailTown_House1/scripts.pory"
	waitmessage
# 238 "data/maps/JusmailTown_House1/scripts.pory"
	pokemart JusmailTown_House1_Mart_Berries
# 239 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 240 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 241 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_4
# 242 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_Beauty_Text_1
# 243 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 244 "data/maps/JusmailTown_House1/scripts.pory"
	release
	end


	.align 2
# 248 "data/maps/JusmailTown_House1/scripts.pory"
JusmailTown_House1_Mart_Berries:
# 250 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 251 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 252 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 253 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 254 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 255 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 256 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 257 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 258 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 259 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_NONE

JusmailTown_House1_EventScript_Psychic::
# 264 "data/maps/JusmailTown_House1/scripts.pory"
	lock
# 265 "data/maps/JusmailTown_House1/scripts.pory"
	faceplayer
# 266 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_7
# 267 "data/maps/JusmailTown_House1/scripts.pory"
	message JusmailTown_House1_EventScript_Psychic_Text_0
# 268 "data/maps/JusmailTown_House1/scripts.pory"
	waitmessage
# 269 "data/maps/JusmailTown_House1/scripts.pory"
	pokemart JusmailTown_House1_Mart_Mulch
# 270 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 271 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 272 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_7
# 273 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_Psychic_Text_1
# 274 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 275 "data/maps/JusmailTown_House1/scripts.pory"
	release
	end


	.align 2
# 279 "data/maps/JusmailTown_House1/scripts.pory"
JusmailTown_House1_Mart_Mulch:
# 281 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_GROWTH_MULCH
# 282 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_DAMP_MULCH
# 283 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_RICH_MULCH
# 284 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_SURPRISE_MULCH
# 285 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_BOOST_MULCH
# 286 "data/maps/JusmailTown_House1/scripts.pory"
	.2byte ITEM_AMAZE_MULCH
	.2byte ITEM_NONE

JusmailTown_House1_EventScript_EnterBuilding_20BerryTreeReward::
# 293 "data/maps/JusmailTown_House1/scripts.pory"
	lockall
# 294 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 295 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 296 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 297 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 298 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 299 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 300 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 301 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 302 "data/maps/JusmailTown_House1/scripts.pory"
	delay 10
# 303 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 1, JusmailTown_House1_Movement_ArtistGreetsPlayer
# 304 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 2, JusmailTown_House1_Movement_PsychicGreetsPlayer
# 305 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 3, JusmailTown_House1_Movement_BeautyGreetsPlayer
# 306 "data/maps/JusmailTown_House1/scripts.pory"
	delay 60
# 308 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_0
# 309 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_20BerryTreeReward_Text_0
# 310 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 311 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 312 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 314 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_2
# 315 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_20BerryTreeReward_Text_1
# 316 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 317 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 318 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 319 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_7
# 320 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_20BerryTreeReward_Text_2
# 321 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 322 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 323 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 324 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_4
# 325 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_20BerryTreeReward_Text_3
# 326 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 328 "data/maps/JusmailTown_House1/scripts.pory"
	giveitem ITEM_CHILAN_BERRY, 1
# 329 "data/maps/JusmailTown_House1/scripts.pory"
	giveitem ITEM_HABAN_BERRY, 1
# 330 "data/maps/JusmailTown_House1/scripts.pory"
	giveitem ITEM_ROSELI_BERRY, 1
# 331 "data/maps/JusmailTown_House1/scripts.pory"
	setflag FLAG_GOT_BERRY_CLUB_REWARD_20
# 333 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_4
# 334 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_20BerryTreeReward_Text_4
# 335 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 336 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 337 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 338 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_2
# 339 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_20BerryTreeReward_Text_5
# 340 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 342 "data/maps/JusmailTown_House1/scripts.pory"
	warpsilent MAP_JUSMAIL_TOWN_HOUSE1, 6, 9
# 343 "data/maps/JusmailTown_House1/scripts.pory"
	waitstate
# 344 "data/maps/JusmailTown_House1/scripts.pory"
	goto JusmailTown_House1_EventScript_EndScript
# 345 "data/maps/JusmailTown_House1/scripts.pory"
	releaseall
	end


JusmailTown_House1_EventScript_EnterBuilding_50BerryTreeReward::
# 351 "data/maps/JusmailTown_House1/scripts.pory"
	lockall
# 352 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 353 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 354 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 355 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 356 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 357 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 358 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 359 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 360 "data/maps/JusmailTown_House1/scripts.pory"
	delay 10
# 361 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 1, JusmailTown_House1_Movement_ArtistGreetsPlayer
# 362 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 2, JusmailTown_House1_Movement_PsychicGreetsPlayer
# 363 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 3, JusmailTown_House1_Movement_BeautyGreetsPlayer
# 364 "data/maps/JusmailTown_House1/scripts.pory"
	delay 60
# 366 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_0
# 367 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_50BerryTreeReward_Text_0
# 368 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 369 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 370 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 372 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_2
# 373 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_50BerryTreeReward_Text_1
# 374 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 375 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 376 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 377 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_7
# 378 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_50BerryTreeReward_Text_2
# 379 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 380 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 381 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 382 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_4
# 383 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_50BerryTreeReward_Text_3
# 384 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 386 "data/maps/JusmailTown_House1/scripts.pory"
	setflag FLAG_GOT_BERRY_CLUB_REWARD_50
# 387 "data/maps/JusmailTown_House1/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_WOOBAT
# 388 "data/maps/JusmailTown_House1/scripts.pory"
	givemon SPECIES_WOOBAT, 20, ITEM_SITRUS_BERRY, ITEM_POKE_BALL, NATURE_MODEST, 2, MON_MALE, 0, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_CHATTER, MOVE_DRAINING_KISS, MOVE_STUFF_CHEEKS, MOVE_ESPER_WING
# 390 "data/maps/JusmailTown_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 391 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_50BerryTreeReward_Text_4
# 392 "data/maps/JusmailTown_House1/scripts.pory"
	waitfanfare
# 393 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 395 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_4
# 396 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_50BerryTreeReward_Text_5
# 397 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 398 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 399 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 400 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_2
# 401 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_50BerryTreeReward_Text_6
# 402 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 404 "data/maps/JusmailTown_House1/scripts.pory"
	warpsilent MAP_JUSMAIL_TOWN_HOUSE1, 6, 9
# 405 "data/maps/JusmailTown_House1/scripts.pory"
	waitstate
# 406 "data/maps/JusmailTown_House1/scripts.pory"
	goto JusmailTown_House1_EventScript_EndScript
# 407 "data/maps/JusmailTown_House1/scripts.pory"
	releaseall
	end


JusmailTown_House1_EventScript_EnterBuilding_100BerryTreeReward::
# 413 "data/maps/JusmailTown_House1/scripts.pory"
	lockall
# 414 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 415 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 416 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 417 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 418 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 419 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 420 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 421 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 422 "data/maps/JusmailTown_House1/scripts.pory"
	delay 10
# 423 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 1, JusmailTown_House1_Movement_ArtistGreetsPlayer
# 424 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 2, JusmailTown_House1_Movement_PsychicGreetsPlayer
# 425 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 3, JusmailTown_House1_Movement_BeautyGreetsPlayer
# 426 "data/maps/JusmailTown_House1/scripts.pory"
	delay 60
# 428 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_0
# 429 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_100BerryTreeReward_Text_0
# 430 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 431 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 432 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 434 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_2
# 435 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_100BerryTreeReward_Text_1
# 436 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 437 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 438 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 439 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_7
# 440 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_100BerryTreeReward_Text_2
# 441 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 442 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 443 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 444 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_4
# 445 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_100BerryTreeReward_Text_3
# 446 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 448 "data/maps/JusmailTown_House1/scripts.pory"
	giveitem ITEM_AMAZE_MULCH, 10
# 449 "data/maps/JusmailTown_House1/scripts.pory"
	setflag FLAG_GOT_BERRY_CLUB_REWARD_100
# 451 "data/maps/JusmailTown_House1/scripts.pory"
	giveitem ITEM_SHINY_CHARM
# 453 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_4
# 454 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_100BerryTreeReward_Text_4
# 455 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 456 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 457 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 458 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_2
# 459 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_100BerryTreeReward_Text_5
# 460 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 462 "data/maps/JusmailTown_House1/scripts.pory"
	warpsilent MAP_JUSMAIL_TOWN_HOUSE1, 6, 9
# 463 "data/maps/JusmailTown_House1/scripts.pory"
	waitstate
# 464 "data/maps/JusmailTown_House1/scripts.pory"
	goto JusmailTown_House1_EventScript_EndScript
# 465 "data/maps/JusmailTown_House1/scripts.pory"
	releaseall
	end


JusmailTown_House1_EventScript_EnterBuilding_200BerryTreeReward::
# 471 "data/maps/JusmailTown_House1/scripts.pory"
	lockall
# 472 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 473 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 474 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 475 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 476 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 477 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 478 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 479 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 480 "data/maps/JusmailTown_House1/scripts.pory"
	delay 10
# 481 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 1, JusmailTown_House1_Movement_ArtistGreetsPlayer
# 482 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 2, JusmailTown_House1_Movement_PsychicGreetsPlayer
# 483 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement 3, JusmailTown_House1_Movement_BeautyGreetsPlayer
# 484 "data/maps/JusmailTown_House1/scripts.pory"
	delay 60
# 486 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_0
# 487 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_200BerryTreeReward_Text_0
# 488 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 489 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 490 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 492 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_2
# 493 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_200BerryTreeReward_Text_1
# 494 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 495 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 496 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 497 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_7
# 498 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_200BerryTreeReward_Text_2
# 499 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 500 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 501 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 502 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_4
# 503 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_200BerryTreeReward_Text_3
# 504 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 506 "data/maps/JusmailTown_House1/scripts.pory"
	setflag FLAG_GOT_BERRY_CLUB_REWARD_200
# 507 "data/maps/JusmailTown_House1/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ARCHEN
# 508 "data/maps/JusmailTown_House1/scripts.pory"
	givemon SPECIES_ARCHEN, 50, ITEM_YACHE_BERRY, ITEM_POKE_BALL, NATURE_ADAMANT, 2, MON_FEMALE, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DUAL_WINGBEAT, MOVE_U_TURN, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE
# 510 "data/maps/JusmailTown_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 511 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_200BerryTreeReward_Text_4
# 512 "data/maps/JusmailTown_House1/scripts.pory"
	waitfanfare
# 513 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 515 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_4
# 516 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_200BerryTreeReward_Text_5
# 517 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 518 "data/maps/JusmailTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 519 "data/maps/JusmailTown_House1/scripts.pory"
	waitmovement 0
# 520 "data/maps/JusmailTown_House1/scripts.pory"
	speakername JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_2
# 521 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_EnterBuilding_200BerryTreeReward_Text_6
# 522 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 524 "data/maps/JusmailTown_House1/scripts.pory"
	warpsilent MAP_JUSMAIL_TOWN_HOUSE1, 6, 9
# 525 "data/maps/JusmailTown_House1/scripts.pory"
	waitstate
# 526 "data/maps/JusmailTown_House1/scripts.pory"
	goto JusmailTown_House1_EventScript_EndScript
# 527 "data/maps/JusmailTown_House1/scripts.pory"
	releaseall
	end


JusmailTown_House1_EventScript_CheckBerryTreeRecord::
# 535 "data/maps/JusmailTown_House1/scripts.pory"
	lock
# 536 "data/maps/JusmailTown_House1/scripts.pory"
	compare VAR_BERRY_TREES_PLANTED, 0
	goto_if_eq JusmailTown_House1_EventScript_CheckBerryTreeRecord_2
# 542 "data/maps/JusmailTown_House1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_BERRY_TREES_PLANTED
JusmailTown_House1_EventScript_CheckBerryTreeRecord_1:
# 544 "data/maps/JusmailTown_House1/scripts.pory"
	msgbox JusmailTown_House1_EventScript_CheckBerryTreeRecord_Text_1
# 545 "data/maps/JusmailTown_House1/scripts.pory"
	closemessage
# 546 "data/maps/JusmailTown_House1/scripts.pory"
	release
	end

JusmailTown_House1_EventScript_CheckBerryTreeRecord_2:
# 538 "data/maps/JusmailTown_House1/scripts.pory"
	bufferstring STR_VAR_1, JusmailTown_House1_EventScript_CheckBerryTreeRecord_Text_0
	goto JusmailTown_House1_EventScript_CheckBerryTreeRecord_1


JusmailTown_House1_EventScript_Herdier_Text_0:
# 42 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Herdier$"

JusmailTown_House1_EventScript_Herdier_Text_1:
# 44 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Arf arf!$"

JusmailTown_House1_EventScript_Pumpkaboo_Text_0:
# 55 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Pumpkaboo$"

JusmailTown_House1_EventScript_Pumpkaboo_Text_1:
# 57 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Ke ke ke!$"

JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_0:
# 81 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Group$"

JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_1:
# 82 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Opa, opa! Welcome to the Jusmail Town\n"
	.string "Berry Club!!$"

JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_2:
# 89 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Artist$"

JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_3:
# 90 "data/maps/JusmailTown_House1/scripts.pory"
	.string "What's this? I can't smell the scent of\n"
	.string "fresh grass and fruits on you... you\l"
	.string "must not have fought Deo yet! Oh no no\l"
	.string "NO, this won't do!\p"
	.string "Come back when you've {COLOR GREEN}beaten the\n"
	.string "Jusmail Town Gym Leader{COLOR DARK_GRAY}, darling.$"

JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_4:
# 94 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Beauty$"

JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_5:
# 95 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Don't take it to heart, hon. It's just\n"
	.string "the rule of the owner, he gets a little,\l"
	.string "well, intense.$"

JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_6:
# 104 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Mmmm, that smell... grass, fruit, a hint\n"
	.string "of honey... you must have beaten Deo!\l"
	.string "Congratulations!$"

JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_7:
# 108 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Psychic$"

JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_8:
# 109 "data/maps/JusmailTown_House1/scripts.pory"
	.string "You're now an official member of the\n"
	.string "Jusmail Town Berry Club! Uh, if that's\l"
	.string "alright with you, of course...$"

JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_9:
# 117 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Of course they're alright with it! This\n"
	.string "is the largest recognized Berry\l"
	.string "enthusiast club in town! That means a\l"
	.string "great deal to people like us!\p"
	.string "Pardon my outburst, darling... erm, I\n"
	.string "suppose I shouldn't call you that\l"
	.string "forever. What's your name?$"

JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_10:
# 123 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Well it's nice to actually meet you,\n"
	.string "{PLAYER}! Here's a little something to\l"
	.string "get you started on your Berry-growing\l"
	.string "journey.$"

JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_11:
# 132 "data/maps/JusmailTown_House1/scripts.pory"
	.string "We're dedicated to growing Berries all\n"
	.string "around Ilios. Here, we sell {COLOR GREEN}Mulch{COLOR DARK_GRAY} to\l"
	.string "enhance the soil, plus {COLOR GREEN}Berries and Mints{COLOR DARK_GRAY}\l"
	.string "to help your Pokémon!$"

JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_12:
# 137 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Berries here have some extra\n"
	.string "complexity. The soil needs to be kept\l"
	.string "moist and can be helped with our Mulch,\l"
	.string "and it's important to keep weeds and\l"
	.string "pests away from the plants. Berries can\l"
	.string "also hybridize, producing rare,\l"
	.string "{COLOR GREEN}damage-reducing Berry varieties{COLOR DARK_GRAY}!$"

JusmailTown_House1_EventScript_EnterBuildingForFirstTime_Text_13:
# 142 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Okay, okay, we've talked your ear off\n"
	.string "long enough. Glad to have you here!$"

JusmailTown_House1_EventScript_Artist_Text_0:
# 194 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Welcome back to the Berry Club, darling!\n"
	.string "How can I help you?$"

JusmailTown_House1_EventScript_Artist_Text_1:
# 200 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Come on back! Don't make me jump the\n"
	.string "counter again!$"

JusmailTown_House1_EventScript_Beauty_Text_0:
# 236 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Welcome back to the Berry Club, hon! How\n"
	.string "can I help you?$"

JusmailTown_House1_EventScript_Beauty_Text_1:
# 242 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Come back soon! And remember to try and\n"
	.string "hybridize your Berries!$"

JusmailTown_House1_EventScript_Psychic_Text_0:
# 267 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Welcome back to the Berry Club. Looking\n"
	.string "for some Mulch?$"

JusmailTown_House1_EventScript_Psychic_Text_1:
# 273 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Well, have fun with your Mulch! If you\n"
	.string "end up {COLOR GREEN}harvesting many Berry Trees{COLOR DARK_GRAY}, let\l"
	.string "us know! We might have a {COLOR GREEN}reward{COLOR DARK_GRAY} for you,\l"
	.string "ehehe!$"

JusmailTown_House1_EventScript_EnterBuilding_20BerryTreeReward_Text_0:
# 309 "data/maps/JusmailTown_House1/scripts.pory"
	.string "{PLAYER}! Chaire!!$"

JusmailTown_House1_EventScript_EnterBuilding_20BerryTreeReward_Text_1:
# 315 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Let me see your Wailmer Pail!\p"
	.string "Mhm, just as I thought, plenty of use.\n"
	.string "You must be growing Berries!$"

JusmailTown_House1_EventScript_EnterBuilding_20BerryTreeReward_Text_2:
# 320 "data/maps/JusmailTown_House1/scripts.pory"
	.string "It's not that common for people to\n"
	.string "really care about Berries like we do! We\l"
	.string "were talking, and we think it would be\l"
	.string "nice to reward you somehow.$"

JusmailTown_House1_EventScript_EnterBuilding_20BerryTreeReward_Text_3:
# 325 "data/maps/JusmailTown_House1/scripts.pory"
	.string "We've gotten into contact with fellow\n"
	.string "Berry-growers from other regions, and\l"
	.string "they've sent us these samples. We want\l"
	.string "you to have them!$"

JusmailTown_House1_EventScript_EnterBuilding_20BerryTreeReward_Text_4:
# 334 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Those Berries can help your Pokémon\n"
	.string "resist powerful moves of certain types.\p"
	.string "Remember, these are {COLOR GREEN}one of a kind{COLOR DARK_GRAY}, so\n"
	.string "make sure to plant them and grow more\l"
	.string "before using them!$"

JusmailTown_House1_EventScript_EnterBuilding_20BerryTreeReward_Text_5:
# 339 "data/maps/JusmailTown_House1/scripts.pory"
	.string "The more Berries you plant, the more\n"
	.string "people notice, darling! {COLOR GREEN}Keep planting{COLOR DARK_GRAY}\l"
	.string "Berries and caring for them, and we'll\l"
	.string "have {COLOR GREEN}more gifts{COLOR DARK_GRAY} for you.$"

JusmailTown_House1_EventScript_EnterBuilding_50BerryTreeReward_Text_0:
# 367 "data/maps/JusmailTown_House1/scripts.pory"
	.string "{PLAYER}! Welcome back!!$"

JusmailTown_House1_EventScript_EnterBuilding_50BerryTreeReward_Text_1:
# 373 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Just look at your Berry pouch of your\n"
	.string "Bag, darling! Residue from so many\l"
	.string "Berries!$"

JusmailTown_House1_EventScript_EnterBuilding_50BerryTreeReward_Text_2:
# 378 "data/maps/JusmailTown_House1/scripts.pory"
	.string "We've started to get some more\n"
	.string "recognition thanks to your\l"
	.string "Berry-planting efforts! You really must\l"
	.string "have been busy.$"

JusmailTown_House1_EventScript_EnterBuilding_50BerryTreeReward_Text_3:
# 383 "data/maps/JusmailTown_House1/scripts.pory"
	.string "We caught this Pokémon feeding on some\n"
	.string "of our Berries recently. You're the best\l"
	.string "trainer in the Berry Club, so we figured\l"
	.string "you should have it!$"

JusmailTown_House1_EventScript_EnterBuilding_50BerryTreeReward_Text_4:
# 391 "data/maps/JusmailTown_House1/scripts.pory"
	.string "{PLAYER} received the fruit-eating\n"
	.string "Woobat!$"

JusmailTown_House1_EventScript_EnterBuilding_50BerryTreeReward_Text_5:
# 396 "data/maps/JusmailTown_House1/scripts.pory"
	.string "That Woobat has {COLOR GREEN}special moves{COLOR DARK_GRAY} that\n"
	.string "none of us have seen the species use\l"
	.string "before. Maybe it can help you on your\l"
	.string "adventure!$"

JusmailTown_House1_EventScript_EnterBuilding_50BerryTreeReward_Text_6:
# 401 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Berries in the Ilios Region are getting\n"
	.string "more popular! {COLOR GREEN}Keep planting{COLOR DARK_GRAY} Berries and\l"
	.string "caring for them, and we'll have {COLOR GREEN}more\l"
	.string "gifts{COLOR DARK_GRAY} for you.$"

JusmailTown_House1_EventScript_EnterBuilding_100BerryTreeReward_Text_0:
# 429 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Chaire, {PLAYER}! Welcome back!$"

JusmailTown_House1_EventScript_EnterBuilding_100BerryTreeReward_Text_1:
# 435 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Is that... it is! Mulch on your hands!\n"
	.string "Ehehe, I knew you were a real Berry fan,\l"
	.string "darling!$"

JusmailTown_House1_EventScript_EnterBuilding_100BerryTreeReward_Text_2:
# 440 "data/maps/JusmailTown_House1/scripts.pory"
	.string "We just finished a regional Berry\n"
	.string "sampling study with Acrisia University,\l"
	.string "and the records show you've {COLOR GREEN}planted\l"
	.string "over 100 Berry Trees{COLOR DARK_GRAY}!$"

JusmailTown_House1_EventScript_EnterBuilding_100BerryTreeReward_Text_3:
# 445 "data/maps/JusmailTown_House1/scripts.pory"
	.string "You're helping keep the ecosystem of\n"
	.string "the Ilios Region healthy with your\l"
	.string "Berries. To celebrate the milestone, we\l"
	.string "got you a few things!$"

JusmailTown_House1_EventScript_EnterBuilding_100BerryTreeReward_Text_4:
# 454 "data/maps/JusmailTown_House1/scripts.pory"
	.string "That Amaze Mulch is good for more Berry\n"
	.string "growing, but we thought a Shiny Charm\l"
	.string "would be a nice extra reward! That's a\l"
	.string "rare item that makes Shiny Pokémon\l"
	.string "more common!$"

JusmailTown_House1_EventScript_EnterBuilding_100BerryTreeReward_Text_5:
# 459 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Thank you for everything you do for the\n"
	.string "Jusmail Town Berry Club, darling. {COLOR GREEN}Keep\l"
	.string "planting{COLOR DARK_GRAY} Berries and caring for them,\l"
	.string "and we'll have {COLOR GREEN}more gifts{COLOR DARK_GRAY} for you.$"

JusmailTown_House1_EventScript_EnterBuilding_200BerryTreeReward_Text_0:
# 487 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Opa, opa!! It's {PLAYER}!$"

JusmailTown_House1_EventScript_EnterBuilding_200BerryTreeReward_Text_1:
# 493 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Berries have never been more popular in\n"
	.string "Ilios, all thanks to you!$"

JusmailTown_House1_EventScript_EnterBuilding_200BerryTreeReward_Text_2:
# 498 "data/maps/JusmailTown_House1/scripts.pory"
	.string "People are coming to Jusmail Town just\n"
	.string "to visit the Berru Club! We've started\l"
	.string "more research and even gotten into\l"
	.string "public education. People are really\l"
	.string "starting to take Berries seriously!$"

JusmailTown_House1_EventScript_EnterBuilding_200BerryTreeReward_Text_3:
# 503 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Nothing we give could repay what you've\n"
	.string "done for us. We've been raising a\l"
	.string "special Pokémon here, so maybe this can\l"
	.string "be a start!$"

JusmailTown_House1_EventScript_EnterBuilding_200BerryTreeReward_Text_4:
# 511 "data/maps/JusmailTown_House1/scripts.pory"
	.string "{PLAYER} received the fruit-eating\n"
	.string "Archen!$"

JusmailTown_House1_EventScript_EnterBuilding_200BerryTreeReward_Text_5:
# 516 "data/maps/JusmailTown_House1/scripts.pory"
	.string "That Archen has {COLOR GREEN}special moves{COLOR DARK_GRAY} learned\n"
	.string "from growing up around all these\l"
	.string "Berries. Make sure to take care of it!$"

JusmailTown_House1_EventScript_EnterBuilding_200BerryTreeReward_Text_6:
# 521 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Here darling, hand me your Trainer Card.\p"
	.string "... ... ...\p"
	.string "There, you've {COLOR GREEN}earned a star{COLOR DARK_GRAY} for your\n"
	.string "Trainer Card. That represents your\l"
	.string "status as an elite Berry grower!\p"
	.string "Thank you for everything you've done,\n"
	.string "{PLAYER}. Remember to never stop\l"
	.string "caring about the environment! And of\l"
	.string "course, keep coming to visit us, darling!$"

JusmailTown_House1_EventScript_CheckBerryTreeRecord_Text_0:
# 538 "data/maps/JusmailTown_House1/scripts.pory"
	.string "0$"

JusmailTown_House1_EventScript_CheckBerryTreeRecord_Text_1:
# 544 "data/maps/JusmailTown_House1/scripts.pory"
	.string "Jusmail Town Berry Club - Berry Tree\n"
	.string "Records\p"
	.string "{PLAYER}'s Trees: {STR_VAR_1}\n"
	.string "Planted!$"
